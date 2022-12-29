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
	int iLocal_14 = 0;
	struct<217> Local_15 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1281122482, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1065353216, 0, 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = -1;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 1073741824;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 1;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 2;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 570;
	var uLocal_259 = 1065353216;
	var uLocal_260 = -1082130432;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 2;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 570;
	var uLocal_276 = 1065353216;
	var uLocal_277 = -1082130432;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 2;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
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
	var uLocal_311 = 3;
#endregion
void __EntryFunction__()
{
	struct<4> Var0;
	var uVar6;
	int iVar7;
	int iVar8;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 9228;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		__LIB_18__::func_981(&Local_15, 1);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (Local_15.f_129 >= 2)
		{
			__LIB_19__::func_397(&Local_15, &(Local_15.f_129));
			__LIB_19__::func_398(&Local_15, &(Local_15.f_129));
			if (__LIB_0__::func_27(Local_15.f_193, 2048))
			{
				__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_68(0), 1);
				if (!__LIB_16__::func_881(11, Local_15.f_144, 1, 1))
				{
					__LIB_1__::func_993(&(Local_15.f_193), 2048);
				}
			}
			else
			{
				func_9(&Local_15);
				__LIB_17__::func_97(&Local_15, Local_15.f_129);
				__LIB_16__::func_854(Local_15.f_144, &(Local_15.f_193), 128, 11, Local_15.f_214);
				if (__LIB_18__::func_982(&Local_15, 0))
				{
					__LIB_17__::func_92(&Local_15);
				}
				if (__LIB_18__::func_982(&Local_15, 1))
				{
					Local_15.f_214 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Local_15.f_144, true, false));
				}
				if (__LIB_18__::func_982(&Local_15, 2))
				{
					if (__LIB_16__::func_881(11, Local_15.f_144, 1, 1))
					{
						__LIB_1__::func_581(&(Local_15.f_193), 2048);
					}
					else
					{
						__LIB_16__::func_879(11, 0, &(Local_15.f_144), &(Local_15.f_136), &(Local_15.f_216), Local_15.f_214, 1097859072 /* Float: 15f */, 0);
						iVar7 = __LIB_1__::func_372(Global_35, 0);
						iVar8 = __LIB_1__::func_372(Global_35, 1);
						switch (Local_15.f_129)
						{
							case 0:
								func_17(&Local_15, &(Local_15.f_129));
								break;
							case 1:
								if (__LIB_17__::func_69(&Local_15))
								{
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 2);
								}
								break;
							case 2:
								if (__LIB_19__::func_399(&Local_15))
								{
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 3:
								__LIB_18__::func_983(&Local_15);
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(0), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_201 = (1 + Local_15.f_201);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 4:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(1), 0))
								{
									Local_15.f_208++;
									Local_15.f_200 = (1 + Local_15.f_200);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 5:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(2), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 6:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(3), 1))
								{
									Local_15.f_208++;
									Local_15.f_200 = (1 + Local_15.f_200);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 7:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(4), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 8:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(5), 1))
								{
									Local_15.f_208++;
									Local_15.f_200 = (1 + Local_15.f_200);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 9:
								__LIB_18__::func_983(&Local_15);
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(6), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_201 = (1 + Local_15.f_201);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 10:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(7), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200 = (1 + Local_15.f_200);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 11:
								__LIB_18__::func_983(&Local_15);
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(8), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_201++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 12:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(9), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200 = (1 + Local_15.f_200);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 13:
								__LIB_18__::func_983(&Local_15);
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(10), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_201 = (1 + Local_15.f_201);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 14:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(11), 1))
								{
									Local_15.f_208++;
									Local_15.f_200++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 15:
								__LIB_18__::func_983(&Local_15);
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(12), 1))
								{
									Local_15.f_208++;
									Local_15.f_201 = (1 + Local_15.f_201);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 16:
								__LIB_18__::func_983(&Local_15);
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(13), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_201 = (1 + Local_15.f_201);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 17:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(14), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 18:
								__LIB_18__::func_983(&Local_15);
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_70(15), 1))
								{
									Local_15.f_208++;
									Local_15.f_201++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 19:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_71(0), 1))
								{
									Local_15.f_208++;
									Local_15.f_202++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 20:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_71(1), 1))
								{
									Local_15.f_208++;
									Local_15.f_202++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 21:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_71(2), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_202++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 22:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_71(3), 1))
								{
									Local_15.f_208++;
									Local_15.f_202 = (1 + Local_15.f_202);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 23:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_71(4), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_202++;
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 24:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_71(5), 1))
								{
									Local_15.f_208++;
									Local_15.f_202 = (1 + Local_15.f_202);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								__LIB_18__::func_984(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 25:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_72(0), 0))
								{
									Local_15.f_203 = (1 + Local_15.f_203);
									__LIB_18__::func_985(&Local_15, 1);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 26:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_72(1), 0))
								{
									Local_15.f_203 = (1 + Local_15.f_203);
									__LIB_18__::func_985(&Local_15, 1);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 27:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_72(2), 0))
								{
									Local_15.f_203 = (1 + Local_15.f_203);
									__LIB_18__::func_985(&Local_15, 1);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 28:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_72(3), 0))
								{
									Local_15.f_203++;
									__LIB_18__::func_985(&Local_15, 1);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 29:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_72(4), 0))
								{
									Local_15.f_203++;
									__LIB_18__::func_985(&Local_15, 1);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 30:
								if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_72(5), 0))
								{
									Local_15.f_203 = (1 + Local_15.f_203);
									__LIB_18__::func_985(&Local_15, 1);
									__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 31:
								if (!__LIB_0__::func_27(Local_15.f_193, 1) && __LIB_0__::func_27(Local_15.f_193, 64))
								{
									if ((__LIB_17__::func_93(&Local_15, &(Local_15.f_206)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1))
									{
										__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 32);
									}
								}
								else if (__LIB_0__::func_27(Local_15.f_193, 1))
								{
									if (!__LIB_0__::func_163(Local_15.f_144, 658540077))
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_15.f_144, Local_15.f_212, 0, iLocal_14, -1, 1, 0, -1);
									}
									if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_68(Local_15.f_128), 1))
									{
										__LIB_17__::func_73(&Local_15);
										__LIB_18__::func_986(&Local_15, &(Local_15.f_129));
									}
								}
								else
								{
									if (!__LIB_0__::func_163(Local_15.f_144, 658540077))
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_15.f_144, Local_15.f_212, 0, iLocal_14, -1, 1, 0, -1);
									}
									if (__LIB_17__::func_91(&Local_15, &(Local_15.f_205), __LIB_17__::func_68(Local_15.f_128), 0))
									{
										if (Local_15.f_127 == -1)
										{
											if (__LIB_16__::func_787(11) == -1)
											{
											}
											else
											{
												__LIB_17__::func_73(&Local_15);
												Local_15.f_147[0] = Local_15.f_144;
												if (__LIB_16__::func_963(&(Local_15.f_145), &(Local_15.f_147), 1, ENTITY::GET_ENTITY_COORDS(Local_15.f_144, true, false), 10f, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0) > 0 || Local_15.f_214 < 10f)
												{
													__LIB_18__::func_987(&Local_15, &(Local_15.f_129));
												}
												else
												{
													__LIB_18__::func_988(&Local_15, &(Local_15.f_129));
												}
											}
										}
										else
										{
											__LIB_17__::func_73(&Local_15);
											__LIB_18__::func_989(&Local_15, &(Local_15.f_129));
										}
									}
								}
								break;
							case 32:
								if (!__LIB_17__::func_109())
								{
								}
								else
								{
									if (!__LIB_0__::func_27(Local_15.f_193, 512))
									{
										iVar7 = __LIB_1__::func_372(Global_35, 0);
										iVar8 = __LIB_1__::func_372(Global_35, 1);
										if (iVar7 != joaat("WEAPON_UNARMED") || iVar8 != joaat("WEAPON_UNARMED"))
										{
											WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
										}
										if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
										{
											if (!__LIB_0__::func_163(Global_35, 501393341))
											{
												TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
											}
										}
										__LIB_1__::func_581(&(Local_15.f_193), 512);
									}
									else if (!__LIB_0__::func_163(Local_15.f_144, -875674219))
									{
										__LIB_16__::func_880();
										if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_15.f_206, false))
										{
											ANIMSCENE::RESET_ANIM_SCENE(Local_15.f_206, 0);
										}
										__LIB_18__::func_990(&Local_15);
									}
									Jump @3589; //curOff = 3186
									if (!__LIB_17__::func_109())
									{
									}
									else
									{
										__LIB_17__::func_87(&Local_15);
										if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_15.f_206, false) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_15.f_205, false))
										{
											ANIMSCENE::RESET_ANIM_SCENE(Local_15.f_205, 0);
										}
										if (__LIB_17__::func_91(&Local_15, &(Local_15.f_206), __LIB_17__::func_74(0), 1) || __LIB_0__::func_27(Local_15.f_193, 256))
										{
											__LIB_0__::func_7(&(Local_15.f_193), 1);
											__LIB_1__::func_727(Local_15.f_144, 1);
											PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_GAVINS_FRIEND"));
											if (__LIB_16__::func_876(&(Local_15.f_205)))
											{
												Var0 = { ENTITY::GET_ENTITY_COORDS(Local_15.f_144, true, false) };
												MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
												Var0.f_2 = uVar6;
												Var0.f_2 = (1f + Var0.f_2);
												Var0.f_3 = { 0f, 0f, 0f };
												Var0.f_3.f_2 = ENTITY::GET_ENTITY_HEADING(Local_15.f_144);
												ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_15.f_205, Var0, Var0.f_3, 2);
												ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_15.f_205, "cs_gavin", Local_15.f_144, 0);
												ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_15.f_205, "Internal_loop", false, false);
												if (__LIB_17__::func_64(&(Local_15.f_142), &(Local_15.f_195)))
												{
													if (__LIB_0__::func_27(Local_15.f_195, 1) && !__LIB_0__::func_27(Local_15.f_195, 2))
													{
														__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 25);
													}
													else
													{
														Local_15.f_203 = (1 + Local_15.f_203);
														__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 26);
													}
												}
											}
										}
										else
										{
											PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_15.f_144, 1.5f);
										}
										Jump @3589; //curOff = 3529
										if (MISC::GET_GAME_TIMER() > Local_15.f_211)
										{
											__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 34);
										}
										Jump @3589; //curOff = 3555
										__LIB_18__::func_981(&Local_15, 1);
										__LIB_17__::func_86(&Local_15, &(Local_15.f_129), 37);
										Jump @3589; //curOff = 3577
										Jump @3589; //curOff = 3580
										__LIB_17__::func_88(&Local_15, &(Local_15.f_129));
									}
								}
								default:
									break;
						}
					}
				}
			}
		}
	}
}

