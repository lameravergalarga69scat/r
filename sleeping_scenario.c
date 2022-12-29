#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<32> Local_19 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	iLocal_4 = vScriptParam_0.z;
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && __LIB_2__::func_821())
	{
		__LIB_0__::func_11();
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_2__::func_822();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_6()
{
	if (PED::IS_PED_INJURED(Global_35) || SCRIPTS::_0x9E4EF615E307FBBE())
	{
		iLocal_0 = 0;
		return;
	}
	func_12(&Local_19);
}

void func_7()
{
	HUD::_DISPLAY_HUD_COMPONENT(2011163970);
	if (__LIB_2__::func_7())
	{
		if (__LIB_10__::func_644() == __LIB_14__::func_217())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		__LIB_12__::func_99(0);
	}
	if (__LIB_0__::func_2() != 0)
	{
		if (__LIB_0__::func_75(&(Local_19.f_19)) || Local_19.f_22)
		{
			GRAPHICS::_0xBB6C707F20D955D4(15f);
			__LIB_0__::func_37(&(Local_19.f_19));
			Local_19.f_22 = 0;
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_19.f_23))
	{
		CAM::DESTROY_CAM(Local_19.f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_19.f_24))
	{
		CAM::DESTROY_CAM(Local_19.f_24, false);
	}
	__LIB_9__::func_987(&Local_19);
	if (Local_19.f_30)
	{
		__LIB_9__::func_106(0);
		Local_19.f_30 = 0;
	}
	if (Local_19.f_31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
		}
		Local_19.f_31 = 0;
	}
}

