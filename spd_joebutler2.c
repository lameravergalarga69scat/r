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
	struct<284> Local_14 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1419055257, -1914893189, -615159064, -260277067, 1689938120, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
#endregion
void __EntryFunction__()
{
	struct<11> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		while (true)
		{
			BUILTIN::WAIT(0);
			if (__LIB_17__::func_111(&(Local_14.f_158[0])))
			{
				func_2(&Local_14, 1);
			}
		}
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_3(&Local_14);
		func_4(&Local_14, 1);
		if ((((__LIB_16__::func_881(14, Local_14.f_158[0], 1, 1) && Local_14 > 2) && Local_14 < 49) || __LIB_14__::func_126(29, 1)) || __LIB_17__::func_153(&Local_14))
		{
			if (!__LIB_0__::func_27(Local_14.f_180, 1024))
			{
				if (Local_14 == 3 || Local_14 == 4)
				{
					__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_112(), 0, 1, 0);
				}
				else if (Local_14 == 50 || Local_14 == 51)
				{
					__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_113(), 0, 1, 0);
				}
				else if (Local_14 != 5)
				{
					__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_16__::func_874(), 0, 1, 0);
				}
				else
				{
					__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_114(), 0, 1, 0);
				}
			}
			else
			{
				__LIB_17__::func_157(&Local_14);
				__LIB_16__::func_879(14, 1, &(Local_14.f_158[0]), &(Local_14.f_137), &(Local_14.f_189), Local_14.f_175, 1097859072 /* Float: 15f */, 0);
				func_16(&Local_14);
				__LIB_17__::func_172(&Local_14);
				__LIB_17__::func_158(&Local_14);
				__LIB_17__::func_169(&Local_14);
				__LIB_16__::func_854(Local_14.f_158[0], &(Local_14.f_180), 256, 14, Local_14.f_175);
				__LIB_17__::func_108(Local_14.f_158[0], &(Local_14.f_180), 2048, 4096, 8192, "SPECIAL_PED_LIGHTWEIGHT_1_0", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "JoeBubble", "JoeConvo");
				__LIB_17__::func_115(&Local_14);
				switch (Local_14)
				{
					case 0:
						if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_178))
						{
							Local_14.f_178 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_17__::func_116(), 0, __LIB_17__::func_117(), false, true);
						}
						if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_179))
						{
							Local_14.f_179 = ANIMSCENE::_CREATE_ANIM_SCENE(func_25(), 32, __LIB_17__::func_163(), false, true);
						}
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_178) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_179))
						{
							ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_178);
							ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_179);
							STREAMING::REQUEST_ANIM_DICT(__LIB_17__::func_118());
							STREAMING::REQUEST_ANIM_DICT(func_28());
							HUD::_TEXT_DATABASE_REQUEST("SPJB");
							HUD::_TEXT_DATABASE_REQUEST("SPJBAUD");
							HUD::_TEXT_DATABASE_REQUEST("SPDEF");
							STREAMING::REQUEST_MODEL(Local_14.f_150, false);
							STREAMING::REQUEST_MODEL(Local_14.f_151, false);
							STREAMING::REQUEST_MODEL(Local_14.f_153, false);
							STREAMING::REQUEST_MODEL(Local_14.f_152, false);
							func_29(&Local_14);
							__LIB_2__::func_261(Local_14.f_163, "SP_JoeButler1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
							POPULATION::_0xB56D41A694E42E86(Local_14.f_165, 2500607, 0, 0, -1, -1, 10);
							POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_165, 2238463, 0, 0, -1, -1, 0);
							Local_14.f_149 = __LIB_1__::func_293(14, 1, 9, __LIB_16__::func_790(14));
							if (!__LIB_0__::func_6(Local_14.f_149))
							{
							}
							if (__LIB_0__::func_181())
							{
								__LIB_0__::func_928(&(Local_14.f_1), Global_35, "JOHN", 0);
							}
							else
							{
								__LIB_0__::func_928(&(Local_14.f_1), Global_35, "ARTHUR", 0);
							}
							__LIB_16__::func_799(&(Local_14.f_283));
							__LIB_4__::func_228(&(Local_14.f_99));
							__LIB_1__::func_398(&(Local_14.f_99), 1);
							__LIB_1__::func_401(&(Local_14.f_99), 1);
							__LIB_2__::func_828(&(Local_14.f_99), 1);
							__LIB_1__::func_413(&(Local_14.f_99), 1);
							__LIB_1__::func_403(&(Local_14.f_99), 1);
							__LIB_2__::func_829(&(Local_14.f_99), 1);
							__LIB_1__::func_399(&(Local_14.f_99), 0);
							__LIB_2__::func_956(&(Local_14.f_99), 1);
							__LIB_1__::func_397(&(Local_14.f_99), 0);
							__LIB_1__::func_402(&(Local_14.f_99), 1);
							__LIB_1__::func_405(&(Local_14.f_99), 1);
							__LIB_1__::func_393(&(Local_14.f_99), 1);
							__LIB_2__::func_619(&(Local_14.f_99), 0);
							__LIB_2__::func_903(&(Local_14.f_99), 0);
							__LIB_2__::func_830(&(Local_14.f_99), 1);
							__LIB_1__::func_406(&(Local_14.f_99), 1);
							__LIB_8__::func_731(&(Local_14.f_99), 1);
							__LIB_10__::func_590(&(Local_14.f_99), 0);
							Local_14.f_182 = 9;
							if (__LIB_0__::func_6(Local_14.f_149))
							{
								if (!__LIB_1__::func_25(Local_14.f_149, 1))
								{
									__LIB_17__::func_119(&Local_14, 1);
								}
								else
								{
									__LIB_17__::func_119(&Local_14, 56);
								}
							}
						}
						break;
					case 1:
						PED::_0xED9582B3DA8F02B4(1);
						if (((((((((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_14.f_178, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_14.f_179, true, false)) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_17__::func_118())) && STREAMING::HAS_ANIM_DICT_LOADED(func_28())) && HUD::_TEXT_DATABASE_HAS_LOADED("SPJB")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPJBAUD")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPDEF")) && STREAMING::HAS_MODEL_LOADED(Local_14.f_150)) && STREAMING::HAS_MODEL_LOADED(Local_14.f_151)) && STREAMING::HAS_MODEL_LOADED(Local_14.f_153)) && STREAMING::HAS_MODEL_LOADED(Local_14.f_152)) && PED::_0x5C16855277819BBF() == 1)
						{
							__LIB_17__::func_119(&Local_14, 2);
						}
						break;
					case 2:
						if (((__LIB_17__::func_175(&(Local_14.f_158[0]), Local_14.f_150, 1320.167f, -1291.738f, 75.23311f, 68.748f, 1, 0, 1) && __LIB_17__::func_106(&(Local_14.f_160), Local_14.f_151, 1320.96f, -1290.723f, 75.27775f)) && __LIB_17__::func_106(&(Local_14.f_162), Local_14.f_153, 1320.96f, -1290.723f, 75.27775f)) && __LIB_17__::func_106(&(Local_14.f_161), Local_14.f_152, 1321.58f, -1290.592f, 76.39468f))
						{
							if (__LIB_0__::func_272(Local_14.f_158[0], 0))
							{
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_158[0], "special_ped_group", 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_158[0], true);
								__LIB_0__::func_928(&(Local_14.f_1), Local_14.f_158[0], "JOE_BUTLER", 0);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_158[0], 1320.167f, -1291.738f, 75.23311f, 68.748f, true, false, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 297, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 130, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 317, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 315, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 153, true);
								PED::_0xFD3C31A2E45671E7(Local_14.f_158[0], 43312);
								PED::_0xAE6004120C18DF97(Local_14.f_158[0], 0, 0);
								__LIB_2__::func_279(Local_14.f_158[0], 1);
								PED::_0x5BCF0B79D4F5DBA3(Local_14.f_158[0], 5f);
								PED::_0x2E5B5D1F1453E08E(Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "ARTHUR", Global_35, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Crutch", Local_14.f_162, 0);
								__LIB_16__::func_806(&(Local_14.f_158[0]), &(Local_14.f_181), joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), 15f, 3600f);
								__LIB_17__::func_171(&Local_14, 0);
								PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_14.f_158[0], "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "JoeBubble");
								PED::_0x7C00CFC48A782DC0(Local_14.f_167, Local_14.f_158[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
								if (!VOLUME::_DOES_VOLUME_EXIST(Local_14.f_168))
								{
									Var0 = { func_64(5) };
									Local_14.f_168 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
									PED::_0x7C00CFC48A782DC0(Local_14.f_168, Local_14.f_158[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
								}
								if (!VOLUME::_DOES_VOLUME_EXIST(Local_14.f_169))
								{
									Var0 = { func_64(6) };
									Local_14.f_169 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
									PED::_0x7C00CFC48A782DC0(Local_14.f_169, Local_14.f_158[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
									VOLUME::_0x5B23DFF8E0948BB2(Local_14.f_169, 0);
									VOLUME::_0xBE551C2CC421185D(Local_14.f_169, 1);
								}
								if (!func_65(&(Local_14.f_172)))
								{
									Local_14.f_172 = GRAPHICS::_0xFA50F79257745E74(1320.674f, -1291.785f, 75.43612f, 1.25f, 1, 2, 0);
								}
								__LIB_1__::func_581(&(Local_14.f_180), 2048);
								__LIB_16__::func_792(Local_14.f_158[0], 14);
								__LIB_17__::func_119(&Local_14, 4);
							}
						}
						break;
					case 6:
						if (__LIB_0__::func_27(Local_14.f_180, 1))
						{
							__LIB_17__::func_119(&Local_14, 49);
						}
						else if ((__LIB_0__::func_27(Local_14.f_180, 2) && __LIB_0__::func_27(Local_14.f_180, 4)) && !__LIB_0__::func_27(Local_14.f_180, 16))
						{
							if (__LIB_16__::func_876(&(Local_14.f_179)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "ARTHUR", Global_35, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_179, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_179, "internal_loop_end", false, false);
								if (__LIB_17__::func_156(&Local_14, &(Local_14.f_179), __LIB_16__::func_874(), 1, 0, 0))
								{
									ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_178, 0);
									__LIB_17__::func_119(&Local_14, 43);
								}
							}
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_158[0], -1527527524))
						{
							if (!__LIB_0__::func_75(&(Local_14.f_131)))
							{
								Local_14.f_174 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(2, 3));
								__LIB_0__::func_268(&(Local_14.f_131), 0f);
							}
							else if (__LIB_0__::func_265(&(Local_14.f_131)) > Local_14.f_174)
							{
								__LIB_17__::func_170(&Local_14, &(Local_14.f_182));
								__LIB_0__::func_37(&(Local_14.f_131));
							}
						}
						break;
					case 4:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_117(), 1, 0, 0))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						if (__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 38:
						if (__LIB_0__::func_27(Local_14.f_180, 1))
						{
							__LIB_17__::func_119(&Local_14, 49);
						}
						else if (__LIB_0__::func_27(Local_14.f_180, 16))
						{
							if (__LIB_16__::func_876(&(Local_14.f_178)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_178, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_178, "internal_loop_end", false, false);
								if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_114(), 0, 1, 0))
								{
									ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_179, 0);
									__LIB_17__::func_119(&Local_14, 5);
								}
							}
						}
						else if (__LIB_0__::func_27(Local_14.f_180, 4))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_158[0], -1527527524))
							{
								__LIB_17__::func_119(&Local_14, 42);
							}
						}
						break;
					case 7:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_120(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 8:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_121(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 9:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_122(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 10:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_123(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 11:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_124(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 12:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_125(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 13:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_126(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 14:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_127(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 15:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_128(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 16:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_129(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 17:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_130(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 18:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_131(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 19:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_132(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 20:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_133(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 21:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_134(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 22:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_135(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 23:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_136(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 24:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_137(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 25:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_138(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 26:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_139(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 27:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_140(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 28:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_141(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 29:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_142(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 30:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_143(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 31:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_144(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 32:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_145(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 33:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_146(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 34:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_147(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 35:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_148(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 36:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_149(), 1, 0, 1))
						{
							Local_14.f_183++;
							__LIB_17__::func_119(&Local_14, 37);
						}
						if ((__LIB_0__::func_27(Local_14.f_180, 4) && !__LIB_0__::func_27(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							__LIB_17__::func_119(&Local_14, 37);
						}
						break;
					case 37:
						if ((__LIB_0__::func_27(Local_14.f_180, 2) && __LIB_0__::func_27(Local_14.f_180, 4)) && !__LIB_0__::func_27(Local_14.f_180, 16))
						{
							if (__LIB_16__::func_876(&(Local_14.f_179)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "ARTHUR", Global_35, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_179, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_179, "internal_loop_end", false, false);
								__LIB_17__::func_156(&Local_14, &(Local_14.f_179), __LIB_16__::func_874(), 1, 0, 0);
								ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_178, 0);
								__LIB_17__::func_119(&Local_14, 43);
							}
						}
						else if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_16__::func_874(), 0, 1, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0))
						{
							__LIB_17__::func_119(&Local_14, 6);
						}
						break;
					case 42:
						__LIB_16__::func_783(14, 2);
						if (ANIMSCENE::_0x1F0E401031E20146(Local_14.f_179, __LIB_17__::func_163()) && (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_14.f_179) >= 0.6f || ANIMSCENE::_0x8D81E7824B7753F7(Local_14.f_179, "s_base_end", 1)))
						{
							__LIB_1__::func_993(&(Local_14.f_180), 1024);
							__LIB_17__::func_154(14, 32768);
							__LIB_1__::func_993(&(Local_14.f_180), 4096);
							HUD::_DISPLAY_HUD_COMPONENT(724769646);
							__LIB_2__::func_451(&(Local_14.f_190), 0);
							__LIB_17__::func_162(&Local_14, 0);
							__LIB_2__::func_411(&(Local_14.f_211[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_14.f_211[0 /*17*/]), 0, 0);
						}
						if (__LIB_0__::func_27(Local_14.f_180, 4))
						{
							if (__LIB_17__::func_156(&Local_14, &(Local_14.f_179), __LIB_17__::func_163(), 1, 0, 1))
							{
								__LIB_3__::func_154(&(Local_14.f_1), "SPJB_STILLHERE", Local_14.f_158[0], Global_35, 0, 0, 1, 1);
								if (!__LIB_0__::func_27(Local_14.f_180, 16))
								{
									__LIB_1__::func_581(&(Local_14.f_180), 16);
								}
								__LIB_17__::func_119(&Local_14, 43);
							}
						}
						break;
					case 43:
						if (__LIB_0__::func_27(Local_14.f_180, 16))
						{
							if (__LIB_16__::func_876(&(Local_14.f_178)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_178, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_178, "internal_loop_end", false, false);
								__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_114(), 0, 1, 0);
								ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_179, 0);
								__LIB_17__::func_119(&Local_14, 5);
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !__LIB_0__::func_27(Local_14.f_180, 16))
						{
						}
						else
						{
							__LIB_17__::func_156(&Local_14, &(Local_14.f_179), __LIB_17__::func_163(), 1, 0, 0);
							__LIB_17__::func_119(&Local_14, 38);
						}
						break;
					case 5:
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_114(), 0, 1, 0))
						{
							__LIB_17__::func_119(&Local_14, 3);
						}
						break;
					case 3:
						__LIB_17__::func_159(&Local_14);
						if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_112(), 0, 1, 0))
						{
						}
						break;
					case 50:
						if (__LIB_0__::func_27(Local_14.f_180, 32768))
						{
							if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_150(), 0, 1, 0))
							{
								__LIB_17__::func_119(&Local_14, 51);
							}
						}
						else if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_17__::func_151(), 0, 1, 0))
						{
							__LIB_17__::func_119(&Local_14, 51);
						}
						break;
					case 51:
						__LIB_17__::func_160(&Local_14);
						break;
					case 48:
						break;
					case 49:
						break;
					case 56:
						break;
					case 57:
						break;
					default:
						break;
				}
				if (__LIB_0__::func_6(Local_14.f_149))
				{
					switch (Local_14)
					{
						case 6:
						case 7:
						case 8:
						case 9:
						case 10:
						case 11:
						case 12:
						case 13:
						case 14:
						case 15:
						case 16:
						case 17:
						case 18:
						case 19:
						case 20:
						case 21:
						case 22:
						case 23:
						case 24:
						case 25:
						case 26:
						case 27:
						case 28:
						case 29:
						case 30:
						case 31:
						case 32:
						case 33:
						case 34:
						case 35:
						case 36:
						case 37:
						case 42:
						case 43:
						case 48:
							break;
						case 38:
							break;
						case 49:
							break;
						case 56:
							__LIB_16__::func_783(14, 2);
							func_2(&Local_14, 1);
							break;
						case 57:
							break;
					}
				}
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
{
	__LIB_16__::func_840(14);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_155))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_155);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_156))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_156);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_157))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_157);
	}
	__LIB_16__::func_839(&(iParam0->f_283));
	if (__LIB_0__::func_6(iParam0->f_149) && (__LIB_0__::func_702(iParam0->f_149) || __LIB_1__::func_44(iParam0->f_149)))
	{
		__LIB_1__::func_559(iParam0->f_149, 0, 2);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_178, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162);
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0->f_162, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_179, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_179, "Crutch", iParam0->f_162);
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0->f_162, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	__LIB_16__::func_832(0);
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_163))
	{
		__LIB_1__::func_544(iParam0->f_163);
		VOLUME::_DELETE_VOLUME(iParam0->f_163);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_165))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_165);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_165);
		VOLUME::_DELETE_VOLUME(iParam0->f_165);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_164))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_164);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_164);
		VOLUME::_DELETE_VOLUME(iParam0->f_164);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_166))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_166);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_167))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_167);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_168))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_168);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_169))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_169);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_170))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_170);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][0 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][1 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][1 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][2 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][2 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][3 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][3 /*48*/].f_47);
	}
	if (bParam1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_178))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_178);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_179))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_179);
		}
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_158[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_158[0], 0f);
				PED::_0x39A2FC5AF55A52B1(iParam0->f_158[0], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_158[0]));
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0->f_158[0], 153, false);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_158[0], 0f);
			PED::DELETE_PED(&(iParam0->f_158[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_160))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_160));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_161))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_161));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_162))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_162));
		}
		if (func_65(&(iParam0->f_172)))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&(iParam0->f_172), 1);
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "JoeBubble");
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3(int iParam0)
{
	if ((*iParam0 >= 49 && *iParam0 <= 51) || __LIB_14__::func_126(29, 1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		if (!__LIB_0__::func_272(iParam0->f_158[0], 0))
		{
			func_2(iParam0, 1);
			__LIB_1__::func_993(&(iParam0->f_180), 1024);
			__LIB_17__::func_154(14, 32768);
			__LIB_1__::func_993(&(iParam0->f_180), 4096);
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			__LIB_2__::func_344(&(iParam0->f_158[0]));
			__LIB_2__::func_480(&(iParam0->f_211), 1, 1, 1, 0);
			__LIB_17__::func_119(iParam0, 49);
		}
		else if (((*iParam0 >= 2 && *iParam0 < 49) && __LIB_10__::func_373(iParam0->f_158[0], 0, &(iParam0->f_99), &(iParam0->f_127), 0, iParam0->f_175)) || PED::_GET_LASSO_TARGET(Global_35) == iParam0->f_158[0])
		{
			iParam0->f_282 = 1;
			if (!__LIB_16__::func_876(&(iParam0->f_178)))
			{
				return;
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "JOE_BUTLER", iParam0->f_158[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Cup", iParam0->f_160, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "COIN", iParam0->f_161, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop", false, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop_end", false, false);
			}
			if (iParam0->f_127 == 2048 || iParam0->f_127 == 2)
			{
				PED::_0x2E5B5D1F1453E08E(iParam0->f_158[0], 0);
				func_2(iParam0, 0);
				__LIB_1__::func_993(&(iParam0->f_180), 1024);
				__LIB_17__::func_154(14, 32768);
				__LIB_1__::func_993(&(iParam0->f_180), 4096);
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				__LIB_2__::func_344(&(iParam0->f_158[0]));
				__LIB_2__::func_480(&(iParam0->f_211), 1, 1, 1, 0);
				__LIB_17__::func_119(iParam0, 49);
			}
			else
			{
				if (*iParam0 == 3)
				{
					__LIB_1__::func_581(&(iParam0->f_180), 32768);
				}
				else if (*iParam0 == 5)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_178) > 0.29f)
					{
						__LIB_1__::func_581(&(iParam0->f_180), 32768);
					}
				}
				else if (*iParam0 == 4)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_178) < 0.1f)
					{
						__LIB_1__::func_581(&(iParam0->f_180), 32768);
					}
				}
				__LIB_1__::func_993(&(iParam0->f_180), 1024);
				__LIB_17__::func_154(14, 32768);
				__LIB_1__::func_993(&(iParam0->f_180), 4096);
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				__LIB_2__::func_344(&(iParam0->f_158[0]));
				__LIB_2__::func_480(&(iParam0->f_211), 1, 1, 1, 0);
				__LIB_17__::func_119(iParam0, 50);
			}
		}
	}
}

