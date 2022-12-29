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
	struct<374> Local_14 = { 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1579174863, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar6;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		__LIB_16__::func_960(&Local_14);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_2(&Local_14);
		__LIB_16__::func_879(19, 0, &(Local_14.f_218[0]), &(Local_14.f_142), &(Local_14.f_240), Local_14.f_239, 1097859072 /* Float: 15f */, 0);
		func_4(&Local_14, 0);
		__LIB_16__::func_942(&Local_14);
		__LIB_16__::func_928(Local_14.f_218[0], Local_14.f_230);
		if (Local_14 >= 6 && Local_14 < 67)
		{
			__LIB_16__::func_937(&Local_14);
			__LIB_16__::func_938(&Local_14);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_218[0]))
		{
			if (!__LIB_0__::func_272(Local_14.f_218[0], 0))
			{
				__LIB_16__::func_960(&Local_14);
			}
			else if (Local_14 > 2 && Local_14 < 67)
			{
				if (Local_14.f_239 > 50f)
				{
					Local_14.f_242 = __LIB_16__::func_883(&(Local_14.f_101), &(Local_14.f_129), &(Local_14.f_218[0]), &(Local_14.f_243), 1101004800 /* Float: 20f */);
				}
				else
				{
					Local_14.f_242 = __LIB_12__::func_465(Local_14.f_218[0], 0, &(Local_14.f_101), &(Local_14.f_129), 0, Local_14.f_239);
				}
				if (Local_14.f_242)
				{
					if (Local_14 <= 24)
					{
						__LIB_1__::func_581(&(Local_14.f_253), 4096);
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_224))
					{
						__LIB_1__::func_544(Local_14.f_224);
						VOLUME::_DELETE_VOLUME(Local_14.f_224);
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_231))
					{
						VOLUME::_DELETE_VOLUME(Local_14.f_231);
					}
					if (!__LIB_0__::func_27(Local_14.f_253, 131072))
					{
						__LIB_1__::func_581(&(Local_14.f_253), 131072);
					}
					__LIB_2__::func_593(&(Local_14.f_296), &(Local_14.f_317));
					__LIB_2__::func_56(Local_14.f_218[0], 1, 1);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 130, false);
					__LIB_16__::func_804(Local_14.f_218[0]);
					__LIB_1__::func_148(&(Local_14.f_136));
					__LIB_16__::func_953(&Local_14, 0, 0, 0, 0, 0, 0);
					__LIB_16__::func_953(&Local_14, 1, 1, 0, 0, 0, 0);
					__LIB_16__::func_944(&Local_14, 67);
				}
			}
		}
		if ((Local_14 >= 2 && Local_14 <= 36) || Local_14 >= 56)
		{
			func_21(&Local_14);
		}
		else if (Local_14 >= 37 && Local_14 <= 44)
		{
			func_22(&Local_14);
		}
		else if (Local_14 == 58 || Local_14 == 51)
		{
			func_23(&Local_14);
		}
		if (Local_14 >= 28 && Local_14 < 56)
		{
			__LIB_16__::func_884();
		}
		__LIB_16__::func_929(&Local_14);
		__LIB_16__::func_945(&Local_14);
		__LIB_16__::func_943(&Local_14);
		__LIB_16__::func_854(Local_14.f_218[0], &(Local_14.f_253), 262144, 19, Local_14.f_239);
		__LIB_16__::func_885(&Local_14, Local_14.f_246, "b_AnimatePlayer", 0);
		func_30(&Local_14, &(Local_14.f_247));
		bVar6 = func_30(&Local_14, &(Local_14.f_247));
		__LIB_16__::func_885(&Local_14, Local_14.f_247, "b_AnimatePlayer", bVar6);
		if (Local_14 > 2 && __LIB_0__::func_272(Local_14.f_218[0], 0))
		{
			if ((PED::IS_PED_ON_MOUNT(Global_35) && Local_14.f_239 <= 4f) || Local_14 >= 57)
			{
				PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_14.f_218[0], 262144);
			}
			else if (Local_14 < 57)
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_14.f_218[0], 262144);
			}
		}
		switch (Local_14)
		{
			case 0:
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_245))
				{
					Local_14.f_245 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_16__::func_886(), 0, __LIB_16__::func_874(), false, true);
				}
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_246))
				{
					Local_14.f_246 = ANIMSCENE::_CREATE_ANIM_SCENE(func_33(), 8224, func_34(), false, true);
				}
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_247))
				{
					Local_14.f_247 = ANIMSCENE::_CREATE_ANIM_SCENE(func_33(), 0, func_35(), false, true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_247, "b_AnimatePlayer", true, false);
				}
				Local_14.f_237 = "MICKEY";
				if (!__LIB_0__::func_27(Local_14.f_253, 32768))
				{
					if (Global_1396257[19 /*638*/].f_633 == 0)
					{
						__LIB_1__::func_581(&(Local_14.f_253), 32768);
					}
					else
					{
						__LIB_1__::func_581(&(Local_14.f_253), 1);
						__LIB_1__::func_581(&(Local_14.f_253), 32768);
					}
				}
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_245) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_246)) && __LIB_0__::func_27(Local_14.f_253, 32768))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_245);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_246);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_247);
					HUD::_TEXT_DATABASE_REQUEST("SPBM");
					HUD::_TEXT_DATABASE_REQUEST("SPCWVAU");
					STREAMING::REQUEST_MODEL(Local_14.f_155, false);
					__LIB_16__::func_887(&Local_14);
					__LIB_2__::func_261(Local_14.f_224, "SP_BumMickey1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
					POPULATION::_0xB56D41A694E42E86(Local_14.f_227, 2500607, 0, 0, -1, -1, 10);
					POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_227, 0, 0, 0, -1, -1, 0);
					Local_14.f_154 = __LIB_1__::func_293(19, 0, 9, __LIB_16__::func_790(19));
					if (!__LIB_0__::func_6(Local_14.f_154))
					{
					}
					Local_14.f_244 = __LIB_0__::func_895(Local_14.f_154);
					Local_14.f_255 = __LIB_5__::func_297(Local_14.f_154);
					__LIB_16__::func_875(&(Local_14.f_195));
					__LIB_4__::func_228(&(Local_14.f_101));
					__LIB_1__::func_398(&(Local_14.f_101), 1);
					__LIB_1__::func_401(&(Local_14.f_101), 1);
					__LIB_2__::func_828(&(Local_14.f_101), 1);
					__LIB_1__::func_413(&(Local_14.f_101), 1);
					__LIB_1__::func_403(&(Local_14.f_101), 1);
					__LIB_2__::func_829(&(Local_14.f_101), 1);
					__LIB_1__::func_399(&(Local_14.f_101), 0);
					__LIB_2__::func_956(&(Local_14.f_101), 1);
					__LIB_1__::func_397(&(Local_14.f_101), 0);
					__LIB_1__::func_402(&(Local_14.f_101), 1);
					__LIB_1__::func_405(&(Local_14.f_101), 1);
					__LIB_1__::func_393(&(Local_14.f_101), 1);
					__LIB_10__::func_590(&(Local_14.f_101), 0);
					__LIB_2__::func_619(&(Local_14.f_101), 0);
					__LIB_2__::func_903(&(Local_14.f_101), 0);
					__LIB_2__::func_830(&(Local_14.f_101), 0);
					__LIB_1__::func_406(&(Local_14.f_101), 1);
					if (__LIB_0__::func_6(Local_14.f_154))
					{
						__LIB_16__::func_944(&Local_14, 1);
					}
				}
				break;
			case 1:
				PED::_0xED9582B3DA8F02B4(1);
				if ((((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_14.f_245, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_14.f_246, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_14.f_247, true, false)) && HUD::_TEXT_DATABASE_HAS_LOADED("SPBM")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPCWVAU")) && STREAMING::HAS_MODEL_LOADED(Local_14.f_155)) && PED::_0x5C16855277819BBF() == 1)
				{
					__LIB_16__::func_944(&Local_14, 2);
				}
				break;
			case 2:
				if (__LIB_0__::func_27(Local_14.f_253, 1))
				{
					vVar2 = { __LIB_16__::func_888(1) };
				}
				else
				{
					vVar2 = { __LIB_16__::func_888(0) };
				}
				if (__LIB_16__::func_946(&(Local_14.f_218[0]), Local_14.f_155, vVar2, vVar2.f_3, 1, 0, 0))
				{
					if (__LIB_0__::func_272(Local_14.f_218[0], 0))
					{
						__LIB_16__::func_792(Local_14.f_218[0], 19);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_218[0], "special_ped_group", 0f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_218[0], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_218[0], joaat("REL_CIVMALE"));
						TASK::_0x7C015D8BCEC72CF4(Local_14.f_218[0], 1);
						TASK::_0x8BB283A7888AD1AD(Local_14.f_218[0], 1, 1f);
						TASK::_0x42CFD8FD8CC8DC69(Local_14.f_218[0], 1);
						TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_14.f_218[0], false);
						TASK::_0x88E32DB8C1A4AA4B(Local_14.f_218[0], 20f);
						PED::SET_PED_COMBAT_ABILITY(Local_14.f_218[0], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_218[0], 17, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 130, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 448, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 344, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 174, false);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 153, true);
						PED::_0xAE6004120C18DF97(Local_14.f_218[0], 0, 0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_14.f_218[0], 262144);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
						__LIB_0__::func_928(&(Local_14.f_3), Local_14.f_218[0], Local_14.f_237, 0);
						ENTITY::_0x9587913B9E772D29(Local_14.f_218[0], 0);
						if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_226))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_226, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_227))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_227, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_228))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_228, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_229))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_229, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_230))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_230, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_231))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_231, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						__LIB_1__::func_391(Local_14.f_227, 0, 0, 0);
						__LIB_16__::func_930(&(Local_14.f_232), vVar2, 5f, 5f, 5f);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_245, "cs_mickey", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_246, "MICKEY", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_246, "ARTHUR", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_247, "MICKEY", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_247, "ARTHUR", Global_35, 0);
						if (__LIB_0__::func_27(Local_14.f_253, 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_245, __LIB_16__::func_889(), __LIB_16__::func_890(), 2);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_245, __LIB_16__::func_891(), __LIB_16__::func_892(), 2);
						}
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_246, func_72(), func_73(), 2);
						if (!__LIB_1__::func_565(&(Local_14.f_235)))
						{
							Local_14.f_235 = GRAPHICS::_0xFA50F79257745E74(vVar2, 1.5f, 4, -1, 0);
						}
						if (Local_14.f_244 < 0)
						{
							Local_14.f_244 = 0;
						}
						if (__LIB_0__::func_181())
						{
							__LIB_0__::func_928(&(Local_14.f_3), Global_35, "JOHN", 0);
						}
						else
						{
							__LIB_0__::func_928(&(Local_14.f_3), Global_35, "ARTHUR", 0);
						}
						__LIB_16__::func_944(&Local_14, 21);
					}
				}
				break;
			case 6:
				if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_228) && !ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_228, true, 0) && !__LIB_0__::func_27(Local_14.f_253, 16384)) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 5.5f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0])) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_14.f_218[0], Global_35, 17))
					{
						__LIB_16__::func_944(&Local_14, __LIB_16__::func_893());
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_245))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_245, false) && ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_218[0], -1527527524))
						{
							func_77(&Local_14, &(Local_14.f_244), 0);
							__LIB_0__::func_37(&(Local_14.f_133));
						}
					}
				}
				break;
			case 21:
				if (!__LIB_16__::func_894(&(Local_14.f_195)))
				{
					if (__LIB_0__::func_27(Local_14.f_253, 16777216))
					{
						__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_874(), 1, 0, 1, 1, 1);
					}
					else if ((VOLUME::_DOES_VOLUME_EXIST(Local_14.f_228) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_218[0]))
					{
						if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_228, true, 0) && !__LIB_0__::func_27(Local_14.f_253, 16384)) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 5.5f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0])) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_14.f_218[0], Global_35, 17))
						{
							__LIB_16__::func_944(&Local_14, __LIB_16__::func_893());
						}
						else if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_874(), 1, 0, 1, 1, 1))
						{
							__LIB_16__::func_944(&Local_14, 6);
						}
					}
				}
				break;
			case 28:
				__LIB_2__::func_411(&(Local_14.f_317[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_14.f_317[1 /*17*/]), 0, 0);
				if (!__LIB_0__::func_27(Local_14.f_253, 32))
				{
					__LIB_1__::func_581(&(Local_14.f_253), 32);
				}
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_14.f_218[0], Global_35, -1, 0, 51, 0);
					if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_895(), 1, 0, 0, 1, 1))
					{
						if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							__LIB_1__::func_731(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 536870912);
						}
						else
						{
							__LIB_16__::func_944(&Local_14, 35);
						}
					}
				}
				break;
			case 29:
				__LIB_2__::func_411(&(Local_14.f_317[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_14.f_317[1 /*17*/]), 0, 0);
				if (!__LIB_0__::func_27(Local_14.f_253, 32))
				{
					__LIB_1__::func_581(&(Local_14.f_253), 32);
				}
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_14.f_218[0], Global_35, -1, 0, 51, 0);
					if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_896(), 1, 0, 0, 1, 1))
					{
						if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							__LIB_1__::func_731(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 536870912);
						}
						else
						{
							__LIB_16__::func_944(&Local_14, 35);
						}
					}
				}
				break;
			case 30:
				__LIB_2__::func_411(&(Local_14.f_317[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_14.f_317[1 /*17*/]), 0, 0);
				if (!__LIB_0__::func_27(Local_14.f_253, 32))
				{
					__LIB_1__::func_581(&(Local_14.f_253), 32);
				}
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_14.f_218[0], Global_35, -1, 0, 51, 0);
					if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_897(), 1, 0, 0, 1, 1))
					{
						if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							__LIB_1__::func_731(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 536870912);
						}
						else
						{
							__LIB_16__::func_944(&Local_14, 35);
						}
					}
				}
				break;
			case 22:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_898(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 23:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_899(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 24:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_900(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 20:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_901(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 7:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_902(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 8:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_903(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 9:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_904(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 10:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_905(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 11:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_906(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 12:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_907(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 13:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_908(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 14:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_909(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 15:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_910(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 16:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_911(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 17:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_912(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 18:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_913(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 19:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_914(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 5:
				break;
			case 36:
				if (__LIB_16__::func_951(&Local_14))
				{
					__LIB_16__::func_944(&Local_14, 57);
				}
				if (((VOLUME::_DOES_VOLUME_EXIST(Local_14.f_229) && VOLUME::_DOES_VOLUME_EXIST(Local_14.f_226)) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_218[0]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_229, true, 0))
					{
						if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							__LIB_1__::func_581(&(Local_14.f_253), 536870912);
						}
						__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
						if (__LIB_16__::func_939(&Local_14, &(Local_14.f_246), func_34(), 1, 0, 0, 1, 1))
						{
							__LIB_16__::func_953(&Local_14, 0, 2, 1, 1, 0, 0);
							__LIB_16__::func_953(&Local_14, 1, 3, 1, 1, 0, 0);
							__LIB_16__::func_932(&Local_14, __LIB_2__::func_340(2, 0, 0), 1);
							__LIB_16__::func_944(&Local_14, 37);
						}
					}
				}
				break;
			case 35:
				if (__LIB_16__::func_951(&Local_14))
				{
					__LIB_16__::func_944(&Local_14, 57);
				}
				if ((VOLUME::_DOES_VOLUME_EXIST(Local_14.f_229) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_218[0]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_229, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
					{
						__LIB_16__::func_944(&Local_14, 36);
					}
					else if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_915(), 0, 1, 1, 1, 1))
					{
						__LIB_16__::func_944(&Local_14, 36);
					}
				}
				break;
			case 37:
				if (__LIB_16__::func_951(&Local_14))
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
					if (!__LIB_0__::func_27(Local_14.f_253, 134217728))
					{
						if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
						{
							__LIB_1__::func_727(Local_14.f_218[0], 1);
							__LIB_1__::func_726(Global_35, 1);
							__LIB_2__::func_962(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
						}
						__LIB_16__::func_944(&Local_14, 57);
					}
				}
				__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_246), func_34(), 1, 0, 0, 0, 0))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_229))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_229, true, 0) && __LIB_0__::func_27(Local_14.f_254, 4))
						{
							__LIB_16__::func_944(&Local_14, 41);
						}
					}
				}
				break;
			case 31:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_916(), 1, 0, 0, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 35);
				}
				break;
			case 32:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_917(), 1, 0, 0, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 35);
				}
				break;
			case 33:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_918(), 0, 1, 0, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 35);
				}
				break;
			case 34:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_919(), 1, 0, 0, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 35);
				}
				break;
			case 41:
				if (__LIB_16__::func_951(&Local_14))
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
					if (!__LIB_0__::func_27(Local_14.f_253, 134217728))
					{
						if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
						{
							__LIB_1__::func_727(Local_14.f_218[0], 1);
							__LIB_1__::func_726(Global_35, 1);
							__LIB_2__::func_962(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
						}
						__LIB_16__::func_944(&Local_14, 57);
					}
				}
				iVar1 = func_117(&Local_14);
				__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
				__LIB_3__::func_969(&(Local_14.f_233), 1);
				switch (iVar1)
				{
					case 1:
						__LIB_16__::func_939(&Local_14, &(Local_14.f_246), func_119(), 1, 0, 0, 1, 1);
						__LIB_16__::func_944(&Local_14, 42);
						break;
					case 2:
						__LIB_16__::func_939(&Local_14, &(Local_14.f_246), func_120(), 0, 0, 0, 1, 1);
						Global_40.f_11954 = 2;
						__LIB_16__::func_944(&Local_14, 40);
						break;
					case 8:
						__LIB_16__::func_939(&Local_14, &(Local_14.f_246), func_120(), 0, 0, 0, 1, 1);
						Global_40.f_11954 = 2;
						if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
						{
							__LIB_1__::func_727(Local_14.f_218[0], 1);
							__LIB_1__::func_726(Global_35, 1);
							__LIB_2__::func_962(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
						}
						__LIB_16__::func_944(&Local_14, 57);
						break;
				}
				break;
			case 42:
				if (__LIB_16__::func_951(&Local_14))
				{
					if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
					{
						__LIB_1__::func_727(Local_14.f_218[0], 1);
						__LIB_1__::func_726(Global_35, 1);
						__LIB_2__::func_962(&(Local_14.f_353));
						__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
					}
					__LIB_16__::func_944(&Local_14, 57);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
				__LIB_16__::func_956(&Local_14, Local_14.f_246, func_119(), 0.101f);
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_246), func_119(), 1, 0, 0, 1, 1))
				{
					__LIB_16__::func_953(&Local_14, 0, 4, 1, 1, 0, 0);
					__LIB_16__::func_953(&Local_14, 1, 5, 1, 1, 0, 0);
					__LIB_1__::func_581(&(Local_14.f_253), 268435456);
					__LIB_16__::func_932(&Local_14, __LIB_2__::func_340(2, 0, 0), 1);
					__LIB_16__::func_944(&Local_14, 51);
				}
				break;
			case 38:
				iVar1 = func_117(&Local_14);
				switch (iVar1)
				{
					case 1:
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_246, func_72(), func_73(), 2);
						__LIB_16__::func_944(&Local_14, 39);
						break;
					case 2:
						__LIB_16__::func_944(&Local_14, 40);
						break;
					case 8:
						if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
						{
							__LIB_1__::func_727(Local_14.f_218[0], 1);
							__LIB_1__::func_726(Global_35, 1);
							__LIB_2__::func_962(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
						}
						__LIB_16__::func_944(&Local_14, 57);
						break;
				}
				break;
			case 39:
				__LIB_16__::func_939(&Local_14, &(Local_14.f_246), func_122(), 1, 0, 1, 1, 1);
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_246, false))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_246, func_123());
					__LIB_16__::func_944(&Local_14, 51);
				}
				break;
			case 40:
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_246), func_120(), 1, 0, 0, 1, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_246, false))
				{
					__LIB_16__::func_944(&Local_14, 57);
				}
				break;
			case 51:
				if (__LIB_0__::func_27(Local_14.f_254, 4))
				{
					if (__LIB_16__::func_951(&Local_14))
					{
						if (!__LIB_0__::func_27(Local_14.f_253, 134217728))
						{
							if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
							{
								__LIB_1__::func_727(Local_14.f_218[0], 1);
								__LIB_1__::func_726(Global_35, 1);
								__LIB_2__::func_962(&(Local_14.f_353));
								__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
							}
							__LIB_16__::func_944(&Local_14, 57);
						}
					}
				}
				if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
				{
					__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
					__LIB_1__::func_581(&(Local_14.f_253), 536870912);
				}
				if (__LIB_0__::func_27(Local_14.f_254, 32))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_14.f_218[0], 1, 1);
					__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
					__LIB_2__::func_966(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
					Global_40.f_11954 = 0;
					__LIB_16__::func_944(&Local_14, 60);
				}
				else if (__LIB_0__::func_27(Local_14.f_254, 16))
				{
					if (!__LIB_0__::func_27(Local_14.f_253, 2048))
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
						if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_230))
						{
							__LIB_16__::func_948(&(Local_14.f_230), &(Local_14.f_217), &(Local_14.f_241));
						}
						__LIB_16__::func_832(1);
						if (__LIB_16__::func_952(&Global_35, &(Local_14.f_218[0]), &iVar0, Local_14.f_239))
						{
							Global_40.f_11954 = 1;
							__LIB_1__::func_581(&(Local_14.f_253), 2048);
							TASK::CLEAR_PED_TASKS(Local_14.f_218[0], true, false);
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_247, func_72(), func_73(), 2);
							__LIB_16__::func_832(0);
						}
					}
					if (__LIB_0__::func_27(Local_14.f_253, 2048))
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_247, "MICKEY", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_247, "ARTHUR", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_247, func_72(), func_73(), 2);
						__LIB_16__::func_944(&Local_14, 56);
					}
				}
				break;
			case 56:
				if (__LIB_16__::func_951(&Local_14))
				{
					__LIB_16__::func_944(&Local_14, 57);
				}
				__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				if (__LIB_0__::func_27(Local_14.f_254, 32))
				{
					if (__LIB_16__::func_939(&Local_14, &(Local_14.f_247), func_123(), 1, 0, 0, 1, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_247, false))
					{
						if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
						{
							__LIB_1__::func_727(Local_14.f_218[0], 1);
							__LIB_1__::func_726(Global_35, 1);
							__LIB_2__::func_962(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
						}
						__LIB_16__::func_944(&Local_14, 57);
					}
				}
				else if (__LIB_0__::func_27(Local_14.f_254, 16))
				{
					__LIB_16__::func_956(&Local_14, Local_14.f_247, func_35(), 0.315f);
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_14.f_247) >= 0.315f)
					{
						if (HUD::_IS_RADAR_HIDDEN_2())
						{
							MAP::DISPLAY_RADAR(true);
						}
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 174, false);
						if (!__LIB_0__::func_27(Local_14.f_254, 256))
						{
							__LIB_16__::func_953(&Local_14, 0, 0, 0, 0, 0, 0);
							__LIB_16__::func_953(&Local_14, 1, 1, 0, 0, 0, 0);
							if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
							{
								__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
								__LIB_1__::func_581(&(Local_14.f_253), 536870912);
							}
							__LIB_1__::func_581(&(Local_14.f_254), 256);
						}
					}
					else
					{
						if (!__LIB_0__::func_27(Local_14.f_254, 512))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_247, false))
							{
								func_128(&Local_14, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1.5f);
								__LIB_1__::func_581(&(Local_14.f_254), 512);
							}
						}
						if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
						{
							CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
						}
						__LIB_1__::func_725();
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
					}
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_247, false))
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
					}
					if (__LIB_16__::func_939(&Local_14, &(Local_14.f_247), func_35(), 1, 0, 0, 1, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_247, false))
					{
						if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
						{
							__LIB_1__::func_727(Local_14.f_218[0], 1);
							__LIB_1__::func_726(Global_35, 1);
							__LIB_2__::func_962(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
						}
						__LIB_16__::func_944(&Local_14, 57);
					}
				}
				break;
			case 58:
				if (__LIB_16__::func_951(&Local_14))
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
					if (!__LIB_0__::func_27(Local_14.f_254, 32))
					{
						__LIB_1__::func_581(&(Local_14.f_254), 32);
					}
					if (!__LIB_0__::func_27(Local_14.f_254, 64))
					{
						__LIB_1__::func_581(&(Local_14.f_254), 64);
					}
					if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
					{
						__LIB_1__::func_727(Local_14.f_218[0], 1);
						__LIB_1__::func_726(Global_35, 1);
						__LIB_2__::func_962(&(Local_14.f_353));
						__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
					}
					__LIB_16__::func_944(&Local_14, 57);
				}
				iVar1 = func_130(&Local_14);
				switch (iVar1)
				{
					case 16:
						if (__LIB_16__::func_952(&Global_35, &(Local_14.f_218[0]), &iVar0, 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_247, func_72(), func_73(), 2);
							Global_40.f_11954 = 1;
							__LIB_16__::func_944(&Local_14, 59);
						}
						break;
					case 32:
						ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
						if (__LIB_16__::func_876(&(Local_14.f_246)))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_246, func_72(), func_73(), 2);
							__LIB_16__::func_944(&Local_14, 60);
						}
						break;
					case 128:
						ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
						if (__LIB_16__::func_876(&(Local_14.f_246)))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_246, func_72(), func_73(), 2);
							__LIB_16__::func_944(&Local_14, 60);
						}
						break;
				}
				break;
			case 59:
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_14.f_247) >= 0.3f)
				{
					if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
					{
						__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
						__LIB_1__::func_581(&(Local_14.f_253), 536870912);
					}
				}
				if ((__LIB_16__::func_939(&Local_14, &(Local_14.f_247), func_35(), 0, 0, 0, 1, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_247, false)) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_14.f_247) > 0.98f)
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
					{
						__LIB_1__::func_727(Local_14.f_218[0], 1);
						__LIB_1__::func_726(Global_35, 1);
						__LIB_2__::func_962(&(Local_14.f_353));
						__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
					}
					__LIB_16__::func_944(&Local_14, 57);
				}
				else
				{
					__LIB_16__::func_806(&(Local_14.f_218[0]), &(Local_14.f_256), joaat("EVENT_SHOCKING_BEAT_AMUSING"), 25f, 60f);
				}
				break;
			case 60:
				if (__LIB_16__::func_939(&Local_14, &(Local_14.f_246), func_123(), 1, 0, 0, 1, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_246, false))
				{
					if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
					{
						__LIB_1__::func_727(Local_14.f_218[0], 1);
						__LIB_1__::func_726(Global_35, 1);
						__LIB_2__::func_962(&(Local_14.f_353));
						__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
					}
					__LIB_16__::func_944(&Local_14, 57);
				}
				break;
			case 57:
				if (!__LIB_0__::func_27(Local_14.f_253, 128))
				{
					__LIB_16__::func_803(&(Local_14.f_218[0]), &(Local_14.f_256), joaat("EVENT_SHOCKING_BEAT_AMUSING"), 25f, 0);
					if (!__LIB_0__::func_27(Local_14.f_253, 16384))
					{
						__LIB_16__::func_783(19, 1);
						Global_40.f_11623[19 /*8*/].f_3 = __LIB_0__::func_23();
						__LIB_1__::func_581(&(Local_14.f_253), 16384);
					}
				}
				if (!Local_14.f_373)
				{
					if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
					{
						__LIB_1__::func_727(Local_14.f_218[0], 1);
						__LIB_1__::func_726(Global_35, 1);
						__LIB_2__::func_962(&(Local_14.f_353));
						__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
						Local_14.f_373 = 1;
					}
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_218[0], false);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 448, false);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 153, false);
				if (__LIB_16__::func_959(&Local_14, &(Local_14.f_218[0]), 0))
				{
					__LIB_1__::func_581(&(Local_14.f_253), 256);
					__LIB_16__::func_944(&Local_14, 69);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_245) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_245);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_246) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_246);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_247) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_247);
				}
				break;
			case 65:
				__LIB_16__::func_944(&Local_14, 57);
				break;
			case 66:
				break;
			case 67:
				if (__LIB_0__::func_264(&(Local_14.f_136)) > 0.6f)
				{
					if (__LIB_0__::func_27(Local_14.f_253, 4096))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_245) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_245, false))
						{
							__LIB_16__::func_939(&Local_14, &(Local_14.f_245), __LIB_16__::func_920(), 0, 0, 0, 1, 0);
						}
						else
						{
							__LIB_1__::func_993(&(Local_14.f_253), 4096);
						}
					}
					else
					{
						if (!__LIB_0__::func_27(Local_14.f_253, 524288))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_246, false))
							{
								ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_246, 0);
							}
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_247, false))
							{
								ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_247, 0);
							}
							if (__LIB_16__::func_933(Local_14.f_218[0], "PANIC_HELP", joaat("SPEECH_PARAMS_SHOUTED"), 0, Local_14.f_237, 0))
							{
								__LIB_1__::func_581(&(Local_14.f_253), 524288);
							}
						}
						if (!PED::IS_PED_FLEEING(Local_14.f_218[0]))
						{
							if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
							{
								__LIB_1__::func_727(Local_14.f_218[0], 1);
								__LIB_1__::func_726(Global_35, 1);
								__LIB_2__::func_962(&(Local_14.f_353));
								__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
							}
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_218[0], 0f);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_218[0], 17, true);
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_218[0], Global_35, 3, 1, 6000f, -1, 0);
							PED::SET_PED_KEEP_TASK(Local_14.f_218[0], true);
							PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 448, false);
							PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 153, false);
						}
					}
				}
				if (Local_14.f_239 >= 200f)
				{
					if (!PED::_0x5102307CE88798EB(Local_14.f_218[0]))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(Local_14.f_218[0]);
					}
					if (!PED::IS_TRACKED_PED_VISIBLE(Local_14.f_218[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_218[0]))
						{
							if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
							{
								__LIB_1__::func_727(Local_14.f_218[0], 1);
								__LIB_1__::func_726(Global_35, 1);
								__LIB_2__::func_962(&(Local_14.f_353));
								__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
							}
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_218[0], 0f);
							PED::DELETE_PED(&(Local_14.f_218[0]));
						}
						__LIB_16__::func_960(&Local_14);
					}
				}
				break;
			case 69:
				break;
			case 68:
				if (Local_14.f_239 <= 6f && __LIB_0__::func_27(Local_14.f_253, 131072))
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_14.f_218[0], 2f);
				}
				else
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_14.f_218[0], 1f);
				}
				break;
			default:
				break;
		}
		if (__LIB_0__::func_6(Local_14.f_154))
		{
			switch (Local_14)
			{
				case 57:
				case 69:
					if (!PED::_0x5102307CE88798EB(Local_14.f_218[0]))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(Local_14.f_218[0]);
					}
					if (Local_14.f_239 > 100f && !PED::IS_TRACKED_PED_VISIBLE(Local_14.f_218[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_218[0]))
						{
							if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
							{
								__LIB_1__::func_727(Local_14.f_218[0], 1);
								__LIB_1__::func_726(Global_35, 1);
								__LIB_2__::func_962(&(Local_14.f_353));
								__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
							}
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_218[0], 0f);
							PED::DELETE_PED(&(Local_14.f_218[0]));
						}
						__LIB_16__::func_960(&Local_14);
					}
					break;
			}
		}
	}
}

