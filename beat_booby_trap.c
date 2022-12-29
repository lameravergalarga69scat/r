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
	struct<174> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 1;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	var uLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	var uLocal_219 = 0;
	bool bLocal_220 = false;
	bool bLocal_221 = false;
	bool bLocal_222 = false;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	vector3 vLocal_225 = { 0f, 0f, 0f };
	vector3 vLocal_228 = { 0f, 0f, 0f };
	vector3 vLocal_231 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	struct<4> Local_248 = { 0, 0, 0, 0 } ;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = -1;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 1097859072;
	var uLocal_285 = 1000;
	var uLocal_286 = 1067450368;
	var uLocal_287 = 5000;
	var uLocal_288 = 42;
	var uLocal_289 = 1103626240;
	var uLocal_290 = 1077936128;
	var uLocal_291 = 1106247680;
	var uLocal_292 = 1103101952;
	var uLocal_293 = 1097859072;
	var uLocal_294 = 1103626240;
	vector3 vLocal_295 = { 0f, 0f, 0f };
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = -1;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 2;
	var uLocal_311 = 1;
	var uLocal_312 = 1;
	var uLocal_313 = 1;
	var uLocal_314 = 0;
	var uLocal_315 = 1;
	var uLocal_316 = 2;
	var uLocal_317 = 2;
	var uLocal_318 = 3;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 3;
	var uLocal_322 = 1;
	var uLocal_323 = 3;
	var uLocal_324 = 3;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	struct<2> Local_327 = { -1, -1 } ;
	var uLocal_329 = -1;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 100;
	var uLocal_337 = -1082130432;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 5;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	struct<2> Local_348 = { -1, -1 } ;
	var uLocal_350 = -1;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 100;
	var uLocal_358 = -1082130432;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 5;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	struct<2> Local_369 = { -1, -1 } ;
	var uLocal_371 = -1;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 100;
	var uLocal_379 = -1082130432;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 5;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 1176256512;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	struct<2> Local_399 = { 0, 0 } ;
	bool bLocal_401 = false;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	int iLocal_416[4] = { 0, 0, 0, 0 };
	int iLocal_421[4] = { 0, 0, 0, 0 };
	int iLocal_426[4] = { 0, 0, 0, 0 };
	int iLocal_431[2] = { 0, 0 };
	var uLocal_434[4] = { 0, 0, 0, 0 };
	var uLocal_439[2] = { 0, 0 };
	struct<32> Local_442[4];
	struct<32> Local_571[2];
	struct<36> Local_636[2];
	struct<75> Local_709[2];
	int iLocal_860[2] = { 0, 0 };
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	bool bLocal_869 = false;
	bool bLocal_870 = false;
	bool bLocal_871 = false;
	bool bLocal_872 = false;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	var uLocal_875 = 0;
	int iLocal_876 = 0;
	var uLocal_877 = 4;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	struct<75> Local_882[4];
	bool bLocal_1183 = false;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	int iLocal_1193 = 0;
	bool bLocal_1194 = false;
	bool bLocal_1195 = false;
	int iLocal_1196 = 0;
	int iLocal_1197[2] = { 0, 0 };
	int iLocal_1200[4] = { 0, 0, 0, 0 };
	int iLocal_1205[2] = { 0, 0 };
	var uLocal_1208[4] = { 0, 0, 0, 0 };
	var uLocal_1213[2] = { 0, 0 };
	vector3 vLocal_1216 = { 0f, 0f, 0f };
	var uLocal_1219[2] = { 0, 0 };
	var uLocal_1222[2] = { 0, 0 };
	bool bLocal_1225 = false;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	int iLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	bool bLocal_1236 = false;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	bool bLocal_1240 = false;
	bool bLocal_1241 = false;
	bool bLocal_1242 = false;
	bool bLocal_1243 = false;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	bool bLocal_1250 = false;
	bool bLocal_1251 = false;
	bool bLocal_1252 = false;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	bool bLocal_1258 = false;
	bool bLocal_1259 = false;
	bool bLocal_1260 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	struct<4> Var0;
	bool bVar4;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_407 = 1;
	iLocal_408 = -1;
	iLocal_410 = -1;
	iLocal_411 = -1;
	vLocal_1216 = { 0f, 0f, 0f };
	bVar4 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar4 = true;
	}
	else
	{
		__LIB_3__::func_420(&Local_14, 1);
		__LIB_3__::func_560(&Local_14, &uScriptParam_0);
		__LIB_17__::func_884(&uLocal_267);
	}
	while (true)
	{
		if (bVar4)
		{
			__LIB_2__::func_265(bVar4, 1077, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_407)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_14, &uScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						__LIB_1__::func_206(__LIB_3__::func_179(&Local_14), 10f, 2);
						func_9(&Local_14, &Local_399, &(Local_399.f_1));
						if (Local_399 == 10)
						{
							__LIB_3__::func_352(&Local_14, 1);
						}
						func_11(&Local_14, &Local_399, &(Local_399.f_1));
						func_12(&iLocal_390, Local_399);
						func_13(&Local_399, &vLocal_295);
						if (iLocal_390 != 1)
						{
						}
						else if (!func_14(&Local_399, &Var0))
						{
							func_4();
						}
						if (!func_15(&Local_399, &iLocal_391, &iLocal_395))
						{
							func_4();
						}
						iLocal_402 = VOLUME::_CREATE_VOLUME_CYLINDER(__LIB_3__::func_179(&Local_14), 0f, 0f, 0f, 2f, 2f, 10f);
						iLocal_403 = VOLUME::_CREATE_VOLUME_CYLINDER(__LIB_3__::func_179(&Local_14), 0f, 0f, 0f, 1.5f, 1.5f, 10f);
						if (Local_399 != 8)
						{
							Local_248 = { 2621.375f, 641.7349f, 69.56432f };
						}
						else
						{
							Local_248 = { func_16(iLocal_395, 0) };
							if (func_17(0))
							{
								func_18(0);
								__LIB_2__::func_180(&(Local_14.f_5), 0);
							}
						}
						__LIB_0__::func_11();
						func_21();
						func_22(&Local_399, iLocal_390, &Local_571, &Local_442, iLocal_391);
						if (Local_399 != 8 && !VOLUME::_DOES_VOLUME_EXIST(Local_14.f_173))
						{
							Local_14.f_173 = VOLUME::_CREATE_VOLUME_CYLINDER(__LIB_3__::func_179(&Local_14), 0f, 0f, 0f, 25f, 25f, 25f);
						}
						func_23();
						__LIB_0__::func_400(vLocal_295.z);
						__LIB_0__::func_400(vLocal_295.x);
						func_25(&vLocal_295, 1);
						func_26();
						func_27(0);
					}
					else if (Local_14.f_160)
					{
						func_4();
					}
					break;
				case 0:
					if (func_28())
					{
						if (func_29(&vLocal_295))
						{
							if (func_32(&iLocal_406, &uLocal_415, func_30(&Local_399), 7f, func_31(&Local_399)))
							{
								if (func_33(&Local_399))
								{
									iLocal_405 = func_35(3, func_34(&Local_399));
									__LIB_3__::func_502(iLocal_405, __LIB_3__::func_494(), __LIB_9__::func_575(0), 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, 0, 0);
									__LIB_2__::func_463(iLocal_405, joaat("PROVISION_GAME_MEAT"), 1, 0);
									ENTITY::_0x18FF3110CF47115D(iLocal_405, 2, 0);
									ENTITY::_0x18FF3110CF47115D(iLocal_405, 7, 0);
								}
								if (!func_40(0))
								{
									func_27(3);
								}
								else
								{
									func_27(4);
								}
							}
						}
					}
					break;
				case 3:
					if (func_41())
					{
						__LIB_3__::func_938(&Local_327, 4214.345f, -3737.596f, 167.5375f, 0f, 0f, -188.6f, 2);
						__LIB_3__::func_938(&Local_348, 4214.345f, -3737.596f, 167.5375f, 0f, 0f, -188.6f, 2);
						__LIB_3__::func_939(&Local_327, "player", Global_35, 0);
						__LIB_3__::func_939(&Local_348, "player", Global_35, 0);
						if (iLocal_390 != 1)
						{
						}
						else
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_431[0], Var0, Var0.f_3, true, false, true);
						}
						func_44();
						func_45(&Local_399, &iLocal_421);
						func_27(4);
					}
					break;
				case 4:
					if (!__LIB_3__::func_645(&Local_14, &iLocal_426, iLocal_390, Local_399 == 8, 1, 0, 1, 0))
					{
						func_4();
					}
					if (func_47())
					{
						if (__LIB_0__::func_86(vLocal_225) || !__LIB_0__::func_266(Global_35, vLocal_225, 35f, 1, 1))
						{
							func_4();
						}
					}
					func_50();
					if (func_51())
					{
						func_4();
					}
					__LIB_17__::func_881(&Local_369, 1);
					__LIB_17__::func_881(&Local_327, 1);
					__LIB_17__::func_881(&Local_348, 1);
					break;
			}
			BUILTIN::WAIT(Local_14.f_158);
		}
	}
}

void func_4()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	if (iLocal_398 == 8)
	{
		Local_14.f_44 = 1;
		Local_14.f_48 = 1;
	}
	if (Local_399 != 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (((Local_14.f_44 || Local_14.f_46) || bLocal_1243) || func_40(2))
			{
				COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(__LIB_2__::func_31(1));
			}
		}
	}
	func_61();
	__LIB_18__::func_717(&iLocal_408, 1);
	__LIB_0__::func_172(iLocal_241);
	if (Local_14.f_48)
	{
		func_64(Local_399, iLocal_390);
	}
	__LIB_3__::func_437(&Local_327);
	__LIB_3__::func_437(&Local_348);
	TASK::_0x4F57397388E1DFF8();
	__LIB_0__::func_172(iLocal_244);
	__LIB_0__::func_172(iLocal_245);
	func_66();
	func_67(&iLocal_421);
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_406))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_406, 9);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (func_40(46))
	{
		func_25(&vLocal_295, 2);
	}
	func_68(&iLocal_431, 1, 0, 1);
	__LIB_3__::func_438(60);
	__LIB_4__::func_128(&Local_14, &iLocal_426, &uLocal_434, iLocal_390, Local_399, Local_399.f_1, 0, 1, 0, 1);
	__LIB_2__::func_822();
}

void func_9(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 8;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 2:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
	}
}

void func_11(var uParam0, int iParam1, var uParam2)
{
	switch (*iParam1)
	{
		case 10:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2581.539f, 617.0823f, 74.4368f, 0f, 0f, 8.3334f, 10.8f, 23.95f, 8.95f);
					VOLUME::_0xBCE668AAF83608BE(uParam0->f_173, 2581.116f, 624.2293f, 74.5734f, 0f, 0f, 0f, 10f, 10f, 4f);
					break;
			}
			break;
	}
}

void func_12(int iParam0, int iParam1)
{
	if (iParam1 == 8)
	{
		*iParam0 = 0;
	}
	else
	{
		*iParam0 = func_78(iParam1);
	}
}

void func_13(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 8:
			iParam1->f_1 = 765343099;
			*iParam1 = joaat("C_13_NOTRAP_01");
			iParam1->f_2 = -909306169;
			iParam1->f_3 = -350863510;
			iParam1->f_4 = 1557082963;
			iParam1->f_5 = "DES_trap_gua01x";
			iParam1->f_6 = 1;
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam1 = -890900091;
					iParam1->f_1 = -1758697759;
					iParam1->f_2 = 591001924;
					iParam1->f_3 = 249726958;
					iParam1->f_4 = -1952856164;
					iParam1->f_5 = "DES_trap_roa0B01x";
					iParam1->f_6 = 1;
					break;
				case 1:
					iParam1->f_1 = -2092712551;
					iParam1->f_2 = -1307469679;
					iParam1->f_3 = 1433244935;
					iParam1->f_4 = -99303535;
					iParam1->f_5 = "DES_trap_roa02x";
					break;
			}
			break;
	}
}

bool func_14(int iParam0, var uParam1)
{
	*uParam1 = { 0f, 0f, 0f };
	switch (*iParam0)
	{
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					*uParam1 = { 2624.685f, 643.4315f, 73.5474f };
					uParam1->f_3 = 138.5076f;
					break;
				case 1:
					*uParam1 = { 2389.007f, 1052.843f, 85.6323f };
					uParam1->f_3 = 306.6378f;
					break;
			}
			break;
	}
	return !__LIB_0__::func_86(*uParam1);
}

bool func_15(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	switch (*iParam0)
	{
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam1 = 0;
					*iParam2 = 0;
					break;
				case 1:
					*iParam1 = 1;
					*iParam2 = 2;
					break;
			}
			break;
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam1 = 2;
					*iParam2 = 3;
					break;
			}
			break;
	}
	if (*iParam1 != -1)
	{
		if (*iParam2 != -1)
		{
			return true;
		}
	}
	return false;
}

struct<4> func_16(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2586.735f, 617.4406f, 74.6399f };
					Var0.f_3 = -82.08f;
					break;
				case 1:
					Var0 = { 2596.203f, 619.8823f, 75.3299f };
					Var0.f_3 = 105.12f;
					break;
				case 2:
					Var0 = { 2600.608f, 621.6025f, 75.8978f };
					Var0.f_3 = 84.24f;
					break;
				case 3:
					Var0 = { 2605.699f, 624.7128f, 76.1324f };
					Var0.f_3 = 221.04f;
					break;
				case 4:
					Var0 = { 2611.041f, 628.8464f, 74.7972f };
					Var0.f_3 = 38.88f;
					break;
				case 5:
					Var0 = { 2619.828f, 634.8766f, 72.7787f };
					Var0.f_3 = 150.275f;
					break;
				case 6:
					Var0 = { 2626.142f, 638.5869f, 72.9086f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2630.055f, 643.2579f, 72.7811f };
					Var0.f_3 = 0f;
					break;
				case 8:
					Var0 = { 2636.169f, 647.9924f, 72.8323f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 2637.779f, 650.5483f, 72.8791f };
					Var0.f_3 = -225.36f;
					break;
				case 10:
					Var0 = { 2642.899f, 658.6467f, 74.1972f };
					Var0.f_3 = 0f;
					break;
				case 11:
					Var0 = { 2649.134f, 666.0908f, 76.3328f };
					Var0.f_3 = 0f;
					break;
				case 12:
					Var0 = { 2655.031f, 672.7023f, 77.9523f };
					Var0.f_3 = -7.92f;
					break;
				case 13:
					Var0 = { 2654.474f, 674.5356f, 78.1413f };
					Var0.f_3 = 138.96f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2615.015f, 626.7673f, 73.8191f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2630.915f, 663.6337f, 72.5417f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2632.508f, 623.1313f, 78.8116f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2606.249f, 629.1194f, 75.9507f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2599.878f, 638.2327f, 78.714f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2599.766f, 649.328f, 79.499f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2602.538f, 655.5307f, 78.7464f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2609.606f, 673.1621f, 81.8273f };
					Var0.f_3 = 0f;
					break;
				case 8:
					Var0 = { 2625.286f, 664.242f, 72.9997f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 2638.265f, 660.8614f, 73.4116f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2647.416f, 653.0973f, 74.7707f };
					Var0.f_3 = 0f;
					break;
				case 11:
					Var0 = { 2644.952f, 638.9842f, 76.8377f };
					Var0.f_3 = 0f;
					break;
				case 12:
					Var0 = { 2642.224f, 627.7772f, 80.6329f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { 2625.751f, 617.8865f, 77.8699f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2407.042f, 1071.098f, 86.1408f };
					Var0.f_3 = -49.68f;
					break;
				case 1:
					Var0 = { 2403.727f, 1068.9f, 85.5532f };
					Var0.f_3 = -73.44f;
					break;
				case 2:
					Var0 = { 2399.619f, 1061.415f, 84.0292f };
					Var0.f_3 = -54.72f;
					break;
				case 3:
					Var0 = { 2399.104f, 1055.586f, 84.7857f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2397.554f, 1052.159f, 85.6961f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2388.54f, 1043.737f, 85.3725f };
					Var0.f_3 = 164.814f;
					break;
				case 6:
					Var0 = { 2382.66f, 1037.209f, 87.7684f };
					Var0.f_3 = -34.56f;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					Var0 = { 4202.292f, -3736.699f, 167.9393f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2616.352f, 637.9186f, 72.5476f };
					Var0.f_3 = -49.68f;
					break;
				case 1:
					Var0 = { 2617.767f, 636.4833f, 72.5448f };
					Var0.f_3 = -37.44f;
					break;
				case 2:
					Var0 = { 2619.088f, 635.8431f, 72.5485f };
					Var0.f_3 = -14.4f;
					break;
				case 3:
					Var0 = { 2620.614f, 635.9105f, 72.5357f };
					Var0.f_3 = 30.24f;
					break;
				case 4:
					Var0 = { 2621.242f, 636.9713f, 72.4873f };
					Var0.f_3 = 59.04f;
					break;
				case 5:
					Var0 = { 2621.612f, 638.0692f, 72.5215f };
					Var0.f_3 = 100.08f;
					break;
				case 6:
					Var0 = { 2621.081f, 638.8146f, 72.584f };
					Var0.f_3 = 123.84f;
					break;
				case 7:
					Var0 = { 2620.061f, 640.0323f, 72.5569f };
					Var0.f_3 = 142.56f;
					break;
				case 8:
					Var0 = { 2618.991f, 640.9267f, 72.5341f };
					Var0.f_3 = 144.72f;
					break;
				case 9:
					Var0 = { 2618.229f, 641.802f, 72.5458f };
					Var0.f_3 = 179.28f;
					break;
				case 10:
					Var0 = { 2616.835f, 641.5596f, 72.5398f };
					Var0.f_3 = -152.64f;
					break;
				case 11:
					Var0 = { 2615.712f, 641.0846f, 72.4178f };
					Var0.f_3 = -131.04f;
					break;
				case 12:
					Var0 = { 2615.542f, 639.8909f, 72.4594f };
					Var0.f_3 = 257.04f;
					break;
				case 13:
					Var0 = { 2615.951f, 638.7368f, 72.5477f };
					Var0.f_3 = -90f;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1573.548f, -7255.91f, 68.7791f };
					Var0.f_3 = 234.72f;
					break;
				case 1:
					Var0 = { 1573.346f, -7257.251f, 69.0928f };
					Var0.f_3 = -64.8f;
					break;
				case 2:
					Var0 = { 1575.19f, -7258.813f, 69.1305f };
					Var0.f_3 = 321.35f;
					break;
				case 3:
					Var0 = { 1576.444f, -7258.701f, 69.1321f };
					Var0.f_3 = 34.185f;
					break;
				case 4:
					Var0 = { 1577.666f, -7257.242f, 68.9485f };
					Var0.f_3 = 55.44f;
					break;
				case 5:
					Var0 = { 1577.688f, -7255.947f, 68.8239f };
					Var0.f_3 = 123.12f;
					break;
				case 6:
					Var0 = { 1576.106f, -7254.452f, 68.7868f };
					Var0.f_3 = 153.36f;
					break;
				case 7:
					Var0 = { 1574.765f, -7254.889f, 68.9838f };
					Var0.f_3 = 223.92f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2410.208f, 1079.648f, 88.0996f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2402.145f, 1086.945f, 89.3157f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2393.499f, 1089.558f, 89.1377f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2386.055f, 1094.219f, 88.4182f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2359.725f, 1055.496f, 84.5451f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2359.536f, 1044.884f, 85.0826f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2365.225f, 1036.194f, 86.9162f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2374.279f, 1028.123f, 89.0517f };
					Var0.f_3 = 0f;
					break;
				case 8:
					Var0 = { 2385.336f, 1026.882f, 89.5849f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 2395.26f, 1027.885f, 89.1314f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2407.001f, 1031.577f, 88.6485f };
					Var0.f_3 = 0f;
					break;
				case 11:
					Var0 = { 2413.03f, 1043.407f, 89.5882f };
					Var0.f_3 = 0f;
					break;
				case 12:
					Var0 = { 2417.793f, 1052.005f, 89.9445f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { 2419.441f, 1063.209f, 86.3127f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2396.024f, 1058.028f, 83.7061f };
					Var0.f_3 = 108.72f;
					break;
				case 1:
					Var0 = { 2395.082f, 1058.82f, 83.7971f };
					Var0.f_3 = 160.56f;
					break;
				case 2:
					Var0 = { 2393.129f, 1059.159f, 83.4364f };
					Var0.f_3 = 190.08f;
					break;
				case 3:
					Var0 = { 2392.219f, 1057.935f, 83.7749f };
					Var0.f_3 = 246.96f;
					break;
				case 4:
					Var0 = { 2392.198f, 1056.166f, 83.7657f };
					Var0.f_3 = 280.08f;
					break;
				case 5:
					Var0 = { 2392.8f, 1055.188f, 83.8446f };
					Var0.f_3 = -25.2f;
					break;
				case 6:
					Var0 = { 2394.925f, 1055.099f, 83.7857f };
					Var0.f_3 = 14.4f;
					break;
				case 7:
					Var0 = { 2395.877f, 1055.777f, 83.744f };
					Var0.f_3 = 59.76f;
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2595.285f, 622.6592f, 75.347f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2602.124f, 624.0291f, 76.0802f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2608.335f, 628.3577f, 75.7731f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2611.636f, 631.9971f, 74.4702f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2614.449f, 638.5141f, 72.5726f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2615.452f, 644.025f, 72.8983f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2617.17f, 647.5792f, 72.9845f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2618.82f, 651.3568f, 73.0774f };
					Var0.f_3 = 0f;
					break;
				case 8:
					Var0 = { 2619.98f, 654.4078f, 73.1717f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 2621.902f, 657.0274f, 72.8711f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2624.009f, 659.6808f, 72.5155f };
					Var0.f_3 = 169.2f;
					break;
				case 11:
					Var0 = { 2627.581f, 664.3073f, 72.6414f };
					Var0.f_3 = 0f;
					break;
				case 12:
					Var0 = { 2632.431f, 666.4427f, 73.1376f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { 2637.009f, 669.3921f, 74.4187f };
					Var0.f_3 = 0f;
					break;
				case 14:
					Var0 = { 2641.892f, 675.6752f, 76.4711f };
					Var0.f_3 = 0f;
					break;
				case 15:
					Var0 = { 2647.382f, 677.6343f, 77.6194f };
					Var0.f_3 = 158.4f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2618.817f, 638.3134f, 69.7718f };
					Var0.f_3 = 140.854f;
					break;
				case 1:
					Var0 = { 2618.928f, 641.5409f, 72.5471f };
					Var0.f_3 = 154.8f;
					break;
				case 2:
					Var0 = { 2620.851f, 639.9678f, 72.5471f };
					Var0.f_3 = -225.36f;
					break;
				case 3:
					Var0 = { 2394.678f, 1057.208f, 81.077f };
					Var0.f_3 = 137.864f;
					break;
				case 4:
					Var0 = { 2392.567f, 1059.698f, 83.7832f };
					Var0.f_3 = 192.24f;
					break;
				case 5:
					Var0 = { 2395.801f, 1059.344f, 83.8175f };
					Var0.f_3 = -193.68f;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2617.576f, 643.037f, 72.5478f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2622.594f, 638.7287f, 72.5478f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2398.032f, 1057.473f, 83.9033f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2393.453f, 1061.196f, 84.0263f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2402.396f, 1073.558f, 86.5286f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2396.352f, 1065.296f, 84.6819f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2394.385f, 1063.196f, 84.3828f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2389.755f, 1058.965f, 84.1392f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2385.277f, 1054.132f, 84.8011f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2382.449f, 1050.575f, 85.3463f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2379.803f, 1047.877f, 85.8123f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2376.352f, 1045.46f, 86.1738f };
					Var0.f_3 = 299.52f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2391.07f, 1060.221f, 84.0628f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2390.006f, 1058.561f, 84.0477f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2390.068f, 1057.23f, 84.0006f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2391.975f, 1055.304f, 84.0145f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2394.604f, 1053.607f, 84.0723f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2396.073f, 1053.357f, 84.5304f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2398.15f, 1057.73f, 83.938f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2616.908f, 642.1093f, 72.5479f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2615.17f, 640.7055f, 72.577f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2615.417f, 639.0948f, 72.5488f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2616.748f, 636.798f, 72.5487f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2619.313f, 635.5421f, 72.5488f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2621.1f, 636.1342f, 72.5463f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2621.718f, 637.6596f, 73.1958f };
					Var0.f_3 = 0f;
					break;
			}
			break;
	}
	return Var0;
}

