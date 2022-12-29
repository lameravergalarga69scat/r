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
	bool bLocal_9 = false;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	bool bLocal_12 = false;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	bool bLocal_17 = false;
	int iLocal_18 = 0;
	bool bLocal_19 = false;
	bool bLocal_20 = false;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	char cLocal_27[32] = "";
	char cLocal_31[32] = "";
	char* sLocal_35 = NULL;
	char* sLocal_36 = NULL;
	char* sLocal_37 = NULL;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = false;
	struct<113> Local_47 = { 1, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_160 = 0;
	float fLocal_161 = 0f;
	bool bLocal_162 = false;
	int iLocal_163 = 0;
	vector3 vLocal_164 = { 0f, 0f, 0f };
	vector3 vLocal_167 = { 0f, 0f, 0f };
	vector3 vLocal_170 = { 0f, 0f, 0f };
	bool bLocal_173 = false;
	bool bLocal_174 = false;
	float fLocal_175 = 0f;
	float fLocal_176 = 0f;
	vector3 vLocal_177 = { 0f, 0f, 0f };
	vector3 vLocal_180 = { 0f, 0f, 0f };
	bool bLocal_183 = false;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	bool bLocal_192 = false;
	char* sLocal_193[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	bool bLocal_216 = false;
	float fLocal_217 = 0f;
	float fLocal_218 = 0f;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	StringCopy(&cLocal_27, "", 32);
	StringCopy(&cLocal_31, "", 32);
	sLocal_35 = "CameraViewfinder";
	sLocal_36 = "CameraTakePicture";
	sLocal_37 = "CameraTransitionBlink";
	bLocal_46 = true;
	fLocal_176 = 0f;
	fLocal_218 = 0.5f;
	iLocal_220 = 4;
	iLocal_221 = -1534086282;
	iLocal_223 = joaat("DOMINOS_SET_1");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		__LIB_17__::func_912(&Local_47, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (bLocal_46)
	{
		if (iLocal_13 == 1)
		{
			func_3();
		}
		if (__LIB_1__::func_264(Local_47.f_1[2], 1))
		{
			if (MISC::IS_BIT_SET(Global_1357510, 5))
			{
				__LIB_1__::func_221(Local_47.f_1[2], 0, 1);
			}
			else
			{
				__LIB_1__::func_221(Local_47.f_1[2], 1, 1);
			}
		}
		if (__LIB_1__::func_264(Local_47.f_1[8], 1))
		{
			if (bLocal_216)
			{
				__LIB_1__::func_221(Local_47.f_1[8], 0, 1);
			}
			else
			{
				__LIB_1__::func_221(Local_47.f_1[8], 1, 1);
			}
		}
		__LIB_3__::func_65(2);
		__LIB_3__::func_65(4);
		__LIB_3__::func_65(8);
		__LIB_3__::func_65(16);
		__LIB_3__::func_65(32);
		__LIB_3__::func_65(128);
		__LIB_3__::func_65(256);
		__LIB_3__::func_65(512);
		__LIB_3__::func_65(1024);
		__LIB_3__::func_65(2048);
		__LIB_3__::func_65(4096);
		__LIB_3__::func_65(16384);
		__LIB_3__::func_65(1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		if (bLocal_46)
		{
			if (__LIB_17__::func_913(&Local_47))
			{
				bLocal_46 = true;
			}
			else
			{
				bLocal_46 = false;
			}
		}
		__LIB_5__::func_647(Local_47);
		__LIB_17__::func_914(&Local_47);
		__LIB_5__::func_618(&(Local_47.f_90), &(Local_47.f_91), &(Local_47.f_94), &(Local_47.f_95), joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_LOOK_LR"), joaat("INPUT_LOOK_UD"), 2);
		if (__LIB_1__::func_732(Local_47.f_1[2], 1) || __LIB_1__::func_732(Local_47.f_1[7], 1))
		{
			iLocal_38 = 1;
			if (__LIB_5__::func_619(&Local_47) == 3)
			{
				__LIB_17__::func_915(&Local_47, 15);
			}
			else if (__LIB_5__::func_619(&Local_47) != 6)
			{
			}
			else
			{
				__LIB_5__::func_620();
				if (AUDIO::_0x4AD019591E94C064("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				iLocal_191 = MISC::GET_GAME_TIMER();
				bLocal_192 = true;
				func_15();
				Global_1357507 = 0;
				__LIB_17__::func_915(&Local_47, 4);
			}
		}
		func_16(&Local_47);
		iVar0 = __LIB_5__::func_619(&Local_47);
		if (__LIB_5__::func_621())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (__LIB_5__::func_622())
				{
					iLocal_13 = 0;
					uLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "cameraRollCapacityLabel", "Disabled");
					func_19();
					__LIB_17__::func_915(&Local_47, 1);
				}
				else
				{
					if (__LIB_0__::func_81(&Local_47))
					{
						GRAPHICS::_0xA42EDF1E88734A7E();
						iLocal_13 = 1;
						__LIB_4__::func_181(&Local_47);
					}
					__LIB_17__::func_915(&Local_47, 1);
				}
				break;
			case 1:
				if (__LIB_0__::func_81(&Local_47))
				{
					__LIB_4__::func_181(&Local_47);
				}
				__LIB_17__::func_916();
				iLocal_10 = MISC::GET_GAME_TIMER();
				__LIB_17__::func_915(&Local_47, 2);
				break;
			case 2:
				if (__LIB_0__::func_81(&Local_47))
				{
					__LIB_4__::func_181(&Local_47);
				}
				if (__LIB_0__::func_58())
				{
					if (__LIB_17__::func_917(iLocal_10, 0))
					{
						__LIB_17__::func_915(&Local_47, 12);
						HUD::_HIDE_HUD_COMPONENT(959420967);
						MISC::SET_GAME_PAUSED(true);
					}
				}
				else if (__LIB_17__::func_917(iLocal_10, 0) && __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_KIT_CAMERA"))
				{
					__LIB_17__::func_915(&Local_47, 3);
				}
				break;
			case 4:
				__LIB_17__::func_914(&Local_47);
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				if (bLocal_192)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_191) > 500)
					{
						HUD::_DISPLAY_HUD_COMPONENT(959420967);
						CAM::SET_CAM_ACTIVE(Local_47.f_32, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_47.f_32);
						CAM::DESTROY_CAM(Local_47.f_32, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						__LIB_17__::func_915(&Local_47, 3);
						func_26();
						bLocal_192 = false;
						func_27();
					}
				}
				break;
			case 3:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_184) > 100)
				{
					func_28();
					iLocal_184 = MISC::GET_GAME_TIMER();
				}
				if (__LIB_0__::func_81(&Local_47))
				{
					__LIB_5__::func_652(&Local_47);
					func_30(3);
					__LIB_0__::func_105(1);
					__LIB_4__::func_181(&Local_47);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
				if (iLocal_38 == 1 && Global_1357508 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_CAMERA_HANDHELD_USE")))
					{
						iLocal_38 = 0;
					}
					else
					{
						iLocal_38 = 1;
					}
				}
				if (Global_1357508 == 1)
				{
					iLocal_38 = 0;
				}
				if (bLocal_183 && iLocal_38 == 0)
				{
					__LIB_1__::func_221(Local_47.f_1[0], 1, 1);
					if (__LIB_1__::func_514(Local_47.f_1[0], 1) || Global_1357508 == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						if (Global_1357508 != 1)
						{
						}
						else
						{
							Global_1357508 = 0;
						}
						Global_1357507 = 1;
						func_15();
						HUD::_HIDE_HUD_COMPONENT(959420967);
						func_33();
						iLocal_160 = MISC::GET_GAME_TIMER();
						__LIB_17__::func_915(&Local_47, 5);
					}
				}
				else
				{
					__LIB_1__::func_221(Local_47.f_1[0], 0, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_163) > 600)
				{
					func_34();
					iLocal_163 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_162)
				{
					__LIB_1__::func_221(Local_47.f_1[1], 1, 1);
					if (__LIB_1__::func_514(Local_47.f_1[1], 1))
					{
						if (__LIB_2__::func_65(Global_35, 0))
						{
						}
						else
						{
							iLocal_188 = 0;
							iLocal_190 = 0;
							func_15();
							__LIB_17__::func_915(&Local_47, 8);
							if (!__LIB_0__::func_75(&uLocal_185))
							{
								__LIB_1__::func_283(&uLocal_185, 1);
							}
							if (AUDIO::_0x4AD019591E94C064("Place_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::_PLAY_SOUND_FROM_ENTITY("Place_Tripod", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
							}
						}
					}
				}
				else
				{
					__LIB_1__::func_221(Local_47.f_1[1], 0, 1);
				}
				break;
			case 5:
				if (__LIB_0__::func_81(&Local_47))
				{
					__LIB_4__::func_181(&Local_47);
				}
				if (func_38() && (MISC::GET_GAME_TIMER() - iLocal_160) > 500)
				{
					func_39();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
					Local_47.f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					Local_47.f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
					Local_47.f_83 = { Local_47.f_71, Local_47.f_71.f_1, Local_47.f_71.f_2 };
					Local_47.f_77 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_47.f_68, Local_47.f_71.f_2, 0f, 0.3f, 0.5f) };
					Local_47.f_110 = 0;
					Local_47.f_83 = { 0f, 0f, 0f };
					Local_47.f_82 = 0f;
					Local_47.f_81 = 0f;
					Local_47.f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_47.f_77, Local_47.f_83, 65f, false, 2);
					CAM::ATTACH_CAM_TO_PED_BONE(Local_47.f_32, Global_35, 21030, 0f, 0.2f, 0f, true);
					CAM::SET_CAM_NEAR_CLIP(Local_47.f_32, 0.25f);
					Local_47.f_33 = 5f;
					Local_47.f_33.f_1 = 2f;
					Local_47.f_33.f_2 = 128f;
					Local_47.f_33.f_3 = 25f;
					Local_47.f_33.f_4 = 25f;
					Local_47.f_33.f_5 = 60f;
					Local_47.f_33.f_6 = 1;
					Local_47.f_33.f_7 = 0;
					Local_47.f_33.f_8 = 1;
					Local_47.f_33.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_47.f_32, &(Local_47.f_33));
					CAM::_0x9F97E85EC142255E(Local_47.f_32, Local_47.f_110);
					CAM::_0x42ED56B02E05D109(Local_47.f_32, false);
					CAM::SET_CAM_ACTIVE(Local_47.f_32, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::_0x4AD019591E94C064("Expand_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Expand_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_34();
					iLocal_163 = MISC::GET_GAME_TIMER();
					func_27();
					__LIB_17__::func_915(&Local_47, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				if (iLocal_39 == 0)
				{
					if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
					{
						Global_1357509 = 1;
						iLocal_39 = 1;
					}
				}
				if (MISC::IS_BIT_SET(Global_1357510, 6))
				{
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (__LIB_0__::func_81(&Local_47))
				{
					func_30(6);
					__LIB_4__::func_181(&Local_47);
				}
				func_40(&Local_47);
				if (iLocal_42 == 0)
				{
					if (__LIB_5__::func_648(Local_47.f_1[6]) && !__LIB_5__::func_625(&Local_47, 32))
					{
						__LIB_5__::func_652(&Local_47);
						if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
						{
							AUDIO::_PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
						}
						__LIB_5__::func_626(1);
						__LIB_5__::func_627(&Local_47, 32);
					}
					if (!__LIB_5__::func_625(&Local_47, 32))
					{
						if (__LIB_5__::func_648(Local_47.f_1[5]))
						{
							__LIB_5__::func_628();
						}
					}
				}
				break;
			case 11:
				if (__LIB_0__::func_81(&Local_47))
				{
					Local_47.f_1[6] = __LIB_2__::func_403("CAM_TAKE_PHOTO", joaat("INPUT_CONTEXT_RT"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_0__::func_105(1);
					__LIB_4__::func_981("CAM_SNAP", 0, 0, 1);
					__LIB_4__::func_181(&Local_47);
				}
				if (__LIB_5__::func_629())
				{
					if (!__LIB_5__::func_625(&Local_47, 16))
					{
						__LIB_17__::func_915(&Local_47, 3);
					}
					else
					{
						__LIB_17__::func_915(&Local_47, 16);
					}
				}
				else
				{
					__LIB_17__::func_918(&Local_47);
				}
				break;
			case 10:
				func_50(&Local_47);
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				iLocal_38 = 1;
				if (iLocal_189 == 0)
				{
					if (__LIB_3__::func_135(&uLocal_185) > 500)
					{
						if (CAM::DOES_CAM_EXIST(Local_47.f_32))
						{
							CAM::SET_CAM_ACTIVE(Local_47.f_32, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(Local_47.f_32, false);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, true, true, true, false);
						ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_217);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_26();
						iLocal_189 = 1;
					}
				}
				if (__LIB_3__::func_135(&uLocal_185) > 1000)
				{
					HUD::_DISPLAY_HUD_COMPONENT(959420967);
					func_27();
					__LIB_0__::func_37(&uLocal_185);
					__LIB_5__::func_620();
					__LIB_17__::func_915(&Local_47, 3);
				}
				break;
			case 8:
				func_50(&Local_47);
				if (iLocal_188 == 0)
				{
					if (__LIB_3__::func_135(&uLocal_185) > 500)
					{
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, false, false, true, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_164, fLocal_175, true, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						func_39();
						bLocal_216 = false;
						iLocal_188 = 1;
					}
				}
				if (iLocal_188 != 1)
				{
				}
				else if (iLocal_190 == 0)
				{
					if (__LIB_3__::func_135(&uLocal_185) > 300)
					{
						iLocal_190 = 1;
						func_53(&Local_47);
					}
				}
				else if (__LIB_3__::func_135(&uLocal_185) > 1000)
				{
					__LIB_0__::func_37(&uLocal_185);
					func_54(&Local_47);
					func_27();
					__LIB_17__::func_915(&Local_47, 9);
				}
				break;
			case 9:
				func_50(&Local_47);
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (__LIB_0__::func_81(&Local_47))
				{
					__LIB_4__::func_181(&Local_47);
				}
				func_54(&Local_47);
				if (__LIB_1__::func_514(Local_47.f_1[6], 1) && !__LIB_5__::func_625(&Local_47, 32))
				{
					__LIB_5__::func_652(&Local_47);
					if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					__LIB_5__::func_626(1);
					__LIB_5__::func_627(&Local_47, 32);
				}
				else if (__LIB_1__::func_514(Local_47.f_1[1], 1))
				{
					__LIB_17__::func_915(&Local_47, 8);
				}
				if (!__LIB_5__::func_625(&Local_47, 32))
				{
					if (__LIB_5__::func_648(Local_47.f_1[5]))
					{
						__LIB_5__::func_628();
					}
				}
				break;
			case 7:
				break;
			case 15:
				if (__LIB_0__::func_81(&Local_47))
				{
					__LIB_4__::func_181(&Local_47);
				}
				__LIB_5__::func_652(&Local_47);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
				__LIB_17__::func_915(&Local_47, 16);
				break;
			case 16:
				if (__LIB_0__::func_81(&Local_47))
				{
					__LIB_4__::func_181(&Local_47);
				}
				func_2();
				__LIB_17__::func_912(&Local_47, 1);
				if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_55())
		{
			if (__LIB_0__::func_265(&uLocal_202) > 1f)
			{
				func_57();
			}
		}
		if (iVar0 != 12)
		{
		}
		else
		{
			PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PM", 1, 0, 0, 0);
			if (__LIB_1__::func_732(Local_47.f_1[7], 1))
			{
				__LIB_17__::func_915(&Local_47, 15);
			}
			if (__LIB_0__::func_81(&Local_47))
			{
				__LIB_5__::func_652(&Local_47);
				func_30(12);
				__LIB_0__::func_105(1);
				__LIB_4__::func_181(&Local_47);
			}
			if (__LIB_5__::func_648(Local_47.f_1[6]) && !__LIB_5__::func_625(&Local_47, 32))
			{
				MISC::SET_GAME_PAUSED(false);
				__LIB_5__::func_652(&Local_47);
				if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				__LIB_5__::func_626(1);
				__LIB_5__::func_627(&Local_47, 32);
				bLocal_9 = true;
			}
			if (!__LIB_5__::func_625(&Local_47, 32))
			{
				if (bLocal_9)
				{
					MISC::SET_GAME_PAUSED(true);
					bLocal_9 = false;
				}
				if (__LIB_5__::func_648(Local_47.f_1[5]))
				{
					__LIB_5__::func_628();
				}
			}
		}
	}
	func_2();
	__LIB_17__::func_912(&Local_47, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	if (iLocal_11 == 1)
	{
		_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_41);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_21);
	UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_222);
	iLocal_222 = 0;
	func_26();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_37);
	}
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
	__LIB_5__::func_620();
	__LIB_5__::func_626(0);
}

void func_3()
{
	Local_47.f_106 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_47.f_106 == 1)
	{
	}
	if (Local_47.f_106 == 0)
	{
		bLocal_12 = false;
		iLocal_14 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		iLocal_15 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		uLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		uLocal_23 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel0", " ");
		uLocal_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel1", " ");
		uLocal_25 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel2", " ");
		uLocal_26 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel3", " ");
		func_63();
		iLocal_13 = 0;
		bLocal_17 = true;
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	else if (Local_47.f_106 == 2)
	{
		bLocal_12 = true;
		uLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "cameraRollCapacityLabel", "failed/failed");
		func_19();
		iLocal_13 = 0;
		bLocal_17 = false;
	}
}

void func_15()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_37);
	}
}

