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
	int iLocal_191[2] = { 0, 0 };
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197[5] = { 0, 0, 0, 0, 0 };
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	int iLocal_209 = 0;
	float fLocal_210 = 0f;
	struct<21> Local_211[3];
	struct<52> Local_275[3];
	int iLocal_432 = 0;
	struct<21> Local_433 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	char cLocal_462[32] = "";
	int iLocal_466[5] = { 0, 0, 0, 0, 0 };
	var uLocal_472[5] = { 0, 0, 0, 0, 0 };
	var uLocal_478[5] = { 0, 0, 0, 0, 0 };
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486[2] = { 0, 0 };
	int iLocal_489[2] = { 0, 0 };
	struct<7> Local_492[11];
	vector3 vLocal_570[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599[2] = { 0, 0 };
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	var uLocal_607[4] = { 0, 0, 0, 0 };
	int iLocal_612 = 0;
	var uLocal_613 = 0;
	struct<691> Local_614 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = -1;
	var uLocal_1315 = 1;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = -1;
	var uLocal_1327 = 1;
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
	var uLocal_1338 = -1;
	var uLocal_1339 = 1;
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
	var uLocal_1350 = -1;
	var uLocal_1351 = 1;
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
	var uLocal_1362 = -1;
	var uLocal_1363 = 1;
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
	var uLocal_1374 = -1;
	var uLocal_1375 = 1;
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
	var uLocal_1386 = -1;
	var uLocal_1387 = 1;
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
	var uLocal_1398 = -1;
	var uLocal_1399 = 1;
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
	var uLocal_1410 = -1;
	var uLocal_1411 = 1;
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
	var uLocal_1422 = -1;
	var uLocal_1423 = 1;
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
	var uLocal_1434 = -1;
	var uLocal_1435 = 1;
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
	var uLocal_1446 = -1;
	var uLocal_1447 = 1;
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
	var uLocal_1458 = -1;
	var uLocal_1459 = 1;
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
	var uLocal_1470 = -1;
	var uLocal_1471 = 1;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = -1;
	var uLocal_1483 = 1;
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
	var uLocal_1494 = -1;
	var uLocal_1495 = 1;
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
	var uLocal_1506 = -1;
	var uLocal_1507 = 1;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = -1;
	var uLocal_1519 = 1;
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
	var uLocal_1530 = -1;
	var uLocal_1531 = 1;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = -1;
	var uLocal_1543 = 1;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = -1;
	var uLocal_1555 = 1;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = -1;
	var uLocal_1567 = 1;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = -1;
	var uLocal_1579 = 1;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = -1;
	var uLocal_1591 = 1;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = -1;
	var uLocal_1603 = 1;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = -1;
	var uLocal_1615 = 1;
	var uLocal_1616 = 0;
	struct<141> Local_1617 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	struct<12> Local_1768[12];
	int iLocal_1913 = 0;
	var uLocal_1914[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1920 = 0;
	int iLocal_1921 = 0;
	int iLocal_1922 = 0;
	var uLocal_1923[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1954 = 30;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2016 = 0;
	var uLocal_2017 = 8;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	int iLocal_2082[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2092[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2102[2] = { 0, 0 };
	int iLocal_2105[2] = { 0, 0 };
	int iLocal_2108[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2119 = 10;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	int iLocal_2130[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2146 = 0;
	struct<35> Local_2147 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1096810496, 1090519040, 0 } ;
	var uLocal_2182[1] = { 0 };
	struct<5> Local_2184[5];
	var uLocal_2210[5] = { 0, 0, 0, 0, 0 };
	struct<24> Local_2216 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	int iLocal_2249 = 0;
	int iLocal_2250 = 0;
	int iLocal_2251 = 0;
	int iLocal_2252 = 0;
	int iLocal_2253 = 0;
	bool bLocal_2254 = false;
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
	fLocal_210 = 15f;
	Local_1617.f_136 = 0;
	Local_1617.f_137 = uScriptParam_0;
	Local_1617.f_138 = 807;
	if (__LIB_0__::func_2() != 0)
	{
	}
	else
	{
		__LIB_7__::func_919();
		__LIB_8__::func_203(Local_1617.f_136);
		return;
	}
	iLocal_98 = __LIB_0__::func_982(Local_1617.f_136);
	if (__LIB_7__::func_907(Local_1617.f_136, 536870912))
	{
		__LIB_0__::func_516(&(Global_40.f_9096[Local_1617.f_136 /*12*/].f_6), __LIB_0__::func_771(__LIB_7__::func_920()));
	}
	if (!__LIB_7__::func_908(Local_1617.f_136, 2097152))
	{
		__LIB_8__::func_82(Local_1617.f_136, 2097152);
	}
	__LIB_7__::func_921();
	__LIB_8__::func_167(128, __LIB_8__::func_215(Local_1617.f_136));
	if (__LIB_7__::func_908(Local_1617.f_136, 33554432))
	{
		__LIB_7__::func_922(128);
		__LIB_8__::func_83(Local_1617.f_136, 33554432);
	}
	__LIB_7__::func_922(1);
	__LIB_8__::func_167(262144, __LIB_7__::func_907(Local_1617.f_136, 128));
	__LIB_8__::func_167(131072, __LIB_7__::func_907(Local_1617.f_136, 4));
	__LIB_8__::func_167(2097152, __LIB_7__::func_908(Local_1617.f_136, 1024));
	__LIB_8__::func_167(-2147483648, __LIB_7__::func_908(Local_1617.f_136, 16384));
	__LIB_8__::func_167(1048576, __LIB_8__::func_242(Local_1617.f_136));
	__LIB_8__::func_167(16, __LIB_8__::func_309(Local_1617.f_136));
	__LIB_8__::func_234(0, &Local_1617, 0);
	VEHICLE::_0x012701ED938B85DE(1f, 5f);
	if (__LIB_7__::func_907(Local_1617.f_136, 128) || (iLocal_98 == 2 && (__LIB_7__::func_923(-2147483648) || !__LIB_7__::func_908(1, 2))))
	{
		__LIB_7__::func_922(262144);
	}
	__LIB_8__::func_235(&Local_1617, 32, func_20());
	if (__LIB_7__::func_924(&Local_1617, 32))
	{
		if (!__LIB_0__::func_117(Local_1617.f_138, 32))
		{
			__LIB_0__::func_123(Local_1617.f_138, 32);
		}
		if (!__LIB_7__::func_923(1048576))
		{
			iVar0 = 16;
			__LIB_3__::func_710(Global_1392194[Local_1617.f_136 /*10*/].f_6, iVar0);
		}
	}
	else
	{
		__LIB_7__::func_925(Global_1392194[Local_1617.f_136 /*10*/].f_6);
	}
	__LIB_8__::func_255(Local_1617.f_136, Local_1617.f_137, &Local_614, &Local_1617, 1, 1);
	__LIB_8__::func_167(64, func_28());
	__LIB_8__::func_167(16384, func_29());
	__LIB_8__::func_167(32768, __LIB_8__::func_204());
	__LIB_8__::func_167(65536, __LIB_8__::func_205());
	__LIB_8__::func_167(256, __LIB_8__::func_216());
	func_33();
	Local_614.f_13 = joaat("LOGGING_WORKERS");
	func_34();
	if (!__LIB_7__::func_924(&Local_1617, 32))
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
	__LIB_8__::func_203(Local_1617.f_136);
	uScriptParam_0 = uScriptParam_0;
	Local_614.f_4 = { -1399.503f, -223.7296f, 99.81865f };
	Local_614.f_7 = { -1474.662f, -341.2676f, 80f };
	Local_614.f_10 = { -1326.326f, -116.0771f, 150f };
	if (__LIB_7__::func_923(16))
	{
		Local_433.f_3 = 1;
	}
	if (__LIB_7__::func_924(&Local_1617, 32))
	{
		POPULATION::_0x74C2B3DC0B294102(Global_1392194[Local_1617.f_136 /*10*/].f_5);
		POPULATION::_0xA1CFB35069D23C23(Global_1392194[Local_1617.f_136 /*10*/].f_5);
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
	func_36();
	func_37();
	if (iLocal_98 > 3)
	{
		__LIB_7__::func_926(512);
	}
	if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		__LIB_7__::func_926(512);
	}
	__LIB_8__::func_167(8192, func_38());
	__LIB_8__::func_251(&Local_1617);
	__LIB_4__::func_203(&Local_1617, 1);
	if (__LIB_7__::func_923(1048576) || __LIB_7__::func_924(&Local_1617, 32))
	{
		__LIB_8__::func_84(&Local_1617, 1);
	}
	if (__LIB_7__::func_923(262144) && !__LIB_7__::func_907(Local_1617.f_136, 16777216))
	{
		__LIB_8__::func_85(Local_1617.f_136, 16777216);
	}
	__LIB_8__::func_131(&Local_1617, 128);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_2254 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_2254, 9298, 0);
		func_46();
		if (!bLocal_2254)
		{
			switch (iLocal_2251)
			{
				case 0:
					if (!__LIB_7__::func_907(Local_1617.f_136, 524288) && Local_614.f_3 < (15 + ((2 + (Local_614 + Local_614.f_1)) + iLocal_14)))
					{
						__LIB_7__::func_927((15 + ((2 + (Local_614 + Local_614.f_1)) + iLocal_14)), &Local_614);
						__LIB_1__::func_148(&(vLocal_570[4 /*3*/]));
					}
					else if (func_49())
					{
						iLocal_2251 = 1;
					}
					break;
				case 1:
					__LIB_7__::func_928(16);
					if (!__LIB_7__::func_929(1) && func_52())
					{
						bVar1 = __LIB_7__::func_929(16);
						__LIB_8__::func_168(1, __LIB_8__::func_226(&Local_614, &Local_1617, &iLocal_2082, &iLocal_2105, &bVar1, &iLocal_194));
						__LIB_8__::func_168(16, bVar1);
						if (__LIB_7__::func_929(1))
						{
							iLocal_194 = 0;
						}
					}
					if (!__LIB_7__::func_929(131072))
					{
						if (__LIB_7__::func_923(256))
						{
							if (__LIB_8__::func_169())
							{
								__LIB_7__::func_931(__LIB_7__::func_930(), 10f, 1);
								if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[21]))
								{
									iLocal_75[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1336.432f, -204.9798f, 102.1644f, 0f, 0f, 25.28583f, 5.635887f, 71.55907f, 4.877145f, "EA LCMP - volTrain");
									POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[21], 10208, 0, 0, -1, -1, 0);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2105[1]))
								{
									iLocal_2105[1] = VEHICLE::_CREATE_MISSION_TRAIN(-1901305252, __LIB_7__::func_930(), false, false, true, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2105[1], false, false))
								{
									VEHICLE::SET_TRAIN_SPEED(iLocal_2105[1], 0f);
									VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_2105[1], 0f);
									VEHICLE::_0x3660BCAB3A6BB734(iLocal_2105[1]);
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2105[1], false);
									VEHICLE::_0xA72B1BF3857B94D7(iLocal_2105[1], 1);
									__LIB_7__::func_932(131072);
								}
							}
						}
						else
						{
							__LIB_7__::func_932(131072);
						}
					}
					if (!__LIB_7__::func_929(2) && func_52())
					{
						if (!__LIB_7__::func_924(&Local_1617, 32))
						{
							bVar2 = __LIB_7__::func_929(16);
							__LIB_8__::func_168(2, func_60(&bVar2, &iLocal_194, 0, __LIB_0__::func_55((iLocal_98 == 3 && !__LIB_7__::func_923(262144)), 0, -1)));
							__LIB_8__::func_168(16, bVar2);
							if (__LIB_7__::func_929(2))
							{
								iLocal_194 = 0;
							}
						}
						else
						{
							__LIB_7__::func_932(2);
						}
					}
					if (!__LIB_7__::func_929(4) && !__LIB_7__::func_929(16))
					{
						if (!__LIB_7__::func_924(&Local_1617, 32))
						{
							__LIB_2__::func_935(Local_1617.f_138, 0, 0, 0, 0, 0);
							__LIB_7__::func_932(16);
							__LIB_8__::func_168(4, __LIB_8__::func_123(Local_1617.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1617.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1617.f_138), 146, true);
							}
						}
						else
						{
							__LIB_7__::func_932(4);
						}
					}
					if (!__LIB_7__::func_929(8))
					{
						if (!__LIB_7__::func_924(&Local_1617, 32) && !__LIB_7__::func_924(&Local_1617, 2))
						{
							if (__LIB_8__::func_128(&Local_614) && __LIB_3__::func_400(__LIB_1__::func_977(), &Local_1768, 0, 0, 0, -1, 1))
							{
								if (!__LIB_7__::func_924(&Local_1617, 32) && __LIB_7__::func_923(64))
								{
									__LIB_0__::func_928(&(Local_1617.f_35), iLocal_2082[0], "LOGGING_VICTIM", 0);
									iVar3 = 0 + 810;
									iVar4 = __LIB_2__::func_963(iVar3);
									__LIB_0__::func_928(&(Local_1617.f_35), iVar4, "LOGGING_WORKER", 0);
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
						if (__LIB_7__::func_923(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_2082[5]))
						{
							__LIB_8__::func_323(&(uLocal_72[1]), &(iLocal_2082[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, 0, 0, 0);
						}
						if (__LIB_7__::func_923(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_2082[4]))
						{
							__LIB_8__::func_323(&(uLocal_72[0]), &(iLocal_2082[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, 0, iLocal_204, 0);
							if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
							{
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 1, true);
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 2, true);
								__LIB_7__::func_934(128);
							}
						}
						__LIB_7__::func_932(524288);
					}
					__LIB_8__::func_170(Local_1617.f_136, 1);
					if (((((((((!CAM::IS_SCREEN_FADED_OUT() && __LIB_7__::func_929(1)) && __LIB_7__::func_929(2)) && __LIB_7__::func_929(4)) && __LIB_7__::func_929(8)) && __LIB_7__::func_929(131072)) && __LIB_7__::func_929(524288)) && func_73()) && __LIB_8__::func_171()) || __LIB_7__::func_924(&Local_1617, 32))
					{
						if (!__LIB_7__::func_924(&Local_1617, 32) && (__LIB_7__::func_923(128) || !func_75()))
						{
							__LIB_0__::func_928(&(Local_1617.f_35), Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&(Local_1617.f_35), __LIB_2__::func_963(Local_1617.f_138), "EA_LCMP_Foreman", 0);
							func_76();
						}
						else
						{
							__LIB_0__::func_928(&(Local_1617.f_35), Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&(Local_1617.f_35), __LIB_2__::func_963(Local_1617.f_138), "EA_LCMP_Foreman", 0);
							__LIB_8__::func_124(Local_1617.f_138, 1);
							__LIB_2__::func_451(&(Local_211[0 /*21*/]), 0);
						}
						func_79();
						iLocal_2251 = 2;
					}
					break;
				case 2:
					if (__LIB_7__::func_924(&Local_1617, 128) && __LIB_7__::func_935(Local_1617.f_136, __LIB_7__::func_923(128)))
					{
						__LIB_8__::func_310(0);
						__LIB_8__::func_132(&Local_1617, 128);
					}
					__LIB_8__::func_252();
					if (!__LIB_7__::func_923(16777216))
					{
						__LIB_8__::func_167(16777216, __LIB_18__::func_72(&Local_1617, &Local_614));
					}
					if (!__LIB_7__::func_924(&Local_1617, 32))
					{
						if (__LIB_8__::func_234(iLocal_206, &Local_1617, 5))
						{
							func_85();
							func_86();
						}
						if (!__LIB_7__::func_924(&Local_1617, 2))
						{
							__LIB_8__::func_116(&uLocal_1923, &uLocal_1985, &Local_1617, 808, 833, &iLocal_190, &iLocal_206, 10, -1082130432 /* Float: -1f */, 1);
							__LIB_7__::func_936(&uLocal_1923);
							__LIB_7__::func_936(&iLocal_2082);
							__LIB_7__::func_936(&iLocal_2108);
							func_89();
							__LIB_8__::func_243();
							if ((!__LIB_7__::func_924(&Local_1617, 32) && !__LIB_7__::func_923(32)) && __LIB_7__::func_923(128))
							{
								__LIB_8__::func_117(&Local_1617, 0, __LIB_8__::func_133(), __LIB_8__::func_134());
								__LIB_8__::func_87();
							}
							if (func_95())
							{
								if (__LIB_7__::func_933(8192))
								{
									TASK::SET_ANIM_RATE(Local_614.f_690[12 /*12*/].f_8, 0f, 0, false);
									TASK::SET_ANIM_RATE(Local_614.f_690[13 /*12*/].f_8, 0f, 0, false);
								}
								__LIB_8__::func_206(&Local_433, &Local_1617, 0);
								__LIB_8__::func_129(&Local_1617);
								__LIB_8__::func_83(Local_1617.f_136, 16384);
								__LIB_0__::func_325(&iLocal_2016);
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
									__LIB_8__::func_131(&Local_1617, 4096);
									__LIB_8__::func_131(&Local_1617, 16384);
								}
								else
								{
									__LIB_8__::func_82(Local_1617.f_136, 1024);
								}
								func_105();
								func_106();
								__LIB_7__::func_937();
								func_108(1);
								iVar6 = 0;
								while (iVar6 < 3)
								{
									__LIB_2__::func_480(&(Local_275[iVar6 /*52*/]), 1, 1, 1, 0);
									iVar6++;
								}
								__LIB_2__::func_461(0);
								__LIB_0__::func_172(iLocal_75[1]);
								__LIB_7__::func_938();
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_2108[0]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2108[0], false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[23 /*12*/].f_8))
								{
									ENTITY::DETACH_ENTITY(Local_614.f_690[23 /*12*/].f_8, false, true);
								}
								__LIB_3__::func_334(&uLocal_2092);
								__LIB_3__::func_334(&uLocal_2119);
								__LIB_3__::func_334(&uLocal_2102);
								__LIB_8__::func_244(Local_1617.f_136, 3);
								__LIB_8__::func_207(&Local_1617);
								iLocal_2253 = 4;
								iVar7 = __LIB_0__::func_55(!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1617.f_138)), 1, 0);
								if (!__LIB_7__::func_924(&Local_1617, 4096))
								{
									__LIB_2__::func_478(__LIB_2__::func_963(Local_1617.f_138), Global_35, "LOG_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
									iVar8 = __LIB_7__::func_940(&Local_1617, Local_1617.f_28);
								}
								__LIB_8__::func_131(&Local_1617, 2);
								func_119();
								if (!__LIB_7__::func_923(1024))
								{
									__LIB_8__::func_172(&Local_1617, __LIB_2__::func_963(Local_1617.f_138), &(uLocal_2102[0]), 0, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0);
								}
								if (!(__LIB_7__::func_923(32) && __LIB_7__::func_923(1024)))
								{
									iLocal_2253 = __LIB_0__::func_55(iLocal_2253 > iVar7, (iLocal_2253 - iVar7), 0);
									iVar7 = __LIB_18__::func_76(&Local_1617, &iLocal_2082, &uLocal_2092, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar5, iLocal_2253, 0, 0, 0, iVar8, 1051260355 /* Float: 0.33f */);
									iLocal_2253 = __LIB_0__::func_55(iLocal_2253 > iVar7, (iLocal_2253 - iVar7), 0);
								}
								iLocal_2253 = __LIB_0__::func_55(iLocal_2253 > iVar7, (iLocal_2253 - iVar7), 0);
								__LIB_7__::func_927(iLocal_190, &Local_614);
								iVar7 = func_123(&Local_1617, &uLocal_1923, &uLocal_1954, iLocal_2253, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iLocal_190, iVar5, 0, 0, 0, iVar8, 1051260355 /* Float: 0.33f */);
								iLocal_2253 = __LIB_0__::func_55(iLocal_2253 > iVar7, (iLocal_2253 - iVar7), 0);
								func_33();
								__LIB_8__::func_131(&Local_1617, 128);
							}
						}
						else
						{
							__LIB_8__::func_327(&uLocal_1923, &Local_1617);
							func_125();
							if (__LIB_7__::func_923(1024))
							{
								if (__LIB_18__::func_73(&Local_1617, __LIB_2__::func_963(Local_1617.f_138), &(uLocal_2102[0]), 0))
								{
									if (__LIB_7__::func_923(32))
									{
										if (func_127())
										{
											iVar10 = 0;
											iVar9 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
											iLocal_2253 = __LIB_0__::func_55(iLocal_2253 > iVar10, (iLocal_2253 - iVar10), 0);
											iVar10 = (iVar10 + __LIB_18__::func_76(&Local_1617, &iLocal_2082, &uLocal_2092, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar9, iLocal_2253, 0, 0, 0, __LIB_7__::func_940(&Local_1617, Local_1617.f_28), 1051260355 /* Float: 0.33f */));
											iLocal_2253 = __LIB_0__::func_55(iLocal_2253 > iVar10, (iLocal_2253 - iVar10), 0);
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
								if (func_129())
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
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
									{
										if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_2082[0] || PED::_IS_PED_LASSOED(iLocal_2082[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_2082[0], 3))
										{
											__LIB_1__::func_864(iLocal_2082[0], 0, 0);
										}
									}
								}
								else if (!__LIB_0__::func_163(iLocal_2082[0], 518218985) && !TASK::GET_IS_TASK_ACTIVE(iLocal_2082[0], 3))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2082[0], false);
									PED::_0x89F5E7ADECCCB49C(iLocal_2082[0], "INJURED_LEFT_LEG");
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_2082[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
								}
							}
							if (!__LIB_7__::func_924(&Local_1617, 4) && __LIB_8__::func_236(&Local_1617, &iLocal_2082, &iLocal_2108, &(Local_1617.f_139), 5, __LIB_2__::func_963(Local_1617.f_138)))
							{
								__LIB_8__::func_131(&Local_1617, 4);
							}
						}
						if (!__LIB_7__::func_924(&Local_1617, 2))
						{
							if (__LIB_7__::func_923(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_2082[5]))
							{
								__LIB_8__::func_323(&(uLocal_72[1]), &(iLocal_2082[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, __LIB_7__::func_923(4096), 0, 0);
								if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]))
								{
									PROPSET::_0xD80FAF919A2E56EA(uLocal_72[1], joaat("PG_VEH_LOGWAGON_1"));
									__LIB_7__::func_934(128);
								}
							}
							if (__LIB_7__::func_923(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_2082[4]))
							{
								__LIB_8__::func_323(&(uLocal_72[0]), &(iLocal_2082[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, __LIB_7__::func_923(4096), iLocal_204, 0);
								if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
								{
									__LIB_7__::func_934(128);
								}
							}
						}
					}
					if (!__LIB_7__::func_924(&Local_1617, 2))
					{
						if (!__LIB_7__::func_924(&Local_1617, 32))
						{
							__LIB_8__::func_217(&Local_433);
							if (__LIB_8__::func_88(&Local_433, 1))
							{
								func_135(&Local_1617, &Local_433, &(Local_211[2 /*21*/]), &(Local_275[2 /*52*/]));
							}
							else
							{
								__LIB_8__::func_89(&Local_433, 4);
							}
						}
						if (func_137())
						{
							bLocal_2254 = true;
						}
					}
					else if (!__LIB_7__::func_924(&Local_1617, 32))
					{
						func_138();
					}
					break;
			}
		}
		if (func_139())
		{
			bLocal_2254 = true;
		}
		BUILTIN::WAIT(Local_1617.f_30);
	}
}

bool func_20()
{
	if (((__LIB_7__::func_907(Local_1617.f_136, 524288) || __LIB_7__::func_907(Local_1617.f_136, 2097152)) || __LIB_7__::func_907(Local_1617.f_136, 1048576)) || iLocal_98 > 3)
	{
		return true;
	}
	return false;
}

bool func_28()
{
	float fVar0;
	if (!__LIB_2__::func_117(64))
	{
		return false;
	}
	if (__LIB_7__::func_923(1048576))
	{
		return false;
	}
	if (!__LIB_7__::func_908(Local_1617.f_136, 512))
	{
		if (iLocal_98 == 2 && !__LIB_7__::func_907(Local_1617.f_136, 64))
		{
			if (__LIB_7__::func_907(Local_1617.f_136, 128))
			{
				return true;
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (fVar0 < 1f)
				{
					return true;
				}
			}
		}
		if (iLocal_98 == 1 && __LIB_7__::func_907(Local_1617.f_136, 128))
		{
			return true;
		}
	}
	return false;
}

bool func_29()
{
	if (iLocal_98 == 1 && !__LIB_7__::func_908(Local_1617.f_136, 1024))
	{
		return true;
	}
	return false;
}

void func_33()
{
	__LIB_7__::func_919();
	if (iLocal_98 < 4 && !__LIB_7__::func_923(256))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1498945676, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!__LIB_7__::func_924(&Local_1617, 32))
			{
				if (!__LIB_7__::func_924(&Local_1617, 2))
				{
					iLocal_203 = 1480157862;
					iLocal_204 = -1619191432;
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1480157862, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(638507460, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(529482239, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2061234582, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1619191432, true);
					if (__LIB_7__::func_923(262144))
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1428772759, true);
					}
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1033154098, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2146274232, true);
			break;
		case 2:
			if (!__LIB_7__::func_924(&Local_1617, 32))
			{
				if (!__LIB_7__::func_924(&Local_1617, 2))
				{
					iLocal_203 = 1254150069;
					iLocal_204 = 378017637;
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1254150069, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-614511582, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1668640329, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(378017637, true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-92203186, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1850986699, true);
			break;
		case 3:
			if (!__LIB_7__::func_924(&Local_1617, 32))
			{
				if (!__LIB_7__::func_924(&Local_1617, 2))
				{
					if (__LIB_7__::func_923(262144))
					{
						iLocal_203 = 874422897;
						iLocal_204 = 1663347996;
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(874422897, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-419045977, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-508527824, true);
					}
					else
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2077381882, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-681889807, true);
						iLocal_203 = 2077381882;
						iLocal_204 = 1663347996;
					}
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(223107846, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-595414142, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-465906603, true);
			break;
		case 4:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1712141152, true);
			break;
		case 5:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1887892244, true);
			break;
	}
	TASK::_0x9C8F42A5D1859DC1(Global_1392194[Local_1617.f_136 /*10*/].f_5);
}