bool func_17(int iParam0)
{
	return iLocal_390 == iParam0;
}

void func_18(int iParam0)
{
	if (iParam0 < 32)
	{
		MISC::SET_BIT(&iLocal_208, iParam0);
	}
	else
	{
		MISC::SET_BIT(&iLocal_209, (iParam0 - 32));
	}
}

void func_21()
{
	switch (Local_399)
	{
		case 8:
			iLocal_410 = 5;
			iLocal_218 = 8;
			break;
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					iLocal_410 = 4;
					iLocal_218 = 14;
					break;
				case 1:
					iLocal_410 = 7;
					iLocal_218 = 8;
					break;
			}
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*iParam0)
	{
		case 3:
		case 10:
			switch (iParam1)
			{
				case 0:
					(uParam2[0 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*uParam2)[0 /*32*/] = 22;
					(uParam2[0 /*32*/])->f_6 = { func_81(iParam4, 0) };
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0201_G_M_M_UniInbred_02_WHITE_01", 64);
					func_82(&((uParam2[0 /*32*/])->f_22));
					(uParam2[1 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*uParam2)[1 /*32*/] = 22;
					(uParam2[1 /*32*/])->f_6 = { func_81(iParam4, 1) };
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0202_G_M_M_UniInbred_02_WHITE_02", 64);
					func_82(&((uParam2[1 /*32*/])->f_22));
					(iParam3[0 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(iParam3[0 /*32*/])->f_3 = -2140306968;
					(*iParam3)[0 /*32*/] = 22;
					StringCopy(&((iParam3[0 /*32*/])->f_23), "0200_G_M_M_UniInbred_01_WHITE_02", 64);
					(iParam3[1 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(iParam3[1 /*32*/])->f_3 = -367995603;
					(*iParam3)[1 /*32*/] = 22;
					StringCopy(&((iParam3[1 /*32*/])->f_23), "0199_G_M_M_UniInbred_01_WHITE_01", 64);
					break;
				case 1:
					(uParam2[0 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(uParam2[0 /*32*/])->f_3 = -71632767;
					(*uParam2)[0 /*32*/] = 22;
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0204_G_M_M_UniInbred_03_WHITE_02", 64);
					(uParam2[1 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(uParam2[1 /*32*/])->f_3 = -1246892952;
					(*uParam2)[1 /*32*/] = 22;
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0202_G_M_M_UniInbred_02_WHITE_02", 64);
					(iParam3[0 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*iParam3)[0 /*32*/] = 22;
					StringCopy(&((iParam3[0 /*32*/])->f_23), "0203_G_M_M_UniInbred_03_WHITE_01", 64);
					(iParam3[1 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*iParam3)[1 /*32*/] = 22;
					StringCopy(&((iParam3[1 /*32*/])->f_23), "0201_G_M_M_UniInbred_02_WHITE_01", 64);
					(iParam3[2 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*iParam3)[2 /*32*/] = 22;
					StringCopy(&((iParam3[2 /*32*/])->f_23), "0199_G_M_M_UniInbred_01_WHITE_01", 64);
					(iParam3[3 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*iParam3)[3 /*32*/] = 22;
					StringCopy(&((iParam3[3 /*32*/])->f_23), "0200_G_M_M_UniInbred_01_WHITE_02", 64);
					break;
			}
			break;
		case 8:
			(iParam3[0 /*32*/])->f_1 = joaat("S_M_M_FUSSARHENCHMAN_01");
			(iParam3[0 /*32*/])->f_3 = 985642159;
			(*iParam3)[0 /*32*/] = 6;
			StringCopy(&((iParam3[0 /*32*/])->f_23), "0761_S_M_M_FussarHenchman_01_HISPANIC_02", 64);
			(iParam3[0 /*32*/])->f_6 = { func_81(iParam4, 0) };
			func_82(&((iParam3[0 /*32*/])->f_22));
			(iParam3[1 /*32*/])->f_1 = joaat("S_M_M_FUSSARHENCHMAN_01");
			(iParam3[1 /*32*/])->f_3 = 754555171;
			(*iParam3)[1 /*32*/] = 6;
			StringCopy(&((iParam3[1 /*32*/])->f_23), "0760_S_M_M_FussarHenchman_01_HISPANIC_01", 64);
			(iParam3[1 /*32*/])->f_6 = { func_81(iParam4, 1) };
			func_82(&((iParam3[1 /*32*/])->f_22));
			break;
	}
}

void func_23()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar6;
	float fVar9;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		vVar2 = { func_16(iLocal_410, iVar0) };
		if (!__LIB_0__::func_86(vVar2))
		{
			iVar1++;
			vVar6 = { vVar6 + vVar2 };
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	fVar9 = (1f / BUILTIN::TO_FLOAT(iVar1));
	vLocal_225 = { vVar6 * Vector(fVar9, fVar9, fVar9) };
}

void func_25(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			__LIB_0__::func_804(iParam0->f_3);
			func_84(iParam0->f_4);
			__LIB_0__::func_804(iParam0->f_4);
			break;
		case 1:
			__LIB_0__::func_803(iParam0->f_3);
			func_84(iParam0->f_4);
			__LIB_0__::func_804(iParam0->f_4);
			if (iParam0->f_6)
			{
				__LIB_0__::func_400(*iParam0);
			}
			break;
		case 2:
			__LIB_0__::func_804(iParam0->f_3);
			__LIB_0__::func_803(iParam0->f_4);
			__LIB_7__::func_535(iParam0->f_4, 0, 0, 3, 0);
			__LIB_0__::func_400(iParam0->f_1);
			if (iParam0->f_6)
			{
				__LIB_0__::func_400(*iParam0);
			}
			__LIB_0__::func_401(iParam0->f_2);
			break;
	}
}

void func_26()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	__LIB_0__::func_172(iLocal_242);
	switch (Local_399)
	{
		case 8:
			iLocal_242 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1575.651f, -7256.715f, 67.1781f, 0f, 0f, 52.60049f, 3.488908f, 3.590751f, 6.974801f, "Hole Final");
			break;
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					iLocal_242 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2618.099f, 638.6492f, 70.39433f, 0f, 0f, -36.92979f, 6.481314f, 9.388302f, 4.046504f, "Hole Final");
					iLocal_404 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("REBOT Failsafe");
					VOLUME::_0x39816F6F94F385AD(iLocal_404, 2618.801f, 638.7524f, 71.26722f, 0f, 0f, -44.30514f, 5.378187f, 2.417387f, 8.548813f);
					VOLUME::_0xBCE668AAF83608BE(iLocal_404, 2618.01f, 638.7421f, 72.62446f, 0f, 0f, -44.33657f, 2.761381f, 1.420066f, 1f);
					break;
				case 1:
					iLocal_242 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2393.854f, 1057.106f, 81.62882f, 0f, 0f, 57.04266f, 5.895999f, 9.398265f, 4.078178f, "Hole Final");
					break;
			}
			break;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iLocal_242) };
	vVar3 = { VOLUME::_GET_VOLUME_ROTATION(iLocal_242) };
	vVar6 = { VOLUME::_GET_VOLUME_SCALE(iLocal_242) };
	iLocal_243 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6 + Vector(10f, 5f, 5f), "Horse Volume");
	vLocal_1216 = { VOLUME::_GET_VOLUME_SCALE(iLocal_243) };
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_404))
	{
		iLocal_404 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6 + Vector(3f, -0.75f, -0.75f), "REBOT Failsafe");
	}
}

void func_27(int iParam0)
{
	iLocal_407 = iParam0;
}

bool func_28()
{
	if (bLocal_1194)
	{
		return true;
	}
	switch (iLocal_396)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_14))
			{
				func_89(iLocal_391);
				STREAMING::REQUEST_ANIM_DICT("SCRIPT_RE@BOOBY_TRAP@CHASE");
				STREAMING::REQUEST_ANIM_DICT("AI_GESTURES@GEN_MALE@STANDING@SPEAKER");
				func_90();
				if (func_33(&Local_399))
				{
					STREAMING::REQUEST_MODEL(func_91(3, func_34(&Local_399)), false);
				}
				if (!func_92())
				{
					func_4();
				}
				__LIB_3__::func_445(&Local_571);
				__LIB_3__::func_445(&Local_442);
				__LIB_11__::func_860(1);
			}
			break;
		case 1:
			if (!func_95(iLocal_391))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_RE@BOOBY_TRAP@CHASE") || !STREAMING::HAS_ANIM_DICT_LOADED("AI_GESTURES@GEN_MALE@STANDING@SPEAKER"))
			{
				return false;
			}
			if ((!__LIB_3__::func_633(&Local_327) || !__LIB_3__::func_633(&Local_348)) || !__LIB_3__::func_633(&Local_369))
			{
				return false;
			}
			if (!__LIB_3__::func_962(&Local_348, 3) || !__LIB_3__::func_962(&Local_348, 7))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_571))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_442))
			{
				return false;
			}
			if (func_33(&Local_399))
			{
				if (!STREAMING::HAS_MODEL_LOADED(func_91(3, func_34(&Local_399))))
				{
					return false;
				}
				if (!__LIB_17__::func_877())
				{
					return false;
				}
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REBOT_START"))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("REBOT_Sounds", 0))
			{
				return false;
			}
			bLocal_1194 = true;
			return true;
	}
	return false;
}

bool func_29(int iParam0)
{
	__LIB_0__::func_400(iParam0->f_2);
	if (iParam0->f_6)
	{
		__LIB_0__::func_400(*iParam0);
	}
	if (__LIB_0__::func_898(iParam0->f_3))
	{
	}
	if (__LIB_0__::func_898(iParam0->f_4))
	{
		__LIB_0__::func_804(iParam0->f_4);
		if (__LIB_18__::func_39(iParam0->f_4))
		{
			func_84(iParam0->f_4);
		}
	}
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0->f_1))
	{
		return false;
	}
	return true;
}

Vector3 func_30(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return 1575.37f, -7256.625f, 69f;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return 2619.116f, 639.025f, 72.88657f;
				case 1:
					return 2394.258f, 1057.631f, 83.874f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

char* func_31(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return "DES_trap_gua01x";
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return "DES_trap_roa0B01x";
				case 1:
					return "DES_trap_roa02x";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_32(int iParam0, var uParam1, vector3 vParam2, float fParam5, char* sParam6)
{
	int iVar0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
	{
		*iParam0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(vParam2, fParam5, sParam6);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
	{
		iVar0 = OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0);
		switch (iVar0)
		{
			case 15:
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 3);
				break;
			case 5:
				*uParam1 = 3;
				return true;
			case 4:
			case 14:
				break;
			default:
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 4);
				break;
		}
	}
	return false;
	switch (*uParam1)
	{
		case 0:
			*iParam0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(vParam2, fParam5, sParam6);
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0) != 5)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 4);
				}
				*uParam1 = 1;
			}
			break;
		case 1:
			iVar0 = OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0);
			switch (iVar0)
			{
				case 4:
				case 5:
				case 14:
					*uParam1 = 2;
					break;
				case 11:
					break;
				default:
					break;
			}
			break;
		case 2:
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0) == 5)
			{
				*uParam1 = 3;
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_33(int iParam0)
{
	if (func_34(iParam0) != -1)
	{
		return true;
	}
	return false;
}

int func_34(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	iVar0 = 0;
	if (func_91(iParam0, iParam1) != 0)
	{
		iVar1 = func_102(iParam0, iParam1);
		vVar2 = { func_81(iParam0, iParam1) };
		vVar5 = { func_103(iParam0, iParam1) };
		iVar8 = func_91(iParam0, iParam1);
		iVar0 = __LIB_3__::func_370(iVar8, vVar2, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		ENTITY::SET_ENTITY_ROTATION(iVar0, vVar5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, MISC::IS_BIT_SET(iVar1, 0));
		ENTITY::SET_ENTITY_COLLISION(iVar0, !MISC::IS_BIT_SET(iVar1, 1), false);
		PED::SET_PED_CAN_BE_TARGETTED(iVar0, !MISC::IS_BIT_SET(iVar1, 2));
	}
	return iVar0;
}

bool func_40(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(iLocal_208, iParam0);
	}
	else
	{
		return MISC::IS_BIT_SET(iLocal_209, (iParam0 - 32));
	}
	return false;
}

bool func_41()
{
	switch (iLocal_397)
	{
		case 0:
			switch (iLocal_390)
			{
				case 0:
					if (__LIB_3__::func_467(__LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), &Local_571, &iLocal_431, 0, 0, -1, 1))
					{
						func_111();
						func_112(&iLocal_431);
						func_113(1);
					}
					break;
				case 1:
					if (__LIB_3__::func_434(&(Local_571[0 /*32*/]), &(iLocal_431[0]), __LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), 0, 1))
					{
						func_115(iLocal_431[0]);
						func_113(1);
					}
					break;
			}
			break;
		case 1:
			if (__LIB_3__::func_962(&Local_348, 7))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_44()
{
	vector3 vVar0;
	switch (Local_399)
	{
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					Local_636[0 /*36*/].f_6 = 0;
					Local_636[1 /*36*/].f_6 = 8;
					break;
				case 1:
					Local_636[0 /*36*/].f_6 = 2;
					Local_636[1 /*36*/].f_6 = 11;
					break;
			}
			break;
	}
	Local_636[0 /*36*/].f_9 = 0;
	Local_636[1 /*36*/].f_9 = 1;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
	{
		iLocal_244 = VOLUME::_CREATE_VOLUME_BOX(vVar0, 0f, 0f, 0f, 3f, 3f, 3f);
		PED::_0x7C00CFC48A782DC0(iLocal_244, iLocal_431[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		TASK::_0x2A10538D0A005E81(iLocal_244, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
	{
		iLocal_245 = VOLUME::_CREATE_VOLUME_BOX(vVar0, 0f, 0f, 0f, 3f, 3f, 3f);
		PED::_0x7C00CFC48A782DC0(iLocal_245, iLocal_431[1], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		TASK::_0x2A10538D0A005E81(iLocal_245, 1);
	}
}

void func_45(int iParam0, int iParam1)
{
	int iVar0;
	switch (*iParam0)
	{
		case 8:
			(*iParam1)[0] = VOLUME::_CREATE_VOLUME_BOX(1575.64f, -7256.629f, 68.85276f, 0f, 0f, 48.98185f, 3.830818f, 4.016119f, 1.959466f);
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					(*iParam1)[0] = VOLUME::_CREATE_VOLUME_BOX(2619.242f, 638.7248f, 72.29485f, 0f, 0f, -45.56617f, 5.667787f, 2.617765f, 1.773518f);
					(*iParam1)[1] = VOLUME::_CREATE_VOLUME_BOX(2618.507f, 638.6099f, 72.68327f, 0f, 0f, -45.39423f, 6.666659f, 2.130628f, 1f);
					(*iParam1)[2] = VOLUME::_CREATE_VOLUME_BOX(2617.644f, 637.6544f, 72.62564f, 0f, 0f, 45.02389f, 0.599446f, 5.483649f, 1f);
					(*iParam1)[3] = VOLUME::_CREATE_VOLUME_BOX(2617.263f, 637.6937f, 72.62564f, 0f, 0f, 45.02389f, 1.252389f, 3.982504f, 1f);
					break;
				case 1:
					(*iParam1)[0] = VOLUME::_CREATE_VOLUME_BOX(2395.139f, 1057.096f, 83.99776f, 0f, 0f, -38.41385f, 5.346074f, 3.003638f, 1f);
					(*iParam1)[1] = VOLUME::_CREATE_VOLUME_BOX(2393.754f, 1056.402f, 83.81212f, 0f, 0f, -35.48756f, 7.099788f, 2.49697f, 1f);
					(*iParam1)[2] = VOLUME::_CREATE_VOLUME_BOX(2392.959f, 1059.686f, 83.439f, 0f, 0f, -35.49883f, 2.01019f, 2.183676f, 1f);
					break;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST((*iParam1)[iVar0]))
		{
			PATHFIND::_0x19C7567D2F2287D6((*iParam1)[iVar0], 7);
		}
		iVar0++;
	}
}

int func_47()
{
	if (__LIB_0__::func_75(&uLocal_1247))
	{
		if (!__LIB_1__::func_285(&uLocal_1247, 30f))
		{
			return 0;
		}
	}
	if (Local_399 == 8)
	{
		return __LIB_3__::func_450(&Local_14, &iLocal_426, func_128(), func_128(), 1, 0, 1, 1, 0, 0, 0, 0, 0);
	}
	if (__LIB_3__::func_505(&iLocal_426, 0))
	{
		return __LIB_3__::func_450(&Local_14, &iLocal_431, func_128(), func_128(), 1, 0, 1, 1, 0, 0, 0, 0, 0);
	}
	return __LIB_3__::func_450(&Local_14, &iLocal_426, func_128(), func_128(), 1, 0, 1, 1, 0, 0, 0, 0, 0);
}

void func_50()
{
	int iVar0;
	if (Local_399 == 8)
	{
		return;
	}
	if (bLocal_401)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iLocal_860[iVar0] = func_133(&(iLocal_431[iVar0]), &(Local_709[iVar0 /*75*/]), __LIB_2__::func_340(3, 0, 0) | 2048, 1, 0, 0, 0);
			iVar0++;
		}
	}
}

int func_51()
{
	func_134();
	func_135();
	func_136();
	func_137();
	func_138();
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_242))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_242, 1, 0))
		{
			CAM::_0xC252C0CC969AF79A(1);
			CAM::_0xE2BB2D6A9FE2ECDE(1);
		}
	}
	if (func_40(47))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_327.f_1))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_348.f_1))
			{
				func_140(47);
			}
		}
	}
	else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_327.f_1) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_348.f_1))
	{
		func_18(47);
	}
	if (func_40(47))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	switch (iLocal_390)
	{
		case 0:
			return func_141();
		case 1:
			return func_142();
		default:
			break;
	}
	return 1;
}