void func_16(var uParam0)
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;
	if (__LIB_1__::func_264(uParam0->f_1[6], 1))
	{
		if (uParam0->f_108 == 0 && iLocal_13 == 0)
		{
			__LIB_1__::func_221(uParam0->f_1[6], 1, 1);
			if (bLocal_17)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_18) > 2500)
				{
					iLocal_14 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
					func_63();
					iLocal_18 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			__LIB_1__::func_221(uParam0->f_1[6], 0, 1);
		}
	}
	switch (uParam0->f_108)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_41);
				bLocal_12 = true;
				__LIB_5__::func_636(uParam0, 2);
				iLocal_11 = 0;
			}
			break;
		case 0:
			if (__LIB_5__::func_625(uParam0, 32))
			{
				__LIB_5__::func_652(uParam0);
				if (__LIB_5__::func_622() || bLocal_12)
				{
					__LIB_5__::func_636(uParam0, 2);
				}
				else if (iLocal_14 == iLocal_15)
				{
					if (iLocal_41 == 0)
					{
						Var0.f_2 = 4;
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_41 = __LIB_5__::func_637(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						__LIB_5__::func_636(uParam0, 1);
						iLocal_11 = 1;
					}
					else
					{
						bLocal_12 = true;
						__LIB_5__::func_636(uParam0, 2);
					}
				}
				else
				{
					__LIB_5__::func_636(uParam0, 2);
				}
			}
			if (__LIB_5__::func_625(uParam0, 128))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				__LIB_5__::func_636(uParam0, 7);
			}
			break;
		case 2:
			Local_47.f_112 = 0;
			__LIB_5__::func_626(0);
			__LIB_5__::func_636(uParam0, 3);
			iLocal_45 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_45) > 0)
			{
				iLocal_45 = MISC::GET_GAME_TIMER();
				if (!__LIB_0__::func_58())
				{
					func_83();
				}
				if (__LIB_5__::func_622() || bLocal_12)
				{
					__LIB_5__::func_636(uParam0, 4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_14++;
					func_63();
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					__LIB_5__::func_636(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 1)
			{
			}
			if (uParam0->f_106 == 0)
			{
				if (__LIB_5__::func_619(uParam0) == 8 || __LIB_5__::func_619(uParam0) == 9)
				{
					GRAPHICS::_0x2705D18C11B61046(1);
				}
				else
				{
					GRAPHICS::_0x2705D18C11B61046(0);
				}
				StringCopy(&cVar19, "", 32);
				iVar23 = __LIB_0__::func_12();
				if (__LIB_0__::func_20(iVar23))
				{
					MemCopy(&cVar19, {__LIB_5__::func_638(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = __LIB_5__::func_639();
					StringCopy(&cVar19, __LIB_5__::func_640(iVar24), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = __LIB_1__::func_898();
				if (__LIB_0__::func_69(iVar29))
				{
					StringCopy(&cVar25, __LIB_5__::func_641(iVar29), 16);
					StringCopy(&cVar27, __LIB_5__::func_642(iVar29), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar25);
				GRAPHICS::_0x8952E857696B8A79(&cVar27);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_16 = 0;
				__LIB_5__::func_636(uParam0, 6);
			}
			else if (uParam0->f_106 == 2)
			{
				__LIB_5__::func_636(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_16 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_39();
				func_30(__LIB_5__::func_619(uParam0));
				__LIB_1__::func_221(uParam0->f_1[6], 0, 1);
				__LIB_1__::func_240(600, 0);
				iLocal_16 = 1;
			}
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 0)
			{
				Local_47.f_112 = 1;
				__LIB_5__::func_643(uParam0, 32);
				__LIB_5__::func_636(uParam0, 0);
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (uParam0->f_106 == 2)
			{
				Local_47.f_112 = 1;
				__LIB_5__::func_643(uParam0, 32);
				__LIB_5__::func_636(uParam0, 0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_45) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				__LIB_5__::func_643(uParam0, 32);
				__LIB_5__::func_636(uParam0, 0);
				func_39();
				func_30(__LIB_5__::func_619(uParam0));
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				__LIB_1__::func_240(600, 0);
			}
			break;
		case 7:
			uParam0->f_106 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (uParam0->f_106 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				__LIB_5__::func_627(uParam0, 256);
				__LIB_5__::func_643(uParam0, 128);
				__LIB_5__::func_636(uParam0, 0);
			}
			else if (uParam0->f_106 == 2)
			{
				__LIB_5__::func_643(uParam0, 128);
				__LIB_5__::func_636(uParam0, 0);
			}
			break;
	}
}

void func_19()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_24, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_25, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_26, " ");
	StringCopy(&cLocal_27, "-", 32);
	StringConCat(&cLocal_27, " / ", 32);
	StringCopy(&cLocal_31, "-", 32);
	StringConCat(&cLocal_27, &cLocal_31, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_22, &cLocal_27);
}

void func_26()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_35))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_35);
	}
}

void func_27()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sLocal_37);
	}
}

