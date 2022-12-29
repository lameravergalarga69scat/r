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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	struct<191> Local_36 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778800947, 677043675, -1893027926, -615159064, -208228129, 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 1065353216;
	var uLocal_235 = 1119092736;
	var uLocal_236 = 1092616192;
	var uLocal_237 = 1085276160;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = -1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 1073741824;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 2;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 570;
	var uLocal_264 = 1065353216;
	var uLocal_265 = -1082130432;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 2;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 570;
	var uLocal_281 = 1065353216;
	var uLocal_282 = -1082130432;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 2;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 2;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_36, 1);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_2(&Local_36, &iLocal_35);
		func_3(&Local_36, &iLocal_35, &uLocal_14);
		if (iLocal_35 > 2 && iLocal_35 < 81)
		{
			if (__LIB_16__::func_881(4, Local_36.f_143[0], 1, 1))
			{
				if (iLocal_35 == 83 || iLocal_35 == 92)
				{
					func_6(&Local_36, &(Local_36.f_165), func_5(23), 1, 0, 1f, 0, 0);
				}
				else
				{
					func_6(&Local_36, &(Local_36.f_165), func_5(16), 1, 0, 1f, 0, 0);
				}
			}
			else
			{
				__LIB_16__::func_879(4, 0, &(Local_36.f_143[0]), &(Local_36.f_133), &(Local_36.f_185), 0f, 20f, 1);
				func_8(&Local_36, &iLocal_35);
				func_9(&Local_36, iLocal_35);
				__LIB_16__::func_854(Local_36.f_143[0], &(Local_36.f_162), 4096, 4, 0);
				func_11(&Local_36);
				switch (iLocal_35)
				{
					case 0:
						func_12(&Local_36, &iLocal_35, &uLocal_14);
						break;
					case 1:
						if (func_13(&Local_36, &(Local_36.f_163)))
						{
							__LIB_1__::func_649(&iLocal_35, 2);
						}
						break;
					case 2:
						if (func_15(&Local_36))
						{
							iVar0 = func_16();
							__LIB_1__::func_649(&iLocal_35, iVar0);
						}
						break;
					case 3:
						func_17(&Local_36, &iLocal_35);
						break;
					case 48:
						if (func_18(&Local_36, &(Local_36.f_165), 0))
						{
							func_19(&Local_36, &iLocal_35);
						}
						break;
					case 6:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(0), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 7:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(1), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177 = (1 + Local_36.f_177);
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 8:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(2), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 9:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(3), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177 = (1 + Local_36.f_177);
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 10:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(4), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 11:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(5), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 12:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(6), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 14:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(7), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 15:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(8), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 16:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(9), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 17:
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0) && !__LIB_0__::func_27(Local_36.f_162, 2))
						{
							__LIB_1__::func_649(&iLocal_35, 50);
						}
						else if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0) && __LIB_0__::func_27(Local_36.f_162, 2)) && __LIB_0__::func_27(Local_36.f_162, 1))
						{
							if (Local_36.f_178 < 2)
							{
								if (func_6(&Local_36, &(Local_36.f_165), func_21(Local_36.f_172), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
								{
									func_22(&(Local_36.f_172));
									func_23(&Local_36);
								}
							}
							else if (func_6(&Local_36, &(Local_36.f_165), func_21(Local_36.f_172), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
							{
								func_22(&(Local_36.f_172));
								__LIB_1__::func_649(&iLocal_35, 88);
							}
						}
						else if ((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0) && __LIB_0__::func_27(Local_36.f_162, 2)) && __LIB_0__::func_27(Local_36.f_162, 1))
						{
							if (func_6(&Local_36, &(Local_36.f_165), func_21(Local_36.f_172), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
							{
								func_22(&(Local_36.f_172));
								__LIB_1__::func_649(&iLocal_35, 88);
							}
						}
						else if (Local_36.f_190 >= 3)
						{
							if (func_6(&Local_36, &(Local_36.f_165), func_21(Local_36.f_172), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
							{
								func_22(&(Local_36.f_172));
								__LIB_1__::func_649(&iLocal_35, 3);
							}
						}
						else
						{
							__LIB_1__::func_649(&iLocal_35, 3);
						}
						break;
					case 83:
						if (__LIB_0__::func_27(Local_36.f_162, 4))
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(23), 0, 0, 2f, 1, 0);
							func_24();
							__LIB_1__::func_649(&iLocal_35, 89);
						}
						else
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(23), 0, 0, 1065353216 /* Float: 1f */, 0, 0);
						}
						func_25(&Local_36);
						if (((!__LIB_0__::func_27(Local_36.f_162, 1) && __LIB_0__::func_48(Local_36.f_143[0], Global_35, 15f, 1)) && !__LIB_0__::func_27(Local_36.f_162, 4)) && !__LIB_0__::func_27(Local_36.f_162, 524288))
						{
							func_24();
							if (ANIMSCENE::_0x1F0E401031E20146(Local_36.f_165, func_5(23)))
							{
								__LIB_1__::func_649(&iLocal_35, 84);
							}
						}
						else if ((__LIB_0__::func_27(Local_36.f_162, 1) && __LIB_0__::func_48(Local_36.f_143[0], Global_35, 6f, 1)) && !__LIB_0__::func_27(Local_36.f_162, 4))
						{
							func_23(&Local_36);
						}
						break;
					case 85:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(38), 1, 0, 1f, 0, 0))
						{
							func_24();
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 86:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(35), 1, 0, 1f, 0, 0))
						{
							func_24();
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 87:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(39), 1, 0, 1f, 0, 0))
						{
							func_24();
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 84:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(25), 1, 0, 2f, 1, 0))
						{
							if (__LIB_0__::func_27(Local_36.f_162, 4))
							{
								__LIB_1__::func_649(&iLocal_35, 88);
							}
							else
							{
								func_24();
								__LIB_1__::func_649(&iLocal_35, 17);
							}
						}
						break;
					case 89:
						func_6(&Local_36, &(Local_36.f_165), func_5(28), 0, 0, 1065353216 /* Float: 1f */, 1, 1);
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Cower_Base", 1))
						{
							__LIB_1__::func_649(&iLocal_35, 81);
						}
						break;
					case 90:
						func_6(&Local_36, &(Local_36.f_165), func_5(29), 0, 0, 1065353216 /* Float: 1f */, 1, 1);
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Cower_Base", 1))
						{
							__LIB_1__::func_649(&iLocal_35, 81);
						}
						break;
					case 88:
						if (__LIB_0__::func_27(Local_36.f_162, 4) || __LIB_0__::func_27(Local_36.f_162, 524288))
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(26), 0, 0, 1f, 0, 0);
						}
						else if (__LIB_0__::func_27(Local_36.f_162, 1) && !__LIB_0__::func_27(Local_36.f_162, 8192))
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(24), 0, 0, 1065353216 /* Float: 1f */, 1, 0);
							if (!ENTITY::_IS_ENTITY_FROZEN(Local_36.f_148) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_36.f_165) >= 0.12f)
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_36.f_148, true);
							}
							if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Sitting_BASE", 1) && ANIMSCENE::_0x1F0E401031E20146(Local_36.f_165, func_5(24)))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 8192);
							}
						}
						else
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(26), 0, 0, 1f, 1, 0);
						}
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Sitting_BASE", 1))
						{
							__LIB_1__::func_649(&iLocal_35, 83);
						}
						break;
					case 81:
						func_6(&Local_36, &(Local_36.f_165), func_5(30), 0, 0, 1f, 0, 0);
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Cower_Base", 1))
						{
							__LIB_1__::func_649(&iLocal_35, 91);
						}
						break;
					case 82:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(27), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							__LIB_1__::func_649(&iLocal_35, 83);
						}
						break;
					case 18:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(10), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177 = (1 + Local_36.f_177);
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 19:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(11), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 20:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(12), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 21:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(13), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 22:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(14), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 23:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(15), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							Local_36.f_177++;
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 4:
						func_28(&Local_36, &iLocal_35);
						break;
					case 49:
						if (__LIB_0__::func_27(Local_36.f_162, 2))
						{
							__LIB_0__::func_37(&(Local_36.f_130));
							__LIB_1__::func_649(&iLocal_35, 33);
						}
						if (!__LIB_0__::func_75(&(Local_36.f_130)))
						{
							__LIB_0__::func_268(&(Local_36.f_130), 0f);
						}
						else if (__LIB_1__::func_871(&(Local_36.f_130)) > 5000 && !__LIB_0__::func_27(Local_36.f_162, 2))
						{
							if (func_18(&Local_36, &(Local_36.f_169), 1))
							{
								__LIB_0__::func_37(&(Local_36.f_130));
								func_33(&Local_36, &iLocal_35);
							}
						}
						break;
					case 24:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(0), 1, 0, 1065353216 /* Float: 1f */, 1, 0) || func_35(&(Local_36.f_143[0]), &(Local_36.f_162), &(Local_36.f_169), 1056964608 /* Float: 0.5f */))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 25:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(1), 1, 0, 1065353216 /* Float: 1f */, 1, 0) || func_35(&(Local_36.f_143[0]), &(Local_36.f_162), &(Local_36.f_169), 1056964608 /* Float: 0.5f */))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 26:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(2), 1, 0, 1065353216 /* Float: 1f */, 1, 0) || func_35(&(Local_36.f_143[0]), &(Local_36.f_162), &(Local_36.f_169), 1056964608 /* Float: 0.5f */))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 27:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(3), 1, 0, 1065353216 /* Float: 1f */, 1, 0) || func_35(&(Local_36.f_143[0]), &(Local_36.f_162), &(Local_36.f_169), 1056964608 /* Float: 0.5f */))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 29:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(4), 1, 0, 1065353216 /* Float: 1f */, 1, 0) || func_35(&(Local_36.f_143[0]), &(Local_36.f_162), &(Local_36.f_169), 1056964608 /* Float: 0.5f */))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 30:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(5), 1, 0, 1065353216 /* Float: 1f */, 1, 0) || func_35(&(Local_36.f_143[0]), &(Local_36.f_162), &(Local_36.f_169), 1056964608 /* Float: 0.5f */))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 51:
						if (func_36(&Local_36, &(Local_36.f_169), func_34(10), &(Local_36.f_165), 1, 0, 1f, 1, func_5(16), 1))
						{
							__LIB_1__::func_649(&iLocal_35, 33);
						}
						break;
					case 33:
						if (__LIB_0__::func_27(Local_36.f_162, 2))
						{
							if (func_37(&Local_36))
							{
								if (func_6(&Local_36, &(Local_36.f_169), func_34(12), 0, 1, 1065353216 /* Float: 1f */, 1, 0) && __LIB_0__::func_27(Local_36.f_162, 32768))
								{
									func_38(&Local_36, 0);
									if (Local_36.f_186)
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 256, false);
										Local_36.f_186 = 0;
									}
									func_39(&Local_36, 1, 1);
									__LIB_1__::func_649(&iLocal_35, 35);
								}
								if (!__LIB_0__::func_27(Local_36.f_162, 32768))
								{
									if (ANIMSCENE::_0x1F0E401031E20146(Local_36.f_169, func_34(12)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_36.f_169) >= 0.3f)
									{
										__LIB_1__::func_432(100, 0, 0, 1, 1);
										__LIB_1__::func_581(&(Local_36.f_162), 32768);
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 0, 1, 1f, 1, 0))
							{
								__LIB_1__::func_649(&iLocal_35, 34);
							}
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 0, 1, 1f, 1, 0))
							{
								__LIB_1__::func_649(&iLocal_35, 36);
							}
						}
						break;
					case 35:
						__LIB_16__::func_832(0);
						if (!__LIB_0__::func_181())
						{
							if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_169), 1, 0, 1f, 0, func_34(9), 0))
							{
								__LIB_1__::func_649(&iLocal_35, 5);
							}
						}
						else if (!__LIB_1__::func_185(77))
						{
							if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_169), 1, 0, 1f, 0, "", 0))
							{
								__LIB_1__::func_649(&iLocal_35, 69);
							}
						}
						else if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_169), 1, 0, 1f, 0, "", 0))
						{
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 34:
						if (func_36(&Local_36, &(Local_36.f_165), func_5(16), &(Local_36.f_169), 0, 1, 1f, 0, func_34(9), 1))
						{
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 50:
						if (func_36(&Local_36, &(Local_36.f_169), func_34(9), &(Local_36.f_165), 1, 0, 1f, 1, func_5(16), 1))
						{
							__LIB_1__::func_649(&iLocal_35, 36);
						}
						break;
					case 36:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(11), 1, 0, 1f, 1, 0))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 37:
						if (func_36(&Local_36, &(Local_36.f_165), func_5(16), &(Local_36.f_169), 0, 1, 1f, 0, func_34(9), 1))
						{
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 31:
						if (__LIB_0__::func_27(Local_36.f_162, 2))
						{
							__LIB_1__::func_649(&iLocal_35, 33);
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							__LIB_1__::func_649(&iLocal_35, 33);
						}
						else
						{
							__LIB_1__::func_649(&iLocal_35, 36);
						}
						break;
					case 38:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(6), 1, 0, 1065353216 /* Float: 1f */, 1, 0) || func_35(&(Local_36.f_143[0]), &(Local_36.f_162), &(Local_36.f_169), 1056964608 /* Float: 0.5f */))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 40:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(7), 1, 0, 1065353216 /* Float: 1f */, 1, 0) || func_35(&(Local_36.f_143[0]), &(Local_36.f_162), &(Local_36.f_169), 1056964608 /* Float: 0.5f */))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 43:
						if (__LIB_0__::func_27(Local_36.f_162, 2))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 1, 0, 1f, 1, 0))
							{
								__LIB_1__::func_649(&iLocal_35, 45);
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 1, 0, 1f, 1, 0))
							{
								__LIB_1__::func_649(&iLocal_35, 44);
							}
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 1, 0, 1f, 1, 0))
							{
								__LIB_1__::func_649(&iLocal_35, 46);
							}
						}
						break;
					case 45:
						if (!__LIB_0__::func_181())
						{
							if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_169), 0, 1, 1f, 0, func_34(9), 0))
							{
								__LIB_1__::func_649(&iLocal_35, 5);
							}
						}
						else if (!__LIB_1__::func_185(77))
						{
							if (func_36(&Local_36, &(Local_36.f_171), __LIB_16__::func_874(), &(Local_36.f_165), 0, 1, 1f, 0, "", 0))
							{
								__LIB_1__::func_649(&iLocal_35, 5);
							}
						}
						else if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_165), 0, 1, 1f, 0, "", 0))
						{
							__LIB_1__::func_649(&iLocal_35, 5);
						}
						break;
					case 44:
						if (func_36(&Local_36, &(Local_36.f_165), func_5(16), &(Local_36.f_169), 0, 1, 1f, 0, 0, 1))
						{
							__LIB_1__::func_649(&iLocal_35, 3);
						}
						break;
					case 46:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(11), 1, 0, 1f, 1, 0))
						{
							__LIB_1__::func_649(&iLocal_35, 4);
						}
						break;
					case 47:
						if (func_36(&Local_36, &(Local_36.f_165), func_5(16), &(Local_36.f_169), 0, 1, 1f, 0, 0, 1))
						{
							__LIB_1__::func_649(&iLocal_35, 17);
						}
						break;
					case 41:
						if (__LIB_0__::func_27(Local_36.f_162, 2))
						{
							__LIB_1__::func_649(&iLocal_35, 43);
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							__LIB_1__::func_649(&iLocal_35, 43);
						}
						else
						{
							__LIB_1__::func_649(&iLocal_35, 46);
						}
						break;
					case 5:
						func_46(&Local_36, &iLocal_35);
						break;
					case 52:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(0), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 1);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 53:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(2), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 4);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 54:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(3), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 8);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 55:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(4), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 16);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 56:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(5), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 32);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 57:
						if (func_48(&Local_36, 64, func_47(0)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 64);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 58:
						if (func_48(&Local_36, 128, func_47(1)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 128);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 59:
						if (func_48(&Local_36, 256, func_47(2)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 256);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 60:
						if (func_48(&Local_36, 512, func_47(3)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 512);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 61:
						if (func_48(&Local_36, 1024, func_47(4)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 1024);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 62:
						if (func_48(&Local_36, 2048, func_47(5)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 2048);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 63:
						if (func_48(&Local_36, 4096, func_47(6)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 4096);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 64:
						if (func_48(&Local_36, 8192, func_47(7)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 8192);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 65:
						if (func_48(&Local_36, 2, func_47(8)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 2);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 74:
						if (func_48(&Local_36, 2097152, func_47(16)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 2097152);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 66:
						if (func_48(&Local_36, 16384, func_47(9)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							if (!__LIB_16__::func_864(4, 16777216))
							{
								__LIB_16__::func_865(4, 16777216, 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 16384);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 67:
						if (func_48(&Local_36, 32768, func_47(10)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 32768);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 68:
						if (func_48(&Local_36, 65536, func_47(11)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 65536);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 69:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(26), 0, 1, 1065353216 /* Float: 1f */, 1, 0))
						{
							__LIB_1__::func_649(&iLocal_35, 5);
						}
						break;
					case 71:
						if (func_48(&Local_36, 262144, func_47(13)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 262144);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 72:
						if (func_48(&Local_36, 524288, func_47(14)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 524288);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 73:
						if (func_48(&Local_36, 1048576, func_47(15)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 1048576);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 76:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(22), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 4194304);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 77:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(23), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 8388608);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 78:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(24), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 16777216);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 79:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(25), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 33554432);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 70:
						if (func_48(&Local_36, 131072, func_47(12)))
						{
							if (!__LIB_0__::func_27(Local_36.f_162, 1))
							{
								__LIB_1__::func_581(&(Local_36.f_162), 1);
							}
							__LIB_1__::func_581(&(Local_36.f_163), 131072);
							__LIB_1__::func_649(&iLocal_35, 69);
						}
						break;
					case 91:
						if (!ENTITY::IS_ENTITY_DEAD(Local_36.f_143[0]) && FIRE::IS_ENTITY_ON_FIRE(Local_36.f_143[0]))
						{
							__LIB_1__::func_864(Local_36.f_143[0], 0, 0);
						}
						__LIB_1__::func_649(&iLocal_35, 93);
						break;
					case 92:
						break;
					case 93:
						break;
					default:
						break;
				}
				func_52(&Local_36, &iLocal_35);
			}
		}
	}
}

void func_1(var uParam0, bool bParam1)
{
	int iVar0;
	__LIB_16__::func_840(4);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
	__LIB_2__::func_480(&(uParam0->f_224), 0, 1, 1, 0);
	__LIB_2__::func_593(&(uParam0->f_203), &(uParam0->f_224));
	__LIB_16__::func_832(0);
	func_56(uParam0);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		uParam0->f_186 = 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_145))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_145);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_146))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_146);
	}
	__LIB_16__::func_839(&uLocal_14);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_165) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_165, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_165, "p_cuptin01x", uParam0->f_147);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_165, "p_wedgestick02x", uParam0->f_148);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_147, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_148, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_169) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_169, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_169, "p_cuptin01x", uParam0->f_147);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_169, "p_wedgestick02x", uParam0->f_148);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_147, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_148, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_171) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_171, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_171, "p_cuptin01x", uParam0->f_147);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_171, "p_wedgestick02x", uParam0->f_148);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_147, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_148, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (__LIB_0__::func_6(uParam0->f_136) && (__LIB_0__::func_702(uParam0->f_136) || __LIB_1__::func_44(uParam0->f_136)))
	{
		__LIB_1__::func_559(uParam0->f_136, 0, 2);
	}
	if (__LIB_1__::func_565(&(uParam0->f_192)))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_192), 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_147));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_148))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_148));
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_149[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_149[iVar0]));
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_165))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_165);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_154));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_165))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_165);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_171))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_171);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_155))
	{
		__LIB_1__::func_544(uParam0->f_155);
		VOLUME::_DELETE_VOLUME(uParam0->f_155);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_156))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_156);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_158))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_158);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_159);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_157))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_157);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_157);
		VOLUME::_DELETE_VOLUME(uParam0->f_157);
	}
	func_64(uParam0);
	__LIB_16__::func_803(&(uParam0->f_143[0]), &(uParam0->f_176), joaat("EVENT_SHOCKING_BEAT_INTERESTING"), 20f, 1);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_143[0], 0f);
	}
	if (bParam1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[4 /*638*/][__LIB_11__::func_133(4) /*48*/].f_47))
		{
			VOLUME::_DELETE_VOLUME(Global_1396257[4 /*638*/][__LIB_11__::func_133(4) /*48*/].f_47);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 153, false);
			PED::DELETE_PED(&(uParam0->f_143[0]));
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	if (__LIB_0__::func_27(uParam0->f_162, 4))
	{
		func_67(uParam0);
	}
	if (*iParam1 <= 2 || *iParam1 >= 91)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_143[0]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]) && PED::IS_PED_RAGDOLL(uParam0->f_143[0]))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		__LIB_1__::func_864(uParam0->f_143[0], 0, 0);
		Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
		__LIB_2__::func_344(&(uParam0->f_143[0]));
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
		ENTITY::DETACH_ENTITY(uParam0->f_147, true, true);
		func_39(uParam0, 1, 1);
		func_1(uParam0, 0);
		__LIB_1__::func_649(iParam1, 91);
		return;
	}
	if (!__LIB_0__::func_272(uParam0->f_143[0], 0))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
		__LIB_2__::func_344(&(uParam0->f_143[0]));
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
		ENTITY::DETACH_ENTITY(uParam0->f_147, true, true);
		func_39(uParam0, 1, 1);
		func_1(uParam0, 0);
		__LIB_1__::func_649(iParam1, 91);
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_143[0], true))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
		__LIB_2__::func_344(&(uParam0->f_143[0]));
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
		ENTITY::DETACH_ENTITY(uParam0->f_147, true, true);
		func_39(uParam0, 1, 1);
		func_1(uParam0, 0);
		__LIB_1__::func_649(iParam1, 91);
		return;
	}
	if (func_71(uParam0, iParam1))
	{
		return;
	}
	if (func_72(uParam0))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		__LIB_16__::func_789(4);
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_143[0]))
		{
			__LIB_2__::func_504(uParam0->f_143[0], 0);
		}
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4 + 1);
		iVar1 = iVar0;
		sVar2 = func_75(iVar1);
		iVar3 = func_76(iVar1);
		__LIB_16__::func_866(uParam0->f_143[0], sVar2, 291934926, Global_35, 1, "CASSIDY", iVar3, 1);
		func_39(uParam0, 1, 1);
		if (!__LIB_0__::func_27(uParam0->f_162, 4))
		{
			__LIB_1__::func_581(&(uParam0->f_162), 4);
		}
	}
}