void func_4(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		func_2(iParam0, 1);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[14 /*638*/][iParam1 /*48*/].f_47, true, 0))
	{
		if (!__LIB_0__::func_75(&(iParam0->f_128)))
		{
			__LIB_1__::func_283(&(iParam0->f_128), 0);
		}
		else if (__LIB_0__::func_265(&(iParam0->f_128)) > 5f)
		{
			__LIB_0__::func_37(&(iParam0->f_128));
			func_2(iParam0, 1);
		}
	}
	else if (__LIB_19__::func_400(14, iParam1, &(iParam0->f_283), iParam0->f_158[0]))
	{
		if (__LIB_16__::func_809(&(iParam0->f_283)))
		{
			func_2(iParam0, 1);
		}
		else if (*iParam0 < 38 || *iParam0 > 47)
		{
			__LIB_17__::func_166(iParam0);
		}
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	if ((((((*iParam0 <= 2 || *iParam0 >= 49) || *iParam0 == 42) || *iParam0 == 44) || *iParam0 == 46) || *iParam0 == 3) || *iParam0 == 5)
	{
		if ((iParam0->f_246 != 3 || __LIB_2__::func_466(&(iParam0->f_211[0 /*17*/]), 1, 0)) || __LIB_2__::func_466(&(iParam0->f_211[1 /*17*/]), 1, 0))
		{
			__LIB_2__::func_451(&(iParam0->f_190), 0);
			__LIB_2__::func_411(&(iParam0->f_211[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(iParam0->f_211[1 /*17*/]), 0, 0);
			iParam0->f_246 = 3;
		}
	}
	if (__LIB_0__::func_27(iParam0->f_180, 4))
	{
		if ((iParam0->f_246 != 3 || __LIB_2__::func_466(&(iParam0->f_211[0 /*17*/]), 1, 0)) || __LIB_2__::func_466(&(iParam0->f_211[1 /*17*/]), 1, 0))
		{
			__LIB_2__::func_451(&(iParam0->f_190), 0);
			__LIB_2__::func_411(&(iParam0->f_211[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(iParam0->f_211[1 /*17*/]), 0, 0);
			iParam0->f_246 = 3;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_164))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		return;
	}
	if (!__LIB_0__::func_27(iParam0->f_180, 4))
	{
		if (!__LIB_0__::func_27(iParam0->f_180, 2))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_164, true, 0) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (iParam0->f_246 != 2 || !__LIB_2__::func_466(&(iParam0->f_211[0 /*17*/]), 1, 0))
				{
					__LIB_2__::func_451(&(iParam0->f_190), 0);
					__LIB_17__::func_171(iParam0, 1);
					__LIB_2__::func_411(&(iParam0->f_211[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(iParam0->f_211[1 /*17*/]), 1, 0);
					iParam0->f_246 = 2;
				}
				__LIB_1__::func_581(&(iParam0->f_180), 2);
			}
			else if (iParam0->f_246 != 3 || __LIB_2__::func_466(&(iParam0->f_211[0 /*17*/]), 1, 0))
			{
				__LIB_2__::func_451(&(iParam0->f_190), 0);
				__LIB_2__::func_411(&(iParam0->f_211[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(iParam0->f_211[1 /*17*/]), 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_164, true, 0))
		{
			if (iParam0->f_246 != 3 || __LIB_2__::func_466(&(iParam0->f_211[0 /*17*/]), 1, 0))
			{
				__LIB_2__::func_451(&(iParam0->f_190), 0);
				__LIB_2__::func_411(&(iParam0->f_211[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(iParam0->f_211[1 /*17*/]), 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if ((PED::IS_PED_ON_MOUNT(Global_35) || __LIB_17__::func_155(&(iParam0->f_158[0]), &(iParam0->f_157), 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) || __LIB_17__::func_174(&(iParam0->f_158[0]), &(iParam0->f_156), 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */))
		{
			if (iParam0->f_246 != 3 || __LIB_2__::func_466(&(iParam0->f_211[0 /*17*/]), 1, 0))
			{
				__LIB_2__::func_451(&(iParam0->f_190), 0);
				__LIB_2__::func_411(&(iParam0->f_211[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(iParam0->f_211[1 /*17*/]), 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if (iParam0->f_246 != 2 || !__LIB_2__::func_466(&(iParam0->f_211[0 /*17*/]), 1, 0))
		{
			__LIB_17__::func_171(iParam0, 1);
			__LIB_2__::func_411(&(iParam0->f_211[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(iParam0->f_211[1 /*17*/]), 1, 0);
			iParam0->f_246 = 2;
		}
	}
	switch (func_149(&(iParam0->f_158[0]), &(iParam0->f_190), 15f, &(iParam0->f_211), 0f, 2, 0, "", __LIB_2__::func_340(iParam0->f_246, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */))
	{
		case 0:
			if (!__LIB_0__::func_27(iParam0->f_180, 4))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
				__LIB_2__::func_190(iParam0->f_158[0], iVar0);
				__LIB_16__::func_880();
				__LIB_16__::func_849(14, &(iParam0->f_158[0]), &(iParam0->f_180), 64);
				__LIB_2__::func_344(&(iParam0->f_158[0]));
				__LIB_2__::func_480(&(iParam0->f_211), 1, 1, 1, 0);
				__LIB_5__::func_469(Global_35, "GREET_GENERAL", -417894478, iParam0->f_158[0], 0, 0, 0, 1);
				__LIB_16__::func_827(14);
				__LIB_1__::func_581(&(iParam0->f_180), 4096);
				__LIB_1__::func_581(&(iParam0->f_180), 4);
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iParam0->f_180, 4))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
				__LIB_2__::func_190(iParam0->f_158[0], iVar1);
				__LIB_16__::func_880();
				__LIB_16__::func_849(14, &(iParam0->f_158[0]), &(iParam0->f_180), 64);
				__LIB_2__::func_344(&(iParam0->f_158[0]));
				__LIB_2__::func_480(&(iParam0->f_211), 1, 1, 1, 0);
				Var2 = { __LIB_17__::func_167() };
				__LIB_5__::func_469(Global_35, Var2, -417894478, iParam0->f_158[0], 0, 0, Var2.f_1, 1);
				__LIB_16__::func_827(14);
				__LIB_1__::func_581(&(iParam0->f_180), 4096);
				__LIB_1__::func_581(&(iParam0->f_180), 4);
			}
			break;
	}
}

char* func_25()
{
	return "script@specialped@pdjeb_joe_butler@ig@ig_3@ig_3";
}

char* func_28()
{
	return "script_special_ped@pdjeb_joe_butler@ig@ig3";
}

void func_29(int iParam0)
{
	struct<11> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_163))
	{
		Var0 = { func_64(0) };
		iParam0->f_163 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_164))
	{
		Var0 = { func_64(1) };
		iParam0->f_164 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_165))
	{
		Var0 = { func_64(2) };
		iParam0->f_165 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_166))
	{
		Var0 = { func_64(3) };
		iParam0->f_166 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_167))
	{
		Var0 = { func_64(4) };
		iParam0->f_167 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_170))
	{
		Var0 = { func_64(7) };
		iParam0->f_170 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(Var0.f_10);
		VOLUME::_0x39816F6F94F385AD(iParam0->f_170, Var0.f_1, Var0.f_4, Var0.f_7);
		Var0 = { func_64(8) };
		VOLUME::_0xBCE668AAF83608BE(iParam0->f_170, Var0.f_1, Var0.f_4, Var0.f_7);
	}
}

struct<11> func_64(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 1320.787f, -1291.887f, 75.307f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 55f, 55f, 55f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1318.473f, -1290.612f, 84.303f };
			Var0.f_4 = { 0f, 0f, -25.67596f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 1321.154f, -1291.387f, 79.97336f };
			Var0.f_4 = { 0f, 0f, 65f };
			Var0.f_7 = { 3f, 6f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1316.051f, -1289.458f, 78.75141f };
			Var0.f_4 = { 0f, 0f, 155f };
			Var0.f_7 = { 6f, 8f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 4:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1319.544f, -1291.433f, 84.30341f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "Focus";
			break;
		case 5:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1320.894f, -1291.958f, 76.3277f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1f, 1f, 10f };
			Var0.f_10 = "Grief";
			break;
		case 6:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1320.894f, -1291.958f, 76.3277f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "Grief";
			break;
		case 7:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 1325.705f, -1322.965f, 76.01214f };
			Var0.f_4 = { 0f, 0f, 74.99999f };
			Var0.f_7 = { 11f, 12f, 9f };
			Var0.f_10 = "Gunsmith";
			Jump @655; //curOff = 595
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1320.371f, -1318.493f, 78.10471f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 3f };
			Var0.f_10 = "Gunsmith2";
			return Var0;
		}
bool func_65(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_149(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_149(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