void func_28()
{
	float fVar0;
	vector3 vVar1;
	vLocal_167 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_167, fVar0, 0f, 2f, -0.2f) };
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bLocal_183 = false;
		return;
	}
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, vVar1.z, 3167))
	{
		bLocal_183 = true;
	}
	else
	{
		bLocal_183 = false;
	}
}

void func_30(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			func_96(6, 1);
			func_96(7, 1);
			func_96(3, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(4, 0);
			func_96(5, 0);
			func_96(0, 0);
			func_96(1, 0);
			func_96(2, 0);
			break;
		case 3:
			func_96(6, 0);
			func_96(3, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(7, 0);
			func_96(4, 0);
			func_96(5, 0);
			func_96(0, 1);
			func_96(1, 1);
			func_96(2, 1);
			break;
		case 6:
			func_96(0, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(1, 0);
			func_96(2, 0);
			func_96(5, 1);
			func_96(3, 1);
			func_96(4, 1);
			func_96(6, 1);
			func_96(7, 1);
			break;
		case 8:
			func_96(0, 0);
			func_96(1, 0);
			func_96(2, 0);
			func_96(5, 1);
			func_96(8, 1);
			func_96(9, 1);
			func_96(3, 1);
			func_96(4, 1);
			func_96(6, 1);
			func_96(7, 1);
			break;
		case 9:
			func_96(0, 0);
			func_96(1, 0);
			func_96(2, 0);
			func_96(5, 1);
			func_96(8, 1);
			func_96(9, 1);
			func_96(3, 1);
			func_96(4, 1);
			func_96(6, 1);
			func_96(7, 1);
			break;
		case 10:
			func_96(2, 0);
			func_96(0, 0);
			func_96(3, 0);
			func_96(1, 0);
			func_96(5, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(7, 0);
			func_96(6, 0);
			func_96(9, 0);
			func_96(4, 0);
			break;
		case 7:
			func_96(2, 0);
			func_96(0, 0);
			func_96(6, 0);
			func_96(4, 0);
			func_96(5, 0);
			func_96(1, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(7, 0);
			break;
	}
}

void func_33()
{
	if (iLocal_220 == 0)
	{
		iLocal_220 = 1;
	}
}

void func_34()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;
	vLocal_167 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_167, fVar0, 0f, 4f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1.x, vVar1.y, (vVar1.z + 50f), &fVar4, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_167, &uVar5, false);
	if ((vLocal_167.z - fVar4) > 3f)
	{
		bLocal_162 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_162 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (PED::_0x50F124E6EF188B22(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_167, 2f) > 0)
	{
		bLocal_162 = false;
		return;
	}
	if ((fVar4 - vLocal_167.z) > 1f)
	{
		bLocal_162 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (__LIB_2__::func_65(Global_35, 0))
	{
		bLocal_162 = false;
		return;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_162 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_162 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_162 = true;
	}
	else
	{
		bLocal_162 = false;
	}
	if (bLocal_162)
	{
		vLocal_164 = { vLocal_167.x, vLocal_167.y, (vLocal_167.z - 1f) };
		fLocal_175 = fVar0;
		vLocal_170 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_38()
{
	switch (iLocal_220)
	{
		case 0:
			if (iLocal_221 == iLocal_223)
			{
			}
			break;
		case 1:
			iLocal_222 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_221);
			iLocal_220 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_222))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_222, iLocal_223);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_222);
				iLocal_220 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_39()
{
	if (__LIB_0__::func_58())
	{
	}
	else if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_35))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_35);
	}
}