void func_3(var uParam0, int iParam1, var uParam2)
{
	if (!__LIB_0__::func_27(uParam0->f_162, 524288))
	{
		if (func_78(4, __LIB_11__::func_133(4), uParam2, uParam0->f_143[0]))
		{
			if (*iParam1 >= 6 && *iParam1 <= 23)
			{
				__LIB_1__::func_581(&(uParam0->f_162), 524288);
				__LIB_1__::func_649(iParam1, 88);
			}
			else if (*iParam1 >= 24 && *iParam1 <= 80)
			{
			}
		}
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		__LIB_1__::func_649(iParam1, 88);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[4 /*638*/][__LIB_11__::func_133(4) /*48*/].f_47))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[4 /*638*/][__LIB_11__::func_133(4) /*48*/].f_47, true, 0))
		{
			func_1(uParam0, 1);
			__LIB_1__::func_649(iParam1, 93);
		}
	}
	else
	{
		func_1(uParam0, 1);
		__LIB_1__::func_649(iParam1, 93);
	}
}

char[] func_5(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_PBDMC_IG1_P1_1xHELP";
			break;
		case 1:
			sVar0 = "pbl_PBDMC_IG1_P1_3xHELP";
			break;
		case 2:
			sVar0 = "pbl_PBDMC_IG1_P1_CHARITY";
			break;
		case 3:
			sVar0 = "pbl_PBDMC_IG1_P1_PENNY";
			break;
		case 4:
			sVar0 = "pbl_PBDMC_IG1_P1_COUGH";
			break;
		case 5:
			sVar0 = "pbl_PDBMC_IG1_P1_GIVE";
			break;
		case 6:
			sVar0 = "pbl_PDBMC_IG1_P1_HELP_ME";
			break;
		case 7:
			sVar0 = "pbl_PDBMC_IG1_P1_HELP_ME_PLEASE";
			break;
		case 8:
			sVar0 = "pbl_PDBMC_IG1_P1_KINDNESS";
			break;
		case 9:
			sVar0 = "pbl_PDBMC_IG1_P1_YOUR_FORTUNE";
			break;
		case 10:
			sVar0 = "pbl_PDBMC_IG2_P1_BLIND_OLD_FOOL";
			break;
		case 11:
			sVar0 = "pbl_PDBMC_IG2_P1_I_TELL_THEE";
			break;
		case 12:
			sVar0 = "pbl_PDBMC_IG2_P1_OLD_BLIND_MAN";
			break;
		case 13:
			sVar0 = "pbl_PDBMC_IG2_P1_SEEK_REDEMPTION";
			break;
		case 14:
			sVar0 = "pbl_PDBMC_IG2_P1_SEEK_SALVATION";
			break;
		case 15:
			sVar0 = "pbl_PDBMC_IG2_P1_THEE_SHALL_SEE";
			break;
		case 16:
			sVar0 = "pbl_base_reset";
			break;
		case 23:
			sVar0 = "pbl_Sitting_BASE";
			break;
		case 24:
			sVar0 = "pbl_Count_Money";
			break;
		case 25:
			sVar0 = "pbl_Sit_to_Stand";
			break;
		case 26:
			sVar0 = "pbl_Stand_to_Sit";
			break;
		case 27:
			sVar0 = "pbl_Cower_to_Sitting";
			break;
		case 28:
			sVar0 = "pbl_Sit_to_Cower";
			break;
		case 29:
			sVar0 = "pbl_Stand_To_Cower";
			break;
		case 30:
			sVar0 = "pbl_Cower_Base";
			break;
		case 31:
			sVar0 = "pbl_BackLeft_Enter";
			break;
		case 32:
			sVar0 = "pbl_BackRight_Enter";
			break;
		case 33:
			sVar0 = "pbl_Walk_Enter_Right_Slow";
			break;
		case 34:
			sVar0 = "pbl_Walk_Enter_Right_Med";
			break;
		case 35:
			sVar0 = "pbl_Walk_Enter_Right_Fast";
			break;
		case 36:
			sVar0 = "pbl_Walk_Enter_Left_Slow";
			break;
		case 37:
			sVar0 = "pbl_Walk_Enter_Left_Med";
			break;
		case 38:
			sVar0 = "pbl_Walk_Enter_Left_Fast";
			break;
		case 39:
			sVar0 = "pbl_Back_Enter";
			break;
	}
	return sVar0;
}

