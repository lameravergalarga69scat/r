#region Local Var
	vector3 vLocal_0 = { 0f, 0f, 0f };
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	float fLocal_11 = 0f;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<1225> Local_18 = { 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 5, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, -1082130432, 1, -1082130432, 0, 0, 0 } ;
	var uLocal_1243 = 5;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 2;
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
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
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
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 2;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
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
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
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
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 10;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
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
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
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
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
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
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
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
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
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
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
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
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
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
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
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
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
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
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
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
	var uLocal_1478 = 2;
	var uLocal_1479 = 0;
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
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
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
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 3;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
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
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 1101004800;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
#endregion
void __EntryFunction__()
{
	vLocal_0 = { 0.5f, 0.5f, 2f };
	fLocal_11 = 1f;
	fLocal_12 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	__LIB_1__::func_838(&uScriptParam_0, &uLocal_1251);
	while (!func_3(&uScriptParam_0))
	{
		__LIB_1__::func_813(&uScriptParam_0, &uLocal_1251, __LIB_0__::func_749());
		BUILTIN::WAIT(0);
	}
	func_1(&uScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	bVar0 = CAM::_0x139EFB0A71DD9011();
	bVar1 = CAM::_0x7CE9DC58E3E4755F();
	if (uParam0->f_14 != 1 && uParam0->f_14 != 7)
	{
		if (!bVar0 || bVar1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
	}
	func_6();
	func_7(uParam0);
	if (__LIB_0__::func_750(&(uParam0->f_9), 1))
	{
		__LIB_0__::func_745(uParam0->f_2);
	}
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (__LIB_1__::func_22(iVar2))
		{
			func_11(uParam0, iVar2);
		}
		iVar2++;
	}
	__LIB_1__::func_714();
	if (__LIB_1__::func_44(uParam0->f_5))
	{
		switch (uParam0->f_14)
		{
			case 0:
			case 2:
				__LIB_1__::func_645(uParam0->f_5);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 7:
				__LIB_1__::func_559(uParam0->f_5, 0, 2);
				__LIB_0__::func_297();
				__LIB_1__::func_140();
				__LIB_1__::func_639(uParam0, 0, 1);
				Global_1391438.f_3 = -1;
				iVar3 = 0;
				while (iVar3 < 10)
				{
					if (Global_40.f_6563.f_274[iVar3 /*20*/].f_1 == uParam0->f_1)
					{
						Global_40.f_6563.f_274[iVar3 /*20*/].f_18 += 50;
					}
					iVar3++;
				}
				break;
			case 1:
				if (!__LIB_0__::func_13(32768))
				{
					func_21(uParam0->f_5, 1, 1, Global_1879514.f_11, 1);
				}
				else
				{
					__LIB_1__::func_809(uParam0->f_5, Global_1879514.f_11);
				}
				__LIB_0__::func_863();
				__LIB_0__::func_297();
				__LIB_1__::func_140();
				Global_1391438.f_3 = -1;
				if (uParam0->f_1 == joaat("HAI_BANK_ROBBERY_01") && UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("CABR01")))
				{
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("CABR01"), joaat("TIMELIMIT_5_45")))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("MISS_CHALL_TIME_5_45"), "MISS_CHALL_TIME_5_45", true, true, false);
					}
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("CABR01"), joaat("CABR01_CHASENODAMAGE")))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("CABR01_CHALL_1"), "CABR01_CHALL_1", true, true, false);
					}
					switch (STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(joaat("CABR01")))
					{
						case 0:
							sVar4 = "TOAST_MEDAL_BRONZE";
							break;
						case 1:
							sVar4 = "TOAST_MEDAL_SILVER";
							break;
						case 2:
							sVar4 = "TOAST_MEDAL_GOLD";
							break;
						default:
							sVar4 = "";
							break;
					}
					if (Global_1879514.f_11)
					{
						sVar4 = "TOAST_MEDAL_BRONZE";
					}
					UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, joaat("CABR01"), MISC::GET_HASH_KEY(sVar4), joaat("HUD_TOASTS"));
					MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), __LIB_1__::func_753());
					UILOG::_UILOG_MARK_MISSION_COMPLETED(joaat("CABR01"));
					UILOG::_0xA31013798FADCADC(3, joaat("CABR01"), 1);
				}
				else
				{
					__LIB_1__::func_639(uParam0, 1, 0);
				}
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_6__::func_833();
					__LIB_1__::func_141(0);
				}
				break;
			case 3:
				__LIB_1__::func_645(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_DEAD", 24);
				__LIB_1__::func_611(uParam0->f_5, 2, &(uParam0->f_15), 0, 0, 0);
				break;
			case 6:
				__LIB_1__::func_645(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_ARRESTED", 24);
				__LIB_1__::func_611(uParam0->f_5, 6, &(uParam0->f_15), 0, 0, 0);
				break;
			case 4:
				__LIB_1__::func_645(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {__LIB_0__::func_864(uParam0->f_2)}, 3);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 5:
				__LIB_1__::func_645(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {__LIB_0__::func_865(uParam0->f_2)}, 3);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
		}
	}
	MISC::_0x1096603B519C905F("");
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
	}
	__LIB_0__::func_698(64);
	if (!__LIB_1__::func_628(Global_36))
	{
		__LIB_0__::func_267(1);
		__LIB_1__::func_142(0);
	}
	__LIB_0__::func_8(&Global_1935630, 256);
	func_35(uParam0);
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

bool func_3(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
	if (uParam0->f_13 > 1 || (!__LIB_0__::func_272(Global_35, 0) && uParam0->f_13 > 0))
	{
		if ((__LIB_0__::func_752(uParam0->f_14) || func_39(uParam0)) || __LIB_1__::func_23(uParam0))
		{
			if (!CAM::_0x139EFB0A71DD9011())
			{
				__LIB_1__::func_193(1, 1);
				__LIB_1__::func_814(&uLocal_1251);
			}
			if (!__LIB_0__::func_752(uParam0->f_14) || CAM::_0x7CE9DC58E3E4755F())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				return true;
			}
		}
		if (func_39(uParam0) || __LIB_1__::func_23(uParam0))
		{
			__LIB_0__::func_7(&(Global_1347343.f_11), 262144);
		}
	}
	if (uParam0->f_13 > 1)
	{
		func_44(uParam0);
		func_45(uParam0);
	}
	switch (uParam0->f_13)
	{
		case 0:
			if (!uParam0->f_12)
			{
				uParam0->f_12 = __LIB_1__::func_143(uParam0);
				return false;
			}
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 128) || __LIB_0__::func_750(&(uParam0->f_9), 896))
			{
				__LIB_0__::func_63(&(Global_1391438.f_5), 128, 0);
				uParam0->f_13 = 1;
			}
			break;
		case 1:
			if (func_49(uParam0))
			{
				COMPANION::_0xA079FF7CFB9AC8BD(__LIB_0__::func_110(), 4);
				__LIB_1__::func_639(uParam0, 0, 0);
				uParam0->f_13 = 4;
			}
			break;
		case 4:
			if (func_51(uParam0))
			{
				iVar0 = __LIB_0__::func_753(*uParam0);
				Global_40.f_7039[__LIB_0__::func_754(iVar0, 1) /*2*/] = 1;
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_6()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_31(iVar0) && __LIB_1__::func_22(iVar0))
		{
			__LIB_0__::func_288(iVar0, 56, 1);
		}
		iVar0++;
	}
	__LIB_3__::func_596(&(Global_1359489.f_40), 1);
}