void func_40(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	if (uParam0->f_90 > 0 && IntToFloat(uParam0->f_90) > 89f)
	{
		uParam0->f_90 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_90 < 0 && IntToFloat(uParam0->f_90) < -89f)
	{
		uParam0->f_90 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_91 > 0 && IntToFloat(uParam0->f_91) > 89f)
	{
		uParam0->f_91 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_91 < 0 && IntToFloat(uParam0->f_91) < -89f)
	{
		uParam0->f_91 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_90 != uParam0->f_92)
	{
		uParam0->f_92 = uParam0->f_90;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_90) - -89f) / (89f - -89f));
		uParam0->f_98 = fVar0;
	}
	else
	{
		uParam0->f_102 = 0f;
	}
	if (uParam0->f_91 != uParam0->f_93)
	{
		uParam0->f_93 = uParam0->f_91;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_91) - -89f) / (89f - -89f));
		uParam0->f_99 = fVar1;
	}
	else
	{
		uParam0->f_103 = 0f;
	}
	vVar6 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	fVar4 = 50f;
	if ((__LIB_1__::func_44(Global_1347702[85 /*49*/].f_15) || __LIB_1__::func_44(Global_1347702[86 /*49*/].f_15)) || __LIB_1__::func_44(Global_1347702[87 /*49*/].f_15))
	{
		fVar5 = -50f;
	}
	else
	{
		fVar5 = -25f;
	}
	if ((__LIB_1__::func_44(Global_1347702[85 /*49*/].f_15) || __LIB_1__::func_44(Global_1347702[86 /*49*/].f_15)) || __LIB_1__::func_44(Global_1347702[87 /*49*/].f_15))
	{
		fVar2 = 38f;
		fVar3 = -40f;
	}
	else
	{
		fVar2 = 68f;
		fVar3 = -85f;
	}
	fVar12 = uParam0->f_81;
	fVar13 = uParam0->f_82;
	fVar11 = -1f;
	if (uParam0->f_94 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_94 = MISC::ABSI(uParam0->f_94);
	}
	fVar9 = ((BUILTIN::TO_FLOAT(uParam0->f_94) - 0f) / (89f - 0f));
	fVar12 = (fVar12 + (fVar9 * fVar11));
	if (fVar12 >= fVar2)
	{
		fVar12 = fVar2;
	}
	else if (fVar12 < fVar3)
	{
		fVar12 = fVar3;
	}
	uParam0->f_81 = fVar12;
	fVar11 = -1f;
	if (uParam0->f_95 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_95 = MISC::ABSI(uParam0->f_95);
	}
	fVar10 = ((BUILTIN::TO_FLOAT(uParam0->f_95) - 0f) / (89f - 0f));
	fVar13 = (fVar13 + (fVar10 * fVar11));
	if (fVar13 >= fVar4)
	{
		fVar13 = fVar4;
	}
	else if (fVar13 < fVar5)
	{
		fVar13 = fVar5;
	}
	uParam0->f_82 = fVar13;
	uParam0->f_83 = { Vector(vVar6.z, 0f, 0f) + Vector(uParam0->f_81, 0f, uParam0->f_82) };
	func_100(uParam0);
	func_101(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, uParam0->f_83, 50f, 0, 1, 1, 2, 0, 0);
	if ((__LIB_1__::func_44(Global_1347702[85 /*49*/].f_15) || __LIB_1__::func_44(Global_1347702[86 /*49*/].f_15)) || __LIB_1__::func_44(Global_1347702[87 /*49*/].f_15))
	{
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_184) > 100)
	{
		if (iLocal_40 == 0)
		{
			fVar14 = ENTITY::GET_ENTITY_HEADING(Global_35);
			vVar15 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_167, fVar14, 0f, 0.25f, 0f) };
			if (!ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar15.x, vVar15.y, vVar15.z, 3167))
			{
				Global_1357509 = 1;
				iLocal_40 = 1;
			}
		}
		iLocal_184 = MISC::GET_GAME_TIMER();
	}
}