bool func_6(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (bParam7)
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
			if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
				return false;
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
				ANIMSCENE::SET_ANIM_SCENE_RATE(*uParam1, fParam5);
				return false;
			}
		}
		else if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
		{
			if (((!bParam7 && !ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2)) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
			}
			if (bParam6)
			{
				if (!__LIB_16__::func_878(&(uParam0->f_143[0]), 50f, 0))
				{
					return false;
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -973995573))
			{
				__LIB_4__::func_268(12, 0, 0, "", uParam0->f_143[0], 0, 1065353216 /* Float: 1f */, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -1993324115))
			{
				__LIB_16__::func_866(uParam0->f_143[0], "GREET_GENERAL_STRANGER", 291934926, Global_35, 1, "CASSIDY", 0, 1);
			}
			if ((!bParam7 && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2)) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
				ANIMSCENE::SET_ANIM_SCENE_RATE(*uParam1, fParam5);
				return false;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base_end", 1) && !bParam4)
				{
					if (__LIB_16__::func_863(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_ARMIN_base_end", 1) && !bParam4)
				{
					if (__LIB_16__::func_863(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base", 1) && bParam4)
				{
					if (__LIB_16__::func_863(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_ARMIN_base", 1) && bParam4)
				{
					if (__LIB_16__::func_863(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
				else if (bParam4 && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -1527527524))
				{
					if (__LIB_16__::func_863(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_156))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
	}
	if (__LIB_0__::func_27(uParam0->f_162, 2) || __LIB_0__::func_27(uParam0->f_162, 4))
	{
		__LIB_2__::func_451(&(uParam0->f_203), 0);
		__LIB_2__::func_411(&(uParam0->f_224[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(uParam0->f_224[1 /*17*/]), 0, 0);
		uParam0->f_259 = 3;
	}
	else
	{
		if (!__LIB_0__::func_27(uParam0->f_162, 128))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_38(uParam0, 1);
				__LIB_2__::func_411(&(uParam0->f_224[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(uParam0->f_224[1 /*17*/]), 0, 0);
				uParam0->f_259 = 3;
				__LIB_1__::func_581(&(uParam0->f_162), 128);
			}
			else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) || PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_2__::func_411(&(uParam0->f_224[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(uParam0->f_224[1 /*17*/]), 0, 0);
				uParam0->f_259 = 3;
			}
		}
		else if ((((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) || PED::IS_PED_ON_MOUNT(Global_35)) || __LIB_16__::func_871()) || __LIB_17__::func_155(&(uParam0->f_143[0]), &(uParam0->f_145), 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) || func_92(&(uParam0->f_143[0]), &(uParam0->f_160), &(uParam0->f_146), 1.75f, 2.25f, 2502655))
		{
			if (uParam0->f_259 != 3)
			{
				__LIB_2__::func_451(&(uParam0->f_203), 0);
				__LIB_2__::func_411(&(uParam0->f_224[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(uParam0->f_224[1 /*17*/]), 0, 0);
				uParam0->f_259 = 3;
			}
		}
		else if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_169, false) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_143[0])) || *iParam1 != 49)
		{
			if (uParam0->f_259 != 3)
			{
				__LIB_2__::func_451(&(uParam0->f_203), 0);
				func_38(uParam0, 1);
				__LIB_2__::func_411(&(uParam0->f_224[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(uParam0->f_224[1 /*17*/]), 0, 0);
				uParam0->f_259 = 3;
			}
		}
		else if (uParam0->f_259 != 2)
		{
			__LIB_2__::func_451(&(uParam0->f_203), 0);
			func_38(uParam0, 1);
			__LIB_2__::func_411(&(uParam0->f_224[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(uParam0->f_224[1 /*17*/]), 0, 0);
			uParam0->f_259 = 2;
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0))
		{
			if (__LIB_0__::func_492(1) < 100 || PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (uParam0->f_259 != 3)
				{
					__LIB_2__::func_451(&(uParam0->f_203), 0);
					__LIB_2__::func_411(&(uParam0->f_224[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(uParam0->f_224[1 /*17*/]), 0, 0);
					uParam0->f_259 = 3;
				}
			}
		}
	}
	switch (func_95(&(uParam0->f_143[0]), &(uParam0->f_203), 18f, &(uParam0->f_224), 0f, 2, 0, "", __LIB_2__::func_340(uParam0->f_259, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */))
	{
		case 0:
			if (!__LIB_0__::func_27(uParam0->f_162, 2))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
				__LIB_2__::func_190(uParam0->f_143[0], iVar0);
				__LIB_16__::func_827(4);
				__LIB_16__::func_849(4, &(uParam0->f_143[0]), &(uParam0->f_162), 256);
				__LIB_16__::func_880();
				__LIB_16__::func_832(1);
				func_100(uParam0);
				func_102(4, __LIB_0__::func_113());
				__LIB_1__::func_581(&(uParam0->f_162), 2);
			}
			break;
	}
}

void func_9(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_162, 512) && uParam0->f_190 >= 4)
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_143[0]))
	{
		if (__LIB_16__::func_867(&(uParam0->f_143[0]), &(uParam0->f_184), &(uParam0->f_187), &(uParam0->f_190), 4, 0, 4000, 0))
		{
			__LIB_1__::func_581(&(uParam0->f_162), 512);
			return;
		}
	}
	if (iParam1 >= 6 && iParam1 <= 16)
	{
		if (__LIB_16__::func_867(&(uParam0->f_143[0]), &(uParam0->f_184), &(uParam0->f_187), &(uParam0->f_190), 4, 0, 4000, 0))
		{
			__LIB_1__::func_581(&(uParam0->f_162), 512);
			return;
		}
	}
	else if (iParam1 >= 18 && iParam1 <= 23)
	{
		if (__LIB_16__::func_867(&(uParam0->f_143[0]), &(uParam0->f_184), &(uParam0->f_187), &(uParam0->f_190), 4, 0, 4000, 0))
		{
			__LIB_1__::func_581(&(uParam0->f_162), 512);
			return;
		}
	}
}

void func_11(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_143[0]))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_143[0], 0, 1);
}

void func_12(var uParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	PED::_0xED9582B3DA8F02B4(1);
	uParam0->f_164 = (16 - 1);
	uParam0->f_168 = 0;
	uParam0->f_170 = (26 - 1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_165))
	{
		uParam0->f_165 = ANIMSCENE::_CREATE_ANIM_SCENE(func_108(), 32, func_5(16), false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_169))
	{
		uParam0->f_169 = ANIMSCENE::_CREATE_ANIM_SCENE(func_109(), 32, func_34(9), false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_171))
	{
		uParam0->f_171 = ANIMSCENE::_CREATE_ANIM_SCENE(func_110(), 32, func_43(0), false, true);
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_165) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_169)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_171))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_165);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_169);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_171);
		HUD::_TEXT_DATABASE_REQUEST("SPBC");
		HUD::_TEXT_DATABASE_REQUEST("SPBMCAU");
		HUD::_TEXT_DATABASE_REQUEST("SPDEF");
		STREAMING::REQUEST_MODEL(uParam0->f_137, false);
		STREAMING::REQUEST_MODEL(uParam0->f_138, false);
		STREAMING::REQUEST_MODEL(uParam0->f_139, false);
		STREAMING::REQUEST_MODEL(uParam0->f_140, false);
		STREAMING::REQUEST_MODEL(uParam0->f_141, false);
		func_111(uParam0);
		__LIB_2__::func_261(uParam0->f_155, "SP_BlindManCassidy1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_157, 2238463, 0, 0, -1, -1, 10);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_157, 2238463, 0, 0, -1, -1, 0);
		Var0 = { func_113() };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_165, Var0, Var0.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_169, Var0, Var0.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_171, Var0, Var0.f_3, 2);
		uParam0->f_136 = __LIB_1__::func_293(4, 0, 9, __LIB_16__::func_790(4));
		if (!__LIB_0__::func_6(uParam0->f_136))
		{
		}
		if (__LIB_0__::func_181())
		{
			__LIB_0__::func_928(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			__LIB_0__::func_928(uParam0, Global_35, "ARTHUR", 0);
		}
		__LIB_16__::func_875(uParam2);
		__LIB_1__::func_403(&(uParam0->f_98), 1);
		__LIB_1__::func_399(&(uParam0->f_98), 0);
		__LIB_1__::func_397(&(uParam0->f_98), 0);
		__LIB_1__::func_402(&(uParam0->f_98), 0);
		__LIB_1__::func_404(&(uParam0->f_98), 1);
		__LIB_1__::func_405(&(uParam0->f_98), 0);
		__LIB_1__::func_407(&(uParam0->f_98), 0);
		__LIB_1__::func_406(&(uParam0->f_98), 0);
		__LIB_2__::func_619(&(uParam0->f_98), 0);
		__LIB_1__::func_398(&(uParam0->f_98), 1);
		__LIB_1__::func_401(&(uParam0->f_98), 1);
		__LIB_2__::func_830(&(uParam0->f_98), 1);
		__LIB_2__::func_828(&(uParam0->f_98), 1);
		__LIB_1__::func_413(&(uParam0->f_98), 1);
		__LIB_2__::func_829(&(uParam0->f_98), 1);
		__LIB_2__::func_956(&(uParam0->f_98), 1);
		__LIB_10__::func_590(&(uParam0->f_98), 1);
		__LIB_1__::func_393(&(uParam0->f_98), 1);
		__LIB_8__::func_731(&(uParam0->f_98), 1);
		if (__LIB_0__::func_6(uParam0->f_136))
		{
			if (!__LIB_1__::func_25(uParam0->f_136, 1))
			{
				__LIB_1__::func_649(iParam1, 1);
			}
			else
			{
				__LIB_1__::func_649(iParam1, 92);
			}
		}
	}
}

bool func_13(var uParam0, var uParam1)
{
	if ((((((((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_165, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_169, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_171, true, false)) && HUD::_TEXT_DATABASE_HAS_LOADED("SPBC")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPBMCAU")) && STREAMING::HAS_MODEL_LOADED(uParam0->f_137)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_138)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_139)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_140)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_141)) && PED::_0x5C16855277819BBF() == 1)
	{
		if (__LIB_17__::func_37(&(uParam0->f_136), uParam1))
		{
			return true;
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_165, true, false))
	{
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_169, true, false))
	{
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_171, true, false))
	{
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPBC"))
	{
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPBMCAU"))
	{
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPDEF"))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_137))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_138))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_139))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_141))
	{
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
	}
	return false;
}

bool func_15(var uParam0)
{
	struct<4> Var0;
	vector3 vVar4;
	vector3 vVar8;
	Var0 = { func_139(0) };
	vVar4 = { func_139(2) };
	vVar8 = { func_139(1) };
	if (((__LIB_16__::func_954(&(uParam0->f_143[0]), uParam0->f_137, Var0, Var0.f_3, 1, 1, 1) && __LIB_17__::func_106(&(uParam0->f_147), uParam0->f_138, vVar8)) && __LIB_17__::func_106(&(uParam0->f_148), uParam0->f_139, vVar4)) && __LIB_17__::func_106(&(uParam0->f_154), uParam0->f_141, vVar8.x, vVar8.y, (vVar8.z - 1f)))
	{
		if (__LIB_0__::func_272(uParam0->f_143[0], 0))
		{
			__LIB_0__::func_862(uParam0->f_143[0], func_142(Var0));
			func_144(uParam0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_143[0], "special_ped_group", 0f);
			PED::ADD_RELATIONSHIP_GROUP("blind_man_cassidy", &(uParam0->f_202));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_143[0], uParam0->f_202);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, uParam0->f_202, joaat("REL_COP"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_143[0], true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 317, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 344, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 26, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 448, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 153, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_143[0], 524369);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_143[0], true, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 44, true);
			__LIB_0__::func_928(uParam0, uParam0->f_143[0], "CASSIDY", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_143[0], Var0, Var0.f_3, true, false, true);
			if (__LIB_0__::func_181())
			{
				__LIB_0__::func_928(uParam0, Global_35, "JOHN", 0);
			}
			else
			{
				__LIB_0__::func_928(uParam0, Global_35, "ARTHUR", 0);
			}
			__LIB_2__::func_279(uParam0->f_143[0], 1);
			PED::_0x5BCF0B79D4F5DBA3(uParam0->f_143[0], 5f);
			PED::_0x2E5B5D1F1453E08E(uParam0->f_143[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "cs_cassidy", uParam0->f_143[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_cuptin01x", uParam0->f_147, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_wedgestick02x", uParam0->f_148, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x", uParam0->f_149[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x^1", uParam0->f_149[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x^2", uParam0->f_149[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x^3", uParam0->f_149[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coinStack02", uParam0->f_154, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "cs_cassidy", uParam0->f_143[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_cuptin01x", uParam0->f_147, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_wedgestick02x", uParam0->f_148, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x", uParam0->f_149[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x^1", uParam0->f_149[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x^2", uParam0->f_149[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x^3", uParam0->f_149[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "player_zero", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coinStack02", uParam0->f_154, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "cs_cassidy", uParam0->f_143[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_cuptin01x", uParam0->f_147, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x", uParam0->f_149[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x^1", uParam0->f_149[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x^2", uParam0->f_149[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x^3", uParam0->f_149[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_wedgestick02x", uParam0->f_148, 0);
			__LIB_16__::func_806(&(uParam0->f_143[0]), &(uParam0->f_176), joaat("EVENT_SHOCKING_BEAT_INTERESTING"), 20f, 3600f);
			func_38(uParam0, 0);
			__LIB_16__::func_792(uParam0->f_143[0], 4);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uParam0->f_143[0], "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "SPID_BLIND_MAN_CASSIDY");
			PED::_0x7C00CFC48A782DC0(uParam0->f_158, uParam0->f_143[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			PED::_0x4FD80C3DD84B817B(uParam0->f_143[0]);
			PED::_0x58F7DB5BD8FA2288(uParam0->f_143[0]);
			if (!__LIB_1__::func_565(&(uParam0->f_192)))
			{
				Var0 = { func_139(3) };
				uParam0->f_192 = GRAPHICS::_0xFA50F79257745E74(Var0, Var0.f_3, 1, -1, 0);
			}
			PED::_0x7C00CFC48A782DC0(uParam0->f_159, uParam0->f_143[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_159, 0);
			VOLUME::_0xBE551C2CC421185D(uParam0->f_159, 1);
			return true;
		}
	}
	return false;
}

int func_16()
{
	int iVar0;
	switch (__LIB_1__::func_898())
	{
		case 3:
			iVar0 = 86;
			break;
		case 9:
			iVar0 = 86;
			break;
		case 10:
			iVar0 = 85;
			break;
		case 13:
			iVar0 = 83;
			break;
		case 4:
			iVar0 = 86;
			break;
	}
	return iVar0;
}

void func_17(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_162, 4))
	{
		__LIB_1__::func_649(iParam1, 90);
	}
	else if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) && !__LIB_0__::func_27(uParam0->f_162, 2)) && !__LIB_0__::func_27(uParam0->f_162, 1))
	{
		__LIB_1__::func_649(iParam1, 50);
	}
	else if (__LIB_0__::func_27(uParam0->f_162, 2) && !__LIB_0__::func_27(uParam0->f_162, 1))
	{
		__LIB_1__::func_649(iParam1, 51);
	}
	else
	{
		__LIB_1__::func_649(iParam1, 48);
	}
}

bool func_18(var uParam0, var uParam1, bool bParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
		{
			if ((((ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -1527527524) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_ARMIN_base_end", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_ARMIN_base", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base_end", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base", 1))
			{
				if (bParam2)
				{
					return true;
				}
				else if (!__LIB_0__::func_75(&(uParam0->f_130)))
				{
					uParam0->f_161 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(1, 2));
					__LIB_0__::func_268(&(uParam0->f_130), 0f);
				}
				else if (__LIB_0__::func_265(&(uParam0->f_130)) > uParam0->f_161)
				{
					__LIB_0__::func_37(&(uParam0->f_130));
					return true;
				}
			}
		}
	}
	return false;
}

void func_19(var uParam0, int iParam1)
{
	if (uParam0->f_173 == -1)
	{
		uParam0->f_173 = __LIB_9__::func_844(0, (16 - 1), uParam0->f_164);
	}
	uParam0->f_164 = uParam0->f_173;
	switch (uParam0->f_173)
	{
		case 0:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 6);
			break;
		case 1:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 7);
			break;
		case 2:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 8);
			break;
		case 3:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 9);
			break;
		case 4:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 10);
			break;
		case 5:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 11);
			break;
		case 6:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 12);
			break;
		case 7:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 14);
			break;
		case 8:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 15);
			break;
		case 9:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 16);
			break;
		case 10:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 18);
			break;
		case 11:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 19);
			break;
		case 12:
			uParam0->f_173++;
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CASSIDY"));
			__LIB_1__::func_649(iParam1, 20);
			break;
		case 13:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 21);
			break;
		case 14:
			uParam0->f_173++;
			__LIB_1__::func_649(iParam1, 22);
			break;
		case 15:
			uParam0->f_173 = -1;
			__LIB_1__::func_649(iParam1, 23);
			break;
		case 16:
			__LIB_1__::func_649(iParam1, 17);
			break;
		default:
			uParam0->f_173 = -1;
			break;
	}
}