void func_2(var uParam0)
{
	if ((__LIB_16__::func_881(19, uParam0->f_218[0], 1, 1) && (*uParam0 > 2 && *uParam0 < 67)) || (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && (*uParam0 > 2 && *uParam0 < 67)))
	{
		if (*uParam0 > 30)
		{
			if (!__LIB_0__::func_27(uParam0->f_253, 256))
			{
				if (*uParam0 != 57)
				{
					__LIB_16__::func_953(uParam0, 0, 0, 0, 0, 0, 0);
					__LIB_16__::func_953(uParam0, 1, 1, 0, 0, 0, 0);
					__LIB_16__::func_944(uParam0, 57);
					if (!__LIB_0__::func_27(uParam0->f_253, 65536))
					{
						__LIB_1__::func_581(&(uParam0->f_253), 128);
					}
				}
			}
		}
		else if (*uParam0 < 30)
		{
			if (!__LIB_0__::func_27(uParam0->f_253, 16777216))
			{
				__LIB_1__::func_581(&(uParam0->f_253), 16777216);
				__LIB_16__::func_944(uParam0, 21);
			}
		}
	}
	else if (__LIB_0__::func_27(uParam0->f_253, 16777216))
	{
		__LIB_1__::func_993(&(uParam0->f_253), 16777216);
	}
}