void func_50(var uParam0)
{
	vLocal_167 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_167, vLocal_164, true) > 3f)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_164, fLocal_175, true, false, true);
		ENTITY::_SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_53(var uParam0)
{
	if (__LIB_0__::func_81(uParam0))
	{
		func_30(8);
		__LIB_4__::func_181(uParam0);
	}
	func_106(uParam0);
	func_107();
	func_108();
	uParam0->f_88 = 0;
	iLocal_214 = 0;
	bLocal_173 = true;
	bLocal_174 = false;
	HUD::_HIDE_HUD_COMPONENT(959420967);
}

void func_54(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	func_109(uParam0);
	if (PAD::_0x6CD79468A1E595C6(0))
	{
		vLocal_177 = { vLocal_180 };
		fLocal_176 = 0f;
		fLocal_218 = 0f;
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		fVar1 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_LR")) * 4.5f);
		fVar2 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_UD")) * 4.5f);
		fVar0 = __LIB_5__::func_644(vLocal_180.z, (vLocal_177.z - fVar1));
		if (fVar0 > 30f)
		{
			vLocal_177.f_2 = (vLocal_180.z - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_177.f_2 = (vLocal_180.z - -30f);
		}
		else
		{
			vLocal_177.f_2 = (vLocal_177.z - fVar1);
		}
		fVar0 = __LIB_5__::func_644(vLocal_180.x, (vLocal_177.x - fVar2));
		if (fVar0 > 30f)
		{
			vLocal_177.x = (vLocal_180.x - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_177.x = (vLocal_180.x - -30f);
		}
		else
		{
			vLocal_177.x = (vLocal_177.x - fVar2);
		}
	}
	else
	{
		if (uParam0->f_94 > 16)
		{
			if ((fLocal_176 - 0.07f) > -10f)
			{
				if (uParam0->f_94 > 100)
				{
					vLocal_177.f_2 = (vLocal_177.z - 0.6f);
					fLocal_176 = (fLocal_176 - (0.07f * 3f));
				}
				else
				{
					vLocal_177.f_2 = (vLocal_177.z - 0.2f);
					fLocal_176 = (fLocal_176 - 0.07f);
				}
			}
		}
		if (uParam0->f_94 < -16)
		{
			if ((fLocal_176 + 0.07f) < 10f)
			{
				if (uParam0->f_94 < -100)
				{
					vLocal_177.f_2 = (vLocal_177.z + 0.6f);
					fLocal_176 = (fLocal_176 + (0.07f * 3f));
				}
				else
				{
					vLocal_177.f_2 = (vLocal_177.z + 0.2f);
					fLocal_176 = (fLocal_176 + 0.07f);
				}
			}
		}
		if (uParam0->f_95 > 16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_218 - 0.07f) > -10f)
			{
				if (uParam0->f_95 > 100)
				{
					vLocal_177.x = (vLocal_177.x - 0.6f);
					fLocal_218 = (fLocal_218 - (0.07f * 3f));
				}
				else
				{
					vLocal_177.x = (vLocal_177.x - 0.2f);
					fLocal_218 = (fLocal_218 - 0.07f);
				}
			}
		}
		if (uParam0->f_95 < -16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_218 + 0.07f) < 10f)
			{
				if (uParam0->f_95 < -100)
				{
					vLocal_177.x = (vLocal_177.x + 0.6f);
					fLocal_218 = (fLocal_218 + (0.07f * 3f));
				}
				else
				{
					vLocal_177.x = (vLocal_177.x + 0.2f);
					fLocal_218 = (fLocal_218 + 0.07f);
				}
			}
		}
	}
	if (bLocal_173)
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vLocal_170, 3167))
		{
			bLocal_174 = false;
		}
		else
		{
			bLocal_174 = true;
		}
		bLocal_173 = false;
	}
	if ((__LIB_1__::func_514(uParam0->f_1[7], 1) || __LIB_2__::func_65(Global_35, 0)) || bLocal_174)
	{
		if (__LIB_2__::func_65(Global_35, 0))
		{
		}
		else if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		if (AUDIO::_0x4AD019591E94C064("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::_PLAY_SOUND_FROM_ENTITY("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		}
		iLocal_189 = 0;
		__LIB_5__::func_652(uParam0);
		__LIB_17__::func_915(uParam0, 10);
		func_15();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, "portrait_normal", __LIB_5__::func_631());
		if (!__LIB_0__::func_75(&uLocal_185))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			__LIB_1__::func_283(&uLocal_185, 1);
		}
	}
	if (__LIB_5__::func_649(uParam0->f_1[9], 0, 1))
	{
		if (iLocal_205 == 0)
		{
			uParam0->f_87++;
			if (uParam0->f_87 == 8)
			{
				uParam0->f_87 = 0;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, sLocal_193[uParam0->f_87], __LIB_5__::func_631());
		}
	}
	if (__LIB_5__::func_649(uParam0->f_1[9], 1, 1))
	{
		if (iLocal_205 == 0)
		{
			uParam0->f_87 = (uParam0->f_87 - 1);
			if (uParam0->f_87 < 0)
			{
				uParam0->f_87 = 7;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, sLocal_193[uParam0->f_87], __LIB_5__::func_631());
		}
	}
	uParam0->f_43 = { __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &(uParam0->f_43));
	if (bLocal_216 == 0)
	{
		if (__LIB_5__::func_649(uParam0->f_1[8], 1, 1))
		{
			bLocal_216 = true;
			uParam0->f_88++;
			if (uParam0->f_88 == 7)
			{
				uParam0->f_88 = 0;
			}
			func_114();
		}
	}
	if (bLocal_216 == 0)
	{
		if (__LIB_5__::func_649(uParam0->f_1[8], 0, 1))
		{
			bLocal_216 = true;
			uParam0->f_88 = (uParam0->f_88 - 1);
			if (uParam0->f_88 < 0)
			{
				uParam0->f_88 = 6;
			}
			func_114();
		}
	}
	if (bLocal_216)
	{
		switch (iLocal_214)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_215) > 200)
				{
					iLocal_214 = 2;
				}
				break;
			case 2:
				func_115(uParam0);
				iLocal_214 = 3;
				iLocal_215 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_215) > 500)
				{
					iLocal_214 = 4;
					iLocal_215 = MISC::GET_GAME_TIMER();
					func_27();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_215) > 700)
				{
					iLocal_214 = 0;
					bLocal_216 = false;
				}
				break;
			default:
				break;
		}
	}
	func_101(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, vLocal_177, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_55()
{
	return iLocal_205;
}

void func_57()
{
	__LIB_0__::func_37(&uLocal_202);
	iLocal_205 = 0;
}

void func_63()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_24, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_25, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_26, " ");
	StringCopy(&cLocal_27, "", 32);
	MISC::_INT_TO_STRING(iLocal_14, "%i", &cLocal_27);
	StringConCat(&cLocal_27, " / ", 32);
	StringCopy(&cLocal_31, "", 32);
	MISC::_INT_TO_STRING(iLocal_15, "%i", &cLocal_31);
	StringConCat(&cLocal_27, &cLocal_31, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_22, &cLocal_27);
}