void func_7(var uParam0)
{
	__LIB_0__::func_63(&(uParam0->f_9), 256, 0);
	func_62(&Local_18);
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		func_65(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(iParam1), false);
		func_65(iParam1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
}

void func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_1__::func_755();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_131(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_131(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_131(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_131(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_131(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_131(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_131(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_131(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_131(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_131(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_131(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_131(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_131(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_133();
						func_134(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_131(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_21(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_21(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_21(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_131(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_171();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_131(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_35(var uParam0)
{
	*uParam0 = 234527101;
	uParam0->f_1 = -589165916;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_13 = 0;
	StringCopy(&(uParam0->f_18), "", 64);
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_37 = { 0f, 0f, 0f };
	uParam0->f_41 = 20f;
	uParam0->f_43 = 0;
	StringCopy(&(uParam0->f_52), "", 64);
	StringCopy(&(uParam0->f_60), "", 64);
	uParam0->f_12 = 0;
	if (__LIB_0__::func_139(uParam0->f_44))
	{
		__LIB_1__::func_748(&(uParam0->f_44), 1, 1);
	}
	if (__LIB_0__::func_899(&(uParam0->f_45)))
	{
		__LIB_0__::func_37(&(uParam0->f_45));
	}
}

int func_39(var uParam0)
{
	if (!func_51(uParam0))
	{
		return func_206(uParam0, &Local_18);
	}
	return 0;
}

void func_44(var uParam0)
{
	if (Local_18.f_565.f_2 > 0 && Local_18.f_565.f_2 < 8)
	{
		Stack.Push(&Local_18);
		Call_Loc(uLocal_1250);
		func_209(&Local_18);
		func_210(&(Local_18.f_565), &(Local_18.f_730), &(Local_18.f_1111));
		func_211(&Local_18);
	}
}

void func_45(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_325(&(uParam0->f_43));
	func_213(&Local_18);
	func_214(&(Local_18.f_565));
	func_215(&(Local_18.f_565), &(Local_18.f_730));
	func_216(&(Local_18.f_565));
	func_217(&Local_18);
	func_218(&Local_18);
	func_219(&Local_18);
	switch (Local_18.f_565.f_2)
	{
		case -1:
			return;
		case 0:
			func_220(1, 1);
			break;
		case 1:
			if (func_221(uParam0))
			{
				func_220(2, 1);
			}
			break;
		case 2:
			if (func_222(uParam0))
			{
				func_220(3, 1);
			}
			break;
		case 3:
			if (func_223(uParam0))
			{
				func_220(4, 1);
			}
			break;
		case 4:
			if (func_224(uParam0))
			{
				func_220(5, 1);
			}
			break;
		case 5:
			if (func_225(uParam0))
			{
				func_220(6, 0);
			}
			break;
		case 6:
			if (!__LIB_0__::func_163(Local_18.f_1111.f_40[0], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_227(266), 0, 0, -1, 0, 0, -1);
				TASK::TASK_DISMOUNT_ANIMAL(0, 131072, 0, 0, 0, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_CAMP_FIRE_SIT_GROUND"), __LIB_17__::func_812(8, 2), func_229(8, 2), -1, true, false, 0, -1f, false);
				func_230(&(Local_18.f_1111), 0, &iVar0, 0, 0, 1, 1, 1);
			}
			else if (!__LIB_0__::func_163(Local_18.f_1111.f_40[4], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_227(269), 0, 0, -1, 0, 0, -1);
				TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_SIT_BACK_EXHAUSTED"), __LIB_17__::func_812(8, 3), func_229(8, 3), -1, true, false, 0, -1f, false);
				func_230(&(Local_18.f_1111), 4, &iVar1, 0, 0, 1, 1, 1);
			}
			else
			{
				func_220(7, 0);
			}
			break;
		case 7:
			if (func_231(&(Local_18.f_1111), 0, 0, 3600f) && func_231(&(Local_18.f_1111), 4, 0, 3600f))
			{
				__LIB_1__::func_532(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01")), Local_18.f_1224.f_7 + 19400);
				__LIB_1__::func_432(Local_18.f_1224.f_7, 0, 0, 0, 1);
				__LIB_0__::func_698(64);
				func_220(8, 0);
			}
			break;
		case 8:
			return;
	}
}

bool func_49(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	struct<11> Var6;
	char* sVar17;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_51(&(uParam0->f_3), __LIB_0__::func_771(iVar0)))
		{
			if (__LIB_0__::func_903(iVar0))
			{
				if (!__LIB_1__::func_22(iVar0))
				{
					func_239(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return false;
				}
				if (((!__LIB_0__::func_866(iVar0, 0) && uParam0->f_1 != joaat("HAI_FIVE_FINGER_FILLET_01")) && uParam0->f_1 != joaat("HAI_FIVE_FINGER_FILLET_02")) && uParam0->f_1 != joaat("HAI_DOMINOES_01"))
				{
					__LIB_1__::func_551(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(iVar0), true);
				}
			}
			else if (!__LIB_1__::func_22(iVar0))
			{
				func_239(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	if (!func_241(uParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		__LIB_1__::func_822(&vVar1, &uVar4);
		Var6.f_10 = 7;
		Var6 = 1;
		Var6.f_2 = 1;
		Var6.f_3 = 1;
		Var6.f_4 = 1;
		Var6.f_6 = { vVar1 };
		Var6.f_9 = uVar4;
		uParam0->f_4 = __LIB_1__::func_854(&iVar5, &Var6);
		if (iVar5 <= 0)
		{
			return false;
		}
	}
	__LIB_0__::func_772(uParam0);
	if (__LIB_0__::func_750(&(uParam0->f_9), 128))
	{
		if (!func_245(uParam0))
		{
			return false;
		}
	}
	sVar17 = __LIB_0__::func_758(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
	{
		MISC::_0x1096603B519C905F(sVar17);
	}
	if (__LIB_0__::func_704())
	{
		__LIB_1__::func_716(1);
	}
	__LIB_0__::func_326(64);
	__LIB_0__::func_267(1);
	__LIB_0__::func_7(&Global_1935630, 256);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_249(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return true;
}

bool func_51(var uParam0)
{
	if (Local_18.f_565.f_2 >= 8)
	{
		Global_1879514.f_1 = uParam0->f_5;
		return true;
	}
	return false;
}

void func_62(var uParam0)
{
	int iVar0;
	func_254();
	func_255(uParam0);
	func_256(&(uParam0->f_730));
	func_257(uParam0);
	func_258(uParam0, &(uParam0->f_1111), 0, 1);
	func_258(uParam0, &(uParam0->f_1111), 1, 1);
	func_258(uParam0, &(uParam0->f_1111), 2, 1);
	func_259(0);
	func_260(&(uParam0->f_1111), 0);
	func_261(&(uParam0->f_1111), 0);
	func_262(uParam0);
	__LIB_1__::func_408(-2020023971, 1, 0);
	__LIB_10__::func_800();
	if (__LIB_0__::func_272(uParam0->f_1111.f_40[0], 0) && PED::_0xA0BC8FAED8CFEB3C(uParam0->f_1111.f_40[0]))
	{
		func_265(&(uParam0->f_1111), 0, 2, 0);
	}
	if (__LIB_0__::func_272(uParam0->f_1111.f_40[1], 0) && PED::_0xA0BC8FAED8CFEB3C(uParam0->f_1111.f_40[1]))
	{
		func_265(&(uParam0->f_1111), 1, 0, 0);
		func_265(&(uParam0->f_1111), 1, 1, 0);
	}
	if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
	{
		func_265(&(uParam0->f_1111), 2, 2, 0);
	}
	if (__LIB_0__::func_272(uParam0->f_1111.f_40[3], 0) && PED::_0xA0BC8FAED8CFEB3C(uParam0->f_1111.f_40[3]))
	{
		func_265(&(uParam0->f_1111), 3, 2, 0);
	}
	func_266(1, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_1111.f_40[1], false);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_1111.f_40[5], false);
	if (__LIB_1__::func_566(&(Global_1360165[func_267(0) /*1157*/].f_12), 16))
	{
		__LIB_1__::func_684(func_267(0), 0);
	}
	if (__LIB_1__::func_566(&(Global_1360165[func_267(4) /*1157*/].f_12), 16))
	{
		__LIB_1__::func_684(func_267(4), 0);
	}
	AUDIO::_0x660A8F876DF1D4F8(7);
	AUDIO::_0x660A8F876DF1D4F8(25);
	AUDIO::_0x660A8F876DF1D4F8(45);
	__LIB_9__::func_334(&(uParam0->f_730.f_276), Global_35);
	__LIB_9__::func_334(&(uParam0->f_730.f_276), uParam0->f_1111.f_40[0]);
	__LIB_9__::func_334(&(uParam0->f_730.f_276), uParam0->f_1111.f_40[4]);
	__LIB_0__::func_705(func_267(0), 0);
	__LIB_0__::func_705(func_267(4), 0);
	if (uParam0->f_565.f_2 < 7)
	{
		func_231(&(uParam0->f_1111), 0, 1, -1082130432 /* Float: -1f */);
		func_231(&(uParam0->f_1111), 4, 1, -1082130432 /* Float: -1f */);
	}
	__LIB_2__::func_145(uParam0->f_1111.f_40[3], 0);
	if (PED::_0x62DE46F061CAA468() != 0)
	{
		PED::_0x7D4E70A67A651C71(19);
	}
	Global_1430231.f_2 = 0;
	iVar0 = 244;
	while (iVar0 <= 252)
	{
		TASK::DELETE_PATROL_ROUTE(func_227(iVar0));
		iVar0++;
	}
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	}
	__LIB_4__::func_193(70);
	func_274(&(uParam0->f_1111));
	__LIB_0__::func_698(64);
	PED::_0x58F7DB5BD8FA2288(Global_35);
	__LIB_4__::func_679();
	__LIB_1__::func_600(1);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x5CE5CACC01D0F985();
	MISC::_0xEF42F56F69877125();
	MISC::_0x6AC4AF46A6B8DFB2(1);
	LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 1);
	__LIB_10__::func_768(0);
	PLAYER::_0x93624B36E8851B42(PLAYER::PLAYER_ID());
	TASK::RESET_SCENARIO_GROUPS_ENABLED();
	AUDIO::_0x531A78D6BF27014B(func_227(259));
	LAW::_0xC5EB2755FA25F1E9(1);
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	PED::_0x49DADFC4CD808B0A(Global_35, 0, -1);
	AUDIO::TRIGGER_MUSIC_EVENT(func_278(11));
}

void func_65(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		__LIB_0__::func_288(iParam0, 56, 1);
		__LIB_3__::func_596(&(Global_1359489.f_40), 1);
	}
	__LIB_1__::func_684(iParam0, 0);
	__LIB_0__::func_289(iParam0, 4, 0);
	__LIB_0__::func_745(iParam0);
	__LIB_0__::func_706(iParam0);
	__LIB_0__::func_290(iParam0, 37, 1);
	bVar0 = __LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = __LIB_0__::func_748(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (__LIB_0__::func_287(iParam0, 64, 1))
	{
		__LIB_0__::func_290(iParam0, 64, 1);
	}
	if (bParam3)
	{
		__LIB_0__::func_290(iParam0, 33, 1);
		__LIB_0__::func_290(iParam0, 34, 1);
		__LIB_1__::func_27(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		__LIB_0__::func_707(iParam0, 1, 1, 0);
		if (bParam6)
		{
			__LIB_0__::func_288(iParam0, 30, 1);
		}
		if (bParam7)
		{
			__LIB_0__::func_288(iParam0, 35, 1);
			if (bParam8)
			{
				__LIB_0__::func_288(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			__LIB_0__::func_705(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		__LIB_0__::func_290(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		__LIB_0__::func_288(iParam0, 33, 1);
		__LIB_0__::func_707(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			__LIB_3__::func_596(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_0__::func_37(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			__LIB_0__::func_288(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			__LIB_1__::func_197(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (__LIB_0__::func_287(iParam0, 45, 1))
	{
		__LIB_0__::func_290(iParam0, 45, 1);
	}
	__LIB_0__::func_176(iParam0, 16, 1);
	__LIB_0__::func_290(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
		{
			__LIB_1__::func_463(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_131(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_131(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_5__::func_391(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_3__::func_909(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_131(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_131(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_131(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_131(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_131(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_131(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_816(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_131(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_5__::func_391(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_131(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_131(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_9__::func_309(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_6__::func_187(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_131(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_133()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_435();
	func_436();
	func_437();
	func_438();
	func_439();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_442(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_171()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_483(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

int func_206(var uParam0, var uParam1)
{
	vector3 vVar0;
	if (func_510(&(uParam1->f_565)))
	{
		return 1;
	}
	else if ((func_511(&(uParam1->f_121)) || uParam1->f_565.f_2 < 1) || uParam1->f_565.f_2 > 5)
	{
		return 0;
	}
	if (!__LIB_0__::func_272(uParam1->f_1111.f_40[3], 0))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(215), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (!__LIB_0__::func_272(uParam1->f_1111.f_40[3], 1))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(218), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (!__LIB_0__::func_272(uParam1->f_1111.f_40[0], 0))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(214), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (!__LIB_0__::func_272(uParam1->f_1111.f_40[4], 0))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(216), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		if (uParam1->f_565.f_2 == 5)
		{
			if (__LIB_0__::func_266(Global_35, __LIB_6__::func_70(3), 100f, 1, 1))
			{
				if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
				{
					uParam0->f_14 = 2;
					StringCopy(&(uParam0->f_15), func_227(219), 24);
					func_513(&(uParam1->f_565), 1);
					return 0;
				}
			}
		}
		else if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(211), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (__LIB_2__::func_2(uParam1->f_1111.f_40[0], 0, 0, 0, 1) || __LIB_2__::func_2(uParam1->f_1111.f_40[4], 0, 0, 0, 1))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(213), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	switch (uParam1->f_565.f_2)
	{
		case 1:
			if (!func_518(&(uParam1->f_1111), 2, 0, 60f, 1))
			{
				func_519(&(uParam1->f_565), 1);
			}
			else if (func_518(&(uParam1->f_1111), 2, 0, 40f, 1))
			{
				func_519(&(uParam1->f_565), 0);
			}
			if (func_520(&(uParam1->f_730), 208))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(209), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			break;
		case 2:
			if (func_521(&(uParam1->f_565), 200) || func_522(1120403456 /* Float: 100f */, 1106247680 /* Float: 30f */))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(217), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_1111.f_40[6]))
			{
				if ((func_523(&(uParam1->f_1111), 6) || func_524(&(uParam1->f_1111), 6)) || PED::_IS_PED_LASSOED(uParam1->f_1111.f_40[6]))
				{
					if (func_520(&(uParam1->f_730), 208))
					{
						uParam0->f_14 = 2;
						StringCopy(&(uParam0->f_15), func_227(211), 24);
						func_513(&(uParam1->f_565), 1);
					}
					return 0;
				}
				else if (func_525(&(uParam1->f_1111), 6) && !func_526(&(uParam1->f_1111)))
				{
					if (func_520(&(uParam1->f_730), 208))
					{
						uParam0->f_14 = 2;
						StringCopy(&(uParam0->f_15), func_227(212), 24);
						func_513(&(uParam1->f_565), 1);
					}
					return 0;
				}
			}
			else if (func_525(&(uParam1->f_1111), 6))
			{
				func_527(&(uParam1->f_730), 208, 0);
				uParam0->f_14 = 0;
				StringCopy(&(uParam0->f_15), "", 24);
				func_513(&(uParam1->f_565), 0);
				TASK::CLEAR_PED_TASKS(Global_35, false, false);
				func_266(1, 0);
				func_528(&(uParam1->f_1111), 6, 0);
			}
			vVar0 = { func_529(0) };
			if (!__LIB_0__::func_266(Global_35, vVar0, 80f, 1, 0))
			{
				func_519(&(uParam1->f_565), 1);
			}
			else if (__LIB_0__::func_266(Global_35, vVar0, 60f, 1, 0))
			{
				func_519(&(uParam1->f_565), 0);
			}
			if (func_520(&(uParam1->f_730), 208))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(210), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			break;
		case 3:
			if (!func_530(&(uParam1->f_565)))
			{
				if (!func_531(&(uParam1->f_565)))
				{
					if (func_521(&(uParam1->f_565), 200) || func_522(1120403456 /* Float: 100f */, 1106247680 /* Float: 30f */))
					{
						uParam0->f_14 = 2;
						StringCopy(&(uParam0->f_15), func_227(217), 24);
						func_513(&(uParam1->f_565), 1);
						return 0;
					}
				}
			}
			if (func_532(&(uParam1->f_730), 199))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(220), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			vVar0 = { func_529(0) };
			if (!__LIB_0__::func_266(Global_35, vVar0, 80f, 1, 0))
			{
				func_519(&(uParam1->f_565), 1);
			}
			else if (__LIB_0__::func_266(Global_35, vVar0, 60f, 1, 0))
			{
				func_519(&(uParam1->f_565), 0);
			}
			if (func_520(&(uParam1->f_730), 208))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(210), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			break;
		case 4:
			vVar0 = { func_529(0) };
			if (!__LIB_0__::func_266(Global_35, vVar0, 80f, 1, 0))
			{
				func_519(&(uParam1->f_565), 1);
			}
			else if (__LIB_0__::func_266(Global_35, vVar0, 60f, 1, 0))
			{
				func_519(&(uParam1->f_565), 0);
			}
			if (func_520(&(uParam1->f_730), 208))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(210), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			break;
		case 5:
			break;
	}
	return 0;
}

void func_209(var uParam0)
{
	if (((((uParam0->f_565.f_2 < 1 || uParam0->f_565.f_2 > 5) || !func_535(&(uParam0->f_565))) || func_537(__LIB_4__::func_819(&(uParam0->f_730)))) || (uParam0->f_730.f_2 == 225 && func_538(&(uParam0->f_730), 199))) || func_526(&(uParam0->f_1111)))
	{
		return;
	}
	if (func_525(&(uParam0->f_1111), 6))
	{
		func_539(&(uParam0->f_730), 23, 1, 0);
	}
	else
	{
		func_539(&(uParam0->f_730), 20, 1, 0);
	}
}

void func_210(var uParam0, var uParam1, var uParam2)
{
	func_540(uParam0, uParam1, uParam2, 0);
	func_540(uParam0, uParam1, uParam2, 2);
	func_540(uParam0, uParam1, uParam2, 4);
	func_540(uParam0, uParam1, uParam2, 6);
}

void func_211(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	switch (uParam0->f_730.f_2)
	{
		case 221:
			bVar4 = true;
			break;
		case 222:
		case 223:
		case 224:
		case 227:
		case 228:
			bVar1 = true;
			break;
		case 225:
			bVar0 = func_532(&(uParam0->f_730), 184);
			break;
		case 229:
			bVar3 = (func_532(&(uParam0->f_730), 190) && !func_541(uParam0, 0, 3));
			break;
		case 230:
		case 231:
			bVar2 = true;
			break;
		case 232:
			bVar7 = true;
			break;
		case 233:
			bVar6 = true;
			break;
		case 235:
			bVar5 = (func_542(&(uParam0->f_730), 235) || func_532(&(uParam0->f_730), 204));
			break;
		case 226:
		case 234:
		default:
			__LIB_3__::func_334(&(uParam0->f_730.f_377));
			break;
	}
	func_544(uParam0, bVar0);
	func_545(uParam0, bVar1);
	func_546(uParam0, bVar2);
	func_547(uParam0, bVar3);
	func_548(uParam0, bVar4);
	func_549(uParam0, bVar5);
	func_550(uParam0, bVar6);
	func_551(uParam0, bVar7);
	if (bVar4)
	{
		PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), uParam0->f_1111.f_40[3]);
	}
	bVar8 = ((func_552(&(uParam0->f_565), 3, 19) || func_532(&(uParam0->f_730), 197)) && !func_552(&(uParam0->f_565), 5, 5));
	func_553(uParam0, bVar8);
}

void func_213(var uParam0)
{
	switch (uParam0->f_565.f_2)
	{
		case 1:
			return;
		case 2:
		case 3:
		case 4:
			PED::_0xBA0980B5C0A11924(0f);
			PED::_0x28CB6391ACEDD9DB(0f);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			break;
		case 5:
			if (!__LIB_0__::func_266(Global_35, func_529(0), 100f, 1, 1))
			{
				func_554(uParam0, 5);
				func_554(uParam0, 6);
				func_554(uParam0, 7);
				func_554(uParam0, 8);
				func_554(uParam0, 15);
			}
			break;
	}
}

void func_214(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 0:
			__LIB_9__::func_221(uParam0, 1);
			break;
		case 1:
			if (func_556(uParam0) && func_552(uParam0, 5, 15))
			{
				__LIB_9__::func_221(uParam0, 2);
				return;
			}
			else if (!func_552(uParam0, 5, 0))
			{
				return;
			}
			if (!SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
			{
				SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
			}
			else if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Global_35) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Global_35)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Global_35))
			{
				__LIB_9__::func_221(uParam0, 2);
			}
			else if (func_552(uParam0, 5, 14))
			{
				__LIB_9__::func_221(uParam0, 2);
			}
			break;
		case 2:
			if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
			{
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
			}
			break;
	}
}

void func_215(var uParam0, var uParam1)
{
	if (func_520(uParam1, 208))
	{
		AUDIO::CANCEL_MUSIC_EVENT(func_278(uParam0->f_4));
		func_557(uParam0, 12);
	}
	switch (uParam0->f_4)
	{
		case 0:
			func_557(uParam0, 1);
			break;
		case 1:
			if (func_552(uParam0, 1, 8))
			{
				func_557(uParam0, 2);
			}
			break;
		case 2:
			if (func_552(uParam0, 2, 0))
			{
				func_557(uParam0, 3);
			}
			break;
		case 3:
			if (func_552(uParam0, 2, 5))
			{
				func_557(uParam0, 4);
			}
			break;
		case 4:
			if (func_552(uParam0, 3, 4))
			{
				func_557(uParam0, 5);
			}
			break;
		case 5:
			if (func_552(uParam0, 3, 10))
			{
				func_557(uParam0, 6);
			}
			break;
		case 6:
			if ((func_552(uParam0, 3, 14) || func_558(uParam0)) || func_530(uParam0))
			{
				func_557(uParam0, 7);
			}
			break;
		case 7:
			if (func_552(uParam0, 4, 8))
			{
				func_557(uParam0, 8);
			}
			break;
		case 8:
			if (func_552(uParam0, 5, 4))
			{
				func_557(uParam0, 9);
			}
			break;
		case 9:
			if (func_552(uParam0, 5, 7))
			{
				func_557(uParam0, 10);
			}
			break;
		case 10:
			if (func_552(uParam0, 5, 15))
			{
				func_557(uParam0, 11);
			}
			else if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_557(uParam0, 9);
			}
			break;
		case 11:
		case 12:
			break;
		default:
			break;
	}
	func_559(uParam0);
}

void func_216(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	switch (uParam0->f_2)
	{
		case 1:
			iVar0 = 11;
			iVar1 = 18;
			break;
		case 2:
			iVar0 = 11;
			iVar1 = 4;
			break;
		case 3:
			iVar0 = 21;
			iVar1 = 4;
			break;
		case 4:
			iVar0 = 11;
			iVar1 = 4;
			break;
		case 5:
			iVar0 = 0;
			iVar1 = 4;
			break;
	}
	if (uParam0->f_112 <= iVar0)
	{
		bVar2 = CLOCK::GET_CLOCK_HOURS() >= iVar1;
		CLOCK::PAUSE_CLOCK(bVar2, 0);
	}
	else
	{
		CLOCK::PAUSE_CLOCK(false, 0);
	}
}

void func_217(var uParam0)
{
	bool bVar0;
	if (*uParam0 == 8)
	{
		if (func_560(uParam0, 0))
		{
			func_561(uParam0, 0);
		}
		if (func_560(uParam0, 1))
		{
			func_561(uParam0, 1);
		}
		return;
	}
	else if (!func_552(&(uParam0->f_565), 1, 6) && !func_562(&(uParam0->f_565)))
	{
		return;
	}
	if (*uParam0 > 1)
	{
		func_563(&(uParam0->f_565), uParam0, 0);
		func_563(&(uParam0->f_565), uParam0, 1);
	}
	switch (*uParam0)
	{
		case -1:
			return;
		case 0:
			__LIB_6__::func_618(uParam0, 1);
			break;
		case 1:
			bVar0 = true;
			if (!func_565(uParam0, 0, 2, -1))
			{
				bVar0 = false;
			}
			else if (!func_566(uParam0, 0))
			{
				bVar0 = false;
			}
			if (!func_565(uParam0, 1, 2, -1))
			{
				bVar0 = false;
			}
			else if (!func_566(uParam0, 1))
			{
				bVar0 = false;
			}
			if (!func_565(uParam0, 9, 0, 58))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				__LIB_6__::func_618(uParam0, 2);
			}
			break;
		case 2:
			if (func_552(&(uParam0->f_565), 1, 10))
			{
				if (func_567(uParam0, 0, 2, 2) && func_567(uParam0, 1, 2, 11))
				{
					__LIB_6__::func_618(uParam0, 3);
				}
			}
			break;
		case 3:
			if (func_552(&(uParam0->f_565), 2, 9))
			{
				func_568(uParam0, 0, 0, 1);
				__LIB_6__::func_618(uParam0, 4);
			}
			break;
		case 4:
			if (!func_569(&(uParam0->f_565)))
			{
				if (func_570(uParam0, 1, 5))
				{
					func_571(uParam0->f_487[33], 1);
					func_572(&(uParam0->f_565), 1);
				}
				else if (!func_541(uParam0, 1, 6))
				{
					if (func_573(uParam0, 19))
					{
						func_568(uParam0, 1, 0, 1);
						func_574(uParam0, 1, 6);
					}
				}
			}
			else
			{
				func_554(uParam0, 19);
			}
			if (!func_575(uParam0, 0, 6, 1))
			{
				if (!func_541(uParam0, 0, 6))
				{
					if (func_573(uParam0, 18))
					{
						func_574(uParam0, 0, 6);
					}
				}
				else
				{
					if (func_576(uParam0->f_1111.f_40[0], 0, 4) >= 0.874f)
					{
						func_577(&(uParam0->f_565), 1);
					}
					if (func_576(uParam0->f_1111.f_40[0], 0, 4) >= 0.575f)
					{
						func_578(&(uParam0->f_565), 1);
						if (func_579(uParam0, 9, 37, 0) != uParam0->f_487[37])
						{
							func_580(uParam0, 9, 37, uParam0->f_487[37], 0);
						}
						func_554(uParam0, 18);
					}
				}
			}
			else if (!func_541(uParam0, 0, 5))
			{
				func_568(uParam0, 0, 0, 0);
				func_574(uParam0, 0, 5);
			}
			if (func_532(&(uParam0->f_730), 190))
			{
				if (func_581(&(uParam0->f_565), uParam0->f_487[37], func_227(253), 1082130432 /* Float: 4f */, 1073741824 /* Float: 2f */, joaat("INPUT_CONTEXT_X"), 261))
				{
					func_582(&(uParam0->f_565), 0);
					func_583(Global_35, 0);
					func_584(&(uParam0->f_565), 1);
					func_585(uParam0, 9, 0, uParam0->f_543[0], 0);
					func_568(uParam0, 0, 0, 1);
					func_574(uParam0, 0, 3);
					__LIB_6__::func_618(uParam0, 5);
				}
			}
			break;
		case 5:
			if (__LIB_17__::func_554(Global_35))
			{
				if (func_587(uParam0, 9, 58, 0, 0, -1))
				{
					if (func_567(uParam0, 9, 0, 58))
					{
						__LIB_6__::func_618(uParam0, 6);
					}
				}
			}
			break;
		case 6:
			if (func_588(uParam0, 9))
			{
				if (func_575(uParam0, 0, 3, 1))
				{
					func_578(&(uParam0->f_565), 0);
					__LIB_6__::func_618(uParam0, 7);
				}
			}
			break;
		case 7:
			if (func_541(uParam0, 3, 24))
			{
				__LIB_6__::func_618(uParam0, 8);
			}
			else if (!func_541(uParam0, 0, 5))
			{
				func_568(uParam0, 0, 0, 0);
				func_574(uParam0, 0, 5);
			}
			break;
		case 8:
			return;
	}
}

void func_218(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	if (uParam0->f_1 == 20)
	{
		if (func_560(uParam0, 2))
		{
			func_561(uParam0, 2);
		}
		if (func_560(uParam0, 3))
		{
			func_561(uParam0, 3);
		}
		return;
	}
	else if (!func_552(&(uParam0->f_565), 2, 6))
	{
		return;
	}
	if (uParam0->f_1 > 1)
	{
		func_563(&(uParam0->f_565), uParam0, 2);
		func_563(&(uParam0->f_565), uParam0, 3);
	}
	switch (uParam0->f_1)
	{
		case -1:
			return;
		case 0:
			func_582(uParam0, 1);
			break;
		case 1:
			bVar0 = true;
			if (!func_565(uParam0, 2, 2, -1))
			{
				bVar0 = false;
			}
			else if (!func_566(uParam0, 2))
			{
				bVar0 = false;
			}
			if (!func_590(uParam0, &(uParam0->f_1224), 0))
			{
				bVar0 = false;
			}
			else if (!func_565(uParam0, 3, 2, -1))
			{
				bVar0 = false;
			}
			else if (!func_566(uParam0, 3))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_582(uParam0, 2);
			}
			break;
		case 2:
			if (*uParam0 >= 7)
			{
				func_582(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_48(Global_35, uParam0->f_487[33], 1.5f, 1))
			{
				if (func_567(uParam0, 2, 2, 30) && func_567(uParam0, 3, 2, 24))
				{
					func_582(uParam0, 4);
				}
			}
			break;
		case 4:
			if (!func_541(uParam0, 3, 24))
			{
				func_574(uParam0, 3, 24);
			}
			if (func_575(uParam0, 2, 30, 1))
			{
				__LIB_3__::func_29(&(uParam0->f_487[43]), 1);
				func_593(Global_35, 1, 12, -1065353216 /* Float: -4f */);
				func_582(uParam0, 5);
			}
			break;
		case 5:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
				else if (!func_594(uParam0, 3, 0.6f))
				{
					if (func_594(uParam0, 3, 0.476f))
					{
						func_595(&(uParam0->f_565), 1);
					}
					return;
				}
			}
			if (func_538(&(uParam0->f_730), 196))
			{
				__LIB_1__::func_748(&(uParam0->f_565.f_86), 1, 1);
				func_582(uParam0, 6);
				return;
			}
			if (func_581(&(uParam0->f_565), uParam0->f_487[33], func_227(262), 1082130432 /* Float: 4f */, 1073741824 /* Float: 2f */, joaat("INPUT_CONTEXT_Y"), 239))
			{
				__LIB_0__::func_37(&(uParam0->f_565.f_31[8 /*3*/]));
				func_582(&(uParam0->f_565), 0);
				func_582(uParam0, 8);
			}
			else if (func_558(&(uParam0->f_565)))
			{
				__LIB_1__::func_748(&(uParam0->f_565.f_86), 1, 1);
				__LIB_0__::func_37(&(uParam0->f_565.f_31[8 /*3*/]));
				func_582(&(uParam0->f_565), 0);
				func_582(uParam0, 15);
			}
			break;
		case 6:
			if (func_574(uParam0, 3, 20))
			{
				if (!func_530(&(uParam0->f_565)))
				{
					if (func_596(uParam0->f_543[2], 1, 14, 0.366f))
					{
						func_597(&(uParam0->f_565), 1);
					}
				}
				if (func_575(uParam0, 3, 20, 1))
				{
					func_582(uParam0, 16);
				}
			}
			break;
		case 8:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			vVar1 = { __LIB_17__::func_812(3, 8) };
			fVar4 = func_229(3, 8);
			__LIB_2__::func_246(&(uParam0->f_471));
			__LIB_0__::func_7(&(uParam0->f_471.f_3), 32);
			__LIB_2__::func_619(&(uParam0->f_471.f_3), 1);
			__LIB_1__::func_397(&(uParam0->f_471.f_3), 0);
			__LIB_1__::func_404(&(uParam0->f_471.f_3), 0);
			__LIB_10__::func_241(&(uParam0->f_471.f_3), 1);
			__LIB_8__::func_225(__LIB_17__::func_812(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			func_266(0, 0);
			switch (__LIB_4__::func_352(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), __LIB_1__::func_660(fVar4), vVar1, 1060437492 /* Float: 0.707f */))
			{
				case 0:
				case 2:
					func_582(uParam0, 9);
					break;
				case 1:
					func_582(uParam0, 10);
					break;
				case 3:
					func_582(uParam0, 11);
					break;
			}
			break;
		case 9:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			__LIB_8__::func_225(__LIB_17__::func_812(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			if (__LIB_13__::func_34(&(uParam0->f_471)) > uParam0->f_471.f_4)
			{
				func_584(&(uParam0->f_565), 1);
			}
			if (__LIB_17__::func_554(Global_35))
			{
				if (func_587(uParam0, 2, 13, 0, 0, -1))
				{
					if (func_574(uParam0, 2, 13))
					{
						func_582(uParam0, 12);
					}
				}
			}
			break;
		case 10:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			__LIB_8__::func_225(__LIB_17__::func_812(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			if (__LIB_1__::func_592(&(uParam0->f_471)) > uParam0->f_471.f_4)
			{
				func_584(&(uParam0->f_565), 1);
			}
			if (__LIB_17__::func_554(Global_35))
			{
				if (func_587(uParam0, 2, 14, 0, 0, -1))
				{
					if (func_574(uParam0, 2, 14))
					{
						func_582(uParam0, 12);
					}
				}
			}
			break;
		case 11:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			__LIB_8__::func_225(__LIB_17__::func_812(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			if (__LIB_1__::func_592(&(uParam0->f_471)) > uParam0->f_471.f_4)
			{
				func_584(&(uParam0->f_565), 1);
			}
			if (__LIB_17__::func_554(Global_35))
			{
				if (func_587(uParam0, 2, 15, 0, 0, -1))
				{
					if (func_574(uParam0, 2, 15))
					{
						func_582(uParam0, 12);
					}
				}
			}
			break;
		case 12:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			func_266(1, 0);
			__LIB_8__::func_225(__LIB_17__::func_812(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			if (__LIB_1__::func_592(&(uParam0->f_471)) > uParam0->f_471.f_4)
			{
				func_584(&(uParam0->f_565), 1);
			}
			if (func_609(Global_35, 1, 11))
			{
				func_568(uParam0, 2, 0, 0);
				func_582(uParam0, 13);
			}
			break;
		case 13:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			if (func_581(&(uParam0->f_565), uParam0->f_487[33], func_227(238), 1082130432 /* Float: 4f */, 1073741824 /* Float: 2f */, joaat("INPUT_CONTEXT_X"), 254) || func_610(&(uParam0->f_565.f_31[4 /*3*/]), 30f, 1, 1))
			{
				__LIB_1__::func_748(&(uParam0->f_565.f_86), 1, 1);
				func_582(&(uParam0->f_565), 0);
				func_568(uParam0, 2, 0, 1);
				func_582(uParam0, 14);
			}
			break;
		case 14:
			if (!func_530(&(uParam0->f_565)))
			{
				if (func_596(Global_35, 1, 21, 0.12f))
				{
					func_597(&(uParam0->f_565), 1);
				}
			}
			if (!func_541(uParam0, 3, 26))
			{
				func_574(uParam0, 3, 26);
			}
			else if (func_575(uParam0, 3, 26, 1))
			{
				__LIB_3__::func_29(&(uParam0->f_487[43]), 1);
				func_593(Global_35, 1, 21, -1065353216 /* Float: -4f */);
				func_266(1, 0);
				func_582(uParam0, 16);
			}
			break;
		case 15:
			if (func_574(uParam0, 3, 27))
			{
				if (!func_596(uParam0->f_543[2], 1, 22, 0.1f))
				{
					func_611(uParam0->f_543[2], 1, 22, 0.1f);
				}
				else if (func_596(uParam0->f_543[2], 1, 22, 1f))
				{
					func_612(uParam0, 27, 1);
					func_582(uParam0, 16);
				}
			}
			break;
		case 16:
			if (func_574(uParam0, 3, 21))
			{
				if (func_575(uParam0, 3, 21, 1))
				{
					func_568(uParam0, 3, 0, 0);
					func_582(uParam0, 17);
				}
			}
			break;
		case 17:
			if (!func_541(uParam0, 3, 22))
			{
				func_613(&(uParam0->f_565), 1);
				func_574(uParam0, 3, 22);
			}
			if (__LIB_0__::func_393(Global_35, uParam0->f_565.f_91[10], 0, 1))
			{
				func_568(uParam0, 3, 0, 1);
				func_582(uParam0, 18);
			}
			break;
		case 18:
			if (func_574(uParam0, 3, 23))
			{
				if (func_609(uParam0->f_543[2], 1, 16))
				{
					if (!func_596(uParam0->f_543[2], 1, 16, 0.37f))
					{
						func_611(uParam0->f_543[2], 1, 16, 0.37f);
					}
					else if (func_596(uParam0->f_543[2], 1, 16, 1f))
					{
						func_612(uParam0, 23, 1);
						func_582(uParam0, 19);
					}
					else if (func_596(uParam0->f_1111.f_40[0], 1, 16, 0.75f))
					{
						func_613(&(uParam0->f_565), 0);
					}
				}
				if (func_609(uParam0->f_487[44], 1, 17))
				{
					if (!func_596(uParam0->f_487[44], 1, 17, 0.37f))
					{
						func_611(uParam0->f_487[44], 1, 17, 0.37f);
					}
				}
				if (func_609(uParam0->f_487[53], 1, 18))
				{
					if (!func_596(uParam0->f_487[53], 1, 18, 0.37f))
					{
						func_611(uParam0->f_487[53], 1, 18, 0.37f);
					}
				}
			}
			break;
		case 19:
			if (func_552(&(uParam0->f_565), 4, 11))
			{
				func_582(uParam0, 20);
			}
			break;
		case 20:
			return;
	}
}

void func_219(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (func_552(&(uParam0->f_565), 5, 0))
	{
		return;
	}
	else if (uParam0->f_2 == 6)
	{
		if (func_552(&(uParam0->f_565), 4, 9) && func_560(uParam0, 4))
		{
			func_561(uParam0, 4);
		}
		iVar0 = 5;
		while (iVar0 <= 8)
		{
			if (func_560(uParam0, iVar0))
			{
				func_561(uParam0, iVar0);
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 54)
		{
			if ((((((iVar1 != 44 && iVar1 != 45) && iVar1 != 50) && iVar1 != 51) && iVar1 != 52) && iVar1 != 53) && iVar1 != 54)
			{
				__LIB_3__::func_29(&(uParam0->f_487[iVar1]), 1);
			}
			iVar1++;
		}
		return;
	}
	else if (!func_552(&(uParam0->f_565), 3, 16) && !func_615(&(uParam0->f_565)))
	{
		return;
	}
	if (uParam0->f_2 > 1)
	{
		func_563(&(uParam0->f_565), uParam0, 4);
		func_563(&(uParam0->f_565), uParam0, 5);
		func_563(&(uParam0->f_565), uParam0, 6);
		func_563(&(uParam0->f_565), uParam0, 7);
		func_563(&(uParam0->f_565), uParam0, 8);
		func_616(uParam0);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (((func_590(uParam0, &(uParam0->f_1224), 1) && func_590(uParam0, &(uParam0->f_1224), 2)) && func_590(uParam0, &(uParam0->f_1224), 3)) && func_590(uParam0, &(uParam0->f_1224), 4))
			{
				func_617(uParam0, 1);
			}
			break;
		case 1:
			bVar2 = true;
			iVar3 = 4;
			while (iVar3 <= 8)
			{
				if (!func_565(uParam0, iVar3, 0, -1))
				{
					bVar2 = false;
				}
				else if (!func_566(uParam0, iVar3))
				{
					bVar2 = false;
				}
				iVar3++;
			}
			if (bVar2)
			{
				func_617(uParam0, 2);
			}
			break;
		case 2:
			bVar2 = true;
			if (func_615(&(uParam0->f_565)))
			{
				if (func_590(uParam0, &(uParam0->f_1224), 0))
				{
					func_618(uParam0->f_487[53], 18, 1, 1148846080 /* Float: 1000f */, 0, 1, 0, 1f, 2);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (func_567(uParam0, 5, 0, 43))
			{
				if (func_609(uParam0->f_487[50], 2, 32))
				{
					if (func_576(uParam0->f_487[50], 2, 32) < 1f)
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_552[5], true);
						func_611(uParam0->f_487[50], 2, 32, 1f);
						bVar2 = false;
					}
					else
					{
						func_568(uParam0, 4, 0, 0);
					}
				}
				else
				{
					bVar2 = false;
				}
			}
			else
			{
				bVar2 = false;
			}
			if (bVar2)
			{
				func_617(uParam0, 3);
			}
			break;
		case 3:
			if (func_619(uParam0, 23))
			{
				if (func_567(uParam0, 4, 2, 40))
				{
					func_617(uParam0, 5);
				}
			}
			break;
		case 5:
			if (__LIB_0__::func_81(&(uParam0->f_121)) == 3)
			{
				func_617(uParam0, 6);
			}
			else if (!func_541(uParam0, 4, 40))
			{
				func_574(uParam0, 4, 40);
			}
			break;
		case 6:
			return;
	}
}

void func_220(int iParam0, bool bParam1)
{
	if (Local_18.f_565.f_2 != iParam0)
	{
		Local_18.f_565.f_2 = iParam0;
		Local_18.f_565.f_112 = 0;
		if (bParam1)
		{
			func_621(&(Local_18.f_565), &(Local_18.f_730), &uLocal_1250);
		}
	}
}

bool func_221(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = Local_18.f_565.f_112;
	switch (iVar0)
	{
		case -1:
			return false;
		case 0:
			func_622(uParam0, 0);
			func_623(1);
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1111.f_40[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1111.f_40[0]) && !PED::IS_PED_INJURED(Local_18.f_1111.f_40[0]))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_18.f_1111.f_40[0], joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1111.f_40[4]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1111.f_40[4]) && !PED::IS_PED_INJURED(Local_18.f_1111.f_40[4]))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_18.f_1111.f_40[4], joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
			}
			func_624(&(Local_18.f_1111), 1, 0, 1);
			func_624(&(Local_18.f_1111), 1, 1, 1);
			func_626(&(Local_18.f_1171), __LIB_19__::func_94(6, 0), __LIB_19__::func_94(6, 2));
			func_627(&(Local_18.f_1171), __LIB_19__::func_94(6, 1), __LIB_19__::func_94(6, 3));
			func_628(&(Local_18.f_1171), 25896);
			func_629(&(Local_18.f_1171), func_227(264));
			func_631(&(Local_18.f_1171), func_630(&(Local_18.f_1171)), Local_18.f_1111.f_40[0], 0f, -6f);
			func_623(2);
			break;
		case 2:
			func_632(&(Local_18.f_121));
			func_623(3);
			break;
		case 3:
			if (__LIB_0__::func_266(Global_35, __LIB_17__::func_812(2, 1), 50f, 1, 1))
			{
				func_633(&(Local_18.f_121), func_227(181), 1, 0);
			}
			if (func_634(&Local_18))
			{
				func_623(4);
			}
			break;
		case 4:
			func_633(&(Local_18.f_121), func_227(181), 1, 0);
			func_623(5);
			break;
		case 5:
			func_633(&(Local_18.f_121), func_227(181), 1, 0);
			func_623(6);
			break;
		case 6:
			func_633(&(Local_18.f_121), func_227(181), 1, 0);
			func_623(7);
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			if (func_635(Global_35, __LIB_19__::func_94(2, 1), 0) && !__LIB_0__::func_163(Global_35, -982327190))
			{
				TASK::TASK_STAND_STILL(Global_35, -1);
			}
			bVar1 = true;
			if (!func_636(&Local_18, &(Local_18.f_1111), 0))
			{
				bVar1 = false;
			}
			if (!func_633(&(Local_18.f_121), func_227(181), 1, 0))
			{
				bVar1 = false;
			}
			if (CAM::_0xA2B1C7EF759A63CE() < 1f || !__LIB_0__::func_266(Global_35, __LIB_17__::func_812(2, 1), 5f, 1, 0))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_623(8);
			}
			break;
		case 8:
			if (!func_637(&Local_18))
			{
			}
			if (func_639(__LIB_3__::func_997(func_227(181)), &(Local_18.f_121)))
			{
				func_623(9);
			}
			break;
		case 9:
			func_258(&Local_18, &(Local_18.f_1111), 0, 0);
			func_640(Local_18.f_1111.f_40[0], __LIB_19__::func_94(3, 2), 2);
			func_640(Local_18.f_1111.f_40[4], __LIB_19__::func_94(3, 4), 2);
			func_623(10);
			break;
		case 10:
			func_641(&(Local_18.f_565), 0);
			func_623(11);
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_222(var uParam0)
{
	int iVar0;
	iVar0 = Local_18.f_565.f_112;
	if (func_569(&(Local_18.f_565)))
	{
		func_642(Local_18.f_1111.f_40[4], 0, 0);
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(Local_18.f_565.f_87))
		{
			Local_18.f_565.f_87 = TASK::ADD_COVER_POINT(__LIB_17__::func_812(4, 4), func_229(4, 4), 1, 1, 0, false);
		}
		else if (!__LIB_0__::func_163(Local_18.f_1111.f_40[4], -1959848946))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_18.f_1111.f_40[4], __LIB_17__::func_812(4, 4), -1, 1, 0, 0, 1, Local_18.f_565.f_87, 1, 0, 0);
		}
	}
	if (iVar0 > 2)
	{
		func_643(&Local_18);
	}
	switch (iVar0)
	{
		case -1:
			return false;
		case 0:
			func_622(uParam0, 1);
			func_261(&(Local_18.f_1111), 1);
			func_642(Global_35, 1, 0);
			func_623(1);
			break;
		case 1:
			func_644();
			func_645(&(Local_18.f_565), 0);
			func_646(Global_35, 130, 1);
			func_623(2);
			break;
		case 2:
			func_266(1, 0);
			func_647(&(Local_18.f_1111), 1);
			func_623(3);
			break;
		case 3:
			PLAYER::_0x9AFCF9FE1884BF62(PLAYER::PLAYER_ID(), joaat("REL_PLAYER_ENEMY"));
			if ((__LIB_2__::func_901(Local_18.f_1111.f_40[6], Global_35) || PED::GET_PED_CONFIG_FLAG(Local_18.f_1111.f_40[6], 10, false)) || PED::GET_PED_CONFIG_FLAG(Local_18.f_1111.f_40[6], 11, false))
			{
				if (PED::GET_PED_CONFIG_FLAG(Local_18.f_1111.f_40[6], 9, false) || WEAPON::_0xEA522F991E120D45(PED::GET_PED_CAUSE_OF_DEATH(Local_18.f_1111.f_40[6])))
				{
					func_645(&(Local_18.f_565), 1);
				}
				func_623(4);
			}
			else
			{
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 1);
			}
			break;
		case 4:
			func_623(5);
			break;
		case 5:
			PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
			func_646(Global_35, 130, 0);
			func_623(6);
			break;
		case 6:
			func_623(7);
			break;
		case 7:
			func_623(8);
			break;
		case 8:
			if (__LIB_0__::func_48(Global_35, Local_18.f_1111.f_40[0], 5f, 1))
			{
				func_623(9);
			}
			break;
		case 9:
			if (func_532(&(Local_18.f_730), 189))
			{
				func_623(10);
			}
			break;
		case 10:
			func_641(&(Local_18.f_565), 0);
			func_623(11);
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_223(var uParam0)
{
	int iVar0;
	iVar0 = Local_18.f_565.f_112;
	func_649(&Local_18, iVar0);
	if (func_569(&(Local_18.f_565)))
	{
		func_642(Local_18.f_1111.f_40[4], 0, 0);
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(Local_18.f_565.f_87))
		{
			Local_18.f_565.f_87 = TASK::ADD_COVER_POINT(__LIB_17__::func_812(4, 4), func_229(4, 4), 1, 2, 0, false);
		}
		else if (!__LIB_0__::func_163(Local_18.f_1111.f_40[4], -1959848946))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_18.f_1111.f_40[4], __LIB_17__::func_812(4, 4), -1, 1, 0, 0, 1, Local_18.f_565.f_87, 1, 0, 0);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_18.f_1111.f_40[4], 1.5f);
		}
	}
	if (!INTERIOR::IS_VALID_INTERIOR(Local_18.f_1224))
	{
		Local_18.f_1224 = INTERIOR::GET_INTERIOR_AT_COORDS(func_529(9));
		INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_18.f_1224);
	}
	if (iVar0 > 0)
	{
		if (iVar0 < 15)
		{
			func_650(&Local_18);
		}
		if (iVar0 < 10)
		{
			func_651(&Local_18);
			func_643(&Local_18);
		}
	}
	if (iVar0 >= 17)
	{
		func_633(&(Local_18.f_121), func_227(182), 1, 1);
	}
	switch (iVar0)
	{
		case -1:
			return false;
		case 0:
			func_622(uParam0, 2);
			func_623(1);
			break;
		case 1:
			func_623(2);
			break;
		case 2:
			if (func_652(&Local_18, 9))
			{
				func_623(3);
			}
			break;
		case 3:
			if (func_588(&Local_18, 9))
			{
				func_623(4);
			}
			break;
		case 4:
			func_623(5);
			break;
		case 5:
			func_623(6);
			break;
		case 6:
			func_623(7);
			break;
		case 7:
			func_623(8);
			break;
		case 8:
			if (Local_18.f_687.f_1 > 9)
			{
				func_623(9);
			}
			break;
		case 9:
			if (func_619(&Local_18, 30))
			{
				func_623(10);
			}
			break;
		case 10:
			func_623(11);
			break;
		case 11:
			func_623(12);
			break;
		case 12:
			if (func_619(&Local_18, 24) || Local_18.f_1 >= 16)
			{
				func_623(13);
			}
			break;
		case 13:
			if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_487[35]))
			{
				if ((__LIB_1__::func_996(Local_18.f_487[35], 1, 1, 1, 0) || func_521(&(Local_18.f_565), 200)) || func_522(1120403456 /* Float: 100f */, 1106247680 /* Float: 30f */))
				{
					PLAYER::_0x8674D138391FFB1B(PLAYER::PLAYER_ID(), 1);
				}
			}
			if (Local_18.f_687 >= 3)
			{
				func_654(&(Local_18.f_1111));
			}
			if (Local_18.f_1 >= 16)
			{
				func_623(14);
			}
			break;
		case 14:
			if (Local_18.f_687 >= 5)
			{
				func_623(15);
			}
			break;
		case 15:
			func_623(16);
			break;
		case 16:
			func_623(17);
			break;
		case 17:
			func_623(18);
			break;
		case 18:
			if (((__LIB_0__::func_393(Global_35, Local_18.f_565.f_91[11], 0, 1) && !PED::IS_PED_CLIMBING(Global_35)) && !func_538(&(Local_18.f_730), 199)) || __LIB_0__::func_393(Global_35, Local_18.f_565.f_91[10], 0, 1))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, __LIB_2__::func_916(Global_36, func_529(10)), false, true);
				func_623(19);
			}
			break;
		case 19:
			if (__LIB_0__::func_393(Global_35, Local_18.f_565.f_91[10], 0, 1))
			{
				if (Local_18.f_565.f_113 >= 10)
				{
					func_656(&(Local_18.f_565), 1);
				}
				__LIB_0__::func_37(&(Local_18.f_565.f_31[16 /*3*/]));
				Local_18.f_565.f_113 = 0;
				func_623(20);
			}
			break;
		case 20:
			func_641(&(Local_18.f_565), 0);
			func_623(21);
			break;
		case 21:
			return true;
	}
	return false;
}

bool func_224(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = Local_18.f_565.f_112;
	func_642(Global_35, 0, 0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	HUD::_0xC9CAEAEEC1256E54(-1249243147);
	__LIB_17__::func_554(Global_35);
	if (func_569(&(Local_18.f_565)) && iVar0 < 6)
	{
		func_642(Local_18.f_1111.f_40[4], 0, 0);
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(Local_18.f_565.f_87))
		{
			Local_18.f_565.f_87 = TASK::ADD_COVER_POINT(__LIB_17__::func_812(4, 4), func_229(4, 4), 1, 2, 0, false);
		}
		else if (!__LIB_0__::func_163(Local_18.f_1111.f_40[4], -1959848946))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_18.f_1111.f_40[4], __LIB_17__::func_812(4, 4), -1, 1, 0, 0, 1, Local_18.f_565.f_87, 1, 0, 0);
		}
	}
	if (iVar0 > 8)
	{
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_18.f_1111.f_40[4], 1.6f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_18.f_1111.f_40[4], 1.6f);
	}
	if (!INTERIOR::IS_VALID_INTERIOR(Local_18.f_1224))
	{
		Local_18.f_1224 = INTERIOR::GET_INTERIOR_AT_COORDS(func_529(9));
		INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_18.f_1224);
	}
	switch (iVar0)
	{
		case -1:
			return false;
		case 0:
			func_622(uParam0, 3);
			func_646(Global_35, 334, 1);
			func_646(Global_35, 335, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 8, 2, 1);
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK09BX", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_CABINET09X_L", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_CABINET09X_R", false);
			func_623(1);
			break;
		case 1:
			if (Local_18.f_2 >= 5 && func_532(&(Local_18.f_730), 201))
			{
				func_632(&(Local_18.f_121));
				func_623(2);
			}
			break;
		case 2:
			if (func_657(&(Local_18.f_565)) && !func_556(&(Local_18.f_565)))
			{
				__LIB_1__::func_585(&(Local_18.f_565.f_31[17 /*3*/]), 4f);
				Local_18.f_565.f_113 = 4;
			}
			else
			{
				__LIB_1__::func_585(&(Local_18.f_565.f_31[17 /*3*/]), 0f);
			}
			func_623(3);
			break;
		case 3:
			func_633(&(Local_18.f_121), func_227(182), 1, 1);
			if (func_610(&(Local_18.f_565.f_31[17 /*3*/]), 16f, 1, 0) || ((func_659(&(Local_18.f_565), 2) && func_659(&(Local_18.f_565), 3)) && func_659(&(Local_18.f_565), 4)))
			{
				Local_18.f_565.f_113 = 0;
				func_623(4);
			}
			break;
		case 4:
			if (Local_18.f_3 <= 2 && func_610(&(Local_18.f_565.f_31[4 /*3*/]), 3f, 1, 0))
			{
				func_623(5);
			}
			break;
		case 5:
			__LIB_0__::func_37(&(Local_18.f_565.f_31[4 /*3*/]));
			__LIB_9__::func_221(&Local_18, 13);
			func_623(6);
			break;
		case 6:
			func_623(7);
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			bVar1 = true;
			if (!func_636(&Local_18, &(Local_18.f_1111), 1))
			{
				bVar1 = false;
			}
			if (!func_633(&(Local_18.f_121), func_227(182), 1, 1))
			{
				bVar1 = false;
			}
			if (CAM::_0xA2B1C7EF759A63CE() < 1f)
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_623(8);
			}
			break;
		case 8:
			if (func_639(__LIB_3__::func_997(func_227(182)), &(Local_18.f_121)))
			{
				func_623(9);
			}
			break;
		case 9:
			func_258(&Local_18, &(Local_18.f_1111), 1, 0);
			func_623(10);
			break;
		case 10:
			PLAYER::_0x93624B36E8851B42(PLAYER::PLAYER_ID());
			TASK::RESET_SCENARIO_GROUPS_ENABLED();
			func_641(&(Local_18.f_565), 0);
			func_623(11);
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_225(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = Local_18.f_565.f_112;
	if (iVar0 > 0)
	{
		if (iVar0 < 14)
		{
			func_661(&(Local_18.f_565), &(Local_18.f_1111));
		}
		if (iVar0 >= 8 && iVar0 < 14)
		{
			func_633(&(Local_18.f_121), func_227(183), 1, 1);
		}
		if ((iVar0 >= 10 && iVar0 < 15) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			__LIB_1__::func_694(Global_35, __LIB_17__::func_812(5, 6), 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
		}
	}
	if (__LIB_0__::func_266(Global_35, func_529(11), 2f, 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 325, true);
	switch (iVar0)
	{
		case -1:
			return false;
		case 0:
			func_622(uParam0, 4);
			func_623(1);
			break;
		case 1:
			PHYSICS::_0x0348469DAA17576C(Local_18.f_1111.f_40[3]);
			func_640(Local_18.f_1111.f_40[3], __LIB_19__::func_94(5, 3), 2);
			PHYSICS::_0x0348469DAA17576C(Local_18.f_1111.f_40[1]);
			func_640(Local_18.f_1111.f_40[1], __LIB_19__::func_94(5, 4), 2);
			__LIB_1__::func_326(Local_18.f_1111.f_40[0], 869278708, 68916947);
			if (!func_556(&(Local_18.f_565)))
			{
				TASK::TASK_MOUNT_ANIMAL(Local_18.f_1111.f_40[0], Local_18.f_1111.f_40[1], -1, -1, 2f, 1, 0, 0);
			}
			TASK::TASK_GO_TO_WHISTLE(Local_18.f_1111.f_40[1], Local_18.f_1111.f_40[0], 3);
			PHYSICS::_0x0348469DAA17576C(Local_18.f_1111.f_40[5]);
			func_640(Local_18.f_1111.f_40[5], __LIB_19__::func_94(5, 5), 2);
			TASK::TASK_GO_TO_WHISTLE(Local_18.f_1111.f_40[5], Local_18.f_1111.f_40[4], 3);
			func_664(&(Local_18.f_1111), 0, __LIB_0__::func_110());
			func_664(&(Local_18.f_1111), 4, __LIB_0__::func_110());
			func_665(__LIB_0__::func_110(), 10);
			PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_18.f_1111.f_40[0], __LIB_0__::func_110(), true);
			PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_18.f_1111.f_40[4], __LIB_0__::func_110(), true);
			PED::_0xA8A95CECB1906EA2(__LIB_0__::func_110(), 1);
			__LIB_1__::func_585(&(Local_18.f_565.f_31[4 /*3*/]), 0f);
			__LIB_1__::func_585(&(Local_18.f_565.f_31[5 /*3*/]), 0f);
			func_623(2);
			break;
		case 2:
			if (func_610(&(Local_18.f_565.f_31[4 /*3*/]), 1.5f, 1, 0))
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("POLICE_WHISTLE_SINGLE", __LIB_17__::func_812(5, 14), "NBD1_Sounds", false, 0, true, 0);
				func_623(3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_163(Local_18.f_1111.f_40[3], 2043986356) && !__LIB_0__::func_394(Global_35, Local_18.f_1111.f_40[3], 0))
			{
				if (func_610(&(Local_18.f_565.f_31[5 /*3*/]), 3f, 0, 1))
				{
					TASK::TASK_GO_TO_WHISTLE(Local_18.f_1111.f_40[3], Global_35, 3);
				}
			}
			if (func_610(&(Local_18.f_565.f_31[4 /*3*/]), 5f, 1, 1))
			{
				__LIB_0__::func_267(1);
				__LIB_0__::func_395(0);
				__LIB_10__::func_768(0);
				func_668(&(Local_18.f_565), &(Local_18.f_1111));
				LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 0);
				PLAYER::_0xD2DFC9CCA5596A11(0f);
				LAW::_0x07E8B8B20570271C(PLAYER::PLAYER_ID());
				LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_BANK_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
				LAW::_0x956510F8C36B5C64();
				LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_BANK_ROBBERY"), 0, 0, true);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
				func_623(4);
			}
			break;
		case 4:
			func_261(&(Local_18.f_1111), 1);
			func_623(5);
			break;
		case 5:
			func_668(&(Local_18.f_565), &(Local_18.f_1111));
			if (__LIB_0__::func_266(Global_35, func_529(0), 100f, 1, 1))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 128, true);
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			}
			if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_623(6);
			}
			break;
		case 6:
			func_623(7);
			break;
		case 7:
			func_261(&(Local_18.f_1111), 0);
			LAW::_0x55F37F5F3F2475E1();
			__LIB_1__::func_721(7);
			func_623(8);
			break;
		case 8:
			func_632(&(Local_18.f_121));
			func_623(9);
			break;
		case 9:
			func_623(10);
			break;
		case 10:
			if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_623(4);
			}
			else if (__LIB_0__::func_266(Global_35, __LIB_17__::func_812(5, 6), 25f, 1, 1) && __LIB_0__::func_396(Global_35))
			{
				func_623(11);
			}
			else if (__LIB_0__::func_266(Global_35, __LIB_1__::func_546(3), 100f, 1, 1))
			{
				func_623(13);
			}
			break;
		case 11:
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			__LIB_3__::func_638(Global_35, __LIB_19__::func_94(5, 6), 1.25f, -1, 1048576000 /* Float: 0.25f */, 0);
			func_623(12);
			break;
		case 12:
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			if (__LIB_0__::func_266(Global_35, __LIB_17__::func_812(5, 6), 15f, 1, 1))
			{
				__LIB_1__::func_721(7);
				func_623(13);
			}
			break;
		case 13:
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			if (func_538(&(Local_18.f_730), 207))
			{
				if (func_532(&(Local_18.f_730), 207))
				{
					func_623(14);
				}
			}
			else
			{
				func_623(14);
			}
			break;
		case 14:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			func_641(&(Local_18.f_565), 0);
			bVar1 = true;
			if (!func_636(&Local_18, &(Local_18.f_1111), 2))
			{
				bVar1 = false;
			}
			if (!func_633(&(Local_18.f_121), func_227(183), 1, 1))
			{
				bVar1 = false;
			}
			if (CAM::_0xA2B1C7EF759A63CE() < 1f)
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_623(15);
			}
			break;
		case 15:
			if (func_639(__LIB_3__::func_997(func_227(183)), &(Local_18.f_121)))
			{
				func_258(&Local_18, &(Local_18.f_1111), 2, 1);
				func_623(16);
			}
			break;
		case 16:
			func_623(17);
			break;
		case 17:
			func_623(18);
			break;
		case 18:
			func_641(&(Local_18.f_565), 0);
			func_623(19);
			break;
		case 19:
			return true;
	}
	return false;
}

char* func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_CA@CACHR@IG@IG3_Explosives";
		case 1:
			return "SCRIPT_CA@CACHR@IG@IG4_Detonate";
		case 2:
			return "SCRIPT_CA@CACHR@IG@IG4_VaultLoot";
		case 3:
			return "script_story@wnt4@ig@ig32_Arthur_Spool_Pickups";
		case 4:
			return "script_story@wnt4@ig@ig_unapproved";
		case 5:
			return "IDLE_READY_charlesSmith";
		case 6:
			return "IDLE_READY_uncle";
		case 7:
			return "INSTRUCT_ARTHUR_LEFT_charlesSmith";
		case 8:
			return "INSTRUCT_ARTHUR_LEFT_p_cs_fusespool01x";
		case 9:
			return "SET_DYNAMITE_charlesSmith";
		case 10:
			return "SET_DYNAMITE_p_detonator01x";
		case 11:
			return "SET_DYNAMITE_uncle";
		case 12:
			return "ARTHUR_CLIMB_Player_Zero";
		case 13:
			return "ARTHUR_DETONATOR_ENTER_BACK_Player_Zero";
		case 14:
			return "ARTHUR_DETONATOR_ENTER_FRONT_Player_Zero";
		case 15:
			return "ARTHUR_DETONATOR_ENTER_RIGHT_Player_Zero";
		case 16:
			return "IDLE_READY_Player_Zero";
		case 17:
			return "WIRE_DETONATOR_Player_Zero";
		case 18:
			return "CHARLES_TAKE_COVER_IG_CharlesSmith";
		case 19:
			return "CHARLES_DETONATE_IG_CharlesSmith";
		case 20:
			return "CHARLES_CLIMB_IG_CharlesSmith";
		case 21:
			return "charles_enter_vault_ig_charlessmith";
		case 22:
			return "CHARLES_ENTER_VAULT_s_mp_moneybag02x";
		case 23:
			return "CHARLES_ENTER_VAULT_small_vault";
		case 24:
			return "CHARLES_WALL_APPROACH_IG_CharlesSmith";
		case 25:
			return "CHARLES_WALL_IDLE_IG_CharlesSmith";
		case 26:
			return "EXPLOSION_REACT_A_Player_Zero";
		case 27:
			return "EXPLOSION_REACT_B_BACK_IG_CharlesSmith";
		case 28:
			return "ACTION_IG_CharlesSmith";
		case 29:
			return "action_player_zero";
		case 30:
			return "CHARLES_ENTER_LOOT_IG_CharlesSmith";
		case 31:
			return "CHARLES_LOOT_IDLE_01_IG_CharlesSmith";
		case 32:
			return "CHARLES_LOOT_IDLE_02_IG_CharlesSmith";
		case 33:
			return "CHARLES_LOOT_IDLE_03_IG_CharlesSmith";
		case 34:
			return "OPEN_LARGE_VAULT_EASYOPEN_Player_Zero";
		case 35:
			return "OPEN_LARGE_VAULT_EASYOPEN_02_s_vault_med_r_val01x";
		case 36:
			return "OPEN_LARGE_VAULT_EASYOPEN_02_Player_Zero";
		case 37:
			return "OPEN_LARGE_VAULT_ENTER_A_Player_Zero";
		case 38:
			return "OPEN_LARGE_VAULT_ENTER_B_Player_Zero";
		case 39:
			return "OPEN_LARGE_VAULT_LOOP_A_01_Player_Zero";
		case 40:
			return "OPEN_LARGE_VAULT_LOOP_A_02_Player_Zero";
		case 41:
			return "OPEN_LARGE_VAULT_LOOP_A_03_Player_Zero";
		case 42:
			return "OPEN_LARGE_VAULT_LOOP_A_04_Player_Zero";
		case 43:
			return "OPEN_LARGE_VAULT_LOOP_B_01_Player_Zero";
		case 44:
			return "OPEN_LARGE_VAULT_OPEN_A_Player_Zero";
		case 45:
			return "OPEN_LARGE_VAULT_OPEN_B_Player_Zero";
		case 46:
			return "OPEN_SMALL_VAULT_Player_Zero";
		case 47:
			return "w_walk_spool";
		case 48:
			return "b_breakout";
		case 49:
			return "script@common@cnv_camp@cachr@ig3_Explosives@CACHR_EXPLOSIVES_IG3";
		case 50:
			return "script@common@cnv_camp@cachr@ig4_Detonate@Action";
		case 51:
			return "script@common@cnv_camp@cachr@ig4_VaultLoot@ig4_VaultLoot";
		case 52:
			return "script@story@WNT4@ig@ig32_arthur_spool_pickups@ig32_arthur_spool_pickups";
		case 53:
			return "BILLSINGLE";
		case 54:
			return "BILLSINGLE_1";
		case 55:
			return "BILLSINGLE_2";
		case 56:
			return "BILLSINGLE_3";
		case 57:
			return "BILLSINGLE_4";
		case 58:
			return "BILLSTACK";
		case 59:
			return "BILLSTACK_1";
		case 60:
			return "BILLSTACK_2";
		case 61:
			return "BILLSTACK_3";
		case 62:
			return "BILLSTACK_4";
		case 63:
			return "BILLSTACK_5";
		case 64:
			return "BILLSTACK_6";
		case 65:
			return "BILLSTACK_7";
		case 66:
			return "BILLSTACK";
		case 67:
			return "BILLSTACK_1";
		case 68:
			return "BILLSTACK_2";
		case 69:
			return "BILLSTACK_3";
		case 70:
			return "BILLSTACK";
		case 71:
			return "BILLSTACK_1";
		case 72:
			return "BILLSTACK_2";
		case 73:
			return "BILLSTACK_3";
		case 74:
			return "BILLSTACK_4";
		case 75:
			return "BILLSTACK_5";
		case 76:
			return "BILLSTACK_6";
		case 77:
			return "BILLSTACK_1";
		case 78:
			return "BILLSTACK_2";
		case 79:
			return "BILLSTACK_3";
		case 80:
			return "BOND";
		case 81:
			return "BOTTLEJD";
		case 82:
			return "CHAIR_CRATE";
		case 83:
			return "CHAIRFOLDING";
		case 84:
			return "COINCUP_A";
		case 85:
			return "COINCUP_B";
		case 86:
			return "DETONATOR";
		case 87:
			return "DOCUMENTFOLDER";
		case 88:
			return "DYNAMITE_BUNDLE";
		case 89:
			return "DYNAMITE_BUNDLE_1";
		case 90:
			return "FUSESPOOL";
		case 91:
			return "FUSESPOOLWIRE";
		case 92:
			return "GOLDBAR_A";
		case 93:
			return "GOLDBAR_B";
		case 94:
			return "JEWELRYBAG_A";
		case 95:
			return "JEWELRYBAG_B";
		case 96:
			return "KNIFE";
		case 97:
			return "MONEYBAG";
		case 98:
			return "MONEYBAG_1";
		case 99:
			return "MONEYSTACK";
		case 100:
			return "REVOLVER_CATTLEMAN";
		case 101:
			return "SHOTGUN_SAWEDOFF";
		case 102:
			return "UNCLEHAT";
		case 103:
			return "VAULT_MEDIUM";
		case 104:
			return "VAULT_MEDIUM_1";
		case 105:
			return "VAULT_MEDIUM_2";
		case 106:
			return "VAULT_SMALL";
		case 107:
			return "VAULT_SMALL_1";
		case 108:
			return "ARTHUR";
		case 109:
			return "PLAYER_HORSE";
		case 110:
			return "CHARLES";
		case 111:
			return "CHARLES_HORSE";
		case 112:
			return "PATROLMAN";
		case 113:
			return "UNCLE";
		case 114:
			return "UNCLE_HORSE";
		case 115:
			return "pl_charles_idle_enter";
		case 116:
			return "pl_charles_idle_exit";
		case 117:
			return "pl_charles_idle_ready";
		case 118:
			return "pl_instruct_arthur_left";
		case 119:
			return "pl_place_dynamite";
		case 120:
			return "pl_place_dynamite_loop";
		case 121:
			return "pl_set_dynamite";
		case 122:
			return "pl_uncle_idle_enter";
		case 123:
			return "pl_uncle_idle_exit_without_prop";
		case 124:
			return "pl_uncle_idle_exit_with_prop";
		case 125:
			return "pl_uncle_idle_ready_without_prop";
		case 126:
			return "pl_uncle_idle_ready_with_prop";
		case 127:
			return "pl_ARTHUR_CLIMB";
		case 128:
			return "pl_ARTHUR_DETONATOR_ENTER_BACK";
		case 129:
			return "pl_ARTHUR_DETONATOR_ENTER_FRONT";
		case 130:
			return "pl_ARTHUR_DETONATOR_ENTER_RIGHT";
		case 132:
			return "pl_CHARLES_CLIMB";
		case 133:
			return "pl_CHARLES_COVER_IDLE";
		case 134:
			return "pl_CHARLES_COVER_IDLE_2_CHARLES_DETONATE";
		case 135:
			return "pl_CHARLES_COVER_IDLE_2_CHARLES_ENTER_VAULT";
		case 136:
			return "pl_CHARLES_DETONATE";
		case 137:
			return "pl_CHARLES_WALL_APPROACH";
		case 138:
			return "pl_CHARLES_WALL_IDLE";
		case 139:
			return "pl_CHARLES_ENTER_VAULT";
		case 140:
			return "pl_CHARLES_TAKE_COVER";
		case 141:
			return "pl_CHARLES_WALL_IDLE";
		case 142:
			return "pl_EXPLOSION_REACT_A";
		case 143:
			return "pl_EXPLOSION_REACT_B_BACK";
		case 144:
			return "pl_EXPLOSION_REACT_B_LEFT";
		case 145:
			return "pl_EXPLOSION_REACT_C_BACK";
		case 146:
			return "pl_WIRE_DETONATOR";
		case 147:
			return "pl_ACTION";
		case 148:
			return "pl_CHARLES_ENTER_LOOT";
		case 149:
			return "pl_CHARLES_EXIT_LOOT";
		case 150:
			return "pl_CHARLES_GUNSHOT_REACT_01";
		case 151:
			return "pl_CHARLES_GUNSHOT_REACT_02";
		case 152:
			return "pl_CHARLES_GUNSHOT_REACT_03";
		case 153:
			return "pl_CHARLES_GUNSHOT_REACT_04";
		case 154:
			return "pl_CHARLES_LOOT_FAST";
		case 155:
			return "pl_CHARLES_LOOT_IDLE";
		case 156:
			return "pl_CHARLES_LOOT_SLOW";
		case 157:
			return "pl_...";
		case 158:
			return "pl_..._1";
		case 159:
			return "pl_OPEN_LARGE_VAULT_EASYOPEN";
		case 160:
			return "pl_OPEN_LARGE_VAULT_EASYOPEN_1";
		case 161:
			return "pl_OPEN_LARGE_VAULT_ENTER_A";
		case 163:
			return "pl_OPEN_LARGE_VAULT_ENTER_B";
		case 165:
			return "pl_OPEN_LARGE_VAULT_LOOP_A";
		case 167:
			return "pl_OPEN_LARGE_VAULT_LOOP_B";
		case 169:
			return "pl_OPEN_LARGE_VAULT_OPEN_A";
		case 171:
			return "pl_OPEN_LARGE_VAULT_OPEN_B";
		case 173:
			return "pl_OPEN_SMALL_VAULT";
		case 174:
			return "pl_OPEN_SMALL_VAULT_RIGHT";
		case 175:
			return "s_CHARLES_LOOT_SLOW";
		case 176:
			return "s_MUD5_LOO_B";
		case 177:
			return "s_MUD5_LOOT_A";
		case 178:
			return "s_MUD5_LOOT_MED";
		case 179:
			return "s_MUD5_LOOT_SM";
		case 180:
			return "pl_Left_Enter";
		case 181:
			return "CACHR_MCS1";
		case 182:
			return "CACHR_MCS2";
		case 183:
			return "CACHR_EXT";
		case 184:
			return "CABR1_WHERE";
		case 185:
			return "CABR1_CAMP_IDLE";
		case 186:
			return "CABR1_CHAT1";
		case 187:
			return "CABR1_TREES";
		case 188:
			return "CABR1_CUT";
		case 189:
			return "CABR1_CLEAR";
		case 190:
			return "CABR1_SPOOLPICK";
		case 191:
			return "CABR1_BANK_IDLE";
		case 192:
			return "RE_PH_RHD_V3_AGGRO";
		case 193:
			return "PTRL_ALERT";
		case 194:
			return "SICK_BASTARD";
		case 195:
			return "CABR1_DETO_IDLE";
		case 196:
			return "CABR1_DETO_TMOT";
		case 197:
			return "CABR1_VAULT_GO";
		case 198:
			return "CABR1_VAULT_IDL";
		case 199:
			return "CABR1_VAULT_TO";
		case 200:
			return "CABR1_VAULT_DMG";
		case 201:
			return "CABR1_IG4_LOOT";
		case 202:
			return "CABR1_ESC_BEGIN";
		case 203:
			return "CABR1_ESC_CONT";
		case 204:
			return "CABR1_ESC_CLEAR";
		case 205:
			return "CABR1_CHAT2";
		case 206:
			return "CABR1_HOLD_UP";
		case 207:
			return "CABR1_END";
		case 208:
			return "BR1_FAIL_GEN";
		case 209:
			return "BR1_FAIL_ABNDCHR";
		case 210:
			return "BR1_FAIL_ABNDBNK";
		case 212:
			return "BR1_FAIL_PTRL";
		case 213:
			return "BR1_FAIL_ATKCMP";
		case 214:
			return "BR1_FAIL_DEADCHR";
		case 215:
			return "BR1_FAIL_DEDPHRS";
		case 216:
			return "BR1_FAIL_DEADUNC";
		case 217:
			return "BR1_FAIL_FRDWPN";
		case 218:
			return "BR1_FAIL_INJPHRS";
		case 219:
			return "BR1_FAIL_LAWCMP";
		case 211:
			return "BR1_FAIL_LAWWNT";
		case 220:
			return "BR1_FAIL_VLTTMT";
		case 221:
			return "BR1_OBJ_MOUNT";
		case 222:
			return "BR1_OBJ_FOLLOW";
		case 223:
			return "BR1_OBJ_WAITCHR";
		case 224:
			return "BR1_OBJ_RTRNCHR";
		case 225:
			return "BR1_OBJ_RTRNBNK";
		case 226:
			return "BR1_OBJ_PATROL";
		case 227:
			return "BR1_OBJ_RTRNGNG";
		case 228:
			return "BR1_OBJ_JOINCHR";
		case 229:
			return "BR1_OBJ_PKUPSPL";
		case 230:
			return "BR1_OBJ_UNSPOOL";
		case 231:
			return "BR1_OBJ_DTNATE";
		case 232:
			return "BR1_OBJ_ENTRVLT";
		case 233:
			return "BR1_OBJ_LOOT";
		case 234:
			return "BR1_OBJ_ESCLAW";
		case 235:
			return "BR1_OBJ_RNDZVS";
		case 236:
			return "BR1_TXT_BANK";
		case 237:
			return "BR1_TXT_CAMP";
		case 238:
			return "BR1_TXT_DTNATE";
		case 239:
			return "BR1_TXT_DETONTR";
		case 240:
			return "BR1_TXT_FUSESPL";
		case 241:
			return "BR1_TXT_OPEN";
		case 242:
			return "BR1_TXT_PTRLMAN";
		case 243:
			return "RHD_Sheriff";
		case 244:
			return "miss_brob1_patrolLM01";
		case 245:
			return "miss_brob1_patrolLM02";
		case 246:
			return "miss_brob1_patrolLM03";
		case 247:
			return "miss_brob1_patrolLM04";
		case 248:
			return "miss_brob1_patrolLM05";
		case 249:
			return "miss_brob1_patrolLM06";
		case 250:
			return "miss_brob1_patrolLM07";
		case 251:
			return "miss_brob1_patrolLM08";
		case 252:
			return "miss_brob1_patrolPM";
		case 253:
			return "BR1_TXT_PICKUP";
		case 254:
			return "BR1_TXT_PLUNGER";
		case 255:
			return "BR1_TXT_PULDOOR";
		case 256:
			return "DES_rho_bankwall";
		case 257:
			return "0405_U_M_M_RhdSheriff_01";
		case 258:
			return "BR1_TXT_SAFE";
		case 259:
			return "CACHR_Sounds";
		case 260:
			return "DynamiteBox";
		case 261:
			return "BR1_TXT_SPOOL";
		case 262:
			return "BR1_TXT_USE";
		case 263:
			return "BR1_TXT_VAULT";
		case 264:
			return "bankrob01_CharlesGotoStakeout";
		case 265:
			return "bankrob01_CharlesGotoWaitDepart";
		case 266:
			return "bankrob01_CharlesReturnCamp";
		case 267:
			return "bankrob01_PlayerUnspoolFuse";
		case 268:
			return "bankrob01_UncleGotoWaitDepart";
		case 269:
			return "bankrob01_UncleReturnCamp";
		default:
			break;
	}
	return "";
}

float func_229(int iParam0, int iParam1)
{
	return __LIB_3__::func_68(iParam0, iParam1);
}

void func_230(var uParam0, int iParam1, int* iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (bParam6)
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_40[iParam1], bParam7, false);
	}
	__LIB_1__::func_474(uParam0->f_40[iParam1], iParam2, fParam3, fParam4, bParam5, 1);
}

int func_231(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	int iVar0;
	iVar0 = func_267(iParam1);
	if (!__LIB_1__::func_22(iVar0))
	{
		return 1;
	}
	else if (!__LIB_0__::func_272(uParam0->f_40[iParam1], 0))
	{
		return 0;
	}
	if (__LIB_0__::func_866(iVar0, 1))
	{
		__LIB_1__::func_640(iVar0);
	}
	func_65(iVar0, 0, 0, bParam2, fParam3, 1, 1, 0, 0, 0, 0);
	return 0;
}

int func_239(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_65(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (func_681(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_683(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_1__::func_799(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_241(var uParam0)
{
	__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
	return func_694(uParam0, &Local_18);
}

bool func_245(var uParam0)
{
	if (__LIB_0__::func_1(Global_1935630, 2048))
	{
		return false;
	}
	if (func_725(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		__LIB_1__::func_164(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return true;
	}
	return false;
}

int func_249(vector3 vParam0, float fParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_1__::func_837(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_733(0, 0);
		if (__LIB_0__::func_154(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			__LIB_0__::func_713(1, 0);
		}
	}
	else
	{
		__LIB_0__::func_713(1, 0);
	}
	__LIB_0__::func_305(0);
	__LIB_1__::func_617(0, vParam0, fParam3);
	return 1;
}

void func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (STREAMING::DOES_ANIM_DICT_EXIST(func_227(iVar0)))
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED(func_227(iVar0)))
			{
				STREAMING::REMOVE_ANIM_DICT(func_227(iVar0));
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (STREAMING::IS_MODEL_VALID(func_736(iVar1)))
		{
			if (STREAMING::HAS_MODEL_LOADED(func_736(iVar1)))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_736(iVar1));
			}
		}
		iVar1++;
	}
	iVar2 = 264;
	while (iVar2 <= 269)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_227(iVar2)))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(func_227(iVar2));
		}
		iVar2++;
	}
}

void func_255(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_554(uParam0, iVar0);
		iVar0++;
	}
}

void func_256(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 270)
	{
		uParam0->f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_257(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 54)
	{
		if (!func_737(uParam0, iVar0))
		{
			__LIB_3__::func_29(&(uParam0->f_487[iVar0]), 1);
			func_738(uParam0, iVar0, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		func_739(uParam0, 0, iVar1);
		func_739(uParam0, 1, iVar1);
		iVar1++;
	}
	iVar1 = 12;
	while (iVar1 <= 30)
	{
		func_739(uParam0, 2, iVar1);
		func_739(uParam0, 3, iVar1);
		iVar1++;
	}
	iVar1 = 31;
	while (iVar1 <= 52)
	{
		func_739(uParam0, 4, iVar1);
		func_739(uParam0, 5, iVar1);
		func_739(uParam0, 6, iVar1);
		func_739(uParam0, 7, iVar1);
		func_739(uParam0, 8, iVar1);
		iVar1++;
	}
	func_739(uParam0, 9, 58);
}

void func_258(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	switch (iParam2)
	{
		case 0:
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[37], func_740(37));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[33], func_740(33));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[44], func_740(44));
			__LIB_17__::func_820(&(uParam0->f_121), Global_35, func_742(2));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_543[7], "Horse_01^1");
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[0], func_742(0));
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[1], func_742(1));
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[4], func_742(4));
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[5], func_742(5));
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[6], func_742(6));
			__LIB_3__::func_29(&(uParam0->f_487[37]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[33]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[44]), bParam3);
			break;
		case 1:
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[27], func_740(27));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[31], func_740(31));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[32], func_740(32));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[39], func_740(39));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[40], func_740(40));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[41], func_740(41));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[42], func_740(42));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[46], func_740(46));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[44], func_740(44));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[45], func_740(45));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[54], func_740(54));
			__LIB_17__::func_820(&(uParam0->f_121), Global_35, func_742(2));
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[0], func_742(0));
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[4], func_742(4));
			__LIB_3__::func_29(&(uParam0->f_487[27]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[31]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[32]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[39]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[40]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[41]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[42]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[46]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[44]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[45]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[54]), bParam3);
			break;
		case 2:
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[0], func_740(0));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[1], func_740(1));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[2], func_740(2));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[3], func_740(3));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[4], func_740(4));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[5], func_740(5));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[6], func_740(6));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[7], func_740(6));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[44], func_740(44));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_487[45], func_740(45));
			__LIB_17__::func_820(&(uParam0->f_121), Global_35, func_742(2));
			__LIB_17__::func_820(&(uParam0->f_121), uParam0->f_543[7], "Horse_01^2");
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[0], func_742(0));
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[1], "Horse_01^1");
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[4], func_742(4));
			__LIB_17__::func_820(&(uParam0->f_121), uParam1->f_40[5], func_742(5));
			__LIB_3__::func_29(&(uParam0->f_487[0]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[1]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[2]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[3]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[4]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[5]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[6]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[44]), bParam3);
			__LIB_3__::func_29(&(uParam0->f_487[45]), bParam3);
			break;
	}
}

void func_259(bool bParam0)
{
	__LIB_1__::func_948(2058564250, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-1152844617, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-977211145, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-1206757990, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(1634148892, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-811723029, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-1862376969, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(972368328, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(1060413677, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(743565308, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(393076024, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_GUNSMITH_HALL"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(934926308, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-1247339802, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(2046695029, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(834296435, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(1124531468, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(717342088, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-360567618, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-1905757044, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(2040679168, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(870793095, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-1482639045, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-902483455, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-566797819, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(1544280705, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-1847993131, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(1469250492, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(678501753, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-1079073283, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(-860602360, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(1614494720, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(349074475, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(1878514758, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_BACK_L"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_BACK_MIDDLE"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_BACK_MIDDLE_R"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(1567970773, bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_BOOTHS"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_FRONT_L"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_FRONT_R"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_LEFT"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_NOENTRY1"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_NOENTRY2"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_OUTER_LEFT"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_OUTER_RIGHT"), bParam0, 0, 0, !bParam0, 0, 0, 0);
	if (bParam0)
	{
		__LIB_10__::func_681(1, 1);
	}
}

void func_260(var uParam0, bool bParam1)
{
	func_646(uParam0->f_40[0], 130, bParam1);
	func_646(uParam0->f_40[0], 297, !bParam1);
	func_646(uParam0->f_40[0], 153, bParam1);
	func_646(uParam0->f_40[0], 245, bParam1);
	func_745(uParam0->f_40[1], 0, bParam1);
	func_745(uParam0->f_40[1], 3, bParam1);
	func_745(uParam0->f_40[1], 4, bParam1);
	func_646(uParam0->f_40[4], 130, bParam1);
	func_646(uParam0->f_40[4], 297, !bParam1);
	func_646(uParam0->f_40[4], 153, bParam1);
	func_646(uParam0->f_40[4], 245, bParam1);
	func_745(uParam0->f_40[5], 0, bParam1);
	func_745(uParam0->f_40[5], 3, bParam1);
	func_745(uParam0->f_40[5], 4, bParam1);
	func_745(uParam0->f_40[3], 2, bParam1);
	func_745(uParam0->f_40[3], 3, bParam1);
	if (!bParam1)
	{
		func_646(Global_35, 43, 0);
		func_646(Global_35, 130, 0);
		func_646(Global_35, 249, 0);
		func_646(Global_35, 334, 0);
		func_646(Global_35, 335, 0);
		func_646(Global_35, 352, 0);
		func_646(Global_35, 404, 0);
		func_646(uParam0->f_40[0], 279, 0);
		func_646(uParam0->f_40[0], 280, 0);
		func_646(uParam0->f_40[0], 167, 0);
		func_646(uParam0->f_40[4], 279, 0);
		func_646(uParam0->f_40[4], 280, 0);
		func_646(uParam0->f_40[4], 167, 0);
	}
}

void func_261(var uParam0, bool bParam1)
{
	func_583(Global_35, bParam1);
	func_583(uParam0->f_40[0], bParam1);
	func_583(uParam0->f_40[4], bParam1);
}

void func_262(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (ENTITY::_0x1FF441D7954F8709(uParam0->f_481[iVar0]))
		{
			ENTITY::_0xD2B9C78537ED5759(uParam0->f_481[iVar0]);
		}
		iVar0++;
	}
}

void func_265(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_754(uParam0, iParam1, iParam2))
		{
			PED::_SET_PED_BODY_COMPONENT(uParam0->f_40[iParam1], func_755(iParam2));
			PED::_UPDATE_PED_VARIATION(uParam0->f_40[iParam1], false, true, true, true, false);
			func_624(uParam0, iParam1, iParam2, 1);
		}
	}
	else if (func_754(uParam0, iParam1, iParam2))
	{
		PED::_0xA2F8B3B5FEDFC100(uParam0->f_40[iParam1], func_755(iParam2));
		PED::_UPDATE_PED_VARIATION(uParam0->f_40[iParam1], false, true, true, true, false);
		func_624(uParam0, iParam1, iParam2, 0);
	}
}

void func_266(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, iParam1, true);
		}
	}
	else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, iParam1, true);
	}
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 4:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_274(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	LAW::_0x9C8A2BF37E966464(PLAYER::PLAYER_ID(), iVar0);
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
	{
		iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			PED::DELETE_PED(&iVar2);
		}
		iVar1++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
	iVar3 = 7;
	while (iVar3 <= 18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_40[iVar3]))
		{
			PED::DELETE_PED(&(uParam0->f_40[iVar3]));
		}
		iVar3++;
	}
}