void func_34()
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_98)
	{
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 16;
			break;
		case 3:
			iVar0 = 22;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (__LIB_7__::func_924(&Local_1617, 32))
	{
		iVar0 = 0;
	}
	iVar2 = 814;
	while (iVar2 <= 833)
	{
		if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)))
		{
			if (iVar1 >= iVar0)
			{
				__LIB_0__::func_123(iVar2, 32);
				__LIB_8__::func_91(iVar2);
			}
			else
			{
				__LIB_0__::func_121(iVar2, 32);
				if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)))
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iVar2));
				}
			}
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 810;
	while (iVar2 <= 813)
	{
		if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)))
		{
			if (iLocal_98 >= 4 || __LIB_7__::func_924(&Local_1617, 32))
			{
				__LIB_0__::func_123(iVar2, 32);
				__LIB_8__::func_91(iVar2);
			}
			else
			{
				__LIB_0__::func_121(iVar2, 32);
				if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)))
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iVar2));
				}
			}
		}
		iVar2++;
	}
	iVar2 = 808;
	while (iVar2 <= 809)
	{
		if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)))
		{
			if (iLocal_98 >= 4 || __LIB_7__::func_924(&Local_1617, 32))
			{
				__LIB_0__::func_123(iVar2, 32);
				__LIB_8__::func_91(iVar2);
			}
			else
			{
				__LIB_0__::func_121(iVar2, 32);
				if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)))
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iVar2));
				}
			}
		}
		iVar2++;
	}
	func_86();
}

void func_36()
{
	if (__LIB_7__::func_924(&Local_1617, 32))
	{
		iLocal_75[0] = VOLUME::_CREATE_VOLUME_BOX(-1398.447f, -246.3103f, 99.12786f, 0f, 0f, 0f, 5.212102f, 3.640974f, 2.867354f);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[0], 2304, 0, 0, -1, -1, 0);
	}
	else if (iLocal_98 == 2 || iLocal_98 == 3)
	{
		iLocal_75[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Appleseed - volHorseCorral");
		VOLUME::_0x39816F6F94F385AD(iLocal_75[5], -1421.619f, -210.3775f, 102.9679f, 0f, 0f, -5.245227f, 18.54972f, 14.82578f, 5.569002f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_75[5], -1412.1f, -211.0359f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 6.617523f, 2.783914f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_75[5], -1430.657f, -209.2033f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 7.686718f, 2.783914f);
		iLocal_75[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1416.509f, -217.112f, 102.5954f, 0f, 0f, 0f, 7.971181f, 2.465843f, 4.154411f, "Appleseed - volCorralDoors");
		POPULATION::_0xB56D41A694E42E86(iLocal_75[11], 256, 0, joaat("SPECIES_HORSE"), -1, -1, 2);
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
	if (__LIB_7__::func_924(&Local_1617, 32) && !(iLocal_98 == 4 && !__LIB_7__::func_923(262144)))
	{
		__LIB_7__::func_950(&Local_614);
		return 1;
	}
	else
	{
		func_85();
	}
	switch (iLocal_98)
	{
		case 1:
			Local_614 = 5;
			__LIB_8__::func_174(&Local_614);
			break;
		case 2:
			Local_614 = 5;
			__LIB_8__::func_237(&Local_614);
			iLocal_14 += 2;
			break;
		case 3:
			__LIB_0__::func_11();
			Local_614 = 5;
			__LIB_8__::func_300(&Local_614, __LIB_7__::func_908(Local_1617.f_136, 2048));
			break;
		case 4:
		case 5:
			break;
	}
	if (!__LIB_7__::func_924(&Local_1617, 32))
	{
		if (iLocal_98 < 4)
		{
			func_180();
			func_181();
			func_182();
		}
		if (__LIB_7__::func_923(16384))
		{
			Local_614.f_369[0 /*32*/].f_1 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
			Local_614.f_369[0 /*32*/] = 28;
			Local_614.f_369[0 /*32*/].f_6 = { -1403.857f, -226.9338f, 100.4594f };
			Local_614.f_369[0 /*32*/].f_9 = -83.35f;
		}
	}
	return 1;
}

bool func_38()
{
	if (iLocal_605 <= 0)
	{
		return false;
	}
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1617.f_136, 4))
	{
		return true;
	}
	if (!__LIB_2__::func_117(64))
	{
		return false;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1617.f_136, 128)))
	{
		return false;
	}
	return true;
}

void func_44()
{
	int iVar0;
	int iVar1;
	switch (iLocal_189)
	{
		case 0:
			func_202();
			if (__LIB_7__::func_923(128))
			{
				__LIB_0__::func_769();
			}
			if (__LIB_7__::func_924(&Local_1617, 16384))
			{
				if (!__LIB_7__::func_924(&Local_1617, 32768))
				{
					__LIB_8__::func_176(Local_1617.f_136);
				}
				else
				{
					__LIB_8__::func_82(Local_1617.f_136, 1024);
				}
			}
			if (__LIB_7__::func_907(Local_1617.f_136, 128))
			{
				iVar0 = __LIB_2__::func_963(Local_1617.f_138);
				__LIB_7__::func_951(&iVar0);
			}
			__LIB_8__::func_206(&Local_433, &Local_1617, 0);
			__LIB_8__::func_93(Local_1617.f_136, 1073741824 /* Float: 2f */);
			__LIB_8__::func_93(Local_1617.f_136, 536870912);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			break;
		case 1:
			if (__LIB_0__::func_6(iLocal_154) && !((__LIB_1__::func_241(iLocal_154) || __LIB_1__::func_25(iLocal_154, 1)) || __LIB_8__::func_125(iLocal_154)))
			{
				__LIB_1__::func_559(iLocal_154, 0, 2);
			}
			if ((__LIB_7__::func_908(Local_1617.f_136, 16384) && ENTITY::DOES_ENTITY_EXIST(iLocal_2105[0])) && (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_IN_VEHICLE(Global_35, iLocal_2105[0], false)))
			{
				__LIB_8__::func_83(Local_1617.f_136, 16384);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1913))
			{
				if (PATHFIND::_0xDE0EA444735C1368(iLocal_1913))
				{
					PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1913);
				}
				VOLUME::_DELETE_VOLUME(iLocal_1913);
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
			func_212();
			func_213(1);
			func_214(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[5]) && !__LIB_1__::func_205(iLocal_2082[5], Global_1392194[Local_1617.f_136 /*10*/].f_5, 1, 0))
			{
				uLocal_2182[0] = iLocal_2082[5];
			}
			VEHICLE::_0x8379E05871AD24E0();
			if (__LIB_7__::func_908(Local_1617.f_136, 256) && !__LIB_7__::func_908(Local_1617.f_136, 32))
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
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[Local_1617.f_136 /*10*/].f_5))
			{
				iVar1 = 0;
				while (iVar1 < iLocal_2082)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[iVar1]))
					{
						if (__LIB_1__::func_205(iLocal_2082[iVar1], Global_1392194[Local_1617.f_136 /*10*/].f_5, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2082[iVar1]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2082[iVar1], true, false);
							}
							PED::DELETE_PED(&(iLocal_2082[iVar1]));
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2082[iVar1], false);
							PED::SET_PED_KEEP_TASK(iLocal_2082[iVar1], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2082[iVar1]));
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
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_492[iVar1 /*7*/]))
				{
					__LIB_7__::func_952(&(Local_492[iVar1 /*7*/]));
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 12)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1768[iVar1 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_1768[iVar1 /*12*/].f_8));
				}
				iVar1++;
			}
			break;
		case 4:
			__LIB_8__::func_258();
			func_108(1);
			__LIB_7__::func_919();
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[Local_1617.f_136 /*10*/].f_5))
			{
				if (!__LIB_7__::func_924(&Local_1617, 4) && !__LIB_7__::func_924(&Local_1617, 32))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[0]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[0], Global_1392194[Local_1617.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[0]));
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[1]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[1], Global_1392194[Local_1617.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[1]));
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2105[iVar1]))
					{
						if (iVar1 == 1)
						{
							VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_2105[iVar1]));
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_2105[iVar1], Global_1392194[Local_1617.f_136 /*10*/].f_5, true, 0))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2105[iVar1]));
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			__LIB_8__::func_82(Local_1617.f_136, 1073741824 /* Float: 2f */);
			__LIB_8__::func_339(Local_1617.f_136, &Local_614, &Local_1617);
			__LIB_8__::func_136(&Local_614);
			HUD::_TEXT_DATABASE_DELETE(__LIB_7__::func_953());
			HUD::_TEXT_DATABASE_DELETE(__LIB_7__::func_954());
			break;
		default:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	iLocal_189++;
}

void func_46()
{
	__LIB_8__::func_168(65536, __LIB_1__::func_205(Global_35, Global_1392194[Local_1617.f_136 /*10*/].f_6, 1, 0));
}

bool func_49()
{
	if (__LIB_1__::func_313(&(vLocal_570[4 /*3*/]), 30f))
	{
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	switch (iLocal_2252)
	{
		case 0:
			__LIB_3__::func_284(&(Local_614.f_15));
			__LIB_3__::func_284(&(Local_614.f_369));
			__LIB_3__::func_187(&(Local_15[0 /*28*/].f_11));
			__LIB_3__::func_187(&(Local_15[1 /*28*/].f_11));
			if (__LIB_7__::func_923(128) && iLocal_98 == 3)
			{
				__LIB_3__::func_284(&(Local_614.f_369));
			}
			func_227();
			func_228();
			__LIB_3__::func_314(&(Local_614.f_690));
			__LIB_3__::func_314(&Local_1768);
			func_230();
			__LIB_3__::func_284(&(Local_614.f_304));
			if (__LIB_7__::func_923(256))
			{
				__LIB_4__::func_434(-1901305252);
			}
			func_232();
			HUD::_TEXT_DATABASE_REQUEST(__LIB_7__::func_953());
			HUD::_TEXT_DATABASE_REQUEST(__LIB_7__::func_954());
			if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
			{
				__LIB_8__::func_177();
			}
			iLocal_2252 = 1;
			break;
		case 1:
			if (!func_52())
			{
			}
			if (!__LIB_8__::func_86())
			{
			}
			if (!__LIB_8__::func_169())
			{
			}
			if (!func_234())
			{
			}
			if (!func_73())
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

bool func_52()
{
	if (!__LIB_3__::func_366(&(Local_614.f_15)) || !__LIB_3__::func_366(&(Local_614.f_369)))
	{
		return false;
	}
	if (!__LIB_3__::func_366(&(Local_614.f_304)))
	{
		return false;
	}
	return true;
}

bool func_60(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	if (*bParam0)
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Local_614.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (PED::_0x5C16855277819BBF() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if (Local_614.f_369[*iParam1 /*32*/].f_1 != 0)
			{
				if (iLocal_98 != 3 || __LIB_7__::func_923(262144))
				{
					iLocal_2108[*iParam1] = __LIB_3__::func_403(Local_614.f_369[*iParam1 /*32*/].f_1, &(Local_614.f_369[*iParam1 /*32*/]), Local_614.f_369[*iParam1 /*32*/].f_6, Local_614.f_369[*iParam1 /*32*/].f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					DECORATOR::DECOR_SET_BOOL(iLocal_2108[*iParam1], "bNoticePlayer", false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2108[*iParam1], true);
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

bool func_73()
{
	if (!__LIB_3__::func_315(&uLocal_2017))
	{
		return false;
	}
	if (!func_259())
	{
		return false;
	}
	return true;
}

bool func_75()
{
	if (__LIB_7__::func_923(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (__LIB_7__::func_908(Local_1617.f_136, 256) && !__LIB_7__::func_907(Local_1617.f_136, 128))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_76()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_963(Local_1617.f_138);
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
			if (!__LIB_7__::func_907(Local_1617.f_136, 128))
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
			if (!__LIB_7__::func_907(Local_1617.f_136, 128))
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
			if (!__LIB_7__::func_907(Local_1617.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (__LIB_7__::func_908(Local_1617.f_136, 256) || __LIB_7__::func_908(Local_1617.f_136, 262144))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, __LIB_7__::func_958(), 1.5f, 0, false, false, false, false);
					}
					else
					{
						func_265(iVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, 1073741824 /* Float: 2f */);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1617.f_138)))
			{
			}
			break;
		case 4:
		case 5:
			break;
	}
}

int func_79()
{
	int iVar0;
	__LIB_0__::func_11();
	if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1617.f_136, 128))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
		{
			__LIB_2__::func_231(iLocal_2082[0], __LIB_3__::func_672(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_2082[0], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[0], 146, false);
			__LIB_2__::func_133(iLocal_2082[0], __LIB_7__::func_959(Local_1617.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_2082[0], "HAS_VOICE", true);
			__LIB_2__::func_56(iLocal_2082[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[1]))
		{
			__LIB_2__::func_231(iLocal_2082[1], __LIB_3__::func_672(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_2082[1], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[1], 146, false);
			__LIB_2__::func_133(iLocal_2082[1], __LIB_7__::func_959(Local_1617.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_2082[1], "HAS_VOICE", true);
			__LIB_2__::func_56(iLocal_2082[1], 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2082[2]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2082[2], 1);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_2082[2], true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2082[3]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2082[3], 1);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_2082[3], true);
		}
	}
	else
	{
		if (__LIB_7__::func_923(64))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1388.626f, -234.6199f, 98.7432f, 1f, -1, 0.25f, 0, 9.6661f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1398.8f, -214.8f, 101.4f, 1f, -1, 0.25f, 0, 15.6f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1400.4f, -209.6f, 102f, 1f, -1, 0.25f, 0, 148.8f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -1400.871f, -210.4877f, 101.0936f, 2f, -1, false, false, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_2082[0], iLocal_196);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
				PED::SET_PED_CONFIG_FLAG(iLocal_2082[0], 146, false);
				__LIB_2__::func_56(iLocal_2082[0], 1, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[0], __LIB_8__::func_179(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[0], 146, false);
			__LIB_2__::func_56(iLocal_2082[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[1]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[1], __LIB_8__::func_179(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[1], 146, false);
			__LIB_2__::func_56(iLocal_2082[1], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[2]))
		{
			if (!__LIB_7__::func_923(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[2], __LIB_8__::func_179(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_2082[2], 146, false);
				__LIB_2__::func_56(iLocal_2082[2], 1, 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[3]))
		{
			if (!__LIB_7__::func_923(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[3], __LIB_8__::func_179(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_2082[3], 146, false);
				__LIB_2__::func_56(iLocal_2082[3], 1, 1);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[4]))
	{
		__LIB_2__::func_56(iLocal_2082[4], 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[5]))
	{
		__LIB_2__::func_56(iLocal_2082[5], 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < Local_614)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_2082[iVar0], 7, 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_614.f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2108[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_2108[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_2108[iVar0], 7, 0, 1);
		}
		iVar0++;
	}
	__LIB_1__::func_148(&(vLocal_570[0 /*3*/]));
	return 1;
}

void func_85()
{
	bool bVar0;
	char* sVar1[4];
	int iVar6[4];
	int iVar11;
	Local_2147.f_24 = 0;
	Local_2147.f_23 = 0;
	Local_2147.f_17 = 0;
	__LIB_1__::func_336(&(Local_2147.f_34), 1);
	if (!__LIB_7__::func_923(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((__LIB_7__::func_923(128) && !__LIB_7__::func_923(2)) && !__LIB_7__::func_907(Local_1617.f_136, 4))
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
				if (__LIB_7__::func_924(&Local_1617, 256))
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
				if (__LIB_7__::func_907(Local_1617.f_136, 64))
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
					if (__LIB_7__::func_924(&Local_1617, 256))
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
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					if (__LIB_7__::func_908(Local_1617.f_136, 8))
					{
						if (__LIB_1__::func_149(1) > 0)
						{
							sVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01CH";
						}
						if (__LIB_7__::func_924(&Local_1617, 256))
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
					else if (__LIB_7__::func_908(Local_1617.f_136, 32))
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
					else if (__LIB_7__::func_908(Local_1617.f_136, 256))
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
						if (__LIB_7__::func_924(&Local_1617, 256))
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
				else if (__LIB_7__::func_908(Local_1617.f_136, 8))
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
	Local_2147.f_33 = 15f;
	__LIB_8__::func_95(&sVar1, &iVar6, &Local_2147, bVar0);
}

void func_86()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	if (__LIB_7__::func_924(&Local_1617, 256))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Shelter";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman_Shelter";
	}
	else if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Stalled";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	else
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	iVar2 = 810;
	while (iVar2 <= 833)
	{
		if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)) && !MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(__LIB_0__::func_118(iVar2)), sVar0))
		{
			PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(iVar2), sVar0);
			iVar3 = __LIB_2__::func_963(iVar2);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar3, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar3))
			{
				TASK::TASK_PERSISTENT_CHARACTER(iVar3);
			}
		}
		iVar2++;
	}
	iVar2 = Local_1617.f_138;
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)) && !MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(__LIB_0__::func_118(iVar2)), sVar0))
	{
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(iVar2), sVar1);
	}
}

void func_89()
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	if ((iLocal_206 % 10) == 0 && iLocal_612 < 4)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_75[5]))
		{
			iVar5 = __LIB_8__::func_363(&uVar0, &uLocal_2182, 4, iLocal_75[5], 0, 0, 0, joaat("DOMESTIC_DRAFT_HORSE"), 1, 0, 1, 0);
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if ((((!__LIB_1__::func_248(uVar0[iVar6], &uLocal_607) && PED::_GET_LAST_MOUNT(Global_35) != uVar0[iVar6]) && __LIB_0__::func_398(0) != uVar0[iVar6]) && __LIB_0__::func_398(1) != uVar0[iVar6]) && !__LIB_8__::func_137(uVar0[iVar6]))
				{
					uLocal_607[iLocal_612] = uVar0[iVar6];
					iLocal_612++;
					if (iLocal_612 >= 4)
					{
					}
					else
					{
						iVar6++;
					}
					iVar7 = (iLocal_206 % 4);
					if (iVar7 < 4 && !ENTITY::IS_ENTITY_DEAD(uLocal_607[iVar7]))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_607[iVar7]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_607[iVar7], true, false);
						}
						__LIB_3__::func_442(uLocal_607[iVar7], iLocal_75[5], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_607[iVar7], 45, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_607[iVar7], 51, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_607[iVar7], 71, false);
						__LIB_2__::func_20(&Local_1617, uLocal_607[iVar7], 0);
						if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(uLocal_607[iVar7], false)))
						{
							if (!__LIB_0__::func_163(uLocal_607[iVar7], 1351865802))
							{
								if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(1368197280))
								{
									TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uLocal_607[iVar7], 1368197280, 0, 0, 1);
								}
							}
						}
						else if (__LIB_0__::func_163(uLocal_607[iVar7], 1435919172))
						{
							TASK::CLEAR_PED_TASKS(uLocal_607[iVar7], true, false);
						}
					}
				}
			}
		}
	}
}

