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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	char* sLocal_27 = NULL;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	struct<108> Local_32 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	bool bLocal_144 = false;
	bool bLocal_145 = false;
	int iLocal_146 = 0;
	bool bLocal_147 = false;
	bool bLocal_148 = false;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	bool bLocal_152 = false;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	int iScriptParam_0 = 0;
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
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	var uVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	char* sVar15;
	float fVar16;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	bLocal_145 = true;
	iLocal_146 = -1;
	iLocal_153 = -1;
	iLocal_154 = -1;
	iLocal_155 = -1;
	iLocal_156 = 61;
	iLocal_157 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(0);
	}
	iVar0 = iScriptParam_0;
	iVar1 = Global_40.f_9.f_11;
	bVar6 = true;
	func_2(&Local_32, iVar0);
	func_3(&(Local_32.f_39));
	func_4();
	Local_32.f_93 = MISC::GET_GAME_TIMER();
	while (true)
	{
		Global_35 = PLAYER::PLAYER_PED_ID();
		bLocal_151 = CAM::_0xD1BA66940E94C547();
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		if (!PED::IS_PED_INJURED(Global_35) && !bLocal_152)
		{
			ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
		}
		if (func_5(&bVar8))
		{
			func_1(bVar8);
		}
		func_6(&Local_32);
		func_7();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		__LIB_1__::func_538(0);
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
		fVar2 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
		fVar3 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
		bVar9 = func_9(fVar2, fVar3);
		if (bLocal_145)
		{
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		if (iLocal_29 < 8)
		{
			MISC::_0xA3A8926951471C82();
		}
		if ((iLocal_29 < 10 || bVar6) || bLocal_151)
		{
			HUD::_0xC9CAEAEEC1256E54(-58462683);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		if (iLocal_29 < 10 || bLocal_151)
		{
			__LIB_14__::func_216();
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 103, true);
		}
		if (!PED::IS_PED_INJURED(Local_32.f_98) && !TASK::IS_PED_IN_WRITHE(Local_32.f_98))
		{
			PED::_0x06D26A96CA1BCA75(Local_32.f_98, 3, 0f, 0);
			if (iLocal_29 >= 8)
			{
				if (!Local_32.f_38 && !Local_32.f_59)
				{
					if (!__LIB_0__::func_163(Local_32.f_98, -982327190))
					{
						TASK::TASK_STAND_STILL(Local_32.f_98, -1);
					}
				}
			}
		}
		EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
		switch (iLocal_29)
		{
			case 0:
				func_12(&Local_32, iVar0, iVar1);
				func_13(iVar0, iVar1);
				if (!Global_1310720.f_27)
				{
					STREAMING::_0x387AD749E3B69B70(Local_32.f_39.f_1, __LIB_8__::func_353(Local_32.f_39.f_4), 500f, 1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_76)))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&(Local_32.f_76));
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_84)))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&(Local_32.f_84));
				}
				if (WATER::_GET_WORLD_WATER_TYPE() != 1)
				{
					if (__LIB_0__::func_979(Local_32.f_30) == 8)
					{
						WATER::_SET_WORLD_WATER_TYPE(1);
					}
				}
				else if (__LIB_0__::func_979(Local_32.f_30) == 8)
				{
				}
				else
				{
					WATER::_SET_WORLD_WATER_TYPE(0);
				}
				ENTITY::SET_ENTITY_COORDS(Global_35, Local_32.f_30, false, false, true, true);
				func_16();
				if (func_17())
				{
					func_18(&(Local_32.f_39));
				}
				if (Global_1310720.f_17 >= 0)
				{
					CLOCK::SET_CLOCK_TIME(Global_1310720.f_17, 0, 0);
					Global_1310720.f_17 = -1;
				}
				CLOCK::PAUSE_CLOCK(false, 0);
				if (!func_19() && !__LIB_0__::func_1(Global_1935630, 131072))
				{
					__LIB_0__::func_568(Local_32.f_30, 500f, 0);
					__LIB_1__::func_572(Local_32.f_30, 500f, 0, 0, 0, 0, 0);
				}
				PED::_0x4759CC730F947C81();
				VEHICLE::_0x1FF00DB43026B12F();
				Local_32.f_98 = 0;
				Local_32.f_99 = 0;
				Local_32.f_100 = { 0f, 0f, 0f };
				Local_32.f_103 = 0f;
				Local_32.f_104 = { 0f, 0f, 0f };
				Local_32.f_107 = 0f;
				__LIB_14__::func_219(0, &(Local_32.f_100), &(Local_32.f_103));
				__LIB_14__::func_219(1, &(Local_32.f_104), &(Local_32.f_107));
				if (!Global_1935630.f_12)
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
				}
				Global_40.f_9.f_11 = -1;
				iLocal_141 = VOLUME::_CREATE_VOLUME_CYLINDER(Local_32.f_30, 0f, 0f, 0f, 1f, 1f, 20f);
				__LIB_0__::func_568(Local_32.f_30, 5f, 0);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_32.f_30, 5f);
				POPULATION::_0xB56D41A694E42E86(iLocal_141, 8192, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_141, 8192, 0, 0, -1, -1, 0);
				iLocal_142 = VOLUME::_CREATE_VOLUME_CYLINDER(Local_32.f_30, 0f, 0f, 0f, 1f, 1f, 20f);
				uLocal_143 = PED::_0x4C39C95AE5DB1329(iLocal_142, 0, 7);
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 1;
				break;
			case 1:
				if (func_24())
				{
					if (!Global_1310720.f_27)
					{
						STREAMING::_0x5A8B01199C3E79C3();
					}
					Local_32.f_30.f_2 = (Local_32.f_30.f_2 - 1f);
					PED::_0x704C908E9C405136(Global_35);
					if (__LIB_1__::func_744())
					{
						__LIB_5__::func_801(17, 1108822547, 2, 0, 0);
					}
					iLocal_140 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0xBCE668AAF83608BE(iLocal_140, Local_32.f_30, 0f, 0f, 0f, 15f, 15f, 20f);
					VOLUME::_0xBCE668AAF83608BE(iLocal_140, Local_32.f_34, 0f, 0f, 0f, 15f, 15f, 20f);
					POPULATION::_0x2161278C6322F740(4576, 0, 0, -1, -1, 0);
					if (!Global_1310720.f_28 && !__LIB_0__::func_1(Global_1935630, 131072))
					{
						PED::_0x9851DE7AEC10B4E1(Local_32.f_30, 5000f, 1, 0);
					}
					POPULATION::_0xB56D41A694E42E86(iLocal_140, 2232831, 0, 0, -1, -1, 0);
					POPULATION::_0x18262CAFEBB5FBE1(iLocal_140, 2232831, 0, 0, -1, -1, 0);
					iLocal_153 = GRAPHICS::_0xFA50F79257745E74(Local_32.f_30, 3.5f, 1, iLocal_156, 0);
					iLocal_154 = GRAPHICS::_0xFA50F79257745E74(Local_32.f_34, 3.5f, 1, iLocal_156, 0);
					iLocal_155 = GRAPHICS::_0xFA50F79257745E74(Local_32.f_30, 0.5f, 2, 2, 0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_76)))
					{
						__LIB_11__::func_52(Global_35, &(Local_32.f_76), 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_84)) && !PED::IS_PED_INJURED(Local_32.f_98))
					{
						__LIB_11__::func_52(Local_32.f_98, &(Local_32.f_84), 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1);
					}
					__LIB_12__::func_581(1, 0, 0);
					if (!func_19())
					{
						if (bLocal_147)
						{
							iLocal_146 = AUDIO::_0x0556C784FA056628("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
							AUDIO::PLAY_STREAM_FRONTEND(iLocal_146);
						}
						if (!__LIB_0__::func_1(Global_1935630, 131072))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_START");
							bLocal_148 = true;
						}
					}
					GRAPHICS::_0x9D1B0B5066205692();
					if (!func_29())
					{
						iLocal_29 = 3;
					}
					else
					{
						func_30();
						iLocal_29 = 2;
					}
				}
				break;
			case 2:
				if (func_31())
				{
					iLocal_29 = 3;
				}
				break;
			case 3:
				__LIB_1__::func_952();
				CAM::DO_SCREEN_FADE_OUT(0);
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 4;
				break;
			case 4:
				if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
				else
				{
					MISC::_0xA565FAC215CBC77D();
					Global_1310720.f_8 = 1;
					__LIB_0__::func_319(1024);
					if (__LIB_1__::func_750(&uVar11))
					{
						__LIB_3__::func_671();
					}
					__LIB_12__::func_181(1);
					__LIB_12__::func_590();
					if (__LIB_0__::func_977(iVar0) == -1)
					{
					}
					else
					{
						__LIB_11__::func_386();
					}
					__LIB_0__::func_7(&(Global_1347343.f_11), 524288);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_30) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_30, true, false))
					{
						AUDIO::_0xAC84686C06184B0D("Clouds", "DEATH_FAIL_RESPAWN_SCENES");
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_30, Local_32.f_27, 0f, 0f, 0f, 2);
						LAW::_0xE9AC8466ABE484BB(true, 0);
						ANIMSCENE::START_ANIM_SCENE(iLocal_30);
						iLocal_29 = 5;
					}
					else
					{
						Local_32.f_93 = MISC::GET_GAME_TIMER();
						ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
						if (Local_32.f_59)
						{
							func_41();
						}
						iLocal_29 = 6;
					}
				}
				break;
			case 5:
				fVar12 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_30);
				if (fVar12 >= 1f)
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					if (!bLocal_149 && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
					{
						func_42();
						bLocal_149 = true;
					}
				}
				if (fVar12 >= (ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_30) * 0.99f))
				{
					if (Local_32.f_59)
					{
						func_41();
					}
					Local_32.f_93 = MISC::GET_GAME_TIMER();
					if (iLocal_146 != -1)
					{
						AUDIO::STOP_STREAM(iLocal_146);
						iLocal_146 = -1;
					}
					iLocal_29 = 6;
				}
				break;
			case 6:
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_30))
				{
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_30, true);
				}
				AUDIO::_0xAC84686C06184B0D("Respawn", "DEATH_FAIL_RESPAWN_SCENES");
				func_43(&Local_32, 0);
				if (__LIB_1__::func_901(__LIB_2__::func_954()))
				{
					MISC::_SET_WEATHER_TYPE(joaat("OVERCASTDARK"), true, false, false, 0f, true);
				}
				MISC::_SET_WEATHER_TYPE_FROZEN(true);
				GRAPHICS::_0x503941F65DBA24EC(1);
				if (!Local_32.f_59)
				{
					func_46();
					func_47();
				}
				if (!PED::IS_PED_INJURED(Local_32.f_98))
				{
					PED::SET_PED_RESET_FLAG(Local_32.f_98, 105, true);
				}
				if (Local_32.f_53)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 1000f, -4f, -1, 1 | Local_32.f_67, 0f, false, 4 | Local_32.f_69, false, 0, false);
					func_49(&Local_32, 1);
				}
				else if (Local_32.f_54)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 4f, -2f, -1, Local_32.f_68, 0f, false, 4 | Local_32.f_69, false, 0, false);
					func_49(&Local_32, 0);
					Local_32.f_54 = 0;
				}
				else if (Local_32.f_55)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 1000f, -4f, -1, 67108880, 0f, false, 4 | Local_32.f_69, false, 0, false);
					Local_32.f_55 = 0;
				}
				else if (Local_32.f_59)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), func_50(&Local_32, 1), 1000f, -4f, -1, 2, 0f, false, 268435460, false, 0, false);
					TASK::TASK_PLAY_ANIM(Local_32.f_98, func_48(&Local_32, 1), func_50(&Local_32, 0), 1000f, -4f, -1, 6, 0f, false, 268435456, false, 0, false);
					PED::_0x2208438012482A1A(Local_32.f_98, false, false);
				}
				PED::_0x2208438012482A1A(Global_35, true, true);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				bLocal_152 = true;
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 7;
				break;
			case 7:
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				if (!func_51(0))
				{
					func_18(&(Local_32.f_39));
					func_52(&(Local_32.f_39));
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_30))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_30);
					ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
					LAW::_0xE9AC8466ABE484BB(false, 0);
				}
				if (bLocal_148)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_STOP");
					bLocal_148 = false;
				}
				__LIB_1__::func_164(1);
				AUDIO::PLAY_SOUND_FRONTEND("EXIT", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
				if (Global_1310720.f_12)
				{
					__LIB_1__::func_240(110, 0);
					__LIB_1__::func_240(111, 0);
					func_56(func_55(), 15000, 1000);
				}
				if ((Global_1310720.f_14 && __LIB_14__::func_220(274) < 3) && !__LIB_1__::func_185(59))
				{
					__LIB_1__::func_240(274, 1);
				}
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 8;
				break;
			case 8:
				if (!bLocal_144)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
					bLocal_152 = true;
					ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_32.f_98, true);
					if (!PED::IS_PED_INJURED(Local_32.f_98))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_32.f_98, true, false);
					}
					__LIB_0__::func_8(&Global_1935630, 4096);
					Global_1310720.f_6 = 0;
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					if (__LIB_1__::func_652())
					{
						func_61(1, 10);
					}
					bLocal_144 = true;
				}
				if (!PED::IS_PED_INJURED(Local_32.f_98))
				{
					PED::SET_PED_RESET_FLAG(Local_32.f_98, 105, true);
				}
				bVar13 = func_51(1);
				if (bVar13)
				{
					func_62();
					bVar6 = false;
					iLocal_29 = 10;
				}
				else if (Local_32.f_56)
				{
					bVar6 = false;
					fVar4 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_LR"));
					fVar5 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_UD"));
					if ((fVar4 != 0f || fVar5 != 0f) && !bVar7)
					{
						func_52(&(Local_32.f_39));
						bVar7 = true;
					}
					if (bVar9)
					{
						Local_32.f_56 = 0;
						Local_32.f_53 = 0;
					}
					if (Local_32.f_59)
					{
						if (Local_32.f_25 < 0 || Local_32.f_25 >= Local_32.f_52)
						{
							Local_32.f_25 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_32.f_52);
						}
						if (func_63(&Local_32))
						{
							if (Local_32.f_26 < MISC::GET_GAME_TIMER())
							{
								Local_32.f_26 = (MISC::GET_GAME_TIMER() + 45000);
								Local_32.f_25 = (1 + Local_32.f_25);
								if (Local_32.f_25 >= Local_32.f_52)
								{
									Local_32.f_25 = 0;
								}
							}
							else
							{
								Local_32.f_25 = 0;
							}
							TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), func_64(&Local_32, 1, Local_32.f_25), 2f, -4f, -1, 2, 0f, false, 268435460, false, 0, false);
							TASK::TASK_PLAY_ANIM(Local_32.f_98, func_48(&Local_32, 1), func_64(&Local_32, 0, Local_32.f_25), 2f, -4f, -1, 2, 0f, false, 268435456, false, 0, false);
						}
					}
					else
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_70)))
						{
							Local_32.f_70 = { func_65(&Local_32) };
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP") > 0.99f)
							{
								Local_32.f_70 = { func_65(&Local_32) };
								TASK::TASK_PLAY_ANIM(Global_35, Local_32.f_13, &(Local_32.f_70), 4f, -4f, -1, 2, 0f, false, 4 | Local_32.f_69, false, 0, false);
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Local_32.f_13, &(Local_32.f_70), 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, Local_32.f_13, &(Local_32.f_70)) > 0.99f)
							{
								TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 4f, -4f, -1, 2, 0f, false, 4 | Local_32.f_69, false, 0, false);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 4f, -4f, -1, 2, 0f, false, 4 | Local_32.f_69, false, 0, false);
						}
					}
				}
				else if (Local_32.f_53)
				{
					if (500 + Local_32.f_93) < MISC::GET_GAME_TIMER()
					{
						Local_32.f_53 = 0;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1260366052))
				{
				}
				else
				{
					if (Local_32.f_54)
					{
						TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 4f, -1.5f, -1, Local_32.f_68, 0f, false, 4 | Local_32.f_69, false, 0, false);
						func_49(&Local_32, 0);
					}
					if (Local_32.f_55)
					{
						TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 4f, -4f, -1, 67108880, 0f, false, 4 | Local_32.f_69, false, 0, false);
					}
					if (Local_32.f_59)
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						TASK::CLEAR_PED_TASKS(Local_32.f_98, true, false);
					}
					func_52(&(Local_32.f_39));
					Local_32.f_93 = MISC::GET_GAME_TIMER();
					iLocal_29 = 9;
				}
				break;
			case 9:
				fVar16 = 1f;
				if (!Local_32.f_59)
				{
					if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")))
					{
						fVar16 = 1.25f;
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 1))
				{
					sVar15 = "RESPAWN_ACTION";
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 1))
				{
					sVar15 = "RESPAWN_LOOP";
					bVar14 = true;
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 1), func_66(&Local_32, 1), 1))
				{
					sVar15 = func_66(&Local_32, 1);
					bVar14 = true;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar15))
				{
					fVar10 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(&Local_32, bVar14), sVar15);
					ENTITY::_SET_ENTITY_ANIM_SPEED(Global_35, func_48(&Local_32, bVar14), sVar15, fVar16);
					if (4000 + Local_32.f_93) < MISC::GET_GAME_TIMER()
					{
						fVar10 = 1f;
					}
				}
				else if (2000 + Local_32.f_93) < MISC::GET_GAME_TIMER()
				{
					fVar10 = 1f;
				}
				if (!Local_32.f_95)
				{
					Local_32.f_95 = ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1675443122);
					if (Local_32.f_96 && Local_32.f_95)
					{
						func_67(&(Local_32.f_39), 1);
					}
				}
				if (Local_32.f_59)
				{
				}
				else if (Local_32.f_60 && !Local_32.f_95)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				}
				if (func_68(bVar9, fVar10))
				{
					if (Local_32.f_54)
					{
						TASK::TASK_STAND_STILL(Global_35, 1);
					}
					bLocal_145 = false;
					Local_32.f_93 = MISC::GET_GAME_TIMER();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_29 = 10;
				}
				break;
			case 10:
				if (!Local_32.f_96)
				{
					func_69(&(Local_32.f_39));
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 1))
				{
					fVar10 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION");
				}
				else
				{
					fVar10 = 1f;
				}
				if ((MISC::GET_GAME_TIMER() < (750 + Local_32.f_93) && Local_32.f_54) && !Local_32.f_59)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.15f);
				}
				else if ((fVar10 < 1f && ENTITY::DOES_ENTITY_EXIST(Local_32.f_64[0])) && !bLocal_151)
				{
				}
				else if (bVar9 || !bVar6)
				{
					if (bLocal_150)
					{
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
					}
					if (__LIB_1__::func_898() == 8)
					{
						__LIB_0__::func_747(22, 0, 1);
					}
					else
					{
						__LIB_0__::func_747(45, 0, 1);
					}
					func_1(1);
				}
				break;
			default:
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(1);
}