char* func_278(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "CABR01_START";
		case 2:
			return "CABR01_ARRIVE";
		case 3:
			return "CABR01_GUARD";
		case 4:
			return "CABR01_RETURN";
		case 5:
			return "CABR01_SPOOL";
		case 6:
			return "CABR01_DETONATOR";
		case 7:
			return "CABR01_EXPLOSION";
		case 8:
			return "CABR01_ESCAPE_CS";
		case 9:
			return "CABR01_WANTED";
		case 10:
			return "CABR01_ESCAPED";
		case 11:
			return "CABR01_STOP";
		case 12:
			return "CABR01_FAIL";
		default:
			break;
	}
	return "";
}

void func_435()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_919(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_919(1);
}

void func_436()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_131(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_437()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_922(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_922(1);
}

void func_438()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_922(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_922(1);
}

void func_439()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_131(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_131(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_442(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_442(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

int func_442(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_0__::func_937(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_442(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_483(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_967(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_131(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

bool func_510(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 64);
}

bool func_511(var uParam0)
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_264, false));
}

bool func_512(var uParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	char[] cVar0[8];
	cVar0 = func_227(iParam1);
	if (!func_992(cVar0, iParam2))
	{
		return false;
	}
	if ((iParam2 == 0 || iParam2 == 1) || iParam2 == 4)
	{
		if (iParam2 == 4 && func_542(uParam0, iParam1))
		{
			__LIB_0__::func_37(&(uParam0->f_374));
			return true;
		}
		if (__LIB_0__::func_481(1) || __LIB_0__::func_270())
		{
			return false;
		}
	}
	if (fParam3 > 0f && !func_610(&(uParam0->f_374), fParam3, 1, 0))
	{
		return false;
	}
	switch (iParam2)
	{
		case 0:
			if (__LIB_2__::func_813(&(uParam0->f_276), __LIB_1__::func_344(cVar0), 0, -1, 0, 0))
			{
				func_997(uParam0, iParam1, bParam4);
			}
			else
			{
				func_997(uParam0, iParam1, 0);
				return false;
			}
			break;
		case 1:
			if (__LIB_2__::func_813(&(uParam0->f_276), __LIB_1__::func_344(cVar0), 0, -1, 0, 0))
			{
			}
			else
			{
				return false;
			}
			break;
		case 2:
			__LIB_0__::func_82(1, 0, 0);
			func_999();
			if (__LIB_2__::func_813(&(uParam0->f_276), __LIB_1__::func_344(cVar0), 0, -1, 0, 0))
			{
				func_997(uParam0, iParam1, bParam4);
			}
			else
			{
				func_997(uParam0, iParam1, 0);
				return false;
			}
			break;
		case 3:
			Global_1347343.f_3 = { __LIB_0__::func_482(cVar0) };
			func_527(uParam0, iParam1, bParam4);
			break;
		case 4:
			__LIB_1__::func_422(cVar0, 7500, 1, 1, 0, 0, -1, -1, 0);
			func_1002(uParam0, iParam1, bParam4);
			break;
		case 5:
			__LIB_1__::func_422(cVar0, 7500, 1, 1, 0, 0, -1, -1, 0);
			func_1002(uParam0, iParam1, bParam4);
			break;
	}
	if (iParam2 == 4 || iParam2 == 5)
	{
		if (uParam0->f_2 != iParam1)
		{
			if (uParam0->f_1 != uParam0->f_2)
			{
				uParam0->f_1 = uParam0->f_2;
			}
			uParam0->f_2 = iParam1;
		}
	}
	__LIB_0__::func_37(&(uParam0->f_374));
	return true;
}

void func_513(var uParam0, bool bParam1)
{
	func_1003(uParam0, 64, bParam1);
}

bool func_518(var uParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	return __LIB_0__::func_48(uParam0->f_40[iParam1], uParam0->f_40[iParam2], fParam3, bParam4);
}

void func_519(var uParam0, bool bParam1)
{
	func_1003(uParam0, 32, bParam1);
}

bool func_520(var uParam0, int iParam1)
{
	return func_1010(uParam0, iParam1, 2);
}

bool func_521(var uParam0, int iParam1)
{
	if (PED::_0x5203038FF8BAE577(Global_35, 46, iParam1) || PED::_0x5203038FF8BAE577(Global_35, 55, iParam1))
	{
		if (uParam0->f_19 == 0)
		{
			uParam0->f_19 = __LIB_0__::func_399(Global_35, 1, 0, 0);
		}
		else
		{
			return ((((!WEAPON::_0x5809DBCA0A37C82B(uParam0->f_19) && uParam0->f_19 != joaat("WEAPON_THROWN_THROWING_KNIVES")) && uParam0->f_19 != joaat("WEAPON_THROWN_TOMAHAWK")) && uParam0->f_19 != joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT")) && uParam0->f_19 != joaat("WEAPON_UNARMED"));
		}
	}
	else if (uParam0->f_19 != 0)
	{
		uParam0->f_19 = 0;
	}
	return false;
}

bool func_522(float fParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, fParam0, fParam0, fParam1) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -fParam0, -fParam0, -fParam1) };
	return FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, vVar0, vVar3, fParam0) == __LIB_0__::func_57(Global_35);
}

bool func_523(var uParam0, int iParam1)
{
	return func_1012(uParam0, iParam1, 8);
}

bool func_524(var uParam0, int iParam1)
{
	return func_1012(uParam0, iParam1, 16);
}

bool func_525(var uParam0, int iParam1)
{
	return func_1012(uParam0, iParam1, 4);
}

bool func_526(var uParam0)
{
	return (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 1064, 0) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == uParam0->f_40[6]);
}

void func_527(var uParam0, int iParam1, bool bParam2)
{
	func_1013(uParam0, iParam1, 2, bParam2);
}

void func_528(var uParam0, int iParam1, bool bParam2)
{
	func_1014(uParam0, iParam1, 4, bParam2);
}

Vector3 func_529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1289.174f, -1305.588f, 78.55461f;
		case 1:
			return 1289.01f, -1315.91f, 78.562f;
		case 2:
			return 1292.076f, -1318.483f, 78.5622f;
		case 3:
			return 1283.986f, -1335.099f, 77.50442f;
		case 4:
			return 1851.8f, -1836.5f, 43f;
		case 5:
			return 1394.433f, -1313.324f, 80f;
		case 6:
			return 1327.497f, -1329.895f, 79f;
		case 7:
			return 1316.8f, -1242.581f, 78f;
		case 8:
			return 1431.622f, -1431.545f, 79.57056f;
		case 9:
			return 1285.35f, -1312.86f, 78.27924f;
		case 10:
			return 1285.104f, -1312.597f, 77.08605f;
		case 11:
			return 1288.937f, -1316.071f, 79.16551f;
		case 12:
			return 1287.76f, -1314.827f, 77.01488f;
		case 13:
			return 1287.057f, -1315.633f, 77.01488f;
		case 14:
			return 1286.313f, -1315.43f, 77.01488f;
		case 16:
			return 1288.641f, -1315.823f, 77.45092f;
		case 17:
			return 1289.435f, -1316.491f, 76.89983f;
		case 18:
			return __LIB_17__::func_812(3, 2);
		case 19:
			return __LIB_17__::func_812(3, 4);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_530(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 8192);
}

bool func_531(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 4096);
}

bool func_532(var uParam0, int iParam1)
{
	return (func_538(uParam0, iParam1) && !__LIB_1__::func_322(func_227(iParam1)));
}

bool func_535(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 32);
}

bool func_537(int iParam0)
{
	return (iParam0 >= 20 && iParam0 <= 24);
}

bool func_538(var uParam0, int iParam1)
{
	return func_1010(uParam0, iParam1, 1);
}

void func_539(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_4 != iParam1)
	{
		if (func_1017(uParam0->f_4))
		{
			uParam0->f_3 = uParam0->f_4;
		}
		uParam0->f_4 = iParam1;
	}
	if (bParam2)
	{
		__LIB_0__::func_37(&(uParam0->f_374));
	}
	if (bParam3)
	{
		func_999();
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	}
}

void func_540(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (func_1018(uParam1, uParam2, iParam3))
	{
		if (!func_1019(uParam2, iParam3))
		{
			iVar0 = func_1020(uParam1, uParam2, iParam3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam2->f_40[iParam3], iVar0, -1, 33794, 51, 1);
				func_1021(uParam2, iParam3, 1);
			}
		}
	}
	else if (func_610(&(uParam0->f_31[func_1022(iParam3) /*3*/]), 1f, 1, 1))
	{
		if (func_1019(uParam2, iParam3))
		{
			TASK::TASK_CLEAR_LOOK_AT(uParam2->f_40[iParam3]);
			func_1021(uParam2, iParam3, 0);
		}
	}
}

bool func_541(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x1F0E401031E20146(uParam0->f_552[iParam1], func_1023(iParam2));
}

bool func_542(var uParam0, int iParam1)
{
	return func_1010(uParam0, iParam1, 4);
}

void func_544(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_8__::func_957(&(uParam0->f_730), 1))
		{
			__LIB_3__::func_334(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = MAP::_BLIP_ADD_FOR_COORD(408396114, func_529(0));
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_730.f_377[0], func_227(236));
			MAP::_BLIP_SET_MODIFIER(uParam0->f_730.f_377[0], 231194138);
			func_1003(&(uParam0->f_730), 1, 1);
		}
	}
	else if (__LIB_8__::func_957(&(uParam0->f_730), 1))
	{
		func_1003(&(uParam0->f_730), 1, 0);
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_8__::func_957(&(uParam0->f_730), 4))
		{
			__LIB_3__::func_334(&(uParam0->f_730.f_377));
			if (!__LIB_1__::func_685(func_267(0)))
			{
				__LIB_0__::func_900(func_267(0));
			}
			else
			{
				func_1003(&(uParam0->f_730), 4, 1);
			}
		}
	}
	else if (__LIB_8__::func_957(&(uParam0->f_730), 4))
	{
		if (__LIB_1__::func_685(func_267(0)))
		{
			__LIB_0__::func_745(func_267(0));
		}
		else
		{
			func_1003(&(uParam0->f_730), 4, 0);
		}
	}
}

void func_546(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_8__::func_957(&(uParam0->f_730), 8))
		{
			__LIB_3__::func_334(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = MAP::_BLIP_ADD_FOR_ENTITY(408396114, uParam0->f_487[33]);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_730.f_377[0], func_227(239));
			MAP::_BLIP_SET_MODIFIER(uParam0->f_730.f_377[0], 231194138);
			func_1003(&(uParam0->f_730), 8, 1);
		}
	}
	else if (__LIB_8__::func_957(&(uParam0->f_730), 8))
	{
		func_1003(&(uParam0->f_730), 8, 0);
	}
}

void func_547(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_8__::func_957(&(uParam0->f_730), 16))
		{
			__LIB_3__::func_334(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = MAP::_BLIP_ADD_FOR_ENTITY(408396114, uParam0->f_487[37]);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_730.f_377[0], func_227(240));
			MAP::_BLIP_SET_MODIFIER(uParam0->f_730.f_377[0], 231194138);
			func_1003(&(uParam0->f_730), 16, 1);
		}
	}
	else if (__LIB_8__::func_957(&(uParam0->f_730), 16))
	{
		func_1003(&(uParam0->f_730), 16, 0);
	}
}

void func_548(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_8__::func_957(&(uParam0->f_730), 32))
		{
			__LIB_3__::func_334(&(uParam0->f_730.f_377));
			if (!__LIB_1__::func_587(7))
			{
				__LIB_1__::func_718(7);
			}
			else
			{
				func_1003(&(uParam0->f_730), 32, 1);
			}
		}
	}
	else if (__LIB_8__::func_957(&(uParam0->f_730), 32))
	{
		if (__LIB_1__::func_587(7))
		{
			__LIB_1__::func_721(7);
		}
		else
		{
			func_1003(&(uParam0->f_730), 32, 0);
		}
	}
}

void func_549(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_8__::func_957(&(uParam0->f_730), 2))
		{
			__LIB_3__::func_334(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = __LIB_10__::func_860(408396114, __LIB_17__::func_812(5, 6), 1109393408 /* Float: 40f */, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_730.f_377[0], func_227(237));
			MAP::_BLIP_SET_MODIFIER(uParam0->f_730.f_377[0], 231194138);
			func_1003(&(uParam0->f_730), 2, 1);
		}
	}
	else if (__LIB_8__::func_957(&(uParam0->f_730), 2))
	{
		func_1003(&(uParam0->f_730), 2, 0);
	}
}

void func_550(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		if (!__LIB_8__::func_957(&(uParam0->f_730), 64))
		{
			__LIB_3__::func_334(&(uParam0->f_730.f_377));
			func_1003(&(uParam0->f_730), 64, 1);
		}
		else
		{
			iVar0 = 0;
			iVar1 = 2;
			while (iVar1 <= 4)
			{
				iVar2 = iVar0;
				if (func_1031(&(uParam0->f_565), iVar1) || (iVar1 == 2 && func_1032(&(uParam0->f_565))))
				{
					__LIB_0__::func_325(&(uParam0->f_730.f_377[iVar2]));
					iVar0++;
					Jump @239; //curOff = 128
				}
				else if (!MAP::DOES_BLIP_EXIST(uParam0->f_730.f_377[iVar2]))
				{
					uParam0->f_730.f_377[iVar2] = __LIB_1__::func_863(uParam0->f_1224.f_1[iVar1], 203020899, 1, 1);
					MAP::_BLIP_SET_MODIFIER(uParam0->f_730.f_377[iVar2], 231194138);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_730.f_377[iVar2], func_227(258));
				}
				iVar0++;
				iVar1++;
			}
		}
	}
	else if (__LIB_8__::func_957(&(uParam0->f_730), 64))
	{
		func_1003(&(uParam0->f_730), 64, 0);
	}
}

void func_551(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_8__::func_957(&(uParam0->f_730), 128))
		{
			__LIB_3__::func_334(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = MAP::_0xA6EF0C54A3443E70(408396114, uParam0->f_565.f_91[9]);
			MAP::_BLIP_SET_MODIFIER(uParam0->f_730.f_377[0], 231194138);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_730.f_377[0], func_227(263));
			func_1003(&(uParam0->f_730), 128, 1);
		}
	}
	else if (__LIB_8__::func_957(&(uParam0->f_730), 128))
	{
		func_1003(&(uParam0->f_730), 128, 0);
	}
}

bool func_552(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_2 > iParam1 || (uParam0->f_2 == iParam1 && uParam0->f_112 >= iParam2));
}

void func_553(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_8__::func_957(&(uParam0->f_730), 256))
		{
			uParam0->f_692.f_34 = MAP::_BLIP_ADD_FOR_RADIUS(693035517, __LIB_17__::func_812(3, 7), 30f);
			MAP::_BLIP_SET_MODIFIER(uParam0->f_692.f_34, 231194138);
			func_1034(2);
			__LIB_16__::func_204();
			__LIB_2__::func_701(3);
			func_1003(&(uParam0->f_730), 256, 1);
		}
	}
	else if (__LIB_8__::func_957(&(uParam0->f_730), 256))
	{
		__LIB_0__::func_325(&(uParam0->f_692.f_34));
		__LIB_4__::func_679();
		func_1003(&(uParam0->f_730), 256, 0);
	}
}

void func_554(var uParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_565.f_91[iParam1]))
	{
		return;
	}
	switch (iParam1)
	{
		case 15:
			PATHFIND::_0xE5EF9DE716FF737E(uParam0->f_565.f_91[15], 1, 0);
			PATHFIND::_0xD17672447692478E(uParam0->f_565.f_91[15], 0);
			__LIB_0__::func_484(&(uParam0->f_565.f_90), uParam0->f_565.f_91[15], 0);
			break;
		case 4:
			if (PATHFIND::_0xDE0EA444735C1368(uParam0->f_565.f_91[4]))
			{
				PATHFIND::_0x2C87C3E1C7B96EE2(uParam0->f_565.f_91[4]);
			}
			break;
		case 16:
		case 17:
		case 18:
		case 19:
			VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_565.f_91[iParam1], 0);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_565.f_91[iParam1]);
			break;
	}
	VOLUME::_DELETE_VOLUME(uParam0->f_565.f_91[iParam1]);
}

bool func_556(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 2);
}

void func_557(var uParam0, int iParam1)
{
	if (uParam0->f_4 != iParam1)
	{
		uParam0->f_4 = iParam1;
	}
}

bool func_558(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 16384);
}

void func_559(var uParam0)
{
	if (!func_1038(uParam0, uParam0->f_4))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(func_278(uParam0->f_4)))
		{
			AUDIO::TRIGGER_MUSIC_EVENT(func_278(uParam0->f_4));
			func_1039(uParam0, uParam0->f_4, 1);
		}
	}
}

bool func_560(var uParam0, int iParam1)
{
	return ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_552[iParam1]);
}

void func_561(var uParam0, int iParam1)
{
	ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_552[iParam1]);
}

bool func_562(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 4);
}

