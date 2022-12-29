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
	struct<2> Local_14 = { 0, 0 } ;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<2> Local_18 = { 0, 0 } ;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<2> Local_22 = { 0, 0 } ;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	vector3 vLocal_27 = { 0f, 0f, 0f };
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	int iLocal_32 = 0;
	struct<21> Local_33[11];
	struct<17> Local_265[3];
	struct<17> Local_317[3];
	struct<193> Local_369 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_562 = 0;
	struct<32> Local_563[14];
	struct<32> Local_1012[3];
	int iLocal_1109 = 0;
	bool bLocal_1110 = false;
	bool bLocal_1111 = false;
	bool bLocal_1112 = false;
	vector3 vLocal_1113 = { 0f, 0f, 0f };
	vector3 vLocal_1116 = { 0f, 0f, 0f };
	vector3 vLocal_1119 = { 0f, 0f, 0f };
	vector3 vLocal_1122 = { 0f, 0f, 0f };
	vector3 vLocal_1125 = { 0f, 0f, 0f };
	vector3 vLocal_1128 = { 0f, 0f, 0f };
	vector3 vLocal_1131 = { 0f, 0f, 0f };
	vector3 vLocal_1134 = { 0f, 0f, 0f };
	vector3 vLocal_1137 = { 0f, 0f, 0f };
	vector3 vLocal_1140 = { 0f, 0f, 0f };
	float fLocal_1143 = 0f;
	float fLocal_1144 = 0f;
	char* sLocal_1145[34] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	struct<6> Local_1182 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	struct<2> Local_1190[10];
	var uLocal_1211 = 10;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	struct<22> Local_1222 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_1244 = 3;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	char[] cLocal_1247[8] = 0;
	int iLocal_1248[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1263[3] = { 0, 0, 0 };
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1284 = 0;
	int iLocal_1285[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	int iLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	int iLocal_1298 = 0;
	var uLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	int iLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = -1;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 1097859072;
	var uLocal_1322 = 1000;
	var uLocal_1323 = 1067450368;
	var uLocal_1324 = 5000;
	var uLocal_1325 = 42;
	var uLocal_1326 = 1103626240;
	var uLocal_1327 = 1077936128;
	var uLocal_1328 = 1106247680;
	var uLocal_1329 = 1103101952;
	var uLocal_1330 = 1097859072;
	var uLocal_1331 = 1103626240;
	int iLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	bool bLocal_1366 = false;
	bool bLocal_1367 = false;
	bool bLocal_1368 = false;
	bool bLocal_1369 = false;
	bool bLocal_1370 = false;
	bool bLocal_1371 = false;
	bool bLocal_1372 = false;
	bool bLocal_1373 = false;
	bool bLocal_1374 = false;
	bool bLocal_1375 = false;
	bool bLocal_1376 = false;
	bool bLocal_1377 = false;
	bool bLocal_1378 = false;
	bool bLocal_1379 = false;
	bool bLocal_1380 = false;
	bool bLocal_1381 = false;
	bool bLocal_1382 = false;
	bool bLocal_1383 = false;
	bool bLocal_1384 = false;
	bool bLocal_1385 = false;
	bool bLocal_1386 = false;
	bool bLocal_1387 = false;
	bool bLocal_1388 = false;
	bool bLocal_1389 = false;
	bool bLocal_1390 = false;
	bool bLocal_1391 = false;
	bool bLocal_1392 = false;
	bool bLocal_1393 = false;
	bool bLocal_1394 = false;
	bool bLocal_1395 = false;
	bool bLocal_1396 = false;
	bool bLocal_1397 = false;
	bool bLocal_1398 = false;
	bool bLocal_1399 = false;
	bool bLocal_1400 = false;
	bool bLocal_1401 = false;
	bool bLocal_1402 = false;
	bool bLocal_1403 = false;
	bool bLocal_1404 = false;
	bool bLocal_1405 = false;
	bool bLocal_1406 = false;
	bool bLocal_1407 = false;
	bool bLocal_1408 = false;
	bool bLocal_1409 = false;
	bool bLocal_1410 = false;
	int iLocal_1411 = 0;
	int iLocal_1412 = 0;
	int iLocal_1413 = 0;
	int iLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	float fLocal_1425 = 0f;
	float fLocal_1426 = 0f;
	float fLocal_1427 = 0f;
	float fLocal_1428 = 0f;
	float fLocal_1429 = 0f;
	float fLocal_1430 = 0f;
	var uLocal_1431 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_26 = joaat("PG_VEH_WAGON05X_LANTERNS01");
	iLocal_1180 = joaat("WAGON05X");
	iLocal_1181 = joaat("P_CRATE03X");
	cLocal_1247 = "TRAIN_HOLDUP";
	iLocal_1414 = 3;
	iLocal_1424 = joaat("PG_RE_TRAINHOLDUP01X");
	fLocal_1427 = 5f;
	fLocal_1429 = 30625f;
	fLocal_1430 = 2f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1409 = true;
	}
	if (!bLocal_1409)
	{
		Local_369.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_369.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		uLocal_1299 = uLocal_1299;
		__LIB_3__::func_420(&Local_369, 1);
		__LIB_3__::func_302(&(Local_369.f_5), 0);
		__LIB_2__::func_50(&(Local_369.f_5), 1);
		__LIB_2__::func_111(&(Local_369.f_5), 1);
		__LIB_3__::func_387(&(Local_369.f_5), 1);
		__LIB_2__::func_180(&(Local_369.f_5), 1);
		__LIB_2__::func_105(&(Local_369.f_5), 1);
		__LIB_2__::func_634(&(Local_369.f_5), 1);
		__LIB_2__::func_51(&(Local_369.f_5), 1);
		__LIB_2__::func_104(&(Local_369.f_5), 1);
		__LIB_2__::func_52(&(Local_369.f_5), 1);
		__LIB_2__::func_662(&(Local_369.f_5), 1);
		__LIB_3__::func_884(&(Local_369.f_5), 5f);
		__LIB_3__::func_900(&(Local_369.f_5), 6000);
		__LIB_2__::func_906(&(Local_369.f_5), 30);
		__LIB_3__::func_302(&uLocal_1304, 0);
		__LIB_2__::func_613(&uLocal_1304, 0);
		__LIB_3__::func_333(&uLocal_1304, 1);
		if (iLocal_1109 == 0)
		{
			__LIB_3__::func_407(&uLocal_1304, 14f);
		}
		else
		{
			__LIB_3__::func_407(&uLocal_1304, 20f);
		}
		func_21();
		func_22();
		func_23();
		func_24();
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1409, 3058, 0);
		if (bLocal_1409)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1302)
			{
				case 0:
					if (func_27())
					{
						iLocal_1302 = 1;
					}
					break;
				case 1:
					if (func_28(&Local_369, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_29(&Local_369, &iLocal_32, &(Local_369.f_51.f_4));
						if (Local_369.f_161)
						{
							__LIB_1__::func_600(0);
							bLocal_1110 = true;
						}
						else if (func_31())
						{
							func_25();
						}
						func_32();
						func_33();
						func_34();
						if (iLocal_1109 != 0)
						{
						}
						else
						{
							iLocal_1422 = GRAPHICS::CREATE_TRACKED_POINT();
							iLocal_1423 = GRAPHICS::CREATE_TRACKED_POINT();
							GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1422, vLocal_1140, 8f);
							GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1423, vLocal_1137, 8f);
						}
						iLocal_1302 = 2;
					}
					else if (Local_369.f_160)
					{
						func_25();
					}
					break;
				case 2:
					if (bLocal_1410)
					{
						if (VEHICLE::_0xBD3C4A2ED509205E(iLocal_1285[0]))
						{
							VEHICLE::_0x2BB2B5BCF0DF8008(iLocal_1285[0], 1);
							VEHICLE::_0x07E2E21E799080A0(iLocal_1285[0], 1);
							if (iLocal_1109 != 0)
							{
								__LIB_8__::func_918(iLocal_1285[0], -577630801, 1);
							}
							else
							{
								__LIB_8__::func_918(iLocal_1285[0], -1464742217, 1);
								__LIB_1__::func_148(&uLocal_1354);
							}
							VEHICLE::SET_TRAIN_SPEED(iLocal_1285[0], 0f);
							VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_1285[0], 0f);
							VEHICLE::_0x4182C037AA1F0091(iLocal_1285[0], 0);
							func_37(&iLocal_1285);
							if (__LIB_0__::func_86(vLocal_27))
							{
								if (__LIB_3__::func_419(iLocal_1285[2], Global_35))
								{
									bLocal_1111 = false;
								}
								else
								{
									bLocal_1111 = true;
								}
							}
							__LIB_1__::func_600(0);
							bLocal_1110 = true;
							Local_22.f_1 = iLocal_1285[2];
							Local_14.f_1 = iLocal_1285[4];
							Local_18.f_1 = iLocal_1285[5];
							func_40();
							func_41();
							if (!__LIB_0__::func_86(vLocal_1125))
							{
								iLocal_1296 = func_42(vLocal_1119, vLocal_1122, vLocal_1125, fLocal_1144, 0, 0, 1);
							}
							if (iLocal_1109 != 1)
							{
							}
							else
							{
								iLocal_1292 = VEHICLE::CREATE_VEHICLE(iLocal_1180, vLocal_1128, fLocal_1143, true, true, false, false);
								PROPSET::_CREATE_PROPSET_4(iLocal_1424, 0f, 0f, 0f, iLocal_1292, 0f, true, 1, false);
								PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(iLocal_1292, iLocal_26);
								__LIB_2__::func_19(iLocal_1292);
								iLocal_1295 = OBJECT::CREATE_OBJECT(iLocal_1181, Local_369.f_51 + Vector(0f, 5f, 5f), true, true, false, false, true);
							}
							iLocal_1302 = 3;
						}
					}
					else
					{
						if (iLocal_1109 == 0 && !Local_369.f_161)
						{
							iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(iLocal_1422);
							iVar1 = GRAPHICS::_0xDFE332A5DA6FE7C9(iLocal_1423);
							if (iVar0 == -1 || iVar1 == -1)
							{
							}
							else
							{
								if (iVar0 > 0 || iVar1 > 0)
								{
									func_25();
								}
								func_44();
								Jump @1725; //curOff = 1025
								if (!func_45())
								{
								}
								else
								{
									if (iLocal_1109 == 0)
									{
										if (__LIB_8__::func_919(iLocal_1285[0], -1464742217))
										{
											if (func_47())
											{
												PED::SET_PED_CONFIG_FLAG(iLocal_1248[0], 347, true);
												func_48();
												iVar2 = 9;
												while (iVar2 <= 11)
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_1248[iVar2], ENTITY::GET_ENTITY_COORDS(iLocal_1248[iVar2], true, false), 2f, -1, false, false, true, false);
													iVar2++;
												}
												PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_1248[3], "Default_Panic");
												PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_1248[4], "Default_Panic");
												iLocal_1302 = 4;
											}
										}
									}
									else if (func_49())
									{
										PED::SET_PED_CONFIG_FLAG(iLocal_1248[2], 347, true);
										func_48();
										iLocal_1302 = 4;
									}
									Jump @1725; //curOff = 1201
									if (!__LIB_3__::func_645(&Local_369, &iLocal_1248, iLocal_1109, 0, 0, 0, 1, 0))
									{
										func_25();
									}
									if (!Local_369.f_46)
									{
										if (func_51() || __LIB_17__::func_893(&iLocal_1263, &(Local_369.f_5), &iLocal_1332, &uLocal_1417, 0, 2, 1))
										{
											if (iLocal_1332 != 65536)
											{
												func_53(0, 1, 0);
											}
											else if (iLocal_1301 >= 3)
											{
												func_53(0, 0, 0);
												if (iLocal_1109 == 0)
												{
													__LIB_2__::func_478(iLocal_1248[2], Global_35, sLocal_1145[16], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												}
												else
												{
													__LIB_2__::func_478(iLocal_1248[4], Global_35, sLocal_1145[16], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												}
											}
											else
											{
												func_55();
											}
											func_56();
										}
										if (func_57())
										{
											func_53(0, 1, 0);
										}
									}
									if (iLocal_1109 != 0)
									{
									}
									else
									{
										if (__LIB_3__::func_464(iLocal_1248[8], 0, &(Local_369.f_5), &iLocal_1332, 1, 0) && !bLocal_1377)
										{
											if (iLocal_1332 != 65536 && iLocal_1332 != 256)
											{
												bLocal_1377 = true;
												__LIB_2__::func_478(iLocal_1248[8], Global_35, sLocal_1145[17], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												func_59(iLocal_1248[8]);
											}
										}
										if (__LIB_3__::func_464(iLocal_1248[7], 0, &(Local_369.f_5), &iLocal_1332, 1, 0) && !bLocal_1378)
										{
											if (iLocal_1332 != 65536 && iLocal_1332 != 256)
											{
												bLocal_1378 = true;
												__LIB_2__::func_478(iLocal_1248[7], Global_35, sLocal_1145[18], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												func_59(iLocal_1248[7]);
											}
										}
									}
									func_60();
									if (func_61())
									{
										Local_369.f_50 = 1;
										func_25();
									}
									if (__LIB_3__::func_365(&Local_369, &iLocal_1248, iLocal_1301 >= 3, 0, iLocal_1301 < 3, 1, 1, 1, 0, 0, 0, 0, 0))
									{
										Local_369.f_50 = 1;
										bLocal_1409 = true;
									}
								}
							}
							BUILTIN::WAIT(Local_369.f_158);
						}
					}
					default:
						break;
			}
		}
	}
}

void func_21()
{
	iLocal_32 = __LIB_0__::func_979(Global_36);
	switch (iLocal_32)
	{
		case 9:
		case 13:
		case 14:
		case 15:
			iLocal_1109 = 0;
			break;
		case 0:
		case 11:
			iLocal_1109 = 1;
			break;
	}
}

void func_22()
{
	if (iLocal_1109 == 0)
	{
		Local_1182.f_4 = "script@beat@wilderness@trainholdup@odriscoll";
	}
	else if (iLocal_1109 == 1)
	{
		Local_1182.f_4 = "script@beat@wilderness@trainholdup@lemoyneboxcar";
		Local_1182.f_5 = "script@beat@wilderness@trainholdup@lemoynepasscar";
	}
}

void func_23()
{
	int iVar0;
	int iVar1;
	if (iLocal_1109 == 0)
	{
		Local_1190[0 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		Local_1190[0 /*2*/].f_1 = "BREAKOUT_CRIM01";
		Local_1190[1 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		Local_1190[1 /*2*/].f_1 = "BREAKOUT_VIC01";
		Local_1190[2 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		Local_1190[2 /*2*/].f_1 = "BREAKOUT_VIC02";
		Local_1190[3 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		Local_1190[3 /*2*/].f_1 = "BREAKOUT_VIC03";
		Local_1190[4 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		Local_1190[4 /*2*/].f_1 = "BREAKOUT_VIC04";
		Local_1190[5 /*2*/] = "script_re@TRAIN_HOLDUP@IDLE";
		Local_1190[5 /*2*/].f_1 = "IDLE";
		Local_1190[6 /*2*/] = "script_re@TRAIN_HOLDUP@DEAD";
		Local_1190[6 /*2*/].f_1 = "DEAD_01";
		Local_1190[7 /*2*/] = "script_re@TRAIN_HOLDUP@DEAD";
		Local_1190[7 /*2*/].f_1 = "DEAD_02";
		Local_1190[8 /*2*/] = "script_re@TRAIN_HOLDUP@DEAD";
		Local_1190[8 /*2*/].f_1 = "DEAD_03";
		Local_1190[9 /*2*/] = "script_re@TRAIN_HOLDUP@DEAD";
		Local_1190[9 /*2*/].f_1 = "DEAD_04";
		iVar0 = 0;
		while (iVar0 < 10)
		{
			func_73(Local_1190[iVar0 /*2*/], &uLocal_1211);
			iVar0++;
		}
	}
	else if (iLocal_1109 == 1)
	{
		Local_1190[0 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		Local_1190[0 /*2*/].f_1 = "BREAKOUT_VIC01";
		Local_1190[1 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		Local_1190[1 /*2*/].f_1 = "BREAKOUT_VIC02";
		Local_1190[2 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		Local_1190[2 /*2*/].f_1 = "BREAKOUT_VIC03";
		Local_1190[3 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		Local_1190[3 /*2*/].f_1 = "BREAKOUT_VIC04";
		Local_1190[4 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		Local_1190[4 /*2*/].f_1 = "BREAKOUT_VIC05";
		Local_1190[5 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		Local_1190[5 /*2*/].f_1 = "BREAKOUT_VIC06";
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_73(Local_1190[iVar1 /*2*/], &uLocal_1211);
			iVar1++;
		}
	}
}

void func_24()
{
	Local_1222.f_4 = 21030;
	Local_1222.f_3 = Global_35;
	Local_1222.f_8 = 4;
	Local_1222.f_19 = 4;
	Local_1222.f_21 = 4;
	Local_1222.f_17 = 0;
	Local_1222.f_18 = 0;
	Local_1222.f_7 = 4000;
	__LIB_1__::func_581(&(Local_1222.f_5), 1);
}

void func_25()
{
	int iVar0;
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_1422))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1422);
	}
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_1423))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1423);
	}
	if (bLocal_1409 && iLocal_1301 <= 2)
	{
		func_75();
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1297))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_1297, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1295))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1295);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_1296))
	{
		func_76(&iLocal_1296, vLocal_1119, vLocal_1122, 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1293))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_1293);
		VOLUME::_DELETE_VOLUME(iLocal_1293);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1182))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1182);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1182.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1182.f_1);
	}
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_1411);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1285[0]))
	{
		if (Local_369.f_161 && bLocal_1409)
		{
			VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_1285[0]));
		}
		else
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(iLocal_1285[0]), true);
		}
	}
	if (iLocal_1109 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1248[8]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1248[8], 133, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1248[7]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1248[7], 133, false);
		}
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		__LIB_2__::func_788(&(iLocal_1248[iVar0]), 1, 1, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_2__::func_788(&(iLocal_1263[iVar0]), 1, 1, 1);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1292))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1292);
	}
	__LIB_3__::func_823(&Local_369, &iLocal_1248, &iLocal_1269, iLocal_1109, iLocal_32, Local_369.f_51.f_4, 0, 1, 0, 1);
	if (bLocal_1110)
	{
		__LIB_1__::func_600(1);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_27()
{
	switch (iLocal_1300)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_369))
			{
				func_81(&bLocal_1366);
				func_82();
				__LIB_3__::func_284(&Local_563);
				__LIB_3__::func_284(&Local_1012);
				__LIB_2__::func_312(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
				if (iLocal_1109 == 0)
				{
					__LIB_4__::func_434(-1464742217);
				}
				else
				{
					__LIB_4__::func_434(-577630801);
					STREAMING::REQUEST_MODEL(iLocal_1180, false);
					STREAMING::REQUEST_MODEL(iLocal_1181, false);
					PROPSET::_REQUEST_PROPSET_2(iLocal_1424);
				}
				iLocal_1300 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_1299, cLocal_1247))
			{
				return false;
			}
			if (iLocal_1109 == 0 && !func_87(&uLocal_1211))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_563))
			{
				return false;
			}
			if (iLocal_1109 == 0)
			{
				if (!__LIB_4__::func_434(-1464742217))
				{
					return false;
				}
			}
			else if (!__LIB_4__::func_434(-577630801))
			{
				return false;
			}
			if (!__LIB_4__::func_435())
			{
				return false;
			}
			if (iLocal_1109 == 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_1180))
				{
					return false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_1181))
				{
					return false;
				}
				if (!PROPSET::_HAS_PROPSET_LOADED_2(iLocal_1424))
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_28(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || func_90(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_29(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 3:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 4:
			*iParam1 = 13;
			*uParam2 = 0;
			break;
		case 5:
			*iParam1 = 14;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 15;
			*uParam2 = 0;
			break;
	}
}

bool func_31()
{
	int iVar0;
	iVar0 = __LIB_7__::func_914(__LIB_3__::func_179(&Local_369), 0);
	if (__LIB_0__::func_34(iVar0))
	{
		if (__LIB_7__::func_831(iVar0, __LIB_3__::func_179(&Local_369)) <= 400f)
		{
			return true;
		}
	}
	return false;
}

void func_32()
{
	vector3 vVar0;
	if (iLocal_1109 != 1)
	{
		return;
	}
	if (Local_369.f_51.f_4 == 0)
	{
		vLocal_27 = { -5.58838f, -3.12366f, 0.13289f };
		vVar0 = { Local_369.f_51 + vLocal_27 };
		bLocal_1111 = __LIB_0__::func_195(Local_369.f_51, vVar0, Global_36);
	}
}

void func_33()
{
	switch (iLocal_1109)
	{
		case 0:
			bLocal_1112 = true;
			break;
		case 1:
			if (Local_369.f_51.f_4 == 0)
			{
				if (bLocal_1111)
				{
					bLocal_1112 = false;
				}
				else
				{
					bLocal_1112 = true;
				}
			}
			else
			{
				bLocal_1112 = false;
			}
			break;
	}
}

void func_34()
{
	switch (iLocal_1109)
	{
		case 0:
			switch (iLocal_32)
			{
				case 9:
					switch (Local_369.f_51.f_4)
					{
						case 0:
							vLocal_1137 = { 4.8876f, 274.645f, 109.737f };
							vLocal_1140 = { -26.18865f, 337.4812f, 111.4442f };
							break;
						case 1:
							vLocal_1137 = { 158.3745f, 585.1412f, 117.661f };
							vLocal_1140 = { 216.3839f, 547.7601f, 115.1547f };
							break;
					}
					break;
				case 15:
					vLocal_1137 = { -3894.651f, -2846.547f, -15.3585f };
					vLocal_1140 = { -3822.221f, -2827.164f, -15.24293f };
					break;
				case 14:
					vLocal_1137 = { -5100.704f, -3179.039f, -15.6474f };
					vLocal_1140 = { -5153.097f, -3230.809f, -16.53261f };
					break;
				case 13:
					vLocal_1137 = { -5025.307f, -2638.411f, -12.8459f };
					vLocal_1140 = { -5025.589f, -2714.07f, -13.23042f };
					break;
			}
			break;
		case 1:
			switch (iLocal_32)
			{
				case 0:
				case 11:
					switch (Local_369.f_51.f_4)
					{
						case 0:
							if (bLocal_1111)
							{
								vLocal_1137 = { 1909.839f, -1641.892f, 42.18f };
							}
							else
							{
								vLocal_1137 = { 1874.915f, -1655.65f, 43.1169f };
							}
							break;
						case 1:
							vLocal_1137 = { 1056.348f, -1083.965f, 65.7937f };
							break;
					}
					break;
			}
			break;
	}
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[0]))
	{
		if (ENTITY::IS_ENTITY_DEAD((*iParam0)[0]))
		{
		}
		iVar1 = 1;
		while (iVar1 <= (*iParam0 - 1))
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE((*iParam0)[0], iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				(*iParam0)[iVar1] = iVar0;
			}
			else
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	else
	{
		return 0;
	}
	return *iParam0;
}

