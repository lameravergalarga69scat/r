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
	float fLocal_9 = 0f;
	float fLocal_10 = 0f;
	bool bLocal_11 = false;
	bool bLocal_12 = false;
	bool bLocal_13 = false;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	bool bLocal_20 = false;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = false;
	char* sLocal_24 = NULL;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	char* sLocal_46 = NULL;
	char* sLocal_47 = NULL;
	int iLocal_48 = 0;
	bool bLocal_49 = false;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = false;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char cLocal_64[32] = "";
	char cLocal_68[32] = "";
	char cLocal_72[32] = "";
	int iLocal_76 = 0;
	char cLocal_77[64] = "";
	char cLocal_85[32] = "";
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = false;
	struct<113> Local_103 = { 1, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_216 = 0;
	float fLocal_217 = 0f;
	bool bLocal_218 = false;
	int iLocal_219 = 0;
	vector3 vLocal_220 = { 0f, 0f, 0f };
	vector3 vLocal_223 = { 0f, 0f, 0f };
	vector3 vLocal_226 = { 0f, 0f, 0f };
	bool bLocal_229 = false;
	bool bLocal_230 = false;
	float fLocal_231 = 0f;
	float fLocal_232 = 0f;
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	bool bLocal_239 = false;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	bool bLocal_249 = false;
	char* sLocal_250[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	char* sLocal_263[39] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_303[39] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_343 = 0;
	int iLocal_344[39] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_384[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	bool bLocal_394 = false;
	float fLocal_395 = 0f;
	float fLocal_396 = 0f;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	fLocal_10 = -10f;
	fLocal_14 = 18.88f;
	fLocal_15 = -18.88f;
	fLocal_16 = 18.88f;
	fLocal_17 = -18.88f;
	fLocal_18 = 18.88f;
	fLocal_19 = -18.88f;
	iLocal_22 = MISC::_GET_SYSTEM_TIME();
	sLocal_24 = "PhotoMode_Bounds";
	fLocal_25 = 1f;
	fLocal_26 = 1f;
	fLocal_27 = 0.1f;
	bLocal_30 = true;
	sLocal_44 = "adjust_loop_a";
	sLocal_45 = "adjust_loop_b";
	sLocal_46 = "adjust_oneshot_a";
	sLocal_47 = "adjust_oneshot_b";
	StringCopy(&cLocal_64, "", 32);
	StringCopy(&cLocal_68, "", 32);
	StringCopy(&cLocal_72, "", 32);
	StringCopy(&cLocal_77, "", 64);
	StringCopy(&cLocal_85, "", 32);
	sLocal_89 = "CameraViewfinder";
	sLocal_90 = "PhotoMode_TakePicture";
	sLocal_91 = "CameraTransitionBlink";
	sLocal_92 = "No_PostFx_Applied";
	sLocal_93 = "No_PostFx_Applied";
	bLocal_102 = true;
	fLocal_232 = 0f;
	fLocal_396 = 0.5f;
	iLocal_398 = 4;
	iLocal_399 = -1534086282;
	iLocal_401 = joaat("DOMINOS_SET_1");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		__LIB_17__::func_912(&Local_103, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_3())
	{
		MISC::SET_BIT(&Global_1357505, 3);
		func_4(0);
	}
	if (HUD::_0xD6BD313CFA41E57A(joaat("INPUT_NEXT_CAMERA")) || HUD::_0xD6BD313CFA41E57A(joaat("INPUT_FOCUS_CAM")))
	{
		bLocal_20 = true;
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_90))
	{
		PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOMODE"));
	}
	while (bLocal_102)
	{
		GRAPHICS::_0xC37792A3F9C90771();
		PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_PHOTO_MODE_BACK"));
		if (iLocal_50 != 1)
		{
		}
		else
		{
			func_5();
		}
		if (__LIB_1__::func_264(Local_103.f_1[2], 1))
		{
			if (MISC::IS_BIT_SET(Global_1357510, 5))
			{
				__LIB_1__::func_221(Local_103.f_1[2], 0, 1);
			}
			else
			{
				__LIB_1__::func_221(Local_103.f_1[2], 1, 1);
			}
		}
		if (__LIB_1__::func_264(Local_103.f_1[8], 1))
		{
			if (bLocal_394)
			{
				__LIB_1__::func_221(Local_103.f_1[8], 0, 1);
			}
			else
			{
				__LIB_1__::func_221(Local_103.f_1[8], 1, 1);
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
		if (bLocal_102)
		{
			if (__LIB_17__::func_913(&Local_103))
			{
				bLocal_102 = true;
			}
			else
			{
				bLocal_102 = false;
			}
		}
		__LIB_5__::func_647(Local_103);
		__LIB_17__::func_914(&Local_103);
		__LIB_5__::func_618(&(Local_103.f_90), &(Local_103.f_91), &(Local_103.f_94), &(Local_103.f_95), joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_LOOK_LR"), joaat("INPUT_LOOK_UD"), 2);
		if (__LIB_1__::func_732(Local_103.f_1[2], 1) || __LIB_1__::func_732(Local_103.f_1[7], 1))
		{
			iLocal_94 = 1;
			if (__LIB_5__::func_619(&Local_103) != 3)
			{
				if (__LIB_5__::func_619(&Local_103) == 6)
				{
					__LIB_5__::func_620();
					if (AUDIO::_0x4AD019591E94C064("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					iLocal_248 = MISC::GET_GAME_TIMER();
					bLocal_249 = true;
					func_16();
					Global_1357507 = 0;
					__LIB_17__::func_915(&Local_103, 4);
				}
			}
			else
			{
				__LIB_17__::func_915(&Local_103, 15);
			}
		}
		func_18(&Local_103);
		iVar0 = __LIB_5__::func_619(&Local_103);
		if (__LIB_5__::func_621())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (__LIB_5__::func_622())
				{
					iLocal_50 = 0;
					uLocal_58 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_59 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "cameraRollCapacityLabel", "Disabled");
					func_21();
					__LIB_17__::func_915(&Local_103, 1);
				}
				else
				{
					if (__LIB_0__::func_81(&Local_103))
					{
						GRAPHICS::_0xA42EDF1E88734A7E();
						iLocal_50 = 1;
						__LIB_4__::func_181(&Local_103);
					}
					__LIB_17__::func_915(&Local_103, 1);
				}
				break;
			case 1:
				if (__LIB_0__::func_81(&Local_103))
				{
					__LIB_4__::func_181(&Local_103);
				}
				func_24();
				Local_103.f_89 = 0;
				__LIB_17__::func_916();
				iLocal_31 = MISC::GET_GAME_TIMER();
				iLocal_32 = AUDIO::GET_SOUND_ID();
				iLocal_33 = AUDIO::GET_SOUND_ID();
				iLocal_36 = AUDIO::GET_SOUND_ID();
				iLocal_37 = AUDIO::GET_SOUND_ID();
				iLocal_40 = AUDIO::GET_SOUND_ID();
				iLocal_41 = AUDIO::GET_SOUND_ID();
				__LIB_17__::func_915(&Local_103, 2);
				ANIMSCENE::_0x7C709C01D43D94CD();
				break;
			case 2:
				if (__LIB_0__::func_81(&Local_103))
				{
					__LIB_4__::func_181(&Local_103);
				}
				if (__LIB_5__::func_623())
				{
					if (ANIMSCENE::_0x2DB524750DC41ED4())
					{
						if (__LIB_17__::func_917(iLocal_31, iLocal_22))
						{
							if (func_28())
							{
								__LIB_5__::func_624(1);
								if (func_30())
								{
									Local_103.f_89 = Global_1357504;
									func_31();
									__LIB_17__::func_915(&Local_103, 14);
								}
								else
								{
									__LIB_17__::func_915(&Local_103, 12);
								}
								HUD::_HIDE_HUD_COMPONENT(-1404924319);
								func_32();
							}
						}
					}
				}
				else if (__LIB_17__::func_917(iLocal_31, iLocal_22) && __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_KIT_CAMERA"))
				{
					__LIB_17__::func_915(&Local_103, 3);
				}
				break;
			case 4:
				__LIB_17__::func_914(&Local_103);
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				if (bLocal_249)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_248) > 500)
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1404924319);
						CAM::SET_CAM_ACTIVE(Local_103.f_32, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_103.f_32);
						CAM::DESTROY_CAM(Local_103.f_32, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						__LIB_17__::func_915(&Local_103, 3);
						func_34();
						bLocal_249 = false;
						func_35();
					}
				}
				break;
			case 3:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_240) > 100)
				{
					func_36();
					iLocal_240 = MISC::GET_GAME_TIMER();
				}
				if (__LIB_0__::func_81(&Local_103))
				{
					__LIB_5__::func_652(&Local_103);
					func_38(3);
					__LIB_0__::func_105(1);
					__LIB_4__::func_181(&Local_103);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
				if (iLocal_94 == 1 && Global_1357508 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_CAMERA_HANDHELD_USE")))
					{
						iLocal_94 = 0;
					}
					else
					{
						iLocal_94 = 1;
					}
				}
				if (Global_1357508 == 1)
				{
					iLocal_94 = 0;
				}
				if (bLocal_239 && iLocal_94 == 0)
				{
					__LIB_1__::func_221(Local_103.f_1[0], 1, 1);
					if (__LIB_1__::func_514(Local_103.f_1[0], 1) || Global_1357508 == 1)
					{
						if (!__LIB_5__::func_623())
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						}
						if (Global_1357508 != 1)
						{
						}
						else
						{
							Global_1357508 = 0;
						}
						Global_1357507 = 1;
						func_16();
						HUD::_HIDE_HUD_COMPONENT(-1404924319);
						func_41();
						iLocal_216 = MISC::GET_GAME_TIMER();
						__LIB_17__::func_915(&Local_103, 5);
					}
				}
				else
				{
					__LIB_1__::func_221(Local_103.f_1[0], 0, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_219) > 600)
				{
					func_42();
					iLocal_219 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_218)
				{
					__LIB_1__::func_221(Local_103.f_1[1], 1, 1);
					if (__LIB_1__::func_514(Local_103.f_1[1], 1))
					{
						if (__LIB_2__::func_65(Global_35, 0))
						{
						}
						else
						{
							iLocal_245 = 0;
							iLocal_247 = 0;
							func_16();
							__LIB_17__::func_915(&Local_103, 8);
							if (!__LIB_0__::func_75(&uLocal_242))
							{
								__LIB_1__::func_283(&uLocal_242, 1);
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
					__LIB_1__::func_221(Local_103.f_1[1], 0, 1);
				}
				break;
			case 5:
				if (__LIB_0__::func_81(&Local_103))
				{
					__LIB_4__::func_181(&Local_103);
				}
				if (func_46() && (MISC::GET_GAME_TIMER() - iLocal_216) > 500)
				{
					func_47();
					if (!__LIB_5__::func_623())
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
					}
					Local_103.f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					Local_103.f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
					Local_103.f_83 = { Local_103.f_71, Local_103.f_71.f_1, Local_103.f_71.f_2 };
					Local_103.f_77 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_103.f_68, Local_103.f_71.f_2, 0f, 0.3f, 0.5f) };
					Local_103.f_110 = 0;
					Local_103.f_83 = { 0f, 0f, 0f };
					Local_103.f_82 = 0f;
					Local_103.f_81 = 0f;
					Local_103.f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_103.f_77, Local_103.f_83, 65f, false, 2);
					CAM::ATTACH_CAM_TO_PED_BONE(Local_103.f_32, Global_35, 21030, 0f, 0.2f, 0f, true);
					CAM::SET_CAM_NEAR_CLIP(Local_103.f_32, 0.25f);
					Local_103.f_33 = 5f;
					Local_103.f_33.f_1 = 2f;
					Local_103.f_33.f_2 = 128f;
					Local_103.f_33.f_3 = 25f;
					Local_103.f_33.f_4 = 25f;
					Local_103.f_33.f_5 = 60f;
					Local_103.f_33.f_6 = 1;
					Local_103.f_33.f_7 = 0;
					Local_103.f_33.f_8 = 1;
					Local_103.f_33.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_103.f_32, &(Local_103.f_33));
					CAM::_0x9F97E85EC142255E(Local_103.f_32, Local_103.f_110);
					CAM::_0x42ED56B02E05D109(Local_103.f_32, false);
					CAM::SET_CAM_ACTIVE(Local_103.f_32, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::_0x4AD019591E94C064("Expand_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Expand_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_42();
					iLocal_219 = MISC::GET_GAME_TIMER();
					func_35();
					__LIB_17__::func_915(&Local_103, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				if (iLocal_95 != 0)
				{
				}
				else if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					Global_1357509 = 1;
					iLocal_95 = 1;
				}
				if (MISC::IS_BIT_SET(Global_1357510, 6))
				{
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (__LIB_0__::func_81(&Local_103))
				{
					func_38(6);
					__LIB_4__::func_181(&Local_103);
				}
				func_48(&Local_103);
				if (iLocal_98 == 0)
				{
					if (__LIB_5__::func_648(Local_103.f_1[6]) && !__LIB_5__::func_625(&Local_103, 32))
					{
						__LIB_5__::func_652(&Local_103);
						__LIB_5__::func_626(1);
						__LIB_5__::func_627(&Local_103, 32);
					}
					if (!__LIB_5__::func_625(&Local_103, 32))
					{
						if (__LIB_5__::func_648(Local_103.f_1[5]))
						{
							__LIB_5__::func_628();
						}
					}
				}
				break;
			case 11:
				if (__LIB_0__::func_81(&Local_103))
				{
					Local_103.f_1[6] = __LIB_2__::func_403("CAM_TAKE_PHOTO", joaat("INPUT_CONTEXT_RT"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_0__::func_105(1);
					__LIB_4__::func_981("CAM_SNAP", 0, 0, 1);
					__LIB_4__::func_181(&Local_103);
				}
				if (__LIB_5__::func_629())
				{
					if (!__LIB_5__::func_625(&Local_103, 16))
					{
						__LIB_17__::func_915(&Local_103, 3);
					}
					else
					{
						__LIB_17__::func_915(&Local_103, 16);
					}
				}
				else
				{
					__LIB_17__::func_918(&Local_103);
				}
				break;
			case 10:
				func_58(&Local_103);
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				iLocal_94 = 1;
				if (iLocal_246 == 0)
				{
					if (__LIB_3__::func_135(&uLocal_242) > 500)
					{
						if (CAM::DOES_CAM_EXIST(Local_103.f_32))
						{
							CAM::SET_CAM_ACTIVE(Local_103.f_32, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(Local_103.f_32, false);
						}
						if (!__LIB_5__::func_623())
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, true, true, true, false);
						ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_395);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_34();
						iLocal_246 = 1;
					}
				}
				if (__LIB_3__::func_135(&uLocal_242) > 1000)
				{
					HUD::_DISPLAY_HUD_COMPONENT(-1404924319);
					func_35();
					__LIB_0__::func_37(&uLocal_242);
					__LIB_5__::func_620();
					__LIB_17__::func_915(&Local_103, 3);
				}
				break;
			case 8:
				func_58(&Local_103);
				if (iLocal_245 != 0)
				{
				}
				else if (__LIB_3__::func_135(&uLocal_242) > 500)
				{
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, false, false, true, false);
					if (!__LIB_5__::func_623())
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_220, fLocal_231, true, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
					}
					func_47();
					bLocal_394 = false;
					iLocal_245 = 1;
				}
				if (iLocal_245 == 1)
				{
					if (iLocal_247 == 0)
					{
						if (__LIB_3__::func_135(&uLocal_242) > 300)
						{
							iLocal_247 = 1;
							func_61(&Local_103);
						}
					}
					else if (__LIB_3__::func_135(&uLocal_242) > 1000)
					{
						__LIB_0__::func_37(&uLocal_242);
						func_62(&Local_103);
						func_35();
						__LIB_17__::func_915(&Local_103, 9);
					}
				}
				break;
			case 9:
				func_58(&Local_103);
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (__LIB_0__::func_81(&Local_103))
				{
					__LIB_4__::func_181(&Local_103);
				}
				func_62(&Local_103);
				if (__LIB_1__::func_514(Local_103.f_1[6], 1) && !__LIB_5__::func_625(&Local_103, 32))
				{
					__LIB_5__::func_652(&Local_103);
					__LIB_5__::func_626(1);
					__LIB_5__::func_627(&Local_103, 32);
				}
				else if (__LIB_1__::func_514(Local_103.f_1[1], 1))
				{
					__LIB_17__::func_915(&Local_103, 8);
				}
				if (!__LIB_5__::func_625(&Local_103, 32))
				{
					if (__LIB_5__::func_648(Local_103.f_1[5]))
					{
						__LIB_5__::func_628();
					}
				}
				break;
			case 7:
				__LIB_17__::func_915(&Local_103, 12);
				break;
			case 15:
				if (__LIB_0__::func_81(&Local_103))
				{
					__LIB_4__::func_181(&Local_103);
				}
				__LIB_5__::func_652(&Local_103);
				__LIB_17__::func_915(&Local_103, 16);
				break;
			case 16:
				if (__LIB_0__::func_81(&Local_103))
				{
					__LIB_4__::func_181(&Local_103);
				}
				func_2();
				__LIB_17__::func_912(&Local_103, 1);
				if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
				{
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_63())
		{
			if (__LIB_0__::func_265(&uLocal_259) > 1f)
			{
				func_65();
			}
		}
		if (iVar0 != 12)
		{
		}
		else
		{
			CAM::_0x8505E05FC8822843(0);
			if (bLocal_23)
			{
				if (BUILTIN::TIMERA() > 1200)
				{
					if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_24))
					{
						GRAPHICS::ANIMPOSTFX_STOP(sLocal_24);
					}
					bLocal_23 = false;
				}
			}
			else if (CAM::_0xEF9A3132A0AA6B19())
			{
				BUILTIN::SETTIMERA(0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_24))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sLocal_24);
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("hide_hud", "Photo_Mode_Sounds", true, 0);
					}
				}
				bLocal_23 = true;
			}
			func_66();
			if (__LIB_1__::func_732(Local_103.f_1[20], 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND("reset", "Photo_Mode_Sounds", true, 0);
				}
			}
			fLocal_14 = CAM::_GET_PHOTO_MODE_FOCAL_LENGTH();
			if (fLocal_15 == fLocal_14)
			{
			}
			else
			{
				fLocal_15 = fLocal_14;
				func_32();
			}
			if (__LIB_5__::func_649(Local_103.f_1[21], 0, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND("lens_up", "Photo_Mode_Sounds", false, 2);
				}
			}
			if (__LIB_5__::func_649(Local_103.f_1[21], 1, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND("lens_down", "Photo_Mode_Sounds", false, 2);
				}
			}
			if (__LIB_5__::func_649(Local_103.f_1[22], 0, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
				}
			}
			if (__LIB_5__::func_649(Local_103.f_1[22], 1, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(sLocal_47, "Photo_Mode_Sounds", false, 2);
				}
			}
			if (CAM::_0x14C4A49E36C29E49())
			{
				if (iLocal_241 != 0)
				{
				}
				else
				{
					if (CAM::_0xF824530B612FE0CE())
					{
						iLocal_241 = 1;
					}
					else
					{
						iLocal_241 = 2;
					}
					func_32();
					__LIB_5__::func_652(&Local_103);
					func_38(12);
				}
				if (iLocal_241 != 1)
				{
					if (iLocal_241 == 2)
					{
						if (CAM::_0xF824530B612FE0CE())
						{
							iLocal_241 = 1;
							func_32();
							__LIB_5__::func_652(&Local_103);
							func_38(12);
						}
					}
				}
				else if (!CAM::_0xF824530B612FE0CE())
				{
					iLocal_241 = 2;
					func_32();
					__LIB_5__::func_652(&Local_103);
					func_38(12);
				}
			}
			else
			{
				iLocal_241 = 0;
			}
			if (__LIB_0__::func_81(&Local_103))
			{
				__LIB_5__::func_652(&Local_103);
				func_38(12);
				__LIB_4__::func_181(&Local_103);
			}
			PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOMODE"));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PMB", 1, 0, 0, 0);
			if (iLocal_35 == 0)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_PHOTO_MODE_ZOOM_OUT")))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::_0xCE5D0FFE83939AF1(iLocal_33, "zoom_out", "Photo_Mode_Sounds", 1);
					}
					iLocal_35 = 1;
				}
			}
			else if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_PHOTO_MODE_ZOOM_OUT")) || CAM::_0x2AB7C81B3F70570C())
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_33);
				iLocal_35 = 0;
			}
			if (iLocal_34 == 0)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_PHOTO_MODE_ZOOM_IN")))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::_0xCE5D0FFE83939AF1(iLocal_32, "zoom_In", "Photo_Mode_Sounds", 1);
					}
					iLocal_34 = 1;
				}
			}
			else if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_PHOTO_MODE_ZOOM_IN")) || CAM::_0x2AB7C81B3F70570C())
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_32);
				iLocal_34 = 0;
			}
			if (!__LIB_5__::func_625(&Local_103, 32))
			{
				if (__LIB_1__::func_732(Local_103.f_1[19], 1))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("effects", "Photo_Mode_Sounds", true, 0);
					}
					AUDIO::_0x3210BCB36AF7621B(iLocal_32);
					AUDIO::_0x3210BCB36AF7621B(iLocal_33);
					AUDIO::_0x3210BCB36AF7621B(iLocal_36);
					AUDIO::_0x3210BCB36AF7621B(iLocal_37);
					AUDIO::_0x3210BCB36AF7621B(iLocal_40);
					AUDIO::_0x3210BCB36AF7621B(iLocal_41);
					__LIB_17__::func_915(&Local_103, 13);
					func_32();
				}
			}
		}
		if (iVar0 != 13)
		{
		}
		else
		{
			func_66();
			func_68();
			func_69();
			CAM::_0x8505E05FC8822843(1);
			fLocal_16 = CAM::_GET_PHOTO_MODE_DOF();
			if (fLocal_17 != fLocal_16)
			{
				fLocal_17 = fLocal_16;
				func_32();
			}
			fLocal_18 = CAM::_GET_PHOTO_MODE_FOCUS_DISTANCE();
			if (fLocal_19 == fLocal_18)
			{
			}
			else
			{
				fLocal_19 = fLocal_18;
				func_32();
			}
			if (__LIB_0__::func_81(&Local_103))
			{
				__LIB_5__::func_652(&Local_103);
				func_38(13);
				__LIB_4__::func_181(&Local_103);
			}
			PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOMODE"));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PMA", 1, 0, 0, 0);
			if (!__LIB_5__::func_625(&Local_103, 32))
			{
				if (__LIB_1__::func_732(Local_103.f_1[19], 1))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("effects", "Photo_Mode_Sounds", true, 0);
					}
					AUDIO::_0x3210BCB36AF7621B(iLocal_36);
					AUDIO::_0x3210BCB36AF7621B(iLocal_37);
					AUDIO::_0x3210BCB36AF7621B(iLocal_40);
					AUDIO::_0x3210BCB36AF7621B(iLocal_41);
					func_31();
					__LIB_17__::func_915(&Local_103, 14);
					func_32();
				}
				func_70();
			}
		}
		if (iVar0 != 14)
		{
		}
		else
		{
			func_66();
			CAM::_0x8505E05FC8822843(2);
			if (__LIB_0__::func_81(&Local_103))
			{
				__LIB_5__::func_652(&Local_103);
				func_38(14);
				__LIB_4__::func_181(&Local_103);
			}
			PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOMODE"));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PME", 1, 0, 0, 0);
			if (!__LIB_5__::func_625(&Local_103, 32))
			{
				func_71();
				func_72();
			}
			if (!__LIB_5__::func_625(&Local_103, 32))
			{
				if (__LIB_1__::func_732(Local_103.f_1[19], 1))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("effects", "Photo_Mode_Sounds", true, 0);
					}
					AUDIO::_0x3210BCB36AF7621B(iLocal_36);
					AUDIO::_0x3210BCB36AF7621B(iLocal_37);
					AUDIO::_0x3210BCB36AF7621B(iLocal_40);
					AUDIO::_0x3210BCB36AF7621B(iLocal_41);
					__LIB_17__::func_915(&Local_103, 12);
					func_32();
				}
			}
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PLAYER_MENU")) > 0)
		{
			bLocal_102 = false;
		}
		if (MISC::IS_BIT_SET(Global_1357505, 8))
		{
			bLocal_102 = false;
		}
	}
	func_2();
	__LIB_17__::func_912(&Local_103, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	if (iLocal_48 == 1)
	{
		_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_97);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_58);
	UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_400);
	iLocal_400 = 0;
	func_34();
	func_76();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_91))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_91);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_24))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_24);
	}
	GRAPHICS::_0x37D7BDBA89F13959(sLocal_24);
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_92))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_92);
	}
	iLocal_343 = 0;
	while (iLocal_343 < 39)
	{
		GRAPHICS::_0x37D7BDBA89F13959(sLocal_303[iLocal_343]);
		iLocal_343++;
	}
	__LIB_5__::func_620();
	func_77();
	__LIB_5__::func_626(0);
}