void func_563(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 54)
	{
		func_1040(uParam0, uParam1, iParam2, iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		func_1041(uParam1, iParam2, iVar1);
		iVar1++;
	}
	switch (iParam2)
	{
		case 0:
		case 1:
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				func_1042(uParam1, iParam2, iVar2);
				iVar2++;
			}
			break;
		case 2:
		case 3:
			iVar2 = 12;
			while (iVar2 <= 30)
			{
				func_1042(uParam1, iParam2, iVar2);
				iVar2++;
			}
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			iVar2 = 31;
			while (iVar2 <= 52)
			{
				func_1042(uParam1, iParam2, iVar2);
				iVar2++;
			}
			break;
		case 9:
			func_1042(uParam1, iParam2, 58);
			break;
	}
}

bool func_565(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 != -1 && !func_1043(iParam1, iParam3))
	{
	}
	else if (!func_560(uParam0, iParam1))
	{
		uParam0->f_552[iParam1] = func_1044(iParam1, iParam2, iParam3);
	}
	else if (!func_1045(uParam0, iParam1, 1, 0))
	{
		if (!func_1046(uParam0, iParam1))
		{
			func_1047(uParam0, iParam1);
		}
	}
	else if (!func_1048(uParam0, iParam1))
	{
	}
	else
	{
		return true;
	}
	return false;
}

bool func_566(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_560(uParam0, iParam1))
	{
		return false;
	}
	else if (!func_1045(uParam0, iParam1, 1, 0))
	{
		return false;
	}
	if (func_1049(uParam0, iParam1, 0))
	{
		if (func_1050(uParam0, iParam1, 0))
		{
			func_568(uParam0, iParam1, 0, 0);
		}
	}
	iVar0 = 1;
	if ((iParam1 >= 4 && iParam1 <= 8) && iParam1 != 5)
	{
		switch (iParam1)
		{
			case 4:
				iVar1 = 53;
				break;
			case 6:
				iVar1 = 56;
				break;
			case 7:
				iVar1 = 55;
				break;
			case 8:
				iVar1 = 57;
				break;
		}
		if (!func_1051(uParam0, iParam1, iVar1))
		{
			return false;
		}
		else if (iParam1 == 7)
		{
			if (!func_1051(uParam0, 7, 54))
			{
				return false;
			}
		}
	}
	iVar2 = 0;
	while (iVar2 <= 54)
	{
		if (((!func_1052(iParam1, iVar2) || !func_1053(uParam0, iParam1, iVar2)) || func_737(uParam0, iVar2)) || (iVar2 == 53 && iParam1 == 4))
		{
		}
		else if (!func_1054(uParam0, iParam1, iVar2))
		{
			iVar0 = 0;
		}
		else if (func_579(uParam0, iParam1, iVar2, 0) != uParam0->f_487[iVar2])
		{
			if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_487[iVar2]))
			{
				func_580(uParam0, iParam1, iVar2, uParam0->f_487[iVar2], 0);
			}
			iVar0 = 0;
		}
		iVar2++;
	}
	if (uParam0->f_543[0] != Global_35)
	{
		uParam0->f_543[0] = Global_35;
		iVar0 = 0;
	}
	if (uParam0->f_543[2] != uParam0->f_1111.f_40[0])
	{
		uParam0->f_543[2] = uParam0->f_1111.f_40[0];
		iVar0 = 0;
	}
	if (uParam0->f_543[5] != uParam0->f_1111.f_40[4])
	{
		uParam0->f_543[5] = uParam0->f_1111.f_40[4];
		iVar0 = 0;
	}
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (!func_1055(iParam1, iVar3) || !func_1056(uParam0, iParam1, iVar3))
		{
		}
		else if (func_1057(uParam0, iParam1, iVar3, 0) != uParam0->f_543[iVar3])
		{
			func_585(uParam0, iParam1, iVar3, uParam0->f_543[iVar3], 0);
			iVar0 = 0;
		}
		iVar3++;
	}
	return iVar0;
}

bool func_567(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_560(uParam0, iParam1))
	{
		if (func_652(uParam0, iParam1) || func_588(uParam0, iParam1))
		{
			return true;
		}
	}
	if (!func_565(uParam0, iParam1, iParam2, -1))
	{
		return false;
	}
	else if (!func_566(uParam0, iParam1))
	{
		return false;
	}
	if (iParam3 != -1)
	{
		if (!func_1051(uParam0, iParam1, iParam3))
		{
			return false;
		}
		else if (!func_574(uParam0, iParam1, iParam3))
		{
			return false;
		}
	}
	if (!func_588(uParam0, iParam1))
	{
		func_1058(uParam0, iParam1);
	}
	return false;
}

void func_568(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1059(iParam1, iParam2))
	{
	}
	else if (!func_560(uParam0, iParam1))
	{
	}
	else if (!func_1049(uParam0, iParam1, iParam2))
	{
	}
	if (bParam3)
	{
		if (!func_1050(uParam0, iParam1, iParam2))
		{
			func_1060(uParam0, iParam1, iParam2, 1);
		}
	}
	else if (func_1050(uParam0, iParam1, iParam2))
	{
		func_1060(uParam0, iParam1, iParam2, 0);
	}
}

bool func_569(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 2097152);
}

bool func_570(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_552[iParam1], func_1061(iParam2));
}

void func_571(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(iParam0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
		}
	}
	else if (ENTITY::_IS_ENTITY_FROZEN(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	}
}

void func_572(var uParam0, bool bParam1)
{
	func_1003(uParam0, 2097152, bParam1);
}

bool func_573(var uParam0, int iParam1)
{
	var uVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_565.f_91[iParam1]))
	{
		return true;
	}
	if (func_1062(iParam1))
	{
		uParam0->f_565.f_91[iParam1] = VOLUME::_CREATE_VOLUME_AGGREGATE();
	}
	else if (func_1063(iParam1))
	{
		uParam0->f_565.f_91[iParam1] = VOLUME::_0x0EB78C2B156635B1(func_1064(iParam1), func_529(iParam1), func_1065(iParam1), func_1066(iParam1));
	}
	else
	{
		uParam0->f_565.f_91[iParam1] = VOLUME::_CREATE_VOLUME_BY_HASH(func_1064(iParam1), func_529(iParam1), func_1065(iParam1), func_1066(iParam1));
	}
	switch (iParam1)
	{
		case 16:
		case 17:
			POPULATION::_0xB56D41A694E42E86(uParam0->f_565.f_91[iParam1], 10208, 0, 0, -1, -1, 2);
			VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_565.f_91[iParam1], 1);
			break;
		case 18:
		case 19:
			POPULATION::_0xB56D41A694E42E86(uParam0->f_565.f_91[iParam1], 10208, 0, 0, -1, -1, 2);
			VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_565.f_91[iParam1], 1);
			if (iParam1 == 18)
			{
				uVar0 = uParam0->f_1111.f_40[0];
			}
			else if (iParam1 == 19)
			{
				uVar0 = uParam0->f_1111.f_40[4];
			}
			PED::_0x7C00CFC48A782DC0(uParam0->f_565.f_91[iParam1], uVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			break;
		case 4:
			if (!PATHFIND::_0xDE0EA444735C1368(uParam0->f_565.f_91[4]))
			{
				PATHFIND::_0x19C7567D2F2287D6(uParam0->f_565.f_91[4], 7);
			}
			break;
		case 15:
			VOLUME::_0x6E0D3C3F828DA773(uParam0->f_565.f_91[15], uParam0->f_565.f_91[5]);
			VOLUME::_0x6E0D3C3F828DA773(uParam0->f_565.f_91[15], uParam0->f_565.f_91[6]);
			VOLUME::_0x6E0D3C3F828DA773(uParam0->f_565.f_91[15], uParam0->f_565.f_91[7]);
			VOLUME::_0x6E0D3C3F828DA773(uParam0->f_565.f_91[15], uParam0->f_565.f_91[8]);
			PATHFIND::_0xE5EF9DE716FF737E(uParam0->f_565.f_91[15], 0, 1);
			PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_565.f_91[15], 0, 0, 0);
			if (!PED::_0x91A5F9CBEBB9D936(uParam0->f_565.f_90))
			{
				uParam0->f_565.f_90 = __LIB_1__::func_391(uParam0->f_565.f_91[15], 0, 0, 647168);
			}
			break;
	}
	return VOLUME::_DOES_VOLUME_EXIST(uParam0->f_565.f_91[iParam1]);
}

bool func_574(var uParam0, int iParam1, int iParam2)
{
	if (!func_1043(iParam1, iParam2))
	{
	}
	else if (!func_560(uParam0, iParam1))
	{
	}
	else if (!func_1068(uParam0, iParam1, iParam2))
	{
	}
	else if (!func_541(uParam0, iParam1, iParam2))
	{
		func_1069(uParam0, iParam1, iParam2, 1);
	}
	return func_541(uParam0, iParam1, iParam2);
}

bool func_575(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_619(uParam0, iParam2))
	{
		return true;
	}
	else if (!func_560(uParam0, iParam1))
	{
	}
	else if (!func_541(uParam0, iParam1, iParam2))
	{
	}
	else if (func_594(uParam0, iParam1, 1f))
	{
		func_612(uParam0, iParam2, bParam3);
		return true;
	}
	return false;
}

float func_576(int iParam0, int iParam1, int iParam2)
{
	return ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, func_1070(iParam1), func_1071(iParam2));
}

void func_577(var uParam0, bool bParam1)
{
	func_1003(uParam0, 8388608, bParam1);
}

void func_578(var uParam0, bool bParam1)
{
	func_1003(uParam0, 4194304, bParam1);
}

int func_579(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	return ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_552[iParam1], func_1072(iParam2), bParam3);
}

void func_580(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_552[iParam1], func_1072(iParam2), iParam3, iParam4);
}

int func_581(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, float fParam5, float fParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	return func_1073(uParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), sParam2, iParam3, sParam4, fParam5, fParam6);
}

void func_582(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

void func_583(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (PED::_GET_PED_BLACKBOARD_FLOAT(iParam0, "Stealth") != 1f)
		{
			PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, "Stealth", 1f, -1);
		}
	}
	else if (PED::_GET_PED_BLACKBOARD_FLOAT(iParam0, "Stealth") > 0f)
	{
		PED::_0x411189E51B8020BA(iParam0, "Stealth");
	}
}

void func_584(var uParam0, bool bParam1)
{
	func_1003(uParam0, 16, bParam1);
}

void func_585(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_552[iParam1], func_1061(iParam2), iParam3, iParam4);
}

bool func_587(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_1043(iParam1, iParam2))
	{
	}
	else if (!ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_552[iParam1], func_1061(0)))
	{
		if (!__LIB_0__::func_163(Global_35, 1369124074))
		{
			TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_552[iParam1], func_1061(0), func_1023(iParam2), 1069379748 /* Float: 1.48f */, iParam3, iParam4, iParam5, -1082130432 /* Float: -1f */);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_588(var uParam0, int iParam1)
{
	return ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_552[iParam1], false);
}

bool func_590(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	fVar0 = 0.2f;
	iVar1 = 1;
	iVar2 = func_1074(iParam2);
	iVar3 = func_1075(iVar2);
	vVar4 = { func_1076(iParam2) };
	if (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vVar4, fVar0, iVar3, false))
	{
		iVar1 = 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_487[iVar2]))
	{
		if (uParam0->f_481[iParam2] == 0)
		{
			uParam0->f_481[iParam2] = ENTITY::_0x6F3068258A499E52(iVar3, vVar4, 15);
		}
		if (uParam0->f_481[iParam2] != 0)
		{
			if (ENTITY::_0x1FF441D7954F8709(uParam0->f_481[iParam2]))
			{
				iVar7 = ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_481[iParam2]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					uParam1->f_1[iParam2] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar7);
					uParam0->f_487[iVar2] = uParam1->f_1[iParam2];
				}
			}
		}
		iVar1 = 0;
	}
	return iVar1;
}

var func_593(int iParam0, int iParam1, int iParam2, float fParam3)
{
	return ENTITY::STOP_ENTITY_ANIM(iParam0, func_1071(iParam2), func_1070(iParam1), fParam3);
}

bool func_594(var uParam0, int iParam1, float fParam2)
{
	if (func_652(uParam0, iParam1))
	{
		return func_1077(uParam0, iParam1) >= fParam2;
	}
	return false;
}

void func_595(var uParam0, bool bParam1)
{
	func_1003(uParam0, 4096, bParam1);
}

bool func_596(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (func_609(iParam0, iParam1, iParam2))
	{
		return func_576(iParam0, iParam1, iParam2) >= fParam3;
	}
	return false;
}

void func_597(var uParam0, bool bParam1)
{
	func_1003(uParam0, 8192, bParam1);
}

bool func_609(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_1070(iParam1), func_1071(iParam2), 1);
	}
	return false;
}

bool func_610(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		__LIB_3__::func_596(uParam0, 0);
	}
	if (__LIB_0__::func_899(uParam0))
	{
		if (__LIB_3__::func_514(uParam0, fParam1))
		{
			if (bParam3)
			{
				__LIB_0__::func_37(uParam0);
			}
			return true;
		}
	}
	return false;
}

void func_611(int iParam0, int iParam1, int iParam2, float fParam3)
{
	ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(iParam0, func_1070(iParam1), func_1071(iParam2), fParam3);
}

void func_612(var uParam0, int iParam1, bool bParam2)
{
	func_1090(uParam0, iParam1, 2, bParam2);
}

void func_613(var uParam0, bool bParam1)
{
	func_1003(uParam0, 16777216, bParam1);
}

bool func_615(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 8);
}

void func_616(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_899(&(uParam0->f_565.f_31[17 /*3*/])))
	{
		if (uParam0->f_3 <= 2)
		{
			if (__LIB_0__::func_901(&(uParam0->f_565.f_31[17 /*3*/])))
			{
				__LIB_2__::func_254(&(uParam0->f_565.f_31[17 /*3*/]));
			}
		}
		else if (!__LIB_0__::func_901(&(uParam0->f_565.f_31[17 /*3*/])))
		{
			__LIB_2__::func_255(&(uParam0->f_565.f_31[17 /*3*/]));
		}
	}
	switch (uParam0->f_3)
	{
		case 0:
			__LIB_9__::func_221(uParam0, 1);
			break;
		case 1:
			__LIB_9__::func_221(uParam0, 2);
			break;
		case 2:
			iVar0 = -1;
			if (!func_1031(&(uParam0->f_565), 2) && !func_1032(&(uParam0->f_565)))
			{
				if (__LIB_0__::func_393(Global_35, uParam0->f_565.f_91[12], 0, 1))
				{
					iVar0 = 2;
				}
			}
			if (!func_1031(&(uParam0->f_565), 3))
			{
				if (__LIB_0__::func_393(Global_35, uParam0->f_565.f_91[13], 0, 1))
				{
					iVar0 = 3;
				}
			}
			if (!func_1031(&(uParam0->f_565), 4))
			{
				if (__LIB_0__::func_393(Global_35, uParam0->f_565.f_91[14], 0, 1))
				{
					iVar0 = 4;
				}
			}
			if (iVar0 != -1)
			{
				if (func_581(&(uParam0->f_565), uParam0->f_1224.f_1[iVar0], func_227(241), 1082130432 /* Float: 4f */, 1073741824 /* Float: 2f */, joaat("INPUT_CONTEXT_Y"), 258))
				{
					func_582(&(uParam0->f_565), 0);
					switch (iVar0)
					{
						case 2:
							__LIB_9__::func_221(uParam0, 3);
							break;
						case 3:
							__LIB_9__::func_221(uParam0, 7);
							break;
						case 4:
							__LIB_9__::func_221(uParam0, 11);
							break;
					}
				}
			}
			else
			{
				func_582(&(uParam0->f_565), 0);
				__LIB_1__::func_748(&(uParam0->f_565.f_86), 1, 1);
			}
			break;
		case 3:
			if (__LIB_17__::func_554(Global_35))
			{
				if (func_587(uParam0, 6, 46, 0, 0, -1))
				{
					if (func_567(uParam0, 6, 0, 46))
					{
						__LIB_9__::func_221(uParam0, 4);
					}
				}
			}
			break;
		case 4:
			if (!func_541(uParam0, 6, 48))
			{
				if (func_594(uParam0, 6, 0.97f))
				{
					uParam0->f_565.f_86 = __LIB_1__::func_282(func_227(255), joaat("INPUT_CONTEXT_A"), __LIB_17__::func_812(4, 8), 2f, 3, 0, 0, 9, 570, 4000, 6, 3f, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_14__::func_418(uParam0->f_565.f_86, 1, 1);
					func_574(uParam0, 6, 48);
				}
			}
			else if (__LIB_0__::func_486(uParam0->f_565.f_86, 1) >= 1f)
			{
				__LIB_14__::func_418(uParam0->f_565.f_86, 0, 1);
				__LIB_1__::func_748(&(uParam0->f_565.f_86), 1, 1);
				__LIB_9__::func_221(uParam0, 5);
			}
			break;
		case 5:
			if (func_574(uParam0, 6, 50))
			{
				func_266(0, 256);
				func_1096(&(uParam0->f_565), 2, 1);
				__LIB_9__::func_221(uParam0, 6);
			}
			break;
		case 6:
			if (func_594(uParam0, 6, 0.97f))
			{
				iVar1 = 13;
				while (iVar1 <= 16)
				{
					__LIB_3__::func_29(&(uParam0->f_487[iVar1]), 1);
					iVar1++;
				}
				func_612(uParam0, 50, 1);
				func_1097(&(uParam0->f_565), 2, 1);
				func_266(1, 256);
				uParam0->f_1224.f_7 += 21010;
				__LIB_1__::func_532(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01")), uParam0->f_1224.f_7);
				__LIB_1__::func_616(21010, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
				__LIB_9__::func_221(uParam0, 1);
			}
			break;
		case 7:
			if (__LIB_17__::func_554(Global_35))
			{
				if (func_587(uParam0, 7, 45, 0, 0, -1))
				{
					if (func_567(uParam0, 7, 0, 45))
					{
						__LIB_9__::func_221(uParam0, 8);
					}
				}
			}
			break;
		case 8:
			if (!func_541(uParam0, 7, 47))
			{
				if (func_594(uParam0, 7, 0.97f))
				{
					uParam0->f_565.f_86 = __LIB_1__::func_282(func_227(255), joaat("INPUT_CONTEXT_A"), __LIB_17__::func_812(4, 9), 2f, 3, 0, 0, 9, 570, 4000, 10, 3f, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_14__::func_418(uParam0->f_565.f_86, 1, 1);
					func_574(uParam0, 7, 47);
				}
			}
			else if (__LIB_0__::func_486(uParam0->f_565.f_86, 1) >= 1f)
			{
				__LIB_14__::func_418(uParam0->f_565.f_86, 0, 1);
				__LIB_1__::func_748(&(uParam0->f_565.f_86), 1, 1);
				__LIB_9__::func_221(uParam0, 9);
			}
			break;
		case 9:
			if (func_574(uParam0, 7, 49))
			{
				func_266(0, 256);
				func_1096(&(uParam0->f_565), 3, 1);
				__LIB_9__::func_221(uParam0, 10);
			}
			break;
		case 10:
			if (func_594(uParam0, 7, 0.97f))
			{
				iVar2 = 17;
				while (iVar2 <= 23)
				{
					__LIB_3__::func_29(&(uParam0->f_487[iVar2]), 1);
					iVar2++;
				}
				func_612(uParam0, 49, 1);
				func_1097(&(uParam0->f_565), 3, 1);
				func_266(1, 256);
				uParam0->f_1224.f_7 += 24972;
				__LIB_1__::func_532(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01")), uParam0->f_1224.f_7);
				__LIB_1__::func_616(24972, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
				__LIB_9__::func_221(uParam0, 1);
			}
			break;
		case 11:
			if (__LIB_17__::func_554(Global_35))
			{
				if (func_587(uParam0, 8, 52, 0, 0, -1))
				{
					func_266(0, 256);
					if (func_567(uParam0, 8, 0, 52))
					{
						__LIB_9__::func_221(uParam0, 12);
					}
				}
			}
			break;
		case 12:
			if (func_594(uParam0, 8, 0.97f))
			{
				iVar3 = 24;
				while (iVar3 <= 26)
				{
					__LIB_3__::func_29(&(uParam0->f_487[iVar3]), 1);
					iVar3++;
				}
				func_612(uParam0, 52, 1);
				func_266(1, 0);
				uParam0->f_1224.f_7 += 9618;
				__LIB_1__::func_532(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01")), uParam0->f_1224.f_7);
				__LIB_1__::func_616(9618, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
				func_1096(&(uParam0->f_565), 4, 1);
				func_1097(&(uParam0->f_565), 4, 1);
				__LIB_9__::func_221(uParam0, 1);
			}
			break;
		case 13:
			__LIB_1__::func_748(&(uParam0->f_565.f_86), 1, 1);
			__LIB_9__::func_221(uParam0, 14);
			break;
		case 14:
			return;
	}
}

void func_617(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

bool func_618(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, int iParam8)
{
	return ENTITY::PLAY_ENTITY_ANIM(iParam0, func_1071(iParam1), func_1070(iParam2), fParam3, bParam4, bParam5, bParam6, fParam7, iParam8);
}

bool func_619(var uParam0, int iParam1)
{
	return func_1098(uParam0, iParam1, 2);
}

void func_621(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_2)
	{
		case 0:
		case 1:
			*uParam2 = 207930;
			break;
		case 2:
			*uParam2 = 209043;
			break;
		case 3:
			*uParam2 = 210283;
			break;
		case 4:
			*uParam2 = 212044;
			break;
		case 5:
		case 6:
		case 8:
			*uParam2 = 212377;
			break;
	}
	func_256(uParam1);
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	func_999();
	func_1104();
	func_1105();
	__LIB_0__::func_37(&(uParam1->f_374));
	uParam1->f_3 = -1;
	uParam1->f_4 = 0;
	uParam1->f_1 = -1;
	uParam1->f_2 = -1;
}

void func_622(var uParam0, int iParam1)
{
	int iVar0;
	switch (iParam1)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 5;
			break;
		default:
			break;
	}
	__LIB_6__::func_813(uParam0, func_1106(iParam1), func_1106(iVar0), iParam1, iVar0);
}

void func_623(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (Local_18.f_565.f_112 == iVar0)
	{
		return;
	}
	Local_18.f_565.f_112 = iVar0;
}

void func_624(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam2)
	{
		case 0:
			func_1108(uParam0, iParam1, 1, bParam3);
			break;
		case 1:
			func_1108(uParam0, iParam1, 2, bParam3);
			break;
		case 2:
			func_1108(uParam0, iParam1, 4, bParam3);
			break;
		case 3:
			func_1108(uParam0, iParam1, 8, bParam3);
			break;
	}
}

void func_626(var uParam0, struct<4> Param1, struct<4> Param5)
{
	uParam0->f_20 = { Param1 };
	uParam0->f_24 = { Param5 };
}

void func_627(var uParam0, struct<4> Param1, struct<4> Param5)
{
	uParam0->f_28 = { Param1 };
	uParam0->f_32 = { Param5 };
}

void func_628(var uParam0, int iParam1)
{
	__LIB_0__::func_7(&(uParam0->f_2), iParam1);
}

void func_629(var uParam0, char* sParam1)
{
	uParam0->f_52 = sParam1;
}

char* func_630(var uParam0)
{
	return uParam0->f_52;
}

void func_631(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4)
{
	uParam0->f_36 = sParam1;
	uParam0->f_36.f_3 = uParam0->f_2;
	uParam0->f_36.f_9 = uParam2;
	uParam0->f_36.f_10 = fParam3;
	uParam0->f_36.f_11 = fParam4;
	uParam0->f_36.f_13 = 0;
	uParam0->f_36.f_12 = 3f;
	uParam0->f_36.f_14 = 0.4f;
}

void func_632(var uParam0)
{
	func_1111(uParam0);
	__LIB_19__::func_92(uParam0);
	__LIB_17__::func_813(uParam0, 213809);
	__LIB_17__::func_814(uParam0, 214239);
	__LIB_17__::func_815(uParam0, 215454);
}

bool func_633(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	if (bParam3)
	{
		uParam0->f_331++;
		if (uParam0->f_331 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_331 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_3__::func_94(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_17__::func_816(uParam0) };
			if (!__LIB_0__::func_86(vVar0))
			{
				__LIB_0__::func_487(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = __LIB_0__::func_94(Global_35, __LIB_0__::func_85(uParam0), 1);
	if (__LIB_0__::func_84(uParam0, 128) || __LIB_0__::func_84(uParam0, 256))
	{
		if ((fVar3 >= __LIB_3__::func_21(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264))
		{
			if (uParam0->f_349)
			{
				__LIB_1__::func_436();
				uParam0->f_349 = 0;
			}
			__LIB_3__::func_22(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_264);
			}
			__LIB_17__::func_817(uParam0);
			__LIB_3__::func_23(uParam0, 128, 1);
			__LIB_3__::func_23(uParam0, 256, 1);
			__LIB_3__::func_23(uParam0, 4096, 1);
			__LIB_3__::func_23(uParam0, 32768, 1);
			__LIB_3__::func_23(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_3__::func_24(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264))
			{
				if (__LIB_3__::func_24(uParam0) >= __LIB_3__::func_21(uParam0))
				{
				}
				Var4 = { __LIB_3__::func_25(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_17__::func_818(uParam0);
				}
				Var4 = { __LIB_3__::func_25(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_264 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_260), iVar12, &Var4, false, true);
				__LIB_1__::func_414(uParam0, 0, 0, 0, 0);
				__LIB_0__::func_88(uParam0, 128);
			}
		}
	}
	if (__LIB_0__::func_84(uParam0, 128))
	{
		if (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304))
		{
			return true;
		}
		__LIB_19__::func_93(uParam0);
		if (!uParam0->f_349)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_349 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_264, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_17__::func_819(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_282[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_282[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_282[iVar14 /*9*/].f_8)
						{
							uParam0->f_282[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_264, &(uParam0->f_282[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, &(uParam0->f_282[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_264, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_264, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_264, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_264, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			__LIB_0__::func_88(uParam0, 256);
			__LIB_3__::func_23(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_634(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	iVar0 = uParam0->f_1111.f_40[3];
	iVar1 = uParam0->f_1111.f_40[0];
	iVar2 = uParam0->f_1111.f_40[1];
	iVar3 = uParam0->f_1111.f_40[4];
	iVar4 = uParam0->f_1111.f_40[5];
	fVar17 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_1138(Global_35, func_630(&(uParam0->f_1171))), func_1138(uParam0->f_1111.f_40[0], func_630(&(uParam0->f_1171))), true);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_630(&(uParam0->f_1171))))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_630(&(uParam0->f_1171)), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar18);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_630(&(uParam0->f_1171)), ENTITY::GET_ENTITY_COORDS(uParam0->f_1111.f_40[0], true, false), &iVar19);
	}
	switch (uParam0->f_1171.f_1)
	{
		case 0:
			func_646(iVar1, 167, 1);
			__LIB_0__::func_705(func_267(0), 0);
			AUDIO::STOP_PED_SPEAKING(iVar1, false);
			func_646(iVar3, 167, 1);
			__LIB_0__::func_705(func_267(4), 0);
			AUDIO::STOP_PED_SPEAKING(iVar3, false);
			AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(25, 2, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(45, 2, 1);
			func_1139(&(uParam0->f_1171), 1);
			break;
		case 1:
			if (__LIB_0__::func_394(iVar1, iVar2, 1) && __LIB_0__::func_394(iVar3, iVar4, 1))
			{
				if (uParam0->f_1171 == 0)
				{
					__LIB_0__::func_37(&(uParam0->f_565.f_31[2 /*3*/]));
					__LIB_0__::func_37(&(uParam0->f_565.f_31[14 /*3*/]));
					func_1139(&(uParam0->f_1171), 3);
				}
				else
				{
					func_1139(&(uParam0->f_1171), 5);
				}
			}
			if (__LIB_0__::func_394(iVar1, iVar2, 1))
			{
				if (!__LIB_0__::func_394(iVar3, iVar4, 1) && !__LIB_0__::func_163(iVar1, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, iVar3, -1, -1f, -1f, -1f);
				}
			}
			else if (!__LIB_0__::func_163(iVar1, 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(iVar1, iVar2, -1, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			if (__LIB_0__::func_394(iVar3, iVar4, 1))
			{
				if (!__LIB_0__::func_394(iVar1, iVar2, 1) && !__LIB_0__::func_163(iVar3, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar3, iVar1, -1, -1f, -1f, -1f);
				}
			}
			else if (!__LIB_0__::func_163(iVar3, 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(iVar3, iVar4, -1, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			break;
		case 3:
			if (!__LIB_0__::func_394(iVar1, iVar2, 0) || !__LIB_0__::func_394(iVar3, iVar4, 0))
			{
				func_1139(&(uParam0->f_1171), 1);
				return false;
			}
			vVar8 = { uParam0->f_1171.f_20 };
			vVar11 = { uParam0->f_1171.f_28 };
			if (!__LIB_0__::func_266(iVar1, vVar8, 3f, 1, 1))
			{
				if (!__LIB_0__::func_163(iVar1, 658540077))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar1, func_227(265), 0, 0, -1, 0, 0, -1);
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(iVar1, vVar8, vLocal_0, false, true, 0))
			{
				if (!__LIB_0__::func_163(iVar1, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar1, vVar8, 1.001f, -1, 0.25f, 0, 40000f);
				}
			}
			else if (!__LIB_0__::func_163(iVar1, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, Global_35, -1, -1f, -1f, -1f);
			}
			if (!func_518(&(uParam0->f_1111), 4, 0, 5f, 1))
			{
				if (!__LIB_0__::func_266(iVar3, vVar11, 3f, 1, 1))
				{
					if (!__LIB_0__::func_163(iVar3, 658540077))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar3, func_227(268), 0, 0, -1, 0, 0, -1);
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_COORD(iVar3, vVar11, vLocal_0, false, true, 0))
				{
					if (!__LIB_0__::func_163(iVar3, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar3, vVar11, 1.25f, -1, 0.25f, 0, 40000f);
					}
				}
				else if (!__LIB_0__::func_163(iVar3, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar3, Global_35, -1, -1f, -1f, -1f);
				}
			}
			if ((((__LIB_0__::func_394(iVar1, iVar2, 0) && __LIB_0__::func_394(iVar3, iVar4, 0)) && __LIB_0__::func_394(Global_35, iVar0, 0)) && __LIB_0__::func_266(iVar1, vVar8, 20f, 1, 1)) && func_518(&(uParam0->f_1111), 2, 0, 20f, 1))
			{
				__LIB_0__::func_37(&(uParam0->f_565.f_31[14 /*3*/]));
				func_1139(&(uParam0->f_1171), 4);
			}
			break;
		case 4:
			TASK::CLEAR_PED_TASKS(iVar1, true, false);
			TASK::CLEAR_PED_TASKS(iVar3, true, false);
			uParam0->f_1171.f_51 = PED::CREATE_GROUP(0);
			func_665(uParam0->f_1171.f_51, 10);
			func_1140(&(uParam0->f_1111), 0, uParam0->f_1171.f_51);
			func_664(&(uParam0->f_1111), 4, uParam0->f_1171.f_51);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iVar1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 3, 1);
			PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iVar1, 3);
			func_1139(&(uParam0->f_1171), 5);
			break;
		case 5:
			if (!__LIB_0__::func_394(iVar1, iVar2, 0) || !__LIB_0__::func_394(iVar3, iVar4, 0))
			{
				func_1139(&(uParam0->f_1171), 1);
				return false;
			}
			func_1141(&(uParam0->f_1111), &(uParam0->f_1171));
			vVar8 = { uParam0->f_1171.f_24 };
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, func_630(&(uParam0->f_1171))))
			{
				if (!__LIB_0__::func_163(iVar1, 658540077))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar1, func_630(&(uParam0->f_1171)), 0, uParam0->f_1171.f_2, -1, 0, 0, -1);
				}
			}
			else if ((iVar19 > iVar18 && ((fVar17 > 30f && !__LIB_0__::func_48(Global_35, iVar3, 20f, 1)) || !__LIB_0__::func_396(Global_35))) && !__LIB_0__::func_266(iVar1, vVar8, 30f, 1, 1))
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(iVar1, 1, 0, 0);
				}
				else if (__LIB_0__::func_48(iVar3, iVar1, 8f, 1))
				{
					if (!__LIB_0__::func_163(iVar3, -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar3, Global_35, -1, -1f, -1f, -1f);
					}
				}
			}
			else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1))
			{
				TASK::WAYPOINT_PLAYBACK_RESUME(iVar1, false, -1, 0);
				if (__LIB_0__::func_163(iVar3, 1435919172))
				{
					TASK::CLEAR_PED_TASKS(iVar3, true, false);
				}
			}
			else if (iVar19 >= 425)
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar3, func_630(&(uParam0->f_1171))) && !__LIB_0__::func_163(iVar3, 999013589))
				{
					TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(iVar3, iVar1, func_630(&(uParam0->f_1171)), 0, -6f, (iVar19 - 1), uParam0->f_1171.f_2, -1, 0);
				}
			}
			if (func_1142(iVar1, uParam0->f_1171.f_52) >= 457 || __LIB_0__::func_266(iVar1, vVar8, 20f, 1, 1))
			{
				func_1139(&(uParam0->f_1171), 6);
			}
			else if (func_1142(iVar1, uParam0->f_1171.f_52) >= 425)
			{
				PED::SET_PED_RESET_FLAG(iVar1, 12, true);
			}
			break;
		case 6:
			vVar5 = { __LIB_17__::func_812(2, 1) };
			fVar14 = func_229(2, 1);
			vVar8 = { uParam0->f_1171.f_24 };
			fVar15 = uParam0->f_1171.f_24.f_3;
			vVar11 = { uParam0->f_1171.f_32 };
			fVar16 = uParam0->f_1171.f_32.f_3;
			__LIB_1__::func_694(Global_35, vVar5, 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (!__LIB_0__::func_163(Global_35, 713668775))
			{
				if (__LIB_0__::func_266(Global_35, vVar5, 10f, 1, 1) && __LIB_0__::func_394(Global_35, iVar0, 1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vVar5, 1.001f, -1, 0.25f, 0, fVar14);
				}
			}
			if (!__LIB_0__::func_163(iVar1, 713668775))
			{
				if (!__LIB_3__::func_501(iVar2, vVar8, fVar15, 1056964608 /* Float: 0.5f */, 5f, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar1, vVar8, 1.25f, -1, 0.25f, 0, fVar15);
				}
			}
			if (!__LIB_0__::func_163(iVar3, 713668775))
			{
				if (!__LIB_3__::func_501(iVar4, vVar11, fVar16, 1056964608 /* Float: 0.5f */, 5f, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar3, vVar11, 1.25f, -1, 0.25f, 0, fVar16);
				}
			}
			if (__LIB_0__::func_266(Global_35, vVar5, 10f, 1, 1) || __LIB_0__::func_163(Global_35, 713668775))
			{
				func_1139(&(uParam0->f_1171), 7);
			}
			break;
		case 7:
			func_1144(&(uParam0->f_1111), 0);
			func_1145(&(uParam0->f_1111), 2);
			func_1145(&(uParam0->f_1111), 4);
			func_646(iVar1, 167, 0);
			__LIB_0__::func_705(func_267(0), 1);
			AUDIO::STOP_PED_SPEAKING(iVar1, true);
			func_646(iVar3, 167, 0);
			__LIB_0__::func_705(func_267(4), 1);
			AUDIO::STOP_PED_SPEAKING(iVar3, true);
			AUDIO::_0x660A8F876DF1D4F8(7);
			AUDIO::_0x660A8F876DF1D4F8(25);
			AUDIO::_0x660A8F876DF1D4F8(45);
			func_1139(&(uParam0->f_1171), 8);
			break;
		case 8:
			return true;
	}
	return false;
}

bool func_635(int iParam0, struct<4> Param1, int iParam5)
{
	return func_1146(iParam0, Param1, Param1.f_3, iParam5);
}

bool func_636(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 1;
	switch (iParam2)
	{
		case 0:
			vVar1 = { __LIB_17__::func_812(7, 10) };
			if (!func_1147(uParam0, 37, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 33, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 2))
			{
				iVar0 = 0;
			}
			if (PED::GET_MOUNT(Global_35) != 0 && PED::GET_MOUNT(Global_35) != uParam1->f_40[3])
			{
				uParam0->f_543[7] = PED::GET_MOUNT(Global_35);
			}
			else
			{
				uParam0->f_543[7] = uParam1->f_40[3];
			}
			if (!__LIB_3__::func_47(&(uParam0->f_121), uParam0->f_543[7]))
			{
				__LIB_17__::func_823(&(uParam0->f_121), uParam0->f_543[7], "Horse_01^1", 0, 0, 0);
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 0))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 1))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 4))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 5))
			{
				iVar0 = 0;
			}
			if (!func_1151(uParam1))
			{
				iVar0 = 0;
			}
			else if (!func_1148(uParam0, uParam1, 6))
			{
				iVar0 = 0;
			}
			break;
		case 1:
			vVar1 = { __LIB_17__::func_812(7, 11) };
			if (!func_1147(uParam0, 44, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 45, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 2))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 0))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 4))
			{
				iVar0 = 0;
			}
			break;
		case 2:
			vVar1 = { __LIB_17__::func_812(7, 12) };
			if (!func_1147(uParam0, 0, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 1, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 2, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 3, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 4, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 5, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 6, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 7, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 44, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 45, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 2))
			{
				iVar0 = 0;
			}
			if (PED::GET_MOUNT(Global_35) != 0 && PED::GET_MOUNT(Global_35) != uParam1->f_40[3])
			{
				uParam0->f_543[7] = PED::GET_MOUNT(Global_35);
			}
			else
			{
				uParam0->f_543[7] = uParam1->f_40[3];
			}
			if (!__LIB_3__::func_47(&(uParam0->f_121), uParam0->f_543[7]))
			{
				__LIB_17__::func_823(&(uParam0->f_121), uParam0->f_543[7], "Horse_01^2", 0, 0, 0);
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 0))
			{
				iVar0 = 0;
			}
			if (!__LIB_3__::func_47(&(uParam0->f_121), uParam1->f_40[1]))
			{
				__LIB_17__::func_823(&(uParam0->f_121), uParam1->f_40[1], "Horse_01^1", 0, 0, 0);
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 4))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 5))
			{
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

bool func_637(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = uParam0->f_1111.f_40[6];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	__LIB_1__::func_766(iVar0, joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	fVar1 = 15f;
	fVar2 = 70f;
	PED::SET_PED_COMBAT_MOVEMENT(iVar0, 0);
	PED::SET_PED_HEARING_RANGE(iVar0, 7.5f);
	PED::SET_PED_ID_RANGE(iVar0, fVar1);
	PED::SET_PED_SEEING_RANGE(iVar0, fVar1);
	PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iVar0, fVar1);
	PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iVar0, -fVar2);
	PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iVar0, fVar2);
	PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iVar0, fVar2);
	PED::_0x9AB33CB5834885B3(iVar0, 6f, 8f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	PED::_0x899DFA0009AC93DE(iVar0, 0.5f);
	PED::_0x3A5697B80FED5EBE(iVar0, 3f, 3f, 8f, 8f);
	PED::SET_PED_HEARING_RANGE(Global_35, 7.5f);
	if (!AUDIO::IS_AMBIENT_SPEECH_DISABLED(iVar0))
	{
		AUDIO::STOP_PED_SPEAKING(iVar0, true);
	}
	MISC::_0x6AC4AF46A6B8DFB2(0);
	PED::SET_PED_CAN_TORSO_REACT_IK(iVar0, false);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 14, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_PLAYER_ENEMY"));
	func_646(iVar0, 80, 0);
	func_646(iVar0, 81, 0);
	func_646(iVar0, 113, 1);
	func_646(iVar0, 119, 0);
	func_646(iVar0, 123, 0);
	func_646(iVar0, 130, 1);
	func_646(iVar0, 168, 0);
	func_646(iVar0, 217, 1);
	func_646(iVar0, 245, 1);
	func_646(iVar0, 250, 1);
	func_646(iVar0, 353, 1);
	__LIB_1__::func_398(&(uParam0->f_692.f_1), 1);
	__LIB_1__::func_401(&(uParam0->f_692.f_1), 1);
	__LIB_2__::func_828(&(uParam0->f_692.f_1), 1);
	__LIB_1__::func_402(&(uParam0->f_692.f_1), 1);
	__LIB_1__::func_413(&(uParam0->f_692.f_1), 1);
	__LIB_2__::func_903(&(uParam0->f_692.f_1), 0);
	__LIB_1__::func_403(&(uParam0->f_692.f_1), 0);
	__LIB_2__::func_829(&(uParam0->f_692.f_1), 0);
	__LIB_1__::func_396(&(uParam0->f_692.f_1), 0);
	__LIB_1__::func_393(&(uParam0->f_692.f_1), 0);
	__LIB_9__::func_772(&(uParam0->f_692.f_1), 0);
	__LIB_9__::func_714(&(uParam0->f_692.f_1), 0);
	__LIB_9__::func_262(&(uParam0->f_692.f_1), 1);
	__LIB_10__::func_913(&(uParam0->f_692.f_1), 0);
	__LIB_1__::func_368(&(uParam0->f_692.f_1), 1);
	__LIB_2__::func_619(&(uParam0->f_692.f_1), 0);
	__LIB_1__::func_399(&(uParam0->f_692.f_1), 1);
	__LIB_1__::func_397(&(uParam0->f_692.f_1), 1);
	__LIB_1__::func_400(&(uParam0->f_692.f_1), 1);
	__LIB_2__::func_830(&(uParam0->f_692.f_1), 1);
	__LIB_1__::func_404(&(uParam0->f_692.f_1), 1);
	__LIB_1__::func_405(&(uParam0->f_692.f_1), 1);
	__LIB_1__::func_406(&(uParam0->f_692.f_1), 1);
	__LIB_1__::func_407(&(uParam0->f_692.f_1), 0);
	__LIB_1__::func_392(&(uParam0->f_692.f_1), 1);
	__LIB_2__::func_956(&(uParam0->f_692.f_1), 1);
	if (!__LIB_0__::func_163(iVar0, -982327190))
	{
		TASK::TASK_STAND_STILL(iVar0, -1);
	}
	__LIB_2__::func_246(&(uParam0->f_471));
	__LIB_0__::func_928(&(uParam0->f_730.f_276), uParam0->f_1111.f_40[6], func_227(243), 0);
	return true;
}