void func_40()
{
	switch (iLocal_1109)
	{
		case 0:
			switch (iLocal_32)
			{
				case 9:
					switch (Local_369.f_51.f_4)
					{
						case 0:
							vLocal_1119 = { -22.23425f, 268.5887f, 108.6608f };
							vLocal_1122 = { 88.89289f, 199.8596f, 108.0461f };
							vLocal_1125 = { -101.9153f, 419.74f, 113.1078f };
							fLocal_1144 = 60f;
							Local_563[0 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[1 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[3 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[4 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[5 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[6 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[9 /*32*/].f_6 = { func_104(0, 0) };
							Local_563[9 /*32*/].f_9 = func_105(0, 0);
							Local_563[10 /*32*/].f_6 = { func_104(0, 1) };
							Local_563[11 /*32*/].f_6 = { func_104(0, 2) };
							vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
							if (bLocal_1111)
							{
								bLocal_31 = true;
								Local_563[2 /*32*/].f_6 = { -10.7397f, 290.225f, 110.167f };
								Local_563[2 /*32*/].f_9 = 305.8544f;
								Local_563[12 /*32*/].f_6 = { -3.7953f, 281.686f, 109.817f };
								Local_563[12 /*32*/].f_9 = 30.7033f;
								Local_563[13 /*32*/].f_6 = { -15.1941f, 299.122f, 110.69f };
								Local_563[13 /*32*/].f_9 = 24.4774f;
								Local_563[7 /*32*/].f_6 = { func_106(0, 0) };
								Local_563[7 /*32*/].f_9 = func_107(0, 0);
								Local_563[8 /*32*/].f_6 = { func_108(0, 0) };
								Local_563[8 /*32*/].f_9 = func_109(0, 0);
								Local_1012[0 /*32*/].f_6 = { -18.0069f, 285.0654f, 111.3926f };
								Local_1012[0 /*32*/].f_18 = 8.55f;
								Local_1012[1 /*32*/].f_6 = { -21.1489f, 288.8005f, 111.6319f };
								Local_1012[1 /*32*/].f_18 = 49.26f;
								Local_1012[2 /*32*/].f_6 = { -20.6792f, 285.9579f, 111.5264f };
								Local_1012[2 /*32*/].f_18 = 68.01f;
							}
							else
							{
								bLocal_31 = true;
								Local_563[2 /*32*/].f_6 = { 5.4508f, 288.274f, 109.773f };
								Local_563[2 /*32*/].f_9 = 126.9169f;
								Local_563[12 /*32*/].f_6 = { 8.6077f, 278.745f, 109.292f };
								Local_563[12 /*32*/].f_9 = 38.0125f;
								Local_563[13 /*32*/].f_6 = { -0.2693f, 295.742f, 110.008f };
								Local_563[13 /*32*/].f_9 = 24.0854f;
								Local_563[7 /*32*/].f_6 = { func_106(0, 1) };
								Local_563[7 /*32*/].f_9 = func_107(0, 1);
								Local_563[8 /*32*/].f_6 = { func_108(0, 1) };
								Local_563[8 /*32*/].f_9 = func_109(0, 1);
								Local_1012[0 /*32*/].f_6 = { 8.3751f, 294.6622f, 111.9876f };
								Local_1012[0 /*32*/].f_18 = -2.9f;
								Local_1012[1 /*32*/].f_6 = { 8.9583f, 298.3959f, 112.644f };
								Local_1012[1 /*32*/].f_18 = 53.12f;
								Local_1012[2 /*32*/].f_6 = { 5.12f, 298.4978f, 112.2613f };
								Local_1012[2 /*32*/].f_18 = 29.79f;
							}
							break;
						case 1:
							bLocal_31 = true;
							Local_563[0 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[1 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[3 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[4 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[5 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[6 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							Local_563[9 /*32*/].f_6 = { func_104(0, 0) };
							Local_563[9 /*32*/].f_9 = func_105(0, 0);
							Local_563[10 /*32*/].f_6 = { func_104(0, 1) };
							Local_563[11 /*32*/].f_6 = { func_104(0, 2) };
							vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
							bLocal_1111 = true;
							Local_563[2 /*32*/].f_6 = { 189.4026f, 577.8849f, 117.1983f };
							Local_563[2 /*32*/].f_9 = 158.6718f;
							Local_563[12 /*32*/].f_6 = { 148.3183f, 594.5875f, 118.0151f };
							Local_563[12 /*32*/].f_9 = 228.9833f;
							Local_563[13 /*32*/].f_6 = { 160.9096f, 587.0486f, 117.5769f };
							Local_563[13 /*32*/].f_9 = 280.1174f;
							Local_563[7 /*32*/].f_6 = { func_106(0, 0) };
							Local_563[7 /*32*/].f_9 = func_107(0, 0);
							Local_563[8 /*32*/].f_6 = { func_108(0, 0) };
							Local_563[8 /*32*/].f_9 = func_109(0, 0);
							Local_1012[0 /*32*/].f_6 = { 181.2684f, 580.4357f, 118.7471f };
							Local_1012[0 /*32*/].f_18 = -77.48f;
							Local_1012[1 /*32*/].f_6 = { 183.5339f, 581.9477f, 118.5999f };
							Local_1012[1 /*32*/].f_18 = -123.53f;
							Local_1012[2 /*32*/].f_6 = { 185.0063f, 578.9863f, 118.4017f };
							Local_1012[2 /*32*/].f_18 = -89.38f;
							break;
					}
					break;
				case 15:
					vLocal_1119 = { -3824.969f, -2802.72f, -17.00114f };
					vLocal_1122 = { -3870.967f, -2890.896f, -16.78127f };
					vLocal_1125 = { -3838.878f, -2832.447f, -15.63361f };
					fLocal_1144 = 60f;
					Local_563[0 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[1 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[3 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[4 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[5 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[6 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[9 /*32*/].f_6 = { func_104(0, 0) };
					Local_563[9 /*32*/].f_9 = func_105(0, 0);
					Local_563[10 /*32*/].f_6 = { func_104(0, 1) };
					Local_563[11 /*32*/].f_6 = { func_104(0, 2) };
					if (bLocal_1111)
					{
						bLocal_31 = true;
						vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
						Local_563[2 /*32*/].f_6 = { -3871.339f, -2832.615f, -15.73324f };
						Local_563[2 /*32*/].f_9 = -159.4f;
						Local_563[12 /*32*/].f_6 = { -3883.883f, -2838.233f, -15.57545f };
						Local_563[12 /*32*/].f_9 = 30.7033f;
						Local_563[13 /*32*/].f_6 = { -3859.39f, -2830.15f, -15.62999f };
						Local_563[13 /*32*/].f_9 = 24.4774f;
						Local_563[7 /*32*/].f_6 = { func_106(0, 0) };
						Local_563[7 /*32*/].f_9 = func_107(0, 0);
						Local_563[8 /*32*/].f_6 = { func_108(0, 0) };
						Local_563[8 /*32*/].f_9 = func_109(0, 0);
						Local_1012[0 /*32*/].f_6 = { -3876.951f, -2829.671f, -15.2495f };
						Local_1012[0 /*32*/].f_18 = -45.69f;
						Local_1012[1 /*32*/].f_6 = { -3880.048f, -2831.679f, -15.1576f };
						Local_1012[1 /*32*/].f_18 = -38.49f;
						Local_1012[2 /*32*/].f_6 = { -3879.593f, -2829.111f, -15.3223f };
						Local_1012[2 /*32*/].f_18 = -64.21f;
					}
					else
					{
						bLocal_31 = true;
						vLocal_1113 = { -3838.43f, -2858.918f, -16.71762f };
						vLocal_1116 = { -2823.664f, -2993.229f, 70.31829f };
						Local_563[2 /*32*/].f_6 = { -3879.204f, -2848.889f, -15.84738f };
						Local_563[2 /*32*/].f_9 = 13.2f;
						Local_563[12 /*32*/].f_6 = { -3892.382f, -2848.434f, -15.41674f };
						Local_563[12 /*32*/].f_9 = 38.0125f;
						Local_563[13 /*32*/].f_6 = { -3863.656f, -2841.636f, -15.54263f };
						Local_563[13 /*32*/].f_9 = 24.0854f;
						Local_563[7 /*32*/].f_6 = { func_106(0, 1) };
						Local_563[7 /*32*/].f_9 = func_107(0, 1);
						Local_563[8 /*32*/].f_6 = { func_108(0, 1) };
						Local_563[8 /*32*/].f_9 = func_109(0, 1);
						Local_1012[0 /*32*/].f_6 = { -3874.228f, -2852.244f, -15.1037f };
						Local_1012[0 /*32*/].f_18 = -57.49f;
						Local_1012[1 /*32*/].f_6 = { -3868.626f, -2850.532f, -15.1142f };
						Local_1012[1 /*32*/].f_18 = -114.09f;
						Local_1012[2 /*32*/].f_6 = { -3871.036f, -2853.409f, -15.0711f };
						Local_1012[2 /*32*/].f_18 = -104.67f;
					}
					break;
				case 14:
					vLocal_1119 = { -5271.468f, -3285.091f, -15.916f };
					vLocal_1122 = { -5055.784f, -3094.546f, -18.8199f };
					vLocal_1125 = { -5153.211f, -3178.309f, -18.9399f };
					fLocal_1144 = 200f;
					Local_563[0 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[1 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[3 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[4 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[5 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[6 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[9 /*32*/].f_6 = { func_104(0, 0) };
					Local_563[9 /*32*/].f_9 = func_105(0, 0);
					Local_563[10 /*32*/].f_6 = { func_104(0, 1) };
					Local_563[11 /*32*/].f_6 = { func_104(0, 2) };
					vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
					if (bLocal_1111)
					{
						bLocal_31 = true;
						Local_563[2 /*32*/].f_6 = { -5112.59f, -3203.114f, -16.43013f };
						Local_563[2 /*32*/].f_9 = 45.4f;
						Local_563[12 /*32*/].f_6 = { -5099.354f, -3183.325f, -15.7153f };
						Local_563[12 /*32*/].f_9 = 30.7033f;
						Local_563[13 /*32*/].f_6 = { -5128.237f, -3214.17f, -16.5209f };
						Local_563[13 /*32*/].f_9 = 24.4774f;
						Local_563[7 /*32*/].f_6 = { func_106(0, 0) };
						Local_563[7 /*32*/].f_9 = func_107(0, 0);
						Local_563[8 /*32*/].f_6 = { func_108(0, 0) };
						Local_563[8 /*32*/].f_9 = func_109(0, 0);
						Local_1012[0 /*32*/].f_6 = { -5106.154f, -3197.026f, -16.4802f };
						Local_1012[0 /*32*/].f_18 = -45.69f;
						Local_1012[1 /*32*/].f_6 = { -5105.599f, -3200.847f, -16.4035f };
						Local_1012[1 /*32*/].f_18 = -38.49f;
						Local_1012[2 /*32*/].f_6 = { -5111.245f, -3205.606f, -16.6803f };
						Local_1012[2 /*32*/].f_18 = -64.21f;
					}
					else
					{
						bLocal_31 = true;
						Local_563[2 /*32*/].f_6 = { -5114.546f, -3185.393f, -16.09497f };
						Local_563[2 /*32*/].f_9 = 233.2f;
						Local_563[12 /*32*/].f_6 = { -5104.41f, -3178.683f, -15.7215f };
						Local_563[12 /*32*/].f_9 = 38.0125f;
						Local_563[13 /*32*/].f_6 = { -5132.622f, -3208.595f, -16.4846f };
						Local_563[13 /*32*/].f_9 = 24.0854f;
						Local_563[7 /*32*/].f_6 = { func_106(0, 1) };
						Local_563[7 /*32*/].f_9 = func_107(0, 1);
						Local_563[8 /*32*/].f_6 = { func_108(0, 1) };
						Local_563[8 /*32*/].f_9 = func_109(0, 1);
						Local_1012[0 /*32*/].f_6 = { -5119.385f, -3190.128f, -16.4131f };
						Local_1012[0 /*32*/].f_18 = 137.49f;
						Local_1012[1 /*32*/].f_6 = { -5119.327f, -3186.927f, -16.3683f };
						Local_1012[1 /*32*/].f_18 = 124.09f;
						Local_1012[2 /*32*/].f_6 = { -5113.213f, -3177.655f, -15.7867f };
						Local_1012[2 /*32*/].f_18 = 144.67f;
					}
					break;
				case 13:
					vLocal_1119 = { -4998.487f, -2724.98f, -11.42723f };
					vLocal_1122 = { -5052.787f, -2651.802f, -12.97349f };
					vLocal_1125 = { -5023.507f, -2697.831f, -11.99477f };
					fLocal_1144 = 200f;
					Local_563[0 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[1 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[3 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[4 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[5 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[6 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					Local_563[9 /*32*/].f_6 = { func_104(0, 0) };
					Local_563[9 /*32*/].f_9 = func_105(0, 0);
					Local_563[10 /*32*/].f_6 = { func_104(0, 1) };
					Local_563[11 /*32*/].f_6 = { func_104(0, 2) };
					vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
					if (bLocal_1111)
					{
						bLocal_31 = true;
						Local_563[2 /*32*/].f_6 = { -5019.124f, -2668.299f, -13.05953f };
						Local_563[2 /*32*/].f_9 = 90.4f;
						Local_563[12 /*32*/].f_6 = { -5021.933f, -2641.929f, -12.95086f };
						Local_563[12 /*32*/].f_9 = 30.7033f;
						Local_563[13 /*32*/].f_6 = { -5021.803f, -2683.599f, -13.09692f };
						Local_563[13 /*32*/].f_9 = 24.4774f;
						Local_563[7 /*32*/].f_6 = { func_106(0, 0) };
						Local_563[7 /*32*/].f_9 = func_107(0, 0);
						Local_563[8 /*32*/].f_6 = { func_108(0, 0) };
						Local_563[8 /*32*/].f_9 = func_109(0, 0);
						Local_1012[0 /*32*/].f_6 = { -5018.246f, -2674.49f, -13.0278f };
						Local_1012[0 /*32*/].f_18 = -5.69f;
						Local_1012[1 /*32*/].f_6 = { -5016.112f, -2669.641f, -12.9718f };
						Local_1012[1 /*32*/].f_18 = 34.49f;
						Local_1012[2 /*32*/].f_6 = { -5012.745f, -2675.144f, -12.8842f };
						Local_1012[2 /*32*/].f_18 = 6.31f;
					}
					else
					{
						bLocal_31 = true;
						Local_563[2 /*32*/].f_6 = { -5032.279f, -2646.633f, -13.3179f };
						Local_563[2 /*32*/].f_9 = 273.2f;
						Local_563[12 /*32*/].f_6 = { -5028.25f, -2641.403f, -12.9765f };
						Local_563[12 /*32*/].f_9 = 38.0125f;
						Local_563[13 /*32*/].f_6 = { -5029.025f, -2684.366f, -13.098f };
						Local_563[13 /*32*/].f_9 = 24.0854f;
						Local_563[7 /*32*/].f_6 = { func_106(0, 1) };
						Local_563[7 /*32*/].f_9 = func_107(0, 1);
						Local_563[8 /*32*/].f_6 = { func_108(0, 1) };
						Local_563[8 /*32*/].f_9 = func_109(0, 1);
						Local_1012[0 /*32*/].f_6 = { -5037.902f, -2646.324f, -13.6562f };
						Local_1012[0 /*32*/].f_18 = 177.89f;
						Local_1012[1 /*32*/].f_6 = { -5038.977f, -2649.755f, -13.6431f };
						Local_1012[1 /*32*/].f_18 = -164.09f;
						Local_1012[2 /*32*/].f_6 = { -5042.921f, -2645.685f, -13.4425f };
						Local_1012[2 /*32*/].f_18 = -135.2f;
					}
					break;
			}
			break;
		case 1:
			Local_563[0 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			Local_563[1 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			Local_563[2 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			Local_563[3 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			Local_563[5 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			Local_563[6 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			Local_563[7 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			Local_563[8 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			Local_563[9 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			Local_563[10 /*32*/].f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			switch (iLocal_32)
			{
				case 0:
				case 11:
					switch (Local_369.f_51.f_4)
					{
						case 0:
							bLocal_31 = true;
							vLocal_1116 = { 2141.377f, -1302.146f, 41.68398f };
							vLocal_1128 = { 1843.454f, -1671.895f, 44.7006f };
							fLocal_1143 = -98.01f;
							if (bLocal_1111)
							{
								vLocal_1131 = { 1924.221f, -1641.241f, 41.58762f };
								vLocal_1134 = { 1903.284f, -1583.715f, 42.71379f };
								Local_563[4 /*32*/].f_6 = { 1871.378f, -1662.351f, 43.8739f };
								Local_563[4 /*32*/].f_9 = 15.3771f;
								Local_563[13 /*32*/].f_6 = { 1909.703f, -1646.869f, 43.1248f };
								Local_563[13 /*32*/].f_9 = 24.5139f;
								Local_563[11 /*32*/].f_6 = { 1900.934f, -1650.471f, 43.3729f };
								Local_563[11 /*32*/].f_9 = 190.545f;
								Local_563[12 /*32*/].f_6 = { 1865.06f, -1663.145f, 44.3252f };
								Local_1012[0 /*32*/].f_6 = { 1898.4f, -1662.144f, 43.1098f };
								Local_1012[0 /*32*/].f_18 = (129.23f + 180f);
								Local_1012[1 /*32*/].f_6 = { 1890.971f, -1665.205f, 43.2337f };
								Local_1012[1 /*32*/].f_18 = (144.43f + 180f);
								Local_1012[2 /*32*/].f_6 = { 1895.872f, -1665.977f, 42.9927f };
								Local_1012[2 /*32*/].f_18 = (89.38f + 180f);
							}
							else
							{
								vLocal_1131 = { 1890.692f, -1626.998f, 42.92651f };
								vLocal_1134 = { 1891.603f, -1600.298f, 43.08232f };
								Local_563[4 /*32*/].f_6 = { 1910.239f, -1635.109f, 42.9916f };
								Local_563[4 /*32*/].f_9 = -156.51f;
								Local_563[13 /*32*/].f_6 = { 1873.551f, -1652.01f, 43.0072f };
								Local_563[13 /*32*/].f_9 = 24.5139f;
								Local_563[11 /*32*/].f_6 = { 1882.713f, -1649.379f, 42.81778f };
								Local_563[11 /*32*/].f_9 = 190.545f;
								Local_563[12 /*32*/].f_6 = { 1917.991f, -1634.25f, 41.75762f };
								Local_1012[0 /*32*/].f_6 = { 1891.051f, -1636.112f, 43.6106f };
								Local_1012[0 /*32*/].f_18 = 137.5f;
								Local_1012[1 /*32*/].f_6 = { 1896.276f, -1632.239f, 43.4421f };
								Local_1012[1 /*32*/].f_18 = 83.94f;
								Local_1012[2 /*32*/].f_6 = { 1892.247f, -1632.045f, 43.6731f };
								Local_1012[2 /*32*/].f_18 = 115.73f;
							}
							break;
						case 1:
							bLocal_31 = true;
							bLocal_1111 = true;
							vLocal_1116 = { 2141.377f, -1302.146f, 41.68398f };
							vLocal_1128 = { 1036.304f, -1054.688f, 66.5585f };
							fLocal_1143 = 179.72f;
							vLocal_1131 = { 1027.183f, -1093.416f, 64.9603f };
							Local_563[4 /*32*/].f_6 = { 1032.645f, -1050.378f, 65.6749f };
							Local_563[4 /*32*/].f_9 = 289.4934f;
							Local_563[13 /*32*/].f_6 = { 1050.467f, -1080.295f, 65.7264f };
							Local_563[13 /*32*/].f_9 = 24.5139f;
							Local_563[11 /*32*/].f_6 = { 1033.123f, -1038.004f, 65.6573f };
							Local_563[11 /*32*/].f_9 = 190.545f;
							Local_563[12 /*32*/].f_6 = { 1036.159f, -1045.918f, 65.5726f };
							Local_1012[0 /*32*/].f_6 = { 1034.88f, -1070.718f, 66.813f };
							Local_1012[0 /*32*/].f_18 = -160.38f;
							Local_1012[1 /*32*/].f_6 = { 1030.864f, -1063.733f, 66.9216f };
							Local_1012[1 /*32*/].f_18 = -140.08f;
							Local_1012[2 /*32*/].f_6 = { 1031.119f, -1068.586f, 66.8589f };
							Local_1012[2 /*32*/].f_18 = 158.58f;
							break;
					}
					break;
			}
			break;
	}
}

void func_41()
{
	if (iLocal_1109 == 0)
	{
		if (bLocal_31)
		{
			Local_1182 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 64, "PBL_ACTION", false, true);
			Local_1182.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 0, "PBL_ACTION", false, true);
		}
		else
		{
			Local_1182 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 0, "PBL_ACTION", false, true);
			Local_1182.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 0, "PBL_ACTION", false, true);
		}
	}
	else
	{
		Local_1182 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 64, "PBL_ACTION", false, true);
		Local_1182.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_5, 64, "PBL_ACTION", false, true);
	}
}

int func_42(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar1 = { __LIB_2__::func_66(vParam0, vParam3, iParam10) };
	vVar4 = { __LIB_2__::func_67(vParam0, vParam3, iParam10) };
	__LIB_3__::func_618(vParam6, fParam9, 1, 0, 0, bParam11, bParam12);
	FIRE::STOP_FIRE_IN_RANGE(vParam6, fParam9);
	PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
	PATHFIND::SET_ROADS_IN_AREA(vVar1, vVar4, 0, 1, 0);
	iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1, vVar4, bParam11, 15);
	return iVar0;
}

void func_44()
{
	if (!Local_369.f_161)
	{
		if (__LIB_1__::func_992(Global_35, Local_369.f_51, 1) < 6400f)
		{
			func_25();
		}
	}
	if (iLocal_1109 == 0)
	{
		if (VEHICLE::_0xF05DFAF1ADFEF2CD(-1464742217, vLocal_1137, bLocal_1112, 1))
		{
			iLocal_1285[0] = VEHICLE::_CREATE_MISSION_TRAIN(-1464742217, vLocal_1137, bLocal_1112, false, true, false);
			bLocal_1410 = true;
		}
		else
		{
			func_25();
		}
	}
	else if (VEHICLE::_0xF05DFAF1ADFEF2CD(-577630801, vLocal_1137, bLocal_1112, 1))
	{
		iLocal_1285[0] = VEHICLE::_CREATE_MISSION_TRAIN(-577630801, vLocal_1137, bLocal_1112, false, true, false);
		bLocal_1410 = true;
	}
	else
	{
		func_25();
	}
}

bool func_45()
{
	bool bVar0;
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1182, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_1182, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_1182);
		}
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1182.f_1, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_1182.f_1, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_1182.f_1);
		}
		return false;
	}
	if (iLocal_1109 == 1)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1182.f_1, "PBL_BREAKOUT"))
		{
			bVar0 = true;
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1182.f_1, "PBL_BREAKOUT"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1182.f_1, "PBL_BREAKOUT");
			}
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1182.f_1, "PBL_EXIT"))
		{
			bVar0 = true;
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1182.f_1, "PBL_EXIT"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1182.f_1, "PBL_EXIT");
			}
		}
		if (bVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_47()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1248[iVar0]))
		{
			if (iVar0 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1263[iVar0]))
				{
					iLocal_1263[iVar0] = __LIB_3__::func_870(Local_1012[iVar0 /*32*/].f_1, &(Local_1012[iVar0 /*32*/]), Local_1012[iVar0 /*32*/].f_6, Local_1012[iVar0 /*32*/].f_18, 1, 0, 1, 0, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_1263[iVar0], 284, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_1263[iVar0], 358, true);
					return false;
				}
				iLocal_1248[iVar0] = __LIB_3__::func_870(Local_563[iVar0 /*32*/].f_1, &(Local_563[iVar0 /*32*/]), Local_563[iVar0 /*32*/].f_6, Local_563[iVar0 /*32*/].f_9, 0, 0, 1, 0, 1);
			}
			else
			{
				iLocal_1248[iVar0] = __LIB_3__::func_870(Local_563[iVar0 /*32*/].f_1, &(Local_563[iVar0 /*32*/]), Local_563[iVar0 /*32*/].f_6, Local_563[iVar0 /*32*/].f_9, 0, 0, 1, 0, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar0], 317, false);
			}
			if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_1248[iVar0], true, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar0], 148, true);
				__LIB_3__::func_873(iLocal_1248[iVar0], 85);
				if (iVar0 < 3)
				{
					if (iLocal_30 == 0)
					{
						__LIB_2__::func_132(0, iLocal_1248[iVar0]);
					}
					else
					{
						__LIB_2__::func_132(5, iLocal_1248[iVar0]);
					}
					if (iVar0 == 2)
					{
						__LIB_2__::func_231(iLocal_1248[iVar0], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[2], 38, true);
					}
					else
					{
						__LIB_2__::func_231(iLocal_1248[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					}
				}
			}
			return false;
		}
		iVar0++;
	}
	if (__LIB_2__::func_1(iLocal_1248[0], 0, 1))
	{
		__LIB_3__::func_285(iLocal_1248[0], &Local_369, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_1248[0], 6, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1248[0], true, 0f);
	}
	if (__LIB_2__::func_1(iLocal_1248[1], 0, 1))
	{
		__LIB_3__::func_285(iLocal_1248[1], &Local_369, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_1248[1], 6, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1248[1], true, 0f);
	}
	if (__LIB_2__::func_1(iLocal_1248[2], 0, 1))
	{
		__LIB_3__::func_285(iLocal_1248[2], &Local_369, 0);
		PED::SET_PED_HEARING_RANGE(iLocal_1248[2], 14f);
		PED::SET_PED_CONFIG_FLAG(iLocal_1248[2], 6, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1248[2], true, 0f);
	}
	return true;
}

void func_48()
{
	int iVar0;
	int iVar1;
	PED::ADD_RELATIONSHIP_GROUP("REL_TRAIN_HOLDUP", &iVar0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iVar0, joaat("REL_COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), iVar0);
	if (iLocal_1109 == 0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("REL_GANG_ODRISCOLL"), iVar0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iVar0, joaat("REL_GANG_ODRISCOLL"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iVar0, joaat("REL_GANG_DUTCHS"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iVar0, joaat("PLAYER"));
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar1]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1248[iVar1], iVar0);
			}
			iVar1++;
		}
	}
	else
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("REL_GANG_LEMOYNE_RAIDERS"), iVar0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iVar0, joaat("REL_GANG_LEMOYNE_RAIDERS"));
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar1]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1248[iVar1], iVar0);
			}
			iVar1++;
		}
	}
}

bool func_49()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1248[iVar0]))
		{
			if (iVar0 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1263[iVar0]))
				{
					iLocal_1263[iVar0] = __LIB_3__::func_870(Local_1012[iVar0 /*32*/].f_1, &(Local_1012[iVar0 /*32*/]), Local_1012[iVar0 /*32*/].f_6, Local_1012[iVar0 /*32*/].f_18, 1, 0, 1, 0, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_1263[iVar0], 284, true);
					return false;
				}
				iLocal_1248[iVar0] = __LIB_3__::func_870(Local_563[iVar0 /*32*/].f_1, &(Local_563[iVar0 /*32*/]), Local_563[iVar0 /*32*/].f_6, Local_563[iVar0 /*32*/].f_9, 0, 0, 1, 0, 1);
			}
			else
			{
				iLocal_1248[iVar0] = __LIB_3__::func_870(Local_563[iVar0 /*32*/].f_1, &(Local_563[iVar0 /*32*/]), Local_563[iVar0 /*32*/].f_6, Local_563[iVar0 /*32*/].f_9, 0, 0, 1, 0, 1);
			}
			if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_1248[iVar0], true, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar0], 148, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar0], 307, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[iVar0], 54, true);
				if (iVar0 < 5)
				{
					__LIB_2__::func_132(2, iLocal_1248[iVar0]);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[iVar0], 0, false);
					if (iVar0 == 4 || iVar0 == 3)
					{
						__LIB_2__::func_231(iLocal_1248[iVar0], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					}
					else if (iVar0 != 1 && iVar0 != 0)
					{
						__LIB_2__::func_231(iLocal_1248[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_1248[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
					}
					else
					{
						__LIB_2__::func_231(iLocal_1248[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
						WEAPON::_HIDE_PED_WEAPONS(iLocal_1248[iVar0], 2, true);
						TASK::TASK_SWAP_WEAPON(iLocal_1248[iVar0], 1, 0, 0, 0);
					}
				}
				else
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar0], 317, false);
				}
			}
			return false;
		}
		iVar0++;
	}
	if (__LIB_2__::func_1(iLocal_1248[2], 0, 1))
	{
		PED::SET_PED_HEARING_RANGE(iLocal_1248[2], 14f);
		__LIB_3__::func_285(iLocal_1248[2], &Local_369, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_1248[2], 6, true);
		__LIB_3__::func_873(iLocal_1248[2], 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1248[2], true, 0f);
	}
	if (__LIB_2__::func_1(iLocal_1248[0], 0, 1))
	{
		__LIB_3__::func_285(iLocal_1248[0], &Local_369, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_1248[0], 6, true);
		__LIB_3__::func_873(iLocal_1248[0], 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1248[0], true, 0f);
	}
	if (__LIB_2__::func_1(iLocal_1248[1], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_1248[1], 6, true);
		__LIB_3__::func_873(iLocal_1248[1], 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1248[1], true, 0f);
	}
	if (__LIB_2__::func_1(iLocal_1248[4], 0, 1))
	{
		PED::SET_PED_HEARING_RANGE(iLocal_1248[4], 14f);
		PED::SET_PED_CONFIG_FLAG(iLocal_1248[4], 6, true);
		__LIB_3__::func_873(iLocal_1248[4], 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1248[4], true, 0f);
	}
	if (__LIB_2__::func_1(iLocal_1248[3], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_1248[3], 6, true);
		__LIB_3__::func_873(iLocal_1248[3], 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1248[3], true, 0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1292))
	{
		__LIB_3__::func_285(iLocal_1292, &Local_369, 0);
	}
	return true;
}