bool func_3()
{
	return !Global_40.f_12017;
}

void func_4(bool bParam0)
{
	Global_40.f_12017 = !bParam0;
}

void func_5()
{
	Local_103.f_106 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_103.f_106 == 1)
	{
	}
	if (Local_103.f_106 == 0)
	{
		bLocal_49 = false;
		iLocal_51 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		if (MISC::IS_PC_VERSION())
		{
			iLocal_52 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		}
		else
		{
			iLocal_52 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		}
		uLocal_58 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_59 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "cameraRollCapacityLabel", " ");
		uLocal_60 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "photoModeLabel0", " ");
		uLocal_61 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "photoModeLabel1", " ");
		uLocal_62 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "photoModeLabel2", " ");
		uLocal_63 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "photoModeLabel3", " ");
		fLocal_19 = CAM::_GET_PHOTO_MODE_FOCUS_DISTANCE();
		func_32();
		iLocal_50 = 0;
		bLocal_54 = true;
		iLocal_55 = MISC::GET_GAME_TIMER();
	}
	else if (Local_103.f_106 == 2)
	{
		bLocal_49 = true;
		uLocal_58 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_59 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "cameraRollCapacityLabel", "failed/failed");
		func_21();
		iLocal_50 = 0;
		bLocal_54 = false;
	}
}