bool func_639(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	__LIB_3__::func_94(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		func_1180(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_264, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_264, false))
				{
					func_1181(uParam4, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264))
				{
					__LIB_8__::func_726(uParam4, 4);
					return false;
				}
				else if (__LIB_3__::func_72(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_257);
				}
				__LIB_8__::func_726(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_266)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_19__::func_92(uParam4);
				}
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_19__::func_93(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_3__::func_596(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_264);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_264, true, false))
			{
				if (func_633(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_264, true, false))
					{
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_264);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					func_1181(uParam4, &uParam0);
					__LIB_8__::func_726(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_264);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_1187(uParam4);
			if (__LIB_3__::func_72(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_257);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_264, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && func_1188(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_0__::func_84(uParam4, 512))
				{
					__LIB_2__::func_259(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_726(uParam4, 4);
				}
				else if (__LIB_0__::func_84(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_1180(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_3__::func_73(uParam4) - __LIB_3__::func_46(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_3__::func_74(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_3__::func_46(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_3__::func_75(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264))
				{
				}
				__LIB_0__::func_488(uParam4);
				func_1194(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_264) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_264);
						}
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_3__::func_23(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_3__::func_46(uParam4) <= 5000) && __LIB_3__::func_46(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_321), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_3__::func_46(uParam4) >= 5000 && __LIB_3__::func_46(uParam4) <= (__LIB_3__::func_73(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_3__::func_75(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				func_1194(uParam4);
				return true;
			}
			break;
		case 4:
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_264))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_264))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_264, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_264))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_3__::func_72(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_258);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_264))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_264, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_264) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_264))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_264, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
				}
				if (__LIB_0__::func_81(uParam4) == 3)
				{
					if (__LIB_0__::func_84(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			__LIB_8__::func_726(uParam4, 4);
			break;
	}
	return false;
}

bool func_640(int iParam0, struct<4> Param1, int iParam5)
{
	return func_1197(iParam0, Param1, Param1.f_3, iParam5);
}

void func_641(var uParam0, bool bParam1)
{
	func_1003(uParam0, 2, bParam1);
}

void func_642(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::_GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, true, 0, bParam2);
		}
	}
	else if (PED::_GET_PED_CROUCH_MOVEMENT(iParam0))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, bParam2);
	}
}

void func_643(var uParam0)
{
	int iVar0;
	iVar0 = 11;
	while (iVar0 <= 18)
	{
		func_1198(&(uParam0->f_1111), iVar0, 0);
		iVar0++;
	}
	func_1199(uParam0);
}

void func_644()
{
	struct<4> Var0;
	TASK::OPEN_PATROL_ROUTE(func_227(245));
	Var0 = { __LIB_19__::func_94(10, 5) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 6) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 7) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 8) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 9) };
	TASK::ADD_PATROL_ROUTE_NODE(4, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 4);
	TASK::ADD_PATROL_ROUTE_LINK(4, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(246));
	Var0 = { __LIB_19__::func_94(10, 10) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 11) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 12) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	Var0 = { __LIB_19__::func_94(10, 13) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(247));
	Var0 = { __LIB_19__::func_94(10, 14) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 15) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 16) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	Var0 = { __LIB_19__::func_94(10, 17) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 18) };
	TASK::ADD_PATROL_ROUTE_NODE(4, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(30000, 45000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 4);
	TASK::ADD_PATROL_ROUTE_LINK(4, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(248));
	Var0 = { __LIB_19__::func_94(10, 19) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 20) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 21) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	Var0 = { __LIB_19__::func_94(10, 22) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(249));
	Var0 = { __LIB_19__::func_94(10, 23) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 24) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(251));
	Var0 = { __LIB_19__::func_94(10, 30) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 31) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 32) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(10, 33) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	Var0 = { __LIB_19__::func_94(10, 34) };
	TASK::ADD_PATROL_ROUTE_NODE(4, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 4);
	TASK::ADD_PATROL_ROUTE_LINK(4, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(252));
	Var0 = { __LIB_19__::func_94(9, 2) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(9, 3) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { __LIB_19__::func_94(9, 4) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_645(var uParam0, bool bParam1)
{
	func_1003(uParam0, 1024, bParam1);
}

void func_646(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, iParam1, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, iParam1, true);
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(iParam0, iParam1, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, iParam1, false);
	}
}

void func_647(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 11;
	while (iVar0 <= 18)
	{
		func_1198(uParam0, iVar0, bParam1);
		iVar0++;
	}
	func_1198(uParam0, 6, bParam1);
}

void func_649(var uParam0, int iParam1)
{
	if ((iParam1 > 15 || !func_1201(&(uParam0->f_565))) || CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_480))
		{
			CAM::DESTROY_CAM(uParam0->f_480, false);
		}
		func_584(&(uParam0->f_565), 0);
		return;
	}
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	if (CAM::DOES_CAM_EXIST(uParam0->f_480))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_480))
		{
			HUD::_0xC9CAEAEEC1256E54(724769646);
		}
	}
	if (iParam1 >= 2 && iParam1 <= 8)
	{
		switch (uParam0->f_120)
		{
			case 0:
				if (uParam0->f_687.f_1 >= 7)
				{
					func_1202(uParam0, 2);
				}
				else if (!CAM::DOES_CAM_EXIST(uParam0->f_480))
				{
					uParam0->f_480 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1289.853f, -1321.032f, 77.9334f, -15.8028f, 0f, 12.1559f, 45f, false, 2);
				}
				else
				{
					func_1202(uParam0, 1);
				}
				break;
			case 1:
				if (!CAM::IS_CAM_ACTIVE(uParam0->f_480))
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_480, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 3000, true, false, 0);
				}
				else if (uParam0->f_687.f_1 >= 7)
				{
					__LIB_0__::func_489(136.72f, -8.7426f);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					func_1202(uParam0, 2);
				}
				break;
			case 2:
				CAM::DESTROY_CAM(uParam0->f_480, false);
				func_584(&(uParam0->f_565), 0);
				func_1202(uParam0, 0);
				break;
		}
	}
	else if (iParam1 >= 11 && iParam1 <= 15)
	{
		switch (uParam0->f_120)
		{
			case 0:
				if (!CAM::DOES_CAM_EXIST(uParam0->f_480))
				{
					uParam0->f_480 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1298.405f, -1328.297f, 76.944f, 4.7002f, 0.5578f, 40.0691f, 41f, false, 2);
				}
				else
				{
					func_1202(uParam0, 1);
				}
				break;
			case 1:
				if (!CAM::IS_CAM_ACTIVE(uParam0->f_480))
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_480, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 3000, true, false, 0);
				}
				else if (func_596(Global_35, 1, 21, 0.75f))
				{
					__LIB_0__::func_489(0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					func_1202(uParam0, 2);
				}
				break;
			case 2:
				CAM::DESTROY_CAM(uParam0->f_480, false);
				func_584(&(uParam0->f_565), 0);
				func_1202(uParam0, 0);
				break;
		}
	}
}

void func_650(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_487[35]) && func_531(&(uParam0->f_565)))
	{
		bVar0 = uParam0->f_1 != 6;
		OBJECT::SET_OBJECT_TARGETTABLE(uParam0->f_487[35], bVar0);
		ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(uParam0->f_487[35], bVar0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_487[35], bVar0, 10f);
		func_571(uParam0->f_487[35], 1);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_487[35], false);
		ENTITY::SET_ENTITY_PROOFS(uParam0->f_487[35], 120, false);
	}
	switch (uParam0->f_687)
	{
		case -1:
			return;
		case 0:
			__LIB_6__::func_618(&(uParam0->f_687), 1);
		case 1:
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uParam0->f_687.f_2))
			{
				uParam0->f_687.f_2 = OBJECT::GET_RAYFIRE_MAP_OBJECT(ENTITY::GET_ENTITY_COORDS(uParam0->f_487[35], true, false), 5f, func_227(256));
			}
			else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2) == 5)
			{
				__LIB_6__::func_618(&(uParam0->f_687), 2);
			}
			else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2) != 4)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2, 4);
			}
			else if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
			}
			break;
		case 2:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_487[35], Global_35, 1, 1))
			{
				func_1205(&(uParam0->f_565), 1);
				func_1206(uParam0, 3, 0);
				__LIB_6__::func_618(&(uParam0->f_687), 3);
			}
			else if (func_530(&(uParam0->f_565)))
			{
				__LIB_6__::func_618(&(uParam0->f_687), 3);
			}
			break;
		case 3:
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_487[35], true, false) };
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2, 6);
			FIRE::ADD_EXPLOSION(vVar1, 29, 1f, false, true, 0f);
			AUDIO::_0x374F0E716BFCDE82("EXPLOSIONS_SCRIPTED_FUSSAR1_BUILDING", vVar1);
			if (CAM::DOES_CAM_EXIST(uParam0->f_480))
			{
				CAM::SHAKE_CAM(uParam0->f_480, "SMALL_EXPLOSION_SHAKE", 0.6f);
			}
			else
			{
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.6f);
			}
			PAD::SET_PAD_SHAKE(0, 2000, 150);
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_565.f_91[1], true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_565.f_91[2], true, 0))
			{
				PED::_0x09E378C52B1433B5(Global_35, vVar1, 15f);
			}
			AICOVERPOINT::_0x2A31D13C5F021D0D(uParam0->f_1111.f_40[4]);
			if (!func_737(uParam0, 35))
			{
				__LIB_3__::func_29(&(uParam0->f_487[35]), 1);
				func_738(uParam0, 35, 1);
			}
			func_573(uParam0, 16);
			func_573(uParam0, 17);
			__LIB_0__::func_401(-661825463);
			__LIB_4__::func_524(181);
			__LIB_4__::func_495(182);
			__LIB_0__::func_804(-2020023971);
			__LIB_6__::func_618(&(uParam0->f_687), 4);
		case 4:
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2) == 9 || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2) == 10)
			{
				func_554(uParam0, 16);
				func_554(uParam0, 17);
				__LIB_6__::func_618(&(uParam0->f_687), 5);
			}
			break;
		case 5:
			break;
	}
}

void func_651(var uParam0)
{
	if (uParam0->f_687.f_1 > 4 && uParam0->f_687.f_1 < 9)
	{
		func_1207(uParam0, &(uParam0->f_687));
	}
	switch (uParam0->f_687.f_1)
	{
		case -1:
			return;
		case 0:
			func_582(&(uParam0->f_687), 2);
			break;
		case 2:
			if (func_1209(&(uParam0->f_565)))
			{
				uParam0->f_687.f_3 = PHYSICS::ADD_ROPE(PED::GET_PED_BONE_COORDS(uParam0->f_543[2], 16749, 0f, 0f, 0f), 0f, 0f, 0f, 30f, 2, 3f, 0.5f, 1056964608, false, true, false, 1f, false, 0, true);
				PHYSICS::_0x462FF2A432733A44(uParam0->f_687.f_3, uParam0->f_543[2], uParam0->f_487[37], 0f, 0f, 0f, 0f, 0f, 0.15f, "SKEL_R_Finger12", 0);
				PHYSICS::_0xFB9153A54AC713E8(uParam0->f_687.f_3, 1);
				PHYSICS::ROPE_SET_UPDATE_ORDER(uParam0->f_687.f_3, 1);
				PHYSICS::_0x1FC92BDBA1106BD2(uParam0->f_687.f_3, 1f);
				PHYSICS::_0x1D97DA8ACB5D2582(uParam0->f_687.f_3, 20);
				func_582(&(uParam0->f_687), 3);
			}
			break;
		case 3:
			if (func_541(uParam0, 0, 5) || func_541(uParam0, 0, 3))
			{
				func_1210(uParam0->f_687.f_3, uParam0->f_1111.f_40[0]);
				func_1211(uParam0->f_687.f_3, uParam0->f_487[35], 0f, 0f, 0f, 0, 0, 1);
				func_582(&(uParam0->f_687), 4);
			}
			break;
		case 4:
			if (func_652(uParam0, 9))
			{
				PED::_0x89F5E7ADECCCB49C(Global_35, "spool");
			}
			if (func_1212(uParam0, 9, 0))
			{
				func_646(Global_35, 352, 1);
				func_646(Global_35, 404, 1);
				func_646(Global_35, 249, 1);
				func_646(Global_35, 43, 1);
				func_266(0, 0);
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_227(267), 1, 1065353216 /* Float: 1f */, 1f, 0);
				PED::_0x49DADFC4CD808B0A(Global_35, 1, -1);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_552[0], func_227(90), uParam0->f_487[37]);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_487[37], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				ENTITY::PLAY_ENTITY_ANIM(uParam0->f_487[37], func_227(47), func_227(4), 8f, true, false, false, 0f, 0);
				func_582(&(uParam0->f_687), 5);
			}
			break;
		case 5:
			if (!__LIB_2__::func_123(Global_35, uParam0->f_487[33], 0.9f))
			{
				if (!__LIB_0__::func_48(Global_35, uParam0->f_487[33], 3f, 1) && !__LIB_0__::func_163(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, uParam0->f_487[33], 1500, -1f, -1f, -1f);
				}
			}
			else if (!__LIB_0__::func_163(Global_35, -875674219))
			{
				__LIB_2__::func_246(&(uParam0->f_471));
				__LIB_0__::func_7(&(uParam0->f_471.f_3), 32);
				__LIB_2__::func_619(&(uParam0->f_471.f_3), 1);
				__LIB_1__::func_397(&(uParam0->f_471.f_3), 0);
				__LIB_1__::func_404(&(uParam0->f_471.f_3), 0);
				__LIB_10__::func_241(&(uParam0->f_471.f_3), 1);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
				func_582(&(uParam0->f_687), 6);
			}
			break;
		case 6:
			if (func_610(&(uParam0->f_565.f_31[4 /*3*/]), 0.5f, 1, 0))
			{
				func_582(&(uParam0->f_687), 7);
			}
			break;
		case 7:
			__LIB_8__::func_225(__LIB_17__::func_812(3, 8), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 4000, 1000, 1);
			if (func_610(&(uParam0->f_565.f_31[4 /*3*/]), 2f, 1, 1))
			{
				func_266(1, 0);
				func_582(&(uParam0->f_687), 8);
			}
			break;
		case 8:
			__LIB_8__::func_225(__LIB_17__::func_812(3, 8), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 4000, 1000, 1);
			if (func_541(uParam0, 2, 30))
			{
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_227(267), 0, 1065353216 /* Float: 1f */, 0.5f, 1);
				func_646(Global_35, 352, 0);
				func_646(Global_35, 404, 0);
				func_646(Global_35, 249, 0);
				func_646(Global_35, 43, 0);
				func_642(Global_35, 0, 0);
				func_583(Global_35, 1);
				PED::_0x58F7DB5BD8FA2288(Global_35);
				PED::_0x49DADFC4CD808B0A(Global_35, 0, -1);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_487[37], func_227(4), func_227(47), 1))
				{
					ENTITY::STOP_ENTITY_ANIM(uParam0->f_487[37], func_227(47), func_227(4), -8f);
				}
				__LIB_2__::func_919(uParam0->f_487[37], 0, 1);
				PHYSICS::_0x10DAA76CB8A201A1(uParam0->f_687.f_3);
				func_582(&(uParam0->f_687), 9);
			}
			break;
		case 9:
			if (func_609(Global_35, 1, 12))
			{
				if (func_576(Global_35, 1, 12) >= 0.77f)
				{
					func_1210(uParam0->f_687.f_3, Global_35);
					func_1211(uParam0->f_687.f_3, uParam0->f_487[33], 0.03f, 0.11f, 0.3f, 0, (PHYSICS::GET_ROPE_VERTEX_COUNT(uParam0->f_687.f_3) - 1), 1);
				}
				else if (func_576(Global_35, 1, 12) >= 0.2f)
				{
					func_1210(uParam0->f_687.f_3, uParam0->f_487[37]);
					func_1211(uParam0->f_687.f_3, Global_35, 0f, 0f, 0f, "SKEL_L_Finger12", (PHYSICS::GET_ROPE_VERTEX_COUNT(uParam0->f_687.f_3) - 1), 1);
				}
				else if (func_576(Global_35, 1, 12) >= 0.1f)
				{
					func_1211(uParam0->f_687.f_3, Global_35, 0f, 0f, 0f, "SKEL_L_Finger12", (PHYSICS::GET_ROPE_VERTEX_COUNT(uParam0->f_687.f_3) - 1), 1);
				}
				else
				{
					func_1210(uParam0->f_687.f_3, Global_35);
				}
			}
			if (func_1215(uParam0, 2, 37))
			{
				func_571(uParam0->f_487[37], 1);
			}
			if (func_619(uParam0, 30))
			{
				func_582(&(uParam0->f_687), 11);
			}
			break;
		case 11:
			if (uParam0->f_687 >= 3)
			{
				func_1210(uParam0->f_687.f_3, uParam0->f_487[35]);
				func_582(&(uParam0->f_687), 12);
			}
			break;
		case 12:
			break;
	}
}

bool func_652(var uParam0, int iParam1)
{
	return ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_552[iParam1], false);
}

int func_654(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 11;
	while (iVar1 <= 18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_40[iVar1]))
		{
			__LIB_0__::func_490(&(uParam0->f_40[iVar1]), 0);
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_656(var uParam0, bool bParam1)
{
	func_1003(uParam0, 2048, bParam1);
}

bool func_657(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 2048);
}

bool func_659(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return __LIB_8__::func_957(uParam0, 65536);
		case 3:
			return __LIB_8__::func_957(uParam0, 262144);
		case 4:
			return __LIB_8__::func_957(uParam0, 1048576);
		default:
			break;
	}
	return false;
}

void func_661(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bVar0 = !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35));
	func_646(uParam1->f_40[0], 167, bVar0);
	func_646(uParam1->f_40[0], 59, 1);
	func_646(uParam1->f_40[0], 333, bVar0);
	if (__LIB_0__::func_394(uParam1->f_40[0], uParam1->f_40[1], 0))
	{
		bVar1 = __LIB_0__::func_48(uParam1->f_40[0], Global_35, 50f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_40[0], !bVar1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_40[1], !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_40[0], 6, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_40[0], 17, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_40[0], 58, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_40[0], 87, true);
		COMPANION::_0x2917E634206B9E17(uParam1->f_40[0], 1);
		__LIB_0__::func_705(func_267(0), 0);
	}
	else if (bVar0 && PED::_0x2D64376CF437363E(uParam1->f_40[1]))
	{
		if (!__LIB_0__::func_163(uParam1->f_40[0], 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(uParam1->f_40[0], uParam1->f_40[1], -1, -1, 2f, 1, 0, 0);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_40[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_40[1], true);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam1->f_40[0], 2f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam1->f_40[0], 2f);
		}
	}
	else if (PED::IS_PED_ON_MOUNT(uParam1->f_40[0]) && !__LIB_0__::func_163(uParam1->f_40[0], 501393341))
	{
		TASK::TASK_DISMOUNT_ANIMAL(uParam1->f_40[0], 0, 0, 0, 0, 0);
	}
	if (!func_610(&(uParam0->f_31[14 /*3*/]), 2f, 1, 0))
	{
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam1->f_40[4], 1.6f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam1->f_40[4], 1.6f);
		return;
	}
	func_646(uParam1->f_40[4], 167, bVar0);
	func_646(uParam1->f_40[4], 59, 1);
	func_646(uParam1->f_40[4], 333, bVar0);
	if (__LIB_0__::func_394(uParam1->f_40[4], uParam1->f_40[5], 0))
	{
		bVar1 = __LIB_0__::func_48(uParam1->f_40[4], Global_35, 50f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_40[4], !bVar1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_40[5], !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_40[4], 6, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_40[4], 17, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_40[4], 58, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_40[4], 87, true);
		COMPANION::_0x2917E634206B9E17(uParam1->f_40[4], 1);
		__LIB_0__::func_705(func_267(4), 0);
	}
	else if (bVar0 && PED::_0x2D64376CF437363E(uParam1->f_40[5]))
	{
		if (!__LIB_0__::func_163(uParam1->f_40[4], 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(uParam1->f_40[4], uParam1->f_40[5], -1, -1, 2f, 1, 0, 0);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_40[4], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_40[5], true);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam1->f_40[4], 2f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam1->f_40[4], 2f);
		}
	}
	else if (PED::IS_PED_ON_MOUNT(uParam1->f_40[4]) && !__LIB_0__::func_163(uParam1->f_40[4], 501393341))
	{
		TASK::TASK_DISMOUNT_ANIMAL(uParam1->f_40[4], 0, 0, 0, 0, 0);
	}
}

void func_664(var uParam0, int iParam1, int iParam2)
{
	func_646(uParam0->f_40[iParam1], 279, 1);
	func_646(uParam0->f_40[iParam1], 280, 1);
	func_1225(uParam0->f_40[iParam1], iParam2, 0);
}

void func_665(int iParam0, int iParam1)
{
	int iVar0;
	if (!PED::DOES_GROUP_EXIST(iParam0))
	{
		return;
	}
	iVar0 = PED::_GET_GROUP_FORMATION(iParam0);
	if (iVar0 != iParam1)
	{
		PED::SET_GROUP_FORMATION(iParam0, iParam1);
	}
}

