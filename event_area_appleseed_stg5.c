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
	struct<28> Local_15[2];
	var uLocal_72[2] = { 0, 0 };
	int iLocal_75[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	struct<44> Local_104 = { 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1072064102, 1072064102, -1082130432 } ;
	var uLocal_148 = -1082130432;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 1065353216;
	var uLocal_153 = 1;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	struct<31> Local_156 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194[5] = { 0, 0, 0, 0, 0 };
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	int iLocal_206 = 0;
	float fLocal_207 = 0f;
	struct<21> Local_208[2];
	struct<52> Local_251[2];
	int iLocal_356 = 0;
	struct<21> Local_357 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	char cLocal_386[32] = "";
	int iLocal_390[5] = { 0, 0, 0, 0, 0 };
	var uLocal_396[5] = { 0, 0, 0, 0, 0 };
	var uLocal_402[5] = { 0, 0, 0, 0, 0 };
	int iLocal_408 = 0;
	int iLocal_409[2] = { 0, 0 };
	struct<7> Local_412[11];
	vector3 vLocal_490[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519[2] = { 0, 0 };
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	struct<691> Local_526 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = -1;
	var uLocal_1227 = 1;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = -1;
	var uLocal_1239 = 1;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = -1;
	var uLocal_1251 = 1;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = -1;
	var uLocal_1263 = 1;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = -1;
	var uLocal_1275 = 1;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = -1;
	var uLocal_1287 = 1;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = -1;
	var uLocal_1299 = 1;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = -1;
	var uLocal_1311 = 1;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = -1;
	var uLocal_1323 = 1;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = -1;
	var uLocal_1335 = 1;
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
	var uLocal_1346 = -1;
	var uLocal_1347 = 1;
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
	var uLocal_1358 = -1;
	var uLocal_1359 = 1;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = -1;
	var uLocal_1371 = 1;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = -1;
	var uLocal_1383 = 1;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = -1;
	var uLocal_1395 = 1;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = -1;
	var uLocal_1407 = 1;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = -1;
	var uLocal_1419 = 1;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = -1;
	var uLocal_1431 = 1;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = -1;
	var uLocal_1443 = 1;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = -1;
	var uLocal_1455 = 1;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = -1;
	var uLocal_1467 = 1;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = -1;
	var uLocal_1479 = 1;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = -1;
	var uLocal_1491 = 1;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = -1;
	var uLocal_1503 = 1;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = -1;
	var uLocal_1515 = 1;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = -1;
	var uLocal_1527 = 1;
	var uLocal_1528 = 0;
	struct<141> Local_1529 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1686[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1717 = 30;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1779 = 0;
	var uLocal_1780 = 8;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	int iLocal_1845[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1855 = 9;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865[2] = { 0, 0 };
	int iLocal_1868[2] = { 0, 0 };
	int iLocal_1871[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1882 = 10;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	int iLocal_1893[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1909 = 0;
	struct<35> Local_1910 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1096810496, 1090519040, 0 } ;
	var uLocal_1945[1] = { 0 };
	struct<5> Local_1947[5];
	var uLocal_1973[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1979 = 0;
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	int iLocal_1982 = 0;
	bool bLocal_1983 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_207 = 15f;
	Local_1529.f_136 = 0;
	Local_1529.f_137 = uScriptParam_0;
	Local_1529.f_138 = 807;
	if (__LIB_0__::func_2() != 0)
	{
	}
	else
	{
		__LIB_7__::func_919();
		__LIB_8__::func_203(Local_1529.f_136);
		return;
	}
	iLocal_98 = __LIB_0__::func_982(Local_1529.f_136);
	if (__LIB_7__::func_907(Local_1529.f_136, 536870912))
	{
		__LIB_0__::func_516(&(Global_40.f_9096[Local_1529.f_136 /*12*/].f_6), __LIB_0__::func_771(__LIB_7__::func_920()));
	}
	if (!__LIB_7__::func_908(Local_1529.f_136, 2097152))
	{
		__LIB_8__::func_82(Local_1529.f_136, 2097152);
	}
	__LIB_7__::func_921();
	__LIB_8__::func_167(128, __LIB_8__::func_215(Local_1529.f_136));
	if (__LIB_7__::func_908(Local_1529.f_136, 33554432))
	{
		__LIB_7__::func_922(128);
		__LIB_8__::func_83(Local_1529.f_136, 33554432);
	}
	__LIB_7__::func_922(1);
	__LIB_8__::func_167(262144, __LIB_7__::func_907(Local_1529.f_136, 128));
	__LIB_8__::func_167(131072, __LIB_7__::func_907(Local_1529.f_136, 4));
	__LIB_8__::func_167(2097152, __LIB_7__::func_908(Local_1529.f_136, 1024));
	__LIB_8__::func_167(-2147483648, __LIB_7__::func_908(Local_1529.f_136, 16384));
	__LIB_8__::func_167(1048576, __LIB_8__::func_242(Local_1529.f_136));
	__LIB_8__::func_167(16, __LIB_8__::func_309(Local_1529.f_136));
	__LIB_8__::func_234(0, &Local_1529, 0);
	VEHICLE::_0x012701ED938B85DE(1f, 5f);
	if (__LIB_7__::func_907(Local_1529.f_136, 128) || (iLocal_98 == 2 && (__LIB_7__::func_923(-2147483648) || !__LIB_7__::func_908(1, 2))))
	{
		__LIB_7__::func_922(262144);
	}
	__LIB_8__::func_235(&Local_1529, 32, __LIB_8__::func_273());
	if (__LIB_7__::func_924(&Local_1529, 32))
	{
		if (!__LIB_0__::func_117(Local_1529.f_138, 32))
		{
			__LIB_0__::func_123(Local_1529.f_138, 32);
		}
		if (!__LIB_7__::func_923(1048576))
		{
			iVar0 = 16;
			__LIB_3__::func_710(Global_1392194[Local_1529.f_136 /*10*/].f_6, iVar0);
		}
	}
	else
	{
		__LIB_7__::func_925(Global_1392194[Local_1529.f_136 /*10*/].f_6);
	}
	__LIB_8__::func_255(Local_1529.f_136, Local_1529.f_137, &Local_526, &Local_1529, 1, 1);
	__LIB_8__::func_167(64, __LIB_8__::func_296());
	__LIB_8__::func_167(16384, __LIB_8__::func_274());
	__LIB_8__::func_167(32768, __LIB_8__::func_204());
	__LIB_8__::func_167(65536, __LIB_8__::func_205());
	__LIB_8__::func_167(256, __LIB_8__::func_216());
	__LIB_8__::func_260();
	Local_526.f_13 = joaat("LOGGING_WORKERS");
	__LIB_18__::func_83();
	if (!__LIB_7__::func_924(&Local_1529, 32))
	{
		iLocal_75[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.323f, -207.0721f, 103.6361f, 0f, 0f, 18.49513f, 5.458226f, 7.343121f, 3.461949f, "Appleseed - volOffice");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[0], 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_75[0], 0, 0, 0, -1, -1, 2);
	}
	if (iLocal_98 != 1)
	{
	}
	else
	{
		iLocal_75[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1342.603f, -191.78f, 101.3216f, 0f, 0f, 26.31277f, 4.493421f, 15.76546f, 2.950686f, "Appleseed - volFlatbed");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[8], 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_75[8], 0, 0, 0, -1, -1, 2);
	}
	__LIB_8__::func_203(Local_1529.f_136);
	uScriptParam_0 = uScriptParam_0;
	Local_526.f_4 = { -1399.503f, -223.7296f, 99.81865f };
	Local_526.f_7 = { -1474.662f, -341.2676f, 80f };
	Local_526.f_10 = { -1326.326f, -116.0771f, 150f };
	if (__LIB_7__::func_923(16))
	{
		Local_357.f_3 = 1;
	}
	if (__LIB_7__::func_924(&Local_1529, 32))
	{
		POPULATION::_0x74C2B3DC0B294102(Global_1392194[Local_1529.f_136 /*10*/].f_5);
		POPULATION::_0xA1CFB35069D23C23(Global_1392194[Local_1529.f_136 /*10*/].f_5);
		__LIB_7__::func_926(512);
	}
	else if (iLocal_98 != 3)
	{
	}
	else
	{
		iLocal_75[18] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA LCMP - volOnMission");
		VOLUME::_0xBCE668AAF83608BE(iLocal_75[18], -1414.369f, -264.0309f, 134.2139f, 0f, 0f, 18.97237f, 103.6197f, 144.6739f, 41.18933f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_75[18], -1470.38f, -391.851f, 142.0586f, 0f, 0f, -62.46322f, 62.55141f, 51.09426f, 31.34803f);
	}
	__LIB_8__::func_261();
	func_37();
	if (iLocal_98 > 3)
	{
		__LIB_7__::func_926(512);
	}
	if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		__LIB_7__::func_926(512);
	}
	__LIB_8__::func_167(8192, __LIB_8__::func_297());
	__LIB_8__::func_251(&Local_1529);
	__LIB_4__::func_203(&Local_1529, 1);
	if (__LIB_7__::func_923(1048576) || __LIB_7__::func_924(&Local_1529, 32))
	{
		__LIB_8__::func_84(&Local_1529, 1);
	}
	if (__LIB_7__::func_923(262144) && !__LIB_7__::func_907(Local_1529.f_136, 16777216))
	{
		__LIB_8__::func_85(Local_1529.f_136, 16777216);
	}
	__LIB_8__::func_131(&Local_1529, 128);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1983 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1983, 9275, 0);
		__LIB_8__::func_298();
		if (!bLocal_1983)
		{
			switch (iLocal_1980)
			{
				case 0:
					if (!__LIB_7__::func_907(Local_1529.f_136, 524288) && Local_526.f_3 < (15 + ((2 + (Local_526 + Local_526.f_1)) + iLocal_14)))
					{
						__LIB_7__::func_927((15 + ((2 + (Local_526 + Local_526.f_1)) + iLocal_14)), &Local_526);
						__LIB_1__::func_148(&(vLocal_490[4 /*3*/]));
					}
					else if (func_49())
					{
						iLocal_1980 = 1;
					}
					break;
				case 1:
					__LIB_7__::func_928(16);
					if (!__LIB_7__::func_929(1) && __LIB_8__::func_299())
					{
						bVar1 = __LIB_7__::func_929(16);
						__LIB_8__::func_168(1, __LIB_8__::func_226(&Local_526, &Local_1529, &iLocal_1845, &iLocal_1868, &bVar1, &iLocal_191));
						__LIB_8__::func_168(16, bVar1);
						if (__LIB_7__::func_929(1))
						{
							iLocal_191 = 0;
						}
					}
					if (!__LIB_7__::func_929(131072))
					{
						if (__LIB_7__::func_923(256))
						{
							if (__LIB_0__::func_0())
							{
								__LIB_7__::func_931(__LIB_7__::func_930(), 10f, 1);
								if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[21]))
								{
									iLocal_75[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1336.432f, -204.9798f, 102.1644f, 0f, 0f, 25.28583f, 5.635887f, 71.55907f, 4.877145f, "EA LCMP - volTrain");
									POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[21], 10208, 0, 0, -1, -1, 0);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1868[1]))
								{
									iLocal_1868[1] = VEHICLE::_CREATE_MISSION_TRAIN(-1901305252, __LIB_7__::func_930(), false, false, true, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1868[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1868[1], false, false))
								{
									VEHICLE::SET_TRAIN_SPEED(iLocal_1868[1], 0f);
									VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_1868[1], 0f);
									VEHICLE::_0x3660BCAB3A6BB734(iLocal_1868[1]);
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1868[1], false);
									VEHICLE::_0xA72B1BF3857B94D7(iLocal_1868[1], 1);
									__LIB_7__::func_932(131072);
								}
							}
						}
						else
						{
							__LIB_7__::func_932(131072);
						}
					}
					if (!__LIB_7__::func_929(2) && __LIB_8__::func_299())
					{
						if (!__LIB_7__::func_924(&Local_1529, 32))
						{
							bVar2 = __LIB_7__::func_929(16);
							__LIB_8__::func_168(2, func_60(&bVar2, &iLocal_191, 0, __LIB_0__::func_55((iLocal_98 == 3 && !__LIB_7__::func_923(262144)), 0, -1)));
							__LIB_8__::func_168(16, bVar2);
							if (__LIB_7__::func_929(2))
							{
								iLocal_191 = 0;
							}
						}
						else
						{
							__LIB_7__::func_932(2);
						}
					}
					if (!__LIB_7__::func_929(4) && !__LIB_7__::func_929(16))
					{
						if (!__LIB_7__::func_924(&Local_1529, 32))
						{
							__LIB_2__::func_935(Local_1529.f_138, 0, 0, 0, 0, 0);
							__LIB_7__::func_932(16);
							__LIB_8__::func_168(4, __LIB_8__::func_123(Local_1529.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1529.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1529.f_138), 146, true);
							}
						}
						else
						{
							__LIB_7__::func_932(4);
						}
					}
					if (!__LIB_7__::func_929(8))
					{
						if (!__LIB_7__::func_924(&Local_1529, 32) && !__LIB_7__::func_924(&Local_1529, 2))
						{
							if (__LIB_8__::func_128(&Local_526))
							{
								if (!__LIB_7__::func_924(&Local_1529, 32) && __LIB_7__::func_923(64))
								{
									__LIB_0__::func_928(&(Local_1529.f_35), iLocal_1845[0], "LOGGING_VICTIM", 0);
									iVar3 = 0 + 810;
									iVar4 = __LIB_2__::func_963(iVar3);
									__LIB_0__::func_928(&(Local_1529.f_35), iVar4, "LOGGING_WORKER", 0);
								}
								__LIB_7__::func_932(8);
							}
						}
						else
						{
							__LIB_7__::func_932(8);
						}
					}
					if (!__LIB_7__::func_929(524288) && __LIB_8__::func_86())
					{
						if (__LIB_7__::func_923(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_1845[5]))
						{
							__LIB_8__::func_323(&(uLocal_72[1]), &(iLocal_1845[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, 0, 0, 0);
						}
						if (__LIB_7__::func_923(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_1845[4]))
						{
							__LIB_8__::func_323(&(uLocal_72[0]), &(iLocal_1845[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, 0, iLocal_201, 0);
							if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
							{
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 1, true);
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 2, true);
								__LIB_7__::func_934(128);
							}
						}
						__LIB_7__::func_932(524288);
					}
					__LIB_8__::func_170(Local_1529.f_136, 1);
					if (((((((((!CAM::IS_SCREEN_FADED_OUT() && __LIB_7__::func_929(1)) && __LIB_7__::func_929(2)) && __LIB_7__::func_929(4)) && __LIB_7__::func_929(8)) && __LIB_7__::func_929(131072)) && __LIB_7__::func_929(524288)) && func_71()) && __LIB_8__::func_171()) || __LIB_7__::func_924(&Local_1529, 32))
					{
						if (!__LIB_7__::func_924(&Local_1529, 32) && (__LIB_7__::func_923(128) || !__LIB_8__::func_275()))
						{
							__LIB_0__::func_928(&(Local_1529.f_35), Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&(Local_1529.f_35), __LIB_2__::func_963(Local_1529.f_138), "EA_LCMP_Foreman", 0);
							func_74();
						}
						else
						{
							__LIB_0__::func_928(&(Local_1529.f_35), Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&(Local_1529.f_35), __LIB_2__::func_963(Local_1529.f_138), "EA_LCMP_Foreman", 0);
							__LIB_8__::func_124(Local_1529.f_138, 1);
							__LIB_2__::func_451(&(Local_208[0 /*21*/]), 0);
						}
						func_77();
						iLocal_1980 = 2;
					}
					break;
				case 2:
					if (__LIB_7__::func_924(&Local_1529, 128) && __LIB_7__::func_935(Local_1529.f_136, __LIB_7__::func_923(128)))
					{
						__LIB_8__::func_310(0);
						__LIB_8__::func_132(&Local_1529, 128);
					}
					__LIB_8__::func_252();
					if (!__LIB_7__::func_923(16777216))
					{
						__LIB_8__::func_167(16777216, __LIB_18__::func_72(&Local_1529, &Local_526));
					}
					if (!__LIB_7__::func_924(&Local_1529, 32))
					{
						if (__LIB_8__::func_234(iLocal_203, &Local_1529, 5))
						{
							func_83();
							__LIB_8__::func_276();
						}
						if (!__LIB_7__::func_924(&Local_1529, 2))
						{
							__LIB_8__::func_116(&uLocal_1686, &uLocal_1748, &Local_1529, 808, 833, &iLocal_190, &iLocal_203, 10, -1082130432 /* Float: -1f */, 1);
							__LIB_7__::func_936(&uLocal_1686);
							__LIB_7__::func_936(&iLocal_1845);
							__LIB_7__::func_936(&iLocal_1871);
							__LIB_0__::func_11();
							__LIB_8__::func_243();
							if ((!__LIB_7__::func_924(&Local_1529, 32) && !__LIB_7__::func_923(32)) && __LIB_7__::func_923(128))
							{
								__LIB_8__::func_117(&Local_1529, 0, __LIB_8__::func_133(), __LIB_8__::func_134());
								__LIB_8__::func_87();
							}
							if (func_93())
							{
								if (__LIB_7__::func_933(8192))
								{
									TASK::SET_ANIM_RATE(Local_526.f_690[12 /*12*/].f_8, 0f, 0, false);
									TASK::SET_ANIM_RATE(Local_526.f_690[13 /*12*/].f_8, 0f, 0, false);
								}
								__LIB_8__::func_206(&Local_357, &Local_1529, 0);
								__LIB_8__::func_129(&Local_1529);
								__LIB_8__::func_83(Local_1529.f_136, 16384);
								__LIB_0__::func_325(&iLocal_1779);
								__LIB_8__::func_258();
								if (__LIB_0__::func_6(iLocal_154) && __LIB_1__::func_44(iLocal_154))
								{
									__LIB_1__::func_559(iLocal_154, 0, 2);
								}
								__LIB_0__::func_267(1);
								LAW::_0x710448D44A64C213(1);
								iVar5 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
								MAP::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								if (__LIB_5__::func_656(1))
								{
									__LIB_8__::func_131(&Local_1529, 4096);
									__LIB_8__::func_131(&Local_1529, 16384);
								}
								else
								{
									__LIB_8__::func_82(Local_1529.f_136, 1024);
								}
								__LIB_18__::func_84();
								func_104();
								__LIB_7__::func_937();
								__LIB_8__::func_328(1);
								iVar6 = 0;
								while (iVar6 < 2)
								{
									__LIB_2__::func_480(&(Local_251[iVar6 /*52*/]), 1, 1, 1, 0);
									iVar6++;
								}
								__LIB_2__::func_461(0);
								__LIB_0__::func_172(iLocal_75[1]);
								__LIB_7__::func_938();
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_1871[0]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_1871[0], false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[23 /*12*/].f_8))
								{
									ENTITY::DETACH_ENTITY(Local_526.f_690[23 /*12*/].f_8, false, true);
								}
								__LIB_3__::func_334(&uLocal_1855);
								__LIB_3__::func_334(&uLocal_1882);
								__LIB_3__::func_334(&uLocal_1865);
								__LIB_8__::func_244(Local_1529.f_136, 3);
								__LIB_8__::func_207(&Local_1529);
								iLocal_1982 = 4;
								iVar7 = __LIB_0__::func_55(!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1529.f_138)), 1, 0);
								if (!__LIB_7__::func_924(&Local_1529, 4096))
								{
									__LIB_2__::func_478(__LIB_2__::func_963(Local_1529.f_138), Global_35, "LOG_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								if (__LIB_7__::func_929(32768))
								{
									iVar8 = joaat("CRIME_THEFT_VEHICLE");
								}
								else if (__LIB_7__::func_939(268435456))
								{
									iVar8 = joaat("CRIME_THEFT_HORSE");
								}
								else
								{
									iVar8 = __LIB_7__::func_940(&Local_1529, Local_1529.f_28);
								}
								__LIB_8__::func_131(&Local_1529, 2);
								func_117();
								if (!__LIB_7__::func_923(1024))
								{
									__LIB_8__::func_277(&Local_1529, __LIB_2__::func_963(Local_1529.f_138), &(uLocal_1865[0]), 0, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0);
								}
								if (!(__LIB_7__::func_923(32) && __LIB_7__::func_923(1024)))
								{
									iLocal_1982 = __LIB_0__::func_55(iLocal_1982 > iVar7, (iLocal_1982 - iVar7), 0);
									iVar7 = __LIB_8__::func_311(&Local_1529, &iLocal_1845, &uLocal_1855, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar5, iLocal_1982, 0, 0, 0, iVar8, 1051260355 /* Float: 0.33f */);
									iLocal_1982 = __LIB_0__::func_55(iLocal_1982 > iVar7, (iLocal_1982 - iVar7), 0);
								}
								iLocal_1982 = __LIB_0__::func_55(iLocal_1982 > iVar7, (iLocal_1982 - iVar7), 0);
								__LIB_7__::func_927(iLocal_190, &Local_526);
								iVar7 = __LIB_8__::func_312(&Local_1529, &uLocal_1686, &uLocal_1717, iLocal_1982, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iLocal_190, iVar5, 0, 0, 0, iVar8, 1051260355 /* Float: 0.33f */);
								iLocal_1982 = __LIB_0__::func_55(iLocal_1982 > iVar7, (iLocal_1982 - iVar7), 0);
								__LIB_8__::func_260();
								__LIB_8__::func_131(&Local_1529, 128);
							}
						}
						else
						{
							__LIB_8__::func_327(&uLocal_1686, &Local_1529);
							__LIB_8__::func_278();
							if (__LIB_7__::func_923(1024))
							{
								if (__LIB_18__::func_78(&Local_1529, __LIB_2__::func_963(Local_1529.f_138), &(uLocal_1865[0]), 0))
								{
									if (__LIB_7__::func_923(32))
									{
										if (__LIB_8__::func_279())
										{
											iVar10 = 0;
											iVar9 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
											iLocal_1982 = __LIB_0__::func_55(iLocal_1982 > iVar10, (iLocal_1982 - iVar10), 0);
											iVar10 = (iVar10 + __LIB_8__::func_311(&Local_1529, &iLocal_1845, &uLocal_1855, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar9, iLocal_1982, 0, 0, 0, __LIB_7__::func_940(&Local_1529, Local_1529.f_28), 1051260355 /* Float: 0.33f */));
											iLocal_1982 = __LIB_0__::func_55(iLocal_1982 > iVar10, (iLocal_1982 - iVar10), 0);
											__LIB_7__::func_941(1024);
										}
									}
									else
									{
										__LIB_7__::func_941(1024);
									}
								}
							}
							if (__LIB_7__::func_923(32))
							{
								if (__LIB_8__::func_280())
								{
									if (!__LIB_7__::func_923(1024))
									{
										__LIB_7__::func_941(32);
									}
								}
							}
							if (__LIB_7__::func_923(64))
							{
								if (__LIB_7__::func_933(131072))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[0]))
									{
										if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_1845[0] || PED::_IS_PED_LASSOED(iLocal_1845[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_1845[0], 3))
										{
											__LIB_1__::func_864(iLocal_1845[0], 0, 0);
										}
									}
								}
								else if (!__LIB_0__::func_163(iLocal_1845[0], 518218985) && !TASK::GET_IS_TASK_ACTIVE(iLocal_1845[0], 3))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_1845[0], false);
									PED::_0x89F5E7ADECCCB49C(iLocal_1845[0], "INJURED_LEFT_LEG");
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1845[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
								}
							}
							if (!__LIB_7__::func_924(&Local_1529, 4) && __LIB_8__::func_236(&Local_1529, &iLocal_1845, &iLocal_1871, &(Local_1529.f_139), 5, __LIB_2__::func_963(Local_1529.f_138)))
							{
								__LIB_8__::func_131(&Local_1529, 4);
							}
						}
						if (!__LIB_7__::func_924(&Local_1529, 2))
						{
							if (__LIB_7__::func_923(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_1845[5]))
							{
								__LIB_8__::func_323(&(uLocal_72[1]), &(iLocal_1845[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, __LIB_7__::func_923(4096), 0, 0);
								if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]))
								{
									PROPSET::_0xD80FAF919A2E56EA(uLocal_72[1], joaat("PG_VEH_LOGWAGON_1"));
									__LIB_7__::func_934(128);
								}
							}
							if (__LIB_7__::func_923(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_1845[4]))
							{
								__LIB_8__::func_323(&(uLocal_72[0]), &(iLocal_1845[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, __LIB_7__::func_923(4096), iLocal_201, 0);
								if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
								{
									__LIB_7__::func_934(128);
								}
							}
						}
					}
					if (!__LIB_7__::func_924(&Local_1529, 2))
					{
						if (!__LIB_7__::func_924(&Local_1529, 32))
						{
							__LIB_8__::func_217(&Local_357);
							if (__LIB_8__::func_88(&Local_357, 1))
							{
								func_133(&Local_1529, &Local_357, &(Local_208[1 /*21*/]), &(Local_251[1 /*52*/]));
							}
							else
							{
								__LIB_8__::func_89(&Local_357, 4);
							}
						}
						if (func_135())
						{
							bLocal_1983 = true;
						}
					}
					else if (!__LIB_7__::func_924(&Local_1529, 32))
					{
						func_136();
					}
					break;
			}
		}
		if (func_137())
		{
			bLocal_1983 = true;
		}
		BUILTIN::WAIT(Local_1529.f_30);
	}
}