void func_16()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_91))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_91);
	}
}

void func_18(var uParam0)
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;
	if (func_30())
	{
		if (__LIB_1__::func_264(uParam0->f_1[19], 1))
		{
			__LIB_1__::func_221(uParam0->f_1[19], 0, 1);
		}
		if (__LIB_1__::func_264(uParam0->f_1[23], 1))
		{
			__LIB_1__::func_221(uParam0->f_1[23], 0, 1);
		}
	}
	if (bLocal_30 == 1)
	{
		if (__LIB_1__::func_264(uParam0->f_1[14], 1) && (MISC::_GET_SYSTEM_TIME() - iLocal_22) > 3000)
		{
			__LIB_1__::func_221(uParam0->f_1[14], 1, 1);
		}
		if (__LIB_1__::func_264(uParam0->f_1[18], 1))
		{
			if ((uParam0->f_108 == 0 && iLocal_50 == 0) && (MISC::_GET_SYSTEM_TIME() - iLocal_22) > 1000)
			{
				__LIB_1__::func_221(uParam0->f_1[18], 1, 1);
				if (bLocal_54)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_55) > 2500)
					{
						iLocal_51 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
						func_32();
						iLocal_55 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				__LIB_1__::func_221(uParam0->f_1[18], 0, 1);
				if (bLocal_30 == 0)
				{
				}
			}
		}
	}
	switch (uParam0->f_108)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_97);
				bLocal_49 = true;
				__LIB_5__::func_636(uParam0, 2);
				iLocal_48 = 0;
			}
			break;
		case 0:
			if (__LIB_5__::func_625(uParam0, 32))
			{
				if (!__LIB_5__::func_623())
				{
					__LIB_5__::func_652(uParam0);
				}
				if (__LIB_5__::func_622() || bLocal_49)
				{
					__LIB_5__::func_636(uParam0, 2);
				}
				else if (iLocal_51 == iLocal_52)
				{
					if (iLocal_97 == 0)
					{
						Var0.f_2 = 4;
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_97 = __LIB_5__::func_637(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						__LIB_5__::func_636(uParam0, 1);
						iLocal_48 = 1;
					}
					else
					{
						bLocal_49 = true;
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
			Local_103.f_112 = 0;
			__LIB_5__::func_626(0);
			__LIB_5__::func_636(uParam0, 3);
			iLocal_101 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_101) > 0 || __LIB_5__::func_623())
			{
				iLocal_101 = MISC::GET_GAME_TIMER();
				if (__LIB_5__::func_622() || bLocal_49)
				{
					__LIB_5__::func_636(uParam0, 4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_51++;
					func_32();
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
				GRAPHICS::_0xFA91736933AB3D93(1);
				GRAPHICS::_0x8B3296278328B5EB(Local_103.f_89);
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
				iLocal_53 = 0;
				__LIB_5__::func_636(uParam0, 6);
			}
			else if (uParam0->f_106 == 2)
			{
				__LIB_5__::func_636(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_53 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_38(__LIB_5__::func_619(uParam0));
				__LIB_1__::func_221(uParam0->f_1[6], 0, 1);
				iLocal_53 = 1;
			}
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 0)
			{
				Local_103.f_112 = 1;
				__LIB_5__::func_643(uParam0, 32);
				__LIB_5__::func_636(uParam0, 0);
				func_107();
			}
			else if (uParam0->f_106 == 2)
			{
				Local_103.f_112 = 1;
				__LIB_5__::func_643(uParam0, 32);
				__LIB_5__::func_636(uParam0, 0);
				func_107();
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_101) > 300 || __LIB_5__::func_623())
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				__LIB_5__::func_643(uParam0, 32);
				__LIB_5__::func_636(uParam0, 0);
				func_38(__LIB_5__::func_619(uParam0));
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

void func_21()
{
	StringCopy(&cLocal_64, "-", 32);
	StringConCat(&cLocal_64, " / ", 32);
	StringCopy(&cLocal_68, "-", 32);
	StringConCat(&cLocal_64, &cLocal_68, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, &cLocal_64);
}

void func_24()
{
	sLocal_303[0] = "No_PostFX_Applied";
	sLocal_263[0] = "CAM_PM_F_V0";
	sLocal_303[1] = "PhotoMode_FilterVintage01";
	iLocal_344[1] = 2;
	sLocal_263[1] = "CAM_PM_F_V1";
	sLocal_303[2] = "PhotoMode_FilterVintage02";
	iLocal_344[2] = 2;
	sLocal_263[2] = "CAM_PM_F_V2";
	sLocal_303[3] = "PhotoMode_FilterVintage03";
	iLocal_344[3] = 2;
	sLocal_263[3] = "CAM_PM_F_V3";
	sLocal_303[4] = "PhotoMode_FilterVintage04";
	iLocal_344[4] = 2;
	sLocal_263[4] = "CAM_PM_F_V4";
	sLocal_303[5] = "PhotoMode_FilterVintage05";
	iLocal_344[5] = 2;
	sLocal_263[5] = "CAM_PM_F_V5";
	sLocal_303[6] = "PhotoMode_FilterVintage06";
	iLocal_344[6] = 2;
	sLocal_263[6] = "CAM_PM_F_V6";
	sLocal_303[7] = "PhotoMode_FilterVintage07";
	iLocal_344[7] = 2;
	sLocal_263[7] = "CAM_PM_F_V7";
	sLocal_303[8] = "PhotoMode_FilterVintage08";
	iLocal_344[8] = 2;
	sLocal_263[8] = "CAM_PM_F_V8";
	sLocal_303[9] = "PhotoMode_FilterVintage09";
	iLocal_344[9] = 2;
	sLocal_263[9] = "CAM_PM_F_V9";
	sLocal_303[10] = "PhotoMode_FilterVintage10";
	iLocal_344[10] = 2;
	sLocal_263[10] = "CAM_PM_F_V10";
	sLocal_303[11] = "PhotoMode_FilterModern01";
	iLocal_344[11] = 1;
	sLocal_263[11] = "CAM_PM_F_M1";
	sLocal_303[12] = "PhotoMode_FilterModern02";
	iLocal_344[12] = 1;
	sLocal_263[12] = "CAM_PM_F_M2";
	sLocal_303[13] = "PhotoMode_FilterModern03";
	iLocal_344[13] = 1;
	sLocal_263[13] = "CAM_PM_F_M3";
	sLocal_303[14] = "PhotoMode_FilterModern04";
	iLocal_344[14] = 1;
	sLocal_263[14] = "CAM_PM_F_M4";
	sLocal_303[15] = "PhotoMode_FilterModern05";
	iLocal_344[15] = 1;
	sLocal_263[15] = "CAM_PM_F_M5";
	sLocal_303[16] = "PhotoMode_FilterModern06";
	iLocal_344[16] = 1;
	sLocal_263[16] = "CAM_PM_F_M6";
	sLocal_303[17] = "PhotoMode_FilterModern07";
	iLocal_344[17] = 1;
	sLocal_263[17] = "CAM_PM_F_M7";
	sLocal_303[18] = "PhotoMode_FilterModern08";
	iLocal_344[18] = 1;
	sLocal_263[18] = "CAM_PM_F_M8";
	sLocal_303[19] = "PhotoMode_FilterModern09";
	iLocal_344[19] = 1;
	sLocal_263[19] = "CAM_PM_F_M9";
	sLocal_303[20] = "PhotoMode_FilterModern10";
	iLocal_344[20] = 1;
	sLocal_263[20] = "CAM_PM_F_M10";
	sLocal_303[21] = "PhotoMode_FilterGame01";
	iLocal_344[21] = 0;
	sLocal_263[21] = "CAM_PM_F_S1";
	sLocal_303[22] = "PhotoMode_FilterGame02";
	iLocal_344[22] = 0;
	sLocal_263[22] = "CAM_PM_F_S2";
	sLocal_303[23] = "PhotoMode_FilterGame03";
	iLocal_344[23] = 0;
	sLocal_263[23] = "CAM_PM_F_S3";
	sLocal_303[24] = "PhotoMode_FilterGame04";
	iLocal_344[24] = 0;
	sLocal_263[24] = "CAM_PM_F_S4";
	sLocal_303[25] = "PhotoMode_FilterGame05";
	iLocal_344[25] = 0;
	sLocal_263[25] = "CAM_PM_F_S5";
	sLocal_303[26] = "PhotoMode_FilterGame06";
	iLocal_344[26] = 0;
	sLocal_263[26] = "CAM_PM_F_S6";
	sLocal_303[27] = "PhotoMode_FilterGame07";
	iLocal_344[27] = 0;
	sLocal_263[27] = "CAM_PM_F_S7";
	sLocal_303[28] = "PhotoMode_FilterGame08";
	iLocal_344[28] = 0;
	sLocal_263[28] = "CAM_PM_F_S8";
	sLocal_303[29] = "PhotoMode_FilterGame09";
	iLocal_344[29] = 0;
	sLocal_263[29] = "CAM_PM_F_S9";
	sLocal_303[30] = "PhotoMode_FilterGame10";
	iLocal_344[30] = 0;
	sLocal_263[30] = "CAM_PM_F_S10";
	sLocal_303[31] = "PhotoMode_FilterGame11";
	iLocal_344[31] = 0;
	sLocal_263[31] = "CAM_PM_F_S11";
	sLocal_303[32] = "PhotoMode_FilterGame12";
	iLocal_344[32] = 0;
	sLocal_263[32] = "CAM_PM_F_S12";
	sLocal_303[33] = "PhotoMode_FilterGame13";
	iLocal_344[33] = 0;
	sLocal_263[33] = "CAM_PM_F_S13";
	sLocal_303[34] = "PhotoMode_FilterGame14";
	iLocal_344[34] = 0;
	sLocal_263[34] = "CAM_PM_F_S14";
	sLocal_303[35] = "PhotoMode_FilterGame15";
	iLocal_344[35] = 0;
	sLocal_263[35] = "CAM_PM_F_S15";
	sLocal_303[36] = "PhotoMode_FilterGame16";
	iLocal_344[36] = 0;
	sLocal_263[36] = "CAM_PM_F_S16";
	sLocal_303[37] = "PhotoMode_FilterGame17";
	iLocal_344[37] = 0;
	sLocal_263[37] = "CAM_PM_F_S17";
	sLocal_303[38] = "PhotoMode_FilterGame18";
	iLocal_344[38] = 0;
	sLocal_263[38] = "CAM_PM_F_S18";
}

bool func_28()
{
	if (ANIMSCENE::_0xEA41D44A8D42057B())
	{
		return true;
	}
	return false;
}

bool func_30()
{
	MISC::SET_BIT(&Global_1357505, 0);
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_PEEPING_TOM")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, -283.7343f, 865.7388f, 120.1339f, 1) < 30f)
		{
			return true;
		}
	}
	if (GRAPHICS::_0x3DA7A10583A4BEC0())
	{
		return true;
	}
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		return true;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		return true;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return true;
	}
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return true;
	}
	if (__LIB_16__::func_357())
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEECHERS2_2")) > 0)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_NAKED_SWIMMER")) > 0)
	{
		return true;
	}
	if (bLocal_20)
	{
		return true;
	}
	if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
	{
		return true;
	}
	if (CAM::_0x20389408F0E93B9A())
	{
		return true;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || Global_1914319.f_18941.f_17)
	{
		return true;
	}
	MISC::CLEAR_BIT(&Global_1357505, 0);
	return false;
}