int func_95()
{
	int iVar0;
	int iVar1;
	if (__LIB_7__::func_929(16384))
	{
		return 0;
	}
	iVar0 = iLocal_209;
	if ((((__LIB_8__::func_88(&Local_433, 2) || func_292(&Local_1617, &(Local_1617.f_28))) || func_293()) || func_294()) || __LIB_8__::func_259(__LIB_2__::func_963(Local_1617.f_138), 0, &Local_1617, &(Local_1617.f_28), 0, 0))
	{
		if (__LIB_8__::func_88(&Local_433, 2))
		{
		}
		else if (Local_1617.f_28 == 65536)
		{
			__LIB_2__::func_571(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		else if (Local_1617.f_28 == 32)
		{
			return func_297();
		}
		else if (Local_1617.f_28 == 8192 && __LIB_8__::func_230())
		{
			__LIB_2__::func_571(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		if (__LIB_7__::func_960(&(Local_1617.f_28)) && !__LIB_7__::func_933(67108864))
		{
			if (!__LIB_8__::func_88(&Local_433, 1))
			{
				Local_433 = __LIB_2__::func_963(Local_1617.f_138);
				__LIB_18__::func_81(&Local_433, &Local_1617, Local_1617.f_28, 55630, 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_182(&Local_433, 0)))
				{
					StringCopy(&(Local_433.f_20[0 /*4*/]), __LIB_8__::func_182(&Local_433, 0), 32);
					StringCopy(&(Local_433.f_20[1 /*4*/]), __LIB_8__::func_182(&Local_433, 1), 32);
					__LIB_7__::func_961(&Local_433, 32);
				}
			}
			else if (Local_433.f_13 > 2)
			{
				__LIB_7__::func_961(&Local_433, 512);
			}
			__LIB_2__::func_571(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		return 1;
	}
	else if (((__LIB_8__::func_324(&uLocal_1923, &Local_1617, &(Local_1617.f_28), &iLocal_209, 0, (iLocal_190 - 1), 4) || __LIB_8__::func_324(&iLocal_2082, &Local_1617, &(Local_1617.f_28), &uLocal_207, 0, (Local_614 - 1), 1)) || __LIB_8__::func_324(&iLocal_2108, &Local_1617, &(Local_1617.f_28), &uLocal_208, 0, __LIB_0__::func_55(__LIB_7__::func_923(16384), Local_614.f_1 + 1, (Local_614.f_1 - 1)), 1)) || __LIB_8__::func_324(&uLocal_607, &Local_1617, &(Local_1617.f_28), &uLocal_613, 0, (iLocal_612 - 1), 3))
	{
		if (__LIB_7__::func_933(131072))
		{
			if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_2082[0] || PED::_IS_PED_LASSOED(iLocal_2082[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_2082[0], 3))
			{
				__LIB_1__::func_864(iLocal_2082[0], 0, 0);
			}
		}
		if (__LIB_7__::func_960(&(Local_1617.f_28)))
		{
			if (Local_1617.f_28 == 8192 && __LIB_8__::func_230())
			{
				return 0;
			}
			if (!__LIB_8__::func_88(&Local_433, 1) && !__LIB_7__::func_923(32))
			{
				if (Local_1617.f_28 == 8 && func_304())
				{
					return 1;
				}
				if (__LIB_7__::func_923(64) && Local_1617.f_10 == iLocal_2082[0])
				{
					if (Local_1617.f_28 != 65536)
					{
						__LIB_18__::func_81(&Local_433, &Local_1617, Local_1617.f_28, 55630, 0, 0);
						__LIB_7__::func_961(&Local_433, 64);
						StringCopy(&(Local_433.f_20[0 /*4*/]), "LCMPF_IG_TFAIM", 32);
						__LIB_7__::func_961(&Local_433, 32);
					}
				}
				else
				{
					__LIB_18__::func_81(&Local_433, &Local_1617, Local_1617.f_28, 55630, 0, 0);
				}
			}
			__LIB_2__::func_571(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		else if (Local_1617.f_28 == 32)
		{
			return func_297();
		}
		return 1;
	}
	else if (__LIB_18__::func_82(&Local_1617, &Local_433, 55630))
	{
		if (!__LIB_8__::func_88(&Local_433, 1))
		{
			__LIB_18__::func_81(&Local_433, &Local_1617, 1024, 55630, 0, 0);
			if (Local_433 == __LIB_2__::func_963(Local_1617.f_138) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_182(&Local_433, 0)))
			{
				StringCopy(&(Local_433.f_20[0 /*4*/]), __LIB_8__::func_182(&Local_433, 0), 32);
				StringCopy(&(Local_433.f_20[1 /*4*/]), __LIB_8__::func_182(&Local_433, 1), 32);
				__LIB_7__::func_961(&Local_433, 32);
			}
			__LIB_2__::func_571(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		else
		{
			__LIB_7__::func_961(&Local_433, 512);
		}
	}
	else if (func_306())
	{
		Local_1617.f_28 = 2;
		return 1;
	}
	iVar1 = __LIB_0__::func_259(iVar0 + 4, (iLocal_190 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (uLocal_1985[iVar0] < Local_1617.f_19 && __LIB_7__::func_962(uLocal_1923[iVar0], &Local_1617, 0, uLocal_1985[iVar0]))
		{
			__LIB_1__::func_148(&(vLocal_570[6 /*3*/]));
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (__LIB_1__::func_313(&(vLocal_570[6 /*3*/]), 10f))
	{
		__LIB_7__::func_898(&Local_1617, &(Local_1617.f_28));
	}
	return 0;
}

void func_105()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = __LIB_8__::func_138(iVar0);
		switch (iVar1)
		{
			case 2:
			case 9:
			case 10:
				break;
			case 0:
			case 1:
				if (__LIB_7__::func_923(262144) && !func_333())
				{
					__LIB_7__::func_952(&(Local_492[iVar0 /*7*/]));
				}
				break;
			case 6:
				if (__LIB_7__::func_963(&(Local_492[6 /*7*/])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[14 /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(Local_614.f_690[14 /*12*/].f_8);
					__LIB_8__::func_183(&(Local_492[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "PED1");
					__LIB_8__::func_183(&(Local_492[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), "PED2");
					__LIB_7__::func_952(&(Local_492[6 /*7*/]));
				}
				break;
			default:
				__LIB_7__::func_952(&(Local_492[iVar0 /*7*/]));
				break;
		}
		iVar0++;
	}
}

void func_106()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2108[0]))
	{
		func_337(&(iLocal_2108[0]));
		PED::SET_PED_CONFIG_FLAG(iLocal_2108[0], 136, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_2108[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
}

void func_108(bool bParam0)
{
	if (__LIB_7__::func_933(512) || bParam0)
	{
		if (__LIB_2__::func_1(iLocal_606, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_606, 136, false);
			__LIB_2__::func_145(iLocal_606, 0);
		}
		__LIB_7__::func_965(512);
	}
}

void func_119()
{
	if (__LIB_7__::func_923(64))
	{
		func_347();
	}
	func_348(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && __LIB_7__::func_923(262144)))
	{
		__LIB_7__::func_908(1, 2);
		func_349();
	}
	if (iLocal_98 == 3)
	{
		func_350();
	}
}

int func_123(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (iParam5 > 0)
	{
		PED::_0xF008E0BA1FE1D644(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || __LIB_7__::func_924(iParam0, 4096));
	if (iParam0->f_136 == 1)
	{
		__LIB_7__::func_949(&iVar4, &iVar5, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!__LIB_0__::func_29(iVar3))
		{
		}
		else if (iVar3 == iParam0->f_138)
		{
		}
		else if (__LIB_0__::func_117(iVar3, 32))
		{
		}
		else
		{
			iVar6 = __LIB_2__::func_963(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar6) && !__LIB_1__::func_248(iVar6, &(iParam0->f_140)))
			{
				(*uParam1)[iVar0] = iVar6;
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(iVar6, 146, false);
				PED::SET_PED_CONFIG_FLAG(iVar6, 246, true);
				PED::SET_PED_CONFIG_FLAG(iVar6, 178, true);
				PED::SET_PED_CAN_BE_TARGETTED(iVar6, true);
				__LIB_8__::func_123(iVar3, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iVar6, 277, false);
				PED::_0xFC3DB99C8144CD81(iVar6, Global_1392194[iParam0->f_136 /*10*/].f_5, 0, false, 0);
				if ((__LIB_8__::func_185(iVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					PED::_0x802092B07E3B1EEA(iVar6, Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, joaat("REL_PLAYER_ENEMY"));
					__LIB_2__::func_73(iVar6, uParam2[iVar0], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 31, true);
					if (__LIB_7__::func_966(iVar6))
					{
						iVar7 = __LIB_7__::func_967(iVar6);
					}
					if (PED::IS_PED_HUMAN(iVar6))
					{
						if (__LIB_7__::func_969(&iVar6, iVar7, (bParam9 || bParam8)))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (__LIB_0__::func_154(iVar7))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar6, iVar7, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (__LIB_0__::func_154(iVar7))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					if (PED::IS_PED_HUMAN(iVar6) && !__LIB_7__::func_966(iVar6))
					{
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iVar1++;
				}
				else
				{
					PED::_0xEEED8FAFEC331A70(iVar6, Global_36, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, joaat("REL_PLAYER_DISLIKE"));
					if ((bParam7 || __LIB_2__::func_118(iVar6, 1, 1) < 15f) || __LIB_1__::func_985())
					{
						TASK::CLEAR_PED_TASKS(iVar6, true, false);
						PED::SET_PED_CONFIG_FLAG(iVar6, 178, false);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar6, true);
						__LIB_7__::func_970(&iVar6, iParam10, fParam11);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
						TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 1500, 0, 1, 1);
						TASK::TASK_COWER(0, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						DECORATOR::DECOR_SET_BOOL(iVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

void func_125()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_205)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_1617.f_140[iVar0]) && !__LIB_0__::func_163(Local_1617.f_140[iVar0], 518218985)) && !TASK::GET_IS_TASK_ACTIVE(Local_1617.f_140[iVar0], 3))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_1617.f_140[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar0++;
	}
}

bool func_127()
{
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_492[2 /*7*/]) || __LIB_7__::func_972(&(Local_492[2 /*7*/]))) || __LIB_7__::func_973(&(Local_492[2 /*7*/]), "COWER_R_LOOP")) || __LIB_7__::func_973(&(Local_492[2 /*7*/]), "COWER_L_LOOP"))
	{
		return true;
	}
	return false;
}

bool func_129()
{
	float fVar0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[0]))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(Local_614.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_614.f_690[24 /*12*/].f_8, true);
		}
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_614.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_614.f_690[24 /*12*/].f_8, true, false);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(Local_614.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_466[0]);
		if (fVar0 > 0.9625f || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[0]) == 10)
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_614.f_690[24 /*12*/].f_8, true);
			ENTITY::SET_ENTITY_COLLISION(Local_614.f_690[24 /*12*/].f_8, true, false);
			__LIB_0__::func_401(991016631);
		}
	}
	else if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_614.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_466[0]);
		if (fVar0 > 0.997f)
		{
			ENTITY::SET_ENTITY_COLLISION(Local_614.f_690[24 /*12*/].f_8, true, false);
			__LIB_0__::func_400(joaat("DES_TREEFALL_ACCIDENT"));
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_135(var uParam0, int* iParam1, int* iParam2, var uParam3)
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
		func_379(iParam1, iParam2, uParam3, 0);
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

int func_137()
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
	if (__LIB_7__::func_924(&Local_1617, 32))
	{
		if (iLocal_98 == 3 && !__LIB_7__::func_908(Local_1617.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_614.f_1)
			{
				__LIB_1__::func_976(&iVar0);
				iVar0++;
			}
		}
		return 0;
	}
	__LIB_7__::func_977(&uLocal_195, 2);
	if (__LIB_7__::func_923(8192))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar3 = __LIB_0__::func_27(iLocal_605, __LIB_0__::func_771(iVar1));
			if (bVar3)
			{
				func_399(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!__LIB_7__::func_939(512))
	{
		func_400();
		func_401();
	}
	if (!__LIB_7__::func_929(67108864))
	{
		func_402(0);
		func_403(0, 1, 1);
		__LIB_7__::func_932(67108864);
	}
	iVar4 = __LIB_2__::func_963(Local_1617.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar4))
	{
		if (iVar4 != iLocal_155)
		{
			iLocal_155 = iVar4;
			__LIB_2__::func_451(&(Local_211[0 /*21*/]), 0);
		}
		__LIB_0__::func_928(&(Local_1617.f_35), iVar4, "EA_LCMP_Foreman", 0);
		func_404(&iVar4);
		PED::SET_PED_RESET_FLAG(iVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && __LIB_7__::func_907(Local_1617.f_136, 128)))
	{
		func_405(&iVar4);
	}
	if (iLocal_98 < 4)
	{
		func_406();
	}
	func_407();
	func_408(&iVar4);
	if (!__LIB_7__::func_923(128))
	{
		if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1617.f_136, 128))
		{
			__LIB_0__::func_11();
		}
		func_410();
		return 0;
	}
	func_411();
	if (__LIB_7__::func_923(16384))
	{
		__LIB_0__::func_11(&(iLocal_2108[0]));
	}
	if (!__LIB_7__::func_923(16) && !__LIB_7__::func_923(64))
	{
		bVar5 = __LIB_7__::func_923(1);
		__LIB_7__::func_979(iVar4, &(uLocal_2102[0]), &Local_1617, __LIB_7__::func_923(262144), &bVar5, 1, __LIB_7__::func_978());
		__LIB_8__::func_167(1, bVar5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[0]) && !PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_2105[0]))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_2105[0], joaat("PG_VEH_LOGWAGON_1"));
	}
	__LIB_8__::func_187();
	if (__LIB_7__::func_923(64) && !__LIB_7__::func_923(4))
	{
		__LIB_8__::func_167(4, func_416(&iVar4, &(iLocal_2082[0])));
		return 0;
	}
	if (__LIB_7__::func_923(64) && __LIB_7__::func_923(4))
	{
		func_417(&iVar4);
		func_418(&(iLocal_2082[0]));
	}
	if (iLocal_98 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[0]) && !ENTITY::_IS_ENTITY_FROZEN(iLocal_2105[0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2105[0], Local_614.f_304[0 /*32*/].f_6, true, false, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2105[0], true);
			AITRANSPORT::_0xBA8818212633500A(iLocal_2105[0], 0, 1);
		}
	}
	if (!__LIB_7__::func_923(32))
	{
		if (__LIB_7__::func_923(262144))
		{
			Local_2147.f_2[0] = "LOG_WRK02";
			if (!__LIB_7__::func_923(16))
			{
				switch (iLocal_98)
				{
					case 2:
					case 3:
						if (!__LIB_7__::func_923(-2147483648) && __LIB_7__::func_908(1, 2))
						{
							return func_419(&iVar4);
						}
						else
						{
							return func_420(&iVar4);
						}
						break;
					default:
						return func_420(&iVar4);
				}
			}
			else
			{
				return func_421(&iVar4);
			}
		}
		else
		{
			switch (iLocal_98)
			{
				case 1:
					if (!__LIB_7__::func_923(16))
					{
						return func_422(&iVar4);
					}
					else
					{
						return func_421(&iVar4);
					}
					break;
				case 2:
					if (!__LIB_7__::func_923(16))
					{
						if (!__LIB_7__::func_923(-2147483648) && __LIB_7__::func_908(1, 2))
						{
							return func_419(&iVar4);
						}
						else
						{
							return func_420(&iVar4);
						}
					}
					else
					{
						return func_421(&iVar4);
					}
					break;
				case 3:
					func_423(&(iLocal_2082[0]), 0);
					func_423(&(iLocal_2082[1]), 1);
					__LIB_1__::func_976();
					__LIB_1__::func_976();
					if (__LIB_7__::func_908(Local_1617.f_136, 256) || __LIB_0__::func_58(&iVar4))
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

void func_138()
{
	int iVar0;
	float fVar1;
	int iVar2;
	func_428();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_8__::func_139(iVar0) && !__LIB_8__::func_140(iVar0))
		{
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iVar0]))
			{
				if (!(iVar0 == 0 && __LIB_7__::func_923(512)))
				{
				}
			}
			else
			{
				fVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_466[iVar0]);
				if (fVar1 >= (__LIB_8__::func_141(iVar0) - 0.007544f) && fVar1 <= __LIB_8__::func_142(iVar0))
				{
					func_433();
				}
				switch (iLocal_603)
				{
					case 0:
						if (fVar1 >= __LIB_8__::func_141(iVar0) && fVar1 < __LIB_8__::func_142(iVar0))
						{
							PAD::SET_PAD_SHAKE(0, 400, __LIB_8__::func_238(iVar0));
							func_435(iVar0);
							AUDIO::_0x017492B2201E3428("SHOCKWAVE_TREE_FALL", __LIB_8__::func_143(iVar0));
							iVar2 = PED::_GET_LAST_MOUNT(Global_35);
							if (!ENTITY::IS_ENTITY_DEAD(iVar2) && __LIB_0__::func_94(iVar2, __LIB_8__::func_144(iVar0), 1) < 10f)
							{
								PED::_0xBAE08F00021BFFB2(iVar2, __LIB_1__::func_985());
							}
							iLocal_603 = 1;
						}
						break;
					case 1:
						if (fVar1 >= __LIB_8__::func_142(iVar0))
						{
							EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), __LIB_8__::func_143(iVar0), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
							__LIB_7__::func_932(8192);
							PAD::SET_PAD_SHAKE(0, 300, (__LIB_8__::func_238(iVar0) / 2));
							iLocal_603 = 2;
						}
						break;
					case 2:
						__LIB_0__::func_172(iLocal_75[2]);
						__LIB_0__::func_172(iLocal_75[3]);
						iLocal_603 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_139()
{
	if (__LIB_7__::func_924(&Local_1617, 1024))
	{
		return true;
	}
	if (bLocal_2254)
	{
		return true;
	}
	if (iLocal_2251 == 1)
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
	if (__LIB_8__::func_97(bLocal_2254))
	{
		return true;
	}
	return false;
}

void func_180()
{
	int iVar0;
	if (!iLocal_98 == 3 || __LIB_7__::func_907(Local_1617.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_7__::func_908(Local_1617.f_136, 512) && iLocal_98 == 2) && iVar0 == 0)
			{
				func_465(iVar0);
			}
			if (__LIB_7__::func_923(64) && iVar0 == 0)
			{
				Jump @118; //curOff = 96
			}
			else if (!func_466(iVar0))
			{
				func_467(&iVar0);
			}
			iVar0++;
		}
	}
}

void func_181()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_468(iVar0);
		iVar0++;
	}
}

void func_182()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = __LIB_1__::func_985();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (iVar1 == 0 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.75f)
	{
		iVar1 = 1;
	}
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1617.f_136, 4))
	{
		bVar0 = false;
		iVar1 = 2;
	}
	if (bVar0)
	{
		iVar2 = 1;
	}
	iVar3 = iVar2;
	while (iVar3 <= 3)
	{
		if (iVar4 >= iVar1)
		{
			return;
		}
		iVar4++;
		__LIB_1__::func_336(&iLocal_605, __LIB_0__::func_771(iVar3));
		iVar3 += 2;
	}
}

void func_202()
{
	int iVar0;
	if (__LIB_7__::func_939(512))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::_0x1FF441D7954F8709(uLocal_472[iVar0]))
		{
			ENTITY::_0xD2B9C78537ED5759(uLocal_472[iVar0]);
		}
		iVar0++;
	}
}

void func_212()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_7__::func_910(__LIB_8__::func_143(iVar0), 0);
		iLocal_466[iVar0] = 0;
		iVar0++;
	}
}

void func_213(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_474(iVar0, bParam0);
		iVar0++;
	}
}

void func_214(bool bParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 5, !bParam0);
	__LIB_3__::func_386(&Local_1617, bParam0);
	__LIB_3__::func_393(&Local_1617, bParam0);
}