void func_9(var uParam0)
{
	struct<2> Var0;
	if ((((__LIB_0__::func_27(uParam0->f_193, 8) && !__LIB_0__::func_27(uParam0->f_193, 64)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_144)) && !AUDIO::_0x54B187F111D9C6F8(uParam0->f_144, 1)) && uParam0->f_129 != 19)
	{
		__LIB_17__::func_101(uParam0, 1);
	}
	else
	{
		__LIB_17__::func_101(uParam0, 0);
	}
	switch (func_74(&(uParam0->f_144), &(uParam0->f_219), 15f, &(uParam0->f_240), 0f, 2, 0, "", __LIB_2__::func_340(uParam0->f_296, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */))
	{
		case 0:
			if (!__LIB_0__::func_27(uParam0->f_193, 64))
			{
				__LIB_16__::func_880();
				__LIB_16__::func_849(11, &(uParam0->f_144), &(uParam0->f_193), 16);
				__LIB_16__::func_866(Global_35, "GREET_GENERAL", -417894478, uParam0->f_144, 1, 0, 0, 1);
				__LIB_2__::func_344(&(uParam0->f_144));
				__LIB_17__::func_101(uParam0, 0);
				__LIB_2__::func_480(&(uParam0->f_240), 0, 0, 1, 0);
				__LIB_17__::func_100(uParam0);
				__LIB_2__::func_411(&(uParam0->f_240[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(uParam0->f_240[1 /*17*/]), 0, 0);
				__LIB_16__::func_827(11);
				__LIB_1__::func_581(&(uParam0->f_193), 64);
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(uParam0->f_193, 64))
			{
				__LIB_16__::func_880();
				__LIB_16__::func_849(11, &(uParam0->f_144), &(uParam0->f_193), 16);
				Var0 = { __LIB_17__::func_75(uParam0) };
				__LIB_16__::func_866(Global_35, Var0, -417894478, uParam0->f_144, 1, 0, Var0.f_1, 1);
				__LIB_2__::func_344(&(uParam0->f_144));
				__LIB_17__::func_101(uParam0, 0);
				__LIB_2__::func_480(&(uParam0->f_240), 0, 0, 1, 0);
				__LIB_17__::func_100(uParam0);
				__LIB_2__::func_411(&(uParam0->f_240[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(uParam0->f_240[1 /*17*/]), 0, 0);
				__LIB_16__::func_827(11);
				__LIB_1__::func_581(&(uParam0->f_193), 64);
			}
			break;
	}
}

void func_17(var uParam0, var uParam1)
{
	uParam0->f_127 = __LIB_16__::func_788(11);
	if (uParam0->f_127 != -1)
	{
		uParam0->f_212 = __LIB_17__::func_77(uParam0->f_127);
	}
	else
	{
		uParam0->f_212 = __LIB_17__::func_78(__LIB_16__::func_787(11));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_212))
	{
		return;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(uParam0->f_212);
	PED::_0xED9582B3DA8F02B4(1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_205))
	{
		uParam0->f_205 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_17__::func_79(), 0, __LIB_17__::func_68(0), false, true);
	}
	if (!__LIB_17__::func_37(&(uParam0->f_142), &(uParam0->f_195)))
	{
		uParam0->f_142 = __LIB_1__::func_293(11, 0, 9, __LIB_16__::func_790(11));
		if (!__LIB_0__::func_6(uParam0->f_142))
		{
		}
		return;
	}
	if (!__LIB_0__::func_27(uParam0->f_195, 1))
	{
		uParam0->f_206 = ANIMSCENE::_CREATE_ANIM_SCENE(func_101(), 0, __LIB_17__::func_74(0), false, true);
	}
	else if (__LIB_0__::func_27(uParam0->f_195, 1) && !__LIB_0__::func_27(uParam0->f_195, 2))
	{
		uParam0->f_206 = ANIMSCENE::_CREATE_ANIM_SCENE(func_102(), 0, __LIB_17__::func_74(0), false, true);
	}
	else if (__LIB_0__::func_27(uParam0->f_195, 2) && !__LIB_0__::func_27(uParam0->f_195, 4))
	{
		uParam0->f_206 = ANIMSCENE::_CREATE_ANIM_SCENE(func_104(), 0, __LIB_17__::func_74(0), false, true);
	}
	else if (__LIB_0__::func_27(uParam0->f_195, 4) && !__LIB_0__::func_27(uParam0->f_195, 8))
	{
		uParam0->f_206 = ANIMSCENE::_CREATE_ANIM_SCENE(func_106(), 0, __LIB_17__::func_74(0), false, true);
	}
	else if (__LIB_0__::func_27(uParam0->f_195, 8) && !__LIB_0__::func_27(uParam0->f_195, 16))
	{
		__LIB_16__::func_783(11, 1);
		__LIB_17__::func_86(uParam0, uParam1, 36);
	}
	__LIB_16__::func_875(&(uParam0->f_275));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_205) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_205);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_206);
		HUD::_TEXT_DATABASE_REQUEST("SPGV");
		HUD::_TEXT_DATABASE_REQUEST("SPGVNAU");
		STREAMING::REQUEST_MODEL(uParam0->f_143, false);
		__LIB_18__::func_991(uParam0);
		__LIB_2__::func_261(uParam0->f_149, "SP_Gavin1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_151, 2500607, 0, 0, -1, -1, 10);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_151, 2238463, 0, 0, -1, -1, 0);
		__LIB_18__::func_985(uParam0, 0);
		if (__LIB_0__::func_181())
		{
			__LIB_0__::func_928(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			__LIB_0__::func_928(uParam0, Global_35, "ARTHUR", 0);
		}
		if (__LIB_0__::func_6(uParam0->f_142))
		{
			if (__LIB_17__::func_95(uParam0))
			{
				__LIB_17__::func_80(uParam0);
				__LIB_17__::func_81(uParam0);
				__LIB_17__::func_82(uParam0);
				__LIB_17__::func_83(uParam0);
				uParam0->f_204 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
			}
			else
			{
				return;
			}
			if (!__LIB_1__::func_25(uParam0->f_142, 1))
			{
				__LIB_17__::func_86(uParam0, uParam1, 1);
			}
			else
			{
				__LIB_17__::func_86(uParam0, uParam1, 36);
			}
		}
	}
}

int func_74(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		__LIB_11__::func_839(&iParam8);
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
		if (__LIB_13__::func_384(*uParam0, iParam1, uParam3))
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
						return func_74(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
				if (__LIB_11__::func_844(uParam0, iParam1, fParam4, bVar6))
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
				if (__LIB_11__::func_844(uParam0, iParam1, fParam4, bVar6))
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

char* func_101()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_2@ig_2";
}

char* func_102()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_3@ig_3";
}

char* func_104()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_4@ig_4";
}

char* func_106()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_5@ig_5";
}