char[] func_21(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_IDLE_A";
			break;
		case 1:
			sVar0 = "pbl_IDLE_B";
			break;
		case 2:
			sVar0 = "pbl_IDLE_C";
			break;
		case 3:
			sVar0 = "pbl_IDLE_D";
			break;
		case 4:
			sVar0 = "pbl_IDLE_E";
			break;
		case 5:
			sVar0 = "pbl_IDLE_F";
			break;
		case 6:
			sVar0 = "pbl_Idle_G";
			break;
		case 7:
			sVar0 = "pbl_Idle_H";
			break;
		case 8:
			sVar0 = "pbl_Idle_I";
			break;
		default:
			sVar0 = "pbl_IDLE_A";
			break;
	}
	return sVar0;
}

void func_22(var uParam0)
{
	*uParam0++;
	if (*uParam0 > 5)
	{
		*uParam0 = 0;
	}
}

void func_23(var uParam0)
{
	if (uParam0->f_178 >= 5)
	{
		return;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_130)))
	{
		uParam0->f_161 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(7, 10));
		__LIB_0__::func_268(&(uParam0->f_130), 0f);
	}
	else if (__LIB_0__::func_265(&(uParam0->f_130)) > uParam0->f_161)
	{
		if (uParam0->f_178 < 3)
		{
			__LIB_16__::func_866(uParam0->f_143[0], "PLAYER_STILL_HANGING", -417894478, Global_35, 0, "CASSIDY", 0, 1);
		}
		else
		{
			__LIB_16__::func_866(uParam0->f_143[0], "IGNORING_YOU", -417894478, Global_35, 0, "CASSIDY", 0, 1);
		}
		__LIB_0__::func_268(&(uParam0->f_130), 0f);
		__LIB_0__::func_37(&(uParam0->f_130));
		uParam0->f_178++;
	}
}