void func_227()
{
	int iVar0;
	if (__LIB_7__::func_923(8192))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_8__::func_188(&(Local_492[(9 + iVar0) /*7*/]), "script@proc@eventareas@appleseed@Tree_Saw", func_482(9), 0);
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(16384))
	{
		__LIB_8__::func_188(&(Local_492[6 /*7*/]), "script@proc@eventareas@appleseed@Log_Drag", func_482(6), 0);
	}
	if (__LIB_7__::func_923(256))
	{
		__LIB_8__::func_188(&(Local_492[7 /*7*/]), "script@proc@eventareas@appleseed@Boom_Operator", func_482(7), 0);
		__LIB_8__::func_188(&(Local_492[8 /*7*/]), "script@proc@eventareas@appleseed@Boom_Spotter", func_482(8), 0);
	}
	if (__LIB_7__::func_923(64))
	{
		__LIB_8__::func_188(&(Local_492[2 /*7*/]), "script@proc@eventareas@appleseed@Tree_Fall", func_482(2), 0);
		__LIB_8__::func_188(&(Local_492[3 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_A", func_482(3), 0);
		__LIB_8__::func_188(&(Local_492[4 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_B", func_482(4), 0);
	}
	if (__LIB_7__::func_923(262144))
	{
		if (__LIB_7__::func_923(16))
		{
			func_484();
		}
		else if (__LIB_7__::func_908(1, 2) && !__LIB_7__::func_908(Local_1617.f_136, 16384))
		{
			__LIB_8__::func_188(&(Local_492[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
			__LIB_8__::func_188(&(Local_492[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
		}
		else
		{
			func_484();
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				if (__LIB_7__::func_923(16))
				{
					func_484();
				}
				else
				{
					__LIB_8__::func_188(&(Local_492[5 /*7*/]), "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", func_482(5), 0);
					__LIB_8__::func_188(&(Local_492[0 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(0), 0);
					__LIB_8__::func_188(&(Local_492[1 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(1), 0);
				}
				break;
			case 2:
				if (__LIB_7__::func_923(16))
				{
					func_484();
				}
				else if (__LIB_7__::func_908(1, 2) && !__LIB_7__::func_908(Local_1617.f_136, 16384))
				{
					__LIB_8__::func_188(&(Local_492[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
					__LIB_8__::func_188(&(Local_492[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
				}
				else
				{
					func_484();
				}
				break;
			case 3:
				__LIB_8__::func_188(&(Local_492[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Orders", func_482(0), 0);
				__LIB_8__::func_188(&(Local_492[1 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", func_482(1), 0);
				__LIB_8__::func_188(&(Local_492[2 /*7*/]), "script@proc@eventareas@appleseed@Player_Grab_Money", func_482(2), 0);
				__LIB_8__::func_188(&(Local_492[3 /*7*/]), "script@proc@eventareas@appleseed@Worker_Convo", func_482(3), 0);
				break;
		}
	}
}

void func_228()
{
	int iVar0;
	int iVar1;
	int iVar2[2];
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	if (__LIB_7__::func_923(256))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 12);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (iVar1 <= iVar0)
			{
				Local_1768[iVar1 /*12*/].f_7 = __LIB_8__::func_145();
			}
			else
			{
				Local_1768[iVar1 /*12*/].f_7 = 0;
			}
			Local_1768[iVar1 /*12*/] = { __LIB_8__::func_146(iVar1) };
			if (__LIB_1__::func_985())
			{
				Local_1768[iVar1 /*12*/].f_3 = 25f;
			}
			else
			{
				Local_1768[iVar1 /*12*/].f_3 = (180f + 25f);
			}
			Local_1768[iVar1 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_1768[iVar1 /*12*/].f_11), 67);
			iVar1++;
		}
	}
	if (__LIB_7__::func_923(128))
	{
		if (__LIB_7__::func_923(64))
		{
			Local_614.f_690[7 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_614.f_690[7 /*12*/].f_7 = 0;
		}
		Local_614.f_690[7 /*12*/] = { __LIB_7__::func_984() };
		Local_614.f_690[7 /*12*/].f_3 = 89f;
		Local_614.f_690[7 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_614.f_690[8 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_614.f_690[8 /*12*/].f_7 = 0;
		}
		Local_614.f_690[8 /*12*/] = { __LIB_7__::func_984() };
		Local_614.f_690[8 /*12*/].f_3 = 89f;
		Local_614.f_690[8 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_614.f_690[9 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_614.f_690[9 /*12*/].f_7 = 0;
		}
		Local_614.f_690[9 /*12*/] = { __LIB_7__::func_984() };
		Local_614.f_690[9 /*12*/].f_3 = 89f;
		Local_614.f_690[9 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_614.f_690[10 /*12*/].f_7 = joaat("P_CIGARETTE_CS02X");
		}
		else
		{
			Local_614.f_690[10 /*12*/].f_7 = 0;
		}
		Local_614.f_690[10 /*12*/] = { __LIB_7__::func_984() };
		Local_614.f_690[10 /*12*/].f_3 = 89f;
		Local_614.f_690[10 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_614.f_690[24 /*12*/].f_7 = joaat("TREEFALL_ACCIDENT_ENDPROP");
		}
		else
		{
			Local_614.f_690[24 /*12*/].f_7 = 0;
		}
		Local_614.f_690[24 /*12*/] = { -1402.82f, -270.8668f, 98.5585f };
		Local_614.f_690[24 /*12*/].f_3 = 74.57f;
		Local_614.f_690[24 /*12*/].f_10 = 0;
		__LIB_1__::func_683(&(Local_614.f_690[24 /*12*/].f_11), 64);
		if (__LIB_7__::func_923(64))
		{
			Local_614.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
			Local_614.f_690[6 /*12*/] = { __LIB_7__::func_985() };
			Local_614.f_690[6 /*12*/].f_3 = 89f;
			Local_614.f_690[6 /*12*/].f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			Local_614.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY03X");
			Local_614.f_690[12 /*12*/] = { -1341.215f, -194.8321f, 102.4812f };
			Local_614.f_690[12 /*12*/].f_3 = 27f;
			Local_614.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_614.f_690[12 /*12*/].f_11), 75);
			if (__LIB_7__::func_923(128))
			{
				Local_614.f_690[0 /*12*/].f_7 = 0;
				Local_614.f_690[0 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[0 /*12*/].f_3 = 89f;
				Local_614.f_690[0 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					Local_614.f_690[4 /*12*/].f_7 = joaat("P_WOODWHITTLE01X");
				}
				else
				{
					Local_614.f_690[4 /*12*/].f_7 = 0;
				}
				Local_614.f_690[4 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[4 /*12*/].f_3 = 89f;
				Local_614.f_690[4 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					Local_614.f_690[3 /*12*/].f_7 = joaat("P_KNIFE02X");
				}
				else
				{
					Local_614.f_690[3 /*12*/].f_7 = 0;
				}
				Local_614.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[3 /*12*/].f_3 = 89f;
				Local_614.f_690[3 /*12*/].f_10 = 0;
			}
			break;
		case 2:
			Local_614.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_614.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_614.f_690[13 /*12*/].f_3 = 24f;
			Local_614.f_690[13 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_614.f_690[13 /*12*/].f_11), 75);
			Local_614.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_614.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_614.f_690[12 /*12*/].f_3 = 25f;
			Local_614.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_614.f_690[12 /*12*/].f_11), 75);
			Local_614.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_614.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_614.f_690[25 /*12*/].f_3 = 19.95f;
			Local_614.f_690[25 /*12*/].f_10 = 0;
			if (__LIB_7__::func_923(128))
			{
				if (__LIB_7__::func_908(1, 2))
				{
					Local_614.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_614.f_690[3 /*12*/].f_7 = 0;
				}
				Local_614.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[3 /*12*/].f_4 = { 90f, 0f, -5.99f };
				Local_614.f_690[3 /*12*/].f_10 = 0;
				if (__LIB_7__::func_908(1, 2))
				{
					Local_614.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_614.f_690[4 /*12*/].f_7 = 0;
				}
				Local_614.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_614.f_690[4 /*12*/].f_3 = -153.92f;
				Local_614.f_690[4 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_614.f_690[4 /*12*/].f_11), 2);
				if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_923(64))
				{
					Local_614.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
					Local_614.f_690[6 /*12*/] = { __LIB_7__::func_985() };
					Local_614.f_690[6 /*12*/].f_3 = 89f;
					Local_614.f_690[6 /*12*/].f_10 = 0;
				}
			}
			break;
		case 3:
			Local_614.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_614.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_614.f_690[13 /*12*/].f_3 = 24f;
			Local_614.f_690[13 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_614.f_690[13 /*12*/].f_11), 75);
			Local_614.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_614.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_614.f_690[12 /*12*/].f_3 = 25f;
			Local_614.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_614.f_690[12 /*12*/].f_11), 75);
			Local_614.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_614.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_614.f_690[25 /*12*/].f_3 = 19.95f;
			Local_614.f_690[25 /*12*/].f_10 = 0;
			if (__LIB_7__::func_923(128))
			{
				if (!__LIB_7__::func_907(Local_1617.f_136, 128) || (__LIB_7__::func_907(Local_1617.f_136, 128) && __LIB_7__::func_908(1, 2)))
				{
					Local_614.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_614.f_690[3 /*12*/].f_7 = 0;
				}
				Local_614.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[3 /*12*/].f_3 = 89f;
				Local_614.f_690[3 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1617.f_136, 128) || (__LIB_7__::func_907(Local_1617.f_136, 128) && __LIB_7__::func_908(1, 2)))
				{
					Local_614.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_614.f_690[4 /*12*/].f_7 = 0;
				}
				Local_614.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_614.f_690[4 /*12*/].f_3 = -153.92f;
				Local_614.f_690[4 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_614.f_690[4 /*12*/].f_11), 2);
				if (!__LIB_7__::func_907(Local_1617.f_136, 128) || __LIB_7__::func_908(1, 2))
				{
					Local_614.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
				}
				else
				{
					Local_614.f_690[6 /*12*/].f_7 = 0;
				}
				Local_614.f_690[6 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[6 /*12*/].f_3 = 89f;
				Local_614.f_690[6 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					Local_614.f_690[7 /*12*/].f_7 = joaat("P_BOTTLEJD01X");
				}
				else
				{
					Local_614.f_690[7 /*12*/].f_7 = 0;
				}
				Local_614.f_690[7 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[7 /*12*/].f_3 = 89f;
				Local_614.f_690[7 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					Local_614.f_690[8 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_614.f_690[8 /*12*/].f_7 = 0;
				}
				Local_614.f_690[8 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[8 /*12*/].f_3 = 89f;
				Local_614.f_690[8 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					Local_614.f_690[9 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_614.f_690[9 /*12*/].f_7 = 0;
				}
				Local_614.f_690[9 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[9 /*12*/].f_3 = 89f;
				Local_614.f_690[9 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					Local_614.f_690[10 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_614.f_690[10 /*12*/].f_7 = 0;
				}
				Local_614.f_690[10 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[10 /*12*/].f_3 = 89f;
				Local_614.f_690[10 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					Local_614.f_690[11 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_614.f_690[11 /*12*/].f_7 = 0;
				}
				Local_614.f_690[11 /*12*/] = { __LIB_7__::func_984() };
				Local_614.f_690[11 /*12*/].f_3 = 89f;
				Local_614.f_690[11 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					Local_614.f_690[0 /*12*/].f_7 = joaat("P_PANTHERBLOOD01X");
				}
				else
				{
					Local_614.f_690[0 /*12*/].f_7 = 0;
				}
				Local_614.f_690[0 /*12*/] = { func_490(0, 2) };
				Local_614.f_690[0 /*12*/].f_2 = (Local_614.f_690[0 /*12*/].f_2 - 5f);
				Local_614.f_690[0 /*12*/].f_3 = 89f;
				Local_614.f_690[0 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_614.f_690[0 /*12*/].f_11), 67);
				if (!__LIB_7__::func_907(Local_1617.f_136, 128))
				{
					Local_614.f_690[1 /*12*/].f_7 = joaat("P_COUGARBLOODPOOLS01X");
				}
				else
				{
					Local_614.f_690[1 /*12*/].f_7 = 0;
				}
				Local_614.f_690[1 /*12*/] = { func_490(0, 3) };
				Local_614.f_690[1 /*12*/].f_2 = (Local_614.f_690[1 /*12*/].f_2 - 5f);
				Local_614.f_690[1 /*12*/].f_3 = 89f;
				Local_614.f_690[1 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_614.f_690[1 /*12*/].f_11), 67);
			}
			break;
	}
	iVar5 = 0;
	while (iVar5 < 4)
	{
		bVar7 = __LIB_0__::func_27(iLocal_605, __LIB_0__::func_771(iVar5));
		if (bVar7)
		{
			iVar2[iVar6] = iVar5;
			iVar6++;
		}
		if (iVar6 >= 2)
		{
		}
		else
		{
			iVar5++;
		}
	}
	iVar8 = 0;
	while (iVar8 < iVar6)
	{
		iVar9 = iVar8 * 4;
		if (iVar9 + 18 >= Local_614.f_690 || iVar9 < 0)
		{
		}
		else
		{
			iVar5 = iVar2[iVar8];
			if (__LIB_7__::func_923(8192))
			{
				Local_614.f_690[(15 + iVar9) /*12*/].f_7 = joaat("P_SAWBUCKING01X");
				Local_614.f_690[(16 + iVar9) /*12*/].f_7 = joaat("P_CS_CEDARLOG01X");
				Local_614.f_690[(17 + iVar9) /*12*/].f_7 = joaat("P_CS_CEDARLOG02X");
				Local_614.f_690[(18 + iVar9) /*12*/].f_7 = joaat("P_CS_CEDARLOG03X");
			}
			else
			{
				Local_614.f_690[(15 + iVar9) /*12*/].f_7 = 0;
				Local_614.f_690[(16 + iVar9) /*12*/].f_7 = 0;
				Local_614.f_690[(17 + iVar9) /*12*/].f_7 = 0;
				Local_614.f_690[(18 + iVar9) /*12*/].f_7 = 0;
			}
			Local_614.f_690[(15 + iVar9) /*12*/] = { func_491(iVar5) };
			Local_614.f_690[(15 + iVar9) /*12*/].f_3 = __LIB_7__::func_986(iVar5);
			Local_614.f_690[(15 + iVar9) /*12*/].f_10 = 0;
			Local_614.f_690[(16 + iVar9) /*12*/] = { __LIB_7__::func_987(iVar5) };
			Local_614.f_690[(16 + iVar9) /*12*/].f_4 = { __LIB_7__::func_988(iVar5) };
			Local_614.f_690[(16 + iVar9) /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_614.f_690[(16 + iVar9) /*12*/].f_11), 2);
			vVar10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_614.f_690[(16 + iVar9) /*12*/], Local_614.f_690[(16 + iVar9) /*12*/].f_3, 0.025f, -4.4039f, 0.041f) };
			Local_614.f_690[(17 + iVar9) /*12*/] = { vVar10 };
			Local_614.f_690[(17 + iVar9) /*12*/].f_3 = Local_614.f_690[(16 + iVar9) /*12*/].f_3;
			Local_614.f_690[(17 + iVar9) /*12*/].f_10 = 0;
			vVar10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_614.f_690[(16 + iVar9) /*12*/], Local_614.f_690[(16 + iVar9) /*12*/].f_3, 0f, 6.3529f, -0.077f) };
			Local_614.f_690[(18 + iVar9) /*12*/] = { vVar10 };
			Local_614.f_690[(18 + iVar9) /*12*/].f_3 = Local_614.f_690[(16 + iVar9) /*12*/].f_3;
			Local_614.f_690[(18 + iVar9) /*12*/].f_10 = 0;
			iVar8++;
		}
	}
	if (__LIB_7__::func_923(128))
	{
		if (__LIB_7__::func_923(16384))
		{
			Local_614.f_690[2 /*12*/].f_7 = joaat("S_APLSD_LOG");
		}
		else
		{
			Local_614.f_690[2 /*12*/].f_7 = 0;
		}
		Local_614.f_690[2 /*12*/] = { -1410.311f, -227.9941f, 99.4013f };
		Local_614.f_690[2 /*12*/].f_3 = 100.36f;
		Local_614.f_690[2 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(16384))
		{
			Local_614.f_690[14 /*12*/].f_7 = joaat("S_APLSD_HRSATT");
		}
		else
		{
			Local_614.f_690[14 /*12*/].f_7 = 0;
		}
		Local_614.f_690[14 /*12*/] = { -1404.688f, -227.0209f, 99.4983f };
		Local_614.f_690[14 /*12*/].f_3 = 94.76f;
		Local_614.f_690[14 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(16384))
		{
			Local_614.f_690[23 /*12*/].f_7 = joaat("S_APLSD_HOOK");
		}
		else
		{
			Local_614.f_690[23 /*12*/].f_7 = 0;
		}
		Local_614.f_690[23 /*12*/] = { -1412.52f, -227.139f, 99.815f };
		Local_614.f_690[23 /*12*/].f_3 = 129.6f;
		Local_614.f_690[23 /*12*/].f_10 = 1;
	}
	if ((__LIB_7__::func_923(262144) || __LIB_7__::func_923(16)) && func_333())
	{
		if (iLocal_98 != 3)
		{
			Local_614.f_690[5 /*12*/].f_7 = joaat("P_CHAIR06X");
		}
		else
		{
			Local_614.f_690[5 /*12*/].f_7 = 0;
		}
		iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.116f, -211.4299f, 103.0422f, 0f, 0f, 18.85407f, 1f, 1f, 2.328289f, "volChairSpawnBlock");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
		Local_614.f_690[11 /*12*/].f_7 = joaat("P_LANTERN09XHANG");
		switch (iLocal_98)
		{
			case 1:
				Local_614.f_690[11 /*12*/].f_7 = 0;
				Local_614.f_690[11 /*12*/] = { -1399.87f, -212.58f, 102.43f };
				break;
			case 2:
				Local_614.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
			case 3:
				Local_614.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
		}
		Local_614.f_690[11 /*12*/].f_3 = 5f;
		Local_614.f_690[11 /*12*/].f_10 = 0;
		__LIB_1__::func_683(&(Local_614.f_690[11 /*12*/].f_11), 66);
	}
	else
	{
		Local_614.f_690[5 /*12*/].f_7 = 0;
	}
	Local_614.f_690[5 /*12*/] = { -1400.098f, -211.239f, 101.889f };
	Local_614.f_690[5 /*12*/].f_3 = 22f;
	Local_614.f_690[5 /*12*/].f_10 = 0;
	__LIB_1__::func_683(&(Local_614.f_690[5 /*12*/].f_11), 2);
}

void func_230()
{
	Local_614.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			Local_614.f_304[0 /*32*/].f_1 = joaat("NORTHFLATCAR01X");
			Local_614.f_304[0 /*32*/].f_6 = { -1342.64f, -191.66f, 99.56f };
			Local_614.f_304[0 /*32*/].f_9 = 27f;
			__LIB_1__::func_683(&(Local_614.f_304[0 /*32*/].f_22), 129);
			Local_614.f_2 = 1;
			break;
		case 2:
			if (!__LIB_7__::func_924(&Local_1617, 32))
			{
				if (__LIB_7__::func_923(256))
				{
					Local_614.f_2++;
				}
			}
			if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_908(Local_1617.f_136, 16384))
			{
				Local_614.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_614.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_614.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_614.f_2++;
				if (__LIB_7__::func_923(262144))
				{
					Local_2147.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((__LIB_7__::func_923(262144) && __LIB_7__::func_908(1, 2)) || __LIB_7__::func_908(Local_1617.f_136, 16384))
			{
				Local_614.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_614.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_614.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_614.f_2++;
				if (__LIB_7__::func_923(262144))
				{
					Local_2147.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!__LIB_7__::func_924(&Local_1617, 32))
			{
				if (__LIB_7__::func_923(256))
				{
					Local_614.f_2++;
				}
			}
			break;
	}
}

void func_232()
{
	char* sVar0;
	if (__LIB_7__::func_923(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		__LIB_3__::func_318(sVar0, &uLocal_2017);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		__LIB_3__::func_318(sVar0, &uLocal_2017);
	}
	if (__LIB_7__::func_923(8192))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		__LIB_3__::func_318(sVar0, &uLocal_2017);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		__LIB_3__::func_318(sVar0, &uLocal_2017);
	}
	if (__LIB_7__::func_923(262144))
	{
		sVar0 = func_496();
		__LIB_3__::func_318(sVar0, &uLocal_2017);
		if (__LIB_7__::func_908(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			__LIB_3__::func_318(sVar0, &uLocal_2017);
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
				__LIB_3__::func_318(sVar0, &uLocal_2017);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				__LIB_3__::func_318(sVar0, &uLocal_2017);
				break;
		}
	}
}

bool func_234()
{
	if (!__LIB_3__::func_316(&(Local_614.f_690)))
	{
		return false;
	}
	return true;
}

bool func_259()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_492[iVar1 /*7*/]))
		{
			if (!__LIB_7__::func_990(&(Local_492[iVar1 /*7*/])))
			{
				iVar0 = 0;
			}
			else
			{
				iVar1++;
			}
			return iVar0;
		}
	}
}

void func_265(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_265(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_265(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_292(int iParam0, var uParam1)
{
	if (__LIB_7__::func_923(1048576))
	{
		if (((((__LIB_4__::func_102(__LIB_2__::func_963(Local_1617.f_138), iParam0, uParam1, 0) || ((iLocal_206 % 3) == 1 && __LIB_7__::func_918(&uLocal_1923, iParam0, uParam1, 0, (iLocal_190 / 3)))) || ((iLocal_206 % 3) == 2 && __LIB_7__::func_918(&uLocal_1923, iParam0, uParam1, (iLocal_190 / 3) + 1, (iLocal_190 * 2 / 3)))) || ((iLocal_206 % 3) == 0 && __LIB_7__::func_918(&uLocal_1923, iParam0, uParam1, (iLocal_190 * 2 / 3) + 1, iLocal_190))) || __LIB_7__::func_918(&iLocal_2082, iParam0, uParam1, 0, -1)) || __LIB_7__::func_918(&iLocal_2108, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_293()
{
	if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_908(Local_1617.f_136, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[0]) && __LIB_2__::func_343(Global_35, iLocal_2105[0], 0))
		{
			if (__LIB_7__::func_908(Local_1617.f_136, 16384))
			{
				__LIB_0__::func_325(&(uLocal_2102[1]));
				return false;
			}
			else
			{
				__LIB_3__::func_465(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_1617.f_138), 0, 1065353216 /* Float: 1f */, 0);
				__LIB_7__::func_932(32768);
				return true;
			}
		}
	}
	if (__LIB_7__::func_923(65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]) && __LIB_2__::func_343(Global_35, uLocal_72[1], 1))
		{
			__LIB_3__::func_465(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_1617.f_138), 0, 1065353216 /* Float: 1f */, 0);
			__LIB_7__::func_932(32768);
			return true;
		}
	}
	if (__LIB_7__::func_923(32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]) && __LIB_2__::func_343(Global_35, uLocal_72[0], 1))
		{
			__LIB_3__::func_465(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_1617.f_138), 0, 1065353216 /* Float: 1f */, 0);
			__LIB_7__::func_932(32768);
			return true;
		}
	}
	return false;
}

bool func_294()
{
	int iVar0;
	iVar0 = (iLocal_206 % iLocal_612);
	if (iVar0 < 4)
	{
		if (!__LIB_1__::func_205(uLocal_607[iVar0], iLocal_75[5], 1, 0) && PED::_GET_RIDER_OF_MOUNT(uLocal_607[iVar0], false) == Global_35)
		{
			__LIB_7__::func_926(268435456);
			return true;
		}
	}
	return false;
}

int func_297()
{
	if (!__LIB_8__::func_305(&Local_1617))
	{
		if (!__LIB_8__::func_0(&(Global_1935630.f_34[0])))
		{
			return 0;
		}
		__LIB_8__::func_131(&Local_1617, 4096);
	}
	return 1;
}

int func_300(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1617.f_138)))
	{
		if (func_597())
		{
			(*iParam0)[iVar0] = __LIB_2__::func_963(Local_1617.f_138);
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
		{
			(*iParam0)[iVar0] = iLocal_2082[0];
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2108[0]))
		{
			(*iParam0)[iVar0] = iLocal_2108[0];
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(8192))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = __LIB_0__::func_27(iLocal_605, __LIB_0__::func_771(iVar2));
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
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1617.f_136, 64))
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
	if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1617.f_136, 64))
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
	if (iLocal_98 == 3 && !__LIB_7__::func_908(Local_1617.f_136, 16))
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
	while (iVar1 < iLocal_2108)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2108[iVar1]))
		{
			(*iParam0)[iVar0] = iLocal_2108[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		(*iParam0)[iVar0] = iLocal_2082[2];
		iVar0++;
		(*iParam0)[iVar0] = iLocal_2082[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

bool func_304()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_7__::func_963(&(Local_492[6 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(6))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(6, iVar0, 0));
			if (iVar1 == Local_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_492[3 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(3))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(3, iVar0, 0));
			if (iVar1 == Local_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_492[7 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(7))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(7, iVar0, 0));
			if (iVar1 == Local_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_492[8 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(8))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(8, iVar0, 0));
			if (iVar1 == Local_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = (9 + iVar2);
		if (__LIB_7__::func_963(&(Local_492[iVar3 /*7*/])))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < __LIB_8__::func_4(9))
			{
				iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(9, iVar0, iVar4));
				if (iVar1 == Local_1617.f_10)
				{
					return true;
				}
				iVar0++;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_306()
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
					if (__LIB_1__::func_205(iVar6, Global_1392194[Local_1617.f_136 /*10*/].f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (iVar6 == __LIB_2__::func_963(Local_1617.f_138))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (__LIB_1__::func_248(iVar6, &uLocal_1923))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (__LIB_1__::func_248(iVar6, &iLocal_2082))
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
						__LIB_8__::func_131(&Local_1617, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

bool func_333()
{
	return (iLocal_597 == 0 || iLocal_597 == 1);
}

void func_337(int iParam0)
{
	if (iLocal_205 < 10)
	{
		if (!__LIB_1__::func_248(*iParam0, &(Local_1617.f_140)))
		{
			Local_1617.f_140[iLocal_205] = *iParam0;
			iLocal_205++;
		}
	}
}

void func_347()
{
	float fVar0;
	float fVar1;
	Vector3 vVar4;
	if (__LIB_7__::func_963(&(Local_492[2 /*7*/])))
	{
		fVar0 = __LIB_8__::func_8(&(Local_492[2 /*7*/]));
		__LIB_8__::func_9(&(Local_492[2 /*7*/]), &fVar1, &vVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2082[0], -615221946))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2082[0], false);
			__LIB_8__::func_191(&(Local_492[2 /*7*/]), "PB_VIC_BRKOUT", 1);
			__LIB_8__::func_192(&(Local_492[2 /*7*/]), "RECOVERY_BOOL");
		}
		else if ((__LIB_8__::func_10(&(Local_492[2 /*7*/]), "PBL_IMPATIENT") || (__LIB_8__::func_10(&(Local_492[2 /*7*/]), "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (__LIB_8__::func_10(&(Local_492[2 /*7*/]), "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				__LIB_8__::func_191(&(Local_492[2 /*7*/]), "PBL_COMBAT_L", 1);
				__LIB_8__::func_192(&(Local_492[2 /*7*/]), "bBreakInternalLoop");
			}
			else
			{
				__LIB_8__::func_191(&(Local_492[2 /*7*/]), "PBL_COMBAT_R", 1);
				__LIB_8__::func_192(&(Local_492[2 /*7*/]), "bBreakInternalLoop");
			}
			__LIB_7__::func_922(1024);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1617.f_138)))
			{
				__LIB_8__::func_183(&(Local_492[2 /*7*/]), __LIB_2__::func_963(Local_1617.f_138), "FOREMAN");
			}
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(810)))
			{
				__LIB_8__::func_183(&(Local_492[2 /*7*/]), __LIB_2__::func_963(810), "PED1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[2]))
			{
				__LIB_8__::func_183(&(Local_492[2 /*7*/]), iLocal_2082[2], "PED2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[3]))
			{
				__LIB_8__::func_183(&(Local_492[2 /*7*/]), iLocal_2082[3], "PED3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_614.f_690[7 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_492[2 /*7*/]), Local_614.f_690[7 /*12*/].f_8, "AXE1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_614.f_690[8 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_492[2 /*7*/]), Local_614.f_690[8 /*12*/].f_8, "AXE2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_614.f_690[9 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_492[2 /*7*/]), Local_614.f_690[9 /*12*/].f_8, "AXE3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_614.f_690[10 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_492[2 /*7*/]), Local_614.f_690[10 /*12*/].f_8, "CIGARETTE");
			}
			if (__LIB_7__::func_923(512))
			{
				if (Global_36 < fVar1)
				{
					__LIB_8__::func_191(&(Local_492[2 /*7*/]), "PBL_COMBAT_L", 1);
					__LIB_8__::func_192(&(Local_492[2 /*7*/]), "bBreakInternalLoop");
				}
				else
				{
					__LIB_8__::func_191(&(Local_492[2 /*7*/]), "PBL_COMBAT_R", 1);
					__LIB_8__::func_192(&(Local_492[2 /*7*/]), "bBreakInternalLoop");
				}
			}
			__LIB_7__::func_941(1024);
		}
	}
}

void func_348(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0 > -1 && iParam0 != iVar0)
		{
		}
		else if (__LIB_7__::func_963(&(Local_492[(9 + iVar0) /*7*/])))
		{
			iVar1 = iVar0 * 4;
			iVar2 = iVar0 * 2;
			iVar3 = __LIB_2__::func_963(__LIB_7__::func_964(9, 0, iVar2));
			iVar4 = __LIB_2__::func_963(__LIB_7__::func_964(9, 1, iVar2));
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iVar5 = iVar4;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				iVar5 = iVar3;
				bVar6 = true;
			}
			else
			{
				__LIB_8__::func_183(&(Local_492[(9 + iVar0) /*7*/]), Local_614.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
				__LIB_7__::func_952(&(Local_492[(9 + iVar0) /*7*/]));
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_337(&iVar3);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_337(&iVar4);
				}
				iVar7 = __LIB_3__::func_112(iVar5, Global_35, 1060437492 /* Float: 0.707f */);
				if (bVar6)
				{
					switch (iVar7)
					{
						case 1:
							iVar7 = 0;
							break;
						case 0:
							iVar7 = 1;
							break;
						case 3:
							iVar7 = 2;
							break;
						case 2:
							iVar7 = 3;
							break;
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar5, -137640087))
				{
					iVar8 = 0;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar5, -1300850144))
				{
					iVar8 = 1;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar5, -1011860333))
				{
					iVar8 = 2;
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						__LIB_8__::func_183(&(Local_492[(9 + iVar0) /*7*/]), iVar3, "PED1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						__LIB_8__::func_183(&(Local_492[(9 + iVar0) /*7*/]), iVar4, "PED2");
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_11(iVar8, iVar7)))
				{
					__LIB_8__::func_191(&(Local_492[(9 + iVar0) /*7*/]), __LIB_8__::func_11(iVar8, iVar7), 1);
					__LIB_8__::func_192(&(Local_492[(9 + iVar0) /*7*/]), "bBreakInternalLoop");
				}
				__LIB_8__::func_183(&(Local_492[(9 + iVar0) /*7*/]), Local_614.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
			}
		}
		iVar0++;
	}
}

void func_349()
{
	if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1617.f_138)))
	{
		return;
	}
	if (!__LIB_7__::func_963(&(Local_492[0 /*7*/])))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(Local_1617.f_138), joaat("STANDING")))
	{
		return;
	}
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_1617.f_138), Local_614.f_690[25 /*12*/].f_8, false);
	__LIB_8__::func_191(&(Local_492[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT", 1);
	__LIB_8__::func_192(&(Local_492[0 /*7*/]), "bBreakInternalLoop");
	__LIB_7__::func_922(1024);
}

void func_350()
{
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1617.f_138)) && __LIB_7__::func_963(&(Local_492[1 /*7*/])))
	{
		if (!ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(Local_1617.f_138), joaat("STANDING")))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_1617.f_138), Local_614.f_690[25 /*12*/].f_8, false);
			__LIB_8__::func_191(&(Local_492[1 /*7*/]), "PBL_COMBAT", 1);
			__LIB_8__::func_192(&(Local_492[1 /*7*/]), "bBreakInternalLoop");
			__LIB_7__::func_922(1024);
		}
		else
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_1617.f_138), Local_614.f_690[5 /*12*/].f_8, false);
			__LIB_7__::func_952(&(Local_492[1 /*7*/]));
		}
	}
	if (__LIB_7__::func_963(&(Local_492[3 /*7*/])))
	{
		__LIB_7__::func_952(&(Local_492[3 /*7*/]));
		PHYSICS::ACTIVATE_PHYSICS(Local_614.f_690[7 /*12*/].f_8);
	}
	if (__LIB_7__::func_963(&(Local_492[0 /*7*/])))
	{
		__LIB_7__::func_952(&(Local_492[0 /*7*/]));
	}
}

void func_379(int* iParam0, int* iParam1, var uParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_659(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
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

void func_399(int iParam0, int iParam1)
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
	if ((18 + iVar0) >= Local_614.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	iVar3 = __LIB_2__::func_963(__LIB_7__::func_964(9, 0, iVar1));
	iVar4 = __LIB_2__::func_963(__LIB_7__::func_964(9, 1, iVar1));
	if (iLocal_599[iParam1] < 11)
	{
		func_677(&iVar1, &iVar0, &iVar3, &iVar4, iParam1);
		func_678(iParam1, &iVar3);
		func_679(&iVar3, &iVar4, iParam1);
	}
	switch (iLocal_599[iParam1])
	{
		case 0:
			if ((ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[(16 + iVar0) /*12*/].f_8) && ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[(17 + iVar0) /*12*/].f_8)) && ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[(18 + iVar0) /*12*/].f_8))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_614.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_614.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_614.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[(16 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[(17 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[(18 + iVar0) /*12*/].f_8, true);
				iLocal_75[(12 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_614.f_690[(17 + iVar0) /*12*/], 0f, 0f, Local_614.f_690[(17 + iVar0) /*12*/].f_3, 0.613833f, 3.325524f, 5.714088f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(12 + iVar2)], Local_614.f_690[(17 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[(12 + iVar2)], 7);
				iLocal_75[(13 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_614.f_690[(18 + iVar0) /*12*/], 0f, 0f, Local_614.f_690[(18 + iVar0) /*12*/].f_3, 1f, 7.3475f, 5f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(13 + iVar2)], Local_614.f_690[(18 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[(13 + iVar2)], 7);
				__LIB_7__::func_927(__LIB_8__::func_4(9), &Local_614);
				iLocal_599[iParam1] = 1;
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
						iLocal_599[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iLocal_599[iParam1] = 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[(15 + iVar0) /*12*/].f_8))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_614.f_690[(15 + iVar0) /*12*/].f_8, func_491(iParam0), __LIB_7__::func_986(iParam0), true, false, true);
				__LIB_8__::func_15(&(Local_492[(9 + iParam1) /*7*/]), __LIB_8__::func_13(iParam0), __LIB_8__::func_14(iParam0));
				__LIB_8__::func_147(&(Local_492[(9 + iParam1) /*7*/]), iVar3, "PED1", 1);
				__LIB_8__::func_147(&(Local_492[(9 + iParam1) /*7*/]), iVar4, "PED2", 1);
				StringCopy(&(Local_492[(9 + iParam1) /*7*/].f_4), "bBreakInternalLoop", 24);
				__LIB_8__::func_148(&(Local_492[(9 + iParam1) /*7*/]), Local_614.f_690[(15 + iVar0) /*12*/].f_8, "SAW");
				__LIB_8__::func_148(&(Local_492[(9 + iParam1) /*7*/]), Local_614.f_690[(16 + iVar0) /*12*/].f_8, "LOG_01");
				__LIB_8__::func_148(&(Local_492[(9 + iParam1) /*7*/]), Local_614.f_690[(17 + iVar0) /*12*/].f_8, "LOG_03");
				__LIB_8__::func_148(&(Local_492[(9 + iParam1) /*7*/]), Local_614.f_690[(18 + iVar0) /*12*/].f_8, "LOG_02");
				iLocal_599[iParam1] = 3;
			}
			break;
		case 3:
			if (__LIB_7__::func_990(&(Local_492[(9 + iParam1) /*7*/])))
			{
				__LIB_8__::func_16(&(Local_492[(9 + iParam1) /*7*/]));
				iLocal_599[iParam1] = 4;
			}
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && __LIB_1__::func_472(iVar3, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || (!ENTITY::IS_ENTITY_DEAD(iVar4) && __LIB_1__::func_472(iVar4, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)))
			{
				__LIB_8__::func_192(&(Local_492[(9 + iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_599[iParam1] = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_614.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					__LIB_0__::func_172(iLocal_75[(13 + iVar2)]);
					iLocal_599[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_614.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					__LIB_0__::func_172(iLocal_75[(12 + iVar2)]);
					iLocal_599[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1202392137))
			{
				iLocal_599[iParam1] = 8;
			}
			break;
		case 8:
			if (__LIB_2__::func_598(iVar4, Local_492[(9 + iParam1) /*7*/], "PED2", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar4, 330, false);
				if (Local_433 != iVar4)
				{
					func_689(9, 1, iVar1, 0);
				}
				iLocal_599[iParam1] = 9;
			}
			break;
		case 9:
			if (__LIB_2__::func_598(iVar3, Local_492[(9 + iParam1) /*7*/], "PED1", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar3, 330, false);
				if (Local_433 != iVar3)
				{
					func_689(9, 0, iVar1, 0);
				}
				iLocal_599[iParam1] = 10;
			}
			break;
		case 10:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_492[(9 + iParam1) /*7*/]) || __LIB_7__::func_972(&(Local_492[(9 + iParam1) /*7*/])))
			{
				__LIB_7__::func_952(&(Local_492[(9 + iParam1) /*7*/]));
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_614.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_614.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_614.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				iLocal_599[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_400()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	if (iLocal_604 > 0)
	{
		func_690();
	}
	switch (iLocal_604)
	{
		case 0:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("EA_WORLD_HUMAN_TREE_CHOP_NEW"), 262148, __LIB_7__::func_981(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = func_691(iVar0);
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
						__LIB_2__::func_133(iVar3, __LIB_7__::func_975(Local_1617.f_136, 4), 0);
						if (__LIB_2__::func_117(64))
						{
							if (TASK::_0x6EEAD6AF637DA752(__LIB_8__::func_144(iVar1), __LIB_8__::func_18(), 4f, 0) && !__LIB_8__::func_140(iVar1))
							{
								vVar4 = { __LIB_8__::func_144(iVar1) };
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar3, false, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
								if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_478[iVar1]))
								{
									TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_478[iVar1], 0, 0, false, true, 0, false, -1f, false);
								}
								else
								{
									TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar4, 5f, 0, false, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
								TASK::_TASK_PERFORM_SEQUENCE_2(iVar3, iLocal_196, 0f, 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
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
					iLocal_604 = 2;
					Jump @719; //curOff = 426
					func_695();
					func_138();
					iVar0 = (iLocal_206 % 4);
					iVar1 = func_691(iVar0);
					if (!func_466(iVar1) && !__LIB_7__::func_939(__LIB_8__::func_20(iVar0)))
					{
						func_697(iVar0);
						iVar2 = (810 + iVar0);
						if (!__LIB_2__::func_763(iVar2, 0))
						{
							__LIB_8__::func_123(iVar2, 1, 1);
						}
						iVar3 = __LIB_2__::func_963(iVar2);
						__LIB_8__::func_21(&iVar3);
						func_699(iVar0);
						func_700(&iVar3, iVar0);
						if (__LIB_2__::func_1(iVar3, 0, 1))
						{
							if (!__LIB_7__::func_923(4096) && func_701(&iVar3, &(Local_2184[iVar0 /*5*/]), &(uLocal_2210[iVar0]), iVar0))
							{
								func_702(&iVar3, iVar0);
								iLocal_604 = 3;
								return 0;
							}
						}
					}
					if ((((iLocal_206 % 10) == 1 && !__LIB_2__::func_117(64)) && !__LIB_7__::func_923(4096)) && !__LIB_7__::func_923(512))
					{
						func_703();
						iLocal_604 = 1;
						return 0;
					}
					Jump @719; //curOff = 664
					if ((iLocal_206 % 10) == 1 && __LIB_2__::func_117(64))
					{
						func_703();
						iLocal_604 = 2;
					}
					Jump @719; //curOff = 696
					__LIB_1__::func_148(&(vLocal_570[0 /*3*/]));
					iLocal_604 = 2;
				}
				return 0;
			}
			default:
				break;
	}
}

void func_401()
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
		iVar1 = func_691(iVar0);
		if (((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iVar1]) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iVar1]) == 10) && (ENTITY::IS_ENTITY_DEAD(iVar3) || !PED::IS_PED_USING_ANY_SCENARIO(iVar3))) && !__LIB_8__::func_140(iVar1))
		{
			__LIB_8__::func_149(iVar1);
			func_474(iVar1, 0);
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

void func_402(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_602(&(Local_275[iParam0 /*52*/][0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_275[iParam0 /*52*/][1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_275[iParam0 /*52*/][2 /*17*/]), __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
}

void func_403(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_451(&(Local_211[iParam0 /*21*/]), 0);
	func_706(iParam0, 0);
	if (!bParam2)
	{
		if (iParam0 == 1)
		{
			__LIB_7__::func_965(524288);
		}
		else
		{
			__LIB_7__::func_928(268435456);
		}
	}
	if (bParam1)
	{
		iLocal_432 = -1;
	}
}

void func_404(int iParam0)
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
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1617.f_136, 128))
	{
		fLocal_210 = 8f;
	}
	iVar1 = 1;
	if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "bScriptedILO", true);
	}
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || __LIB_3__::func_63()) || __LIB_3__::func_64()) || __LIB_1__::func_499())
	{
		__LIB_1__::func_148(&(vLocal_570[7 /*3*/]));
	}
	if (__LIB_0__::func_75(&(vLocal_570[7 /*3*/])) && !__LIB_1__::func_285(&(vLocal_570[7 /*3*/]), 0.25f))
	{
		__LIB_3__::func_102(&(Local_275[0 /*52*/]));
	}
	iVar2 = func_659(iParam0, &(Local_211[0 /*21*/]), fLocal_210, &(Local_275[0 /*52*/]), &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iLocal_432 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_432 = iVar2;
	}
	if (!__LIB_7__::func_929(-2147483648))
	{
		if (!__LIB_7__::func_929(268435456))
		{
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (iLocal_432 == 1 && !__LIB_7__::func_929(536870912))
				{
					__LIB_2__::func_478(*iParam0, Global_35, __LIB_8__::func_22(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_7__::func_932(1048576);
				}
				func_403(0, 1, 0);
				__LIB_7__::func_932(268435456);
			}
		}
		else
		{
			switch (iLocal_432)
			{
				case 0:
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
					__LIB_7__::func_932(1073741824 /* Float: 2f */);
					func_403(0, 1, 0);
					break;
				case 1:
					if (__LIB_7__::func_929(536870912))
					{
						__LIB_7__::func_928(536870912);
						__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_7__::func_932(64);
						__LIB_8__::func_82(Local_1617.f_136, 262144);
						__LIB_8__::func_83(Local_1617.f_136, 256);
						func_403(0, 1, 0);
					}
					else
					{
						sVar3 = __LIB_8__::func_23();
						__LIB_2__::func_478(Global_35, *iParam0, sVar3, 0, -1082130432 /* Float: -1f */, MISC::GET_RANDOM_INT_IN_RANGE(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_403(0, 0, 0);
					}
					break;
			}
		}
	}
}

void func_405(int iParam0)
{
	switch (iLocal_598)
	{
		case 0:
			if (iLocal_98 == 1 || ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[12 /*12*/].f_8))
			{
				if (__LIB_2__::func_117(64))
				{
					iLocal_598 = 2;
				}
				else
				{
					iLocal_598 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_117(64))
			{
				if (iLocal_98 != 1)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Long", ENTITY::GET_ENTITY_COORDS(Local_614.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_598 = 2;
			}
			break;
		case 2:
			if (!__LIB_2__::func_117(64))
			{
				if (iLocal_98 == 1)
				{
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_FMN_EOS", *iParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Harmonic", ENTITY::GET_ENTITY_COORDS(Local_614.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_598 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_406()
{
	int iVar0;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_485))
	{
		iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_7__::func_958(), joaat("PROP_HUMAN_SEAT_CHAIR"), 1f, 0, false);
		iLocal_485 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_614.f_690[25 /*12*/].f_8, joaat("PROP_HUMAN_SEAT_CHAIR_DESK_WRITING"), TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true), TASK::_GET_SCENARIO_POINT_HEADING(iVar0, true), 0, 0, 0);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_485))
		{
		}
	}
}

void func_407()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_2__::func_963(__LIB_7__::func_964(7, 0, 0));
	iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(7, 1, 0));
	if (iLocal_602 > 0 && iLocal_602 < 15)
	{
		func_712();
	}
	switch (iLocal_602)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1913))
			{
				iLocal_1913 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1357.609f, -184.4249f, 102.2077f, 0f, 0f, -25f, 18.26119f, 3.749432f, 8f, "volLoaderLogBlocker");
				PATHFIND::_0x19C7567D2F2287D6(iLocal_1913, 7);
			}
			if (iLocal_98 == 2 || iLocal_98 == 3)
			{
				bVar2 = true;
				if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[13 /*12*/].f_8))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[13 /*12*/].f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[12 /*12*/].f_8))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[12 /*12*/].f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[1]))
					{
						iVar3 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_2105[1]);
						__LIB_2__::func_426(&iVar3);
						VEHICLE::_0x2BB2B5BCF0DF8008(iLocal_2105[1], 1);
						VEHICLE::_0xA72B1BF3857B94D7(iLocal_2105[1], 1);
					}
					if (__LIB_7__::func_923(256))
					{
						__LIB_7__::func_927(__LIB_8__::func_4(7), &Local_614);
						iLocal_602 = 1;
					}
					else
					{
						iLocal_602 = 15;
					}
				}
			}
			else
			{
				iLocal_602 = 15;
			}
			break;
		case 1:
			if (PED::_0x5E420FF293EE5472())
			{
				iVar4 = __LIB_8__::func_220(7, 0);
				if (iVar4 == __LIB_8__::func_4(7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
						__LIB_2__::func_56(iVar0, 1, 1);
						__LIB_2__::func_56(iVar1, 1, 1);
						__LIB_8__::func_147(&(Local_492[7 /*7*/]), iVar0, "OPERATOR", 1);
						__LIB_8__::func_147(&(Local_492[8 /*7*/]), iVar1, "SPOTTER", 1);
						__LIB_8__::func_16(&(Local_492[7 /*7*/]));
						__LIB_8__::func_16(&(Local_492[8 /*7*/]));
						__LIB_8__::func_192(&(Local_492[7 /*7*/]), "bBreakInternalLoop");
						__LIB_8__::func_192(&(Local_492[8 /*7*/]), "bBreakInternalLoop");
						iLocal_602 = 2;
					}
				}
			}
			break;
		case 2:
			if (__LIB_7__::func_973(&(Local_492[7 /*7*/]), "IDLE_LOOP"))
			{
				__LIB_8__::func_192(&(Local_492[7 /*7*/]), "bBreakInternalLoop");
				__LIB_8__::func_192(&(Local_492[8 /*7*/]), "bBreakInternalLoop");
			}
			else if (__LIB_8__::func_24(&(Local_492[7 /*7*/]), "bBreakInternalLoop"))
			{
				__LIB_8__::func_196(&(Local_492[7 /*7*/]), "bBreakInternalLoop");
				__LIB_8__::func_196(&(Local_492[8 /*7*/]), "bBreakInternalLoop");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1381571371))
			{
				if (!__LIB_7__::func_923(268435456))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_614.f_690[13 /*12*/].f_8))
					{
						ENTITY::PLAY_ENTITY_ANIM(Local_614.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 8f, false, true, false, 0f, 0);
						TASK::SET_ANIM_RATE(Local_614.f_690[13 /*12*/].f_8, 0.4f, 0, false);
						__LIB_7__::func_922(268435456);
					}
				}
				iLocal_602 = 3;
			}
			break;
		case 3:
			func_716(&iVar0, &iVar1);
			break;
		case 14:
			if (!__LIB_7__::func_929(256))
			{
				if (__LIB_2__::func_598(iVar0, Local_492[7 /*7*/], "OPERATOR", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(iVar0, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 330, false);
						__LIB_8__::func_183(&(Local_492[7 /*7*/]), iVar0, "OPERATOR");
						TASK::TASK_GO_STRAIGHT_TO_COORD(iVar0, -1349.967f, -202.9536f, 100.4027f, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
						func_689(7, 0, 0, 0);
					}
					__LIB_7__::func_952(&(Local_492[7 /*7*/]));
					__LIB_7__::func_932(256);
				}
			}
			if (!__LIB_7__::func_929(512))
			{
				if (__LIB_2__::func_598(iVar1, Local_492[8 /*7*/], "SPOTTER", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(iVar1, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						PED::SET_PED_CONFIG_FLAG(iVar1, 330, false);
						__LIB_8__::func_183(&(Local_492[8 /*7*/]), iVar1, "SPOTTER");
						func_689(7, 1, 0, 0);
					}
					__LIB_7__::func_952(&(Local_492[8 /*7*/]));
					__LIB_7__::func_932(512);
				}
			}
			if (__LIB_7__::func_929(256) && __LIB_7__::func_929(512))
			{
				iLocal_602 = 15;
			}
			break;
		case 15:
			break;
	}
}