bool func_51()
{
	if (iLocal_1109 == 0)
	{
		if (__LIB_17__::func_893(&iLocal_1248, &(Local_369.f_5), &iLocal_1332, &uLocal_1416, 0, 6, 1))
		{
			return true;
		}
	}
	else if ((__LIB_17__::func_893(&iLocal_1248, &(Local_369.f_5), &iLocal_1332, &uLocal_1416, 0, 10, 1) || PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_1292)) || __LIB_2__::func_343(Global_35, iLocal_1292, 0))
	{
		return true;
	}
	return false;
}

void func_53(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Local_369.f_46 = 1;
	Local_369.f_44 = 1;
	__LIB_2__::func_411(&(Local_317[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_317[1 /*17*/]), 0, 0);
	if (iLocal_1109 == 0)
	{
		func_132();
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_1248[0], 2);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_1248[1], 2);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_1248[2], 2);
		PED::SET_PED_COMBAT_RANGE(iLocal_1248[0], 0);
		PED::SET_PED_COMBAT_RANGE(iLocal_1248[1], 0);
		PED::SET_PED_COMBAT_RANGE(iLocal_1248[2], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[0], 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[1], 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[2], 0, false);
		__LIB_2__::func_603(&(iLocal_1248[0]), &(Local_33[0 /*21*/]), &Local_265, 1, 1);
		func_134(0.1f, 0.2f);
		__LIB_2__::func_504(iLocal_1248[0], 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_1263[0], 358, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_1263[1], 358, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_1263[2], 358, false);
		__LIB_2__::func_73(iLocal_1248[0], &(iLocal_1269[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			__LIB_2__::func_603(&(iLocal_1248[iVar0]), &(Local_33[iVar0 /*21*/]), &Local_265, 1, 1);
			if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1))
			{
				__LIB_2__::func_504(iLocal_1248[iVar0], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[iVar0], 54, true);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), iLocal_1248[iVar0]);
				TASK::TASK_COMBAT_PED(iLocal_1248[iVar0], Global_35, 0, 0);
				if (!MAP::DOES_BLIP_EXIST(iLocal_1269[iVar0]))
				{
					__LIB_2__::func_73(iLocal_1248[iVar0], &(iLocal_1269[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
			}
			iVar0++;
		}
		if (__LIB_2__::func_1(iLocal_1248[2], 0, 1))
		{
			if (bParam1)
			{
				if (bParam0)
				{
					__LIB_2__::func_478(iLocal_1248[2], Global_35, sLocal_1145[14], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_1248[2], Global_35, sLocal_1145[11], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_1248[2]);
			PED::_0x802092B07E3B1EEA(iLocal_1248[2], Global_36, 3);
		}
	}
	else if (iLocal_1109 == 1)
	{
		if (!(iLocal_1301 >= 3 && !func_138(Local_369.f_5.f_10)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1295))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1295, Local_1182))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, "CRATE", iLocal_1295);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_1295);
				}
			}
			iVar1 = -1;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1248[0]))
			{
				__LIB_2__::func_603(&(iLocal_1248[0]), &(Local_33[0 /*21*/]), &Local_265, 1, 1);
				iVar1 = func_139(iLocal_1248[0]);
			}
			if (iVar1 != -1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (!PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_1285[iVar1]))
				{
					TASK::_TASK_DISEMBARK_VEHICLE(0, iLocal_1285[iVar1], 20000, 0, 1073741824 /* Float: 2f */, 1);
				}
				TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				if (__LIB_2__::func_1(iLocal_1248[0], 0, 1))
				{
					__LIB_2__::func_504(iLocal_1248[0], 0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[0], iVar2);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				if (__LIB_2__::func_1(iLocal_1248[1], 0, 1))
				{
					__LIB_2__::func_603(&(iLocal_1248[1]), &(Local_33[1 /*21*/]), &Local_265, 1, 1);
					__LIB_2__::func_504(iLocal_1248[1], 0);
					TASK::TASK_COMBAT_PED(iLocal_1248[1], Global_35, 0, 0);
					__LIB_2__::func_73(iLocal_1248[1], &(iLocal_1269[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
			}
			else if (!bParam2)
			{
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1))
					{
						__LIB_2__::func_603(&(iLocal_1248[iVar0]), &(Local_33[iVar0 /*21*/]), &Local_265, 1, 1);
						__LIB_2__::func_504(iLocal_1248[iVar0], 0);
						PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar0], 130, true);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						if (PED::IS_PED_IN_VEHICLE(iLocal_1248[iVar0], iLocal_1292, false))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[iVar0], 1, true);
						}
						TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						if (!AITRANSPORT::_0x619E63980BFC0096(iLocal_1248[iVar0], iLocal_1292, 0))
						{
							TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1248[iVar0], iVar2, (IntToFloat(iVar0) * 0.3f), (IntToFloat(iVar0) * 0.3f));
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1248[iVar0], false);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						if (!MAP::DOES_BLIP_EXIST(iLocal_1269[iVar0]))
						{
							iLocal_1269[iVar0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_1248[iVar0]);
						}
					}
					iVar0++;
				}
			}
			iVar0 = 2;
			while (iVar0 <= 3)
			{
				if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1))
				{
					__LIB_2__::func_504(iLocal_1248[iVar0], 0);
					__LIB_2__::func_603(&(iLocal_1248[iVar0]), &(Local_33[iVar0 /*21*/]), &Local_265, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[iVar0], 54, true);
					TASK::TASK_COMBAT_PED(iLocal_1248[iVar0], Global_35, 16384, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_1269[iVar0]))
					{
						__LIB_2__::func_73(iLocal_1248[iVar0], &(iLocal_1269[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					}
				}
				iVar0++;
			}
			if (__LIB_2__::func_1(iLocal_1248[4], 0, 1))
			{
				__LIB_2__::func_504(iLocal_1248[4], 0);
				__LIB_2__::func_603(&(iLocal_1248[4]), &(Local_33[4 /*21*/]), &Local_265, 1, 1);
				if (bParam1)
				{
					if (bParam0)
					{
						__LIB_2__::func_478(iLocal_1248[4], Global_35, sLocal_1145[14], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_1248[4], Global_35, sLocal_1145[11], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				PED::_0x802092B07E3B1EEA(iLocal_1248[4], Global_36, 3);
				TASK::TASK_COMBAT_PED(iLocal_1248[4], Global_35, 0, 0);
				__LIB_2__::func_73(iLocal_1248[4], &(iLocal_1269[4]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			}
		}
		else
		{
			Local_369.f_46 = 0;
		}
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
	__LIB_1__::func_148(&uLocal_1351);
	func_140(0);
	__LIB_14__::func_128(4);
}

void func_55()
{
	struct<16> Var0;
	int iVar17;
	int iVar18;
	if (iLocal_1109 == 1)
	{
		func_53(0, 1, 0);
		return;
	}
	Local_369.f_46 = 1;
	func_132();
	if (__LIB_2__::func_1(iLocal_1248[0], 0, 1))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_1248[0], 2);
		PED::SET_PED_COMBAT_RANGE(iLocal_1248[0], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[0], 0, false);
		Var0 = Global_35;
		Var0.f_6 = 1;
		Var0.f_4 = 1500;
		Var0.f_15 = 1;
		WEAPON::_0x5230D3F6EE56CFE6(iLocal_1248[0], 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar17);
		TASK::TASK_SHOOT_WITH_WEAPON(0, &Var0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar17);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[0], iVar17);
		TASK::CLEAR_SEQUENCE_TASK(&iVar17);
	}
	if (__LIB_2__::func_1(iLocal_1248[1], 0, 1))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[1], 54, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[1], 0, false);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_1248[1], 2);
		PED::SET_PED_COMBAT_RANGE(iLocal_1248[1], 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
		TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1248[1], iLocal_1298, 0.5f, 0.9f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
	}
	if (__LIB_2__::func_1(iLocal_1248[2], 0, 1))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[2], 0, false);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_1248[2], 2);
		PED::SET_PED_COMBAT_RANGE(iLocal_1248[2], 0);
		PED::_0x802092B07E3B1EEA(iLocal_1248[2], Global_36, 3);
		TASK::CLEAR_PED_SECONDARY_TASK(iLocal_1248[2]);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 1);
		TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 1000, 0, 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[2], iLocal_1298);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
		if (bLocal_1366 && !__LIB_3__::func_425(&uLocal_1431))
		{
			__LIB_2__::func_478(iLocal_1248[2], Global_35, sLocal_1145[10], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(iLocal_1248[2], Global_35, sLocal_1145[11], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	iVar18 = 0;
	while (iVar18 <= 2)
	{
		__LIB_2__::func_603(&(iLocal_1248[iVar18]), &(Local_33[iVar18 /*21*/]), &Local_265, 1, 1);
		if (__LIB_2__::func_1(iLocal_1248[iVar18], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1269[iVar18]))
			{
				__LIB_2__::func_73(iLocal_1248[iVar18], &(iLocal_1269[iVar18]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			}
		}
		iVar18++;
	}
	if (iLocal_1301 == 1)
	{
		func_144();
	}
	else
	{
		__LIB_1__::func_148(&uLocal_1351);
	}
	func_140(1);
	__LIB_14__::func_128(4);
}

void func_56()
{
	int iVar0;
	if (func_145())
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
	TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_369.f_51, 3, 0, -1f, -1, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(iLocal_1263[iVar0], 0, 1))
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1263[iVar0], iLocal_1298, 0.3f, 0.6f);
		}
		iVar0++;
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
}