void func_1(bool bParam0)
{
	int iVar0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	__LIB_18__::func_498(Global_35, ENTITY::GET_ENTITY_MODEL(Global_35));
	TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(Global_35);
	LAW::_0x2001687F9562FD9D(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	__LIB_18__::func_776();
	if (Global_1310720.f_29 != -1)
	{
		__LIB_9__::func_730(Global_1310720.f_29);
	}
	__LIB_18__::func_775();
	Global_1347477.f_6 = 0;
	__LIB_1__::func_724(8192);
	Global_1894899.f_8 = 0;
	func_67(&(Local_32.f_39), 0);
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && bParam0)
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (bLocal_148)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_STOP");
	}
	AUDIO::_0x9428447DED71FC7E("DEATH_FAIL_RESPAWN_SCENES");
	if (!PED::IS_PED_INJURED(Local_32.f_98))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_32.f_98, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_32.f_98, false);
		POPULATION::_0xF74E134F40192884(Local_32.f_98, 0);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	}
	if (iLocal_153 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_153, 1);
	}
	if (iLocal_154 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_154, 1);
	}
	if (iLocal_155 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_155, 1);
	}
	iVar0 = 0;
	while (iVar0 < Local_32.f_64)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_32.f_64[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_32.f_64[iVar0]));
		}
		if (Local_32.f_61[iVar0] == joaat("P_CIGARETTE_CS02X"))
		{
			func_77(joaat("CONSUMABLE_CIGARETTE_BOX"), 1);
		}
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_140))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_140);
		POPULATION::_0xA1CFB35069D23C23(iLocal_140);
		VOLUME::_DELETE_VOLUME(iLocal_140);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_141))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_141);
		POPULATION::_0xA1CFB35069D23C23(iLocal_141);
		VOLUME::_DELETE_VOLUME(iLocal_141);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_143))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_143, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_142))
	{
		VOLUME::_DELETE_VOLUME(iLocal_142);
	}
	VOLUME::_0xAC355980681A7F89(4);
	if (!__LIB_0__::func_1(Global_1935630, 131072))
	{
		__LIB_0__::func_703(0, -1);
	}
	__LIB_1__::func_979(1);
	__LIB_0__::func_8(&Global_1935630, 131072);
	__LIB_1__::func_84(4096);
	__LIB_1__::func_979(512);
	MISC::_SET_WEATHER_TYPE_FROZEN(false);
	GRAPHICS::_0x503941F65DBA24EC(0);
	__LIB_11__::func_121();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, int iParam1)
{
	struct<5> Var0;
	if (!__LIB_0__::func_720(15, uParam0))
	{
		return;
	}
	uParam0->f_5 = *uParam0;
	uParam0->f_27 = { func_83(iParam1) };
	uParam0->f_5.f_2 = -566397848;
	uParam0->f_5.f_3 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_5.f_1), &(uParam0->f_5)))
	{
	}
	if (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(uParam0->f_5, uParam0->f_5.f_1) == 0)
	{
		uParam0->f_5 = { Var0 };
		func_2(uParam0, iParam1 + 1);
	}
}