int func_408(int iParam0)
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
	if (__LIB_8__::func_88(&Local_433, 1))
	{
		return 0;
	}
	if (__LIB_7__::func_923(32))
	{
		return 0;
	}
	if ((iLocal_206 % 5) != 0)
	{
		return 0;
	}
	if (!__LIB_1__::func_205(Global_35, Global_1392194[Local_1617.f_136 /*10*/].f_5, 1, 0))
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
	func_300(&uVar24);
	iVar22 = __LIB_8__::func_539(&uVar10, &uVar24, 9, Global_36, 15f, 0, 1, 1, Local_614.f_13, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
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
					__LIB_2__::func_133(iVar20, __LIB_7__::func_975(Local_1617.f_136, -1), 0);
				}
				iVar0[iVar23] = iVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (__LIB_8__::func_322(&Local_2147, &iVar0, &uLocal_2182, 1, __LIB_7__::func_923(2)))
	{
		__LIB_0__::func_516(&(Local_2147.f_34), 1);
		__LIB_7__::func_922(2);
		__LIB_7__::func_922(33554432);
		return 1;
	}
	return 0;
}

void func_410()
{
	if (__LIB_8__::func_232() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (__LIB_8__::func_215(Local_1617.f_136))
		{
			__LIB_7__::func_922(128);
		}
	}
}

void func_411()
{
	if (!__LIB_7__::func_907(Local_1617.f_136, 4))
	{
		if (__LIB_7__::func_929(65536))
		{
			__LIB_8__::func_85(Local_1617.f_136, 4);
		}
	}
}

