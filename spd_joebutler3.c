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
	struct<212> Local_14 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1419055257, -1914893189, -615159064, -260277067, 1689938120, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2 } ;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 570;
	var uLocal_229 = 1065353216;
	var uLocal_230 = -1082130432;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 2;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 570;
	var uLocal_246 = 1065353216;
	var uLocal_247 = -1082130432;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 2;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 3;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = -1;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 2;
	var uLocal_270 = 1;
	var uLocal_271 = 1;
	var uLocal_272 = 1;
	var uLocal_273 = 0;
	var uLocal_274 = 1;
	var uLocal_275 = 2;
	var uLocal_276 = 2;
	var uLocal_277 = 3;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 3;
	var uLocal_281 = 1;
	var uLocal_282 = 3;
	var uLocal_283 = 3;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 1065353216;
	var uLocal_292 = 1119092736;
	var uLocal_293 = 1092616192;
	var uLocal_294 = 1085276160;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		while (true)
		{
			BUILTIN::WAIT(0);
			if (__LIB_17__::func_111(&(Local_14.f_158[0])))
			{
				__LIB_17__::func_173(&Local_14, 1);
			}
		}
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		__LIB_18__::func_994(&Local_14);
		func_4(&Local_14, 2);
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
				__LIB_16__::func_879(14, 2, &(Local_14.f_158[0]), &(Local_14.f_137), &(Local_14.f_189), Local_14.f_175, 1097859072 /* Float: 15f */, 0);
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
						func_23(&Local_14);
						break;
					case 1:
						if (func_24(&Local_14))
						{
							__LIB_17__::func_119(&Local_14, 2);
						}
						break;
					case 2:
						func_26(&Local_14);
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
									__LIB_17__::func_119(&Local_14, 45);
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
							Local_14.f_183++;
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
							Local_14.f_183 = (1 + Local_14.f_183);
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
							Local_14.f_183 = (1 + Local_14.f_183);
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
							Local_14.f_183++;
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
							Local_14.f_183 = (1 + Local_14.f_183);
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
							Local_14.f_183++;
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
							Local_14.f_183++;
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
							Local_14.f_183++;
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
							Local_14.f_183 = (1 + Local_14.f_183);
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
							Local_14.f_183++;
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
							Local_14.f_183++;
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
							Local_14.f_183 = (1 + Local_14.f_183);
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
								__LIB_17__::func_119(&Local_14, 45);
							}
						}
						else if (__LIB_17__::func_156(&Local_14, &(Local_14.f_178), __LIB_16__::func_874(), 0, 1, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0))
						{
							__LIB_17__::func_119(&Local_14, 6);
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
								func_66(&Local_14);
							}
						}
						break;
					case 44:
						__LIB_16__::func_783(14, 3);
						if (ANIMSCENE::_0x1F0E401031E20146(Local_14.f_179, __LIB_17__::func_163()) && (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_14.f_179) >= 0.61f || ANIMSCENE::_0x8D81E7824B7753F7(Local_14.f_179, "s_base_end", 1)))
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
								if (!__LIB_0__::func_27(Local_14.f_180, 16))
								{
									__LIB_1__::func_581(&(Local_14.f_180), 16);
								}
								__LIB_17__::func_119(&Local_14, 45);
							}
						}
						break;
					case 45:
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
				__LIB_18__::func_995(&Local_14, 3);
			}
		}
	}
}