void func_31()
{
	if (iLocal_76 == 0)
	{
		Local_103.f_89 = Global_1357504;
		iLocal_76 = 1;
	}
	if (Local_103.f_89 != 0)
	{
		sLocal_92 = sLocal_303[Local_103.f_89];
		func_111();
		func_32();
	}
}

void func_32()
{
	if (bLocal_30 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, " ");
	}
	else
	{
		if (__LIB_5__::func_619(&Local_103) == 12)
		{
			func_112();
		}
		if (__LIB_5__::func_619(&Local_103) == 13)
		{
			func_113();
		}
		if (__LIB_5__::func_619(&Local_103) == 14)
		{
			func_114();
		}
		StringCopy(&cLocal_64, "", 32);
		MISC::_INT_TO_STRING(iLocal_51, "%i", &cLocal_64);
		StringConCat(&cLocal_64, " / ", 32);
		StringCopy(&cLocal_68, "", 32);
		MISC::_INT_TO_STRING(iLocal_52, "%i", &cLocal_68);
		StringConCat(&cLocal_64, &cLocal_68, 32);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, &cLocal_64);
	}
}

void func_34()
{
	if (__LIB_5__::func_623())
	{
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_89))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_89);
	}
}

void func_35()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_91))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sLocal_91);
	}
}