bool func_416(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	char[] cVar7[8];
	int iVar8;
	__LIB_8__::func_247();
	func_722();
	func_723();
	func_724();
	iVar0 = func_691(0);
	iVar1 = 810;
	iVar2 = __LIB_2__::func_963(iVar1);
	__LIB_18__::func_67(iParam0, iParam1, &iVar2, &(iLocal_2082[2]), &(iLocal_2082[3]));
	switch (iLocal_1920)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1) && iLocal_604 >= 2)
			{
				__LIB_2__::func_279(*iParam1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[24 /*12*/].f_8, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_614.f_690[24 /*12*/].f_8, false);
				ENTITY::SET_ENTITY_COLLISION(Local_614.f_690[24 /*12*/].f_8, false, false);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_614.f_690[24 /*12*/].f_8, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_614.f_690[24 /*12*/].f_8, Local_614.f_690[24 /*12*/], Local_614.f_690[24 /*12*/].f_3, true, false, true);
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1388.585f, -272.0242f, 98.8074f, 0f, 0f, 84.9909f, 12.74726f, 17.5874f, 14f, "volAccident");
				iLocal_75[10] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1388.585f, -272.0242f, 98.8074f, 0f, 0f, 84.99091f, 24.8216f, 45f, 14f, "volAccidentTrot");
				iLocal_75[9] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1388.585f, -272.0242f, 98.8074f, 0f, 0f, 84.99091f, 44.1305f, 80f, 14f, "volAccidentCanter");
				iLocal_75[20] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1391.962f, -270.2142f, 99.82114f, 0f, 0f, 15.0005f, 1.639143f, 1.521353f, 1.523817f);
				POPULATION::_0xB56D41A694E42E86(iLocal_75[4], 534496, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[4], 0, 0, 0, -1, -1, 0);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[4], 7);
				iLocal_75[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.082f, -270.6321f, 98.77602f, 0f, 0f, -4.499413f, 22.57252f, 0.586106f, 4f, "Appleseed - volAccidentBlocking");
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[17], 7);
				POPULATION::_0xB56D41A694E42E86(iLocal_75[17], 534496, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[17], 0, 0, 0, -1, -1, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				__LIB_8__::func_107(*iParam0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam1, false, true);
				__LIB_8__::func_107(*iParam1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar2, false, true);
				__LIB_8__::func_107(iVar2, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2082[2], false, true);
				__LIB_8__::func_107(iLocal_2082[2], 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2082[3], false, true);
				__LIB_8__::func_107(iLocal_2082[3], 1);
				func_403(0, 1, 1);
				__LIB_8__::func_147(&(Local_492[2 /*7*/]), *iParam0, "FOREMAN", 1);
				__LIB_8__::func_147(&(Local_492[2 /*7*/]), *iParam1, "VICTIM", 1);
				__LIB_8__::func_147(&(Local_492[2 /*7*/]), iVar2, "PED1", 1);
				__LIB_8__::func_147(&(Local_492[2 /*7*/]), iLocal_2082[2], "PED2", 1);
				__LIB_8__::func_147(&(Local_492[2 /*7*/]), iLocal_2082[3], "PED3", 1);
				__LIB_8__::func_147(&(Local_492[2 /*7*/]), Global_35, "player", 1);
				__LIB_8__::func_148(&(Local_492[2 /*7*/]), Local_614.f_690[6 /*12*/].f_8, "MONEY");
				__LIB_8__::func_148(&(Local_492[2 /*7*/]), Local_614.f_690[7 /*12*/].f_8, "AXE1");
				__LIB_8__::func_148(&(Local_492[2 /*7*/]), Local_614.f_690[8 /*12*/].f_8, "AXE2");
				__LIB_8__::func_148(&(Local_492[2 /*7*/]), Local_614.f_690[9 /*12*/].f_8, "AXE3");
				__LIB_8__::func_148(&(Local_492[2 /*7*/]), Local_614.f_690[10 /*12*/].f_8, "CIGARETTE");
				__LIB_8__::func_148(&(Local_492[2 /*7*/]), Local_614.f_690[24 /*12*/].f_8, "TREE");
				__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PBL_LIFT_SUCCESS");
				__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PBL_IMPATIENT");
				__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PBL_COMBAT_L");
				__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PBL_COMBAT_R");
				__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PB_VIC_BRKOUT");
				__LIB_0__::func_928(&(Local_1617.f_35), *iParam0, "EA_LCMP_Foreman", 0);
				__LIB_0__::func_928(&(Local_1617.f_35), iVar2, "LOG_WORKER_3", 0);
				__LIB_0__::func_928(&(Local_1617.f_35), iLocal_2082[2], "LCMP_WITNESS1", 0);
				__LIB_0__::func_928(&(Local_1617.f_35), *iParam1, "LOGGING_VICTIM", 0);
				__LIB_8__::func_108(&(Local_1617.f_35), "LCMPF_IG3", 0);
				__LIB_8__::func_108(&(Local_1617.f_35), "LCMP_IG_TREE_P2", 0);
				AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_APPLESEED_2_START");
				__LIB_7__::func_941(1);
				if (iLocal_98 == 2 && __LIB_7__::func_908(1, 2))
				{
					ENTITY::PLAY_ENTITY_ANIM(Local_614.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				}
				__LIB_8__::func_16(&(Local_492[2 /*7*/]));
				__LIB_7__::func_934(67108864);
				iLocal_1920 = 2;
			}
			break;
		case 2:
			if (func_732(iParam1, iVar0))
			{
				vVar3 = { __LIB_2__::func_114(Global_35, 2f) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, __LIB_8__::func_25(), false) < 60f)
				{
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					__LIB_7__::func_922(4096);
					__LIB_7__::func_941(2);
					__LIB_7__::func_922(32);
					__LIB_1__::func_148(&(vLocal_570[4 /*3*/]));
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMPF_IG3", iVar2, *iParam0, 0, 0, 1, 1);
					func_702(&iVar2, 0);
					func_697(0);
					iLocal_1920 = 1;
				}
			}
			else if (__LIB_3__::func_332(__LIB_8__::func_144(iVar0), 1) <= 63f)
			{
				if (!__LIB_0__::func_75(&(vLocal_570[4 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_570[4 /*3*/]));
				}
				else if (__LIB_0__::func_33(&(vLocal_570[4 /*3*/])))
				{
					__LIB_2__::func_112(&(vLocal_570[4 /*3*/]));
				}
				if (__LIB_1__::func_285(&(vLocal_570[4 /*3*/]), 7.5f))
				{
					__LIB_7__::func_932(2097152);
					iLocal_1920 = 10;
				}
			}
			else if (__LIB_0__::func_75(&(vLocal_570[4 /*3*/])) && !__LIB_0__::func_33(&(vLocal_570[4 /*3*/])))
			{
				__LIB_2__::func_113(&(vLocal_570[4 /*3*/]));
			}
			break;
		case 1:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_1__::func_313(&(vLocal_570[4 /*3*/]), 2f))
			{
				__LIB_8__::func_192(&(Local_492[2 /*7*/]), "bBreakInternalLoop");
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar2, -1318036203))
			{
				__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_2_START", 0);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 146, true);
				__LIB_8__::func_196(&(Local_492[2 /*7*/]), "bBreakInternalLoop");
				func_737();
				iLocal_604 = 3;
				iLocal_1920 = 4;
			}
			break;
		case 4:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			func_129();
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, 935159765))
			{
				__LIB_7__::func_934(131072);
				PED::_0x735662994E60A710(*iParam1, 1);
				PED::_0x897934E868EDDD6C(*iParam1, 55120, 0.2f, 0f, 0f);
				PED::_0x91BAB9E064F036CD(*iParam1, 0.5f);
				func_337(iParam1);
				__LIB_2__::func_122(*iParam1, "SCREAM_TERROR", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_TRIGGER_SONAR_BLIP_2(-890428877, *iParam1);
			}
			if (!__LIB_7__::func_923(512) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, 442538763))
			{
				__LIB_2__::func_73(*iParam1, &(uLocal_2092[0]), -89429847, 580546400, 0, "LOG_BLIP_VICT");
				PED::_0x735662994E60A710(*iParam1, 1);
				PED::_SET_PED_WOUND_EFFECT(*iParam1, 0, 55120, 0.2f, 0f, 0f, 0f, 0f, -1f, 0.5f);
				PED::_REMOVE_PED_WOUND_EFFECT(*iParam1, 0.5f);
				__LIB_7__::func_922(512);
				PED::_0xAE6004120C18DF97(*iParam1, 0, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam1, 319570);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam1, true);
				PED::_SET_PED_BODY_COMPONENT(*iParam1, 306062959);
				PED::_UPDATE_PED_VARIATION(*iParam1, false, true, true, true, false);
				__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_TFHEL", *iParam0, *iParam1, 0, 0, 1, 1);
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_TRIGGER_SONAR_BLIP_2(-890428877, *iParam1);
				__LIB_2__::func_122(*iParam1, "SCREAM_TERROR", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 265434504))
			{
				PED::APPLY_DAMAGE_TO_PED(*iParam1, 50, 0, 55120, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1836246720))
			{
				__LIB_0__::func_172(iLocal_75[20]);
				iLocal_75[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.421f, -270.6241f, 99.11503f, 0f, 0f, -4.797453f, 21.93634f, 0.903251f, 1.400946f, "Appleseed - volTreeNav");
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[6], 7);
				__LIB_0__::func_325(&(uLocal_2092[0]));
				__LIB_1__::func_148(&(vLocal_570[3 /*3*/]));
				iLocal_1920 = 5;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			func_129();
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (__LIB_8__::func_24(&(Local_492[2 /*7*/]), "bBreakInternalLoop"))
			{
				__LIB_8__::func_196(&(Local_492[2 /*7*/]), "bBreakInternalLoop");
			}
			func_739(&(Local_1617.f_32), &(Local_1617.f_33));
			if (__LIB_18__::func_68(&(Local_1617.f_32), "LOG_CTXTHLP", __LIB_8__::func_30(), 0, joaat("INPUT_CONTEXT_Y"), 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, joaat("MEDIUM_TIMED_EVENT"), 0))
			{
				MAP::DISPLAY_RADAR(false);
				bVar6 = true;
				__LIB_0__::func_37(&(vLocal_570[3 /*3*/]));
			}
			else if (__LIB_18__::func_68(&(Local_1617.f_33), "LOG_CTXTHLP", __LIB_8__::func_31(), 0, joaat("INPUT_CONTEXT_Y"), 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, joaat("MEDIUM_TIMED_EVENT"), 0))
			{
				__LIB_7__::func_934(256);
				MAP::DISPLAY_RADAR(false);
				bVar6 = true;
				__LIB_0__::func_37(&(vLocal_570[3 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_570[3 /*3*/]), 7.5f))
			{
				iLocal_1920 = 6;
				__LIB_1__::func_148(&(vLocal_570[1 /*3*/]));
				func_743();
			}
			if (__LIB_1__::func_313(&(vLocal_570[1 /*3*/]), 7.5f))
			{
				iLocal_1920 = 9;
			}
			if (bVar6)
			{
				if (Global_36.f_1 > __LIB_8__::func_32())
				{
					__LIB_7__::func_934(256);
				}
				__LIB_1__::func_748(&(Local_1617.f_32), 1, 1);
				__LIB_1__::func_748(&(Local_1617.f_33), 1, 1);
				__LIB_0__::func_325(&iLocal_2016);
				__LIB_1__::func_148(&(vLocal_570[3 /*3*/]));
				__LIB_0__::func_37(&(vLocal_570[1 /*3*/]));
				__LIB_8__::func_82(Local_1617.f_136, 128);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4352, false);
				__LIB_8__::func_131(&Local_1617, 65536);
				PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_75[4]);
				__LIB_7__::func_932(16384);
				__LIB_3__::func_623(&Local_156);
				Local_156.f_1 = Global_35;
				if (__LIB_7__::func_933(256))
				{
					Local_156.f_8 = { __LIB_8__::func_33(&(Local_492[4 /*7*/]), "ARTHUR", func_482(4)) };
					Local_156.f_19 = __LIB_8__::func_200(&(Local_492[4 /*7*/]), "ARTHUR", func_482(4));
				}
				else
				{
					Local_156.f_8 = { __LIB_8__::func_33(&(Local_492[3 /*7*/]), "ARTHUR", func_482(3)) };
					Local_156.f_19 = __LIB_8__::func_200(&(Local_492[3 /*7*/]), "ARTHUR", func_482(3));
				}
				Local_156.f_17 = 0.15f;
				Local_156.f_18 = 0.2f;
				__LIB_1__::func_336(&(Local_156.f_23), 17425);
				__LIB_8__::func_131(&Local_1617, 65536);
				__LIB_3__::func_995(&Local_156, 129);
				__LIB_7__::func_961(&Local_433, 4);
				iLocal_1920 = 7;
			}
			break;
		case 6:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			__LIB_8__::func_191(&(Local_492[2 /*7*/]), "PBL_IMPATIENT", 1);
			__LIB_8__::func_192(&(Local_492[2 /*7*/]), "bBreakInternalLoop");
			__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_TFSOM", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_1920 = 5;
			break;
		case 7:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				if (__LIB_7__::func_933(256))
				{
					__LIB_8__::func_147(&(Local_492[4 /*7*/]), Global_35, "ARTHUR", 1);
					__LIB_8__::func_16(&(Local_492[4 /*7*/]));
					PATHFIND::_0x19C7567D2F2287D6(iLocal_75[4], 7);
					iLocal_1920 = 8;
				}
				else
				{
					__LIB_8__::func_147(&(Local_492[3 /*7*/]), Global_35, "ARTHUR", 1);
					__LIB_8__::func_16(&(Local_492[3 /*7*/]));
					PATHFIND::_0x19C7567D2F2287D6(iLocal_75[4], 7);
					iLocal_1920 = 8;
				}
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (__LIB_7__::func_973(&(Local_492[2 /*7*/]), "LIFT_LOOP") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 331855897))
			{
				if (!__LIB_0__::func_139(Local_1617.f_32))
				{
					Local_1617.f_32 = __LIB_7__::func_915("LOG_CTXTHLP", joaat("INPUT_CONTEXT_ACTION"), 1, 0, 0, 9, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_0__::func_45("LOG_HELP_MASH", 10000, 0, 0, 0, 1);
					__LIB_8__::func_82(Local_1617.f_136, 64);
					__LIB_8__::func_176(Local_1617.f_136);
					__LIB_7__::func_941(16);
					__LIB_1__::func_148(&(vLocal_570[3 /*3*/]));
				}
				if (__LIB_4__::func_442(Local_1617.f_32, 1))
				{
					__LIB_1__::func_515(Local_1617.f_32, 1);
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")))
				{
					PAD::SET_PAD_SHAKE(0, 250, 50);
				}
				if (__LIB_0__::func_567(Local_1617.f_32, 1) || __LIB_1__::func_285(&(vLocal_570[3 /*3*/]), 15f))
				{
					__LIB_0__::func_37(&(vLocal_570[3 /*3*/]));
					__LIB_0__::func_105(1);
					__LIB_3__::func_465(13, 0, 0, 0, *iParam0, 0, 1065353216 /* Float: 1f */, 0);
					__LIB_1__::func_748(&(Local_1617.f_32), 1, 1);
					__LIB_7__::func_928(16384);
					Local_433.f_3 = 3;
					iLocal_1920 = 9;
				}
			}
			break;
		case 9:
			__LIB_1__::func_748(&(Local_1617.f_32), 1, 1);
			__LIB_1__::func_748(&(Local_1617.f_33), 1, 1);
			__LIB_0__::func_325(&iLocal_2016);
			func_743();
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (__LIB_7__::func_963(&(Local_492[3 /*7*/])))
			{
				__LIB_8__::func_192(&(Local_492[3 /*7*/]), "bBreakInternalLoop");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_8__::func_132(&Local_1617, 65536);
			}
			if (__LIB_7__::func_963(&(Local_492[4 /*7*/])))
			{
				__LIB_8__::func_192(&(Local_492[4 /*7*/]), "bBreakInternalLoop");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_8__::func_132(&Local_1617, 65536);
			}
			if (__LIB_7__::func_963(&(Local_492[2 /*7*/])))
			{
				__LIB_8__::func_191(&(Local_492[2 /*7*/]), "PBL_LIFT_SUCCESS", 1);
				__LIB_8__::func_192(&(Local_492[2 /*7*/]), "bBreakInternalLoop");
				__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_TFHLS", *iParam0, *iParam1, 0, 0, 1, 1);
				PED::_0xAE6004120C18DF97(*iParam1, 0, 1);
				AUDIO::_PLAY_SOUND_FROM_POSITION("LOG_LIFT", ENTITY::GET_ENTITY_COORDS(Local_614.f_690[24 /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				__LIB_7__::func_965(131072);
			}
			__LIB_7__::func_941(512);
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[20]))
			{
				iLocal_75[20] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			iLocal_1920 = 11;
			break;
		case 10:
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			__LIB_8__::func_183(&(Local_492[2 /*7*/]), *iParam1, "Victim");
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(*iParam1, __LIB_8__::func_179(), 0, 0, 0);
			__LIB_7__::func_952(&(Local_492[2 /*7*/]));
			OBJECT::DELETE_OBJECT(&(Local_614.f_690[7 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(Local_614.f_690[8 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(Local_614.f_690[9 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(Local_614.f_690[10 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(Local_614.f_690[24 /*12*/].f_8));
			iLocal_1920 = 11;
			break;
		case 11:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("RUMBLE")))
			{
				PAD::SET_PAD_SHAKE(0, 250, 100);
			}
			func_108(1);
			if (((__LIB_7__::func_933(1) && __LIB_7__::func_933(2)) && __LIB_7__::func_933(4)) && __LIB_7__::func_933(8))
			{
				iLocal_1920 = 14;
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[24 /*12*/].f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[24 /*12*/].f_8, -1545720465))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("LOG_PUT_DOWN", ENTITY::GET_ENTITY_COORDS(Local_614.f_690[24 /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
					__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[24 /*12*/].f_8, 745376786))
				{
					ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_614.f_690[24 /*12*/].f_8, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[24 /*12*/].f_8, true);
					__LIB_8__::func_183(&(Local_492[2 /*7*/]), Local_614.f_690[24 /*12*/].f_8, "TREE");
				}
			}
			if (!__LIB_7__::func_933(1))
			{
				if (__LIB_2__::func_598(*iParam0, Local_492[2 /*7*/], "FOREMAN", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
					{
						__LIB_8__::func_183(&(Local_492[2 /*7*/]), *iParam0, "FOREMAN");
						__LIB_8__::func_107(*iParam0, 0);
					}
					__LIB_7__::func_941(4096);
					__LIB_7__::func_934(1);
					if (!__LIB_7__::func_929(2097152))
					{
						iLocal_1920 = 12;
					}
				}
			}
			if (!__LIB_7__::func_933(2))
			{
				if (__LIB_2__::func_598(iVar2, Local_492[2 /*7*/], "PED1", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						__LIB_8__::func_183(&(Local_492[2 /*7*/]), iVar2, "PED1");
						__LIB_8__::func_107(iVar2, 0);
						__LIB_8__::func_124(iVar1, 1);
					}
					__LIB_7__::func_934(2);
				}
			}
			if (!__LIB_7__::func_933(4))
			{
				if (__LIB_2__::func_598(iLocal_2082[2], Local_492[2 /*7*/], "PED2", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[2]))
					{
						__LIB_8__::func_183(&(Local_492[2 /*7*/]), iLocal_2082[2], "PED2");
						__LIB_8__::func_107(iLocal_2082[2], 1);
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[2], __LIB_8__::func_179(), 0, 0, 0);
					}
					__LIB_7__::func_934(4);
				}
			}
			if (!__LIB_7__::func_933(8))
			{
				if (__LIB_2__::func_598(iLocal_2082[3], Local_492[2 /*7*/], "PED3", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[3]))
					{
						__LIB_8__::func_183(&(Local_492[2 /*7*/]), iLocal_2082[3], "PED3");
						__LIB_8__::func_107(iLocal_2082[3], 1);
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[3], __LIB_8__::func_179(), 0, 0, 0);
					}
					__LIB_7__::func_934(8);
				}
			}
			break;
		case 12:
			__LIB_7__::func_922(2);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && __LIB_0__::func_665(*iParam0, Global_35, 0, 1) < 40f)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
				if (__LIB_7__::func_908(Local_1617.f_136, 64))
				{
					cVar7 = "LOG_ACCPH";
				}
				else
				{
					cVar7 = "LOG_ACCPN";
				}
				__LIB_3__::func_154(&(Local_1617.f_35), cVar7, *iParam0, Global_35, 0, 0, 1, 1);
			}
			iLocal_1920 = 11;
			break;
		case 14:
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				__LIB_7__::func_941(32);
				__LIB_7__::func_941(2);
				if (__LIB_2__::func_763(Local_1617.f_138, 0))
				{
					__LIB_8__::func_124(Local_1617.f_138, 1);
					__LIB_2__::func_451(&(Local_211[0 /*21*/]), 0);
				}
				__LIB_7__::func_926(256);
				__LIB_1__::func_148(&(vLocal_570[0 /*3*/]));
				iVar8 = 0;
				while (iVar8 < iLocal_2146)
				{
					func_755(&iVar8);
					iLocal_2130[iVar8] = -1;
					iVar8++;
				}
				iLocal_2146 = 0;
				__LIB_7__::func_938();
				__LIB_7__::func_965(67108864);
				iLocal_1920 = 13;
			}
			break;
		case 13:
			__LIB_2__::func_56(iVar2, 1, 1);
			__LIB_4__::func_356(&iVar2, &(Local_211[1 /*21*/]), &(Local_275[1 /*52*/]), 0, 1);
			__LIB_2__::func_56(iLocal_2082[2], 1, 1);
			__LIB_4__::func_356(&(iLocal_2082[2]), &(Local_211[1 /*21*/]), &(Local_275[1 /*52*/]), 0, 1);
			__LIB_2__::func_56(iLocal_2082[3], 1, 1);
			__LIB_4__::func_356(&(iLocal_2082[3]), &(Local_211[1 /*21*/]), &(Local_275[1 /*52*/]), 0, 1);
			func_756(0, 0, 1);
			func_403(0, 1, 0);
			if (__LIB_7__::func_929(2097152))
			{
				__LIB_7__::func_941(64);
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_417(int iParam0)
{
	if (__LIB_1__::func_205(*iParam0, iLocal_75[0], 1, 0) && iLocal_1922 < 5)
	{
		iLocal_1922 = 5;
	}
	switch (iLocal_1922)
	{
		case 0:
			func_402(0);
			__LIB_8__::func_239(1, 0);
			func_403(0, 1, 0);
			func_758(0, 0);
			iLocal_1922 = 2;
			break;
		case 2:
			switch (iLocal_432)
			{
				case 1:
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_TFPLNF", Global_35, *iParam0, 0, 0, 1, 1);
					func_403(0, 1, 0);
					iLocal_1922 = 5;
					break;
			}
			break;
		case 5:
			break;
	}
}

void func_418(int* iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_7__::func_933(65536) && iLocal_1921 < 5)
	{
		func_403(1, 0, 0);
		func_756(1, 0, 1);
		iLocal_1921 = 5;
	}
	if (iLocal_1921 >= 2)
	{
		iVar1 = 1;
		iVar0 = func_659(iParam0, &(Local_211[1 /*21*/]), 8f, &(Local_275[1 /*52*/]), &iVar1, 0, 1, 0, 0, __LIB_2__::func_340(1, 0, 0) | 2048, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_1921)
	{
		case 0:
			func_402(1);
			func_403(1, 0, 0);
			__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PB_VIC_BRKOUT");
			__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PB_HANDOVER_R");
			__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PB_HANDOVER_L");
			__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PB_HANDOVER_N");
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[20]))
			{
				iLocal_75[20] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			__LIB_1__::func_148(&(vLocal_570[1 /*3*/]));
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[19]))
			{
				iLocal_75[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.695f, -268.6573f, 99.66403f, 0f, 0f, -3.999926f, 4.302533f, 3.265524f, 2.894566f, "EA LCMP - volGiveMoney");
			}
			iLocal_1921 = 1;
			break;
		case 1:
			if ((__LIB_2__::func_227(0, 1, 0, 0) && __LIB_1__::func_285(&(vLocal_570[1 /*3*/]), 1.5f)) && __LIB_2__::func_118(*iParam0, 1, 1) < 10f)
			{
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				if (__LIB_7__::func_908(Local_1617.f_136, 128))
				{
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMPF_IG_TFRSH", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMPF_IG_TFRSN", *iParam0, Global_35, 0, 0, 1, 1);
				}
				PED::SET_PED_CONFIG_FLAG(*iParam0, 277, false);
				iLocal_1921 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_118(*iParam0, 1, 1) < 20f)
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam0))
			{
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			}
			func_760(iParam0);
			switch (iVar0)
			{
				case 0:
					func_403(1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[6 /*12*/].f_8))
					{
						ENTITY::SET_ENTITY_COORDS(Local_614.f_690[6 /*12*/].f_8, __LIB_7__::func_985(), true, false, true, true);
					}
					__LIB_3__::func_623(&Local_2216);
					Local_2216.f_1 = Global_35;
					func_761(&(Local_2216.f_8), &(Local_156.f_19), iParam0);
					Local_2216.f_18 = 0.2f;
					Local_2216.f_17 = 0.15f;
					Local_2216.f_21 = 1f;
					__LIB_1__::func_336(&(Local_2216.f_23), 17920);
					StringCopy(&(Local_492[2 /*7*/].f_4), "RECOVERY_BOOL", 24);
					__LIB_8__::func_131(&Local_1617, 65536);
					__LIB_3__::func_995(&Local_2216, 106);
					iLocal_1921 = 3;
					break;
				case 1:
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMPF_IG_TFPLRN", Global_35, *iParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_1921 = 6;
					break;
			}
			break;
		case 3:
			if (__LIB_3__::func_995(&Local_2216, 106) && __LIB_8__::func_34(&(Local_492[2 /*7*/])))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1617, 65536);
				__LIB_8__::func_240(&(Local_492[2 /*7*/]), 1, 1);
				__LIB_3__::func_154(&(Local_1617.f_35), "LCMPF_IG_TFPLRP", Global_35, *iParam0, 0, 0, 1, 1);
				iLocal_1921 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
			{
				__LIB_8__::func_360(&(Local_492[2 /*7*/]));
				__LIB_1__::func_432(500, 0, 0, 1, 1);
				__LIB_3__::func_465(13, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_190(*iParam0, 500);
				if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[6 /*12*/].f_8))
				{
					ENTITY::SET_ENTITY_COORDS(Local_614.f_690[6 /*12*/].f_8, __LIB_7__::func_984(), true, false, true, true);
				}
				__LIB_8__::func_26(&(Local_492[2 /*7*/]), "PB_VIC_BRKOUT");
				iLocal_1921 = 5;
			}
			break;
		case 5:
			if ((!__LIB_7__::func_933(524288) && iLocal_2249 < 2) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
			}
			switch (iVar0)
			{
				case 0:
					__LIB_3__::func_154(&(Local_1617.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					iLocal_2249++;
					break;
				case 1:
					__LIB_3__::func_154(&(Local_1617.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2249++;
					iLocal_1921 = 6;
					break;
			}
			break;
		case 6:
			if ((!__LIB_7__::func_933(524288) && iLocal_2249 < 2) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
				func_762(1, 0, 0);
			}
			switch (iVar0)
			{
				case 1:
					__LIB_3__::func_154(&(Local_1617.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2249++;
					break;
			}
			break;
	}
}

int func_419(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	bool bVar6;
	switch (iLocal_596)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			__LIB_0__::func_325(&(uLocal_2102[0]));
			__LIB_8__::func_147(&(Local_492[0 /*7*/]), *iParam0, "FOREMAN", 1);
			__LIB_8__::func_148(&(Local_492[0 /*7*/]), Local_614.f_690[3 /*12*/].f_8, "PEN");
			__LIB_8__::func_148(&(Local_492[0 /*7*/]), Local_614.f_690[4 /*12*/].f_8, "BOOK");
			__LIB_8__::func_26(&(Local_492[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT");
			__LIB_8__::func_9(&(Local_492[0 /*7*/]), &vVar0, &vVar3);
			__LIB_8__::func_148(&(Local_492[0 /*7*/]), Local_614.f_690[25 /*12*/].f_8, "p_chair04x");
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_614.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				__LIB_3__::func_623(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { __LIB_8__::func_35() };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 2f;
				__LIB_1__::func_336(&(Local_156.f_23), 128);
				__LIB_3__::func_995(&Local_156, 129);
				iLocal_596 = 1;
			}
			else
			{
				func_403(0, 1, 1);
				__LIB_8__::func_16(&(Local_492[0 /*7*/]));
				iLocal_596 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_36(), 5f);
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { __LIB_8__::func_33(&(Local_492[0 /*7*/]), "FOREMAN", "PB_L_ENTER") };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 0.25f;
				Local_156.f_17 = 0.2f;
				__LIB_1__::func_336(&(Local_156.f_23), 1152);
				__LIB_3__::func_995(&Local_156, 129);
				iLocal_596 = 2;
			}
			break;
		case 2:
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_36(), 5f);
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				iLocal_596 = 3;
			}
			break;
		case 3:
			__LIB_7__::func_922(1);
			__LIB_8__::func_16(&(Local_492[0 /*7*/]));
			iLocal_596 = 4;
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				__LIB_7__::func_934(67108864);
				if (__LIB_7__::func_923(2))
				{
					iLocal_596 = 6;
				}
				else
				{
					iLocal_596 = 7;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(-1f))
			{
				func_772("LOG_OBJ01", 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_2102[0]), -89429847, 580546400, 0, __LIB_7__::func_978());
				iLocal_596 = 7;
			}
			break;
		case 7:
			if (__LIB_8__::func_109(iParam0, 0, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_0__::func_769();
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
				__LIB_7__::func_922(4096);
				__LIB_8__::func_192(&(Local_492[0 /*7*/]), "bBreakInternalLoop");
				__LIB_8__::func_183(&(Local_492[0 /*7*/]), Local_614.f_690[4 /*12*/].f_8, "BOOK");
				ENTITY::PLAY_ENTITY_ANIM(Local_614.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				if (__LIB_7__::func_923(64))
				{
					if (__LIB_7__::func_908(Local_1617.f_136, 64))
					{
						__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_ACK_ACP", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_ACK_ACN", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (__LIB_7__::func_908(Local_1617.f_136, 2))
				{
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_ACK_2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_S2ACK", *iParam0, Global_35, 0, 0, 1, 1);
					__LIB_8__::func_82(Local_1617.f_136, 2);
				}
				__LIB_7__::func_934(65536);
				iLocal_596 = 8;
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (__LIB_2__::func_598(*iParam0, Local_492[0 /*7*/], "FOREMAN", 0, 0, 1, 0) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2f, -2f, 2113536, 0f, false, false, -1f, 0, 524297, -1f);
				__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_S2BFM", *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_1__::func_148(&(vLocal_570[3 /*3*/]));
				func_403(0, 1, 0);
				__LIB_8__::func_239(1, 0);
				iLocal_596 = 9;
			}
			if (!__LIB_8__::func_109(iParam0, 0, 0))
			{
				func_403(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				func_756(0, 0, 1);
				iLocal_596 = 13;
			}
			break;
		case 9:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
			}
			if (__LIB_0__::func_75(&(vLocal_570[3 /*3*/])) && __LIB_1__::func_871(&(vLocal_570[3 /*3*/])) > 30000)
			{
				iLocal_596 = 10;
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				if (!__LIB_7__::func_929(268435456))
				{
					__LIB_8__::func_239(1, 1);
					func_403(0, 1, 0);
					func_775(0);
					__LIB_7__::func_932(268435456);
				}
				switch (iLocal_432)
				{
					case 0:
						func_403(0, 1, 0);
						__LIB_8__::func_239(0, 0);
						func_756(0, 0, 1);
						__LIB_7__::func_922(2048);
						__LIB_8__::func_82(Local_1617.f_136, 16384);
						__LIB_8__::func_253(&Local_1617);
						__LIB_3__::func_623(&Local_156);
						Local_156.f_8 = { -1400.12f, -207.92f, 101.88f };
						Local_156.f_14 = { __LIB_8__::func_37() };
						Local_156.f_1 = Global_35;
						Local_156.f_17 = 0.2f;
						Local_156.f_18 = 0.2f;
						Local_156.f_19 = 20.6f;
						Local_156.f_25 = Local_492[5 /*7*/];
						StringCopy(&(Local_156.f_30), "ARTHUR", 24);
						StringCopy(&(Local_156.f_26), func_482(5), 32);
						__LIB_1__::func_336(&(Local_156.f_23), 26624);
						__LIB_8__::func_131(&Local_1617, 65536);
						__LIB_3__::func_995(&Local_156, 129);
						iLocal_596 = 11;
						break;
					case 1:
						func_403(0, 1, 1);
						__LIB_8__::func_239(0, 0);
						__LIB_7__::func_941(2048);
						iLocal_596 = 13;
						break;
				}
			}
			if (!__LIB_8__::func_109(iParam0, 0, 0))
			{
				func_403(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				func_756(0, 0, 1);
				__LIB_7__::func_941(2048);
				iLocal_596 = 13;
			}
			break;
		case 10:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			__LIB_0__::func_37(&(vLocal_570[3 /*3*/]));
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_S2WS", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_596 = 9;
			break;
		case 11:
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_S2AL", Global_35, *iParam0, 0, 0, 1, 1);
				__LIB_8__::func_147(&(Local_492[5 /*7*/]), Global_35, "ARTHUR", 1);
				__LIB_8__::func_148(&(Local_492[5 /*7*/]), Local_614.f_690[6 /*12*/].f_8, "MONEY");
				__LIB_8__::func_16(&(Local_492[5 /*7*/]));
				iLocal_596 = 12;
			}
			break;
		case 12:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
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
					__LIB_0__::func_325(&(uLocal_2102[0]));
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_S2VG", *iParam0, Global_35, 0, 0, 1, 1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
					__LIB_2__::func_73(iLocal_2105[0], &(uLocal_2102[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
					if (__LIB_7__::func_908(1, 2))
					{
						__LIB_8__::func_131(&Local_1617, 128);
					}
					iLocal_596 = 15;
				}
			}
			break;
		case 13:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_227(-3.5f, 1, *iParam0, 1))
			{
				__LIB_0__::func_325(&(uLocal_2102[0]));
				if (__LIB_1__::func_205(Global_35, iLocal_75[0], 1, 0))
				{
					if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_153(Global_35, 1, 1, 0) == joaat("WEAPON_UNARMED"))
					{
						TASK::TASK_PLAY_ANIM(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_S2OT", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_596 = 14;
			}
			break;
		case 14:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!__LIB_1__::func_322("LCMP_IG_S2OT"))
			{
				__LIB_3__::func_154(&(Local_1617.f_35), "LCMP_IG_S2MNT", *iParam0, Global_35, 0, 0, 1, 1);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				iLocal_596 = 15;
			}
			break;
		case 15:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			bVar6 = true;
			if (__LIB_7__::func_923(2048) && !__LIB_7__::func_972(&(Local_492[5 /*7*/])))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_8__::func_132(&Local_1617, 65536);
				}
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3) && __LIB_2__::func_227(-3.5f, 1, *iParam0, 1))
				{
					__LIB_7__::func_941(4096);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					func_403(0, 1, 0);
					__LIB_7__::func_941(4096);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1400.86f, -205.41f, 102.34f, 2f, -1, false, false, false, false);
					__LIB_8__::func_38(iParam0);
					__LIB_7__::func_965(67108864);
					iLocal_596 = 17;
				}
			}
			break;
		case 17:
			if (__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				if (__LIB_8__::func_254(Local_1617.f_138, &Local_1617, 60000, 1))
				{
					__LIB_2__::func_451(&(Local_211[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_420(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar5;
	vector3 vVar6[24];
	bool bVar9;
	vector3 vVar10[24];
	if (__LIB_8__::func_88(&Local_433, 1) && Local_433 == *iParam0)
	{
		if (iLocal_596 < 17)
		{
			__LIB_8__::func_211();
			iLocal_596 = 17;
		}
	}
	func_722();
	switch (iLocal_596)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			if (__LIB_7__::func_908(Local_1617.f_136, 131072))
			{
				iVar0 = iLocal_597;
				iLocal_597 = iVar0 + 1;
				__LIB_8__::func_83(Local_1617.f_136, 131072);
			}
			else
			{
				__LIB_8__::func_82(Local_1617.f_136, 131072);
			}
			if (__LIB_7__::func_908(Local_1617.f_136, 16384))
			{
				__LIB_2__::func_73(iLocal_2105[0], &(uLocal_2102[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
			}
			if (func_333())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_39(), 262209, __LIB_8__::func_40(), __LIB_8__::func_41());
				iLocal_484 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_42(), __LIB_8__::func_39(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_43(), 262209, __LIB_8__::func_40(), __LIB_8__::func_44());
				iLocal_484 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_45(), __LIB_8__::func_43(), 1f, 0, false);
			}
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_8 = { __LIB_8__::func_35() };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				__LIB_1__::func_336(&(Local_156.f_23), 128);
				__LIB_3__::func_995(&Local_156, 129);
				iLocal_596 = 1;
			}
			else
			{
				func_402(0);
				func_403(0, 1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_484))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_484, __LIB_0__::func_196(func_333(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(func_333(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_596 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				func_402(0);
				func_403(0, 1, 1);
				__LIB_7__::func_922(1);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_484))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_484, __LIB_0__::func_196(func_333(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, __LIB_5__::func_263(func_333(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_596 = 4;
			}
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				iVar1 = __LIB_0__::func_982(1);
				if (iVar1 > 3 || (iVar1 == 3 && __LIB_7__::func_907(1, 128)))
				{
					__LIB_8__::func_85(Local_1617.f_136, 4096);
				}
				func_403(0, 1, 1);
				__LIB_8__::func_239(1, 0);
				if (__LIB_7__::func_923(2))
				{
					iLocal_596 = 6;
				}
				else
				{
					iLocal_596 = 7;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(-1f))
			{
				__LIB_0__::func_325(&(uLocal_2102[0]));
				iLocal_596 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			if (__LIB_8__::func_109(iParam0, 0, func_333()) && __LIB_8__::func_118(iParam0, func_793(), 10f, 0, func_794(), 1, -1243035987))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_7__::func_922(4096);
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_333());
				switch (iLocal_597)
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
				__LIB_3__::func_154(&(Local_1617.f_35), &cVar2, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_596 = 8;
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_333());
			if (func_333())
			{
				func_403(0, 1, 1);
				__LIB_8__::func_239(0, 0);
				iLocal_596 = 5;
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && __LIB_2__::func_227(-3.5f, 1, 0, 0)) && (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("BREAKOUT")) || TASK::_0x02EBBB3989B7E695(*iParam0)))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, 0, -1f, -1f, -1f);
				iLocal_596 = 2;
			}
			break;
		case 2:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				if (iLocal_597 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iLocal_597)
				{
					case 2:
						StringCopy(&cVar6, "LCMP_IG_NIACTB", 24);
						break;
					case 3:
						StringCopy(&cVar6, "LCMP_IG_NICL", 24);
						break;
				}
				__LIB_3__::func_154(&(Local_1617.f_35), &cVar6, *iParam0, Global_35, 0, 0, 1, 1);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_496(), func_796(0), Global_35, iVar5, 8f, -8f, 0, 0f, false, true, -1f, 0, 0, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_196);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
				func_403(0, 1, 1);
				__LIB_8__::func_239(0, 0);
				iLocal_596 = 5;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_333());
			if (__LIB_8__::func_257(iParam0))
			{
				__LIB_8__::func_239(1, 0);
				func_403(0, 1, 1);
				func_756(0, 0, 1);
				__LIB_1__::func_148(&(vLocal_570[3 /*3*/]));
			}
			if (__LIB_7__::func_929(-2147483648))
			{
				switch (iLocal_432)
				{
					case 0:
						switch (iLocal_597)
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
						__LIB_3__::func_154(&(Local_1617.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_403(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iLocal_597)
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
						__LIB_3__::func_154(&(Local_1617.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_403(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && __LIB_1__::func_313(&(vLocal_570[3 /*3*/]), 12.5f))
				{
					func_403(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					__LIB_8__::func_239(0, 0);
					if (!func_333())
					{
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						TASK::_0x9C8F42A5D1859DC1(iLocal_75[0]);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 3f, -1, false, false, false, false);
					}
					__LIB_7__::func_941(4096);
					__LIB_0__::func_325(&(uLocal_2102[0]));
					__LIB_1__::func_148(&(vLocal_570[3 /*3*/]));
					iLocal_596 = 16;
				}
			}
			break;
		case 16:
			if (__LIB_1__::func_313(&(vLocal_570[3 /*3*/]), 60f))
			{
				if (func_333())
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				}
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				func_403(0, 1, 0);
				func_756(0, 0, 1);
				__LIB_8__::func_38(iParam0);
				iLocal_596 = 17;
			}
			break;
		case 17:
			if (!(__LIB_8__::func_88(&Local_433, 1) && Local_433 == *iParam0))
			{
				if (__LIB_2__::func_763(Local_1617.f_138, 0))
				{
					__LIB_8__::func_124(Local_1617.f_138, 1);
					__LIB_2__::func_451(&(Local_211[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_421(int iParam0)
{
	char cVar0[64];
	bool bVar8;
	vector3 vVar9[24];
	vector3 vVar12[24];
	func_722();
	switch (iLocal_596)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			__LIB_7__::func_932(1073741824 /* Float: 2f */);
			if (!__LIB_7__::func_908(Local_1617.f_136, 131072))
			{
				__LIB_8__::func_82(Local_1617.f_136, 131072);
			}
			else
			{
				__LIB_8__::func_83(Local_1617.f_136, 131072);
			}
			if (func_333())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_39(), 262209, __LIB_8__::func_40(), __LIB_8__::func_41());
				iLocal_484 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_42(), __LIB_8__::func_39(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_43(), 262209, __LIB_8__::func_40(), __LIB_8__::func_44());
				iLocal_484 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_45(), __LIB_8__::func_43(), 1f, 0, false);
			}
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_8 = { -1402.34f, -207.62f, 101.88f };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				__LIB_1__::func_336(&(Local_156.f_23), 128);
				__LIB_3__::func_995(&Local_156, 129);
				iLocal_596 = 1;
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_484))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_484, __LIB_0__::func_196(func_333(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(func_333(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				if (func_333())
				{
				}
				iLocal_596 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				__LIB_7__::func_922(1);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_484))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_484, __LIB_0__::func_196(func_333(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(func_333(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_596 = 4;
			}
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				__LIB_8__::func_85(Local_1617.f_136, 4096);
				func_403(0, 1, 1);
				if (__LIB_7__::func_923(2))
				{
					iLocal_596 = 6;
				}
				else
				{
					iLocal_596 = 7;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(-1f))
			{
				__LIB_0__::func_325(&(uLocal_2102[0]));
				iLocal_596 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			if (__LIB_8__::func_109(iParam0, 1, func_333()))
			{
				if (__LIB_8__::func_118(iParam0, func_798(iParam0), 10f, 0, 0, 1, -1243035987))
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					__LIB_7__::func_922(4096);
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_82(Local_1617.f_136, 16777216);
					Local_104.f_40 = *iParam0;
					Local_104.f_43 = 4f;
					Local_104.f_41 = 4f;
					Local_104.f_39 = Global_1392194[Local_1617.f_136 /*10*/].f_6;
					if (func_333())
					{
						StringCopy(&cVar0, "LCMPF_IG1_ALT", 64);
					}
					else
					{
						StringCopy(&cVar0, "LCMPF_IG1", 64);
					}
					__LIB_3__::func_154(&(Local_1617.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_596 = 5;
				}
			}
			break;
		case 5:
			func_800(iParam0);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_333());
			if (__LIB_8__::func_257(iParam0))
			{
				func_403(0, 1, 1);
				func_758(0, 0);
				__LIB_8__::func_239(1, 0);
				__LIB_1__::func_148(&(vLocal_570[3 /*3*/]));
			}
			if (__LIB_7__::func_929(-2147483648))
			{
				switch (iLocal_432)
				{
					case 1:
						if (func_333())
						{
							StringCopy(&cVar9, "LCMP_ANGRRES2", 24);
						}
						else
						{
							StringCopy(&cVar9, "LCMP_ANGRRES1", 24);
						}
						__LIB_3__::func_154(&(Local_1617.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						func_403(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && __LIB_1__::func_313(&(vLocal_570[3 /*3*/]), 12.5f))
				{
					func_403(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					__LIB_8__::func_239(0, 0);
					iLocal_596 = 8;
				}
			}
			break;
		case 8:
			func_800(iParam0);
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (func_333())
				{
					__LIB_8__::func_124(Local_1617.f_138, 1);
					__LIB_2__::func_451(&(Local_211[0 /*21*/]), 0);
					__LIB_8__::func_38(iParam0);
					StringCopy(&cVar12, "LCMPF_IG1_ALTR", 24);
					iLocal_596 = 17;
				}
				else
				{
					StringCopy(&cVar12, "LCMPF_IG1_R", 24);
					iLocal_596 = 16;
				}
				__LIB_3__::func_154(&(Local_1617.f_35), &cVar12, *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_7__::func_941(4096);
				__LIB_0__::func_325(&(uLocal_2102[0]));
			}
			break;
		case 16:
			func_800(iParam0);
			if (__LIB_1__::func_313(&(vLocal_570[3 /*3*/]), 60f))
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				__LIB_8__::func_124(Local_1617.f_138, 1);
				__LIB_2__::func_451(&(Local_211[0 /*21*/]), 0);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				__LIB_8__::func_38(iParam0);
				iLocal_596 = 17;
			}
			break;
		case 17:
			break;
	}
	return 0;
}

int func_422(int iParam0)
{
	bool bVar0;
	__LIB_0__::func_11();
	switch (iLocal_595)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
			{
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1398.107f, -213.5636f, 102.7725f, 0f, 0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (__LIB_7__::func_908(Local_1617.f_136, 1024))
			{
				if (__LIB_0__::func_0(iParam0))
				{
					__LIB_8__::func_239(0, 1);
					func_403(0, 1, 0);
					func_756(0, 0, 1);
					__LIB_7__::func_934(256);
					__LIB_8__::func_38(iParam0);
					__LIB_7__::func_952(&(Local_492[1 /*7*/]));
					__LIB_8__::func_188(&(Local_492[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
					__LIB_8__::func_85(Local_1617.f_136, 4096);
					iLocal_595 = 15;
				}
			}
			else if (__LIB_1__::func_976() && func_804(iParam0))
			{
				__LIB_7__::func_934(67108864);
				func_403(0, 1, 0);
				__LIB_8__::func_239(1, 1);
				func_805(0);
				iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1399.521f, -209.5342f, 104.064f, 0f, 0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1399.238f, -220.5899f, 102.4817f, 0f, 0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				POPULATION::_0xB56D41A694E42E86(iLocal_75[1], 0, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
				iLocal_595 = 1;
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
					iLocal_595 = 6;
				}
				else
				{
					iLocal_595 = 2;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(0))
			{
				func_772("LOG_OBJ01", 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_2102[0]), -89429847, 580546400, 0, __LIB_7__::func_978());
				if (!__LIB_7__::func_908(Local_1617.f_136, 1024))
				{
					iLocal_595 = 2;
				}
				else if (__LIB_0__::func_0(iParam0))
				{
					iLocal_595 = 8;
				}
			}
			break;
		case 2:
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			if (__LIB_0__::func_0(0))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[8 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_614.f_690[8 /*12*/].f_8));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[7 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_614.f_690[7 /*12*/].f_8));
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
			if (!__LIB_2__::func_763(Local_1617.f_138, 0))
			{
				__LIB_8__::func_123(Local_1617.f_138, 1, 1);
			}
			if (!__LIB_7__::func_923(4096))
			{
				__LIB_7__::func_941(512);
				__LIB_0__::func_769();
				__LIB_7__::func_922(4096);
				__LIB_7__::func_961(&Local_433, 4);
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_198(11, 2);
			if (__LIB_0__::func_139(Local_1617.f_32) && !__LIB_8__::func_326(101))
			{
				__LIB_1__::func_221(Local_1617.f_32, 0, 1);
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
			if (__LIB_8__::func_24(&(Local_492[0 /*7*/]), "Internal_Loop"))
			{
				__LIB_8__::func_196(&(Local_492[0 /*7*/]), "Internal_Loop");
			}
			if (__LIB_7__::func_923(1073741824 /* Float: 2f */) && !__LIB_4__::func_852(11))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				__LIB_8__::func_131(&Local_1617, 65536);
				__LIB_8__::func_198(11, 2);
				if (__LIB_7__::func_908(Local_1617.f_136, 4))
				{
					__LIB_2__::func_810(11, 128);
					iLocal_595 = 11;
				}
				else
				{
					__LIB_3__::func_154(&(Local_1617.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
					iLocal_595 = 13;
				}
			}
			break;
		case 10:
			if (__LIB_3__::func_995(&Local_156, 129))
			{
				iLocal_595 = 11;
			}
			break;
		case 11:
			break;
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[0 /*12*/].f_8))
			{
				if (!__LIB_7__::func_933(256))
				{
					__LIB_8__::func_147(&(Local_492[1 /*7*/]), Global_35, "arthur", 1);
					__LIB_8__::func_148(&(Local_492[1 /*7*/]), Local_614.f_690[3 /*12*/].f_8, "p_knife02x");
					__LIB_8__::func_148(&(Local_492[1 /*7*/]), Local_614.f_690[4 /*12*/].f_8, "p_woodWittle01x");
					__LIB_8__::func_148(&(Local_492[1 /*7*/]), Local_614.f_690[6 /*12*/].f_8, "p_foldedBill01x");
					__LIB_8__::func_147(&(Local_492[1 /*7*/]), *iParam0, "U_M_M_BIVFOREMAN_01", 1);
					__LIB_8__::func_148(&(Local_492[1 /*7*/]), Local_614.f_690[0 /*12*/].f_8, "ITEM");
					__LIB_8__::func_191(&(Local_492[1 /*7*/]), "pbl_AgreeToSell", 1);
				}
				else
				{
					__LIB_8__::func_147(&(Local_492[1 /*7*/]), Global_35, "player", 1);
					__LIB_8__::func_148(&(Local_492[1 /*7*/]), Local_614.f_690[6 /*12*/].f_8, "MONEY");
					__LIB_8__::func_148(&(Local_492[1 /*7*/]), Local_614.f_690[0 /*12*/].f_8, "Item");
					__LIB_8__::func_147(&(Local_492[1 /*7*/]), *iParam0, "male", 1);
				}
				iLocal_595 = 13;
			}
			break;
		case 13:
			__LIB_0__::func_325(&(uLocal_2102[0]));
			if (__LIB_7__::func_908(Local_1617.f_136, 4))
			{
				if (!__LIB_7__::func_923(4096))
				{
					__LIB_3__::func_154(&(Local_1617.f_35), "LOG_LCMP_INT_a2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				__LIB_8__::func_16(&(Local_492[1 /*7*/]));
				__LIB_7__::func_952(&(Local_492[0 /*7*/]));
				if (!__LIB_7__::func_933(256))
				{
					__LIB_8__::func_192(&(Local_492[1 /*7*/]), "Internal_Loop");
				}
				iLocal_595 = 14;
			}
			else if (!__LIB_1__::func_322("LOG_LCMP_INT_b0"))
			{
				__LIB_8__::func_191(&(Local_492[0 /*7*/]), "pbl_RefuseToSell", 1);
				__LIB_8__::func_192(&(Local_492[0 /*7*/]), "Internal_Loop");
				__LIB_7__::func_934(16384);
				iLocal_595 = 14;
			}
			break;
		case 14:
			if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("OBJECTEXCHANGE"))) && ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[0 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_614.f_690[0 /*12*/].f_8));
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) && ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[6 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_614.f_690[6 /*12*/].f_8));
				}
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BREAKOUT")))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_8__::func_132(&Local_1617, 65536);
				}
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
			}
			if (__LIB_7__::func_972(&(Local_492[0 /*7*/])) && (__LIB_7__::func_933(16384) || __LIB_7__::func_972(&(Local_492[1 /*7*/]))))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1617, 65536);
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_8__::func_131(&Local_1617, 128);
				__LIB_1__::func_943(11, 128);
				__LIB_8__::func_188(&(Local_492[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				__LIB_7__::func_941(2048);
				__LIB_7__::func_965(16384);
				__LIB_8__::func_50(11);
				__LIB_7__::func_934(256);
				__LIB_7__::func_941(536870912);
				__LIB_7__::func_941(4096);
				func_108(1);
				__LIB_7__::func_965(67108864);
				__LIB_8__::func_239(0, 1);
				func_403(0, 1, 0);
				func_756(0, 0, 1);
				__LIB_8__::func_199(11, 2);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
				__LIB_8__::func_38(iParam0);
				iLocal_595 = 15;
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

void func_423(var uParam0, int iParam1)
{
	if ((iLocal_206 % 5) != 0)
	{
		return;
	}
}

void func_428()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	if (__LIB_7__::func_929(8192))
	{
		iVar1 = iLocal_2250;
		iVar2 = iLocal_2250 + 4;
		if (iVar2 >= iLocal_2146)
		{
			iVar2 = (iLocal_2146 - 1);
		}
		iLocal_2250 = iVar1;
		while (iLocal_2250 <= iVar2)
		{
			if (!__LIB_0__::func_29(iLocal_2130[iLocal_2250]))
			{
			}
			else
			{
				iVar0 = __LIB_2__::func_963(iLocal_2130[iLocal_2250]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					__LIB_2__::func_965(iLocal_2130[iLocal_2250], 0, 1, 0, 1, 1);
					__LIB_2__::func_56(iVar0, 1, 1);
					if (!__LIB_0__::func_163(iVar0, 518218985))
					{
						if (!__LIB_7__::func_923(32))
						{
							func_755(&iLocal_2250);
						}
						else
						{
							vVar3 = { __LIB_8__::func_212(iLocal_75[4], 100, 1, 0) };
							TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
							if (!__LIB_0__::func_86(vVar3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE((30f / 2f), 30f), 0, 40000f);
							}
							__LIB_2__::func_45(0, iLocal_2082[0], -1);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
							TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_196);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
						}
					}
					if (!__LIB_7__::func_923(32))
					{
						iLocal_2130[iLocal_2250] = -1;
					}
				}
			}
			iLocal_2250++;
		}
		if (iLocal_2250 >= (iLocal_2146 - 1))
		{
			__LIB_7__::func_928(8192);
			if (!__LIB_7__::func_923(32))
			{
				iLocal_2146 = 0;
			}
		}
	}
}

void func_433()
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
				if ((__LIB_7__::func_923(32) && !__LIB_7__::func_924(&Local_1617, 2)) && iVar4 == iLocal_2082[0])
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

void func_435(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iLocal_2146)
	{
		if (!__LIB_0__::func_29(iLocal_2130[iVar1]))
		{
		}
		else
		{
			iVar0 = __LIB_2__::func_963(iLocal_2130[iVar1]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				__LIB_2__::func_965(iLocal_2130[iVar1], 0, 1, 0, 1, 1);
				__LIB_2__::func_56(iVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

void func_465(int iParam0)
{
	__LIB_1__::func_336(&(Global_40.f_9096[Local_1617.f_136 /*12*/].f_6), __LIB_0__::func_771(iParam0));
}

bool func_466(int iParam0)
{
	return __LIB_0__::func_27(Global_40.f_9096[Local_1617.f_136 /*12*/].f_6, __LIB_0__::func_771(iParam0));
}

void func_467(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { __LIB_8__::func_51(*iParam0) };
	fVar3 = __LIB_8__::func_52(*iParam0);
	uLocal_478[*iParam0] = TASK::CREATE_SCENARIO_POINT(__LIB_8__::func_18(), vVar0, fVar3, 0, 0, 0);
	TASK::_0xE69FDA40AAC3EFC0(uLocal_478[*iParam0], 0);
	TASK::_0xA7479FB665361EDB(uLocal_478[*iParam0], 0);
	TASK::_SET_SCENARIO_POINT_FLAG(uLocal_478[*iParam0], 19, true);
	iLocal_197[*iParam0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_197[*iParam0], 534496, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_197[*iParam0], 534496, 0, 0, -1, -1, 0);
	if (!__LIB_1__::func_565(&(uLocal_1914[*iParam0])))
	{
		uLocal_1914[*iParam0] = GRAPHICS::_0xFA50F79257745E74(vVar0, 3f, 1, 36, 0);
	}
}

bool func_468(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iParam0]))
	{
		uLocal_472[iParam0] = ENTITY::_0x6F3068258A499E52(__LIB_8__::func_154(iParam0), __LIB_8__::func_144(iParam0), 9);
		iLocal_466[iParam0] = OBJECT::GET_RAYFIRE_MAP_OBJECT(__LIB_8__::func_144(iParam0), 5f, __LIB_8__::func_155(iParam0));
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iParam0]))
	{
		uLocal_472[iParam0] = uLocal_472[iParam0];
		if (((!func_826(iParam0) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0]) != 4) && !__LIB_8__::func_139(iParam0)) && !func_466(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0], 4);
		}
		else if (__LIB_7__::func_923(64))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0], 4);
		}
		else if (func_466(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0], 9);
			__LIB_8__::func_156(iParam0);
			__LIB_8__::func_149(iParam0);
		}
		if (func_826(iParam0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_474(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_478[iParam0]))
	{
		TASK::_DELETE_SCENARIO_POINT(uLocal_478[iParam0]);
		__LIB_0__::func_172(iLocal_197[iParam0]);
	}
	if (bParam1)
	{
		__LIB_2__::func_353(&(uLocal_1914[iParam0]), 1);
	}
}

char* func_482(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (__LIB_7__::func_923(64))
			{
				return "PBL_ENTER";
			}
			else
			{
				return "";
			}
			break;
		case 3:
			if (iLocal_98 == 3)
			{
				return "PBL_MAIN";
			}
			else
			{
				return "PBL_MAIN";
			}
			break;
		case 0:
			if (__LIB_7__::func_923(64))
			{
				return "PB_L_ENTER";
			}
			else if (__LIB_7__::func_923(262144))
			{
				if ((iLocal_98 > 1 && __LIB_7__::func_908(1, 2)) && !__LIB_7__::func_908(Local_1617.f_136, 16384))
				{
					return "PBL_FOREMAN_STAGE2_TALK_INTRO";
				}
				else if (func_333())
				{
					return "PBL_ENTER_LOOPS";
				}
				else
				{
					return "PBL_ENTER_LOOPS";
				}
			}
			else
			{
				switch (iLocal_98)
				{
					case 1:
						if (__LIB_7__::func_923(16))
						{
							if (func_333())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "pbl_LeadoutToDecision";
						}
						break;
					case 2:
						if (__LIB_7__::func_923(16))
						{
							if (func_333())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "PBL_FOREMAN_STAGE2_TALK_INTRO";
						}
						break;
					case 3:
						if (!__LIB_7__::func_907(Local_1617.f_136, 64))
						{
							return "PBL_FOREMAN_ORDERS_LOOPS";
						}
						else
						{
							return "PB_ENTER_N_OFFER";
						}
						break;
				}
			}
			break;
		case 1:
			switch (iLocal_98)
			{
				case 1:
					return "pbl_AgreeToSell";
				case 3:
					return "PBL_ENTER";
				default:
					break;
			}
			break;
		case 4:
			return "PBL_MAIN";
		case 5:
			switch (iLocal_98)
			{
				case 1:
					return "pl_Callover_Look_Greet";
				default:
					break;
			}
			return "";
		case 6:
			return "PBL_HOOKUP";
		case 7:
			return "PBL_LIFT";
		case 8:
			return "PBL_LIFT";
		case 9:
			return "PBL_MAIN";
		case 10:
			return "PBL_MAIN";
	}
	return "";
}

void func_484()
{
	__LIB_8__::func_234(5, &Local_1617, 5);
	if (__LIB_7__::func_923(64))
	{
		iLocal_597 = 2;
	}
	else if (__LIB_7__::func_924(&Local_1617, 256))
	{
		iLocal_597 = 2;
	}
	else if (__LIB_1__::func_985())
	{
		iLocal_597 = 0;
	}
	else
	{
		iLocal_597 = 2;
	}
}

Vector3 func_490(int iParam0, int iParam1)
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
Vector3 func_491(int iParam0)
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

char* func_496()
{
	if (func_333())
	{
		return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_OUTDOOR_JOB";
	}
	return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_INDOOR_JOB";
}

bool func_597()
{
	if (__LIB_7__::func_923(32))
	{
		return true;
	}
	if (__LIB_7__::func_908(1, 2))
	{
		return true;
	}
	if (!__LIB_7__::func_923(262144))
	{
		return true;
	}
	if (__LIB_7__::func_923(4096))
	{
		return true;
	}
	if (__LIB_2__::func_763(Local_1617.f_138, 0))
	{
		return true;
	}
	return false;
}

int func_659(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_942(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_677(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iLocal_599[iParam4] > 3 && iLocal_599[iParam4] < 8)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam2, 3)) || (!ENTITY::IS_ENTITY_DEAD(*iParam3) && !TASK::GET_IS_TASK_ACTIVE(*iParam3, 3)))
		{
			iVar0 = -1;
			if (!__LIB_8__::func_88(&Local_433, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam2, 3))
				{
					Local_433 = __LIB_2__::func_963(__LIB_7__::func_964(9, 0, *iParam0));
					iVar0 = 0;
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam3, 3))
				{
					Local_433 = *iParam3;
					iVar0 = 1;
				}
				if (__LIB_2__::func_215(__LIB_2__::func_963(__LIB_7__::func_964(9, iVar0, *iParam0)), Global_35, 0, 5f, 0))
				{
					__LIB_18__::func_81(&Local_433, &Local_1617, 2048, 55630, 0, 0);
				}
			}
			__LIB_8__::func_183(&(Local_492[(9 + iParam4) /*7*/]), *iParam2, "PED1");
			func_689(9, 0, *iParam0, 0 == iVar0);
			__LIB_8__::func_183(&(Local_492[(9 + iParam4) /*7*/]), *iParam3, "PED2");
			func_689(9, 1, *iParam0, 1 == iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[(15 + *iParam1) /*12*/].f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[(15 + *iParam1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[(15 + *iParam1) /*12*/].f_8, true);
				}
				else
				{
					__LIB_8__::func_183(&(Local_492[(9 + iParam4) /*7*/]), Local_614.f_690[(15 + *iParam1) /*12*/].f_8, "SAW");
					ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[(15 + *iParam1) /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(Local_614.f_690[(15 + *iParam1) /*12*/].f_8);
				}
			}
			__LIB_7__::func_952(&(Local_492[(9 + iParam4) /*7*/]));
			iLocal_599[iParam4] = 10;
		}
	}
}

void func_678(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, -137640087))
	{
		iVar0 = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, -1300850144))
	{
		iVar0 = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, -1011860333))
	{
		iVar0 = 2;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 == iVar0)
		{
			if (!__LIB_8__::func_58(&(Local_492[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)) && !__LIB_8__::func_60(&(Local_492[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					__LIB_8__::func_26(&(Local_492[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (__LIB_8__::func_58(&(Local_492[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				__LIB_8__::func_61(&(Local_492[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_679(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2[24];
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return;
	}
	if (__LIB_7__::func_963(&(Local_492[(9 + iParam2) /*7*/])))
	{
		func_961(iParam0, iParam1, iParam2);
		if (PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam0;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*iParam0, 330, true);
		}
		else if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam0;
		}
		else if (PED::_0xA454D234E45BB6E5(*iParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam1;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*iParam1, 330, true);
		}
		else if (PED::_0x9337183FDA2E9035(*iParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam1;
		}
		if (Local_433 == *iParam0 || Local_433 == *iParam1)
		{
			func_348(iParam2);
			iLocal_599[iParam2] = 8;
			return;
		}
		if (__LIB_7__::func_933(__LIB_8__::func_62(iParam2)))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_492[(9 + iParam2) /*7*/].f_1)) && __LIB_8__::func_34(&(Local_492[(9 + iParam2) /*7*/])))
			{
				__LIB_8__::func_240(&(Local_492[(9 + iParam2) /*7*/]), 1, 1);
				StringCopy(&(Local_492[(9 + iParam2) /*7*/].f_1), "", 24);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				__LIB_7__::func_965(__LIB_8__::func_62(iParam2));
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				__LIB_7__::func_934(__LIB_8__::func_62(iParam2));
			}
			if (__LIB_7__::func_933(__LIB_8__::func_62(iParam2)))
			{
				cVar2 = { __LIB_8__::func_121(iParam0, iLocal_489[iParam2], bVar1) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					__LIB_8__::func_151(&(Local_492[(9 + iParam2) /*7*/]), &cVar2);
				}
			}
		}
	}
}

void func_689(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_7__::func_964(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		__LIB_8__::func_124(iVar0, 1);
		__LIB_8__::func_63(1, &Local_614);
	}
}

void func_690()
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
	if (func_967(&iVar2, iVar1))
	{
		__LIB_8__::func_124(iVar1, 1);
		func_474(func_691(iVar0), 0);
		__LIB_8__::func_19(__LIB_8__::func_17(iVar0));
	}
}

int func_691(int iParam0)
{
	if ((!__LIB_7__::func_923(64) && __LIB_7__::func_907(Local_1617.f_136, 536870912)) && iParam0 == __LIB_7__::func_920())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && __LIB_7__::func_923(262144))
	{
		iParam0 = 4;
	}
	return iParam0;
}

void func_695()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_691(iVar0);
		if (__LIB_8__::func_139(iVar1) && (!__LIB_7__::func_923(64) || iVar1 != 0))
		{
			func_968(iVar0);
		}
		iVar0++;
	}
}

void func_697(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = (810 + iParam0);
	iVar1 = __LIB_2__::func_963(iVar0);
	iVar2 = func_691(iParam0);
	if (__LIB_8__::func_241(iVar2, &iVar1))
	{
		if (func_826(iVar2))
		{
			bVar3 = true;
		}
		else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iVar2]) == 4)
		{
		}
		else
		{
			func_468(iVar2);
			return;
		}
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iVar2]))
	{
		func_468(iVar2);
		return;
	}
	if (func_970(iParam0, bVar3))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iVar2], 6);
		if (!__LIB_8__::func_139(iVar2))
		{
			__LIB_8__::func_156(iVar2);
		}
		if (!(__LIB_7__::func_923(64) && iVar2 == 0))
		{
			__LIB_2__::func_478(iVar1, Global_35, "LOG_TIMBER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_8__::func_19(__LIB_8__::func_17(iParam0));
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::TRIGGER_SONAR_BLIP(348490638, __LIB_8__::func_144(iVar2));
		if (!((iLocal_98 == 1 && __LIB_7__::func_923(64)) && iParam0 == 0))
		{
			func_465(iVar2);
		}
		return;
	}
	bVar3 = false;
}

void func_699(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 > 5)
	{
		return;
	}
	iVar0 = (810 + iParam0);
	if (!__LIB_0__::func_29(iVar0))
	{
		return;
	}
	iVar1 = __LIB_2__::func_963(iVar0);
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	iVar2 = func_691(iParam0);
	if (__LIB_8__::func_140(iVar2))
	{
		return;
	}
	if (__LIB_8__::func_139(iVar2))
	{
		return;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_478[iVar2]))
	{
		return;
	}
	if (!__LIB_0__::func_163(iVar1, 1435919172))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iVar1, uLocal_478[iVar2], 0, -1, true, false, 0, false, -1f, false);
	}
}