void func_61()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_240))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_240);
	}
	__LIB_0__::func_172(iLocal_240);
}

void func_64(int iParam0, int iParam1)
{
	if (iParam0 != 8)
	{
		if (iParam1 == 0)
		{
			__LIB_3__::func_461(6, 0, 1);
		}
		else
		{
			__LIB_3__::func_461(6, 0, 0);
		}
	}
}

void func_66()
{
	int iVar0;
	if (bLocal_401)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_4__::func_487(&(Local_709[iVar0 /*75*/]));
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
			{
				__LIB_2__::func_603(&(iLocal_431[iVar0]), &(Local_709[iVar0 /*75*/]), &(Local_709[iVar0 /*75*/].f_21), 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_431[iVar0], 301, true);
			}
			iVar0++;
		}
		bLocal_401 = false;
	}
}

void func_67(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST((*iParam0)[iVar0]))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2((*iParam0)[iVar0]);
			VOLUME::_DELETE_VOLUME((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_68(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	iVar1 = PED::GET_MOUNT(Global_35);
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
		{
			if (!bParam1 || !DECORATOR::DECOR_EXIST_ON((*iParam0)[iVar0], "pedRoam_bInPedRoam"))
			{
				if (!bParam2)
				{
					__LIB_3__::func_416((*iParam0)[iVar0], 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, iVar1, 0);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD((*iParam0)[iVar0], 40000f, 0);
				}
				if (bParam3)
				{
					if (PED::GET_PED_STEALTH_MOVEMENT((*iParam0)[iVar0]))
					{
						PED::SET_PED_STEALTH_MOVEMENT((*iParam0)[iVar0], 0, 0, 0);
					}
					else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam0)[iVar0]))
					{
						PED::_SET_PED_CROUCH_MOVEMENT((*iParam0)[iVar0], false, 0, false);
					}
				}
				__LIB_3__::func_259((*iParam0)[iVar0], 0);
			}
		}
		iVar0++;
	}
}

int func_78(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 != 8)
	{
		iVar0 = __LIB_3__::func_564(6, 0);
	}
	if (iVar0 < 0 || iVar0 > (2 - 1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

Vector3 func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2588.853f, 617.8844f, 74.7204f;
				case 1:
					return 2588.99f, 623.9705f, 74.5359f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2406.779f, 1070.112f, 85.9727f;
				case 1:
					return 2401.868f, 1077.862f, 87.4815f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1555.165f, -7274.888f, 71.6718f;
				case 1:
					return 1552.618f, -7279.881f, 72.1041f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 4214.511f, -3737.849f, 167.0622f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_82(int iParam0)
{
	__LIB_1__::func_683(iParam0, 32);
}

void func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = __LIB_4__::func_132(iVar0);
		if (iVar1 == -1)
		{
			Jump @75; //curOff = 38
		}
		else if (iVar1 == iParam0)
		{
			if (func_198(iVar1))
			{
				__LIB_0__::func_804(iVar1);
				__LIB_17__::func_433(iVar0);
			}
		}
		else
		{
			iVar0++;
		}
	}
}

void func_89(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_207(iParam0))
	{
		STREAMING::REQUEST_MODEL(func_91(iParam0, iVar0), false);
		iVar0++;
	}
}

int func_90()
{
	if (__LIB_3__::func_632(&Local_327, "scenario@randomEvent@BOOBY_TRAP@run", 40170, 40303, 0, 0, 0, 0, 0))
	{
		if (__LIB_3__::func_632(&Local_348, "scenario@randomEvent@BOOBY_TRAP@walk", 40170, 40303, 3, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("G_M_M_UNIINBRED_01");
				case 1:
					return joaat("G_M_M_UNIINBRED_01");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("G_M_M_UNIINBRED_01");
				case 1:
					return joaat("G_M_M_UNIINBRED_01");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("S_M_M_FUSSARHENCHMAN_01");
				case 1:
					return joaat("S_M_M_FUSSARHENCHMAN_01");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("A_M_M_GUATOWNFOLK_01");
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_92()
{
	switch (Local_399)
	{
		case 8:
			return __LIB_3__::func_632(&Local_369, "script@beat@wilderness@boobyTrap@fussar", 40170, 40303, 4, 0, 0, 0, 0);
		default:
			break;
	}
	return __LIB_3__::func_632(&Local_369, "script@beat@wilderness@boobyTrap@murfree", 40170, 40303, 4, 0, 0, 0, 0);
	return false;
}

bool func_95(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_207(iParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_91(iParam0, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 66.24f;
				case 1:
					return 0f, 0f, 61.2f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -54f;
				case 1:
					return 0f, 0f, -55.44f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -62.64f;
				case 1:
					return 0f, 0f, -41.76f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 84.24f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_111()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iVar0]))
		{
			__LIB_1__::func_991(iLocal_426[iVar0], 0);
		}
		iVar0++;
	}
}

void func_112(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_115((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_113(int iParam0)
{
	iLocal_397 = iParam0;
}

void func_115(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (Local_399)
		{
			case 3:
			case 10:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_MURFREE_BROOD"));
				break;
			case 8:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GUAMA_LAW"));
				break;
		}
	}
}

bool func_128()
{
	return func_40(6);
}

int func_133(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	return func_263(uParam0, iParam1, iParam1->f_74, &(iParam1->f_21), 0f, iParam3, iParam4, iParam1->f_73, iParam2, iParam5, iParam6, 2, -1082130432 /* Float: -1f */);
}

void func_134()
{
	if (!func_40(36))
	{
		if (func_40(35))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERRUPTIBLE")) || (iLocal_411 == 0 && __LIB_4__::func_325(&Local_327, Global_35, "player", 1))) || (iLocal_411 == 1 && __LIB_4__::func_325(&Local_348, Global_35, "player", 1)))
			{
				func_18(36);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_140(43);
				bLocal_1260 = true;
			}
		}
	}
	else if (bLocal_1260)
	{
		if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
		{
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED"))
			{
				func_266();
			}
			bLocal_1260 = false;
		}
	}
}

void func_135()
{
	int iVar0;
	int iVar1;
	if (bLocal_1195)
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
		{
			if (!func_267())
			{
				if (func_268())
				{
					if (!__LIB_0__::func_75(&uLocal_1190))
					{
						__LIB_1__::func_148(&uLocal_1190);
					}
					else if (__LIB_1__::func_285(&uLocal_1190, 3f))
					{
						func_270();
					}
				}
			}
		}
	}
	func_271();
	if (!bLocal_1183)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (__LIB_1__::func_205(iVar0, iLocal_243, 1, 0))
				{
					bLocal_1183 = true;
				}
			}
			else
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (func_272(iVar1))
					{
						func_273();
						func_274();
						PED::SET_PED_USING_ACTION_MODE(Global_35, true, 20000, 0);
						func_66();
					}
				}
			}
		}
		else if (!func_40(2))
		{
			if (func_275() && (!func_40(15) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1)))
			{
				func_273();
				func_274();
				func_66();
				PED::SET_PED_USING_ACTION_MODE(Global_35, true, 20000, 0);
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, 2000, 3000, 2, __LIB_4__::func_345(Global_35, vLocal_225, 1065353216 /* Float: 1f */), (vLocal_225.z - 1f), vLocal_225, vLocal_225);
			}
			else if (func_277())
			{
				if (Local_399 == 8)
				{
					func_274();
				}
				func_18(2);
				func_18(35);
			}
		}
	}
	else
	{
		if (__LIB_0__::func_75(&uLocal_252))
		{
			__LIB_1__::func_148(&uLocal_252);
		}
		if (bLocal_1183)
		{
			if (func_278())
			{
				func_18(21);
				bLocal_1183 = false;
			}
		}
	}
}

void func_136()
{
	vector3 vVar0;
	vector3 vVar3;
	if (!func_40(34))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1121862613))
		{
			if (func_280(&vVar0, &vVar3, __LIB_0__::func_55(Local_399 == 8, 1, 0)))
			{
				switch (iLocal_411)
				{
					case 0:
						__LIB_3__::func_938(&Local_327, vVar0, vVar3, 2);
						break;
					case 1:
						__LIB_3__::func_938(&Local_348, vVar0, vVar3, 2);
						break;
				}
			}
			__LIB_4__::func_392();
			func_18(34);
			func_18(46);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1758060041))
	{
		if (!func_282(&iLocal_406, &uLocal_415, 0))
		{
		}
	}
}

void func_137()
{
	if (bLocal_1241 && !bLocal_1242)
	{
		if (((((!__LIB_2__::func_136(iLocal_426[0], 0) && !__LIB_2__::func_136(iLocal_426[1], 0)) && !__LIB_2__::func_136(iLocal_426[2], 0)) && !__LIB_2__::func_136(iLocal_426[3], 0)) && !__LIB_2__::func_136(iLocal_431[0], 0)) && !__LIB_2__::func_136(iLocal_431[1], 0))
		{
			__LIB_2__::func_478(Global_35, Global_35, "RE_BOT_FLEE_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_1242 = true;
			__LIB_1__::func_148(&uLocal_1244);
		}
	}
}

void func_138()
{
	bool bVar0;
	if (!bLocal_1243 && Local_399 != 8)
	{
		if (Local_14.f_46)
		{
			bVar0 = (__LIB_0__::func_75(&uLocal_1247) || (__LIB_3__::func_505(&iLocal_426, 0) && __LIB_3__::func_505(&iLocal_431, 0)));
			if (bVar0)
			{
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					if (!__LIB_0__::func_75(&uLocal_1247))
					{
						__LIB_1__::func_148(&uLocal_1247);
					}
					else if (__LIB_1__::func_313(&uLocal_1247, 2f))
					{
						if (iLocal_390 == 0)
						{
							if (__LIB_2__::func_155(1, 1))
							{
								__LIB_2__::func_478(Global_35, Global_35, "RE_BOT_FTH_V1_PLYFINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_478(Global_35, Global_35, "RE_BOT_FTH_V1_PLYFINAL_FEUD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
						else
						{
							__LIB_2__::func_478(Global_35, Global_35, "RE_BOT_FTH_V2_PLYFINAL_FIGHT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						bLocal_1243 = true;
					}
				}
			}
		}
	}
}

void func_140(int iParam0)
{
	if (iParam0 < 32)
	{
		MISC::CLEAR_BIT(&iLocal_208, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_209, (iParam0 - 32));
	}
}

int func_141()
{
	func_287();
	if (iLocal_398 > 1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_431[0], 2118640473))
		{
			if (!__LIB_2__::func_136(iLocal_431[1], 0))
			{
				func_288(0, 0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_431[1], 2118640473))
		{
			if (!__LIB_2__::func_136(iLocal_431[0], 0))
			{
				func_288(1, 0);
			}
		}
	}
	switch (iLocal_398)
	{
		case 0:
			if (Local_399 != 8)
			{
				func_289(0, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), "Murfree_01", 0, 1, 1);
				func_289(1, joaat("WEAPON_REVOLVER_CATTLEMAN"), "Murfree_02", 0, 1, 1);
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_431[0], true, 0, false);
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_431[1], true, 0, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_431[0], Global_35, -1, -1f, -1f, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_431[1], Global_35, -1, -1f, -1f, -1f);
			}
			func_290(1);
			break;
		case 1:
			if (func_291())
			{
				func_292(11, 2048);
				if (Local_399 == 8)
				{
					func_290(2);
				}
				else
				{
					__LIB_3__::func_426(&Local_14, &(Local_14.f_48), 6, &(Local_14.f_51.f_6));
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(iLocal_431[0], false, 0, false);
						PED::SET_PED_USING_ACTION_MODE(iLocal_431[0], true, -1, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(iLocal_431[1], false, 0, false);
						PED::SET_PED_USING_ACTION_MODE(iLocal_431[1], true, -1, 0);
					}
					func_293();
					if (!__LIB_0__::func_71(Global_35))
					{
						func_290(5);
					}
					else
					{
						iLocal_246 = __LIB_2__::func_825(Global_35);
						func_290(4);
					}
				}
			}
			break;
		case 2:
			func_296();
			break;
		case 4:
			func_297();
			if (func_298())
			{
				func_290(5);
				func_293();
			}
			break;
		case 5:
			return func_299();
		case 8:
			if (Local_399 == 8)
			{
				if (!bLocal_1250)
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
					{
						if (ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
						{
							__LIB_2__::func_478(Global_35, Global_35, "RE_BOT_GUA_V1_PLYFINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							bLocal_1250 = true;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_142()
{
	func_300();
	switch (iLocal_398)
	{
		case 0:
			__LIB_3__::func_285(iLocal_431[0], &Local_14, 0);
			PED::_0x923583741DC87BCE(iLocal_431[0], "Default");
			PED::_0x89F5E7ADECCCB49C(iLocal_431[0], "injured_LEFT_LEG");
			iLocal_398 = 1;
			break;
		case 1:
			if (func_291())
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_431[0], Global_35, -1, -1f, -1f, -1f);
				__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("OVERHERE", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_292(11, 2048);
				__LIB_3__::func_426(&Local_14, &(Local_14.f_48), 6, &(Local_14.f_51.f_6));
				__LIB_2__::func_73(iLocal_431[0], &(uLocal_439[0]), -89429847, 580546400, 0, 0);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_439[0], "RE_INTER_STRANGER");
				iLocal_398 = 3;
			}
			else
			{
				func_304();
				if (!bLocal_1258)
				{
					func_305();
				}
			}
			break;
		case 3:
			if (func_306())
			{
				iLocal_398 = 8;
			}
			break;
		case 8:
			break;
	}
	return 0;
}

bool func_198(int iParam0)
{
	int iVar0;
	if (__LIB_4__::func_312(iParam0, &iVar0))
	{
		if (__LIB_0__::func_23() > __LIB_10__::func_654(iVar0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_RUN_SHORT";
		case 3:
			return "PBL_WALK_SHORT";
		case 2:
			return "PBL_RUN_INBRED_RD";
		case 4:
			return "PBL_ACTION";
		case 5:
			return "PBL_BREAKOUT_MID";
		case 6:
			return "PBL_BREAKOUT_POST";
		case 7:
			return __LIB_0__::func_196(Local_399 == 8, "PBL_CROUCH_WALK_SHORT", "PBL_CROUCH_WALK");
		default:
			break;
	}
	return __LIB_3__::func_497("[REBOT]", "REBOT_PBL_INDEX_NAME: Invalid PBL Index.");
}

int func_263(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_330(*uParam0, iParam1, uParam3))
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
						return func_263(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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

void func_266()
{
	int iVar0;
	int iVar1;
	iVar0 = func_455(160, 0);
	iVar1 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (!func_456(iVar0))
	{
		if (iVar1 == joaat("WEAPON_UNARMED"))
		{
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(Global_35, false, false);
		}
	}
	if (!func_456(iVar0))
	{
		return;
	}
	if (iVar1 != iVar0)
	{
		if (!__LIB_0__::func_163(Global_35, 716706914))
		{
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 0, false, false);
			WEAPON::_0x72D4CB5DB927009C(iVar0, -1, 0);
		}
	}
}

bool func_267()
{
	switch (iLocal_411)
	{
		case 0:
			return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_327.f_1, "Loop_Bool");
		case 1:
			return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_348.f_1, "Loop_Bool");
		default:
			break;
	}
	return false;
}

bool func_268()
{
	switch (iLocal_411)
	{
		case 0:
			if (__LIB_3__::func_943(&Local_327, "Loop", 1) || __LIB_3__::func_943(&Local_327, "Loop_Break", 1))
			{
				return true;
			}
			break;
		case 1:
			if (__LIB_3__::func_943(&Local_348, "Loop", 1) || __LIB_3__::func_943(&Local_348, "Loop_Break", 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_270()
{
	switch (iLocal_411)
	{
		case 0:
			__LIB_3__::func_949(&Local_327, "Loop_Bool", 1);
			break;
		case 1:
			__LIB_3__::func_949(&Local_348, "Loop_Bool", 1);
			break;
	}
}

void func_271()
{
	float fVar0;
	int iVar1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = 0f;
		iVar1 = PED::GET_MOUNT(Global_35);
		if (TASK::IS_PED_RUNNING(iVar1))
		{
			fVar0 = 4f;
		}
		else if (TASK::IS_PED_SPRINTING(iVar1))
		{
			fVar0 = 6f;
		}
		VOLUME::_SET_VOLUME_SCALE(iLocal_243, vLocal_1216 + Vector(fVar0, fVar0, fVar0));
	}
	else
	{
		VOLUME::_SET_VOLUME_SCALE(iLocal_243, vLocal_1216);
	}
}

bool func_272(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	if (VEHICLE::_IS_DRAFT_VEHICLE(iParam0) && VEHICLE::_0xA19447D83294E29F(iParam0, &iVar0, &uVar1))
	{
		iVar2 = 0;
		while (iVar2 < iVar0)
		{
			iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iVar3, iLocal_243, true, 0))
				{
					return true;
				}
			}
			iVar2++;
		}
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_243, true, 0);
}

void func_273()
{
	func_282(&iLocal_406, &uLocal_415, 0);
	func_18(2);
	func_18(48);
}

void func_274()
{
	if (!bLocal_1236)
	{
		if (Local_399 != 8)
		{
			if (iLocal_390 == 0)
			{
				__LIB_2__::func_478(Global_35, Global_35, "RE_BOT_UNI_V0_WTH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(Global_35, Global_35, "RE_BOT_UNI_V0_SHIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		else
		{
			__LIB_2__::func_478(Global_35, Global_35, "RE_BOT_GUA_V1_SHIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		bLocal_1236 = true;
	}
}

bool func_275()
{
	if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 0))
	{
		return false;
	}
	if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_404, true, 0) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 21030, 0f, 0f, 0f))) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 0, 0f, 0f, 0f))) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 45454, 0f, 0f, 0f))) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 33646, 0f, 0f, 0f)))
	{
		return true;
	}
	return false;
}

bool func_277()
{
	var uVar0;
	var uVar4;
	var uVar8;
	vector3 vVar12;
	int iVar15;
	int iVar16;
	int iVar17;
	if (!func_40(15))
	{
		if (func_462(&uVar0, &uVar4, &uVar8, Global_36))
		{
			func_463(&uVar0, &uVar4, &uVar8);
			iVar17 = func_464();
			iVar16 = func_465(iVar17);
			if (VOLUME::_DOES_VOLUME_EXIST(iVar16) && func_466(iVar17, &iVar16))
			{
				switch (iVar17)
				{
					case 1:
						if (func_467(&Local_327, iLocal_402, 0, 0))
						{
							func_18(15);
							return true;
						}
						break;
					case 2:
						if (func_467(&Local_348, iLocal_403, 1, 0))
						{
							func_18(15);
							return true;
						}
						break;
					case 3:
						if (func_467(&Local_348, iLocal_403, 1, 1))
						{
							func_18(15);
							return true;
						}
						break;
					case 4:
						vVar12 = { func_468(&Local_399) };
						iVar15 = PED::GET_MOUNT(Global_35);
						if (ENTITY::IS_ENTITY_IN_VOLUME(iVar15, iLocal_242, true, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar15))
							{
								__LIB_1__::func_864(iVar15, 0, 0);
								PED::SET_PED_TO_RAGDOLL_WITH_FALL(iVar15, 3000, 5000, 4, 0f, 0f, -1f, vVar12.z, vVar12, vVar12);
							}
							PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, 3000, 10000, 0, 0f, 0f, -1f, vVar12.z, vVar12, vVar12);
							__LIB_3__::func_962(&Local_327, 2);
							if (!func_282(&iLocal_406, &uLocal_415, 1))
							{
							}
							func_18(32);
							func_18(15);
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

bool func_278()
{
	return __LIB_2__::func_134(Global_35, &uLocal_1237, 1, 0, 256, 1);
}

bool func_280(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	iVar1 = -1;
	if (iParam2 < 0)
	{
		iVar2 = func_470(&Local_399, iLocal_411);
		if (iVar2 > 0)
		{
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (func_471(&Local_399, iLocal_411, iVar0, &vVar8, &vVar14, &uVar4))
				{
					if (iVar1 < 0 || BUILTIN::VDIST(Global_36, vVar14) < BUILTIN::VDIST(Global_36, vVar11))
					{
						iVar1 = iVar0;
						vVar5 = { vVar8 };
						vVar11 = { vVar14 };
						uVar3 = uVar4;
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_471(&Local_399, iLocal_411, iParam2, &vVar8, &vVar14, &uVar4);
		iVar1 = iParam2;
		vVar5 = { vVar8 };
		vVar11 = { vVar14 };
		uVar3 = uVar4;
	}
	if (iVar1 > -1)
	{
		*uParam0 = { vVar5 };
		*uParam1 = { 0f, 0f, uVar3 };
		return true;
	}
	return false;
}

bool func_282(int iParam0, var uParam1, bool bParam2)
{
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
	{
		if (bParam2 || *uParam1 == 3)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 6);
			*uParam1 = 4;
		}
	}
	return false;
}

void func_287()
{
	int iVar0;
	if (!Local_14.f_46 && func_40(6))
	{
		if (func_474(&iLocal_426, &(Local_14.f_5), &iVar0, &uLocal_210, 0, (4 - 1), 1))
		{
			if (Local_399 != 8)
			{
				if (iLocal_398 >= 5)
				{
					if (!__LIB_0__::func_75(&uLocal_252))
					{
						if (iVar0 == 2 || iVar0 == 1)
						{
							__LIB_1__::func_148(&uLocal_252);
						}
					}
					Local_14.f_46 = 1;
				}
			}
			else
			{
				func_475();
				func_476();
				func_477();
				func_290(8);
				Local_14.f_46 = 1;
			}
		}
	}
}

void func_288(int iParam0, int iParam1)
{
	bool bVar0;
	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			switch (uLocal_1222[iParam0])
			{
				case 0:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 1:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 2:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 3:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 4:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 5:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
			}
			break;
		case 1:
			switch (uLocal_1222[iParam0])
			{
				case 0:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 1:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 2:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 3:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 4:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 5:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
			}
			break;
	}
	if (bVar0)
	{
		uLocal_1222[iParam0]++;
	}
}

void func_289(int iParam0, int iParam1, char[4] cParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam0]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_431[iParam0], true, true);
		switch (iParam0)
		{
			case 0:
				func_478(iLocal_431[iParam0], iParam1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
				break;
			case 1:
				func_478(iLocal_431[iParam0], iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam2))
		{
			__LIB_3__::func_963(&Local_369, cParam2, iLocal_431[iParam0], 0);
		}
		if (bParam3)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_431[iParam0], joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		if (bParam4)
		{
			PED::SET_PED_STEALTH_MOVEMENT(iLocal_431[iParam0], 1, 0, 1);
		}
		if (bParam5)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_431[iParam0], Global_35, -1, -1f, -1f, -1f);
		}
	}
}