void func_4(var uParam0, int iParam1)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (__LIB_17__::func_296(19, iParam1, &(uParam0->f_195), uParam0->f_218[0]))
		{
			uParam0->f_372 = 1;
			if (__LIB_16__::func_809(&(uParam0->f_195)))
			{
				__LIB_16__::func_960(uParam0);
			}
		}
		if (*uParam0 == 21)
		{
			if (uParam0->f_372)
			{
				if (__LIB_16__::func_894(&(uParam0->f_195)))
				{
					if (!__LIB_16__::func_809(&(uParam0->f_195)))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_245) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_245, false))
						{
							__LIB_16__::func_939(uParam0, &(uParam0->f_245), __LIB_16__::func_920(), 0, 0, 0, 1, 0);
						}
						else
						{
							__LIB_1__::func_581(&(uParam0->f_253), 128);
							__LIB_16__::func_944(uParam0, 57);
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_272(Global_35, 0))
		{
			__LIB_16__::func_960(uParam0);
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(76), true, 0))
		{
			if (!__LIB_0__::func_75(&(uParam0->f_130)))
			{
				__LIB_1__::func_283(&(uParam0->f_130), 0);
			}
			else if (__LIB_0__::func_265(&(uParam0->f_130)) > 10f)
			{
				__LIB_0__::func_37(&(uParam0->f_130));
				__LIB_16__::func_960(uParam0);
			}
		}
	}
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0]))
	{
		return;
	}
	if (!__LIB_0__::func_27(iParam0->f_253, 2))
	{
		__LIB_16__::func_955(iParam0);
		__LIB_1__::func_581(&(iParam0->f_253), 2);
	}
	if (iParam0->f_239 > 20f)
	{
		return;
	}
	iVar1 = func_202(&(iParam0->f_218[0]), &(iParam0->f_296), 15f, &(iParam0->f_317), &iVar0, 0f, 2, 0, 0, iParam0->f_352, 0, 0, 2, 1, iParam0->f_239, 0);
	if (__LIB_0__::func_27(iParam0->f_253, 32))
	{
		return;
	}
	if (__LIB_0__::func_27(iParam0->f_253, 16777216))
	{
		if (__LIB_2__::func_466(&(iParam0->f_317[0 /*17*/]), 1, 0))
		{
			__LIB_2__::func_411(&(iParam0->f_317[0 /*17*/]), 0, 0);
		}
		if (__LIB_2__::func_466(&(iParam0->f_317[1 /*17*/]), 1, 0))
		{
			__LIB_2__::func_411(&(iParam0->f_317[1 /*17*/]), 0, 0);
		}
		return;
	}
	if (iParam0->f_239 < 15f)
	{
		if (!__LIB_0__::func_27(iParam0->f_253, 1048576))
		{
			__LIB_2__::func_411(&(iParam0->f_317[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(iParam0->f_317[1 /*17*/]), 1, 0);
			__LIB_1__::func_581(&(iParam0->f_253), 1048576);
		}
	}
	else if (__LIB_0__::func_27(iParam0->f_253, 1048576))
	{
		__LIB_2__::func_411(&(iParam0->f_317[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(iParam0->f_317[1 /*17*/]), 0, 0);
		__LIB_1__::func_993(&(iParam0->f_253), 1048576);
	}
	switch (iVar1)
	{
		case 0:
			__LIB_0__::func_37(&(iParam0->f_145));
			__LIB_1__::func_581(&(iParam0->f_253), 32);
			__LIB_16__::func_944(iParam0, __LIB_16__::func_893());
			__LIB_2__::func_411(&(iParam0->f_317[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(iParam0->f_317[1 /*17*/]), 0, 0);
			break;
		case 1:
			iParam0->f_255++;
			__LIB_0__::func_37(&(iParam0->f_145));
			__LIB_1__::func_581(&(iParam0->f_253), 32);
			__LIB_16__::func_944(iParam0, __LIB_16__::func_893());
			__LIB_2__::func_411(&(iParam0->f_317[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(iParam0->f_317[1 /*17*/]), 0, 0);
			break;
	}
}

void func_22(int iParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0]))
	{
		return;
	}
	iVar0 = func_204(&(iParam0->f_218[0]), &(iParam0->f_296), 15f, &(iParam0->f_317), 0f, 2, 0, "", iParam0->f_352, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (__LIB_0__::func_27(iParam0->f_254, 4))
	{
		return;
	}
	if (__LIB_0__::func_27(iParam0->f_253, 134217728))
	{
		iVar0 = 1;
	}
	switch (iVar0)
	{
		case 0:
			if (!__LIB_0__::func_27(iParam0->f_254, 1))
			{
				__LIB_16__::func_880();
				__LIB_0__::func_37(&(iParam0->f_145));
				__LIB_16__::func_953(iParam0, 0, 2, 0, 0, 0, 0);
				__LIB_16__::func_953(iParam0, 1, 3, 0, 0, 0, 0);
				__LIB_16__::func_849(19, &(iParam0->f_218[0]), &(iParam0->f_253), 65536);
				__LIB_16__::func_932(iParam0, __LIB_2__::func_340(3, 0, 0), 1);
				__LIB_1__::func_581(&(iParam0->f_254), 4);
				__LIB_1__::func_581(&(iParam0->f_254), 1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iParam0->f_254, 2))
			{
				__LIB_16__::func_880();
				__LIB_0__::func_37(&(iParam0->f_145));
				__LIB_16__::func_953(iParam0, 0, 0, 0, 0, 0, 0);
				__LIB_16__::func_953(iParam0, 1, 1, 0, 0, 0, 0);
				__LIB_16__::func_849(19, &(iParam0->f_218[0]), &(iParam0->f_253), 65536);
				__LIB_16__::func_932(iParam0, __LIB_2__::func_340(3, 0, 0), 1);
				__LIB_1__::func_581(&(iParam0->f_254), 4);
				__LIB_1__::func_581(&(iParam0->f_254), 2);
			}
			break;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0]))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar4 = vVar1.z;
	vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_218[0], true, false) };
	fVar8 = vVar5.z;
	if (fVar4 >= fVar8)
	{
		fVar9 = (fVar4 - fVar8);
	}
	else
	{
		fVar9 = (fVar8 - fVar4);
	}
	if ((fVar9 >= 0.5f || !func_207(iParam0)) || __LIB_16__::func_871())
	{
		if (__LIB_0__::func_27(iParam0->f_253, 268435456))
		{
			__LIB_16__::func_953(iParam0, 0, 4, 0, 0, 0, 0);
			__LIB_1__::func_993(&(iParam0->f_253), 268435456);
		}
	}
	else if (!__LIB_0__::func_27(iParam0->f_253, 268435456))
	{
		__LIB_16__::func_953(iParam0, 0, 4, 1, 0, 1, 0);
		__LIB_1__::func_581(&(iParam0->f_253), 268435456);
	}
	iVar0 = func_204(&(iParam0->f_218[0]), &(iParam0->f_296), 15f, &(iParam0->f_317), 0f, 2, 0, "", iParam0->f_352, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (__LIB_0__::func_27(iParam0->f_254, 64))
	{
		return;
	}
	if (__LIB_0__::func_27(iParam0->f_253, 134217728))
	{
		iVar0 = 1;
	}
	switch (iVar0)
	{
		case 0:
			if (!__LIB_0__::func_27(iParam0->f_254, 16))
			{
				__LIB_1__::func_993(&(iParam0->f_253), 67108864);
				__LIB_0__::func_37(&(iParam0->f_145));
				__LIB_16__::func_953(iParam0, 0, 4, 0, 0, 0, 0);
				__LIB_16__::func_953(iParam0, 1, 5, 0, 0, 0, 0);
				__LIB_16__::func_849(19, &(iParam0->f_218[0]), &(iParam0->f_253), 65536);
				__LIB_16__::func_932(iParam0, __LIB_2__::func_340(3, 0, 0), 1);
				__LIB_1__::func_581(&(iParam0->f_254), 64);
				__LIB_1__::func_581(&(iParam0->f_254), 16);
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iParam0->f_254, 32))
			{
				__LIB_0__::func_37(&(iParam0->f_145));
				__LIB_16__::func_953(iParam0, 0, 0, 0, 0, 0, 0);
				__LIB_16__::func_953(iParam0, 1, 1, 0, 0, 0, 0);
				__LIB_16__::func_849(19, &(iParam0->f_218[0]), &(iParam0->f_253), 65536);
				__LIB_16__::func_932(iParam0, __LIB_2__::func_340(3, 0, 0), 1);
				__LIB_1__::func_581(&(iParam0->f_254), 64);
				__LIB_1__::func_581(&(iParam0->f_254), 32);
			}
			break;
	}
}

int func_30(int iParam0, var uParam1)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return 0;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*uParam1) <= 0.315f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