void func_83()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_36))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_36);
	}
}

void func_96(int iParam0, bool bParam1)
{
	char* sVar0;
	if (bParam1)
	{
		if (!__LIB_0__::func_139(Local_47.f_1[iParam0]))
		{
			if (iParam0 == 9)
			{
				Local_47.f_1[iParam0] = __LIB_5__::func_651(func_129(iParam0), joaat("INPUT_CAMERA_EXPRESSION_PREV"), joaat("INPUT_CAMERA_EXPRESSION_NEXT"), 0);
			}
			else if (iParam0 == 8)
			{
				Local_47.f_1[iParam0] = __LIB_5__::func_651(func_129(iParam0), joaat("INPUT_CAMERA_POSE_PREV"), joaat("INPUT_CAMERA_POSE_NEXT"), 0);
			}
			else if (iParam0 == 3)
			{
				if (Local_47.f_110 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_47.f_1[iParam0] = __LIB_4__::func_864(sVar0, func_131(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				Local_47.f_1[iParam0] = __LIB_4__::func_864(func_129(iParam0), func_131(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam0 == 4)
			{
				__LIB_1__::func_522(Local_47.f_1[iParam0], 11, 1, 1);
			}
			__LIB_4__::func_12(Local_47.f_1[iParam0], -857683846, 0, 1);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[Local_47.f_1[iParam0] /*18*/].f_3, true);
		}
	}
	else if (__LIB_0__::func_139(Local_47.f_1[iParam0]))
	{
		__LIB_1__::func_748(&(Local_47.f_1[iParam0]), 1, 1);
	}
}

void func_100(var uParam0)
{
	fLocal_161 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_161 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 60f)
		{
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.6f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_19)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_19 = true;
			}
		}
		else if (bLocal_19)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_19 = false;
		}
	}
	else if (bLocal_19)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_19 = false;
	}
	if (fLocal_161 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 25f)
		{
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.6f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_20)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_20 = true;
			}
		}
		else if (bLocal_20)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_20 = false;
		}
	}
	else if (bLocal_20)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_20 = false;
	}
}