void func_290(int iParam0)
{
	iLocal_398 = iParam0;
}

int func_291()
{
	switch (Local_399)
	{
		case 8:
			return func_480(__LIB_3__::func_179(&Local_14), &(Local_14.f_33), &uLocal_223, &uLocal_219, 0f, 35f, 0, 0, 1090519040 /* Float: 8f */);
		case 3:
		case 10:
			switch (iLocal_390)
			{
				case 0:
					if (func_40(2))
					{
						return 1;
					}
					if (!func_481())
					{
						return 0;
					}
					if (func_482(&Local_14, &uLocal_255, 0, 1, 1, 0.5f) || func_40(2))
					{
						return 1;
					}
					if (func_483())
					{
						return 1;
					}
					break;
				case 1:
					return __LIB_18__::func_100(iLocal_431[0], &(Local_14.f_33), &uLocal_224, &uLocal_219, 1073741824 /* Float: 2f */, 1110704128 /* Float: 45f */, 0, 0, 1092616192 /* Float: 10f */, 1);
			}
			break;
	}
	return func_485(&Local_14, &uLocal_392, 0f, 40f, 20f, 1500, 2f, 1065353216 /* Float: 1f */, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0);
}

void func_292(int iParam0, int iParam1)
{
	func_486(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 1);
}

void func_293()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_4__::func_331(&(Local_709[iVar0 /*75*/]), "", "", "");
		__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 1, 1, 0);
		__LIB_4__::func_329(&(Local_709[iVar0 /*75*/]), 1, __LIB_2__::func_460(11));
		Local_709[iVar0 /*75*/].f_74 = 35f;
		iVar0++;
	}
	func_491(&(Local_709[0 /*75*/]), 1, "RE_BOT_FTH_V1_THREATEN_A", 0);
	func_491(&(Local_709[1 /*75*/]), 1, "RE_BOT_FTH_V1_THREATEN_B", 0);
	bLocal_401 = true;
}

void func_296()
{
	bool bVar0;
	bool bVar1;
	bVar1 = false;
	func_492();
	switch (iLocal_412)
	{
		case 0:
			if (func_40(2))
			{
				__LIB_3__::func_426(&Local_14, &(Local_14.f_48), 6, &(Local_14.f_51.f_6));
				if (func_40(48))
				{
					vLocal_231 = { 1571.015f, -7260.388f, 69.31996f };
				}
				else
				{
					__LIB_3__::func_949(&Local_327, "Loop_Bool", 0);
					__LIB_3__::func_949(&Local_348, "Loop_Bool", 0);
				}
				iLocal_412 = 1;
			}
			break;
		case 1:
			if (__LIB_3__::func_467(__LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), &Local_442, &iLocal_426, 1, 0, -1, 1))
			{
				if (func_40(48) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 608457313))
				{
					func_112(&iLocal_426);
					func_493(iLocal_426[0], vLocal_234, joaat("WEAPON_REPEATER_CARBINE"), "Fussar_01", joaat("MOTIONSTATE_RUN"), 1073741824 /* Float: 2f */, 0);
					func_493(iLocal_426[1], vLocal_234, joaat("WEAPON_REPEATER_CARBINE"), "Fussar_02", joaat("MOTIONSTATE_RUN"), 1073741824 /* Float: 2f */, 1);
					func_494(iLocal_426[0]);
					func_494(iLocal_426[1]);
					func_18(6);
					iLocal_412 = 3;
				}
			}
			break;
		case 3:
			if (func_40(48) || ((__LIB_3__::func_634(&Local_327, 1, 0, 0) && __LIB_3__::func_943(&Local_327, "getup", 1)) || (__LIB_3__::func_634(&Local_348, 1, 0, 0) && __LIB_3__::func_943(&Local_348, "getup", 1))))
			{
				if (!func_40(48))
				{
					__LIB_3__::func_635(&Local_369);
				}
				__LIB_2__::func_73(iLocal_426[0], &(uLocal_434[0]), joaat("BLIP_STYLE_COP"), 942020339, 0, 0);
				__LIB_2__::func_73(iLocal_426[1], &(uLocal_434[1]), joaat("BLIP_STYLE_COP"), 942020339, 0, 0);
				func_476();
				iLocal_412 = 4;
			}
			break;
		case 4:
			bVar0 = func_496();
			if (!func_40(18))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					bVar1 = (PED::IS_PED_CLIMBING(Global_35) || !func_497());
					if (bVar0 || bVar1)
					{
						if (!bVar1)
						{
							func_498(1000, 3000);
						}
						else
						{
							func_499();
						}
						func_500();
						Local_14.f_50 = 1;
						func_18(18);
					}
				}
			}
			break;
	}
}

void func_297()
{
	if (bLocal_401)
	{
		func_501();
	}
	func_502(iLocal_431[0], &(Local_636[0 /*36*/]));
	func_502(iLocal_431[1], &(Local_636[1 /*36*/]));
}

bool func_298()
{
	if (!func_40(1))
	{
		if (((func_40(2) || func_40(48)) || PED::IS_PED_DEAD_OR_DYING(iLocal_431[0], true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_431[0], Global_35, 1, 1))
		{
			return true;
		}
	}
	if (!func_40(1))
	{
		if (PED::IS_PED_SHOOTING(iLocal_431[0]))
		{
			__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("LOAD", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_3__::func_447(&(uLocal_439[0]), iLocal_431[0], 0);
			__LIB_2__::func_315(1066055203, iLocal_431[0], 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
			{
				__LIB_3__::func_447(&(uLocal_439[1]), iLocal_431[1], 0);
			}
			func_18(1);
		}
	}
	else if (!func_40(11))
	{
		if (func_278())
		{
			iLocal_246 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_246))
			{
				TASK::_0x2E1D6D87346BB7D2(iLocal_246, iLocal_431[0], 0, 0);
			}
			func_18(11);
		}
	}
	else
	{
		if (!func_40(25))
		{
			if (PED::IS_PED_RAGDOLL(Global_35))
			{
				__LIB_1__::func_148(&uLocal_258);
				func_18(25);
				PED::SET_PED_RAGDOLL_FORCE_FALL(Global_35);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_246))
				{
					iLocal_246 = PED::_GET_LAST_MOUNT(Global_35);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_246))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_246, iLocal_431[0], 55f, -1, 0, 2.5f, 0);
				}
			}
		}
		else if (!func_40(3))
		{
			if (__LIB_1__::func_285(&uLocal_258, 0f))
			{
				if (!PED::IS_PED_RAGDOLL(Global_35))
				{
					func_18(25);
				}
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_35);
			}
		}
		__LIB_1__::func_539();
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
		{
			PED::_SET_PED_DAMAGE_MODIFIER(iLocal_431[0], 0.5f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
		{
			PED::_SET_PED_DAMAGE_MODIFIER(iLocal_431[1], 0.5f);
		}
		return true;
	}
	return false;
}

int func_299()
{
	if (!func_40(2) && !__LIB_0__::func_266(Global_35, VOLUME::_GET_VOLUME_COORDS(iLocal_242), 15f, 1, 1))
	{
		if (__LIB_0__::func_75(&uLocal_252))
		{
			if (__LIB_1__::func_313(&uLocal_252, 120f))
			{
				func_507(func_506());
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
				{
					PED::_SET_PED_DAMAGE_MODIFIER(iLocal_431[0], 1f);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
				{
					PED::_SET_PED_DAMAGE_MODIFIER(iLocal_431[1], 1f);
				}
				Local_14.f_50 = 1;
				iLocal_413 = 6;
			}
		}
	}
	switch (iLocal_413)
	{
		case 0:
			if (func_40(2) && !func_40(48))
			{
				if (!func_40(9))
				{
					func_508(1);
				}
				if (__LIB_0__::func_75(&uLocal_252))
				{
					__LIB_0__::func_37(&uLocal_252);
				}
				func_66();
				if (__LIB_3__::func_467(__LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), &Local_442, &iLocal_426, 0, 0, -1, 1))
				{
					func_509();
					func_18(6);
					func_112(&iLocal_426);
					func_510();
					iLocal_413 = 1;
				}
			}
			else
			{
				func_297();
				if (!MAP::DOES_BLIP_EXIST(uLocal_439[0]))
				{
					__LIB_3__::func_447(&(uLocal_439[0]), iLocal_431[0], 0);
				}
				if (!MAP::DOES_BLIP_EXIST(uLocal_439[1]))
				{
					__LIB_3__::func_447(&(uLocal_439[1]), iLocal_431[1], 0);
				}
				if (func_511())
				{
					if (!__LIB_0__::func_75(&uLocal_252))
					{
						__LIB_1__::func_148(&uLocal_252);
					}
				}
				if ((func_40(32) || func_40(48)) || func_512())
				{
					if (func_512())
					{
						func_18(21);
					}
					func_66();
					Local_14.f_46 = 1;
					iLocal_217 = 0;
					iLocal_413 = 4;
				}
			}
			break;
		case 1:
			if (func_513())
			{
				iLocal_413 = 2;
			}
			break;
		case 2:
			if (func_514())
			{
				func_274();
				func_515();
				Local_14.f_46 = 1;
				iLocal_217 = 0;
				iLocal_413 = 5;
			}
			break;
		case 6:
			if (func_516(&iLocal_426, 0) || !__LIB_4__::func_327(Global_35, &iLocal_426, 60f, 1))
			{
				if (func_516(&iLocal_431, 0) || !__LIB_4__::func_327(Global_35, &iLocal_431, 60f, 1))
				{
					if (!__LIB_0__::func_75(&uLocal_1247))
					{
						return 1;
					}
				}
			}
			break;
		case 4:
			func_518();
			if (__LIB_3__::func_467(__LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), &Local_442, &iLocal_426, 0, 0, -1, 1))
			{
				func_509();
				func_18(6);
				func_112(&iLocal_426);
				func_510();
				iLocal_413 = 5;
			}
			break;
		case 5:
			func_518();
			if (func_519())
			{
				if (!__LIB_0__::func_75(&uLocal_252))
				{
					__LIB_1__::func_148(&uLocal_252);
				}
			}
			if (!func_40(18) && func_40(6))
			{
				if ((!func_497() || func_516(&iLocal_426, 0)) || PED::IS_PED_CLIMBING(Global_35))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
					{
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[0], 2);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
					{
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[1], 2);
					}
					func_18(18);
				}
			}
			if (__LIB_3__::func_505(&iLocal_426, 0) && __LIB_3__::func_505(&iLocal_431, 0))
			{
				return 1;
			}
			if (func_506())
			{
				func_507(1);
				Local_14.f_50 = 1;
				iLocal_413 = 6;
			}
			break;
	}
	return 0;
}