bool func_57()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_394(Global_35, iLocal_1263[iVar0], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_59(int iParam0)
{
	int iVar0;
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		iVar0 = func_139(iParam0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
		if (iVar0 != -1)
		{
			TASK::_TASK_DISEMBARK_VEHICLE(0, iLocal_1285[iVar0], -1, 0, 1073741824 /* Float: 2f */, 1);
		}
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3, 256, 80f, -1, 0);
		TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_1298);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
	}
}

void func_60()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	float fVar12;
	func_177();
	if ((iLocal_1301 == 1 || iLocal_1301 == 4) || iLocal_1301 == 0)
	{
		return;
	}
	if (iLocal_1109 == 0)
	{
		if (bLocal_1367 || bLocal_1368)
		{
			return;
		}
	}
	else if (iLocal_1301 >= 3)
	{
		return;
	}
	if (iLocal_1303 == 1)
	{
		return;
	}
	if (iLocal_1109 == 0)
	{
		iLocal_1267 = iLocal_1248[2];
		PED::SET_PED_RESET_FLAG(iLocal_1248[2], 42, true);
		if (func_178(iLocal_1267) && __LIB_3__::func_549(iLocal_1267, &uLocal_1304, &iLocal_1332, 0))
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (__LIB_0__::func_232(iLocal_1267, iLocal_1263[iVar1], 1) < __LIB_0__::func_232(Global_35, iLocal_1267, 1) && __LIB_3__::func_874(ENTITY::GET_ENTITY_COORDS(iLocal_1267, true, false), Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_1263[iVar1], true, false), 2f))
				{
					return;
				}
				iVar1++;
			}
			bVar0 = true;
		}
	}
	else if (iLocal_1109 == 1)
	{
		PED::SET_PED_RESET_FLAG(iLocal_1248[4], 42, true);
		PED::SET_PED_RESET_FLAG(iLocal_1248[2], 42, true);
		if (func_182() && __LIB_4__::func_254(&iLocal_1248, &uLocal_1304, &iLocal_1332, &uLocal_1418, 0, 4, 1))
		{
			if (__LIB_0__::func_232(Global_35, iLocal_1248[4], 1) < __LIB_0__::func_232(Global_35, iLocal_1248[2], 1))
			{
				if (!bLocal_1373)
				{
					if (__LIB_0__::func_71(iLocal_1248[4]))
					{
						return;
					}
					iLocal_1267 = iLocal_1248[4];
					bLocal_1371 = false;
					bVar0 = true;
				}
			}
			else if (!bLocal_1372)
			{
				if (__LIB_0__::func_71(iLocal_1248[2]))
				{
					return;
				}
				iLocal_1267 = iLocal_1248[2];
				Local_563[2 /*32*/].f_6 = { ENTITY::GET_ENTITY_COORDS(iLocal_1248[2], true, false) };
				Local_563[2 /*32*/].f_9 = ENTITY::GET_ENTITY_HEADING(iLocal_1248[2]);
				bLocal_1369 = false;
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (!bLocal_1374)
		{
			bLocal_1374 = true;
			if (iLocal_1109 == 1)
			{
				__LIB_3__::func_232(&(Local_369.f_5), 1);
			}
			__LIB_1__::func_148(&uLocal_1333);
			if (bLocal_1366)
			{
				if (!__LIB_0__::func_75(&uLocal_1348))
				{
					__LIB_1__::func_148(&uLocal_1348);
				}
			}
			fLocal_1425 = __LIB_0__::func_665(Global_35, iLocal_1267, 0, 1);
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_1267, true, false) };
			vVar5 = { __LIB_0__::func_173(Global_36 - vVar2) };
			vVar8 = { vVar2 + vVar5 * Vector(4f, 4f, 4f) };
			__LIB_2__::func_106(&vVar8, 15, 10, 0);
			PED::_0x8ACC0506743A8A5C(iLocal_1267, joaat("INVESTIGATORCHALLENGE_COMBATSTART"), 1, -1082130432 /* Float: -1f */);
			if (__LIB_0__::func_665(Global_35, iLocal_1267, 0, 1) < (4f + 1f))
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_1267, 0))
				{
					PED::_0x802092B07E3B1EEA(iLocal_1267, Global_36, 3);
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_1267, Global_35, -1, false, 1);
				}
				else
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1267, Local_1182.f_1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182.f_1, func_189(2), iLocal_1248[2]);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
					TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_Panic", 0.5f, 0, 4);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1267, iLocal_1298);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
				}
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_1267, 0))
			{
				PED::_0x802092B07E3B1EEA(iLocal_1267, Global_36, 3);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 5000, false, 1);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vVar8, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1267, iLocal_1298);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 5000, false, 1);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vVar8, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1267, iLocal_1298);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
			}
			if (iLocal_1109 == 0)
			{
				__LIB_2__::func_73(iLocal_1248[2], &(iLocal_1269[2]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				iVar11 = 3;
				while (iVar11 <= 6)
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_1248[iVar11], &Local_1222);
					iVar11++;
				}
			}
			else if (iLocal_1109 == 1)
			{
				if (iLocal_1267 == iLocal_1248[4])
				{
					__LIB_2__::func_73(iLocal_1248[4], &(iLocal_1269[4]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
				else if (iLocal_1267 == iLocal_1248[2])
				{
					__LIB_2__::func_73(iLocal_1248[2], &(iLocal_1269[2]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
				iVar11 = 5;
				while (iVar11 <= 10)
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_1248[iVar11], &Local_1222);
					iVar11++;
				}
			}
			__LIB_2__::func_360(&(Local_265[0 /*17*/]), "RE_INTER_DEFUSE");
			__LIB_2__::func_411(&(Local_265[0 /*17*/]), 1, 0);
			iLocal_1303 = 1;
		}
		else if (!bLocal_1379 && iLocal_1109 != 1)
		{
			if (!bLocal_1366)
			{
				fVar12 = __LIB_0__::func_94(Global_35, Local_369.f_51, 0);
				if (fVar12 > (fLocal_1425 + 5f))
				{
					return;
				}
			}
			func_55();
		}
	}
}

bool func_61()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	struct<14> Var8;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	func_192();
	func_193();
	func_194();
	func_195();
	func_196();
	func_197();
	func_198();
	func_199();
	func_200();
	func_201();
	func_202();
	func_203();
	switch (iLocal_1301)
	{
		case 0:
			if (iLocal_1109 == 0)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1182))
				{
					vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1285[2], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1285[2], "chassis_dummy")) };
					fVar3 = ENTITY::GET_ENTITY_HEADING(iLocal_1285[2]);
					__LIB_2__::func_106(&vVar0, 15, 10, 0);
					if (bLocal_1111)
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182, vVar0, 0f, 0f, fVar3, 2);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182, vVar0, 0f, 0f, (fVar3 + 180f), 2);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1182.f_1))
				{
					if (bLocal_1111)
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182.f_1, 0f, 0f, -0.1812f, 0f, 0f, 0f, 2);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182.f_1, 0f, 0f, -0.1812f, 0f, 0f, 180f, 2);
					}
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1182.f_1, iLocal_1285[2], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1285[2], "chassis_dummy"));
				}
				if (__LIB_2__::func_1(iLocal_1248[2], 0, 1))
				{
					__LIB_1__::func_473(iLocal_1248[2], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 0, 0, -1082130432 /* Float: -1f */);
					TASK::TASK_PLAY_ANIM(iLocal_1248[2], Local_1190[5 /*2*/], Local_1190[5 /*2*/].f_1, 8f, -8f, -1, 67108881, 0f, false, 2, false, 0, false);
				}
				iLocal_1293 = VOLUME::_CREATE_VOLUME_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_1285[2], true, false), 0f, 0f, 0f, 20f, 20f, 10f);
				POPULATION::_0xB56D41A694E42E86(iLocal_1293, 10208, 0, 0, -1, -1, 0);
			}
			else if (iLocal_1109 == 1)
			{
				if (__LIB_2__::func_1(iLocal_1248[4], 0, 1))
				{
					__LIB_1__::func_473(iLocal_1248[4], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 0, 0, -1082130432 /* Float: -1f */);
				}
				VEHICLE::_0x762FDC4C19E5A981(iLocal_1285[3], 0);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1182))
				{
					vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1285[3], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1285[3], "chassis_dummy")) };
					fVar7 = ENTITY::GET_ENTITY_HEADING(iLocal_1285[3]);
					__LIB_2__::func_106(&vVar4, 15, 10, 0);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182, vVar4, 0f, 0f, fVar7, 2);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1182.f_1))
				{
					vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1285[2], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1285[2], "chassis_dummy")) };
					vVar4 = { vVar4 - Vector(-0.0882f, 0f, 0f) };
					fVar7 = ENTITY::GET_ENTITY_HEADING(iLocal_1285[2]);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182.f_1, vVar4, 0f, 0f, (fVar7 - 180f), 2);
				}
				iLocal_1293 = VOLUME::_CREATE_VOLUME_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_1285[2], true, false), 0f, 0f, 0f, 40f, 40f, 10f);
				POPULATION::_0xB56D41A694E42E86(iLocal_1293, 10208, 0, 0, -1, -1, 0);
			}
			func_205();
			ANIMSCENE::START_ANIM_SCENE(Local_1182);
			ANIMSCENE::START_ANIM_SCENE(Local_1182.f_1);
			Var8.f_6 = -1082130432;
			Var8.f_7 = -1082130432;
			Var8.f_8 = -1082130432;
			Var8.f_9 = -1082130432;
			Var8.f_10 = -1082130432;
			Var8.f_11 = -1082130432;
			Var8.f_12 = -1;
			Var8.f_13 = -1;
			Var8 = joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
			Var8.f_8 = 80f;
			Var8.f_7 = 80f;
			Var8.f_9 = 40f;
			Var8.f_3 = { Local_369.f_51 };
			Var8.f_6 = 0f;
			iLocal_1411 = EVENT::_CREATE_SHOCKING_EVENT(&Var8);
			if (iLocal_1109 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1285[5]))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1285[5], 0, false, true);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1285[5], 1, false, true);
				}
			}
			else if (iLocal_1109 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1285[3]))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1285[3], 0, false, true);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1285[3], 2, false, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1292))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1292, 5, false, true);
				}
			}
			func_206();
			__LIB_1__::func_283(&uLocal_1339, 0);
			__LIB_14__::func_128(1);
			break;
		case 1:
			if (__LIB_3__::func_452(&Local_369, 1f, 60f, 55f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				if (iLocal_1109 == 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182, "bool", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182.f_1, "bool", true, false);
					__LIB_2__::func_478(iLocal_1248[0], 0, sLocal_1145[2], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, -500314840, 1, 0, 0);
					__LIB_2__::func_315(1515458263, iLocal_1248[0], 1);
					Local_369.f_44 = 1;
					func_132();
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182, "Base_Bool", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182.f_1, "Base_Bool", true, false);
				}
				Local_369.f_45 = 1;
				AUDIO::_0x05D6195FB4D428F4(-1907382514);
				__LIB_14__::func_128(2);
			}
			else
			{
				func_210();
			}
			break;
		case 2:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (iLocal_1109 == 0)
			{
				func_211();
				func_212();
				if ((bLocal_1367 && bLocal_1368) && bLocal_1371)
				{
					func_213();
					iVar25 = func_214();
					if (!ENTITY::IS_ENTITY_DEAD(iVar25))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_1263[0], 358, false);
						PED::SET_PED_CONFIG_FLAG(iLocal_1263[1], 358, false);
						PED::SET_PED_CONFIG_FLAG(iLocal_1263[2], 358, false);
						func_76(&iLocal_1296, vLocal_1119, vLocal_1122, 0, 0);
						__LIB_3__::func_232(&(Local_369.f_5), 1);
						iLocal_1284 = PED::CREATE_GROUP(0);
						PED::SET_PED_AS_GROUP_LEADER(iVar25, iLocal_1284, false);
						PED::SET_GROUP_FORMATION(iLocal_1284, 10);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
						if (!__LIB_0__::func_86(vLocal_1113))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1113, 2.001f, -1, 3f, 1, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_1116, 5f, 2.001f, 8192, 0);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_1116, 15f, 0, false, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
						TASK::TASK_PERFORM_SEQUENCE(iVar25, iLocal_1298);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
						PED::SET_PED_KEEP_TASK(iVar25, true);
						iVar26 = 0;
						while (iVar26 <= 2)
						{
							if (iLocal_1248[iVar26] != iVar25)
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_1248[iVar26], iLocal_1284);
								PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar26], 279, true);
							}
							iVar26++;
						}
						if (iLocal_30 == 5)
						{
							__LIB_3__::func_900(&(Local_369.f_5), 0);
						}
						__LIB_1__::func_148(&uLocal_1336);
						__LIB_14__::func_128(3);
					}
				}
			}
			else if (iLocal_1109 == 1)
			{
				func_215();
				func_216();
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[1], -994272606))
				{
					if (!func_217() && (bLocal_1374 || (func_182() && __LIB_4__::func_438(&iLocal_1248, &uLocal_1304, &iLocal_1332, 0, 4))))
					{
						if (!__LIB_2__::func_136(iLocal_1267, 0))
						{
							__LIB_2__::func_478(iLocal_1248[1], 0, sLocal_1145[13], 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
						}
					}
					else
					{
						__LIB_2__::func_478(iLocal_1248[1], 0, sLocal_1145[12], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_220();
				func_221();
				func_222();
				if ((((bLocal_1367 && bLocal_1368) && bLocal_1369) && bLocal_1370) && bLocal_1371)
				{
					func_213();
					iVar27 = func_223();
					if (!ENTITY::IS_ENTITY_DEAD(iVar27))
					{
						if (!bLocal_1381)
						{
							func_224();
						}
						else if (__LIB_1__::func_285(&uLocal_1336, 1.5f))
						{
							func_226();
							iLocal_1284 = PED::CREATE_GROUP(0);
							PED::SET_PED_AS_GROUP_LEADER(iVar27, iLocal_1284, false);
							iVar28 = 2;
							while (iVar28 <= 4)
							{
								if (iLocal_1248[iVar28] != iVar27)
								{
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_1248[iVar28], iLocal_1284);
									PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar28], 279, true);
								}
								iVar28++;
							}
							PED::SET_GROUP_FORMATION(iLocal_1284, 10);
							__LIB_0__::func_325(&(iLocal_1269[2]));
							__LIB_0__::func_325(&(iLocal_1269[4]));
							if (PED::_0x91A5F9CBEBB9D936(iLocal_1296))
							{
								func_76(&iLocal_1296, vLocal_1119, vLocal_1122, 0, 0);
							}
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
							if (!__LIB_0__::func_86(vLocal_1131))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1131, 1.75f, 20000, 0.25f, 0, 40000f);
							}
							if (!__LIB_0__::func_86(vLocal_1134))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1134, 1.75f, 20000, 0.25f, 0, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_1116, 5f, 1.75f, 12800, 0);
							TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_1116, 15f, 0, false, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
							TASK::TASK_PERFORM_SEQUENCE(iVar27, iLocal_1298);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
							PED::SET_PED_KEEP_TASK(iVar27, true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
							if (!__LIB_0__::func_86(vLocal_1131))
							{
								TASK::_TASK_VEHICLE_DRIVE_TO_POINT(0, iLocal_1292, vLocal_1131, 6f, 12f, 524419);
							}
							if (!__LIB_0__::func_86(vLocal_1134))
							{
								TASK::_TASK_VEHICLE_DRIVE_TO_POINT(0, iLocal_1292, vLocal_1134, 7f, 12f, 524311);
							}
							TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_1292, vLocal_1116, 7f, 524483, 3, 10f, 4f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[0], iLocal_1298);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
							__LIB_3__::func_232(&(Local_369.f_5), 0);
							func_228();
							__LIB_1__::func_148(&uLocal_1336);
							__LIB_14__::func_128(3);
						}
					}
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_75(&uLocal_1363))
			{
				__LIB_1__::func_148(&uLocal_1363);
			}
			else if (iLocal_1421 < 2)
			{
				if (__LIB_1__::func_285(&uLocal_1363, fLocal_1430))
				{
					if (iLocal_1109 == 0)
					{
						if (__LIB_2__::func_478(iLocal_1248[(3 + iLocal_1421)], 0, "PANIC_COMMUNICATE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							iLocal_1421++;
							fLocal_1430 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
							__LIB_1__::func_148(&uLocal_1363);
						}
					}
					else if (__LIB_2__::func_478(iLocal_1248[(5 + iLocal_1421)], 0, "PANIC_COMMUNICATE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						iLocal_1421++;
						fLocal_1430 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
						__LIB_1__::func_148(&uLocal_1363);
					}
				}
			}
			if (iLocal_1109 == 0)
			{
				if (!bLocal_1396)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[2]))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_1248[2]);
					}
					bLocal_1396 = true;
				}
				func_229();
				iVar29 = 0;
				while (iVar29 <= 2)
				{
					if (__LIB_2__::func_1(iLocal_1248[iVar29], 0, 1))
					{
						if (!MAP::DOES_BLIP_EXIST(iLocal_1269[iVar29]))
						{
							if (PED::IS_PED_IN_COMBAT(iLocal_1248[iVar29], Global_35))
							{
								__LIB_2__::func_73(iLocal_1248[iVar29], &(iLocal_1269[iVar29]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							}
						}
						if (__LIB_18__::func_339(Global_35, iLocal_1285[0], -1464742217) && __LIB_0__::func_232(iLocal_1248[iVar29], iLocal_1285[0], 1) > 10000f)
						{
							func_231();
							AUDIO::_0x05D6195FB4D428F4(334660039);
							func_232();
							__LIB_14__::func_128(6);
						}
						bVar30 = true;
					}
					else
					{
						__LIB_0__::func_325(&(iLocal_1269[iVar29]));
					}
					iVar29++;
				}
			}
			else if (iLocal_1109 == 1)
			{
				iVar29 = 0;
				while (iVar29 <= 4)
				{
					if (__LIB_2__::func_1(iLocal_1248[iVar29], 0, 1))
					{
						if (!MAP::DOES_BLIP_EXIST(iLocal_1269[iVar29]))
						{
							if (PED::IS_PED_IN_COMBAT(iLocal_1248[iVar29], Global_35))
							{
								__LIB_2__::func_73(iLocal_1248[iVar29], &(iLocal_1269[iVar29]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							}
						}
						if (__LIB_18__::func_339(Global_35, iLocal_1285[0], -577630801) && __LIB_0__::func_232(iLocal_1248[iVar29], iLocal_1285[0], 1) > 10000f)
						{
							func_231();
							AUDIO::_0x05D6195FB4D428F4(334660039);
							func_232();
							__LIB_14__::func_128(6);
						}
						bVar30 = true;
					}
					else
					{
						__LIB_0__::func_325(&(iLocal_1269[iVar29]));
					}
					iVar29++;
				}
			}
			if (bVar30)
			{
			}
			else
			{
				func_56();
				__LIB_1__::func_148(&uLocal_1342);
				AUDIO::_0x05D6195FB4D428F4(334660039);
				if (!bLocal_1399)
				{
					if (!(iLocal_1109 == 0 && !ENTITY::DOES_ENTITY_EXIST(func_233())) && !bLocal_1405)
					{
						__LIB_3__::func_465(13, 0, 0, 0, iLocal_1248[3], 0, 1065353216 /* Float: 1f */, 0);
					}
				}
				__LIB_14__::func_128(6);
				Jump @3865; //curOff = 3019
				if (iLocal_1109 == 0)
				{
					func_213();
					func_212();
					if (!func_235(50f))
					{
						func_140(0);
						AUDIO::_0x05D6195FB4D428F4(334660039);
						__LIB_14__::func_128(5);
					}
				}
				else if (iLocal_1109 == 1)
				{
					func_215();
					func_236();
					func_213();
					if (__LIB_1__::func_285(&uLocal_1336, 5f) && !func_237())
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182.f_1, "Cower_Bool", true, false);
						__LIB_3__::func_407(&uLocal_1304, 15f);
						__LIB_2__::func_613(&uLocal_1304, 0);
						func_232();
						__LIB_14__::func_128(5);
						bLocal_1405 = true;
					}
				}
				Jump @3865; //curOff = 3161
				func_236();
				func_238();
				if (iLocal_1109 == 0)
				{
					if (iLocal_1109 == 0)
					{
						if (!bLocal_1397 && (ENTITY::IS_ENTITY_DEAD(iLocal_1248[8]) || func_239(iLocal_1248[8], iLocal_1285[4])))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_1248[8], 133, false);
							bLocal_1397 = true;
						}
						if (!bLocal_1398 && (ENTITY::IS_ENTITY_DEAD(iLocal_1248[7]) || func_239(iLocal_1248[7], iLocal_1285[5])))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_1248[7], 133, false);
							bLocal_1398 = true;
						}
						if (bLocal_1397 && bLocal_1398)
						{
							__LIB_14__::func_128(6);
						}
					}
				}
				else if (iLocal_1109 == 1)
				{
					func_240();
					func_241();
					func_213();
					if (ANIMSCENE::_0xF94692EB9DC15D74(Local_1182.f_1, 0))
					{
						__LIB_14__::func_128(6);
					}
				}
				Jump @3865; //curOff = 3370
				func_236();
				func_241();
				func_238();
				if (iLocal_1109 == 0)
				{
					func_229();
					if (!bLocal_1397 && (ENTITY::IS_ENTITY_DEAD(iLocal_1248[8]) || func_239(iLocal_1248[8], iLocal_1285[4])))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_1248[8], 133, false);
						bLocal_1397 = true;
					}
					if (!bLocal_1398 && (ENTITY::IS_ENTITY_DEAD(iLocal_1248[7]) || func_239(iLocal_1248[7], iLocal_1285[5])))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_1248[7], 133, false);
						bLocal_1398 = true;
					}
				}
				if (!bLocal_1386 && !bLocal_1399)
				{
					if (__LIB_1__::func_285(&uLocal_1342, 2.8f) && __LIB_2__::func_227(-3f, 1, 0, 0))
					{
						iVar31 = func_243();
						if (!PED::_0x5102307CE88798EB(iVar31))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar31);
						}
						if (PED::IS_TRACKED_PED_VISIBLE(iVar31))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar31) && __LIB_0__::func_665(Global_35, iVar31, 1, 1) < 30f)
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar32);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 524288, -1082130432 /* Float: -1f */, -1, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar32);
								TASK::TASK_PERFORM_SEQUENCE(iVar31, iVar32);
								TASK::CLEAR_SEQUENCE_TASK(&iVar32);
								if (iLocal_1109 == 0 && (iVar31 == iLocal_1248[3] || iVar31 == iLocal_1248[5]))
								{
									__LIB_2__::func_478(iVar31, Global_35, sLocal_1145[21], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								else
								{
									__LIB_2__::func_478(iVar31, Global_35, "RELIEVED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								bLocal_1386 = true;
							}
						}
					}
				}
				func_244();
				if (__LIB_0__::func_232(Global_35, iLocal_1285[0], 0) > 22500f && !func_245(120f))
				{
					return true;
				}
			}
			return false;
			default:
				break;
	}
}