int func_37()
{
	__LIB_7__::func_894(1024);
	__LIB_8__::func_135();
	if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		__LIB_7__::func_932(8388608);
		__LIB_8__::func_208();
	}
	if (__LIB_7__::func_924(&Local_1529, 32) && !(iLocal_98 == 4 && !__LIB_7__::func_923(262144)))
	{
		__LIB_7__::func_950(&Local_526);
		return 1;
	}
	else
	{
		func_83();
	}
	switch (iLocal_98)
	{
		case 1:
			Local_526 = 5;
			__LIB_8__::func_174(&Local_526);
			break;
		case 2:
			Local_526 = 5;
			__LIB_8__::func_237(&Local_526);
			iLocal_14 += 2;
			break;
		case 3:
			__LIB_0__::func_11();
			Local_526 = 5;
			__LIB_8__::func_300(&Local_526, __LIB_7__::func_908(Local_1529.f_136, 2048));
			break;
		case 4:
		case 5:
			break;
	}
	if (!__LIB_7__::func_924(&Local_1529, 32))
	{
		if (iLocal_98 < 4)
		{
			func_178();
			__LIB_19__::func_141();
			__LIB_8__::func_281();
		}
		if (__LIB_7__::func_923(16384))
		{
			Local_526.f_369[0 /*32*/].f_1 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
			Local_526.f_369[0 /*32*/] = 28;
			Local_526.f_369[0 /*32*/].f_6 = { -1403.857f, -226.9338f, 100.4594f };
			Local_526.f_369[0 /*32*/].f_9 = -83.35f;
		}
	}
	return 1;
}

void func_44()
{
	int iVar0;
	int iVar1;
	switch (iLocal_189)
	{
		case 0:
			__LIB_8__::func_262();
			if (__LIB_7__::func_923(128))
			{
				__LIB_0__::func_769();
			}
			if (__LIB_7__::func_924(&Local_1529, 16384))
			{
				if (!__LIB_7__::func_924(&Local_1529, 32768))
				{
					__LIB_8__::func_176(Local_1529.f_136);
				}
				else
				{
					__LIB_8__::func_82(Local_1529.f_136, 1024);
				}
			}
			if (__LIB_7__::func_907(Local_1529.f_136, 128))
			{
				iVar0 = __LIB_2__::func_963(Local_1529.f_138);
				__LIB_7__::func_951(&iVar0);
			}
			__LIB_8__::func_206(&Local_357, &Local_1529, 0);
			__LIB_8__::func_93(Local_1529.f_136, 1073741824 /* Float: 2f */);
			__LIB_8__::func_93(Local_1529.f_136, 536870912);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			break;
		case 1:
			if (__LIB_0__::func_6(iLocal_154) && !((__LIB_1__::func_241(iLocal_154) || __LIB_1__::func_25(iLocal_154, 1)) || __LIB_8__::func_125(iLocal_154)))
			{
				__LIB_1__::func_559(iLocal_154, 0, 2);
			}
			if ((__LIB_7__::func_908(Local_1529.f_136, 16384) && ENTITY::DOES_ENTITY_EXIST(iLocal_1868[0])) && (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1868[0], false)))
			{
				__LIB_8__::func_83(Local_1529.f_136, 16384);
			}
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
			}
			__LIB_7__::func_896(1024);
			__LIB_8__::func_209();
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 5, false);
				PED::SET_PED_RESET_FLAG(Global_35, 129, false);
			}
			__LIB_8__::func_301();
			func_211(1);
			__LIB_8__::func_282(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[5]) && !__LIB_1__::func_205(iLocal_1845[5], Global_1392194[Local_1529.f_136 /*10*/].f_5, 1, 0))
			{
				uLocal_1945[0] = iLocal_1845[5];
			}
			VEHICLE::_0x8379E05871AD24E0();
			if (__LIB_7__::func_908(Local_1529.f_136, 256) && !__LIB_7__::func_908(Local_1529.f_136, 32))
			{
				__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
			}
			if (__LIB_7__::func_923(32))
			{
				__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
			}
			break;
		case 3:
			__LIB_7__::func_937();
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[Local_1529.f_136 /*10*/].f_5))
			{
				iVar1 = 0;
				while (iVar1 < iLocal_1845)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[iVar1]))
					{
						if (__LIB_1__::func_205(iLocal_1845[iVar1], Global_1392194[Local_1529.f_136 /*10*/].f_5, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1845[iVar1]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1845[iVar1], true, false);
							}
							PED::DELETE_PED(&(iLocal_1845[iVar1]));
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1845[iVar1], false);
							PED::SET_PED_KEEP_TASK(iLocal_1845[iVar1], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1845[iVar1]));
						}
					}
					iVar1++;
				}
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
			{
				PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_75[4]);
			}
			iVar1 = 0;
			while (iVar1 < 22)
			{
				__LIB_0__::func_172(iLocal_75[iVar1]);
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 11)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_412[iVar1 /*7*/]))
				{
					__LIB_7__::func_952(&(Local_412[iVar1 /*7*/]));
				}
				iVar1++;
			}
			break;
		case 4:
			__LIB_8__::func_258();
			__LIB_8__::func_328(1);
			__LIB_7__::func_919();
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[Local_1529.f_136 /*10*/].f_5))
			{
				if (!__LIB_7__::func_924(&Local_1529, 4) && !__LIB_7__::func_924(&Local_1529, 32))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[0]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[0], Global_1392194[Local_1529.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[0]));
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[1]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[1], Global_1392194[Local_1529.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[1]));
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1868[iVar1]))
					{
						if (iVar1 == 1)
						{
							VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_1868[iVar1]));
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_1868[iVar1], Global_1392194[Local_1529.f_136 /*10*/].f_5, true, 0))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_1868[iVar1]));
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			__LIB_8__::func_82(Local_1529.f_136, 1073741824 /* Float: 2f */);
			__LIB_8__::func_319(Local_1529.f_136, &Local_526, &Local_1529);
			__LIB_8__::func_229(&Local_526);
			HUD::_TEXT_DATABASE_DELETE(__LIB_7__::func_953());
			HUD::_TEXT_DATABASE_DELETE(__LIB_7__::func_954());
			break;
		default:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	iLocal_189++;
}

