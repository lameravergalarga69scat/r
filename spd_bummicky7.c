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
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = -1;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 1097859072;
	var uLocal_406 = 1000;
	var uLocal_407 = 1067450368;
	var uLocal_408 = 5000;
	var uLocal_409 = 42;
	var uLocal_410 = 1103626240;
	var uLocal_411 = 1077936128;
	var uLocal_412 = 1106247680;
	var uLocal_413 = 1103101952;
	var uLocal_414 = 1097859072;
	var uLocal_415 = 1103626240;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
#endregion
void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar4[24];
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_420 = joaat("CS_MICKEY");
	iLocal_428 = 1689938120;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1();
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		__LIB_16__::func_962(&Local_14);
		__LIB_16__::func_879(19, 6, &(Local_14.f_218[0]), &uLocal_416, &uLocal_424, Local_14.f_239, 1097859072 /* Float: 15f */, 0);
		__LIB_16__::func_942(&Local_14);
		__LIB_16__::func_928(Local_14.f_218[0], Local_14.f_230);
		if (Local_14 >= 6 && Local_14 < 67)
		{
			__LIB_16__::func_937(&Local_14);
			__LIB_16__::func_938(&Local_14);
		}
		__LIB_19__::func_396(&Local_14, 6);
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_218[0]))
		{
			if (!__LIB_0__::func_272(Local_14.f_218[0], 0))
			{
				func_1();
			}
			else if (Local_14 > 2 && Local_14 < 67)
			{
				if (Local_14.f_239 > 50f)
				{
					Local_14.f_242 = __LIB_16__::func_883(&uLocal_388, &(Local_14.f_129), &(Local_14.f_218[0]), &(Local_14.f_243), 1101004800 /* Float: 20f */);
				}
				else
				{
					Local_14.f_242 = __LIB_12__::func_465(Local_14.f_218[0], 0, &uLocal_388, &(Local_14.f_129), 0, Local_14.f_239);
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
		if (Local_14 >= 37 && Local_14 <= 56)
		{
			func_22(&Local_14, 65536, 1, 2, 4, 1);
		}
		if (Local_14 >= 28 && Local_14 < 56)
		{
			__LIB_16__::func_884();
		}
		__LIB_16__::func_929(&Local_14);
		__LIB_16__::func_945(&Local_14);
		__LIB_16__::func_943(&Local_14);
		__LIB_16__::func_854(Local_14.f_218[0], &(Local_14.f_253), 262144, 19, Local_14.f_239);
		__LIB_16__::func_885(&Local_14, iLocal_425, "b_AnimatePlayer", 0);
		__LIB_16__::func_885(&Local_14, iLocal_426, "b_AnimatePlayer", 0);
		__LIB_16__::func_885(&Local_14, iLocal_427, "b_AnimatePlayer", 0);
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
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_425))
				{
					iLocal_425 = ANIMSCENE::_CREATE_ANIM_SCENE(func_31(), 0, func_32(), false, true);
				}
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_426))
				{
					iLocal_426 = ANIMSCENE::_CREATE_ANIM_SCENE(func_33(), 0, func_34(), false, true);
				}
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_427))
				{
					iLocal_427 = ANIMSCENE::_CREATE_ANIM_SCENE(func_35(), 0, func_32(), false, true);
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
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_245) && __LIB_0__::func_27(Local_14.f_253, 32768))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_245);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_425);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_426);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_427);
					STREAMING::REQUEST_ANIM_DICT(func_37());
					HUD::_TEXT_DATABASE_REQUEST("SPBM");
					HUD::_TEXT_DATABASE_REQUEST("SPCWVAU");
					STREAMING::REQUEST_MODEL(iLocal_420, false);
					__LIB_16__::func_887(&Local_14);
					__LIB_2__::func_261(Local_14.f_224, "SP_BumMickey7_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
					POPULATION::_0xB56D41A694E42E86(Local_14.f_227, 2500607, 0, 0, -1, -1, 10);
					POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_227, 0, 0, 0, -1, -1, 0);
					iLocal_419 = __LIB_1__::func_293(19, 6, 9, __LIB_16__::func_790(19));
					if (!__LIB_0__::func_6(iLocal_419))
					{
					}
					if (__LIB_0__::func_6(__LIB_1__::func_293(19, 0, 9, __LIB_16__::func_790(19))))
					{
						Local_14.f_244 = __LIB_0__::func_895(__LIB_1__::func_293(19, 0, 9, __LIB_16__::func_790(19)));
						Local_14.f_255 = __LIB_5__::func_297(__LIB_1__::func_293(19, 0, 9, __LIB_16__::func_790(19)));
					}
					if (__LIB_0__::func_181())
					{
						__LIB_0__::func_928(&(Local_14.f_3), Global_35, "JOHN", 0);
					}
					else
					{
						__LIB_0__::func_928(&(Local_14.f_3), Global_35, "ARTHUR", 0);
					}
					__LIB_16__::func_875(&(Local_14.f_195));
					__LIB_4__::func_228(&uLocal_388);
					__LIB_1__::func_398(&uLocal_388, 1);
					__LIB_1__::func_401(&uLocal_388, 1);
					__LIB_2__::func_828(&uLocal_388, 1);
					__LIB_1__::func_413(&uLocal_388, 1);
					__LIB_1__::func_403(&uLocal_388, 1);
					__LIB_2__::func_829(&uLocal_388, 1);
					__LIB_1__::func_399(&uLocal_388, 0);
					__LIB_2__::func_956(&uLocal_388, 1);
					__LIB_1__::func_397(&uLocal_388, 0);
					__LIB_1__::func_402(&uLocal_388, 1);
					__LIB_1__::func_405(&uLocal_388, 1);
					__LIB_1__::func_393(&uLocal_388, 1);
					__LIB_10__::func_590(&uLocal_388, 0);
					__LIB_2__::func_619(&uLocal_388, 0);
					__LIB_2__::func_903(&uLocal_388, 0);
					__LIB_2__::func_830(&uLocal_388, 0);
					__LIB_1__::func_406(&uLocal_388, 1);
					__LIB_16__::func_944(&Local_14, 1);
				}
				break;
			case 1:
				PED::_0xED9582B3DA8F02B4(1);
				if ((((((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_14.f_245, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_425, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_426, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_427, true, false)) && STREAMING::HAS_ANIM_DICT_LOADED(func_37())) && HUD::_TEXT_DATABASE_HAS_LOADED("SPBM")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPCWVAU")) && STREAMING::HAS_MODEL_LOADED(iLocal_420)) && PED::_0x5C16855277819BBF() == 1)
				{
					__LIB_16__::func_944(&Local_14, 2);
				}
				break;
			case 2:
				if (__LIB_0__::func_27(Local_14.f_253, 1))
				{
					vVar0 = { func_66(1) };
				}
				else
				{
					vVar0 = { func_66(0) };
				}
				if (func_67(&(Local_14.f_218[0]), iLocal_420, vVar0, vVar0.f_3, 1, 1, 0))
				{
					if (__LIB_0__::func_272(Local_14.f_218[0], 0))
					{
						__LIB_0__::func_862(Local_14.f_218[0], iLocal_428);
						__LIB_16__::func_792(Local_14.f_218[0], 19);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_218[0], "special_ped_group", 0f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_218[0], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_218[0], joaat("REL_CIVMALE"));
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
						TASK::_0x7C015D8BCEC72CF4(Local_14.f_218[0], 1);
						__LIB_0__::func_928(&(Local_14.f_3), Local_14.f_218[0], Local_14.f_237, 0);
						ENTITY::_0x9587913B9E772D29(Local_14.f_218[0], 0);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
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
						if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_231))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_231, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (Local_14.f_244 < 0)
						{
							Local_14.f_244 = 0;
						}
						__LIB_1__::func_391(Local_14.f_227, 0, 0, 0);
						__LIB_16__::func_930(&uLocal_421, vVar0, 5f, 5f, 5f);
						if (__LIB_0__::func_27(Local_14.f_253, 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_245, __LIB_16__::func_889(), __LIB_16__::func_890(), 2);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_245, __LIB_16__::func_891(), __LIB_16__::func_892(), 2);
						}
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_245, "cs_mickey", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_425, "MICKEY", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_425, "JOHN", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_426, "MICKEY", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_426, "JOHN", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_427, "MICKEY", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_427, "JOHN", Global_35, 0);
						PED::_0x7C00CFC48A782DC0(Local_14.f_230, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						if (!__LIB_1__::func_565(&uLocal_423))
						{
							uLocal_423 = GRAPHICS::_0xFA50F79257745E74(vVar0, 1.5f, 2, -1, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MICKEY"));
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
							__LIB_16__::func_968(&Local_14, &(Local_14.f_244), 0);
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
						__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_874(), 1, 0, 1, 1, 1);
					}
					else if ((VOLUME::_DOES_VOLUME_EXIST(Local_14.f_228) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_218[0]))
					{
						if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_228, true, 0) && !__LIB_0__::func_27(Local_14.f_253, 16384)) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 5.5f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0])) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_14.f_218[0], Global_35, 17))
						{
							__LIB_16__::func_944(&Local_14, __LIB_16__::func_893());
						}
						else if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_874(), 1, 0, 1, 1, 1))
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
					if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_895(), 1, 0, 0, 1, 1))
					{
						if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							__LIB_1__::func_731(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 536870912);
						}
						else
						{
							__LIB_1__::func_581(&(Local_14.f_253), 8192);
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
					if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_896(), 1, 0, 0, 1, 1))
					{
						if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							__LIB_1__::func_731(&(Local_14.f_353));
							__LIB_1__::func_581(&(Local_14.f_253), 536870912);
						}
						else
						{
							__LIB_1__::func_581(&(Local_14.f_253), 8192);
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
					if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_897(), 1, 0, 0, 1, 1))
					{
						if (!__LIB_0__::func_163(Local_14.f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							__LIB_1__::func_731(&(Local_14.f_353));
							__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							__LIB_3__::func_887(Global_35, Local_14.f_218[0], &(Local_14.f_156), 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
							__LIB_1__::func_581(&(Local_14.f_253), 536870912);
						}
						else
						{
							__LIB_1__::func_581(&(Local_14.f_253), 8192);
							__LIB_16__::func_944(&Local_14, 35);
						}
					}
				}
				break;
			case 22:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_898(), 1, 0, 1, 1, 1))
				{
					__LIB_1__::func_581(&(Local_14.f_253), 8192);
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 23:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_899(), 1, 0, 1, 1, 1))
				{
					__LIB_1__::func_581(&(Local_14.f_253), 8192);
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 24:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_900(), 1, 0, 1, 1, 1))
				{
					__LIB_1__::func_581(&(Local_14.f_253), 8192);
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 20:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_901(), 1, 0, 1, 1, 1))
				{
					__LIB_1__::func_581(&(Local_14.f_253), 8192);
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 7:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_902(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 8:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_903(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 9:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_904(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 10:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_905(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 11:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_906(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 12:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_907(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 13:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_908(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 14:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_909(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 15:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_910(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 16:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_911(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 17:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_912(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 18:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_913(), 1, 0, 1, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 21);
				}
				break;
			case 19:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_914(), 1, 0, 1, 1, 1))
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
						__LIB_16__::func_944(&Local_14, 37);
					}
				}
				break;
			case 35:
				if (__LIB_16__::func_951(&Local_14))
				{
					__LIB_16__::func_944(&Local_14, 57);
				}
				if (((VOLUME::_DOES_VOLUME_EXIST(Local_14.f_229) && VOLUME::_DOES_VOLUME_EXIST(Local_14.f_226)) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_218[0]))
				{
					if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_229, true, 0) && __LIB_0__::func_27(Local_14.f_253, 8192)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
					{
						__LIB_16__::func_944(&Local_14, 36);
					}
					else if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_915(), 0, 1, 1, 1, 1))
					{
						__LIB_16__::func_944(&Local_14, 36);
					}
				}
				break;
			case 37:
				__LIB_1__::func_731(&(Local_14.f_353));
				__LIB_16__::func_931(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				__LIB_3__::func_887(Global_35, Local_14.f_218[0], &(Local_14.f_156), 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
				__LIB_1__::func_581(&(Local_14.f_253), 536870912);
				__LIB_16__::func_944(&Local_14, 51);
				break;
			case 31:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_916(), 1, 0, 0, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 35);
				}
				break;
			case 32:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_917(), 1, 0, 0, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 35);
				}
				break;
			case 33:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_918(), 0, 1, 0, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 35);
				}
				break;
			case 34:
				if (__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_919(), 1, 0, 0, 1, 1))
				{
					__LIB_16__::func_944(&Local_14, 35);
				}
				break;
			case 51:
				__LIB_3__::func_969(&uLocal_422, 1);
				__LIB_16__::func_957(Global_35);
				__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				__LIB_2__::func_966(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_117(&(Local_14.f_218[0]), &iLocal_425, func_32()))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_426, func_34()) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_426, func_34()))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_426, func_34());
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_426, func_118()) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_426, func_118()))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_426, func_118());
					}
					__LIB_16__::func_944(&Local_14, 53);
				}
				break;
			case 53:
				__LIB_16__::func_957(Global_35);
				__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				__LIB_2__::func_966(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_119(&(Local_14.f_218[0]), &iLocal_425))
				{
					__LIB_16__::func_953(&Local_14, 0, 15, 1, 1, 0, 0);
					__LIB_16__::func_953(&Local_14, 1, 16, 1, 1, 0, 0);
					__LIB_16__::func_932(&Local_14, __LIB_2__::func_340(2, 0, 0), 1);
					__LIB_16__::func_944(&Local_14, 54);
				}
				break;
			case 54:
				if (__LIB_16__::func_951(&Local_14))
				{
					if (!__LIB_0__::func_27(Local_14.f_254, 2))
					{
						__LIB_1__::func_581(&(Local_14.f_254), 2);
					}
					if (!__LIB_0__::func_27(Local_14.f_254, 4))
					{
						__LIB_1__::func_581(&(Local_14.f_254), 4);
					}
					__LIB_16__::func_944(&Local_14, 55);
				}
				__LIB_16__::func_957(Global_35);
				__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				__LIB_2__::func_966(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (__LIB_0__::func_27(Local_14.f_254, 4))
				{
					if (__LIB_0__::func_27(Local_14.f_254, 1))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_426, func_34(), true);
					}
					else if (__LIB_0__::func_27(Local_14.f_254, 2))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_426, func_118(), true);
					}
					__LIB_16__::func_944(&Local_14, 55);
				}
				break;
			case 55:
				if (__LIB_16__::func_951(&Local_14))
				{
					__LIB_16__::func_944(&Local_14, 57);
				}
				__LIB_16__::func_957(Global_35);
				__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				__LIB_2__::func_966(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (__LIB_0__::func_27(Local_14.f_254, 1))
				{
					func_122(&(Local_14.f_218[0]), &iLocal_426, func_34());
					__LIB_16__::func_956(&Local_14, iLocal_426, func_34(), 0.888f);
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_426, false))
					{
						__LIB_16__::func_944(&Local_14, 56);
					}
				}
				else if (__LIB_0__::func_27(Local_14.f_254, 2))
				{
					func_122(&(Local_14.f_218[0]), &iLocal_426, func_118());
					if (!__LIB_0__::func_27(Local_14.f_254, 32))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_426, false))
						{
							StringCopy(&cVar4, "SPCWV_SORRYMR", 24);
							if (__LIB_1__::func_104(&(Local_14.f_3), cVar4, 0, -1, 0, 0))
							{
								__LIB_1__::func_581(&(Local_14.f_254), 32);
							}
						}
					}
					else if (!AUDIO::_0x54B187F111D9C6F8(Local_14.f_218[0], 0))
					{
						__LIB_16__::func_944(&Local_14, 57);
					}
				}
				break;
			case 56:
				if (__LIB_16__::func_951(&Local_14))
				{
					__LIB_16__::func_944(&Local_14, 57);
				}
				func_122(&(Local_14.f_218[0]), &iLocal_427, func_32());
				__LIB_16__::func_957(Global_35);
				__LIB_2__::func_966(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				__LIB_2__::func_966(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_119(&(Local_14.f_218[0]), &iLocal_427) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_427, false))
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
					if (!__LIB_0__::func_27(Local_14.f_253, 16384))
					{
						__LIB_16__::func_783(19, 12);
						Global_40.f_11623[19 /*8*/].f_3 = __LIB_0__::func_23();
						__LIB_1__::func_581(&(Local_14.f_253), 16384);
					}
				}
				if (!Local_14.f_373)
				{
					if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
					{
						__LIB_1__::func_726(Global_35, 1);
						__LIB_2__::func_962(&(Local_14.f_353));
						__LIB_1__::func_727(Local_14.f_218[0], 1);
						Local_14.f_373 = 1;
						__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
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
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_425) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_425);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_427) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_427);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_426) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_426);
				}
				break;
			case 65:
				if (!__LIB_16__::func_951(&Local_14))
				{
					__LIB_16__::func_944(&Local_14, 37);
				}
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
							__LIB_18__::func_976(&Local_14, &(Local_14.f_245), __LIB_16__::func_920(), 0, 0, 0, 1, 0);
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
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_425, false))
							{
								ANIMSCENE::RESET_ANIM_SCENE(iLocal_425, 0);
							}
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_426, false))
							{
								ANIMSCENE::RESET_ANIM_SCENE(iLocal_426, 0);
							}
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_427, false))
							{
								ANIMSCENE::RESET_ANIM_SCENE(iLocal_427, 0);
							}
							if (__LIB_16__::func_933(Local_14.f_218[0], "PANIC_HELP", joaat("SPEECH_PARAMS_SHOUTED"), 0, Local_14.f_237, 0))
							{
								__LIB_1__::func_581(&(Local_14.f_253), 524288);
							}
						}
						if (!PED::IS_PED_FLEEING(Local_14.f_218[0]))
						{
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
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_14.f_218[0], 2.5f);
				}
				else
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_14.f_218[0], 1f);
				}
				break;
			default:
				break;
		}
		if (__LIB_0__::func_6(iLocal_419))
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