void func_24()
{
	AUDIO::_0x36559148B78853B3(0, 1, 0);
}

void func_25(var uParam0)
{
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		return;
	}
	if (__LIB_0__::func_27(uParam0->f_162, 1))
	{
		return;
	}
	if (__LIB_0__::func_27(uParam0->f_162, 524288))
	{
		return;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_130)))
	{
		uParam0->f_161 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(1, 2));
		__LIB_0__::func_268(&(uParam0->f_130), 0f);
		return;
	}
	else if (__LIB_0__::func_265(&(uParam0->f_130)) > uParam0->f_161 && !AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		__LIB_1__::func_104(uParam0, func_151(func_150(uParam0->f_173)), 0, -1, 0, 0);
		uParam0->f_173++;
		__LIB_0__::func_37(&(uParam0->f_130));
		return;
	}
}

void func_28(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_162, 4))
	{
		__LIB_1__::func_649(iParam1, 90);
	}
	else if (__LIB_0__::func_27(uParam0->f_162, 2))
	{
		__LIB_1__::func_649(iParam1, 51);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0))
	{
		__LIB_1__::func_649(iParam1, 51);
	}
	else
	{
		__LIB_1__::func_649(iParam1, 49);
	}
}

void func_33(var uParam0, int iParam1)
{
	switch (uParam0->f_168)
	{
		case 0:
			uParam0->f_168++;
			__LIB_1__::func_649(iParam1, 24);
			break;
		case 1:
			uParam0->f_168++;
			__LIB_1__::func_649(iParam1, 25);
			break;
		case 2:
			uParam0->f_168++;
			__LIB_1__::func_649(iParam1, 26);
			break;
		case 3:
			uParam0->f_168++;
			__LIB_1__::func_649(iParam1, 27);
			break;
		case 4:
			uParam0->f_168++;
			__LIB_1__::func_649(iParam1, 29);
			break;
		case 5:
			uParam0->f_168++;
			__LIB_1__::func_649(iParam1, 30);
			break;
		case 6:
			uParam0->f_168++;
			__LIB_1__::func_649(iParam1, 38);
			break;
		case 7:
			uParam0->f_168 = 0;
			__LIB_1__::func_649(iParam1, 40);
			break;
		case 8:
			__LIB_1__::func_649(iParam1, 31);
			break;
		default:
			break;
	}
}

char* func_34(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_PDBMC_IG3_A_DOLLAR";
			break;
		case 1:
			sVar0 = "pbl_PDBMC_IG3_LEARN_ABOUT";
			break;
		case 2:
			sVar0 = "pbl_PDBMC_IG3_P1_BE_NOT_AFRAID";
			break;
		case 3:
			sVar0 = "pbl_PDBMC_IG3_P1_COME_CLOSE";
			break;
		case 4:
			sVar0 = "pbl_PDBMC_IG3_P1_WOULD_YOU";
			break;
		case 5:
			sVar0 = "pbl_PDBMC_IG3_SEE_TOMORROW";
			break;
		case 6:
			sVar0 = "pbl_PDBMC_IG4_P1_BE_NOT_AFRAID";
			break;
		case 7:
			sVar0 = "pbl_PDBMC_IG4_P1_JUST_A_SAD_OLD";
			break;
		case 8:
			sVar0 = "pbl_base_reset";
			break;
		case 9:
			sVar0 = "pbl_ARMIN_base_reset";
			break;
		case 10:
			sVar0 = "pbl_HANDOUT_TO_HANDIN";
			break;
		case 11:
			sVar0 = "pbl_HANDIN_TO_HANDOUT";
			break;
		case 12:
			sVar0 = "pbl_Give_Money";
			break;
	}
	return sVar0;
}

bool func_35(var uParam0, var uParam1, var uParam2, float fParam3)
{
	if ((__LIB_0__::func_27(*uParam1, 2) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*uParam2) >= fParam3) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		return true;
	}
	return false;
}

bool func_36(var uParam0, var uParam1, char* sParam2, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, char* sParam8, bool bParam9)
{
	struct<4> Var0;
	if (__LIB_16__::func_876(uParam1))
	{
		Var0 = { func_113() };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam1, Var0, Var0.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "cs_cassidy", uParam0->f_143[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_cuptin01x", uParam0->f_147, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_wedgestick02x", uParam0->f_148, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x", uParam0->f_149[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x^1", uParam0->f_149[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x^2", uParam0->f_149[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x^3", uParam0->f_149[3], 0);
		if (bParam7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
		}
		if (bParam9)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coinStack02", uParam0->f_154, 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam4, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam5, false);
		func_6(uParam0, uParam1, sParam2, bParam4, bParam5, fParam6, 1, 0);
		if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_Cower_Base", 1) || ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
		{
			ANIMSCENE::RESET_ANIM_SCENE(*uParam3, sParam8);
			return true;
		}
	}
	return false;
}

bool func_37(var uParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar16;
	int iVar17;
	float fVar18;
	if (__LIB_0__::func_27(uParam0->f_162, 4))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]))
	{
		return false;
	}
	if (!__LIB_0__::func_27(uParam0->f_162, 16384))
	{
		__LIB_16__::func_832(1);
		iVar16 = __LIB_1__::func_372(Global_35, 0);
		iVar17 = __LIB_1__::func_372(Global_35, 1);
		if (__LIB_0__::func_154(iVar16) || __LIB_0__::func_154(iVar17))
		{
			if (__LIB_0__::func_163(Global_35, -1672495956))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
				return false;
			}
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			return false;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_169, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_169);
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_169, func_34(12)))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_169, func_34(12));
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_169, "player_zero", &Var4, true, func_34(12), 2))
		{
			fVar18 = ENTITY::GET_ENTITY_HEADING(Global_35);
			if (!__LIB_0__::func_266(Global_35, Var4, 0.25f, 1, 1))
			{
				if (!__LIB_0__::func_163(Global_35, -1672495956))
				{
					if (!uParam0->f_186)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
						uParam0->f_186 = 1;
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Global_35, Var4, 1f, 15000, 0.1f, 1048576, Var0, Var4.f_3.f_2);
				}
			}
			else
			{
				if (Var4.f_3.f_2 < 0f)
				{
					Var4.f_3.f_2 = (Var4.f_3.f_2 + 360f);
				}
				if (fVar18 <= (Var4.f_3.f_2 + 10f) && fVar18 >= (Var4.f_3.f_2 - 10f))
				{
					__LIB_1__::func_581(&(uParam0->f_162), 16384);
					return true;
				}
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_38(var uParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	if (bParam1)
	{
		Var0 = { func_164(0) };
	}
	else
	{
		Var0 = { func_164(1) };
	}
	Var2 = { func_164(2) };
	__LIB_17__::func_110(&(uParam0->f_224[0 /*17*/]), Var0, 100, "", Var0.f_1, 0, 0, 0, 1);
	__LIB_16__::func_872(&(uParam0->f_224[1 /*17*/]), Var2, "", Var2.f_1, 0, 0, 0, 1, 0);
	__LIB_4__::func_406(&(uParam0->f_224[0 /*17*/]), 1);
}

void func_39(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_154));
		}
	}
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::IS_ENTITY_VISIBLE(uParam0->f_149[iVar0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_149[iVar0], false);
			}
			iVar0++;
		}
	}
}