void func_3(var uParam0)
{
	*uParam0 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	uParam0->f_7 = 70f;
	uParam0->f_9 = -180f;
	uParam0->f_10 = 180f;
	uParam0->f_11 = -85f;
	uParam0->f_12 = 85f;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	__LIB_0__::func_7(&Global_1935630, 4096);
	func_85();
	if (Global_1310720.f_7)
	{
		__LIB_1__::func_299(0);
	}
	if (!__LIB_0__::func_73(512))
	{
		__LIB_1__::func_924();
		__LIB_2__::func_29(1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
	}
	else
	{
		__LIB_1__::func_309(-1, 0, 0, 1, 0);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	LAW::_0xBCC6DC59E32A2BDC(PLAYER::PLAYER_ID());
	__LIB_18__::func_905();
	__LIB_12__::func_181(1);
	__LIB_12__::func_590();
	PERSCHAR::_0xB173599D61FAEB31();
	if (!PED::IS_PED_INJURED(Global_35))
	{
		PED::_0xE3144B932DFDFF65(Global_35, 0f, -1, true, true);
		PED::CLEAR_PED_ENV_DIRT(Global_35);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 9);
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
		if (ITEMSET::IS_ITEMSET_VALID(iVar0))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::_DELETE_CARRIABLE(&iVar1);
				}
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
		if (!__LIB_0__::func_1(Global_1935630, 131072))
		{
			__LIB_11__::func_885();
		}
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	Global_1347477.f_6 = 1;
	__LIB_0__::func_635(8192);
	__LIB_16__::func_361();
	__LIB_0__::func_713(0, 0);
	__LIB_9__::func_469(-70f);
	__LIB_0__::func_145(0, 0);
	__LIB_1__::func_207(iVar4, iVar5);
	__LIB_2__::func_347(1);
	__LIB_17__::func_380(0);
}

bool func_5(bool bParam0)
{
	*bParam0 = 0;
	if (PED::IS_PED_INJURED(Global_35))
	{
		return true;
	}
	if (__LIB_10__::func_644() != __LIB_14__::func_217())
	{
		return true;
	}
	if (__LIB_0__::func_6(Global_43890))
	{
		return true;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return true;
	}
	if (__LIB_0__::func_13(128))
	{
		return true;
	}
	return false;
}

void func_6(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_64)
	{
		if (iVar1 == 0)
		{
			iVar0 = 7966;
		}
		else
		{
			iVar0 = 64847;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_64[iVar1]))
		{
			if (!uParam0->f_97)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_64[iVar1], Global_35))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64[iVar1], Global_35, PED::GET_PED_BONE_INDEX(Global_35, iVar0), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("DROPCIGARETTE")))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_64[iVar1], true, true);
					uParam0->f_97 = 1;
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("OBJECTEXCHANGE")))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_64[iVar1]));
			}
		}
		iVar1++;
	}
}