void func_668(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 11;
	while (iVar0 <= 18)
	{
		if (__LIB_0__::func_48(uParam1->f_40[iVar0], Global_35, 150f, 1))
		{
			if (!__LIB_0__::func_163(uParam1->f_40[iVar0], -2117564886))
			{
				if (!func_610(&(uParam0->f_31[6 /*3*/]), 30f, 1, 0) && PED::_0x7F9B9791D4CB71F6(uParam1->f_40[iVar0], Global_35, 1, 0) != 1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS(uParam1->f_40[iVar0], 3f);
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_40[iVar0]))
		{
			if ((func_610(&(uParam0->f_31[6 /*3*/]), 30f, 1, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_40[iVar0])) && !ENTITY::IS_ENTITY_ON_SCREEN(uParam1->f_40[iVar0]))
			{
				PED::DELETE_PED(&(uParam1->f_40[iVar0]));
				iVar1 = func_1226(iVar0);
				if (iVar1 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_40[iVar1]))
					{
						PED::DELETE_PED(&(uParam1->f_40[iVar1]));
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_681(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_1231(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (__LIB_0__::func_702(Global_1360165[iParam0 /*1157*/].f_4.f_2) || __LIB_1__::func_44(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_1231(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_1232(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!__LIB_0__::func_959(iParam0, 0))
					{
						__LIB_0__::func_288(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { __LIB_0__::func_229(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				__LIB_0__::func_290(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!__LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_683(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_683(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_683(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_694(var uParam0, var uParam1)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	if (!func_1252())
	{
		return false;
	}
	bVar0 = true;
	if (!AUDIO::_0xD9130842D7226045(func_227(259), 0))
	{
		bVar0 = false;
	}
	if (!func_1253(uParam1))
	{
		bVar0 = false;
	}
	func_259(1);
	if (PED::_0x62DE46F061CAA468() != 19)
	{
		PED::_0xED9582B3DA8F02B4(19);
		bVar0 = false;
	}
	else if (!PED::_0x5E420FF293EE5472())
	{
		bVar0 = false;
	}
	if (!__LIB_0__::func_272(uParam1->f_1111.f_40[2], 0))
	{
		uParam1->f_1111.f_40[2] = Global_35;
		bVar0 = false;
	}
	if (!__LIB_0__::func_272(uParam1->f_1111.f_40[0], 0))
	{
		uParam1->f_1111.f_40[0] = func_239(func_267(0), 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, -2040275819, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		bVar0 = false;
	}
	if (!__LIB_0__::func_272(uParam1->f_1111.f_40[4], 0))
	{
		uParam1->f_1111.f_40[4] = func_239(func_267(4), 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, -922193456, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		bVar0 = false;
	}
	if (!__LIB_0__::func_272(uParam1->f_1111.f_40[3], 0))
	{
		Var1 = { __LIB_19__::func_94(0, 5) };
		uParam1->f_1111.f_40[3] = func_1254(Var1, Var1.f_3, 1, 1, 0, 1, 1);
		bVar0 = false;
	}
	if (!__LIB_0__::func_272(uParam1->f_1111.f_40[1], 0))
	{
		uParam1->f_1111.f_40[1] = func_1255(func_267(0), 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		bVar0 = false;
	}
	if (!__LIB_0__::func_272(uParam1->f_1111.f_40[5], 0))
	{
		uParam1->f_1111.f_40[5] = func_1255(func_267(4), 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		bVar0 = false;
	}
	if (!__LIB_1__::func_566(&(Global_1360165[func_267(0) /*1157*/].f_12), 16))
	{
		__LIB_1__::func_684(func_267(0), 1);
		bVar0 = false;
	}
	if (!__LIB_1__::func_566(&(Global_1360165[func_267(4) /*1157*/].f_12), 16))
	{
		__LIB_1__::func_684(func_267(4), 1);
		bVar0 = false;
	}
	if (bVar0)
	{
		func_260(&(uParam1->f_1111), 1);
		__LIB_0__::func_928(&(uParam1->f_730.f_276), Global_35, "ARTHUR", 0);
		__LIB_0__::func_928(&(uParam1->f_730.f_276), uParam1->f_1111.f_40[0], __LIB_0__::func_781(func_267(0)), 0);
		__LIB_0__::func_928(&(uParam1->f_730.f_276), uParam1->f_1111.f_40[4], __LIB_0__::func_781(func_267(4)), 0);
		__LIB_1__::func_766(uParam1->f_1111.f_40[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 14, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		__LIB_1__::func_766(uParam1->f_1111.f_40[4], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 14, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		uParam0->f_4 = uParam1->f_1111.f_40[3];
		func_571(uParam1->f_1111.f_40[3], 0);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_1111.f_40[1], true);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_1111.f_40[5], true);
		__LIB_0__::func_705(func_267(0), 1);
		__LIB_0__::func_705(func_267(4), 1);
		Global_1430231.f_2 = 1;
		__LIB_0__::func_496();
		__LIB_0__::func_326(64);
		__LIB_1__::func_600(0);
		__LIB_3__::func_229(70);
		__LIB_10__::func_768(1);
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("CABR01")))
		{
			UILOG::_UILOG_ADD_ENTRY_HASH(3, joaat("CABR01"), __LIB_17__::func_812(0, 11), 1492523666, joaat("CABR01_DESC"), iVar5);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, joaat("CABR01"), joaat("BLIP_ROBBERY_BANK"), joaat("TOAST_LOG_BLIPS"));
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, joaat("CABR01"), joaat("MISSION_BANK_CHARLES"), joaat("SP_MISSIONS_4"));
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("CABR01_CHALL_1"), "CABR01_CHALL_1", false, true, false);
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("MISS_CHALL_TIME_5_45"), "MISS_CHALL_TIME_5_45", false, true, false);
		}
	}
	return bVar0;
}

bool func_725(var uParam0)
{
	int iVar0;
	iVar0 = uParam0->f_7;
	func_641(&(Local_18.f_565), 1);
	Global_1879514.f_11 = __LIB_0__::func_513();
	switch (iVar0)
	{
		case 0:
			return func_1298(&uLocal_1250);
		case 1:
			return func_1299(&uLocal_1250);
		case 2:
			return func_1300(&uLocal_1250);
		case 3:
			return func_1301(&uLocal_1250);
		case 4:
			return func_1302(&uLocal_1250);
		case 5:
			return func_1303(&uLocal_1250);
		default:
			break;
	}
	return false;
}

int func_733(int iParam0, int iParam1)
{
	var uVar0;
	return func_1307(&uVar0, iParam0, iParam1);
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_CS_BILLSINGLE01X");
		case 1:
			return joaat("P_CS_BILLSTACK01X");
		case 2:
			return joaat("S_PICKUP_BOND01X");
		case 3:
			return joaat("P_BOTTLEJD01X");
		case 4:
			return joaat("P_CHAIR_CRATE02X");
		case 5:
			return joaat("P_CHAIRFOLDING02X");
		case 6:
			return joaat("S_PICKUP_COINCUP01X");
		case 7:
			return joaat("S_PICKUP_COINCUP02X");
		case 8:
			return joaat("P_DETONATOR01X");
		case 9:
			return joaat("P_GEN_DOCUMENTFOLDER01X");
		case 10:
			return joaat("P_STICKYDYMT_BUNDLE");
		case 11:
			return joaat("P_CS_FUSESPOOL01X");
		case 12:
			return joaat("P_CS_FUSESPOOLWIRE01X");
		case 13:
			return joaat("S_PICKUP_GOLDBAR01X");
		case 14:
			return joaat("S_PICKUP_GOLDBAR02X");
		case 15:
			return joaat("S_PICKUP_JEWELRYBAG01X");
		case 16:
			return joaat("S_PICKUP_JEWELRYBAG02X");
		case 17:
			return joaat("W_MELEE_KNIFE02");
		case 18:
			return joaat("S_M_M_AMBIENTLAWRURAL_01");
		case 19:
			return joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
		case 20:
			return joaat("S_MP_MONEYBAG02X");
		case 21:
			return joaat("P_MONEYSTACK01X");
		case 22:
			return joaat("S_M_M_AMBIENTLAWRURAL_01");
		case 23:
			return joaat("W_REVOLVER_CATTLEMAN01");
		case 24:
			return joaat("W_SHOTGUN_DOUBLEBARREL01");
		case 25:
			return joaat("P_CS_UNCLEHAT01X");
		case 26:
			return joaat("S_VAULT_MED_R_VAL_BENT01X");
		case 27:
			return joaat("S_VAULT_MED_R_VAL_BENT02X");
		case 28:
			return joaat("S_VAULT_MED_R_VAL01X");
		case 29:
			return joaat("S_VAULT_SML_L_VAL_BENT01X");
		case 30:
			return joaat("S_VAULT_SML_R_VAL_BENT01X");
		case 31:
			return joaat("S_VAULT_SML_R_VAL01X");
		default:
			break;
	}
	return 0;
}

bool func_737(var uParam0, int iParam1)
{
	return func_1309(uParam0, iParam1, 1);
}

void func_738(var uParam0, int iParam1, bool bParam2)
{
	func_1310(uParam0, iParam1, 1, bParam2);
}

void func_739(var uParam0, int iParam1, int iParam2)
{
	if (func_1043(iParam1, iParam2))
	{
		if (func_1068(uParam0, iParam1, iParam2))
		{
			func_1311(uParam0, iParam1, iParam2);
		}
	}
}

char* func_740(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "p_cs_billsingle01x";
		case 1:
			return "p_cs_billsingle01x^1";
		case 2:
			return "p_cs_billsingle01x^2";
		case 3:
			return "p_cs_billsingle01x^3";
		case 4:
			return "p_cs_billsingle01x^4";
		case 5:
			return "p_cs_billstack01x";
		case 6:
			return "p_cs_billstack01x^1";
		case 7:
			return "p_cs_billstack01x^2";
		case 8:
			return "p_cs_billstack01x^3";
		case 9:
			return "p_cs_billstack01x^4";
		case 10:
			return "p_cs_billstack01x^5";
		case 11:
			return "p_cs_billstack01x^6";
		case 12:
			return "p_cs_billstack01x^7";
		case 27:
			return "s_pickup_bond01x";
		case 28:
			return "p_bottleJD01x";
		case 29:
			return "p_chair_crate02x";
		case 30:
			return "p_chairfolding02x";
		case 31:
			return "s_pickup_coincup01x";
		case 32:
			return "s_pickup_coincup02x";
		case 33:
			return "p_detonator01x";
		case 35:
			return "p_StickyDymt_bundle";
		case 36:
			return "p_StickyDymt_bundle^1";
		case 37:
			return "p_cs_fusespool01x";
		case 39:
			return "s_pickup_goldbar01x";
		case 40:
			return "s_pickup_goldbar02x";
		case 41:
			return "s_pickup_jewelrybag01x";
		case 42:
			return "s_pickup_jewelrybag02x";
		case 44:
			return "s_mp_moneybag02x";
		case 45:
			return "s_mp_moneybag02x^1";
		case 46:
			return "p_moneyStack01x";
		case 47:
			return "w_revolver_cattleman01";
		case 48:
			return "w_shotgun_sawed01";
		case 49:
			return "p_cs_unclehat01x";
		case 50:
			return "s_vault_med_r_val01x";
		case 51:
			return "s_vault_med_r_val02x";
		case 52:
			return "s_vault_med_r_val01x";
		case 53:
			return "s_vault_sml_l_val01x";
		case 54:
			return "s_vault_sml_r_val01x";
		default:
			break;
	}
	return "";
}

char* func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CharlesSmith";
		case 1:
			return "Horse_01^2";
		case 2:
			return "ARTHUR";
		case 3:
			return "Horse_01^1";
		case 4:
			return "uncle";
		case 5:
			return "Horse_01";
		case 6:
			return "S_M_M_AmbientLawRural_01";
		default:
			break;
	}
	return "";
}

void func_745(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		if (!AITRANSPORT::_0xF382C92CCC1CCDBC(iParam0, iParam1, 1))
		{
			AITRANSPORT::_0xBA8818212633500A(iParam0, iParam1, 1);
		}
	}
	else if (AITRANSPORT::_0xF382C92CCC1CCDBC(iParam0, iParam1, 1))
	{
		AITRANSPORT::_0xBA8818212633500A(iParam0, iParam1, 0);
	}
}

bool func_754(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			return func_1320(uParam0, iParam1, 1);
		case 1:
			return func_1320(uParam0, iParam1, 2);
		case 2:
			return func_1320(uParam0, iParam1, 4);
		case 3:
			return func_1320(uParam0, iParam1, 8);
		default:
			break;
	}
	return false;
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1653067266;
		case 1:
			return 1312911644;
		case 2:
			return joaat("META_WEARABLE_MONEY_BAG");
		case 3:
			return joaat("META_HORSE_SADDLE_ONLY");
		default:
			break;
	}
	return -1;
}

void func_919(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_131(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1442(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_134(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_442(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1447(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_922(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_131(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_442(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_442(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_442(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_442(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_442(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_442(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_442(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_442(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_442(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_442(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_442(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

int func_967(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_967(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_967(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_992(char* sParam0, int iParam1)
{
	int iVar0;
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			iVar0 = 184;
			while (iVar0 <= 207)
			{
				if (MISC::ARE_STRINGS_EQUAL(func_227(iVar0), sParam0))
				{
					return true;
				}
				iVar0++;
			}
			break;
		case 3:
			iVar0 = 208;
			while (iVar0 <= 220)
			{
				if (MISC::ARE_STRINGS_EQUAL(func_227(iVar0), sParam0))
				{
					return true;
				}
				iVar0++;
			}
			break;
		case 4:
		case 5:
			iVar0 = 221;
			while (iVar0 <= 235)
			{
				if (MISC::ARE_STRINGS_EQUAL(func_227(iVar0), sParam0))
				{
					return true;
				}
				iVar0++;
			}
			break;
		default:
			break;
	}
	return false;
}

void func_997(var uParam0, int iParam1, bool bParam2)
{
	func_1013(uParam0, iParam1, 1, bParam2);
}

void func_999()
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
}

void func_1002(var uParam0, int iParam1, bool bParam2)
{
	func_1013(uParam0, iParam1, 4, bParam2);
}

void func_1003(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!__LIB_8__::func_957(uParam0, iParam1))
		{
			__LIB_0__::func_7(uParam0, iParam1);
		}
	}
	else if (__LIB_8__::func_957(uParam0, iParam1))
	{
		__LIB_0__::func_8(uParam0, iParam1);
	}
}

bool func_1010(var uParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_1(uParam0->f_5[iParam1], iParam2);
}

bool func_1012(var uParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_1(uParam0->f_20[iParam1], iParam2);
}

void func_1013(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1010(uParam0, iParam1, iParam2))
		{
			__LIB_0__::func_7(&(uParam0->f_5[iParam1]), iParam2);
		}
	}
	else if (func_1010(uParam0, iParam1, iParam2))
	{
		__LIB_0__::func_8(&(uParam0->f_5[iParam1]), iParam2);
	}
}

void func_1014(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1012(uParam0, iParam1, iParam2))
		{
			__LIB_0__::func_7(&(uParam0->f_20[iParam1]), iParam2);
		}
	}
	else if (func_1012(uParam0, iParam1, iParam2))
	{
		__LIB_0__::func_8(&(uParam0->f_20[iParam1]), iParam2);
	}
}

bool func_1017(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 19);
}

bool func_1018(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 184;
	while (iVar1 <= 207)
	{
		if (func_538(uParam0, iVar1) && !func_532(uParam0, iVar1))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return false;
	}
	else if (!func_1501(uParam0, uParam1, iParam2, iVar0))
	{
		return false;
	}
	switch (iParam2)
	{
		case 0:
			return (((((((((((((iVar0 == 184 || iVar0 == 185) || iVar0 == 188) || iVar0 == 190) || iVar0 == 191) || iVar0 == 195) || iVar0 == 196) || iVar0 == 197) || iVar0 == 198) || iVar0 == 201) || iVar0 == 202) || iVar0 == 203) || iVar0 == 204) || iVar0 == 207);
		case 2:
			return (((iVar0 == 187 || iVar0 == 189) || iVar0 == 200) || iVar0 == 206);
		case 4:
			return (((iVar0 == 186 || iVar0 == 189) || iVar0 == 199) || iVar0 == 205);
		case 6:
			return iVar0 == 193;
		default:
			break;
	}
	return false;
}

bool func_1019(var uParam0, int iParam1)
{
	return func_1012(uParam0, iParam1, 2);
}

int func_1020(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_5__::func_236(1) || !__LIB_0__::func_481(1))
	{
		return 0;
	}
	iVar0 = 184;
	while (iVar0 <= 207)
	{
		if ((func_538(uParam0, iVar0) && !func_532(uParam0, iVar0)) && func_1501(uParam0, uParam1, iParam2, iVar0))
		{
			return AUDIO::_0x152ED1B56E8F1F50(func_227(iVar0), AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_227(iVar0)));
		}
		iVar0++;
	}
	return 0;
}

void func_1021(var uParam0, int iParam1, bool bParam2)
{
	func_1014(uParam0, iParam1, 2, bParam2);
}

int func_1022(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 11;
		case 0:
			return 3;
		case 4:
			return 15;
		case 6:
			return 10;
		default:
			break;
	}
	return -1;
}

char* func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(115);
		case 1:
			return func_227(116);
		case 2:
			return func_227(117);
		case 3:
			return func_227(118);
		case 4:
			return func_227(119);
		case 5:
			return func_227(120);
		case 6:
			return func_227(121);
		case 7:
			return func_227(122);
		case 8:
			return func_227(123);
		case 9:
			return func_227(124);
		case 10:
			return func_227(125);
		case 11:
			return func_227(126);
		case 12:
			return func_227(127);
		case 13:
			return func_227(128);
		case 14:
			return func_227(129);
		case 15:
			return func_227(130);
		case 16:
			return func_227(132);
		case 17:
			return func_227(133);
		case 18:
			return func_227(134);
		case 19:
			return func_227(135);
		case 20:
			return func_227(136);
		case 21:
			return func_227(137);
		case 22:
			return func_227(138);
		case 23:
			return func_227(139);
		case 24:
			return func_227(140);
		case 25:
			return func_227(141);
		case 26:
			return func_227(142);
		case 27:
			return func_227(143);
		case 28:
			return func_227(144);
		case 29:
			return func_227(145);
		case 30:
			return func_227(146);
		case 31:
			return func_227(147);
		case 32:
			return func_227(148);
		case 33:
			return func_227(149);
		case 34:
			return func_227(150);
		case 35:
			return func_227(151);
		case 36:
			return func_227(152);
		case 37:
			return func_227(153);
		case 38:
			return func_227(154);
		case 39:
			return func_227(155);
		case 40:
			return func_227(156);
		case 41:
			return func_227(157);
		case 42:
			return func_227(158);
		case 43:
			return func_227(159);
		case 44:
			return func_227(160);
		case 45:
			return func_227(161);
		case 46:
			return func_227(163);
		case 47:
			return func_227(165);
		case 48:
			return func_227(167);
		case 49:
			return func_227(169);
		case 50:
			return func_227(171);
		case 51:
			return func_227(173);
		case 52:
			return func_227(174);
		case 53:
			return func_227(175);
		case 54:
			return func_227(176);
		case 55:
			return func_227(177);
		case 56:
			return func_227(178);
		case 57:
			return func_227(179);
		case 58:
			return func_227(180);
		default:
			break;
	}
	return "";
}

bool func_1031(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return __LIB_8__::func_957(uParam0, 32768);
		case 3:
			return __LIB_8__::func_957(uParam0, 131072);
		case 4:
			return __LIB_8__::func_957(uParam0, 524288);
		default:
			break;
	}
	return false;
}

bool func_1032(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 16777216);
}

void func_1034(int iParam0)
{
	Global_1934266.f_78.f_63 = iParam0;
}

bool func_1038(var uParam0, int iParam1)
{
	return func_1010(uParam0, iParam1, 1);
}

void func_1039(var uParam0, int iParam1, bool bParam2)
{
	func_1505(uParam0, iParam1, 1, bParam2);
}

void func_1040(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if ((((!ENTITY::DOES_ENTITY_EXIST(uParam1->f_487[iParam3]) || !func_1052(iParam2, iParam3)) || func_737(uParam1, iParam3)) || (iParam3 == 53 && iParam2 == 4)) || ((iParam3 == 35 || iParam3 == 37) && func_1506(uParam0)))
	{
		return;
	}
	if (func_1053(uParam1, iParam2, iParam3))
	{
		if (func_579(uParam1, iParam2, iParam3, 0) != uParam1->f_487[iParam3])
		{
			func_580(uParam1, iParam2, iParam3, uParam1->f_487[iParam3], 0);
		}
	}
}

void func_1041(var uParam0, int iParam1, int iParam2)
{
	if (!func_1055(iParam1, iParam2) || (iParam2 == 5 && func_619(uParam0, 30)))
	{
		return;
	}
	if (func_1056(uParam0, iParam1, iParam2))
	{
		if (func_1057(uParam0, iParam1, iParam2, 0) != uParam0->f_543[iParam2])
		{
			func_585(uParam0, iParam1, iParam2, uParam0->f_543[iParam2], 0);
		}
	}
}

void func_1042(var uParam0, int iParam1, int iParam2)
{
	if (!func_1043(iParam1, iParam2))
	{
		return;
	}
	else if (func_619(uParam0, iParam2))
	{
		func_1311(uParam0, iParam1, iParam2);
		return;
	}
	if (!func_1068(uParam0, iParam1, iParam2))
	{
		if (!func_1507(uParam0, iParam1, iParam2))
		{
			if (func_1508(uParam0, iParam1))
			{
				func_1509(uParam0, iParam1, iParam2);
			}
		}
	}
}

bool func_1043(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return ((((((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4) || iParam1 == 5) || iParam1 == 6);
		case 1:
			return (((((iParam1 == 7 || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 11) || iParam1 == 6);
		case 2:
			return (((((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 26) || iParam1 == 30);
		case 3:
			return ((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22) || iParam1 == 23) || iParam1 == 24) || iParam1 == 26) || iParam1 == 27);
		case 4:
			return ((((((((((iParam1 == 31 || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || iParam1 == 35) || iParam1 == 36) || iParam1 == 37) || iParam1 == 38) || iParam1 == 39) || iParam1 == 40) || iParam1 == 53);
		case 5:
			return iParam1 == 43;
		case 6:
			return (((iParam1 == 46 || iParam1 == 48) || iParam1 == 50) || iParam1 == 56);
		case 7:
			return ((((iParam1 == 45 || iParam1 == 47) || iParam1 == 49) || iParam1 == 55) || iParam1 == 54);
		case 8:
			return ((iParam1 == 51 || iParam1 == 52) || iParam1 == 57);
		case 9:
			return iParam1 == 58;
		default:
			break;
	}
	return false;
}

int func_1044(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return ANIMSCENE::_CREATE_ANIM_SCENE(func_1510(iParam0), iParam1, 0, false, true);
	}
	return ANIMSCENE::_CREATE_ANIM_SCENE(func_1510(iParam0), iParam1, func_1023(iParam2), false, true);
}

bool func_1045(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	return ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_552[iParam1], bParam2, bParam3);
}

bool func_1046(var uParam0, int iParam1)
{
	return ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_552[iParam1], true);
}

void func_1047(var uParam0, int iParam1)
{
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_552[iParam1]);
}

bool func_1048(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar4;
	var uVar7;
	vector3 vVar10;
	switch (iParam1)
	{
		case 4:
			vVar0 = { __LIB_19__::func_94(4, 6) };
			break;
		case 5:
			vVar0 = { __LIB_19__::func_94(4, 7) };
			break;
		case 6:
			vVar0 = { __LIB_19__::func_94(4, 8) };
			break;
		case 7:
			vVar0 = { __LIB_19__::func_94(4, 9) };
			break;
		case 8:
			vVar0 = { __LIB_19__::func_94(4, 10) };
			break;
		case 9:
			vVar0 = { __LIB_19__::func_94(7, 16) };
			break;
		default:
			return true;
	}
	ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_552[iParam1], &vVar4, &uVar7, 2);
	if (!__LIB_0__::func_138(vVar0, vVar4))
	{
		vVar10 = { 0f, 0f, vVar0.f_3 };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_552[iParam1], vVar0, vVar10, 2);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_1049(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_552[iParam1], func_1511(iParam2));
}

bool func_1050(var uParam0, int iParam1, int iParam2)
{
	if (!func_1059(iParam1, iParam2))
	{
	}
	else if (!func_560(uParam0, iParam1))
	{
	}
	else if (!func_1049(uParam0, iParam1, iParam2))
	{
	}
	return func_1512(uParam0, iParam1, iParam2);
}

bool func_1051(var uParam0, int iParam1, int iParam2)
{
	if (!func_1043(iParam1, iParam2))
	{
	}
	else if (!func_1508(uParam0, iParam1))
	{
	}
	else if (!func_1068(uParam0, iParam1, iParam2))
	{
		if (!func_1507(uParam0, iParam1, iParam2))
		{
			func_1509(uParam0, iParam1, iParam2);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_1052(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return ((iParam1 == 35 || iParam1 == 37) || iParam1 == 44);
		case 1:
			return iParam1 == 33;
		case 2:
			return ((iParam1 == 33 || iParam1 == 37) || iParam1 == 43);
		case 3:
			return (((iParam1 == 33 || iParam1 == 35) || iParam1 == 44) || iParam1 == 53);
		case 5:
			return iParam1 == 50;
		case 6:
			return ((((iParam1 == 51 || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16);
		case 7:
			return (((((((iParam1 == 52 || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22) || iParam1 == 23);
		case 8:
			return (((iParam1 == 54 || iParam1 == 24) || iParam1 == 25) || iParam1 == 26);
		case 4:
			return ((((((((iParam1 == 5 || iParam1 == 6) || iParam1 == 7) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 34) || iParam1 == 44) || iParam1 == 53);
		case 9:
			return iParam1 == 37;
		default:
			break;
	}
	return false;
}

bool func_1053(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_552[iParam1], func_1072(iParam2));
}

bool func_1054(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_487[iParam2]))
	{
		vVar0 = { func_1513(uParam0, iParam1, iParam2) };
		vVar3 = { func_1514(uParam0, iParam1, iParam2) };
		iVar6 = func_1075(iParam2);
		uParam0->f_487[iParam2] = OBJECT::CREATE_OBJECT(iVar6, vVar0, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_487[iParam2], vVar3, 2, true);
		func_571(uParam0->f_487[iParam2], 1);
		return false;
	}
	return true;
}

bool func_1055(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return iParam1 == 2;
		case 2:
		case 3:
			return (iParam1 == 0 || iParam1 == 2);
		case 1:
			return iParam1 == 5;
		case 4:
			return iParam1 == 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return iParam1 == 0;
		default:
			break;
	}
	return false;
}

bool func_1056(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_552[iParam1], func_1061(iParam2));
}

int func_1057(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	return ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_552[iParam1], func_1061(iParam2), bParam3);
}

void func_1058(var uParam0, int iParam1)
{
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_552[iParam1]);
}

bool func_1059(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return iParam1 == 0;
		default:
			break;
	}
	return false;
}

void func_1060(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_552[iParam1], func_1511(iParam2), bParam3, false);
}

char* func_1061(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(108);
		case 1:
			return func_227(109);
		case 2:
			return func_227(110);
		case 3:
			return func_227(111);
		case 4:
			return func_227(112);
		case 5:
			return func_227(113);
		case 6:
			return func_227(114);
		default:
			break;
	}
	return "";
}

bool func_1062(int iParam0)
{
	return iParam0 == 15;
}

bool func_1063(int iParam0)
{
	return (((iParam0 == 16 || iParam0 == 17) || iParam0 == 18) || iParam0 == 19);
}

int func_1064(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 16:
			return joaat("VOLBOX");
		case 1:
		case 3:
		case 17:
		case 18:
		case 19:
			return joaat("VOLCYLINDER");
		default:
			break;
	}
	return -1;
}

Vector3 func_1065(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, -129.8942f;
		case 1:
			return 0f, 0f, 50f;
		case 2:
			return 0f, 0f, 50f;
		case 3:
			return 0f, 0f, 0f;
		case 4:
			return 0f, 0f, 42.9092f;
		case 5:
			return 0f, 0f, -60.00001f;
		case 6:
			return 0f, 0f, 140f;
		case 7:
			return 0f, 0f, -22f;
		case 8:
			return 0f, 0f, 20f;
		case 9:
			return 0f, 0f, -129.8565f;
		case 10:
			return 0f, 0f, 50.04242f;
		case 11:
			return 0f, 0f, -130f;
		case 12:
		case 13:
		case 14:
			return 0f, 0f, -40f;
		case 16:
		case 17:
			return 0f, 0f, -130f;
		case 18:
		case 19:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1066(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 21.56125f, 12.21044f, 7.860487f;
		case 1:
			return 8f, 8f, 5f;
		case 2:
			return 16f, 8f, 10f;
		case 3:
			return 5f, 5f, 1.5f;
		case 4:
			return 10f, 6f, 5f;
		case 5:
			return 25f, 70f, 10f;
		case 6:
			return 290f, 70f, 15f;
		case 7:
			return 40f, 80f, 10f;
		case 8:
			return 20f, 15f, 10f;
		case 9:
			return 4.655136f, 8.5f, 4.534712f;
		case 10:
			return 4.653793f, 7.809516f, 2.117258f;
		case 11:
			return 1.5f, 1.2f, 1.6f;
		case 12:
		case 13:
		case 14:
			return 0.7f, 0.7f, 2f;
		case 16:
			return 2.5f, 0.5f, 4f;
		case 17:
			return 1f, 1f, 1.5f;
		case 18:
		case 19:
			return 0.75f, 0.75f, 1f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1068(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_552[iParam1], func_1023(iParam2));
}

void func_1069(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_552[iParam1], func_1023(iParam2), bParam3);
}

char* func_1070(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(0);
		case 1:
			return func_227(1);
		case 2:
			return func_227(2);
		case 3:
			return func_227(4);
		case 4:
			return func_227(3);
		default:
			break;
	}
	return "";
}

char* func_1071(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(5);
		case 1:
			return func_227(6);
		case 2:
			return func_227(7);
		case 3:
			return func_227(8);
		case 4:
			return func_227(9);
		case 5:
			return func_227(10);
		case 6:
			return func_227(11);
		case 7:
			return func_227(12);
		case 8:
			return func_227(13);
		case 9:
			return func_227(14);
		case 10:
			return func_227(15);
		case 11:
			return func_227(16);
		case 12:
			return func_227(17);
		case 13:
			return func_227(18);
		case 14:
			return func_227(19);
		case 15:
			return func_227(20);
		case 16:
			return func_227(21);
		case 17:
			return func_227(22);
		case 18:
			return func_227(23);
		case 19:
			return func_227(24);
		case 20:
			return func_227(25);
		case 21:
			return func_227(26);
		case 22:
			return func_227(27);
		case 23:
			return func_227(28);
		case 24:
			return func_227(29);
		case 25:
			return func_227(30);
		case 28:
			return func_227(31);
		case 29:
			return func_227(32);
		case 30:
			return func_227(33);
		case 31:
			return func_227(34);
		case 32:
			return func_227(35);
		case 33:
			return func_227(36);
		case 34:
			return func_227(37);
		case 35:
			return func_227(38);
		case 36:
			return func_227(39);
		case 37:
			return func_227(40);
		case 38:
			return func_227(41);
		case 39:
			return func_227(42);
		case 40:
			return func_227(43);
		case 41:
			return func_227(44);
		case 42:
			return func_227(45);
		case 43:
			return func_227(46);
		default:
			break;
	}
	return "";
}

char* func_1072(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(53);
		case 1:
			return func_227(54);
		case 2:
			return func_227(55);
		case 3:
			return func_227(56);
		case 4:
			return func_227(57);
		case 5:
			return func_227(58);
		case 6:
			return func_227(59);
		case 7:
			return func_227(60);
		case 8:
			return func_227(61);
		case 9:
			return func_227(62);
		case 10:
			return func_227(63);
		case 11:
			return func_227(64);
		case 12:
			return func_227(65);
		case 13:
			return func_227(66);
		case 14:
			return func_227(67);
		case 15:
			return func_227(68);
		case 16:
			return func_227(69);
		case 17:
			return func_227(70);
		case 18:
			return func_227(71);
		case 19:
			return func_227(72);
		case 20:
			return func_227(73);
		case 21:
			return func_227(74);
		case 22:
			return func_227(75);
		case 23:
			return func_227(76);
		case 24:
			return func_227(77);
		case 25:
			return func_227(78);
		case 26:
			return func_227(79);
		case 27:
			return func_227(80);
		case 28:
			return func_227(81);
		case 29:
			return func_227(82);
		case 30:
			return func_227(83);
		case 31:
			return func_227(84);
		case 32:
			return func_227(85);
		case 33:
			return func_227(86);
		case 34:
			return func_227(87);
		case 35:
			return func_227(88);
		case 36:
			return func_227(89);
		case 37:
			return func_227(90);
		case 38:
			return func_227(91);
		case 39:
			return func_227(92);
		case 40:
			return func_227(93);
		case 41:
			return func_227(94);
		case 42:
			return func_227(95);
		case 43:
			return func_227(96);
		case 44:
			return func_227(97);
		case 45:
			return func_227(98);
		case 46:
			return func_227(99);
		case 47:
			return func_227(100);
		case 48:
			return func_227(101);
		case 49:
			return func_227(102);
		case 50:
			return func_227(103);
		case 51:
			return func_227(104);
		case 52:
			return func_227(105);
		case 53:
			return func_227(106);
		case 54:
			return func_227(107);
		default:
			break;
	}
	return "";
}

int func_1073(var uParam0, vector3 vParam1, char* sParam4, float fParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam8 != -1 && (iParam8 < 239 || iParam8 > 261))
	{
		return 0;
	}
	else if (uParam0->f_1 > 1 && PED::_IS_PED_CARRYING(Global_35))
	{
		__LIB_1__::func_748(&(uParam0->f_86), 1, 1);
		func_582(uParam0, 1);
	}
	switch (uParam0->f_1)
	{
		case 0:
			func_582(uParam0, 1);
			break;
		case 1:
			if (!PED::_IS_PED_CARRYING(Global_35))
			{
				func_582(uParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_139(uParam0->f_86))
			{
				uParam0->f_86 = __LIB_1__::func_282(sParam4, iParam7, vParam1, fParam5, 3, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_382(uParam0->f_86, 0, 1);
				__LIB_1__::func_221(uParam0->f_86, 0, 1);
			}
			else
			{
				func_582(uParam0, 3);
			}
			break;
		case 3:
			if (iParam8 != -1 && __LIB_0__::func_266(Global_35, vParam1, fParam5, 1, 1))
			{
				__LIB_4__::func_12(uParam0->f_86, -739709650, 0, 1);
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, fParam5, 3, 1, -739709650, func_227(iParam8), 0);
			}
			__LIB_1__::func_382(uParam0->f_86, __LIB_0__::func_266(Global_35, vParam1, fParam5, 1, 1), 1);
			__LIB_1__::func_221(uParam0->f_86, __LIB_0__::func_266(Global_35, vParam1, fParam6, 1, 1), 1);
			if (__LIB_0__::func_567(uParam0->f_86, 1))
			{
				func_582(uParam0, 4);
			}
			break;
		case 4:
			__LIB_1__::func_748(&(uParam0->f_86), 1, 1);
			func_582(uParam0, 5);
			break;
		case 5:
			return 1;
	}
	return 0;
}

int func_1074(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 53;
		case 1:
			return 50;
		case 2:
			return 51;
		case 3:
			return 52;
		case 4:
			return 54;
		default:
			break;
	}
	return -1;
}

int func_1075(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return func_736(0);
		case 5:
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
			return func_736(1);
		case 27:
			return func_736(2);
		case 28:
			return func_736(3);
		case 29:
			return func_736(4);
		case 30:
			return func_736(5);
		case 31:
			return func_736(6);
		case 32:
			return func_736(7);
		case 33:
			return func_736(8);
		case 34:
			return func_736(9);
		case 35:
		case 36:
			return func_736(10);
		case 37:
			return func_736(11);
		case 38:
			return func_736(12);
		case 39:
			return func_736(13);
		case 40:
			return func_736(14);
		case 41:
			return func_736(15);
		case 42:
			return func_736(16);
		case 43:
			return func_736(17);
		case 44:
		case 45:
			return func_736(20);
		case 46:
			return func_736(21);
		case 47:
			return func_736(23);
		case 48:
			return func_736(24);
		case 49:
			return func_736(25);
		case 50:
			return func_736(26);
		case 51:
			return func_736(27);
		case 52:
			return func_736(26);
		case 53:
			return func_736(30);
		case 54:
			return func_736(29);
		default:
			break;
	}
	return 0;
}

Vector3 func_1076(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_17__::func_812(4, 6);
		case 1:
			return __LIB_17__::func_812(4, 7);
		case 2:
			return __LIB_17__::func_812(4, 8);
		case 3:
			return __LIB_17__::func_812(4, 9);
		case 4:
			return __LIB_17__::func_812(4, 10);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_1077(var uParam0, int iParam1)
{
	return ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_552[iParam1]);
}

void func_1090(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1098(uParam0, iParam1, iParam2))
		{
			__LIB_0__::func_7(&(uParam0->f_60[iParam1]), iParam2);
		}
	}
	else if (func_1098(uParam0, iParam1, iParam2))
	{
		__LIB_0__::func_8(&(uParam0->f_60[iParam1]), iParam2);
	}
}

void func_1096(var uParam0, int iParam1, bool bParam2)
{
	switch (iParam1)
	{
		case 2:
			func_1003(uParam0, 32768, bParam2);
			break;
		case 3:
			func_1003(uParam0, 131072, bParam2);
			break;
		case 4:
			func_1003(uParam0, 524288, bParam2);
			break;
		default:
			break;
	}
}

void func_1097(var uParam0, int iParam1, bool bParam2)
{
	switch (iParam1)
	{
		case 2:
			func_1003(uParam0, 65536, bParam2);
			break;
		case 3:
			func_1003(uParam0, 262144, bParam2);
			break;
		case 4:
			func_1003(uParam0, 1048576, bParam2);
			break;
		default:
			break;
	}
}

bool func_1098(var uParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_1(uParam0->f_60[iParam1], iParam2);
}

void func_1099(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_630(&(uParam0->f_1171))))
	{
		return;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_1138(Global_35, func_630(&(uParam0->f_1171))), func_1138(uParam0->f_1111.f_40[0], func_630(&(uParam0->f_1171))), true);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_630(&(uParam0->f_1171))))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_630(&(uParam0->f_1171)), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar1);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_630(&(uParam0->f_1171)), ENTITY::GET_ENTITY_COORDS(uParam0->f_1111.f_40[0], true, false), &iVar2);
	}
	switch (__LIB_4__::func_819(&(uParam0->f_730)))
	{
		case 0:
			func_1529(&(uParam0->f_730), 222);
			func_512(&(uParam0->f_730), 222, 4, 6f, 1);
			if (fVar0 > 20f && iVar1 > iVar2)
			{
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			if (!func_538(&(uParam0->f_730), 186))
			{
				if (func_1142(uParam0->f_1111.f_40[0], uParam0->f_1171.f_52) >= 60)
				{
					func_512(&(uParam0->f_730), 186, 2, 0, 1);
				}
			}
			else if (!func_538(&(uParam0->f_730), 187))
			{
				if (func_1142(uParam0->f_1111.f_40[0], uParam0->f_1171.f_52) >= 275)
				{
					func_512(&(uParam0->f_730), 187, 2, 0, 1);
				}
			}
			else if (!func_538(&(uParam0->f_730), 188))
			{
				if (func_1142(uParam0->f_1111.f_40[0], uParam0->f_1171.f_52) >= 425)
				{
					func_512(&(uParam0->f_730), 188, 2, 0, 1);
				}
			}
			if (func_552(&(uParam0->f_565), 1, 6))
			{
				func_539(&(uParam0->f_730), -1, 1, 0);
			}
			else if (!__LIB_0__::func_394(Global_35, uParam0->f_1111.f_40[3], 0))
			{
				func_539(&(uParam0->f_730), 1, 1, 0);
			}
			break;
		case 1:
			func_1529(&(uParam0->f_730), 221);
			if (fVar0 > 20f && iVar1 > iVar2)
			{
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			if (func_552(&(uParam0->f_565), 1, 6))
			{
				func_539(&(uParam0->f_730), -1, 1, 0);
			}
			else if (__LIB_0__::func_394(Global_35, uParam0->f_1111.f_40[3], 0))
			{
				func_539(&(uParam0->f_730), 0, 1, 0);
			}
			else
			{
				func_512(&(uParam0->f_730), 185, 1, 20f, 0);
			}
			break;
		case 2:
			func_1529(&(uParam0->f_730), 223);
			if (!func_542(&(uParam0->f_730), 223))
			{
				func_512(&(uParam0->f_730), 223, 5, 0, 1);
			}
			if (fVar0 < 10f)
			{
				func_1002(&(uParam0->f_730), 223, 0);
				if (__LIB_0__::func_394(Global_35, uParam0->f_1111.f_40[3], 0))
				{
					func_539(&(uParam0->f_730), 0, 1, 0);
				}
				else
				{
					func_539(&(uParam0->f_730), 1, 1, 0);
				}
			}
			break;
		case 20:
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 224, 0);
				func_1530(&(uParam0->f_730));
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 184, 2, 0, 1))
			{
				func_539(&(uParam0->f_730), 21, 1, 0);
			}
			break;
		case 21:
			func_1529(&(uParam0->f_730), 224);
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 224, 0);
				func_1530(&(uParam0->f_730));
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 224, 4, 0, 1))
			{
				func_539(&(uParam0->f_730), 22, 1, 0);
			}
			break;
		case 22:
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 224, 0);
				func_1530(&(uParam0->f_730));
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if (!func_518(&(uParam0->f_1111), 2, 0, 80f, 1) && !__LIB_0__::func_270())
			{
				if (!func_520(&(uParam0->f_730), 208))
				{
					func_512(&(uParam0->f_730), 208, 3, 0, 1);
				}
			}
			break;
		case -1:
		case 23:
		case 24:
			break;
	}
}

void func_1100(var uParam0)
{
	switch (__LIB_4__::func_819(&(uParam0->f_730)))
	{
		case 0:
			func_1529(&(uParam0->f_730), 226);
			if (!func_542(&(uParam0->f_730), 226) && !__LIB_2__::func_901(uParam0->f_1111.f_40[6], Global_35))
			{
				func_512(&(uParam0->f_730), 226, 4, 2f, 1);
			}
			if (__LIB_2__::func_901(uParam0->f_1111.f_40[6], Global_35) && func_552(&(uParam0->f_565), 2, 6))
			{
				func_539(&(uParam0->f_730), 1, 1, 0);
			}
			break;
		case 1:
			func_1529(&(uParam0->f_730), 227);
			if (!func_542(&(uParam0->f_730), 227) && !__LIB_0__::func_48(Global_35, uParam0->f_1111.f_40[0], 5f, 1))
			{
				func_512(&(uParam0->f_730), 227, 4, 2f, 1);
			}
			if (__LIB_0__::func_48(Global_35, uParam0->f_1111.f_40[0], 5f, 1))
			{
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			break;
		case 2:
			if (!func_538(&(uParam0->f_730), 189))
			{
				func_512(&(uParam0->f_730), 189, 2, 0, 1);
			}
			break;
		case 20:
			func_1529(&(uParam0->f_730), 225);
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1530(&(uParam0->f_730));
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 184, 2, 0, 1))
			{
				func_539(&(uParam0->f_730), 21, 1, 0);
			}
			break;
		case 21:
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1530(&(uParam0->f_730));
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 225, 4, 0, 1))
			{
				func_539(&(uParam0->f_730), 22, 1, 0);
			}
			break;
		case 22:
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1530(&(uParam0->f_730));
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if (!__LIB_0__::func_266(Global_35, func_529(0), 100f, 1, 0) && !__LIB_0__::func_270())
			{
				if (!func_520(&(uParam0->f_730), 208))
				{
					func_512(&(uParam0->f_730), 208, 3, 0, 1);
				}
			}
			break;
		case 23:
			if (!func_535(&(uParam0->f_565)) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1111.f_40[6]))
			{
				func_997(&(uParam0->f_730), 193, 0);
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if ((func_523(&(uParam0->f_1111), 6) || func_524(&(uParam0->f_1111), 6)) || PED::_IS_PED_LASSOED(uParam0->f_1111.f_40[6]))
			{
				if (!func_538(&(uParam0->f_730), 192))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_1111.f_40[6]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_1111.f_40[6]))
					{
						if (func_610(&(uParam0->f_565.f_31[7 /*3*/]), 2f, 1, 1))
						{
							if (__LIB_16__::func_866(uParam0->f_1111.f_40[6], func_227(192), 1744022339, Global_35, 1, func_227(257), 1, 1))
							{
								func_997(&(uParam0->f_730), 192, 1);
							}
						}
					}
				}
				else if (!func_538(&(uParam0->f_730), 194))
				{
					if (PED::_IS_PED_LASSOED(uParam0->f_1111.f_40[6]))
					{
						func_997(&(uParam0->f_730), 194, 1);
					}
					else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_1111.f_40[6]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_1111.f_40[6]))
					{
						if (func_610(&(uParam0->f_565.f_31[7 /*3*/]), 2f, 1, 1))
						{
							if (__LIB_16__::func_866(uParam0->f_1111.f_40[6], func_227(194), 1744022339, Global_35, 1, func_227(257), 1, 1))
							{
								func_997(&(uParam0->f_730), 194, 1);
							}
						}
					}
				}
				else if (func_610(&(uParam0->f_565.f_31[7 /*3*/]), 2f, 1, 1))
				{
					func_539(&(uParam0->f_730), 24, 1, 0);
				}
			}
			else if (!func_538(&(uParam0->f_730), 193))
			{
				func_512(&(uParam0->f_730), 193, 2, 0, 1);
			}
			else if (func_532(&(uParam0->f_730), 193))
			{
				if (func_610(&(uParam0->f_565.f_31[7 /*3*/]), 1f, 1, 1))
				{
					func_539(&(uParam0->f_730), 24, 1, 0);
				}
			}
			break;
		case 24:
			if (!func_520(&(uParam0->f_730), 208))
			{
				func_512(&(uParam0->f_730), 208, 3, 0, 1);
			}
			break;
		case -1:
			break;
	}
}