char* func_43(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_PDBMC_IG6_P1_BAD_NEWS";
			break;
		case 2:
			sVar0 = "pbl_PDBMC_IG6_P1_I_SENSE";
			break;
		case 3:
			sVar0 = "pbl_PDBMC_IG6_P1_THANKYOU_SIR";
			break;
		case 4:
			sVar0 = "pbl_PDBMC_IG6_P1_WHO_YOU_THINK";
			break;
		case 5:
			sVar0 = "pbl_PDBMC_IG6_P1_YOUR_WHOLE_LIFE";
			break;
		case 23:
			sVar0 = "pbl_PDBCM_IG8_P1_COME_FOR_YOU";
			break;
		case 22:
			sVar0 = "pbl_PDBCM_IG8_P1_ENJOY_THE_WORLD";
			break;
		case 25:
			sVar0 = "pbl_PDBMC_IG8_P1_TWO_STRANGERS";
			break;
		case 24:
			sVar0 = "pbl_PDBMC_IG8_P1_YOU_HAVE_LEARNED";
			break;
		case 26:
			sVar0 = "pbl_base_reset";
			break;
		case 27:
			sVar0 = "pbl_PDBMC_IG6_P1_EXIT";
			break;
	}
	return sVar0;
}

void func_46(var uParam0, int iParam1)
{
	bool bVar0;
	if (__LIB_0__::func_27(uParam0->f_162, 4))
	{
		__LIB_1__::func_649(iParam1, 90);
	}
	else if (__LIB_0__::func_27(uParam0->f_162, 1))
	{
		func_172(uParam0);
		if (func_36(uParam0, &(uParam0->f_165), func_5(16), &(uParam0->f_171), 1, 0, 1f, 0, func_5(16), 1))
		{
			if (func_173(&(uParam0->f_136), &(uParam0->f_163)))
			{
				if (func_6(uParam0, &(uParam0->f_165), func_5(16), 1, 0, 1065353216 /* Float: 1f */, 1, 0))
				{
					__LIB_1__::func_649(iParam1, 17);
				}
			}
		}
	}
	else
	{
		bVar0 = __LIB_0__::func_113();
		if (func_174(uParam0, &(uParam0->f_163), bVar0))
		{
			if (bVar0)
			{
				if (func_175(uParam0))
				{
					func_176(uParam0, iParam1);
				}
			}
			else if (!__LIB_1__::func_185(77))
			{
				if (func_175(uParam0))
				{
					func_176(uParam0, iParam1);
				}
			}
			else if (func_175(uParam0))
			{
				func_176(uParam0, iParam1);
			}
		}
	}
}

char* func_47(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "SPBMC_IG6_F";
			break;
		case 1:
			sVar0 = "SPBMC_IG6_G";
			break;
		case 2:
			sVar0 = "SPBMC_IG6_H";
			break;
		case 3:
			sVar0 = "SPBMC_IG6_I";
			break;
		case 4:
			sVar0 = "SPBMC_IG6_J";
			break;
		case 5:
			sVar0 = "SPBMC_IG6_K";
			break;
		case 6:
			sVar0 = "SPBMC_IG6_L";
			break;
		case 7:
			sVar0 = "SPBMC_IG6_M";
			break;
		case 8:
			sVar0 = "SPBMC_IG6_N";
			break;
		case 16:
			sVar0 = "SPBMC_IG6_O";
			break;
		case 9:
			sVar0 = "SPBMC_IG6_P";
			break;
		case 10:
			sVar0 = "SPBMC_IG6_Q";
			break;
		case 11:
			sVar0 = "SPBMC_IG6_S";
			break;
		case 12:
			sVar0 = "SPBMC_IG6_STAY";
			break;
		case 13:
			sVar0 = "SPBMC_IG7_A";
			break;
		case 14:
			sVar0 = "SPBMC_IG7_B";
			break;
		case 15:
			sVar0 = "SPBMC_IG7_C";
			break;
	}
	return sVar0;
}

bool func_48(var uParam0, int iParam1, char* sParam2)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]))
	{
		return false;
	}
	vVar0 = { __LIB_1__::func_344(sParam2) };
	if (!__LIB_1__::func_49(&vVar0) && !__LIB_0__::func_27(uParam0->f_162, 65536))
	{
		__LIB_1__::func_104(uParam0, vVar0, 0, -1, 0, 0);
	}
	if (__LIB_7__::func_283(&vVar0))
	{
		__LIB_1__::func_581(&(uParam0->f_162), 65536);
	}
	else if (__LIB_0__::func_27(uParam0->f_162, 65536))
	{
		return true;
	}
	return false;
}

void func_52(var uParam0, int iParam1)
{
	if (__LIB_0__::func_6(uParam0->f_136))
	{
		switch (*iParam1)
		{
			case 3:
			case 4:
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
			case 38:
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 45:
			case 46:
			case 47:
			case 70:
				break;
			case 5:
			case 52:
			case 53:
			case 54:
			case 55:
			case 56:
			case 57:
			case 58:
			case 59:
			case 60:
			case 61:
			case 62:
			case 63:
			case 64:
			case 65:
			case 66:
			case 67:
			case 68:
			case 69:
			case 71:
			case 72:
			case 73:
			case 74:
			case 76:
			case 77:
			case 78:
			case 79:
			case 80:
				break;
			case 91:
				break;
			case 92:
				func_1(uParam0, 1);
				break;
			case 93:
				break;
		}
	}
}

void func_56(var uParam0)
{
	if (__LIB_11__::func_133(4) == 0)
	{
		if (((((((((((((((((__LIB_0__::func_27(uParam0->f_163, 1) && __LIB_0__::func_27(uParam0->f_163, 2)) && __LIB_0__::func_27(uParam0->f_163, 4)) && __LIB_0__::func_27(uParam0->f_163, 8)) && __LIB_0__::func_27(uParam0->f_163, 16)) && __LIB_0__::func_27(uParam0->f_163, 32)) && __LIB_0__::func_27(uParam0->f_163, 64)) && __LIB_0__::func_27(uParam0->f_163, 128)) && __LIB_0__::func_27(uParam0->f_163, 256)) && __LIB_0__::func_27(uParam0->f_163, 512)) && __LIB_0__::func_27(uParam0->f_163, 1024)) && __LIB_0__::func_27(uParam0->f_163, 2048)) && __LIB_0__::func_27(uParam0->f_163, 4096)) && __LIB_0__::func_27(uParam0->f_163, 8192)) && __LIB_0__::func_27(uParam0->f_163, 16384)) && __LIB_0__::func_27(uParam0->f_163, 32768)) && __LIB_0__::func_27(uParam0->f_163, 65536)) && __LIB_0__::func_27(uParam0->f_163, 131072))
		{
			__LIB_16__::func_783(4, 1);
		}
	}
	else if (__LIB_11__::func_133(4) == 1)
	{
		if (((((((__LIB_0__::func_27(uParam0->f_163, 262144) && __LIB_0__::func_27(uParam0->f_163, 524288)) && __LIB_0__::func_27(uParam0->f_163, 1048576)) && __LIB_0__::func_27(uParam0->f_163, 2097152)) && __LIB_0__::func_27(uParam0->f_163, 4194304)) && __LIB_0__::func_27(uParam0->f_163, 8388608)) && __LIB_0__::func_27(uParam0->f_163, 16777216)) && __LIB_0__::func_27(uParam0->f_163, 33554432))
		{
			__LIB_16__::func_783(4, 12);
		}
	}
}

void func_64(var uParam0)
{
	__LIB_0__::func_172(uParam0->f_155);
	__LIB_0__::func_172(uParam0->f_156);
	__LIB_0__::func_172(uParam0->f_157);
	__LIB_0__::func_172(uParam0->f_158);
	__LIB_0__::func_172(uParam0->f_159);
}

void func_67(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	iVar3 = uParam0->f_143[0];
	iVar4 = uParam0->f_142;
	if (!__LIB_0__::func_75(&(uParam0->f_180)))
	{
		__LIB_17__::func_321(&(uParam0->f_180), 0);
	}
	if (uParam0->f_179 == 0)
	{
		uParam0->f_179 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000);
	}
	if (__LIB_19__::func_406(&(uParam0->f_180), uParam0->f_179))
	{
		fVar5 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar3, true, false));
		if (fVar5 > 25f)
		{
			return;
		}
		if (fVar5 < 8f)
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1 + 1);
		}
		else
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(5, 8);
		}
		iVar4 = iVar2;
		if (uParam0->f_142 == iVar4 || iVar4 == -1)
		{
			uParam0->f_179 = BUILTIN::ROUND((IntToFloat(uParam0->f_179) * 0.5f));
			return;
		}
		sVar0 = func_75(iVar4);
		iVar1 = func_76(iVar4);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iVar3))
		{
			__LIB_16__::func_866(iVar3, sVar0, 291934926, Global_35, 1, "CASSIDY", iVar1, 1);
		}
		uParam0->f_142 = iVar4;
		uParam0->f_179 = 0;
	}
}