void func_1()
{
	__LIB_16__::func_840(19);
	__LIB_3__::func_969(&uLocal_422, 1);
	__LIB_16__::func_921(&uLocal_421);
	if (__LIB_0__::func_27(Local_14.f_253, 536870912) && !__LIB_0__::func_27(Local_14.f_253, 1073741824 /* Float: 2f */))
	{
		__LIB_2__::func_962(&(Local_14.f_353));
		__LIB_1__::func_726(Global_35, 1);
		if (__LIB_0__::func_272(Local_14.f_218[0], 0))
		{
			__LIB_1__::func_727(Local_14.f_218[0], 1);
		}
		__LIB_1__::func_581(&(Local_14.f_253), 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(Local_14.f_218[0], 0))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_218[0], 0f);
		PED::_0x39A2FC5AF55A52B1(Local_14.f_218[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_218[0]));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_245))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_245);
	}
	if (__LIB_1__::func_565(&uLocal_423))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_423, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_224))
	{
		__LIB_1__::func_544(Local_14.f_224);
		VOLUME::_DELETE_VOLUME(Local_14.f_224);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_227))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_14.f_227);
		POPULATION::_0xA1CFB35069D23C23(Local_14.f_227);
		VOLUME::_DELETE_VOLUME(Local_14.f_227);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_226))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_14.f_226);
		POPULATION::_0xA1CFB35069D23C23(Local_14.f_226);
		VOLUME::_DELETE_VOLUME(Local_14.f_226);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_229))
	{
		VOLUME::_DELETE_VOLUME(Local_14.f_229);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_225))
	{
		VOLUME::_DELETE_VOLUME(Local_14.f_225);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_230))
	{
		VOLUME::_DELETE_VOLUME(Local_14.f_230);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][6 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][6 /*48*/].f_47);
	}
	__LIB_16__::func_940(&Local_14);
	if (HUD::_TEXT_DATABASE_HAS_LOADED("SPBM"))
	{
		HUD::_TEXT_DATABASE_DELETE("SPBM");
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED("SPCWVAU"))
	{
		HUD::_TEXT_DATABASE_DELETE("SPCWVAU");
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
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
	iVar1 = func_194(&(iParam0->f_218[0]), &(iParam0->f_296), 15f, &(iParam0->f_317), &iVar0, 0f, 2, 0, 0, iParam0->f_352, 0, 0, 2, 1, iParam0->f_239, 0);
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

void func_22(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0]))
	{
		return;
	}
	iVar0 = func_196(&(iParam0->f_218[0]), &(iParam0->f_296), 15f, &(iParam0->f_317), 0f, 2, 0, "", iParam0->f_352, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (__LIB_0__::func_27(iParam0->f_254, iParam4))
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
			if (!__LIB_0__::func_27(iParam0->f_254, iParam2))
			{
				__LIB_2__::func_411(&(iParam0->f_317[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(iParam0->f_317[0 /*17*/]), 0, 0);
				if (bParam5)
				{
					__LIB_16__::func_953(iParam0, 0, 0, 0, 0, 0, 0);
					__LIB_16__::func_953(iParam0, 1, 1, 0, 0, 0, 0);
				}
				__LIB_0__::func_37(&(iParam0->f_145));
				__LIB_16__::func_849(19, &(iParam0->f_218[0]), &(iParam0->f_253), iParam1);
				__LIB_16__::func_932(iParam0, __LIB_2__::func_340(3, 0, 0), 1);
				__LIB_1__::func_581(&(iParam0->f_254), iParam4);
				__LIB_1__::func_581(&(iParam0->f_254), iParam2);
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iParam0->f_254, iParam3))
			{
				__LIB_2__::func_411(&(iParam0->f_317[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(iParam0->f_317[0 /*17*/]), 0, 0);
				if (bParam5)
				{
					__LIB_16__::func_953(iParam0, 0, 0, 0, 0, 0, 0);
					__LIB_16__::func_953(iParam0, 1, 1, 0, 0, 0, 0);
				}
				__LIB_0__::func_37(&(iParam0->f_145));
				__LIB_16__::func_849(19, &(iParam0->f_218[0]), &(iParam0->f_253), iParam1);
				__LIB_16__::func_932(iParam0, __LIB_2__::func_340(3, 0, 0), 1);
				__LIB_1__::func_581(&(iParam0->f_254), iParam4);
				__LIB_1__::func_581(&(iParam0->f_254), iParam3);
			}
			break;
	}
}

char* func_31()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_8@q1_join";
}

char* func_32()
{
	return "pl_action";
}

char* func_33()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_8@a1_yes_no";
}