void func_700(int iParam0, int iParam1)
{
	float fVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!__LIB_7__::func_939(__LIB_8__::func_64(iParam1)))
	{
		if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			__LIB_7__::func_926(__LIB_8__::func_64(iParam1));
		}
	}
	else if (!(PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX())))
	{
		fVar0 = __LIB_0__::func_265(&(vLocal_570[0 /*3*/]));
		if ((60f - fVar0) < 15f)
		{
			if (fVar0 >= 60f)
			{
				fVar0 = (60f - 15f);
			}
			else
			{
				fVar0 = (fVar0 - 15f);
			}
			__LIB_0__::func_268(&(vLocal_570[0 /*3*/]), fVar0);
		}
		__LIB_8__::func_19(__LIB_8__::func_64(iParam1));
	}
}

bool func_701(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && !DECORATOR::DECOR_EXIST_ON(*iParam0, "bChopDown"))
	{
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(*iParam0) != __LIB_8__::func_18())
		{
			return false;
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam0, 0))
		{
			return false;
		}
		bVar0 = __LIB_7__::func_923(524288);
		if (iParam3 == __LIB_7__::func_920() && __LIB_7__::func_907(Local_1617.f_136, 1073741824 /* Float: 2f */))
		{
			__LIB_8__::func_167(524288, bVar0);
			__LIB_8__::func_19(256);
			return true;
		}
		if (__LIB_7__::func_923(64) && !__LIB_8__::func_140(0))
		{
			return false;
		}
		if (__LIB_7__::func_939(__LIB_8__::func_64(iParam3)))
		{
			return false;
		}
		if (__LIB_0__::func_75(&(vLocal_570[0 /*3*/])))
		{
			fVar1 = __LIB_0__::func_265(&(vLocal_570[0 /*3*/]));
			if (__LIB_7__::func_939(256))
			{
				fVar2 = 90f;
			}
			else if (__LIB_2__::func_118(*iParam0, 1, 1) < 5f)
			{
				fVar2 = 7.5f;
			}
			else if (!__LIB_8__::func_233())
			{
				fVar2 = 15f;
			}
			else
			{
				fVar2 = 60f;
			}
			if (fVar1 < fVar2)
			{
				return false;
			}
		}
		if (__LIB_7__::func_923(32))
		{
			return false;
		}
		else if (__LIB_7__::func_923(64) && iParam3 == 0)
		{
			return false;
		}
		else if (((iLocal_98 == 1 && iParam3 == 1) && !__LIB_7__::func_929(4096)) && !__LIB_7__::func_923(262144))
		{
			return false;
		}
		if (__LIB_7__::func_907(Local_1617.f_136, 536870912) && iParam3 == __LIB_7__::func_920())
		{
			return false;
		}
		if (__LIB_8__::func_256(*iParam0, uParam1, iParam2, &bVar0, 1f, 45f, 0f, 0, 25f, 1))
		{
			__LIB_8__::func_167(524288, bVar0);
			__LIB_8__::func_19(256);
			return true;
		}
		__LIB_8__::func_167(524288, bVar0);
	}
	return false;
}

void func_702(int iParam0, int iParam1)
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
		iVar0 = func_691(iParam1);
		func_974(iParam1);
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

void func_703()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_977(iVar1);
		iVar0++;
	}
}