bool func_71(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_162, 4))
	{
		if ((((((uParam0->f_126 == 2048 || uParam0->f_126 == 4) || uParam0->f_126 == 256) || uParam0->f_126 == 16) || uParam0->f_126 == 32) || uParam0->f_126 == 2) || uParam0->f_126 == 0)
		{
			PED::_0xAE6004120C18DF97(uParam0->f_143[0], 0, 0);
			if (uParam0->f_126 == 2)
			{
				ENTITY::_SET_ENTITY_HEALTH(uParam0->f_143[0], 5, 0);
				PED::_0x2E5B5D1F1453E08E(uParam0->f_143[0], 0);
			}
			if (*iParam1 == 83)
			{
				Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
				__LIB_2__::func_344(&(uParam0->f_143[0]));
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
				AUDIO::_0x36559148B78853B3(0, 1, 0);
				__LIB_1__::func_649(iParam1, 89);
			}
			else if (((((*iParam1 != 82 && *iParam1 != 88) && *iParam1 != 90) && *iParam1 != 84) && *iParam1 != 89) && *iParam1 != 81)
			{
				if (*iParam1 >= 52 && *iParam1 <= 80)
				{
					__LIB_2__::func_344(&(uParam0->f_143[0]));
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
					AUDIO::_0x36559148B78853B3(0, 1, 0);
					if (func_36(uParam0, &(uParam0->f_165), func_5(29), &(uParam0->f_171), 0, 0, 1f, 0, 0, 1))
					{
						Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
						__LIB_1__::func_649(iParam1, 90);
					}
				}
				else if (*iParam1 >= 24 && *iParam1 <= 51)
				{
					__LIB_2__::func_344(&(uParam0->f_143[0]));
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
					AUDIO::_0x36559148B78853B3(0, 1, 0);
					if (func_36(uParam0, &(uParam0->f_165), func_5(29), &(uParam0->f_169), 0, 0, 1f, 0, 0, 1))
					{
						Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
						__LIB_1__::func_649(iParam1, 90);
					}
				}
				else
				{
					__LIB_2__::func_344(&(uParam0->f_143[0]));
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
					AUDIO::_0x36559148B78853B3(0, 1, 0);
					Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
					if (func_36(uParam0, &(uParam0->f_165), func_5(29), &(uParam0->f_169), 0, 0, 1f, 0, 0, 1))
					{
						Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
						__LIB_1__::func_649(iParam1, 90);
					}
				}
			}
			else if (*iParam1 == 88 || *iParam1 == 84)
			{
				__LIB_2__::func_344(&(uParam0->f_143[0]));
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
				AUDIO::_0x36559148B78853B3(0, 1, 0);
				Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
				__LIB_1__::func_649(iParam1, 90);
			}
		}
		else
		{
			__LIB_2__::func_344(&(uParam0->f_143[0]));
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
			AUDIO::_0x36559148B78853B3(0, 1, 0);
			Global_40.f_11623[4 /*8*/].f_2 = __LIB_0__::func_23();
			__LIB_1__::func_649(iParam1, 81);
		}
		return true;
	}
	return false;
}

bool func_72(var uParam0)
{
	vector3 vVar0;
	vector3 vVar4;
	vVar0 = { __LIB_16__::func_870(4, __LIB_11__::func_133(4), 0) };
	vVar4 = { vVar0 };
	if (PED::_0x078076AB50FB117F(uParam0->f_143[0], vVar4, 50f, 1) && PED::_0xB7DBB2986B87E230(uParam0->f_143[0], 1f))
	{
		return true;
	}
	if (__LIB_0__::func_48(uParam0->f_143[0], Global_35, 50f, 1))
	{
		__LIB_1__::func_398(&(uParam0->f_98), 1);
	}
	else
	{
		__LIB_1__::func_398(&(uParam0->f_98), 0);
	}
	if (__LIB_10__::func_373(uParam0->f_143[0], 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0))
	{
		if (__LIB_0__::func_154(Global_1935630.f_46))
		{
			if (WEAPON::_IS_WEAPON_THROWABLE(Global_1935630.f_46) && uParam0->f_126 == 4)
			{
				__LIB_10__::func_238(&(uParam0->f_98), &(uParam0->f_126));
				return false;
			}
		}
		__LIB_4__::func_268(1, 0, 0, "", uParam0->f_143[0], 0, 1065353216 /* Float: 1f */, 0);
		return true;
	}
	return false;
}

char* func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return "GREET_PLAYER_ANGRY";
		case 3:
			return "GENERIC_CURSE_MED";
		case 5:
		case 6:
			return "GET_AWAY_FROM_ME";
		case 2:
			return "GENERIC_FRIGHTENED_HIGH";
		case 7:
			return "PANIC_HELP";
		case 4:
			return "PANIC_COMMUNICATE";
		default:
			break;
	}
	return "";
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 5:
		case 7:
			return 1;
		case 1:
		case 6:
			return 2;
		default:
			break;
	}
	return 0;
}