void func_300()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	if (func_40(29) && !func_40(30))
	{
		func_520(&Local_399, &vVar0, &vVar3, &vVar6, &vVar9, &vVar12);
		if ((((func_521(&(iLocal_431[1]), &(Local_571[1 /*32*/]), vVar0, 0) && func_521(&(iLocal_426[0]), &(Local_442[0 /*32*/]), vVar3, 0)) && func_521(&(iLocal_426[1]), &(Local_442[1 /*32*/]), vVar6, 0)) && func_521(&(iLocal_426[2]), &(Local_442[2 /*32*/]), vVar9, 0)) && func_521(&(iLocal_426[3]), &(Local_442[3 /*32*/]), vVar12, 0))
		{
			func_522(iLocal_426[0], &(uLocal_434[0]), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
			func_522(iLocal_426[1], &(uLocal_434[1]), joaat("WEAPON_REVOLVER_CATTLEMAN"));
			func_522(iLocal_426[2], &(uLocal_434[2]), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
			func_522(iLocal_426[3], &(uLocal_434[3]), joaat("WEAPON_REVOLVER_CATTLEMAN"));
			if (!func_40(31))
			{
				func_522(iLocal_431[1], &(uLocal_439[1]), joaat("WEAPON_REVOLVER_CATTLEMAN"));
			}
			func_18(6);
			func_18(30);
		}
	}
}

char* func_302(char* sParam0, bool bParam1)
{
	char* sVar0;
	if (!bParam1)
	{
		switch (__LIB_3__::func_168(Local_399))
		{
			case 4:
				sVar0 = "GUA";
				break;
			case 2:
				sVar0 = "FTH";
				break;
		}
	}
	else
	{
		sVar0 = "UNI";
	}
	return __LIB_3__::func_394("BOT", sVar0, sParam0, __LIB_0__::func_55(bParam1, 0, iLocal_390 + 1));
}

void func_304()
{
	float fVar0;
	fVar0 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_431[0], true, false));
	if (!bLocal_1258)
	{
		__LIB_3__::func_398(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_431[0], true, false), &uLocal_392, 1061158912 /* Float: 0.75f */, 1, fVar0);
		if (__LIB_3__::func_193(&uLocal_392, 1000))
		{
			if (fVar0 < 75f)
			{
				bLocal_1258 = true;
			}
		}
	}
	else if (!bLocal_1259)
	{
		if (!__LIB_2__::func_136(iLocal_431[0], 1))
		{
			bLocal_1259 = __LIB_2__::func_478(Global_35, Global_35, "RE_BOT_FTH_V2_CALLOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else if (!__LIB_2__::func_136(Global_35, 0))
	{
		bLocal_1258 = false;
	}
}

void func_305()
{
	char* sVar0;
	if (!__LIB_2__::func_136(iLocal_431[0], 1))
	{
		if (__LIB_0__::func_48(Global_35, iLocal_431[0], 75f, 1))
		{
			if (!__LIB_0__::func_75(&uLocal_264) || __LIB_1__::func_285(&uLocal_264, 8f))
			{
				sVar0 = func_527(iLocal_215);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					func_528(sVar0);
				}
			}
		}
	}
}

bool func_306()
{
	bool bVar0;
	var uVar1;
	var uVar2;
	if (iLocal_409 > 1)
	{
		if (func_506())
		{
			func_507(1);
			return true;
		}
	}
	switch (iLocal_409)
	{
		case 0:
			__LIB_3__::func_398(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_431[0], true, false), &uLocal_392, 1061158912 /* Float: 0.75f */, 0, 0);
			func_529();
			if (func_40(15) && !func_40(48))
			{
				if (func_40(2))
				{
					if (__LIB_3__::func_434(&(Local_571[1 /*32*/]), &(iLocal_431[1]), __LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), 0, 1))
					{
						__LIB_2__::func_272(iLocal_431[1], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("UHOH", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_509();
						func_18(29);
						func_18(31);
						func_115(iLocal_431[1]);
						iLocal_409 = 3;
					}
				}
			}
			else if (iLocal_873 || func_531())
			{
				if (!func_40(32))
				{
					__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("FALLFORIT", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_3__::func_447(&(uLocal_439[0]), iLocal_431[0], 0);
				PED::_0x58F7DB5BD8FA2288(iLocal_431[0]);
				TASK::TASK_COMBAT_PED(iLocal_431[0], Global_35, 0, 0);
				iLocal_1205[0] = 3;
				func_18(29);
				iLocal_409 = 1;
			}
			else
			{
				bVar0 = __LIB_3__::func_453(iLocal_431[0], 0, &(Local_14.f_5), &uVar1, 0, 0);
				if ((bLocal_872 || func_40(48)) || bVar0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
					{
						if ((bVar0 || bLocal_872) || !func_40(48))
						{
							__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("CRAZY", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("UHOH", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						__LIB_3__::func_447(&(uLocal_439[0]), iLocal_431[0], 0);
						PED::_0x58F7DB5BD8FA2288(iLocal_431[0]);
						TASK::TASK_COMBAT_PED(iLocal_431[0], Global_35, 0, 0);
						iLocal_1205[0] = 3;
					}
					else
					{
						func_533(8);
					}
					func_18(29);
					iLocal_409 = 1;
				}
				else if (!func_534())
				{
					if (__LIB_3__::func_956(iLocal_431[0], &uLocal_267, &uVar2, 0))
					{
						if (!func_536(7))
						{
							if (__LIB_3__::func_507(&uLocal_392, 1000))
							{
								__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("WHEREYOUGOING", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_533(7);
							}
						}
						else if (__LIB_3__::func_507(&uLocal_392, 3000))
						{
							__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("FALLFORIT", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_3__::func_447(&(uLocal_439[0]), iLocal_431[0], 0);
							PED::_0x58F7DB5BD8FA2288(iLocal_431[0]);
							TASK::TASK_COMBAT_PED(iLocal_431[0], Global_35, 0, 0);
							iLocal_1205[0] = 3;
							func_18(29);
							iLocal_409 = 1;
						}
						if (!func_536(6))
						{
							if (__LIB_2__::func_227(1f, 1, 0, 0))
							{
								__LIB_0__::func_37(&uLocal_255);
								__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("REALBADWAY", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_533(6);
							}
						}
						else if (!__LIB_0__::func_75(&uLocal_255))
						{
							__LIB_1__::func_148(&uLocal_255);
						}
						else if (__LIB_1__::func_313(&uLocal_255, 10f))
						{
							__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("FALLFORIT", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_3__::func_447(&(uLocal_439[0]), iLocal_431[0], 0);
							PED::_0x58F7DB5BD8FA2288(iLocal_431[0]);
							TASK::TASK_COMBAT_PED(iLocal_431[0], Global_35, 0, 0);
							iLocal_1205[0] = 3;
							func_18(29);
							iLocal_409 = 1;
						}
					}
				}
			}
			break;
		case 1:
			func_518();
			if (func_40(30))
			{
				iLocal_409 = 2;
			}
			break;
		case 2:
			func_539();
			func_518();
			func_540();
			break;
		case 3:
			if (func_513())
			{
				iLocal_409 = 4;
			}
			break;
		case 4:
			if (func_514())
			{
				iLocal_409 = 5;
			}
			break;
		case 5:
			func_539();
			func_518();
			func_540();
			break;
	}
	return false;
}

int func_455(int iParam0, int iParam1)
{
	var uVar0;
	return func_609(&uVar0, iParam0, iParam1);
}

bool func_456(int iParam0)
{
	if (iParam0 == joaat("WEAPON_UNARMED") || iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_462(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar7;
	int iVar11;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	if (iLocal_410 != -1)
	{
		iVar11 = 0;
		while (iVar11 < iLocal_218)
		{
			vVar3 = { func_16(iLocal_410, iVar11) };
			if (!__LIB_0__::func_86(vVar3))
			{
				if (iVar0 == -1)
				{
					iVar0 = iVar11;
				}
				else
				{
					vVar7 = { func_16(iLocal_410, iVar0) };
					if (__LIB_0__::func_636(vParam3, vVar3) < __LIB_0__::func_636(vParam3, vVar7))
					{
						iVar0 = iVar11;
					}
				}
			}
			iVar11++;
		}
	}
	if (iVar0 > -1)
	{
		*uParam1 = { func_16(iLocal_410, iVar0) };
		iVar1 = (iVar0 - 1);
		iVar2 = iVar0 + 1;
		if (iVar1 == iLocal_218)
		{
			iVar1 = 0;
		}
		else if (iVar1 < 0)
		{
			iVar1 = (iLocal_218 - 1);
		}
		if (iVar2 == iLocal_218)
		{
			iVar2 = 0;
		}
		else if (iVar2 < 0)
		{
			iVar2 = (iLocal_218 - 1);
		}
		*uParam0 = { func_16(iLocal_410, iVar1) };
		*uParam2 = { func_16(iLocal_410, iVar2) };
		return true;
	}
	return false;
}

void func_463(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	func_614(uParam0, uParam1, uParam2, &vVar0);
	fVar4 = vVar0.f_3;
	vVar5 = { vVar0 };
	vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar4, 0.1352f, 1.8006f, -2.6634f) };
	__LIB_3__::func_938(&Local_327, vVar8, 0f, 0f, __LIB_2__::func_709((fVar4 + 180f)), 2);
	__LIB_3__::func_939(&Local_327, "player", Global_35, 0);
	__LIB_3__::func_938(&Local_348, vVar8, 0f, 0f, __LIB_2__::func_709((fVar4 + 180f)), 2);
	__LIB_3__::func_939(&Local_348, "player", Global_35, 0);
	func_615(&vVar8, &Local_327);
}

int func_464()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 4;
	}
	else if (!TASK::IS_PED_STILL(Global_35))
	{
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || PED::GET_PED_STEALTH_MOVEMENT(Global_35))
		{
			return 3;
		}
		else if (TASK::IS_PED_WALKING(Global_35))
		{
			return 2;
		}
		else if (TASK::IS_PED_RUNNING(Global_35) || TASK::IS_PED_SPRINTING(Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return iLocal_402;
		case 2:
			return iLocal_403;
		case 3:
			return iLocal_403;
		default:
			break;
	}
	return 0;
}

bool func_466(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	switch (iParam0)
	{
		case 1:
			if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_327.f_1, "player", &vVar0, false, 0, 2))
			{
				return false;
			}
			fVar12 = 2f;
			iVar14 = joaat("MOTIONSTATE_RUN");
			iVar13 = 16;
			break;
		case 2:
			func_616(3);
			if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_348.f_1, "player", &vVar0, false, 0, 2))
			{
				return false;
			}
			fVar12 = 1f;
			iVar14 = joaat("MOTIONSTATE_WALK");
			iVar13 = 0;
			break;
		case 3:
			func_616(7);
			if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_348.f_1, "player", &vVar0, false, 0, 2))
			{
				return false;
			}
			fVar12 = 1f;
			iVar14 = joaat("MOTIONSTATE_CROUCH_WALK");
			iVar13 = 17;
			break;
		default:
			return false;
	}
	vVar15 = { vVar0 };
	VOLUME::_SET_VOLUME_COORDS(*iParam1, vVar15);
	if (func_617(vVar15, func_468(&Local_399)))
	{
		if (__LIB_0__::func_393(Global_35, *iParam1, 0, 1))
		{
			vLocal_228 = { vVar0 };
			vLocal_231 = { vLocal_228 + __LIB_0__::func_173(vVar0 - Global_36) * Vector(100f, 100f, 100f) };
			func_619(vLocal_231);
			if (iParam0 == 3)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
			if (iVar13 != 0)
			{
				func_18(iVar13);
			}
			return true;
		}
	}
	if (iVar13 != 0)
	{
		func_140(iVar13);
	}
	return false;
}

bool func_467(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
	{
		switch (iParam2)
		{
			case 0:
				vVar0 = { __LIB_3__::func_508(Global_35, uParam0->f_1, "player", func_208(uParam0->f_2), 1) };
				break;
			case 1:
				if (!bParam3)
				{
					vVar0 = { __LIB_3__::func_508(Global_35, uParam0->f_1, "player", func_208(uParam0->f_2), 1) };
				}
				else
				{
					vVar0 = { __LIB_3__::func_508(Global_35, uParam0->f_1, "player", func_208(7), 1) };
				}
				break;
			default:
				return false;
		}
		if (__LIB_0__::func_86(vVar0))
		{
			return false;
		}
		if (__LIB_3__::func_254(vVar0, Global_35))
		{
			if (__LIB_0__::func_636(Global_36, vVar0) < 0.75f)
			{
				switch (iParam2)
				{
					case 0:
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						__LIB_3__::func_949(&Local_327, "Loop_Bool", 0);
						if (Local_399 == 8)
						{
							func_274();
						}
						AUDIO::TRIGGER_MUSIC_EVENT("REBOT_START");
						iLocal_411 = 0;
						break;
					case 1:
						if (bParam3)
						{
							func_616(7);
							if (func_280(&vVar3, &vVar6, __LIB_0__::func_55(Local_399 == 8, 1, -1)))
							{
								__LIB_3__::func_938(&Local_348, vVar3, vVar6, 2);
							}
						}
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						__LIB_3__::func_949(&Local_348, "Loop_Bool", 0);
						AUDIO::TRIGGER_MUSIC_EVENT("REBOT_START");
						func_18(47);
						iLocal_411 = 1;
						break;
				}
				vLocal_237 = { Global_36 };
				if (func_40(21))
				{
					bLocal_1195 = true;
				}
				func_66();
				PED::SET_PED_USING_ACTION_MODE(Global_35, true, 20000, 0);
				iLocal_1233 = 1;
				__LIB_3__::func_635(uParam0);
				return true;
			}
		}
	}
	return false;
}

Vector3 func_468(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return 1575.272f, -7256.498f, 68.8f;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return 2621.505f, 641.9572f, 69.6888f;
				case 1:
					return 2394.004f, 1057.031f, 83.20756f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_470(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 4;
						case 1:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
				case 1:
					switch (iParam1)
					{
						case 0:
							return 4;
						case 1:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_471(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam3 = { 0f, 0f, 0f };
	*uParam4 = { 0f, 0f, 0f };
	*uParam5 = 0f;
	iParam1 = 0;
	switch (*iParam0)
	{
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 1575.76f, -7256.163f, 66.338f, 1577.968f, -7254.326f, 69.9739f, 320.25f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 1575.608f, -7257.264f, 66.338f, 1572.88f, -7259.102f, 69.9742f, 140.25f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 1576.11f, -7256.514f, 66.3383f, 1577.978f, -7259.194f, 69.9742f, 230.25f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 1575.02f, -7256.743f, 66.3583f, 1572.92f, -7254.064f, 69.9742f, 50.25f);
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 1576.342f, -7256.072f, 66.31089f, 1578.064f, -7254.624f, 69.929f, -41.1f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 1574.98f, -7257.467f, 66.20089f, 1573.258f, -7258.915f, 69.819f, 138.9f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 1574.959f, -7256.067f, 66.42089f, 1573.511f, -7254.345f, 70.039f, 48.9f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 1576.093f, -7257.566f, 66.25089f, 1577.541f, -7259.288f, 69.869f, 228.9f);
									break;
							}
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 2618.444f, 638.0135f, 69.72782f, 2616.288f, 636.1308f, 72.67426f, 136.425f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 2619.188f, 639.1685f, 69.72782f, 2621.324f, 641.0663f, 72.61241f, 316.425f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 2617.417f, 639.231f, 69.72782f, 2615.013f, 641.9806f, 72.66282f, 46.425f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 2619.704f, 638.2335f, 69.72782f, 2621.722f, 636.0577f, 72.55793f, 226.425f);
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 2618.444f, 638.0135f, 69.72782f, 2616.288f, 636.1308f, 72.67426f, 136.425f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 2619.188f, 639.1685f, 69.72782f, 2621.324f, 641.0663f, 72.61241f, 316.425f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 2617.417f, 639.231f, 69.72782f, 2615.013f, 641.9806f, 72.66282f, 46.425f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 2619.704f, 638.2335f, 69.72782f, 2621.722f, 636.0577f, 72.55793f, 226.425f);
									break;
							}
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 2394.765f, 1056.679f, 81.19875f, 2394.006f, 1060.42f, 84.8347f, 141.25f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 2394.905f, 1057.452f, 81.22875f, 2397.502f, 1057.202f, 84.8467f, 270f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 2394.345f, 1056.48f, 81.19875f, 2394.095f, 1053.883f, 84.8347f, 180f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 2393.452f, 1056.709f, 81.19875f, 2390.854f, 1056.959f, 84.8347f, 90f);
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 2393.603f, 1057.937f, 81.19875f, 2393.949f, 1060.159f, 84.8168f, 0f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 2394.352f, 1056.048f, 81.19875f, 2394.006f, 1053.825f, 84.8168f, 180f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 2393.211f, 1056.609f, 81.19875f, 2390.988f, 1056.954f, 84.8168f, 90f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 2394.726f, 1057.311f, 81.19875f, 2396.949f, 1056.965f, 84.8168f, 270f);
									break;
							}
							break;
					}
					break;
			}
			break;
	}
	return !__LIB_0__::func_86(*uParam3);
}

bool func_474(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_453((*iParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_475()
{
	int iVar0;
	if (Local_399 == 8)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		if (__LIB_2__::func_1(iLocal_426[iVar0], 0, 1) && PED::IS_PED_HUMAN(iLocal_426[iVar0]))
		{
			__LIB_2__::func_73(iLocal_426[iVar0], &(uLocal_434[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
		iVar0++;
	}
}

void func_476()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_2__::func_603(&(iLocal_426[iVar0]), &(Local_882[iVar0 /*75*/]), &(Local_882[iVar0 /*75*/].f_21), 1, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_426[iVar0], 301, true);
		iVar0++;
	}
	iLocal_876 = 1;
}

void func_477()
{
	int iVar0;
	int iVar1;
	float fVar2;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		if (__LIB_2__::func_1(iLocal_426[iVar0], 0, 1) && PED::IS_PED_HUMAN(iLocal_426[iVar0]))
		{
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[iVar0], 2);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(iLocal_426[iVar0], &iVar1, fVar2, fVar2, 1, 1);
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_431[0], 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(iLocal_431[0], &iVar1, 0, 0, 1, 1);
		PED::_SET_PED_DAMAGE_MODIFIER(iLocal_431[0], 1f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_431[1], 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(iLocal_431[1], &iVar1, 1f, 1f, 1, 1);
		PED::_SET_PED_DAMAGE_MODIFIER(iLocal_431[1], 1f);
	}
}

void func_478(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 != 0)
	{
		func_629(iParam0, iParam1, iParam3, 1);
	}
	else
	{
		func_629(iParam0, iParam2, iParam3, 0);
	}
}

int func_480(vector3 vParam0, var uParam3, int iParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	float fVar0;
	if (fParam8 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam8)
		{
			return 0;
		}
	}
	fVar0 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	if (fVar0 < fParam7)
	{
		if (__LIB_8__::func_219(vParam0, 0, uParam3, iParam4, fParam5, fParam6, fParam7, fParam9, 0))
		{
			return 1;
		}
		if (fVar0 < fParam10)
		{
			*iParam4 = 0f;
			return 1;
		}
	}
	return 0;
}

bool func_481()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	switch (Local_399.f_1)
	{
		case 1:
			vVar0 = { 2418.828f, 1065.537f, 86.22379f };
			vVar3 = { 2416.279f, 1062.208f, 88.05131f };
			vVar6 = { 2422.612f, 1066.312f, 86.27942f };
			vVar9 = { 2419.005f, 1064.716f, 86.26469f };
			if (__LIB_0__::func_195(vVar0, vVar3, Global_36) || __LIB_0__::func_195(vVar6, vVar9, Global_36))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_482(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (__LIB_0__::func_35(uParam0->f_3))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (fParam2 > 0f)
			{
				if (!__LIB_0__::func_75(uParam1))
				{
					if (func_632(uParam0, bParam4, fParam5))
					{
						__LIB_1__::func_148(uParam1);
					}
				}
				else if (__LIB_1__::func_313(uParam1, fParam2))
				{
					if (bParam3)
					{
						__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
					return true;
				}
				else
				{
					__LIB_0__::func_37(uParam1);
				}
			}
			else if (func_632(uParam0, bParam4, fParam5))
			{
				if (bParam3)
				{
					__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
				}
				return true;
			}
		}
	}
	return false;
}

bool func_483()
{
	vector3 vVar0;
	vector3 vVar3;
	switch (Local_399.f_1)
	{
		case 0:
			vVar0 = { 2584.215f, 623.2336f, 73.78429f };
			vVar3 = { 2584.87f, 610.8616f, 75.88813f };
			break;
		case 1:
			vVar0 = { 2412.626f, 1075.403f, 87.59463f };
			vVar3 = { 2412.071f, 1081.062f, 88.69707f };
			break;
	}
	if (!bLocal_1225)
	{
		__LIB_3__::func_285(iLocal_431[0], &Local_14, 0);
		__LIB_3__::func_285(iLocal_431[1], &Local_14, 0);
		bLocal_1225 = true;
	}
	if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
	{
		return (func_485(&Local_14, &uLocal_392, 3f, 40f, 20f, 1500, 0.5f, 0.5f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0) || func_633(&iLocal_431, &(Local_14.f_33), &uLocal_1226, 2f, 35f, 0, 20f, 1092616192 /* Float: 10f */));
	}
	return false;
}

int func_485(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;
	__LIB_3__::func_398(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (__LIB_3__::func_193(uParam1, iParam5))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (__LIB_3__::func_452(uParam0, fParam2, 1114636288 /* Float: 60f */, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264 /* Float: 150f */, bParam14, 1))
	{
		return 1;
	}
	return 0;
}

void func_486(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_1__::func_336(iParam0, iParam1);
	}
	else
	{
		__LIB_0__::func_516(iParam0, iParam1);
	}
}

void func_491(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (iParam1 > -1 && iParam1 < 3)
	{
		uParam0->f_21[iParam1 /*17*/].f_13 = sParam2;
		uParam0->f_21[iParam1 /*17*/].f_15 = iParam3;
	}
}

void func_492()
{
	int iVar0;
	struct<4> Var1[4];
	if (bLocal_221 && !bLocal_222)
	{
		if (__LIB_3__::func_289(&(Local_442[2 /*32*/])))
		{
			if (__LIB_3__::func_289(&(Local_442[3 /*32*/])))
			{
				if (__LIB_3__::func_467(__LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), &Local_442, &iLocal_426, 1, 2, 3, 1))
				{
					func_641(&(Var1[2 /*4*/]), &(Var1[3 /*4*/]));
					iVar0 = 2;
					while (iVar0 <= 3)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iVar0]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[iVar0], 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_426[iVar0], 5, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_426[iVar0], 17, false);
							__LIB_2__::func_73(iLocal_426[iVar0], &(uLocal_434[iVar0]), joaat("BLIP_STYLE_COP"), 942020339, 0, 0);
							TASK::TASK_COMBAT_PED(iLocal_426[iVar0], Global_35, 0, 0);
							func_494(iLocal_426[iVar0]);
							func_642(iLocal_426[iVar0]);
						}
						iVar0++;
					}
					bLocal_221 = false;
					bLocal_222 = true;
				}
			}
		}
	}
}

void func_493(int iParam0, vector3 vParam1, int iParam4, char[4] cParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar13;
	vector3 vVar16;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iParam0, true, true);
		__LIB_2__::func_231(iParam0, iParam4, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		if (bParam8)
		{
			PED::_0x8ACC0506743A8A5C(iParam0, joaat("SCRIPT_CALMAIMPOSTCOMBAT_LOW"), 1, -1082130432 /* Float: -1f */);
		}
		WEAPON::_0x5230D3F6EE56CFE6(iParam0, 0);
		if (!func_40(48))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
			__LIB_3__::func_963(&Local_369, cParam5, iParam0, 0);
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_369.f_1, cParam5, &Var1, false, 0, 2))
			{
				vVar13 = { Var1 };
				vVar16 = { __LIB_4__::func_345(iParam0, vVar13, 1065353216 /* Float: 1f */) };
				__LIB_3__::func_932(iParam0, vVar13);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar13 + vVar16, fParam7, -1, 0.25f, 0, Var1.f_3.f_2);
				__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
			}
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_231, fParam7, -1, 0.25f, 0, 40000f);
			__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
		}
		PED::FORCE_PED_MOTION_STATE(iParam0, iParam6, false, 0, false);
	}
}

void func_494(int iParam0)
{
	MISC::_0xE98D55C5983F2509(iParam0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, false);
}

bool func_496()
{
	var uVar0;
	var uVar1;
	uVar0 = func_645(0);
	uVar1 = func_645(1);
	return (uVar0 && uVar1);
}

bool func_497()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_242))
	{
		return __LIB_0__::func_393(Global_35, iLocal_242, 0, 1);
	}
	return true;
}

void func_498(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[0], 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_AIM_AT_ENTITY(0, Global_35, iParam0, 1, 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(iLocal_426[0], &iVar0, 0, 0, 1, 1);
		func_642(iLocal_426[0]);
		func_494(iLocal_426[0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[1], 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_AIM_AT_ENTITY(0, Global_35, iParam1, 1, 1);
		TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 5000, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(iLocal_426[1], &iVar0, 0, 0, 1, 1);
		func_642(iLocal_426[1]);
		func_494(iLocal_426[1]);
	}
}

void func_499()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iVar0]))
		{
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_426[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_426[iVar0], 17, false);
			TASK::TASK_COMBAT_PED(iLocal_426[iVar0], Global_35, 0, 16);
			func_494(iLocal_426[iVar0]);
			func_642(iLocal_426[iVar0]);
		}
		iVar0++;
	}
}

void func_500()
{
	vector3 vVar0;
	vector3 vVar3;
	if (!bLocal_221)
	{
		func_646(&vVar0, &vVar3);
		Local_442[2 /*32*/].f_1 = joaat("S_M_M_FUSSARHENCHMAN_01");
		Local_442[2 /*32*/] = 6;
		Local_442[2 /*32*/].f_3 = 522321252;
		StringCopy(&(Local_442[2 /*32*/].f_23), "0761_S_M_M_FussarHenchman_01_HISPANIC_02", 64);
		Local_442[2 /*32*/].f_6 = { vVar0 };
		func_82(&(Local_442[2 /*32*/].f_22));
		Local_442[3 /*32*/].f_1 = joaat("S_M_M_FUSSARHENCHMAN_01");
		Local_442[3 /*32*/] = 6;
		Local_442[3 /*32*/].f_3 = -636783812;
		StringCopy(&(Local_442[3 /*32*/].f_23), "0760_S_M_M_FussarHenchman_01_HISPANIC_01", 64);
		Local_442[3 /*32*/].f_6 = { vVar3 };
		func_82(&(Local_442[2 /*32*/].f_22));
		__LIB_3__::func_950(&(Local_442[2 /*32*/]));
		__LIB_3__::func_950(&(Local_442[3 /*32*/]));
		bLocal_221 = true;
	}
}

void func_501()
{
	int iVar0;
	switch (iLocal_1196)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				switch (iLocal_860[iVar0])
				{
					case 1:
						switch (iVar0)
						{
							case 0:
								__LIB_2__::func_478(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V1_THREATEN_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 1:
								__LIB_2__::func_478(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V1_THREATEN_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						__LIB_2__::func_526(&(Local_709[0 /*75*/].f_21), 0, 0);
						__LIB_2__::func_526(&(Local_709[1 /*75*/].f_21), 0, 0);
						iLocal_1196 = 1;
						break;
				}
				iVar0++;
			}
			break;
	}
}

void func_502(int iParam0, var uParam1)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (uParam1->f_6 != -1)
		{
			if (!*uParam1)
			{
				if (func_648(uParam1))
				{
					*uParam1 = 1;
				}
			}
			vVar0 = { __LIB_5__::func_263(__LIB_0__::func_86(uParam1->f_28), ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1->f_28) };
			__LIB_3__::func_398(Global_35, vVar0, &(uParam1->f_11), 1061158912 /* Float: 0.75f */, 0, 0);
			if (!__LIB_0__::func_48(Global_35, iParam0, 35f, 1) || func_650(iParam0, uParam1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 2f);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, 1616546922))
			{
				PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_RUN"), false, 0, false);
			}
			switch (uParam1->f_5)
			{
				case 0:
					if (func_651(iParam0, uParam1, 0, 0))
					{
						if (*uParam1)
						{
							uParam1->f_5 = 5;
						}
						else
						{
							uParam1->f_5 = 1;
						}
					}
					break;
				case 1:
					if (func_652(iParam0, uParam1))
					{
						if (!func_653(iParam0, uParam1))
						{
							if (!*uParam1)
							{
								uParam1->f_5 = 0;
							}
							else
							{
								uParam1->f_5 = 5;
							}
						}
					}
					else if (!__LIB_0__::func_163(iParam0, 1435919172))
					{
						if (!__LIB_0__::func_75(&(uParam1->f_23)) || __LIB_1__::func_285(&(uParam1->f_23), 0.5f))
						{
							func_651(iParam0, uParam1, 1, 0);
						}
					}
					break;
				case 2:
					if (func_654(iParam0, uParam1))
					{
						func_655(uParam1);
						if (*uParam1)
						{
							uParam1->f_5 = 5;
						}
						else
						{
							func_651(iParam0, uParam1, 1, 0);
							uParam1->f_5 = 1;
						}
					}
					break;
				case 3:
					if (!*uParam1)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1) || __LIB_0__::func_48(iParam0, Global_35, 35f, 1))
						{
							func_651(iParam0, uParam1, 0, 0);
							uParam1->f_5 = 1;
						}
					}
					break;
				case 4:
					if (__LIB_4__::func_339(&iParam0) || !__LIB_0__::func_163(iParam0, 1435919172))
					{
						func_651(iParam0, uParam1, 0, 0);
						uParam1->f_5 = 1;
					}
					break;
				case 5:
					break;
			}
		}
	}
}