char* func_33()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_2@action";
}

char[] func_34()
{
	return "PL_FriendAsk";
}

char[] func_35()
{
	return "PL_HugResPos";
}

Vector3 func_72()
{
	vector3 vVar0;
	vVar0 = { __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()) };
	vVar0.f_2 = (vVar0.z - 1f);
	return vVar0;
}

Vector3 func_73()
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		fVar3 = ENTITY::GET_ENTITY_HEADING(Global_35);
		vVar0.f_2 = fVar3;
	}
	return vVar0;
}

void func_77(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (bParam2)
	{
		iVar0 = __LIB_9__::func_844(0, (14 - 1), iParam0->f_244);
		iParam0->f_244 = iVar0;
	}
	else
	{
		iVar0 = *uParam1;
	}
	if (func_231(iParam0))
	{
		iVar1 = __LIB_3__::func_112(iParam0->f_218[0], iParam0->f_220[0], 1060437492 /* Float: 0.707f */);
		if (!__LIB_0__::func_27(iParam0->f_253, 4))
		{
			if (iVar1 == 3)
			{
				__LIB_16__::func_944(iParam0, 23);
				__LIB_1__::func_581(&(iParam0->f_253), 4);
				return;
			}
		}
		if (!__LIB_0__::func_27(iParam0->f_253, 8))
		{
			if (iVar1 == 2)
			{
				__LIB_16__::func_944(iParam0, 24);
				__LIB_1__::func_581(&(iParam0->f_253), 8);
				return;
			}
		}
		if (!__LIB_0__::func_27(iParam0->f_253, 16))
		{
			if (iVar1 == 0)
			{
				__LIB_16__::func_944(iParam0, 22);
				__LIB_1__::func_581(&(iParam0->f_253), 16);
				return;
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 7);
			break;
		case 1:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 8);
			break;
		case 2:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 9);
			break;
		case 3:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 10);
			break;
		case 4:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 11);
			break;
		case 5:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 12);
			break;
		case 6:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 13);
			break;
		case 7:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 14);
			break;
		case 8:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 15);
			break;
		case 9:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 16);
			break;
		case 10:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 17);
			break;
		case 11:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 18);
			break;
		case 12:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 19);
			break;
		case 13:
			*uParam1 = 0;
			__LIB_16__::func_944(iParam0, 20);
			break;
		case 14:
			__LIB_16__::func_944(iParam0, 21);
			break;
		default:
			break;
	}
}