void func_7()
{
	if (Global_1310720.f_7 && !bLocal_159)
	{
		if (iLocal_157 < 0)
		{
			iLocal_157 = MISC::GET_GAME_TIMER();
		}
		if (__LIB_0__::func_30(Global_1935630.f_3))
		{
			if (iLocal_157 + 5000 < MISC::GET_GAME_TIMER())
			{
				__LIB_1__::func_952();
				AUDIO::PLAY_SOUND_FRONTEND("TITLE_SCREEN_EXIT_OFF_MISSION", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
				bLocal_158 = true;
			}
			else if (!CAM::IS_SCREEN_FADED_IN() && _NAMESPACE77::_0x07954320D77F6A3D(Global_1935630.f_3) >= 3)
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (bLocal_158)
		{
			if (!_NAMESPACE77::_0xC5C395C60B542A3C(1) || iLocal_157 + 5000 + 650 < MISC::GET_GAME_TIMER())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				bLocal_159 = true;
			}
		}
	}
	else
	{
		bLocal_159 = true;
	}
}

int func_9(float fParam0, float fParam1)
{
	if ((((((((((((((((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35)) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) || MISC::ABSF(fParam0) > 0.2f) || MISC::ABSF(fParam1) > 0.2f) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_A"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_WHEEL_MENU"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK2"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_MELEE_ATTACK"))) || PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_ATTACK")) > 0f) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_JOURNAL")))
	{
		return 1;
	}
	if (Local_32.f_59 && PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
	{
		bLocal_150 = true;
		return 1;
	}
	if (!PED::IS_PED_INJURED(Local_32.f_98))
	{
		if (PED::_0xB8E2D655E1D5BD39(Local_32.f_98))
		{
			return 1;
		}
	}
	return 0;
}

int func_12(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	struct<5> Var13;
	int iVar18;
	uParam0->f_5.f_2 = 0;
	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(uParam0->f_5, uParam0->f_5.f_1);
	if (iVar0 < 0 || iParam2 >= iVar0)
	{
		return 0;
	}
	uParam0->f_5.f_3 = iParam2;
	uParam0->f_5.f_2 = 599260570;
	DATAFILE::_DATAFILE_GET_STRING(&Var1, &(uParam0->f_5));
	uParam0->f_14 = __LIB_0__::func_67(Var1);
	uParam0->f_5.f_3 = iParam2;
	uParam0->f_5.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&iVar10, &(uParam0->f_5));
	if (__LIB_0__::func_58(iVar10))
	{
		iVar10 = joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A");
	}
	uParam0->f_11 = func_108(iVar10);
	uParam0->f_15 = func_109(iVar10);
	uParam0->f_2 = -1222062814;
	uParam0->f_3 = iVar10;
	Var13 = { *uParam0 };
	if (Global_40.f_9.f_12)
	{
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var13.f_1), &Var13))
		{
			iVar18 = iVar10;
			Var13.f_2 = -2000223992;
			DATAFILE::_DATAFILE_GET_HASH(&iVar10, &Var13);
			if (iVar10 != 0)
			{
				uParam0->f_11 = func_108(iVar10);
				uParam0->f_15 = func_109(iVar10);
				uParam0->f_2 = -1222062814;
				uParam0->f_3 = iVar10;
			}
			else
			{
				iVar10 = iVar18;
			}
		}
	}
	iVar9 = iVar10;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_5.f_2 = -1726340653;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar10, &(uParam0->f_5)))
		{
			uParam0->f_12 = func_108(iVar10);
		}
		else
		{
			uParam0->f_12 = uParam0->f_11;
		}
		uParam0->f_2 = 824674748;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_53), uParam0);
		uParam0->f_2 = -1565562604;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_54), uParam0);
		uParam0->f_2 = -233815074;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_55), uParam0);
		uParam0->f_2 = -477049661;
		DATAFILE::_DATAFILE_GET_BOOL(&bVar11, uParam0);
		if (bVar11)
		{
			uParam0->f_67 |= 67108880;
		}
		uParam0->f_2 = -899679477;
		DATAFILE::_DATAFILE_GET_BOOL(&bVar12, uParam0);
		if (bVar12)
		{
			uParam0->f_67 |= 49152;
			uParam0->f_68 |= 49152;
		}
		uParam0->f_2 = -62070419;
		DATAFILE::_DATAFILE_GET_BOOL(&bVar12, uParam0);
		if (bVar12)
		{
			uParam0->f_69 |= 1;
		}
		uParam0->f_2 = -1625090004;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_57), uParam0);
		uParam0->f_2 = 76128139;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_58), uParam0);
		uParam0->f_2 = -1148228754;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_59), uParam0);
		uParam0->f_2 = 2055089342;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_60), uParam0);
		uParam0->f_2 = 660059998;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_56), uParam0);
		if (!uParam0->f_59)
		{
			if (uParam0->f_56)
			{
				uParam0->f_2 = 1514205951;
				DATAFILE::_DATAFILE_GET_HASH(&iVar10, uParam0);
				uParam0->f_13 = func_108(iVar10);
				uParam0->f_2 = 1597176581;
				DATAFILE::_DATAFILE_GET_INT(&(uParam0->f_52), uParam0);
			}
		}
		else
		{
			func_110(uParam0, iVar9);
		}
		func_111(uParam0, iParam1, MISC::GET_HASH_KEY(uParam0->f_14));
		uParam0->f_2 = -1854764018;
		DATAFILE::_DATAFILE_GET_HASH(&iVar10, uParam0);
		if (iVar10 != 0)
		{
			uParam0->f_61[0] = iVar10;
		}
		uParam0->f_2 = -391550498;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar10, uParam0))
		{
			uParam0->f_61[1] = iVar10;
		}
		if (uParam0->f_56)
		{
		}
	}
	return 1;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	iVar3 = Global_40.f_9.f_16;
	while (iVar3 > iVar0 && !bVar4)
	{
		if (Global_40.f_9.f_16[iVar0] < 0)
		{
			iVar1 = iVar0;
			bVar4 = true;
		}
		iVar0++;
	}
	uVar5 = (BUILTIN::SHIFT_LEFT(iParam1, 11) || iParam0);
	Global_40.f_9.f_16[iVar1] = uVar5;
	iVar2 = iVar1 + 1;
	iVar2 = __LIB_0__::func_55(iVar2 >= iVar3, 0, iVar2);
	Global_40.f_9.f_16[iVar2] = -1;
}

void func_16()
{
	func_115();
}

bool func_17()
{
	return Global_1310720.f_9;
}

int func_18(var uParam0)
{
	if ((!__LIB_0__::func_86(uParam0->f_1) && !__LIB_0__::func_86(uParam0->f_4)) && uParam0->f_7 != 0f)
	{
		CAM::SET_CAM_COORD(*uParam0, uParam0->f_1);
		CAM::SET_CAM_ROT(*uParam0, uParam0->f_4, 2);
		CAM::SET_CAM_FOV(*uParam0, uParam0->f_7);
		CAM::SET_CAM_ACTIVE(*uParam0, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

bool func_19()
{
	return Global_1310720.f_10;
}

bool func_24()
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bVar3 = false;
	if (!func_118(&Local_32))
	{
		bVar3 = true;
	}
	bVar5 = true;
	iVar4 = 0;
	while (iVar4 < Local_32.f_64)
	{
		if (Local_32.f_61[iVar4] != 0)
		{
			STREAMING::REQUEST_MODEL(Local_32.f_61[iVar4], false);
			if (STREAMING::HAS_MODEL_LOADED(Local_32.f_61[iVar4]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_32.f_64[iVar4]))
				{
					Local_32.f_64[iVar4] = OBJECT::CREATE_OBJECT(Local_32.f_61[iVar4], Global_36, true, true, false, false, true);
				}
			}
			else
			{
				bVar5 = false;
			}
		}
		iVar4++;
	}
	if (!bVar5)
	{
		bVar3 = true;
	}
	if (!bVar3)
	{
		if (Local_32.f_93 + 30000 < MISC::GET_GAME_TIMER())
		{
			return true;
		}
	}
	if (!func_119())
	{
		bVar3 = true;
	}
	if ((!func_17() && !bLocal_31) && !__LIB_0__::func_1(Global_1935630, 131072))
	{
		bLocal_147 = AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_30))
		{
			Local_32.f_16 = func_120(CLOCK::GET_CLOCK_HOURS());
			iLocal_30 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_32.f_16, 0, 0, false, true);
			if (iLocal_30 == -1)
			{
				bLocal_31 = true;
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_30);
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_30, true, false))
		{
			bVar3 = true;
		}
		if (!bLocal_147)
		{
			bVar3 = true;
		}
	}
	if (bVar3)
	{
		return false;
	}
	if (STREAMING::_0xCF45DF50C7775F2A() && !Global_1310720.f_27)
	{
		if (!STREAMING::_0x0909F71B5C070797())
		{
			return false;
		}
	}
	if (!PED::_0x0EE3F0D7FECCC54F() || !VEHICLE::_0x2701D01D5E18FC31())
	{
		return false;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(Global_35))
	{
		return false;
	}
	vVar0 = { Local_32.f_30 };
	if (!__LIB_2__::func_106(&vVar0, 50, 10, 0))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_76)))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(Local_32.f_76)))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_84)))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(Local_32.f_84)))
		{
			return false;
		}
	}
	if (!bLocal_159)
	{
		return false;
	}
	if (!func_122())
	{
		return false;
	}
	if (func_29())
	{
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return false;
		}
	}
	if (!__LIB_0__::func_382(256))
	{
		return true;
	}
	return true;
}