void func_4(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		__LIB_17__::func_173(uParam0, 1);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[14 /*638*/][iParam1 /*48*/].f_47, true, 0))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_128)))
		{
			__LIB_1__::func_283(&(uParam0->f_128), 0);
		}
		else if (__LIB_0__::func_265(&(uParam0->f_128)) > 5f)
		{
			__LIB_0__::func_37(&(uParam0->f_128));
			__LIB_17__::func_173(uParam0, 1);
		}
	}
	else if (func_94(14, iParam1, &(uParam0->f_283), uParam0->f_158[0]))
	{
		if (__LIB_16__::func_809(&(uParam0->f_283)))
		{
			__LIB_17__::func_173(uParam0, 1);
		}
		else if (*uParam0 < 38 || *uParam0 > 47)
		{
			__LIB_17__::func_166(uParam0);
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
	switch (func_116(&(iParam0->f_158[0]), &(iParam0->f_190), 15f, &(iParam0->f_211), 0f, 2, 0, "", __LIB_2__::func_340(iParam0->f_246, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */))
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

void func_23(int iParam0)
{
	iParam0->f_176 = (30 - 1);
	iParam0->f_177 = (2 - 1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_178))
	{
		iParam0->f_178 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_17__::func_116(), 0, __LIB_17__::func_117(), false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_179))
	{
		iParam0->f_179 = ANIMSCENE::_CREATE_ANIM_SCENE(func_139(), 32, __LIB_17__::func_163(), false, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_178) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_179))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_178);
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_179);
		STREAMING::REQUEST_ANIM_DICT(__LIB_17__::func_118());
		STREAMING::REQUEST_ANIM_DICT(func_141());
		HUD::_TEXT_DATABASE_REQUEST("SPJB");
		HUD::_TEXT_DATABASE_REQUEST("SPJBAUD");
		HUD::_TEXT_DATABASE_REQUEST("SPDEF");
		STREAMING::REQUEST_MODEL(iParam0->f_150, false);
		STREAMING::REQUEST_MODEL(iParam0->f_151, false);
		STREAMING::REQUEST_MODEL(iParam0->f_153, false);
		STREAMING::REQUEST_MODEL(iParam0->f_152, false);
		__LIB_18__::func_996(iParam0);
		__LIB_2__::func_261(iParam0->f_163, "SP_JoeButler3_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(iParam0->f_165, 2500607, 0, 0, -1, -1, 10);
		POPULATION::_0x18262CAFEBB5FBE1(iParam0->f_165, 2238463, 0, 0, -1, -1, 0);
		iParam0->f_149 = __LIB_1__::func_293(14, 2, 9, 0);
		if (!__LIB_0__::func_6(iParam0->f_149))
		{
		}
		if (__LIB_0__::func_181())
		{
			__LIB_0__::func_928(&(iParam0->f_1), Global_35, "JOHN", 0);
		}
		else
		{
			__LIB_0__::func_928(&(iParam0->f_1), Global_35, "ARTHUR", 0);
		}
		__LIB_16__::func_799(&(iParam0->f_283));
		__LIB_4__::func_228(&(iParam0->f_99));
		__LIB_1__::func_398(&(iParam0->f_99), 1);
		__LIB_1__::func_401(&(iParam0->f_99), 1);
		__LIB_2__::func_828(&(iParam0->f_99), 1);
		__LIB_1__::func_413(&(iParam0->f_99), 1);
		__LIB_1__::func_403(&(iParam0->f_99), 1);
		__LIB_2__::func_829(&(iParam0->f_99), 1);
		__LIB_1__::func_399(&(iParam0->f_99), 0);
		__LIB_2__::func_956(&(iParam0->f_99), 1);
		__LIB_1__::func_397(&(iParam0->f_99), 0);
		__LIB_1__::func_402(&(iParam0->f_99), 1);
		__LIB_1__::func_405(&(iParam0->f_99), 1);
		__LIB_1__::func_393(&(iParam0->f_99), 1);
		__LIB_2__::func_619(&(iParam0->f_99), 0);
		__LIB_2__::func_903(&(iParam0->f_99), 0);
		__LIB_2__::func_830(&(iParam0->f_99), 0);
		__LIB_1__::func_406(&(iParam0->f_99), 1);
		__LIB_8__::func_731(&(iParam0->f_99), 1);
		__LIB_10__::func_590(&(iParam0->f_99), 0);
		iParam0->f_182 = 14;
		if (__LIB_0__::func_6(iParam0->f_149))
		{
			if (!__LIB_1__::func_25(iParam0->f_149, 1))
			{
				__LIB_17__::func_119(iParam0, 1);
			}
			else
			{
				__LIB_17__::func_119(iParam0, 56);
			}
		}
	}
}

bool func_24(int iParam0)
{
	PED::_0xED9582B3DA8F02B4(1);
	if (((((((((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_178, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_179, true, false)) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_17__::func_118())) && STREAMING::HAS_ANIM_DICT_LOADED(func_141())) && HUD::_TEXT_DATABASE_HAS_LOADED("SPJB")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPJBAUD")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPDEF")) && STREAMING::HAS_MODEL_LOADED(iParam0->f_150)) && STREAMING::HAS_MODEL_LOADED(iParam0->f_151)) && STREAMING::HAS_MODEL_LOADED(iParam0->f_152)) && STREAMING::HAS_MODEL_LOADED(iParam0->f_153)) && PED::_0x5C16855277819BBF() == 1)
	{
		return true;
	}
	return false;
}