int func_117(int iParam0)
{
	if ((ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0])) || !VOLUME::_DOES_VOLUME_EXIST(iParam0->f_226))
	{
		return 1024;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_226, true, 0))
	{
		if (__LIB_0__::func_27(iParam0->f_254, 1))
		{
			return 1;
		}
		else if (__LIB_0__::func_27(iParam0->f_254, 2))
		{
			return 2;
		}
	}
	else if (!__LIB_0__::func_27(iParam0->f_254, 8))
	{
		__LIB_1__::func_581(&(iParam0->f_254), 8);
		return 8;
	}
	return 1024;
}

char[] func_119()
{
	return "PL_FriendResPos";
}

char[] func_120()
{
	return "PL_FriendResNeg";
}

char[] func_122()
{
	return "pbl_stand_p1_ask_buck";
}

char[] func_123()
{
	return "PL_HugResNeg";
}

void func_128(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	iVar0 = 0;
	iVar2 = ITEMSET::CREATE_ITEMSET(false);
	iVar8 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar2, 1);
	iVar7 = 0;
	while (iVar7 < iVar8)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar2);
		iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
		if (iVar0 != Global_35 && iVar0 != uParam0->f_218[0])
		{
			if (__LIB_1__::func_356(iVar0))
			{
				iVar3 = 0;
				while (iVar3 <= 5)
				{
					if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), iVar3, &vVar4, 1, 1077936128 /* Float: 3f */, 0))
					{
						if (__LIB_0__::func_94(iVar0, vVar4, 1) > fParam4)
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, vVar4, true, false, true, true);
						}
						else
						{
							iVar3++;
						}
						iVar7++;
						ITEMSET::_CLEAR_ITEMSET(iVar2);
						ITEMSET::CLEAN_ITEMSET(iVar2);
						ITEMSET::DESTROY_ITEMSET(iVar2);
					}
				}
			}
		}
	}
}