void func_12(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	char* sVar15;
	if (__LIB_1__::func_313(&(uParam0->f_19), 3.5f) && uParam0->f_22)
	{
		GRAPHICS::_0xBB6C707F20D955D4(15f);
		uParam0->f_22 = 0;
	}
	if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, true) == iLocal_3)
	{
		__LIB_3__::func_65(32);
		__LIB_3__::func_65(64);
		if (!uParam0->f_30)
		{
			__LIB_9__::func_106(1);
			uParam0->f_30 = 1;
		}
		if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
		{
			if (PED::_0x569F1E1237508DEB(Global_35) != joaat("PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR") || PED::_0xC488B8C0E52560D8(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 7, true);
				if (!uParam0->f_31)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
					uParam0->f_31 = 1;
				}
			}
			else if (uParam0->f_31)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				uParam0->f_31 = 0;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				CAM::_0x8370D34BD2E60B73();
				CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-35f, 15f);
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
				}
			}
		}
	}
	else
	{
		if (uParam0->f_30)
		{
			__LIB_9__::func_106(0);
			uParam0->f_30 = 0;
		}
		if (uParam0->f_31)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			uParam0->f_31 = 0;
		}
	}
	switch (uParam0->f_11)
	{
		case 0:
			if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_4, 15, 0, 0);
			}
			func_27(uParam0, 1);
			break;
		case 1:
			if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_4, false))
				{
					return;
				}
			}
			func_27(uParam0, 2);
			break;
		case 2:
			func_28(uParam0);
			if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				iVar1 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iLocal_3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					switch (uParam0->f_32)
					{
						case 1:
							if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
							{
								uParam0->f_32 = 2;
								uParam0->f_33 = MISC::GET_GAME_TIMER();
							}
							break;
						case 2:
							MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar1), &vVar2, &vVar5);
							vVar2.f_1 = (vVar2.y + 0.5f);
							vVar5.f_1 = (vVar5.y - 0.5f);
							fVar8 = (vVar5.x - vVar2.x);
							vVar2.x = 0f;
							vVar5.x = 0f;
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, vVar2), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, vVar5), fVar8, false, true, 0))
							{
								uParam0->f_32 = 0;
							}
							else if (MISC::GET_GAME_TIMER() >= uParam0->f_33 + 10000)
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar1, true);
								uParam0->f_32 = 0;
							}
							break;
					}
				}
				else
				{
					uParam0->f_32 = 0;
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && func_29(uParam0))
			{
				(*uParam0)[4] = __LIB_1__::func_282("SLEEP", joaat("INPUT_CONTEXT_Y"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				__LIB_4__::func_12((*uParam0)[4], 1057677739, 0, 1);
				if (__LIB_0__::func_2() != 0)
				{
					if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
					{
						(*uParam0)[7] = __LIB_1__::func_282("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						__LIB_4__::func_12((*uParam0)[7], 1057677739, 0, 1);
					}
					else if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && !Global_1327590.f_19736)
					{
						(*uParam0)[7] = __LIB_1__::func_282("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						__LIB_4__::func_12((*uParam0)[7], 1057677739, 0, 1);
					}
				}
				if (Global_1327590.f_19683 < 2 && __LIB_7__::func_439())
				{
					__LIB_16__::func_769();
					Global_1327590.f_19683++;
				}
				func_27(uParam0, 3);
			}
			else if ((TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3 && !TASK::_0x0C3CB2E600C8977D(Global_35, 1)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				uParam0->f_13 = func_35();
				func_27(uParam0, 5);
			}
			break;
		case 3:
			if (!func_29(uParam0))
			{
				__LIB_9__::func_987(uParam0);
				func_27(uParam0, 2);
				return;
			}
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_36(), 2);
			if (func_37(uParam0))
			{
			}
			if (!__LIB_0__::func_139((*uParam0)[4]))
			{
				(*uParam0)[4] = __LIB_1__::func_282("SLEEP", joaat("INPUT_CONTEXT_Y"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				__LIB_4__::func_12((*uParam0)[4], 1057677739, 0, 1);
			}
			else if (__LIB_0__::func_567((*uParam0)[4], 1))
			{
				if (__LIB_0__::func_644(8388608))
				{
					__LIB_9__::func_805(4);
				}
				__LIB_4__::func_226(16777216);
				__LIB_1__::func_748(uParam0[4], 1, 1);
				__LIB_1__::func_748(uParam0[7], 1, 1);
				(*uParam0)[5] = __LIB_11__::func_570("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_4__::func_12((*uParam0)[5], 1323335645, 0, 1);
				uParam0->f_13 = func_35();
				func_27(uParam0, 4);
				return;
			}
			if ((iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED")) && __LIB_0__::func_2() != 0)
			{
				if (!__LIB_0__::func_139((*uParam0)[7]))
				{
					if (!Global_1327590.f_19736)
					{
						if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
						{
							(*uParam0)[7] = __LIB_1__::func_282("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
							__LIB_4__::func_12((*uParam0)[7], 1057677739, 0, 1);
						}
						else if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
						{
							(*uParam0)[7] = __LIB_1__::func_282("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
							__LIB_4__::func_12((*uParam0)[7], 1057677739, 0, 1);
						}
					}
				}
				else if (__LIB_0__::func_567((*uParam0)[7], 1))
				{
					__LIB_4__::func_226(16777216);
					__LIB_1__::func_748(uParam0[7], 1, 1);
					__LIB_1__::func_748(uParam0[4], 1, 1);
					uParam0->f_13 = func_35();
					if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
					{
						func_45(uParam0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
						TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR", 0, true, true, iLocal_4, false, -1f, false);
						GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1f, false);
					}
					func_27(uParam0, 5);
					return;
				}
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3)
				{
					uParam0->f_13 = func_35();
					__LIB_1__::func_748(uParam0[4], 1, 1);
					__LIB_1__::func_748(uParam0[7], 1, 1);
					func_27(uParam0, 5);
				}
				else
				{
					__LIB_1__::func_748(uParam0[4], 1, 1);
					__LIB_1__::func_748(uParam0[7], 1, 1);
					func_27(uParam0, 2);
				}
			}
			break;
		case 4:
			func_46(uParam0, 1);
			break;
		case 5:
			if (func_37(uParam0))
			{
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_23) && CAM::IS_CAM_ACTIVE(uParam0->f_23))
				{
					CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
				}
			}
			if (!__LIB_0__::func_163(Global_35, -76381094) && !(TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3))
			{
				if (!__LIB_1__::func_652())
				{
					HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				}
				func_27(uParam0, 2);
				return;
			}
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_652())
				{
					HUD::_HIDE_HUD_COMPONENT(2011163970);
				}
			}
			if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			{
				if (!__LIB_1__::func_652())
				{
					HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				}
				__LIB_9__::func_987(uParam0);
				func_27(uParam0, 2);
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
			{
				func_49(uParam0);
				func_27(uParam0, 6);
			}
			break;
		case 6:
			if (!TASK::_0xEC7E480FF8BD0BED(Global_35) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
			{
				if (__LIB_5__::func_846() == 8 && func_51(Global_35))
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 1057677739, func_36(), 0);
				}
				else
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_36(), 0);
				}
			}
			if (func_37(uParam0))
			{
				MISC::SET_BIT(&(Global_1956580.f_1), 2);
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 3);
				if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") && !CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			iVar0 = PED::_0x569F1E1237508DEB(Global_35);
			if (((((iVar0 != joaat("PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR") && iVar0 != joaat("WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR")) && iVar0 != joaat("WORLD_PLAYER_SLEEP_GROUND_ARM_MALE_B")) && iVar0 != joaat("PROP_PLAYER_PRPTY_SAVE_GAME_MALE")) && iVar0 != joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC")) || PED::_0xC488B8C0E52560D8(Global_35))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			else if (uParam0->f_29)
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				uParam0->f_29 = 0;
			}
			if (__LIB_0__::func_2() == -1)
			{
				if (__LIB_0__::func_572((*uParam0)[4], 0))
				{
					if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0))
					{
						__LIB_1__::func_221((*uParam0)[4], 0, 1);
					}
				}
				else if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					__LIB_1__::func_221((*uParam0)[4], 1, 1);
				}
				if (__LIB_1__::func_732((*uParam0)[4], 1))
				{
					__LIB_16__::func_770();
					__LIB_9__::func_987(uParam0);
					(*uParam0)[5] = __LIB_11__::func_570("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_4__::func_12((*uParam0)[5], 1323335645, 0, 1);
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					func_27(uParam0, 7);
				}
				else if (__LIB_1__::func_732((*uParam0)[6], 1))
				{
					__LIB_16__::func_770();
					__LIB_4__::func_229(16777216);
					__LIB_9__::func_987(uParam0);
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					func_27(uParam0, 15);
				}
				else if (__LIB_1__::func_732((*uParam0)[8], 1))
				{
					__LIB_16__::func_770();
					__LIB_9__::func_987(uParam0);
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					uParam0->f_29 = 1;
				}
				else if (__LIB_0__::func_139((*uParam0)[9]))
				{
					if (__LIB_5__::func_645((*uParam0)[9], 1) && __LIB_12__::func_163())
					{
						__LIB_0__::func_7(&Global_43907, 4);
					}
					__LIB_1__::func_221((*uParam0)[8], __LIB_12__::func_98() != 1, 1);
					__LIB_1__::func_221((*uParam0)[9], __LIB_12__::func_98() != 1, 1);
					__LIB_1__::func_221((*uParam0)[6], __LIB_12__::func_98() != 1, 1);
					__LIB_1__::func_221((*uParam0)[4], __LIB_12__::func_98() != 1, 1);
				}
			}
			else if (__LIB_1__::func_732((*uParam0)[4], 1))
			{
				__LIB_9__::func_987(uParam0);
				(*uParam0)[5] = __LIB_11__::func_570("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				func_27(uParam0, 7);
			}
			else if (__LIB_1__::func_732((*uParam0)[5], 1))
			{
				__LIB_9__::func_987(uParam0);
				func_27(uParam0, 3);
			}
			if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			{
				if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
				{
					uParam0->f_33 = MISC::GET_GAME_TIMER();
					uParam0->f_32 = 1;
				}
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3)
				{
					func_62(uParam0);
				}
				else
				{
					func_63(uParam0);
				}
				__LIB_16__::func_770();
				HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				uParam0->f_29 = 0;
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				__LIB_9__::func_987(uParam0);
				func_27(uParam0, 2);
			}
			break;
		case 7:
			func_46(uParam0, 0);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_652())
				{
					if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
					{
						MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
						__LIB_9__::func_987(uParam0);
						func_27(uParam0, 2);
					}
				}
			}
			break;
		case 8:
			if (!Global_1327590.f_19737)
			{
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, true) == iLocal_3 && (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1652513209)))
				{
					Global_1327590.f_19737 = 1;
				}
			}
			else if (Global_1327590.f_19738)
			{
				uParam0->f_14 = MISC::GET_GAME_TIMER();
				func_27(uParam0, 9);
			}
			break;
		case 9:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			if (func_37(uParam0))
			{
				if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_17, true, false) || ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_17, false))) || iLocal_4 != joaat("PROP_PLAYER_SLEEP_BED"))
				{
					if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && !Global_1327590.f_19737)
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_17, false) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_17, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_17);
						}
						else if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -954213463))
						{
							uParam0->f_12 = 1;
							uParam0->f_14 = MISC::GET_GAME_TIMER();
						}
						if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_17, false) && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
						{
							uParam0->f_18 = -1;
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
							__LIB_9__::func_817(4);
							func_27(uParam0, 2);
						}
					}
					if ((MISC::GET_GAME_TIMER() - uParam0->f_14) > 500)
					{
						CAM::DO_SCREEN_FADE_OUT(500);
						AUDIO::_0x6339C1EA3979B5F7("Fade_To_Black", "Sleep_Respawn_Scenes");
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
				else
				{
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					uParam0->f_12 = 1;
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1392040.f_7 == -15)
				{
					Global_1392040.f_7 = __LIB_0__::func_23();
				}
				iVar9 = Global_1392040.f_7;
				__LIB_1__::func_446(&iVar9, 0, 0, 3, 0, 0, 0, 0);
				if (!__LIB_3__::func_77(iVar9))
				{
					Global_1392040.f_8++;
				}
				else
				{
					Global_1392040.f_8 = 0;
				}
				Global_1327590.f_19737 = 0;
				Global_1327590.f_19738 = 0;
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
				if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 0, false, true, 0, false, -1f, false);
				}
				else if (iLocal_4 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR", 0, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, false, true, 0, false, -1f, false);
				}
				func_27(uParam0, 10);
			}
			break;
		case 10:
			if (__LIB_0__::func_2() == 0)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
				if (func_37(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
					}
					else
					{
						uParam0->f_12 = 1;
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					__LIB_9__::func_987(uParam0);
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					func_27(uParam0, 2);
					return;
				}
				if (MISC::GET_GAME_TIMER() > uParam0->f_14 + 2500)
				{
					func_27(uParam0, 6);
				}
			}
			else
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				if (func_37(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
						{
							PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), joaat("RESTING_TRANS_SLEEP_W_HAT"), 3f);
						}
						CAM::DO_SCREEN_FADE_OUT(2000);
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					AUDIO::_0x9428447DED71FC7E("Sleep_Respawn_Scenes");
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					func_27(uParam0, 2);
					return;
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_16))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_16, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_16, true))
							{
								ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_16);
							}
						}
						else if (MISC::GET_GAME_TIMER() > uParam0->f_14 + 2500)
						{
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_16);
							__LIB_9__::func_817(4);
							AUDIO::_0xAC84686C06184B0D("Clouds", "Sleep_Respawn_Scenes");
							AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_START");
							if (func_51(Global_35))
							{
								iVar11 = __LIB_0__::func_317();
								iVar12 = func_69(iVar11, uParam0->f_13);
								iVar13 = func_70(iVar11, uParam0->f_13);
								CLOCK::ADVANCE_CLOCK_TIME_TO(iVar12, iVar13, 0);
								TELEMETRY::_0xF9F14080D80937BD(iVar12);
								if (iVar12 > 9 || iVar12 <= 1)
								{
									iVar10 = 1;
								}
								if (((__LIB_5__::func_862(10, 0) >= 3 && iVar11 != 8) && iVar11 != 7) && iVar11 != 5)
								{
									fVar14 = __LIB_6__::func_39(12f, 2);
									__LIB_9__::func_278(18, fVar14);
								}
							}
							else
							{
								CLOCK::ADVANCE_CLOCK_TIME_TO(uParam0->f_13, 0, 0);
								TELEMETRY::_0xF9F14080D80937BD(uParam0->f_13);
								if (!__LIB_0__::func_296(0, 0, 1))
								{
									MISC::SET_RANDOM_WEATHER_TYPE(true, true);
								}
							}
							__LIB_16__::func_772();
							__LIB_12__::func_581(0, iVar10, 0);
							func_77();
							__LIB_1__::func_309(-1, 0, 0, 0, 0);
							if (!Global_1327590.f_19736)
							{
								__LIB_6__::func_215();
							}
							__LIB_2__::func_761(Global_36, __LIB_0__::func_514(__LIB_1__::func_923(), 100f, 300f), 0, 0);
							__LIB_10__::func_725(14, 1);
							__LIB_18__::func_517();
							Global_1935183.f_26 = 1;
							PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							uParam0->f_14 = MISC::GET_GAME_TIMER();
							func_27(uParam0, 11);
						}
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_37(uParam0))
			{
				if (__LIB_0__::func_2() != 0)
				{
					PED::_0x4759CC730F947C81();
					if (!__LIB_2__::func_7())
					{
						__LIB_12__::func_99(1);
					}
					__LIB_0__::func_322(Global_36);
					Global_40.f_9 = 0;
					__LIB_0__::func_703(0, 7);
				}
			}
			if ((!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN()) && (MISC::GET_GAME_TIMER() - uParam0->f_14) > 250)
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (__LIB_0__::func_2() != 0)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				CAM::_0x8910C24B7E0046EC();
				MISC::_0xA3A8926951471C82();
				if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_16, 0) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_16))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					AUDIO::_0x9428447DED71FC7E("Sleep_Respawn_Scenes");
					AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_STOP");
					__LIB_14__::func_442(0f);
					if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
					{
						HUD::_DISPLAY_HUD_COMPONENT(2011163970);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_15, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 0f, 0f, (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) + 90f), 2);
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_15);
					}
					else if (iLocal_4 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
					{
						__LIB_0__::func_489(98.2971f, -4.2336f);
						HUD::_DISPLAY_HUD_COMPONENT(2011163970);
						PED::_0xEC6935EBE0847B90(Global_35, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), -5f, 0f, 0f));
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
					}
					if (iLocal_4 != joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
					{
						__LIB_0__::func_489(0, 0);
					}
					if (func_51(Global_35))
					{
						sVar15 = func_89(__LIB_0__::func_317(), uParam0->f_13);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar15))
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar15);
							uParam0->f_22 = 1;
						}
					}
					__LIB_0__::func_145(0, 0);
					__LIB_0__::func_188(1);
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					__LIB_1__::func_199(0);
					func_27(uParam0, 12);
				}
			}
			else
			{
				func_27(uParam0, 12);
			}
			break;
		case 12:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (__LIB_0__::func_2() != 0)
			{
				if (func_37(uParam0))
				{
					if (__LIB_2__::func_7())
					{
						__LIB_12__::func_99(0);
					}
					Global_1392040.f_7 = __LIB_0__::func_23();
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
				}
				__LIB_12__::func_181(1);
				__LIB_12__::func_590();
			}
			if (CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_IN())
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), joaat("SLEEP_TRANS_RESTING_W_HAT"), 6f);
				func_27(uParam0, 5);
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_14) > 500)
			{
				if (uParam0->f_22)
				{
					__LIB_1__::func_148(&(uParam0->f_19));
				}
				CAM::DO_SCREEN_FADE_IN(1500);
			}
			break;
		case 14:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				__LIB_9__::func_987(uParam0);
				func_27(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			if (func_37(uParam0))
			{
				iVar0 = PED::_0x569F1E1237508DEB(Global_35);
				if (PED::_0xC488B8C0E52560D8(Global_35) || (iVar0 != joaat("WORLD_PLAYER_SLEEP_BEDROLL_CRAFTING_ARTHUR") && iLocal_4 == joaat("WORLD_PLAYER_SLEEP_BEDROLL")))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("DOCUMENT_PLAYER_JOURNAL"), 0))
					{
						INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("DOCUMENT_PLAYER_JOURNAL"));
					}
					func_97(joaat("DOCUMENT_PLAYER_JOURNAL"), 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if ((!__LIB_7__::func_771(joaat("DOC_PLAYER_JOURNAL")) && !__LIB_0__::func_100()) && (MISC::GET_GAME_TIMER() - uParam0->f_14) > 1000)
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), joaat("TRANS_STOP_USE_ITEM"), 3f);
				func_27(uParam0, 5);
			}
			break;
		case 15:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			{
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				__LIB_9__::func_987(uParam0);
				func_27(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			break;
		case 13:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				__LIB_9__::func_987(uParam0);
				func_27(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			if (func_37(uParam0))
			{
				iVar0 = PED::_0x569F1E1237508DEB(Global_35);
				if (PED::_0xC488B8C0E52560D8(Global_35) || (iVar0 != joaat("WORLD_PLAYER_SLEEP_BEDROLL_CRAFTING_ARTHUR") && iLocal_4 == joaat("WORLD_PLAYER_SLEEP_BEDROLL")))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					func_97(joaat("CUSTOM_SATCHEL"), 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if (!__LIB_3__::func_63())
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), joaat("TRANS_STOP_USE_ITEM"), 3f);
				func_27(uParam0, 5);
			}
			break;
		case 16:
			if (func_37(uParam0))
			{
				if (!__LIB_1__::func_652())
				{
					HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_15))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_17))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
				}
				__LIB_9__::func_987(uParam0);
			}
			break;
	}
}