void func_36()
{
	float fVar0;
	vector3 vVar1;
	vLocal_223 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_223, fVar0, 0f, 2f, -0.2f) };
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bLocal_239 = false;
		return;
	}
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, vVar1.z, 3167))
	{
		bLocal_239 = true;
	}
	else
	{
		bLocal_239 = false;
	}
}

void func_38(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			func_116(6, 0);
			func_116(7, 1);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(4, 0);
			func_116(5, 1);
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(11, 0);
			func_116(12, 0);
			func_116(13, 1);
			func_116(14, 1);
			func_116(15, 1);
			func_116(16, 1);
			func_116(18, 1);
			func_116(19, 1);
			func_116(20, 1);
			func_116(21, 1);
			func_116(22, 1);
			func_116(17, 0);
			func_116(23, 0);
			func_116(24, 0);
			func_116(25, 0);
			func_116(26, 0);
			func_116(27, 0);
			func_116(28, 0);
			break;
		case 13:
			func_116(6, 0);
			func_116(7, 1);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(4, 0);
			func_116(5, 1);
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(11, 0);
			func_116(12, 0);
			func_116(13, 0);
			func_116(14, 1);
			func_116(15, 0);
			func_116(16, 0);
			func_116(17, 0);
			func_116(18, 1);
			func_116(19, 1);
			func_116(23, 1);
			func_116(24, 0);
			func_116(25, 0);
			if (bLocal_11)
			{
				func_116(26, 1);
				__LIB_1__::func_221(Local_103.f_1[26], 0, 1);
			}
			else
			{
				func_116(26, 1);
				__LIB_1__::func_221(Local_103.f_1[26], 1, 1);
			}
			func_116(27, 1);
			func_116(28, 1);
			break;
		case 14:
			func_116(6, 0);
			func_116(7, 1);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(4, 0);
			func_116(5, 1);
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(11, 0);
			func_116(12, 0);
			func_116(13, 0);
			func_116(14, 1);
			func_116(15, 0);
			func_116(16, 0);
			func_116(17, 1);
			func_116(18, 1);
			func_116(19, 1);
			func_116(23, 0);
			if (Local_103.f_89 == 0)
			{
				func_116(24, 1);
				__LIB_1__::func_221(Local_103.f_1[24], 0, 1);
			}
			else
			{
				func_116(24, 1);
				__LIB_1__::func_221(Local_103.f_1[24], 1, 1);
			}
			func_116(25, 1);
			func_116(26, 0);
			func_116(27, 0);
			func_116(28, 0);
			break;
		case 3:
			func_116(6, 0);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(7, 0);
			func_116(4, 0);
			func_116(5, 0);
			func_116(0, 1);
			func_116(1, 1);
			func_116(2, 1);
			break;
		case 6:
			func_116(0, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(5, 1);
			func_116(3, 1);
			func_116(4, 1);
			func_116(6, 1);
			func_116(7, 1);
			break;
		case 8:
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(5, 1);
			func_116(8, 1);
			func_116(9, 1);
			func_116(3, 1);
			func_116(4, 1);
			func_116(6, 1);
			func_116(7, 1);
			break;
		case 9:
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(5, 1);
			func_116(8, 1);
			func_116(9, 1);
			func_116(3, 1);
			func_116(4, 1);
			func_116(6, 1);
			func_116(7, 1);
			break;
		case 10:
			func_116(2, 0);
			func_116(0, 0);
			func_116(3, 0);
			func_116(1, 0);
			func_116(5, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(7, 0);
			func_116(6, 0);
			func_116(9, 0);
			func_116(4, 0);
			break;
		case 7:
			func_116(2, 0);
			func_116(0, 0);
			func_116(6, 0);
			func_116(4, 0);
			func_116(5, 0);
			func_116(1, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(7, 0);
			break;
	}
	if ((MISC::_GET_SYSTEM_TIME() - iLocal_22) > 3000)
	{
		func_117(bLocal_30);
	}
	else
	{
		if ((MISC::_GET_SYSTEM_TIME() - iLocal_22) < 1000)
		{
			__LIB_1__::func_221(Local_103.f_1[18], 0, 1);
		}
		__LIB_1__::func_221(Local_103.f_1[14], 0, 1);
	}
}

void func_41()
{
	if (iLocal_398 == 0)
	{
		iLocal_398 = 1;
	}
}

void func_42()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;
	vLocal_223 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_223, fVar0, 0f, 4f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1.x, vVar1.y, (vVar1.z + 50f), &fVar4, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_223, &uVar5, false);
	if ((vLocal_223.z - fVar4) > 3f)
	{
		bLocal_218 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_218 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (PED::_0x50F124E6EF188B22(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_223, 2f) > 0)
	{
		bLocal_218 = false;
		return;
	}
	if ((fVar4 - vLocal_223.z) > 1f)
	{
		bLocal_218 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (__LIB_2__::func_65(Global_35, 0))
	{
		bLocal_218 = false;
		return;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_218 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_218 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_218 = true;
	}
	else
	{
		bLocal_218 = false;
	}
	if (bLocal_218)
	{
		vLocal_220 = { vLocal_223.x, vLocal_223.y, (vLocal_223.z - 1f) };
		fLocal_231 = fVar0;
		vLocal_226 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_46()
{
	switch (iLocal_398)
	{
		case 0:
			if (iLocal_399 == iLocal_401)
			{
			}
			break;
		case 1:
			iLocal_400 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_399);
			iLocal_398 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_400))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_400, iLocal_401);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_400);
				iLocal_398 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_47()
{
	if (__LIB_5__::func_623())
	{
	}
	else if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_89))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_89);
	}
}

void func_48(var uParam0)
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
	func_121(uParam0);
	func_122(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, uParam0->f_83, 50f, 0, 1, 1, 2, 0, 0);
	if ((__LIB_1__::func_44(Global_1347702[85 /*49*/].f_15) || __LIB_1__::func_44(Global_1347702[86 /*49*/].f_15)) || __LIB_1__::func_44(Global_1347702[87 /*49*/].f_15))
	{
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_240) > 100)
	{
		if (iLocal_96 == 0)
		{
			fVar14 = ENTITY::GET_ENTITY_HEADING(Global_35);
			vVar15 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_223, fVar14, 0f, 0.25f, 0f) };
			if (!ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar15.x, vVar15.y, vVar15.z, 3167))
			{
				Global_1357509 = 1;
				iLocal_96 = 1;
			}
		}
		iLocal_240 = MISC::GET_GAME_TIMER();
	}
}

void func_58(var uParam0)
{
	vLocal_223 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_223, vLocal_220, true) > 3f)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_220, fLocal_231, true, false, true);
		ENTITY::_SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_61(var uParam0)
{
	if (__LIB_0__::func_81(uParam0))
	{
		func_38(8);
		__LIB_4__::func_181(uParam0);
	}
	func_127(uParam0);
	func_128();
	func_129();
	uParam0->f_88 = 0;
	iLocal_392 = 0;
	bLocal_229 = true;
	bLocal_230 = false;
	HUD::_HIDE_HUD_COMPONENT(-1404924319);
}