bool func_78(int iParam0, int iParam1, var uParam2, var uParam3)
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
				if (__LIB_17__::func_155(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_92(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
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

bool func_92(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!__LIB_16__::func_868(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return false;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!__LIB_0__::func_255(iVar1, 0))
		{
			__LIB_16__::func_796(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return true;
	}
	return false;
}

int func_95(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (func_237(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_95(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					func_241(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_243(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					func_248(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_243(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_241(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

void func_100(var uParam0)
{
	vector3 vVar0[24];
	if (__LIB_0__::func_27(uParam0->f_162, 131072))
	{
		return;
	}
	if (__LIB_0__::func_181())
	{
		StringCopy(&cVar0, "SPBMC_GIVE_J", 24);
	}
	else
	{
		StringCopy(&cVar0, "SPBMC_GIVE_A", 24);
	}
	if (!__LIB_1__::func_49(&cVar0))
	{
		__LIB_1__::func_104(uParam0, cVar0, 0, -1, 0, 0);
	}
	if (__LIB_7__::func_283(&cVar0))
	{
		__LIB_1__::func_581(&(uParam0->f_162), 131072);
	}
}

void func_102(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_JN"), 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_JN"), 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_RC_CRKPT4_1_AR"), 0);
			}
			else if (__LIB_0__::func_343(55))
			{
				func_258(joaat("JOURNAL_RC_CRKPT4_1B_JN"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_RC_CRKPT4_1A_JN"), 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_GIANT_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_GIANT_JN"), 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_JN"), 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_JN"), 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_JN"), 0);
			}
			break;
		default:
			break;
	}
}

char* func_108()
{
	return "script@specialped@pdbmc_blindmancassidy@ig@ig_1@ig_1";
}

char* func_109()
{
	return "script@specialped@pdbmc_blindmancassidy@ig@ig_3@ig_3";
}

char* func_110()
{
	return "script@specialped@pdbmc_blindmancassidy@ig@ig_6@ig_6";
}

void func_111(var uParam0)
{
	struct<11> Var0;
	switch (__LIB_16__::func_787(4))
	{
		case 3:
			Var0 = { func_262(15) };
			__LIB_17__::func_63(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(16) };
			__LIB_17__::func_63(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(17) };
			__LIB_17__::func_63(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(19) };
			__LIB_17__::func_63(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(18) };
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
		case 9:
			Var0 = { func_262(20) };
			__LIB_17__::func_63(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(21) };
			__LIB_17__::func_63(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(22) };
			__LIB_17__::func_63(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(24) };
			__LIB_17__::func_63(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(23) };
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
		case 10:
			Var0 = { func_262(25) };
			__LIB_17__::func_63(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(26) };
			__LIB_17__::func_63(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(27) };
			__LIB_17__::func_63(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(29) };
			__LIB_17__::func_63(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(28) };
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
		case 13:
			Var0 = { func_262(30) };
			__LIB_17__::func_63(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(31) };
			__LIB_17__::func_63(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(32) };
			__LIB_17__::func_63(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(34) };
			__LIB_17__::func_63(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(33) };
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
		case 4:
			Var0 = { func_262(35) };
			__LIB_17__::func_63(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(36) };
			__LIB_17__::func_63(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(37) };
			__LIB_17__::func_63(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(39) };
			__LIB_17__::func_63(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(38) };
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
	}
}

struct<6> func_113()
{
	struct<6> Var0;
	var uVar6;
	switch (__LIB_16__::func_787(4))
	{
		case 3:
			Var0 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_3 = { 0f, 0f, 114.5882f };
			break;
		case 9:
			Var0 = { 414.5646f, 412.7333f, 207.6299f };
			Var0.f_3 = { 0f, 0f, 352.4153f };
			break;
		case 10:
			Var0 = { 2794.157f, 1406.62f, 182.3539f };
			Var0.f_3 = { 0f, 0f, 65.0766f };
			break;
		case 13:
			Var0 = { -5342.929f, -2947.815f, 100.807f };
			Var0.f_3 = { 0f, 0f, 20.08f };
			break;
		case 4:
			Var0 = { -1208.554f, -1229.683f, 174.7918f };
			Var0.f_3 = { 0f, 0f, 19.5942f };
			break;
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
	Var0.f_2 = uVar6;
	return Var0;
}

struct<4> func_139(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { __LIB_16__::func_870(4, __LIB_11__::func_133(4), 0) };
			break;
		case 2:
			switch (__LIB_16__::func_787(4))
			{
				case 3:
					Var0 = { 500.4968f, 1286.531f, 181.3641f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 416.2841f, 413.2481f, 107.6271f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2794.257f, 1404.687f, 82.29177f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { -5342.084f, -2947.499f, 0.78917f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { -1207.344f, -1228.779f, 74.56038f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			switch (__LIB_16__::func_787(4))
			{
				case 3:
					Var0 = { 502.631f, 1287.786f, 181.3201f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 415.6961f, 411.1015f, 107.566f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2792.826f, 1405.584f, 82.4797f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { -5344.361f, -2948.172f, 0.83914f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { -1209.377f, -1230.011f, 74.92408f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 3:
			switch (__LIB_16__::func_787(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 1f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 1f;
					break;
				case 10:
					Var0 = { 2794.664f, 1407.216f, 82.32878f };
					Var0.f_3 = 1.25f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 1f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 1f;
					break;
			}
			break;
	}
	return Var0;
}

int func_142(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	fVar1 = MISC::_GET_TEMPERATURE_AT_COORDS(vParam0);
	bVar2 = fVar1 < 10f;
	bVar3 = fVar1 > 27f;
	if (bVar2)
	{
		iVar0 = joaat("META_OUTFIT_COLD_WEATHER");
	}
	else if (bVar3)
	{
		iVar0 = joaat("META_OUTFIT_WARM_WEATHER");
	}
	else
	{
		iVar0 = joaat("META_OUTFIT_COOL_WEATHER");
	}
	return iVar0;
}

void func_144(var uParam0)
{
	vector3 vVar0;
	int iVar4;
	vVar0 = { func_139(1) };
	iVar4 = 0;
	while (iVar4 < 4)
	{
		__LIB_17__::func_106(&(uParam0->f_149[iVar4]), uParam0->f_140, vVar0);
		iVar4++;
	}
}

int func_150(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 4:
			iVar0 = 6;
			break;
		case 5:
			iVar0 = 7;
			break;
		case 6:
			iVar0 = 8;
			break;
		case 7:
			iVar0 = 9;
			break;
		case 8:
			iVar0 = 10;
			break;
		case 9:
			iVar0 = 11;
			break;
		case 10:
			iVar0 = 12;
			break;
		case 11:
			iVar0 = 13;
			break;
		case 12:
			iVar0 = 14;
			break;
		case 13:
			iVar0 = 15;
			break;
		case 14:
			iVar0 = 16;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
	}
	return iVar0;
}

Vector3 func_151(int iParam0)
{
	vector3 vVar0[24];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "SPBMC_IMTALKING", 24);
			break;
		case 1:
			StringCopy(&cVar0, "SPBMC_STILLHERE", 24);
			break;
		case 2:
			StringCopy(&cVar0, "SPBMC_IG1_A", 24);
			break;
		case 3:
			StringCopy(&cVar0, "SPBMC_IG1_B", 24);
			break;
		case 4:
			StringCopy(&cVar0, "SPBMC_IG1_C", 24);
			break;
		case 5:
			StringCopy(&cVar0, "SPBMC_IG1_D", 24);
			break;
		case 6:
			StringCopy(&cVar0, "SPBMC_IG1_E", 24);
			break;
		case 7:
			StringCopy(&cVar0, "SPBMC_IG1_F", 24);
			break;
		case 8:
			StringCopy(&cVar0, "SPBMC_IG1_G", 24);
			break;
		case 9:
			StringCopy(&cVar0, "SPBMC_IG1_H", 24);
			break;
		case 10:
			StringCopy(&cVar0, "SPBMC_IG1_I", 24);
			break;
		case 11:
			StringCopy(&cVar0, "SPBMC_IG1_J", 24);
			break;
		case 12:
			StringCopy(&cVar0, "SPBMC_IG1_K", 24);
			break;
		case 13:
			StringCopy(&cVar0, "SPBMC_IG2_A", 24);
			break;
		case 14:
			StringCopy(&cVar0, "SPBMC_IG2_B", 24);
			break;
		case 15:
			StringCopy(&cVar0, "SPBMC_IG2_C", 24);
			break;
		case 16:
			StringCopy(&cVar0, "SPBMC_IG2_D", 24);
			break;
		case 17:
			StringCopy(&cVar0, "SPBMC_IG2_E", 24);
			break;
		case 18:
			StringCopy(&cVar0, "SPBMC_IG2_F", 24);
			break;
	}
	return cVar0;
}

struct<2> func_164(int iParam0)
{
	struct<2> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = "BC1_UC_GIVE";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 1:
			Var0 = "SPD_UC_GRT";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 2:
			Var0 = "SPD_UC_ANT";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
	}
	return Var0;
}

void func_172(var uParam0)
{
	vector3 vVar0[24];
	if (__LIB_0__::func_27(uParam0->f_162, 262144))
	{
		return;
	}
	if (__LIB_0__::func_181())
	{
		StringCopy(&cVar0, "SPBMC_THANKS_J", 24);
	}
	else
	{
		StringCopy(&cVar0, "SPBMC_THANKS_A", 24);
	}
	if (!__LIB_1__::func_49(&cVar0))
	{
		__LIB_1__::func_104(uParam0, cVar0, 0, -1, 0, 0);
	}
	if (__LIB_7__::func_283(&cVar0))
	{
		__LIB_1__::func_581(&(uParam0->f_162), 262144);
	}
}

bool func_173(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_6(*uParam0))
	{
		iVar0 = __LIB_5__::func_297(*uParam0);
		if (__LIB_0__::func_181())
		{
			iVar0++;
		}
		__LIB_1__::func_532(*uParam0, *uParam1);
		__LIB_7__::func_448(*uParam0, iVar0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_174(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	iVar1 = func_288(uParam0, bParam2);
	if (bParam2)
	{
		iVar5 = __LIB_1__::func_898();
		if (iVar5 == 10 && !__LIB_0__::func_27(*uParam1, 2))
		{
			uParam0->f_175 = 1;
			return true;
		}
		else if (iVar1 > 4 && !__LIB_0__::func_27(*uParam1, 1))
		{
			uParam0->f_175 = 0;
			return true;
		}
		else if (iVar1 < 10)
		{
			bVar4 = true;
		}
		iVar2 = 2;
		iVar3 = 18;
	}
	else
	{
		if (iVar1 < 3)
		{
			bVar4 = true;
		}
		iVar2 = 18;
		iVar3 = 26;
	}
	if (bVar4)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar2, iVar3);
		if (!__LIB_0__::func_27(*uParam1, func_289(iVar0)))
		{
			uParam0->f_175 = iVar0;
			return true;
		}
	}
	else
	{
		iVar0 = iVar2;
		while (iVar0 <= (iVar3 - 1))
		{
			if (!__LIB_0__::func_27(*uParam1, func_289(iVar0)))
			{
				uParam0->f_175 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_175(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_171))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_171, false))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -1527527524) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_171, "pbl_base_reset"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_176(var uParam0, int iParam1)
{
	switch (uParam0->f_175)
	{
		case 0:
			__LIB_1__::func_649(iParam1, 52);
			break;
		case 2:
			__LIB_1__::func_649(iParam1, 53);
			break;
		case 3:
			__LIB_1__::func_649(iParam1, 54);
			break;
		case 4:
			__LIB_1__::func_649(iParam1, 55);
			break;
		case 5:
			__LIB_1__::func_649(iParam1, 56);
			break;
		case 6:
			__LIB_1__::func_649(iParam1, 57);
			break;
		case 7:
			__LIB_1__::func_649(iParam1, 58);
			break;
		case 8:
			__LIB_1__::func_649(iParam1, 59);
			break;
		case 9:
			__LIB_1__::func_649(iParam1, 60);
			break;
		case 10:
			__LIB_1__::func_649(iParam1, 61);
			break;
		case 11:
			__LIB_1__::func_649(iParam1, 62);
			break;
		case 12:
			__LIB_1__::func_649(iParam1, 63);
			break;
		case 13:
			__LIB_1__::func_649(iParam1, 64);
			break;
		case 1:
			__LIB_1__::func_649(iParam1, 65);
			break;
		case 21:
			__LIB_1__::func_649(iParam1, 74);
			break;
		case 14:
			__LIB_1__::func_649(iParam1, 66);
			break;
		case 15:
			__LIB_1__::func_649(iParam1, 67);
			break;
		case 16:
			__LIB_1__::func_649(iParam1, 68);
			break;
		case 18:
			__LIB_1__::func_649(iParam1, 71);
			break;
		case 19:
			__LIB_1__::func_649(iParam1, 72);
			break;
		case 20:
			__LIB_1__::func_649(iParam1, 73);
			break;
		case 22:
			__LIB_1__::func_649(iParam1, 76);
			break;
		case 25:
			__LIB_1__::func_649(iParam1, 79);
			break;
		case 23:
			__LIB_1__::func_649(iParam1, 77);
			break;
		case 24:
			__LIB_1__::func_649(iParam1, 78);
			break;
		case 26:
			__LIB_1__::func_649(iParam1, 69);
			break;
		case 17:
			__LIB_1__::func_649(iParam1, 70);
			break;
		default:
			break;
	}
}

bool func_237(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_2__::func_523(iParam1, uParam2, 0);
		iVar5 = func_368(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_241(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_373(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_243(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		func_377(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_2__::func_523(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_248(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_377(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_258(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 == 1)
	{
		__LIB_1__::func_33(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_396(1);
		Global_40.f_11922[0] = iParam0;
	}
}

struct<11> func_262(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 15:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 16:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 495.042f, 1284.463f, 182.217f };
			Var0.f_4 = { 0f, 0f, -175.784f };
			Var0.f_7 = { 7.32f, 15.009f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 17:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_4 = { 0f, 0f, -3.079914f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 18:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 19:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_4 = { 0f, 0f, 40.09184f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
		case 20:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 414.5646f, 412.7333f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 21:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 418.393f, 419.451f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 60.32438f };
			Var0.f_7 = { 7.722f, 13.559f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 22:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 414.5646f, 412.7333f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 62.24287f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 23:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 414.5646f, 412.7333f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 24:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 414.5646f, 412.7333f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 115.1113f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
		case 25:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 2794.157f, 1406.62f, 82.3539f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 26:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2787.403f, 1410f, 82.354f };
			Var0.f_4 = { 0f, 0f, 154.2904f };
			Var0.f_7 = { 7.539f, 13.615f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 27:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2794.157f, 1406.62f, 82.3539f };
			Var0.f_4 = { 0f, 0f, 155.2096f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 28:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2794.157f, 1406.62f, 82.3539f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 29:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2794.157f, 1406.62f, 82.3539f };
			Var0.f_4 = { 0f, 0f, 83.2552f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
		case 30:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -5342.735f, -2948.708f, 0.8175f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 31:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -5343.361f, -2941.974f, 0.8519f };
			Var0.f_4 = { 0f, 0f, -84.35735f };
			Var0.f_7 = { 6.745f, 15.282f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 32:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -5342.604f, -2949.041f, 0.8519f };
			Var0.f_4 = { 0f, 0f, 1.309033f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 33:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -5342.604f, -2949.041f, 0.8519f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 34:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -5342.735f, -2948.708f, 0.8175f };
			Var0.f_4 = { 0f, 0f, 32.01331f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
		case 35:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -1208.554f, -1229.683f, 74.7918f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 36:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1211.495f, -1221.953f, 75.375f };
			Var0.f_4 = { 0f, 0f, -69.42678f };
			Var0.f_7 = { 8.114f, 12.717f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 37:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -1209.312f, -1227.312f, 75.3753f };
			Var0.f_4 = { 0f, 0f, 27.64894f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 38:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1209.312f, -1227.312f, 75.3753f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 39:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1208.554f, -1229.683f, 74.7918f };
			Var0.f_4 = { 0f, 0f, 27.64894f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
	}
	return Var0;
}

int func_288(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = Global_40.f_11623[4 /*8*/].f_6;
	}
	else
	{
		iVar0 = __LIB_5__::func_297(uParam0->f_136);
	}
	return iVar0;
}

int func_289(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 32;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 7:
			iVar0 = 128;
			break;
		case 8:
			iVar0 = 256;
			break;
		case 9:
			iVar0 = 512;
			break;
		case 10:
			iVar0 = 1024;
			break;
		case 11:
			iVar0 = 2048;
			break;
		case 12:
			iVar0 = 4096;
			break;
		case 13:
			iVar0 = 8192;
			break;
		case 14:
			iVar0 = 16384;
			break;
		case 15:
			iVar0 = 32768;
			break;
		case 16:
			iVar0 = 65536;
			break;
		case 17:
			iVar0 = 131072;
			break;
		case 18:
			iVar0 = 262144;
			break;
		case 19:
			iVar0 = 524288;
			break;
		case 20:
			iVar0 = 1048576;
			break;
		case 21:
			iVar0 = 2097152;
			break;
		case 22:
			iVar0 = 4194304;
			break;
		case 23:
			iVar0 = 8388608;
			break;
		case 24:
			iVar0 = 16777216;
			break;
		case 25:
			iVar0 = 33554432;
			break;
	}
	return iVar0;
}

int func_368(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_483(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_373(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_483(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_377(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_483(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

void func_396(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @97; //curOff = 52
		}
		else
		{
			__LIB_1__::func_33(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_716(1);
	}
}

void func_483(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_748(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_523(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_523(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @141; //curOff = 128
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_2__::func_667(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