bool func_506()
{
	int iVar0;
	iVar0 = __LIB_0__::func_55(iLocal_390 == 0, 4, 6);
	if (func_658(iLocal_426[0]))
	{
		iVar0 = (iVar0 - 1);
	}
	if (func_658(iLocal_426[1]))
	{
		iVar0 = (iVar0 - 1);
	}
	if (func_658(iLocal_431[0]))
	{
		iVar0 = (iVar0 - 1);
	}
	if (func_658(iLocal_431[1]))
	{
		iVar0 = (iVar0 - 1);
	}
	if (iLocal_390 == 1)
	{
		if (func_658(iLocal_426[2]))
		{
			iVar0 = (iVar0 - 1);
		}
		if (func_658(iLocal_426[3]))
		{
			iVar0 = (iVar0 - 1);
		}
	}
	return iVar0 < 2;
}

void func_507(bool bParam0)
{
	if (!bLocal_1241)
	{
		func_659(iLocal_431[0], "FORGETTHIS", "HIMLATER", "KILLEDMYBROS", "LETSGIT", bParam0);
		func_659(iLocal_431[1], "WONTLET", "KILLSUS", "DAMNLUNATIC", "SCATTER", bParam0);
		func_659(iLocal_426[0], "OHNO", "LETSGIT", "ONEDAY", "WORTHIT", bParam0);
		func_659(iLocal_426[1], "MEALONE", "AINTDEAD", "PAYFORMYBROS", "GOTTARUN", bParam0);
		func_659(iLocal_426[2], "", "", "TIMEFORTHIS", "GOFELLERS", bParam0);
		func_659(iLocal_426[3], "", "", "LEAVEME", "BROTHERS", bParam0);
		bLocal_1241 = true;
	}
}

void func_508(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 0, 15f, -1, 0);
			TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
			__LIB_1__::func_474(iLocal_431[0], &iVar0, 0, 0, 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 0, 15f, -1, 0);
			TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
			__LIB_1__::func_474(iLocal_431[1], &iVar0, 0, 0, 1, 1);
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
		{
			func_140(func_660(0));
			TASK::TASK_AIM_AT_ENTITY(iLocal_426[0], Global_35, -1, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
		{
			func_140(func_660(1));
			TASK::TASK_AIM_AT_ENTITY(iLocal_426[1], Global_35, -1, 0, 0);
		}
	}
	func_18(9);
}

void func_509()
{
	switch (iLocal_390)
	{
		case 0:
			func_661(0, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), "Murfree_01", 0);
			func_661(1, joaat("WEAPON_REVOLVER_CATTLEMAN"), "Murfree_02", 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
			{
				PED::_SET_PED_DAMAGE_MODIFIER(iLocal_431[0], 1f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
			{
				PED::_SET_PED_DAMAGE_MODIFIER(iLocal_431[1], 1f);
			}
			break;
		case 1:
			func_289(1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), "Murfree_01", 0, 0, 0);
			func_289(0, joaat("WEAPON_REVOLVER_CATTLEMAN"), "Murfree_02", 0, 0, 0);
			break;
	}
	__LIB_3__::func_949(&Local_327, "Loop_Bool", 0);
	__LIB_3__::func_949(&Local_348, "Loop_Bool", 0);
	__LIB_3__::func_440(&uLocal_302, Global_35, 0, 0, 2, 1, 2, 1, 0, 0, 0, 0);
	func_663(&iLocal_426);
	func_663(&iLocal_431);
	PED::SET_PED_CONFIG_FLAG(iLocal_426[0], 301, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_426[1], 301, true);
}

void func_510()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		func_661(iVar0, 0, 0, 0);
		iVar0++;
	}
}

bool func_511()
{
	func_664(23, 44, 0, 1, "RE_BOT_FTH_V1_GOTME", "GENERIC_SHOCKED_HIGH", 2);
	func_664(24, 45, 1, 0, "RE_BOT_FTH_V1_IMHIT", "GENERIC_FRIGHTENED_HIGH", 1);
	if (!bLocal_220)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_426[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
		{
			bLocal_220 = true;
		}
	}
	if (!bLocal_220)
	{
		switch (iLocal_216)
		{
			case 0:
				if (func_40(1))
				{
					func_665(iLocal_431[1], -2f, "RE_BOT_FTH_V1_HEHERUN", &iLocal_216, 75f, 1);
				}
				break;
			case 1:
				func_665(iLocal_431[0], -2f, "RE_BOT_FTH_V1_HESCOMING", &iLocal_216, 75f, 1);
				break;
			case 2:
				if (__LIB_0__::func_163(iLocal_431[1], 242628503))
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_431[1]) == iLocal_213)
					{
						func_665(iLocal_431[1], -2f, "RE_BOT_FTH_V1_WHEREIS", &iLocal_216, 75f, 1);
					}
				}
				break;
			case 3:
				func_665(iLocal_431[0], -4f, "RE_BOT_FTH_V1_EYESOPEN", &iLocal_216, 75f, 1);
				break;
			case 4:
				func_665(iLocal_431[1], 3f, "RE_BOT_FTH_V1_IMSCARED", &iLocal_216, 75f, 1);
				break;
			case 5:
				func_665(iLocal_431[0], -5f, "RE_BOT_FTH_V1_SHUTUP", &iLocal_216, 75f, 1);
				break;
			case 6:
				if (func_665(iLocal_431[1], 3f, "RE_BOT_FTH_V1_SCARED", &iLocal_216, 75f, 1))
				{
					bLocal_220 = true;
				}
				break;
			case 7:
				return true;
		}
	}
	return bLocal_220;
}

int func_512()
{
	return func_666(Global_35);
}

bool func_513()
{
	PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 608457313) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1121862613))
	{
		__LIB_3__::func_635(&Local_369);
		func_667(0);
		func_667(1);
		func_668(0);
		func_668(1);
		return true;
	}
	return false;
}

bool func_514()
{
	var uVar0[4];
	PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	switch (iLocal_390)
	{
		case 0:
			uVar0[0] = iLocal_426[0];
			uVar0[1] = iLocal_426[1];
			break;
		case 1:
			uVar0[0] = iLocal_431[1];
			uVar0[1] = iLocal_431[0];
			break;
	}
	if (!func_40(26))
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[0], -881316974) || ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[1], -881316974)) || __LIB_3__::func_943(&Local_369, "breakout_end", 1))
		{
			func_18(26);
		}
	}
	if (!func_40(27))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -983684657))
		{
			func_18(27);
		}
	}
	_NAMESPACE29::_0x66F9EB44342BB4C5(uVar0[0], &uLocal_302);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uVar0[1], &uLocal_302);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[0], -999023058))
	{
	}
	if (!func_40(28))
	{
		__LIB_3__::func_949(&Local_327, "Loop_Bool", 1);
		__LIB_3__::func_949(&Local_348, "Loop_Bool", 1);
		ANIMSCENE::SET_ANIM_SCENE_RATE(Local_327.f_1, 1.25f);
		ANIMSCENE::SET_ANIM_SCENE_RATE(Local_348.f_1, 1.25f);
		func_18(43);
		func_18(28);
	}
	if (!func_40(37) && func_40(26))
	{
		if (__LIB_3__::func_943(&Local_369, "breakout_end", 1) || (func_40(28) && func_40(27)))
		{
			if (!__LIB_3__::func_943(&Local_369, "breakout_end", 1))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[0], -881316974) || ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[1], -881316974))
				{
					func_18(40);
				}
				else
				{
					func_18(41);
				}
			}
			else
			{
				__LIB_3__::func_949(&Local_327, "Loop_Bool", 1);
				__LIB_3__::func_949(&Local_348, "Loop_Bool", 1);
			}
			switch (iLocal_390)
			{
				case 0:
					__LIB_3__::func_447(&(uLocal_434[0]), iLocal_426[0], 0);
					__LIB_3__::func_447(&(uLocal_434[1]), iLocal_426[1], 0);
					break;
				case 1:
					__LIB_3__::func_447(&(uLocal_439[1]), iLocal_431[1], 0);
					__LIB_3__::func_447(&(uLocal_439[0]), iLocal_431[0], 0);
					break;
			}
			func_18(37);
		}
	}
	if (func_40(40))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[0], -881316974))
		{
			__LIB_13__::func_829(&Local_369, 5, 1, 1);
			func_140(40);
		}
	}
	else if (func_40(41))
	{
		__LIB_13__::func_829(&Local_369, 6, 1, 1);
		func_140(41);
	}
	if (!func_40(38))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uVar0[0], -1) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_369.f_1, "Murfree_01"))
		{
			switch (iLocal_390)
			{
				case 0:
					func_670(0, &(uVar0[0]), uVar0[0], 2f, &(uLocal_434[0]));
					iLocal_1200[0] = 4;
					break;
				case 1:
					func_670(0, &(uVar0[0]), uVar0[0], 2f, &(uLocal_439[1]));
					iLocal_1205[1] = 4;
					break;
			}
			func_18(38);
		}
	}
	if (!func_40(39))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uVar0[1], -1) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_369.f_1, "Murfree_02"))
		{
			switch (iLocal_390)
			{
				case 0:
					func_670(1, &(uVar0[1]), uVar0[0], 2f, &(uLocal_434[1]));
					iLocal_1200[1] = 4;
					break;
				case 1:
					func_670(1, &(uVar0[1]), uVar0[0], 2f, &(uLocal_439[0]));
					iLocal_1205[0] = 4;
					break;
			}
			func_18(39);
		}
	}
	if (func_40(38) && func_40(39))
	{
		return true;
	}
	return false;
}

void func_515()
{
	int iVar0;
	return;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_431[0], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[0], 5, true);
		PED::SET_PED_STEALTH_MOVEMENT(iLocal_431[0], 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 20f, 1.5f, -1082130432 /* Float: -1f */);
		func_671(iLocal_431[0], Global_35, 1);
		__LIB_1__::func_474(iLocal_431[0], &iVar0, 0, 0, 1, 1);
		__LIB_1__::func_733(iLocal_431[0]);
		__LIB_0__::func_172(Local_636[0 /*36*/].f_8);
		PED::SET_PED_CONFIG_FLAG(iLocal_431[0], 301, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_431[1], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[1], 5, true);
		PED::SET_PED_STEALTH_MOVEMENT(iLocal_431[1], 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 20f, 1.5f, -1082130432 /* Float: -1f */);
		func_671(iLocal_431[1], Global_35, 1);
		__LIB_1__::func_474(iLocal_431[1], &iVar0, 0, 0, 1, 1);
		__LIB_1__::func_733(iLocal_431[1]);
		__LIB_0__::func_172(Local_636[1 /*36*/].f_8);
		PED::SET_PED_CONFIG_FLAG(iLocal_431[1], 301, true);
	}
}

bool func_516(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	if (bParam1)
	{
	}
	return true;
}

void func_518()
{
	int iVar0;
	func_673();
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		func_674(&(iLocal_426[iVar0]), uLocal_434[iVar0], &(iLocal_1200[iVar0]), 1, &(uLocal_1208[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_431)
	{
		func_674(&(iLocal_431[iVar0]), uLocal_439[iVar0], &(iLocal_1205[iVar0]), 0, &(uLocal_1213[iVar0]));
		iVar0++;
	}
}

bool func_519()
{
	if (__LIB_2__::func_136(Global_35, 1))
	{
		return false;
	}
	if ((func_40(21) && !func_40(32)) && !func_40(22))
	{
		switch (iLocal_217)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
				{
					func_665(iLocal_431[0], -2f, "RE_BOT_FTH_V1_DIDNTWORK", &iLocal_217, 75f, 1);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
				{
					func_665(iLocal_431[1], -2f, "RE_BOT_FTH_V1_DIDNTWORK", &iLocal_217, 75f, 1);
				}
				else
				{
					iLocal_217++;
				}
				break;
			case 1:
				if (func_40(6))
				{
					if (func_665(iLocal_426[0], -3f, "RE_BOT_FTH_V1_FORYOU", &iLocal_217, 75f, 1))
					{
						iLocal_217 = 0;
						func_18(22);
					}
				}
				break;
		}
	}
	else
	{
		switch (iLocal_217)
		{
			case 0:
				func_665(iLocal_426[1], -2f, "RE_BOT_FTH_V1_SQUEAL", &iLocal_217, 75f, 1);
				break;
			case 1:
				func_665(iLocal_426[0], -2f, "RE_BOT_FTH_V1_GUTYOU", &iLocal_217, 75f, 1);
				break;
			case 2:
				if (func_40(18))
				{
					func_665(iLocal_431[0], -2f, "RE_BOT_FTH_V1_DEADYET", &iLocal_217, 75f, 1);
				}
				break;
			case 3:
				func_665(iLocal_431[1], -2f, "RE_BOT_FTH_V1_COMEOUT", &iLocal_217, 75f, 1);
				break;
			case 4:
				return true;
		}
	}
	return false;
}

void func_520(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar5;
	int iVar8;
	iVar8 = func_675(iParam0);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		vVar1 = { func_16(iVar8, iVar0) };
		if (!__LIB_0__::func_86(vVar1))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vVar1, 2f))
			{
				if (__LIB_0__::func_86(vVar5))
				{
					vVar5 = { vVar1 };
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					*uParam1 = { vVar1 };
				}
				else if (__LIB_0__::func_86(*uParam2))
				{
					*uParam2 = { vVar1 };
				}
				else if (__LIB_0__::func_86(*uParam3))
				{
					*uParam3 = { vVar1 };
				}
				else if (__LIB_0__::func_86(*uParam4))
				{
					*uParam4 = { vVar1 };
				}
				else if (__LIB_0__::func_86(*uParam5))
				{
					*uParam5 = { vVar1 };
				}
				else
				{
					iVar0++;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					*uParam1 = { vVar5 };
				}
				if (__LIB_0__::func_86(*uParam2))
				{
					*uParam2 = { vVar5 };
				}
				if (__LIB_0__::func_86(*uParam3))
				{
					*uParam3 = { vVar5 };
				}
				if (__LIB_0__::func_86(*uParam4))
				{
					*uParam4 = { vVar5 };
				}
				if (__LIB_0__::func_86(*uParam5))
				{
					*uParam5 = { vVar5 };
				}
			}
		}
	}
}

bool func_521(var uParam0, var uParam1, vector3 vParam2, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!__LIB_0__::func_86(vParam2))
		{
			uParam1->f_6 = { vParam2 };
			func_82(&(uParam1->f_22));
		}
		if (__LIB_3__::func_434(uParam1, uParam0, __LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), 0, 1))
		{
			func_115(*uParam0);
			return true;
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(*uParam0);
}

void func_522(int iParam0, var uParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!func_40(31))
		{
		}
	}
}

char* func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANYBODY";
		case 1:
			return "NEEDHELP";
		case 2:
			return "OUTTHERE";
		default:
			break;
	}
	return "";
}

void func_528(char* sParam0)
{
	if (__LIB_2__::func_478(iLocal_431[0], Global_35, func_302(sParam0, 0), 0, 75f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
	{
		__LIB_1__::func_148(&uLocal_264);
		__LIB_2__::func_315(1891783641, iLocal_431[0], 1);
		iLocal_215++;
	}
}

void func_529()
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_874)
	{
		case 0:
			__LIB_4__::func_331(&(Local_709[iVar0 /*75*/]), "", "", "");
			Local_709[iVar0 /*75*/].f_74 = 20f;
			__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 2, 1, 0);
			__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 0, 1, 0);
			__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 1, 1, 0);
			__LIB_4__::func_329(&(Local_709[iVar0 /*75*/]), 0, __LIB_2__::func_460(24));
			bLocal_401 = true;
			iLocal_860[iVar0] = -1;
			iLocal_874 = 1;
			break;
		case 1:
			switch (iLocal_860[iVar0])
			{
				case 2:
					__LIB_1__::func_148(&uLocal_863);
					__LIB_2__::func_478(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_ROB", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_869 = true;
					iLocal_874 = 6;
					break;
				case 0:
					__LIB_1__::func_148(&uLocal_863);
					if (!bLocal_870)
					{
						__LIB_2__::func_478(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_QUESTION", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_GREET", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					bLocal_869 = true;
					iLocal_874 = 2;
					break;
				case 1:
					__LIB_1__::func_148(&uLocal_863);
					if (!bLocal_871)
					{
						__LIB_2__::func_478(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_ANTAGONIZE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_ANTAGONIZE_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					bLocal_869 = true;
					iLocal_874 = 4;
					break;
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&uLocal_863, 2f))
			{
				if (!bLocal_870 && !bLocal_871)
				{
					__LIB_2__::func_478(iLocal_431[iVar0], Global_35, "CALL_FOR_SUPPORT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_870 = true;
					iLocal_874 = 3;
				}
				else
				{
					iLocal_873 = 1;
				}
			}
			break;
		case 3:
			if (!__LIB_2__::func_136(iLocal_431[iVar0], 1))
			{
				__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 2, 1, 0);
				__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 0, 1, 0);
				__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 1, 1, 0);
				__LIB_4__::func_329(&(Local_709[iVar0 /*75*/]), 0, __LIB_2__::func_460(7));
				__LIB_1__::func_148(&uLocal_866);
				bLocal_869 = false;
				iLocal_874 = 1;
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&uLocal_863, 2f))
			{
				if (!bLocal_870 && !bLocal_871)
				{
					__LIB_2__::func_478(iLocal_431[iVar0], Global_35, "CALL_FOR_SUPPORT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_871 = true;
					iLocal_874 = 5;
				}
				else
				{
					iLocal_873 = 1;
				}
			}
			break;
		case 5:
			if (!__LIB_2__::func_136(iLocal_431[iVar0], 1))
			{
				__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 2, 1, 0);
				__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 0, 1, 0);
				__LIB_4__::func_332(&(Local_709[iVar0 /*75*/]), 1, 1, 0);
				__LIB_4__::func_329(&(Local_709[iVar0 /*75*/]), 0, __LIB_2__::func_460(7));
				__LIB_1__::func_148(&uLocal_866);
				bLocal_869 = false;
				iLocal_874 = 1;
			}
			break;
		case 6:
			if (__LIB_1__::func_285(&uLocal_863, 2f))
			{
				bLocal_872 = true;
			}
			break;
		case 7:
			break;
	}
}

int func_531()
{
	if (func_40(32) || func_40(21))
	{
		return 1;
	}
	if (func_512())
	{
		return 1;
	}
	return 0;
}

void func_533(int iParam0)
{
	MISC::SET_BIT(&iLocal_214, iParam0);
}

bool func_534()
{
	if (bLocal_869)
	{
		return true;
	}
	if (__LIB_0__::func_75(&uLocal_866))
	{
		if (!__LIB_1__::func_285(&uLocal_866, 2f))
		{
			return true;
		}
	}
	return false;
}

bool func_536(int iParam0)
{
	return MISC::IS_BIT_SET(iLocal_214, iParam0);
}