void func_62(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	func_130(uParam0);
	if (PAD::_0x6CD79468A1E595C6(0))
	{
		vLocal_233 = { vLocal_236 };
		fLocal_232 = 0f;
		fLocal_396 = 0f;
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		fVar1 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_LR")) * 4.5f);
		fVar2 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_UD")) * 4.5f);
		fVar0 = __LIB_5__::func_644(vLocal_236.z, (vLocal_233.z - fVar1));
		if (fVar0 > 30f)
		{
			vLocal_233.f_2 = (vLocal_236.z - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_233.f_2 = (vLocal_236.z - -30f);
		}
		else
		{
			vLocal_233.f_2 = (vLocal_233.z - fVar1);
		}
		fVar0 = __LIB_5__::func_644(vLocal_236.x, (vLocal_233.x - fVar2));
		if (fVar0 > 30f)
		{
			vLocal_233.x = (vLocal_236.x - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_233.x = (vLocal_236.x - -30f);
		}
		else
		{
			vLocal_233.x = (vLocal_233.x - fVar2);
		}
	}
	else
	{
		if (uParam0->f_94 > 16)
		{
			if ((fLocal_232 - 0.07f) > -10f)
			{
				if (uParam0->f_94 > 100)
				{
					vLocal_233.f_2 = (vLocal_233.z - 0.6f);
					fLocal_232 = (fLocal_232 - (0.07f * 3f));
				}
				else
				{
					vLocal_233.f_2 = (vLocal_233.z - 0.2f);
					fLocal_232 = (fLocal_232 - 0.07f);
				}
			}
		}
		if (uParam0->f_94 < -16)
		{
			if ((fLocal_232 + 0.07f) < 10f)
			{
				if (uParam0->f_94 < -100)
				{
					vLocal_233.f_2 = (vLocal_233.z + 0.6f);
					fLocal_232 = (fLocal_232 + (0.07f * 3f));
				}
				else
				{
					vLocal_233.f_2 = (vLocal_233.z + 0.2f);
					fLocal_232 = (fLocal_232 + 0.07f);
				}
			}
		}
		if (uParam0->f_95 > 16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_396 - 0.07f) > -10f)
			{
				if (uParam0->f_95 > 100)
				{
					vLocal_233.x = (vLocal_233.x - 0.6f);
					fLocal_396 = (fLocal_396 - (0.07f * 3f));
				}
				else
				{
					vLocal_233.x = (vLocal_233.x - 0.2f);
					fLocal_396 = (fLocal_396 - 0.07f);
				}
			}
		}
		if (uParam0->f_95 < -16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_396 + 0.07f) < 10f)
			{
				if (uParam0->f_95 < -100)
				{
					vLocal_233.x = (vLocal_233.x + 0.6f);
					fLocal_396 = (fLocal_396 + (0.07f * 3f));
				}
				else
				{
					vLocal_233.x = (vLocal_233.x + 0.2f);
					fLocal_396 = (fLocal_396 + 0.07f);
				}
			}
		}
	}
	if (bLocal_229)
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vLocal_226, 3167))
		{
			bLocal_230 = false;
		}
		else
		{
			bLocal_230 = true;
		}
		bLocal_229 = false;
	}
	if ((__LIB_1__::func_514(uParam0->f_1[7], 1) || __LIB_2__::func_65(Global_35, 0)) || bLocal_230)
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
		iLocal_246 = 0;
		__LIB_5__::func_652(uParam0);
		__LIB_17__::func_915(uParam0, 10);
		func_16();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, "portrait_normal", __LIB_5__::func_631());
		if (!__LIB_0__::func_75(&uLocal_242))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			__LIB_1__::func_283(&uLocal_242, 1);
		}
	}
	if (__LIB_5__::func_649(uParam0->f_1[9], 0, 1))
	{
		if (iLocal_262 == 0)
		{
			uParam0->f_87++;
			if (uParam0->f_87 == 8)
			{
				uParam0->f_87 = 0;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, sLocal_250[uParam0->f_87], __LIB_5__::func_631());
		}
	}
	if (__LIB_5__::func_649(uParam0->f_1[9], 1, 1))
	{
		if (iLocal_262 == 0)
		{
			uParam0->f_87 = (uParam0->f_87 - 1);
			if (uParam0->f_87 < 0)
			{
				uParam0->f_87 = 7;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, sLocal_250[uParam0->f_87], __LIB_5__::func_631());
		}
	}
	uParam0->f_43 = { __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &(uParam0->f_43));
	if (bLocal_394 == 0)
	{
		if (__LIB_5__::func_649(uParam0->f_1[8], 1, 1))
		{
			bLocal_394 = true;
			uParam0->f_88++;
			if (uParam0->f_88 == 7)
			{
				uParam0->f_88 = 0;
			}
			func_134();
		}
	}
	if (bLocal_394 == 0)
	{
		if (__LIB_5__::func_649(uParam0->f_1[8], 0, 1))
		{
			bLocal_394 = true;
			uParam0->f_88 = (uParam0->f_88 - 1);
			if (uParam0->f_88 < 0)
			{
				uParam0->f_88 = 6;
			}
			func_134();
		}
	}
	if (bLocal_394)
	{
		switch (iLocal_392)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_393) > 200)
				{
					iLocal_392 = 2;
				}
				break;
			case 2:
				func_135(uParam0);
				iLocal_392 = 3;
				iLocal_393 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_393) > 500)
				{
					iLocal_392 = 4;
					iLocal_393 = MISC::GET_GAME_TIMER();
					func_35();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_393) > 700)
				{
					iLocal_392 = 0;
					bLocal_394 = false;
				}
				break;
			default:
				break;
		}
	}
	func_122(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, vLocal_233, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_63()
{
	return iLocal_262;
}

void func_65()
{
	__LIB_0__::func_37(&uLocal_259);
	iLocal_262 = 0;
}

void func_66()
{
	if (__LIB_1__::func_732(Local_103.f_1[14], 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("hide_hud", "Photo_Mode_Sounds", true, 0);
		}
		if (bLocal_30)
		{
			bLocal_30 = false;
			__LIB_5__::func_652(&Local_103);
			func_38(__LIB_5__::func_619(&Local_103));
			func_117(0);
		}
		else
		{
			bLocal_30 = true;
			__LIB_5__::func_652(&Local_103);
			func_38(__LIB_5__::func_619(&Local_103));
			func_117(1);
		}
		func_32();
	}
	if (__LIB_5__::func_645(Local_103.f_1[7], 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("back", "Photo_Mode_Sounds", true, 0);
		}
		func_138();
		__LIB_17__::func_915(&Local_103, 15);
	}
	if (bLocal_30)
	{
		if (iLocal_48 == 0)
		{
			if (iLocal_21 == 0)
			{
				if (!__LIB_1__::func_264(Local_103.f_1[14], 1))
				{
					__LIB_5__::func_652(&Local_103);
					if (__LIB_5__::func_619(&Local_103) == 14)
					{
						func_38(14);
					}
					else if (__LIB_5__::func_619(&Local_103) == 12)
					{
						func_38(12);
					}
					else if (__LIB_5__::func_619(&Local_103) == 13)
					{
						func_38(13);
					}
					BUILTIN::SETTIMERB(0);
					iLocal_21 = 1;
				}
			}
			else if (BUILTIN::TIMERB() > 2500)
			{
				if (!__LIB_1__::func_264(Local_103.f_1[14], 1))
				{
					MISC::SET_BIT(&Global_1357505, 1);
					func_138();
					__LIB_17__::func_915(&Local_103, 15);
				}
				else
				{
					iLocal_21 = 0;
				}
			}
		}
		else
		{
			iLocal_21 = 0;
		}
	}
	else
	{
		iLocal_21 = 0;
	}
	if ((__LIB_5__::func_648(Local_103.f_1[18]) && !__LIB_5__::func_625(&Local_103, 32)) && (MISC::_GET_SYSTEM_TIME() - iLocal_22) > 1000)
	{
		BUILTIN::SETTIMERB(0);
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("take_photo", "Photo_Mode_Sounds", true, 0);
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_24))
		{
			GRAPHICS::ANIMPOSTFX_STOP(sLocal_24);
		}
		__LIB_5__::func_626(1);
		__LIB_5__::func_627(&Local_103, 32);
	}
	if (!__LIB_5__::func_625(&Local_103, 32))
	{
		if ((MISC::_GET_SYSTEM_TIME() - iLocal_22) > 500)
		{
			if (__LIB_5__::func_648(Local_103.f_1[5]))
			{
				__LIB_5__::func_628();
			}
		}
	}
}

void func_68()
{
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH")) > 0.3f)
	{
		if (bLocal_38 == 0 && fLocal_19 > 0.2f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_36, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_38 = true;
			}
		}
		else if (fLocal_19 < 0.2f || fLocal_19 == 0.2f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_36);
			bLocal_38 = false;
		}
	}
	else if (bLocal_38)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_36);
		bLocal_38 = false;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH")) < -0.3f)
	{
		if (bLocal_39 == 0 && fLocal_19 < 49.6f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_37, sLocal_45, "Photo_Mode_Sounds", 1);
				bLocal_39 = true;
			}
		}
		else if (fLocal_19 > 49.6f || fLocal_19 == 49.6f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_37);
			bLocal_39 = false;
		}
	}
	else if (bLocal_39)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_37);
		bLocal_39 = false;
	}
}

void func_69()
{
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_DOF")) > 0.3f)
	{
		if (bLocal_42 == 0 && fLocal_17 > 0.1f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_40, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_42 = true;
			}
		}
		else if (fLocal_17 <= 0.1f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_40);
			bLocal_38 = false;
		}
	}
	else if (bLocal_42)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_40);
		bLocal_42 = false;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_DOF")) < -0.3f)
	{
		if ((bLocal_43 == 0 && fLocal_17 < 99.9f) && fLocal_17 > 0f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_41, sLocal_45, "Photo_Mode_Sounds", 1);
				bLocal_43 = true;
			}
		}
		else if (fLocal_17 > 99.9f || fLocal_17 < 0f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_41);
			bLocal_43 = false;
		}
	}
	else if (bLocal_43)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_41);
		bLocal_43 = false;
	}
}

void func_70()
{
	if (func_30())
	{
		if (!bLocal_11)
		{
			return;
		}
	}
	GRAPHICS::_0xF5793BB386E1FF9C(1);
	if (__LIB_5__::func_649(Local_103.f_1[26], 0, 1))
	{
		if (!bLocal_12)
		{
			GRAPHICS::_0xC8D0611D9A0CF5D3(0.1f);
			fLocal_10 = GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
			}
			func_32();
		}
	}
	if (__LIB_5__::func_649(Local_103.f_1[26], 1, 1))
	{
		GRAPHICS::_0xC8D0611D9A0CF5D3(-0.1f);
		fLocal_10 = GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(sLocal_47, "Photo_Mode_Sounds", false, 2);
		}
		func_32();
	}
	if (__LIB_1__::func_514(Local_103.f_1[27], 1))
	{
		if (bLocal_11)
		{
			bLocal_11 = false;
			GRAPHICS::_0x5CD6A2CCE5087161(0);
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
			}
		}
		else
		{
			bLocal_11 = true;
			GRAPHICS::_0x5CD6A2CCE5087161(1);
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(sLocal_47, "Photo_Mode_Sounds", false, 2);
			}
		}
		func_38(13);
		func_32();
	}
}

void func_71()
{
	if (__LIB_5__::func_649(Local_103.f_1[24], 0, 1))
	{
		if (fLocal_25 < 1f)
		{
			fLocal_25 = (fLocal_25 + fLocal_27);
			GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_92, fLocal_25);
			AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
			func_32();
		}
	}
	if (__LIB_5__::func_649(Local_103.f_1[24], 1, 1))
	{
		if (fLocal_25 > 0.1f)
		{
			fLocal_25 = (fLocal_25 - fLocal_27);
			GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_92, fLocal_25);
			AUDIO::PLAY_SOUND_FRONTEND(sLocal_47, "Photo_Mode_Sounds", false, 2);
			func_32();
		}
	}
	if (__LIB_5__::func_649(Local_103.f_1[17], 0, 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("filter_left", "Photo_Mode_Sounds", true, 0);
		}
		GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_92, fLocal_26);
		fLocal_25 = fLocal_26;
		sLocal_93 = sLocal_303[Local_103.f_89];
		func_76();
		Local_103.f_89 = (Local_103.f_89 - 1);
		if (Local_103.f_89 < 0)
		{
			Local_103.f_89 = 38;
		}
		if (Local_103.f_89 == 0)
		{
			func_76();
		}
		else
		{
			sLocal_92 = sLocal_303[Local_103.f_89];
			func_111();
		}
		func_139();
		func_38(14);
		func_32();
	}
	if (__LIB_5__::func_649(Local_103.f_1[17], 1, 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("filter_right", "Photo_Mode_Sounds", true, 0);
		}
		GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_92, fLocal_26);
		fLocal_25 = fLocal_26;
		sLocal_93 = sLocal_303[Local_103.f_89];
		func_76();
		Local_103.f_89++;
		if (Local_103.f_89 == 39)
		{
			Local_103.f_89 = 0;
		}
		if (Local_103.f_89 == 0)
		{
			func_76();
		}
		else
		{
			sLocal_92 = sLocal_303[Local_103.f_89];
			func_111();
		}
		func_139();
		func_38(14);
		func_32();
	}
}