int func_130(int iParam0)
{
	if ((ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0])) || !VOLUME::_DOES_VOLUME_EXIST(iParam0->f_226))
	{
		return 1024;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_226, true, 0))
	{
		if (__LIB_0__::func_27(iParam0->f_254, 16))
		{
			return 16;
		}
		else if (__LIB_0__::func_27(iParam0->f_254, 32))
		{
			return 32;
		}
	}
	else if (!__LIB_0__::func_27(iParam0->f_254, 128))
	{
		__LIB_1__::func_581(&(iParam0->f_254), 128);
		return 128;
	}
	return 1024;
}

int func_202(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_204(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_16__::func_964(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!__LIB_0__::func_474(558))
				{
					__LIB_1__::func_240(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

int func_204(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_204(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_207(int iParam0)
{
	int iVar0;
	vector3 vVar1[2];
	int iVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;
	vVar10 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	vVar13 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_218[0], true, false) };
	if (!iParam0->f_370)
	{
		iParam0->f_369 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar10, vVar13, 1f, 3167, Global_35, 4);
		iParam0->f_370 = 1;
		iVar9 = iParam0->f_371;
	}
	else if (SHAPETEST::GET_SHAPE_TEST_RESULT(iParam0->f_369, &iVar0, &(vVar1[0 /*3*/]), &(vVar1[1 /*3*/]), &iVar8) == 2)
	{
		if (iVar0 == 0)
		{
			iVar9 = 1;
		}
		else if (iVar8 == __LIB_0__::func_57(iParam0->f_218[0]))
		{
			iVar9 = 1;
		}
		else
		{
			iVar9 = 0;
		}
		iParam0->f_371 = iVar9;
		iParam0->f_370 = 0;
	}
	return iVar9;
}

bool func_231(int iParam0)
{
	if ((!__LIB_0__::func_27(iParam0->f_253, 4) || !__LIB_0__::func_27(iParam0->f_253, 8)) || !__LIB_0__::func_27(iParam0->f_253, 16))
	{
		if (__LIB_18__::func_975(&(iParam0->f_220), &(iParam0->f_218), 3, ENTITY::GET_ENTITY_COORDS(iParam0->f_218[0], true, false), 5f, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 1) >= 1)
		{
			return true;
		}
	}
	return false;
}