bool func_49()
{
	if (__LIB_1__::func_313(&(vLocal_490[4 /*3*/]), 30f))
	{
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	switch (iLocal_1981)
	{
		case 0:
			__LIB_3__::func_284(&(Local_526.f_15));
			__LIB_3__::func_284(&(Local_526.f_369));
			__LIB_3__::func_187(&(Local_15[0 /*28*/].f_11));
			__LIB_3__::func_187(&(Local_15[1 /*28*/].f_11));
			if (__LIB_7__::func_923(128) && iLocal_98 == 3)
			{
				__LIB_3__::func_284(&(Local_526.f_369));
			}
			__LIB_19__::func_142();
			func_226();
			__LIB_3__::func_314(&(Local_526.f_690));
			func_228();
			__LIB_3__::func_284(&(Local_526.f_304));
			func_229();
			HUD::_TEXT_DATABASE_REQUEST(__LIB_7__::func_953());
			HUD::_TEXT_DATABASE_REQUEST(__LIB_7__::func_954());
			if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
			{
				__LIB_8__::func_177();
			}
			iLocal_1981 = 1;
			break;
		case 1:
			if (!__LIB_8__::func_299())
			{
			}
			if (!__LIB_8__::func_86())
			{
			}
			if (!__LIB_0__::func_0())
			{
			}
			if (!__LIB_8__::func_283())
			{
			}
			if (!func_71())
			{
			}
			if (!__LIB_8__::func_171())
			{
			}
			if (!__LIB_8__::func_178())
			{
				__LIB_8__::func_177();
				return false;
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Appleseed_01"))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_60(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	if (*bParam0)
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Local_526.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (PED::_0x5C16855277819BBF() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if (Local_526.f_369[*iParam1 /*32*/].f_1 != 0)
			{
				if (iLocal_98 != 3 || __LIB_7__::func_923(262144))
				{
					iLocal_1871[*iParam1] = __LIB_3__::func_403(Local_526.f_369[*iParam1 /*32*/].f_1, &(Local_526.f_369[*iParam1 /*32*/]), Local_526.f_369[*iParam1 /*32*/].f_6, Local_526.f_369[*iParam1 /*32*/].f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					DECORATOR::DECOR_SET_BOOL(iLocal_1871[*iParam1], "bNoticePlayer", false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1871[*iParam1], true);
				}
			}
			*iParam1++;
			*bParam0 = 1;
			return false;
		}
		return true;
	}
	return false;
}

bool func_71()
{
	if (!__LIB_3__::func_315(&uLocal_1780))
	{
		return false;
	}
	if (!__LIB_8__::func_284())
	{
		return false;
	}
	return true;
}

void func_74()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_963(Local_1529.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
		if (!__LIB_7__::func_955(iVar0, 1))
		{
			__LIB_2__::func_133(iVar0, "EA_LCMP_Foreman", 0);
		}
		PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!__LIB_7__::func_907(Local_1529.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-1400.66f, -213.44f, 101.9f, __LIB_7__::func_956(), 1.5f, 0, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar1, __LIB_7__::func_957(), -1, false, true, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, -1400.66f, -213.44f, 101.9f, 1.5f, 0, false, false, false, false);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			break;
		case 2:
			if (!__LIB_7__::func_907(Local_1529.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			break;
		case 3:
			if (!__LIB_7__::func_907(Local_1529.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (__LIB_7__::func_908(Local_1529.f_136, 256) || __LIB_7__::func_908(Local_1529.f_136, 262144))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, __LIB_7__::func_958(), 1.5f, 0, false, false, false, false);
					}
					else
					{
						func_261(iVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, 1073741824 /* Float: 2f */);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1529.f_138)))
			{
			}
			break;
		case 4:
		case 5:
			break;
	}
}

int func_77()
{
	int iVar0;
	__LIB_0__::func_11();
	if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1529.f_136, 128))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[0]))
		{
			__LIB_2__::func_231(iLocal_1845[0], __LIB_3__::func_672(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_1845[0], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_1845[0], 146, false);
			__LIB_2__::func_133(iLocal_1845[0], __LIB_7__::func_959(Local_1529.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_1845[0], "HAS_VOICE", true);
			__LIB_2__::func_56(iLocal_1845[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[1]))
		{
			__LIB_2__::func_231(iLocal_1845[1], __LIB_3__::func_672(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_1845[1], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_1845[1], 146, false);
			__LIB_2__::func_133(iLocal_1845[1], __LIB_7__::func_959(Local_1529.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_1845[1], "HAS_VOICE", true);
			__LIB_2__::func_56(iLocal_1845[1], 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1845[2]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1845[2], 1);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_1845[2], true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1845[3]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1845[3], 1);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_1845[3], true);
		}
	}
	else
	{
		if (__LIB_7__::func_923(64))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1388.626f, -234.6199f, 98.7432f, 1f, -1, 0.25f, 0, 9.6661f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1398.8f, -214.8f, 101.4f, 1f, -1, 0.25f, 0, 15.6f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1400.4f, -209.6f, 102f, 1f, -1, 0.25f, 0, 148.8f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -1400.871f, -210.4877f, 101.0936f, 2f, -1, false, false, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1845[0], iLocal_193);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
				PED::SET_PED_CONFIG_FLAG(iLocal_1845[0], 146, false);
				__LIB_2__::func_56(iLocal_1845[0], 1, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[0]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_1845[0], __LIB_8__::func_285(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_1845[0], 146, false);
			__LIB_2__::func_56(iLocal_1845[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[1]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_1845[1], __LIB_8__::func_285(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_1845[1], 146, false);
			__LIB_2__::func_56(iLocal_1845[1], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[2]))
		{
			if (!__LIB_7__::func_923(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_1845[2], __LIB_8__::func_285(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_1845[2], 146, false);
				__LIB_2__::func_56(iLocal_1845[2], 1, 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[3]))
		{
			if (!__LIB_7__::func_923(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_1845[3], __LIB_8__::func_285(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_1845[3], 146, false);
				__LIB_2__::func_56(iLocal_1845[3], 1, 1);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[4]))
	{
		__LIB_2__::func_56(iLocal_1845[4], 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[5]))
	{
		__LIB_2__::func_56(iLocal_1845[5], 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < Local_526)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1845[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_1845[iVar0], 7, 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_526.f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1871[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1871[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_1871[iVar0], 7, 0, 1);
		}
		iVar0++;
	}
	__LIB_1__::func_148(&(vLocal_490[0 /*3*/]));
	return 1;
}

void func_83()
{
	bool bVar0;
	char* sVar1[4];
	int iVar6[4];
	int iVar11;
	Local_1910.f_24 = 0;
	Local_1910.f_23 = 0;
	Local_1910.f_17 = 0;
	__LIB_1__::func_336(&(Local_1910.f_34), 1);
	if (!__LIB_7__::func_923(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((__LIB_7__::func_923(128) && !__LIB_7__::func_923(2)) && !__LIB_7__::func_907(Local_1529.f_136, 4))
				{
					if (__LIB_1__::func_149(1) > 0)
					{
						sVar1[0] = "LOG_WRK01A_P";
					}
					else
					{
						sVar1[0] = "LOG_WRK01A";
					}
				}
				else
				{
					sVar1[0] = "LOG_WRK01A_M";
					iVar6[0] = 1;
				}
				sVar1[1] = "LOG_WRK02A";
				if (__LIB_7__::func_924(&Local_1529, 256))
				{
					sVar1[2] = "LOG_WRK03A_R";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A_R";
					iVar6[3] = 1;
				}
				else
				{
					sVar1[2] = "LOG_WRK03A";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A";
					iVar6[3] = 1;
				}
				if (__LIB_7__::func_923(128) && !__LIB_7__::func_923(2))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (__LIB_7__::func_907(Local_1529.f_136, 64))
				{
					sVar1[0] = "LOG_WRK01BA";
					iVar6[0] = 1;
					sVar1[1] = "LOG_WRK02BA";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03BA";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04BA";
					iVar6[3] = 1;
				}
				else
				{
					if (__LIB_7__::func_923(128) && !__LIB_7__::func_923(2))
					{
						if (__LIB_1__::func_149(1) > 0)
						{
							sVar1[0] = "LOG_WRK01B_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01B";
						}
					}
					else
					{
						sVar1[0] = "LOG_WRK01B_M";
						iVar6[0] = 1;
					}
					if (__LIB_7__::func_924(&Local_1529, 256))
					{
						sVar1[1] = "LOG_WRK02B_R";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B_R";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B_R";
						iVar6[3] = 1;
					}
					else
					{
						sVar1[1] = "LOG_WRK02B";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B";
						iVar6[3] = 1;
					}
					if (__LIB_7__::func_923(128) && !__LIB_7__::func_923(2))
					{
						bVar0 = true;
					}
				}
				break;
			case 3:
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					if (__LIB_7__::func_908(Local_1529.f_136, 8))
					{
						if (__LIB_1__::func_149(1) > 0)
						{
							sVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01CH";
						}
						if (__LIB_7__::func_924(&Local_1529, 256))
						{
							sVar1[1] = "LOG_WRK02CH_R";
						}
						else
						{
							sVar1[1] = "LOG_WRK02CH";
						}
						sVar1[2] = "LOG_WRK03CH";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04CH";
						iVar6[3] = 1;
					}
					else if (__LIB_7__::func_908(Local_1529.f_136, 32))
					{
						if (__LIB_7__::func_933(128))
						{
							iVar11 = __LIB_8__::func_210();
							if (PED::IS_PED_HUMAN(iVar11))
							{
								sVar1[0] = "LOG_WRK01CC";
								sVar1[1] = "LOG_WRK02CC";
								sVar1[2] = "LOG_WRK03CC";
								sVar1[3] = "LOG_WRK04CC";
							}
							else
							{
								sVar1[0] = "LOG_WRK01CW";
								sVar1[1] = "LOG_WRK02CW";
								sVar1[2] = "LOG_WRK03CW";
								sVar1[3] = "LOG_WRK04CW";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01CB";
							sVar1[1] = "LOG_WRK02CB";
							if (__LIB_1__::func_149(1) > 0)
							{
								sVar1[2] = "LOG_WRK03CB_P";
							}
							else
							{
								sVar1[2] = "LOG_WRK03CB";
							}
							sVar1[3] = "LOG_WRK04CB";
						}
					}
					else if (__LIB_7__::func_908(Local_1529.f_136, 256))
					{
						sVar1[0] = "LOG_WRK01CA";
						sVar1[1] = "LOG_WRK02CA";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03CA";
						iVar6[2] = 1;
						if (__LIB_1__::func_149(1) > 0)
						{
							sVar1[3] = "LOG_WRK04CA_P";
						}
						else
						{
							sVar1[3] = "LOG_WRK04CA";
						}
					}
					else
					{
						if (__LIB_7__::func_923(128) && !__LIB_7__::func_923(2))
						{
							if (__LIB_1__::func_149(1) > 0)
							{
								sVar1[0] = "LOG_WRK01C_P";
							}
							else
							{
								sVar1[0] = "LOG_WRK01C";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01C_M";
							iVar6[0] = 1;
						}
						if (__LIB_7__::func_924(&Local_1529, 256))
						{
							sVar1[1] = "LOG_WRK02C_R";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C_R";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C_R";
							iVar6[3] = 1;
						}
						else
						{
							sVar1[1] = "LOG_WRK02C";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C";
							iVar6[3] = 1;
						}
						if (__LIB_7__::func_923(128) && !__LIB_7__::func_923(2))
						{
							bVar0 = true;
						}
					}
				}
				else if (__LIB_7__::func_908(Local_1529.f_136, 8))
				{
					sVar1[0] = "LOG_WRK01CH";
					sVar1[1] = "LOG_WRK02CH";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03CH";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04CH";
					iVar6[3] = 1;
				}
				else if (__LIB_1__::func_149(1) > 0)
				{
					sVar1[0] = "LOG_WRK01CN_P";
					sVar1[1] = "LOG_WRK02CN_P";
					sVar1[2] = "LOG_WRK03CN_P";
					sVar1[3] = "LOG_WRK04CN_P";
				}
				else
				{
					sVar1[0] = "LOG_WRK01CN";
					sVar1[1] = "LOG_WRK02CN";
					sVar1[2] = "LOG_WRK03CN";
					sVar1[3] = "LOG_WRK04CN";
				}
				break;
		}
	}
	else if (__LIB_1__::func_149(1) > 0)
	{
		sVar1[0] = "EA_WRKMD01_P";
		sVar1[1] = "EA_WRKMD02_P";
		sVar1[2] = "EA_WRKMD03_P";
		sVar1[3] = "EA_WRKMD04_P";
	}
	else
	{
		sVar1[0] = "EA_WRKMD01";
		sVar1[1] = "EA_WRKMD02";
		sVar1[2] = "EA_WRKMD03";
		sVar1[3] = "EA_WRKMD04";
	}
	Local_1910.f_33 = 15f;
	__LIB_8__::func_95(&sVar1, &iVar6, &Local_1910, bVar0);
}

int func_93()
{
	int iVar0;
	int iVar1;
	if (__LIB_7__::func_929(16384))
	{
		return 0;
	}
	iVar0 = iLocal_206;
	if (((__LIB_8__::func_88(&Local_357, 2) || func_283(&Local_1529, &(Local_1529.f_28))) || func_284()) || __LIB_8__::func_259(__LIB_2__::func_963(Local_1529.f_138), 0, &Local_1529, &(Local_1529.f_28), 0, 0))
	{
		if (__LIB_8__::func_88(&Local_357, 2))
		{
		}
		else if (Local_1529.f_28 == 65536)
		{
			__LIB_2__::func_571(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		else if (Local_1529.f_28 == 32)
		{
			return __LIB_18__::func_85();
		}
		else if (Local_1529.f_28 == 8192 && __LIB_8__::func_230())
		{
			__LIB_2__::func_571(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		if (__LIB_7__::func_960(&(Local_1529.f_28)) && !__LIB_7__::func_933(67108864))
		{
			if (!__LIB_8__::func_88(&Local_357, 1))
			{
				Local_357 = __LIB_2__::func_963(Local_1529.f_138);
				__LIB_18__::func_81(&Local_357, &Local_1529, Local_1529.f_28, 54035, 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_182(&Local_357, 0)))
				{
					StringCopy(&(Local_357.f_20[0 /*4*/]), __LIB_8__::func_182(&Local_357, 0), 32);
					StringCopy(&(Local_357.f_20[1 /*4*/]), __LIB_8__::func_182(&Local_357, 1), 32);
					__LIB_7__::func_961(&Local_357, 32);
				}
			}
			else if (Local_357.f_13 > 2)
			{
				__LIB_7__::func_961(&Local_357, 512);
			}
			__LIB_2__::func_571(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		return 1;
	}
	else if ((__LIB_8__::func_324(&uLocal_1686, &Local_1529, &(Local_1529.f_28), &iLocal_206, 0, (iLocal_190 - 1), 4) || __LIB_8__::func_324(&iLocal_1845, &Local_1529, &(Local_1529.f_28), &uLocal_204, 0, (Local_526 - 1), 1)) || __LIB_8__::func_324(&iLocal_1871, &Local_1529, &(Local_1529.f_28), &uLocal_205, 0, __LIB_0__::func_55(__LIB_7__::func_923(16384), Local_526.f_1 + 1, (Local_526.f_1 - 1)), 1))
	{
		if (__LIB_7__::func_933(131072))
		{
			if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_1845[0] || PED::_IS_PED_LASSOED(iLocal_1845[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_1845[0], 3))
			{
				__LIB_1__::func_864(iLocal_1845[0], 0, 0);
			}
		}
		if (__LIB_7__::func_960(&(Local_1529.f_28)))
		{
			if (Local_1529.f_28 == 8192 && __LIB_8__::func_230())
			{
				return 0;
			}
			if (!__LIB_8__::func_88(&Local_357, 1) && !__LIB_7__::func_923(32))
			{
				if (Local_1529.f_28 == 8 && __LIB_8__::func_286())
				{
					return 1;
				}
				if (__LIB_7__::func_923(64) && Local_1529.f_10 == iLocal_1845[0])
				{
					if (Local_1529.f_28 != 65536)
					{
						__LIB_18__::func_81(&Local_357, &Local_1529, Local_1529.f_28, 54035, 0, 0);
						__LIB_7__::func_961(&Local_357, 64);
						StringCopy(&(Local_357.f_20[0 /*4*/]), "LCMPF_IG_TFAIM", 32);
						__LIB_7__::func_961(&Local_357, 32);
					}
				}
				else
				{
					__LIB_18__::func_81(&Local_357, &Local_1529, Local_1529.f_28, 54035, 0, 0);
				}
			}
			__LIB_2__::func_571(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		else if (Local_1529.f_28 == 32)
		{
			return __LIB_18__::func_85();
		}
		return 1;
	}
	else if (__LIB_18__::func_82(&Local_1529, &Local_357, 54035))
	{
		if (!__LIB_8__::func_88(&Local_357, 1))
		{
			__LIB_18__::func_81(&Local_357, &Local_1529, 1024, 54035, 0, 0);
			if (Local_357 == __LIB_2__::func_963(Local_1529.f_138) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_182(&Local_357, 0)))
			{
				StringCopy(&(Local_357.f_20[0 /*4*/]), __LIB_8__::func_182(&Local_357, 0), 32);
				StringCopy(&(Local_357.f_20[1 /*4*/]), __LIB_8__::func_182(&Local_357, 1), 32);
				__LIB_7__::func_961(&Local_357, 32);
			}
			__LIB_2__::func_571(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		else
		{
			__LIB_7__::func_961(&Local_357, 512);
		}
	}
	else if (func_296())
	{
		Local_1529.f_28 = 2;
		return 1;
	}
	iVar1 = __LIB_0__::func_259(iVar0 + 4, (iLocal_190 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (uLocal_1748[iVar0] < Local_1529.f_19 && __LIB_7__::func_962(uLocal_1686[iVar0], &Local_1529, 0, uLocal_1748[iVar0]))
		{
			__LIB_1__::func_148(&(vLocal_490[6 /*3*/]));
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (__LIB_1__::func_313(&(vLocal_490[6 /*3*/]), 10f))
	{
		__LIB_7__::func_898(&Local_1529, &(Local_1529.f_28));
	}
	return 0;
}

void func_104()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1871[0]))
	{
		__LIB_8__::func_287(&(iLocal_1871[0]));
		PED::SET_PED_CONFIG_FLAG(iLocal_1871[0], 136, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1871[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
}

void func_117()
{
	if (__LIB_7__::func_923(64))
	{
		func_337();
	}
	__LIB_18__::func_86(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && __LIB_7__::func_923(262144)))
	{
		__LIB_7__::func_908(1, 2);
		__LIB_8__::func_302();
	}
	if (iLocal_98 == 3)
	{
		__LIB_8__::func_303();
	}
}

void func_133(var uParam0, int* iParam1, int* iParam2, var uParam3)
{
	int iVar0;
	char* sVar1;
	if (ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		__LIB_8__::func_206(iParam1, uParam0, 0);
		return;
	}
	__LIB_8__::func_96(iParam1);
	if (__LIB_8__::func_88(iParam1, 4))
	{
		if (iParam1->f_13 < 7)
		{
			__LIB_7__::func_974(iParam1, 7);
		}
		__LIB_8__::func_89(iParam1, 4);
	}
	if (__LIB_8__::func_88(iParam1, 256))
	{
		func_370(iParam1, iParam2, uParam3, 0);
	}
	if (__LIB_8__::func_88(iParam1, 512) && iParam1->f_13 > 2)
	{
		if (iParam1->f_2 > 2)
		{
			iParam1->f_2 = 0;
			__LIB_1__::func_148(&(iParam1->f_6));
			__LIB_7__::func_974(iParam1, 2);
		}
		iParam1->f_2++;
		__LIB_8__::func_89(iParam1, 512);
	}
	switch (iParam1->f_13)
	{
		case 0:
			__LIB_1__::func_148(&(iParam1->f_6));
			if (*iParam1 == 0)
			{
				__LIB_7__::func_974(iParam1, 9);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				__LIB_7__::func_974(iParam1, 9);
				return;
			}
			iParam1->f_5 = __LIB_8__::func_246(*iParam1, 0);
			if (iParam1->f_5 != -1)
			{
				if (!__LIB_2__::func_763(iParam1->f_5, 0))
				{
					__LIB_8__::func_218(iParam1->f_5);
				}
			}
			if (iParam1->f_5 == -1 && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, false);
			}
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(*iParam1, 250);
			AUDIO::STOP_PED_SPEAKING(*iParam1, true);
			PED::_0xA7DC9266ED6A4E51(*iParam1);
			EVENT::_0x6B9C5C38838FB6E6(*iParam1);
			if (PED::IS_PED_RAGDOLL(*iParam1))
			{
				__LIB_7__::func_961(iParam1, 8);
			}
			if (!__LIB_7__::func_955(*iParam1, 1))
			{
				sVar1 = __LIB_7__::func_975(uParam0->f_136, -1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
				{
					__LIB_2__::func_133(*iParam1, sVar1, 0);
				}
			}
			if (__LIB_8__::func_88(iParam1, 64))
			{
			}
			else if (iParam1->f_16 == 5)
			{
			}
			else if (__LIB_0__::func_71(*iParam1))
			{
				TASK::TASK_DISMOUNT_ANIMAL(*iParam1, 16777216, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(*iParam1, true))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(*iParam1, 0, 0);
			}
			__LIB_7__::func_974(iParam1, 1);
			break;
		case 1:
			if (__LIB_0__::func_29(iParam1->f_5))
			{
				if (!__LIB_2__::func_763(iParam1->f_5, 0))
				{
					__LIB_8__::func_218(iParam1->f_5);
				}
			}
			if (__LIB_0__::func_265(&(iParam1->f_6)) < 5f && ((__LIB_0__::func_163(*iParam1, 501393341) || __LIB_0__::func_163(*iParam1, -828834893)) || __LIB_0__::func_163(*iParam1, joaat("SCRIPT_TASK_LEAVE_VEHICLE"))))
			{
				return;
			}
			__LIB_1__::func_148(&(iParam1->f_6));
			if (iParam1->f_16 == 5)
			{
				__LIB_7__::func_974(iParam1, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				__LIB_7__::func_974(iParam1, 9);
				return;
			}
			if (!__LIB_8__::func_88(iParam1, 64))
			{
				PED::_0x62FDAD5E01D2DD47(*iParam1, Global_36, 3, 0);
				TASK::CLEAR_PED_TASKS(*iParam1, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (__LIB_0__::func_0(iParam1) && (__LIB_0__::func_232(*iParam1, Global_35, 1) > 9f || WEAPON::_0xCB690F680A3EA971(*iParam1, 4)))
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 5f, 2f, 2f, 0);
					TASK::TASK_STAND_STILL(0, 500);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
					TASK::TASK_STAND_STILL(0, 500);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			__LIB_2__::func_315(249295937, *iParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam1->f_20[0 /*4*/])))
			{
				if (__LIB_8__::func_88(iParam1, 32))
				{
					__LIB_3__::func_154(&(uParam0->f_35), &(iParam1->f_20[0 /*4*/]), *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_2__::func_478(*iParam1, Global_35, &(iParam1->f_20[0 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				__LIB_2__::func_478(*iParam1, Global_35, __LIB_8__::func_186(iParam1, 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (iParam1->f_16 == 5)
			{
				__LIB_7__::func_974(iParam1, 3);
			}
			else
			{
				__LIB_7__::func_974(iParam1, 2);
			}
			break;
		case 3:
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !__LIB_2__::func_227(0, 1, *iParam1, 1)) || __LIB_1__::func_322(&(iParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (__LIB_2__::func_401(*iParam1, 1, 1, 1, 0, 0))
			{
				if (__LIB_0__::func_265(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					__LIB_7__::func_961(iParam1, 2);
					__LIB_7__::func_974(iParam1, 9);
					return;
				}
			}
			__LIB_7__::func_974(iParam1, 5);
			break;
		case 4:
			if (__LIB_0__::func_29(iParam1->f_5))
			{
				if (!__LIB_2__::func_763(iParam1->f_5, 0))
				{
					__LIB_8__::func_218(iParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !__LIB_2__::func_227(0, 1, *iParam1, 1)) || __LIB_1__::func_322(&(iParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (__LIB_2__::func_401(*iParam1, 1, 1, 1, 0, 0))
			{
				if (__LIB_0__::func_265(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					__LIB_7__::func_961(iParam1, 2);
					__LIB_7__::func_974(iParam1, 9);
					return;
				}
			}
			__LIB_7__::func_974(iParam1, 5);
			break;
		case 5:
			if (__LIB_0__::func_29(iParam1->f_5))
			{
				if (!__LIB_2__::func_763(iParam1->f_5, 0))
				{
					__LIB_8__::func_218(iParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !__LIB_2__::func_227(0, 1, *iParam1, 1)) || __LIB_1__::func_322(&(iParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (__LIB_2__::func_401(*iParam1, 1, 1, 1, 0, 0))
			{
				if (__LIB_0__::func_265(&(iParam1->f_6)) < 10f)
				{
					__LIB_7__::func_974(iParam1, 3);
					return;
				}
				else
				{
					__LIB_7__::func_961(iParam1, 2);
					__LIB_7__::func_974(iParam1, 9);
					return;
				}
			}
			__LIB_1__::func_148(&(iParam1->f_6));
			__LIB_7__::func_974(iParam1, 7);
			break;
		case 2:
			if (__LIB_0__::func_29(iParam1->f_5))
			{
				if (!__LIB_2__::func_763(iParam1->f_5, 0))
				{
					__LIB_8__::func_218(iParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !__LIB_2__::func_227(0, 1, *iParam1, 1)) || __LIB_1__::func_322(&(iParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (((iParam1->f_16 != 5 && __LIB_0__::func_265(&(iParam1->f_6)) < 25f) && __LIB_0__::func_163(*iParam1, 242628503)) && __LIB_0__::func_232(*iParam1, Global_35, 1) > 9f)
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				__LIB_7__::func_974(iParam1, 9);
				return;
			}
			if (!__LIB_8__::func_88(iParam1, 64))
			{
				switch (iParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						TASK::CLEAR_PED_TASKS(*iParam1, true, false);
						if (!__LIB_8__::func_88(iParam1, 4) && !WEAPON::_0xCB690F680A3EA971(*iParam1, 7))
						{
							TASK::TASK_CONFRONT(*iParam1, Global_35, 2);
						}
						break;
					case 0:
					case 1:
					case 3:
					case 6:
						break;
					case 7:
						if (__LIB_8__::func_88(iParam1, 16))
						{
							TASK::CLEAR_PED_TASKS(*iParam1, true, false);
							if (!__LIB_8__::func_88(iParam1, 4) && !WEAPON::_0xCB690F680A3EA971(*iParam1, 7))
							{
								TASK::TASK_CONFRONT(*iParam1, Global_35, 2);
							}
						}
						else
						{
							switch (iParam1->f_1)
							{
								case 1:
									TASK::CLEAR_PED_TASKS(*iParam1, true, false);
									break;
								case 2:
									TASK::CLEAR_PED_TASKS(*iParam1, true, false);
									if (!__LIB_8__::func_88(iParam1, 4) && !WEAPON::_0xCB690F680A3EA971(*iParam1, 7))
									{
										TASK::TASK_CONFRONT(*iParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						TASK::CLEAR_PED_TASKS(*iParam1, true, false);
						if (__LIB_8__::func_88(iParam1, 16))
						{
							TASK::TASK_AIM_AT_ENTITY(*iParam1, Global_35, -1, 0, 0);
						}
						else
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Global_35, -1, -1f, -1f, -1f);
						}
						break;
				}
			}
			__LIB_1__::func_148(&(iParam1->f_6));
			__LIB_2__::func_315(249295937, *iParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam1->f_20[1 /*4*/])))
			{
				if (__LIB_8__::func_88(iParam1, 32))
				{
					__LIB_3__::func_154(&(uParam0->f_35), &(iParam1->f_20[1 /*4*/]), *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_2__::func_478(*iParam1, Global_35, &(iParam1->f_20[1 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				__LIB_2__::func_478(*iParam1, Global_35, __LIB_8__::func_186(iParam1, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			}
			switch (iParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					__LIB_7__::func_974(iParam1, 6);
					break;
				default:
					__LIB_7__::func_974(iParam1, 7);
					break;
			}
			break;
		case 6:
			if (__LIB_0__::func_29(iParam1->f_5))
			{
				if (!__LIB_2__::func_763(iParam1->f_5, 0))
				{
					__LIB_8__::func_218(iParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !__LIB_2__::func_227(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!__LIB_8__::func_88(iParam1, 4) && __LIB_0__::func_163(*iParam1, joaat("SCRIPT_TASK_CONFRONT"))) && __LIB_0__::func_265(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (__LIB_0__::func_265(&(iParam1->f_6)) < 15f)
			{
				return;
			}
			__LIB_1__::func_148(&(iParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				__LIB_7__::func_974(iParam1, 9);
				return;
			}
			__LIB_7__::func_974(iParam1, 7);
			break;
		case 7:
			if (__LIB_0__::func_29(iParam1->f_5))
			{
				if (!__LIB_2__::func_763(iParam1->f_5, 0))
				{
					__LIB_8__::func_218(iParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !__LIB_2__::func_227(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!__LIB_8__::func_88(iParam1, 4) && __LIB_0__::func_163(*iParam1, joaat("SCRIPT_TASK_CONFRONT"))) && __LIB_0__::func_265(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (iParam1->f_16 == 1 && ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_624(Global_35)))
			{
				__LIB_7__::func_961(iParam1, 2);
			}
			__LIB_1__::func_148(&(iParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				__LIB_7__::func_974(iParam1, 9);
				return;
			}
			if (!__LIB_8__::func_88(iParam1, 64))
			{
				TASK::CLEAR_PED_TASKS(*iParam1, true, false);
			}
			__LIB_7__::func_974(iParam1, 8);
			break;
		case 8:
			if (__LIB_0__::func_29(iParam1->f_5))
			{
				if (!__LIB_2__::func_763(iParam1->f_5, 0))
				{
					__LIB_8__::func_218(iParam1->f_5);
				}
			}
			if (__LIB_1__::func_285(&(iParam1->f_6), __LIB_7__::func_976(iParam1)))
			{
				AUDIO::STOP_PED_SPEAKING(*iParam1, false);
				if (!__LIB_8__::func_88(iParam1, 64) && !__LIB_8__::func_88(iParam1, 128))
				{
					if (iParam1->f_5 != -1)
					{
						__LIB_8__::func_124(iParam1->f_5, 1);
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
					}
				}
				__LIB_7__::func_974(iParam1, 9);
			}
			break;
		case 9:
			__LIB_8__::func_130(iParam1, iParam2, uParam3);
			__LIB_8__::func_206(iParam1, uParam0, 0);
			break;
	}
}

int func_135()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	if (iLocal_98 >= 4)
	{
		return __LIB_1__::func_976();
	}
	if (__LIB_7__::func_924(&Local_1529, 32))
	{
		if (iLocal_98 == 3 && !__LIB_7__::func_908(Local_1529.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_526.f_1)
			{
				__LIB_1__::func_976(&iVar0);
				iVar0++;
			}
		}
		return 0;
	}
	__LIB_7__::func_977(&uLocal_192, 2);
	if (__LIB_7__::func_923(8192))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar3 = __LIB_0__::func_27(iLocal_524, __LIB_0__::func_771(iVar1));
			if (bVar3)
			{
				func_390(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!__LIB_7__::func_939(512))
	{
		func_391();
		func_392();
	}
	if (!__LIB_7__::func_929(67108864))
	{
		__LIB_8__::func_320(0);
		__LIB_19__::func_143(0, 1, 1);
		__LIB_7__::func_932(67108864);
	}
	iVar4 = __LIB_2__::func_963(Local_1529.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar4))
	{
		if (iVar4 != iLocal_155)
		{
			iLocal_155 = iVar4;
			__LIB_2__::func_451(&(Local_208[0 /*21*/]), 0);
		}
		__LIB_0__::func_928(&(Local_1529.f_35), iVar4, "EA_LCMP_Foreman", 0);
		func_395(&iVar4);
		PED::SET_PED_RESET_FLAG(iVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && __LIB_7__::func_907(Local_1529.f_136, 128)))
	{
		__LIB_8__::func_304(&iVar4);
	}
	if (iLocal_98 < 4)
	{
		__LIB_0__::func_11();
	}
	__LIB_0__::func_11();
	func_399(&iVar4);
	if (!__LIB_7__::func_923(128))
	{
		if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1529.f_136, 128))
		{
			__LIB_0__::func_11();
		}
		__LIB_8__::func_313();
		return 0;
	}
	__LIB_8__::func_288();
	if (__LIB_7__::func_923(16384))
	{
		__LIB_0__::func_11(&(iLocal_1871[0]));
	}
	if (!__LIB_7__::func_923(16) && !__LIB_7__::func_923(64))
	{
		bVar5 = __LIB_7__::func_923(1);
		__LIB_7__::func_979(iVar4, &(uLocal_1865[0]), &Local_1529, __LIB_7__::func_923(262144), &bVar5, 1, __LIB_7__::func_978());
		__LIB_8__::func_167(1, bVar5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1868[0]) && !PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_1868[0]))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_1868[0], joaat("PG_VEH_LOGWAGON_1"));
	}
	__LIB_8__::func_187();
	if (__LIB_7__::func_923(64) && !__LIB_7__::func_923(4))
	{
		__LIB_8__::func_167(4, __LIB_18__::func_87(&iVar4, &(iLocal_1845[0])));
		return 0;
	}
	if (iLocal_98 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1868[0]) && !ENTITY::_IS_ENTITY_FROZEN(iLocal_1868[0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_1868[0], Local_526.f_304[0 /*32*/].f_6, true, false, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1868[0], true);
			AITRANSPORT::_0xBA8818212633500A(iLocal_1868[0], 0, 1);
		}
	}
	if (!__LIB_7__::func_923(32))
	{
		if (__LIB_7__::func_923(262144))
		{
			Local_1910.f_2[0] = "LOG_WRK02";
			if (!__LIB_7__::func_923(16))
			{
				switch (iLocal_98)
				{
					case 2:
					case 3:
						if (!__LIB_7__::func_923(-2147483648) && __LIB_7__::func_908(1, 2))
						{
							return func_408(&iVar4);
						}
						else
						{
							return func_409(&iVar4);
						}
						break;
					default:
						return func_409(&iVar4);
				}
			}
			else
			{
				return func_410(&iVar4);
			}
		}
		else
		{
			switch (iLocal_98)
			{
				case 1:
					if (!__LIB_7__::func_923(16))
					{
						return func_411(&iVar4);
					}
					else
					{
						return func_410(&iVar4);
					}
					break;
				case 2:
					if (!__LIB_7__::func_923(16))
					{
						if (!__LIB_7__::func_923(-2147483648) && __LIB_7__::func_908(1, 2))
						{
							return func_408(&iVar4);
						}
						else
						{
							return func_409(&iVar4);
						}
					}
					else
					{
						return func_410(&iVar4);
					}
					break;
				case 3:
					__LIB_8__::func_264(&(iLocal_1845[0]), 0);
					__LIB_8__::func_264(&(iLocal_1845[1]), 1);
					__LIB_1__::func_976();
					__LIB_1__::func_976();
					if (__LIB_7__::func_908(Local_1529.f_136, 256) || __LIB_0__::func_58(&iVar4))
					{
						return __LIB_1__::func_976(&iVar4);
					}
					break;
				case 4:
				case 5:
					return __LIB_1__::func_976();
			}
		}
	}
	return 0;
}

void func_136()
{
	int iVar0;
	float fVar1;
	int iVar2;
	func_417();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_8__::func_139(iVar0) && !__LIB_8__::func_140(iVar0))
		{
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iVar0]))
			{
				if (!(iVar0 == 0 && __LIB_7__::func_923(512)))
				{
				}
			}
			else
			{
				fVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_390[iVar0]);
				if (fVar1 >= (__LIB_8__::func_141(iVar0) - 0.007544f) && fVar1 <= __LIB_8__::func_142(iVar0))
				{
					func_422();
				}
				switch (iLocal_522)
				{
					case 0:
						if (fVar1 >= __LIB_8__::func_141(iVar0) && fVar1 < __LIB_8__::func_142(iVar0))
						{
							PAD::SET_PAD_SHAKE(0, 400, __LIB_8__::func_238(iVar0));
							func_424(iVar0);
							AUDIO::_0x017492B2201E3428("SHOCKWAVE_TREE_FALL", __LIB_8__::func_143(iVar0));
							iVar2 = PED::_GET_LAST_MOUNT(Global_35);
							if (!ENTITY::IS_ENTITY_DEAD(iVar2) && __LIB_0__::func_94(iVar2, __LIB_8__::func_144(iVar0), 1) < 10f)
							{
								PED::_0xBAE08F00021BFFB2(iVar2, __LIB_1__::func_985());
							}
							iLocal_522 = 1;
						}
						break;
					case 1:
						if (fVar1 >= __LIB_8__::func_142(iVar0))
						{
							EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), __LIB_8__::func_143(iVar0), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
							__LIB_7__::func_932(8192);
							PAD::SET_PAD_SHAKE(0, 300, (__LIB_8__::func_238(iVar0) / 2));
							iLocal_522 = 2;
						}
						break;
					case 2:
						__LIB_0__::func_172(iLocal_75[2]);
						__LIB_0__::func_172(iLocal_75[3]);
						iLocal_522 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_137()
{
	if (__LIB_7__::func_924(&Local_1529, 1024))
	{
		return true;
	}
	if (bLocal_1983)
	{
		return true;
	}
	if (iLocal_1980 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return false;
		}
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		return false;
	}
	if (__LIB_8__::func_97(bLocal_1983))
	{
		return true;
	}
	return false;
}

void func_178()
{
	int iVar0;
	if (!iLocal_98 == 3 || __LIB_7__::func_907(Local_1529.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_7__::func_908(Local_1529.f_136, 512) && iLocal_98 == 2) && iVar0 == 0)
			{
				__LIB_8__::func_289(iVar0);
			}
			if (__LIB_7__::func_923(64) && iVar0 == 0)
			{
				Jump @118; //curOff = 96
			}
			else if (!__LIB_8__::func_265(iVar0))
			{
				func_456(&iVar0);
			}
			iVar0++;
		}
	}
}

void func_211(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_463(iVar0, bParam0);
		iVar0++;
	}
}

void func_226()
{
	int iVar0[2];
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	if (__LIB_7__::func_923(256))
	{
	}
	if (__LIB_7__::func_923(128))
	{
		if (__LIB_7__::func_923(64))
		{
			Local_526.f_690[7 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_526.f_690[7 /*12*/].f_7 = 0;
		}
		Local_526.f_690[7 /*12*/] = { __LIB_7__::func_984() };
		Local_526.f_690[7 /*12*/].f_3 = 89f;
		Local_526.f_690[7 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_526.f_690[8 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_526.f_690[8 /*12*/].f_7 = 0;
		}
		Local_526.f_690[8 /*12*/] = { __LIB_7__::func_984() };
		Local_526.f_690[8 /*12*/].f_3 = 89f;
		Local_526.f_690[8 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_526.f_690[9 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_526.f_690[9 /*12*/].f_7 = 0;
		}
		Local_526.f_690[9 /*12*/] = { __LIB_7__::func_984() };
		Local_526.f_690[9 /*12*/].f_3 = 89f;
		Local_526.f_690[9 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_526.f_690[10 /*12*/].f_7 = joaat("P_CIGARETTE_CS02X");
		}
		else
		{
			Local_526.f_690[10 /*12*/].f_7 = 0;
		}
		Local_526.f_690[10 /*12*/] = { __LIB_7__::func_984() };
		Local_526.f_690[10 /*12*/].f_3 = 89f;
		Local_526.f_690[10 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_526.f_690[24 /*12*/].f_7 = joaat("TREEFALL_ACCIDENT_ENDPROP");
		}
		else
		{
			Local_526.f_690[24 /*12*/].f_7 = 0;
		}
		Local_526.f_690[24 /*12*/] = { -1402.82f, -270.8668f, 98.5585f };
		Local_526.f_690[24 /*12*/].f_3 = 74.57f;
		Local_526.f_690[24 /*12*/].f_10 = 0;
		__LIB_1__::func_683(&(Local_526.f_690[24 /*12*/].f_11), 64);
		if (__LIB_7__::func_923(64))
		{
			Local_526.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
			Local_526.f_690[6 /*12*/] = { __LIB_7__::func_985() };
			Local_526.f_690[6 /*12*/].f_3 = 89f;
			Local_526.f_690[6 /*12*/].f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			Local_526.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY03X");
			Local_526.f_690[12 /*12*/] = { -1341.215f, -194.8321f, 102.4812f };
			Local_526.f_690[12 /*12*/].f_3 = 27f;
			Local_526.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_526.f_690[12 /*12*/].f_11), 75);
			if (__LIB_7__::func_923(128))
			{
				Local_526.f_690[0 /*12*/].f_7 = 0;
				Local_526.f_690[0 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[0 /*12*/].f_3 = 89f;
				Local_526.f_690[0 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					Local_526.f_690[4 /*12*/].f_7 = joaat("P_WOODWHITTLE01X");
				}
				else
				{
					Local_526.f_690[4 /*12*/].f_7 = 0;
				}
				Local_526.f_690[4 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[4 /*12*/].f_3 = 89f;
				Local_526.f_690[4 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					Local_526.f_690[3 /*12*/].f_7 = joaat("P_KNIFE02X");
				}
				else
				{
					Local_526.f_690[3 /*12*/].f_7 = 0;
				}
				Local_526.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[3 /*12*/].f_3 = 89f;
				Local_526.f_690[3 /*12*/].f_10 = 0;
			}
			break;
		case 2:
			Local_526.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_526.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_526.f_690[13 /*12*/].f_3 = 24f;
			Local_526.f_690[13 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_526.f_690[13 /*12*/].f_11), 75);
			Local_526.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_526.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_526.f_690[12 /*12*/].f_3 = 25f;
			Local_526.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_526.f_690[12 /*12*/].f_11), 75);
			Local_526.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_526.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_526.f_690[25 /*12*/].f_3 = 19.95f;
			Local_526.f_690[25 /*12*/].f_10 = 0;
			if (__LIB_7__::func_923(128))
			{
				if (__LIB_7__::func_908(1, 2))
				{
					Local_526.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_526.f_690[3 /*12*/].f_7 = 0;
				}
				Local_526.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[3 /*12*/].f_4 = { 90f, 0f, -5.99f };
				Local_526.f_690[3 /*12*/].f_10 = 0;
				if (__LIB_7__::func_908(1, 2))
				{
					Local_526.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_526.f_690[4 /*12*/].f_7 = 0;
				}
				Local_526.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_526.f_690[4 /*12*/].f_3 = -153.92f;
				Local_526.f_690[4 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_526.f_690[4 /*12*/].f_11), 2);
				if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_923(64))
				{
					Local_526.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
					Local_526.f_690[6 /*12*/] = { __LIB_7__::func_985() };
					Local_526.f_690[6 /*12*/].f_3 = 89f;
					Local_526.f_690[6 /*12*/].f_10 = 0;
				}
			}
			break;
		case 3:
			Local_526.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_526.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_526.f_690[13 /*12*/].f_3 = 24f;
			Local_526.f_690[13 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_526.f_690[13 /*12*/].f_11), 75);
			Local_526.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_526.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_526.f_690[12 /*12*/].f_3 = 25f;
			Local_526.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_526.f_690[12 /*12*/].f_11), 75);
			Local_526.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_526.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_526.f_690[25 /*12*/].f_3 = 19.95f;
			Local_526.f_690[25 /*12*/].f_10 = 0;
			if (__LIB_7__::func_923(128))
			{
				if (!__LIB_7__::func_907(Local_1529.f_136, 128) || (__LIB_7__::func_907(Local_1529.f_136, 128) && __LIB_7__::func_908(1, 2)))
				{
					Local_526.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_526.f_690[3 /*12*/].f_7 = 0;
				}
				Local_526.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[3 /*12*/].f_3 = 89f;
				Local_526.f_690[3 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1529.f_136, 128) || (__LIB_7__::func_907(Local_1529.f_136, 128) && __LIB_7__::func_908(1, 2)))
				{
					Local_526.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_526.f_690[4 /*12*/].f_7 = 0;
				}
				Local_526.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_526.f_690[4 /*12*/].f_3 = -153.92f;
				Local_526.f_690[4 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_526.f_690[4 /*12*/].f_11), 2);
				if (!__LIB_7__::func_907(Local_1529.f_136, 128) || __LIB_7__::func_908(1, 2))
				{
					Local_526.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
				}
				else
				{
					Local_526.f_690[6 /*12*/].f_7 = 0;
				}
				Local_526.f_690[6 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[6 /*12*/].f_3 = 89f;
				Local_526.f_690[6 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					Local_526.f_690[7 /*12*/].f_7 = joaat("P_BOTTLEJD01X");
				}
				else
				{
					Local_526.f_690[7 /*12*/].f_7 = 0;
				}
				Local_526.f_690[7 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[7 /*12*/].f_3 = 89f;
				Local_526.f_690[7 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					Local_526.f_690[8 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_526.f_690[8 /*12*/].f_7 = 0;
				}
				Local_526.f_690[8 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[8 /*12*/].f_3 = 89f;
				Local_526.f_690[8 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					Local_526.f_690[9 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_526.f_690[9 /*12*/].f_7 = 0;
				}
				Local_526.f_690[9 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[9 /*12*/].f_3 = 89f;
				Local_526.f_690[9 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					Local_526.f_690[10 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_526.f_690[10 /*12*/].f_7 = 0;
				}
				Local_526.f_690[10 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[10 /*12*/].f_3 = 89f;
				Local_526.f_690[10 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					Local_526.f_690[11 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_526.f_690[11 /*12*/].f_7 = 0;
				}
				Local_526.f_690[11 /*12*/] = { __LIB_7__::func_984() };
				Local_526.f_690[11 /*12*/].f_3 = 89f;
				Local_526.f_690[11 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					Local_526.f_690[0 /*12*/].f_7 = joaat("P_PANTHERBLOOD01X");
				}
				else
				{
					Local_526.f_690[0 /*12*/].f_7 = 0;
				}
				Local_526.f_690[0 /*12*/] = { func_477(0, 2) };
				Local_526.f_690[0 /*12*/].f_2 = (Local_526.f_690[0 /*12*/].f_2 - 5f);
				Local_526.f_690[0 /*12*/].f_3 = 89f;
				Local_526.f_690[0 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_526.f_690[0 /*12*/].f_11), 67);
				if (!__LIB_7__::func_907(Local_1529.f_136, 128))
				{
					Local_526.f_690[1 /*12*/].f_7 = joaat("P_COUGARBLOODPOOLS01X");
				}
				else
				{
					Local_526.f_690[1 /*12*/].f_7 = 0;
				}
				Local_526.f_690[1 /*12*/] = { func_477(0, 3) };
				Local_526.f_690[1 /*12*/].f_2 = (Local_526.f_690[1 /*12*/].f_2 - 5f);
				Local_526.f_690[1 /*12*/].f_3 = 89f;
				Local_526.f_690[1 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_526.f_690[1 /*12*/].f_11), 67);
			}
			break;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		bVar5 = __LIB_0__::func_27(iLocal_524, __LIB_0__::func_771(iVar3));
		if (bVar5)
		{
			iVar0[iVar4] = iVar3;
			iVar4++;
		}
		if (iVar4 >= 2)
		{
		}
		else
		{
			iVar3++;
		}
	}
	iVar6 = 0;
	while (iVar6 < iVar4)
	{
		iVar7 = iVar6 * 4;
		if (iVar7 + 18 >= Local_526.f_690 || iVar7 < 0)
		{
		}
		else
		{
			iVar3 = iVar0[iVar6];
			if (__LIB_7__::func_923(8192))
			{
				Local_526.f_690[(15 + iVar7) /*12*/].f_7 = joaat("P_SAWBUCKING01X");
				Local_526.f_690[(16 + iVar7) /*12*/].f_7 = joaat("P_CS_CEDARLOG01X");
				Local_526.f_690[(17 + iVar7) /*12*/].f_7 = joaat("P_CS_CEDARLOG02X");
				Local_526.f_690[(18 + iVar7) /*12*/].f_7 = joaat("P_CS_CEDARLOG03X");
			}
			else
			{
				Local_526.f_690[(15 + iVar7) /*12*/].f_7 = 0;
				Local_526.f_690[(16 + iVar7) /*12*/].f_7 = 0;
				Local_526.f_690[(17 + iVar7) /*12*/].f_7 = 0;
				Local_526.f_690[(18 + iVar7) /*12*/].f_7 = 0;
			}
			Local_526.f_690[(15 + iVar7) /*12*/] = { func_478(iVar3) };
			Local_526.f_690[(15 + iVar7) /*12*/].f_3 = __LIB_7__::func_986(iVar3);
			Local_526.f_690[(15 + iVar7) /*12*/].f_10 = 0;
			Local_526.f_690[(16 + iVar7) /*12*/] = { __LIB_7__::func_987(iVar3) };
			Local_526.f_690[(16 + iVar7) /*12*/].f_4 = { __LIB_7__::func_988(iVar3) };
			Local_526.f_690[(16 + iVar7) /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_526.f_690[(16 + iVar7) /*12*/].f_11), 2);
			vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_526.f_690[(16 + iVar7) /*12*/], Local_526.f_690[(16 + iVar7) /*12*/].f_3, 0.025f, -4.4039f, 0.041f) };
			Local_526.f_690[(17 + iVar7) /*12*/] = { vVar8 };
			Local_526.f_690[(17 + iVar7) /*12*/].f_3 = Local_526.f_690[(16 + iVar7) /*12*/].f_3;
			Local_526.f_690[(17 + iVar7) /*12*/].f_10 = 0;
			vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_526.f_690[(16 + iVar7) /*12*/], Local_526.f_690[(16 + iVar7) /*12*/].f_3, 0f, 6.3529f, -0.077f) };
			Local_526.f_690[(18 + iVar7) /*12*/] = { vVar8 };
			Local_526.f_690[(18 + iVar7) /*12*/].f_3 = Local_526.f_690[(16 + iVar7) /*12*/].f_3;
			Local_526.f_690[(18 + iVar7) /*12*/].f_10 = 0;
			iVar6++;
		}
	}
	if (__LIB_7__::func_923(128))
	{
		if (__LIB_7__::func_923(16384))
		{
			Local_526.f_690[2 /*12*/].f_7 = joaat("S_APLSD_LOG");
		}
		else
		{
			Local_526.f_690[2 /*12*/].f_7 = 0;
		}
		Local_526.f_690[2 /*12*/] = { -1410.311f, -227.9941f, 99.4013f };
		Local_526.f_690[2 /*12*/].f_3 = 100.36f;
		Local_526.f_690[2 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(16384))
		{
			Local_526.f_690[14 /*12*/].f_7 = joaat("S_APLSD_HRSATT");
		}
		else
		{
			Local_526.f_690[14 /*12*/].f_7 = 0;
		}
		Local_526.f_690[14 /*12*/] = { -1404.688f, -227.0209f, 99.4983f };
		Local_526.f_690[14 /*12*/].f_3 = 94.76f;
		Local_526.f_690[14 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(16384))
		{
			Local_526.f_690[23 /*12*/].f_7 = joaat("S_APLSD_HOOK");
		}
		else
		{
			Local_526.f_690[23 /*12*/].f_7 = 0;
		}
		Local_526.f_690[23 /*12*/] = { -1412.52f, -227.139f, 99.815f };
		Local_526.f_690[23 /*12*/].f_3 = 129.6f;
		Local_526.f_690[23 /*12*/].f_10 = 1;
	}
	if ((__LIB_7__::func_923(262144) || __LIB_7__::func_923(16)) && __LIB_8__::func_263())
	{
		if (iLocal_98 != 3)
		{
			Local_526.f_690[5 /*12*/].f_7 = joaat("P_CHAIR06X");
		}
		else
		{
			Local_526.f_690[5 /*12*/].f_7 = 0;
		}
		iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.116f, -211.4299f, 103.0422f, 0f, 0f, 18.85407f, 1f, 1f, 2.328289f, "volChairSpawnBlock");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
		Local_526.f_690[11 /*12*/].f_7 = joaat("P_LANTERN09XHANG");
		switch (iLocal_98)
		{
			case 1:
				Local_526.f_690[11 /*12*/].f_7 = 0;
				Local_526.f_690[11 /*12*/] = { -1399.87f, -212.58f, 102.43f };
				break;
			case 2:
				Local_526.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
			case 3:
				Local_526.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
		}
		Local_526.f_690[11 /*12*/].f_3 = 5f;
		Local_526.f_690[11 /*12*/].f_10 = 0;
		__LIB_1__::func_683(&(Local_526.f_690[11 /*12*/].f_11), 66);
	}
	else
	{
		Local_526.f_690[5 /*12*/].f_7 = 0;
	}
	Local_526.f_690[5 /*12*/] = { -1400.098f, -211.239f, 101.889f };
	Local_526.f_690[5 /*12*/].f_3 = 22f;
	Local_526.f_690[5 /*12*/].f_10 = 0;
	__LIB_1__::func_683(&(Local_526.f_690[5 /*12*/].f_11), 2);
}

void func_228()
{
	Local_526.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			Local_526.f_304[0 /*32*/].f_1 = joaat("NORTHFLATCAR01X");
			Local_526.f_304[0 /*32*/].f_6 = { -1342.64f, -191.66f, 99.56f };
			Local_526.f_304[0 /*32*/].f_9 = 27f;
			__LIB_1__::func_683(&(Local_526.f_304[0 /*32*/].f_22), 129);
			Local_526.f_2 = 1;
			break;
		case 2:
			if (!__LIB_7__::func_924(&Local_1529, 32))
			{
				if (__LIB_7__::func_923(256))
				{
					Local_526.f_2++;
				}
			}
			if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_908(Local_1529.f_136, 16384))
			{
				Local_526.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_526.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_526.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_526.f_2++;
				if (__LIB_7__::func_923(262144))
				{
					Local_1910.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((__LIB_7__::func_923(262144) && __LIB_7__::func_908(1, 2)) || __LIB_7__::func_908(Local_1529.f_136, 16384))
			{
				Local_526.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_526.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_526.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_526.f_2++;
				if (__LIB_7__::func_923(262144))
				{
					Local_1910.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!__LIB_7__::func_924(&Local_1529, 32))
			{
				if (__LIB_7__::func_923(256))
				{
					Local_526.f_2++;
				}
			}
			break;
	}
}

void func_229()
{
	char* sVar0;
	if (__LIB_7__::func_923(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		__LIB_3__::func_318(sVar0, &uLocal_1780);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		__LIB_3__::func_318(sVar0, &uLocal_1780);
	}
	if (__LIB_7__::func_923(8192))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		__LIB_3__::func_318(sVar0, &uLocal_1780);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		__LIB_3__::func_318(sVar0, &uLocal_1780);
	}
	if (__LIB_7__::func_923(262144))
	{
		sVar0 = __LIB_18__::func_90();
		__LIB_3__::func_318(sVar0, &uLocal_1780);
		if (__LIB_7__::func_908(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			__LIB_3__::func_318(sVar0, &uLocal_1780);
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				break;
			case 2:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
				__LIB_3__::func_318(sVar0, &uLocal_1780);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				__LIB_3__::func_318(sVar0, &uLocal_1780);
				break;
		}
	}
}

void func_261(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_261(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_261(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_283(int iParam0, var uParam1)
{
	if (__LIB_7__::func_923(1048576))
	{
		if (((((__LIB_4__::func_102(__LIB_2__::func_963(Local_1529.f_138), iParam0, uParam1, 0) || ((iLocal_203 % 3) == 1 && __LIB_7__::func_918(&uLocal_1686, iParam0, uParam1, 0, (iLocal_190 / 3)))) || ((iLocal_203 % 3) == 2 && __LIB_7__::func_918(&uLocal_1686, iParam0, uParam1, (iLocal_190 / 3) + 1, (iLocal_190 * 2 / 3)))) || ((iLocal_203 % 3) == 0 && __LIB_7__::func_918(&uLocal_1686, iParam0, uParam1, (iLocal_190 * 2 / 3) + 1, iLocal_190))) || __LIB_7__::func_918(&iLocal_1845, iParam0, uParam1, 0, -1)) || __LIB_7__::func_918(&iLocal_1871, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_284()
{
	if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_908(Local_1529.f_136, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1868[0]) && __LIB_2__::func_343(Global_35, iLocal_1868[0], 0))
		{
			if (__LIB_7__::func_908(Local_1529.f_136, 16384))
			{
				__LIB_0__::func_325(&(uLocal_1865[1]));
				return false;
			}
			else
			{
				__LIB_3__::func_465(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_1529.f_138), 0, 1065353216 /* Float: 1f */, 0);
				__LIB_7__::func_932(32768);
				return true;
			}
		}
	}
	if (__LIB_7__::func_923(65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]) && __LIB_2__::func_343(Global_35, uLocal_72[1], 1))
		{
			__LIB_3__::func_465(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_1529.f_138), 0, 1065353216 /* Float: 1f */, 0);
			__LIB_7__::func_932(32768);
			return true;
		}
	}
	if (__LIB_7__::func_923(32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]) && __LIB_2__::func_343(Global_35, uLocal_72[0], 1))
		{
			__LIB_3__::func_465(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_1529.f_138), 0, 1065353216 /* Float: 1f */, 0);
			__LIB_7__::func_932(32768);
			return true;
		}
	}
	return false;
}

int func_290(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1529.f_138)))
	{
		if (__LIB_8__::func_291())
		{
			(*iParam0)[iVar0] = __LIB_2__::func_963(Local_1529.f_138);
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[0]))
		{
			(*iParam0)[iVar0] = iLocal_1845[0];
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1871[0]))
		{
			(*iParam0)[iVar0] = iLocal_1871[0];
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(8192))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = __LIB_0__::func_27(iLocal_524, __LIB_0__::func_771(iVar2));
			if (bVar5)
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					iVar3 = __LIB_7__::func_964(9, iVar1, iVar6);
					iVar4 = __LIB_2__::func_963(iVar3);
					if (!ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						(*iParam0)[iVar0] = iVar4;
						iVar0++;
					}
					iVar1++;
				}
				iVar6++;
			}
			iVar2++;
		}
	}
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1529.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = __LIB_7__::func_964(6, iVar1, 0);
			iVar4 = __LIB_2__::func_963(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (__LIB_7__::func_923(256))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = __LIB_7__::func_964(7, iVar1, 0);
			iVar4 = __LIB_2__::func_963(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1529.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar3 = __LIB_7__::func_964(0, iVar1, 0);
			iVar4 = __LIB_2__::func_963(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !__LIB_7__::func_908(Local_1529.f_136, 16))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar3 = __LIB_7__::func_964(3, iVar1, 0);
			iVar4 = __LIB_2__::func_963(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_1871)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1871[iVar1]))
		{
			(*iParam0)[iVar0] = iLocal_1871[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		(*iParam0)[iVar0] = iLocal_1845[2];
		iVar0++;
		(*iParam0)[iVar0] = iLocal_1845[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

bool func_296()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bVar0 = false;
	bVar1 = false;
	if (PED::_0x5407B7288D0478B7(Global_35, 512) > 0)
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = PED::_0x7BE607DAFF382FD2(Global_35, iVar2, 512);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				bVar0 = false;
				bVar1 = false;
				iVar5 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (ENTITY::IS_ENTITY_A_PED(iVar5))
				{
					iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
					if (__LIB_1__::func_205(iVar6, Global_1392194[Local_1529.f_136 /*10*/].f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (iVar6 == __LIB_2__::func_963(Local_1529.f_138))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (__LIB_1__::func_248(iVar6, &uLocal_1686))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (__LIB_1__::func_248(iVar6, &iLocal_1845))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else
					{
						if (bVar0 && !bVar1)
						{
							if (!__LIB_8__::func_0(&iVar6))
							{
								bVar0 = false;
							}
						}
						iVar4++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar2);
					if (bVar0 && !bVar1)
					{
						__LIB_8__::func_131(&Local_1529, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

void func_337()
{
	float fVar0;
	float fVar1;
	Vector3 vVar4;
	if (__LIB_7__::func_963(&(Local_412[2 /*7*/])))
	{
		fVar0 = __LIB_8__::func_8(&(Local_412[2 /*7*/]));
		__LIB_8__::func_9(&(Local_412[2 /*7*/]), &fVar1, &vVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[0]) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1845[0], -615221946))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1845[0], false);
			__LIB_8__::func_191(&(Local_412[2 /*7*/]), "PB_VIC_BRKOUT", 1);
			__LIB_8__::func_192(&(Local_412[2 /*7*/]), "RECOVERY_BOOL");
		}
		else if ((__LIB_8__::func_10(&(Local_412[2 /*7*/]), "PBL_IMPATIENT") || (__LIB_8__::func_10(&(Local_412[2 /*7*/]), "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (__LIB_8__::func_10(&(Local_412[2 /*7*/]), "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				__LIB_8__::func_191(&(Local_412[2 /*7*/]), "PBL_COMBAT_L", 1);
				__LIB_8__::func_192(&(Local_412[2 /*7*/]), "bBreakInternalLoop");
			}
			else
			{
				__LIB_8__::func_191(&(Local_412[2 /*7*/]), "PBL_COMBAT_R", 1);
				__LIB_8__::func_192(&(Local_412[2 /*7*/]), "bBreakInternalLoop");
			}
			__LIB_7__::func_922(1024);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1529.f_138)))
			{
				__LIB_8__::func_183(&(Local_412[2 /*7*/]), __LIB_2__::func_963(Local_1529.f_138), "FOREMAN");
			}
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(810)))
			{
				__LIB_8__::func_183(&(Local_412[2 /*7*/]), __LIB_2__::func_963(810), "PED1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[2]))
			{
				__LIB_8__::func_183(&(Local_412[2 /*7*/]), iLocal_1845[2], "PED2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1845[3]))
			{
				__LIB_8__::func_183(&(Local_412[2 /*7*/]), iLocal_1845[3], "PED3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_526.f_690[7 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_412[2 /*7*/]), Local_526.f_690[7 /*12*/].f_8, "AXE1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_526.f_690[8 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_412[2 /*7*/]), Local_526.f_690[8 /*12*/].f_8, "AXE2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_526.f_690[9 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_412[2 /*7*/]), Local_526.f_690[9 /*12*/].f_8, "AXE3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_526.f_690[10 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_412[2 /*7*/]), Local_526.f_690[10 /*12*/].f_8, "CIGARETTE");
			}
			if (__LIB_7__::func_923(512))
			{
				if (Global_36 < fVar1)
				{
					__LIB_8__::func_191(&(Local_412[2 /*7*/]), "PBL_COMBAT_L", 1);
					__LIB_8__::func_192(&(Local_412[2 /*7*/]), "bBreakInternalLoop");
				}
				else
				{
					__LIB_8__::func_191(&(Local_412[2 /*7*/]), "PBL_COMBAT_R", 1);
					__LIB_8__::func_192(&(Local_412[2 /*7*/]), "bBreakInternalLoop");
				}
			}
			__LIB_7__::func_941(1024);
		}
	}
}

void func_370(int* iParam0, int* iParam1, var uParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_646(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar1 != -1)
		{
			iParam0->f_15 = iVar1;
		}
	}
	switch (iParam0->f_14)
	{
		case 0:
			if (bParam3 || iParam0->f_13 > 0)
			{
				if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
				{
					DECORATOR::DECOR_SET_BOOL(*iParam0, "bScriptedILO", true);
				}
				__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(uParam2[0 /*17*/], 1, 0);
				__LIB_3__::func_158(uParam2[0 /*17*/], 0);
				__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(uParam2[1 /*17*/], 1, 0);
				__LIB_3__::func_158(uParam2[1 /*17*/], 0);
				__LIB_2__::func_602(uParam2[2 /*17*/], __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(uParam2[2 /*17*/], 0, 0);
				__LIB_3__::func_158(uParam2[2 /*17*/], 1);
				__LIB_8__::func_12(iParam0, 1);
			}
			break;
		case 1:
			if (!__LIB_2__::func_227(0, 1, Global_35, 1) || !__LIB_2__::func_227(0, 1, *iParam0, 1))
			{
				__LIB_3__::func_102(uParam2);
			}
			if (iParam0->f_15 != -1)
			{
				__LIB_2__::func_451(iParam1, 0);
				__LIB_2__::func_411(uParam2[0 /*17*/], 0, 0);
				__LIB_2__::func_411(uParam2[1 /*17*/], 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_194(iParam0)))
				{
					__LIB_2__::func_478(Global_35, *iParam0, __LIB_8__::func_194(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_8__::func_12(iParam0, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, *iParam0, 1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_195(iParam0)))
				{
					__LIB_2__::func_478(*iParam0, Global_35, __LIB_8__::func_195(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_8__::func_12(iParam0, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, *iParam0, 1))
			{
				__LIB_8__::func_12(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

void func_390(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = iParam1 * 4;
	iVar1 = iParam1 * 2;
	iVar2 = iParam1 * 2;
	if ((18 + iVar0) >= Local_526.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	iVar3 = __LIB_2__::func_963(__LIB_7__::func_964(9, 0, iVar1));
	iVar4 = __LIB_2__::func_963(__LIB_7__::func_964(9, 1, iVar1));
	if (iLocal_519[iParam1] < 11)
	{
		__LIB_18__::func_98(&iVar1, &iVar0, &iVar3, &iVar4, iParam1);
		__LIB_8__::func_292(iParam1, &iVar3);
		__LIB_19__::func_144(&iVar3, &iVar4, iParam1);
	}
	switch (iLocal_519[iParam1])
	{
		case 0:
			if ((ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[(16 + iVar0) /*12*/].f_8) && ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[(17 + iVar0) /*12*/].f_8)) && ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[(18 + iVar0) /*12*/].f_8))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(16 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(17 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(18 + iVar0) /*12*/].f_8, true);
				iLocal_75[(12 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_526.f_690[(17 + iVar0) /*12*/], 0f, 0f, Local_526.f_690[(17 + iVar0) /*12*/].f_3, 0.613833f, 3.325524f, 5.714088f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(12 + iVar2)], Local_526.f_690[(17 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[(12 + iVar2)], 7);
				iLocal_75[(13 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_526.f_690[(18 + iVar0) /*12*/], 0f, 0f, Local_526.f_690[(18 + iVar0) /*12*/].f_3, 1f, 7.3475f, 5f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(13 + iVar2)], Local_526.f_690[(18 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[(13 + iVar2)], 7);
				__LIB_7__::func_927(__LIB_8__::func_4(9), &Local_526);
				iLocal_519[iParam1] = 1;
			}
			break;
		case 1:
			if (PED::_0x5E420FF293EE5472())
			{
				iVar5 = __LIB_8__::func_220(9, iVar1);
				if (iVar5 == __LIB_8__::func_4(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar3, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar4, false, true);
						iLocal_519[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iLocal_519[iParam1] = 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[(15 + iVar0) /*12*/].f_8))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_526.f_690[(15 + iVar0) /*12*/].f_8, func_478(iParam0), __LIB_7__::func_986(iParam0), true, false, true);
				__LIB_8__::func_15(&(Local_412[(9 + iParam1) /*7*/]), __LIB_8__::func_13(iParam0), __LIB_8__::func_14(iParam0));
				__LIB_8__::func_147(&(Local_412[(9 + iParam1) /*7*/]), iVar3, "PED1", 1);
				__LIB_8__::func_147(&(Local_412[(9 + iParam1) /*7*/]), iVar4, "PED2", 1);
				StringCopy(&(Local_412[(9 + iParam1) /*7*/].f_4), "bBreakInternalLoop", 24);
				__LIB_8__::func_148(&(Local_412[(9 + iParam1) /*7*/]), Local_526.f_690[(15 + iVar0) /*12*/].f_8, "SAW");
				__LIB_8__::func_148(&(Local_412[(9 + iParam1) /*7*/]), Local_526.f_690[(16 + iVar0) /*12*/].f_8, "LOG_01");
				__LIB_8__::func_148(&(Local_412[(9 + iParam1) /*7*/]), Local_526.f_690[(17 + iVar0) /*12*/].f_8, "LOG_03");
				__LIB_8__::func_148(&(Local_412[(9 + iParam1) /*7*/]), Local_526.f_690[(18 + iVar0) /*12*/].f_8, "LOG_02");
				iLocal_519[iParam1] = 3;
			}
			break;
		case 3:
			if (__LIB_7__::func_990(&(Local_412[(9 + iParam1) /*7*/])))
			{
				__LIB_8__::func_16(&(Local_412[(9 + iParam1) /*7*/]));
				iLocal_519[iParam1] = 4;
			}
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && __LIB_1__::func_472(iVar3, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || (!ENTITY::IS_ENTITY_DEAD(iVar4) && __LIB_1__::func_472(iVar4, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)))
			{
				__LIB_8__::func_192(&(Local_412[(9 + iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_519[iParam1] = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_526.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					__LIB_0__::func_172(iLocal_75[(13 + iVar2)]);
					iLocal_519[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_526.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					__LIB_0__::func_172(iLocal_75[(12 + iVar2)]);
					iLocal_519[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1202392137))
			{
				iLocal_519[iParam1] = 8;
			}
			break;
		case 8:
			if (__LIB_2__::func_598(iVar4, Local_412[(9 + iParam1) /*7*/], "PED2", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar4, 330, false);
				if (Local_357 != iVar4)
				{
					__LIB_8__::func_315(9, 1, iVar1, 0);
				}
				iLocal_519[iParam1] = 9;
			}
			break;
		case 9:
			if (__LIB_2__::func_598(iVar3, Local_412[(9 + iParam1) /*7*/], "PED1", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar3, 330, false);
				if (Local_357 != iVar3)
				{
					__LIB_8__::func_315(9, 0, iVar1, 0);
				}
				iLocal_519[iParam1] = 10;
			}
			break;
		case 10:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_412[(9 + iParam1) /*7*/]) || __LIB_7__::func_972(&(Local_412[(9 + iParam1) /*7*/])))
			{
				__LIB_7__::func_952(&(Local_412[(9 + iParam1) /*7*/]));
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				iLocal_519[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_391()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	if (iLocal_523 > 0)
	{
		func_677();
	}
	switch (iLocal_523)
	{
		case 0:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("EA_WORLD_HUMAN_TREE_CHOP_NEW"), 262148, __LIB_7__::func_981(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = __LIB_8__::func_293(iVar0);
				iVar2 = (810 + iVar0);
				if (!__LIB_2__::func_763(iVar2, 0))
				{
					__LIB_8__::func_123(iVar2, 1, 1);
				}
				else
				{
					iVar3 = __LIB_2__::func_963(iVar2);
					if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && __LIB_2__::func_1(iVar3, 0, 1)) && !__LIB_7__::func_939(__LIB_8__::func_17(iVar0)))
					{
						__LIB_2__::func_133(iVar3, __LIB_7__::func_975(Local_1529.f_136, 4), 0);
						if (__LIB_2__::func_117(64))
						{
							if (TASK::_0x6EEAD6AF637DA752(__LIB_8__::func_144(iVar1), __LIB_8__::func_18(), 4f, 0) && !__LIB_8__::func_140(iVar1))
							{
								vVar4 = { __LIB_8__::func_144(iVar1) };
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar3, false, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
								if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_402[iVar1]))
								{
									TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_402[iVar1], 0, 0, false, true, 0, false, -1f, false);
								}
								else
								{
									TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar4, 5f, 0, false, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
								TASK::_TASK_PERFORM_SEQUENCE_2(iVar3, iLocal_193, 0f, 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
								PED::SET_PED_CONFIG_FLAG(iVar3, 146, false);
							}
							else
							{
								__LIB_8__::func_124(iVar2, 1);
								PED::SET_PED_CONFIG_FLAG(iVar3, 146, false);
							}
						}
						else
						{
							__LIB_8__::func_124(iVar2, 1);
							PED::SET_PED_CONFIG_FLAG(iVar3, 146, false);
						}
						__LIB_7__::func_926(__LIB_8__::func_17(iVar0));
					}
					iVar0++;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						__LIB_8__::func_19(__LIB_8__::func_17(iVar0));
						iVar0++;
					}
					iLocal_523 = 2;
					Jump @719; //curOff = 426
					__LIB_19__::func_145();
					func_136();
					iVar0 = (iLocal_203 % 4);
					iVar1 = __LIB_8__::func_293(iVar0);
					if (!__LIB_8__::func_265(iVar1) && !__LIB_7__::func_939(__LIB_8__::func_20(iVar0)))
					{
						__LIB_19__::func_146(iVar0);
						iVar2 = (810 + iVar0);
						if (!__LIB_2__::func_763(iVar2, 0))
						{
							__LIB_8__::func_123(iVar2, 1, 1);
						}
						iVar3 = __LIB_2__::func_963(iVar2);
						__LIB_8__::func_21(&iVar3);
						__LIB_18__::func_91(iVar0);
						__LIB_8__::func_306(&iVar3, iVar0);
						if (__LIB_2__::func_1(iVar3, 0, 1))
						{
							if (!__LIB_7__::func_923(4096) && __LIB_8__::func_321(&iVar3, &(Local_1947[iVar0 /*5*/]), &(uLocal_1973[iVar0]), iVar0))
							{
								func_689(&iVar3, iVar0);
								iLocal_523 = 3;
								return 0;
							}
						}
					}
					if ((((iLocal_203 % 10) == 1 && !__LIB_2__::func_117(64)) && !__LIB_7__::func_923(4096)) && !__LIB_7__::func_923(512))
					{
						func_690();
						iLocal_523 = 1;
						return 0;
					}
					Jump @719; //curOff = 664
					if ((iLocal_203 % 10) == 1 && __LIB_2__::func_117(64))
					{
						func_690();
						iLocal_523 = 2;
					}
					Jump @719; //curOff = 696
					__LIB_1__::func_148(&(vLocal_490[0 /*3*/]));
					iLocal_523 = 2;
				}
				return 0;
			}
			default:
				break;
	}
}

void func_392()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (810 + iVar0);
		iVar3 = __LIB_2__::func_963(iVar2);
		iVar1 = __LIB_8__::func_293(iVar0);
		if (((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iVar1]) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iVar1]) == 10) && (ENTITY::IS_ENTITY_DEAD(iVar3) || !PED::IS_PED_USING_ANY_SCENARIO(iVar3))) && !__LIB_8__::func_140(iVar1))
		{
			__LIB_8__::func_149(iVar1);
			func_463(iVar1, 0);
			if (!__LIB_7__::func_923(64) || iVar1 != 0)
			{
				__LIB_2__::func_753(iVar2, 0, 1, 0, 0);
			}
			__LIB_8__::func_231();
		}
		else
		{
			iVar0++;
		}
	}
}

void func_395(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	if (!__LIB_7__::func_929(67108864))
	{
		return;
	}
	if (__LIB_7__::func_933(536870912))
	{
		if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
		{
			DECORATOR::DECOR_REMOVE(*iParam0, "bScriptedILO");
		}
		return;
	}
	iVar0 = __LIB_2__::func_340(1, 0, 0);
	if (__LIB_7__::func_929(134217728))
	{
		iVar0 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (__LIB_7__::func_923(4096))
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 49, true);
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
			}
		}
		else if (PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
		}
		PED::SET_PED_RESET_FLAG(*iParam0, 49, true);
	}
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1529.f_136, 128))
	{
		fLocal_207 = 8f;
	}
	iVar1 = 1;
	if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "bScriptedILO", true);
	}
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || __LIB_3__::func_63()) || __LIB_3__::func_64()) || __LIB_1__::func_499())
	{
		__LIB_1__::func_148(&(vLocal_490[7 /*3*/]));
	}
	if (__LIB_0__::func_75(&(vLocal_490[7 /*3*/])) && !__LIB_1__::func_285(&(vLocal_490[7 /*3*/]), 0.25f))
	{
		__LIB_3__::func_102(&(Local_251[0 /*52*/]));
	}
	iVar2 = func_646(iParam0, &(Local_208[0 /*21*/]), fLocal_207, &(Local_251[0 /*52*/]), &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iLocal_356 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_356 = iVar2;
	}
	if (!__LIB_7__::func_929(-2147483648))
	{
		if (!__LIB_7__::func_929(268435456))
		{
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (iLocal_356 == 1 && !__LIB_7__::func_929(536870912))
				{
					__LIB_2__::func_478(*iParam0, Global_35, __LIB_8__::func_22(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_7__::func_932(1048576);
				}
				__LIB_19__::func_143(0, 1, 0);
				__LIB_7__::func_932(268435456);
			}
		}
		else
		{
			switch (iLocal_356)
			{
				case 0:
					__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
					__LIB_7__::func_932(1073741824 /* Float: 2f */);
					__LIB_19__::func_143(0, 1, 0);
					break;
				case 1:
					if (__LIB_7__::func_929(536870912))
					{
						__LIB_7__::func_928(536870912);
						__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_7__::func_932(64);
						__LIB_8__::func_82(Local_1529.f_136, 262144);
						__LIB_8__::func_83(Local_1529.f_136, 256);
						__LIB_19__::func_143(0, 1, 0);
					}
					else
					{
						sVar3 = __LIB_8__::func_23();
						__LIB_2__::func_478(Global_35, *iParam0, sVar3, 0, -1082130432 /* Float: -1f */, MISC::GET_RANDOM_INT_IN_RANGE(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						__LIB_19__::func_143(0, 0, 0);
					}
					break;
			}
		}
	}
}

int func_399(int iParam0)
{
	int iVar0[9];
	var uVar10[9];
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	var uVar24;
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (__LIB_8__::func_88(&Local_357, 1))
	{
		return 0;
	}
	if (__LIB_7__::func_923(32))
	{
		return 0;
	}
	if ((iLocal_203 % 5) != 0)
	{
		return 0;
	}
	if (!__LIB_1__::func_205(Global_35, Global_1392194[Local_1529.f_136 /*10*/].f_5, 1, 0))
	{
		return 0;
	}
	if (__LIB_2__::func_118(*iParam0, 1, 1) < (15f + 10f))
	{
		__LIB_7__::func_922(33554432);
		return 1;
	}
	if (__LIB_7__::func_923(4096))
	{
		return 0;
	}
	uVar24 = 30;
	func_290(&uVar24);
	iVar22 = __LIB_8__::func_539(&uVar10, &uVar24, 9, Global_36, 15f, 0, 1, 1, Local_526.f_13, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
	iVar21 = 0;
	while (iVar21 < iVar22)
	{
		if (iVar23 < 9)
		{
			iVar20 = uVar10[iVar21];
			if (!ENTITY::IS_ENTITY_DEAD(iVar20) && PED::IS_PED_HUMAN(iVar20))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iVar20, "HAS_VOICE") || !DECORATOR::DECOR_GET_BOOL(iVar20, "HAS_VOICE"))
				{
					__LIB_2__::func_133(iVar20, __LIB_7__::func_975(Local_1529.f_136, -1), 0);
				}
				iVar0[iVar23] = iVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (__LIB_8__::func_322(&Local_1910, &iVar0, &uLocal_1945, 1, __LIB_7__::func_923(2)))
	{
		__LIB_0__::func_516(&(Local_1910.f_34), 1);
		__LIB_7__::func_922(2);
		__LIB_7__::func_922(33554432);
		return 1;
	}
	return 0;
}

int func_408(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	bool bVar6;
	switch (iLocal_516)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			__LIB_0__::func_325(&(uLocal_1865[0]));
			__LIB_8__::func_147(&(Local_412[0 /*7*/]), *iParam0, "FOREMAN", 1);
			__LIB_8__::func_148(&(Local_412[0 /*7*/]), Local_526.f_690[3 /*12*/].f_8, "PEN");
			__LIB_8__::func_148(&(Local_412[0 /*7*/]), Local_526.f_690[4 /*12*/].f_8, "BOOK");
			__LIB_8__::func_26(&(Local_412[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT");
			__LIB_8__::func_9(&(Local_412[0 /*7*/]), &vVar0, &vVar3);
			__LIB_8__::func_148(&(Local_412[0 /*7*/]), Local_526.f_690[25 /*12*/].f_8, "p_chair04x");
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_526.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				__LIB_3__::func_623(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { __LIB_8__::func_35() };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 2f;
				__LIB_1__::func_336(&(Local_156.f_23), 128);
				__LIB_3__::func_995(&Local_156, 129);
				iLocal_516 = 1;
			}
			else
			{
				__LIB_19__::func_143(0, 1, 1);
				__LIB_8__::func_16(&(Local_412[0 /*7*/]));
				iLocal_516 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_36(), 5f);
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { __LIB_8__::func_33(&(Local_412[0 /*7*/]), "FOREMAN", "PB_L_ENTER") };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 0.25f;
				Local_156.f_17 = 0.2f;
				__LIB_1__::func_336(&(Local_156.f_23), 1152);
				__LIB_3__::func_995(&Local_156, 129);
				iLocal_516 = 2;
			}
			break;
		case 2:
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_36(), 5f);
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				iLocal_516 = 3;
			}
			break;
		case 3:
			__LIB_7__::func_922(1);
			__LIB_8__::func_16(&(Local_412[0 /*7*/]));
			iLocal_516 = 4;
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				__LIB_7__::func_934(67108864);
				if (__LIB_7__::func_923(2))
				{
					iLocal_516 = 6;
				}
				else
				{
					iLocal_516 = 7;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(-1f))
			{
				__LIB_8__::func_316("LOG_OBJ01", 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_1865[0]), -89429847, 580546400, 0, __LIB_7__::func_978());
				iLocal_516 = 7;
			}
			break;
		case 7:
			if (__LIB_8__::func_109(iParam0, 0, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_0__::func_769();
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
				__LIB_7__::func_922(4096);
				__LIB_8__::func_192(&(Local_412[0 /*7*/]), "bBreakInternalLoop");
				__LIB_8__::func_183(&(Local_412[0 /*7*/]), Local_526.f_690[4 /*12*/].f_8, "BOOK");
				ENTITY::PLAY_ENTITY_ANIM(Local_526.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				if (__LIB_7__::func_923(64))
				{
					if (__LIB_7__::func_908(Local_1529.f_136, 64))
					{
						__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_ACK_ACP", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_ACK_ACN", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (__LIB_7__::func_908(Local_1529.f_136, 2))
				{
					__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_ACK_2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_S2ACK", *iParam0, Global_35, 0, 0, 1, 1);
					__LIB_8__::func_82(Local_1529.f_136, 2);
				}
				__LIB_7__::func_934(65536);
				iLocal_516 = 8;
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (__LIB_2__::func_598(*iParam0, Local_412[0 /*7*/], "FOREMAN", 0, 0, 1, 0) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2f, -2f, 2113536, 0f, false, false, -1f, 0, 524297, -1f);
				__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_S2BFM", *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_1__::func_148(&(vLocal_490[3 /*3*/]));
				__LIB_19__::func_143(0, 1, 0);
				__LIB_8__::func_239(1, 0);
				iLocal_516 = 9;
			}
			if (!__LIB_8__::func_109(iParam0, 0, 0))
			{
				__LIB_19__::func_143(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				__LIB_18__::func_93(0, 0, 1);
				iLocal_516 = 13;
			}
			break;
		case 9:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
			}
			if (__LIB_0__::func_75(&(vLocal_490[3 /*3*/])) && __LIB_1__::func_871(&(vLocal_490[3 /*3*/])) > 30000)
			{
				iLocal_516 = 10;
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				if (!__LIB_7__::func_929(268435456))
				{
					__LIB_8__::func_239(1, 1);
					__LIB_19__::func_143(0, 1, 0);
					__LIB_18__::func_94(0);
					__LIB_7__::func_932(268435456);
				}
				switch (iLocal_356)
				{
					case 0:
						__LIB_19__::func_143(0, 1, 0);
						__LIB_8__::func_239(0, 0);
						__LIB_18__::func_93(0, 0, 1);
						__LIB_7__::func_922(2048);
						__LIB_8__::func_82(Local_1529.f_136, 16384);
						__LIB_8__::func_253(&Local_1529);
						__LIB_3__::func_623(&Local_156);
						Local_156.f_8 = { -1400.12f, -207.92f, 101.88f };
						Local_156.f_14 = { __LIB_8__::func_37() };
						Local_156.f_1 = Global_35;
						Local_156.f_17 = 0.2f;
						Local_156.f_18 = 0.2f;
						Local_156.f_19 = 20.6f;
						Local_156.f_25 = Local_412[5 /*7*/];
						StringCopy(&(Local_156.f_30), "ARTHUR", 24);
						StringCopy(&(Local_156.f_26), __LIB_18__::func_89(5), 32);
						__LIB_1__::func_336(&(Local_156.f_23), 26624);
						__LIB_8__::func_131(&Local_1529, 65536);
						__LIB_3__::func_995(&Local_156, 129);
						iLocal_516 = 11;
						break;
					case 1:
						__LIB_19__::func_143(0, 1, 1);
						__LIB_8__::func_239(0, 0);
						__LIB_7__::func_941(2048);
						iLocal_516 = 13;
						break;
				}
			}
			if (!__LIB_8__::func_109(iParam0, 0, 0))
			{
				__LIB_19__::func_143(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				__LIB_18__::func_93(0, 0, 1);
				__LIB_7__::func_941(2048);
				iLocal_516 = 13;
			}
			break;
		case 10:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			__LIB_0__::func_37(&(vLocal_490[3 /*3*/]));
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_S2WS", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_516 = 9;
			break;
		case 11:
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_S2AL", Global_35, *iParam0, 0, 0, 1, 1);
				__LIB_8__::func_147(&(Local_412[5 /*7*/]), Global_35, "ARTHUR", 1);
				__LIB_8__::func_148(&(Local_412[5 /*7*/]), Local_526.f_690[6 /*12*/].f_8, "MONEY");
				__LIB_8__::func_16(&(Local_412[5 /*7*/]));
				iLocal_516 = 12;
			}
			break;
		case 12:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					__LIB_1__::func_432(__LIB_8__::func_126(), 0, 0, 1, 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("CONTINUE")))
				{
					__LIB_0__::func_325(&(uLocal_1865[0]));
					__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_S2VG", *iParam0, Global_35, 0, 0, 1, 1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
					__LIB_2__::func_73(iLocal_1868[0], &(uLocal_1865[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
					if (__LIB_7__::func_908(1, 2))
					{
						__LIB_8__::func_131(&Local_1529, 128);
					}
					iLocal_516 = 15;
				}
			}
			break;
		case 13:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_227(-3.5f, 1, *iParam0, 1))
			{
				__LIB_0__::func_325(&(uLocal_1865[0]));
				if (__LIB_1__::func_205(Global_35, iLocal_75[0], 1, 0))
				{
					if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_153(Global_35, 1, 1, 0) == joaat("WEAPON_UNARMED"))
					{
						TASK::TASK_PLAY_ANIM(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_S2OT", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_516 = 14;
			}
			break;
		case 14:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!__LIB_1__::func_322("LCMP_IG_S2OT"))
			{
				__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_IG_S2MNT", *iParam0, Global_35, 0, 0, 1, 1);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				iLocal_516 = 15;
			}
			break;
		case 15:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			bVar6 = true;
			if (__LIB_7__::func_923(2048) && !__LIB_7__::func_972(&(Local_412[5 /*7*/])))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_8__::func_132(&Local_1529, 65536);
				}
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3) && __LIB_2__::func_227(-3.5f, 1, *iParam0, 1))
				{
					__LIB_7__::func_941(4096);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					__LIB_19__::func_143(0, 1, 0);
					__LIB_7__::func_941(4096);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1400.86f, -205.41f, 102.34f, 2f, -1, false, false, false, false);
					__LIB_8__::func_38(iParam0);
					__LIB_7__::func_965(67108864);
					iLocal_516 = 17;
				}
			}
			break;
		case 17:
			if (__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				if (__LIB_8__::func_254(Local_1529.f_138, &Local_1529, 60000, 1))
				{
					__LIB_2__::func_451(&(Local_208[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_409(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar5;
	vector3 vVar6[24];
	bool bVar9;
	vector3 vVar10[24];
	if (__LIB_8__::func_88(&Local_357, 1) && Local_357 == *iParam0)
	{
		if (iLocal_516 < 17)
		{
			__LIB_8__::func_211();
			iLocal_516 = 17;
		}
	}
	__LIB_8__::func_266();
	switch (iLocal_516)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			if (__LIB_7__::func_908(Local_1529.f_136, 131072))
			{
				iVar0 = iLocal_517;
				iLocal_517 = iVar0 + 1;
				__LIB_8__::func_83(Local_1529.f_136, 131072);
			}
			else
			{
				__LIB_8__::func_82(Local_1529.f_136, 131072);
			}
			if (__LIB_7__::func_908(Local_1529.f_136, 16384))
			{
				__LIB_2__::func_73(iLocal_1868[0], &(uLocal_1865[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
			}
			if (__LIB_8__::func_263())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_39(), 262209, __LIB_8__::func_40(), __LIB_8__::func_41());
				iLocal_408 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_42(), __LIB_8__::func_39(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_43(), 262209, __LIB_8__::func_40(), __LIB_8__::func_44());
				iLocal_408 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_45(), __LIB_8__::func_43(), 1f, 0, false);
			}
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_8 = { __LIB_8__::func_35() };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				__LIB_1__::func_336(&(Local_156.f_23), 128);
				__LIB_3__::func_995(&Local_156, 129);
				iLocal_516 = 1;
			}
			else
			{
				__LIB_8__::func_320(0);
				__LIB_19__::func_143(0, 1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_408))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_408, __LIB_0__::func_196(__LIB_8__::func_263(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(__LIB_8__::func_263(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_516 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				__LIB_8__::func_320(0);
				__LIB_19__::func_143(0, 1, 1);
				__LIB_7__::func_922(1);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_408))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_408, __LIB_0__::func_196(__LIB_8__::func_263(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, __LIB_5__::func_263(__LIB_8__::func_263(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_516 = 4;
			}
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				iVar1 = __LIB_0__::func_982(1);
				if (iVar1 > 3 || (iVar1 == 3 && __LIB_7__::func_907(1, 128)))
				{
					__LIB_8__::func_85(Local_1529.f_136, 4096);
				}
				__LIB_19__::func_143(0, 1, 1);
				__LIB_8__::func_239(1, 0);
				if (__LIB_7__::func_923(2))
				{
					iLocal_516 = 6;
				}
				else
				{
					iLocal_516 = 7;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(-1f))
			{
				__LIB_0__::func_325(&(uLocal_1865[0]));
				iLocal_516 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			if (__LIB_8__::func_109(iParam0, 0, __LIB_8__::func_263()) && __LIB_8__::func_118(iParam0, __LIB_8__::func_267(), 10f, 0, __LIB_8__::func_268(), 1, -1243035987))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_7__::func_922(4096);
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !__LIB_8__::func_263());
				switch (iLocal_517)
				{
					case 2:
						StringCopy(&cVar2, "LCMP_IG_NIACT1", 24);
						break;
					case 3:
						StringCopy(&cVar2, "LCMP_IG_NIBA", 24);
						break;
					case 0:
						StringCopy(&cVar2, "LCMP_IG_NOG", 24);
						break;
					case 1:
						StringCopy(&cVar2, "LCMP_IG_NOTI", 24);
						break;
				}
				__LIB_3__::func_154(&(Local_1529.f_35), &cVar2, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_516 = 8;
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !__LIB_8__::func_263());
			if (__LIB_8__::func_263())
			{
				__LIB_19__::func_143(0, 1, 1);
				__LIB_8__::func_239(0, 0);
				iLocal_516 = 5;
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && __LIB_2__::func_227(-3.5f, 1, 0, 0)) && (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("BREAKOUT")) || TASK::_0x02EBBB3989B7E695(*iParam0)))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, 0, -1f, -1f, -1f);
				iLocal_516 = 2;
			}
			break;
		case 2:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				if (iLocal_517 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iLocal_517)
				{
					case 2:
						StringCopy(&cVar6, "LCMP_IG_NIACTB", 24);
						break;
					case 3:
						StringCopy(&cVar6, "LCMP_IG_NICL", 24);
						break;
				}
				__LIB_3__::func_154(&(Local_1529.f_35), &cVar6, *iParam0, Global_35, 0, 0, 1, 1);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, __LIB_18__::func_90(), __LIB_8__::func_269(0), Global_35, iVar5, 8f, -8f, 0, 0f, false, true, -1f, 0, 0, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_193);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
				__LIB_19__::func_143(0, 1, 1);
				__LIB_8__::func_239(0, 0);
				iLocal_516 = 5;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !__LIB_8__::func_263());
			if (__LIB_8__::func_257(iParam0))
			{
				__LIB_8__::func_239(1, 0);
				__LIB_19__::func_143(0, 1, 1);
				__LIB_18__::func_93(0, 0, 1);
				__LIB_1__::func_148(&(vLocal_490[3 /*3*/]));
			}
			if (__LIB_7__::func_929(-2147483648))
			{
				switch (iLocal_356)
				{
					case 0:
						switch (iLocal_517)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NIACT2", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFM", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NOSEE", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NOAIN", 24);
								break;
						}
						__LIB_3__::func_154(&(Local_1529.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_19__::func_143(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iLocal_517)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
						}
						__LIB_3__::func_154(&(Local_1529.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_19__::func_143(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && __LIB_1__::func_313(&(vLocal_490[3 /*3*/]), 12.5f))
				{
					__LIB_19__::func_143(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					__LIB_8__::func_239(0, 0);
					if (!__LIB_8__::func_263())
					{
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						TASK::_0x9C8F42A5D1859DC1(iLocal_75[0]);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 3f, -1, false, false, false, false);
					}
					__LIB_7__::func_941(4096);
					__LIB_0__::func_325(&(uLocal_1865[0]));
					__LIB_1__::func_148(&(vLocal_490[3 /*3*/]));
					iLocal_516 = 16;
				}
			}
			break;
		case 16:
			if (__LIB_1__::func_313(&(vLocal_490[3 /*3*/]), 60f))
			{
				if (__LIB_8__::func_263())
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				}
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				__LIB_19__::func_143(0, 1, 0);
				__LIB_18__::func_93(0, 0, 1);
				__LIB_8__::func_38(iParam0);
				iLocal_516 = 17;
			}
			break;
		case 17:
			if (!(__LIB_8__::func_88(&Local_357, 1) && Local_357 == *iParam0))
			{
				if (__LIB_2__::func_763(Local_1529.f_138, 0))
				{
					__LIB_8__::func_124(Local_1529.f_138, 1);
					__LIB_2__::func_451(&(Local_208[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_410(int iParam0)
{
	char cVar0[64];
	bool bVar8;
	vector3 vVar9[24];
	vector3 vVar12[24];
	__LIB_8__::func_266();
	switch (iLocal_516)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			__LIB_7__::func_932(1073741824 /* Float: 2f */);
			if (!__LIB_7__::func_908(Local_1529.f_136, 131072))
			{
				__LIB_8__::func_82(Local_1529.f_136, 131072);
			}
			else
			{
				__LIB_8__::func_83(Local_1529.f_136, 131072);
			}
			if (__LIB_8__::func_263())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_39(), 262209, __LIB_8__::func_40(), __LIB_8__::func_41());
				iLocal_408 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_42(), __LIB_8__::func_39(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_43(), 262209, __LIB_8__::func_40(), __LIB_8__::func_44());
				iLocal_408 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_45(), __LIB_8__::func_43(), 1f, 0, false);
			}
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_8 = { -1402.34f, -207.62f, 101.88f };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				__LIB_1__::func_336(&(Local_156.f_23), 128);
				__LIB_3__::func_995(&Local_156, 129);
				iLocal_516 = 1;
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_408))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_408, __LIB_0__::func_196(__LIB_8__::func_263(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(__LIB_8__::func_263(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				if (__LIB_8__::func_263())
				{
				}
				iLocal_516 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				__LIB_7__::func_922(1);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_408))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_408, __LIB_0__::func_196(__LIB_8__::func_263(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(__LIB_8__::func_263(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_516 = 4;
			}
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				__LIB_8__::func_85(Local_1529.f_136, 4096);
				__LIB_19__::func_143(0, 1, 1);
				if (__LIB_7__::func_923(2))
				{
					iLocal_516 = 6;
				}
				else
				{
					iLocal_516 = 7;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(-1f))
			{
				__LIB_0__::func_325(&(uLocal_1865[0]));
				iLocal_516 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			if (__LIB_8__::func_109(iParam0, 1, __LIB_8__::func_263()))
			{
				if (__LIB_8__::func_118(iParam0, __LIB_8__::func_307(iParam0), 10f, 0, 0, 1, -1243035987))
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					__LIB_7__::func_922(4096);
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_82(Local_1529.f_136, 16777216);
					Local_104.f_40 = *iParam0;
					Local_104.f_43 = 4f;
					Local_104.f_41 = 4f;
					Local_104.f_39 = Global_1392194[Local_1529.f_136 /*10*/].f_6;
					if (__LIB_8__::func_263())
					{
						StringCopy(&cVar0, "LCMPF_IG1_ALT", 64);
					}
					else
					{
						StringCopy(&cVar0, "LCMPF_IG1", 64);
					}
					__LIB_3__::func_154(&(Local_1529.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_516 = 5;
				}
			}
			break;
		case 5:
			__LIB_8__::func_325(iParam0);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !__LIB_8__::func_263());
			if (__LIB_8__::func_257(iParam0))
			{
				__LIB_19__::func_143(0, 1, 1);
				__LIB_18__::func_95(0, 0);
				__LIB_8__::func_239(1, 0);
				__LIB_1__::func_148(&(vLocal_490[3 /*3*/]));
			}
			if (__LIB_7__::func_929(-2147483648))
			{
				switch (iLocal_356)
				{
					case 1:
						if (__LIB_8__::func_263())
						{
							StringCopy(&cVar9, "LCMP_ANGRRES2", 24);
						}
						else
						{
							StringCopy(&cVar9, "LCMP_ANGRRES1", 24);
						}
						__LIB_3__::func_154(&(Local_1529.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_19__::func_143(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && __LIB_1__::func_313(&(vLocal_490[3 /*3*/]), 12.5f))
				{
					__LIB_19__::func_143(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					__LIB_8__::func_239(0, 0);
					iLocal_516 = 8;
				}
			}
			break;
		case 8:
			__LIB_8__::func_325(iParam0);
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (__LIB_8__::func_263())
				{
					__LIB_8__::func_124(Local_1529.f_138, 1);
					__LIB_2__::func_451(&(Local_208[0 /*21*/]), 0);
					__LIB_8__::func_38(iParam0);
					StringCopy(&cVar12, "LCMPF_IG1_ALTR", 24);
					iLocal_516 = 17;
				}
				else
				{
					StringCopy(&cVar12, "LCMPF_IG1_R", 24);
					iLocal_516 = 16;
				}
				__LIB_3__::func_154(&(Local_1529.f_35), &cVar12, *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_7__::func_941(4096);
				__LIB_0__::func_325(&(uLocal_1865[0]));
			}
			break;
		case 16:
			__LIB_8__::func_325(iParam0);
			if (__LIB_1__::func_313(&(vLocal_490[3 /*3*/]), 60f))
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				__LIB_8__::func_124(Local_1529.f_138, 1);
				__LIB_2__::func_451(&(Local_208[0 /*21*/]), 0);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				__LIB_8__::func_38(iParam0);
				iLocal_516 = 17;
			}
			break;
		case 17:
			break;
	}
	return 0;
}

int func_411(int iParam0)
{
	bool bVar0;
	__LIB_0__::func_11();
	switch (iLocal_515)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
			{
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1398.107f, -213.5636f, 102.7725f, 0f, 0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (__LIB_7__::func_908(Local_1529.f_136, 1024))
			{
				if (__LIB_0__::func_0(iParam0))
				{
					__LIB_8__::func_239(0, 1);
					__LIB_19__::func_143(0, 1, 0);
					__LIB_18__::func_93(0, 0, 1);
					__LIB_7__::func_934(256);
					__LIB_8__::func_38(iParam0);
					__LIB_7__::func_952(&(Local_412[1 /*7*/]));
					__LIB_8__::func_188(&(Local_412[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
					__LIB_8__::func_85(Local_1529.f_136, 4096);
					iLocal_515 = 15;
				}
			}
			else if (__LIB_1__::func_976() && __LIB_8__::func_294(iParam0))
			{
				__LIB_7__::func_934(67108864);
				__LIB_19__::func_143(0, 1, 0);
				__LIB_8__::func_239(1, 1);
				__LIB_18__::func_96(0);
				iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1399.521f, -209.5342f, 104.064f, 0f, 0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1399.238f, -220.5899f, 102.4817f, 0f, 0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				POPULATION::_0xB56D41A694E42E86(iLocal_75[1], 0, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
				iLocal_515 = 1;
			}
			break;
		case 1:
			if (__LIB_7__::func_923(33554432))
			{
				if (__LIB_7__::func_908(1, 2))
				{
					__LIB_8__::func_85(0, 16);
				}
				if (__LIB_7__::func_923(2))
				{
					iLocal_515 = 6;
				}
				else
				{
					iLocal_515 = 2;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(0))
			{
				__LIB_8__::func_316("LOG_OBJ01", 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_1865[0]), -89429847, 580546400, 0, __LIB_7__::func_978());
				if (!__LIB_7__::func_908(Local_1529.f_136, 1024))
				{
					iLocal_515 = 2;
				}
				else if (__LIB_0__::func_0(iParam0))
				{
					iLocal_515 = 8;
				}
			}
			break;
		case 2:
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			if (__LIB_0__::func_0(0))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[8 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_526.f_690[8 /*12*/].f_8));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[7 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_526.f_690[7 /*12*/].f_8));
					}
				}
				if (((__LIB_0__::func_163(Global_35, 242628503) || __LIB_0__::func_163(Global_35, 501393341)) || __LIB_0__::func_163(Global_35, 1553520516)) || __LIB_0__::func_163(Global_35, 1920417248))
				{
					MAP::DISPLAY_RADAR(false);
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			break;
		case 4:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_49();
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_49();
			break;
		case 7:
			__LIB_8__::func_49();
			if (!__LIB_2__::func_763(Local_1529.f_138, 0))
			{
				__LIB_8__::func_123(Local_1529.f_138, 1, 1);
			}
			if (!__LIB_7__::func_923(4096))
			{
				__LIB_7__::func_941(512);
				__LIB_0__::func_769();
				__LIB_7__::func_922(4096);
				__LIB_7__::func_961(&Local_357, 4);
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_198(11, 2);
			if (__LIB_0__::func_139(Local_1529.f_32) && !__LIB_8__::func_326(101))
			{
				__LIB_1__::func_221(Local_1529.f_32, 0, 1);
			}
			if (bVar0)
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[1]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[1]);
				__LIB_0__::func_172(iLocal_75[1]);
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
			}
			break;
		case 9:
			if (__LIB_8__::func_24(&(Local_412[0 /*7*/]), "Internal_Loop"))
			{
				__LIB_8__::func_196(&(Local_412[0 /*7*/]), "Internal_Loop");
			}
			if (__LIB_7__::func_923(1073741824 /* Float: 2f */) && !__LIB_4__::func_852(11))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				__LIB_8__::func_131(&Local_1529, 65536);
				__LIB_8__::func_198(11, 2);
				if (__LIB_7__::func_908(Local_1529.f_136, 4))
				{
					__LIB_2__::func_810(11, 128);
					iLocal_515 = 11;
				}
				else
				{
					__LIB_3__::func_154(&(Local_1529.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
					iLocal_515 = 13;
				}
			}
			break;
		case 10:
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				iLocal_515 = 11;
			}
			break;
		case 11:
			break;
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[0 /*12*/].f_8))
			{
				if (!__LIB_7__::func_933(256))
				{
					__LIB_8__::func_147(&(Local_412[1 /*7*/]), Global_35, "arthur", 1);
					__LIB_8__::func_148(&(Local_412[1 /*7*/]), Local_526.f_690[3 /*12*/].f_8, "p_knife02x");
					__LIB_8__::func_148(&(Local_412[1 /*7*/]), Local_526.f_690[4 /*12*/].f_8, "p_woodWittle01x");
					__LIB_8__::func_148(&(Local_412[1 /*7*/]), Local_526.f_690[6 /*12*/].f_8, "p_foldedBill01x");
					__LIB_8__::func_147(&(Local_412[1 /*7*/]), *iParam0, "U_M_M_BIVFOREMAN_01", 1);
					__LIB_8__::func_148(&(Local_412[1 /*7*/]), Local_526.f_690[0 /*12*/].f_8, "ITEM");
					__LIB_8__::func_191(&(Local_412[1 /*7*/]), "pbl_AgreeToSell", 1);
				}
				else
				{
					__LIB_8__::func_147(&(Local_412[1 /*7*/]), Global_35, "player", 1);
					__LIB_8__::func_148(&(Local_412[1 /*7*/]), Local_526.f_690[6 /*12*/].f_8, "MONEY");
					__LIB_8__::func_148(&(Local_412[1 /*7*/]), Local_526.f_690[0 /*12*/].f_8, "Item");
					__LIB_8__::func_147(&(Local_412[1 /*7*/]), *iParam0, "male", 1);
				}
				iLocal_515 = 13;
			}
			break;
		case 13:
			__LIB_0__::func_325(&(uLocal_1865[0]));
			if (__LIB_7__::func_908(Local_1529.f_136, 4))
			{
				if (!__LIB_7__::func_923(4096))
				{
					__LIB_3__::func_154(&(Local_1529.f_35), "LOG_LCMP_INT_a2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				__LIB_8__::func_16(&(Local_412[1 /*7*/]));
				__LIB_7__::func_952(&(Local_412[0 /*7*/]));
				if (!__LIB_7__::func_933(256))
				{
					__LIB_8__::func_192(&(Local_412[1 /*7*/]), "Internal_Loop");
				}
				iLocal_515 = 14;
			}
			else if (!__LIB_1__::func_322("LOG_LCMP_INT_b0"))
			{
				__LIB_8__::func_191(&(Local_412[0 /*7*/]), "pbl_RefuseToSell", 1);
				__LIB_8__::func_192(&(Local_412[0 /*7*/]), "Internal_Loop");
				__LIB_7__::func_934(16384);
				iLocal_515 = 14;
			}
			break;
		case 14:
			if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("OBJECTEXCHANGE"))) && ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[0 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_526.f_690[0 /*12*/].f_8));
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) && ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[6 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_526.f_690[6 /*12*/].f_8));
				}
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BREAKOUT")))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_8__::func_132(&Local_1529, 65536);
				}
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
			}
			if (__LIB_7__::func_972(&(Local_412[0 /*7*/])) && (__LIB_7__::func_933(16384) || __LIB_7__::func_972(&(Local_412[1 /*7*/]))))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1529, 65536);
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_8__::func_131(&Local_1529, 128);
				__LIB_1__::func_943(11, 128);
				__LIB_8__::func_188(&(Local_412[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				__LIB_7__::func_941(2048);
				__LIB_7__::func_965(16384);
				__LIB_8__::func_50(11);
				__LIB_7__::func_934(256);
				__LIB_7__::func_941(536870912);
				__LIB_7__::func_941(4096);
				__LIB_8__::func_328(1);
				__LIB_7__::func_965(67108864);
				__LIB_8__::func_239(0, 1);
				__LIB_19__::func_143(0, 1, 0);
				__LIB_18__::func_93(0, 0, 1);
				__LIB_8__::func_199(11, 2);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
				__LIB_8__::func_38(iParam0);
				iLocal_515 = 15;
			}
			break;
		case 15:
			__LIB_8__::func_198(11, 1);
			if (__LIB_7__::func_923(4096))
			{
				__LIB_7__::func_941(4096);
			}
			break;
	}
	return 0;
}

void func_417()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	if (__LIB_7__::func_929(8192))
	{
		iVar1 = iLocal_1979;
		iVar2 = iLocal_1979 + 4;
		if (iVar2 >= iLocal_1909)
		{
			iVar2 = (iLocal_1909 - 1);
		}
		iLocal_1979 = iVar1;
		while (iLocal_1979 <= iVar2)
		{
			if (!__LIB_0__::func_29(iLocal_1893[iLocal_1979]))
			{
			}
			else
			{
				iVar0 = __LIB_2__::func_963(iLocal_1893[iLocal_1979]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					__LIB_2__::func_965(iLocal_1893[iLocal_1979], 0, 1, 0, 1, 1);
					__LIB_2__::func_56(iVar0, 1, 1);
					if (!__LIB_0__::func_163(iVar0, 518218985))
					{
						if (!__LIB_7__::func_923(32))
						{
							func_765(&iLocal_1979);
						}
						else
						{
							vVar3 = { __LIB_8__::func_212(iLocal_75[4], 100, 1, 0) };
							TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
							if (!__LIB_0__::func_86(vVar3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE((30f / 2f), 30f), 0, 40000f);
							}
							__LIB_2__::func_45(0, iLocal_1845[0], -1);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
							TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_193);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
						}
					}
					if (!__LIB_7__::func_923(32))
					{
						iLocal_1893[iLocal_1979] = -1;
					}
				}
			}
			iLocal_1979++;
		}
		if (iLocal_1979 >= (iLocal_1909 - 1))
		{
			__LIB_7__::func_928(8192);
			if (!__LIB_7__::func_923(32))
			{
				iLocal_1909 = 0;
			}
		}
	}
}

void func_422()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(iLocal_75[3], iVar1, 1);
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
			if (MISC::_GET_ITEM_TYPE(iVar3) == 9)
			{
				iVar4 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar3);
				if ((__LIB_7__::func_923(32) && !__LIB_7__::func_924(&Local_1529, 2)) && iVar4 == iLocal_1845[0])
				{
				}
				else
				{
					__LIB_1__::func_864(iVar4, 0, 0);
				}
			}
			iVar0++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

void func_424(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iLocal_1909)
	{
		if (!__LIB_0__::func_29(iLocal_1893[iVar1]))
		{
		}
		else
		{
			iVar0 = __LIB_2__::func_963(iLocal_1893[iVar1]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				__LIB_2__::func_965(iLocal_1893[iVar1], 0, 1, 0, 1, 1);
				__LIB_2__::func_56(iVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

void func_456(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { __LIB_8__::func_51(*iParam0) };
	fVar3 = __LIB_8__::func_52(*iParam0);
	uLocal_402[*iParam0] = TASK::CREATE_SCENARIO_POINT(__LIB_8__::func_18(), vVar0, fVar3, 0, 0, 0);
	TASK::_0xE69FDA40AAC3EFC0(uLocal_402[*iParam0], 0);
	TASK::_0xA7479FB665361EDB(uLocal_402[*iParam0], 0);
	TASK::_SET_SCENARIO_POINT_FLAG(uLocal_402[*iParam0], 19, true);
	iLocal_194[*iParam0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_194[*iParam0], 534496, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_194[*iParam0], 534496, 0, 0, -1, -1, 0);
	if (!__LIB_1__::func_565(&(uLocal_1680[*iParam0])))
	{
		uLocal_1680[*iParam0] = GRAPHICS::_0xFA50F79257745E74(vVar0, 3f, 1, 36, 0);
	}
}

void func_463(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_402[iParam0]))
	{
		TASK::_DELETE_SCENARIO_POINT(uLocal_402[iParam0]);
		__LIB_0__::func_172(iLocal_194[iParam0]);
	}
	if (bParam1)
	{
		__LIB_2__::func_353(&(uLocal_1680[iParam0]), 1);
	}
}

Vector3 func_477(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
		case default:
			switch (iParam0)
			{
				case 0:
				case default:
					return -1375.342f, -317.4534f, 100.8851f;
				case 1:
					return -1378.65f, -317.2836f, 100.986f;
				case 2:
					return -1381.161f, -321.5669f, 101.6531f;
				case 3:
					return -1392.285f, -331.5669f, 104.1264f;
				case 4:
					return -1401.689f, -338.5281f, 104.3909f;
				case 5:
					return -1411.78f, -346.1456f, 105.0925f;
				case 6:
					return -1420.203f, -351.6165f, 106.4329f;
				case 7:
					return -1426.14f, -354.4086f, 107.5771f;
				case 8:
					return -1437.277f, -359.1299f, 110.5854f;
				case 9:
					return -1441.922f, -360.4134f, 111.6311f;
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case default:
							return -1374.965f, -314.8146f, 100.6431f;
						case 1:
							return -1376.802f, -320.7141f, 101.263f;
						case 2:
							return -1380.237f, -322.0409f, 101.6534f;
						case 3:
							return -1393.833f, -333.3949f, 104.4031f;
						case 4:
							return -1402.033f, -337.2408f, 104.2141f;
						case 5:
							return -1414.284f, -346.9185f, 105.2396f;
						case 6:
							return -1419.447f, -350.5371f, 106.1471f;
						case 7:
							return -1430.102f, -356.533f, 108.7939f;
						case 8:
							return -1436.11f, -357.8445f, 110.1643f;
						case 9:
							return -1441.878f, -360.5837f, 111.6306f;
							break;
					}
					return 0f, 0f, 0f;
				}
Vector3 func_478(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.283f, -204.5069f, 101.8864f;
				case 1:
					return -1437.858f, -232.6483f, 101.4767f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_646(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_893(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_4__::func_354(iParam1, uParam3, iParam0);
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

void func_677()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_7__::func_939(__LIB_8__::func_17(iVar0)))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 4)
	{
		return;
	}
	iVar1 = (810 + iVar0);
	iVar2 = __LIB_2__::func_963(iVar1);
	if (func_920(&iVar2, iVar1))
	{
		__LIB_8__::func_124(iVar1, 1);
		func_463(__LIB_8__::func_293(iVar0), 0);
		__LIB_8__::func_19(__LIB_8__::func_17(iVar0));
	}
}

void func_689(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_2__::func_1(*iParam0, 0, 1) && !DECORATOR::DECOR_EXIST_ON(*iParam0, "bChopDown"))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_TRIGGER_SONAR_BLIP_2(1515458263, *iParam0);
		if (!(__LIB_7__::func_923(64) && iParam1 == 0))
		{
			__LIB_2__::func_478(*iParam0, Global_35, __LIB_8__::func_65(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		iVar0 = __LIB_8__::func_293(iParam1);
		func_927(iParam1);
		iLocal_75[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(__LIB_8__::func_143(iVar0), __LIB_8__::func_157(iVar0), 5f, 30f, 5f, "volTreeFall");
		POPULATION::_0xB56D41A694E42E86(iLocal_75[2], 534496, 0, 0, -1, -1, 2);
		__LIB_8__::func_158(iVar0);
		POPULATION::_0xB56D41A694E42E86(iLocal_75[2], 0, 0, 0, -1, -1, 2);
		DECORATOR::DECOR_SET_BOOL(*iParam0, "bChopDown", true);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 389, true);
		vVar1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
	}
}

void func_690()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_930(iVar1);
		iVar0++;
	}
}

void func_765(int iParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(iLocal_1893[*iParam0])))
	{
		iVar0 = __LIB_2__::func_963(iLocal_1893[*iParam0]);
	}
	else
	{
		return;
	}
	PED::_0x935CF6E42BAF7F4D(iVar0);
	__LIB_8__::func_69(&iVar0, 0);
	if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
	{
		TASK::_0x541E5B41DCA45828(iVar0, 1, 0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
		if (__LIB_8__::func_70(iLocal_1893[*iParam0]))
		{
			func_930(iLocal_1893[*iParam0]);
		}
		else
		{
			__LIB_2__::func_753(iLocal_1893[*iParam0], 0, 1, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
		}
	}
	__LIB_2__::func_56(iVar0, 1, 1);
}

int func_893(int* iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_2__::func_525(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_4__::func_357(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_893(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							__LIB_1__::func_488(*iParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*iParam0, 0, 1);
					}
				}
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_758(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_4__::func_358(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_2__::func_589(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_756(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_4__::func_358(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_758(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_3__::func_756(iParam0, iParam1, fParam4, bVar6))
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

bool func_920(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam0, 1))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1407243653))
	{
		return false;
	}
	if (func_1061(iParam1))
	{
		return false;
	}
	return true;
}

void func_927(int iParam0)
{
	int iVar0[30];
	int iVar31;
	int iVar32;
	int iVar33;
	iVar31 = 0;
	iVar31 = func_290(&iVar0);
	iVar32 = (810 + iParam0);
	iVar33 = __LIB_2__::func_963(iVar32);
	if (!ENTITY::IS_ENTITY_DEAD(iVar33))
	{
		iVar0[iVar31] = iVar33;
		iVar31++;
	}
	if (!__LIB_7__::func_923(32))
	{
		func_1063(&iVar0, &iParam0, 1);
	}
	else
	{
		func_1064(iLocal_1845[0], &iVar0);
	}
}

void func_930(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_2__::func_963(iParam0);
	iVar1 = __LIB_8__::func_77(iParam0);
	if (iVar1 < 0 || iVar1 > 3)
	{
		return;
	}
	iVar2 = __LIB_8__::func_293(iVar1);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if ((__LIB_2__::func_117(64) && !PED::_IS_PED_USING_SCENARIO_HASH(iVar0, __LIB_8__::func_18())) && !__LIB_8__::func_265(iVar2))
		{
			if (!__LIB_2__::func_763(iParam0, 0))
			{
				__LIB_8__::func_123(iParam0, 1, 1);
			}
			func_456(&iVar2);
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_402[iVar1]))
			{
				TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_402[iVar1], 0, 0, true, false, 0, false, -1f, false);
			}
			else
			{
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, __LIB_8__::func_78(iVar1), 5f, 0, false, false, false, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
			TASK::_TASK_PERFORM_SEQUENCE_2(iVar0, iLocal_193, 1f, 3f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			__LIB_8__::func_124(iParam0, 1);
			func_463(iVar2, 0);
		}
	}
}

bool func_1061(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1909)
	{
		if (iParam0 == iLocal_1893[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1063(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	__LIB_1__::func_902(Local_1529.f_137, &iVar4, &iVar5, 0, 0);
	iVar6 = (810 + *iParam1);
	iVar8 = __LIB_2__::func_963(iVar6);
	if (iVar4 == -1 || iVar5 == -1)
	{
		return;
	}
	EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), __LIB_8__::func_144(*iParam1), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
	if (ENTITY::IS_ENTITY_DEAD(iVar8))
	{
		return;
	}
	iVar9 = (iVar5 - iVar4);
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!__LIB_0__::func_29(iVar3) || iVar3 == -1)
		{
		}
		else
		{
			iVar7 = __LIB_2__::func_963(iVar3);
			if (__LIB_1__::func_248(iVar7, iParam0))
			{
			}
			else
			{
				if ((__LIB_2__::func_767(iVar3, 0) && !ENTITY::IS_ENTITY_DEAD(iVar7)) && PED::IS_PED_HUMAN(iVar7))
				{
					__LIB_2__::func_965(iVar3, 0, 1, 0, 1, 1);
					__LIB_2__::func_56(iVar7, 1, 1);
					if ((bParam2 && __LIB_1__::func_205(iVar7, iLocal_75[2], 1, 0)) && __LIB_2__::func_1(iVar7, 0, 1))
					{
						PED::SET_PED_CONFIG_FLAG(iVar7, 168, true);
						func_1153(iVar3, -1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar7, false, true);
						PED::_0xEEED8FAFEC331A70(iVar7, __LIB_8__::func_143(*iParam1), 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, __LIB_8__::func_143(*iParam1), 4, 1, 30f, 8000, 0);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, __LIB_8__::func_144(*iParam1), 0);
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
						TASK::TASK_PERFORM_SEQUENCE(iVar7, iLocal_193);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
					}
					else
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
						fVar2 = __LIB_0__::func_665(iVar7, iVar8, 1, 1);
						if (__LIB_0__::func_71(iVar7))
						{
							fVar1 = 0f;
						}
						else if (fVar2 < 35f)
						{
							fVar1 = 1f;
						}
						else if (fVar2 < 65f)
						{
							fVar1 = 0.5f;
						}
						else if (fVar2 < 120f)
						{
							fVar1 = 0.1f;
						}
						else
						{
							fVar1 = 0f;
						}
						if (fVar0 < fVar1 && __LIB_2__::func_1(iVar7, 0, 1))
						{
							PED::SET_PED_CONFIG_FLAG(iVar7, 168, true);
							func_1153(iVar3, -1);
							if (PED::IS_PED_USING_ANY_SCENARIO(iVar7))
							{
								TASK::_0xE7FA07624574B79A(iVar7, iVar8, 1, 1, 10f, 1, 0, 0, 0);
							}
							else
							{
								PED::_0xEEED8FAFEC331A70(iVar7, __LIB_8__::func_143(*iParam1), 1);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, __LIB_8__::func_144(*iParam1), 0);
								TASK::TASK_STAND_STILL(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
								TASK::TASK_PERFORM_SEQUENCE(iVar7, iLocal_193);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
							}
							PED::_0xAAB050DA48B57978(iVar7, __LIB_8__::func_81(), iVar7, -1, 4);
						}
					}
				}
				if (iLocal_1909 >= 15)
				{
				}
				else
				{
					iVar10++;
					if (iVar10 > iVar9)
					{
					}
					else
					{
						iVar3++;
					}
				}
			}
		}
	}
}

void func_1064(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7[15];
	float fVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	__LIB_1__::func_902(Local_1529.f_137, &iVar3, &iVar4, 0, 0);
	iVar5 = 810;
	iVar6 = __LIB_2__::func_963(iVar5);
	if (ENTITY::IS_ENTITY_DEAD(iVar6))
	{
		return;
	}
	if (iVar3 == -1 || iVar4 == -1)
	{
		return;
	}
	iVar24 = (iVar4 - iVar3);
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		if (!__LIB_0__::func_29(iVar2) || iVar2 == -1)
		{
		}
		else
		{
			iVar27 = __LIB_2__::func_963(iVar2);
			if (__LIB_1__::func_248(iVar27, iParam1))
			{
			}
			else
			{
				iVar26 = -1;
				if ((__LIB_2__::func_767(iVar2, 0) && !ENTITY::IS_ENTITY_DEAD(iVar27)) && PED::IS_PED_HUMAN(iVar27))
				{
					__LIB_2__::func_965(iVar2, 0, 1, 0, 1, 1);
					__LIB_2__::func_56(iVar27, 1, 1);
					fVar23 = __LIB_0__::func_665(iVar27, iVar6, 1, 1);
					fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
					if (__LIB_0__::func_71(iVar27))
					{
						fVar1 = 0f;
					}
					else if (fVar23 < 35f)
					{
						fVar1 = 1f;
					}
					else if (fVar23 < 65f)
					{
						fVar1 = 0.75f;
					}
					else if (fVar23 < 120f)
					{
						fVar1 = 0.3f;
					}
					else if (fVar23 < 200f)
					{
						fVar1 = 0.1f;
					}
					else
					{
						fVar1 = 0f;
					}
					if (iLocal_1909 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1155(&fVar7);
						}
						else
						{
							fVar1 = -1f;
						}
					}
					if (fVar0 <= fVar1 && !ENTITY::IS_ENTITY_DEAD(iVar27))
					{
						func_1153(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iLocal_1909] = fVar23;
						}
					}
				}
				iVar25++;
				if (iVar25 > iVar24)
				{
				}
				else
				{
					iVar2++;
				}
				if (iLocal_98 == 2 && !func_1156(813))
				{
					iVar26 = func_1155(&fVar7);
					func_1153(813, iVar26);
					func_463(__LIB_8__::func_293(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iLocal_1909)
				{
					iVar27 = __LIB_2__::func_963(iLocal_1893[iVar28]);
					PED::_0x62FDAD5E01D2DD47(iVar27, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2, 0);
					TASK::CLEAR_PED_TASKS(iVar27, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, -1, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
					TASK::_TASK_PERFORM_SEQUENCE_2(iVar27, iLocal_193, 0f, 2.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
					PED::_0xAAB050DA48B57978(iVar27, __LIB_8__::func_81(), iParam0, -1, 4);
					PED::SET_PED_CONFIG_FLAG(iVar27, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar27, 130, true);
					__LIB_8__::func_69(&iVar27, 1);
					iVar28++;
				}
			}
		}
	}
}

void func_1153(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_1893[iParam1] = iParam0;
	}
	else
	{
		iLocal_1893[iLocal_1909] = iParam0;
		iLocal_1909++;
	}
}

int func_1155(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iLocal_1909)
	{
		if ((*fParam0)[iVar0] > fVar2)
		{
			iVar1 = iVar0;
			fVar2 = (*fParam0)[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1156(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1909)
	{
		if (iLocal_1893[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