bool func_29()
{
	if (!MISC::IS_ORBIS_VERSION())
	{
		return false;
	}
	if (!__LIB_0__::func_1(Global_1935630, 131072))
	{
		return false;
	}
	if (!NETWORK::_0xDA4B1A479C414FB2())
	{
		return false;
	}
	return true;
}

void func_30()
{
	struct<8> Var0;
	__LIB_1__::func_952();
	CAM::DO_SCREEN_FADE_OUT(0);
	Var0.f_2 = 4;
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_3 = 2117985430;
	Var0.f_7 = 1539841963;
	Global_1935630.f_3 = func_129(&Var0, "PSPLUS_OFFER_TITLE", "PSPLUS_OFFER", 0, 1);
	NETWORK::_0xFC6FCF4C03F1BBF6();
}

bool func_31()
{
	vector3 vVar0;
	if (!MISC::IS_ORBIS_VERSION())
	{
		return true;
	}
	if ((!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN()) && __LIB_2__::func_342(Global_1935630.f_3))
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
	if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(joaat("STATUS_ALERT_FEED")))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(joaat("STATUS_ALERT_FEED"), &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.y == Global_1935630.f_3)
					{
						switch (vVar0.z)
						{
							case 2074623703:
								NETWORK::_0x83FE8D7229593017();
								return true;
							case 1400745903:
								return true;
						}
					}
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(joaat("STATUS_ALERT_FEED"));
	}
	return false;
}

void func_41()
{
	func_46();
	func_47();
	__LIB_1__::func_571(Global_35, Local_32.f_98, 0, -1, 1);
}

void func_42()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar0 = __LIB_0__::func_786();
	iVar1 = __LIB_0__::func_416(iVar0);
	fVar2 = __LIB_0__::func_514(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
	fVar3 = __LIB_0__::func_514(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
	GRAPHICS::_0xF972F0AB16DC5260("RespawnSkyWithHonor", 1, fVar2);
	GRAPHICS::_0xF972F0AB16DC5260("RespawnSkyWithHonor", 3, fVar3);
}

void func_43(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_58)
	{
		iVar0 = 0;
	}
	else if (uParam0->f_57)
	{
		iVar0 = 1;
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 0, true);
	}
	else
	{
		iVar1 = __LIB_1__::func_447(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), 1);
		if (!PED::IS_PED_INJURED(uParam0->f_98))
		{
			if (uParam0->f_59)
			{
				__LIB_1__::func_971(0);
			}
			else if (__LIB_1__::func_972(iVar1) == 4 && __LIB_0__::func_61() == iVar1)
			{
				__LIB_1__::func_971(0);
			}
			else if (__LIB_1__::func_972(iVar1) == 1)
			{
				iVar2 = Global_1888801[iVar1 /*35*/].f_4;
				if (__LIB_1__::func_205(Global_35, iVar2, 0, 0))
				{
					__LIB_1__::func_971(0);
				}
			}
		}
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		return;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_98))
	{
		iVar3 = __LIB_0__::func_399(Global_35, 0, 7, 0);
		if (__LIB_0__::func_154(iVar3))
		{
			WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar3);
		}
	}
	WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
	iVar3 = __LIB_0__::func_399(Global_35, 0, 0, 0);
	if ((!__LIB_0__::func_154(iVar3) || !WEAPON::_IS_WEAPON_TWO_HANDED(iVar3)) || WEAPON::_IS_WEAPON_BOW(iVar3))
	{
		iVar3 = __LIB_0__::func_399(Global_35, 0, 1, 0);
	}
	if ((!__LIB_0__::func_154(iVar3) || !WEAPON::_IS_WEAPON_TWO_HANDED(iVar3)) || WEAPON::_IS_WEAPON_BOW(iVar3))
	{
		iVar3 = __LIB_0__::func_399(Global_35, 0, 9, 0);
	}
	if ((!__LIB_0__::func_154(iVar3) || !WEAPON::_IS_WEAPON_TWO_HANDED(iVar3)) || WEAPON::_IS_WEAPON_BOW(iVar3))
	{
		iVar3 = __LIB_0__::func_399(Global_35, 0, 10, 0);
	}
	if (__LIB_0__::func_154(iVar3))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar3))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar3, true, iVar0, false, false);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, iVar0, false, false);
		}
	}
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((!PED::IS_PED_INJURED(Local_32.f_98) && !TASK::IS_PED_IN_WRITHE(Local_32.f_98)) && !__LIB_0__::func_86(Local_32.f_34))
	{
		__LIB_0__::func_568(Local_32.f_34, 10f, 0);
		ENTITY::SET_ENTITY_COORDS(Local_32.f_98, Local_32.f_34, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Local_32.f_98, Local_32.f_37);
		ENTITY::_0x9587913B9E772D29(Local_32.f_98, 1);
		PED::_0x06D26A96CA1BCA75(Local_32.f_98, 3, 0f, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_32.f_98, true);
		POPULATION::_0xF74E134F40192884(Local_32.f_98, 2);
		iVar0 = __LIB_0__::func_402(Local_32.f_98);
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (__LIB_11__::func_884(iVar0, iVar1) < 15)
			{
				__LIB_12__::func_575(iVar0, iVar1, 15);
			}
			iVar1++;
		}
		if (!Local_32.f_59)
		{
			if (Local_32.f_38)
			{
				if (TASK::_0x6EEAD6AF637DA752(Local_32.f_34, joaat("PROP_HITCHINGPOST"), 1f, 0))
				{
					iVar2 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_32.f_34, joaat("PROP_HITCHINGPOST"), 1f, 0, false);
					TASK::_TASK_USE_SCENARIO_POINT(Local_32.f_98, iVar2, 0, 0, true, true, 0, false, -1f, false);
				}
			}
		}
	}
}

void func_47()
{
	var uVar0;
	ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_32.f_30 + Vector(1.5f, 0f, 0f), &uVar0, false))
	{
		Local_32.f_30.f_2 = uVar0;
	}
	ENTITY::SET_ENTITY_COORDS(Global_35, Local_32.f_30, false, true, true, true);
	ENTITY::SET_ENTITY_HEADING(Global_35, Local_32.f_33);
}

var func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return uParam0->f_12;
	}
	return uParam0->f_11;
}

void func_49(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_64)
	{
		sVar0 = "";
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_64[iVar1]))
		{
			if ((uParam0->f_61[iVar1] == joaat("P_JOURNAL01X") || uParam0->f_61[iVar1] == joaat("S_LEV_JOURNAL_BOOK")) || uParam0->f_61[iVar1] == joaat("S_PLAYERJOURNAL01X"))
			{
				if (bParam1)
				{
					sVar0 = "respawn_loop_journal";
				}
				else
				{
					sVar0 = "respawn_action_journal";
				}
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_64[iVar1], sVar0, func_48(uParam0, bParam1), 1000f, bParam1, false, false, 0f, 0);
		}
		iVar1++;
	}
}

var func_50(var uParam0, bool bParam1)
{
	char cVar0[64];
	if (bParam1)
	{
		StringCopy(&cVar0, "arthur_", 64);
	}
	else
	{
		StringCopy(&cVar0, "horse_", 64);
	}
	StringConCat(&cVar0, uParam0->f_17, 64);
	return __LIB_1__::func_569(cVar0);
}

bool func_51(int iParam0)
{
	if (!bLocal_151)
	{
		return false;
	}
	if (Global_1310720.f_25)
	{
		return true;
	}
	if (Global_1310720.f_26 && iParam0)
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_NEXT_CAMERA")))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			return true;
		}
	}
	return false;
}

int func_52(var uParam0)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::_FREEZE_GAMEPLAY_CAM_THIS_FRAME();
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

float func_55()
{
	if (Global_1310720.f_13 && Global_1310720.f_15 < 2)
	{
		Global_1310720.f_15 = 2;
	}
	switch (Global_1310720.f_15)
	{
		case 1:
			return 0.05f;
		case 2:
			return 0.07f;
		case 3:
			return 0.1f;
		case 4:
			return 0.13f;
		case 5:
			return 0.15f;
		default:
			break;
	}
	return 0.2f;
}