void func_72()
{
	float fVar0;
	if (func_30())
	{
		if (!bLocal_11)
		{
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PauseMenuIn"))
			{
				GRAPHICS::_0x9229ED770975BD9E();
				fLocal_10 = GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
				bLocal_11 = true;
			}
			return;
		}
	}
	GRAPHICS::_0xF5793BB386E1FF9C(1);
	fVar0 = 0.0125f;
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		fVar0 = 0.025f;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_CONTRAST")) > 0.3f)
	{
		GRAPHICS::_0x62B9F9A1272AED80(-fVar0);
		fLocal_9 = GRAPHICS::_GET_PHOTO_MODE_CONTRAST();
		func_32();
		if (bLocal_38 == 0 && iLocal_29 > 0)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_36, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_38 = true;
			}
		}
		else if (iLocal_29 == 0)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_36);
			bLocal_38 = false;
		}
	}
	else if (bLocal_38)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_36);
		bLocal_38 = false;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_CONTRAST")) < -0.3f)
	{
		GRAPHICS::_0x62B9F9A1272AED80(fVar0);
		fLocal_9 = GRAPHICS::_GET_PHOTO_MODE_CONTRAST();
		func_32();
		if (bLocal_39 == 0 && iLocal_29 < 14)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_37, sLocal_45, "Photo_Mode_Sounds", 1);
				bLocal_39 = true;
			}
		}
		else if (iLocal_29 == 14)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_37);
			bLocal_39 = false;
		}
	}
	else if (bLocal_39)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_37);
		bLocal_39 = false;
	}
}

void func_76()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_92))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_92);
	}
}

void func_77()
{
	AUDIO::_0x3210BCB36AF7621B(iLocal_32);
	AUDIO::_0x3210BCB36AF7621B(iLocal_33);
	AUDIO::_0x3210BCB36AF7621B(iLocal_36);
	AUDIO::_0x3210BCB36AF7621B(iLocal_37);
	AUDIO::_0x3210BCB36AF7621B(iLocal_40);
	AUDIO::_0x3210BCB36AF7621B(iLocal_41);
	AUDIO::RELEASE_SOUND_ID(iLocal_32);
	AUDIO::RELEASE_SOUND_ID(iLocal_33);
	AUDIO::RELEASE_SOUND_ID(iLocal_36);
	AUDIO::RELEASE_SOUND_ID(iLocal_37);
	AUDIO::RELEASE_SOUND_ID(iLocal_40);
	AUDIO::RELEASE_SOUND_ID(iLocal_41);
}

void func_107()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_90))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_90);
	}
}

void func_111()
{
	if (!GRAPHICS::_0xBF2DD155B2ADCD0A(sLocal_92))
	{
		GRAPHICS::_0x5199405EABFBD7F0(sLocal_92);
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_92))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_92);
	}
}

void func_112()
{
	StringCopy(&cLocal_77, "", 64);
	if (iLocal_241 == 1 || iLocal_241 == 0)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_IN_ORBIT"), 64);
	}
	if (iLocal_241 == 2)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_IN_FREE"), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_LENS"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	if (fLocal_15 == -18.88f)
	{
		StringCopy(&cLocal_77, " ", 64);
	}
	else
	{
		StringCopy(&cLocal_77, MISC::_0x2B6846401D68E563(fLocal_15, 1), 64);
	}
	StringConCat(&cLocal_77, "mm", 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, &cLocal_77);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, " ");
}

void func_113()
{
	if (!bLocal_13)
	{
		GRAPHICS::_0x9229ED770975BD9E();
		fLocal_10 = GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
		bLocal_13 = true;
	}
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_EXPOSURE"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	iLocal_28 = BUILTIN::CEIL((fLocal_10 * 10f));
	iLocal_28 += 161;
	if (iLocal_28 > 240 || iLocal_28 == 240)
	{
		iLocal_28 = 240;
		bLocal_12 = true;
	}
	else
	{
		bLocal_12 = false;
	}
	MISC::_INT_TO_STRING(iLocal_28, "%i", &cLocal_85);
	StringConCat(&cLocal_77, &cLocal_85, 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	if (bLocal_11)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_EXLOCKON"), 64);
	}
	else
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_EXLOCKOFF"), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_FOCDIST"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	StringConCat(&cLocal_77, MISC::_0x2B6846401D68E563(fLocal_19, 1), 64);
	StringConCat(&cLocal_77, "m", 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_BLUR"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	if (fLocal_17 < 0f && fLocal_17 > -1f)
	{
		StringConCat(&cLocal_77, "0.0", 64);
	}
	else if (fLocal_17 == -1f)
	{
		StringConCat(&cLocal_77, "100.0", 64);
	}
	else
	{
		StringConCat(&cLocal_77, MISC::_0x2B6846401D68E563(fLocal_17, 1), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, &cLocal_77);
}

void func_114()
{
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_CONTRAST"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	iLocal_28 = BUILTIN::CEIL((fLocal_9 * 10f));
	iLocal_28 = (iLocal_28 - 6);
	if (iLocal_28 > 14)
	{
		iLocal_28 = 14;
	}
	if (iLocal_28 < 0)
	{
		iLocal_28 = 0;
	}
	MISC::_INT_TO_STRING(iLocal_28, "%i", &cLocal_85);
	iLocal_29 = iLocal_28;
	StringConCat(&cLocal_77, &cLocal_85, 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_FILTSTYLE"), 64);
	StringConCat(&cLocal_77, ":", 64);
	StringConCat(&cLocal_77, " ", 64);
	if (iLocal_344[Local_103.f_89] == 2)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2(sLocal_263[Local_103.f_89]), 64);
	}
	if (iLocal_344[Local_103.f_89] == 1)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2(sLocal_263[Local_103.f_89]), 64);
	}
	if (iLocal_344[Local_103.f_89] == 0)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2(sLocal_263[Local_103.f_89]), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, &cLocal_77);
	StringCopy(&cLocal_77, " ", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_FILTINTEN"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	iLocal_28 = BUILTIN::CEIL((fLocal_25 * 100f));
	MISC::_INT_TO_STRING(iLocal_28, "%i", &cLocal_72);
	StringConCat(&cLocal_77, &cLocal_72, 64);
	StringConCat(&cLocal_77, "%", 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, &cLocal_77);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, " ");
}

void func_116(int iParam0, bool bParam1)
{
	char* sVar0;
	if (bParam1)
	{
		if (!__LIB_0__::func_139(Local_103.f_1[iParam0]))
		{
			if (iParam0 == 16)
			{
				Local_103.f_1[iParam0] = __LIB_5__::func_651(func_154(iParam0), joaat("INPUT_CAMERA_EXPRESSION_PREV"), joaat("INPUT_CAMERA_EXPRESSION_NEXT"), 0);
			}
			else if (iParam0 == 17)
			{
				Local_103.f_1[iParam0] = __LIB_5__::func_651(func_154(iParam0), joaat("INPUT_PHOTO_MODE_FILTER_PREV"), joaat("INPUT_PHOTO_MODE_FILTER_NEXT"), 0);
			}
			else if (iParam0 == 24)
			{
				Local_103.f_1[iParam0] = __LIB_5__::func_651(func_154(iParam0), joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_UP"), joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_DOWN"), 0);
			}
			else if (iParam0 == 26)
			{
				Local_103.f_1[iParam0] = __LIB_5__::func_651(func_154(iParam0), joaat("INPUT_PHOTO_MODE_EXPOSURE_UP"), joaat("INPUT_PHOTO_MODE_EXPOSURE_DOWN"), 0);
			}
			else if (iParam0 == 13)
			{
				Local_103.f_1[iParam0] = __LIB_5__::func_651(func_154(iParam0), joaat("INPUT_PHOTO_MODE_ZOOM_OUT"), joaat("INPUT_PHOTO_MODE_ZOOM_IN"), 0);
			}
			else if (iParam0 == 21)
			{
				Local_103.f_1[iParam0] = __LIB_5__::func_651(func_154(iParam0), joaat("INPUT_PHOTO_MODE_LENSE_PREV"), joaat("INPUT_PHOTO_MODE_LENSE_NEXT"), 0);
			}
			else if (iParam0 == 22)
			{
				Local_103.f_1[iParam0] = __LIB_5__::func_651(func_154(iParam0), joaat("INPUT_PHOTO_MODE_ROTATE_LEFT"), joaat("INPUT_PHOTO_MODE_ROTATE_RIGHT"), 0);
			}
			else if (iParam0 == 25)
			{
				Local_103.f_1[iParam0] = __LIB_4__::func_864(func_154(iParam0), joaat("INPUT_PHOTO_MODE_CONTRAST"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (iParam0 == 28)
			{
				Local_103.f_1[iParam0] = __LIB_4__::func_864(func_154(iParam0), joaat("INPUT_PHOTO_MODE_DOF"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[Local_103.f_1[iParam0] /*18*/].f_3, joaat("INPUT_PHOTO_MODE_DOF_UP_ONLY"));
				HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[Local_103.f_1[iParam0] /*18*/].f_3, joaat("INPUT_PHOTO_MODE_DOF_DOWN_ONLY"));
			}
			else if (iParam0 == 3)
			{
				if (Local_103.f_110 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_103.f_1[iParam0] = __LIB_4__::func_864(sVar0, func_157(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				Local_103.f_1[iParam0] = __LIB_4__::func_864(func_154(iParam0), func_157(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam0 == 4)
			{
				__LIB_1__::func_522(Local_103.f_1[iParam0], 11, 1, 1);
			}
			if (bLocal_30)
			{
				__LIB_4__::func_12(Local_103.f_1[iParam0], -857683846, 0, 1);
			}
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[Local_103.f_1[iParam0] /*18*/].f_3, true);
		}
		HUD::_0xF4A5C4509BF923B1(Global_1945938[Local_103.f_1[iParam0] /*18*/].f_3, 6);
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	else if (__LIB_0__::func_139(Local_103.f_1[iParam0]))
	{
		__LIB_1__::func_748(&(Local_103.f_1[iParam0]), 1, 1);
	}
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		func_32();
	}
	else
	{
		func_138();
	}
	__LIB_1__::func_382(Local_103.f_1[14], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[15], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[13], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[19], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[20], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[21], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[22], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[5], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[18], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[7], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[23], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[28], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[26], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[27], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[17], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[24], bParam0, 0);
	__LIB_1__::func_382(Local_103.f_1[25], bParam0, 0);
}

void func_121(var uParam0)
{
	fLocal_217 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_217 < -0.2f)
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
			if (!bLocal_56)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_56 = true;
			}
		}
		else if (bLocal_56)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_56 = false;
		}
	}
	else if (bLocal_56)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_56 = false;
	}
	if (fLocal_217 > 0.2f)
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
			if (!bLocal_57)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_57 = true;
			}
		}
		else if (bLocal_57)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_57 = false;
		}
	}
	else if (bLocal_57)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_57 = false;
	}
}