void func_73(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY((*uParam1)[iVar0]))
		{
			(*uParam1)[iVar0] = uParam0;
			STREAMING::REQUEST_ANIM_DICT((*uParam1)[iVar0]);
			return;
		}
		iVar0++;
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	if (iLocal_1109 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (iVar0 < 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_MOUNT_ANIMAL(0, iLocal_1263[iVar0], 20000, -1, 1.5f, 1, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 8192, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[iVar0], iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				}
			}
			else
			{
				__LIB_1__::func_864(iLocal_1248[iVar0], 0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_ENTER_VEHICLE(0, iLocal_1292, 20000, -1, 2f, 1, 0);
			if (!__LIB_0__::func_86(vLocal_1131))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_POINT(0, iLocal_1292, vLocal_1131, 6f, 12f, 524419);
			}
			if (!__LIB_0__::func_86(vLocal_1134))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_POINT(0, iLocal_1292, vLocal_1134, 7f, 12f, 524311);
			}
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_1292, vLocal_1116, 7f, 524483, 3, 10f, 4f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[0], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[1]))
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_1248[1], iLocal_1292, 10000, -2, 2f, 513, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[2]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_1263[0], -1, -1, 1.5f, 1, 0, 0);
			if (!__LIB_0__::func_86(vLocal_1131))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1131, 1.75f, 20000, 0.25f, 0, 40000f);
			}
			if (!__LIB_0__::func_86(vLocal_1134))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1134, 1.75f, 20000, 0.25f, 0, 40000f);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[2], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[3]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_1263[2], -1, -1, 1.5f, 1, 0, 0);
			if (!__LIB_0__::func_86(vLocal_1131))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1131, 1.75f, 20000, 0.25f, 0, 40000f);
			}
			if (!__LIB_0__::func_86(vLocal_1134))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1134, 1.75f, 20000, 0.25f, 0, 40000f);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[3], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[4]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_1263[1], -1, -1, 2f, 1, 0, 0);
			if (!__LIB_0__::func_86(vLocal_1131))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1131, 1.75f, 20000, 0.25f, 0, 40000f);
			}
			if (!__LIB_0__::func_86(vLocal_1134))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1134, 1.75f, 20000, 0.25f, 0, 40000f);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[4], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		iVar0 = 5;
		while (iVar0 <= 10)
		{
			__LIB_1__::func_864(iLocal_1248[iVar0], 0, 0);
			iVar0++;
		}
	}
}