void func_56(float fParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = MONEY::_MONEY_GET_CASH_BALANCE();
	if (iVar0 < iParam2)
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar0) * fParam0));
	if (iVar1 > iParam1)
	{
		iVar1 = iParam1;
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_974(iVar1);
		__LIB_2__::func_472(iVar1, 0, 0);
	}
}

void func_61(int iParam0, int iParam1)
{
	var uVar0;
	if (iParam0 == -1)
	{
		return;
	}
	uVar0 = __LIB_0__::func_23();
	__LIB_7__::func_846(&uVar0, 0, iParam1, 0, 0, 0, 0, 0);
	Global_1327590.f_19622[iParam0 /*14*/].f_9 = uVar0;
}

void func_62()
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_32.f_98, false, true);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	Local_32.f_93 = 0;
}

bool func_63(var uParam0)
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(uParam0, 1), func_64(uParam0, 1, uParam0->f_25), 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(uParam0, 1), func_64(uParam0, 1, uParam0->f_25)) > 0.95f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1120007597))
		{
			return true;
		}
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(uParam0, 1), func_50(uParam0, 1), 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(uParam0, 1), func_50(uParam0, 1)) > 0.95f)
		{
			return true;
		}
	}
	return false;
}

var func_64(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	if (bParam1)
	{
		StringCopy(&cVar0, "arthur_", 64);
	}
	else
	{
		StringCopy(&cVar0, "horse_", 64);
	}
	StringConCat(&cVar0, uParam0->f_19[iParam2], 64);
	return __LIB_1__::func_569(cVar0);
}

Vector3 func_65(var uParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "RESPAWN_IDLE_", 24);
	StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, uParam0->f_52 + 1), 24);
	return cVar0;
}

char* func_66(var uParam0, bool bParam1)
{
	char cVar0[64];
	if (bParam1)
	{
		StringCopy(&cVar0, "arthur_", 64);
	}
	else
	{
		StringCopy(&cVar0, "horse_", 64);
	}
	StringConCat(&cVar0, uParam0->f_18, 64);
	return __LIB_1__::func_569(cVar0);
}

void func_67(var uParam0, bool bParam1)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	CAM::_0x3C486E334520579D();
	if (bParam1)
	{
		CAM::_0x06557F6D96C86881();
	}
}

bool func_68(bool bParam0, float fParam1)
{
	if (bLocal_151)
	{
		if (Local_32.f_54)
		{
			if (!Local_32.f_95 && fParam1 < 0.985f)
			{
				return false;
			}
		}
		return bParam0;
	}
	if (fParam1 > 0.985f || Local_32.f_59)
	{
		return true;
	}
	return (Local_32.f_95 && bParam0);
}

void func_69(var uParam0)
{
	CAM::_0x0961B089947BA6D0(uParam0->f_8);
	CAM::_CLAMP_GAMEPLAY_CAM_YAW(uParam0->f_9, uParam0->f_10);
	CAM::_CLAMP_GAMEPLAY_CAM_PITCH(uParam0->f_11, uParam0->f_12);
}

void func_77(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	Var0.f_1 = 20;
	if ((__LIB_0__::func_192(iParam0, 1573112293) || __LIB_0__::func_192(iParam0, 672467738)) || __LIB_0__::func_192(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = __LIB_6__::func_38(0, Var22.f_2);
				__LIB_0__::func_145(Var22.f_2, 1);
				__LIB_0__::func_597(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = __LIB_6__::func_38(2, Var22.f_2);
				__LIB_0__::func_188(Var22.f_2);
				__LIB_0__::func_597(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = __LIB_6__::func_38(1, Var22.f_2);
				__LIB_0__::func_146(Var22.f_2);
				__LIB_0__::func_597(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (__LIB_7__::func_840(&uVar38, &uVar39, fVar33))
				{
					__LIB_9__::func_160(fVar33, 1, bVar37, bParam1);
					__LIB_0__::func_597(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (__LIB_7__::func_840(&uVar38, &uVar39, fVar34))
				{
					__LIB_9__::func_159(fVar34, 1, bVar37, bParam1);
					__LIB_0__::func_597(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (__LIB_7__::func_840(&uVar38, &uVar39, fVar35))
				{
					__LIB_9__::func_158(fVar35, 1, bVar37, bParam1);
					__LIB_0__::func_597(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				__LIB_10__::func_11(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || __LIB_0__::func_192(iParam0, -537818634))
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (__LIB_0__::func_192(iParam0, -1457797660))
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar40)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

Vector3 func_83(int iParam0)
{
	struct<4> Var0;
	vector3 vVar5;
	if (!__LIB_0__::func_720(15, &Var0))
	{
		return 0f, 0f, 0f;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -786414325;
	DATAFILE::_DATAFILE_GET_FLOAT(&vVar5, &Var0);
	Var0.f_2 = -1756016266;
	DATAFILE::_DATAFILE_GET_FLOAT(&(vVar5.f_1), &Var0);
	Var0.f_2 = -1264284652;
	DATAFILE::_DATAFILE_GET_FLOAT(&(vVar5.f_2), &Var0);
	return vVar5;
}

void func_85()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 955)
	{
		if (__LIB_0__::func_117(iVar0, 2097152))
		{
			__LIB_13__::func_215(iVar0);
		}
		iVar0++;
	}
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_DRINK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_DRINK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@LONGARM_LHAND@CROUCH_STREAM_DRINK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@LONGARM_LHAND@CROUCH_STREAM_DRINK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@STAND_LEAN_BACK_FLASK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@STAND_LEAN_BACK_FLASK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@STAND_LEAN_BACK_FLASK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@STAND_LEAN_BACK_FLASK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@FRONT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@FRONT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@LEFT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@LEFT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@RIGHT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@RIGHT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@FRONT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@FRONT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@LEFT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@LEFT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@RIGHT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@RIGHT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_BOOT_CLEAN@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_BOOT_CLEAN@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_BOOT_CLEAN@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_BOOT_CLEAN@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_RHAND@STAND_ADJUST_BELT@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_RHAND@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@CROUCH_SMOKE_END@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@CROUCH_SMOKE_END@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_LHAND@WIPE_BROW@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_LHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@C";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A";
		case joaat("SCRIPT_RESPAWN@HORSE@MOUNTED_UNARMED"):
			return "SCRIPT_RESPAWN@HORSE@MOUNTED_UNARMED";
		case joaat("SADDLE_LEAN_FWD_PETWHISPERS_LT"):
			return "SADDLE_LEAN_FWD_PETWHISPERS_LT";
		case joaat("SADDLE_LEAN_FWD_PETWHISPERS_RT"):
			return "SADDLE_LEAN_FWD_PETWHISPERS_RT";
		case joaat("SADDLE_LEAN_FWD_FLYSWAT1"):
			return "SADDLE_LEAN_FWD_FLYSWAT1";
		case joaat("SADDLE_LEAN_FWD_SPITWIPE_LT"):
			return "SADDLE_LEAN_FWD_SPITWIPE_LT";
		case joaat("SADDLE_LEAN_FWD_LOOKING_IDLE"):
			return "SADDLE_LEAN_FWD_LOOKING_IDLE";
		case joaat("SADDLE_LEAN_FWD_EXIT_ADJUST"):
			return "SADDLE_LEAN_FWD_EXIT_ADJUST";
		case joaat("SADDLE_LEAN_FWD_EXIT_LEG_STRETCH"):
			return "SADDLE_LEAN_FWD_EXIT_LEG_STRETCH";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A@IDLES";
		default:
			break;
	}
	return "";
}

char* func_109(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A"):
			return "UNARMED@CRACK_NECK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@B"):
			return "UNARMED@CRACK_NECK@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@A"):
			return "LHAND@CRACK_NECK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@B"):
			return "LHAND@CRACK_NECK@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@A"):
			return "UNARMED@CLOSE_JOURNAL@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@B"):
			return "UNARMED@CLOSE_JOURNAL@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@A"):
			return "UNARMED@CROUCH_STREAM_WASH@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@B"):
			return "UNARMED@CROUCH_STREAM_WASH@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@C"):
			return "UNARMED@CROUCH_STREAM_WASH@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@LONGARM_LHAND@CROUCH_STREAM_DRINK@A"):
			return "LHAND@CROUCH_STREAM_DRINK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_DRINK@A"):
			return "UNARMED@CROUCH_STREAM_DRINK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@STAND_LEAN_BACK_FLASK@A"):
			return "UNARMED@STAND_LEAN_BACK_FLASK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@STAND_LEAN_BACK_FLASK@A"):
			return "LHAND@STAND_LEAN_BACK_FLASK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@FRONT"):
			return "UNARMED@SITTING_JOURNAL_WRITING@FRONT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@LEFT"):
			return "UNARMED@SITTING_JOURNAL_WRITING@LEFT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@RIGHT"):
			return "UNARMED@SITTING_JOURNAL_WRITING@RIGHT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@A"):
			return "UNARMED@SITTING_JOURNAL_WRITING@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@B"):
			return "UNARMED@SITTING_JOURNAL_WRITING@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@C"):
			return "UNARMED@SITTING_JOURNAL_WRITING@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING"):
			return "LHAND@SITTING_JOURNAL_WRITING";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@FRONT"):
			return "LHAND@SITTING_JOURNAL_WRITING@FRONT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@LEFT"):
			return "LHAND@SITTING_JOURNAL_WRITING@LEFT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@RIGHT"):
			return "LHAND@SITTING_JOURNAL_WRITING@RIGHT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_BOOT_CLEAN@A"):
			return "LHAND@STAND_BOOT_CLEAN@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_BOOT_CLEAN@A"):
			return "UNARMED@STAND_BOOT_CLEAN@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@A"):
			return "UNARMED@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@B"):
			return "UNARMED@STAND_ADJUST_BELT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@C"):
			return "UNARMED@STAND_ADJUST_BELT@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@A"):
			return "LHAND@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@B"):
			return "LHAND@STAND_ADJUST_BELT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_RHAND@STAND_ADJUST_BELT@A"):
			return "RHAND@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@CROUCH_SMOKE_END@A"):
			return "UNARMED@CROUCH_SMOKE_END@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@A"):
			return "LHAND@CROUCH_SMOKE_END@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@B"):
			return "LHAND@CROUCH_SMOKE_END@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@A"):
			return "UNARMED@SWAT_FLIES@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@B"):
			return "UNARMED@SWAT_FLIES@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@C"):
			return "UNARMED@SWAT_FLIES@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@A"):
			return "LHAND@SWAT_FLIES@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@B"):
			return "LHAND@SWAT_FLIES@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_LHAND@WIPE_BROW@A"):
			return "LHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@A"):
			return "RHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@B"):
			return "RHAND@WIPE_BROW@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@A"):
			return "LHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@B"):
			return "LHAND@WIPE_BROW@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@A"):
			return "UNARMED@SPIT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@B"):
			return "UNARMED@SPIT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@C"):
			return "UNARMED@SPIT@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@A"):
			return "LHAND@SPIT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@B"):
			return "LHAND@SPIT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@C"):
			return "LHAND@SPIT@C";
		case joaat("SCRIPT_RESPAWN@HORSE@MOUNTED_UNARMED"):
			return "HORSE@MOUNTED_UNARMED";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A"):
			return "UNARMED@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A"):
			return "LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A"):
			return "LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A"):
			return "UNARMED_HAT@SIT_WAKE_UP@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A"):
			return "UNARMED@LEAN_LEFT_ARMS_CROSSED@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A"):
			return "LHAND@LEAN_LEFT_ARMS_CROSSED@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A"):
			return "UNARMED@SIT_LEAN_FORWARDS@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A"):
			return "LONGARM_LHAND@SIT_LEAN_FORWARDS@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "RHAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "2HAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A@IDLES"):
			return "UNARMED_HAT@SIT_WAKE_UP@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES"):
			return "UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES"):
			return "LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A@IDLES"):
			return "UNARMED@SIT_LEAN_FORWARDS@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A@IDLES"):
			return "LHAND@SIT_LEAN_FORWARDS@A@IDLES";
		default:
			break;
	}
	return "";
}