void func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	if (iLocal_98 == 0)
	{
		if (__LIB_5__::func_648(uParam0->f_1[3]))
		{
			if (AUDIO::_0x4AD019591E94C064("DOF_Change", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("DOF_Change", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_99 = MISC::GET_GAME_TIMER();
			iLocal_98 = 1;
			iLocal_100 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_99) > 300 && iLocal_100 == 0)
	{
		if (uParam0->f_110 == 0)
		{
			uParam0->f_110 = 1;
			iVar0 = __LIB_0__::func_17(Local_103.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_110 = 0;
			iVar1 = __LIB_0__::func_17(Local_103.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar1 /*18*/].f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_0x9F97E85EC142255E(uParam0->f_32, uParam0->f_110);
		iLocal_100 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_99) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_99) > 850)
		{
			iLocal_98 = 0;
			iLocal_100 = 0;
		}
	}
}

void func_127(var uParam0)
{
	float fVar0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_32, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	fLocal_395 = ENTITY::GET_ENTITY_HEADING(Global_35);
	uParam0->f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	uParam0->f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	uParam0->f_83 = { uParam0->f_71, uParam0->f_71.f_1, (uParam0->f_71.f_2 - 180f) };
	uParam0->f_77 = { vLocal_226 };
	uParam0->f_110 = 0;
	fLocal_232 = 0f;
	fLocal_396 = 0.5f;
	vLocal_233 = { uParam0->f_83 };
	vLocal_233.x = (vLocal_233.x + 1f);
	vLocal_236 = { vLocal_233 };
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

void func_128()
{
	sLocal_250[0] = "portrait_normal";
	sLocal_250[1] = "portrait_happy";
	sLocal_250[2] = "portrait_pensive";
	sLocal_250[3] = "portrait_pensive_2";
	sLocal_250[4] = "portrait_relaxed";
	sLocal_250[5] = "portrait_angry";
	sLocal_250[6] = "portrait_angry_2";
	sLocal_250[7] = "portrait_annoyed";
}

void func_129()
{
	iLocal_384[0] = 0;
	iLocal_384[1] = 1;
	iLocal_384[2] = 2;
	iLocal_384[3] = 3;
	iLocal_384[4] = 4;
	iLocal_384[5] = 5;
	iLocal_384[6] = 6;
}

void func_130(var uParam0)
{
	fLocal_217 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_217 < -0.2f)
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
			if (!bLocal_56)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_56 = true;
			}
		}
		else if (bLocal_56)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_56 = false;
		}
	}
	else if (bLocal_56)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_56 = false;
	}
	if (fLocal_217 > 0.2f)
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
			if (!bLocal_57)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_57 = true;
			}
		}
		else if (bLocal_57)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_57 = false;
		}
	}
	else if (bLocal_57)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_57 = false;
	}
}

void func_134()
{
	bLocal_394 = true;
	iLocal_393 = MISC::GET_GAME_TIMER();
	iLocal_392 = 1;
	func_16();
}

void func_135(var uParam0)
{
	func_164(uParam0);
	switch (iLocal_384[uParam0->f_88])
	{
		case 0:
			__LIB_5__::func_646(Global_35);
			break;
		case 1:
			func_166(joaat("WORLD_HUMAN_STARE_STOIC"), "WORLD_HUMAN_STARE_STOIC_MALE_A");
			break;
		case 2:
			func_166(joaat("WORLD_HUMAN_STERNGUY_IDLES"), "WORLD_HUMAN_STERNGUY");
			break;
		case 3:
			func_166(joaat("WORLD_HUMAN_SMOKE"), "WORLD_HUMAN_SMOKE_MALE_C");
			break;
		case 4:
			func_166(joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT"), "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A");
			break;
		case 5:
			ENTITY::SET_ENTITY_HEADING(Global_35, (fLocal_395 + 180f));
			break;
		case 6:
			func_166(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A");
			break;
	}
}

void func_138()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, " ");
}

void func_139()
{
	GRAPHICS::_0x37D7BDBA89F13959(sLocal_93);
}

char* func_154(int iParam0)
{
	if (__LIB_5__::func_623())
	{
		switch (iParam0)
		{
			case 6:
				return "CAM_SAVE_PHOTO";
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
			case 11:
				return "CAM_PM_MOVEMENT";
			case 12:
				return "CAM_PM_CAMERA";
			case 13:
				if (iLocal_241 == 2)
				{
					return "CAM_PM_HEIGHT";
				}
				else
				{
					return "CAM_PM_ZOOM";
				}
				break;
			case 14:
				return "CAM_PM_HUD_TOGGLE";
			case 15:
				return "CAM_PM_ORBIT_TOGGLE";
			case 16:
				return "CAM_PM_DOF";
			case 17:
				return "CAM_PM_FILTERS";
			case 18:
				return "CAM_SAVE_PHOTO";
			case 20:
				return "CAM_PM_RESET";
			case 21:
				return "CAM_PM_S_LENS";
			case 22:
				return "CAM_PM_ROTATE";
			case 23:
				return "CAM_PM_FOCLENGTH";
			case 24:
				return "CAM_PM_FILINTENS";
			case 25:
				return "CAM_PM_CONTRAST";
			case 26:
				return "CAM_PM_EXPOSURE";
			case 27:
				return "CAM_PM_EXPOLOCK";
			case 28:
				return "CAM_PM_APERTURE";
			case 19:
				if (__LIB_5__::func_619(&Local_103) == 14)
				{
					return "CAM_PM_B_MODE";
				}
				else if (__LIB_5__::func_619(&Local_103) == 12)
				{
					return "CAM_PM_A_MODE";
				}
				else if (__LIB_5__::func_619(&Local_103) == 13)
				{
					return "CAM_PM_E_MODE";
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 6:
				return "CAM_TAKE_PHOTO";
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
	}
	return "INVALID_USE_CONTEXT";
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 7:
			return joaat("INPUT_PHOTO_MODE_BACK");
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
			return joaat("INPUT_PHOTO_MODE_VIEW_PHOTOS");
		case 11:
			return joaat("INPUT_PHOTO_MODE_MOVE_LR");
		case 12:
			return joaat("INPUT_PHOTO_MODE_ROTATE_LEFT");
		case 13:
			return joaat("INPUT_PHOTO_MODE_ZOOM_OUT");
		case 14:
			return joaat("INPUT_PHOTO_MODE_TOGGLE_HUD");
		case 15:
			return joaat("INPUT_PHOTO_MODE_CHANGE_CAMERA");
		case 16:
			return joaat("INPUT_CAMERA_EXPRESSION_PREV");
		case 17:
			return joaat("INPUT_PHOTO_MODE_FILTER_PREV");
		case 18:
			return joaat("INPUT_PHOTO_MODE_TAKE_PHOTO");
		case 19:
			return joaat("INPUT_PHOTO_MODE_SWITCH_MODE");
		case 20:
			return joaat("INPUT_PHOTO_MODE_RESET");
		case 21:
			return joaat("INPUT_PHOTO_MODE_LENSE_NEXT");
		case 22:
			return joaat("INPUT_PHOTO_MODE_ROTATE_LEFT");
		case 23:
			return joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH");
		case 24:
			return joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_UP");
		case 25:
			return joaat("INPUT_PHOTO_MODE_CONTRAST");
		case 26:
			return joaat("INPUT_PHOTO_MODE_EXPOSURE_UP");
		case 27:
			return joaat("INPUT_PHOTO_MODE_EXPOSURE_LOCK");
		case 28:
			return joaat("INPUT_PHOTO_MODE_DOF");
		default:
			break;
	}
	return 0;
}

void func_164(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_395);
}

void func_166(int iParam0, char* sParam1)
{
	iLocal_397 = TASK::CREATE_SCENARIO_POINT(iParam0, vLocal_220, fLocal_395, 0, 0, 1);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_397, 25, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_397, 23, true);
	TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_397, sParam1, -1, false, true, 0, false, 0f, false);
}