void func_76(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	PED::CLEAR_PED_NON_CREATION_AREA();
	vVar0 = { __LIB_2__::func_66(vParam1, vParam4, iParam7) };
	vVar3 = { __LIB_2__::func_67(vParam1, vParam4, iParam7) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar3, 0, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(*iParam0, bParam8);
}

void func_81(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (iLocal_1109 == 0)
	{
		if ((iLocal_32 == 15 || iLocal_32 == 14) || iLocal_32 == 13)
		{
			iLocal_30 = 5;
			Local_563[0 /*32*/].f_1 = joaat("G_M_M_UNIBANDITOS_01");
			Local_563[0 /*32*/].f_3 = -1140223483;
			Local_563[1 /*32*/].f_1 = joaat("G_M_M_UNIBANDITOS_01");
			Local_563[1 /*32*/].f_3 = 786364334;
			Local_563[2 /*32*/].f_1 = joaat("G_M_M_UNIBANDITOS_01");
			Local_563[2 /*32*/].f_3 = 546888482;
			StringCopy(&(Local_563[0 /*32*/].f_23), "1067_G_M_M_UniCriminals_01_HISPANIC_04", 64);
			StringCopy(&(Local_563[1 /*32*/].f_23), "1023_G_M_M_UniBanditos_01_WHITE_01", 64);
			StringCopy(&(Local_563[2 /*32*/].f_23), "0135_G_M_M_UniCriminals_01_HISPANIC_02", 64);
			Local_563[3 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[3 /*32*/].f_3 = -1380599125;
			Local_563[4 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[4 /*32*/].f_3 = -1610932426;
			Local_563[5 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[5 /*32*/].f_3 = -2139824094;
			Local_563[6 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[6 /*32*/].f_3 = 1924351135;
			StringCopy(&(Local_563[3 /*32*/].f_23), "1032_S_M_M_CoachTaxiDriver_01_WHITE_04", 64);
			StringCopy(&(Local_563[4 /*32*/].f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
			StringCopy(&(Local_563[5 /*32*/].f_23), "1032_S_M_M_CoachTaxiDriver_01_WHITE_04", 64);
			StringCopy(&(Local_563[6 /*32*/].f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
			StringCopy(&(Local_563[7 /*32*/].f_23), "PC_TOWNSPERSON", 64);
			StringCopy(&(Local_563[8 /*32*/].f_23), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
			Local_563[7 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_FEMALES_01");
			Local_563[7 /*32*/].f_3 = -2146174609;
			Local_563[8 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[8 /*32*/].f_3 = 1250207451;
			Local_563[9 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[9 /*32*/].f_3 = -1251044040;
			Local_563[10 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[10 /*32*/].f_3 = 1835238691;
			Local_563[11 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[11 /*32*/].f_3 = -684566337;
			Local_563[13 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[13 /*32*/].f_3 = 1691538330;
			Local_563[12 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[12 /*32*/].f_3 = -492406189;
			Local_1012[0 /*32*/].f_1 = __LIB_2__::func_185(5, 0, 0);
			Local_1012[1 /*32*/].f_1 = __LIB_2__::func_185(5, 1, 0);
			Local_1012[2 /*32*/].f_1 = __LIB_2__::func_185(5, 2, 0);
		}
		else
		{
			iLocal_30 = 0;
			Local_563[0 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_01");
			Local_563[0 /*32*/].f_3 = -1140223483;
			Local_563[1 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_01");
			Local_563[1 /*32*/].f_3 = 786364334;
			Local_563[2 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_01");
			Local_563[2 /*32*/].f_3 = 546888482;
			StringCopy(&(Local_563[0 /*32*/].f_23), "0357_G_M_M_UniDuster_02_WHITE_01", 64);
			StringCopy(&(Local_563[1 /*32*/].f_23), "0361_G_M_M_UniDuster_03_WHITE_01", 64);
			StringCopy(&(Local_563[2 /*32*/].f_23), "0362_G_M_M_UniDuster_03_WHITE_02", 64);
			Local_563[3 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[3 /*32*/].f_3 = -929992610;
			Local_563[4 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[4 /*32*/].f_3 = -1161046829;
			Local_563[5 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[5 /*32*/].f_3 = -1390102139;
			Local_563[6 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[6 /*32*/].f_3 = -1654253048;
			StringCopy(&(Local_563[3 /*32*/].f_23), "0418_A_M_M_SclRoughTravellers_01_WHITE_01", 64);
			StringCopy(&(Local_563[4 /*32*/].f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
			StringCopy(&(Local_563[5 /*32*/].f_23), "0418_A_M_M_SclRoughTravellers_01_WHITE_01", 64);
			StringCopy(&(Local_563[6 /*32*/].f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
			StringCopy(&(Local_563[7 /*32*/].f_23), "0738_S_F_M_MaPWorker_01_WHITE_03", 64);
			StringCopy(&(Local_563[8 /*32*/].f_23), "0789_A_M_M_LowerSDTownfolk_02_BLACK_01", 64);
			Local_563[7 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_FEMALES_01");
			Local_563[7 /*32*/].f_3 = 666290358;
			Local_563[8 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[8 /*32*/].f_3 = 1019382615;
			Local_563[9 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[9 /*32*/].f_3 = -1069831470;
			Local_563[10 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[10 /*32*/].f_3 = 264620465;
			Local_563[11 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[11 /*32*/].f_3 = -474320433;
			Local_563[13 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[13 /*32*/].f_3 = 1913056770;
			Local_563[12 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
			Local_563[12 /*32*/].f_3 = -788834563;
			Local_1012[0 /*32*/].f_1 = __LIB_2__::func_185(0, 0, 0);
			Local_1012[1 /*32*/].f_1 = __LIB_2__::func_185(0, 1, 0);
			Local_1012[2 /*32*/].f_1 = __LIB_2__::func_185(0, 2, 0);
		}
		iVar0 = 0;
		while (iVar0 < 14)
		{
			__LIB_3__::func_478(&(Local_563[iVar0 /*32*/].f_22));
			iVar0++;
		}
	}
	else
	{
		iLocal_30 = 2;
		Local_563[0 /*32*/].f_1 = joaat("G_M_O_UNIEXCONFEDS_01");
		Local_563[0 /*32*/].f_3 = -1140223483;
		Local_563[1 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
		Local_563[1 /*32*/].f_3 = 786364334;
		Local_563[2 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
		Local_563[2 /*32*/].f_3 = 546888482;
		Local_563[3 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
		Local_563[3 /*32*/].f_3 = -209682190;
		Local_563[4 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
		Local_563[4 /*32*/].f_3 = 1695015943;
		StringCopy(&(Local_563[4 /*32*/].f_23), "1026_G_M_Y_UniExConfeds_01_WHITE_04", 64);
		StringCopy(&(Local_563[3 /*32*/].f_23), "0179_G_M_Y_UniExConfeds_01_WHITE_03", 64);
		StringCopy(&(Local_563[0 /*32*/].f_23), "0175_G_M_O_UniExConfeds_01_WHITE_02", 64);
		StringCopy(&(Local_563[1 /*32*/].f_23), "0178_G_M_Y_UniExConfeds_01_WHITE_02", 64);
		StringCopy(&(Local_563[2 /*32*/].f_23), "0177_G_M_Y_UniExConfeds_01_WHITE_01", 64);
		Local_1012[0 /*32*/].f_1 = __LIB_2__::func_185(2, 0, 0);
		Local_1012[1 /*32*/].f_1 = __LIB_2__::func_185(2, 1, 0);
		Local_1012[2 /*32*/].f_1 = __LIB_2__::func_185(2, 2, 0);
		Local_563[5 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
		Local_563[5 /*32*/].f_3 = -579908690;
		StringCopy(&(Local_563[5 /*32*/].f_23), "0788_A_M_M_LowerSDTownfolk_01_WHITE_01", 64);
		Local_563[6 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
		Local_563[6 /*32*/].f_3 = -843731909;
		StringCopy(&(Local_563[6 /*32*/].f_23), "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01", 64);
		Local_563[7 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
		Local_563[7 /*32*/].f_3 = 1996914394;
		StringCopy(&(Local_563[7 /*32*/].f_23), "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01", 64);
		Local_563[8 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
		Local_563[8 /*32*/].f_3 = 1498104676;
		StringCopy(&(Local_563[8 /*32*/].f_23), "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01", 64);
		Local_563[9 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
		Local_563[9 /*32*/].f_3 = -1804355148;
		StringCopy(&(Local_563[9 /*32*/].f_23), "0788_A_M_M_LowerSDTownfolk_01_WHITE_01", 64);
		Local_563[10 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
		Local_563[10 /*32*/].f_3 = -2068964823;
		StringCopy(&(Local_563[10 /*32*/].f_23), "0788_A_M_M_LowerSDTownfolk_01_WHITE_01", 64);
		Local_563[11 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
		Local_563[11 /*32*/].f_3 = 1921954230;
		Local_563[12 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
		Local_563[12 /*32*/].f_3 = 1672483833;
		Local_563[13 /*32*/].f_1 = joaat("RE_TRAINHOLDUP_MALES_01");
		Local_563[13 /*32*/].f_3 = -442025666;
		iVar1 = 0;
		while (iVar1 < 14)
		{
			__LIB_3__::func_478(&(Local_563[iVar1 /*32*/].f_22));
			iVar1++;
		}
	}
	*bParam0 = __LIB_2__::func_284(iLocal_30, -1);
	if (*bParam0 && iLocal_30 != 0)
	{
		*bParam0 = 0;
	}
	__LIB_3__::func_352(&Local_369, iLocal_30);
}

void func_82()
{
	sLocal_1145[33] = "WARNING";
	if (iLocal_1109 == 0)
	{
		if (iLocal_30 == 0)
		{
			sLocal_1145[0] = "RE_TGH_MTN_V1_INTRO";
			sLocal_1145[1] = "RE_TGH_MTN_V1_DONT_KILL";
			sLocal_1145[2] = "RE_TGH_MTN_V1_GET_DOWN";
			sLocal_1145[3] = "RE_TGH_MTN_V1_ROBBING";
			sLocal_1145[4] = "RE_TGH_MTN_V1_BEG";
			sLocal_1145[5] = "RE_TGH_MTN_V1_KILL";
			sLocal_1145[6] = "RE_TGH_MTN_V1_AWAY";
			sLocal_1145[7] = "HEADS_UP_CONFRONT";
			sLocal_1145[8] = "RE_TGH_MTN_V1_AWAY_FEUD";
			sLocal_1145[11] = "RE_TGH_MTN_V1_ATTACK";
			sLocal_1145[15] = "RE_TGH_MTN_V1_RIDE_OFF";
			sLocal_1145[14] = "RE_TGH_MTN_V1_STOLE_TRAIN";
			sLocal_1145[16] = "RE_TGH_MTN_V1_FOLLOWING";
			sLocal_1145[10] = "RE_TGH_MTN_V1_ATTACK_FEUD";
			sLocal_1145[21] = "RE_TGH_MTN_V1_THANKYOU";
			sLocal_1145[27] = "RE_TGH_MTN_V1_HEADOUT";
			sLocal_1145[24] = "RE_TGH_MTN_V1_POST_A";
			sLocal_1145[25] = "RE_TGH_MTN_V1_POST_B";
			sLocal_1145[26] = "RE_TGH_MTN_V1_POST_C";
			sLocal_1145[28] = "RE_TGH_MTN_V1_PL_DEFUSE";
			sLocal_1145[29] = "RE_TGH_MTN_V1_PL_ANTAGONIZE_GANG";
			sLocal_1145[30] = "RE_TGH_MTN_V1_PL_INTERVENE";
			sLocal_1145[31] = "RE_TGH_MTN_V1_PL_GREET_VIC_POST";
			sLocal_1145[32] = "RE_TGH_MTN_V1_PL_ANTAGONIZE_VIC_POST";
			sLocal_1145[17] = "RE_TGH_MTN_V1_HIDING_AGGRO_M";
			sLocal_1145[18] = "RE_TGH_MTN_V1_HIDING_AGGRO_F";
			sLocal_1145[19] = "RE_TGH_MTN_V1_HIDING_NOTICE_M";
			sLocal_1145[20] = "RE_TGH_MTN_V1_HIDING_NOTICE_F";
		}
		else if (iLocal_30 == 5)
		{
			sLocal_1145[0] = "RE_TGH_CHS_V3_INTRO";
			sLocal_1145[1] = "RE_TGH_CHS_V3_DONT_KILL";
			sLocal_1145[2] = "RE_TGH_CHS_V3_GET_DOWN";
			sLocal_1145[3] = "RE_TGH_CHS_V3_ROBBING";
			sLocal_1145[4] = "RE_TGH_CHS_V3_BEG";
			sLocal_1145[5] = "RE_TGH_CHS_V3_KILL";
			sLocal_1145[6] = "RE_TGH_CHS_V3_AWAY";
			sLocal_1145[8] = "RE_TGH_CHS_V3_AWAY_FEUD";
			sLocal_1145[11] = "RE_TGH_CHS_V3_ATTACK";
			sLocal_1145[15] = "RE_TGH_CHS_V3_RIDE_OFF";
			sLocal_1145[14] = "RE_TGH_CHS_V3_STOLE_TRAIN";
			sLocal_1145[16] = "RE_TGH_CHS_V3_FOLLOWING";
			sLocal_1145[10] = "RE_TGH_CHS_V3_ATTACK_FEUD";
			sLocal_1145[21] = "RE_TGH_CHS_V3_THANKYOU";
			sLocal_1145[27] = "RE_TGH_CHS_V3_HEADOUT";
			sLocal_1145[24] = "RE_TGH_CHS_V3_POST_A";
			sLocal_1145[25] = "RE_TGH_CHS_V3_POST_B";
			sLocal_1145[26] = "RE_TGH_CHS_V3_POST_C";
			sLocal_1145[28] = "RE_TGH_CHS_V3_PL_DEFUSE";
			sLocal_1145[29] = "RE_TGH_CHS_V3_PL_ANTAGONIZE_GANG";
			sLocal_1145[30] = "RE_TGH_CHS_V3_PL_INTERVENE";
			sLocal_1145[31] = "RE_TGH_CHS_V3_PL_GREET_VIC_POST";
			sLocal_1145[32] = "RE_TGH_CHS_V3_PL_ANTAGONIZE_VIC_POST";
			sLocal_1145[17] = "RE_TGH_CHS_V3_HIDING_AGGRO_M";
			sLocal_1145[18] = "RE_TGH_CHS_V3_HIDING_AGGRO_F";
			sLocal_1145[19] = "RE_TGH_CHS_V3_HIDING_NOTICE_M";
			sLocal_1145[20] = "RE_TGH_CHS_V3_HIDING_NOTICE_F";
		}
	}
	else if (iLocal_1109 == 1)
	{
		sLocal_1145[6] = "RE_TGH_LMN_V2_AWAY";
		sLocal_1145[11] = "RE_TGH_LMN_V2_ATTACK";
		sLocal_1145[15] = "RE_TGH_LMN_V2_RIDE_OFF";
		sLocal_1145[14] = "RE_TGH_LMN_V2_STOLE_TRAIN";
		sLocal_1145[16] = "RE_TGH_LMN_V2_FOLLOWING";
		sLocal_1145[10] = "RE_TGH_LMN_V2_FEUD";
		sLocal_1145[9] = "RE_TGH_LMN_V2_WALK_OFF";
		sLocal_1145[12] = "RE_TGH_LMN_V2_WRAP_UP";
		sLocal_1145[13] = "CALLOUT_LETS_GET_OUTTA_HERE_MALE";
		sLocal_1145[21] = "RE_TGH_LMN_V2_THANKS";
		sLocal_1145[22] = "BLOCKED_GENERIC";
		sLocal_1145[23] = "RELIEVED_REACT";
		sLocal_1145[28] = "RE_TGH_LMN_V2_PL_DEFUSE";
		sLocal_1145[29] = "RE_TGH_LMN_V2_PL_ANTAGONIZE_GANG";
		sLocal_1145[30] = "RE_TGH_LMN_V2_PL_INTERVENE";
		sLocal_1145[31] = "RE_TGH_LMN_V2_PL_GREET_VIC_POST";
		sLocal_1145[32] = "RE_TGH_LMN_V2_PL_ANTAGONIZE_VIC_POST";
	}
}

bool func_87(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar1]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

int func_90(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_282(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					func_282(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_421(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_282(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

Vector3 func_104(int iParam0, int iParam1)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_304(), func_305(iParam0, iParam1));
}

float func_105(int iParam0, int iParam1)
{
	return (ENTITY::GET_ENTITY_HEADING(func_304()) + func_306(iParam0, iParam1));
}

Vector3 func_106(int iParam0, int iParam1)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_307(), func_308(iParam0, iParam1));
}

float func_107(int iParam0, int iParam1)
{
	return (ENTITY::GET_ENTITY_HEADING(func_307()) + func_309(iParam0, iParam1));
}

Vector3 func_108(int iParam0, int iParam1)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_310(), func_311(iParam0, iParam1));
}

float func_109(int iParam0, int iParam1)
{
	return (ENTITY::GET_ENTITY_HEADING(func_310()) + func_312(iParam0, iParam1));
}

void func_132()
{
	int iVar0;
	if (bLocal_1408 || iLocal_1109 == 1)
	{
		return;
	}
	iVar0 = 9;
	while (iVar0 <= 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar0]))
		{
			__LIB_1__::func_864(iLocal_1248[iVar0], 1, 0);
		}
		iVar0++;
	}
}

void func_134(float fParam0, float fParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar18;
	if (__LIB_2__::func_1(iLocal_1248[0], 0, 1))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1248[0], 54, true);
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[0], -641223575))
		{
			iVar0 = func_380(0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
			TASK::TASK_PLAY_ANIM(0, Local_1190[iVar0 /*2*/], Local_1190[iVar0 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[0], iLocal_1298);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
		}
		else
		{
			Var1 = Global_35;
			Var1.f_6 = 1;
			Var1.f_4 = 1200;
			Var1.f_15 = 1;
			Var1.f_13 = 0;
			Var1.f_14 = 1;
			WEAPON::_0x5230D3F6EE56CFE6(iLocal_1248[0], 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar18);
			TASK::TASK_SHOOT_WITH_WEAPON(0, &Var1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar18);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[0], iVar18);
			TASK::CLEAR_SEQUENCE_TASK(&iVar18);
		}
	}
}

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Crim01";
		case 1:
			return "Crim02";
		case 3:
			return "Vic01";
		case 4:
			return "Vic02";
		case 5:
			return "Vic03";
		case 6:
			return "Vic04";
	}
	return "NULL";
}

bool func_138(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (iLocal_1109 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == iLocal_1248[iVar0])
			{
				return true;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (iParam0 == iLocal_1248[iVar0])
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_139(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1285[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(iParam0, iLocal_1285[iVar0]))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_140(bool bParam0)
{
	int iVar0;
	if (iLocal_1109 == 0)
	{
		iVar0 = 7;
		while (iVar0 <= 8)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar0], 133, true);
			if (bParam0)
			{
				func_381(iVar0, 1.5f, 2f, 4);
			}
			else
			{
				func_381(iVar0, (0.15f * IntToFloat(iVar0)), (0.2f * IntToFloat(iVar0)), 4);
			}
			iVar0++;
		}
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_1388)
	{
		return;
	}
	if (iLocal_1109 == 0)
	{
		iVar0 = 3;
		while (iVar0 <= 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar0]))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[iVar0], -641223575) && !ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[iVar0], joaat("DEAD")))
				{
					iVar1 = func_380(iVar0);
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1248[iVar0], -1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), iLocal_1248[iVar0]);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
					TASK::TASK_PLAY_ANIM(0, Local_1190[iVar1 /*2*/], Local_1190[iVar1 /*2*/].f_1, 8f, -4f, -1, 0, 0f, false, 0, false, 0, false);
					if (__LIB_3__::func_419(iLocal_1248[iVar0], Global_35))
					{
						TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1248[iVar0], 20f, -5f, 0f), -1f, -1, 1280, 1077936128 /* Float: 3f */, 0);
					}
					else
					{
						TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1248[iVar0], -20f, -5f, 0f), -1f, -1, 1280, 1077936128 /* Float: 3f */, 0);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[iVar0], iLocal_1298);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
				}
				else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1248[iVar0], -1))
				{
					if (PED::IS_PED_ON_SPECIFIC_VEHICLE(iLocal_1248[iVar0], iLocal_1285[2]))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), iLocal_1248[iVar0]);
						func_381(iVar0, 0, 0.2f, 3);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[iVar0], -594513017))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), iLocal_1248[iVar0]);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
						TASK::TASK_REACT(0, Global_35, Global_36, "Default_Panic", 1.5f, 0, 4);
						if (__LIB_3__::func_419(iLocal_1248[iVar0], Global_35))
						{
							TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1248[iVar0], 20f, -5f, 0f), -1f, -1, 1280, 1077936128 /* Float: 3f */, 0);
						}
						else
						{
							TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1248[iVar0], -20f, -5f, 0f), -1f, -1, 1280, 1077936128 /* Float: 3f */, 0);
						}
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[iVar0], iLocal_1298);
						PED::_0x2208438012482A1A(iLocal_1248[iVar0], false, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[0]))
						{
							TASK::_0x3923EC958249657D(iLocal_1248[iVar0], iLocal_1248[0], -1082130432 /* Float: -1f */);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[1]))
						{
							TASK::_0x3923EC958249657D(iLocal_1248[iVar0], iLocal_1248[1], -1082130432 /* Float: -1f */);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[2]))
						{
							TASK::_0x3923EC958249657D(iLocal_1248[iVar0], iLocal_1248[2], -1082130432 /* Float: -1f */);
						}
					}
				}
				else
				{
					if (__LIB_3__::func_419(iLocal_1248[iVar0], Global_35))
					{
						TASK::_TASK_FLEE_FROM_COORD(iLocal_1248[iVar0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1248[iVar0], 20f, -5f, 0f), -1f, -1, 1280, 1077936128 /* Float: 3f */, 0);
					}
					else
					{
						TASK::_TASK_FLEE_FROM_COORD(iLocal_1248[iVar0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1248[iVar0], -20f, -5f, 0f), -1f, -1, 1280, 1077936128 /* Float: 3f */, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[0]))
					{
						TASK::_0x3923EC958249657D(iLocal_1248[iVar0], iLocal_1248[0], -1082130432 /* Float: -1f */);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[1]))
					{
						TASK::_0x3923EC958249657D(iLocal_1248[iVar0], iLocal_1248[1], -1082130432 /* Float: -1f */);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[2]))
					{
						TASK::_0x3923EC958249657D(iLocal_1248[iVar0], iLocal_1248[2], -1082130432 /* Float: -1f */);
					}
				}
			}
			iVar0++;
		}
	}
	else if (iLocal_1109 == 1)
	{
		iVar0 = 5;
		while (iVar0 <= 10)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar0]))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[iVar0], -641223575))
				{
					iVar2 = func_389(iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
					TASK::TASK_PLAY_ANIM(0, Local_1190[iVar2 /*2*/], Local_1190[iVar2 /*2*/].f_1, 8f, -4f, -1, 0, 0f, false, 0, false, 0, false);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3, 256, 80f, -1, 0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[iVar0], iLocal_1298);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
				}
				else
				{
					func_381(iVar0, 0, 0, 3);
				}
			}
			iVar0++;
		}
	}
	bLocal_1388 = true;
}

bool func_145()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (PED::IS_PED_ON_MOUNT(iLocal_1248[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_177()
{
	int iVar0;
	float fVar1;
	if (iLocal_1303 == 1)
	{
		__LIB_2__::func_613(&uLocal_1304, 0);
		return;
	}
	if (iLocal_1109 == 0)
	{
		iVar0 = iLocal_1248[2];
		fVar1 = Local_369.f_98[2];
	}
	else if (iLocal_1109 == 1)
	{
		if (Local_369.f_98[4] < Local_369.f_98[2])
		{
			iVar0 = iLocal_1248[4];
			fVar1 = Local_369.f_98[4];
		}
		else
		{
			iVar0 = iLocal_1248[2];
			fVar1 = Local_369.f_98[2];
		}
	}
	if (iLocal_1109 == 1)
	{
		__LIB_4__::func_436(&uLocal_1304, iVar0, 30f, fVar1);
	}
	else
	{
		__LIB_4__::func_436(&uLocal_1304, iVar0, 30f, fVar1);
	}
}

bool func_178(int iParam0)
{
	if (__LIB_3__::func_419(iLocal_1285[0], Global_35) == __LIB_3__::func_419(iLocal_1285[0], iParam0))
	{
		return true;
	}
	return false;
}

bool func_182()
{
	if (func_178(iLocal_1248[4]) || func_178(iLocal_1248[2]))
	{
		return true;
	}
	return false;
}

char* func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Lem_01";
		case 1:
			return "Lem_02";
		case 2:
			return "Lem03";
		case 3:
			return "Lem04";
		case 5:
			return "Vic01";
		case 6:
			return "Vic02";
		case 7:
			return "Vic03";
		case 8:
			return "Vic04";
		case 9:
			return "Vic05";
		case 10:
			return "Vic06";
	}
	return "NULL";
}

void func_192()
{
	if (Local_369.f_46)
	{
		return;
	}
	if (!bLocal_1375 && __LIB_2__::func_1(iLocal_1248[8], 0, 1))
	{
		if (__LIB_0__::func_665(Global_35, iLocal_1248[8], 0, 1) < 8f && PED::_0x7F9B9791D4CB71F6(iLocal_1248[8], Global_35, false, 0) == 1)
		{
			__LIB_2__::func_478(iLocal_1248[8], Global_35, sLocal_1145[19], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_1375 = true;
		}
	}
	if (!bLocal_1376)
	{
		if (__LIB_0__::func_665(Global_35, iLocal_1248[7], 0, 1) < 8f && PED::_0x7F9B9791D4CB71F6(iLocal_1248[7], Global_35, false, 0) == 1)
		{
			__LIB_2__::func_478(iLocal_1248[7], Global_35, sLocal_1145[20], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_1376 = true;
		}
	}
}

void func_193()
{
	if (iLocal_1301 < 4)
	{
		if (__LIB_2__::func_343(Global_35, iLocal_1285[0], 0))
		{
			func_53(1, 1, 0);
		}
	}
}

void func_194()
{
	if (iLocal_1109 == 0 && !bLocal_1396)
	{
		if (bLocal_1371 || bLocal_1374)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_1248[2]);
			bLocal_1396 = true;
		}
	}
	switch (iLocal_1303)
	{
		case 0:
			break;
		case 1:
			if (((!bLocal_1379 && !Local_369.f_46) && __LIB_0__::func_232(Global_35, iLocal_1248[2], 1) < 225f) && __LIB_1__::func_313(&uLocal_1348, 6f))
			{
				__LIB_2__::func_478(iLocal_1248[2], Global_35, sLocal_1145[8], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
			}
			func_436();
			break;
	}
}

void func_195()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1248[iVar0]) && !__LIB_3__::func_578(iLocal_1248[iVar0]))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[iVar0], joaat("LOOTED")))
			{
				__LIB_4__::func_276(iLocal_1248[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_196()
{
	float fVar0;
	fVar0 = fLocal_1428;
	fLocal_1428 = __LIB_1__::func_992(Global_35, Local_369.f_51, 0);
	if (fLocal_1428 > fVar0)
	{
		bLocal_1379 = true;
	}
	else
	{
		bLocal_1379 = false;
	}
}

void func_197()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (Local_369.f_46)
	{
		return;
	}
	if (iLocal_1301 != 4 && __LIB_1__::func_313(&uLocal_1345, 3.5f))
	{
		if (!(iLocal_1109 == 0 && !ENTITY::DOES_ENTITY_EXIST(func_233())))
		{
			__LIB_3__::func_465(11, 0, 0, 0, iLocal_1248[3], 0, 1065353216 /* Float: 1f */, 0);
		}
		func_53(0, 1, 0);
	}
	if (bLocal_1394 && !bLocal_1395)
	{
		if (__LIB_2__::func_227(-3f, 1, 0, 0))
		{
			__LIB_2__::func_478(iLocal_1267, Global_35, sLocal_1145[33], 0, -1082130432 /* Float: -1f */, func_439(), 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_1395 = true;
		}
	}
	if (iLocal_1109 == 1)
	{
		iVar2 = 0;
		iVar3 = 4;
	}
	else
	{
		iVar2 = 0;
		iVar3 = 2;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		iVar0 = func_441(&(iLocal_1248[iVar1]), &(Local_33[iVar1 /*21*/]), 30f, &Local_265, &(Local_369.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar0 != -1)
		{
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 == 1)
	{
		iVar1 = 0;
		if (iLocal_1109 == 1)
		{
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				__LIB_2__::func_504(iLocal_1248[iVar1], (100 + iVar1 * 30));
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1267))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_1267, Global_35, 4000, 0, 51, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_1267, Global_35, -1, -1f, -1f, -1f);
			}
			else if (__LIB_0__::func_232(Global_35, iLocal_1248[2], 1) < __LIB_0__::func_232(Global_35, iLocal_1248[4], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[2]))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_1248[2], Global_35, 4000, 0, 51, 1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_1248[2], Global_35, -1, -1f, -1f, -1f);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[4]))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_1248[4], Global_35, 4000, 0, 51, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_1248[4], Global_35, -1, -1f, -1f, -1f);
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				__LIB_2__::func_504(iLocal_1248[iVar1], (100 + iVar1 * 30));
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[2]))
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_1248[2], 0))
				{
					PED::_0x802092B07E3B1EEA(iLocal_1248[2], Global_36, 3);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_1248[2]);
					TASK::TASK_AIM_AT_ENTITY(iLocal_1248[2], Global_35, -1, 0, 0);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_1248[2], Global_35, 4000, 0, 51, 1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_1248[2], Global_35, -1, -1f, -1f, -1f);
				}
			}
		}
		__LIB_1__::func_148(&uLocal_1345);
		__LIB_2__::func_526(&Local_265, 0, 0);
	}
	else if (iVar0 == 0)
	{
		bLocal_1394 = true;
		__LIB_1__::func_148(&uLocal_1333);
		__LIB_2__::func_411(&(Local_265[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_265[1 /*17*/]), 1, 0);
	}
}