void func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	if (iLocal_42 == 0)
	{
		if (__LIB_5__::func_648(uParam0->f_1[3]))
		{
			if (AUDIO::_0x4AD019591E94C064("DOF_Change", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("DOF_Change", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_43 = MISC::GET_GAME_TIMER();
			iLocal_42 = 1;
			iLocal_44 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_43) > 300 && iLocal_44 == 0)
	{
		if (uParam0->f_110 == 0)
		{
			uParam0->f_110 = 1;
			iVar0 = __LIB_0__::func_17(Local_47.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_110 = 0;
			iVar1 = __LIB_0__::func_17(Local_47.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar1 /*18*/].f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_0x9F97E85EC142255E(uParam0->f_32, uParam0->f_110);
		iLocal_44 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_43) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_43) > 850)
		{
			iLocal_42 = 0;
			iLocal_44 = 0;
		}
	}
}

void func_106(var uParam0)
{
	float fVar0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_32, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	fLocal_217 = ENTITY::GET_ENTITY_HEADING(Global_35);
	uParam0->f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	uParam0->f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	uParam0->f_83 = { uParam0->f_71, uParam0->f_71.f_1, (uParam0->f_71.f_2 - 180f) };
	uParam0->f_77 = { vLocal_170 };
	uParam0->f_110 = 0;
	fLocal_176 = 0f;
	fLocal_218 = 0.5f;
	vLocal_177 = { uParam0->f_83 };
	vLocal_177.x = (vLocal_177.x + 1f);
	vLocal_180 = { vLocal_177 };
	uParam0->f_43.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_43.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		fVar0 = 50f;
		uParam0->f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_77, uParam0->f_83, fVar0, true, 2);
	}
	uParam0->f_33 = 25f;
	uParam0->f_33.f_1 = 2f;
	uParam0->f_33.f_2 = 128f;
	uParam0->f_33.f_3 = 30f;
	uParam0->f_33.f_4 = 30f;
	uParam0->f_33.f_5 = 90f;
	uParam0->f_33.f_6 = 1;
	uParam0->f_33.f_7 = 0;
	uParam0->f_33.f_8 = 1;
	uParam0->f_33.f_9 = 1;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
	CAM::_0x9F97E85EC142255E(uParam0->f_32, uParam0->f_110);
	CAM::_0x42ED56B02E05D109(uParam0->f_32, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_32, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_107()
{
	sLocal_193[0] = "portrait_normal";
	sLocal_193[1] = "portrait_happy";
	sLocal_193[2] = "portrait_pensive";
	sLocal_193[3] = "portrait_pensive_2";
	sLocal_193[4] = "portrait_relaxed";
	sLocal_193[5] = "portrait_angry";
	sLocal_193[6] = "portrait_angry_2";
	sLocal_193[7] = "portrait_annoyed";
}

void func_108()
{
	iLocal_206[0] = 0;
	iLocal_206[1] = 1;
	iLocal_206[2] = 2;
	iLocal_206[3] = 3;
	iLocal_206[4] = 4;
	iLocal_206[5] = 5;
	iLocal_206[6] = 6;
}

void func_109(var uParam0)
{
	fLocal_161 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_161 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 90f)
		{
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.9f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_19)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_19 = true;
			}
		}
		else if (bLocal_19)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_19 = false;
		}
	}
	else if (bLocal_19)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_19 = false;
	}
	if (fLocal_161 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 30f)
		{
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.9f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_20)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_20 = true;
			}
		}
		else if (bLocal_20)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_20 = false;
		}
	}
	else if (bLocal_20)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_20 = false;
	}
}