void func_539()
{
	float fVar0;
	if (!bLocal_1251)
	{
		fVar0 = BUILTIN::VDIST(Global_36, Local_248);
		__LIB_3__::func_398(Global_35, Local_248, &uLocal_392, 1061158912 /* Float: 0.75f */, 1, fVar0);
		if (fVar0 > 35f)
		{
			if (func_709())
			{
				if (__LIB_3__::func_507(&uLocal_392, 3000))
				{
					if (!__LIB_2__::func_136(Global_35, 0))
					{
						bLocal_1251 = __LIB_2__::func_478(Global_35, Global_35, "RE_BOT_FTH_V2_PLYFINAL_RUN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						if (bLocal_1251)
						{
							__LIB_1__::func_148(&uLocal_1253);
						}
					}
				}
			}
		}
	}
	if (!bLocal_1252)
	{
		if (func_709())
		{
			if (!__LIB_2__::func_136(Global_35, 0))
			{
				if (func_710())
				{
					bLocal_1252 = __LIB_2__::func_478(Global_35, Global_35, "RE_BOT_FTH_V2_PLYFINAL_FIGHT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (bLocal_1252)
					{
						__LIB_1__::func_148(&uLocal_1253);
					}
				}
			}
		}
	}
}

void func_540()
{
	if (__LIB_2__::func_227(1f, 1, 0, 0) && !__LIB_2__::func_136(Global_35, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]) && !func_536(0))
		{
			__LIB_2__::func_478(iLocal_431[0], Global_35, func_302("YOUREDEAD", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(0);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]) && !func_536(1))
		{
			__LIB_2__::func_478(iLocal_431[1], Global_35, func_302("BUTCHERED", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(1);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]) && !func_536(2))
		{
			__LIB_2__::func_478(iLocal_426[0], Global_35, func_302("FUCKDIE", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(2);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]) && !func_536(3))
		{
			__LIB_2__::func_478(iLocal_426[1], Global_35, func_302("KILLEM", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(3);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[2]) && !func_536(4))
		{
			__LIB_2__::func_478(iLocal_426[2], Global_35, func_302("FEEDPIGS", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(4);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[3]) && !func_536(5))
		{
			__LIB_2__::func_478(iLocal_426[3], Global_35, func_302("HEREALIVE", 0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(5);
			return;
		}
	}
}

int func_609(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 32))) && (!WEAPON::_IS_WEAPON_PISTOL(Var4.f_4) || !__LIB_0__::func_27(iParam1, 16777216))) && (!WEAPON::_IS_WEAPON_REVOLVER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 33554432)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (__LIB_0__::func_154(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512))
	{
		iParam1 |= 512;
		return func_609(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_614(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_757(uParam0, uParam1, uParam2, uParam3);
}

void func_615(var uParam0, var uParam1)
{
	struct<7> Var0;
	vector3 vVar12;
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam1->f_1, "player", &Var0, false, 0, 2))
	{
		vVar12 = { Var0.f_6 };
		if (__LIB_2__::func_106(&vVar12, 1, 10, 0))
		{
			uParam0->f_2 = (vVar12.z + 0.2f);
		}
	}
}

void func_616(int iParam0)
{
	if (!__LIB_3__::func_942(&Local_348, iParam0))
	{
		if (!func_759(&Local_348, iParam0, 5))
		{
			if (!func_759(&Local_348, iParam0, 4))
			{
				__LIB_13__::func_829(&Local_348, iParam0, 1, 1);
			}
		}
	}
}

bool func_617(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	vVar0 = { vParam0 - ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) };
	vVar3 = { vParam0 - ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) };
	bVar6 = func_760(Global_35, vVar3, vParam3, 90f);
	bVar7 = func_760(Global_35, vVar0, vParam0, 90f);
	return (bVar6 && bVar7);
}

void func_619(vector3 vParam0)
{
	struct<7> Var0;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	struct<4> Var18;
	if (Local_399 == 8)
	{
		if (func_761(Local_399.f_1, vParam0, &Var0, 1))
		{
			vVar9 = { Var0 };
			vVar12 = { Var0.f_3 };
			vVar15 = { Var0.f_6 };
		}
		if (!__LIB_0__::func_86(vVar9))
		{
			__LIB_3__::func_938(&Local_369, vVar9, vVar12, 2);
			vLocal_234 = { vVar15 - __LIB_0__::func_173(vVar9 - vVar15) * Vector(10f, 10f, 10f) };
			__LIB_2__::func_106(&vLocal_234, 50, 10, 0);
		}
	}
	else if (Local_399 == 10)
	{
		Var18 = { func_16(9, func_762()) };
		if (!__LIB_0__::func_86(Var18))
		{
			__LIB_3__::func_938(&Local_369, Var18, 0f, 0f, Var18.f_3, 2);
		}
	}
}

void func_622(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, float fParam9)
{
	*uParam0 = { vParam3 };
	*uParam1 = { vParam6 };
	*uParam2 = fParam9;
}

void func_629(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 || __LIB_0__::func_214(iParam1))
	{
		__LIB_2__::func_272(iParam0, iParam1, -1, iParam2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		if (__LIB_0__::func_27(iParam2, 1))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, true, 0, false, false);
		}
	}
	else
	{
		__LIB_2__::func_272(iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, iParam2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		if (__LIB_0__::func_27(iParam2, 1))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
		}
	}
}

bool func_632(var uParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
	{
		if (__LIB_1__::func_205(Global_35, uParam0->f_173, 1, 0))
		{
			return true;
		}
		if (bParam1)
		{
			vVar0 = { __LIB_2__::func_114(Global_35, fParam2) };
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_173, vVar0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_633(int iParam0, var uParam1, int iParam2, float fParam3, float fParam4, bool bParam5, float fParam6, float fParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *iParam0)
	{
		if (__LIB_3__::func_892(iVar2, bParam5))
		{
			if (__LIB_18__::func_100((*iParam0)[iVar2], uParam1, iParam2, &bVar1, fParam3, fParam4, fParam6, 1, fParam7, 1))
			{
				return 1;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*iParam2 = 0f;
	}
	return 0;
}

void func_641(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	vVar0 = { func_774() };
	vVar3 = { 1574.123f, -7258.26f, 69.08138f };
	vVar6 = { 1577.012f, -7254.958f, 68.76313f };
	iVar9 = func_775(vVar0, vVar3, vVar6);
	switch (iVar9)
	{
		case 1:
			*uParam0 = { 1574.875f, -7259.426f, 69.259f };
			*uParam1 = { 1573.219f, -7258.094f, 69.12478f };
			break;
		default:
			*uParam0 = { 1578.345f, -7255.663f, 68.91415f };
			*uParam1 = { 1577.078f, -7254.425f, 68.73707f };
			break;
	}
}

void func_642(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_421)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_421[iVar0]))
		{
			__LIB_2__::func_487(iParam0, iLocal_421[iVar0]);
		}
		iVar0++;
	}
}

var func_645(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "Fussar_01";
			break;
		case 1:
			sVar0 = "Fussar_02";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!iLocal_416[iParam0])
		{
			bVar1 = false;
			if ((bVar1 || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_426[iParam0], -1)) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_369.f_1, sVar0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (!bVar1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 0);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, true, 0);
					TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, -1, joaat("FIRING_PATTERN_SLOW_SHOT"), 1);
				}
				__LIB_1__::func_474(iLocal_426[iParam0], &iVar2, 0, 0, 1, 1);
				PED::_0x2208438012482A1A(iLocal_426[iParam0], true, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_426[iParam0], joaat("MOTIONSTATE_AIMING"), false, 1, true);
				iLocal_416[iParam0] = 1;
			}
		}
	}
	return iLocal_416[iParam0];
}

void func_646(var uParam0, var uParam1)
{
	switch (func_781(func_780(), 1574.123f, -7258.26f, 69.08138f, 1577.012f, -7254.958f, 68.76313f))
	{
		case 1:
			*uParam0 = { 1534.829f, -7301.735f, 73.20496f };
			*uParam1 = { 1520.272f, -7279.861f, 72.0063f };
			break;
		case 2:
			*uParam0 = { 1580.688f, -7180.271f, 63.34436f };
			*uParam1 = { 1576.945f, -7179.079f, 62.8494f };
			break;
	}
}

bool func_648(var uParam0)
{
	if (uParam0->f_26 > -1)
	{
		return uParam0->f_26 == uParam0->f_27;
	}
	return false;
}

bool func_650(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_01_PED01", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_01_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_02_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_02_PED01", 1))
			{
				return true;
			}
			break;
		case 1:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_01_PED02", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_01_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_02_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_02_PED02", 1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_651(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	if (*uParam1)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1197[uParam1->f_9]))
		{
			iLocal_1197[uParam1->f_9] = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 10f, 10f, 10f);
			PED::_0xFC3DB99C8144CD81(iParam0, iLocal_1197[uParam1->f_9], 0, true, 0);
			TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
		}
		return true;
	}
	if (func_782(iParam0, uParam1))
	{
		if (!__LIB_0__::func_86(uParam1->f_28))
		{
			iVar1 = 0;
			if (!func_648(uParam1))
			{
				iVar1 = 1;
			}
			if (!bParam3)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
			}
			if (func_783(uParam1->f_6, uParam1->f_26, 1332820953))
			{
				PED::SET_PED_STEALTH_MOVEMENT(iParam0, 0, 0, 1);
			}
			else if (func_783(uParam1->f_6, uParam1->f_26, -1023305933))
			{
				PED::SET_PED_STEALTH_MOVEMENT(iParam0, 1, 0, 0);
			}
			if (func_783(uParam1->f_6, uParam1->f_26, 1100690837))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uParam1->f_28, Global_35, uParam1->f_4, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			}
			else
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam1->f_28, uParam1->f_4, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, iVar1);
			}
			if (!bParam3)
			{
				__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_652(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_86(uParam1->f_28))
	{
		if (__LIB_0__::func_266(iParam0, uParam1->f_28, 0.5f, 1, 0))
		{
			return true;
		}
		if (func_784(uParam1) == 4)
		{
			if (__LIB_0__::func_266(Global_35, __LIB_3__::func_179(&Local_14), 7f, 1, 1) || __LIB_4__::func_327(Global_35, &iLocal_431, 10f, 1))
			{
				return true;
			}
		}
		else if (!func_648(uParam1))
		{
			if (!__LIB_0__::func_86(uParam1->f_32))
			{
				if (!func_783(uParam1->f_6, uParam1->f_26, joaat("IGNOREVALIDATION")))
				{
					if (!func_785(iParam0, &(uParam1->f_28), &(uParam1->f_32)))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_653(int iParam0, var uParam1)
{
	int iVar0;
	switch (func_784(uParam1))
	{
		case 2:
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
			{
				func_786(uParam1);
				__LIB_0__::func_172(uParam1->f_8);
				uParam1->f_8 = VOLUME::_CREATE_VOLUME_SPHERE(uParam1->f_28, 0f, 0f, 0f, 3f, 3f, 3f);
				__LIB_3__::func_442(iParam0, uParam1->f_8, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_28, 1.5f, -1, 0.25f, 0, 40000f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
				if (func_648(uParam1))
				{
					*uParam1 = 1;
				}
				uParam1->f_5 = 3;
				return true;
			}
			break;
		case 1:
			break;
		case 4:
			PED::_0x4C57F27D1554E6B0(iParam0, Global_36, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
			uParam1->f_5 = 4;
			return true;
		case 5:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1197[uParam1->f_9]))
			{
				iLocal_1197[uParam1->f_9] = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 10f, 10f, 10f);
				PED::_0xFC3DB99C8144CD81(iParam0, iLocal_1197[uParam1->f_9], 0, true, 0);
				TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
				uParam1->f_5 = 5;
				return true;
			}
			break;
		default:
			uParam1->f_10 = func_788(iParam0, uParam1);
			switch (uParam1->f_10)
			{
				case 0:
					break;
				case 1:
					uParam1->f_22 = 0;
					func_789(uParam1);
					uParam1->f_5 = 2;
					return true;
				case 2:
					func_790(iParam0, uParam1);
					__LIB_1__::func_148(&(uParam1->f_14));
					break;
			}
			break;
	}
	return false;
}

bool func_654(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == iLocal_431[0])
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (func_791(iParam0, uParam1) || func_792(iVar1))
	{
		__LIB_1__::func_148(&(uParam1->f_17));
		return true;
	}
	else
	{
		switch (uParam1->f_22)
		{
			case 0:
				switch (uParam1->f_10)
				{
					case 1:
						if (func_793(iParam0, uParam1))
						{
							__LIB_0__::func_37(&(uParam1->f_17));
							uParam1->f_22 = 1;
						}
						else
						{
							return true;
						}
						break;
				}
				break;
			case 1:
				if (func_794(iParam0, uParam1))
				{
					if (func_795(iParam0, uParam1) && __LIB_2__::func_123(iParam0, Global_35, 0))
					{
						if (uParam1->f_21 < 4)
						{
							iVar2 = func_797(uParam1);
							if (iVar2 >= 2 || !func_798(iLocal_431[iVar2], &(Local_636[iVar2 /*36*/])))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								switch (uParam1->f_21)
								{
									case 0:
										if (uParam1->f_9 == 0)
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED01", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, -1, 0);
										}
										else
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED02", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, -1, 0);
										}
										break;
									case 1:
										if (uParam1->f_9 == 0)
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED01", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, -1, 0);
										}
										else
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED02", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, -1, 0);
										}
										break;
									case 2:
										if (uParam1->f_9 == 0)
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED01", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, -1, 0);
										}
										else
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED02", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, -1, 0);
										}
										break;
									case 3:
										if (uParam1->f_9 == 0)
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED01", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, -1, 0);
										}
										else
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED02", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, -1, 0);
										}
										break;
								}
								if (uParam1->f_9 == 0)
								{
									func_800(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED01", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, 1);
								}
								else
								{
									func_800(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED02", 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, 1);
								}
								__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
								uParam1->f_21++;
								func_801(uParam1);
								uParam1->f_22 = 3;
							}
						}
					}
				}
				break;
			case 3:
				if (TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1)
				{
					if (!__LIB_2__::func_136(iParam0, 0))
					{
						func_802(uParam1->f_9);
						func_803(uParam1);
						__LIB_1__::func_148(&(uParam1->f_17));
						return true;
					}
				}
				break;
		}
	}
	return false;
}

void func_655(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_804(1);
			break;
		case 1:
			func_804(2);
			break;
	}
}

bool func_658(int iParam0)
{
	if (((!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0)) || PED::_0xB655DB7582AEC805(iParam0)) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return true;
	}
	return false;
}

void func_659(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, bool bParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 0, true);
		PED::REGISTER_TARGET(iParam0, Global_35, 1);
		if (!bLocal_1240)
		{
			if (iLocal_390 == 0)
			{
				if (bParam5)
				{
					if (!func_40(42))
					{
						bLocal_1240 = __LIB_2__::func_478(iParam0, Global_35, func_302(sParam1, 0), 0, 75f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
						func_18(42);
					}
				}
				else
				{
					bLocal_1240 = __LIB_2__::func_478(iParam0, Global_35, func_302(sParam2, 0), 0, 75f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
				}
			}
			else if (bParam5)
			{
				if (!func_40(42))
				{
					bLocal_1240 = __LIB_2__::func_478(iParam0, Global_35, func_302(sParam3, 0), 0, 75f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
					func_18(42);
				}
			}
			else
			{
				bLocal_1240 = __LIB_2__::func_478(iParam0, Global_35, func_302(sParam4, 0), 0, 75f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
			}
		}
	}
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		default:
			break;
	}
	return 4;
}

void func_661(int iParam0, int iParam1, char[4] cParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iParam0]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_426[iParam0], true, true);
		switch (iParam0)
		{
			case 0:
				func_478(iLocal_426[iParam0], iParam1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
				break;
			case 1:
				func_478(iLocal_426[iParam0], iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1);
				break;
			case 2:
				if (iParam1 != 0)
				{
					func_478(iLocal_426[iParam0], iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1);
				}
				else
				{
					__LIB_2__::func_272(iLocal_426[iParam0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (__LIB_0__::func_214(joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
					{
						__LIB_2__::func_272(iLocal_426[iParam0], joaat("WEAPON_MELEE_HATCHET_MELEEONLY"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					}
					else
					{
						__LIB_2__::func_272(iLocal_426[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					}
				}
				break;
			case 3:
				func_478(iLocal_426[iParam0], iParam1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam2))
		{
			__LIB_3__::func_963(&Local_369, cParam2, iLocal_426[iParam0], 0);
		}
		if (bParam3)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_426[iParam0], joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		func_494(iLocal_426[iParam0]);
	}
}

void func_663(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_805((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_664(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam2]))
	{
		if (!func_40(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_431[iParam2], Global_35, 1, 1))
			{
				if (__LIB_2__::func_478(iLocal_431[iParam2], Global_35, sParam4, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0))
				{
					func_806(iLocal_431[iParam2]);
				}
				func_18(iParam0);
			}
		}
	}
	else if (!func_40(iParam1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam3]))
			{
				if (__LIB_2__::func_478(iLocal_431[iParam3], Global_35, sParam5, 0, -1082130432 /* Float: -1f */, iParam6, 0, 0, 1, 1, 1, -500314840, 1, 0, 0))
				{
					func_806(iLocal_431[iParam3]);
				}
				func_18(iParam1);
			}
		}
	}
}

bool func_665(int iParam0, float fParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		*iParam3++;
		return true;
	}
	if (!__LIB_0__::func_75(&uLocal_261) || __LIB_1__::func_285(&uLocal_261, (fParam1 + 7f)))
	{
		if (__LIB_2__::func_478(iParam0, Global_35, sParam2, 0, fParam4, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0))
		{
			if (bParam5)
			{
				func_806(iParam0);
			}
			*iParam3++;
			__LIB_1__::func_148(&uLocal_261);
			return true;
		}
	}
	return false;
}

int func_666(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar6;
	if (Local_399 == 8)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_242, true, 0))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, -1))
		{
			return 1;
		}
	}
	if (__LIB_0__::func_266(iParam0, vLocal_225, 35f, 1, 1))
	{
		if (func_807(&iVar0, &iVar1))
		{
			vVar2 = { func_16(10, iVar0) };
			vVar6 = { func_16(10, iVar1) };
			if (!__LIB_0__::func_195(vVar2, vVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_667(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam0]))
	{
		__LIB_3__::func_447(&(uLocal_439[iParam0]), iLocal_431[iParam0], 1);
	}
}

void func_668(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iParam0]) && Local_399 != 8)
	{
		__LIB_3__::func_447(&(uLocal_434[iParam0]), iLocal_426[iParam0], 1);
	}
}

void func_670(int iParam0, var uParam1, int iParam2, float fParam3, int* iParam4)
{
	vector3 vVar0;
	int iVar4;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		__LIB_3__::func_447(iParam4, *uParam1, 0);
		switch (iParam0)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, 2000, 0, 0);
				if (func_810(iParam0, &vVar0))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, fParam3, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
				}
				else
				{
					func_811(iParam2, fParam3);
				}
				PED::SET_PED_COMBAT_MOVEMENT(*uParam1, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(*uParam1, &iVar4, 0, 0, 1, 1);
				break;
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				if (func_810(iParam0, &vVar0))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, fParam3, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), -1, 0);
				}
				else
				{
					func_811(*uParam1, fParam3);
				}
				PED::SET_PED_COMBAT_MOVEMENT(*uParam1, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(*uParam1, &iVar4, 0, 0, 1, 1);
				break;
		}
		__LIB_2__::func_344(uParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 301, true);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 317, false);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 297, false);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 360, false);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 315, true);
	}
}

void func_671(int iParam0, int iParam1, bool bParam2)
{
	if (__LIB_2__::func_1(iParam0, 0, 1) && __LIB_2__::func_1(iParam1, 0, 1))
	{
		__LIB_3__::func_443(iParam0);
		TASK::TASK_COMBAT_PED(__LIB_0__::func_55(bParam2, 0, iParam0), iParam1, 0, 0);
	}
}

void func_673()
{
	int iVar0;
	iLocal_1193 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		if (iLocal_1200[iVar0] == 4)
		{
			iLocal_1193++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_431)
	{
		if (iLocal_1205[iVar0] == 4)
		{
			iLocal_1193++;
		}
		iVar0++;
	}
}

void func_674(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || PED::_0xB655DB7582AEC805(*uParam0))
	{
		if (*uParam2 == 4)
		{
			*uParam2 = 0;
			iLocal_1193 = (iLocal_1193 - 1);
		}
		return;
	}
	if (*uParam2 > 0)
	{
		if (!__LIB_0__::func_163(*uParam0, 1435919172))
		{
			if (*uParam2 == 4)
			{
				func_813(*uParam0);
			}
			else
			{
				*uParam2 = 0;
			}
		}
	}
	if (!*uParam4)
	{
		if (*uParam2 > 0)
		{
			if (func_814(*uParam0))
			{
				__LIB_0__::func_325(&iParam1);
				__LIB_3__::func_447(&iParam1, *uParam0, 0);
				__LIB_3__::func_356(*uParam0, 942020339, 1);
				__LIB_9__::func_114(*uParam0, -1034486097, 1);
				*uParam4 = 1;
			}
		}
	}
	switch (*uParam2)
	{
		case 0:
			if (__LIB_0__::func_153(*uParam0, 0, 1, 0) == joaat("WEAPON_UNARMED"))
			{
				__LIB_2__::func_272(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(*uParam0, 1, 1, 0, 0);
			}
			if (iParam3 == 0)
			{
				__LIB_1__::func_733(*uParam0);
			}
			__LIB_2__::func_344(uParam0);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 317, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 360, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
			if (func_817(Global_35))
			{
				if (func_818())
				{
					func_813(*uParam0);
					*uParam2 = 4;
				}
				else
				{
					if (__LIB_0__::func_48(Global_35, *uParam0, 25f, 1))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(*uParam0, Global_35, -1, false, 1);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(*uParam0, Global_35, Global_35, 2f, 0, 25f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					}
					*uParam2 = 1;
				}
			}
			else
			{
				TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
				*uParam2 = 3;
			}
			break;
		case 1:
			if (func_818())
			{
				func_813(*uParam0);
				*uParam2 = 4;
			}
			else if (!func_817(Global_35) || func_817(*uParam0))
			{
				TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
				*uParam2 = 3;
			}
			break;
		case 3:
			if (func_817(Global_35))
			{
				if (func_818())
				{
					func_813(*uParam0);
					*uParam2 = 4;
				}
				else
				{
					if (__LIB_0__::func_48(Global_35, *uParam0, 25f, 1))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(*uParam0, Global_35, -1, false, 1);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(*uParam0, Global_35, Global_35, 2f, 0, 25f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					}
					*uParam2 = 1;
				}
			}
			break;
		case 4:
			if (!func_817(Global_35))
			{
				iLocal_1193 = (iLocal_1193 - 1);
				TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
				*uParam2 = 3;
			}
			break;
	}
}