void func_706(int iParam0, bool bParam1)
{
	func_762(iParam0, 0, bParam1);
	func_762(iParam0, 1, bParam1);
	func_762(iParam0, 2, bParam1);
}

void func_712()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_614.f_690[12 /*12*/].f_8))
	{
		return;
	}
	if (!OBJECT::_0xB6CBD40F8EA69E8A(Local_614.f_690[13 /*12*/].f_8))
	{
		return;
	}
	if (!__LIB_7__::func_933(8192))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, 1656474583) && !ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, -1064143891))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_614.f_690[12 /*12*/].f_8, "pickup_steamd", "props_misc@appleseed_loader", 1))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_614.f_690[12 /*12*/].f_8, "pickup_steamd", "props_misc@appleseed_loader", 8f, false, false, false, 0f, 1);
			}
			__LIB_7__::func_934(8192);
			TASK::SET_ANIM_RATE(Local_614.f_690[12 /*12*/].f_8, 1f, 0, false);
		}
	}
	else if (!ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, 1656474583) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, -1064143891))
	{
		__LIB_7__::func_965(8192);
		TASK::SET_ANIM_RATE(Local_614.f_690[12 /*12*/].f_8, 0f, 0, false);
	}
}

void func_716(int iParam0, int iParam1)
{
	func_978(iParam0, 0);
	func_978(iParam1, 1);
}

void func_722()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_614.f_690[5 /*12*/].f_8))
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(Local_614.f_690[5 /*12*/].f_8))
		{
			if (!__LIB_7__::func_929(65536))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[5 /*12*/].f_8, true);
			}
		}
		else if (__LIB_7__::func_929(65536))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_614.f_690[5 /*12*/].f_8, false);
			PHYSICS::ACTIVATE_PHYSICS(Local_614.f_690[5 /*12*/].f_8);
		}
	}
}

void func_723()
{
	if (!__LIB_7__::func_929(16777216))
	{
		if (func_982())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_462))
			{
				__LIB_1__::func_422(&cLocal_462, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			__LIB_7__::func_903(iLocal_2016, 0);
			__LIB_7__::func_932(16777216);
		}
	}
	else if (!func_982())
	{
		__LIB_7__::func_903(iLocal_2016, 1);
		__LIB_0__::func_769();
		__LIB_7__::func_928(16777216);
	}
}

void func_724()
{
	if (iLocal_1920 >= 2 && (iLocal_1920 < 5 || __LIB_7__::func_923(512)))
	{
		if (!__LIB_7__::func_923(512))
		{
			__LIB_8__::func_66();
		}
		if (__LIB_1__::func_205(Global_35, iLocal_75[4], 1, 0))
		{
			__LIB_1__::func_538(0);
			if (!__LIB_7__::func_933(512))
			{
				__LIB_8__::func_159(512, __LIB_8__::func_342(Global_35, &iLocal_606, __LIB_1__::func_977(), iLocal_75[4], 1097859072 /* Float: 15f */, 2, 1, 129, 0, 0, 1071644672 /* Float: 1.75f */));
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_606))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_606, 136, true);
				}
			}
		}
		else
		{
			func_108(0);
		}
	}
}

bool func_732(int iParam0, int iParam1)
{
	if (!__LIB_7__::func_929(8388608))
	{
		return false;
	}
	if (__LIB_7__::func_923(4096))
	{
		return false;
	}
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return false;
	}
	if (!__LIB_7__::func_963(&(Local_492[2 /*7*/])))
	{
		return false;
	}
	if (__LIB_3__::func_332(__LIB_8__::func_144(iParam1), 1) > 63f)
	{
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() % 3) == 0)
	{
		if (func_468(iParam1))
		{
			return true;
		}
	}
	else if (func_826(iParam1))
	{
		return true;
	}
	return false;
}

void func_737()
{
	__LIB_8__::func_85(Local_1617.f_136, 64);
	__LIB_8__::func_82(Local_1617.f_136, 512);
}

void func_739(var uParam0, var uParam1)
{
	if (__LIB_1__::func_205(Global_35, iLocal_75[17], 1, 0))
	{
		if (__LIB_0__::func_139(*uParam0) && __LIB_0__::func_572(*uParam0, 0))
		{
			__LIB_1__::func_221(*uParam0, 0, 1);
		}
		if (__LIB_0__::func_139(*uParam1) && __LIB_0__::func_572(*uParam1, 0))
		{
			__LIB_1__::func_221(*uParam1, 0, 1);
		}
	}
	else if (Global_36.f_1 < __LIB_8__::func_32())
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_2016))
		{
			__LIB_3__::func_652(__LIB_8__::func_30(), &iLocal_2016, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (__LIB_0__::func_139(*uParam0) && !__LIB_0__::func_572(*uParam0, 0))
		{
			__LIB_1__::func_221(*uParam0, 1, 1);
			MAP::SET_BLIP_COORDS(iLocal_2016, __LIB_8__::func_30());
		}
		if (__LIB_0__::func_139(*uParam1) && __LIB_0__::func_572(*uParam1, 0))
		{
			__LIB_1__::func_221(*uParam1, 0, 1);
		}
	}
	else
	{
		if (__LIB_0__::func_139(*uParam0) && __LIB_0__::func_572(*uParam0, 0))
		{
			__LIB_1__::func_221(*uParam0, 0, 1);
		}
		if (!MAP::DOES_BLIP_EXIST(iLocal_2016))
		{
			__LIB_3__::func_652(__LIB_8__::func_31(), &iLocal_2016, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (__LIB_0__::func_139(*uParam1) && !__LIB_0__::func_572(*uParam1, 0))
		{
			__LIB_1__::func_221(*uParam1, 1, 1);
			MAP::SET_BLIP_COORDS(iLocal_2016, __LIB_8__::func_31());
		}
	}
}

void func_743()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iLocal_2146)
	{
		iVar1 = __LIB_2__::func_963(iLocal_2130[iVar0]);
		PED::_0x935CF6E42BAF7F4D(iVar1);
		iVar0++;
	}
}

void func_755(int iParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(iLocal_2130[*iParam0])))
	{
		iVar0 = __LIB_2__::func_963(iLocal_2130[*iParam0]);
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
		if (__LIB_8__::func_70(iLocal_2130[*iParam0]))
		{
			func_977(iLocal_2130[*iParam0]);
		}
		else
		{
			__LIB_2__::func_753(iLocal_2130[*iParam0], 0, 1, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
		}
	}
	__LIB_2__::func_56(iVar0, 1, 1);
}

void func_756(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, __LIB_2__::func_460(7));
	Local_275[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_275[iParam0 /*52*/][0 /*17*/]), 1);
	func_762(iParam0, 0, !__LIB_7__::func_929(1073741824 /* Float: 2f */));
	func_1020(iParam0, 1, __LIB_2__::func_460(10));
	func_762(iParam0, 1, bParam2);
	func_762(iParam0, 2, bParam1);
	func_1021(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		__LIB_7__::func_932(268435456);
	}
	else if (iParam0 == 1)
	{
		__LIB_7__::func_934(524288);
	}
}

void func_758(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, __LIB_2__::func_460(7));
	Local_275[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_275[iParam0 /*52*/][0 /*17*/]), 1);
	func_762(iParam0, 0, 0);
	func_1020(iParam0, 1, __LIB_2__::func_460(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1021(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		__LIB_7__::func_932(268435456);
	}
	else if (iParam0 == 1)
	{
		__LIB_7__::func_934(524288);
	}
}

void func_760(int* iParam0)
{
	if (!__LIB_2__::func_466(&(Local_275[1 /*52*/][1 /*17*/]), 0, 0))
	{
		if ((__LIB_2__::func_227(0, 1, *iParam0, 1) && !__LIB_1__::func_322("LCMPF_IG_TFRSH")) && !__LIB_1__::func_322("LCMPF_IG_TFRSN"))
		{
			func_1024(1, 0);
		}
	}
	else if (__LIB_2__::func_466(&(Local_275[1 /*52*/][0 /*17*/]), 0, 0))
	{
		if (!__LIB_1__::func_205(Global_35, iLocal_75[19], 1, 0))
		{
			func_762(1, 0, 0);
		}
	}
	else if (__LIB_1__::func_205(Global_35, iLocal_75[19], 1, 1))
	{
		func_762(1, 0, 1);
	}
}

void func_761(var uParam0, var uParam1, int* iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vVar0 = { __LIB_8__::func_33(&(Local_492[2 /*7*/]), "player", "PB_HANDOVER_L") };
	fVar9 = __LIB_8__::func_200(&(Local_492[2 /*7*/]), "player", "PB_HANDOVER_L");
	vVar3 = { __LIB_8__::func_33(&(Local_492[2 /*7*/]), "player", "PB_HANDOVER_R") };
	fVar10 = __LIB_8__::func_200(&(Local_492[2 /*7*/]), "player", "PB_HANDOVER_R");
	vVar6 = { __LIB_8__::func_33(&(Local_492[2 /*7*/]), "player", "PB_HANDOVER_N") };
	fVar11 = __LIB_8__::func_200(&(Local_492[2 /*7*/]), "player", "PB_HANDOVER_N");
	fVar12 = __LIB_3__::func_332(vVar0, 1);
	fVar13 = __LIB_3__::func_332(vVar3, 1);
	fVar14 = __LIB_3__::func_332(vVar6, 1);
	if (fVar13 <= fVar14 && fVar13 <= fVar12)
	{
		*uParam0 = { vVar3 };
		*uParam1 = fVar10;
		__LIB_8__::func_151(&(Local_492[2 /*7*/]), "PB_HANDOVER_R");
	}
	else if (fVar12 <= fVar13 && fVar12 <= fVar14)
	{
		*uParam0 = { vVar0 };
		*uParam1 = fVar9;
		__LIB_8__::func_151(&(Local_492[2 /*7*/]), "PB_HANDOVER_L");
	}
	else
	{
		*uParam0 = { vVar6 };
		*uParam1 = fVar11;
		__LIB_8__::func_151(&(Local_492[2 /*7*/]), "PB_HANDOVER_N");
	}
}

void func_762(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_2__::func_411(&(Local_275[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

char* func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_2249)
			{
				case 0:
					return "LCMPF_IG_TFR1P";
				case 1:
					return "LCMPF_IG_TFR2P";
				default:
					break;
			}
			break;
		case 1:
			switch (iLocal_2249)
			{
				case 0:
					return "LCMPF_IG_TFR1N";
				case 1:
					return "LCMPF_IG_TFR2N";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_772(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_462, sParam0, 32);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_462))
		{
			__LIB_1__::func_422(&cLocal_462, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

void func_775(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, "LOG_CTXTBUY");
	Local_275[0 /*52*/][0 /*17*/].f_14 = __LIB_8__::func_126();
	__LIB_1__::func_471(&(Local_275[iParam0 /*52*/][0 /*17*/]), 1);
	__LIB_1__::func_483(Local_275[iParam0 /*52*/][0 /*17*/].f_6, "LOG_CTXTBUY", Local_275[iParam0 /*52*/][0 /*17*/].f_14, 0);
	func_762(iParam0, 0, 1);
	func_1020(iParam0, 1, __LIB_2__::func_460(1));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, 0);
	func_1021(iParam0, 2, 1);
	__LIB_7__::func_932(268435456);
	__LIB_7__::func_965(536870912);
}

int func_793()
{
	switch (iLocal_597)
	{
		case 2:
		case 3:
			return joaat("EAFOR_A_L");
		case 0:
			return joaat("EAFOR_GOOD_TO_SEE");
		case 1:
			return joaat("EAFOR_MORE_TIME");
	}
	return 0;
}

char* func_794()
{
	switch (iLocal_597)
	{
		case 2:
		case 3:
			return "EAFOR_A_L";
		case 0:
			return "EAFOR_GOOD_TO_SEE";
		case 1:
			return "EAFOR_MORE_TIME";
	}
	return "";
}

char* func_796(bool bParam0)
{
	if (iLocal_597 == 2)
	{
		if (bParam0)
		{
			return "action_02_fm";
		}
		else
		{
			return "action_01b_fm";
		}
	}
	else if (iLocal_597 == 3)
	{
		return "clockwork_fm";
	}
	return "";
}

int func_798(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	switch (iLocal_597)
	{
		case 2:
		case 3:
			return joaat("EAFOR_A_L");
		case 0:
		case 1:
			vVar1 = { __LIB_2__::func_114(Global_35, 2f) };
			iVar0 = __LIB_2__::func_431(*iParam0, vVar1, 1060437492 /* Float: 0.707f */);
			switch (iVar0)
			{
				case 0:
					return joaat("EAFOR_A_F");
				case 2:
					return joaat("EAFOR_A_R_ANGRY");
				case 3:
					return joaat("EAFOR_A_L_ANGRY");
			}
			break;
	}
	return 0;
}

void func_800(int iParam0)
{
	int iVar0;
	if (__LIB_7__::func_929(65536))
	{
		if (!__LIB_2__::func_763(Local_1617.f_138, 0))
		{
			__LIB_8__::func_123(Local_1617.f_138, 1, 1);
		}
		if (!__LIB_7__::func_933(2097152))
		{
			__LIB_7__::func_934(2097152);
			PED::_0xAAB050DA48B57978(*iParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_103 == 3)
			{
				__LIB_7__::func_934(1048576);
			}
		}
		if (__LIB_0__::func_75(&(vLocal_570[3 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_570[3 /*3*/]));
		}
		if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_570[5 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_570[5 /*3*/]));
		}
		if (__LIB_1__::func_313(&(vLocal_570[5 /*3*/]), 10f))
		{
			__LIB_3__::func_154(&(Local_1617.f_35), __LIB_8__::func_72(), *iParam0, Global_35, 0, 0, 1, 1);
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			switch (iLocal_103)
			{
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
					TASK::TASK_CONFRONT(0, Global_35, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
					TASK::_TASK_PERFORM_SEQUENCE_2(*iParam0, iLocal_196, 2f, 7.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
					Local_104 = 0;
					break;
				case 2:
					iVar0 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, iVar0, false, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_196);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
					Local_104 = 0;
					break;
				case 3:
					__LIB_7__::func_934(1048576);
					break;
			}
			iLocal_103++;
		}
	}
	else
	{
		if (__LIB_0__::func_75(&(vLocal_570[5 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_570[5 /*3*/]));
		}
		if (__LIB_7__::func_933(2097152))
		{
			if (!__LIB_0__::func_75(&(vLocal_570[3 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_570[3 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_570[3 /*3*/]), 15f))
			{
				if (iLocal_103 == 3)
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					PED::_0x935CF6E42BAF7F4D(*iParam0);
					__LIB_8__::func_124(Local_1617.f_138, 1);
					__LIB_2__::func_451(&(Local_211[0 /*21*/]), 0);
				}
				__LIB_7__::func_965(2097152);
			}
		}
	}
	if (__LIB_7__::func_933(2097152))
	{
		if (!__LIB_0__::func_163(*iParam0, 242628503))
		{
			__LIB_8__::func_221(&Local_104, 0);
		}
	}
}

int func_804(int iParam0)
{
	if (!__LIB_7__::func_933(4096))
	{
		__LIB_8__::func_159(4096, STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_7__::func_956(), 15, __LIB_2__::func_929(Local_1617.f_138), __LIB_8__::func_73()));
	}
	return 1;
}

void func_805(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, __LIB_2__::func_460(7));
	Local_275[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_275[iParam0 /*52*/][0 /*17*/]), 1);
	func_762(iParam0, 0, 1);
	func_1020(iParam0, 1, __LIB_2__::func_460(10));
	func_762(iParam0, 1, 0);
	func_762(iParam0, 2, 0);
	func_1021(iParam0, 2, 1);
	__LIB_7__::func_932(268435456);
}

bool func_826(int iParam0)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iParam0]))
	{
		return false;
	}
	return OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0]) == 5;
}

int func_942(int* iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_18__::func_117(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_942(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_18__::func_118(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_18__::func_119(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_18__::func_120(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_18__::func_119(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_18__::func_118(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

void func_961(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		iVar0 = *iParam0;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		iVar0 = *iParam1;
	}
	else
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -137640087))
	{
		iLocal_489[iParam2] = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1300850144))
	{
		iLocal_489[iParam2] = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1011860333))
	{
		iLocal_489[iParam2] = 2;
	}
	else
	{
		iLocal_489[iParam2] = -1;
	}
}

bool func_967(int iParam0, int iParam1)
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
	if (func_1129(iParam1))
	{
		return false;
	}
	return true;
}

void func_968(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_691(iParam0);
	if (!__LIB_7__::func_939(__LIB_8__::func_76(iParam0)) && !__LIB_8__::func_140(iVar0))
	{
		iVar1 = (810 + iParam0);
		iVar2 = __LIB_2__::func_963(iVar1);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (!__LIB_7__::func_939(__LIB_8__::func_20(iParam0)) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar2, 2009491632))
			{
				__LIB_7__::func_912(iVar2, joaat("EXIT_TREE_FALL"), 10f, 0, "EXIT_TREE_FALL", 1, 129);
				TASK::CLEAR_PED_TASKS(iVar2, true, false);
				PED::_0x2208438012482A1A(iVar2, false, false);
				__LIB_7__::func_926(__LIB_8__::func_20(iParam0));
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar2, 1407243653))
			{
				PED::SET_PED_CONFIG_FLAG(iVar2, 146, false);
				PED::SET_PED_CONFIG_FLAG(iVar2, 234, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 178, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 389, false);
				__LIB_7__::func_926(__LIB_8__::func_76(iParam0));
				__LIB_7__::func_926(__LIB_8__::func_17(iParam0));
			}
		}
	}
}

bool func_970(int iParam0, bool bParam1)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iParam0]))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (__LIB_7__::func_923(64))
	{
		return true;
	}
	if (!__LIB_0__::func_75(&(vLocal_570[0 /*3*/])))
	{
		return false;
	}
	if (__LIB_1__::func_871(&(vLocal_570[0 /*3*/])) <= 5000)
	{
		return false;
	}
	return true;
}

void func_974(int iParam0)
{
	int iVar0[30];
	int iVar31;
	int iVar32;
	int iVar33;
	iVar31 = 0;
	iVar31 = func_300(&iVar0);
	iVar32 = (810 + iParam0);
	iVar33 = __LIB_2__::func_963(iVar32);
	if (!ENTITY::IS_ENTITY_DEAD(iVar33))
	{
		iVar0[iVar31] = iVar33;
		iVar31++;
	}
	if (!__LIB_7__::func_923(32))
	{
		func_1131(&iVar0, &iParam0, 1);
	}
	else
	{
		func_1132(iLocal_2082[0], &iVar0);
	}
}

void func_977(int iParam0)
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
	iVar2 = func_691(iVar1);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if ((__LIB_2__::func_117(64) && !PED::_IS_PED_USING_SCENARIO_HASH(iVar0, __LIB_8__::func_18())) && !func_466(iVar2))
		{
			if (!__LIB_2__::func_763(iParam0, 0))
			{
				__LIB_8__::func_123(iParam0, 1, 1);
			}
			func_467(&iVar2);
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_478[iVar1]))
			{
				TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_478[iVar1], 0, 0, true, false, 0, false, -1f, false);
			}
			else
			{
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, __LIB_8__::func_78(iVar1), 5f, 0, false, false, false, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
			TASK::_TASK_PERFORM_SEQUENCE_2(iVar0, iLocal_196, 1f, 3f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			__LIB_8__::func_124(iParam0, 1);
			func_474(iVar2, 0);
		}
	}
}

void func_978(int iParam0, int iParam1)
{
	vector3 vVar0;
	if (__LIB_8__::func_24(&(Local_492[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop"))
	{
		__LIB_8__::func_196(&(Local_492[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
	}
	func_1136(iParam0, iParam1);
	if (iLocal_191[iParam1] < 3)
	{
		if (PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 330, true);
			vVar0 = { __LIB_8__::func_214(iParam0, __LIB_8__::func_161(iParam1), __LIB_8__::func_162(iParam1), iLocal_486[iParam1], 1) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				TASK::TASK_PLAY_ANIM(*iParam0, "script_proc@event_area@appleseed@boom_lift", &vVar0, 2f, -2f, -1, 16, 0f, false, 0, false, 0, false);
			}
			iLocal_191[iParam1] = 3;
		}
		else if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			vVar0 = { __LIB_8__::func_214(iParam0, __LIB_8__::func_161(iParam1), __LIB_8__::func_162(iParam1), iLocal_486[iParam1], 0) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				TASK::TASK_PLAY_ANIM(*iParam0, "script_proc@event_area@appleseed@boom_lift", &vVar0, 2f, -2f, -1, 16, 0f, false, 0, false, 0, false);
			}
			iLocal_191[iParam1] = 3;
		}
	}
	switch (iLocal_191[iParam1])
	{
		case 0:
			iLocal_191[iParam1] = 1;
			break;
		case 1:
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_614.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, -1064143891))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_492[__LIB_8__::func_160(iParam1) /*7*/], 1f);
				__LIB_8__::func_192(&(Local_492[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_492[__LIB_8__::func_160(iParam1) /*7*/], __LIB_8__::func_163(iParam1), 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_492[__LIB_8__::func_160(iParam1) /*7*/], -1f);
				__LIB_8__::func_192(&(Local_492[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 2;
			}
			break;
		case 2:
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_614.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, -1064143891))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_492[__LIB_8__::func_160(iParam1) /*7*/], 1f);
				__LIB_8__::func_192(&(Local_492[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_492[__LIB_8__::func_160(iParam1) /*7*/], __LIB_8__::func_164(iParam1), 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_492[__LIB_8__::func_160(iParam1) /*7*/], 1f);
				__LIB_8__::func_192(&(Local_492[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 1;
			}
			break;
		case 3:
			if (!PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()) && !PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_614.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, -1064143891))
				{
					iLocal_191[iParam1] = 4;
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_RATE(Local_492[__LIB_8__::func_160(iParam1) /*7*/]) > 0f)
				{
					iLocal_191[iParam1] = 1;
				}
				else
				{
					iLocal_191[iParam1] = 2;
				}
			}
			break;
		case 4:
			iLocal_191[iParam1] = 5;
			if (iLocal_602 < 14)
			{
				iLocal_602 = 14;
			}
			break;
		case 5:
			break;
	}
}

bool func_982()
{
	if (!__LIB_1__::func_205(Global_35, iLocal_75[10], 1, 0))
	{
		return false;
	}
	if (iLocal_1920 != 5 && iLocal_1920 != 6)
	{
		return false;
	}
	return true;
}

void func_1020(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_1__::func_484(Local_275[iParam0 /*52*/][iParam1 /*17*/].f_6, sParam2, 0);
	Local_275[iParam0 /*52*/][iParam1 /*17*/].f_5 = sParam2;
}

void func_1021(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_3__::func_158(&(Local_275[iParam0 /*52*/][iParam1 /*17*/]), bParam2);
}

void func_1024(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, "LOG_CTXTGIVE");
	Local_275[iParam0 /*52*/][0 /*17*/].f_14 = 500;
	__LIB_1__::func_471(&(Local_275[iParam0 /*52*/][0 /*17*/]), 1);
	__LIB_1__::func_483(Local_275[iParam0 /*52*/][0 /*17*/].f_6, "LOG_CTXTGIVE", Local_275[iParam0 /*52*/][0 /*17*/].f_14, 0);
	func_762(iParam0, 0, 1);
	func_1020(iParam0, 1, __LIB_2__::func_460(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1021(iParam0, 2, !bParam1);
	__LIB_7__::func_934(524288);
}

bool func_1129(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_2146)
	{
		if (iParam0 == iLocal_2130[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1131(int iParam0, int iParam1, bool bParam2)
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
	__LIB_1__::func_902(Local_1617.f_137, &iVar4, &iVar5, 0, 0);
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
						func_1230(iVar3, -1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar7, false, true);
						PED::_0xEEED8FAFEC331A70(iVar7, __LIB_8__::func_143(*iParam1), 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, __LIB_8__::func_143(*iParam1), 4, 1, 30f, 8000, 0);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, __LIB_8__::func_144(*iParam1), 0);
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
						TASK::TASK_PERFORM_SEQUENCE(iVar7, iLocal_196);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
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
							func_1230(iVar3, -1);
							if (PED::IS_PED_USING_ANY_SCENARIO(iVar7))
							{
								TASK::_0xE7FA07624574B79A(iVar7, iVar8, 1, 1, 10f, 1, 0, 0, 0);
							}
							else
							{
								PED::_0xEEED8FAFEC331A70(iVar7, __LIB_8__::func_143(*iParam1), 1);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, __LIB_8__::func_144(*iParam1), 0);
								TASK::TASK_STAND_STILL(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
								TASK::TASK_PERFORM_SEQUENCE(iVar7, iLocal_196);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
							}
							PED::_0xAAB050DA48B57978(iVar7, __LIB_8__::func_81(), iVar7, -1, 4);
						}
					}
				}
				if (iLocal_2146 >= 15)
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

void func_1132(int iParam0, int iParam1)
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
	__LIB_1__::func_902(Local_1617.f_137, &iVar3, &iVar4, 0, 0);
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
					if (iLocal_2146 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1232(&fVar7);
						}
						else
						{
							fVar1 = -1f;
						}
					}
					if (fVar0 <= fVar1 && !ENTITY::IS_ENTITY_DEAD(iVar27))
					{
						func_1230(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iLocal_2146] = fVar23;
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
				if (iLocal_98 == 2 && !func_1233(813))
				{
					iVar26 = func_1232(&fVar7);
					func_1230(813, iVar26);
					func_474(func_691(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iLocal_2146)
				{
					iVar27 = __LIB_2__::func_963(iLocal_2130[iVar28]);
					PED::_0x62FDAD5E01D2DD47(iVar27, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2, 0);
					TASK::CLEAR_PED_TASKS(iVar27, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, -1, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
					TASK::_TASK_PERFORM_SEQUENCE_2(iVar27, iLocal_196, 0f, 2.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
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

void func_1136(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1234(iParam0);
			break;
		case 1:
			func_1235(iParam0);
			break;
	}
}

void func_1230(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_2130[iParam1] = iParam0;
	}
	else
	{
		iLocal_2130[iLocal_2146] = iParam0;
		iLocal_2146++;
	}
}

int func_1232(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iLocal_2146)
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

bool func_1233(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_2146)
	{
		if (iLocal_2130[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1234(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1428722195))
		{
			iLocal_486[0] = 0;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1738422014))
		{
			iLocal_486[0] = 1;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1327707782))
		{
			iLocal_486[0] = 2;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1022661161))
		{
			iLocal_486[0] = 3;
		}
		else
		{
			iLocal_486[0] = -1;
		}
	}
}

void func_1235(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1428722195))
		{
			iLocal_486[1] = 0;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1738422014))
		{
			iLocal_486[1] = 1;
		}
		else
		{
			iLocal_486[1] = -1;
		}
	}
}