void func_26(int iParam0)
{
	vector3 vVar0;
	vector3 vVar4;
	vector3 vVar8;
	struct<11> Var12;
	vVar0 = { __LIB_17__::func_164(0) };
	vVar4 = { __LIB_17__::func_164(3) };
	vVar8 = { __LIB_17__::func_164(1) };
	if (((__LIB_16__::func_954(&(iParam0->f_158[0]), iParam0->f_150, vVar0, vVar0.f_3, 1, 0, 1) && __LIB_17__::func_106(&(iParam0->f_160), iParam0->f_151, vVar8)) && __LIB_17__::func_106(&(iParam0->f_162), iParam0->f_153, vVar8)) && __LIB_17__::func_106(&(iParam0->f_161), iParam0->f_152, vVar4))
	{
		if (__LIB_0__::func_272(iParam0->f_158[0], 0))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_158[0], "special_ped_group", 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_158[0], true);
			__LIB_0__::func_928(&(iParam0->f_1), iParam0->f_158[0], "JOE_BUTLER", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0->f_158[0], vVar0, vVar0.f_3, true, false, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_158[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_158[0], 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_158[0], 317, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_158[0], 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_158[0], 153, true);
			PED::_0xFD3C31A2E45671E7(iParam0->f_158[0], 43312);
			PED::_0xAE6004120C18DF97(iParam0->f_158[0], 0, 0);
			__LIB_2__::func_279(iParam0->f_158[0], 1);
			PED::_0x5BCF0B79D4F5DBA3(iParam0->f_158[0], 5f);
			PED::_0x2E5B5D1F1453E08E(iParam0->f_158[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "JOE_BUTLER", iParam0->f_158[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Cup", iParam0->f_160, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "COIN", iParam0->f_161, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_179, "JOE_BUTLER", iParam0->f_158[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_179, "Cup", iParam0->f_160, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_179, "COIN", iParam0->f_161, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_179, "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_179, "Crutch", iParam0->f_162, 0);
			__LIB_16__::func_806(&(iParam0->f_158[0]), &(iParam0->f_181), joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), 15f, 3600f);
			__LIB_17__::func_171(iParam0, 0);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iParam0->f_158[0], "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "JoeBubble");
			PED::_0x7C00CFC48A782DC0(iParam0->f_167, iParam0->f_158[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_168))
			{
				Var12 = { __LIB_17__::func_165(5) };
				iParam0->f_168 = VOLUME::_0x0EB78C2B156635B1(Var12, Var12.f_1, Var12.f_4, Var12.f_7);
				PED::_0x7C00CFC48A782DC0(iParam0->f_168, iParam0->f_158[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_169))
			{
				Var12 = { __LIB_17__::func_165(6) };
				iParam0->f_169 = VOLUME::_0x0EB78C2B156635B1(Var12, Var12.f_1, Var12.f_4, Var12.f_7);
				PED::_0x7C00CFC48A782DC0(iParam0->f_169, iParam0->f_158[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_169, 0);
				VOLUME::_0xBE551C2CC421185D(iParam0->f_169, 1);
			}
			if (!__LIB_1__::func_565(&(iParam0->f_172)))
			{
				iParam0->f_172 = GRAPHICS::_0xFA50F79257745E74(vVar0, 1.25f, 1, 2, 0);
			}
			__LIB_1__::func_581(&(iParam0->f_180), 2048);
			__LIB_16__::func_792(iParam0->f_158[0], 14);
			__LIB_17__::func_119(iParam0, 4);
		}
	}
}

void func_66(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(0, (2 - 1), iParam0->f_177);
	iParam0->f_177 = iVar0;
	switch (iVar0)
	{
		case 0:
			__LIB_17__::func_119(iParam0, 44);
			break;
		case 2:
			__LIB_17__::func_119(iParam0, 45);
			break;
		default:
			break;
	}
}

bool func_94(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_581(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_581(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_581(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_581(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_581(uParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_581(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_5__::func_219(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_5__::func_219(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_581(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (__LIB_17__::func_155(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || __LIB_17__::func_301(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_268(&(uParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(uParam2->f_13)) >= uParam2->f_16)
					{
						__LIB_0__::func_37(&(uParam2->f_13));
						__LIB_1__::func_581(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_37(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_581(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_581(uParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_581(uParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_581(uParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*uParam2, 2) || __LIB_0__::func_27(*uParam2, 4)) || __LIB_0__::func_27(*uParam2, 8)) || __LIB_0__::func_27(*uParam2, 16)) || __LIB_0__::func_27(*uParam2, 32)) || __LIB_0__::func_27(*uParam2, 64)) || __LIB_0__::func_27(*uParam2, 128)) || __LIB_0__::func_27(*uParam2, 256)) || __LIB_0__::func_27(*uParam2, 512)) || __LIB_0__::func_27(*uParam2, 1024)) || __LIB_0__::func_27(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

int func_116(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_116(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

char* func_139()
{
	return "script@specialped@pdjeb_joe_butler@ig@ig_4@ig_4";
}

char* func_141()
{
	return "script_special_ped@pdjeb_joe_butler@ig@ig4";
}