void func_110(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var6;
	int iVar11;
	__LIB_0__::func_720(15, &Var1);
	Var1.f_2 = -1374679209;
	Var1.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 805008619;
		Var1.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1));
		DATAFILE::_DATAFILE_GET_HASH(&iVar0, &Var1);
		uParam0->f_17 = func_108(iVar0);
	}
	Var1 = { Var6 };
	__LIB_0__::func_720(15, &Var1);
	Var1.f_2 = 669343399;
	Var1.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 1312010450;
		Var1.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1));
		DATAFILE::_DATAFILE_GET_HASH(&iVar0, &Var1);
		uParam0->f_18 = func_108(iVar0);
	}
	Var1 = { Var6 };
	__LIB_0__::func_720(15, &Var1);
	Var1.f_2 = 908023140;
	Var1.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		while (iVar11 < DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1))
		{
			Var1.f_2 = -1100654060;
			Var1.f_3 = iVar11;
			DATAFILE::_DATAFILE_GET_HASH(&iVar0, &Var1);
			uParam0->f_19[iVar11] = func_108(iVar0);
			iVar11++;
		}
		uParam0->f_52 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
		uParam0->f_25 = (uParam0->f_52 - 1);
	}
}

void func_111(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	__LIB_0__::func_720(15, &Var0);
	Var0.f_2 = -1571721931;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		DATAFILE::_DATAFILE_GET_VECTOR(&(uParam0->f_30), &Var0);
		Var0.f_2 = -1276360309;
		DATAFILE::_DATAFILE_GET_FLOAT(&(uParam0->f_33), &Var0);
		Var0.f_2 = 1081618208;
		DATAFILE::_DATAFILE_GET_VECTOR(&(uParam0->f_39.f_1), &Var0);
		Var0.f_2 = -1993680615;
		DATAFILE::_DATAFILE_GET_VECTOR(&(uParam0->f_39.f_4), &Var0);
		Var0.f_2 = 151706215;
		DATAFILE::_DATAFILE_GET_FLOAT(&(uParam0->f_39.f_7), &Var0);
		Var0.f_2 = 1075437165;
		DATAFILE::_DATAFILE_GET_VECTOR(&(uParam0->f_34), &Var0);
		Var0.f_2 = 482880665;
		DATAFILE::_DATAFILE_GET_FLOAT(&(uParam0->f_37), &Var0);
		Var0.f_2 = 1818584824;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_38), &Var0);
		Var0.f_2 = -2069884107;
		DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0);
		if (iVar5 == joaat("WEATHER_INVALID") || iVar5 == 0)
		{
			uParam0->f_73 = 0;
		}
		else
		{
			uParam0->f_73 = iVar5;
		}
		Var0.f_2 = 2009151738;
		DATAFILE::_DATAFILE_GET_INT(&(uParam0->f_74), &Var0);
		Var0.f_2 = -1565059035;
		DATAFILE::_DATAFILE_GET_INT(&(uParam0->f_75), &Var0);
		Var0.f_2 = 1786497406;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_96), &Var0);
		Var0.f_2 = -182204340;
		DATAFILE::_DATAFILE_GET_STRING(&(uParam0->f_76), &Var0);
		Var0.f_2 = -2016118713;
		DATAFILE::_DATAFILE_GET_STRING(&(uParam0->f_84), &Var0);
	}
}

void func_115()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		func_223(iVar0);
		iVar0++;
	}
}

bool func_118(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_48(uParam0, 0)))
	{
		STREAMING::REQUEST_ANIM_DICT(func_48(uParam0, 0));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48(uParam0, 0)))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_48(uParam0, 1)))
	{
		STREAMING::REQUEST_ANIM_DICT(func_48(uParam0, 1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48(uParam0, 1)))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_13))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_13);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_13))
		{
			return false;
		}
	}
	return true;
}