void func_198()
{
	if (__LIB_1__::func_313(&uLocal_1351, 2f))
	{
		bLocal_1404 = true;
		func_144();
	}
}

void func_199()
{
	int iVar0;
	if (__LIB_0__::func_75(&uLocal_1345) || iLocal_1301 == 4)
	{
		if (iLocal_1109 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				PED::SET_PED_RESET_FLAG(iLocal_1248[iVar0], 290, true);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				PED::SET_PED_RESET_FLAG(iLocal_1248[iVar0], 290, true);
				iVar0++;
			}
		}
	}
}

void func_200()
{
	if (bLocal_1406 && iLocal_1301 != 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[2]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_1248[2], 27, true);
		}
	}
	if (__LIB_1__::func_313(&uLocal_1357, 0.1f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[2]))
		{
			PED::REGISTER_TARGET(iLocal_1248[2], Global_35, 1);
			TASK::TASK_COMBAT_HATED_TARGETS(iLocal_1248[2], -1f);
			bLocal_1406 = true;
			__LIB_1__::func_148(&uLocal_1360);
		}
	}
	if (__LIB_1__::func_313(&uLocal_1360, 5.5f))
	{
		if (iLocal_1301 != 4 && !ENTITY::IS_ENTITY_DEAD(iLocal_1248[2]))
		{
			TASK::CLEAR_PED_TASKS(iLocal_1248[2], true, false);
		}
	}
}

void func_201()
{
	int iVar0;
	int iVar1;
	if (bLocal_1408 || iLocal_1109 == 1)
	{
		return;
	}
	iVar1 = 1;
	iVar0 = 9;
	while (iVar0 <= 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar0]))
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_1248[iVar0], 0))
			{
				if (iVar0 == 9)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1248[iVar0], false, true);
					__LIB_4__::func_178(iLocal_1248[iVar0], -1f);
					__LIB_3__::func_502(iLocal_1248[iVar0], Local_1190[7 /*2*/], Local_1190[7 /*2*/].f_1, 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, 128, 0);
				}
				else if (iVar0 == 10)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1248[iVar0], false, true);
					__LIB_4__::func_178(iLocal_1248[iVar0], -1f);
					__LIB_3__::func_502(iLocal_1248[iVar0], Local_1190[6 /*2*/], Local_1190[6 /*2*/].f_1, 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, 128, 0);
				}
				else if (iVar0 == 11)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1248[iVar0], false, true);
					__LIB_4__::func_178(iLocal_1248[iVar0], -1f);
					__LIB_3__::func_502(iLocal_1248[iVar0], Local_1190[9 /*2*/], Local_1190[9 /*2*/].f_1, 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, 128, 0);
				}
			}
			else
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	bLocal_1408 = iVar1;
}

void func_202()
{
	int iVar0;
	if (bLocal_1399 || iLocal_1301 == 6)
	{
		return;
	}
	if (iLocal_1109 == 1)
	{
		iVar0 = 5;
		while (iVar0 <= 10)
		{
			if (__LIB_2__::func_901(iLocal_1248[iVar0], Global_35))
			{
				bLocal_1399 = true;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 3;
		while (iVar0 <= 6)
		{
			if (__LIB_2__::func_901(iLocal_1248[iVar0], Global_35))
			{
				bLocal_1399 = true;
			}
			iVar0++;
		}
	}
}

void func_203()
{
	if (iLocal_1109 == 1)
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1248[3], Local_1182.f_1) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[3], joaat("TRANSITION")))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182.f_1, func_137(3), iLocal_1248[3]);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_137(3), iLocal_1248[3], 0);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1248[4], Local_1182.f_1) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[4], joaat("TRANSITION")))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182.f_1, func_137(4), iLocal_1248[4]);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_137(4), iLocal_1248[4], 0);
	}
}

void func_205()
{
	int iVar0;
	int iVar1;
	if (iLocal_1109 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (iVar0 != 2)
			{
				if (iVar0 == 3 || iVar0 == 4)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182.f_1, func_137(iVar0), iLocal_1248[iVar0], 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), iLocal_1248[iVar0], 0);
				}
			}
			iVar0++;
		}
		iVar0 = 9;
		while (iVar0 <= 13)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar0], 38, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar0], 223, true);
			if (iVar0 > 11)
			{
				__LIB_4__::func_437(iLocal_1248[iVar0], 1, 1060320051 /* Float: 0.7f */, 0, 1);
			}
			__LIB_4__::func_276(iLocal_1248[iVar0], 1, 0);
			iVar0++;
		}
		TASK::TASK_COWER(iLocal_1248[7], -1, 0, 0);
		TASK::TASK_COWER(iLocal_1248[8], -1, 0, 0);
		__LIB_2__::func_190(iLocal_1248[0], 325);
		__LIB_2__::func_190(iLocal_1248[1], 175);
		__LIB_2__::func_190(iLocal_1248[2], 150);
		__LIB_4__::func_276(iLocal_1248[5], 1, 0);
		__LIB_4__::func_276(iLocal_1248[6], 1, 0);
		__LIB_2__::func_967(&(Local_369.f_5), iLocal_1248[0], iLocal_1263[0], 0);
		__LIB_2__::func_967(&(Local_369.f_5), iLocal_1248[1], iLocal_1263[1], 0);
		__LIB_2__::func_967(&(Local_369.f_5), iLocal_1248[2], iLocal_1263[2], 0);
	}
	else if (iLocal_1109 == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_189(0), iLocal_1248[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_189(1), iLocal_1248[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, "Wagon", iLocal_1292, 0);
		VEHICLE::_0x6355602C02EDC6DF(iLocal_1292, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1295))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, "CRATE", iLocal_1295, 0);
		}
		iVar1 = 2;
		while (iVar1 <= 10)
		{
			if (iVar1 != 4)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182.f_1, func_189(iVar1), iLocal_1248[iVar1], 0);
			}
			iVar1++;
		}
		iVar1 = 11;
		while (iVar1 <= 13)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar1], 38, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_1248[iVar1], 223, true);
			ENTITY::_0x9587913B9E772D29(iLocal_1248[iVar1], 0);
			__LIB_4__::func_437(iLocal_1248[iVar1], 1, 1060320051 /* Float: 0.7f */, 0, 1);
			iVar1++;
		}
		__LIB_2__::func_967(&(Local_369.f_5), iLocal_1248[0], iLocal_1263[0], 0);
		__LIB_2__::func_967(&(Local_369.f_5), iLocal_1248[1], iLocal_1263[1], 0);
		__LIB_2__::func_967(&(Local_369.f_5), iLocal_1248[2], iLocal_1263[2], 0);
	}
}

void func_206()
{
	__LIB_3__::func_157(&(Local_265[0 /*17*/]), "RE_INTER_POS", sLocal_1145[28], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_265[1 /*17*/]), __LIB_2__::func_460(26), sLocal_1145[30], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_265[2 /*17*/]), __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_265[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_265[1 /*17*/]), 1, 0);
	__LIB_3__::func_158(&(Local_265[2 /*17*/]), 1);
}

void func_210()
{
	int iVar0;
	if (iLocal_1109 == 0)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 2;
	}
	if (iLocal_1413 < 4)
	{
		if (iLocal_1412 < iLocal_1414)
		{
			if (__LIB_1__::func_992(Global_35, Local_369.f_51, 1) < fLocal_1429)
			{
				__LIB_3__::func_426(&Local_369, &(Local_369.f_48), 64, &(Local_369.f_51.f_6));
				if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1) && __LIB_1__::func_285(&uLocal_1339, fLocal_1426))
				{
					if (!PED::IS_TRACKED_PED_VISIBLE(iLocal_1248[iVar0]))
					{
						PED::_0x4C57F27D1554E6B0(iLocal_1248[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_1248[iVar0], true, false) + Vector(10f, 0f, 0f), 0, -1082130432 /* Float: -1f */, 0, 0f);
						__LIB_3__::func_719(&Local_369, iLocal_1248[iVar0], 1066055203, 0, 1123024896 /* Float: 120f */, 0, -1, 1);
						__LIB_1__::func_148(&uLocal_1339);
						fLocal_1426 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 3.5f);
						iLocal_1412++;
					}
				}
			}
		}
		else if (__LIB_1__::func_285(&uLocal_1339, fLocal_1427))
		{
			iLocal_1413++;
			fLocal_1429 = (fLocal_1429 - 400f);
			iLocal_1412 = 0;
			iLocal_1414 = MISC::GET_RANDOM_INT_IN_RANGE(4, 5);
			__LIB_1__::func_148(&uLocal_1339);
			fLocal_1426 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 3.5f);
			fLocal_1427 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4.5f, 5.7f);
			if (!bLocal_1403)
			{
				__LIB_2__::func_268(536870912, 1, 0, 1);
				bLocal_1403 = true;
			}
		}
	}
}

void func_211()
{
	if (iLocal_1301 == 4)
	{
		return;
	}
	if (!bLocal_1367 && __LIB_2__::func_1(iLocal_1248[0], 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "Crim01"))
		{
			if (iLocal_30 == 5)
			{
				__LIB_3__::func_232(&(Local_369.f_5), 1);
				__LIB_3__::func_900(&(Local_369.f_5), 0);
			}
			func_226();
			if (__LIB_2__::func_1(iLocal_1263[0], 0, 1))
			{
				TASK::TASK_MOUNT_ANIMAL(iLocal_1248[0], iLocal_1263[0], -1, -1, 2f, 1, 0, 0);
			}
			bLocal_1367 = true;
		}
	}
	if (!bLocal_1368 && __LIB_2__::func_1(iLocal_1248[1], 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "Crim02"))
		{
			if (iLocal_30 == 5)
			{
				__LIB_3__::func_232(&(Local_369.f_5), 1);
				__LIB_3__::func_900(&(Local_369.f_5), 0);
			}
			func_226();
			if (__LIB_2__::func_1(iLocal_1263[1], 0, 1))
			{
				TASK::TASK_MOUNT_ANIMAL(iLocal_1248[1], iLocal_1263[1], -1, -1, 2f, 1, 0, 0);
			}
			bLocal_1368 = true;
		}
	}
	if (!bLocal_1371 && __LIB_2__::func_1(iLocal_1248[2], 0, 1))
	{
		if (bLocal_1367 || bLocal_1368)
		{
			if (iLocal_1303 == 1 && __LIB_0__::func_232(Global_35, iLocal_1248[2], 1) < 225f)
			{
				func_55();
			}
			else
			{
				if (__LIB_2__::func_1(iLocal_1263[2], 0, 1))
				{
					PED::_0x463803429297117C(iLocal_1248[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1248[2], 0f, 1f, 0f), 0, 0);
					TASK::TASK_LOOK_AT_COORD(iLocal_1248[2], ENTITY::GET_ENTITY_COORDS(iLocal_1248[3], true, false), 3000, 0, 51, 1);
					TASK::TASK_MOUNT_ANIMAL(iLocal_1248[2], iLocal_1263[2], -1, -1, 1.5f, 1, 0, 0);
				}
				__LIB_0__::func_325(&(iLocal_1269[2]));
				bLocal_1371 = true;
			}
		}
	}
}

void func_212()
{
	if (bLocal_1367)
	{
		if (iLocal_1420 == 0)
		{
			if (__LIB_2__::func_227(0, 1, iLocal_1248[1], 1))
			{
				__LIB_2__::func_478(iLocal_1248[1], 0, sLocal_1145[24], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1420 = 25;
			}
		}
		else if (iLocal_1420 == 25)
		{
			if (__LIB_2__::func_227(0, 1, iLocal_1248[1], 1))
			{
				__LIB_2__::func_478(iLocal_1248[0], 0, sLocal_1145[25], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1420 = 26;
			}
		}
		else if (iLocal_1420 == 26)
		{
			if (__LIB_2__::func_227(0, 1, iLocal_1248[0], 1))
			{
				__LIB_2__::func_478(iLocal_1248[1], 0, sLocal_1145[26], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1420 = 27;
			}
		}
		else if (iLocal_1420 == 27)
		{
			if (__LIB_2__::func_227(0, 1, iLocal_1248[1], 1))
			{
				__LIB_2__::func_478(iLocal_1248[1], 0, sLocal_1145[27], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1420 = -1;
			}
		}
	}
}

void func_213()
{
	int iVar0;
	if (bLocal_1387)
	{
		return;
	}
	if (iLocal_1109 == 0)
	{
		iVar0 = iLocal_1248[2];
	}
	else
	{
		iVar0 = iLocal_1248[2];
	}
	if (func_454() && (!PED::IS_PED_ON_MOUNT(iVar0) || __LIB_0__::func_396(iVar0)))
	{
		if (func_456())
		{
			if (iLocal_1109 == 0)
			{
				if (iLocal_30 == 5)
				{
					func_55();
				}
				else
				{
					__LIB_2__::func_478(iVar0, Global_35, sLocal_1145[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (__LIB_2__::func_1(iLocal_1263[2], 0, 1))
					{
						if (__LIB_0__::func_394(iVar0, iLocal_1263[2], 0))
						{
							__LIB_1__::func_148(&uLocal_1357);
						}
						else
						{
							if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0))
							{
								PED::_0x802092B07E3B1EEA(iVar0, Global_36, 3);
							}
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 5000, false, 1);
							TASK::TASK_MOUNT_ANIMAL(0, iLocal_1263[2], -1, -1, 2f, 1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
							TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_1298);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
						}
					}
					bLocal_1387 = true;
				}
			}
			else if (!func_457())
			{
				__LIB_2__::func_478(iVar0, Global_35, "HEADS_UP_THREATEN", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
				bLocal_1387 = true;
			}
		}
	}
}

int func_214()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_396(iLocal_1248[iVar0]))
		{
			return iLocal_1248[iVar0];
		}
		iVar0++;
	}
	return 0;
}

void func_215()
{
	if (iLocal_1419 > 10)
	{
		iLocal_1419 = 0;
	}
	if (__LIB_2__::func_1(iLocal_1248[iLocal_1419], 0, 1) && __LIB_0__::func_232(Global_35, iLocal_1248[iLocal_1419], 1) < 1225f)
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_1248[iLocal_1419], Global_35, 500, 0, 51, 0);
	}
	iLocal_1419++;
}

void func_216()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	if (iLocal_1301 == 4)
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_1248[0], 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "Lem_01"))
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_1248[0], iLocal_1292, 20000, -1, 2f, 1, 0);
			bLocal_1367 = true;
		}
	}
	if (__LIB_2__::func_1(iLocal_1248[1], 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "Lem_02"))
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_1248[1], iLocal_1292, 10000, 0, 2f, 513, 0);
			bLocal_1368 = true;
		}
	}
	if (__LIB_2__::func_1(iLocal_1248[2], 0, 1))
	{
		if (!bLocal_1369 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1248[2], -1))
		{
			if (ANIMSCENE::_0xF94692EB9DC15D74(Local_1182, 0))
			{
				if (!__LIB_0__::func_75(&uLocal_1333) || (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1248[2], -1) && __LIB_1__::func_285(&uLocal_1333, 5.5f)))
				{
					if (__LIB_2__::func_1(iLocal_1263[0], 0, 1))
					{
						if (iLocal_1267 == iLocal_1248[2])
						{
							PED::_0x1FA132CBCD7CB239(iLocal_1248[2], joaat("INVESTIGATORCHALLENGE_COMBATSTART"));
							PED::_0x8ACC0506743A8A5C(iLocal_1248[2], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							vVar1 = { __LIB_4__::func_147(ENTITY::GET_ENTITY_COORDS(iLocal_1248[2], true, false), ENTITY::GET_ENTITY_COORDS(iLocal_1263[0], true, false)) };
							vVar1 = { __LIB_4__::func_147(vVar1, ENTITY::GET_ENTITY_COORDS(iLocal_1263[0], true, false)) };
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1.5f, 0, 2f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_MOUNT_ANIMAL(0, iLocal_1263[0], -1, -1, 1.5f, 1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[2], iVar0);
							bLocal_1372 = true;
						}
						else
						{
							TASK::TASK_MOUNT_ANIMAL(iLocal_1248[2], iLocal_1263[0], -1, -1, 2f, 1, 0, 0);
							__LIB_0__::func_325(&(iLocal_1269[2]));
						}
						bLocal_1369 = true;
					}
				}
			}
		}
		else if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182.f_1, "Lem03"))
		{
			if (__LIB_2__::func_1(iLocal_1263[0], 0, 1))
			{
				TASK::TASK_MOUNT_ANIMAL(iLocal_1248[2], iLocal_1263[0], -1, -1, 2f, 1, 0, 0);
				bLocal_1369 = true;
			}
		}
	}
	if (__LIB_2__::func_1(iLocal_1248[3], 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182.f_1, "Lem04"))
		{
			if (__LIB_2__::func_1(iLocal_1263[2], 0, 1))
			{
				TASK::TASK_MOUNT_ANIMAL(iLocal_1248[3], iLocal_1263[2], -1, -1, 2f, 1, 0, 0);
				bLocal_1370 = true;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1295))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "CRATE"))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1295, iLocal_1292, -1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1292, ENTITY::GET_ENTITY_COORDS(iLocal_1295, false, false)), ENTITY::GET_ENTITY_ROTATION(iLocal_1295, 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_1292, 2), true, true, false, false, 2, true, true, false);
		}
	}
	if (!bLocal_1371 && __LIB_2__::func_1(iLocal_1248[4], 0, 1))
	{
		if (bLocal_1369)
		{
			if ((!__LIB_0__::func_75(&uLocal_1333) || (iLocal_1267 == iLocal_1248[4] && __LIB_1__::func_285(&uLocal_1333, 5.5f))) || bLocal_1372)
			{
				if (__LIB_2__::func_1(iLocal_1263[1], 0, 1))
				{
					if (iLocal_1267 == iLocal_1248[4])
					{
						PED::_0x1FA132CBCD7CB239(iLocal_1248[4], joaat("INVESTIGATORCHALLENGE_COMBATSTART"));
						PED::_0x8ACC0506743A8A5C(iLocal_1248[4], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
						__LIB_0__::func_37(&uLocal_1333);
						TASK::OPEN_SEQUENCE_TASK(&iVar4);
						vVar5 = { __LIB_4__::func_147(ENTITY::GET_ENTITY_COORDS(iLocal_1248[4], true, false), __LIB_4__::func_147(ENTITY::GET_ENTITY_COORDS(iLocal_1248[4], true, false), ENTITY::GET_ENTITY_COORDS(iLocal_1263[1], true, false))) };
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar5, Global_35, 2f, 0, 2f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_1263[1], -1, -1, 2f, 1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar4);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[4], iVar4);
						bLocal_1373 = true;
					}
					else
					{
						TASK::TASK_MOUNT_ANIMAL(iLocal_1248[4], iLocal_1263[1], -1, -1, 2f, 1, 0, 0);
						__LIB_0__::func_325(&(iLocal_1269[4]));
					}
				}
				__LIB_0__::func_325(&(iLocal_1269[4]));
				bLocal_1371 = true;
			}
		}
	}
}