void func_27(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
}

void func_28(var uParam0)
{
	if (iLocal_4 != joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return;
	}
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		if (!uParam0->f_28)
		{
			if (__LIB_1__::func_313(&(uParam0->f_25), 2.5f))
			{
				func_104(uParam0);
			}
		}
	}
	else if (!uParam0->f_28 && !PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_3))
	{
		func_63(uParam0);
	}
	if (uParam0->f_28)
	{
		if (__LIB_1__::func_313(&(uParam0->f_25), 2.1f))
		{
			CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
			CAM::DETACH_CAM(uParam0->f_23);
		}
	}
}

bool func_29(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	if (!__LIB_0__::func_644(128))
	{
		if (__LIB_2__::func_776())
		{
			return false;
		}
	}
	if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return false;
	}
	if (__LIB_8__::func_67() >= 1f)
	{
		return false;
	}
	if (__LIB_0__::func_644(1073741824 /* Float: 2f */) || __LIB_0__::func_644(16777216))
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		return false;
	}
	iVar0 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (iVar0 != Global_35)
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1))
			{
				return false;
			}
		}
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return false;
	}
	if (!Global_1327590.f_19736)
	{
		if (func_108(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true) + Vector(0.5f, 0f, 0f), 1f, 1, Global_35, 0, 0))
		{
			return false;
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_15))
	{
		if (!ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_15, 0))
		{
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			return false;
		}
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
	{
		return false;
	}
	if (TASK::_IS_SCENARIO_POINT_FLAG_SET(iLocal_3, 8))
	{
		return false;
	}
	fVar1 = __LIB_1__::func_992(Global_35, func_30(), 1);
	if (fVar1 > __LIB_0__::func_514(((iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && __LIB_5__::func_846() != 8) && func_51(Global_35)), 1.5f, 1f))
	{
		return false;
	}
	if (!__LIB_1__::func_374(Global_35, func_30(), __LIB_0__::func_514((iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && func_51(Global_35)), -0.25f, 0f)) && fVar1 > func_111())
	{
		return false;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 2f))
	{
		return false;
	}
	iVar2 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iLocal_3);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iVar2))
		{
			return false;
		}
		if (FIRE::_0xCDC25355C0D65963(iVar2))
		{
			return false;
		}
		if (FIRE::_0xA4454592DCF7C992(iVar2))
		{
			return false;
		}
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 1f) > 0)
	{
		return false;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		return false;
	}
	return true;
}