bool func_119()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	var uVar10;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	struct<11> Var16;
	bool bVar27;
	vector3 vVar28;
	float fVar31;
	vector3 vVar32;
	float fVar35;
	vector3 vVar36;
	int iVar39;
	float fVar40;
	int iVar41;
	vector3 vVar42;
	vector3 vVar45;
	var uVar48;
	vector3 vVar49;
	int iVar52;
	struct<11> Var53;
	if (__LIB_0__::func_86(Local_32.f_34))
	{
		return true;
	}
	if (!func_224(&bVar0, &bVar1))
	{
		if (__LIB_0__::func_0())
		{
			bVar0 = true;
		}
		else
		{
			return true;
		}
	}
	bVar2 = false;
	if (ENTITY::DOES_ENTITY_EXIST(Local_32.f_98))
	{
		bVar2 = true;
	}
	if (!bVar2 && bVar0)
	{
		vVar3 = { Local_32.f_34 };
		uVar6 = Local_32.f_37;
		if (__LIB_0__::func_795(0))
		{
			vVar7 = { Local_32.f_100 };
			uVar10 = Local_32.f_103;
			if (!__LIB_0__::func_86(vVar7))
			{
				vVar3 = { vVar7 };
				uVar6 = uVar10;
			}
		}
		vVar11 = { vVar3 };
		if (!__LIB_2__::func_106(&vVar11, 50, 10, 0))
		{
		}
		if ((vVar11.z - 0.5f) < vVar3.z && (vVar11.z + 6f) > vVar3.z)
		{
			vVar3 = { vVar11 };
		}
		iVar14 = 0;
		if (__LIB_5__::func_917() == 0)
		{
			iVar14 = 1;
		}
		Var16.f_10 = 7;
		Var16.f_10 = 0;
		Var16 = 1;
		Var16.f_2 = 1;
		Var16.f_4 = iVar14;
		Var16.f_5 = 1;
		Var16.f_6 = { vVar3 };
		Var16.f_9 = uVar6;
		Local_32.f_98 = func_228(&iVar15, &Var16);
		if (iVar15 == 2 && ENTITY::DOES_ENTITY_EXIST(Local_32.f_98))
		{
			bVar2 = true;
		}
		else if (iVar15 == 1)
		{
			bVar2 = true;
		}
	}
	else
	{
		bVar2 = true;
	}
	bVar27 = false;
	if (ENTITY::DOES_ENTITY_EXIST(Local_32.f_99))
	{
		bVar27 = true;
	}
	if (!bVar27 && bVar1)
	{
		vVar28 = { Local_32.f_34 };
		fVar31 = Local_32.f_37;
		if (bVar0)
		{
			vVar32 = { Local_32.f_104 };
			fVar35 = Local_32.f_107;
			if (!__LIB_0__::func_86(vVar32))
			{
				vVar28 = { vVar32 };
				fVar31 = fVar35;
				iVar39 = 0;
				while (iVar39 < 9)
				{
					iVar41 = -1;
					if (iVar39 == __LIB_0__::func_317())
					{
						iVar41 = __LIB_0__::func_592();
					}
					if (iVar41 != -1 && __LIB_6__::func_173(iVar39, iVar41))
					{
						vVar36 = { __LIB_6__::func_411(iVar39) };
						if (!__LIB_0__::func_86(vVar36))
						{
							fVar40 = BUILTIN::VDIST2(vVar36, vVar28);
							if (fVar40 <= 100f)
							{
								vVar28 = { __LIB_6__::func_484(iVar39, -1) };
								fVar31 = __LIB_6__::func_396(iVar39);
							}
						}
					}
					iVar39++;
				}
			}
			else
			{
				vVar42 = { -2f, -2f, 0f };
				vVar28 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar28, 0f, vVar42) };
			}
		}
		if (__LIB_0__::func_795(1))
		{
			__LIB_14__::func_219(1, &vVar45, &uVar48);
			if (!__LIB_0__::func_86(vVar45))
			{
				vVar28 = { vVar45 };
				fVar31 = fVar31;
			}
		}
		vVar49 = { vVar28 };
		if (!__LIB_2__::func_106(&vVar49, 50, 10, 0))
		{
		}
		if ((vVar49.z - 0.5f) < vVar28.z && (vVar49.z + 6f) > vVar28.z)
		{
			vVar28 = { vVar49 };
		}
		Var53.f_10 = 7;
		Var53.f_10 = 1;
		Var53 = 1;
		Var53.f_2 = 1;
		Var53.f_5 = 1;
		Var53.f_6 = { vVar28 };
		Var53.f_9 = fVar31;
		Local_32.f_99 = func_228(&iVar52, &Var53);
		if (!bVar0)
		{
			Local_32.f_98 = Local_32.f_99;
		}
		if (iVar52 == 2 && ENTITY::DOES_ENTITY_EXIST(Local_32.f_99))
		{
			bVar27 = true;
		}
		else if (iVar52 == 1)
		{
		}
	}
	else
	{
		bVar27 = true;
	}
	if (bVar2 && bVar27)
	{
		return true;
	}
	return false;
}

var func_120(int iParam0)
{
	int iVar0;
	char cVar1[64];
	iVar0 = __LIB_2__::func_954();
	StringCopy(&cVar1, "script@respawn@sky@SkyTL_", 64);
	if (iParam0 >= 23 || iParam0 < 1)
	{
		StringConCat(&cVar1, "0000", 64);
	}
	else if (iParam0 >= 20)
	{
		StringConCat(&cVar1, "2100", 64);
	}
	else if (iParam0 >= 17)
	{
		StringConCat(&cVar1, "1800", 64);
	}
	else if (iParam0 >= 14)
	{
		StringConCat(&cVar1, "1500", 64);
	}
	else if (iParam0 >= 11)
	{
		StringConCat(&cVar1, "1200", 64);
	}
	else if (iParam0 >= 8)
	{
		StringConCat(&cVar1, "0900", 64);
	}
	else if (iParam0 >= 5)
	{
		StringConCat(&cVar1, "0600", 64);
	}
	else
	{
		StringConCat(&cVar1, "0300", 64);
	}
	switch (iVar0)
	{
		case joaat("HIGHPRESSURE"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
		case joaat("SNOWCLEARING"):
			StringConCat(&cVar1, "_01Clear", 64);
			break;
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("OVERCAST"):
		case joaat("FOG"):
		case joaat("SHOWER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
			StringConCat(&cVar1, "_03Clouds", 64);
			break;
		case joaat("SANDSTORM"):
		case joaat("OVERCASTDARK"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			StringConCat(&cVar1, "_04Storm", 64);
			break;
		default:
			break;
	}
	return __LIB_1__::func_569(cVar1);
}

bool func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1898330)
	{
		if (!__LIB_0__::func_6(Global_1898330[iVar1]))
		{
		}
		else
		{
			__LIB_1__::func_130(iVar1, 0);
			if (__LIB_0__::func_6(Global_1898330[iVar1]))
			{
				switch (__LIB_0__::func_700(Global_1898330[iVar1]))
				{
					case 1:
						if (__LIB_3__::func_919(iVar1, 16) && !__LIB_3__::func_919(iVar1, 4))
						{
							iVar0 = 0;
						}
						break;
				}
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_450)
	{
		if (__LIB_0__::func_5(Global_40.f_450[iVar2]))
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[Global_40.f_450[iVar2] /*49*/].f_42, false))
			{
				if (!__LIB_0__::func_1(Global_1347702[Global_40.f_450[iVar2] /*49*/].f_13, 64))
				{
					iVar0 = 0;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

var func_129(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _NAMESPACE77::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

void func_223(int iParam0)
{
	int iVar0;
	if (iParam0 < 0)
	{
		return;
	}
	if (!__LIB_0__::func_86(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		__LIB_7__::func_910(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20f, 1, 0);
	}
	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0f;
	if (__LIB_5__::func_754(iParam0, 8388608))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 8388608;
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		if (Global_1393237.f_11[iParam0 /*30*/].f_17 != __LIB_1__::func_976())
		{
		}
		Global_1393237.f_11[iParam0 /*30*/].f_17 = __LIB_1__::func_976();
	}
	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[iVar0] = 0;
		iVar0++;
	}
	__LIB_3__::func_533(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[0]));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[1]));
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1393237.f_11[iParam0 /*30*/].f_21))
	{
		__LIB_7__::func_910(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);
	}
}

bool func_224(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	*bParam0 = 0;
	*bParam1 = 0;
	bVar0 = __LIB_0__::func_28();
	bVar1 = false;
	if (bVar0 && !__LIB_1__::func_185(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && __LIB_1__::func_185(37)) && !__LIB_1__::func_185(43))
	{
		*bParam0 = 0;
		*bParam1 = 0;
		return false;
	}
	bVar2 = false;
	if ((bVar0 && __LIB_1__::func_185(43)) && !__LIB_1__::func_185(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return true;
	}
	if (!bVar1 && !bVar2)
	{
		if (__LIB_0__::func_815(0) == 1)
		{
			*bParam0 = 1;
		}
		if (__LIB_0__::func_815(1) == 1)
		{
			*bParam1 = 1;
		}
	}
	if (*bParam0 || *bParam1)
	{
		return true;
	}
	return false;
}

int func_228(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				__LIB_1__::func_778(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_1__::func_779(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				__LIB_2__::func_308(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { __LIB_1__::func_622(uParam1->f_10) };
			Var10 = { __LIB_2__::func_229() };
			__LIB_2__::func_299(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