void func_1101(var uParam0)
{
	switch (__LIB_4__::func_819(&(uParam0->f_730)))
	{
		case 0:
			func_1529(&(uParam0->f_730), 228);
			if (((__LIB_0__::func_48(Global_35, uParam0->f_1111.f_40[0], 5f, 1) && func_1506(&(uParam0->f_565))) && func_1209(&(uParam0->f_565))) || func_538(&(uParam0->f_730), 190))
			{
				if (!func_538(&(uParam0->f_730), 190))
				{
					func_512(&(uParam0->f_730), 190, 2, 0, 1);
				}
				else if (func_532(&(uParam0->f_730), 190))
				{
					func_539(&(uParam0->f_730), 1, 1, 0);
				}
			}
			if (!func_542(&(uParam0->f_730), 228))
			{
				func_512(&(uParam0->f_730), 228, 4, 2f, 1);
			}
			break;
		case 1:
			func_1529(&(uParam0->f_730), 229);
			if (!func_542(&(uParam0->f_730), 229))
			{
				if (!func_541(uParam0, 0, 3))
				{
					func_512(&(uParam0->f_730), 229, 4, 6f, 1);
				}
				else
				{
					UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
					func_1002(&(uParam0->f_730), 229, 1);
				}
			}
			if (func_619(uParam0, 3))
			{
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			break;
		case 2:
			func_1529(&(uParam0->f_730), 230);
			if (!func_541(uParam0, 2, 30))
			{
				func_512(&(uParam0->f_730), 191, 1, 15f, 0);
			}
			if (func_619(uParam0, 30))
			{
				__LIB_0__::func_37(&(uParam0->f_565.f_31[8 /*3*/]));
				func_539(&(uParam0->f_730), 3, 1, 0);
			}
			break;
		case 3:
			func_1529(&(uParam0->f_730), 231);
			if (!func_542(&(uParam0->f_730), 231))
			{
				if (func_619(uParam0, 24) && !func_558(&(uParam0->f_565)))
				{
					func_512(&(uParam0->f_730), 231, 4, 2f, 1);
				}
			}
			if (func_541(uParam0, 3, 17) && !func_609(Global_35, 1, 11))
			{
				if (func_610(&(uParam0->f_565.f_31[8 /*3*/]), 40f, 1, 1))
				{
					func_539(&(uParam0->f_730), 4, 1, 0);
				}
				else if ((func_521(&(uParam0->f_565), 200) || func_522(1120403456 /* Float: 100f */, 1106247680 /* Float: 30f */)) && !func_558(&(uParam0->f_565)))
				{
					__LIB_4__::func_87(&(uParam0->f_565.f_31[8 /*3*/]), 37f, 1);
				}
				else
				{
					func_512(&(uParam0->f_730), 195, 1, 10f, 0);
				}
			}
			if (func_609(Global_35, 1, 11) || func_558(&(uParam0->f_565)))
			{
				__LIB_0__::func_37(&(uParam0->f_565.f_31[8 /*3*/]));
				func_539(&(uParam0->f_730), 5, 1, 0);
			}
			break;
		case 4:
			if (!func_538(&(uParam0->f_730), 196))
			{
				func_512(&(uParam0->f_730), 196, 2, 0, 1);
			}
			else if (func_619(uParam0, 20))
			{
				func_539(&(uParam0->f_730), 5, 1, 0);
			}
			break;
		case 5:
			func_1529(&(uParam0->f_730), 232);
			if (func_552(&(uParam0->f_565), 3, 16))
			{
				if (func_512(&(uParam0->f_730), 197, 2, 0, 1))
				{
					__LIB_4__::func_87(&(uParam0->f_730.f_374), 10f, 1);
					func_539(&(uParam0->f_730), 6, 0, 0);
				}
			}
			break;
		case 6:
			if (!func_542(&(uParam0->f_730), 232))
			{
				if (func_532(&(uParam0->f_730), 197) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_565.f_91[11], true, 0))
				{
					func_512(&(uParam0->f_730), 232, 4, 2f, 1);
				}
			}
			if (((func_541(uParam0, 3, 22) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_565.f_91[9], true, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_565.f_91[10], true, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_565.f_91[11], true, 0))
			{
				if ((!PED::IS_PED_CLIMBING(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_VAULTING(Global_35))
				{
					if (__LIB_9__::func_178(&(uParam0->f_565.f_31[16 /*3*/])) > (20f - 1f) && __LIB_0__::func_266(Global_35, func_529(11), 2f, 1, 0))
					{
						PED::SET_PED_RESET_FLAG(Global_35, 168, true);
					}
					if (func_610(&(uParam0->f_565.f_31[16 /*3*/]), 20f, 1, 1))
					{
						func_539(&(uParam0->f_730), 7, 1, 0);
					}
					else
					{
						func_512(&(uParam0->f_730), 198, 1, 5f, 0);
					}
				}
			}
			else
			{
				__LIB_0__::func_37(&(uParam0->f_565.f_31[16 /*3*/]));
			}
			break;
		case 7:
			if (!func_538(&(uParam0->f_730), 199))
			{
				func_512(&(uParam0->f_730), 199, 2, 0, 1);
			}
			else
			{
				func_266(0, 256);
			}
			break;
		case 20:
			func_1529(&(uParam0->f_730), 225);
			if (func_610(&(uParam0->f_565.f_31[16 /*3*/]), 20f, 0, 0))
			{
				func_997(&(uParam0->f_730), 199, 1);
				func_539(&(uParam0->f_730), 7, 1, 0);
			}
			else if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1530(&(uParam0->f_730));
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 184, 2, 0, 1))
			{
				func_539(&(uParam0->f_730), 21, 1, 0);
			}
			break;
		case 21:
			if (func_610(&(uParam0->f_565.f_31[16 /*3*/]), 20f, 0, 0))
			{
				func_997(&(uParam0->f_730), 199, 1);
				func_539(&(uParam0->f_730), 7, 1, 0);
			}
			else if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1530(&(uParam0->f_730));
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 225, 4, 0, 1))
			{
				func_539(&(uParam0->f_730), 22, 1, 0);
			}
			break;
		case 22:
			if (func_610(&(uParam0->f_565.f_31[16 /*3*/]), 20f, 0, 0))
			{
				func_997(&(uParam0->f_730), 199, 1);
				func_539(&(uParam0->f_730), 7, 1, 0);
			}
			else if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1530(&(uParam0->f_730));
				func_539(&(uParam0->f_730), __LIB_4__::func_813(&(uParam0->f_730)), 1, 0);
			}
			else if (!__LIB_0__::func_266(Global_35, func_529(0), 100f, 1, 0) && !__LIB_0__::func_270())
			{
				if (!func_520(&(uParam0->f_730), 208))
				{
					func_512(&(uParam0->f_730), 208, 3, 0, 1);
				}
			}
			break;
		case -1:
		case 23:
		case 24:
			break;
	}
}

void func_1102(var uParam0)
{
	switch (__LIB_4__::func_819(&(uParam0->f_730)))
	{
		case 0:
			func_1529(&(uParam0->f_730), 233);
			if (func_512(&(uParam0->f_730), 200, 0, 3f, 1))
			{
				func_539(&(uParam0->f_730), 1, 1, 0);
			}
			break;
		case 1:
			if (!func_1032(&(uParam0->f_565)))
			{
				if (func_512(&(uParam0->f_730), 201, 0, 0, 1))
				{
					func_539(&(uParam0->f_730), 2, 1, 0);
				}
			}
			break;
		case 2:
			if (!func_542(&(uParam0->f_730), 233))
			{
				if (func_556(&(uParam0->f_565)))
				{
					func_512(&(uParam0->f_730), 233, 4, 0, 1);
				}
				else
				{
					func_512(&(uParam0->f_730), 233, 4, 2f, 1);
				}
			}
			break;
		case -1:
		case 3:
		case 4:
		case 5:
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
			break;
	}
}

void func_1103(var uParam0)
{
	bool bVar0;
	switch (__LIB_4__::func_819(&(uParam0->f_730)))
	{
		case 0:
			func_1529(&(uParam0->f_730), 234);
			if (func_610(&(uParam0->f_565.f_31[5 /*3*/]), 1f, 1, 0))
			{
				if (!func_538(&(uParam0->f_730), 202))
				{
					func_512(&(uParam0->f_730), 202, 2, 0, 1);
				}
				else if (!func_542(&(uParam0->f_730), 234))
				{
					if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						__LIB_0__::func_37(&(uParam0->f_565.f_31[4 /*3*/]));
						func_539(&(uParam0->f_730), 2, 1, 0);
					}
					else if (func_512(&(uParam0->f_730), 234, 4, 6f, 1))
					{
						func_539(&(uParam0->f_730), 1, 1, 0);
					}
				}
			}
			break;
		case 1:
			func_1529(&(uParam0->f_730), 234);
			if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				__LIB_0__::func_37(&(uParam0->f_565.f_31[4 /*3*/]));
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			else if (__LIB_11__::func_433())
			{
				func_512(&(uParam0->f_730), 203, 1, 20f, 0);
			}
			else if (__LIB_9__::func_178(&(uParam0->f_730.f_374)) < 20f)
			{
				__LIB_1__::func_585(&(uParam0->f_730.f_374), 20f);
			}
			break;
		case 2:
			if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_1002(&(uParam0->f_730), 234, 0);
				__LIB_0__::func_82(1, 0, 1);
				__LIB_0__::func_37(&(uParam0->f_565.f_31[5 /*3*/]));
				func_539(&(uParam0->f_730), 0, 1, 0);
				return;
			}
			bVar0 = (__LIB_0__::func_48(Global_35, uParam0->f_1111.f_40[0], 40f, 1) || __LIB_0__::func_48(Global_35, uParam0->f_1111.f_40[4], 40f, 1));
			if (bVar0 && !func_532(&(uParam0->f_730), 205))
			{
				if (!func_532(&(uParam0->f_730), 204))
				{
					func_512(&(uParam0->f_730), 204, 0, 3f, 1);
				}
				else
				{
					func_512(&(uParam0->f_730), 205, 0, 3f, 1);
				}
			}
			if (!func_542(&(uParam0->f_730), 235) && __LIB_0__::func_394(Global_35, uParam0->f_1111.f_40[3], 0))
			{
				if (bVar0 || __LIB_1__::func_322(func_227(204)))
				{
					__LIB_0__::func_37(&(uParam0->f_565.f_31[4 /*3*/]));
				}
				if (func_610(&(uParam0->f_565.f_31[4 /*3*/]), 10f, 1, 1) || func_532(&(uParam0->f_730), 204))
				{
					func_512(&(uParam0->f_730), 235, 4, 0, 1);
				}
			}
			if (__LIB_0__::func_394(Global_35, uParam0->f_1111.f_40[3], 0))
			{
				func_1529(&(uParam0->f_730), 235);
			}
			else
			{
				func_1529(&(uParam0->f_730), 221);
			}
			if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && __LIB_0__::func_266(Global_35, __LIB_17__::func_812(5, 6), 30f, 1, 1)) || func_552(&(uParam0->f_565), 5, 12))
			{
				if (__LIB_0__::func_48(Global_35, uParam0->f_1111.f_40[0], 40f, 1) && __LIB_0__::func_48(Global_35, uParam0->f_1111.f_40[4], 40f, 1))
				{
					func_512(&(uParam0->f_730), 206, 2, 0, 1);
				}
				func_539(&(uParam0->f_730), 3, 1, 0);
			}
			break;
		case 3:
			if (func_552(&(uParam0->f_565), 5, 17) && !func_538(&(uParam0->f_730), 207))
			{
				func_512(&(uParam0->f_730), 207, 0, 2f, 1);
			}
			break;
		case -1:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			break;
	}
}

void func_1104()
{
	__LIB_1__::func_952();
}

void func_1105()
{
	__LIB_2__::func_348();
}

struct<4> func_1106(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { __LIB_17__::func_812(1, 0) };
			Var0.f_3 = func_229(1, 0);
			break;
		case 1:
			Var0 = { __LIB_17__::func_812(2, 0) };
			Var0.f_3 = func_229(2, 0);
			break;
		case 2:
			Var0 = { __LIB_17__::func_812(2, 0) };
			Var0.f_3 = func_229(2, 0);
			break;
		case 3:
			Var0 = { __LIB_17__::func_812(4, 0) };
			Var0.f_3 = func_229(4, 0);
			break;
		case 4:
			Var0 = { __LIB_17__::func_812(5, 0) };
			Var0.f_3 = func_229(5, 0);
			break;
		case 5:
			Var0 = { __LIB_17__::func_812(5, 6) };
			Var0.f_3 = func_229(5, 6);
			break;
	}
	return Var0;
}

void func_1108(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1320(uParam0, iParam1, iParam2))
		{
			__LIB_0__::func_7(uParam0[iParam1], iParam2);
		}
	}
	else if (func_1320(uParam0, iParam1, iParam2))
	{
		__LIB_0__::func_8(uParam0[iParam1], iParam2);
	}
}

void func_1111(var uParam0)
{
	struct<283> Var0;
	Var0 = 1;
	Var0.f_13 = 20;
	Var0.f_254 = 1097859072;
	Var0.f_255 = 1101004800;
	Var0.f_282 = 4;
	MISC::_COPY_MEMORY(uParam0, &Var0, 350);
}

void func_1113(var uParam0)
{
	struct<4> Var0;
	vector3 vVar4;
	vector3 vVar7;
	Var0 = { __LIB_3__::func_56(uParam0) };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(181)))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PHYSICS::_0xBDDA142759307528(PED::GET_MOUNT(Global_35));
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		if (PED::IS_PED_ON_MOUNT(Local_18.f_1111.f_40[0]))
		{
			PHYSICS::_0xBDDA142759307528(PED::GET_MOUNT(Local_18.f_1111.f_40[0]));
			PED::_REMOVE_PED_FROM_MOUNT(Local_18.f_1111.f_40[0], true, false);
		}
		if (PED::IS_PED_ON_MOUNT(Local_18.f_1111.f_40[4]))
		{
			PHYSICS::_0xBDDA142759307528(PED::GET_MOUNT(Local_18.f_1111.f_40[4]));
			PED::_REMOVE_PED_FROM_MOUNT(Local_18.f_1111.f_40[4], true, false);
		}
		func_1541();
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(182)))
	{
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(183)))
	{
		func_1542(__LIB_17__::func_812(5, 6), 1120403456 /* Float: 100f */);
		vVar4 = { __LIB_17__::func_812(7, 12) };
		vVar7 = { 0f, 0f, func_229(7, 12) };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_18.f_121.f_264, vVar4, vVar7, 2);
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_18.f_1111.f_40[0], __LIB_0__::func_110(), false);
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_18.f_1111.f_40[4], __LIB_0__::func_110(), false);
		PED::_0xA8A95CECB1906EA2(__LIB_0__::func_110(), 0);
		func_1144(&(Local_18.f_1111), 2);
		func_1145(&(Local_18.f_1111), 0);
		func_1145(&(Local_18.f_1111), 4);
		__LIB_2__::func_761(vVar4, 50f, 0, 0);
		__LIB_0__::func_568(vVar4, 50f, 0);
		__LIB_3__::func_688(vVar4, 50f, 0);
		func_265(&(Local_18.f_1111), 0, 2, 0);
		func_265(&(Local_18.f_1111), 4, 2, 0);
	}
}

void func_1115(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	Var0 = { __LIB_3__::func_56(uParam0) };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(181)))
	{
		iVar4 = 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(182)))
	{
		iVar4 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(183)))
	{
		iVar4 = 2;
	}
	switch (iVar4)
	{
		case 0:
			if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				if (__LIB_3__::func_46(uParam0) > 5100)
				{
					func_265(&(Local_18.f_1111), 2, 2, 1);
				}
			}
			if (__LIB_3__::func_46(uParam0) >= 19800)
			{
				func_1547(&(Local_18.f_1111), 1);
			}
			if (__LIB_3__::func_46(uParam0) >= 2170)
			{
				func_265(&(Local_18.f_1111), 1, 1, 0);
				func_265(&(Local_18.f_1111), 1, 0, 1);
			}
			func_583(Global_35, 1);
			func_642(Global_35, 1, 0);
			if (func_1548(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_CROUCH_WALK"), 2000, 0, 1, 1, 0, 0, 0);
			}
			break;
		case 1:
			if (!__LIB_0__::func_272(Local_18.f_1111.f_40[1], 0) || !__LIB_0__::func_272(Local_18.f_1111.f_40[5], 0))
			{
				return;
			}
			func_1547(&(Local_18.f_1111), 0);
			if (STREAMING::_IS_IMAP_ACTIVE(-661825463))
			{
				STREAMING::_REMOVE_IMAP(-661825463);
			}
			if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				if (__LIB_3__::func_46(uParam0) >= 10150)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_487[44]))
					{
						__LIB_17__::func_820(uParam0, Local_18.f_487[44], 0);
						__LIB_3__::func_48(uParam0, Local_18.f_487[44]);
						__LIB_3__::func_29(&(Local_18.f_487[44]), 1);
					}
					func_265(&(Local_18.f_1111), 2, 2, 1);
				}
				else if ((func_754(&(Local_18.f_1111), 2, 2) && !ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_264, func_742(2))) && !ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_264, func_742(2)))
				{
					func_265(&(Local_18.f_1111), 2, 2, 0);
				}
			}
			if (__LIB_0__::func_272(Local_18.f_1111.f_40[0], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[0]))
			{
				if (__LIB_3__::func_46(uParam0) >= 9700)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_487[45]))
					{
						__LIB_17__::func_820(uParam0, Local_18.f_487[45], 0);
						__LIB_3__::func_48(uParam0, Local_18.f_487[45]);
						__LIB_3__::func_29(&(Local_18.f_487[45]), 1);
					}
					func_265(&(Local_18.f_1111), 0, 2, 1);
				}
				else if ((func_754(&(Local_18.f_1111), 0, 2) && !ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_264, func_742(0))) && !ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_264, func_742(0)))
				{
					func_265(&(Local_18.f_1111), 0, 2, 0);
				}
			}
			if (func_1548(uParam0, Global_35, 0, 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_RUN"), false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.8f, 2000, 0f, true, false);
				PED::_0x2208438012482A1A(Global_35, false, false);
			}
			if (func_1548(uParam0, Local_18.f_1111.f_40[4], 0, 0, 1, 1))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_18.f_1111.f_40[4], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1111.f_40[4], 0f, 15f, 0f), 1.6f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 1);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_18.f_1111.f_40[4], 1.6f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_18.f_1111.f_40[4], 1.6f);
				__LIB_1__::func_585(&(Local_18.f_565.f_31[14 /*3*/]), 0f);
			}
			break;
		case 2:
			iVar5 = 0;
			while (iVar5 <= 7)
			{
				if (func_1551(uParam0, Local_18.f_487[iVar5], func_740(iVar5), func_1075(iVar5), 0, 1))
				{
					__LIB_3__::func_29(&(Local_18.f_487[iVar5]), 1);
				}
				iVar5++;
			}
			iVar5 = 44;
			while (iVar5 <= 45)
			{
				if (func_1551(uParam0, Local_18.f_487[iVar5], func_740(iVar5), func_1075(iVar5), 0, 1))
				{
					__LIB_3__::func_29(&(Local_18.f_487[iVar5]), 1);
				}
				iVar5++;
			}
			if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				func_265(&(Local_18.f_1111), 2, 2, 0);
			}
			if (__LIB_0__::func_272(Local_18.f_1111.f_40[3], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[3]))
			{
				func_265(&(Local_18.f_1111), 3, 2, 0);
			}
			if (__LIB_0__::func_272(Local_18.f_1111.f_40[0], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[0]))
			{
				if (func_1548(uParam0, Local_18.f_1111.f_40[0], func_742(0), 0, 1, 1))
				{
					func_265(&(Local_18.f_1111), 0, 2, 1);
				}
			}
			break;
	}
}

int func_1117(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	Var0 = { __LIB_3__::func_56(uParam0) };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(181)))
	{
		iVar4 = 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(182)))
	{
		iVar4 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(183)))
	{
		iVar4 = 2;
	}
	switch (iVar4)
	{
		case 0:
			if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				func_265(&(Local_18.f_1111), 2, 2, 1);
			}
			func_1547(&(Local_18.f_1111), 1);
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
			func_583(Global_35, 1);
			func_642(Global_35, 1, 0);
			__LIB_0__::func_569(joaat("MOTIONSTATE_CROUCH_WALK"), 2000, 0, 1, 1, 0, 0, 0);
			break;
		case 1:
			func_1547(&(Local_18.f_1111), 0);
			if (STREAMING::_IS_IMAP_ACTIVE(-661825463))
			{
				STREAMING::_REMOVE_IMAP(-661825463);
			}
			if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				func_265(&(Local_18.f_1111), 2, 2, 1);
			}
			if (__LIB_0__::func_272(Local_18.f_1111.f_40[0], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[0]))
			{
				func_265(&(Local_18.f_1111), 0, 2, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_487[44]))
			{
				__LIB_17__::func_820(uParam0, Local_18.f_487[44], 0);
				__LIB_3__::func_48(uParam0, Local_18.f_487[44]);
				__LIB_3__::func_29(&(Local_18.f_487[44]), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_487[45]))
			{
				__LIB_17__::func_820(uParam0, Local_18.f_487[45], 0);
				__LIB_3__::func_48(uParam0, Local_18.f_487[45]);
				__LIB_3__::func_29(&(Local_18.f_487[45]), 1);
			}
			func_640(Global_35, __LIB_19__::func_94(5, 0), 2);
			func_640(Local_18.f_1111.f_40[0], __LIB_19__::func_94(5, 1), 2);
			func_640(Local_18.f_1111.f_40[4], __LIB_19__::func_94(5, 2), 2);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_RUN"), false, 0, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.8f, 2000, 0f, true, false);
			PED::_0x2208438012482A1A(Global_35, false, false);
			if (__LIB_0__::func_272(Global_35, 0))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_18.f_1111.f_40[4], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1111.f_40[4], 0f, 15f, 0f), 1.6f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 1);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_18.f_1111.f_40[4], 1.6f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_18.f_1111.f_40[4], 1.6f);
				__LIB_1__::func_585(&(Local_18.f_565.f_31[14 /*3*/]), 0f);
			}
			break;
		case 2:
			iVar5 = 0;
			while (iVar5 <= 7)
			{
				__LIB_3__::func_29(&(Local_18.f_487[iVar5]), 1);
				iVar5++;
			}
			iVar5 = 44;
			while (iVar5 <= 45)
			{
				__LIB_3__::func_29(&(Local_18.f_487[iVar5]), 1);
				iVar5++;
			}
			if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				func_265(&(Local_18.f_1111), 2, 2, 0);
			}
			if (__LIB_0__::func_272(Local_18.f_1111.f_40[3], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[3]))
			{
				func_265(&(Local_18.f_1111), 3, 2, 0);
			}
			if (__LIB_0__::func_272(Local_18.f_1111.f_40[0], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[0]))
			{
				func_265(&(Local_18.f_1111), 0, 2, 1);
			}
			func_640(Global_35, __LIB_19__::func_94(5, 6), 38);
			func_640(Local_18.f_1111.f_40[0], __LIB_19__::func_94(5, 7), 38);
			func_640(Local_18.f_1111.f_40[4], __LIB_19__::func_94(5, 8), 38);
			break;
	}
	return 1;
}

Vector3 func_1138(int iParam0, char* sParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0f, 0f, 0f;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, vVar1, &iVar0))
	{
		return 0f, 0f, 0f;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, iVar0, &vVar4))
	{
		return 0f, 0f, 0f;
	}
	return vVar4;
}

void func_1139(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		*uParam0 = uParam0->f_1;
		uParam0->f_1 = iParam1;
	}
}

void func_1140(var uParam0, int iParam1, int iParam2)
{
	func_646(uParam0->f_40[iParam1], 279, 1);
	func_646(uParam0->f_40[iParam1], 280, 0);
	func_646(uParam0->f_40[iParam1], 375, 1);
	func_646(uParam0->f_40[iParam1], 390, 1);
	func_646(uParam0->f_40[iParam1], 391, 1);
	func_1225(uParam0->f_40[iParam1], iParam2, 1);
}

void func_1141(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = func_1142(uParam0->f_40[0], func_630(uParam1));
	if (iVar0 >= 437 && iVar0 <= 460)
	{
		PED::_0x9BBEAF8B0C007F1E(uParam0->f_40[0], 0);
		PED::_0xD5BD1B5318A81994(uParam1->f_51, 1);
	}
	else
	{
		func_665(uParam1->f_51, 10);
		PED::_0xD5BD1B5318A81994(uParam1->f_51, 0);
		PED::_0x9BBEAF8B0C007F1E(uParam0->f_40[0], 1);
	}
}

int func_1142(int iParam0, char* sParam1)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return 0;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, sParam1))
	{
		return TASK::GET_PED_WAYPOINT_PROGRESS(iParam0);
	}
	return 0;
}

void func_1144(var uParam0, int iParam1)
{
	func_646(uParam0->f_40[iParam1], 280, 1);
	if (iParam1 != 2)
	{
		PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), uParam0->f_40[iParam1]);
		PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	}
	func_1563(uParam0->f_40[iParam1]);
}

void func_1145(var uParam0, int iParam1)
{
	func_1563(uParam0->f_40[iParam1]);
}

bool func_1146(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	return (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, vLocal_0, false, bParam5, 0) && __LIB_2__::func_955(iParam0, fParam4, 5f));
}

bool func_1147(var uParam0, int iParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_487[iParam1]))
	{
		uParam0->f_487[iParam1] = OBJECT::CREATE_OBJECT(func_1075(iParam1), vParam2, true, true, false, false, true);
	}
	else if (!__LIB_3__::func_47(&(uParam0->f_121), uParam0->f_487[iParam1]))
	{
		__LIB_17__::func_823(&(uParam0->f_121), uParam0->f_487[iParam1], func_740(iParam1), 0, 0, 0);
	}
	return __LIB_3__::func_47(&(uParam0->f_121), uParam0->f_487[iParam1]);
}

bool func_1148(var uParam0, var uParam1, int iParam2)
{
	if (!__LIB_3__::func_47(&(uParam0->f_121), uParam1->f_40[iParam2]))
	{
		__LIB_17__::func_823(&(uParam0->f_121), uParam1->f_40[iParam2], func_742(iParam2), 0, 0, 0);
	}
	return __LIB_3__::func_47(&(uParam0->f_121), uParam1->f_40[iParam2]);
}

bool func_1151(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_40[6]))
	{
		Var0 = { __LIB_19__::func_94(9, 0) };
		uParam0->f_40[6] = __LIB_1__::func_545(func_736(18), Var0, Var0.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		iVar4 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uParam0->f_40[6]);
		MAP::_BLIP_SET_MODIFIER(iVar4, -662251075);
		MAP::_BLIP_SET_MODIFIER(iVar4, 231194138);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar4, func_227(242));
		return false;
	}
	return true;
}

void func_1180(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_264, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_264)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_321, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_3__::func_74(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_264, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_264))
	{
		if (!__LIB_0__::func_1(uParam0->f_321, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_321, 512))
	{
		bVar2 = true;
	}
	if (__LIB_5__::func_579(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_264);
		__LIB_3__::func_120();
	}
}

void func_1181(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_320, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_17__::func_819(uParam0) };
		__LIB_17__::func_824(uParam0, &Var0);
	}
	__LIB_19__::func_433(uParam0, sParam1);
	if (__LIB_0__::func_84(uParam0, 131072))
	{
		__LIB_0__::func_99(uParam0, 0);
	}
	if (__LIB_0__::func_100())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		__LIB_0__::func_101();
	}
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(1);
	}
	__LIB_1__::func_414(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	__LIB_3__::func_78(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_3__::func_22(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_3__::func_72(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_256);
	}
	__LIB_19__::func_95(uParam0);
	__LIB_17__::func_821(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_264);
	Global_43800 = uParam0->f_264;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_1187(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_320, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_3__::func_79(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_320, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_332));
		}
		func_1591(&(uParam0->f_320), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_3__::func_80(uParam0, 0f, 0f, 0f);
		func_1593(uParam0);
		func_1594(uParam0);
		__LIB_17__::func_825(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_17__::func_826(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_333)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_333));
		}
	}
}

bool func_1188(var uParam0, bool bParam1)
{
	if (__LIB_0__::func_84(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_264, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_264, "ExportCamera") && bParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_264))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

void func_1194(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_321), uParam0->f_332);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_17__::func_827(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_17__::func_817(uParam0);
	__LIB_3__::func_81(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_3__::func_82(uParam0, 4);
	__LIB_17__::func_818(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_3__::func_22(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_264))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_264);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_321, 128));
	if (!__LIB_0__::func_1(uParam0->f_321, 128))
	{
		__LIB_3__::func_120();
	}
}

bool func_1197(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	func_683(iParam0, vParam1, fParam4, iParam5, 1073741824 /* Float: 2f */);
	return (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, vLocal_0, false, false, 0) && __LIB_2__::func_955(iParam0, fParam4, 5f));
}

void func_1198(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<4> Var4;
	vector3 vVar8;
	int iVar12;
	vector3 vVar13;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_40[iParam1]))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_40[iParam1]) || PED::IS_PED_INJURED(uParam0->f_40[iParam1]))
	{
		return;
	}
	PED::SET_PED_RESET_FLAG(uParam0->f_40[iParam1], 48, true);
	switch (iParam1)
	{
		case 6:
			sVar0 = func_227(252);
			break;
		case 11:
			break;
		case 12:
			sVar0 = func_227(245);
			break;
		case 13:
			sVar0 = func_227(246);
			break;
		case 14:
			sVar0 = func_227(247);
			break;
		case 15:
			sVar0 = func_227(248);
			break;
		case 16:
			sVar0 = func_227(249);
			break;
		case 17:
			break;
		case 18:
			sVar0 = func_227(251);
			break;
		default:
			return;
	}
	if (func_1609(iParam1))
	{
		iVar1 = iParam1 + 1;
		if (TASK::_0x643FD1556F621772(uParam0->f_40[iVar1], &uVar2, &iVar3))
		{
			Var4 = { func_1610(iParam1, iVar3) };
			vVar8 = { func_1610(iVar1, iVar3) };
			if (__LIB_0__::func_266(uParam0->f_40[iVar1], vVar8, 1f, 1, 1))
			{
				if (!__LIB_0__::func_163(uParam0->f_40[iParam1], -1098463898))
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_40[iParam1], func_1611(iParam1, iVar3), Var4, Var4.f_3, -1, true, false, 0, -1f, false);
					PED::_0x2208438012482A1A(uParam0->f_40[iParam1], false, false);
				}
			}
			else if (!__LIB_0__::func_163(uParam0->f_40[iParam1], 1056466932))
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uParam0->f_40[iParam1], uParam0->f_40[iVar1], 0f, -1.5f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
				PED::_0x2208438012482A1A(uParam0->f_40[iParam1], false, false);
			}
		}
	}
	else if (!__LIB_0__::func_163(uParam0->f_40[iParam1], 242628503))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar12);
		if (bParam2)
		{
			vVar13 = { func_1612(iParam1, 1) };
			TASK::_TASK_PATROL_2(0, sVar0, 0, vVar13, 0, 1);
		}
		else
		{
			TASK::TASK_PATROL(0, sVar0, 0, false, true);
		}
		TASK::SET_SEQUENCE_TO_REPEAT(iVar12, true);
		func_230(uParam0, iParam1, &iVar12, 0, 0, 1, 1, 1);
	}
}

void func_1199(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = uParam0->f_1111.f_40[6];
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
	{
		if (uParam0->f_565.f_20 != 0)
		{
			uParam0->f_565.f_20 = 0;
		}
		return;
	}
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.5f);
	PED::_0x789DABD18E9024DB(iVar0, 4096, 1);
	PED::SET_PED_RESET_FLAG(iVar0, 48, true);
	PED::SET_PED_RESET_FLAG(iVar0, 54, true);
	PED::SET_PED_RESET_FLAG(iVar0, 83, true);
	PED::SET_PED_RESET_FLAG(iVar0, 290, true);
	PED::SET_PED_RESET_FLAG(iVar0, 310, false);
	PED::SET_PED_RESET_FLAG(iVar0, 318, true);
	PED::SET_PED_RESET_FLAG(iVar0, 324, false);
	if (__LIB_0__::func_48(Global_35, iVar0, 10f, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 53, true);
		PED::SET_PED_RESET_FLAG(Global_35, 83, true);
		PED::SET_PED_RESET_FLAG(Global_35, 290, true);
		PED::SET_PED_RESET_FLAG(Global_35, 318, true);
	}
	if (func_526(&(uParam0->f_1111)))
	{
		return;
	}
	else if (func_525(&(uParam0->f_1111), 6))
	{
		func_1613(uParam0);
		return;
	}
	else if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 1, 0) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == iVar0)
	{
		func_528(&(uParam0->f_1111), 6, 1);
		func_1614(&(uParam0->f_1111), 6, 1);
		func_519(&(uParam0->f_565), 1);
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
		return;
	}
	else if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 20496, 0) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == iVar0)
	{
		func_528(&(uParam0->f_1111), 6, 1);
		func_1615(&(uParam0->f_1111), 6, 1);
		func_519(&(uParam0->f_565), 1);
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
		return;
	}
	else if (func_1616(&(uParam0->f_565), 1000))
	{
		return;
	}
	if (!__LIB_0__::func_86(uParam0->f_692.f_35))
	{
		uParam0->f_692.f_35 = { __LIB_1__::func_977() };
	}
	__LIB_9__::func_157(iVar0, &(uParam0->f_692.f_1), &iVar1, 0);
	if (iVar1 != 0)
	{
	}
	switch (iVar1)
	{
		case 131072:
		case 262144:
			bVar2 = true;
			break;
	}
	func_1619(iVar0, 0, &(uParam0->f_692.f_1), &iVar1, 0, 0);
	if (iVar1 != 0)
	{
	}
	switch (iVar1)
	{
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 64:
		case 128:
		case 256:
		case 1024:
		case 2048:
		case 8192:
		case 65536:
			bVar2 = true;
			break;
		case 0:
			if (!__LIB_0__::func_163(iVar0, 1435919172))
			{
				if (func_610(&(uParam0->f_565.f_31[9 /*3*/]), 10f, 1, 1))
				{
					func_1198(&(uParam0->f_1111), 6, 0);
				}
			}
			break;
	}
	if (bVar2 || PED::_IS_PED_LASSOED(iVar0))
	{
		func_528(&(uParam0->f_1111), 6, 1);
		func_519(&(uParam0->f_565), 1);
	}
}

Vector3 func_1200(struct<4> Param0)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, Param0.f_3, 0f, 10f, 1f);
}

bool func_1201(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 16);
}

void func_1202(var uParam0, int iParam1)
{
	if (uParam0->f_120 != iParam1)
	{
		uParam0->f_120 = iParam1;
	}
}

void func_1205(var uParam0, bool bParam1)
{
	func_1003(uParam0, 16384, bParam1);
}

void func_1206(var uParam0, int iParam1, int iParam2)
{
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_552[iParam1], func_1061(iParam2), uParam0->f_543[iParam2]);
}

void func_1207(var uParam0, var uParam1)
{
	float fVar0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPT_PAD_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPT_RUP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPT_RDOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_JOURNAL"), false);
		__LIB_0__::func_573();
		__LIB_1__::func_538(0);
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 9, 1);
		fVar0 = __LIB_2__::func_916(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_487[33], true, false));
		PLAYER::_0xF993373285053D77(__LIB_3__::func_745((fVar0 - 5f)), __LIB_3__::func_745((fVar0 + 5f)), 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Global_35, false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Global_35, false);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		PED::SET_PED_RESET_FLAG(Global_35, 2, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 108, true);
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam1->f_3))
	{
		if (uParam1->f_1 > 7)
		{
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 0, 1288.65f, -1316.26f, 77.1715f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 1, 1288.69f, -1316.3f, 77.0079f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 2, 1288.69f, -1316.31f, 76.8357f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 3, 1288.69f, -1316.31f, 76.6644f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 4, 1288.68f, -1316.31f, 76.4938f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 5, 1288.68f, -1316.32f, 76.3239f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 6, 1288.68f, -1316.32f, 76.155f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 7, 1288.68f, -1316.33f, 75.987f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 8, 1288.67f, -1316.34f, 75.8197f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 9, 1288.66f, -1316.35f, 75.6537f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 10, 1288.79f, -1316.35f, 75.5495f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 11, 1288.77f, -1316.52f, 75.5494f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 12, 1288.83f, -1316.67f, 75.55f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 13, 1288.81f, -1316.84f, 75.559f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 14, 1288.74f, -1316.69f, 75.5571f);
		}
		PHYSICS::_0x1D97DA8ACB5D2582(uParam1->f_3, 3);
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1701958269))
		{
			func_1211(uParam1->f_3, Global_35, 0f, 0f, 0f, "SKEL_R_Finger12", 1, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("RELEASED")))
		{
			func_1210(uParam1->f_3, Global_35);
		}
		else
		{
			func_1210(uParam1->f_3, Global_35);
		}
		if (uParam1->f_4 <= 0.001f)
		{
			PHYSICS::_0x10DAA76CB8A201A1(uParam1->f_3);
		}
		else
		{
			PHYSICS::_0x00F611A794A3C36E(uParam1->f_3);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_487[37]))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_487[37], func_227(4), func_227(47), 1))
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > uParam1->f_4)
			{
				uParam1->f_4 = (uParam1->f_4 + 0.05f);
			}
			else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) < uParam1->f_4)
			{
				uParam1->f_4 = (uParam1->f_4 - 0.05f);
			}
			__LIB_0__::func_251(uParam1->f_4, 0f, 1f);
			if (uParam1->f_4 < 0f)
			{
				uParam1->f_4 = 0f;
			}
			ENTITY::_SET_ENTITY_ANIM_SPEED(uParam0->f_487[37], func_227(4), func_227(47), uParam1->f_4);
		}
	}
}

bool func_1209(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 8388608);
}

void func_1210(int iParam0, int iParam1)
{
	if (!PHYSICS::DOES_ROPE_EXIST(iParam0))
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	else if (PHYSICS::_0x9B4F7E3E4F9C77B3(iParam0, iParam1))
	{
		PHYSICS::DETACH_ROPE_FROM_ENTITY(iParam0, iParam1);
	}
}

void func_1211(int iParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, int iParam7)
{
	if (!PHYSICS::DOES_ROPE_EXIST(iParam0))
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	else if (!PHYSICS::_0x9B4F7E3E4F9C77B3(iParam0, iParam1))
	{
		PHYSICS::_0xC64E7A62632AD2FE(iParam0, iParam1, vParam2, sParam5, iParam6, iParam7);
	}
}

bool func_1212(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_552[iParam1], func_1061(iParam2));
}

bool func_1215(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_552[iParam1], func_1072(iParam2));
}

void func_1225(int iParam0, int iParam1, bool bParam2)
{
	if (PED::IS_PED_A_PLAYER(iParam0) || PED::GET_PED_GROUP_INDEX(iParam0) == iParam1)
	{
		return;
	}
	else if (!PED::DOES_GROUP_EXIST(iParam1))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iParam0) != iParam1)
	{
		PED::REMOVE_PED_FROM_GROUP(iParam0);
	}
	if (bParam2)
	{
		if (!PED::_0x878B68960C1C2A35(iParam0, iParam1))
		{
			PED::SET_PED_AS_GROUP_LEADER(iParam0, iParam1, true);
		}
	}
	else if (!PED::IS_PED_GROUP_MEMBER(iParam0, iParam1, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, iParam1);
	}
}

int func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 7;
		case 12:
			return 8;
		case 13:
			return 9;
		case 14:
			return 10;
		case 15:
		case 16:
		case 17:
		case 18:
			return -1;
		default:
			break;
	}
	return -1;
}