char* func_34()
{
	return "PL_Yes";
}

char* func_35()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_8@cnv_talk";
}

char* func_37()
{
	return "script_special_ped@pdcwv_bum_civil_war_veteran@ig@ig_8";
}

struct<4> func_66(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 317.5058f;
			Jump @314; //curOff = 94
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			Jump @314; //curOff = 125
			Var0 = { -331.8132f, 793.5106f, 115.6329f };
			Var0.f_3 = 231.2512f;
			Jump @314; //curOff = 156
			Var0 = { -192.2564f, 628.0485f, 112.3348f };
			Var0.f_3 = 231.2512f;
			Jump @314; //curOff = 187
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 10.42f;
			Jump @314; //curOff = 218
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			Jump @314; //curOff = 249
			Var0 = { -348.8683f, 781.1053f, 114.8526f };
			Var0.f_3 = 317.7707f;
			Jump @314; //curOff = 280
			Var0 = { -219.8844f, 627.0385f, 112.3019f };
			Var0.f_3 = 268.6542f;
			return Var0;
		}
bool func_67(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		return true;
	}
	return false;
}

bool func_117(var uParam0, int iParam1, char* sParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	__LIB_18__::func_976(&Local_14, iParam1, sParam2, 0, 0, 0, 0, 0);
	if (ANIMSCENE::_0x1F0E401031E20146(*iParam1, sParam2) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam1, false))
	{
		return true;
	}
	return false;
}

char[] func_118()
{
	return "PL_No";
}

bool func_119(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam1, false))
	{
		return true;
	}
	return false;
}

int func_122(var uParam0, int iParam1, char* sParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	__LIB_18__::func_976(&Local_14, iParam1, sParam2, 0, 0, 0, 0, 1);
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam1, false))
	{
		return 1;
	}
	return 0;
}

int func_194(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_196(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

int func_196(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_196(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