Vector3 func_30()
{
	vector3 vVar0;
	switch (iLocal_4)
	{
		case joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"):
			vVar0 = { 0.29f, 1.5f, 1f };
			break;
		case joaat("PROP_PLAYER_SLEEP_BED"):
			if ((iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && __LIB_5__::func_846() == 8) && func_51(Global_35))
			{
				vVar0 = { 0f, 0.15f, 0f };
			}
			else
			{
				vVar0 = { 0f, 0.5f, 0f };
			}
			break;
		default:
			vVar0 = { 0f, 0f, 0.5f };
			break;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), vVar0);
}

int func_35()
{
	if (__LIB_2__::func_117(1))
	{
		return 12;
	}
	else if (__LIB_2__::func_117(2))
	{
		return 18;
	}
	return 6;
}

char* func_36()
{
	switch (iLocal_4)
	{
		case joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"):
		case joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS"):
			return "CMP_SLP_TNT";
		case joaat("WORLD_PLAYER_SLEEP_GROUND"):
		case joaat("WORLD_PLAYER_SLEEP_BEDROLL"):
			if (__LIB_7__::func_772(67108864) && __LIB_0__::func_644(8388608))
			{
				return "CMP_SLP_DIRT";
			}
			else
			{
				return "CMP_SLP_GND";
			}
			break;
		case joaat("PROP_PLAYER_SLEEP_BED"):
			return "CMP_SLP_BED";
	}
	return "CMP_SLP_BED";
}

bool func_37(var uParam0)
{
	if (uParam0->f_12)
	{
		uParam0->f_12 = 0;
		return true;
	}
	return false;
}