int func_675(int iParam0)
{
	switch (*iParam0)
	{
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return 1;
				case 1:
					return 6;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_709()
{
	if (!__LIB_0__::func_75(&uLocal_1253))
	{
		return true;
	}
	return __LIB_1__::func_285(&uLocal_1253, 3f);
}

bool func_710()
{
	int iVar0;
	if (func_474(&iLocal_426, &(Local_14.f_5), &iVar0, &uLocal_1256, 0, (iLocal_426 - 1), 1))
	{
		if (__LIB_1__::func_339(iVar0, 1, 1, 1, 0))
		{
			return true;
		}
	}
	if (func_474(&iLocal_431, &(Local_14.f_5), &iVar0, &uLocal_1257, 0, (iLocal_431 - 1), 1))
	{
		if (__LIB_1__::func_339(iVar0, 1, 1, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_757(var uParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	vector3 vVar17;
	vVar0 = { MISC::_0x83ACC65D9ACEC5EF(*uParam1, *uParam0, *uParam2, true) };
	fVar3 = BUILTIN::VDIST(Global_36, *uParam1);
	vVar4 = { Global_36 + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(fVar3, fVar3, fVar3) };
	vVar7 = { __LIB_1__::func_868(vVar4, vVar0, 1065353216 /* Float: 1f */) };
	vVar10 = { MISC::_0x83ACC65D9ACEC5EF(vVar0 - vVar7, *uParam0, *uParam2, true) };
	fVar13 = MISC::ABSF(BUILTIN::VDIST(*uParam0, vVar10));
	fVar14 = MISC::ABSF(BUILTIN::VDIST(*uParam0, vVar0));
	vVar17 = { __LIB_1__::func_868(Global_36, vVar10, 1065353216 /* Float: 1f */) };
	if (fVar13 > fVar14)
	{
		fVar15 = MISC::ABSF(BUILTIN::VDIST(*uParam1, *uParam2));
		fVar16 = MISC::ABSF(BUILTIN::VDIST(*uParam1, MISC::_0x83ACC65D9ACEC5EF(vVar10 - vVar17, *uParam1, *uParam2, true)));
		func_876(uParam1, uParam2, uParam3, (fVar16 / fVar15));
	}
	else
	{
		fVar15 = MISC::ABSF(BUILTIN::VDIST(*uParam0, *uParam1));
		fVar16 = MISC::ABSF(BUILTIN::VDIST(*uParam0, MISC::_0x83ACC65D9ACEC5EF(vVar10 - vVar17, *uParam0, *uParam1, true)));
		func_876(uParam0, uParam1, uParam3, (fVar16 / fVar15));
	}
}

bool func_759(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= 5 || iParam2 == -1)
	{
		return false;
	}
	return (__LIB_3__::func_902(uParam0, iParam2, 1) && iParam1 == uParam0->f_15[iParam2]);
}

bool func_760(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 + __LIB_3__::func_509(vVar0, (fParam7 * 0.5f)) };
	vVar6 = { vParam1 + __LIB_3__::func_509(vVar0, (fParam7 * -0.5f)) };
	bVar9 = __LIB_0__::func_195(vVar3, vParam1, vParam4);
	bVar10 = __LIB_0__::func_195(vParam1, vVar6, vParam4);
	return (bVar9 && bVar10);
}

int func_761(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	struct<9> Var0[4];
	int iVar37;
	switch (iParam0)
	{
		case 0:
			func_878(&(Var0[0 /*9*/]), 1574.965f, -7256.959f, 66.44505f, 0f, 0f, -42.821f, 1569.381f, -7263.209f, 69.6908f);
			func_878(&(Var0[1 /*9*/]), 1575.715f, -7256.348f, 65.94505f, 2.65f, 0f, 137.179f, 1581.422f, -7250.153f, 68.54831f);
			break;
		default:
			return func_879(iParam0, uParam4, &(uParam4->f_3), &(uParam4->f_6));
	}
	iVar37 = __LIB_0__::func_55(iParam5 > -1, iParam5, func_880(&Var0, vParam1));
	if (iVar37 > -1)
	{
		*uParam4 = { Var0[iVar37 /*9*/] };
		uParam4->f_3 = { Var0[iVar37 /*9*/].f_3 };
		uParam4->f_6 = { Var0[iVar37 /*9*/].f_6 };
		return 1;
	}
	return func_879(iParam0, uParam4, &(uParam4->f_3), &(uParam4->f_6));
}

int func_762()
{
	switch (Local_399)
	{
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_774()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[2]))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(iLocal_426[2], true, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[3]))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(iLocal_426[3], true, false) };
	}
	if (iVar0 > 0)
	{
		return vVar1 * FtoV((1f / BUILTIN::TO_FLOAT(iVar0)));
	}
	return 0f, 0f, 0f;
}

int func_775(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	float fVar0;
	float fVar1;
	fVar0 = __LIB_0__::func_636(vParam0, vParam3);
	fVar1 = __LIB_0__::func_636(vParam0, vParam6);
	if (fVar0 > fVar1)
	{
		return 1;
	}
	return 2;
}

Vector3 func_780()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(iLocal_426[0], true, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(iLocal_426[1], true, false) };
	}
	if (iVar0 > 0)
	{
		return vVar1 * FtoV((1f / BUILTIN::TO_FLOAT(iVar0)));
	}
	return 0f, 0f, 0f;
}

int func_781(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	float fVar0;
	float fVar1;
	fVar0 = __LIB_0__::func_636(vParam0, vParam3);
	fVar1 = __LIB_0__::func_636(vParam0, vParam6);
	if (fVar0 > fVar1)
	{
		return 2;
	}
	return 1;
}

bool func_782(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<4> Var7;
	iVar1 = 15;
	iVar2 = uParam1->f_26 + 1;
	if (!func_891(uParam1, uParam1->f_26))
	{
		if (iVar2 > -1 && iVar2 <= iVar1)
		{
			iVar0 = iVar2;
			while (iVar0 <= iVar1)
			{
				if (func_891(uParam1, iVar0))
				{
					uParam1->f_26 = iVar0;
					uParam1->f_27 = iVar0;
					uParam1->f_28 = { func_16(uParam1->f_6, iVar0) };
					uParam1->f_32 = { uParam1->f_28 };
					return true;
				}
				else
				{
					Var3 = { func_16(uParam1->f_6, iVar0) };
					Var7 = { func_16(uParam1->f_6, iVar0 + 1) };
					if ((func_783(uParam1->f_6, iVar0, joaat("IGNOREVALIDATION")) || func_783(uParam1->f_6, iVar0, 1100690837)) || func_785(iParam0, &Var3, &Var7))
					{
						uParam1->f_26 = iVar0;
						uParam1->f_27 = iVar0 + 1;
						uParam1->f_28 = { Var3 };
						uParam1->f_32 = { Var7 };
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_783(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_892(iParam0, iParam1, iVar0) == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_784(var uParam0)
{
	if (*uParam0)
	{
		return 5;
	}
	if (uParam0->f_26 > -1 && uParam0->f_26 < 16)
	{
		switch (func_892(uParam0->f_6, uParam0->f_26, 3))
		{
			case -73865943:
				return 1;
			case 1100690837:
				return 4;
			default:
				break;
		}
	}
	return 0;
}

bool func_785(int iParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), *uParam1);
	fVar1 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), *uParam2);
	fVar2 = BUILTIN::VDIST2(*uParam1, *uParam2);
	if (fVar1 < fVar0 || fVar1 < fVar2)
	{
		return false;
	}
	return true;
}

void func_786(var uParam0)
{
	if (uParam0->f_7 != 0)
	{
		TASK::REMOVE_COVER_POINT(uParam0->f_7);
		uParam0->f_7 = 0;
	}
	uParam0->f_7 = TASK::ADD_COVER_POINT(uParam0->f_28, uParam0->f_28.f_3, 3, 1, 1, false);
}

int func_788(int iParam0, var uParam1)
{
	int iVar0;
	if ((!*uParam1 && uParam1->f_5 != 2) && !uParam1->f_1)
	{
		iVar0 = 0;
		if (func_893(iVar0))
		{
			return 0;
		}
		if (iParam0 == iLocal_431[1])
		{
			iVar0 = 1;
		}
		if (func_792(iVar0))
		{
			return 0;
		}
		if (!func_650(iParam0, uParam1))
		{
			if (func_894(iParam0, uParam1))
			{
				return 1;
			}
			else if (func_895(iParam0, uParam1))
			{
				return 2;
			}
		}
	}
	return 0;
}

void func_789(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_896(1);
			break;
		case 1:
			func_896(2);
			break;
	}
}

void func_790(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_419(iParam0, Global_35))
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_898(iParam0, "RUN_L_LOOK_01_PED01", uParam1);
						break;
					case 1:
						func_898(iParam0, "RUN_L_LOOK_02_PED01", uParam1);
						break;
				}
			}
			else
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_898(iParam0, "RUN_R_LOOK_01_PED01", uParam1);
						break;
					case 1:
						func_898(iParam0, "RUN_R_LOOK_02_PED01", uParam1);
						break;
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_419(iParam0, Global_35))
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_898(iParam0, "RUN_L_LOOK_01_PED02", uParam1);
						break;
					case 1:
						func_898(iParam0, "RUN_L_LOOK_02_PED02", uParam1);
						break;
				}
			}
			else
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_898(iParam0, "RUN_R_LOOK_01_PED02", uParam1);
						break;
					case 1:
						func_898(iParam0, "RUN_R_LOOK_02_PED02", uParam1);
						break;
				}
			}
			break;
	}
	uParam1->f_20++;
}

bool func_791(int iParam0, var uParam1)
{
	var uVar0;
	if (__LIB_3__::func_956(iParam0, &uLocal_267, &uVar0, 0) || __LIB_0__::func_48(iParam0, Global_35, 15f, 1))
	{
		return true;
	}
	return false;
}

bool func_792(int iParam0)
{
	return uLocal_1222[iParam0] > 5;
}

bool func_793(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_3__::func_112(iParam0, Global_35, BUILTIN::COS(120f));
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if ((iVar1 != 0 && ENTITY::GET_ENTITY_SPEED(iParam0) > 1f) && !__LIB_0__::func_86(uParam1->f_28))
	{
		switch (iVar1)
		{
			case 1:
				switch (uParam1->f_9)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_B_PED01", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_B_PED02", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						break;
				}
				break;
			case 3:
				switch (uParam1->f_9)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_L_PED01", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_L_PED02", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						break;
				}
				break;
			case 2:
				switch (uParam1->f_9)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_R_PED01", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_R_PED02", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						break;
				}
				break;
		}
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_800(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED01", 4f, -4f, 0, 1);
			break;
		case 1:
			func_800(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED02", 4f, -4f, 0, 1);
			break;
	}
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	return true;
}

bool func_794(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_75(&(uParam1->f_17)))
	{
		return true;
	}
	return __LIB_1__::func_285(&(uParam1->f_17), 15f);
}

bool func_795(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED01", 1);
		case 1:
			return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED02", 1);
		default:
			break;
	}
	return false;
}

int func_797(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		default:
			break;
	}
	return 2;
}

bool func_798(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED01", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED01", 1))
			{
				return true;
			}
			break;
		case 1:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED02", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED02", 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_799(int iParam0, char* sParam1, char* sParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	if (bParam7)
	{
		iParam5 |= 67108864;
	}
	TASK::TASK_PLAY_ANIM(iParam0, sParam1, sParam2, fParam3, fParam4, iParam6, iParam5, 0f, false, 0, false, 0, false);
}

void func_800(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, bool bParam7)
{
	if (bParam7)
	{
		iParam6 |= 1;
	}
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, sParam2, sParam3, iParam1, __LIB_0__::func_55(bParam7, -1, __LIB_3__::func_444(sParam2, sParam3)), fParam4, fParam5, iParam6 | 67108864, 0f, false, false, -1f, 0, 0, -1f);
}

void func_801(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_896(4);
			break;
		case 1:
			func_896(8);
			break;
	}
}

void func_802(int iParam0)
{
	bool bVar0;
	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			switch (uLocal_1219[iParam0])
			{
				case 0:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "FALL_BACK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 1:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "FALL_BACK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
			}
			break;
		case 1:
			switch (uLocal_1219[iParam0])
			{
				case 0:
					bVar0 = __LIB_2__::func_478(iLocal_431[iParam0], iLocal_431[iParam0], "FALL_BACK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
			}
			break;
	}
	if (bVar0)
	{
		uLocal_1219[iParam0]++;
	}
}

void func_803(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_804(4);
			break;
		case 1:
			func_804(8);
			break;
	}
}

void func_804(int iParam0)
{
	__LIB_1__::func_681(&iLocal_211, iParam0);
}

void func_805(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 30, false);
	}
}

void func_806(int iParam0)
{
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_2(919052783, iParam0);
}

bool func_807(int iParam0, int iParam1)
{
	*iParam0 = -1;
	*iParam1 = -1;
	switch (Local_399)
	{
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					*iParam0 = 0;
					*iParam1 = 1;
					break;
				case 1:
					*iParam0 = 2;
					*iParam1 = 3;
					break;
			}
			break;
	}
	return ((*iParam0 > -1 && *iParam1 > -1) && *iParam0 != *iParam1);
}

bool func_810(int iParam0, var uParam1)
{
	switch (Local_399)
	{
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							*uParam1 = { func_16(9, 1) };
							return true;
						case 1:
							*uParam1 = { func_16(9, 2) };
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							*uParam1 = { func_16(9, 4) };
							return true;
						case 1:
							*uParam1 = { func_16(9, 5) };
							return true;
						default:
							break;
					}
					break;
			}
			break;
	}
	return false;
}

void func_811(int iParam0, float fParam1)
{
	if (!__LIB_0__::func_48(iParam0, Global_35, 12f, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Global_36, 2f, -1, 12f, 0, 40000f);
	}
	TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, fParam1, 0, 3.5f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
}

void func_813(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar8;
	vector3 vVar11;
	iLocal_1193++;
	iVar2 = 0;
	iVar3 = -1;
	switch (Local_399.f_1)
	{
		case 0:
			iVar2 = 7;
			iVar3 = 13;
			break;
		case 1:
			iVar2 = 7;
			iVar3 = 12;
			break;
	}
	if (iVar2 > 0)
	{
		vVar8 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		vVar11 = { 0f, 0f, 0f };
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			vVar4 = { func_16(iVar3, iVar1) };
			if (!__LIB_0__::func_86(vVar4))
			{
				if (__LIB_0__::func_86(vVar11) || BUILTIN::VDIST(vVar8, vVar11) > BUILTIN::VDIST(vVar8, vVar4))
				{
					vVar11 = { vVar4 };
				}
			}
			iVar1++;
		}
		if (__LIB_0__::func_86(vVar11))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!__LIB_0__::func_266(iParam0, vVar11, 7f, 1, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar11, 2f, -1, 7f, 0, 40000f);
			}
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar11, Global_35, 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, -1, 0, 0);
			__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	}
}

bool func_814(int iParam0)
{
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return true;
	}
	if (__LIB_2__::func_136(iParam0, 1))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, Global_35))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iParam0, 17))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_817(int iParam0)
{
	return __LIB_1__::func_205(iParam0, iLocal_242, 1, 0);
}

bool func_818()
{
	if (iLocal_1193 < 3)
	{
		return true;
	}
	return false;
}

void func_876(var uParam0, var uParam1, var uParam2, float fParam3)
{
	*uParam2 = { __LIB_1__::func_367(*uParam0, *uParam1, fParam3) };
	uParam2->f_3 = __LIB_6__::func_899(uParam0->f_3, uParam1->f_3, fParam3, 0);
}

void func_878(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = { vParam4 };
	uParam0->f_6 = { vParam7 };
}

int func_879(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1575.51f, -7256.65f, 66.43461f };
			*uParam2 = { -1.707547E-06f, 0f, -40.00001f };
			*uParam3 = { 1568.849f, -7270.316f, 70.75385f };
			break;
		default:
			return 0;
	}
	return 1;
}

int func_880(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!__LIB_0__::func_86(*(uParam0[iVar0 /*9*/])))
		{
			if (!__LIB_0__::func_86((uParam0[iVar0 /*9*/])->f_3))
			{
				if (!__LIB_0__::func_86((uParam0[iVar0 /*9*/])->f_6))
				{
					if (iVar1 < 0 || func_923(uParam0, iVar1, iVar0, vParam1))
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_891(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 15;
	if (iParam1 == iVar0)
	{
		return true;
	}
	if (iParam1 > -1 && iParam1 < iVar0)
	{
		return func_783(uParam0->f_6, iParam1, 229088988);
	}
	return false;
}

int func_892(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 1332820953;
						case 1:
							return joaat("IGNOREVALIDATION");
						case 3:
							return 1100690837;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 13:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 1332820953;
						case 1:
							return joaat("IGNOREVALIDATION");
						case 3:
							return 1100690837;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 1:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 10:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 15:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 4:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return -282788437;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		default:
			return 2;
	}
	return 2;
}

bool func_893(int iParam0)
{
	if (uLocal_1222[iParam0] > 5)
	{
		return true;
	}
	return false;
}

bool func_894(int iParam0, var uParam1)
{
	if (func_935(uParam1))
	{
		if (func_936(iParam0, uParam1))
		{
			if (!__LIB_0__::func_48(iParam0, Global_35, (35f + 5f), 1))
			{
				if (uParam1->f_21 < 4)
				{
					if (!__LIB_0__::func_75(&(uParam1->f_17)) || __LIB_1__::func_285(&(uParam1->f_17), 5f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_895(int iParam0, var uParam1)
{
	if (func_935(uParam1))
	{
		if (uParam1->f_20 < 2)
		{
			if (!__LIB_0__::func_86(uParam1->f_28))
			{
				if (func_937(iParam0, uParam1))
				{
					if (!__LIB_0__::func_48(iParam0, Global_35, 15f, 1))
					{
						if (TASK::IS_PED_RUNNING(iParam0) || TASK::IS_PED_SPRINTING(iParam0))
						{
							if (!__LIB_0__::func_75(&(uParam1->f_14)) || __LIB_1__::func_285(&(uParam1->f_14), 5f))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void func_896(int iParam0)
{
	__LIB_1__::func_683(&iLocal_211, iParam0);
}

void func_898(int iParam0, char* sParam1, var uParam2)
{
	int iVar0;
	iVar0 = 2064;
	TASK::TASK_PLAY_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", sParam1, 4f, -4f, -1, iVar0, 0f, false, 0, false, 0, false);
}

bool func_923(var uParam0, int iParam1, int iParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	fVar0 = BUILTIN::VDIST(*(uParam0[iParam1 /*9*/]), vParam3);
	fVar1 = BUILTIN::VDIST(*(uParam0[iParam2 /*9*/]), vParam3);
	if (fVar1 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_935(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			return !__LIB_2__::func_136(iLocal_431[1], 0);
		case 1:
			return !__LIB_2__::func_136(iLocal_431[0], 0);
		default:
			break;
	}
	return false;
}

bool func_936(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = func_797(uParam1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		return false;
	}
	if (iVar0 < 2)
	{
		if (func_946(&(Local_636[iVar0 /*36*/])))
		{
			if (__LIB_0__::func_48(iParam0, iLocal_431[iVar0], 10f, 1))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_937(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	iVar0 = __LIB_2__::func_431(iParam0, uParam1->f_28, 1060437492 /* Float: 0.707f */);
	iVar1 = 0;
	bVar2 = (func_648(uParam1) || __LIB_0__::func_86(uParam1->f_32));
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1->f_28);
	fVar4 = __LIB_0__::func_514(bVar2, 0f, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1->f_32));
	iVar1 = __LIB_2__::func_431(iParam0, uParam1->f_32, 1060437492 /* Float: 0.707f */);
	if (iVar0 == 0 && (fVar3 > 1f || (iVar1 == 0 && fVar4 > 1f)))
	{
		return true;
	}
	return false;
}

bool func_946(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			return func_951(1);
		case 1:
			return func_951(2);
	}
	return false;
}

bool func_951(int iParam0)
{
	return __LIB_0__::func_27(iLocal_211, iParam0);
}