int func_1231(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (__LIB_0__::func_252(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (__LIB_0__::func_273(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (__LIB_1__::func_25(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					Jump @3088; //curOff = 2987
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					Jump @3088; //curOff = 3023
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					Jump @3088; //curOff = 3059
					iVar1[0] = -268604689;
					Jump @3088; //curOff = 3072
					iVar1[0] = -922193456;
					Jump @3416; //curOff = 3088
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar7 = 2;
							break;
						case 14:
							iVar1[0] = -426171916;
							iVar1[1] = 1484386316;
							iVar1[2] = 1254970547;
							iVar7 = 3;
							break;
						case 4:
							if (__LIB_1__::func_198(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
							{
								iVar1[0] = -1155031950;
							}
							else
							{
								iVar1[0] = -1341683964;
							}
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					Jump @3416; //curOff = 3251
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar1[2] = 1484386316;
							iVar7 = 3;
							break;
						case 14:
							iVar1[0] = -1092189504;
							iVar1[1] = 80515440;
							iVar7 = 2;
							break;
						case 4:
							iVar1[0] = -1341683964;
							iVar1[1] = 867156718;
							iVar7 = 2;
							break;
						case 7:
							iVar1[0] = -1341683964;
							iVar1[1] = 1484386316;
							iVar7 = 2;
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					if (bParam3 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam0)))
					{
						iVar10 = 0;
						while (iVar10 < iVar7)
						{
							if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
							{
								bVar9 = true;
								iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
							}
							iVar10++;
						}
					}
					if (!bVar9)
					{
						iVar11 = 0;
						if (iVar7 > 0 && bParam2)
						{
							iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
						}
						iVar8 = iVar1[iVar11];
					}
					if (!__LIB_1__::func_201(iParam0, iVar8))
					{
						iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
					}
					return iVar8;
				}
bool func_1232(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1252()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (STREAMING::DOES_ANIM_DICT_EXIST(func_227(iVar1)))
		{
			STREAMING::REQUEST_ANIM_DICT(func_227(iVar1));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_227(iVar1)))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (STREAMING::IS_MODEL_VALID(func_736(iVar2)))
		{
			STREAMING::REQUEST_MODEL(func_736(iVar2), false);
			if (!STREAMING::HAS_MODEL_LOADED(func_736(iVar2)))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
		iVar2++;
	}
	iVar3 = 264;
	while (iVar3 <= 269)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_227(iVar3));
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_227(iVar3)))
		{
			iVar0 = 0;
		}
		iVar3++;
	}
	PED::_0xF7EA250B9A919E03(joaat("SPOOL"), Global_35);
	if (!PED::_0x854BC9B1A1CCD034(joaat("SPOOL"), Global_35))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_1253(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (((iVar1 == 16 || iVar1 == 17) || iVar1 == 18) || iVar1 == 19)
		{
			Jump @80; //curOff = 59
		}
		else if (!func_573(uParam0, iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1254(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = iParam3;
	return __LIB_1__::func_854(&uVar0, &Var1);
}

int func_1255(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1639(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_1298(var uParam0)
{
	if (!func_1673(&(Local_18.f_565)))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(758684739) || STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			__LIB_1__::func_408(-2020023971, 1, 0);
			__LIB_10__::func_800();
			return 0;
		}
		if (__LIB_0__::func_272(Local_18.f_1111.f_40[1], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[1]))
		{
			func_265(&(Local_18.f_1111), 1, 1, 1);
			func_265(&(Local_18.f_1111), 1, 0, 0);
		}
		Local_18.f_565.f_2 = 1;
		Local_18.f_565.f_112 = 0;
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_18.f_687.f_2))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_18.f_687.f_2, 11);
		}
		if (((((((((func_1674(&(Local_18.f_565)) && func_640(Global_35, __LIB_19__::func_94(0, 5), 2)) && func_640(Local_18.f_1111.f_40[0], __LIB_19__::func_94(6, 0), 2)) && func_640(Local_18.f_1111.f_40[4], __LIB_19__::func_94(6, 1), 2)) && func_640(Local_18.f_1111.f_40[3], __LIB_19__::func_94(0, 5), 2)) && func_640(Local_18.f_1111.f_40[1], __LIB_19__::func_94(6, 0), 2)) && func_640(Local_18.f_1111.f_40[5], __LIB_19__::func_94(6, 1), 2)) && func_1675(Global_35, Local_18.f_1111.f_40[3], 0, -1, 1)) && func_1675(Local_18.f_1111.f_40[0], Local_18.f_1111.f_40[1], 0, -1, 1)) && func_1675(Local_18.f_1111.f_40[4], Local_18.f_1111.f_40[5], 0, -1, 1))
		{
			if (func_1676(__LIB_17__::func_812(1, 0), 1120403456 /* Float: 100f */))
			{
				func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
				func_1677(&(Local_18.f_565), 1);
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 1);
		return 1;
	}
	return 0;
}

bool func_1299(var uParam0)
{
	if (!func_1673(&(Local_18.f_565)))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(758684739) || STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			__LIB_1__::func_408(-2020023971, 1, 0);
			__LIB_10__::func_800();
			return false;
		}
		Local_18.f_565.f_2 = 2;
		Local_18.f_565.f_112 = 0;
		if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			func_265(&(Local_18.f_1111), 2, 2, 1);
		}
		if (__LIB_0__::func_272(Local_18.f_1111.f_40[1], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[1]))
		{
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
		}
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_18.f_687.f_2))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_18.f_687.f_2, 11);
		}
		func_642(Global_35, 1, 1);
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[3], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[3], -1);
		}
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[1], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[1], -1);
		}
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[5], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[5], -1);
		}
		func_1541();
		if ((((((((((func_1674(&(Local_18.f_565)) && func_640(Global_35, __LIB_19__::func_94(3, 0), 2)) && func_640(Local_18.f_1111.f_40[0], __LIB_19__::func_94(3, 2), 2)) && func_640(Local_18.f_1111.f_40[4], __LIB_19__::func_94(3, 4), 2)) && func_640(Local_18.f_1111.f_40[3], __LIB_19__::func_94(3, 1), 2)) && func_640(Local_18.f_1111.f_40[1], __LIB_19__::func_94(3, 3), 2)) && func_640(Local_18.f_1111.f_40[5], __LIB_19__::func_94(3, 5), 2)) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35)) && __LIB_0__::func_163(Local_18.f_1111.f_40[3], -982327190)) && __LIB_0__::func_163(Local_18.f_1111.f_40[1], -982327190)) && __LIB_0__::func_163(Local_18.f_1111.f_40[5], -982327190))
		{
			if (func_1151(&(Local_18.f_1111)))
			{
				if (func_1547(&(Local_18.f_1111), 1))
				{
					if (func_637(&Local_18))
					{
						if (func_1676(__LIB_17__::func_812(3, 0), 1120403456 /* Float: 100f */))
						{
							func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
							func_1677(&(Local_18.f_565), 1);
						}
					}
				}
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 3);
		func_1678(&(Local_18.f_565), 1);
		func_217(&Local_18);
		return Local_18 >= 3;
	}
	return false;
}

bool func_1300(var uParam0)
{
	if (!func_1673(&(Local_18.f_565)))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(758684739) || STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			__LIB_1__::func_408(-2020023971, 1, 0);
			__LIB_10__::func_800();
			return false;
		}
		Local_18.f_565.f_2 = 3;
		Local_18.f_565.f_112 = 0;
		if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			func_265(&(Local_18.f_1111), 2, 2, 1);
		}
		if (__LIB_0__::func_272(Local_18.f_1111.f_40[1], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[1]))
		{
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
		}
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_18.f_687.f_2))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_18.f_687.f_2, 11);
		}
		func_642(Global_35, 1, 1);
		func_645(&(Local_18.f_565), 1);
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[3], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[3], -1);
		}
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[1], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[1], -1);
		}
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[5], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[5], -1);
		}
		if (func_1151(&(Local_18.f_1111)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1111.f_40[6]))
			{
				if (func_1197(Local_18.f_1111.f_40[6], __LIB_17__::func_812(9, 2), 0f, 2))
				{
					__LIB_1__::func_864(Local_18.f_1111.f_40[6], 1, 1);
				}
			}
		}
		func_1541();
		if ((((((((((func_1674(&(Local_18.f_565)) && func_640(Global_35, __LIB_19__::func_94(3, 0), 2)) && func_640(Local_18.f_1111.f_40[0], __LIB_19__::func_94(3, 2), 2)) && func_640(Local_18.f_1111.f_40[4], __LIB_19__::func_94(3, 4), 2)) && func_640(Local_18.f_1111.f_40[3], __LIB_19__::func_94(3, 1), 2)) && func_640(Local_18.f_1111.f_40[1], __LIB_19__::func_94(3, 3), 2)) && func_640(Local_18.f_1111.f_40[5], __LIB_19__::func_94(3, 5), 2)) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35)) && __LIB_0__::func_163(Local_18.f_1111.f_40[3], -982327190)) && __LIB_0__::func_163(Local_18.f_1111.f_40[1], -982327190)) && __LIB_0__::func_163(Local_18.f_1111.f_40[5], -982327190))
		{
			if (func_1547(&(Local_18.f_1111), 1))
			{
				if (func_1676(__LIB_17__::func_812(3, 0), 1120403456 /* Float: 100f */))
				{
					func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
					func_1677(&(Local_18.f_565), 1);
				}
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 5);
		func_261(&(Local_18.f_1111), 1);
		func_1678(&(Local_18.f_565), 1);
		func_217(&Local_18);
		return Local_18 >= 3;
	}
	return false;
}

bool func_1301(var uParam0)
{
	if (!func_1673(&(Local_18.f_565)))
	{
		if (!STREAMING::_IS_IMAP_ACTIVE(758684739) || !STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			__LIB_1__::func_408(-2020023971, 0, 0);
			__LIB_10__::func_800();
			return false;
		}
		Local_18.f_565.f_2 = 4;
		Local_18.f_565.f_112 = 0;
		if (__LIB_0__::func_895(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01"))) > 0)
		{
			__LIB_1__::func_432(__LIB_0__::func_895(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01"))), 0, 0, 0, 1);
			Local_18.f_1224.f_7 = 0;
			__LIB_1__::func_532(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01")), Local_18.f_1224.f_7);
		}
		if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			func_265(&(Local_18.f_1111), 2, 2, 1);
		}
		if (__LIB_0__::func_272(Local_18.f_1111.f_40[1], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[1]))
		{
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
		}
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[4], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[4], -1);
		}
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[3], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[3], -1);
		}
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[1], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[1], -1);
		}
		if (!__LIB_0__::func_163(Local_18.f_1111.f_40[5], -982327190))
		{
			TASK::TASK_STAND_STILL(Local_18.f_1111.f_40[5], -1);
		}
		func_1541();
		if ((((((((((func_1674(&(Local_18.f_565)) && func_640(Global_35, __LIB_19__::func_94(4, 0), 2)) && func_640(Local_18.f_1111.f_40[0], __LIB_19__::func_94(4, 2), 2)) && func_640(Local_18.f_1111.f_40[4], __LIB_19__::func_94(4, 4), 2)) && func_640(Local_18.f_1111.f_40[3], __LIB_19__::func_94(4, 1), 2)) && func_640(Local_18.f_1111.f_40[1], __LIB_19__::func_94(4, 3), 2)) && func_640(Local_18.f_1111.f_40[5], __LIB_19__::func_94(4, 5), 2)) && __LIB_0__::func_163(Local_18.f_1111.f_40[4], -982327190)) && __LIB_0__::func_163(Local_18.f_1111.f_40[3], -982327190)) && __LIB_0__::func_163(Local_18.f_1111.f_40[1], -982327190)) && __LIB_0__::func_163(Local_18.f_1111.f_40[5], -982327190))
		{
			if (func_1676(__LIB_17__::func_812(4, 0), 1120403456 /* Float: 100f */))
			{
				func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
				func_1677(&(Local_18.f_565), 1);
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 7);
		func_261(&(Local_18.f_1111), 1);
		func_539(&(Local_18.f_730), 1, 1, 0);
		__LIB_6__::func_618(&Local_18, 8);
		func_597(&(Local_18.f_565), 1);
		func_612(&Local_18, 23, 1);
		func_1680(&(Local_18.f_565), 1);
		func_219(&Local_18);
		return Local_18.f_2 >= 5;
	}
	return false;
}

int func_1302(var uParam0)
{
	if (!func_1673(&(Local_18.f_565)))
	{
		if (!STREAMING::_IS_IMAP_ACTIVE(758684739) || !STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			__LIB_1__::func_408(-2020023971, 0, 0);
			__LIB_10__::func_800();
			return 0;
		}
		Local_18.f_565.f_2 = 5;
		Local_18.f_565.f_112 = 0;
		if (Local_18.f_1224.f_7 != __LIB_0__::func_895(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01"))))
		{
			Local_18.f_1224.f_7 = __LIB_0__::func_895(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01")));
		}
		if (__LIB_0__::func_272(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			func_265(&(Local_18.f_1111), 2, 2, 1);
		}
		if (__LIB_0__::func_272(Local_18.f_1111.f_40[0], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[0]))
		{
			func_265(&(Local_18.f_1111), 0, 2, 1);
		}
		if (__LIB_0__::func_272(Local_18.f_1111.f_40[1], 0) && PED::_0xA0BC8FAED8CFEB3C(Local_18.f_1111.f_40[1]))
		{
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
		}
		func_1541();
		func_597(&(Local_18.f_565), 1);
		__LIB_6__::func_618(&Local_18, 8);
		func_582(&Local_18, 20);
		func_617(&Local_18, 6);
		if ((((((func_1674(&(Local_18.f_565)) && func_640(Global_35, __LIB_19__::func_94(5, 0), 2)) && func_640(Local_18.f_1111.f_40[0], __LIB_19__::func_94(5, 1), 2)) && func_640(Local_18.f_1111.f_40[4], __LIB_19__::func_94(5, 2), 2)) && func_640(Local_18.f_1111.f_40[3], __LIB_19__::func_94(5, 3), 2)) && func_640(Local_18.f_1111.f_40[1], __LIB_19__::func_94(5, 4), 2)) && func_640(Local_18.f_1111.f_40[5], __LIB_19__::func_94(5, 5), 2))
		{
			if (func_1547(&(Local_18.f_1111), 0))
			{
				if (func_1676(__LIB_17__::func_812(5, 0), 1120403456 /* Float: 100f */))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_RUN"), false, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.8f, 2000, ENTITY::GET_ENTITY_HEADING(Global_35), false, false);
					TASK::TASK_MOUNT_ANIMAL(Local_18.f_1111.f_40[4], Local_18.f_1111.f_40[5], -1, -1, 2f, 1, 0, 0);
					PED::_0x2208438012482A1A(Local_18.f_1111.f_40[4], false, false);
					TASK::TASK_MOUNT_ANIMAL(Local_18.f_1111.f_40[0], Local_18.f_1111.f_40[1], -1, -1, 2f, 1, 0, 0);
					PED::_0x2208438012482A1A(Local_18.f_1111.f_40[0], false, false);
					func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
					func_1677(&(Local_18.f_565), 1);
				}
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 9);
		return 1;
	}
	return 0;
}

int func_1303(var uParam0)
{
	if (!func_1673(&(Local_18.f_565)))
	{
		if (!STREAMING::_IS_IMAP_ACTIVE(758684739) || !STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			__LIB_1__::func_408(-2020023971, 0, 0);
			__LIB_10__::func_800();
			return 0;
		}
		Local_18.f_565.f_2 = 5;
		Local_18.f_565.f_112 = 15;
		if (Local_18.f_1224.f_7 != __LIB_0__::func_895(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01"))))
		{
			Local_18.f_1224.f_7 = __LIB_0__::func_895(__LIB_1__::func_316(3, joaat("HAI_BANK_ROBBERY_01")));
		}
		func_597(&(Local_18.f_565), 1);
		__LIB_6__::func_618(&Local_18, 8);
		func_582(&Local_18, 20);
		func_617(&Local_18, 6);
		if (((((((((func_1674(&(Local_18.f_565)) && func_640(Global_35, __LIB_19__::func_94(5, 6), 2)) && func_640(Local_18.f_1111.f_40[0], __LIB_19__::func_94(5, 7), 2)) && func_640(Local_18.f_1111.f_40[4], __LIB_19__::func_94(5, 8), 2)) && func_640(Local_18.f_1111.f_40[3], __LIB_19__::func_94(5, 6), 2)) && func_640(Local_18.f_1111.f_40[1], __LIB_19__::func_94(5, 7), 2)) && func_640(Local_18.f_1111.f_40[5], __LIB_19__::func_94(5, 8), 2)) && func_1675(Global_35, Local_18.f_1111.f_40[3], 0, -1, 1)) && func_1675(Local_18.f_1111.f_40[0], Local_18.f_1111.f_40[1], 0, -1, 1)) && func_1675(Local_18.f_1111.f_40[4], Local_18.f_1111.f_40[5], 0, -1, 1))
		{
			if (func_1676(__LIB_17__::func_812(5, 6), 1120403456 /* Float: 100f */))
			{
				func_632(&(Local_18.f_121));
				func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
				func_539(&(Local_18.f_730), 3, 1, 0);
				func_1677(&(Local_18.f_565), 1);
			}
		}
	}
	else if (!func_636(&Local_18, &(Local_18.f_1111), 2))
	{
	}
	else if (!func_633(&(Local_18.f_121), func_227(183), 1, 0))
	{
	}
	else
	{
		func_639(__LIB_3__::func_997(func_227(183)), &(Local_18.f_121));
		return 1;
	}
	return 0;
}

int func_1307(var uParam0, int iParam1, int iParam2)
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
		return func_1307(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1309(var uParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_1(uParam0->f_4[iParam1], iParam2);
}

void func_1310(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1309(uParam0, iParam1, iParam2))
		{
			__LIB_0__::func_7(&(uParam0->f_4[iParam1]), iParam2);
		}
	}
	else if (func_1309(uParam0, iParam1, iParam2))
	{
		__LIB_0__::func_8(&(uParam0->f_4[iParam1]), iParam2);
	}
}

var func_1311(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_552[iParam1], func_1023(iParam2));
}

bool func_1320(var uParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_1((*uParam0)[iParam1], iParam2);
}

void func_1442(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_442(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_442(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_1447(struct<6> Param0)
{
	if (!func_1757(Param0.f_4, 1))
	{
	}
	if (!func_1757(Param0, 1))
	{
	}
	if (!func_1757(Param0.f_2, 1))
	{
	}
	if (!func_1757(Param0.f_5, 1))
	{
	}
	if (!func_1757(Param0.f_3, 1))
	{
	}
	if (!func_1757(Param0.f_1, 1))
	{
	}
}

bool func_1501(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (!__LIB_5__::func_236(1) || !__LIB_0__::func_481(1))
	{
		return false;
	}
	iVar0 = AUDIO::_0xF336E9F989B3518F(func_227(iParam3));
	if (iVar0 != -1)
	{
		if (uParam0->f_276[iVar0 /*4*/] == uParam1->f_40[iParam2])
		{
			return true;
		}
	}
	return false;
}

void func_1505(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1010(uParam0, iParam1, iParam2))
		{
			__LIB_0__::func_7(&(uParam0->f_5[iParam1]), iParam2);
		}
	}
	else if (func_1010(uParam0, iParam1, iParam2))
	{
		__LIB_0__::func_8(&(uParam0->f_5[iParam1]), iParam2);
	}
}

bool func_1506(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 4194304);
}

bool func_1507(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_552[iParam1], func_1023(iParam2));
}

bool func_1508(var uParam0, int iParam1)
{
	return ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_552[iParam1], false);
}

var func_1509(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_552[iParam1], func_1023(iParam2));
}

char* func_1510(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return func_227(49);
		case 2:
		case 3:
			return func_227(50);
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return func_227(51);
		case 9:
			return func_227(52);
		default:
			break;
	}
	return "";
}

char* func_1511(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(48);
		default:
			break;
	}
	return "";
}

bool func_1512(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_552[iParam1], func_1511(iParam2));
}

Vector3 func_1513(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	vector3 vVar1;
	switch (iParam1)
	{
		case 0:
		case 1:
			return __LIB_17__::func_812(7, 0);
		case 2:
		case 3:
			return __LIB_17__::func_812(7, 1);
		case 4:
			sVar0 = func_1023(53);
			break;
		case 6:
			sVar0 = func_1023(56);
			break;
		case 7:
			if (iParam2 >= 17 && iParam2 <= 19)
			{
				sVar0 = func_1023(55);
			}
			else
			{
				sVar0 = func_1023(54);
			}
			break;
		case 8:
			sVar0 = func_1023(57);
			break;
		default:
			break;
	}
	ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_552[iParam1], func_1072(iParam2), &vVar1, true, sVar0, 2);
	return vVar1;
}

Vector3 func_1514(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	struct<4> Var1;
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0f, 0f, 0f;
		case 4:
			sVar0 = func_1023(53);
			break;
		case 6:
			sVar0 = func_1023(56);
			break;
		case 7:
			if (iParam2 >= 17 && iParam2 <= 19)
			{
				sVar0 = func_1023(55);
			}
			else
			{
				sVar0 = func_1023(54);
			}
			break;
		case 8:
			sVar0 = func_1023(57);
			break;
		default:
			break;
	}
	ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_552[iParam1], func_1072(iParam2), &Var1, true, sVar0, 2);
	return Var1.f_3;
}

void func_1529(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(__LIB_0__::func_958(0, func_227(iParam1), 0, 0, -1, -1));
		if (uParam0->f_1 != uParam0->f_2)
		{
			uParam0->f_1 = uParam0->f_2;
		}
		uParam0->f_2 = iParam1;
	}
}

void func_1530(var uParam0)
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	func_1529(uParam0, uParam0->f_1);
}

void func_1541()
{
	int iVar0;
	iVar0 = __LIB_0__::func_559(105);
	__LIB_3__::func_729(iVar0, 0, 0);
	__LIB_11__::func_1(iVar0, 0);
	__LIB_0__::func_566(iVar0, 0);
}

void func_1542(vector3 vParam0, int iParam3)
{
	__LIB_2__::func_761(vParam0, iParam3, 0, 0);
	__LIB_3__::func_688(vParam0, iParam3, 0);
	__LIB_0__::func_568(vParam0, iParam3, 0);
}

bool func_1547(var uParam0, bool bParam1)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	iVar0 = 7;
	while (iVar0 <= 10)
	{
		if (bParam1 || __LIB_0__::func_272(uParam0->f_40[iVar0], 0))
		{
		}
		else
		{
			Var1 = { func_1612(iVar0, 0) };
			uParam0->f_40[iVar0] = __LIB_1__::func_545(func_736(19), Var1, Var1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_40[iVar0], false);
			func_646(uParam0->f_40[iVar0], 208, 0);
			if (!__LIB_0__::func_163(uParam0->f_40[iVar0], -982327190))
			{
				TASK::TASK_STAND_STILL(uParam0->f_40[iVar0], -1);
			}
			return false;
		}
		iVar0++;
	}
	iVar0 = 11;
	while (iVar0 <= 18)
	{
		Var5 = { func_1612(iVar0, bParam1) };
		if (!__LIB_0__::func_272(uParam0->f_40[iVar0], 0))
		{
			uParam0->f_40[iVar0] = __LIB_1__::func_545(func_736(18), Var5, Var5.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			if (!bParam1)
			{
				if (PED::IS_PED_ON_MOUNT(uParam0->f_40[iVar0]))
				{
					func_640(uParam0->f_40[iVar0], Var5, 36);
				}
				else if (iVar0 >= 11 && iVar0 <= 14)
				{
					func_1675(uParam0->f_40[iVar0], uParam0->f_40[func_1226(iVar0)], 0, -1, 1);
				}
			}
			PED::SET_PED_AS_COP(uParam0->f_40[iVar0], true);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_40[iVar0], true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_40[iVar0], 14, true);
			LAW::_0x819ADD5EF1742F47(uParam0->f_40[iVar0], 32775);
			func_646(uParam0->f_40[iVar0], 64, 1);
			func_646(uParam0->f_40[iVar0], 98, 0);
			func_646(uParam0->f_40[iVar0], 127, 0);
			func_646(uParam0->f_40[iVar0], 188, 1);
			func_646(uParam0->f_40[iVar0], 233, 1);
			__LIB_1__::func_766(uParam0->f_40[iVar0], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			__LIB_1__::func_863(uParam0->f_40[iVar0], joaat("BLIP_STYLE_COP"), 1, 1);
			__LIB_3__::func_356(uParam0->f_40[iVar0], 231194138, 1);
			if (!__LIB_0__::func_163(uParam0->f_40[iVar0], -982327190))
			{
				TASK::TASK_STAND_STILL(uParam0->f_40[iVar0], -1);
			}
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1548(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return func_1551(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

bool func_1551(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_1__::func_435(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!__LIB_3__::func_74(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_264, sParam2))
		{
			func_1800(uParam0, iParam1, 4);
			return true;
		}
		else if (bParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_264, sParam2))
		{
			func_1800(uParam0, iParam1, 4);
			return true;
		}
	}
	return false;
}

void func_1563(int iParam0)
{
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return;
	}
	func_646(iParam0, 280, 0);
	func_646(iParam0, 279, 0);
	if (PED::IS_PED_IN_GROUP(iParam0))
	{
		PED::REMOVE_PED_FROM_GROUP(iParam0);
	}
}

void func_1591(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
	}
	__LIB_0__::func_87(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!__LIB_0__::func_1(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*uParam0, 4) && !__LIB_0__::func_1(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*uParam0, 8192))
	{
		func_1815();
	}
	if (!__LIB_0__::func_1(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!__LIB_0__::func_1(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (__LIB_0__::func_147() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (__LIB_0__::func_86(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						__LIB_0__::func_634(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						__LIB_0__::func_148(2);
						__LIB_0__::func_149(-1);
						__LIB_0__::func_150(vVar3);
						__LIB_0__::func_151(__LIB_0__::func_23());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!__LIB_0__::func_1(*uParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*uParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 2097152))
	{
		if (__LIB_0__::func_704() || PED::_0x50F124E6EF188B22(Global_35))
		{
			__LIB_1__::func_716(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1593(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_3__::func_83(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_683(iVar1, __LIB_3__::func_83(uParam0), __LIB_3__::func_84(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_683(iVar3, __LIB_3__::func_83(uParam0), __LIB_3__::func_84(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1594(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_3__::func_83(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_3__::func_83(uParam0) };
			func_683(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1609(int iParam0)
{
	return (iParam0 == 11 || iParam0 == 17);
}

struct<4> func_1610(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					Var0 = { __LIB_19__::func_94(10, 0) };
					break;
				case 1:
					Var0 = { __LIB_19__::func_94(10, 1) };
					break;
				case 2:
					Var0 = { __LIB_19__::func_94(10, 2) };
					break;
				case 3:
					Var0 = { __LIB_19__::func_94(10, 3) };
					break;
				case 4:
					Var0 = { __LIB_19__::func_94(10, 4) };
					break;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					Var0 = { __LIB_19__::func_94(10, 5) };
					break;
				case 1:
					Var0 = { __LIB_19__::func_94(10, 6) };
					break;
				case 2:
					Var0 = { __LIB_19__::func_94(10, 7) };
					break;
				case 3:
					Var0 = { __LIB_19__::func_94(10, 8) };
					break;
				case 4:
					Var0 = { __LIB_19__::func_94(10, 9) };
					break;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					Var0 = { __LIB_19__::func_94(10, 25) };
					break;
				case 1:
					Var0 = { __LIB_19__::func_94(10, 26) };
					break;
				case 2:
					Var0 = { __LIB_19__::func_94(10, 27) };
					break;
				case 3:
					Var0 = { __LIB_19__::func_94(10, 28) };
					break;
				case 4:
					Var0 = { __LIB_19__::func_94(10, 29) };
					break;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					Var0 = { __LIB_19__::func_94(10, 30) };
					break;
				case 1:
					Var0 = { __LIB_19__::func_94(10, 31) };
					break;
				case 2:
					Var0 = { __LIB_19__::func_94(10, 32) };
					break;
				case 3:
					Var0 = { __LIB_19__::func_94(10, 33) };
					break;
				case 4:
					Var0 = { __LIB_19__::func_94(10, 34) };
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return Var0;
}

int func_1611(int iParam0, int iParam1)
{
	int iVar0;
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("WORLD_HUMAN_GUARD_MILITARY");
					break;
				case 1:
					iVar0 = joaat("WORLD_HUMAN_GUARD_SCOUT");
					break;
				case 2:
					iVar0 = joaat("WORLD_HUMAN_GUARD_SCOUT");
					break;
				case 3:
					iVar0 = joaat("WORLD_HUMAN_GUARD_MILITARY");
					break;
				case 4:
					iVar0 = joaat("WORLD_HUMAN_SMOKE");
					break;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("WORLD_HUMAN_GUARD_SCOUT");
					break;
				case 1:
					iVar0 = joaat("WORLD_HUMAN_GUARD_SCOUT");
					break;
				case 2:
					iVar0 = joaat("WORLD_HUMAN_GUARD_MILITARY");
					break;
				case 3:
					iVar0 = joaat("WORLD_HUMAN_SMOKE");
					break;
				case 4:
					iVar0 = joaat("WORLD_HUMAN_GUARD_MILITARY");
					break;
				default:
					break;
			}
			break;
	}
	return iVar0;
}

struct<4> func_1612(int iParam0, bool bParam1)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 6:
			return __LIB_19__::func_94(9, 0);
		case 7:
			return __LIB_19__::func_94(5, 9);
		case 8:
			return __LIB_19__::func_94(5, 10);
		case 9:
			return __LIB_19__::func_94(5, 11);
		case 10:
			return __LIB_19__::func_94(5, 12);
		case 11:
			if (bParam1)
			{
				return __LIB_19__::func_94(10, 0);
			}
			return __LIB_19__::func_94(5, 9);
		case 12:
			if (bParam1)
			{
				return __LIB_19__::func_94(10, 5);
			}
			return __LIB_19__::func_94(5, 10);
		case 13:
			if (bParam1)
			{
				return __LIB_19__::func_94(10, 10);
			}
			return __LIB_19__::func_94(5, 11);
		case 14:
			if (bParam1)
			{
				return __LIB_19__::func_94(10, 14);
			}
			return __LIB_19__::func_94(5, 12);
		case 15:
			if (bParam1)
			{
				return __LIB_19__::func_94(10, 19);
			}
			return __LIB_19__::func_94(5, 13);
		case 16:
			if (bParam1)
			{
				return __LIB_19__::func_94(10, 23);
			}
			return __LIB_19__::func_94(5, 14);
		case 17:
			if (bParam1)
			{
				return __LIB_19__::func_94(10, 25);
			}
			return __LIB_19__::func_94(5, 15);
		case 18:
			if (bParam1)
			{
				return __LIB_19__::func_94(10, 30);
			}
			return __LIB_19__::func_94(5, 16);
		default:
			break;
	}
	return Var0;
}

void func_1613(var uParam0)
{
	int iVar0;
	iVar0 = uParam0->f_1111.f_40[6];
	if (__LIB_0__::func_266(Global_35, uParam0->f_692.f_35, 1.8f, 1, 0) || !__LIB_0__::func_266(Global_35, uParam0->f_692.f_35, 2.2f, 1, 0))
	{
		uParam0->f_692.f_35 = { func_1828(&(uParam0->f_1111), 6) };
	}
	if (uParam0->f_692 > 1)
	{
		if (((uParam0->f_692 < 5 && func_538(&(uParam0->f_730), 192)) && !func_538(&(uParam0->f_730), 194)) && __LIB_9__::func_178(&(uParam0->f_565.f_31[7 /*3*/])) < 1.5f)
		{
			__LIB_4__::func_87(&(uParam0->f_565.f_31[7 /*3*/]), 1.5f, 0);
		}
		PLAYER::_0x8674D138391FFB1B(PLAYER::PLAYER_ID(), 1);
		__LIB_17__::func_905(iVar0, &(uParam0->f_471), 0f, 0f, 0f, 0, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 15000, 1000, 1000, 0.01f, 1, 1, 1084227584 /* Float: 5f */);
	}
	switch (uParam0->f_692)
	{
		case 0:
			__LIB_0__::func_37(&(uParam0->f_565.f_31[9 /*3*/]));
			__LIB_6__::func_618(&(uParam0->f_692), 1);
		case 1:
			func_266(0, 0);
			func_642(Global_35, 0, 0);
			if (func_524(&(uParam0->f_1111), 6))
			{
				if (func_610(&(uParam0->f_565.f_31[9 /*3*/]), 1.5f, 1, 1))
				{
					__LIB_6__::func_618(&(uParam0->f_692), 3);
				}
			}
			else if (PED::_0x3BDFCF25B58B0415(iVar0))
			{
				__LIB_6__::func_618(&(uParam0->f_692), 3);
			}
			else if (func_523(&(uParam0->f_1111), 6) || PED::_IS_PED_LASSOED(iVar0))
			{
				__LIB_6__::func_618(&(uParam0->f_692), 5);
			}
			else
			{
				__LIB_2__::func_246(&(uParam0->f_471));
				__LIB_0__::func_7(&(uParam0->f_471.f_3), 32);
				__LIB_2__::func_619(&(uParam0->f_471.f_3), 1);
				__LIB_1__::func_397(&(uParam0->f_471.f_3), 1);
				__LIB_1__::func_404(&(uParam0->f_471.f_3), 0);
				__LIB_10__::func_241(&(uParam0->f_471.f_3), 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iVar0, -1, -1f, -1f, -1f);
				__LIB_6__::func_618(&(uParam0->f_692), 2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_163(iVar0, 1630799643) && !__LIB_0__::func_48(iVar0, Global_35, 2f, 1))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, Global_35, 1500, false, 3);
			}
			else
			{
				__LIB_6__::func_618(&(uParam0->f_692), 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_163(iVar0, 432954108))
			{
				if (!__LIB_0__::func_163(iVar0, 1630799643) && !PED::_0x3BDFCF25B58B0415(iVar0))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(iVar0, uParam0->f_692.f_35, PED::GET_PED_BONE_COORDS(Global_35, 21030, 0f, 0f, 0f), 1f, 0, 0.1f, 0.2f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					PED::SET_PED_KEEP_TASK(iVar0, true);
				}
			}
			else
			{
				__LIB_6__::func_618(&(uParam0->f_692), 4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_163(iVar0, 1630799643))
			{
				if (__LIB_0__::func_266(iVar0, uParam0->f_692.f_35, 0.25f, 1, 0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, Global_35, -1, false, 0);
					PED::SET_PED_KEEP_TASK(iVar0, true);
				}
			}
			else
			{
				__LIB_6__::func_618(&(uParam0->f_692), 5);
			}
			break;
		case 5:
			break;
	}
}

void func_1614(var uParam0, int iParam1, bool bParam2)
{
	func_1014(uParam0, iParam1, 16, bParam2);
}

void func_1615(var uParam0, int iParam1, bool bParam2)
{
	func_1014(uParam0, iParam1, 8, bParam2);
}

bool func_1616(var uParam0, int iParam1)
{
	if (PED::_0x5203038FF8BAE577(Global_35, 46, iParam1) || PED::_0x5203038FF8BAE577(Global_35, 55, iParam1))
	{
		if (uParam0->f_20 == 0)
		{
			uParam0->f_20 = __LIB_0__::func_399(Global_35, 1, 0, 0);
		}
		else
		{
			return (WEAPON::_0x5809DBCA0A37C82B(uParam0->f_20) && (((uParam0->f_20 == joaat("WEAPON_THROWN_THROWING_KNIVES") || uParam0->f_20 == joaat("WEAPON_THROWN_TOMAHAWK")) || uParam0->f_20 == joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT")) || uParam0->f_20 == joaat("WEAPON_UNARMED")));
		}
	}
	else if (uParam0->f_20 != 0)
	{
		uParam0->f_20 = 0;
	}
	return false;
}

int func_1619(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_895(iParam0, uParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_882(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (__LIB_2__::func_874(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_896(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_897(iParam0, uParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *iParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_1639(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_1871(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_1673(var uParam0)
{
	return __LIB_8__::func_957(uParam0, 1);
}

bool func_1674(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 0:
		case 1:
			if (CLOCK::GET_CLOCK_HOURS() < 12 || CLOCK::GET_CLOCK_HOURS() >= 18)
			{
				CLOCK::SET_CLOCK_TIME(12, 0, 0);
				return false;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 8:
			if (CLOCK::GET_CLOCK_HOURS() >= 4 && CLOCK::GET_CLOCK_HOURS() < 22)
			{
				CLOCK::SET_CLOCK_TIME(22, 0, 0);
				return false;
			}
			break;
	}
	return true;
}

bool func_1675(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return true;
}

bool func_1676(vector3 vParam0, int iParam3)
{
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		__LIB_0__::func_489(0, 0);
		STREAMING::_0x387AD749E3B69B70(vParam0, CAM::GET_GAMEPLAY_CAM_ROT(2), iParam3, 7);
		STREAMING::_0xA8432A14D4DC2101(vParam0);
		return false;
	}
	else if (!STREAMING::_0x0909F71B5C070797())
	{
		return false;
	}
	STREAMING::_0x5A8B01199C3E79C3();
	return true;
}

void func_1677(var uParam0, bool bParam1)
{
	func_1003(uParam0, 1, bParam1);
}

void func_1678(var uParam0, bool bParam1)
{
	func_1003(uParam0, 4, bParam1);
}

void func_1680(var uParam0, bool bParam1)
{
	func_1003(uParam0, 8, bParam1);
}

bool func_1757(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_1757(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1757(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1757(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1757(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_1800(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), iParam2);
		}
		iVar0++;
	}
}

void func_1815()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 7, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 18, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_664();
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1959(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

Vector3 func_1828(var uParam0, int iParam1)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = __LIB_0__::func_152(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_40[iParam1], true, false), 1);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, fVar0, 0f, 2f, 1f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &(vVar1.f_2), false);
	return vVar1;
}

int func_1871(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_1__::func_626(iParam0, vVar0, fParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_683(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

int func_1959(int iParam0, int iParam1)
{
	var uVar0;
	return func_2048(&uVar0, iParam0, iParam1);
}

int func_2048(var uParam0, int iParam1, int iParam2)
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
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
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
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || __LIB_0__::func_237(Var4.f_4)) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || __LIB_0__::func_27(iParam1, 4))) && (!__LIB_0__::func_237(Var4.f_4) || __LIB_0__::func_27(iParam1, 8))) && (!WEAPON::_IS_WEAPON_REPEATER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 8388608))) && (!WEAPON::_IS_WEAPON_RIFLE(Var4.f_4) || !__LIB_0__::func_27(iParam1, 1048576)))
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
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512) && !__LIB_0__::func_27(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_2048(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