void func_45(var uParam0)
{
	vector3 vVar0;
	if (iLocal_4 != joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
	{
		CAM::DESTROY_CAM(uParam0->f_24, false);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 0.5f, -1.25f, 0.75f) };
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 51.28f, false, 2);
	uParam0->f_24 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 61.28f, false, 2);
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_24, true);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_23, uParam0->f_24, 5000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_46(var uParam0, bool bParam1)
{
	char* sVar0;
	bool bVar1;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	func_122(1);
	__LIB_1__::func_538(1);
	if (!TASK::_0x02EBBB3989B7E695(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		uParam0->f_14 = MISC::GET_GAME_TIMER();
		if (bParam1)
		{
			if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				func_45(uParam0);
				sVar0 = "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR";
			}
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, sVar0, 0, true, false, 0, false, -1f, false);
		}
		func_27(uParam0, 10);
	}
	else
	{
		func_124(uParam0);
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1323335645, "SLEEP", 1, 0, 0, 0);
		bVar1 = false;
		if (__LIB_1__::func_732((*uParam0)[0], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 6;
		}
		else if (__LIB_1__::func_732((*uParam0)[1], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 12;
		}
		else if (__LIB_1__::func_732((*uParam0)[2], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 18;
		}
		else if (__LIB_1__::func_732((*uParam0)[3], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 0;
		}
		if (bVar1)
		{
			uParam0->f_18 = -1;
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_16))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
			}
			uParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE(func_125(uParam0->f_13), 0, 0, false, true);
			uParam0->f_14 = MISC::GET_GAME_TIMER();
			__LIB_9__::func_987(uParam0);
			if (bParam1)
			{
				if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1f, false);
				}
			}
			if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_15))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_17))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
				}
				if (func_126() && !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_hat_action", false, true);
				}
				else
				{
					uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_no_hat_action", false, true);
				}
				uParam0->f_17 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_17);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_17, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_15);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_15, "player", Global_35, 0);
				if (Global_1327590.f_19736)
				{
					if (iLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
					{
						if (!PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_3))
						{
							TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1f, false);
						}
					}
					func_27(uParam0, 8);
				}
				else
				{
					func_27(uParam0, 9);
				}
			}
			else
			{
				func_27(uParam0, 9);
			}
		}
		else if ((__LIB_1__::func_732((*uParam0)[5], 1) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1)) || PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			uParam0->f_18 = -1;
			__LIB_9__::func_817(4);
			__LIB_9__::func_987(uParam0);
			if (uParam0->f_11 == 7)
			{
				func_27(uParam0, 5);
			}
			else
			{
				func_27(uParam0, 2);
			}
		}
	}
}