bool func_217()
{
	int iVar0;
	if (bLocal_1380)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1267))
		{
			iVar0 = AUDIO::_0x4A98E228A936DBCC(iLocal_1267);
			if (iVar0 == MISC::GET_HASH_KEY(sLocal_1145[6]) || iVar0 == joaat("HEADS_UP_THREATEN"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_220()
{
	struct<16> Var0;
	if (bLocal_1400)
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_1248[3], 0, 1) && PED::IS_PED_ON_MOUNT(iLocal_1248[3]))
	{
		if (__LIB_0__::func_232(Global_35, iLocal_1248[3], 1) < 1600f)
		{
			Var0 = Global_35;
			Var0.f_6 = 1;
			Var0.f_4 = 8200;
			Var0.f_15 = 1;
			WEAPON::_0x5230D3F6EE56CFE6(iLocal_1248[3], 0);
			TASK::TASK_SHOOT_WITH_WEAPON(iLocal_1248[3], &Var0);
			bLocal_1400 = true;
		}
	}
}

void func_221()
{
	struct<16> Var0;
	if (bLocal_1401)
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_1248[2], 0, 1) && PED::IS_PED_ON_MOUNT(iLocal_1248[2]))
	{
		if (__LIB_0__::func_232(Global_35, iLocal_1248[2], 1) < 1600f)
		{
			Var0 = Global_35;
			Var0.f_6 = 1;
			Var0.f_4 = 7000;
			Var0.f_15 = 1;
			WEAPON::_0x5230D3F6EE56CFE6(iLocal_1248[2], 0);
			TASK::TASK_SHOOT_WITH_WEAPON(iLocal_1248[2], &Var0);
			bLocal_1401 = true;
		}
	}
}

void func_222()
{
	struct<16> Var0;
	if (bLocal_1402)
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_1248[1], 0, 1) && __LIB_2__::func_343(iLocal_1248[1], iLocal_1292, 0))
	{
		if (__LIB_0__::func_232(Global_35, iLocal_1248[1], 1) < 1600f)
		{
			Var0 = Global_35;
			Var0.f_6 = 1;
			Var0.f_4 = 15000;
			Var0.f_15 = 1;
			WEAPON::_0x5230D3F6EE56CFE6(iLocal_1248[1], 0);
			TASK::TASK_SHOOT_WITH_WEAPON(iLocal_1248[1], &Var0);
			bLocal_1402 = true;
		}
	}
}

int func_223()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_0__::func_396(iLocal_1248[iVar0]))
		{
			return iLocal_1248[iVar0];
		}
		iVar0++;
	}
	return 0;
}

void func_224()
{
	if (bLocal_1381)
	{
		return;
	}
	if (__LIB_0__::func_396(iLocal_1248[2]) && func_454())
	{
		if (__LIB_2__::func_478(iLocal_1248[2], 0, sLocal_1145[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0))
		{
			bLocal_1381 = true;
			__LIB_1__::func_148(&uLocal_1336);
		}
	}
}

void func_226()
{
	var uVar0;
	float fVar1;
	bool bVar2;
	__LIB_3__::func_157(&(Local_265[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_1145[29], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	if (iLocal_1109 == 1)
	{
		fVar1 = 4900f;
	}
	else
	{
		fVar1 = 2500f;
		bVar2 = true;
	}
	if (__LIB_1__::func_992(Global_35, Local_369.f_51, 0) < fVar1 || func_461(Global_35, &iLocal_1248, &uVar0, fVar1))
	{
		if (bVar2 && !bLocal_1407)
		{
			if ((PED::IS_TRACKED_PED_VISIBLE(iLocal_1248[0]) || PED::IS_TRACKED_PED_VISIBLE(iLocal_1248[1])) || PED::IS_TRACKED_PED_VISIBLE(iLocal_1248[2]))
			{
				__LIB_3__::func_465(2, 0, 0, "HONOR_EVENT_WATCHED_DEATH", iLocal_1248[3], 0, 1065353216 /* Float: 1f */, 0);
				bLocal_1407 = true;
			}
		}
		Local_369.f_44 = 1;
	}
}

void func_228()
{
	int iVar0;
	var uVar1[1];
	uVar1[0] = Global_35;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		PED::_0x34EDDD59364AD74A(iLocal_1248[iVar0], &uVar1);
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	int iVar1;
	if (!bLocal_1404)
	{
		return;
	}
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1248[iVar0], -1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[iVar0], -641223575) && !ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1248[iVar0], joaat("DEAD")))
			{
				iVar1 = func_380(iVar0);
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1248[iVar0], -1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), iLocal_1248[iVar0]);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
				TASK::TASK_PLAY_ANIM(0, Local_1190[iVar1 /*2*/], Local_1190[iVar1 /*2*/].f_1, 8f, -4f, -1, 0, 0f, false, 0, false, 0, false);
				if (__LIB_3__::func_419(iLocal_1248[iVar0], Global_35))
				{
					TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1248[iVar0], 20f, -5f, 0f), -1f, -1, 1280, 1077936128 /* Float: 3f */, 0);
				}
				else
				{
					TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1248[iVar0], -20f, -5f, 0f), -1f, -1, 1280, 1077936128 /* Float: 3f */, 0);
				}
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1248[iVar0], iLocal_1298);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
			}
		}
		iVar0++;
	}
}

void func_231()
{
	int iVar0;
	int iVar1;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_STAND_STILL(0, 1000);
	TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 1, 4096, -1082130432 /* Float: -1f */, -1, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	if (iLocal_1109 == 0)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1248[iVar1], iVar0, (0.2f * IntToFloat(iVar1)), (0.2f * IntToFloat(iVar1)));
			__LIB_0__::func_325(&(iLocal_1269[iVar1]));
			iVar1++;
		}
	}
	else if (iLocal_1109 == 1)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1248[iVar1], iVar0, (0.2f * IntToFloat(iVar1)), (0.2f * IntToFloat(iVar1)));
			__LIB_0__::func_325(&(iLocal_1269[iVar1]));
			iVar1++;
		}
	}
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_232()
{
	__LIB_3__::func_157(&(Local_317[0 /*17*/]), "RE_INTER_POS", sLocal_1145[31], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_317[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_1145[32], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_317[2 /*17*/]), __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_317[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_317[1 /*17*/]), 1, 0);
	__LIB_3__::func_158(&(Local_317[2 /*17*/]), 1);
}

var func_233()
{
	var uVar0;
	int iVar1;
	iVar1 = 3;
	while (iVar1 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1248[iVar1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar1]))
		{
			uVar0 = iLocal_1248[iVar1];
		}
		else
		{
			iVar1++;
		}
	}
	return uVar0;
}

bool func_235(float fParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar0]) && __LIB_0__::func_94(iLocal_1248[iVar0], Local_369.f_51, 0) < fParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_236()
{
	if (((bLocal_1389 || iLocal_1109 != 1) || Local_369.f_46) || iLocal_1301 < 3)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1292) && PED::IS_PED_IN_VEHICLE(iLocal_1248[0], iLocal_1292, false))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1294))
		{
			__LIB_3__::func_581(&iLocal_1294, ENTITY::GET_ENTITY_COORDS(iLocal_1292, true, false), 0f, 0f, 0f, 4f, 5.75f, 5f);
			PED::_0x7C00CFC48A782DC0(iLocal_1294, iLocal_1292, 0f, 7.5f, 0f, 0f, 0f, 0f, 2, 1);
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1294, true, 0))
		{
			__LIB_2__::func_478(iLocal_1248[0], Global_35, sLocal_1145[22], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_1389 = true;
		}
	}
}

bool func_237()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_1__::func_992(iLocal_1248[iVar0], Local_369.f_51, 1) < 400f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_238()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (bLocal_1390 && !bLocal_1392)
	{
		if (__LIB_2__::func_227(-3f, 1, 0, 0))
		{
			__LIB_2__::func_478(iLocal_1268, Global_35, "VICTIMIZED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_1392 = true;
		}
	}
	if (bLocal_1391 && !bLocal_1393)
	{
		if (__LIB_2__::func_227(-3f, 1, 0, 0))
		{
			__LIB_2__::func_478(iLocal_1268, Global_35, "RESPONSE_A", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_1393 = true;
		}
	}
	if (iLocal_1109 == 1)
	{
		iVar2 = 5;
		iVar3 = 10;
	}
	else
	{
		iVar2 = 3;
		iVar3 = 6;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		iVar0 = func_441(&(iLocal_1248[iVar1]), &(Local_33[iVar1 /*21*/]), 15f, &Local_317, &(Local_369.f_192), 1f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar0 != -1)
		{
			iLocal_1268 = iLocal_1248[iVar1];
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 == 1)
	{
		bLocal_1390 = true;
		__LIB_2__::func_526(&Local_317, 0, 0);
		return;
	}
	else if (iVar0 == 0)
	{
		bLocal_1391 = true;
		__LIB_2__::func_526(&Local_317, 0, 0);
		return;
	}
}

bool func_239(int iParam0, var uParam1)
{
	if (PED::IS_PED_IN_ANY_TRAIN(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_ON_VEHICLE(iParam0, false))
	{
		return false;
	}
	if (AITRANSPORT::_0x660639BC60157048(iParam0, uParam1))
	{
		return false;
	}
	return true;
}

void func_240()
{
	int iVar0;
	iVar0 = 5;
	while (iVar0 <= 10)
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182.f_1, func_189(iVar0)))
		{
			if (!bLocal_1382 && __LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_2__::func_478(iLocal_1248[iVar0], 0, sLocal_1145[9], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_1382 = true;
			}
			if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_1248[iVar0], Local_369.f_51, 0, 524672, -1f, -1, 0);
			}
		}
		iVar0++;
	}
}

void func_241()
{
	if (iLocal_1109 == 1)
	{
		if (!bLocal_1383 && __LIB_2__::func_227(-3f, 1, 0, 0))
		{
			if (__LIB_4__::func_254(&iLocal_1248, &uLocal_1304, &iLocal_1332, &uLocal_1415, 5, 10, 1))
			{
				if (__LIB_2__::func_478(func_468(), Global_35, sLocal_1145[23], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					bLocal_1383 = true;
				}
			}
		}
	}
}

int func_243()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = 0;
	fVar2 = -1f;
	if (iLocal_1109 == 0)
	{
		iVar0 = 3;
		while (iVar0 <= 6)
		{
			if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1))
			{
				fVar3 = __LIB_0__::func_232(Global_35, iLocal_1248[iVar0], 1);
				if (fVar3 < fVar2 || fVar2 == -1f)
				{
					fVar2 = fVar3;
					iVar1 = iLocal_1248[iVar0];
				}
			}
			iVar0++;
		}
	}
	else if (iLocal_1109 == 1)
	{
		iVar0 = 5;
		while (iVar0 <= 10)
		{
			if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1))
			{
				fVar3 = __LIB_0__::func_232(Global_35, iLocal_1248[iVar0], 1);
				if (fVar3 < fVar2 || fVar2 == -1f)
				{
					fVar2 = fVar3;
					iVar1 = iLocal_1248[iVar0];
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_244()
{
	if (__LIB_1__::func_285(&uLocal_1342, 4.5f) && __LIB_2__::func_227(0, 1, 0, 0))
	{
		if (!bLocal_1385)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[7]) && __LIB_0__::func_665(Global_35, iLocal_1248[7], 1, 1) < 10f)
			{
				if (!PED::_0x5102307CE88798EB(iLocal_1248[7]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1248[7]);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(iLocal_1248[7]))
				{
					__LIB_1__::func_148(&uLocal_1342);
					__LIB_2__::func_478(iLocal_1248[7], Global_35, "RELIEVED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_1385 = true;
				}
			}
		}
		if (!bLocal_1384)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[8]) && __LIB_0__::func_665(Global_35, iLocal_1248[8], 1, 1) < 10f)
			{
				if (!PED::_0x5102307CE88798EB(iLocal_1248[8]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1248[8]);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(iLocal_1248[8]))
				{
					__LIB_1__::func_148(&uLocal_1342);
					__LIB_2__::func_478(iLocal_1248[8], Global_35, "PLAYER_HELPED_TOWN", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_1384 = true;
				}
			}
		}
	}
}

bool func_245(float fParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar0]) && __LIB_0__::func_665(Global_35, iLocal_1248[iVar0], 0, 1) < fParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_282(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (func_495(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_496(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = __LIB_3__::func_292(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_1__::func_85(iParam0, 1))
		{
			__LIB_2__::func_119(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_293(iParam0);
}

var func_304()
{
	return Local_22.f_1;
}

Vector3 func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -0.0252f, 0.6023f, 1.0499f;
				case 1:
					return 1.3065f, -2.8402f, 1.0492f;
				case 2:
					return -1.3933f, 3.8568f, 1.0491f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_306(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 180.0955f;
				case 1:
					return 0f;
				case 2:
					return 0f;
			}
			break;
	}
	return 0f;
}

var func_307()
{
	return Local_18.f_1;
}

Vector3 func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1.0826f, -2.0441f, 1.0306f;
				case 1:
					return -1.0264f, 2.1553f, 1.0319f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_309(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 87.9355f;
				case 1:
					return -90.6245f;
			}
			break;
	}
	return 0f;
}

var func_310()
{
	return Local_14.f_1;
}

Vector3 func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0.0737f, -5.0265f, 0.9923f;
				case 1:
					return -1.2294f, -4.8264f, 0.9902f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -0.9764f;
				case 1:
					return -0.9764f;
			}
			break;
	}
	return 0f;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 3:
			return 1;
		case 4:
			return 2;
		case 5:
			return 3;
		case 6:
			return 4;
	}
	return 0;
}

void func_381(int iParam0, float fParam1, float fParam2, int iParam3)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1248[iParam0]))
	{
		return;
	}
	if (iLocal_1109 == 1)
	{
		iVar0 = -577630801;
	}
	else
	{
		iVar0 = -1464742217;
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
	if (__LIB_18__::func_339(iLocal_1248[iParam0], iLocal_1285[0], iVar0))
	{
		TASK::_TASK_DISEMBARK_VEHICLE_2(0, 1073741824 /* Float: 2f */, 1);
	}
	TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_369.f_51, iParam3, 256, 80f, -1, 0);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
	TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1248[iParam0], iLocal_1298, fParam1, fParam2);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 0;
		case 6:
			return 1;
		case 7:
			return 2;
		case 8:
			return 3;
		case 9:
			return 4;
		case 10:
			return 5;
	}
	return 0;
}

void func_436()
{
	float fVar0;
	if (((bLocal_1371 && iLocal_1109 == 0) || Local_369.f_46) || __LIB_0__::func_75(&uLocal_1345))
	{
		return;
	}
	if (bLocal_1374)
	{
		if (!bLocal_1380)
		{
			if (iLocal_1109 == 1 && iLocal_1267 == iLocal_1248[2])
			{
				if (__LIB_1__::func_285(&uLocal_1333, 0.8f))
				{
					__LIB_2__::func_478(iLocal_1267, Global_35, "HEADS_UP_THREATEN", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
					bLocal_1380 = true;
				}
			}
			else if (__LIB_1__::func_285(&uLocal_1333, 0.8f))
			{
				if (bLocal_1366)
				{
					__LIB_2__::func_478(iLocal_1267, Global_35, sLocal_1145[7], 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_1267, Global_35, sLocal_1145[6], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
				}
				bLocal_1380 = true;
			}
		}
		if (__LIB_0__::func_163(iLocal_1267, -1758697641))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1267, 1f);
		}
		fVar0 = __LIB_0__::func_665(Global_35, iLocal_1267, 0, 1);
		if (fVar0 > (fLocal_1425 + 5f))
		{
			__LIB_2__::func_411(&(Local_317[1 /*17*/]), 0, 0);
			func_593();
			iLocal_1303 = 0;
		}
		else if (__LIB_1__::func_313(&uLocal_1333, 18f) || (fVar0 < 1.5f && !func_594()))
		{
			if (!bLocal_1379)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1267))
				{
					PED::SET_PED_RESET_FLAG(iLocal_1267, 42, true);
				}
				if (!__LIB_3__::func_549(iLocal_1267, &uLocal_1304, &iLocal_1332, 0))
				{
					return;
				}
				if (!Local_369.f_46)
				{
					func_55();
				}
			}
		}
	}
}

int func_439()
{
	if (iLocal_1109 == 1)
	{
		if (iLocal_1267 == iLocal_1248[4])
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

int func_441(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_599(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
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

bool func_454()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_1248[iVar0]) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_1248[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_456()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_1109 == 0)
	{
		iVar1 = 0;
		iVar2 = 2;
	}
	else
	{
		iVar1 = 0;
		iVar2 = 4;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (__LIB_2__::func_1(iLocal_1248[iVar0], 0, 1) && __LIB_2__::func_215(iLocal_1248[iVar0], Global_35, 1, 20f, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_457()
{
	if (((__LIB_0__::func_71(iLocal_1248[2]) && __LIB_0__::func_71(iLocal_1248[3])) && __LIB_0__::func_71(iLocal_1248[4])) && PED::IS_PED_IN_VEHICLE(iLocal_1248[0], iLocal_1292, false))
	{
		if (func_178(iLocal_1248[0]))
		{
			if (bLocal_1374)
			{
				if (__LIB_1__::func_992(Global_35, Local_369.f_51, 1) < 900f && !bLocal_1379)
				{
					func_55();
					return false;
				}
			}
		}
		if (__LIB_2__::func_1(iLocal_1248[1], 0, 1) && !PED::IS_PED_IN_VEHICLE(iLocal_1248[1], iLocal_1292, false))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_1248[1], iLocal_1292, -2);
		}
		return true;
	}
	return false;
}

bool func_461(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0]) && iParam0 != (*iParam1)[iVar0])
		{
			if (__LIB_0__::func_232(iParam0, (*iParam1)[iVar0], 1) < fParam3)
			{
				*uParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_468()
{
	var uVar0;
	int iVar1;
	iVar1 = 5;
	while (iVar1 <= 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1248[iVar1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1248[iVar1]))
		{
			uVar0 = iLocal_1248[iVar1];
		}
		else
		{
			iVar1++;
		}
	}
	return uVar0;
}

bool func_495(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 24:
					*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 25:
					*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 31:
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 32:
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 33:
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			return false;
		}
Vector3 func_496(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!__LIB_0__::func_86(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_593()
{
	vector3 vVar0;
	var uVar3;
	if (iLocal_1109 == 1)
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_1267, 0, 1) && !__LIB_3__::func_138(iLocal_1267, joaat("WORLD_HUMAN_GUARD_SCOUT")))
	{
		if (iLocal_1109 == 0)
		{
			vVar0 = { Local_563[2 /*32*/].f_6 + Vector(1f, 0f, 0f) };
			uVar3 = Local_563[2 /*32*/].f_9;
			__LIB_0__::func_325(&(iLocal_1269[2]));
		}
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), true);
		TASK::CLEAR_PED_TASKS(iLocal_1267, true, false);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
		__LIB_2__::func_915(0, joaat("WORLD_HUMAN_GUARD_SCOUT"), vVar0, uVar3, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
		TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1267, iLocal_1298, 0.8f, 0.8f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
	}
	if (!bLocal_1380)
	{
		bLocal_1374 = false;
	}
}

bool func_594()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1267))
	{
		return false;
	}
	if (((bLocal_1374 && iLocal_1303 == 1) && __LIB_0__::func_163(iLocal_1267, 242628503)) && TASK::GET_SEQUENCE_PROGRESS(iLocal_1267) == 0)
	{
		return true;
	}
	return false;
}

int func_599(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
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
						return func_599(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