void func_114()
{
	bLocal_216 = true;
	iLocal_215 = MISC::GET_GAME_TIMER();
	iLocal_214 = 1;
	func_15();
}

void func_115(var uParam0)
{
	func_138(uParam0);
	switch (iLocal_206[uParam0->f_88])
	{
		case 0:
			__LIB_5__::func_646(Global_35);
			break;
		case 1:
			func_140(joaat("WORLD_HUMAN_STARE_STOIC"), "WORLD_HUMAN_STARE_STOIC_MALE_A");
			break;
		case 2:
			func_140(joaat("WORLD_HUMAN_STERNGUY_IDLES"), "WORLD_HUMAN_STERNGUY");
			break;
		case 3:
			func_140(joaat("WORLD_HUMAN_SMOKE"), "WORLD_HUMAN_SMOKE_MALE_C");
			break;
		case 4:
			func_140(joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT"), "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A");
			break;
		case 5:
			ENTITY::SET_ENTITY_HEADING(Global_35, (fLocal_217 + 180f));
			break;
		case 6:
			func_140(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A");
			break;
	}
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "CAM_PUT_AWAY";
		case 0:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_FOCUS_LOCK";
		case 1:
			return "CAM_SELFIE";
		case 8:
			return "CAM_POSES";
		case 9:
			return "CAM_EXPRESSIONS";
		case 7:
			return "CAM_BACK";
		case 4:
			return "CAM_ZOOM";
		case 5:
			return "CAM_GALLERY";
		default:
			break;
	}
	if (iParam0 == 6)
	{
		if (__LIB_0__::func_58())
		{
			return "CAM_SAVE_PHOTO";
		}
		else
		{
			return "CAM_TAKE_PHOTO";
		}
	}
	return "INVALID_USE_CONTEXT";
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 7:
			return joaat("INPUT_CAMERA_BACK");
		case 0:
			return joaat("INPUT_CAMERA_HANDHELD_USE");
		case 3:
			return joaat("INPUT_CAMERA_DOF");
		case 1:
			return joaat("INPUT_CAMERA_SELFIE");
		case 4:
			return joaat("INPUT_CAMERA_ZOOM");
		case 8:
			return joaat("INPUT_CAMERA_EXPRESSION_PREV");
		case 9:
			return joaat("INPUT_CAMERA_POSE_PREV");
		case 6:
			return joaat("INPUT_CAMERA_TAKE_PHOTO");
		case 5:
			return joaat("INPUT_CAMERA_CONTEXT_GALLERY");
		default:
			break;
	}
	return 0;
}

void func_138(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_217);
}

void func_140(int iParam0, char* sParam1)
{
	iLocal_219 = TASK::CREATE_SCENARIO_POINT(iParam0, vLocal_164, fLocal_217, 0, 0, 1);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_219, 25, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_219, 23, true);
	TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_219, sParam1, -1, false, true, 0, false, 0f, false);
}