void func_49(var uParam0)
{
	if (__LIB_0__::func_2() != 0 && iLocal_4 != joaat("PROP_PLAYER_PRPTY_SAVE_GAME"))
	{
		(*uParam0)[4] = __LIB_1__::func_745("SLEEP", joaat("INPUT_CONTEXT_Y"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_4__::func_12((*uParam0)[4], 1057677739, 0, 1);
		if (__LIB_0__::func_644(8388608) && !__LIB_4__::func_233(1024))
		{
			(*uParam0)[6] = __LIB_1__::func_745("CAMP_RECIPE", joaat("INPUT_CONTEXT_X"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			__LIB_4__::func_12((*uParam0)[6], 1057677739, 0, 1);
			if (__LIB_19__::func_610())
			{
				(*uParam0)[9] = __LIB_1__::func_745("CAMP_FT_PROMPT", joaat("INPUT_CONTEXT_A"), Global_35, 1, 0, 0, 0, 2, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_4__::func_12((*uParam0)[9], 1057677739, 0, 1);
			}
		}
		(*uParam0)[8] = __LIB_1__::func_745("LEAVE", joaat("INPUT_CONTEXT_B"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_4__::func_12((*uParam0)[8], 1057677739, 0, 1);
	}
}

bool func_51(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	return func_129(ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
}

void func_62(var uParam0)
{
	if (iLocal_4 != joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return;
	}
	__LIB_1__::func_148(&(uParam0->f_25));
	uParam0->f_28 = 0;
}

void func_63(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
	{
		CAM::DESTROY_CAM(uParam0->f_24, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
}

int func_69(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 12:
					return 11;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 6:
					return 7;
				default:
					break;
			}
			break;
	}
	return iParam1;
}

int func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 6:
					return 10;
				case 18:
					return 45;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 18:
					return 30;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 0:
					return 30;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 12:
					return 50;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 18:
					return 20;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 12:
					return 15;
				case 18:
					return 40;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_77()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_31(iVar0) && __LIB_0__::func_866(iVar0, 1))
		{
			__LIB_19__::func_539(iVar0);
		}
		iVar0++;
	}
}

char* func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_colter_morning";
				case 12:
					return "wakeUp_colter_afternoon";
				case 18:
					return "wakeUp_colter_evening";
				case 0:
					return "wakeUp_colter_night";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_horseshoe_morning";
				case 12:
					return "wakeUp_horseshoe_afternoon";
				case 18:
					return "wakeUp_horseshoe_evening";
				case 0:
					return "wakeUp_horseshoe_night";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_clemensPoint_morning";
				case 12:
					return "wakeUp_clemensPoint_afternoon";
				case 18:
					return "wakeUp_clemensPoint_evening";
				case 0:
					return "wakeUp_clemensPoint_night";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_shadyBelle_morning";
				case 12:
					return "wakeUp_shadyBelle_afternoon";
				case 18:
					return "wakeUp_shadyBelle_evening";
				case 0:
					return "wakeUp_shadyBelle_night";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_guarma_morning";
				case 12:
					return "wakeUp_guarma_afternoon";
				case 18:
					return "wakeUp_guarma_evening";
				case 0:
					return "wakeUp_guarma_night";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_lakay_morning";
				case 12:
					return "wakeUp_lakay_afternoon";
				case 18:
					return "wakeUp_lakay_evening";
				case 0:
					return "wakeUp_lakay_night";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_beaverHollow_morning";
				case 12:
					return "wakeUp_beaverHollow_afternoon";
				case 18:
					return "wakeUp_beaverHollow_evening";
				case 0:
					return "wakeUp_beaverHollow_night";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_beechersHopeHouse_morning";
				case 12:
					return "wakeUp_beechersHopeHouse_afternoon";
				case 18:
					return "wakeUp_beechersHopeHouse_evening";
				case 0:
					return "wakeUp_beechersHopeHouse_night";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_97(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	var uVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	if (__LIB_7__::func_775())
	{
		Global_1935689.f_10191 = iParam0;
		__LIB_1__::func_698(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (__LIB_6__::func_126())
	{
		HUD::_0xBFFF81E12A745A5F();
		__LIB_5__::func_905(iParam0, 0);
		__LIB_1__::func_698(__LIB_7__::func_776(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_189(iParam0, bParam4))
	{
		return 0;
	}
	if (__LIB_19__::func_389(iParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (__LIB_0__::func_192(iParam0, -2081717885))
	{
		__LIB_16__::func_774(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (__LIB_0__::func_192(iParam0, -1909684001))
	{
		__LIB_9__::func_181(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (__LIB_0__::func_192(iParam0, 587975446))
	{
		__LIB_7__::func_777(iParam0, Var10);
	}
	else if (__LIB_0__::func_192(iParam0, 566155764))
	{
		if (!__LIB_0__::func_0(iParam0))
		{
			return 0;
		}
	}
	if (func_196(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (__LIB_0__::func_192(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((__LIB_0__::func_192(iParam0, -1472964441) || __LIB_0__::func_192(iParam0, -228153877)) || __LIB_0__::func_192(iParam0, 566155764))
	{
	}
	else if (__LIB_0__::func_192(iParam0, 1919582297))
	{
		if (((__LIB_1__::func_652() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return 0;
		}
		switch (iParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 0);
		bVar32 = false;
	}
	else if (__LIB_0__::func_356(iParam0) == joaat("EMOTE"))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = __LIB_7__::func_778(Global_1058888.f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 0);
		iVar33 = 1;
	}
	else if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if (__LIB_0__::func_357(iParam0) == -999503751)
		{
			if (__LIB_0__::func_2() != -1)
			{
				return iVar33;
			}
			if (!__LIB_7__::func_842(iParam0))
			{
				__LIB_0__::func_45("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = __LIB_9__::func_992(7, iParam0);
			bVar36 = __LIB_9__::func_992(1, iParam0);
			if (bVar36 && !bVar35)
			{
				__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!__LIB_7__::func_830(7))
			{
				__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 0))
				{
					__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = __LIB_0__::func_449(iParam0);
			if (iVar30 == -1)
			{
				__LIB_1__::func_452(20, iParam0, 8, 0, 0);
			}
			else
			{
				__LIB_1__::func_452(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (__LIB_0__::func_357(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					__LIB_5__::func_386(iParam0, 0);
					return iVar33;
				case -2061583405:
					__LIB_9__::func_997(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == Global_1946804.f_1497.f_1[23 /*3*/])
					{
						__LIB_1__::func_775(Global_35, joaat("CLOTHING_ITEM_GLOVES_NONE"), 0, -358215195, 1, 1, 1, 0, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						__LIB_1__::func_704(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						__LIB_1__::func_704(iParam0, 1);
					}
					break;
			}
			__LIB_1__::func_775(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("CUSTOM_SATCHEL"):
				__LIB_3__::func_739(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (__LIB_0__::func_2() != -1)
				{
				}
				else if (!__LIB_7__::func_842(iParam0))
				{
					__LIB_0__::func_45("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = __LIB_9__::func_992(7, iParam0);
					bVar36 = __LIB_9__::func_992(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
						{
							MAP::REMOVE_BLIP(&Global_36559);
						}
						Global_36559 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_BLIP_SET_MODIFIER(Global_36559, 673950256);
						__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, 1);
					}
					else if (!__LIB_7__::func_830(7))
					{
						__LIB_0__::func_45("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 0))
						{
							__LIB_0__::func_45("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36559))
							{
								MAP::REMOVE_BLIP(&Global_36559);
							}
							Global_36559 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_BLIP_SET_MODIFIER(Global_36559, 673950256);
							__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							__LIB_4__::func_709(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						__LIB_9__::func_182();
						Jump @2541; //curOff = 1643
						if (!__LIB_0__::func_27(Global_1392040.f_1, 1) || __LIB_0__::func_27(Global_1392040.f_1, 512))
						{
							if (__LIB_0__::func_2() == -1)
							{
								if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (__LIB_1__::func_200(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (__LIB_2__::func_774(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!__LIB_7__::func_842(iParam0) || ((!__LIB_0__::func_48(Global_35, __LIB_0__::func_398(7), __LIB_1__::func_136(7), 1) || __LIB_5__::func_917() != 0) && !__LIB_0__::func_48(Global_35, Global_1900383.f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if (__LIB_0__::func_27(iVar31, 128) && Global_1357522.f_10[1])
									{
										Global_1357522.f_10[1] = 0;
									}
									else if (!__LIB_0__::func_27(iVar31, 128) && Global_1357522.f_10[0])
									{
										Global_1357522.f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									__LIB_4__::func_709(Var10, 2);
								}
							}
							else if (__LIB_7__::func_842(joaat("KIT_CAMP")))
							{
								if (__LIB_9__::func_982(1))
								{
									__LIB_9__::func_985(2);
								}
								else if (__LIB_7__::func_820(1))
								{
									__LIB_0__::func_45("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										__LIB_0__::func_45("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										__LIB_0__::func_45("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									__LIB_12__::func_191(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								__LIB_0__::func_45("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								__LIB_12__::func_191(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else
							{
								__LIB_0__::func_45("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040.f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_BINOCULARS"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_BINOCULARS"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_CAMERA"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = __LIB_7__::func_821(__LIB_0__::func_12());
						iVar28 = __LIB_7__::func_779();
						if (__LIB_0__::func_69(iVar27))
						{
							if (iVar27 == iVar28 && !__LIB_7__::func_780())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							__LIB_0__::func_45("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_230(iParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						__LIB_1__::func_240(497, 1);
						Jump @2541; //curOff = 2388
						__LIB_9__::func_183(1);
						Jump @2541; //curOff = 2396
						func_230(iParam0, 1, 0, 562618531, 0);
						func_233(joaat("PROVISION_BEAUS_GIFT_2"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = joaat("DOCUMENT_NATIVE_AMERICAN_JOURNAL");
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						__LIB_4__::func_709(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar33;
				default:
					break;
		}
	}
}

void func_104(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (iLocal_4 != joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
	{
		CAM::DESTROY_CAM(uParam0->f_24, false);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 2f, 3.25f, 0.75f) };
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, 0f, 0f, (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) + 125f), 51.28f, false, 2);
	vVar3 = { 1.1081f, 1.7384f, 0.4631f };
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_23, Global_35, vVar3, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_23, Global_35, -0.7722f, -0.593f, 0.2919f, true);
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_23, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		__LIB_0__::func_489(130.648f, 1.3841f);
	}
	__LIB_1__::func_148(&(uParam0->f_25));
	uParam0->f_28 = 1;
}

bool func_108(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(Global_43617))
	{
		Global_43617 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::_CLEAR_ITEMSET(Global_43617);
	iVar0 = ENTITY::_0x59B57C4B06531E1E(vParam0, uParam3, Global_43617, iParam4);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43617);
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
		if (iParam7 == 1 && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
		}
		else if (iParam5 != iVar3 && iParam6 != iVar3)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

float func_111()
{
	switch (iLocal_4)
	{
		case joaat("WORLD_PLAYER_SLEEP_BEDROLL"):
			return 0.5625f;
	}
	return 0.25f;
}

void func_122(bool bParam0)
{
	if (bParam0)
	{
		Global_1913814.f_209[1] = 1;
	}
	Global_1913814.f_209[0] = 1;
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_124(var uParam0)
{
	int iVar0;
	bool bVar1;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (uParam0->f_18 != iVar0)
	{
		if (uParam0->f_18 == -1)
		{
			bVar1 = true;
		}
		uParam0->f_18 = iVar0;
		if (!func_238(uParam0) && bVar1)
		{
			__LIB_0__::func_45("CMP_SLP_SOON", 10000, 0, 0, 0, 1);
		}
	}
}

var func_125(int iParam0)
{
	char* sVar0;
	char* sVar1;
	var uVar2;
	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = __LIB_0__::func_67(__LIB_0__::func_98(func_239(iParam0), func_240(), 1, 63));
	uVar2 = __LIB_0__::func_67(__LIB_0__::func_98(sVar0, sVar1, 1, 63));
	return uVar2;
}

bool func_126()
{
	int iVar0;
	if (!__LIB_4__::func_385(&Global_35))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_802(1108822547);
	switch (iVar0)
	{
		case joaat("CLOTHING_HL_PLAYER_HAT_054_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_002_2"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_008"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_001_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_011_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_004_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_009_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_028_1"):
		case joaat("CLOTHING_ITEM_SP_VALSHERIFF_HAT_000"):
		case joaat("CLOTHING_HL_PLAYER_HAT_038_1"):
		case joaat("CLOTHING_ITEM_HAT_PZERO_000"):
		case joaat("CLOTHING_SP_CIVIL_WAR_HAT_000_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_086"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_000_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_008_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_048_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_048"):
		case joaat("CLOTHING_HL_PLAYER_HAT_063_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_063_ALT01"):
		case joaat("CLOTHING_HL_PLAYER_HAT_015_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_068"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_007_1"):
		case joaat("CLOTHING_SP_SCARECROW_01_HAT_000_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_010_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_055"):
		case joaat("CLOTHING_HL_PLAYER_HAT_061_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_033_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_100"):
		case joaat("CLOTHING_HL_PLAYER_HAT_067_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_002_ALT02"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_007_ALT02"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_052"):
		case joaat("CLOTHING_SP_CHINESE_LABOR_HAT_000_1"):
		case joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"):
		case -733535491: /* GXTEntry: "Plantation Slouch Hat" */
		case joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_001_000"):
		case joaat("CLOTHING_HL_PLAYER_HAT_066_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_006_ALT02"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_017_ALT02"):
		case joaat("CLOTHING_HL_PLAYER_HAT_012_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_045"):
		case joaat("CLOTHING_HL_PLAYER_HAT_070_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_064_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_041_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_010_1"):
		case joaat("CLOTHING_SP_DEAD_MINER_HAT_000_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_034_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_030_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_006_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_047_ALT02"):
		case joaat("CLOTHING_HL_PLAYER_HAT_003_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_045_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_069_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_005"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_093"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_020"):
		case joaat("CLOTHING_HL_PLAYER_HAT_046_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_073_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_053_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_004"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_079"):
		case joaat("CLOTHING_ITEM_SP_EXOTICCOLLECTOR_HAT_000"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_041"):
		case joaat("CLOTHING_HL_PLAYER_HAT_072_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_065_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_029_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_032_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_069"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_003_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_016_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_013"):
		case joaat("CLOTHING_HL_PLAYER_HAT_031_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_008_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_012"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_025"):
		case joaat("CLOTHING_HL_PLAYER_HAT_007_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_027_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_015"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_060"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_075"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_133"):
		case joaat("CLOTHING_HL_PLAYER_HAT_011_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_071_1"):
		case joaat("CLOTHING_ITEM_SP_FISHCOLLECTOR_HAT_000"):
		case joaat("CLOTHING_HL_PLAYER_HAT_013_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_089"):
		case joaat("CLOTHING_HL_PLAYER_HAT_068_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_102"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_002_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_008_11"):
		case joaat("CLOTHING_HL_PLAYER_HAT_047_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_050"):
		case joaat("CLOTHING_HL_PLAYER_HAT_050_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_000"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_004_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_051"):
		case joaat("CLOTHING_HL_PLAYER_HAT_009_1"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_005_1"):
		case joaat("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_016"):
		case joaat("CLOTHING_HL_PLAYER_HAT_062_1"):
			return true;
		default:
			break;
	}
	return false;
}

int func_129(vector3 vParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_447(vParam0, 1);
	if (iVar0 == __LIB_0__::func_61())
	{
		return 1;
	}
	return 0;
}

bool func_189(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935689.f_8)
	{
		return false;
	}
	if (((iParam0 != joaat("CUSTOM_SATCHEL") && iParam0 != joaat("KIT_CAMP")) && iParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = __LIB_9__::func_986(iParam0);
		if (__LIB_0__::func_192(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_315(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (__LIB_7__::func_781())
		{
			return false;
		}
	}
	if (!__LIB_1__::func_707(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_196(int iParam0, bool bParam1, bool bParam2)
{
	if (__LIB_7__::func_822(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_342(iParam0);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!__LIB_7__::func_790())
				{
					if (__LIB_4__::func_385(&Global_35))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					return true;
				}
				else
				{
					__LIB_0__::func_45("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				func_344(iParam0);
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_345(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_346(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_347(iParam0);
				}
				else
				{
					func_348(iParam0);
				}
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_349(iParam0);
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_350(iParam0);
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_351(iParam0);
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_352(iParam0);
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_353(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_354(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_355(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_356(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_357(iParam0);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_358(iParam0);
				return true;
			}
			break;
	}
	return false;
}

int func_230(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = __LIB_0__::func_937(iParam0, 1);
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
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_230(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
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
	__LIB_6__::func_701(iParam0, iParam1);
	return 1;
}

int func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_233(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_16__::func_775(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_3__::func_909(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_4__::func_129(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_4__::func_130(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_233(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_233(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_233(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_233(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_233(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_233(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_233(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_16__::func_775(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_233(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_233(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_480(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_18__::func_972(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_233(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_238(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_1__::func_748(uParam0[iVar0], 1, 1);
		iVar0++;
	}
	if (uParam0->f_18 > 3 && uParam0->f_18 <= 9)
	{
		(*uParam0)[1] = __LIB_11__::func_570("CMP_SLP_NOON", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[2] = __LIB_11__::func_570("CMP_SLP_EVE", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[3] = __LIB_11__::func_570("CMP_SLP_MDN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_18 > 9 && uParam0->f_18 <= 15)
	{
		(*uParam0)[2] = __LIB_11__::func_570("CMP_SLP_EVE", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[3] = __LIB_11__::func_570("CMP_SLP_MDN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[0] = __LIB_11__::func_570("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_18 > 15 && uParam0->f_18 <= 21)
	{
		(*uParam0)[3] = __LIB_11__::func_570("CMP_SLP_MDN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[0] = __LIB_11__::func_570("CMP_SLP_MRN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[1] = __LIB_11__::func_570("CMP_SLP_NOON", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_18 > 21 || uParam0->f_18 <= 3)
	{
		(*uParam0)[0] = __LIB_11__::func_570("CMP_SLP_MRN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[1] = __LIB_11__::func_570("CMP_SLP_NOON", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[2] = __LIB_11__::func_570("CMP_SLP_EVE", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	bVar2 = true;
	if (Global_1392040.f_7 == -15)
	{
		Global_1392040.f_7 = __LIB_0__::func_23();
	}
	iVar3 = Global_1392040.f_7;
	__LIB_1__::func_446(&iVar3, 0, 0, 3, 0, 0, 0, 0);
	if (!__LIB_3__::func_77(iVar3))
	{
		if (Global_1392040.f_8 > 1)
		{
			bVar2 = false;
		}
	}
	else
	{
		Global_1392040.f_8 = 0;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		bVar2 = false;
	}
	if (__LIB_0__::func_139((*uParam0)[0]))
	{
		if (uParam0->f_18 < 6)
		{
			iVar1 = (6 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 6;
		}
		__LIB_1__::func_483((*uParam0)[0], "CMP_SLP_MRN", iVar1, 1);
		__LIB_4__::func_12((*uParam0)[0], 1323335645, 0, 1);
		__LIB_1__::func_221((*uParam0)[0], bVar2, 1);
	}
	if (__LIB_0__::func_139((*uParam0)[1]))
	{
		if (uParam0->f_18 < 12)
		{
			iVar1 = (12 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 12;
		}
		__LIB_1__::func_483((*uParam0)[1], "CMP_SLP_NOON", iVar1, 1);
		__LIB_4__::func_12((*uParam0)[1], 1323335645, 0, 1);
		__LIB_1__::func_221((*uParam0)[1], bVar2, 1);
	}
	if (__LIB_0__::func_139((*uParam0)[2]))
	{
		if (uParam0->f_18 < 18)
		{
			iVar1 = (18 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 18;
		}
		__LIB_1__::func_483((*uParam0)[2], "CMP_SLP_EVE", iVar1, 1);
		__LIB_4__::func_12((*uParam0)[2], 1323335645, 0, 1);
		__LIB_1__::func_221((*uParam0)[2], bVar2, 1);
	}
	if (__LIB_0__::func_139((*uParam0)[3]))
	{
		iVar1 = (24 - uParam0->f_18);
		__LIB_1__::func_483((*uParam0)[3], "CMP_SLP_MDN", iVar1, 1);
		__LIB_4__::func_12((*uParam0)[3], 1323335645, 0, 1);
		__LIB_1__::func_221((*uParam0)[3], bVar2, 1);
	}
	return bVar2;
}

char* func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_1__::func_985())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (__LIB_1__::func_985())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (__LIB_1__::func_985())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (__LIB_1__::func_985())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_240()
{
	int iVar0;
	iVar0 = __LIB_2__::func_954();
	switch (iVar0)
	{
		case joaat("SANDSTORM"):
		case joaat("OVERCASTDARK"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			return "04Storm";
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("OVERCAST"):
		case joaat("FOG"):
		case joaat("SHOWER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
			return "03Clouds";
		case joaat("HIGHPRESSURE"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
		case joaat("SNOWCLEARING"):
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

bool func_315(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	__LIB_19__::func_394(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630.f_12 || *uParam0)
	{
		return false;
	}
	if (__LIB_0__::func_2() == 0)
	{
		if (Global_1935496.f_7 & 131072 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496.f_7 & 1024 != 0)
		{
			return false;
		}
	}
	if (Global_1935630.f_22)
	{
		return false;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496.f_7 & 32 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496.f_7 & 4096 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496.f_7 & 512 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = __LIB_9__::func_186(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = __LIB_7__::func_807(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = __LIB_7__::func_808(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_0__::func_163(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_0__::func_163(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = __LIB_7__::func_809(Global_1935630.f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						__LIB_0__::func_45("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496.f_7 & 8192 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496.f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496.f_7 & 32768 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496.f_7 & 16384 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496.f_7 & 16 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496.f_7 & 256 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = __LIB_3__::func_63();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496.f_7 & 524288 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496.f_7 & 262144 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496.f_7 & 2097152 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496.f_7 & 8388608 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496.f_7 & 33554432 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496.f_7 & 67108864 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496.f_7 & 134217728 == 0)
		{
			return false;
		}
	}
	if (Global_1935496.f_7 & 17825988 != 0)
	{
		return false;
	}
	return true;
}

void func_342(int iParam0)
{
	int iVar0;
	iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("APPLY_LOTION_BOTH_HANDS");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_344(int iParam0)
{
	int iVar0;
	iVar0 = 16939881;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_345(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = -45077177;
	switch (__LIB_3__::func_18())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_346(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 1700817728;
	switch (__LIB_3__::func_18())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_347(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_348(int iParam0)
{
	int iVar0;
	iVar0 = -680642132;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_349(int iParam0)
{
	int iVar0;
	iVar0 = 2105609037;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_350(int iParam0)
{
	int iVar0;
	iVar0 = 1964324114;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_351(int iParam0)
{
	int iVar0;
	iVar0 = -1530144981;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_352(int iParam0)
{
	int iVar0;
	iVar0 = -1074475556;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_353(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_354(int iParam0)
{
	int iVar0;
	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_355(int iParam0)
{
	int iVar0;
	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_356(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (__LIB_0__::func_192(iParam0, 1573112293))
		{
			__LIB_16__::func_431(__LIB_6__::func_846(&iParam0), 1, 1);
		}
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_357(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_358(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_480(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_62(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_16__::func_775(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

