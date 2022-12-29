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
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	struct<21> Local_213[2];
	struct<52> Local_256[2];
	int iLocal_361 = 0;
	struct<21> Local_362 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 1065353216;
	var uLocal_397 = 1119092736;
	var uLocal_398 = 1092616192;
	var uLocal_399 = 1085276160;
	int iLocal_400 = 0;
	struct<22> Local_401[2];
	char cLocal_446[32] = "";
	int iLocal_450[5] = { 0, 0, 0, 0, 0 };
	var uLocal_456[5] = { 0, 0, 0, 0, 0 };
	var uLocal_462[5] = { 0, 0, 0, 0, 0 };
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470[2] = { 0, 0 };
	int iLocal_473[2] = { 0, 0 };
	var uLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	struct<7> Local_479[11];
	vector3 vLocal_557[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588[2] = { 0, 0 };
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596[2] = { 0, 0 };
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	var uLocal_604[4] = { 0, 0, 0, 0 };
	int iLocal_609 = 0;
	var uLocal_610 = 0;
	struct<691> Local_611 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = -1;
	var uLocal_1312 = 1;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = -1;
	var uLocal_1324 = 1;
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
	var uLocal_1335 = -1;
	var uLocal_1336 = 1;
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
	var uLocal_1347 = -1;
	var uLocal_1348 = 1;
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
	var uLocal_1359 = -1;
	var uLocal_1360 = 1;
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
	var uLocal_1371 = -1;
	var uLocal_1372 = 1;
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
	var uLocal_1383 = -1;
	var uLocal_1384 = 1;
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
	var uLocal_1395 = -1;
	var uLocal_1396 = 1;
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
	var uLocal_1407 = -1;
	var uLocal_1408 = 1;
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
	var uLocal_1419 = -1;
	var uLocal_1420 = 1;
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
	var uLocal_1431 = -1;
	var uLocal_1432 = 1;
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
	var uLocal_1443 = -1;
	var uLocal_1444 = 1;
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
	var uLocal_1455 = -1;
	var uLocal_1456 = 1;
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
	var uLocal_1467 = -1;
	var uLocal_1468 = 1;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = -1;
	var uLocal_1480 = 1;
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
	var uLocal_1491 = -1;
	var uLocal_1492 = 1;
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
	var uLocal_1503 = -1;
	var uLocal_1504 = 1;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = -1;
	var uLocal_1516 = 1;
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
	var uLocal_1527 = -1;
	var uLocal_1528 = 1;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = -1;
	var uLocal_1540 = 1;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = -1;
	var uLocal_1552 = 1;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = -1;
	var uLocal_1564 = 1;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = -1;
	var uLocal_1576 = 1;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = -1;
	var uLocal_1588 = 1;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = -1;
	var uLocal_1600 = 1;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = -1;
	var uLocal_1612 = 1;
	var uLocal_1613 = 0;
	struct<141> Local_1614 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	struct<12> Local_1765[12];
	int iLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1918[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1949[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1980[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2011 = 0;
	var uLocal_2012 = 8;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
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
	int iLocal_2077[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2087 = 9;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097[2] = { 0, 0 };
	int iLocal_2100[2] = { 0, 0 };
	int iLocal_2103[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2114 = 10;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	int iLocal_2125[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2136[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2147[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2163 = 0;
	struct<35> Local_2164 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1096810496, 1090519040, 0 } ;
	var uLocal_2199[1] = { 0 };
	struct<32> Local_2201 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_2233 = 1096810496;
	var uLocal_2234 = 1090519040;
	var uLocal_2235 = 0;
	struct<5> Local_2236[5];
	var uLocal_2262[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2268 = 0;
	int iLocal_2269 = 0;
	int iLocal_2270 = 0;
	int iLocal_2271 = 0;
	bool bLocal_2272 = false;
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
	Local_1614.f_136 = 0;
	Local_1614.f_137 = uScriptParam_0;
	Local_1614.f_138 = 807;
	if (__LIB_0__::func_2() != 0)
	{
	}
	else
	{
		__LIB_7__::func_919();
		__LIB_8__::func_203(Local_1614.f_136);
		return;
	}
	iLocal_98 = __LIB_0__::func_982(Local_1614.f_136);
	if (__LIB_7__::func_907(Local_1614.f_136, 536870912))
	{
		__LIB_0__::func_516(&(Global_40.f_9096[Local_1614.f_136 /*12*/].f_6), __LIB_0__::func_771(__LIB_7__::func_920()));
	}
	if (!__LIB_7__::func_908(Local_1614.f_136, 2097152))
	{
		__LIB_8__::func_82(Local_1614.f_136, 2097152);
	}
	__LIB_7__::func_921();
	__LIB_8__::func_167(128, __LIB_8__::func_215(Local_1614.f_136));
	if (__LIB_7__::func_908(Local_1614.f_136, 33554432))
	{
		__LIB_7__::func_922(128);
		__LIB_8__::func_83(Local_1614.f_136, 33554432);
	}
	__LIB_7__::func_922(1);
	__LIB_8__::func_167(262144, __LIB_7__::func_907(Local_1614.f_136, 128));
	__LIB_8__::func_167(131072, __LIB_7__::func_907(Local_1614.f_136, 4));
	__LIB_8__::func_167(2097152, __LIB_7__::func_908(Local_1614.f_136, 1024));
	__LIB_8__::func_167(-2147483648, __LIB_7__::func_908(Local_1614.f_136, 16384));
	__LIB_8__::func_167(1048576, __LIB_8__::func_242(Local_1614.f_136));
	__LIB_8__::func_167(16, __LIB_8__::func_309(Local_1614.f_136));
	__LIB_8__::func_234(0, &Local_1614, 0);
	VEHICLE::_0x012701ED938B85DE(1f, 5f);
	if (__LIB_7__::func_907(Local_1614.f_136, 128) || (iLocal_98 == 2 && (__LIB_7__::func_923(-2147483648) || !__LIB_7__::func_908(1, 2))))
	{
		__LIB_7__::func_922(262144);
	}
	__LIB_8__::func_235(&Local_1614, 32, func_20());
	if (__LIB_7__::func_924(&Local_1614, 32))
	{
		if (!__LIB_0__::func_117(Local_1614.f_138, 32))
		{
			__LIB_0__::func_123(Local_1614.f_138, 32);
		}
		if (!__LIB_7__::func_923(1048576))
		{
			iVar0 = 16;
			__LIB_3__::func_710(Global_1392194[Local_1614.f_136 /*10*/].f_6, iVar0);
		}
	}
	else
	{
		__LIB_7__::func_925(Global_1392194[Local_1614.f_136 /*10*/].f_6);
	}
	__LIB_8__::func_255(Local_1614.f_136, Local_1614.f_137, &Local_611, &Local_1614, 1, 1);
	__LIB_8__::func_167(64, func_28());
	__LIB_8__::func_167(16384, func_29());
	__LIB_8__::func_167(32768, __LIB_8__::func_204());
	__LIB_8__::func_167(65536, __LIB_8__::func_205());
	__LIB_8__::func_167(256, __LIB_8__::func_216());
	func_33();
	Local_611.f_13 = joaat("LOGGING_WORKERS");
	func_34();
	if (!__LIB_7__::func_924(&Local_1614, 32))
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
	__LIB_8__::func_203(Local_1614.f_136);
	uScriptParam_0 = uScriptParam_0;
	Local_611.f_4 = { -1399.503f, -223.7296f, 99.81865f };
	Local_611.f_7 = { -1474.662f, -341.2676f, 80f };
	Local_611.f_10 = { -1326.326f, -116.0771f, 150f };
	if (__LIB_7__::func_923(16))
	{
		Local_362.f_3 = 1;
	}
	if (__LIB_7__::func_924(&Local_1614, 32))
	{
		POPULATION::_0x74C2B3DC0B294102(Global_1392194[Local_1614.f_136 /*10*/].f_5);
		POPULATION::_0xA1CFB35069D23C23(Global_1392194[Local_1614.f_136 /*10*/].f_5);
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
	__LIB_8__::func_251(&Local_1614);
	__LIB_4__::func_203(&Local_1614, 1);
	if (__LIB_7__::func_923(1048576) || __LIB_7__::func_924(&Local_1614, 32))
	{
		__LIB_8__::func_84(&Local_1614, 1);
	}
	if (__LIB_7__::func_923(262144) && !__LIB_7__::func_907(Local_1614.f_136, 16777216))
	{
		__LIB_8__::func_85(Local_1614.f_136, 16777216);
	}
	__LIB_8__::func_131(&Local_1614, 128);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_2272 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_2272, 9323, 0);
		func_46();
		if (!bLocal_2272)
		{
			switch (iLocal_2269)
			{
				case 0:
					if (!__LIB_7__::func_907(Local_1614.f_136, 524288) && Local_611.f_3 < (15 + ((2 + (Local_611 + Local_611.f_1)) + iLocal_14)))
					{
						__LIB_7__::func_927((15 + ((2 + (Local_611 + Local_611.f_1)) + iLocal_14)), &Local_611);
						__LIB_2__::func_259(&(vLocal_557[4 /*3*/]));
					}
					else if (func_49())
					{
						iLocal_2269 = 1;
					}
					break;
				case 1:
					__LIB_7__::func_928(16);
					if (!__LIB_7__::func_929(1) && func_52())
					{
						bVar1 = __LIB_7__::func_929(16);
						__LIB_8__::func_168(1, __LIB_8__::func_226(&Local_611, &Local_1614, &iLocal_2077, &iLocal_2100, &bVar1, &iLocal_194));
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
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2100[1]))
								{
									iLocal_2100[1] = VEHICLE::_CREATE_MISSION_TRAIN(-1901305252, __LIB_7__::func_930(), false, false, true, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2100[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2100[1], false, false))
								{
									VEHICLE::SET_TRAIN_SPEED(iLocal_2100[1], 0f);
									VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_2100[1], 0f);
									VEHICLE::_0x3660BCAB3A6BB734(iLocal_2100[1]);
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2100[1], false);
									VEHICLE::_0xA72B1BF3857B94D7(iLocal_2100[1], 1);
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
						if (!__LIB_7__::func_924(&Local_1614, 32))
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
						if (!__LIB_7__::func_924(&Local_1614, 32))
						{
							__LIB_2__::func_935(Local_1614.f_138, 0, 0, 0, 0, 0);
							__LIB_7__::func_932(16);
							__LIB_8__::func_168(4, __LIB_8__::func_123(Local_1614.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1614.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1614.f_138), 146, true);
							}
						}
						else
						{
							__LIB_7__::func_932(4);
						}
					}
					if (!__LIB_7__::func_929(8))
					{
						if (!__LIB_7__::func_924(&Local_1614, 32) && !__LIB_7__::func_924(&Local_1614, 2))
						{
							if (__LIB_8__::func_128(&Local_611) && __LIB_3__::func_400(__LIB_1__::func_977(), &Local_1765, 0, 0, 0, -1, 1))
							{
								if (!__LIB_7__::func_924(&Local_1614, 32) && __LIB_7__::func_923(64))
								{
									__LIB_0__::func_928(&(Local_1614.f_35), iLocal_2077[0], "LOGGING_VICTIM", 0);
									iVar3 = 0 + 810;
									iVar4 = __LIB_2__::func_963(iVar3);
									__LIB_0__::func_928(&(Local_1614.f_35), iVar4, "LOGGING_WORKER", 0);
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
						if (__LIB_7__::func_923(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_2077[5]))
						{
							func_69(&(uLocal_72[1]), &(iLocal_2077[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, 0, 0, 0);
						}
						if (__LIB_7__::func_923(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_2077[4]))
						{
							func_69(&(uLocal_72[0]), &(iLocal_2077[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, 0, iLocal_204, 0);
							if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
							{
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 1, true);
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 2, true);
								__LIB_7__::func_934(128);
							}
						}
						__LIB_7__::func_932(524288);
					}
					__LIB_8__::func_170(Local_1614.f_136, 1);
					if (((((((((!CAM::IS_SCREEN_FADED_OUT() && __LIB_7__::func_929(1)) && __LIB_7__::func_929(2)) && __LIB_7__::func_929(4)) && __LIB_7__::func_929(8)) && __LIB_7__::func_929(131072)) && __LIB_7__::func_929(524288)) && func_73()) && __LIB_8__::func_171()) || __LIB_7__::func_924(&Local_1614, 32))
					{
						if (!__LIB_7__::func_924(&Local_1614, 32) && (__LIB_7__::func_923(128) || !func_75()))
						{
							__LIB_0__::func_928(&(Local_1614.f_35), Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&(Local_1614.f_35), __LIB_2__::func_963(Local_1614.f_138), "EA_LCMP_Foreman", 0);
							func_76();
						}
						else
						{
							__LIB_0__::func_928(&(Local_1614.f_35), Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&(Local_1614.f_35), __LIB_2__::func_963(Local_1614.f_138), "EA_LCMP_Foreman", 0);
							__LIB_8__::func_124(Local_1614.f_138, 1);
							__LIB_2__::func_451(&(Local_213[0 /*21*/]), 0);
						}
						func_79();
						iLocal_2269 = 2;
					}
					break;
				case 2:
					if (__LIB_7__::func_924(&Local_1614, 128) && __LIB_7__::func_935(Local_1614.f_136, __LIB_7__::func_923(128)))
					{
						func_81(0);
						__LIB_8__::func_132(&Local_1614, 128);
					}
					__LIB_8__::func_252();
					if (!__LIB_7__::func_923(16777216))
					{
						__LIB_8__::func_167(16777216, __LIB_18__::func_72(&Local_1614, &Local_611));
					}
					if (!__LIB_7__::func_924(&Local_1614, 32))
					{
						if (__LIB_8__::func_234(iLocal_206, &Local_1614, 5))
						{
							func_85();
							func_86();
						}
						if (!__LIB_7__::func_924(&Local_1614, 2))
						{
							__LIB_8__::func_357(&iLocal_1918, &uLocal_1980, &Local_1614, 808, 833, &iLocal_190, &iLocal_206, 10, -1082130432 /* Float: -1f */, 1);
							__LIB_7__::func_936(&iLocal_1918);
							__LIB_7__::func_936(&iLocal_2077);
							__LIB_7__::func_936(&iLocal_2103);
							func_89();
							__LIB_8__::func_243();
							if ((!__LIB_7__::func_924(&Local_1614, 32) && !__LIB_7__::func_923(32)) && __LIB_7__::func_923(128))
							{
								__LIB_8__::func_117(&Local_1614, 0, __LIB_8__::func_133(), __LIB_8__::func_134());
								__LIB_8__::func_87();
							}
							if (func_95())
							{
								if (__LIB_7__::func_933(8192))
								{
									TASK::SET_ANIM_RATE(Local_611.f_690[12 /*12*/].f_8, 0f, 0, false);
									TASK::SET_ANIM_RATE(Local_611.f_690[13 /*12*/].f_8, 0f, 0, false);
								}
								__LIB_8__::func_206(&Local_362, &Local_1614, 0);
								__LIB_8__::func_129(&Local_1614);
								__LIB_8__::func_83(Local_1614.f_136, 16384);
								__LIB_0__::func_325(&iLocal_2011);
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
									__LIB_8__::func_131(&Local_1614, 4096);
									__LIB_8__::func_131(&Local_1614, 16384);
								}
								else
								{
									__LIB_8__::func_82(Local_1614.f_136, 1024);
								}
								func_105();
								func_106();
								__LIB_7__::func_937();
								func_108(1);
								iVar6 = 0;
								while (iVar6 < 2)
								{
									__LIB_2__::func_480(&(Local_256[iVar6 /*52*/]), 1, 1, 1, 0);
									iVar6++;
								}
								__LIB_2__::func_461(0);
								__LIB_0__::func_172(iLocal_75[1]);
								__LIB_7__::func_938();
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_2103[0]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2103[0], false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[23 /*12*/].f_8))
								{
									ENTITY::DETACH_ENTITY(Local_611.f_690[23 /*12*/].f_8, false, true);
								}
								if (iLocal_98 == 3 && iLocal_584 < 15)
								{
									__LIB_0__::func_325(&iLocal_2011);
								}
								__LIB_3__::func_334(&uLocal_2087);
								__LIB_3__::func_334(&uLocal_2114);
								__LIB_3__::func_334(&uLocal_2097);
								__LIB_8__::func_244(Local_1614.f_136, 3);
								__LIB_8__::func_207(&Local_1614);
								iLocal_2271 = 4;
								iVar7 = __LIB_0__::func_55(!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1614.f_138)), 1, 0);
								if (!__LIB_7__::func_924(&Local_1614, 4096))
								{
									__LIB_3__::func_600(__LIB_2__::func_963(Local_1614.f_138), Global_35, "LOG_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
									iVar8 = __LIB_7__::func_940(&Local_1614, Local_1614.f_28);
								}
								__LIB_8__::func_131(&Local_1614, 2);
								func_119();
								if (!__LIB_7__::func_923(1024))
								{
									__LIB_8__::func_172(&Local_1614, __LIB_2__::func_963(Local_1614.f_138), &(uLocal_2097[0]), 0, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0);
								}
								if (!(__LIB_7__::func_923(32) && __LIB_7__::func_923(1024)))
								{
									iLocal_2271 = __LIB_0__::func_55(iLocal_2271 > iVar7, (iLocal_2271 - iVar7), 0);
									iVar7 = __LIB_18__::func_76(&Local_1614, &iLocal_2077, &uLocal_2087, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar5, iLocal_2271, 0, 0, 0, iVar8, 1051260355 /* Float: 0.33f */);
									iLocal_2271 = __LIB_0__::func_55(iLocal_2271 > iVar7, (iLocal_2271 - iVar7), 0);
								}
								iLocal_2271 = __LIB_0__::func_55(iLocal_2271 > iVar7, (iLocal_2271 - iVar7), 0);
								__LIB_7__::func_927(iLocal_190, &Local_611);
								iVar7 = __LIB_8__::func_338(&Local_1614, &iLocal_1918, &uLocal_1949, iLocal_2271, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iLocal_190, iVar5, 0, 0, 0, iVar8, 1051260355 /* Float: 0.33f */);
								iLocal_2271 = __LIB_0__::func_55(iLocal_2271 > iVar7, (iLocal_2271 - iVar7), 0);
								func_33();
								__LIB_8__::func_131(&Local_1614, 128);
							}
						}
						else
						{
							__LIB_18__::func_99(&iLocal_1918, &Local_1614);
							func_125();
							if (__LIB_7__::func_923(1024))
							{
								if (__LIB_18__::func_73(&Local_1614, __LIB_2__::func_963(Local_1614.f_138), &(uLocal_2097[0]), 0))
								{
									if (__LIB_7__::func_923(32))
									{
										if (func_127())
										{
											iVar10 = 0;
											iVar9 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
											iLocal_2271 = __LIB_0__::func_55(iLocal_2271 > iVar10, (iLocal_2271 - iVar10), 0);
											iVar10 = (__LIB_18__::func_76(&Local_1614, &iLocal_2077, &uLocal_2087, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar9, iLocal_2271, 0, 0, 0, __LIB_7__::func_940(&Local_1614, Local_1614.f_28), 1051260355 /* Float: 0.33f */) + iVar10);
											iLocal_2271 = __LIB_0__::func_55(iLocal_2271 > iVar10, (iLocal_2271 - iVar10), 0);
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
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[0]))
									{
										if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_2077[0] || PED::_IS_PED_LASSOED(iLocal_2077[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_2077[0], 3))
										{
											__LIB_1__::func_864(iLocal_2077[0], 0, 0);
										}
									}
								}
								else if (!__LIB_0__::func_163(iLocal_2077[0], 518218985) && !TASK::GET_IS_TASK_ACTIVE(iLocal_2077[0], 3))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2077[0], false);
									PED::_0x89F5E7ADECCCB49C(iLocal_2077[0], "INJURED_LEFT_LEG");
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_2077[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
								}
							}
							if (!__LIB_7__::func_924(&Local_1614, 4) && __LIB_8__::func_236(&Local_1614, &iLocal_2077, &iLocal_2103, &(Local_1614.f_139), 5, __LIB_2__::func_963(Local_1614.f_138)))
							{
								__LIB_8__::func_131(&Local_1614, 4);
							}
						}
						if (!__LIB_7__::func_924(&Local_1614, 2))
						{
							if (__LIB_7__::func_923(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_2077[5]))
							{
								func_69(&(uLocal_72[1]), &(iLocal_2077[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, __LIB_7__::func_923(4096), 0, 0);
								if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]))
								{
									PROPSET::_0xD80FAF919A2E56EA(uLocal_72[1], joaat("PG_VEH_LOGWAGON_1"));
									__LIB_7__::func_934(128);
								}
							}
							if (__LIB_7__::func_923(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_2077[4]))
							{
								func_69(&(uLocal_72[0]), &(iLocal_2077[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, __LIB_7__::func_923(4096), iLocal_204, 0);
								if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
								{
									__LIB_7__::func_934(128);
								}
							}
						}
					}
					if (!__LIB_7__::func_924(&Local_1614, 2))
					{
						if (!__LIB_7__::func_924(&Local_1614, 32))
						{
							__LIB_8__::func_217(&Local_362);
							if (__LIB_8__::func_88(&Local_362, 1))
							{
								func_135(&Local_1614, &Local_362, &(Local_213[1 /*21*/]), &(Local_256[1 /*52*/]));
							}
							else
							{
								__LIB_8__::func_89(&Local_362, 4);
							}
						}
						if (func_137())
						{
							bLocal_2272 = true;
						}
					}
					else if (!__LIB_7__::func_924(&Local_1614, 32))
					{
						func_138();
					}
					break;
			}
		}
		if (func_139())
		{
			bLocal_2272 = true;
		}
		BUILTIN::WAIT(Local_1614.f_30);
	}
}

bool func_20()
{
	if (((__LIB_7__::func_907(Local_1614.f_136, 524288) || __LIB_7__::func_907(Local_1614.f_136, 2097152)) || __LIB_7__::func_907(Local_1614.f_136, 1048576)) || iLocal_98 > 3)
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
	if (!__LIB_7__::func_908(Local_1614.f_136, 512))
	{
		if (iLocal_98 == 2 && !__LIB_7__::func_907(Local_1614.f_136, 64))
		{
			if (__LIB_7__::func_907(Local_1614.f_136, 128))
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
		if (iLocal_98 == 1 && __LIB_7__::func_907(Local_1614.f_136, 128))
		{
			return true;
		}
	}
	return false;
}

bool func_29()
{
	if (iLocal_98 == 1 && !__LIB_7__::func_908(Local_1614.f_136, 1024))
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
			if (!__LIB_7__::func_924(&Local_1614, 32))
			{
				if (!__LIB_7__::func_924(&Local_1614, 2))
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
			if (!__LIB_7__::func_924(&Local_1614, 32))
			{
				if (!__LIB_7__::func_924(&Local_1614, 2))
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
			if (!__LIB_7__::func_924(&Local_1614, 32))
			{
				if (!__LIB_7__::func_924(&Local_1614, 2))
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
	TASK::_0x9C8F42A5D1859DC1(Global_1392194[Local_1614.f_136 /*10*/].f_5);
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
	if (__LIB_7__::func_924(&Local_1614, 32))
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
			if (iLocal_98 >= 4 || __LIB_7__::func_924(&Local_1614, 32))
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
			if (iLocal_98 >= 4 || __LIB_7__::func_924(&Local_1614, 32))
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
	if (__LIB_7__::func_924(&Local_1614, 32))
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
	if (__LIB_7__::func_924(&Local_1614, 32) && !(iLocal_98 == 4 && !__LIB_7__::func_923(262144)))
	{
		__LIB_7__::func_950(&Local_611);
		return 1;
	}
	else
	{
		func_85();
	}
	switch (iLocal_98)
	{
		case 1:
			Local_611 = 5;
			__LIB_8__::func_174(&Local_611);
			break;
		case 2:
			Local_611 = 5;
			__LIB_8__::func_237(&Local_611);
			iLocal_14 += 2;
			break;
		case 3:
			func_178();
			Local_611 = 5;
			__LIB_8__::func_300(&Local_611, __LIB_7__::func_908(Local_1614.f_136, 2048));
			break;
		case 4:
		case 5:
			break;
	}
	if (!__LIB_7__::func_924(&Local_1614, 32))
	{
		if (iLocal_98 < 4)
		{
			func_180();
			func_181();
			func_182();
		}
		if (__LIB_7__::func_923(16384))
		{
			Local_611.f_369[0 /*32*/].f_1 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
			Local_611.f_369[0 /*32*/] = 28;
			Local_611.f_369[0 /*32*/].f_6 = { -1403.857f, -226.9338f, 100.4594f };
			Local_611.f_369[0 /*32*/].f_9 = -83.35f;
		}
	}
	return 1;
}

bool func_38()
{
	if (iLocal_602 <= 0)
	{
		return false;
	}
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1614.f_136, 4))
	{
		return true;
	}
	if (!__LIB_2__::func_117(64))
	{
		return false;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1614.f_136, 128)))
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
			if (__LIB_7__::func_924(&Local_1614, 16384))
			{
				if (!__LIB_7__::func_924(&Local_1614, 32768))
				{
					__LIB_8__::func_176(Local_1614.f_136);
				}
				else
				{
					__LIB_8__::func_82(Local_1614.f_136, 1024);
				}
			}
			if (__LIB_7__::func_907(Local_1614.f_136, 128))
			{
				iVar0 = __LIB_2__::func_963(Local_1614.f_138);
				__LIB_8__::func_345(&iVar0);
			}
			__LIB_8__::func_206(&Local_362, &Local_1614, 0);
			__LIB_8__::func_93(Local_1614.f_136, 1073741824 /* Float: 2f */);
			__LIB_8__::func_93(Local_1614.f_136, 536870912);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			break;
		case 1:
			if (__LIB_0__::func_6(iLocal_154) && !((__LIB_1__::func_241(iLocal_154) || __LIB_1__::func_25(iLocal_154, 1)) || __LIB_8__::func_125(iLocal_154)))
			{
				__LIB_1__::func_559(iLocal_154, 0, 2);
			}
			if ((__LIB_7__::func_908(Local_1614.f_136, 16384) && ENTITY::DOES_ENTITY_EXIST(iLocal_2100[0])) && (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_IN_VEHICLE(Global_35, iLocal_2100[0], false)))
			{
				__LIB_8__::func_83(Local_1614.f_136, 16384);
			}
			if (__LIB_1__::func_565(&uLocal_1911))
			{
				__LIB_2__::func_353(&uLocal_1911, 1);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1910))
			{
				if (PATHFIND::_0xDE0EA444735C1368(iLocal_1910))
				{
					PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1910);
				}
				VOLUME::_DELETE_VOLUME(iLocal_1910);
			}
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
			}
			__LIB_7__::func_896(1024);
			__LIB_8__::func_209();
			break;
		case 2:
			if (PED::_0x91A5F9CBEBB9D936(uLocal_476))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_476, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 5, false);
				PED::SET_PED_RESET_FLAG(Global_35, 129, false);
			}
			func_214();
			func_215(1);
			func_216(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[5]) && !__LIB_1__::func_205(iLocal_2077[5], Global_1392194[Local_1614.f_136 /*10*/].f_5, 1, 0))
			{
				uLocal_2199[0] = iLocal_2077[5];
			}
			VEHICLE::_0x8379E05871AD24E0();
			if (__LIB_7__::func_908(Local_1614.f_136, 256) && !__LIB_7__::func_908(Local_1614.f_136, 32))
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
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[Local_1614.f_136 /*10*/].f_5))
			{
				iVar1 = 0;
				while (iVar1 < iLocal_2077)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[iVar1]))
					{
						if (__LIB_1__::func_205(iLocal_2077[iVar1], Global_1392194[Local_1614.f_136 /*10*/].f_5, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2077[iVar1]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2077[iVar1], true, false);
							}
							PED::DELETE_PED(&(iLocal_2077[iVar1]));
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2077[iVar1], false);
							PED::SET_PED_KEEP_TASK(iLocal_2077[iVar1], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2077[iVar1]));
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
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_479[iVar1 /*7*/]))
				{
					__LIB_7__::func_952(&(Local_479[iVar1 /*7*/]));
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 12)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1765[iVar1 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_1765[iVar1 /*12*/].f_8));
				}
				iVar1++;
			}
			break;
		case 4:
			__LIB_8__::func_258();
			func_108(1);
			__LIB_7__::func_919();
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[Local_1614.f_136 /*10*/].f_5))
			{
				if (!__LIB_7__::func_924(&Local_1614, 4) && !__LIB_7__::func_924(&Local_1614, 32))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[0]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[0], Global_1392194[Local_1614.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[0]));
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[1]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[1], Global_1392194[Local_1614.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[1]));
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2100[iVar1]))
					{
						if (iVar1 == 1)
						{
							VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_2100[iVar1]));
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_2100[iVar1], Global_1392194[Local_1614.f_136 /*10*/].f_5, true, 0))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2100[iVar1]));
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			__LIB_8__::func_82(Local_1614.f_136, 1073741824 /* Float: 2f */);
			__LIB_8__::func_339(Local_1614.f_136, &Local_611, &Local_1614);
			__LIB_8__::func_136(&Local_611);
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
	__LIB_8__::func_168(65536, __LIB_1__::func_205(Global_35, Global_1392194[Local_1614.f_136 /*10*/].f_6, 1, 0));
}

bool func_49()
{
	if (func_226(&(vLocal_557[4 /*3*/]), 30f))
	{
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	switch (iLocal_2270)
	{
		case 0:
			__LIB_3__::func_284(&(Local_611.f_15));
			__LIB_3__::func_284(&(Local_611.f_369));
			__LIB_3__::func_187(&(Local_15[0 /*28*/].f_11));
			__LIB_3__::func_187(&(Local_15[1 /*28*/].f_11));
			if (__LIB_7__::func_923(128) && iLocal_98 == 3)
			{
				__LIB_3__::func_284(&(Local_611.f_369));
			}
			func_229();
			func_230();
			__LIB_3__::func_314(&(Local_611.f_690));
			__LIB_3__::func_314(&Local_1765);
			func_232();
			__LIB_3__::func_284(&(Local_611.f_304));
			if (__LIB_7__::func_923(256))
			{
				__LIB_4__::func_434(-1901305252);
			}
			func_234();
			HUD::_TEXT_DATABASE_REQUEST(__LIB_7__::func_953());
			HUD::_TEXT_DATABASE_REQUEST(__LIB_7__::func_954());
			if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
			{
				__LIB_8__::func_177();
			}
			iLocal_2270 = 1;
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
			if (!func_236())
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
	if (!__LIB_3__::func_366(&(Local_611.f_15)) || !__LIB_3__::func_366(&(Local_611.f_369)))
	{
		return false;
	}
	if (!__LIB_3__::func_366(&(Local_611.f_304)))
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
		iParam3 = Local_611.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (PED::_0x5C16855277819BBF() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if (Local_611.f_369[*iParam1 /*32*/].f_1 != 0)
			{
				if (iLocal_98 != 3 || __LIB_7__::func_923(262144))
				{
					iLocal_2103[*iParam1] = __LIB_3__::func_403(Local_611.f_369[*iParam1 /*32*/].f_1, &(Local_611.f_369[*iParam1 /*32*/]), Local_611.f_369[*iParam1 /*32*/].f_6, Local_611.f_369[*iParam1 /*32*/].f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					DECORATOR::DECOR_SET_BOOL(iLocal_2103[*iParam1], "bNoticePlayer", false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2103[*iParam1], true);
				}
				else
				{
					iLocal_2125[*iParam1] = __LIB_3__::func_403(Local_611.f_369[*iParam1 /*32*/].f_1, &(Local_611.f_369[*iParam1 /*32*/]), Local_611.f_369[*iParam1 /*32*/].f_6, Local_611.f_369[*iParam1 /*32*/].f_9, 1, 0, 1, 0, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2125[*iParam1], true);
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

int func_69(var uParam0, var uParam1, var uParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	if (bParam6)
	{
		if (!uParam2->f_27)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false) && !VEHICLE::IS_VEHICLE_STOPPED(*uParam0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2f, -1, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, true, false);
			}
			uParam2->f_27 = 1;
		}
		return 0;
	}
	else if (uParam2->f_27)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 10f);
		}
		uParam2->f_27 = 0;
	}
	switch (uParam2->f_15)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (__LIB_8__::func_94(uParam2))
				{
					*uParam0 = VEHICLE::CREATE_VEHICLE(uParam2->f_11, uParam2->f_4, uParam2->f_10, false, true, false, false);
					if (__LIB_2__::func_1(*uParam1, 0, 1))
					{
						PED::SET_PED_INTO_VEHICLE(*uParam1, *uParam0, -1);
						DECORATOR::DECOR_SET_BOOL(*uParam1, "bNoticePlayer", true);
					}
					uParam2->f_15 = 1;
				}
			}
			break;
		case 1:
			if (!bParam4 && (__LIB_8__::func_256(*uParam0, &(uParam2->f_16), &(uParam2->f_21), &(uParam2->f_24), 3f, fParam3, 20f, 0, 1092616192 /* Float: 10f */, 1) || !uParam2->f_22))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 20f);
				}
				if (uParam2->f_23)
				{
					if ((!uParam2->f_26 && func_258(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
					{
						__LIB_3__::func_600(*uParam1, Global_35, uParam2->f_12, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
						uParam2->f_26 = 1;
					}
				}
				uParam2->f_15 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, -1817882002, true) == 8)
			{
				if (uParam2->f_23)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(*uParam1, *uParam0, 5f, 524295);
						uParam2->f_15 = 4;
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
				{
					if (!VEHICLE::IS_VEHICLE_STOPPED(*uParam0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2f, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_GO_TO_COORD_ANY_MEANS(0, uParam2->f_7, 1f, 0, false, 524419, -1f);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					uParam2->f_15 = 3;
				}
			}
			break;
		case 3:
			if (!bParam4 && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, 242628503, true) == 8)
			{
				if ((!uParam2->f_26 && func_258(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
				{
					__LIB_3__::func_600(*uParam1, Global_35, uParam2->f_12, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
					uParam2->f_26 = 1;
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 2000);
				if (!MISC::IS_STRING_NULL(uParam2->f_13))
				{
					TASK::TASK_PLAY_ANIM(0, uParam2->f_13, uParam2->f_14, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				}
				else if (iParam5 != 0)
				{
					TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(0, iParam5, 0, 0, 0);
				}
				else
				{
					TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 20f, 10f, 60f, 1);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				uParam2->f_15 = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

bool func_73()
{
	if (!__LIB_3__::func_315(&uLocal_2012))
	{
		return false;
	}
	if (!func_261())
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
			if (__LIB_7__::func_908(Local_1614.f_136, 256) && !__LIB_7__::func_907(Local_1614.f_136, 128))
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
	iVar0 = __LIB_2__::func_963(Local_1614.f_138);
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
			if (!__LIB_7__::func_907(Local_1614.f_136, 128))
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
			if (!__LIB_7__::func_907(Local_1614.f_136, 128))
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
			if (!__LIB_7__::func_907(Local_1614.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (__LIB_7__::func_908(Local_1614.f_136, 256) || __LIB_7__::func_908(Local_1614.f_136, 262144))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, __LIB_7__::func_958(), 1.5f, 0, false, false, false, false);
					}
					else
					{
						func_267(iVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, 1073741824 /* Float: 2f */);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1614.f_138)))
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
	if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1614.f_136, 128))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[0]))
		{
			__LIB_1__::func_766(iLocal_2077[0], __LIB_3__::func_672(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_2077[0], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2077[0], 146, false);
			__LIB_2__::func_133(iLocal_2077[0], __LIB_7__::func_959(Local_1614.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_2077[0], "HAS_VOICE", true);
			__LIB_2__::func_56(iLocal_2077[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[1]))
		{
			__LIB_1__::func_766(iLocal_2077[1], __LIB_3__::func_672(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_2077[1], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2077[1], 146, false);
			__LIB_2__::func_133(iLocal_2077[1], __LIB_7__::func_959(Local_1614.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_2077[1], "HAS_VOICE", true);
			__LIB_2__::func_56(iLocal_2077[1], 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2077[2]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2077[2], 1);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_2077[2], true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2077[3]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2077[3], 1);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_2077[3], true);
		}
	}
	else
	{
		if (__LIB_7__::func_923(64))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1388.626f, -234.6199f, 98.7432f, 1f, -1, 0.25f, 0, 9.6661f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1398.8f, -214.8f, 101.4f, 1f, -1, 0.25f, 0, 15.6f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1400.4f, -209.6f, 102f, 1f, -1, 0.25f, 0, 148.8f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -1400.871f, -210.4877f, 101.0936f, 2f, -1, false, false, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_2077[0], iLocal_196);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
				PED::SET_PED_CONFIG_FLAG(iLocal_2077[0], 146, false);
				__LIB_2__::func_56(iLocal_2077[0], 1, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[0]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2077[0], __LIB_8__::func_179(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2077[0], 146, false);
			__LIB_2__::func_56(iLocal_2077[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[1]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2077[1], __LIB_8__::func_179(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2077[1], 146, false);
			__LIB_2__::func_56(iLocal_2077[1], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[2]))
		{
			if (!__LIB_7__::func_923(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2077[2], __LIB_8__::func_179(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_2077[2], 146, false);
				__LIB_2__::func_56(iLocal_2077[2], 1, 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[3]))
		{
			if (!__LIB_7__::func_923(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2077[3], __LIB_8__::func_179(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_2077[3], 146, false);
				__LIB_2__::func_56(iLocal_2077[3], 1, 1);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[4]))
	{
		__LIB_2__::func_56(iLocal_2077[4], 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[5]))
	{
		__LIB_2__::func_56(iLocal_2077[5], 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < Local_611)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_2077[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_2077[iVar0], 7, 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_611.f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2103[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_2103[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_2103[iVar0], 7, 0, 1);
		}
		iVar0++;
	}
	__LIB_2__::func_259(&(vLocal_557[0 /*3*/]));
	return 1;
}

void func_81(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_982(0);
	if (__LIB_7__::func_907(0, 128))
	{
		if (iVar0 != 1 || __LIB_7__::func_907(0, 16777216))
		{
			__LIB_8__::func_180(0, 0);
		}
	}
	else
	{
		if (iVar0 > 3)
		{
			__LIB_8__::func_180(0, 0);
		}
		if (__LIB_7__::func_908(0, 32768))
		{
			__LIB_8__::func_180(0, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (__LIB_7__::func_908(0, 4) && __LIB_7__::func_907(0, 16777216))
					{
						__LIB_8__::func_180(0, 0);
					}
					else if (__LIB_7__::func_908(0, 1024))
					{
						if (bParam0 || !__LIB_7__::func_907(0, 268435456))
						{
							__LIB_8__::func_181(0);
							__LIB_8__::func_358(0, 0, "LOG_JOURN01", 0, !bParam0);
							__LIB_8__::func_85(0, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(0, 0);
					}
					break;
				case 2:
					__LIB_8__::func_180(0, 0);
					break;
				case 3:
					if (__LIB_7__::func_908(0, 8))
					{
						__LIB_8__::func_180(0, 0);
					}
					else if (__LIB_7__::func_908(0, 256))
					{
						if (bParam0 || !__LIB_7__::func_907(0, 268435456))
						{
							__LIB_8__::func_181(0);
							__LIB_8__::func_358(0, 0, "LOG_JOURN02", 0, !bParam0);
							__LIB_8__::func_85(0, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(0, 0);
					}
					break;
				default:
					__LIB_8__::func_180(0, 0);
					break;
			}
		}
	}
}

void func_85()
{
	bool bVar0;
	char* sVar1[4];
	int iVar6[4];
	int iVar11;
	Local_2164.f_24 = 0;
	Local_2164.f_23 = 0;
	Local_2164.f_17 = 0;
	__LIB_1__::func_336(&(Local_2164.f_34), 1);
	if (!__LIB_7__::func_923(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((__LIB_7__::func_923(128) && !__LIB_7__::func_923(2)) && !__LIB_7__::func_907(Local_1614.f_136, 4))
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
				if (__LIB_7__::func_924(&Local_1614, 256))
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
				if (__LIB_7__::func_907(Local_1614.f_136, 64))
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
					if (__LIB_7__::func_924(&Local_1614, 256))
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
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					if (__LIB_7__::func_908(Local_1614.f_136, 8))
					{
						if (__LIB_1__::func_149(1) > 0)
						{
							sVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01CH";
						}
						if (__LIB_7__::func_924(&Local_1614, 256))
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
					else if (__LIB_7__::func_908(Local_1614.f_136, 32))
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
					else if (__LIB_7__::func_908(Local_1614.f_136, 256))
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
						if (__LIB_7__::func_924(&Local_1614, 256))
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
				else if (__LIB_7__::func_908(Local_1614.f_136, 8))
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
	Local_2164.f_33 = 15f;
	__LIB_8__::func_95(&sVar1, &iVar6, &Local_2164, bVar0);
}

void func_86()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	if (__LIB_7__::func_924(&Local_1614, 256))
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
	iVar2 = Local_1614.f_138;
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
	if ((iLocal_206 % 10) == 0 && iLocal_609 < 4)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_75[5]))
		{
			iVar5 = __LIB_8__::func_363(&uVar0, &uLocal_2199, 4, iLocal_75[5], 0, 0, 0, joaat("DOMESTIC_DRAFT_HORSE"), 1, 0, 1, 0);
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if ((((!__LIB_1__::func_248(uVar0[iVar6], &uLocal_604) && PED::_GET_LAST_MOUNT(Global_35) != uVar0[iVar6]) && __LIB_0__::func_398(0) != uVar0[iVar6]) && __LIB_0__::func_398(1) != uVar0[iVar6]) && !__LIB_8__::func_137(uVar0[iVar6]))
				{
					uLocal_604[iLocal_609] = uVar0[iVar6];
					iLocal_609++;
					if (iLocal_609 >= 4)
					{
					}
					else
					{
						iVar6++;
					}
					iVar7 = (iLocal_206 % 4);
					if (iVar7 < 4 && !ENTITY::IS_ENTITY_DEAD(uLocal_604[iVar7]))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_604[iVar7]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_604[iVar7], true, false);
						}
						__LIB_3__::func_442(uLocal_604[iVar7], iLocal_75[5], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_604[iVar7], 45, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_604[iVar7], 51, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_604[iVar7], 71, false);
						__LIB_2__::func_20(&Local_1614, uLocal_604[iVar7], 0);
						if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(uLocal_604[iVar7], false)))
						{
							if (!__LIB_0__::func_163(uLocal_604[iVar7], 1351865802))
							{
								if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(1368197280))
								{
									TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uLocal_604[iVar7], 1368197280, 0, 0, 1);
								}
							}
						}
						else if (__LIB_0__::func_163(uLocal_604[iVar7], 1435919172))
						{
							TASK::CLEAR_PED_TASKS(uLocal_604[iVar7], true, false);
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
	if ((((__LIB_8__::func_88(&Local_362, 2) || func_294(&Local_1614, &(Local_1614.f_28))) || func_295()) || func_296()) || __LIB_8__::func_259(__LIB_2__::func_963(Local_1614.f_138), 0, &Local_1614, &(Local_1614.f_28), 0, 0))
	{
		if (__LIB_8__::func_88(&Local_362, 2))
		{
		}
		else if (Local_1614.f_28 == 65536)
		{
			__LIB_2__::func_571(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		else if (Local_1614.f_28 == 32)
		{
			return func_299();
		}
		else if (Local_1614.f_28 == 8192 && func_300())
		{
			__LIB_2__::func_571(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		if (__LIB_7__::func_960(&(Local_1614.f_28)) && !__LIB_7__::func_933(67108864))
		{
			if (!__LIB_8__::func_88(&Local_362, 1))
			{
				Local_362 = __LIB_2__::func_963(Local_1614.f_138);
				__LIB_18__::func_81(&Local_362, &Local_1614, Local_1614.f_28, 55961, 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_182(&Local_362, 0)))
				{
					StringCopy(&(Local_362.f_20[0 /*4*/]), __LIB_8__::func_182(&Local_362, 0), 32);
					StringCopy(&(Local_362.f_20[1 /*4*/]), __LIB_8__::func_182(&Local_362, 1), 32);
					__LIB_7__::func_961(&Local_362, 32);
				}
			}
			else if (Local_362.f_13 > 2)
			{
				__LIB_7__::func_961(&Local_362, 512);
			}
			__LIB_2__::func_571(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		return 1;
	}
	else if (((__LIB_8__::func_324(&iLocal_1918, &Local_1614, &(Local_1614.f_28), &iLocal_209, 0, (iLocal_190 - 1), 4) || __LIB_8__::func_324(&iLocal_2077, &Local_1614, &(Local_1614.f_28), &uLocal_207, 0, (Local_611 - 1), 1)) || __LIB_8__::func_324(&iLocal_2103, &Local_1614, &(Local_1614.f_28), &uLocal_208, 0, __LIB_0__::func_55(__LIB_7__::func_923(16384), Local_611.f_1 + 1, (Local_611.f_1 - 1)), 1)) || __LIB_8__::func_324(&uLocal_604, &Local_1614, &(Local_1614.f_28), &uLocal_610, 0, (iLocal_609 - 1), 3))
	{
		if (__LIB_7__::func_933(131072))
		{
			if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_2077[0] || PED::_IS_PED_LASSOED(iLocal_2077[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_2077[0], 3))
			{
				__LIB_1__::func_864(iLocal_2077[0], 0, 0);
			}
		}
		if (__LIB_7__::func_960(&(Local_1614.f_28)))
		{
			if (Local_1614.f_28 == 8192 && func_300())
			{
				return 0;
			}
			if (!__LIB_8__::func_88(&Local_362, 1) && !__LIB_7__::func_923(32))
			{
				if (Local_1614.f_28 == 8 && func_306())
				{
					return 1;
				}
				if (__LIB_7__::func_923(64) && Local_1614.f_10 == iLocal_2077[0])
				{
					if (Local_1614.f_28 != 65536)
					{
						__LIB_18__::func_81(&Local_362, &Local_1614, Local_1614.f_28, 55961, 0, 0);
						__LIB_7__::func_961(&Local_362, 64);
						StringCopy(&(Local_362.f_20[0 /*4*/]), "LCMPF_IG_TFAIM", 32);
						__LIB_7__::func_961(&Local_362, 32);
					}
				}
				else
				{
					__LIB_18__::func_81(&Local_362, &Local_1614, Local_1614.f_28, 55961, 0, 0);
				}
			}
			__LIB_2__::func_571(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		else if (Local_1614.f_28 == 32)
		{
			return func_299();
		}
		return 1;
	}
	else if (__LIB_18__::func_82(&Local_1614, &Local_362, 55961))
	{
		if (!__LIB_8__::func_88(&Local_362, 1))
		{
			__LIB_18__::func_81(&Local_362, &Local_1614, 1024, 55961, 0, 0);
			if (Local_362 == __LIB_2__::func_963(Local_1614.f_138) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_182(&Local_362, 0)))
			{
				StringCopy(&(Local_362.f_20[0 /*4*/]), __LIB_8__::func_182(&Local_362, 0), 32);
				StringCopy(&(Local_362.f_20[1 /*4*/]), __LIB_8__::func_182(&Local_362, 1), 32);
				__LIB_7__::func_961(&Local_362, 32);
			}
			__LIB_2__::func_571(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		else
		{
			__LIB_7__::func_961(&Local_362, 512);
		}
	}
	else if (func_308())
	{
		Local_1614.f_28 = 2;
		return 1;
	}
	iVar1 = __LIB_0__::func_259(iVar0 + 4, (iLocal_190 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (uLocal_1980[iVar0] < Local_1614.f_19 && __LIB_7__::func_962(iLocal_1918[iVar0], &Local_1614, 0, uLocal_1980[iVar0]))
		{
			__LIB_2__::func_259(&(vLocal_557[6 /*3*/]));
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_226(&(vLocal_557[6 /*3*/]), 10f))
	{
		__LIB_7__::func_898(&Local_1614, &(Local_1614.f_28));
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
				if (__LIB_7__::func_923(262144) && !func_335())
				{
					__LIB_7__::func_952(&(Local_479[iVar0 /*7*/]));
				}
				break;
			case 6:
				if (__LIB_7__::func_963(&(Local_479[6 /*7*/])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[14 /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(Local_611.f_690[14 /*12*/].f_8);
					__LIB_8__::func_183(&(Local_479[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "PED1");
					__LIB_8__::func_183(&(Local_479[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), "PED2");
					__LIB_7__::func_952(&(Local_479[6 /*7*/]));
				}
				break;
			default:
				__LIB_7__::func_952(&(Local_479[iVar0 /*7*/]));
				break;
		}
		iVar0++;
	}
}

void func_106()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2103[0]))
	{
		func_339(&(iLocal_2103[0]));
		PED::SET_PED_CONFIG_FLAG(iLocal_2103[0], 136, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_2103[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
}

void func_108(bool bParam0)
{
	if (__LIB_7__::func_933(512) || bParam0)
	{
		if (__LIB_2__::func_1(iLocal_603, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_603, 136, false);
			__LIB_2__::func_145(iLocal_603, 0);
		}
		__LIB_7__::func_965(512);
	}
}

void func_119()
{
	if (__LIB_7__::func_923(64))
	{
		func_349();
	}
	func_350(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && __LIB_7__::func_923(262144)))
	{
		__LIB_7__::func_908(1, 2);
		func_351();
	}
	if (iLocal_98 == 3)
	{
		func_352();
	}
}

void func_125()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_205)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_1614.f_140[iVar0]) && !__LIB_0__::func_163(Local_1614.f_140[iVar0], 518218985)) && !TASK::GET_IS_TASK_ACTIVE(Local_1614.f_140[iVar0], 3))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_1614.f_140[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar0++;
	}
}

bool func_127()
{
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_479[2 /*7*/]) || __LIB_7__::func_972(&(Local_479[2 /*7*/]))) || __LIB_7__::func_973(&(Local_479[2 /*7*/]), "COWER_R_LOOP")) || __LIB_7__::func_973(&(Local_479[2 /*7*/]), "COWER_L_LOOP"))
	{
		return true;
	}
	return false;
}

bool func_129()
{
	float fVar0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_450[0]))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(Local_611.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_611.f_690[24 /*12*/].f_8, true);
		}
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_611.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_611.f_690[24 /*12*/].f_8, true, false);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(Local_611.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_450[0]);
		if (fVar0 > 0.9625f || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_450[0]) == 10)
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_611.f_690[24 /*12*/].f_8, true);
			ENTITY::SET_ENTITY_COLLISION(Local_611.f_690[24 /*12*/].f_8, true, false);
			__LIB_0__::func_401(991016631);
		}
	}
	else if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_611.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_450[0]);
		if (fVar0 > 0.997f)
		{
			ENTITY::SET_ENTITY_COLLISION(Local_611.f_690[24 /*12*/].f_8, true, false);
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
		func_381(iParam1, iParam2, uParam3, 0);
	}
	if (__LIB_8__::func_88(iParam1, 512) && iParam1->f_13 > 2)
	{
		if (iParam1->f_2 > 2)
		{
			iParam1->f_2 = 0;
			__LIB_2__::func_259(&(iParam1->f_6));
			__LIB_7__::func_974(iParam1, 2);
		}
		iParam1->f_2++;
		__LIB_8__::func_89(iParam1, 512);
	}
	switch (iParam1->f_13)
	{
		case 0:
			__LIB_2__::func_259(&(iParam1->f_6));
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
			if (__LIB_1__::func_583(&(iParam1->f_6)) < 5f && ((__LIB_0__::func_163(*iParam1, 501393341) || __LIB_0__::func_163(*iParam1, -828834893)) || __LIB_0__::func_163(*iParam1, joaat("SCRIPT_TASK_LEAVE_VEHICLE"))))
			{
				return;
			}
			__LIB_2__::func_259(&(iParam1->f_6));
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
					__LIB_13__::func_879(&(uParam0->f_35), &(iParam1->f_20[0 /*4*/]), *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_3__::func_600(*iParam1, Global_35, &(iParam1->f_20[0 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				__LIB_3__::func_600(*iParam1, Global_35, __LIB_8__::func_186(iParam1, 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
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
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_258(0, 1, *iParam1, 1)) || __LIB_1__::func_322(&(iParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (__LIB_2__::func_401(*iParam1, 1, 1, 1, 0, 0))
			{
				if (__LIB_1__::func_583(&(iParam1->f_6)) < 10f)
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
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_258(0, 1, *iParam1, 1)) || __LIB_1__::func_322(&(iParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (__LIB_2__::func_401(*iParam1, 1, 1, 1, 0, 0))
			{
				if (__LIB_1__::func_583(&(iParam1->f_6)) < 10f)
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
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_258(0, 1, *iParam1, 1)) || __LIB_1__::func_322(&(iParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (__LIB_2__::func_401(*iParam1, 1, 1, 1, 0, 0))
			{
				if (__LIB_1__::func_583(&(iParam1->f_6)) < 10f)
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
			__LIB_2__::func_259(&(iParam1->f_6));
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
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_258(0, 1, *iParam1, 1)) || __LIB_1__::func_322(&(iParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (((iParam1->f_16 != 5 && __LIB_1__::func_583(&(iParam1->f_6)) < 25f) && __LIB_0__::func_163(*iParam1, 242628503)) && __LIB_0__::func_232(*iParam1, Global_35, 1) > 9f)
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
			__LIB_2__::func_259(&(iParam1->f_6));
			__LIB_2__::func_315(249295937, *iParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam1->f_20[1 /*4*/])))
			{
				if (__LIB_8__::func_88(iParam1, 32))
				{
					__LIB_13__::func_879(&(uParam0->f_35), &(iParam1->f_20[1 /*4*/]), *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_3__::func_600(*iParam1, Global_35, &(iParam1->f_20[1 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				__LIB_3__::func_600(*iParam1, Global_35, __LIB_8__::func_186(iParam1, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
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
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_258(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!__LIB_8__::func_88(iParam1, 4) && __LIB_0__::func_163(*iParam1, joaat("SCRIPT_TASK_CONFRONT"))) && __LIB_1__::func_583(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (__LIB_1__::func_583(&(iParam1->f_6)) < 15f)
			{
				return;
			}
			__LIB_2__::func_259(&(iParam1->f_6));
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
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_258(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!__LIB_8__::func_88(iParam1, 4) && __LIB_0__::func_163(*iParam1, joaat("SCRIPT_TASK_CONFRONT"))) && __LIB_1__::func_583(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (iParam1->f_16 == 1 && ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_624(Global_35)))
			{
				__LIB_7__::func_961(iParam1, 2);
			}
			__LIB_2__::func_259(&(iParam1->f_6));
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
			if (__LIB_3__::func_514(&(iParam1->f_6), __LIB_7__::func_976(iParam1)))
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
	if (__LIB_7__::func_924(&Local_1614, 32))
	{
		if (iLocal_98 == 3 && !__LIB_7__::func_908(Local_1614.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_611.f_1)
			{
				func_398(&iVar0);
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
			bVar3 = __LIB_0__::func_27(iLocal_602, __LIB_0__::func_771(iVar1));
			if (bVar3)
			{
				func_401(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!__LIB_7__::func_939(512))
	{
		func_402();
		func_403();
	}
	if (!__LIB_7__::func_929(67108864))
	{
		func_404(0);
		func_405(0, 1, 1);
		__LIB_7__::func_932(67108864);
	}
	iVar4 = __LIB_2__::func_963(Local_1614.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar4))
	{
		if (iVar4 != iLocal_155)
		{
			iLocal_155 = iVar4;
			__LIB_2__::func_451(&(Local_213[0 /*21*/]), 0);
		}
		__LIB_0__::func_928(&(Local_1614.f_35), iVar4, "EA_LCMP_Foreman", 0);
		func_406(&iVar4);
		PED::SET_PED_RESET_FLAG(iVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && __LIB_7__::func_907(Local_1614.f_136, 128)))
	{
		func_407(&iVar4);
	}
	if (iLocal_98 < 4)
	{
		func_408();
	}
	func_409();
	func_410(&iVar4);
	if (!__LIB_7__::func_923(128))
	{
		if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1614.f_136, 128))
		{
			func_411();
		}
		func_412();
		return 0;
	}
	func_413();
	if (__LIB_7__::func_923(16384))
	{
		__LIB_0__::func_11(&(iLocal_2103[0]));
	}
	if (!__LIB_7__::func_923(16) && !__LIB_7__::func_923(64))
	{
		bVar5 = __LIB_7__::func_923(1);
		__LIB_7__::func_979(iVar4, &(uLocal_2097[0]), &Local_1614, __LIB_7__::func_923(262144), &bVar5, 1, __LIB_7__::func_978());
		__LIB_8__::func_167(1, bVar5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2100[0]) && !PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_2100[0]))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_2100[0], joaat("PG_VEH_LOGWAGON_1"));
	}
	__LIB_8__::func_187();
	if (__LIB_7__::func_923(64) && !__LIB_7__::func_923(4))
	{
		__LIB_8__::func_167(4, func_418(&iVar4, &(iLocal_2077[0])));
		return 0;
	}
	if (iLocal_98 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2100[0]) && !ENTITY::_IS_ENTITY_FROZEN(iLocal_2100[0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2100[0], Local_611.f_304[0 /*32*/].f_6, true, false, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2100[0], true);
			AITRANSPORT::_0xBA8818212633500A(iLocal_2100[0], 0, 1);
		}
	}
	if (!__LIB_7__::func_923(32))
	{
		if (__LIB_7__::func_923(262144))
		{
			Local_2164.f_2[0] = "LOG_WRK02";
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
					func_423(&(iLocal_2077[0]), 0);
					func_423(&(iLocal_2077[1]), 1);
					func_424();
					func_425();
					if (__LIB_7__::func_908(Local_1614.f_136, 256) || func_426(&iVar4))
					{
						return func_427(&iVar4);
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
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_450[iVar0]))
			{
				if (!(iVar0 == 0 && __LIB_7__::func_923(512)))
				{
				}
			}
			else
			{
				fVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_450[iVar0]);
				if (fVar1 >= (__LIB_8__::func_141(iVar0) - 0.007544f) && fVar1 <= __LIB_8__::func_142(iVar0))
				{
					func_433();
				}
				switch (iLocal_600)
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
							iLocal_600 = 1;
						}
						break;
					case 1:
						if (fVar1 >= __LIB_8__::func_142(iVar0))
						{
							EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), __LIB_8__::func_143(iVar0), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
							__LIB_7__::func_932(8192);
							PAD::SET_PAD_SHAKE(0, 300, (__LIB_8__::func_238(iVar0) / 2));
							iLocal_600 = 2;
						}
						break;
					case 2:
						__LIB_0__::func_172(iLocal_75[2]);
						__LIB_0__::func_172(iLocal_75[3]);
						iLocal_600 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_139()
{
	if (__LIB_7__::func_924(&Local_1614, 1024))
	{
		return true;
	}
	if (bLocal_2272)
	{
		return true;
	}
	if (iLocal_2269 == 1)
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
	if (__LIB_8__::func_97(bLocal_2272))
	{
		return true;
	}
	return false;
}

void func_178()
{
	char* sVar0[4];
	var uVar5;
	uVar5 = 4;
	if (__LIB_7__::func_908(Local_1614.f_136, 32))
	{
		sVar0[0] = "";
		sVar0[1] = "";
		sVar0[2] = "";
		sVar0[3] = "";
	}
	else if (__LIB_1__::func_149(1) > 0)
	{
		sVar0[0] = "LOG_GUARD01_P";
		sVar0[1] = "LOG_GUARD02_P";
	}
	else
	{
		sVar0[0] = "LOG_GUARD01";
		sVar0[1] = "LOG_GUARD02";
	}
	__LIB_8__::func_95(&sVar0, &uVar5, &Local_2201, 1);
}

void func_180()
{
	int iVar0;
	if (!iLocal_98 == 3 || __LIB_7__::func_907(Local_1614.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_7__::func_908(Local_1614.f_136, 512) && iLocal_98 == 2) && iVar0 == 0)
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
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1614.f_136, 4))
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
		__LIB_1__::func_336(&iLocal_602, __LIB_0__::func_771(iVar3));
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
		if (ENTITY::_0x1FF441D7954F8709(uLocal_456[iVar0]))
		{
			ENTITY::_0xD2B9C78537ED5759(uLocal_456[iVar0]);
		}
		iVar0++;
	}
}

void func_214()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_7__::func_910(__LIB_8__::func_143(iVar0), 0);
		iLocal_450[iVar0] = 0;
		iVar0++;
	}
}

void func_215(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_474(iVar0, bParam0);
		iVar0++;
	}
}

void func_216(bool bParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 5, !bParam0);
	__LIB_3__::func_386(&Local_1614, bParam0);
	__LIB_3__::func_393(&Local_1614, bParam0);
}

bool func_226(var uParam0, float fParam1)
{
	if (__LIB_3__::func_514(uParam0, fParam1))
	{
		__LIB_0__::func_37(uParam0);
		return true;
	}
	return false;
}

void func_229()
{
	int iVar0;
	if (__LIB_7__::func_923(8192))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_8__::func_188(&(Local_479[(9 + iVar0) /*7*/]), "script@proc@eventareas@appleseed@Tree_Saw", func_482(9), 0);
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(16384))
	{
		__LIB_8__::func_188(&(Local_479[6 /*7*/]), "script@proc@eventareas@appleseed@Log_Drag", func_482(6), 0);
	}
	if (__LIB_7__::func_923(256))
	{
		__LIB_8__::func_188(&(Local_479[7 /*7*/]), "script@proc@eventareas@appleseed@Boom_Operator", func_482(7), 0);
		__LIB_8__::func_188(&(Local_479[8 /*7*/]), "script@proc@eventareas@appleseed@Boom_Spotter", func_482(8), 0);
	}
	if (__LIB_7__::func_923(64))
	{
		__LIB_8__::func_188(&(Local_479[2 /*7*/]), "script@proc@eventareas@appleseed@Tree_Fall", func_482(2), 0);
		__LIB_8__::func_188(&(Local_479[3 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_A", func_482(3), 0);
		__LIB_8__::func_188(&(Local_479[4 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_B", func_482(4), 0);
	}
	if (__LIB_7__::func_923(262144))
	{
		if (__LIB_7__::func_923(16))
		{
			func_484();
		}
		else if (__LIB_7__::func_908(1, 2) && !__LIB_7__::func_908(Local_1614.f_136, 16384))
		{
			__LIB_8__::func_188(&(Local_479[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
			__LIB_8__::func_188(&(Local_479[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
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
					__LIB_8__::func_188(&(Local_479[5 /*7*/]), "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", func_482(5), 0);
					__LIB_8__::func_188(&(Local_479[0 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(0), 0);
					__LIB_8__::func_188(&(Local_479[1 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(1), 0);
				}
				break;
			case 2:
				if (__LIB_7__::func_923(16))
				{
					func_484();
				}
				else if (__LIB_7__::func_908(1, 2) && !__LIB_7__::func_908(Local_1614.f_136, 16384))
				{
					__LIB_8__::func_188(&(Local_479[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
					__LIB_8__::func_188(&(Local_479[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
				}
				else
				{
					func_484();
				}
				break;
			case 3:
				__LIB_8__::func_188(&(Local_479[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Orders", func_482(0), 0);
				__LIB_8__::func_188(&(Local_479[1 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", func_482(1), 0);
				__LIB_8__::func_188(&(Local_479[2 /*7*/]), "script@proc@eventareas@appleseed@Player_Grab_Money", func_482(2), 0);
				__LIB_8__::func_188(&(Local_479[3 /*7*/]), "script@proc@eventareas@appleseed@Worker_Convo", func_482(3), 0);
				break;
		}
	}
}

void func_230()
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
				Local_1765[iVar1 /*12*/].f_7 = __LIB_8__::func_145();
			}
			else
			{
				Local_1765[iVar1 /*12*/].f_7 = 0;
			}
			Local_1765[iVar1 /*12*/] = { __LIB_8__::func_146(iVar1) };
			if (__LIB_1__::func_985())
			{
				Local_1765[iVar1 /*12*/].f_3 = 25f;
			}
			else
			{
				Local_1765[iVar1 /*12*/].f_3 = (180f + 25f);
			}
			Local_1765[iVar1 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_1765[iVar1 /*12*/].f_11), 67);
			iVar1++;
		}
	}
	if (__LIB_7__::func_923(128))
	{
		if (__LIB_7__::func_923(64))
		{
			Local_611.f_690[7 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_611.f_690[7 /*12*/].f_7 = 0;
		}
		Local_611.f_690[7 /*12*/] = { __LIB_7__::func_984() };
		Local_611.f_690[7 /*12*/].f_3 = 89f;
		Local_611.f_690[7 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_611.f_690[8 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_611.f_690[8 /*12*/].f_7 = 0;
		}
		Local_611.f_690[8 /*12*/] = { __LIB_7__::func_984() };
		Local_611.f_690[8 /*12*/].f_3 = 89f;
		Local_611.f_690[8 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_611.f_690[9 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_611.f_690[9 /*12*/].f_7 = 0;
		}
		Local_611.f_690[9 /*12*/] = { __LIB_7__::func_984() };
		Local_611.f_690[9 /*12*/].f_3 = 89f;
		Local_611.f_690[9 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_611.f_690[10 /*12*/].f_7 = joaat("P_CIGARETTE_CS02X");
		}
		else
		{
			Local_611.f_690[10 /*12*/].f_7 = 0;
		}
		Local_611.f_690[10 /*12*/] = { __LIB_7__::func_984() };
		Local_611.f_690[10 /*12*/].f_3 = 89f;
		Local_611.f_690[10 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_611.f_690[24 /*12*/].f_7 = joaat("TREEFALL_ACCIDENT_ENDPROP");
		}
		else
		{
			Local_611.f_690[24 /*12*/].f_7 = 0;
		}
		Local_611.f_690[24 /*12*/] = { -1402.82f, -270.8668f, 98.5585f };
		Local_611.f_690[24 /*12*/].f_3 = 74.57f;
		Local_611.f_690[24 /*12*/].f_10 = 0;
		__LIB_1__::func_683(&(Local_611.f_690[24 /*12*/].f_11), 64);
		if (__LIB_7__::func_923(64))
		{
			Local_611.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
			Local_611.f_690[6 /*12*/] = { __LIB_7__::func_985() };
			Local_611.f_690[6 /*12*/].f_3 = 89f;
			Local_611.f_690[6 /*12*/].f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			Local_611.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY03X");
			Local_611.f_690[12 /*12*/] = { -1341.215f, -194.8321f, 102.4812f };
			Local_611.f_690[12 /*12*/].f_3 = 27f;
			Local_611.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_611.f_690[12 /*12*/].f_11), 75);
			if (__LIB_7__::func_923(128))
			{
				Local_611.f_690[0 /*12*/].f_7 = 0;
				Local_611.f_690[0 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[0 /*12*/].f_3 = 89f;
				Local_611.f_690[0 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					Local_611.f_690[4 /*12*/].f_7 = joaat("P_WOODWHITTLE01X");
				}
				else
				{
					Local_611.f_690[4 /*12*/].f_7 = 0;
				}
				Local_611.f_690[4 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[4 /*12*/].f_3 = 89f;
				Local_611.f_690[4 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					Local_611.f_690[3 /*12*/].f_7 = joaat("P_KNIFE02X");
				}
				else
				{
					Local_611.f_690[3 /*12*/].f_7 = 0;
				}
				Local_611.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[3 /*12*/].f_3 = 89f;
				Local_611.f_690[3 /*12*/].f_10 = 0;
			}
			break;
		case 2:
			Local_611.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_611.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_611.f_690[13 /*12*/].f_3 = 24f;
			Local_611.f_690[13 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_611.f_690[13 /*12*/].f_11), 75);
			Local_611.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_611.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_611.f_690[12 /*12*/].f_3 = 25f;
			Local_611.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_611.f_690[12 /*12*/].f_11), 75);
			Local_611.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_611.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_611.f_690[25 /*12*/].f_3 = 19.95f;
			Local_611.f_690[25 /*12*/].f_10 = 0;
			if (__LIB_7__::func_923(128))
			{
				if (__LIB_7__::func_908(1, 2))
				{
					Local_611.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_611.f_690[3 /*12*/].f_7 = 0;
				}
				Local_611.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[3 /*12*/].f_4 = { 90f, 0f, -5.99f };
				Local_611.f_690[3 /*12*/].f_10 = 0;
				if (__LIB_7__::func_908(1, 2))
				{
					Local_611.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_611.f_690[4 /*12*/].f_7 = 0;
				}
				Local_611.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_611.f_690[4 /*12*/].f_3 = -153.92f;
				Local_611.f_690[4 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_611.f_690[4 /*12*/].f_11), 2);
				if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_923(64))
				{
					Local_611.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
					Local_611.f_690[6 /*12*/] = { __LIB_7__::func_985() };
					Local_611.f_690[6 /*12*/].f_3 = 89f;
					Local_611.f_690[6 /*12*/].f_10 = 0;
				}
			}
			break;
		case 3:
			Local_611.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_611.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_611.f_690[13 /*12*/].f_3 = 24f;
			Local_611.f_690[13 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_611.f_690[13 /*12*/].f_11), 75);
			Local_611.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_611.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_611.f_690[12 /*12*/].f_3 = 25f;
			Local_611.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_611.f_690[12 /*12*/].f_11), 75);
			Local_611.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_611.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_611.f_690[25 /*12*/].f_3 = 19.95f;
			Local_611.f_690[25 /*12*/].f_10 = 0;
			if (__LIB_7__::func_923(128))
			{
				if (!__LIB_7__::func_907(Local_1614.f_136, 128) || (__LIB_7__::func_907(Local_1614.f_136, 128) && __LIB_7__::func_908(1, 2)))
				{
					Local_611.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_611.f_690[3 /*12*/].f_7 = 0;
				}
				Local_611.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[3 /*12*/].f_3 = 89f;
				Local_611.f_690[3 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1614.f_136, 128) || (__LIB_7__::func_907(Local_1614.f_136, 128) && __LIB_7__::func_908(1, 2)))
				{
					Local_611.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_611.f_690[4 /*12*/].f_7 = 0;
				}
				Local_611.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_611.f_690[4 /*12*/].f_3 = -153.92f;
				Local_611.f_690[4 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_611.f_690[4 /*12*/].f_11), 2);
				if (!__LIB_7__::func_907(Local_1614.f_136, 128) || __LIB_7__::func_908(1, 2))
				{
					Local_611.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
				}
				else
				{
					Local_611.f_690[6 /*12*/].f_7 = 0;
				}
				Local_611.f_690[6 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[6 /*12*/].f_3 = 89f;
				Local_611.f_690[6 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					Local_611.f_690[7 /*12*/].f_7 = joaat("P_BOTTLEJD01X");
				}
				else
				{
					Local_611.f_690[7 /*12*/].f_7 = 0;
				}
				Local_611.f_690[7 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[7 /*12*/].f_3 = 89f;
				Local_611.f_690[7 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					Local_611.f_690[8 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_611.f_690[8 /*12*/].f_7 = 0;
				}
				Local_611.f_690[8 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[8 /*12*/].f_3 = 89f;
				Local_611.f_690[8 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					Local_611.f_690[9 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_611.f_690[9 /*12*/].f_7 = 0;
				}
				Local_611.f_690[9 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[9 /*12*/].f_3 = 89f;
				Local_611.f_690[9 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					Local_611.f_690[10 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_611.f_690[10 /*12*/].f_7 = 0;
				}
				Local_611.f_690[10 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[10 /*12*/].f_3 = 89f;
				Local_611.f_690[10 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					Local_611.f_690[11 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_611.f_690[11 /*12*/].f_7 = 0;
				}
				Local_611.f_690[11 /*12*/] = { __LIB_7__::func_984() };
				Local_611.f_690[11 /*12*/].f_3 = 89f;
				Local_611.f_690[11 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					Local_611.f_690[0 /*12*/].f_7 = joaat("P_PANTHERBLOOD01X");
				}
				else
				{
					Local_611.f_690[0 /*12*/].f_7 = 0;
				}
				Local_611.f_690[0 /*12*/] = { func_490(0, 2) };
				Local_611.f_690[0 /*12*/].f_2 = (Local_611.f_690[0 /*12*/].f_2 - 5f);
				Local_611.f_690[0 /*12*/].f_3 = 89f;
				Local_611.f_690[0 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_611.f_690[0 /*12*/].f_11), 67);
				if (!__LIB_7__::func_907(Local_1614.f_136, 128))
				{
					Local_611.f_690[1 /*12*/].f_7 = joaat("P_COUGARBLOODPOOLS01X");
				}
				else
				{
					Local_611.f_690[1 /*12*/].f_7 = 0;
				}
				Local_611.f_690[1 /*12*/] = { func_490(0, 3) };
				Local_611.f_690[1 /*12*/].f_2 = (Local_611.f_690[1 /*12*/].f_2 - 5f);
				Local_611.f_690[1 /*12*/].f_3 = 89f;
				Local_611.f_690[1 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_611.f_690[1 /*12*/].f_11), 67);
			}
			break;
	}
	iVar5 = 0;
	while (iVar5 < 4)
	{
		bVar7 = __LIB_0__::func_27(iLocal_602, __LIB_0__::func_771(iVar5));
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
		if (iVar9 + 18 >= Local_611.f_690 || iVar9 < 0)
		{
		}
		else
		{
			iVar5 = iVar2[iVar8];
			if (__LIB_7__::func_923(8192))
			{
				Local_611.f_690[(15 + iVar9) /*12*/].f_7 = joaat("P_SAWBUCKING01X");
				Local_611.f_690[(16 + iVar9) /*12*/].f_7 = joaat("P_CS_CEDARLOG01X");
				Local_611.f_690[(17 + iVar9) /*12*/].f_7 = joaat("P_CS_CEDARLOG02X");
				Local_611.f_690[(18 + iVar9) /*12*/].f_7 = joaat("P_CS_CEDARLOG03X");
			}
			else
			{
				Local_611.f_690[(15 + iVar9) /*12*/].f_7 = 0;
				Local_611.f_690[(16 + iVar9) /*12*/].f_7 = 0;
				Local_611.f_690[(17 + iVar9) /*12*/].f_7 = 0;
				Local_611.f_690[(18 + iVar9) /*12*/].f_7 = 0;
			}
			Local_611.f_690[(15 + iVar9) /*12*/] = { func_491(iVar5) };
			Local_611.f_690[(15 + iVar9) /*12*/].f_3 = __LIB_7__::func_986(iVar5);
			Local_611.f_690[(15 + iVar9) /*12*/].f_10 = 0;
			Local_611.f_690[(16 + iVar9) /*12*/] = { __LIB_7__::func_987(iVar5) };
			Local_611.f_690[(16 + iVar9) /*12*/].f_4 = { __LIB_7__::func_988(iVar5) };
			Local_611.f_690[(16 + iVar9) /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_611.f_690[(16 + iVar9) /*12*/].f_11), 2);
			vVar10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_611.f_690[(16 + iVar9) /*12*/], Local_611.f_690[(16 + iVar9) /*12*/].f_3, 0.025f, -4.4039f, 0.041f) };
			Local_611.f_690[(17 + iVar9) /*12*/] = { vVar10 };
			Local_611.f_690[(17 + iVar9) /*12*/].f_3 = Local_611.f_690[(16 + iVar9) /*12*/].f_3;
			Local_611.f_690[(17 + iVar9) /*12*/].f_10 = 0;
			vVar10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_611.f_690[(16 + iVar9) /*12*/], Local_611.f_690[(16 + iVar9) /*12*/].f_3, 0f, 6.3529f, -0.077f) };
			Local_611.f_690[(18 + iVar9) /*12*/] = { vVar10 };
			Local_611.f_690[(18 + iVar9) /*12*/].f_3 = Local_611.f_690[(16 + iVar9) /*12*/].f_3;
			Local_611.f_690[(18 + iVar9) /*12*/].f_10 = 0;
			iVar8++;
		}
	}
	if (__LIB_7__::func_923(128))
	{
		if (__LIB_7__::func_923(16384))
		{
			Local_611.f_690[2 /*12*/].f_7 = joaat("S_APLSD_LOG");
		}
		else
		{
			Local_611.f_690[2 /*12*/].f_7 = 0;
		}
		Local_611.f_690[2 /*12*/] = { -1410.311f, -227.9941f, 99.4013f };
		Local_611.f_690[2 /*12*/].f_3 = 100.36f;
		Local_611.f_690[2 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(16384))
		{
			Local_611.f_690[14 /*12*/].f_7 = joaat("S_APLSD_HRSATT");
		}
		else
		{
			Local_611.f_690[14 /*12*/].f_7 = 0;
		}
		Local_611.f_690[14 /*12*/] = { -1404.688f, -227.0209f, 99.4983f };
		Local_611.f_690[14 /*12*/].f_3 = 94.76f;
		Local_611.f_690[14 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(16384))
		{
			Local_611.f_690[23 /*12*/].f_7 = joaat("S_APLSD_HOOK");
		}
		else
		{
			Local_611.f_690[23 /*12*/].f_7 = 0;
		}
		Local_611.f_690[23 /*12*/] = { -1412.52f, -227.139f, 99.815f };
		Local_611.f_690[23 /*12*/].f_3 = 129.6f;
		Local_611.f_690[23 /*12*/].f_10 = 1;
	}
	if ((__LIB_7__::func_923(262144) || __LIB_7__::func_923(16)) && func_335())
	{
		if (iLocal_98 != 3)
		{
			Local_611.f_690[5 /*12*/].f_7 = joaat("P_CHAIR06X");
		}
		else
		{
			Local_611.f_690[5 /*12*/].f_7 = 0;
		}
		iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.116f, -211.4299f, 103.0422f, 0f, 0f, 18.85407f, 1f, 1f, 2.328289f, "volChairSpawnBlock");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
		Local_611.f_690[11 /*12*/].f_7 = joaat("P_LANTERN09XHANG");
		switch (iLocal_98)
		{
			case 1:
				Local_611.f_690[11 /*12*/].f_7 = 0;
				Local_611.f_690[11 /*12*/] = { -1399.87f, -212.58f, 102.43f };
				break;
			case 2:
				Local_611.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
			case 3:
				Local_611.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
		}
		Local_611.f_690[11 /*12*/].f_3 = 5f;
		Local_611.f_690[11 /*12*/].f_10 = 0;
		__LIB_1__::func_683(&(Local_611.f_690[11 /*12*/].f_11), 66);
	}
	else
	{
		Local_611.f_690[5 /*12*/].f_7 = 0;
	}
	Local_611.f_690[5 /*12*/] = { -1400.098f, -211.239f, 101.889f };
	Local_611.f_690[5 /*12*/].f_3 = 22f;
	Local_611.f_690[5 /*12*/].f_10 = 0;
	__LIB_1__::func_683(&(Local_611.f_690[5 /*12*/].f_11), 2);
}

void func_232()
{
	Local_611.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			Local_611.f_304[0 /*32*/].f_1 = joaat("NORTHFLATCAR01X");
			Local_611.f_304[0 /*32*/].f_6 = { -1342.64f, -191.66f, 99.56f };
			Local_611.f_304[0 /*32*/].f_9 = 27f;
			__LIB_1__::func_683(&(Local_611.f_304[0 /*32*/].f_22), 129);
			Local_611.f_2 = 1;
			break;
		case 2:
			if (!__LIB_7__::func_924(&Local_1614, 32))
			{
				if (__LIB_7__::func_923(256))
				{
					Local_611.f_2++;
				}
			}
			if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_908(Local_1614.f_136, 16384))
			{
				Local_611.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_611.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_611.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_611.f_2++;
				if (__LIB_7__::func_923(262144))
				{
					Local_2164.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((__LIB_7__::func_923(262144) && __LIB_7__::func_908(1, 2)) || __LIB_7__::func_908(Local_1614.f_136, 16384))
			{
				Local_611.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_611.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_611.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_611.f_2++;
				if (__LIB_7__::func_923(262144))
				{
					Local_2164.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!__LIB_7__::func_924(&Local_1614, 32))
			{
				if (__LIB_7__::func_923(256))
				{
					Local_611.f_2++;
				}
			}
			break;
	}
}

void func_234()
{
	char* sVar0;
	if (__LIB_7__::func_923(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		__LIB_3__::func_318(sVar0, &uLocal_2012);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		__LIB_3__::func_318(sVar0, &uLocal_2012);
	}
	if (__LIB_7__::func_923(8192))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		__LIB_3__::func_318(sVar0, &uLocal_2012);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		__LIB_3__::func_318(sVar0, &uLocal_2012);
	}
	if (__LIB_7__::func_923(262144))
	{
		sVar0 = func_496();
		__LIB_3__::func_318(sVar0, &uLocal_2012);
		if (__LIB_7__::func_908(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			__LIB_3__::func_318(sVar0, &uLocal_2012);
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
				__LIB_3__::func_318(sVar0, &uLocal_2012);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				__LIB_3__::func_318(sVar0, &uLocal_2012);
				break;
		}
	}
}

bool func_236()
{
	if (!__LIB_3__::func_316(&(Local_611.f_690)))
	{
		return false;
	}
	return true;
}

bool func_258(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!__LIB_2__::func_136(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_526(fParam0))
	{
		return false;
	}
	return true;
}

bool func_261()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_479[iVar1 /*7*/]))
		{
			if (!__LIB_7__::func_990(&(Local_479[iVar1 /*7*/])))
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

void func_267(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_267(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_267(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_294(int iParam0, var uParam1)
{
	if (__LIB_7__::func_923(1048576))
	{
		if (((((__LIB_4__::func_102(__LIB_2__::func_963(Local_1614.f_138), iParam0, uParam1, 0) || ((iLocal_206 % 3) == 1 && __LIB_7__::func_918(&iLocal_1918, iParam0, uParam1, 0, (iLocal_190 / 3)))) || ((iLocal_206 % 3) == 2 && __LIB_7__::func_918(&iLocal_1918, iParam0, uParam1, (iLocal_190 / 3) + 1, (iLocal_190 * 2 / 3)))) || ((iLocal_206 % 3) == 0 && __LIB_7__::func_918(&iLocal_1918, iParam0, uParam1, (iLocal_190 * 2 / 3) + 1, iLocal_190))) || __LIB_7__::func_918(&iLocal_2077, iParam0, uParam1, 0, -1)) || __LIB_7__::func_918(&iLocal_2103, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_295()
{
	if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_908(Local_1614.f_136, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2100[0]) && __LIB_2__::func_343(Global_35, iLocal_2100[0], 0))
		{
			if (__LIB_7__::func_908(Local_1614.f_136, 16384))
			{
				__LIB_0__::func_325(&(uLocal_2097[1]));
				return false;
			}
			else
			{
				__LIB_1__::func_715(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_1614.f_138), 0, 1065353216 /* Float: 1f */, 0);
				__LIB_7__::func_932(32768);
				return true;
			}
		}
	}
	if (__LIB_7__::func_923(65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]) && __LIB_2__::func_343(Global_35, uLocal_72[1], 1))
		{
			__LIB_1__::func_715(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_1614.f_138), 0, 1065353216 /* Float: 1f */, 0);
			__LIB_7__::func_932(32768);
			return true;
		}
	}
	if (__LIB_7__::func_923(32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]) && __LIB_2__::func_343(Global_35, uLocal_72[0], 1))
		{
			__LIB_1__::func_715(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_1614.f_138), 0, 1065353216 /* Float: 1f */, 0);
			__LIB_7__::func_932(32768);
			return true;
		}
	}
	return false;
}

bool func_296()
{
	int iVar0;
	iVar0 = (iLocal_206 % iLocal_609);
	if (iVar0 < 4)
	{
		if (!__LIB_1__::func_205(uLocal_604[iVar0], iLocal_75[5], 1, 0) && PED::_GET_RIDER_OF_MOUNT(uLocal_604[iVar0], false) == Global_35)
		{
			__LIB_7__::func_926(268435456);
			return true;
		}
	}
	return false;
}

int func_299()
{
	if (!__LIB_8__::func_305(&Local_1614))
	{
		if (!__LIB_8__::func_0(&(Global_1935630.f_34[0])))
		{
			return 0;
		}
		__LIB_8__::func_131(&Local_1614, 4096);
	}
	return 1;
}

bool func_300()
{
	int iVar0;
	if (iLocal_98 != 3)
	{
		return false;
	}
	if (__LIB_7__::func_923(262144))
	{
		return false;
	}
	iVar0 = __LIB_8__::func_210();
	if ((__LIB_1__::func_248(iVar0, &iLocal_2125) || iVar0 == iLocal_2077[2]) || iVar0 == iLocal_2077[3])
	{
		return true;
	}
	return false;
}

int func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1614.f_138)))
	{
		if (func_597())
		{
			(*iParam0)[iVar0] = __LIB_2__::func_963(Local_1614.f_138);
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[0]))
		{
			(*iParam0)[iVar0] = iLocal_2077[0];
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2103[0]))
		{
			(*iParam0)[iVar0] = iLocal_2103[0];
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(8192))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = __LIB_0__::func_27(iLocal_602, __LIB_0__::func_771(iVar2));
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
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1614.f_136, 64))
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
	if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1614.f_136, 64))
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
	if (iLocal_98 == 3 && !__LIB_7__::func_908(Local_1614.f_136, 16))
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
	while (iVar1 < iLocal_2103)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2103[iVar1]))
		{
			(*iParam0)[iVar0] = iLocal_2103[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		(*iParam0)[iVar0] = iLocal_2077[2];
		iVar0++;
		(*iParam0)[iVar0] = iLocal_2077[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

bool func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_7__::func_963(&(Local_479[6 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(6))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(6, iVar0, 0));
			if (iVar1 == Local_1614.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_479[3 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(3))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(3, iVar0, 0));
			if (iVar1 == Local_1614.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_479[7 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(7))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(7, iVar0, 0));
			if (iVar1 == Local_1614.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_479[8 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(8))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(8, iVar0, 0));
			if (iVar1 == Local_1614.f_10)
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
		if (__LIB_7__::func_963(&(Local_479[iVar3 /*7*/])))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < __LIB_8__::func_4(9))
			{
				iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(9, iVar0, iVar4));
				if (iVar1 == Local_1614.f_10)
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

bool func_308()
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
					if (__LIB_1__::func_205(iVar6, Global_1392194[Local_1614.f_136 /*10*/].f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (iVar6 == __LIB_2__::func_963(Local_1614.f_138))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (__LIB_1__::func_248(iVar6, &iLocal_1918))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (__LIB_1__::func_248(iVar6, &iLocal_2077))
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
						__LIB_8__::func_131(&Local_1614, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

bool func_335()
{
	return (iLocal_586 == 0 || iLocal_586 == 1);
}

void func_339(int iParam0)
{
	if (iLocal_205 < 10)
	{
		if (!__LIB_1__::func_248(*iParam0, &(Local_1614.f_140)))
		{
			Local_1614.f_140[iLocal_205] = *iParam0;
			iLocal_205++;
		}
	}
}

void func_349()
{
	float fVar0;
	float fVar1;
	Vector3 vVar4;
	if (__LIB_7__::func_963(&(Local_479[2 /*7*/])))
	{
		fVar0 = __LIB_8__::func_8(&(Local_479[2 /*7*/]));
		__LIB_8__::func_9(&(Local_479[2 /*7*/]), &fVar1, &vVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[0]) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2077[0], -615221946))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2077[0], false);
			__LIB_8__::func_191(&(Local_479[2 /*7*/]), "PB_VIC_BRKOUT", 1);
			__LIB_8__::func_192(&(Local_479[2 /*7*/]), "RECOVERY_BOOL");
		}
		else if ((__LIB_8__::func_10(&(Local_479[2 /*7*/]), "PBL_IMPATIENT") || (__LIB_8__::func_10(&(Local_479[2 /*7*/]), "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (__LIB_8__::func_10(&(Local_479[2 /*7*/]), "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				__LIB_8__::func_191(&(Local_479[2 /*7*/]), "PBL_COMBAT_L", 1);
				__LIB_8__::func_192(&(Local_479[2 /*7*/]), "bBreakInternalLoop");
			}
			else
			{
				__LIB_8__::func_191(&(Local_479[2 /*7*/]), "PBL_COMBAT_R", 1);
				__LIB_8__::func_192(&(Local_479[2 /*7*/]), "bBreakInternalLoop");
			}
			__LIB_7__::func_922(1024);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1614.f_138)))
			{
				__LIB_8__::func_183(&(Local_479[2 /*7*/]), __LIB_2__::func_963(Local_1614.f_138), "FOREMAN");
			}
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(810)))
			{
				__LIB_8__::func_183(&(Local_479[2 /*7*/]), __LIB_2__::func_963(810), "PED1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[2]))
			{
				__LIB_8__::func_183(&(Local_479[2 /*7*/]), iLocal_2077[2], "PED2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2077[3]))
			{
				__LIB_8__::func_183(&(Local_479[2 /*7*/]), iLocal_2077[3], "PED3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_611.f_690[7 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_479[2 /*7*/]), Local_611.f_690[7 /*12*/].f_8, "AXE1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_611.f_690[8 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_479[2 /*7*/]), Local_611.f_690[8 /*12*/].f_8, "AXE2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_611.f_690[9 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_479[2 /*7*/]), Local_611.f_690[9 /*12*/].f_8, "AXE3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_611.f_690[10 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_479[2 /*7*/]), Local_611.f_690[10 /*12*/].f_8, "CIGARETTE");
			}
			if (__LIB_7__::func_923(512))
			{
				if (Global_36 < fVar1)
				{
					__LIB_8__::func_191(&(Local_479[2 /*7*/]), "PBL_COMBAT_L", 1);
					__LIB_8__::func_192(&(Local_479[2 /*7*/]), "bBreakInternalLoop");
				}
				else
				{
					__LIB_8__::func_191(&(Local_479[2 /*7*/]), "PBL_COMBAT_R", 1);
					__LIB_8__::func_192(&(Local_479[2 /*7*/]), "bBreakInternalLoop");
				}
			}
			__LIB_7__::func_941(1024);
		}
	}
}

void func_350(int iParam0)
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
		else if (__LIB_7__::func_963(&(Local_479[(9 + iVar0) /*7*/])))
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
				__LIB_8__::func_183(&(Local_479[(9 + iVar0) /*7*/]), Local_611.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
				__LIB_7__::func_952(&(Local_479[(9 + iVar0) /*7*/]));
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_339(&iVar3);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_339(&iVar4);
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
						__LIB_8__::func_183(&(Local_479[(9 + iVar0) /*7*/]), iVar3, "PED1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						__LIB_8__::func_183(&(Local_479[(9 + iVar0) /*7*/]), iVar4, "PED2");
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_11(iVar8, iVar7)))
				{
					__LIB_8__::func_191(&(Local_479[(9 + iVar0) /*7*/]), __LIB_8__::func_11(iVar8, iVar7), 1);
					__LIB_8__::func_192(&(Local_479[(9 + iVar0) /*7*/]), "bBreakInternalLoop");
				}
				__LIB_8__::func_183(&(Local_479[(9 + iVar0) /*7*/]), Local_611.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
			}
		}
		iVar0++;
	}
}

void func_351()
{
	if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1614.f_138)))
	{
		return;
	}
	if (!__LIB_7__::func_963(&(Local_479[0 /*7*/])))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(Local_1614.f_138), joaat("STANDING")))
	{
		return;
	}
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_1614.f_138), Local_611.f_690[25 /*12*/].f_8, false);
	__LIB_8__::func_191(&(Local_479[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT", 1);
	__LIB_8__::func_192(&(Local_479[0 /*7*/]), "bBreakInternalLoop");
	__LIB_7__::func_922(1024);
}

void func_352()
{
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1614.f_138)) && __LIB_7__::func_963(&(Local_479[1 /*7*/])))
	{
		if (!ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(Local_1614.f_138), joaat("STANDING")))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_1614.f_138), Local_611.f_690[25 /*12*/].f_8, false);
			__LIB_8__::func_191(&(Local_479[1 /*7*/]), "PBL_COMBAT", 1);
			__LIB_8__::func_192(&(Local_479[1 /*7*/]), "bBreakInternalLoop");
			__LIB_7__::func_922(1024);
		}
		else
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_1614.f_138), Local_611.f_690[5 /*12*/].f_8, false);
			__LIB_7__::func_952(&(Local_479[1 /*7*/]));
		}
	}
	if (__LIB_7__::func_963(&(Local_479[3 /*7*/])))
	{
		__LIB_7__::func_952(&(Local_479[3 /*7*/]));
		PHYSICS::ACTIVATE_PHYSICS(Local_611.f_690[7 /*12*/].f_8);
	}
	if (__LIB_7__::func_963(&(Local_479[0 /*7*/])))
	{
		__LIB_7__::func_952(&(Local_479[0 /*7*/]));
	}
}

void func_381(int* iParam0, int* iParam1, var uParam2, bool bParam3)
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
			if (!func_258(0, 1, Global_35, 1) || !func_258(0, 1, *iParam0, 1))
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
					__LIB_3__::func_600(Global_35, *iParam0, __LIB_8__::func_194(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_8__::func_12(iParam0, 2);
			}
			break;
		case 2:
			if (func_258(0, 1, Global_35, 1) && func_258(0, 1, *iParam0, 1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_195(iParam0)))
				{
					__LIB_3__::func_600(*iParam0, Global_35, __LIB_8__::func_195(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_8__::func_12(iParam0, 3);
			}
			break;
		case 3:
			if (func_258(0, 1, Global_35, 1) && func_258(0, 1, *iParam0, 1))
			{
				__LIB_8__::func_12(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

int func_398(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_596[*iParam0])
	{
		case 0:
			if (PED::_0x5E420FF293EE5472())
			{
				iLocal_1918[*iParam0] = __LIB_3__::func_403(Local_611.f_369[*iParam0 /*32*/].f_1, &(Local_611.f_369[*iParam0 /*32*/]), Local_611.f_369[*iParam0 /*32*/].f_6, Local_611.f_369[*iParam0 /*32*/].f_9, 1, 0, 1, 0, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1918[*iParam0]))
				{
					TASK::TASK_WANDER_IN_VOLUME(iLocal_1918[*iParam0], Global_1392194[Local_1614.f_136 /*10*/].f_6, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
					__LIB_2__::func_259(&(vLocal_557[(0 + *iParam0) /*3*/]));
					__LIB_3__::func_407(&Local_1614, 24f);
					__LIB_1__::func_981(&Local_1614, 20f);
					iLocal_596[*iParam0] = 1;
				}
			}
			break;
		case 1:
			if (__LIB_7__::func_918(&iLocal_1918, &Local_1614, &(Local_1614.f_28), 0, -1))
			{
				iVar0 = 0;
				while (iVar0 < Local_611.f_1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1918[iVar0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_1918[iVar0], true, false);
						TASK::TASK_COMBAT_PED(iLocal_1918[iVar0], Global_35, 0, 0);
						__LIB_2__::func_73(iLocal_1918[iVar0], &(uLocal_1949[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					}
					iLocal_596[iVar0] = 4;
					iVar0++;
				}
			}
			if (func_226(&(vLocal_557[(0 + *iParam0) /*3*/]), 15f))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1918[*iParam0]))
				{
					iVar1 = TASK::_0x244430C13BA5258E(iLocal_1918[*iParam0], 0, 1, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 2f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_EAT(0, iVar1, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1918[*iParam0], iLocal_196);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
						iLocal_596[*iParam0] = 2;
					}
				}
				else
				{
					iLocal_596[*iParam0] = 4;
				}
			}
			break;
		case 2:
			if (__LIB_7__::func_918(&iLocal_1918, &Local_1614, &(Local_1614.f_28), 0, -1))
			{
				iVar2 = 0;
				while (iVar2 < Local_611.f_1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1918[iVar2]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_1918[iVar2], true, false);
						TASK::TASK_COMBAT_PED(iLocal_1918[iVar2], Global_35, 0, 0);
						__LIB_2__::func_73(iLocal_1918[iVar2], &(uLocal_1949[iVar2]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					}
					iLocal_596[iVar2] = 4;
					iVar2++;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1918[*iParam0]))
			{
				if (!__LIB_0__::func_163(iLocal_1918[*iParam0], 1435919172))
				{
					TASK::TASK_WANDER_IN_VOLUME(iLocal_1918[*iParam0], Global_1392194[Local_1614.f_136 /*10*/].f_6, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
					__LIB_2__::func_259(&(vLocal_557[(0 + *iParam0) /*3*/]));
					iLocal_596[*iParam0] = 1;
				}
			}
			else
			{
				iLocal_596[*iParam0] = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_401(int iParam0, int iParam1)
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
	if ((18 + iVar0) >= Local_611.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	iVar3 = __LIB_2__::func_963(__LIB_7__::func_964(9, 0, iVar1));
	iVar4 = __LIB_2__::func_963(__LIB_7__::func_964(9, 1, iVar1));
	if (iLocal_588[iParam1] < 11)
	{
		func_679(&iVar1, &iVar0, &iVar3, &iVar4, iParam1);
		func_680(iParam1, &iVar3);
		func_681(&iVar3, &iVar4, iParam1);
	}
	switch (iLocal_588[iParam1])
	{
		case 0:
			if ((ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[(16 + iVar0) /*12*/].f_8) && ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[(17 + iVar0) /*12*/].f_8)) && ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[(18 + iVar0) /*12*/].f_8))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_611.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_611.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_611.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[(16 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[(17 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[(18 + iVar0) /*12*/].f_8, true);
				iLocal_75[(12 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_611.f_690[(17 + iVar0) /*12*/], 0f, 0f, Local_611.f_690[(17 + iVar0) /*12*/].f_3, 0.613833f, 3.325524f, 5.714088f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(12 + iVar2)], Local_611.f_690[(17 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[(12 + iVar2)], 7);
				iLocal_75[(13 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_611.f_690[(18 + iVar0) /*12*/], 0f, 0f, Local_611.f_690[(18 + iVar0) /*12*/].f_3, 1f, 7.3475f, 5f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(13 + iVar2)], Local_611.f_690[(18 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[(13 + iVar2)], 7);
				__LIB_7__::func_927(__LIB_8__::func_4(9), &Local_611);
				iLocal_588[iParam1] = 1;
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
						iLocal_588[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iLocal_588[iParam1] = 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[(15 + iVar0) /*12*/].f_8))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_611.f_690[(15 + iVar0) /*12*/].f_8, func_491(iParam0), __LIB_7__::func_986(iParam0), true, false, true);
				__LIB_8__::func_15(&(Local_479[(9 + iParam1) /*7*/]), __LIB_8__::func_13(iParam0), __LIB_8__::func_14(iParam0));
				__LIB_8__::func_147(&(Local_479[(9 + iParam1) /*7*/]), iVar3, "PED1", 1);
				__LIB_8__::func_147(&(Local_479[(9 + iParam1) /*7*/]), iVar4, "PED2", 1);
				StringCopy(&(Local_479[(9 + iParam1) /*7*/].f_4), "bBreakInternalLoop", 24);
				__LIB_8__::func_148(&(Local_479[(9 + iParam1) /*7*/]), Local_611.f_690[(15 + iVar0) /*12*/].f_8, "SAW");
				__LIB_8__::func_148(&(Local_479[(9 + iParam1) /*7*/]), Local_611.f_690[(16 + iVar0) /*12*/].f_8, "LOG_01");
				__LIB_8__::func_148(&(Local_479[(9 + iParam1) /*7*/]), Local_611.f_690[(17 + iVar0) /*12*/].f_8, "LOG_03");
				__LIB_8__::func_148(&(Local_479[(9 + iParam1) /*7*/]), Local_611.f_690[(18 + iVar0) /*12*/].f_8, "LOG_02");
				iLocal_588[iParam1] = 3;
			}
			break;
		case 3:
			if (__LIB_7__::func_990(&(Local_479[(9 + iParam1) /*7*/])))
			{
				__LIB_8__::func_16(&(Local_479[(9 + iParam1) /*7*/]));
				iLocal_588[iParam1] = 4;
			}
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && __LIB_1__::func_472(iVar3, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || (!ENTITY::IS_ENTITY_DEAD(iVar4) && __LIB_1__::func_472(iVar4, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)))
			{
				__LIB_8__::func_192(&(Local_479[(9 + iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_588[iParam1] = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_611.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					__LIB_0__::func_172(iLocal_75[(13 + iVar2)]);
					iLocal_588[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_611.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					__LIB_0__::func_172(iLocal_75[(12 + iVar2)]);
					iLocal_588[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1202392137))
			{
				iLocal_588[iParam1] = 8;
			}
			break;
		case 8:
			if (__LIB_2__::func_598(iVar4, Local_479[(9 + iParam1) /*7*/], "PED2", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar4, 330, false);
				if (Local_362 != iVar4)
				{
					func_691(9, 1, iVar1, 0);
				}
				iLocal_588[iParam1] = 9;
			}
			break;
		case 9:
			if (__LIB_2__::func_598(iVar3, Local_479[(9 + iParam1) /*7*/], "PED1", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar3, 330, false);
				if (Local_362 != iVar3)
				{
					func_691(9, 0, iVar1, 0);
				}
				iLocal_588[iParam1] = 10;
			}
			break;
		case 10:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_479[(9 + iParam1) /*7*/]) || __LIB_7__::func_972(&(Local_479[(9 + iParam1) /*7*/])))
			{
				__LIB_7__::func_952(&(Local_479[(9 + iParam1) /*7*/]));
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_611.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_611.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_611.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				iLocal_588[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_402()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	if (iLocal_601 > 0)
	{
		func_692();
	}
	switch (iLocal_601)
	{
		case 0:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("EA_WORLD_HUMAN_TREE_CHOP_NEW"), 262148, __LIB_7__::func_981(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = func_693(iVar0);
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
						__LIB_2__::func_133(iVar3, __LIB_7__::func_975(Local_1614.f_136, 4), 0);
						if (__LIB_2__::func_117(64))
						{
							if (TASK::_0x6EEAD6AF637DA752(__LIB_8__::func_144(iVar1), __LIB_8__::func_18(), 4f, 0) && !__LIB_8__::func_140(iVar1))
							{
								vVar4 = { __LIB_8__::func_144(iVar1) };
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar3, false, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
								if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_462[iVar1]))
								{
									TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_462[iVar1], 0, 0, false, true, 0, false, -1f, false);
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
					iLocal_601 = 2;
					Jump @719; //curOff = 426
					func_697();
					func_138();
					iVar0 = (iLocal_206 % 4);
					iVar1 = func_693(iVar0);
					if (!func_466(iVar1) && !__LIB_7__::func_939(__LIB_8__::func_20(iVar0)))
					{
						func_699(iVar0);
						iVar2 = (810 + iVar0);
						if (!__LIB_2__::func_763(iVar2, 0))
						{
							__LIB_8__::func_123(iVar2, 1, 1);
						}
						iVar3 = __LIB_2__::func_963(iVar2);
						__LIB_8__::func_21(&iVar3);
						func_701(iVar0);
						func_702(&iVar3, iVar0);
						if (__LIB_2__::func_1(iVar3, 0, 1))
						{
							if (!__LIB_7__::func_923(4096) && func_703(&iVar3, &(Local_2236[iVar0 /*5*/]), &(uLocal_2262[iVar0]), iVar0))
							{
								func_704(&iVar3, iVar0);
								iLocal_601 = 3;
								return 0;
							}
						}
					}
					if ((((iLocal_206 % 10) == 1 && !__LIB_2__::func_117(64)) && !__LIB_7__::func_923(4096)) && !__LIB_7__::func_923(512))
					{
						func_705();
						iLocal_601 = 1;
						return 0;
					}
					Jump @719; //curOff = 664
					if ((iLocal_206 % 10) == 1 && __LIB_2__::func_117(64))
					{
						func_705();
						iLocal_601 = 2;
					}
					Jump @719; //curOff = 696
					__LIB_2__::func_259(&(vLocal_557[0 /*3*/]));
					iLocal_601 = 2;
				}
				return 0;
			}
			default:
				break;
	}
}

void func_403()
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
		iVar1 = func_693(iVar0);
		if (((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_450[iVar1]) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_450[iVar1]) == 10) && (ENTITY::IS_ENTITY_DEAD(iVar3) || !PED::IS_PED_USING_ANY_SCENARIO(iVar3))) && !__LIB_8__::func_140(iVar1))
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

void func_404(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_602(&(Local_256[iParam0 /*52*/][0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_256[iParam0 /*52*/][1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_256[iParam0 /*52*/][2 /*17*/]), __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
}

void func_405(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_451(&(Local_213[iParam0 /*21*/]), 0);
	func_708(iParam0, 0);
	if (!bParam2)
	{
		__LIB_7__::func_928(268435456);
	}
	if (bParam1)
	{
		iLocal_361 = -1;
	}
}

void func_406(int iParam0)
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
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1614.f_136, 128))
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
		__LIB_2__::func_259(&(vLocal_557[7 /*3*/]));
	}
	if (__LIB_0__::func_899(&(vLocal_557[7 /*3*/])) && !__LIB_3__::func_514(&(vLocal_557[7 /*3*/]), 0.25f))
	{
		__LIB_3__::func_102(&(Local_256[0 /*52*/]));
	}
	iVar2 = func_659(iParam0, &(Local_213[0 /*21*/]), fLocal_210, &(Local_256[0 /*52*/]), &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iLocal_361 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_361 = iVar2;
	}
	if (!__LIB_7__::func_929(-2147483648))
	{
		if (!__LIB_7__::func_929(268435456))
		{
			if (func_258(-3.5f, 1, 0, 0))
			{
				if (iLocal_361 == 1 && !__LIB_7__::func_929(536870912))
				{
					__LIB_3__::func_600(*iParam0, Global_35, __LIB_8__::func_22(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_7__::func_932(1048576);
				}
				func_405(0, 1, 0);
				__LIB_7__::func_932(268435456);
			}
		}
		else
		{
			switch (iLocal_361)
			{
				case 0:
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
					__LIB_7__::func_932(1073741824 /* Float: 2f */);
					func_405(0, 1, 0);
					break;
				case 1:
					if (__LIB_7__::func_929(536870912))
					{
						__LIB_7__::func_928(536870912);
						__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_7__::func_932(64);
						__LIB_8__::func_82(Local_1614.f_136, 262144);
						__LIB_8__::func_83(Local_1614.f_136, 256);
						func_405(0, 1, 0);
					}
					else
					{
						sVar3 = __LIB_8__::func_23();
						__LIB_3__::func_600(Global_35, *iParam0, sVar3, 0, -1082130432 /* Float: -1f */, MISC::GET_RANDOM_INT_IN_RANGE(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_405(0, 0, 0);
					}
					break;
			}
		}
	}
}

void func_407(int iParam0)
{
	switch (iLocal_587)
	{
		case 0:
			if (iLocal_98 == 1 || ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[12 /*12*/].f_8))
			{
				if (__LIB_2__::func_117(64))
				{
					iLocal_587 = 2;
				}
				else
				{
					iLocal_587 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_117(64))
			{
				if (iLocal_98 != 1)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Long", ENTITY::GET_ENTITY_COORDS(Local_611.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_587 = 2;
			}
			break;
		case 2:
			if (!__LIB_2__::func_117(64))
			{
				if (iLocal_98 == 1)
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_FMN_EOS", *iParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Harmonic", ENTITY::GET_ENTITY_COORDS(Local_611.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_587 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_408()
{
	int iVar0;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_469))
	{
		iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_7__::func_958(), joaat("PROP_HUMAN_SEAT_CHAIR"), 1f, 0, false);
		iLocal_469 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_611.f_690[25 /*12*/].f_8, joaat("PROP_HUMAN_SEAT_CHAIR_DESK_WRITING"), TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true), TASK::_GET_SCENARIO_POINT_HEADING(iVar0, true), 0, 0, 0);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_469))
		{
		}
	}
}

void func_409()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_2__::func_963(__LIB_7__::func_964(7, 0, 0));
	iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(7, 1, 0));
	if (iLocal_591 > 0 && iLocal_591 < 15)
	{
		func_714();
	}
	switch (iLocal_591)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1910))
			{
				iLocal_1910 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1357.609f, -184.4249f, 102.2077f, 0f, 0f, -25f, 18.26119f, 3.749432f, 8f, "volLoaderLogBlocker");
				PATHFIND::_0x19C7567D2F2287D6(iLocal_1910, 7);
			}
			if (iLocal_98 == 2 || iLocal_98 == 3)
			{
				bVar2 = true;
				if (ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[13 /*12*/].f_8))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[13 /*12*/].f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[12 /*12*/].f_8))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[12 /*12*/].f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2100[1]))
					{
						iVar3 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_2100[1]);
						__LIB_2__::func_426(&iVar3);
						VEHICLE::_0x2BB2B5BCF0DF8008(iLocal_2100[1], 1);
						VEHICLE::_0xA72B1BF3857B94D7(iLocal_2100[1], 1);
					}
					if (__LIB_7__::func_923(256))
					{
						__LIB_7__::func_927(__LIB_8__::func_4(7), &Local_611);
						iLocal_591 = 1;
					}
					else
					{
						iLocal_591 = 15;
					}
				}
			}
			else
			{
				iLocal_591 = 15;
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
						__LIB_8__::func_147(&(Local_479[7 /*7*/]), iVar0, "OPERATOR", 1);
						__LIB_8__::func_147(&(Local_479[8 /*7*/]), iVar1, "SPOTTER", 1);
						__LIB_8__::func_16(&(Local_479[7 /*7*/]));
						__LIB_8__::func_16(&(Local_479[8 /*7*/]));
						__LIB_8__::func_192(&(Local_479[7 /*7*/]), "bBreakInternalLoop");
						__LIB_8__::func_192(&(Local_479[8 /*7*/]), "bBreakInternalLoop");
						iLocal_591 = 2;
					}
				}
			}
			break;
		case 2:
			if (__LIB_7__::func_973(&(Local_479[7 /*7*/]), "IDLE_LOOP"))
			{
				__LIB_8__::func_192(&(Local_479[7 /*7*/]), "bBreakInternalLoop");
				__LIB_8__::func_192(&(Local_479[8 /*7*/]), "bBreakInternalLoop");
			}
			else if (__LIB_8__::func_24(&(Local_479[7 /*7*/]), "bBreakInternalLoop"))
			{
				__LIB_8__::func_196(&(Local_479[7 /*7*/]), "bBreakInternalLoop");
				__LIB_8__::func_196(&(Local_479[8 /*7*/]), "bBreakInternalLoop");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1381571371))
			{
				if (!__LIB_7__::func_923(268435456))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_611.f_690[13 /*12*/].f_8))
					{
						ENTITY::PLAY_ENTITY_ANIM(Local_611.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 8f, false, true, false, 0f, 0);
						TASK::SET_ANIM_RATE(Local_611.f_690[13 /*12*/].f_8, 0.4f, 0, false);
						__LIB_7__::func_922(268435456);
					}
				}
				iLocal_591 = 3;
			}
			break;
		case 3:
			func_718(&iVar0, &iVar1);
			break;
		case 14:
			if (!__LIB_7__::func_929(256))
			{
				if (__LIB_2__::func_598(iVar0, Local_479[7 /*7*/], "OPERATOR", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(iVar0, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 330, false);
						__LIB_8__::func_183(&(Local_479[7 /*7*/]), iVar0, "OPERATOR");
						TASK::TASK_GO_STRAIGHT_TO_COORD(iVar0, -1349.967f, -202.9536f, 100.4027f, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
						func_691(7, 0, 0, 0);
					}
					__LIB_7__::func_952(&(Local_479[7 /*7*/]));
					__LIB_7__::func_932(256);
				}
			}
			if (!__LIB_7__::func_929(512))
			{
				if (__LIB_2__::func_598(iVar1, Local_479[8 /*7*/], "SPOTTER", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(iVar1, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						PED::SET_PED_CONFIG_FLAG(iVar1, 330, false);
						__LIB_8__::func_183(&(Local_479[8 /*7*/]), iVar1, "SPOTTER");
						func_691(7, 1, 0, 0);
					}
					__LIB_7__::func_952(&(Local_479[8 /*7*/]));
					__LIB_7__::func_932(512);
				}
			}
			if (__LIB_7__::func_929(256) && __LIB_7__::func_929(512))
			{
				iLocal_591 = 15;
			}
			break;
		case 15:
			break;
	}
}

int func_410(int iParam0)
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
	if (__LIB_8__::func_88(&Local_362, 1))
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
	if (!__LIB_1__::func_205(Global_35, Global_1392194[Local_1614.f_136 /*10*/].f_5, 1, 0))
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
	func_302(&uVar24);
	iVar22 = __LIB_8__::func_539(&uVar10, &uVar24, 9, Global_36, 15f, 0, 1, 1, Local_611.f_13, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
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
					__LIB_2__::func_133(iVar20, __LIB_7__::func_975(Local_1614.f_136, -1), 0);
				}
				iVar0[iVar23] = iVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (func_720(&Local_2164, &iVar0, &uLocal_2199, 1, __LIB_7__::func_923(2)))
	{
		__LIB_0__::func_516(&(Local_2164.f_34), 1);
		__LIB_7__::func_922(2);
		__LIB_7__::func_922(33554432);
		return 1;
	}
	return 0;
}

void func_411()
{
	var uVar0[2];
	uVar0[0] = iLocal_2077[0];
	uVar0[1] = iLocal_2077[1];
	if (!__LIB_7__::func_933(64))
	{
		if (func_720(&Local_2201, &uVar0, &uLocal_2199, 0, __LIB_7__::func_923(2)))
		{
			if (!__LIB_0__::func_163(Local_2201.f_31, -1931174604))
			{
				TASK::TASK_GUARD_CURRENT_POSITION(Local_2201.f_31, 10f, 50f, true);
			}
		}
	}
}

void func_412()
{
	if (func_721() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (__LIB_8__::func_215(Local_1614.f_136))
		{
			__LIB_7__::func_922(128);
		}
	}
}

void func_413()
{
	if (!__LIB_7__::func_907(Local_1614.f_136, 4))
	{
		if (__LIB_7__::func_929(65536))
		{
			__LIB_8__::func_85(Local_1614.f_136, 4);
		}
	}
}

bool func_418(int iParam0, var uParam1)
{
	__LIB_8__::func_247();
	func_724();
	return false;
}

int func_419(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	bool bVar6;
	switch (iLocal_583)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_0__::func_325(&(uLocal_2097[0]));
			__LIB_8__::func_147(&(Local_479[0 /*7*/]), *iParam0, "FOREMAN", 1);
			__LIB_8__::func_148(&(Local_479[0 /*7*/]), Local_611.f_690[3 /*12*/].f_8, "PEN");
			__LIB_8__::func_148(&(Local_479[0 /*7*/]), Local_611.f_690[4 /*12*/].f_8, "BOOK");
			__LIB_8__::func_26(&(Local_479[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT");
			__LIB_8__::func_9(&(Local_479[0 /*7*/]), &vVar0, &vVar3);
			__LIB_8__::func_148(&(Local_479[0 /*7*/]), Local_611.f_690[25 /*12*/].f_8, "p_chair04x");
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_611.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				__LIB_3__::func_623(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { __LIB_8__::func_35() };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 2f;
				__LIB_1__::func_336(&(Local_156.f_23), 128);
				func_730(&Local_156, 129);
				iLocal_583 = 1;
			}
			else
			{
				func_405(0, 1, 1);
				__LIB_8__::func_16(&(Local_479[0 /*7*/]));
				iLocal_583 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_36(), 5f);
			if (func_730(&Local_156, 129))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { __LIB_8__::func_33(&(Local_479[0 /*7*/]), "FOREMAN", "PB_L_ENTER") };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 0.25f;
				Local_156.f_17 = 0.2f;
				__LIB_1__::func_336(&(Local_156.f_23), 1152);
				func_730(&Local_156, 129);
				iLocal_583 = 2;
			}
			break;
		case 2:
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_36(), 5f);
			if (func_730(&Local_156, 129))
			{
				iLocal_583 = 3;
			}
			break;
		case 3:
			__LIB_7__::func_922(1);
			__LIB_8__::func_16(&(Local_479[0 /*7*/]));
			iLocal_583 = 4;
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				__LIB_7__::func_934(67108864);
				if (__LIB_7__::func_923(2))
				{
					iLocal_583 = 6;
				}
				else
				{
					iLocal_583 = 7;
				}
			}
			break;
		case 6:
			if (!func_733(-1f))
			{
				func_734("LOG_OBJ01", 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_2097[0]), -89429847, 580546400, 0, __LIB_7__::func_978());
				iLocal_583 = 7;
			}
			break;
		case 7:
			if (__LIB_8__::func_109(iParam0, 0, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_0__::func_769();
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
				__LIB_7__::func_922(4096);
				__LIB_8__::func_192(&(Local_479[0 /*7*/]), "bBreakInternalLoop");
				__LIB_8__::func_183(&(Local_479[0 /*7*/]), Local_611.f_690[4 /*12*/].f_8, "BOOK");
				ENTITY::PLAY_ENTITY_ANIM(Local_611.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				if (__LIB_7__::func_923(64))
				{
					if (__LIB_7__::func_908(Local_1614.f_136, 64))
					{
						__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_ACK_ACP", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_ACK_ACN", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (__LIB_7__::func_908(Local_1614.f_136, 2))
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_ACK_2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S2ACK", *iParam0, Global_35, 0, 0, 1, 1);
					__LIB_8__::func_82(Local_1614.f_136, 2);
				}
				__LIB_7__::func_934(65536);
				iLocal_583 = 8;
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (__LIB_2__::func_598(*iParam0, Local_479[0 /*7*/], "FOREMAN", 0, 0, 1, 0) && func_258(-3.5f, 1, 0, 0))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2f, -2f, 2113536, 0f, false, false, -1f, 0, 524297, -1f);
				__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S2BFM", *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_2__::func_259(&(vLocal_557[3 /*3*/]));
				func_405(0, 1, 0);
				__LIB_8__::func_239(1, 0);
				iLocal_583 = 9;
			}
			if (!__LIB_8__::func_109(iParam0, 0, 0))
			{
				func_405(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				func_739(0, 0, 1);
				iLocal_583 = 13;
			}
			break;
		case 9:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
			}
			if (__LIB_0__::func_899(&(vLocal_557[3 /*3*/])) && __LIB_1__::func_592(&(vLocal_557[3 /*3*/])) > 30000)
			{
				iLocal_583 = 10;
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_258(0, 1, 0, 0))
			{
				if (!__LIB_7__::func_929(268435456))
				{
					__LIB_8__::func_239(1, 1);
					func_405(0, 1, 0);
					func_741(0);
					__LIB_7__::func_932(268435456);
				}
				switch (iLocal_361)
				{
					case 0:
						func_405(0, 1, 0);
						__LIB_8__::func_239(0, 0);
						func_739(0, 0, 1);
						__LIB_7__::func_922(2048);
						__LIB_8__::func_82(Local_1614.f_136, 16384);
						__LIB_8__::func_253(&Local_1614);
						__LIB_3__::func_623(&Local_156);
						Local_156.f_8 = { -1400.12f, -207.92f, 101.88f };
						Local_156.f_14 = { __LIB_8__::func_37() };
						Local_156.f_1 = Global_35;
						Local_156.f_17 = 0.2f;
						Local_156.f_18 = 0.2f;
						Local_156.f_19 = 20.6f;
						Local_156.f_25 = Local_479[5 /*7*/];
						StringCopy(&(Local_156.f_30), "ARTHUR", 24);
						StringCopy(&(Local_156.f_26), func_482(5), 32);
						__LIB_1__::func_336(&(Local_156.f_23), 26624);
						__LIB_8__::func_131(&Local_1614, 65536);
						func_730(&Local_156, 129);
						iLocal_583 = 11;
						break;
					case 1:
						func_405(0, 1, 1);
						__LIB_8__::func_239(0, 0);
						__LIB_7__::func_941(2048);
						iLocal_583 = 13;
						break;
				}
			}
			if (!__LIB_8__::func_109(iParam0, 0, 0))
			{
				func_405(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				func_739(0, 0, 1);
				__LIB_7__::func_941(2048);
				iLocal_583 = 13;
			}
			break;
		case 10:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			__LIB_0__::func_37(&(vLocal_557[3 /*3*/]));
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S2WS", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_583 = 9;
			break;
		case 11:
			if (func_730(&Local_156, 129))
			{
				__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S2AL", Global_35, *iParam0, 0, 0, 1, 1);
				__LIB_8__::func_147(&(Local_479[5 /*7*/]), Global_35, "ARTHUR", 1);
				__LIB_8__::func_148(&(Local_479[5 /*7*/]), Local_611.f_690[6 /*12*/].f_8, "MONEY");
				__LIB_8__::func_16(&(Local_479[5 /*7*/]));
				iLocal_583 = 12;
			}
			break;
		case 12:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
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
					__LIB_0__::func_325(&(uLocal_2097[0]));
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S2VG", *iParam0, Global_35, 0, 0, 1, 1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
					__LIB_2__::func_73(iLocal_2100[0], &(uLocal_2097[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
					if (__LIB_7__::func_908(1, 2))
					{
						__LIB_8__::func_131(&Local_1614, 128);
					}
					iLocal_583 = 15;
				}
			}
			break;
		case 13:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_258(-3.5f, 1, *iParam0, 1))
			{
				__LIB_0__::func_325(&(uLocal_2097[0]));
				if (__LIB_1__::func_205(Global_35, iLocal_75[0], 1, 0))
				{
					if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_153(Global_35, 1, 1, 0) == joaat("WEAPON_UNARMED"))
					{
						TASK::TASK_PLAY_ANIM(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S2OT", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_583 = 14;
			}
			break;
		case 14:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!__LIB_1__::func_322("LCMP_IG_S2OT"))
			{
				__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S2MNT", *iParam0, Global_35, 0, 0, 1, 1);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				iLocal_583 = 15;
			}
			break;
		case 15:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			bVar6 = true;
			if (__LIB_7__::func_923(2048) && !__LIB_7__::func_972(&(Local_479[5 /*7*/])))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_8__::func_132(&Local_1614, 65536);
				}
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3) && func_258(-3.5f, 1, *iParam0, 1))
				{
					__LIB_7__::func_941(4096);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					func_405(0, 1, 0);
					__LIB_7__::func_941(4096);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1400.86f, -205.41f, 102.34f, 2f, -1, false, false, false, false);
					__LIB_8__::func_38(iParam0);
					__LIB_7__::func_965(67108864);
					iLocal_583 = 17;
				}
			}
			break;
		case 17:
			if (__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				if (func_747(Local_1614.f_138, &Local_1614, 60000, 1))
				{
					__LIB_2__::func_451(&(Local_213[0 /*21*/]), 0);
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
	if (__LIB_8__::func_88(&Local_362, 1) && Local_362 == *iParam0)
	{
		if (iLocal_583 < 17)
		{
			__LIB_8__::func_211();
			iLocal_583 = 17;
		}
	}
	func_724();
	switch (iLocal_583)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (__LIB_7__::func_908(Local_1614.f_136, 131072))
			{
				iVar0 = iLocal_586;
				iLocal_586 = iVar0 + 1;
				__LIB_8__::func_83(Local_1614.f_136, 131072);
			}
			else
			{
				__LIB_8__::func_82(Local_1614.f_136, 131072);
			}
			if (__LIB_7__::func_908(Local_1614.f_136, 16384))
			{
				__LIB_2__::func_73(iLocal_2100[0], &(uLocal_2097[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
			}
			if (func_335())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_39(), 262209, __LIB_8__::func_40(), __LIB_8__::func_41());
				iLocal_468 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_42(), __LIB_8__::func_39(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_43(), 262209, __LIB_8__::func_40(), __LIB_8__::func_44());
				iLocal_468 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_45(), __LIB_8__::func_43(), 1f, 0, false);
			}
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_8 = { __LIB_8__::func_35() };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				__LIB_1__::func_336(&(Local_156.f_23), 128);
				func_730(&Local_156, 129);
				iLocal_583 = 1;
			}
			else
			{
				func_404(0);
				func_405(0, 1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_468))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_468, __LIB_0__::func_196(func_335(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(func_335(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_583 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (func_730(&Local_156, 129))
			{
				func_404(0);
				func_405(0, 1, 1);
				__LIB_7__::func_922(1);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_468))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_468, __LIB_0__::func_196(func_335(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, __LIB_5__::func_263(func_335(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_583 = 4;
			}
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				iVar1 = __LIB_0__::func_982(1);
				if (iVar1 > 3 || (iVar1 == 3 && __LIB_7__::func_907(1, 128)))
				{
					__LIB_8__::func_85(Local_1614.f_136, 4096);
				}
				func_405(0, 1, 1);
				__LIB_8__::func_239(1, 0);
				if (__LIB_7__::func_923(2))
				{
					iLocal_583 = 6;
				}
				else
				{
					iLocal_583 = 7;
				}
			}
			break;
		case 6:
			if (!func_733(-1f))
			{
				__LIB_0__::func_325(&(uLocal_2097[0]));
				iLocal_583 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (__LIB_8__::func_109(iParam0, 0, func_335()) && __LIB_8__::func_118(iParam0, func_760(), 10f, 0, func_761(), 1, -1243035987))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_7__::func_922(4096);
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_335());
				switch (iLocal_586)
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
				__LIB_13__::func_879(&(Local_1614.f_35), &cVar2, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_583 = 8;
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_335());
			if (func_335())
			{
				func_405(0, 1, 1);
				__LIB_8__::func_239(0, 0);
				iLocal_583 = 5;
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && func_258(-3.5f, 1, 0, 0)) && (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("BREAKOUT")) || TASK::_0x02EBBB3989B7E695(*iParam0)))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, 0, -1f, -1f, -1f);
				iLocal_583 = 2;
			}
			break;
		case 2:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				if (iLocal_586 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iLocal_586)
				{
					case 2:
						StringCopy(&cVar6, "LCMP_IG_NIACTB", 24);
						break;
					case 3:
						StringCopy(&cVar6, "LCMP_IG_NICL", 24);
						break;
				}
				__LIB_13__::func_879(&(Local_1614.f_35), &cVar6, *iParam0, Global_35, 0, 0, 1, 1);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_496(), func_763(0), Global_35, iVar5, 8f, -8f, 0, 0f, false, true, -1f, 0, 0, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_196);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
				func_405(0, 1, 1);
				__LIB_8__::func_239(0, 0);
				iLocal_583 = 5;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_335());
			if (func_764(iParam0))
			{
				__LIB_8__::func_239(1, 0);
				func_405(0, 1, 1);
				func_739(0, 0, 1);
				__LIB_2__::func_259(&(vLocal_557[3 /*3*/]));
			}
			if (__LIB_7__::func_929(-2147483648))
			{
				switch (iLocal_361)
				{
					case 0:
						switch (iLocal_586)
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
						__LIB_13__::func_879(&(Local_1614.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_405(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iLocal_586)
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
						__LIB_13__::func_879(&(Local_1614.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_405(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && func_226(&(vLocal_557[3 /*3*/]), 12.5f))
				{
					func_405(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					__LIB_8__::func_239(0, 0);
					if (!func_335())
					{
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						TASK::_0x9C8F42A5D1859DC1(iLocal_75[0]);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 3f, -1, false, false, false, false);
					}
					__LIB_7__::func_941(4096);
					__LIB_0__::func_325(&(uLocal_2097[0]));
					__LIB_2__::func_259(&(vLocal_557[3 /*3*/]));
					iLocal_583 = 16;
				}
			}
			break;
		case 16:
			if (func_226(&(vLocal_557[3 /*3*/]), 60f))
			{
				if (func_335())
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				}
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				func_405(0, 1, 0);
				func_739(0, 0, 1);
				__LIB_8__::func_38(iParam0);
				iLocal_583 = 17;
			}
			break;
		case 17:
			if (!(__LIB_8__::func_88(&Local_362, 1) && Local_362 == *iParam0))
			{
				if (__LIB_2__::func_763(Local_1614.f_138, 0))
				{
					__LIB_8__::func_124(Local_1614.f_138, 1);
					__LIB_2__::func_451(&(Local_213[0 /*21*/]), 0);
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
	func_724();
	switch (iLocal_583)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_7__::func_932(1073741824 /* Float: 2f */);
			if (!__LIB_7__::func_908(Local_1614.f_136, 131072))
			{
				__LIB_8__::func_82(Local_1614.f_136, 131072);
			}
			else
			{
				__LIB_8__::func_83(Local_1614.f_136, 131072);
			}
			if (func_335())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_39(), 262209, __LIB_8__::func_40(), __LIB_8__::func_41());
				iLocal_468 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_42(), __LIB_8__::func_39(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_43(), 262209, __LIB_8__::func_40(), __LIB_8__::func_44());
				iLocal_468 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_45(), __LIB_8__::func_43(), 1f, 0, false);
			}
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_8 = { -1402.34f, -207.62f, 101.88f };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				__LIB_1__::func_336(&(Local_156.f_23), 128);
				func_730(&Local_156, 129);
				iLocal_583 = 1;
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_468))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_468, __LIB_0__::func_196(func_335(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(func_335(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				if (func_335())
				{
				}
				iLocal_583 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (func_730(&Local_156, 129))
			{
				__LIB_7__::func_922(1);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_468))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_468, __LIB_0__::func_196(func_335(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(func_335(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_583 = 4;
			}
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				__LIB_8__::func_85(Local_1614.f_136, 4096);
				func_405(0, 1, 1);
				if (__LIB_7__::func_923(2))
				{
					iLocal_583 = 6;
				}
				else
				{
					iLocal_583 = 7;
				}
			}
			break;
		case 6:
			if (!func_733(-1f))
			{
				__LIB_0__::func_325(&(uLocal_2097[0]));
				iLocal_583 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (__LIB_8__::func_109(iParam0, 1, func_335()))
			{
				if (__LIB_8__::func_118(iParam0, func_765(iParam0), 10f, 0, 0, 1, -1243035987))
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					__LIB_7__::func_922(4096);
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_82(Local_1614.f_136, 16777216);
					Local_104.f_40 = *iParam0;
					Local_104.f_43 = 4f;
					Local_104.f_41 = 4f;
					Local_104.f_39 = Global_1392194[Local_1614.f_136 /*10*/].f_6;
					if (func_335())
					{
						StringCopy(&cVar0, "LCMPF_IG1_ALT", 64);
					}
					else
					{
						StringCopy(&cVar0, "LCMPF_IG1", 64);
					}
					__LIB_13__::func_879(&(Local_1614.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_583 = 5;
				}
			}
			break;
		case 5:
			func_767(iParam0);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_335());
			if (func_764(iParam0))
			{
				func_405(0, 1, 1);
				func_768(0, 0);
				__LIB_8__::func_239(1, 0);
				__LIB_2__::func_259(&(vLocal_557[3 /*3*/]));
			}
			if (__LIB_7__::func_929(-2147483648))
			{
				switch (iLocal_361)
				{
					case 1:
						if (func_335())
						{
							StringCopy(&cVar9, "LCMP_ANGRRES2", 24);
						}
						else
						{
							StringCopy(&cVar9, "LCMP_ANGRRES1", 24);
						}
						__LIB_13__::func_879(&(Local_1614.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						func_405(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && func_226(&(vLocal_557[3 /*3*/]), 12.5f))
				{
					func_405(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					__LIB_8__::func_239(0, 0);
					iLocal_583 = 8;
				}
			}
			break;
		case 8:
			func_767(iParam0);
			__LIB_8__::func_48(iParam0, 0, 0);
			if (func_258(-3.5f, 1, 0, 0))
			{
				if (func_335())
				{
					__LIB_8__::func_124(Local_1614.f_138, 1);
					__LIB_2__::func_451(&(Local_213[0 /*21*/]), 0);
					__LIB_8__::func_38(iParam0);
					StringCopy(&cVar12, "LCMPF_IG1_ALTR", 24);
					iLocal_583 = 17;
				}
				else
				{
					StringCopy(&cVar12, "LCMPF_IG1_R", 24);
					iLocal_583 = 16;
				}
				__LIB_13__::func_879(&(Local_1614.f_35), &cVar12, *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_7__::func_941(4096);
				__LIB_0__::func_325(&(uLocal_2097[0]));
			}
			break;
		case 16:
			func_767(iParam0);
			if (func_226(&(vLocal_557[3 /*3*/]), 60f))
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				__LIB_8__::func_124(Local_1614.f_138, 1);
				__LIB_2__::func_451(&(Local_213[0 /*21*/]), 0);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				__LIB_8__::func_38(iParam0);
				iLocal_583 = 17;
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
	switch (iLocal_582)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
			{
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1398.107f, -213.5636f, 102.7725f, 0f, 0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (__LIB_7__::func_908(Local_1614.f_136, 1024))
			{
				if (__LIB_0__::func_0(iParam0))
				{
					__LIB_8__::func_239(0, 1);
					func_405(0, 1, 0);
					func_739(0, 0, 1);
					__LIB_7__::func_934(256);
					__LIB_8__::func_38(iParam0);
					__LIB_7__::func_952(&(Local_479[1 /*7*/]));
					__LIB_8__::func_188(&(Local_479[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
					__LIB_8__::func_85(Local_1614.f_136, 4096);
					iLocal_582 = 15;
				}
			}
			else if (__LIB_1__::func_976() && func_772(iParam0))
			{
				__LIB_7__::func_934(67108864);
				func_405(0, 1, 0);
				__LIB_8__::func_239(1, 1);
				func_773(0);
				iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1399.521f, -209.5342f, 104.064f, 0f, 0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1399.238f, -220.5899f, 102.4817f, 0f, 0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				POPULATION::_0xB56D41A694E42E86(iLocal_75[1], 0, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
				iLocal_582 = 1;
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
					iLocal_582 = 6;
				}
				else
				{
					iLocal_582 = 2;
				}
			}
			break;
		case 6:
			if (!func_733(0))
			{
				func_734("LOG_OBJ01", 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_2097[0]), -89429847, 580546400, 0, __LIB_7__::func_978());
				if (!__LIB_7__::func_908(Local_1614.f_136, 1024))
				{
					iLocal_582 = 2;
				}
				else if (__LIB_0__::func_0(iParam0))
				{
					iLocal_582 = 8;
				}
			}
			break;
		case 2:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (__LIB_0__::func_0(0))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[8 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_611.f_690[8 /*12*/].f_8));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[7 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_611.f_690[7 /*12*/].f_8));
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
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (!__LIB_7__::func_923(4096))
			{
				__LIB_7__::func_941(512);
				__LIB_0__::func_769();
				__LIB_7__::func_922(4096);
				__LIB_7__::func_961(&Local_362, 4);
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_198(11, 2);
			if (__LIB_0__::func_139(Local_1614.f_32) && !func_777(101))
			{
				__LIB_1__::func_221(Local_1614.f_32, 0, 1);
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
			if (__LIB_8__::func_24(&(Local_479[0 /*7*/]), "Internal_Loop"))
			{
				__LIB_8__::func_196(&(Local_479[0 /*7*/]), "Internal_Loop");
			}
			if (__LIB_7__::func_923(1073741824 /* Float: 2f */) && !__LIB_4__::func_852(11))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				__LIB_8__::func_131(&Local_1614, 65536);
				__LIB_8__::func_198(11, 2);
				if (__LIB_7__::func_908(Local_1614.f_136, 4))
				{
					__LIB_2__::func_810(11, 128);
					iLocal_582 = 11;
				}
				else
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
					iLocal_582 = 13;
				}
			}
			break;
		case 10:
			if (func_730(&Local_156, 129))
			{
				iLocal_582 = 11;
			}
			break;
		case 11:
			break;
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[0 /*12*/].f_8))
			{
				if (!__LIB_7__::func_933(256))
				{
					__LIB_8__::func_147(&(Local_479[1 /*7*/]), Global_35, "arthur", 1);
					__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[3 /*12*/].f_8, "p_knife02x");
					__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[4 /*12*/].f_8, "p_woodWittle01x");
					__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[6 /*12*/].f_8, "p_foldedBill01x");
					__LIB_8__::func_147(&(Local_479[1 /*7*/]), *iParam0, "U_M_M_BIVFOREMAN_01", 1);
					__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[0 /*12*/].f_8, "ITEM");
					__LIB_8__::func_191(&(Local_479[1 /*7*/]), "pbl_AgreeToSell", 1);
				}
				else
				{
					__LIB_8__::func_147(&(Local_479[1 /*7*/]), Global_35, "player", 1);
					__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[6 /*12*/].f_8, "MONEY");
					__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[0 /*12*/].f_8, "Item");
					__LIB_8__::func_147(&(Local_479[1 /*7*/]), *iParam0, "male", 1);
				}
				iLocal_582 = 13;
			}
			break;
		case 13:
			__LIB_0__::func_325(&(uLocal_2097[0]));
			if (__LIB_7__::func_908(Local_1614.f_136, 4))
			{
				if (!__LIB_7__::func_923(4096))
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LOG_LCMP_INT_a2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				__LIB_8__::func_16(&(Local_479[1 /*7*/]));
				__LIB_7__::func_952(&(Local_479[0 /*7*/]));
				if (!__LIB_7__::func_933(256))
				{
					__LIB_8__::func_192(&(Local_479[1 /*7*/]), "Internal_Loop");
				}
				iLocal_582 = 14;
			}
			else if (!__LIB_1__::func_322("LOG_LCMP_INT_b0"))
			{
				__LIB_8__::func_191(&(Local_479[0 /*7*/]), "pbl_RefuseToSell", 1);
				__LIB_8__::func_192(&(Local_479[0 /*7*/]), "Internal_Loop");
				__LIB_7__::func_934(16384);
				iLocal_582 = 14;
			}
			break;
		case 14:
			if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("OBJECTEXCHANGE"))) && ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[0 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_611.f_690[0 /*12*/].f_8));
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) && ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[6 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_611.f_690[6 /*12*/].f_8));
				}
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BREAKOUT")))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_8__::func_132(&Local_1614, 65536);
				}
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
			}
			if (__LIB_7__::func_972(&(Local_479[0 /*7*/])) && (__LIB_7__::func_933(16384) || __LIB_7__::func_972(&(Local_479[1 /*7*/]))))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1614, 65536);
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_8__::func_131(&Local_1614, 128);
				__LIB_1__::func_943(11, 128);
				__LIB_8__::func_188(&(Local_479[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				__LIB_7__::func_941(2048);
				__LIB_7__::func_965(16384);
				__LIB_8__::func_50(11);
				__LIB_7__::func_934(256);
				__LIB_7__::func_941(536870912);
				__LIB_7__::func_941(4096);
				func_108(1);
				__LIB_7__::func_965(67108864);
				__LIB_8__::func_239(0, 1);
				func_405(0, 1, 0);
				func_739(0, 0, 1);
				__LIB_8__::func_199(11, 2);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
				__LIB_8__::func_38(iParam0);
				iLocal_582 = 15;
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
	int iVar0;
	bool bVar1;
	bool bVar2;
	if ((iLocal_206 % 5) != 0)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	switch (iLocal_596[iParam1])
	{
		case 0:
			if (!__LIB_7__::func_933(2048))
			{
				if (PED::ADD_RELATIONSHIP_GROUP("REL_LOGGING", &iLocal_477) && iLocal_477 != 0)
				{
					__LIB_7__::func_934(2048);
				}
			}
			if (iLocal_478 == 0)
			{
				PED::ADD_RELATIONSHIP_GROUP("REL_LOGGING_WOLF", &iLocal_478);
			}
			if (iLocal_477 != 0 && iLocal_478 != 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_477);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_477, joaat("PLAYER"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_477, iLocal_478);
			}
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			TASK::TASK_GUARD_CURRENT_POSITION(*uParam0, 10f, 50f, true);
			iLocal_596[iParam1] = 1;
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < Local_611.f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]) && __LIB_0__::func_665(*uParam0, iLocal_2125[iVar0], 1, 1) < 45f)
				{
					bVar1 = true;
				}
				else
				{
					iVar0++;
				}
			}
			if (bVar1)
			{
				__LIB_7__::func_934(64);
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				__LIB_2__::func_461(0);
				PED::_0xFC3DB99C8144CD81(*uParam0, Global_1392194[Local_1614.f_136 /*10*/].f_6, 0, true, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(*uParam0, Local_611.f_15[(0 + iParam1) /*32*/].f_6, 40f, 16384, 4);
				iLocal_596[iParam1] = 2;
			}
			if (PED::_0xA454D234E45BB6E5(*uParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0x9337183FDA2E9035(*uParam0, PLAYER::GET_PLAYER_INDEX()))
			{
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1f, -1f, -1f);
				iLocal_596[iParam1] = 3;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < Local_611.f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]) && __LIB_0__::func_665(*uParam0, iLocal_2125[iVar0], 1, 1) < 50f)
				{
					bVar2 = true;
				}
				else
				{
					iVar0++;
				}
			}
			if (!bVar2)
			{
				__LIB_7__::func_965(64);
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				TASK::TASK_GUARD_CURRENT_POSITION(*uParam0, 10f, 50f, true);
				iLocal_596[iParam1] = 1;
			}
			break;
		case 3:
			if (!PED::_0xA454D234E45BB6E5(*uParam0, PLAYER::GET_PLAYER_INDEX()) && !PED::_0x9337183FDA2E9035(*uParam0, PLAYER::GET_PLAYER_INDEX()))
			{
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				TASK::TASK_GUARD_CURRENT_POSITION(*uParam0, 10f, 50f, true);
				__LIB_7__::func_932(262144);
				iLocal_596[iParam1] = 1;
			}
			break;
		case 4:
			break;
	}
}

bool func_424()
{
	int iVar0;
	if (!__LIB_7__::func_923(268435456))
	{
		switch (iLocal_599)
		{
			case 0:
				iVar0 = 0;
				while (iVar0 < Local_611.f_1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
					{
						PED::_0xFC3DB99C8144CD81(iLocal_2125[iVar0], iLocal_75[3], 1, false, 0);
					}
					iVar0++;
				}
				iLocal_599 = 2;
				break;
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if (!__LIB_1__::func_205(Global_35, iLocal_75[3], 1, 0))
					{
						__LIB_2__::func_259(&(vLocal_557[1 /*3*/]));
						iVar0 = 0;
						while (iVar0 < Local_611.f_1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
							{
								PED::SET_PED_CONFIG_FLAG(iLocal_2125[iVar0], 215, true);
							}
							iVar0++;
						}
						iLocal_599 = 1;
					}
				}
				break;
			case 1:
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_75[3], 1, 0))
					{
						__LIB_0__::func_37(&(vLocal_557[1 /*3*/]));
						iVar0 = 0;
						while (iVar0 < Local_611.f_1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_2125[iVar0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_2125[iVar0], true, false);
									func_783(&(iLocal_2125[iVar0]));
									TASK::TASK_COMBAT_PED(iLocal_2125[iVar0], Global_35, 1048576, 16);
								}
							}
							iVar0++;
						}
						iLocal_599 = 2;
					}
					else if (func_226(&(vLocal_557[1 /*3*/]), 6f))
					{
						__LIB_7__::func_934(32);
						iVar0 = 0;
						while (iVar0 < Local_611.f_1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
							{
								TASK::CLEAR_PED_TASKS(iLocal_2125[iVar0], true, false);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_784(), 3f, -1, 5f, 0, 40000f);
								TASK::TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(0, func_784(), -78.08f, 20f, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
								TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_2125[iVar0], iLocal_196, 0.5f, 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
							}
							iVar0++;
						}
						iLocal_599 = 3;
						return true;
					}
				}
				break;
			case 3:
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_75[3], 1, 0))
					{
						__LIB_0__::func_37(&(vLocal_557[1 /*3*/]));
						iVar0 = 0;
						while (iVar0 < Local_611.f_1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_2125[iVar0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_2125[iVar0], true, false);
									func_783(&(iLocal_2125[iVar0]));
									TASK::TASK_COMBAT_PED(iLocal_2125[iVar0], Global_35, 1048576, 16);
								}
							}
							iVar0++;
						}
						iLocal_599 = 2;
					}
				}
				break;
			case 4:
				break;
		}
	}
	return false;
}

int func_425()
{
	int iVar0;
	func_785();
	func_786();
	switch (iLocal_595)
	{
		case 0:
			if (!__LIB_7__::func_908(Local_1614.f_136, 16))
			{
				__LIB_7__::func_927(__LIB_8__::func_4(3), &Local_611);
				iLocal_595 = 1;
			}
			else
			{
				iLocal_595 = 7;
			}
			break;
		case 1:
			if (PED::_0x5E420FF293EE5472())
			{
				iVar0 = __LIB_8__::func_220(3, 0);
				if (iVar0 == __LIB_8__::func_4(3))
				{
					if (((!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(3, 0, 0))) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(3, 1, 0)))) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(3, 2, 0)))) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(3, 3, 0))))
					{
						if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[1]))
						{
							iLocal_75[1] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1394.656f, -243.9225f, 98.72907f, 0f, 0f, 0f, 1.025417f, 1.034337f, 1.10476f);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(__LIB_7__::func_964(3, 0, 0)), false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(__LIB_7__::func_964(3, 1, 0)), false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(__LIB_7__::func_964(3, 2, 0)), false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(__LIB_7__::func_964(3, 3, 0)), false, true);
						__LIB_0__::func_928(&(Local_1614.f_35), __LIB_2__::func_963(__LIB_7__::func_964(3, 0, 0)), "LOG_WORKER_4", 0);
						__LIB_0__::func_928(&(Local_1614.f_35), __LIB_2__::func_963(__LIB_7__::func_964(3, 1, 0)), "LOG_WORKER_5", 0);
						__LIB_0__::func_928(&(Local_1614.f_35), __LIB_2__::func_963(__LIB_7__::func_964(3, 2, 0)), "LOG_WORKER_6", 0);
						__LIB_0__::func_928(&(Local_1614.f_35), __LIB_2__::func_963(__LIB_7__::func_964(3, 3, 0)), "LOG_WORKER_7", 0);
						iLocal_595 = 2;
					}
				}
			}
			break;
		case 2:
			__LIB_8__::func_147(&(Local_479[3 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(3, 0, 0)), "PED1", 1);
			__LIB_8__::func_147(&(Local_479[3 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(3, 1, 0)), "PED2", 1);
			__LIB_8__::func_147(&(Local_479[3 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(3, 2, 0)), "PED3", 1);
			__LIB_8__::func_147(&(Local_479[3 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(3, 3, 0)), "PED4", 1);
			__LIB_8__::func_148(&(Local_479[3 /*7*/]), Local_611.f_690[8 /*12*/].f_8, "CUP1");
			__LIB_8__::func_148(&(Local_479[3 /*7*/]), Local_611.f_690[9 /*12*/].f_8, "CUP2");
			__LIB_8__::func_148(&(Local_479[3 /*7*/]), Local_611.f_690[10 /*12*/].f_8, "CUP3");
			__LIB_8__::func_148(&(Local_479[3 /*7*/]), Local_611.f_690[11 /*12*/].f_8, "CUP4");
			__LIB_8__::func_148(&(Local_479[3 /*7*/]), Local_611.f_690[7 /*12*/].f_8, "BOTTLE");
			__LIB_8__::func_16(&(Local_479[3 /*7*/]));
			__LIB_8__::func_82(Local_1614.f_136, 16);
			iLocal_595 = 3;
			break;
		case 3:
			if (__LIB_7__::func_908(Local_1614.f_136, 256) && __LIB_7__::func_908(Local_1614.f_136, 32))
			{
				iLocal_595 = 5;
			}
			if (((__LIB_7__::func_908(Local_1614.f_136, 256) && __LIB_3__::func_514(&(vLocal_557[4 /*3*/]), 10f)) && (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(3, 0, 0))) || __LIB_0__::func_665(Global_35, __LIB_2__::func_963(__LIB_7__::func_964(3, 0, 0)), 1, 1) < 30f)) && func_258(0, 1, 0, 0))
			{
				__LIB_8__::func_192(&(Local_479[3 /*7*/]), "bBreakInternalLoop");
				iLocal_595 = 4;
			}
			break;
		case 4:
			__LIB_8__::func_196(&(Local_479[3 /*7*/]), "bBreakInternalLoop");
			iLocal_595 = 5;
			break;
		case 5:
			if ((__LIB_7__::func_908(Local_1614.f_136, 32) || ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(3, 0, 0)))) || __LIB_0__::func_665(Global_35, __LIB_2__::func_963(__LIB_7__::func_964(3, 0, 0)), 1, 1) > 50f)
			{
				__LIB_7__::func_952(&(Local_479[3 /*7*/]));
				iLocal_595 = 6;
			}
			break;
		case 6:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_479[3 /*7*/]))
			{
				func_787(3, 0);
				__LIB_0__::func_172(iLocal_75[1]);
				OBJECT::DELETE_OBJECT(&(Local_611.f_690[8 /*12*/].f_8));
				OBJECT::DELETE_OBJECT(&(Local_611.f_690[9 /*12*/].f_8));
				OBJECT::DELETE_OBJECT(&(Local_611.f_690[10 /*12*/].f_8));
				OBJECT::DELETE_OBJECT(&(Local_611.f_690[11 /*12*/].f_8));
				OBJECT::DELETE_OBJECT(&(Local_611.f_690[7 /*12*/].f_8));
				iLocal_595 = 7;
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

bool func_426(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	func_785();
	func_788();
	vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
	if (!__LIB_7__::func_923(512) && AUDIO::IS_ANY_SPEECH_PLAYING(*iParam0))
	{
		MAP::_TRIGGER_SONAR_BLIP_2(1515458263, *iParam0);
		__LIB_7__::func_922(512);
	}
	switch (iLocal_594)
	{
		case 0:
			func_739(0, 0, 1);
			func_405(0, 1, 1);
			__LIB_8__::func_26(&(Local_479[0 /*7*/]), func_790(0));
			__LIB_8__::func_26(&(Local_479[0 /*7*/]), func_790(1));
			__LIB_8__::func_26(&(Local_479[0 /*7*/]), func_790(2));
			if (__LIB_7__::func_908(Local_1614.f_136, 16384))
			{
				__LIB_2__::func_73(iLocal_2100[0], &(uLocal_2097[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[3]))
			{
				iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1447.355f, -365.6499f, 125.5605f, 0f, 0f, 11.99992f, 95.91602f, 34.7993f, 24.21251f, "Appleseed - volWolf");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2125[0]))
				{
					if (iLocal_478 == 0)
					{
						PED::ADD_RELATIONSHIP_GROUP("REL_LOGGING_WOLF", &iLocal_478);
					}
					if (iLocal_478 != 0)
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2125[0], iLocal_478);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_478, joaat("PLAYER"));
					}
					PED::_0xFC3DB99C8144CD81(iLocal_2125[0], iLocal_75[3], 0, false, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2125[0], 71, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2125[0], 62, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2125[0], 45, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2125[0], 51, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2125[0], 31, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2125[0], 37, false);
					TASK::_TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2(iLocal_2125[0], iLocal_75[3], VOLUME::_GET_VOLUME_COORDS(iLocal_75[3]), 0f, __LIB_8__::func_150(iLocal_75[3]), -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2077[2]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2077[2], false);
				ENTITY::_SET_ENTITY_SOMETHING(iLocal_2077[2], true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2077[3]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2077[3], false);
				ENTITY::_SET_ENTITY_SOMETHING(iLocal_2077[3], true);
			}
			if (__LIB_7__::func_908(Local_1614.f_136, 256) || __LIB_7__::func_907(Local_1614.f_136, 64))
			{
				__LIB_7__::func_934(4194304);
				iLocal_594 = 8;
			}
			else
			{
				__LIB_7__::func_927(__LIB_8__::func_4(0), &Local_611);
				__LIB_7__::func_934(67108864);
				iLocal_594 = 1;
			}
			break;
		case 1:
			if (PED::_0x5E420FF293EE5472())
			{
				iVar3 = __LIB_8__::func_220(0, 0);
				if (iVar3 == __LIB_8__::func_4(0))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0))) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)))) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(0, 2, 0))))
					{
						if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
						{
							iLocal_75[4] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1398.927f, -213.5499f, 102.4407f, 0f, 0f, 0f, 3.522115f, 3.82233f, 1.396173f);
						}
						func_792();
						iVar4 = 0;
						while (iVar4 < __LIB_8__::func_4(0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(__LIB_7__::func_964(0, iVar4, 0)), false, true);
							__LIB_8__::func_107(__LIB_2__::func_963(__LIB_7__::func_964(0, iVar4, 0)), 1);
							iVar4++;
						}
						__LIB_0__::func_928(&(Local_1614.f_35), __LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), "LOGGING_WORKER", 0);
						__LIB_0__::func_928(&(Local_1614.f_35), __LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)), "LOG_WORKER_2", 0);
						__LIB_0__::func_928(&(Local_1614.f_35), __LIB_2__::func_963(__LIB_7__::func_964(0, 2, 0)), "LOG_WORKER_3", 0);
						__LIB_8__::func_147(&(Local_479[0 /*7*/]), *iParam0, "FOREMAN", 1);
						__LIB_8__::func_147(&(Local_479[0 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), "PED1", 1);
						__LIB_8__::func_147(&(Local_479[0 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)), "PED2", 1);
						__LIB_8__::func_147(&(Local_479[0 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(0, 2, 0)), "PED3", 1);
						__LIB_8__::func_147(&(Local_479[0 /*7*/]), Global_35, "Arthur", 1);
						__LIB_8__::func_26(&(Local_479[0 /*7*/]), "PBL_EXIT_1");
						__LIB_8__::func_26(&(Local_479[0 /*7*/]), "PBL_EXIT_2");
						__LIB_8__::func_108(&(Local_1614.f_35), "LOG_FMN_ORD_1", 0);
						__LIB_8__::func_108(&(Local_1614.f_35), "LOG_FMN_ORD_4", 0);
						__LIB_8__::func_16(&(Local_479[0 /*7*/]));
						iLocal_594 = 2;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_94(*iParam0, vVar0, 1) < 50f)
			{
				__LIB_7__::func_922(4096);
				__LIB_8__::func_192(&(Local_479[0 /*7*/]), "bBreakInternalLoop");
				__LIB_13__::func_879(&(Local_1614.f_35), "LOG_FMN_ORD_1", *iParam0, __LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), 0, 0, 1, 1);
				__LIB_8__::func_108(&(Local_1614.f_35), "LOG_FMN_ORD_2", 0);
				iLocal_594 = 3;
			}
			break;
		case 3:
			if (!__LIB_1__::func_205(*iParam0, iLocal_75[0], 1, 0))
			{
				__LIB_8__::func_85(Local_1614.f_136, 64);
				__LIB_8__::func_196(&(Local_479[0 /*7*/]), "bBreakInternalLoop");
				iLocal_594 = 4;
			}
			break;
		case 4:
			if (__LIB_0__::func_94(*iParam0, vVar0, 1) < 16f)
			{
				__LIB_8__::func_191(&(Local_479[0 /*7*/]), "PBL_EXIT_1", 1);
				iLocal_594 = 6;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -167507638))
			{
				__LIB_13__::func_879(&(Local_1614.f_35), "LOG_FMN_ORD_2", *iParam0, __LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), 0, 0, 1, 1);
				__LIB_8__::func_108(&(Local_1614.f_35), "LOG_FMN_ORD_3", 0);
				iLocal_594 = 5;
			}
			break;
		case 5:
			if (__LIB_0__::func_94(*iParam0, vVar0, 1) < 16f)
			{
				__LIB_8__::func_191(&(Local_479[0 /*7*/]), "PBL_EXIT_2", 1);
				iLocal_594 = 6;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -606415624))
			{
				__LIB_13__::func_879(&(Local_1614.f_35), "LOG_FMN_ORD_3", *iParam0, __LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), 0, 0, 1, 1);
				__LIB_8__::func_108(&(Local_1614.f_35), "LOG_FMN_ORD_4", 0);
				iLocal_594 = 6;
			}
			break;
		case 6:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -269436386))
			{
				__LIB_13__::func_879(&(Local_1614.f_35), "LOG_FMN_ORD_4", *iParam0, __LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), 0, 0, 1, 1);
				iLocal_594 = 7;
			}
			func_795();
			break;
		case 7:
			func_795();
			if (func_258(-3.5f, 1, 0, 0))
			{
				if (!AUDIO::_0xD89504D9D7D5057D("LOG_FMN_ORD_4") && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -269436386))
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LOG_FMN_ORD_4", *iParam0, __LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), 0, 0, 1, 1);
				}
			}
			if (__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), -1399.772f, -209.4336f, 102.8641f, 1056964608 /* Float: 0.5f */, 0))
			{
				__LIB_8__::func_26(&(Local_479[0 /*7*/]), func_790(0));
				__LIB_8__::func_26(&(Local_479[0 /*7*/]), func_790(1));
				__LIB_8__::func_26(&(Local_479[0 /*7*/]), func_790(2));
				__LIB_0__::func_172(iLocal_75[4]);
				iLocal_594 = 8;
			}
			break;
		case 8:
			func_795();
			return true;
	}
	return false;
}

int func_427(int iParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	func_797();
	if (__LIB_7__::func_933(33554432))
	{
		func_798(iParam0);
	}
	if (!__LIB_7__::func_933(4194304))
	{
		if (func_795())
		{
			__LIB_7__::func_934(4194304);
		}
	}
	if (__LIB_7__::func_933(8388608))
	{
		func_799(iParam0);
	}
	func_788();
	func_800();
	if (__LIB_7__::func_929(64))
	{
		__LIB_8__::func_38(iParam0);
		iLocal_584 = 23;
		__LIB_7__::func_928(64);
		__LIB_0__::func_172(iLocal_75[2]);
		__LIB_7__::func_952(&(Local_479[1 /*7*/]));
		__LIB_3__::func_334(&uLocal_2097);
		__LIB_3__::func_334(&uLocal_2136);
		__LIB_3__::func_334(&uLocal_2114);
		__LIB_3__::func_334(&uLocal_1949);
		iVar0 = 0;
		while (iVar0 < Local_611.f_1)
		{
			__LIB_2__::func_426(&(iLocal_2125[iVar0]));
			iVar0++;
		}
	}
	switch (iLocal_584)
	{
		case 0:
			if (__LIB_0__::func_383())
			{
				return 0;
			}
			if (__LIB_7__::func_908(Local_1614.f_136, 16384) && !MAP::DOES_BLIP_EXIST(uLocal_2097[1]))
			{
				__LIB_2__::func_73(iLocal_2100[0], &(uLocal_2097[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
			}
			if (!__LIB_0__::func_6(iLocal_154))
			{
				iLocal_154 = __LIB_1__::func_293(11, 3, 3, -1454557023);
			}
			if (__LIB_1__::func_241(iLocal_154))
			{
				__LIB_1__::func_298(iLocal_154, 1);
			}
			__LIB_0__::func_172(iLocal_75[4]);
			if (iLocal_478 != 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_CIVMALE"), iLocal_478);
			}
			STREAMING::REQUEST_MODEL(joaat("P_CHAIR06X"), false);
			PED::SET_PED_CONFIG_FLAG(iLocal_2077[0], 249, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2077[1], 249, true);
			if (__LIB_7__::func_908(Local_1614.f_136, 32))
			{
				__LIB_1__::func_821(iLocal_154, 1, 0);
				func_85();
				func_178();
				__LIB_2__::func_73(*iParam0, &iLocal_2011, -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, __LIB_7__::func_978());
				func_734("LOG_OBJ04", 1);
				func_739(0, 0, 1);
				func_405(0, 1, 1);
				__LIB_7__::func_922(2);
				if (Local_362.f_3 < 3)
				{
					Local_362.f_3++;
				}
				iLocal_584 = 20;
			}
			else if (__LIB_7__::func_908(Local_1614.f_136, 256))
			{
				__LIB_7__::func_934(33554432);
				__LIB_1__::func_821(iLocal_154, 1, 0);
				func_805(0);
				__LIB_7__::func_932(536870912);
				__LIB_7__::func_941(1);
				__LIB_7__::func_922(2);
				if (Local_362.f_3 < 3)
				{
					Local_362.f_3++;
				}
				iLocal_584 = 9;
			}
			else if (__LIB_7__::func_908(Local_1614.f_136, 262144))
			{
				func_739(0, 0, 1);
				func_405(0, 1, 1);
				iLocal_584 = 5;
			}
			else
			{
				func_739(0, 0, 1);
				func_405(0, 1, 1);
				iLocal_584 = 1;
			}
			break;
		case 1:
			func_411();
			if (__LIB_7__::func_923(33554432))
			{
				if (__LIB_7__::func_923(2))
				{
					iLocal_584 = 3;
				}
				else
				{
					iLocal_584 = 4;
				}
			}
			break;
		case 3:
			func_411();
			if (!func_733(-1f))
			{
				func_734("LOG_OBJ01", 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_2097[0]), -89429847, 580546400, 0, __LIB_7__::func_978());
				iLocal_584 = 4;
			}
			break;
		case 4:
			func_411();
			if (func_806(iParam0))
			{
				__LIB_7__::func_922(2);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam0, 0f);
				__LIB_8__::func_93(Local_1614.f_136, 8388608);
				iLocal_584 = 6;
			}
			break;
		case 5:
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			func_411();
			if (__LIB_8__::func_109(iParam0, 0, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_7__::func_922(2);
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
				PED::_0xEC6935EBE0847B90(*iParam0, Global_36);
				TASK::_0xE7FA07624574B79A(*iParam0, Global_35, 1, 1, 999f, 1, 0, 0, 0);
				__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_REASK", *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_8__::func_93(Local_1614.f_136, 8388608);
				iLocal_584 = 6;
			}
			break;
		case 6:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam0, 0f);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			func_411();
			if (func_258(0, 1, 0, 0))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_8__::func_239(1, 1);
				func_405(0, 1, 0);
				func_807(0);
				func_108(0);
				iLocal_584 = 7;
			}
			break;
		case 7:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			func_411();
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (iLocal_361 == 0)
			{
				__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S3_PR", Global_35, *iParam0, 0, 0, 1, 1);
				__LIB_7__::func_932(536870912);
				__LIB_2__::func_259(&(vLocal_557[4 /*3*/]));
				if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					TASK::_0x541E5B41DCA45828(*iParam0, 3, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF", "positive_react_player", 2f, -2f, -1, 67108880, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF", "positive_react_fm", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				}
				__LIB_8__::func_83(Local_1614.f_136, 262144);
				__LIB_1__::func_821(iLocal_154, 1, 0);
				func_405(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				if (Local_362.f_3 < 3)
				{
					Local_362.f_3++;
				}
				iLocal_584 = 9;
			}
			else if (iLocal_361 == 1 || (!ENTITY::IS_ENTITY_DEAD(*iParam0) && __LIB_2__::func_118(*iParam0, 0, 1) > 5f))
			{
				if (__LIB_2__::func_118(*iParam0, 0, 1) <= 5f)
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S3_PLNR", Global_35, *iParam0, 0, 0, 1, 1);
				}
				__LIB_8__::func_82(Local_1614.f_136, 262144);
				__LIB_7__::func_941(2048);
				__LIB_0__::func_325(&(uLocal_2097[0]));
				func_405(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				iLocal_584 = 8;
			}
			break;
		case 8:
			if (func_258(-3.5f, 1, 0, 0))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 129, false);
				func_739(0, 0, 1);
				__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S3_NR", *iParam0, Global_35, 0, 0, 1, 1);
				if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					TASK::_0x541E5B41DCA45828(*iParam0, 2, 0);
				}
				else
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF", "negative_react_fm", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				}
				__LIB_8__::func_151(&(Local_479[1 /*7*/]), "PBL_EXIT");
				__LIB_0__::func_172(iLocal_75[2]);
				__LIB_8__::func_38(iParam0);
				iLocal_584 = 23;
			}
			break;
		case 9:
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			func_411();
			if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3) || PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 129, false);
				if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					TASK::_0x541E5B41DCA45828(*iParam0, 3, 0);
				}
				func_805(0);
				__LIB_0__::func_172(iLocal_75[2]);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1614, 65536);
				if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, __LIB_7__::func_958(), 5f, -1, false, false, false, false);
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_2077[2], true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_2077[3], true);
				func_85();
				iLocal_194 = 0;
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[3]))
				{
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1447.355f, -365.6499f, 125.5605f, 0f, 0f, 11.99992f, 95.91602f, 34.7993f, 24.21251f, "Appleseed - volWolf");
				}
				POPULATION::_0xB56D41A694E42E86(iLocal_75[3], 0, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[3], 0, 0, 0, -1, -1, 0);
				if (iLocal_478 == 0)
				{
					PED::ADD_RELATIONSHIP_GROUP("REL_LOGGING_WOLF", &iLocal_478);
				}
				iVar0 = 0;
				while (iVar0 < Local_611.f_1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
					{
						if (iLocal_478 != 0)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2125[iVar0], iLocal_478);
						}
						__LIB_2__::func_487(iLocal_2125[iVar0], Global_1392194[Local_1614.f_136 /*10*/].f_6);
						PED::_0xFC3DB99C8144CD81(iLocal_2125[iVar0], iLocal_75[3], 0, false, 0);
					}
					iVar0++;
				}
				if (iLocal_478 != 0)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_478, joaat("PLAYER"));
				}
				__LIB_0__::func_325(&(uLocal_2097[0]));
				func_734("LOG_OBJ02", 1);
				__LIB_7__::func_922(2048);
				__LIB_8__::func_82(Local_1614.f_136, 256);
				__LIB_8__::func_131(&Local_1614, 128);
				iLocal_75[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1365.049f, -304.6269f, 110.6167f, 0f, 0f, 10.25222f, 52.48819f, 35.56052f, 13.17437f, "Appleseed - volWolfSearch");
				POPULATION::_0xB56D41A694E42E86(iLocal_75[6], 0, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[6], 0, 0, 0, -1, -1, 0);
				if (!__LIB_7__::func_908(Local_1614.f_136, 2048))
				{
					__LIB_8__::func_152(&iLocal_2011, iLocal_75[6], 1247852480);
				}
				TASK::REQUEST_WAYPOINT_RECORDING(func_811());
				if (!PED::_0x5E420FF293EE5472())
				{
					PED::_0xF008E0BA1FE1D644(Local_611.f_1);
				}
				iLocal_584 = 10;
			}
			break;
		case 10:
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			func_411();
			func_812();
			__LIB_7__::func_928(16);
			bVar1 = __LIB_7__::func_929(16);
			if (func_60(&bVar1, &iLocal_194, 0, -1))
			{
				func_813();
				__LIB_7__::func_922(268435456);
				iVar0 = 0;
				while (iVar0 < Local_611.f_1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2125[iVar0], false, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2125[iVar0], 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_2125[iVar0], 186, false);
						vVar2 = { Local_611.f_369[iVar0 /*32*/].f_6 };
						vVar2.f_2 = (vVar2.z - 15f);
						func_267(iLocal_2125[iVar0], vVar2, Local_611.f_369[iVar0 /*32*/].f_9, 2, 1073741824 /* Float: 2f */);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2125[iVar0], true);
					}
					iVar0++;
				}
				PED::SET_PED_CONFIG_FLAG(iLocal_2077[2], 6, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_2077[2], 4, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_2077[2], 186, false);
				__LIB_1__::func_991(iLocal_2077[2], 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_2077[3], 6, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_2077[3], 4, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_2077[3], 186, false);
				__LIB_1__::func_991(iLocal_2077[3], 0);
				iLocal_584 = 11;
			}
			break;
		case 11:
			func_813();
			func_411();
			func_812();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[0]))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_75[3], 1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2077[2]))
					{
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2077[3]))
					{
					}
					if (__LIB_3__::func_332(Local_611.f_15[2 /*32*/].f_6, 1) < 50f || __LIB_3__::func_332(Local_611.f_15[3 /*32*/].f_6, 1) < 50f)
					{
						__LIB_2__::func_246(&uLocal_391);
						AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_2125[0], "HOWL_LONG", false);
						iLocal_584 = 13;
					}
				}
			}
			if (__LIB_8__::func_153(&iLocal_2125))
			{
				__LIB_7__::func_934(33554432);
				iLocal_584 = 15;
			}
			break;
		case 12:
			func_411();
			func_812();
			func_813();
			func_216(0);
			bVar6 = true;
			iVar0 = 0;
			while (iVar0 < Local_611.f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
				{
					bVar5 = true;
					if (__LIB_2__::func_118(iLocal_2125[iVar0], 1, 1) < 20f)
					{
						bVar6 = false;
					}
					else
					{
						__LIB_0__::func_325(&(uLocal_2136[iVar0]));
					}
				}
				iVar0++;
			}
			if (bVar6 || __LIB_1__::func_205(Global_35, iLocal_75[3], 1, 0))
			{
				__LIB_2__::func_246(&uLocal_391);
				iLocal_584 = 13;
			}
			if (!bVar5)
			{
				iLocal_584 = 18;
			}
			break;
		case 13:
			func_411();
			func_216(0);
			func_817();
			func_812();
			func_813();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2077[2]))
			{
				func_818(iLocal_2077[2], &uLocal_391, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, 2000, 4000, 1000, 1075838976 /* Float: 2.5f */, 0, 0, 1084227584 /* Float: 5f */);
			}
			if ((func_819() || func_820(&uLocal_391)) || (((!__LIB_7__::func_933(32) && __LIB_8__::func_153(&iLocal_2125)) || func_821()) || (!__LIB_3__::func_996(Global_35) && ((ENTITY::DOES_ENTITY_EXIST(iLocal_2077[2]) && ENTITY::_0x8DE41E9902E85756(iLocal_2077[2])) || (ENTITY::DOES_ENTITY_EXIST(iLocal_2077[3]) && ENTITY::_0x8DE41E9902E85756(iLocal_2077[3]))))))
			{
				__LIB_1__::func_539();
				__LIB_0__::func_769();
				__LIB_2__::func_246(&uLocal_391);
				__LIB_7__::func_941(268435456);
				__LIB_7__::func_965(32);
				iLocal_599 = 0;
				if (__LIB_7__::func_933(32))
				{
					__LIB_7__::func_934(33554432);
					iLocal_584 = 15;
				}
				else
				{
					iLocal_584 = 14;
				}
			}
			break;
		case 14:
			func_812();
			func_813();
			__LIB_0__::func_325(&iLocal_2011);
			if (func_424())
			{
				iLocal_584 = 12;
			}
			else
			{
				func_411();
				func_216(0);
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
					{
						func_267(iLocal_2125[iVar0], Local_611.f_369[iVar0 /*32*/].f_6, Local_611.f_369[iVar0 /*32*/].f_9, 2, 1073741824 /* Float: 2f */);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2125[iVar0], false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_823(iVar0, 0), 1.5f, 20000, 0.25f, 262144, __LIB_3__::func_731(func_823(iVar0, 0), Global_36));
						__LIB_2__::func_45(0, Global_35, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
						TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_2125[iVar0], iLocal_196, BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(iVar0));
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
					}
					iVar0++;
				}
				func_734("LOG_OBJ03", 1);
				func_818(iLocal_2125[0], &uLocal_391, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 50f, 1000, 4000, 1000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_2125[0], "HOWL_SHORT", false);
				__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_3_WOLVES", 0);
				__LIB_8__::func_82(Local_1614.f_136, 2048);
				__LIB_2__::func_259(&(vLocal_557[2 /*3*/]));
				TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1391.11f, -259.1418f, 98.30546f, 1f, 20000, 0.25f, 0, 174.81f);
				TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_2077[0], iLocal_196);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
				iLocal_584 = 15;
				Jump @4521; //curOff = 3652
				__LIB_0__::func_325(&iLocal_2011);
				func_812();
				func_813();
				if (func_424())
				{
					iLocal_584 = 12;
				}
				else
				{
					func_411();
					func_216(0);
					func_818(iLocal_2125[0], &uLocal_391, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 50f, 1000, 4000, 1000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
					if (func_826(4f, 0, 3) || (__LIB_1__::func_205(Global_35, iLocal_75[3], 1, 0) && __LIB_8__::func_153(&iLocal_2125)))
					{
						func_827(0, 1, 1);
						__LIB_2__::func_259(&(vLocal_557[2 /*3*/]));
						iLocal_584 = 16;
					}
					Jump @4521; //curOff = 3806
					func_812();
					func_818(iLocal_2125[0], &uLocal_391, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 50f, 1000, 4000, 1000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
					if (func_424())
					{
						iLocal_584 = 12;
					}
					else
					{
						func_411();
						func_216(0);
						if (func_826(0f, 0, 1))
						{
							func_827(2, 1, 2);
							__LIB_2__::func_259(&(vLocal_557[2 /*3*/]));
							iLocal_584 = 17;
						}
						Jump @4521; //curOff = 3917
						func_812();
						if (func_424())
						{
							iLocal_584 = 12;
						}
						else
						{
							func_411();
							func_216(0);
							if (func_826(20f, 0, 1))
							{
								func_827(2, 2, 3);
								__LIB_2__::func_259(&(vLocal_557[2 /*3*/]));
								iLocal_584 = 18;
							}
							Jump @4521; //curOff = 3984
							if (func_424())
							{
								iLocal_584 = 12;
							}
							func_411();
							func_216(0);
							if (__LIB_3__::func_505(&iLocal_2125, 0))
							{
								__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
								__LIB_7__::func_928(536870912);
								__LIB_2__::func_259(&(vLocal_557[3 /*3*/]));
								iLocal_584 = 19;
							}
							Jump @4521; //curOff = 4052
							if (func_226(&(vLocal_557[3 /*3*/]), 2f))
							{
								__LIB_8__::func_82(Local_1614.f_136, 32);
								__LIB_8__::func_131(&Local_1614, 128);
								func_85();
								func_178();
								__LIB_2__::func_73(*iParam0, &iLocal_2011, -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, __LIB_7__::func_978());
								func_734("LOG_OBJ04", 1);
								func_216(1);
								__LIB_7__::func_965(33554432);
								func_739(0, 0, 1);
								func_405(0, 1, 1);
								iLocal_584 = 20;
							}
							Jump @4521; //curOff = 4164
							func_411();
							if (func_829(iParam0))
							{
								__LIB_0__::func_325(&(uLocal_2097[0]));
								if (__LIB_7__::func_923(16))
								{
									__LIB_8__::func_176(Local_1614.f_136);
									__LIB_8__::func_167(16, __LIB_8__::func_309(Local_1614.f_136));
								}
								iLocal_584 = 22;
							}
							Jump @4521; //curOff = 4228
							if (func_258(0, 1, 0, 0))
							{
								func_85();
								__LIB_8__::func_239(0, 0);
								func_405(0, 1, 0);
								func_739(0, 0, 1);
								TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(874422897, true);
								iLocal_203 = 874422897;
								func_830(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 40f, *iParam0);
								POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
								POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
								__LIB_8__::func_151(&(Local_479[1 /*7*/]), "PBL_EXIT");
								__LIB_8__::func_38(iParam0);
								__LIB_2__::func_259(&(vLocal_557[3 /*3*/]));
								iLocal_584 = 21;
							}
							Jump @4521; //curOff = 4358
							if (__LIB_8__::func_34(&(Local_479[1 /*7*/])) && func_226(&(vLocal_557[3 /*3*/]), 60f))
							{
								__LIB_8__::func_240(&(Local_479[1 /*7*/]), 1, 1);
								iLocal_584 = 23;
							}
							Jump @4521; //curOff = 4411
							if (__LIB_2__::func_763(Local_1614.f_138, 0))
							{
								if (__LIB_7__::func_908(Local_1614.f_136, 256))
								{
									if (__LIB_2__::func_598(*iParam0, Local_479[1 /*7*/], "FOREMAN", 0, 0, 1, 0))
									{
										__LIB_8__::func_124(Local_1614.f_138, 0);
										__LIB_2__::func_451(&(Local_213[0 /*21*/]), 0);
									}
								}
								else if (func_747(Local_1614.f_138, &Local_1614, 7500, 0))
								{
									__LIB_2__::func_451(&(Local_213[0 /*21*/]), 0);
								}
							}
						}
					}
				}
			}
			return 0;
			default:
				break;
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
		iVar1 = iLocal_2268;
		iVar2 = iLocal_2268 + 4;
		if (iVar2 >= iLocal_2163)
		{
			iVar2 = (iLocal_2163 - 1);
		}
		iLocal_2268 = iVar1;
		while (iLocal_2268 <= iVar2)
		{
			if (!__LIB_0__::func_29(iLocal_2147[iLocal_2268]))
			{
			}
			else
			{
				iVar0 = __LIB_2__::func_963(iLocal_2147[iLocal_2268]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					__LIB_2__::func_965(iLocal_2147[iLocal_2268], 0, 1, 0, 1, 1);
					__LIB_2__::func_56(iVar0, 1, 1);
					if (!__LIB_0__::func_163(iVar0, 518218985))
					{
						if (!__LIB_7__::func_923(32))
						{
							func_833(&iLocal_2268);
						}
						else
						{
							vVar3 = { __LIB_8__::func_212(iLocal_75[4], 100, 1, 0) };
							TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
							if (!__LIB_0__::func_86(vVar3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE((30f / 2f), 30f), 0, 40000f);
							}
							__LIB_2__::func_45(0, iLocal_2077[0], -1);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
							TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_196);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
						}
					}
					if (!__LIB_7__::func_923(32))
					{
						iLocal_2147[iLocal_2268] = -1;
					}
				}
			}
			iLocal_2268++;
		}
		if (iLocal_2268 >= (iLocal_2163 - 1))
		{
			__LIB_7__::func_928(8192);
			if (!__LIB_7__::func_923(32))
			{
				iLocal_2163 = 0;
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
				if ((__LIB_7__::func_923(32) && !__LIB_7__::func_924(&Local_1614, 2)) && iVar4 == iLocal_2077[0])
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
	while (iVar1 < iLocal_2163)
	{
		if (!__LIB_0__::func_29(iLocal_2147[iVar1]))
		{
		}
		else
		{
			iVar0 = __LIB_2__::func_963(iLocal_2147[iVar1]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				__LIB_2__::func_965(iLocal_2147[iVar1], 0, 1, 0, 1, 1);
				__LIB_2__::func_56(iVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

void func_465(int iParam0)
{
	__LIB_1__::func_336(&(Global_40.f_9096[Local_1614.f_136 /*12*/].f_6), __LIB_0__::func_771(iParam0));
}

bool func_466(int iParam0)
{
	return __LIB_0__::func_27(Global_40.f_9096[Local_1614.f_136 /*12*/].f_6, __LIB_0__::func_771(iParam0));
}

void func_467(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { __LIB_8__::func_51(*iParam0) };
	fVar3 = __LIB_8__::func_52(*iParam0);
	uLocal_462[*iParam0] = TASK::CREATE_SCENARIO_POINT(__LIB_8__::func_18(), vVar0, fVar3, 0, 0, 0);
	TASK::_0xE69FDA40AAC3EFC0(uLocal_462[*iParam0], 0);
	TASK::_0xA7479FB665361EDB(uLocal_462[*iParam0], 0);
	TASK::_SET_SCENARIO_POINT_FLAG(uLocal_462[*iParam0], 19, true);
	iLocal_197[*iParam0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_197[*iParam0], 534496, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_197[*iParam0], 534496, 0, 0, -1, -1, 0);
	if (!__LIB_1__::func_565(&(uLocal_1912[*iParam0])))
	{
		uLocal_1912[*iParam0] = GRAPHICS::_0xFA50F79257745E74(vVar0, 3f, 1, 36, 0);
	}
}

int func_468(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_450[iParam0]))
	{
		uLocal_456[iParam0] = ENTITY::_0x6F3068258A499E52(__LIB_8__::func_154(iParam0), __LIB_8__::func_144(iParam0), 9);
		iLocal_450[iParam0] = OBJECT::GET_RAYFIRE_MAP_OBJECT(__LIB_8__::func_144(iParam0), 5f, __LIB_8__::func_155(iParam0));
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_450[iParam0]))
	{
		uLocal_456[iParam0] = uLocal_456[iParam0];
		if (((!func_843(iParam0) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_450[iParam0]) != 4) && !__LIB_8__::func_139(iParam0)) && !func_466(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_450[iParam0], 4);
		}
		else if (__LIB_7__::func_923(64))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_450[iParam0], 4);
		}
		else if (func_466(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_450[iParam0], 9);
			__LIB_8__::func_156(iParam0);
			__LIB_8__::func_149(iParam0);
		}
		if (func_843(iParam0))
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
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_462[iParam0]))
	{
		TASK::_DELETE_SCENARIO_POINT(uLocal_462[iParam0]);
		__LIB_0__::func_172(iLocal_197[iParam0]);
	}
	if (bParam1)
	{
		__LIB_2__::func_353(&(uLocal_1912[iParam0]), 1);
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
				if ((iLocal_98 > 1 && __LIB_7__::func_908(1, 2)) && !__LIB_7__::func_908(Local_1614.f_136, 16384))
				{
					return "PBL_FOREMAN_STAGE2_TALK_INTRO";
				}
				else if (func_335())
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
							if (func_335())
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
							if (func_335())
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
						if (!__LIB_7__::func_907(Local_1614.f_136, 64))
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
	__LIB_8__::func_234(5, &Local_1614, 5);
	if (__LIB_7__::func_923(64))
	{
		iLocal_586 = 2;
	}
	else if (__LIB_7__::func_924(&Local_1614, 256))
	{
		iLocal_586 = 2;
	}
	else if (__LIB_1__::func_985())
	{
		iLocal_586 = 0;
	}
	else
	{
		iLocal_586 = 2;
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
	if (func_335())
	{
		return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_OUTDOOR_JOB";
	}
	return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_INDOOR_JOB";
}

bool func_526(float fParam0)
{
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	if (__LIB_0__::func_899(&uLocal_0) && !func_226(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
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
	if (__LIB_2__::func_763(Local_1614.f_138, 0))
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
	iVar1 = func_957(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		func_958(iParam1, uParam3, iParam0);
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

void func_679(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iLocal_588[iParam4] > 3 && iLocal_588[iParam4] < 8)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam2, 3)) || (!ENTITY::IS_ENTITY_DEAD(*iParam3) && !TASK::GET_IS_TASK_ACTIVE(*iParam3, 3)))
		{
			iVar0 = -1;
			if (!__LIB_8__::func_88(&Local_362, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam2, 3))
				{
					Local_362 = __LIB_2__::func_963(__LIB_7__::func_964(9, 0, *iParam0));
					iVar0 = 0;
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam3, 3))
				{
					Local_362 = *iParam3;
					iVar0 = 1;
				}
				if (__LIB_2__::func_215(__LIB_2__::func_963(__LIB_7__::func_964(9, iVar0, *iParam0)), Global_35, 0, 5f, 0))
				{
					__LIB_18__::func_81(&Local_362, &Local_1614, 2048, 55961, 0, 0);
				}
			}
			__LIB_8__::func_183(&(Local_479[(9 + iParam4) /*7*/]), *iParam2, "PED1");
			func_691(9, 0, *iParam0, 0 == iVar0);
			__LIB_8__::func_183(&(Local_479[(9 + iParam4) /*7*/]), *iParam3, "PED2");
			func_691(9, 1, *iParam0, 1 == iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[(15 + *iParam1) /*12*/].f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[(15 + *iParam1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[(15 + *iParam1) /*12*/].f_8, true);
				}
				else
				{
					__LIB_8__::func_183(&(Local_479[(9 + iParam4) /*7*/]), Local_611.f_690[(15 + *iParam1) /*12*/].f_8, "SAW");
					ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[(15 + *iParam1) /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(Local_611.f_690[(15 + *iParam1) /*12*/].f_8);
				}
			}
			__LIB_7__::func_952(&(Local_479[(9 + iParam4) /*7*/]));
			iLocal_588[iParam4] = 10;
		}
	}
}

void func_680(int iParam0, int iParam1)
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
			if (!__LIB_8__::func_58(&(Local_479[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)) && !__LIB_8__::func_60(&(Local_479[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					__LIB_8__::func_26(&(Local_479[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (__LIB_8__::func_58(&(Local_479[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				__LIB_8__::func_61(&(Local_479[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_681(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2[24];
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return;
	}
	if (__LIB_7__::func_963(&(Local_479[(9 + iParam2) /*7*/])))
	{
		func_976(iParam0, iParam1, iParam2);
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
		if (Local_362 == *iParam0 || Local_362 == *iParam1)
		{
			func_350(iParam2);
			iLocal_588[iParam2] = 8;
			return;
		}
		if (__LIB_7__::func_933(__LIB_8__::func_62(iParam2)))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_479[(9 + iParam2) /*7*/].f_1)) && __LIB_8__::func_34(&(Local_479[(9 + iParam2) /*7*/])))
			{
				__LIB_8__::func_240(&(Local_479[(9 + iParam2) /*7*/]), 1, 1);
				StringCopy(&(Local_479[(9 + iParam2) /*7*/].f_1), "", 24);
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
				cVar2 = { __LIB_8__::func_121(iParam0, iLocal_473[iParam2], bVar1) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					__LIB_8__::func_151(&(Local_479[(9 + iParam2) /*7*/]), &cVar2);
				}
			}
		}
	}
}

void func_691(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_7__::func_964(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		__LIB_8__::func_124(iVar0, 1);
		__LIB_8__::func_63(1, &Local_611);
	}
}

void func_692()
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
	if (func_981(&iVar2, iVar1))
	{
		__LIB_8__::func_124(iVar1, 1);
		func_474(func_693(iVar0), 0);
		__LIB_8__::func_19(__LIB_8__::func_17(iVar0));
	}
}

int func_693(int iParam0)
{
	if ((!__LIB_7__::func_923(64) && __LIB_7__::func_907(Local_1614.f_136, 536870912)) && iParam0 == __LIB_7__::func_920())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && __LIB_7__::func_923(262144))
	{
		iParam0 = 4;
	}
	return iParam0;
}

void func_697()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_693(iVar0);
		if (__LIB_8__::func_139(iVar1) && (!__LIB_7__::func_923(64) || iVar1 != 0))
		{
			func_982(iVar0);
		}
		iVar0++;
	}
}

void func_699(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = (810 + iParam0);
	iVar1 = __LIB_2__::func_963(iVar0);
	iVar2 = func_693(iParam0);
	if (__LIB_8__::func_241(iVar2, &iVar1))
	{
		if (func_843(iVar2))
		{
			bVar3 = true;
		}
		else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_450[iVar2]) == 4)
		{
		}
		else
		{
			func_468(iVar2);
			return;
		}
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_450[iVar2]))
	{
		func_468(iVar2);
		return;
	}
	if (func_984(iParam0, bVar3))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_450[iVar2], 6);
		if (!__LIB_8__::func_139(iVar2))
		{
			__LIB_8__::func_156(iVar2);
		}
		if (!(__LIB_7__::func_923(64) && iVar2 == 0))
		{
			__LIB_3__::func_600(iVar1, Global_35, "LOG_TIMBER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

void func_701(int iParam0)
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
	iVar2 = func_693(iParam0);
	if (__LIB_8__::func_140(iVar2))
	{
		return;
	}
	if (__LIB_8__::func_139(iVar2))
	{
		return;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_462[iVar2]))
	{
		return;
	}
	if (!__LIB_0__::func_163(iVar1, 1435919172))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iVar1, uLocal_462[iVar2], 0, -1, true, false, 0, false, -1f, false);
	}
}

void func_702(int iParam0, int iParam1)
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
		fVar0 = __LIB_1__::func_583(&(vLocal_557[0 /*3*/]));
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
			__LIB_1__::func_585(&(vLocal_557[0 /*3*/]), fVar0);
		}
		__LIB_8__::func_19(__LIB_8__::func_64(iParam1));
	}
}

bool func_703(int iParam0, var uParam1, int iParam2, int iParam3)
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
		if (iParam3 == __LIB_7__::func_920() && __LIB_7__::func_907(Local_1614.f_136, 1073741824 /* Float: 2f */))
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
		if (__LIB_0__::func_899(&(vLocal_557[0 /*3*/])))
		{
			fVar1 = __LIB_1__::func_583(&(vLocal_557[0 /*3*/]));
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
		if (__LIB_7__::func_907(Local_1614.f_136, 536870912) && iParam3 == __LIB_7__::func_920())
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

void func_704(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_2__::func_1(*iParam0, 0, 1) && !DECORATOR::DECOR_EXIST_ON(*iParam0, "bChopDown"))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_TRIGGER_SONAR_BLIP_2(1515458263, *iParam0);
		if (!(__LIB_7__::func_923(64) && iParam1 == 0))
		{
			__LIB_3__::func_600(*iParam0, Global_35, __LIB_8__::func_65(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		iVar0 = func_693(iParam1);
		func_988(iParam1);
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

void func_705()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_991(iVar1);
		iVar0++;
	}
}

void func_708(int iParam0, bool bParam1)
{
	func_992(iParam0, 0, bParam1);
	func_992(iParam0, 1, bParam1);
	func_992(iParam0, 2, bParam1);
}

void func_714()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_611.f_690[12 /*12*/].f_8))
	{
		return;
	}
	if (!OBJECT::_0xB6CBD40F8EA69E8A(Local_611.f_690[13 /*12*/].f_8))
	{
		return;
	}
	if (!__LIB_7__::func_933(8192))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[13 /*12*/].f_8, 1656474583) && !ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[13 /*12*/].f_8, -1064143891))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_611.f_690[12 /*12*/].f_8, "pickup_steamd", "props_misc@appleseed_loader", 1))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_611.f_690[12 /*12*/].f_8, "pickup_steamd", "props_misc@appleseed_loader", 8f, false, false, false, 0f, 1);
			}
			__LIB_7__::func_934(8192);
			TASK::SET_ANIM_RATE(Local_611.f_690[12 /*12*/].f_8, 1f, 0, false);
		}
	}
	else if (!ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[13 /*12*/].f_8, 1656474583) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[13 /*12*/].f_8, -1064143891))
	{
		__LIB_7__::func_965(8192);
		TASK::SET_ANIM_RATE(Local_611.f_690[12 /*12*/].f_8, 0f, 0, false);
	}
}

void func_718(int iParam0, int iParam1)
{
	func_993(iParam0, 0);
	func_993(iParam1, 1);
}

bool func_720(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	switch (uParam0->f_17)
	{
		case 0:
			if (uParam0->f_25 >= *iParam1)
			{
				uParam0->f_25 = 0;
			}
			if (uParam0->f_24 >= uParam0->f_26 || uParam0->f_23 >= uParam0->f_26)
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (uParam0->f_23 < uParam0->f_26 && uParam0->f_24 < uParam0->f_26)
			{
				if (__LIB_8__::func_213(uParam0, (*iParam1)[uParam0->f_25], iParam2))
				{
					if ((ENTITY::IS_ENTITY_ON_SCREEN((*iParam1)[uParam0->f_25]) && !ENTITY::IS_ENTITY_OCCLUDED((*iParam1)[uParam0->f_25])) && PED::_0x7F9B9791D4CB71F6(Global_35, (*iParam1)[uParam0->f_25], false, 0) == 1)
					{
						uParam0->f_31 = (*iParam1)[uParam0->f_25];
						uParam0->f_17 = 1;
					}
					else
					{
						uParam0->f_25++;
						Jump @1215; //curOff = 254
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_31) && __LIB_2__::func_215(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							__LIB_3__::func_896(&(uParam0->f_18));
							vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_31, true, false) };
							if (!uParam0->f_7[uParam0->f_24])
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (__LIB_0__::func_27(uParam0->f_34, 8))
								{
									TASK::_0xE7FA07624574B79A(uParam0->f_31, Global_35, 2, 1, 100f, 1, 0, 0, 0);
									__LIB_1__::func_336(&(uParam0->f_34), 16);
								}
								else if (!__LIB_0__::func_27(uParam0->f_34, 4) && !PED::_0x84D0BF2B21862059(uParam0->f_31))
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										TASK::TASK_ACHIEVE_HEADING(0, 90f, 0);
										TASK::TASK_PLAY_ANIM(0, *uParam0, uParam0->f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
									{
										uParam0->f_30 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_31, false);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if (__LIB_0__::func_94(uParam0->f_31, Global_36, 0) > 12f)
										{
											TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0f, 0f, 1f, 1000, 5f, 1, 1, 0, 0, 1);
										}
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										if (bParam3)
										{
											if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_30))
											{
												TASK::_TASK_USE_SCENARIO_POINT(0, uParam0->f_30, 0, 0, true, false, 0, false, -1f, false);
											}
											else
											{
												TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, false, false, false, false);
											}
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										if (bParam3)
										{
											TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, false, false, false, false);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
								}
							}
							DECORATOR::DECOR_SET_BOOL(uParam0->f_31, "bNoticePlayer", false);
							uParam0->f_17 = 2;
						}
						else if (uParam0->f_18.f_4)
						{
							__LIB_3__::func_896(&(uParam0->f_18));
							uParam0->f_17 = 0;
						}
						if (uParam0->f_17 == 0)
						{
							uParam0->f_31 = 0;
							if (uParam0->f_25 == (*iParam1 - 1))
							{
								uParam0->f_25 = 0;
							}
							else
							{
								uParam0->f_25++;
							}
						}
						Jump @1215; //curOff = 885
						if (__LIB_0__::func_27(uParam0->f_34, 1))
						{
							__LIB_2__::func_461(0);
						}
						__LIB_4__::func_279(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!__LIB_0__::func_270() && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23])) && func_258(0, 1, uParam0->f_31, 1))
						{
							if (__LIB_0__::func_27(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								__LIB_3__::func_600(uParam0->f_31, Global_35, uParam0->f_2[uParam0->f_23], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							__LIB_2__::func_259(&(uParam0->f_27));
							return true;
						}
						Jump @1215; //curOff = 1078
						if ((__LIB_0__::func_27(uParam0->f_34, 16) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_31)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_31))
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_31, 1, 0);
							__LIB_0__::func_516(&(uParam0->f_34), 16);
						}
						if (__LIB_3__::func_514(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = __LIB_8__::func_246(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && __LIB_2__::func_763(iVar4, 0))
							{
								__LIB_2__::func_753(iVar4, 0, 1, 0, 0);
							}
							uParam0->f_17 = 0;
						}
					}
					return false;
				}
			}
			default:
				break;
	}
}

bool func_721()
{
	if (__LIB_7__::func_923(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (func_997())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_724()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_611.f_690[5 /*12*/].f_8))
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(Local_611.f_690[5 /*12*/].f_8))
		{
			if (!__LIB_7__::func_929(65536))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[5 /*12*/].f_8, true);
			}
		}
		else if (__LIB_7__::func_929(65536))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_611.f_690[5 /*12*/].f_8, false);
			PHYSICS::ACTIVATE_PHYSICS(Local_611.f_690[5 /*12*/].f_8);
		}
	}
}

bool func_730(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !__LIB_0__::func_27(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_2__::func_259(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (__LIB_0__::func_27(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && __LIB_0__::func_71(uParam0->f_1))
					{
						__LIB_3__::func_622(uParam0->f_1);
						iVar0 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_1__::func_336(&(uParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				__LIB_0__::func_19(uParam0, 1, iParam1);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_1000(uParam0, iParam1))
			{
				__LIB_2__::func_259(&(uParam0->f_5));
				if (!func_1001(uParam0, iParam1))
				{
					__LIB_4__::func_69();
				}
				__LIB_0__::func_19(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_1001(uParam0, iParam1))
			{
				__LIB_2__::func_259(&(uParam0->f_5));
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, __LIB_0__::func_27(uParam0->f_23, 512), 0, 0);
				}
				__LIB_0__::func_19(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_1003(uParam0, iParam1))
			{
				__LIB_2__::func_259(&(uParam0->f_5));
				if (!PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
				}
				if (__LIB_0__::func_27(uParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (__LIB_0__::func_665(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				__LIB_0__::func_19(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_1005(uParam0, iParam1))
			{
				__LIB_2__::func_259(&(uParam0->f_5));
				if (__LIB_0__::func_27(uParam0->f_23, 8192))
				{
					if (__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
						if (__LIB_0__::func_27(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (__LIB_0__::func_27(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (__LIB_0__::func_27(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					__LIB_1__::func_474(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_0__::func_19(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 128) && func_226(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(uParam0->f_11) || !__LIB_0__::func_163(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, __LIB_0__::func_27(uParam0->f_23, 8)) && (!__LIB_0__::func_27(uParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_27(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(uParam0->f_5));
				__LIB_0__::func_19(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_733(float fParam0)
{
	return !func_258(fParam0, 1, 0, 0);
}

void func_734(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_446, sParam0, 32);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_446))
		{
			__LIB_1__::func_422(&cLocal_446, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

void func_739(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1014(iParam0, 0, __LIB_2__::func_460(7));
	Local_256[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_256[iParam0 /*52*/][0 /*17*/]), 1);
	func_992(iParam0, 0, !__LIB_7__::func_929(1073741824 /* Float: 2f */));
	func_1014(iParam0, 1, __LIB_2__::func_460(10));
	func_992(iParam0, 1, bParam2);
	func_992(iParam0, 2, bParam1);
	func_1015(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		__LIB_7__::func_932(268435456);
	}
}

void func_741(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1014(iParam0, 0, "LOG_CTXTBUY");
	Local_256[0 /*52*/][0 /*17*/].f_14 = __LIB_8__::func_126();
	__LIB_1__::func_471(&(Local_256[iParam0 /*52*/][0 /*17*/]), 1);
	__LIB_1__::func_483(Local_256[iParam0 /*52*/][0 /*17*/].f_6, "LOG_CTXTBUY", Local_256[iParam0 /*52*/][0 /*17*/].f_14, 0);
	func_992(iParam0, 0, 1);
	func_1014(iParam0, 1, __LIB_2__::func_460(1));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	__LIB_7__::func_932(268435456);
	__LIB_7__::func_965(536870912);
}

bool func_747(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!__LIB_0__::func_899(&(uParam1->f_133)))
	{
		__LIB_2__::func_259(&(uParam1->f_133));
	}
	else if (__LIB_1__::func_592(&(uParam1->f_133)) > iParam2)
	{
		__LIB_0__::func_37(&(uParam1->f_133));
		if (__LIB_2__::func_763(iParam0, 0))
		{
			__LIB_8__::func_124(iParam0, bParam3);
			return true;
		}
	}
	return false;
}

int func_760()
{
	switch (iLocal_586)
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

char* func_761()
{
	switch (iLocal_586)
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

char* func_763(bool bParam0)
{
	if (iLocal_586 == 2)
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
	else if (iLocal_586 == 3)
	{
		return "clockwork_fm";
	}
	return "";
}

bool func_764(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (__LIB_7__::func_929(-2147483648))
	{
		return false;
	}
	if (__LIB_0__::func_481(1))
	{
		return false;
	}
	if (!func_258(-3.5f, 1, *iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_765(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	switch (iLocal_586)
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

void func_767(int iParam0)
{
	int iVar0;
	if (__LIB_7__::func_929(65536))
	{
		if (!__LIB_2__::func_763(Local_1614.f_138, 0))
		{
			__LIB_8__::func_123(Local_1614.f_138, 1, 1);
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
		if (__LIB_0__::func_899(&(vLocal_557[3 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_557[3 /*3*/]));
		}
		if (func_258(-3.5f, 1, 0, 0) && !__LIB_0__::func_899(&(vLocal_557[5 /*3*/])))
		{
			__LIB_2__::func_259(&(vLocal_557[5 /*3*/]));
		}
		if (func_226(&(vLocal_557[5 /*3*/]), 10f))
		{
			__LIB_13__::func_879(&(Local_1614.f_35), __LIB_8__::func_72(), *iParam0, Global_35, 0, 0, 1, 1);
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
		if (__LIB_0__::func_899(&(vLocal_557[5 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_557[5 /*3*/]));
		}
		if (__LIB_7__::func_933(2097152))
		{
			if (!__LIB_0__::func_899(&(vLocal_557[3 /*3*/])))
			{
				__LIB_2__::func_259(&(vLocal_557[3 /*3*/]));
			}
			if (func_226(&(vLocal_557[3 /*3*/]), 15f))
			{
				if (iLocal_103 == 3)
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					PED::_0x935CF6E42BAF7F4D(*iParam0);
					__LIB_8__::func_124(Local_1614.f_138, 1);
					__LIB_2__::func_451(&(Local_213[0 /*21*/]), 0);
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

void func_768(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1014(iParam0, 0, __LIB_2__::func_460(7));
	Local_256[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_256[iParam0 /*52*/][0 /*17*/]), 1);
	func_992(iParam0, 0, 0);
	func_1014(iParam0, 1, __LIB_2__::func_460(10));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, bParam1);
	func_1015(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		__LIB_7__::func_932(268435456);
	}
}

int func_772(int iParam0)
{
	if (!__LIB_7__::func_933(4096))
	{
		__LIB_8__::func_159(4096, STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_7__::func_956(), 15, __LIB_2__::func_929(Local_1614.f_138), __LIB_8__::func_73()));
	}
	return 1;
}

void func_773(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1014(iParam0, 0, __LIB_2__::func_460(7));
	Local_256[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_256[iParam0 /*52*/][0 /*17*/]), 1);
	func_992(iParam0, 0, 1);
	func_1014(iParam0, 1, __LIB_2__::func_460(10));
	func_992(iParam0, 1, 0);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	__LIB_7__::func_932(268435456);
}

bool func_777(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_921(iParam0) == 4 && __LIB_8__::func_224(iParam0, -1162387149))
	{
		return true;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
		if (ITEMSET::IS_ITEMSET_VALID(iVar2))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else
				{
					iVar1 = func_1029(iVar0);
					if (__LIB_8__::func_127(iVar1, iParam0))
					{
						ITEMSET::DESTROY_ITEMSET(iVar2);
						return true;
					}
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
		}
	}
	return __LIB_8__::func_224(iParam0, 1084182731);
}

void func_783(var uParam0)
{
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, true);
	PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 9, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 51, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 33, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 29, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 11, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 17, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 60, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 31, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 112, 0f);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 215, false);
}

Vector3 func_784()
{
	return -1444.57f, -360.9441f, 112.1895f;
}

void func_785()
{
	int iVar0[7];
	int iVar8;
	if (iLocal_595 > 1 && iLocal_595 < 6)
	{
		iVar0[iVar8] = __LIB_2__::func_963(__LIB_7__::func_964(3, 0, 0));
		iVar8++;
		iVar0[iVar8] = __LIB_2__::func_963(__LIB_7__::func_964(3, 1, 0));
		iVar8++;
		iVar0[iVar8] = __LIB_2__::func_963(__LIB_7__::func_964(3, 2, 0));
		iVar8++;
		iVar0[iVar8] = __LIB_2__::func_963(__LIB_7__::func_964(3, 3, 0));
		iVar8++;
	}
	if (iLocal_594 > 1 && !__LIB_7__::func_933(4194304))
	{
		iVar0[iVar8] = __LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0));
		iVar8++;
		iVar0[iVar8] = __LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0));
		iVar8++;
		iVar0[iVar8] = __LIB_2__::func_963(__LIB_7__::func_964(0, 2, 0));
		iVar8++;
	}
	func_1036(&iVar0, 0, (iVar8 - 1), 1, 1, 1, 1);
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0[iVar8]))
		{
		}
		iVar8++;
	}
}

void func_786()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (iLocal_595 > 2 && iLocal_595 <= 5)
	{
		iVar1 = 0;
		while (iVar1 < __LIB_8__::func_4(3))
		{
			iVar0 = __LIB_2__::func_963(__LIB_7__::func_964(3, iVar1, 0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !TASK::GET_IS_TASK_ACTIVE(iVar0, 3))
			{
				if (!__LIB_8__::func_88(&Local_362, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !TASK::GET_IS_TASK_ACTIVE(iVar0, 3))
					{
						Local_362 = iVar0;
					}
					if (__LIB_2__::func_215(iVar0, Global_35, 0, 5f, 0))
					{
						__LIB_18__::func_81(&Local_362, &Local_1614, 2048, 55961, 0, 0);
					}
				}
				bVar2 = true;
			}
			iVar1++;
		}
		if (bVar2)
		{
			__LIB_7__::func_952(&(Local_479[3 /*7*/]));
			iLocal_595 = 6;
		}
	}
}

void func_787(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_8__::func_4(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_691(iParam0, iVar0, iParam1, 0);
		iVar0++;
	}
}

void func_788()
{
	if (iLocal_584 < 7)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_75[2], 1, 0))
		{
			__LIB_1__::func_538(0);
			if (!__LIB_7__::func_933(512))
			{
				if (__LIB_0__::func_71(Global_35))
				{
					if (!__LIB_7__::func_933(1024))
					{
						__LIB_7__::func_934(1024);
						__LIB_3__::func_622(Global_35);
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					__LIB_7__::func_965(1024);
					__LIB_8__::func_159(512, func_1038(Global_35, &iLocal_603, __LIB_1__::func_977(), iLocal_75[2], 1097859072 /* Float: 15f */, 2, 1, 129, 0, 0, 1071644672 /* Float: 1.75f */));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_603))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_603, 136, true);
					}
				}
			}
		}
		else
		{
			func_108(0);
		}
	}
}

char[] func_790(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case default:
			return "PB_ENTER_N_OFFER";
		case 1:
			return "PB_ENTER_L_OFFER";
		case 2:
			return "PB_ENTER_R_OFFER";
			default:
				break;
	}
}

void func_792()
{
	iLocal_75[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Appleseed - volWolfJob");
	iLocal_75[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1398.369f, -212.342f, 103.0057f, 0f, 0f, 18.00427f, 2.255326f, 3.819071f, 3.313949f, "Appleseed - volPorchStairs");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_75[2], iLocal_75[7]);
	iLocal_75[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.936f, -212.4042f, 103.2606f, 0f, 0f, 18.49427f, 2.66775f, 2.36468f, 2.775306f, "Appleseed - volPorchLeft");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_75[2], iLocal_75[8]);
	iLocal_75[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1396.622f, -210.9611f, 103.2606f, 0f, 0f, 18.49427f, 1.940092f, 2.36468f, 2.775306f, "Appleseed - volPorchRight");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_75[2], iLocal_75[9]);
	POPULATION::_0xB56D41A694E42E86(iLocal_75[2], 0, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[2], 0, 0, 0, -1, -1, 0);
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_476))
	{
		uLocal_476 = PED::_0x4C39C95AE5DB1329(iLocal_75[2], 0, 15);
	}
}

bool func_795()
{
	int iVar0;
	iVar0 = 1;
	if (__LIB_2__::func_763(__LIB_7__::func_964(0, 0, 0), 0))
	{
		iVar0 = 0;
		if (!__LIB_7__::func_933(2))
		{
			if (__LIB_2__::func_598(__LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), Local_479[0 /*7*/], "PED1", joaat("ENDSINWALK"), 0, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(__LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), func_1041(0), 1f, -1, 0.25f, 0, 40000f);
				__LIB_8__::func_183(&(Local_479[0 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), "PED1");
				if (PED::_0x91A5F9CBEBB9D936(uLocal_476))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_476, false);
				}
				__LIB_7__::func_934(2);
				__LIB_0__::func_172(iLocal_75[4]);
				__LIB_8__::func_107(__LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), 0);
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
				{
					iLocal_75[4] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1398.9f, -211.1529f, 102.8692f, 0f, 0f, 23.92187f, 3.586092f, 3.967105f, 1.636492f);
				}
			}
		}
		else if (__LIB_0__::func_163(__LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), 713668775))
		{
			if (__LIB_0__::func_94(__LIB_2__::func_963(__LIB_7__::func_964(0, 0, 0)), func_1041(0), 1) < 10f)
			{
				func_691(0, 0, 0, 0);
			}
		}
		else
		{
			func_691(0, 0, 0, 0);
		}
	}
	if (__LIB_2__::func_763(__LIB_7__::func_964(0, 1, 0), 0))
	{
		iVar0 = 0;
		if (!__LIB_7__::func_933(4))
		{
			if (__LIB_2__::func_598(__LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)), Local_479[0 /*7*/], "PED2", joaat("ENDSINWALK"), 0, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(__LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)), func_1041(1), 1f, -1, 0.25f, 0, 40000f);
				__LIB_8__::func_183(&(Local_479[0 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)), "PED2");
				if (PED::_0x91A5F9CBEBB9D936(uLocal_476))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_476, false);
				}
				__LIB_7__::func_934(4);
				__LIB_0__::func_172(iLocal_75[4]);
				__LIB_8__::func_107(__LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)), 0);
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
				{
					iLocal_75[4] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1398.9f, -211.1529f, 102.8692f, 0f, 0f, 23.92187f, 3.586092f, 3.967105f, 1.636492f);
				}
			}
		}
		else if (__LIB_0__::func_163(__LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)), 713668775))
		{
			if (__LIB_0__::func_94(__LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)), func_1041(1), 1) < 10f)
			{
				func_691(0, 1, 0, 0);
			}
		}
		else
		{
			func_691(0, 1, 0, 0);
		}
	}
	if (__LIB_2__::func_763(__LIB_7__::func_964(0, 2, 0), 0))
	{
		iVar0 = 0;
		if (!__LIB_7__::func_933(8))
		{
			if (__LIB_2__::func_598(__LIB_2__::func_963(__LIB_7__::func_964(0, 2, 0)), Local_479[0 /*7*/], "PED3", joaat("ENDSINWALK"), 0, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(__LIB_2__::func_963(__LIB_7__::func_964(0, 2, 0)), func_1041(2), 1f, -1, 0.25f, 0, 40000f);
				__LIB_8__::func_183(&(Local_479[0 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(0, 2, 0)), "PED3");
				if (PED::_0x91A5F9CBEBB9D936(uLocal_476))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_476, false);
				}
				__LIB_7__::func_934(8);
				__LIB_0__::func_172(iLocal_75[4]);
				__LIB_8__::func_107(__LIB_2__::func_963(__LIB_7__::func_964(0, 2, 0)), 0);
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
				{
					iLocal_75[4] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1398.9f, -211.1529f, 102.8692f, 0f, 0f, 23.92187f, 3.586092f, 3.967105f, 1.636492f);
				}
			}
		}
		else if (__LIB_0__::func_163(__LIB_2__::func_963(__LIB_7__::func_964(0, 2, 0)), 713668775))
		{
			if (__LIB_0__::func_94(__LIB_2__::func_963(__LIB_7__::func_964(0, 1, 0)), func_1041(1), 1) < 10f)
			{
				func_691(0, 2, 0, 0);
			}
		}
		else
		{
			func_691(0, 2, 0, 0);
		}
	}
	return iVar0;
}

void func_797()
{
	if (bLocal_2272)
	{
		return;
	}
	if (__LIB_0__::func_383())
	{
		return;
	}
	if (!__LIB_0__::func_6(iLocal_154))
	{
		iLocal_154 = __LIB_1__::func_293(11, 3, 3, -1454557023);
		if (__LIB_0__::func_6(iLocal_154))
		{
			__LIB_1__::func_298(iLocal_154, 1);
		}
	}
	if (__LIB_0__::func_6(iLocal_154))
	{
		if (!__LIB_7__::func_929(16777216))
		{
			if (func_997())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_446))
				{
					__LIB_1__::func_422(&cLocal_446, 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				__LIB_7__::func_903(iLocal_2011, 0);
				if (!__LIB_1__::func_44(iLocal_154))
				{
					__LIB_1__::func_821(iLocal_154, 1, 1);
				}
				__LIB_7__::func_932(16777216);
			}
		}
		else if (!func_997())
		{
			__LIB_7__::func_903(iLocal_2011, 1);
			__LIB_0__::func_769();
			if (__LIB_1__::func_44(iLocal_154))
			{
				__LIB_1__::func_559(iLocal_154, 0, 2);
				__LIB_1__::func_298(iLocal_154, 1);
			}
			__LIB_7__::func_928(16777216);
		}
	}
}

void func_798(int iParam0)
{
	switch (iLocal_585)
	{
		case 0:
			func_1043(0);
			func_405(0, 1, 1);
			iLocal_585 = 4;
			break;
		case 4:
			if (__LIB_8__::func_109(iParam0, 0, 0))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					TASK::_0xE7FA07624574B79A(*iParam0, Global_35, 1, 1, 9999f, 1, 0, 0, 0);
				}
				__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_REASK", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_585 = 5;
			}
			break;
		case 5:
			if (func_258(-3.5f, 1, *iParam0, 0))
			{
				__LIB_8__::func_239(1, 0);
				func_1043(0);
				iLocal_585 = 7;
			}
			break;
		case 7:
			if (!__LIB_8__::func_109(iParam0, 0, 0))
			{
				iLocal_585 = 8;
			}
			switch (iLocal_361)
			{
				case 0:
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_REASK_RESP", Global_35, *iParam0, 0, 0, 1, 1);
					func_405(0, 1, 1);
					iLocal_585 = 8;
					break;
				case 1:
					__LIB_7__::func_928(536870912);
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
					__LIB_7__::func_932(64);
					__LIB_8__::func_82(Local_1614.f_136, 262144);
					__LIB_8__::func_83(Local_1614.f_136, 256);
					func_405(0, 1, 1);
					iLocal_585 = 8;
					break;
			}
			break;
		case 8:
			if (func_258(-3.5f, 1, Global_35, 0))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					TASK::_0x541E5B41DCA45828(*iParam0, 1, 0);
				}
				__LIB_8__::func_239(0, 0);
				func_405(0, 1, 0);
				func_805(0);
				iLocal_585 = 17;
			}
			break;
		case 17:
			break;
	}
}

void func_799(int iParam0)
{
	switch (iLocal_212)
	{
		case 0:
			if (__LIB_3__::func_273(&(Local_1614.f_34), "INPUT_TAKE_GENERIC", 0f, 0f, 0f, 0, joaat("INPUT_CONTEXT_X"), 2.5f, 0, 0, 1, 0, 1, iLocal_75[4], 0, 0, 1, 1, joaat("SHORT_TIMED_EVENT"), 0))
			{
				__LIB_3__::func_623(&Local_156);
				Local_156.f_1 = Global_35;
				Local_156.f_8 = { __LIB_8__::func_33(&(Local_479[2 /*7*/]), "ARTHUR", 0) };
				Local_156.f_19 = __LIB_8__::func_200(&(Local_479[2 /*7*/]), "ARTHUR", 0);
				Local_156.f_17 = 0.15f;
				Local_156.f_18 = 0.2f;
				Local_156.f_14 = { __LIB_8__::func_37() };
				Local_156.f_25 = Local_479[2 /*7*/];
				StringCopy(&(Local_156.f_30), "ARTHUR", 24);
				StringCopy(&(Local_156.f_26), func_482(2), 32);
				__LIB_1__::func_336(&(Local_156.f_23), 26640);
				__LIB_8__::func_131(&Local_1614, 65536);
				func_730(&Local_156, 106);
				__LIB_7__::func_934(16777216);
				__LIB_7__::func_961(&Local_362, 4);
				if (iLocal_593 == 3)
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_FP_FPART", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_212 = 1;
			}
			break;
		case 1:
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (func_730(&Local_156, 106))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1614, 65536);
				__LIB_8__::func_147(&(Local_479[2 /*7*/]), Global_35, "ARTHUR", 1);
				__LIB_8__::func_148(&(Local_479[2 /*7*/]), Local_611.f_690[6 /*12*/].f_8, "MONEY");
				__LIB_8__::func_16(&(Local_479[2 /*7*/]));
				iLocal_212 = 2;
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
			{
				__LIB_0__::func_325(&(uLocal_2097[0]));
				__LIB_1__::func_797(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				iLocal_212 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_800()
{
	if (!__LIB_7__::func_933(128))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_8__::func_210()))
		{
			__LIB_7__::func_934(128);
			func_85();
			func_178();
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(__LIB_8__::func_210()))
	{
		__LIB_7__::func_965(128);
		func_85();
		func_178();
	}
}

void func_805(int iParam0)
{
	__LIB_7__::func_932(536870912);
	func_1014(iParam0, 0, __LIB_2__::func_460(7));
	func_992(iParam0, 0, 0);
	func_1014(iParam0, 1, __LIB_2__::func_460(30));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	__LIB_7__::func_932(268435456);
	__LIB_7__::func_965(536870912);
}

bool func_806(int iParam0)
{
	char[] cVar0[8];
	switch (iLocal_592)
	{
		case 0:
			__LIB_0__::func_172(iLocal_75[4]);
			StringCopy(&(Local_479[0 /*7*/].f_4), "bBreakInternalLoop", 24);
			__LIB_8__::func_108(&(Local_1614.f_35), "LCMP_IG_S3HELP", 0);
			__LIB_8__::func_108(&(Local_1614.f_35), "LCMP_IG_S3MAN", 0);
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[2]))
			{
				func_792();
				__LIB_8__::func_147(&(Local_479[0 /*7*/]), *iParam0, "FOREMAN", 1);
				__LIB_8__::func_147(&(Local_479[0 /*7*/]), Global_35, "Arthur", 1);
				__LIB_8__::func_16(&(Local_479[0 /*7*/]));
			}
			func_1061(0, 8f);
			func_405(0, 1, 0);
			__LIB_8__::func_239(1, 1);
			func_773(0);
			__LIB_8__::func_151(&(Local_479[0 /*7*/]), func_790(iLocal_400));
			__LIB_3__::func_623(&Local_156);
			Local_156.f_1 = Global_35;
			Local_156.f_17 = 0.15f;
			Local_156.f_18 = 0.2f;
			StringCopy(&(Local_156.f_30), "Arthur", 24);
			Local_156.f_25 = Local_479[0 /*7*/];
			__LIB_1__::func_336(&(Local_156.f_23), 24576);
			iLocal_592 = 1;
			break;
		case 1:
			if (iLocal_361 == 0 || __LIB_1__::func_205(Global_35, iLocal_75[2], 1, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				if ((!__LIB_7__::func_923(8388608) && iLocal_361 == 0) && __LIB_1__::func_205(Global_35, iLocal_75[2], 1, 0))
				{
					__LIB_3__::func_600(Global_35, *iParam0, "GREET_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_7__::func_922(8388608);
				}
				if (!__LIB_7__::func_929(128))
				{
					func_405(0, 0, 1);
					__LIB_8__::func_239(1, 0);
					if (__LIB_1__::func_205(Global_35, iLocal_75[8], 1, 0))
					{
						iLocal_400 = 1;
					}
					else if (__LIB_1__::func_205(Global_35, iLocal_75[9], 1, 0))
					{
						iLocal_400 = 2;
					}
					else
					{
						iLocal_400 = 0;
					}
					Local_156.f_8 = { func_1062(iLocal_400) };
					Local_156.f_19 = func_1063(iLocal_400);
					__LIB_8__::func_151(&(Local_479[0 /*7*/]), func_790(iLocal_400));
					StringCopy(&(Local_156.f_26), func_790(iLocal_400), 32);
					__LIB_7__::func_932(128);
				}
				__LIB_7__::func_922(4096);
				__LIB_7__::func_922(2);
				PED::SET_PED_RESET_FLAG(Global_35, 129, true);
				MAP::DISPLAY_RADAR(false);
				__LIB_8__::func_131(&Local_1614, 65536);
				if (func_730(&Local_156, 129))
				{
					__LIB_0__::func_769();
					func_1061(0, -1082130432 /* Float: -1f */);
					__LIB_8__::func_239(0, 0);
					func_405(0, 1, 1);
					iLocal_592 = 4;
				}
			}
			break;
		case 4:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_7__::func_929(128))
			{
				__LIB_7__::func_932(128);
			}
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			if (__LIB_8__::func_34(&(Local_479[0 /*7*/])) || __LIB_8__::func_10(&(Local_479[0 /*7*/]), func_790(iLocal_400)))
			{
				if (__LIB_7__::func_923(16))
				{
					__LIB_8__::func_111("LCMP_IG_S3MAN", 0);
					cVar0 = "LCMP_IG_S3HELP";
				}
				else
				{
					__LIB_8__::func_111("LCMP_IG_S3HELP", 0);
					cVar0 = "LCMP_IG_S3MAN";
				}
				__LIB_13__::func_879(&(Local_1614.f_35), cVar0, *iParam0, Global_35, 0, 0, 1, 1);
				if (!__LIB_8__::func_10(&(Local_479[0 /*7*/]), func_790(iLocal_400)))
				{
					__LIB_8__::func_240(&(Local_479[0 /*7*/]), 1, 1);
				}
				else
				{
					__LIB_8__::func_192(&(Local_479[0 /*7*/]), &(Local_479[0 /*7*/].f_4));
				}
				iLocal_592 = 5;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam0, 0f);
			if (__LIB_2__::func_598(*iParam0, Local_479[0 /*7*/], "FOREMAN", 0, 0, 1, 0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *iParam0, 0, -1f, -1f, -1f);
				__LIB_7__::func_965(67108864);
				__LIB_1__::func_539();
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1614, 65536);
				PED::FORCE_PED_MOTION_STATE(*iParam0, joaat("MOTIONSTATE_IDLE"), false, 0, false);
				__LIB_7__::func_952(&(Local_479[0 /*7*/]));
				iLocal_592 = 6;
			}
			break;
		case 6:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (func_258(-3.5f, 1, *iParam0, 1))
			{
				__LIB_7__::func_941(4096);
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF", "ATTACKING_WORKERS_FM", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_S3_AW", *iParam0, Global_35, 0, 0, 1, 1);
				func_108(1);
				iLocal_592 = 7;
			}
			break;
		case 7:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam0, 0f);
			if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
				return true;
			}
			break;
	}
	return false;
}

void func_807(int iParam0)
{
	func_1014(iParam0, 0, __LIB_2__::func_460(0));
	func_992(iParam0, 0, 1);
	func_1014(iParam0, 1, __LIB_2__::func_460(1));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	__LIB_7__::func_932(268435456);
	__LIB_7__::func_965(536870912);
}

char* func_811()
{
	return "lcmp_WolfTrail";
}

void func_812()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_7__::func_933(262144) && __LIB_1__::func_205(Global_35, iLocal_75[6], 1, 0))
	{
		__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_3_START", 0);
		__LIB_7__::func_934(262144);
	}
	if (__LIB_7__::func_923(536870912) && !ENTITY::IS_ENTITY_DEAD(iLocal_2125[0]))
	{
		PED::SET_PED_RESET_FLAG(iLocal_2125[0], 170, true);
	}
	if (!__LIB_7__::func_923(536870912) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_811()))
	{
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar1]))
			{
				iVar0 = iLocal_2125[iVar1];
			}
			else
			{
				iVar1++;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 170, true);
			PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iVar0, 0);
			__LIB_11__::func_52(iVar0, func_811(), 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1);
		}
		OBJECT::_0xA22712E8471AA08E(Local_611.f_690[0 /*12*/].f_8, 1, 0);
		OBJECT::_0xA22712E8471AA08E(Local_611.f_690[1 /*12*/].f_8, 1, 0);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), Local_611.f_690[0 /*12*/].f_8, 0);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), Local_611.f_690[1 /*12*/].f_8, 0);
		PLAYER::_0x6ECFC621A168424C(Local_611.f_690[0 /*12*/].f_8, Local_611.f_690[0 /*12*/].f_8, 0, 0);
		PLAYER::_0x6ECFC621A168424C(Local_611.f_690[1 /*12*/].f_8, Local_611.f_690[1 /*12*/].f_8, 0, 0);
		MISC::_0x870708A6E147A9AD(Local_611.f_690[0 /*12*/].f_8, "", 15f, 15f, 0, 0, 0, 0, 0, -1);
		MISC::_0x870708A6E147A9AD(Local_611.f_690[1 /*12*/].f_8, "", 15f, 15f, 0, 0, 0, 0, 0, -1);
		__LIB_7__::func_922(536870912);
	}
	if (((__LIB_7__::func_908(Local_1614.f_136, 2048) || MAP::DOES_BLIP_EXIST(iLocal_2011)) && !__LIB_7__::func_923(1073741824 /* Float: 2f */)) && (((__LIB_7__::func_908(Local_1614.f_136, 2048) || __LIB_3__::func_332(func_490(0, 2), 1) < 10f) || __LIB_2__::func_269(iLocal_2077[2], 45f)) || (func_1066(Global_35, func_811(), 4f, 0f, 0) && PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))))
	{
		__LIB_1__::func_539();
		__LIB_2__::func_246(&uLocal_391);
		if (!__LIB_7__::func_908(Local_1614.f_136, 2048))
		{
			__LIB_8__::func_225(func_490(0, 2), &uLocal_391, 0f, 0f, 0f, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, 2000, 4000, 1000, 1);
			func_734("LOG_OBJ02B", 1);
			__LIB_0__::func_325(&iLocal_2011);
		}
		__LIB_7__::func_934(33554432);
		__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_3_TRAIL", 0);
		__LIB_7__::func_922(1073741824 /* Float: 2f */);
	}
	if ((__LIB_7__::func_908(Local_1614.f_136, 2048) || __LIB_7__::func_923(1073741824 /* Float: 2f */)) && !__LIB_7__::func_933(16384))
	{
		if (__LIB_4__::func_91(&uLocal_391))
		{
			if (!__LIB_0__::func_899(&(vLocal_557[4 /*3*/])))
			{
				__LIB_2__::func_259(&(vLocal_557[4 /*3*/]));
			}
			if (__LIB_3__::func_514(&(vLocal_557[4 /*3*/]), 0.5f))
			{
				if (!__LIB_7__::func_929(2048))
				{
					__LIB_2__::func_246(&uLocal_391);
					__LIB_7__::func_932(2048);
				}
				iVar2 = 2;
			}
			else if (__LIB_3__::func_514(&(vLocal_557[4 /*3*/]), 0.25f))
			{
				if (!__LIB_7__::func_929(1024))
				{
					__LIB_2__::func_246(&uLocal_391);
					__LIB_7__::func_932(1024);
				}
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
		}
		__LIB_8__::func_225(func_490(iVar2, 2), &uLocal_391, 0f, 0f, 0f, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, 2000, 4000, 1000, 1);
		if (!MAP::DOES_BLIP_EXIST(iLocal_2011) && (__LIB_7__::func_908(Local_1614.f_136, 2048) || __LIB_2__::func_269(iLocal_2077[2], 45f)))
		{
			__LIB_8__::func_82(Local_1614.f_136, 2048);
			__LIB_7__::func_934(33554432);
			__LIB_4__::func_78(__LIB_7__::func_989(), 20f, &iLocal_2011, -308585968);
			__LIB_7__::func_934(16384);
		}
	}
}

void func_813()
{
	if (!__LIB_1__::func_565(&uLocal_1911))
	{
		__LIB_3__::func_414(&uLocal_1911, func_490(0, 2), 10f, 2, 30, 0);
	}
	func_1071(2, 0);
	func_1071(3, 1);
	if (iLocal_211 <= 10)
	{
		iLocal_211++;
	}
}

void func_817()
{
	if (!__LIB_7__::func_923(67108864) && __LIB_3__::func_332(__LIB_7__::func_989(), 1) < 5f)
	{
		__LIB_7__::func_922(67108864);
	}
}

void func_818(int iParam0, float fParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(fParam1->f_3), 1))
	{
		__LIB_4__::func_498(fParam1);
		if (__LIB_4__::func_77(iParam0, iParam7, fParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_4__::func_97(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_3__::func_518(fParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam6, iParam9);
	}
}

int func_819()
{
	if (__LIB_7__::func_923(67108864) && __LIB_18__::func_74(&iLocal_2125, 20f))
	{
		return 1;
	}
	return 0;
}

int func_820(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_3, 1) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 1;
	}
	return 0;
}

bool func_821()
{
	float fVar0;
	float fVar1;
	fVar0 = __LIB_2__::func_118(iLocal_2077[2], 1, 0);
	fVar1 = __LIB_2__::func_118(iLocal_2125[0], 1, 0);
	if (fVar1 < fVar0 && fVar0 > 4f)
	{
		return true;
	}
	return false;
}

Vector3 func_823(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -1466.726f, -369.6495f, 127.248f;
				case 1:
					return -1480.629f, -364.9494f, 128.4468f;
				case 2:
					return -1413.718f, -331.6883f, 110.3775f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1470.81f, -361.7202f, 122.9849f;
				case 1:
					return -1471.584f, -361.9453f, 123.5429f;
				case 2:
					return -1472.441f, -362.3824f, 124.1044f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1413.718f, -331.6883f, 110.3775f;
				case 1:
					return -1413.718f, -331.6883f, 110.3775f;
				case 2:
					return -1413.718f, -331.6883f, 110.3775f;
				default:
					break;
			}
			break;
	}
	return __LIB_7__::func_989();
}

bool func_826(float fParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_1__::func_205(Global_35, iLocal_75[3], 1, 0))
	{
		return false;
	}
	if (__LIB_7__::func_933(32))
	{
		return true;
	}
	if (func_226(&(vLocal_557[2 /*3*/]), fParam0))
	{
		return true;
	}
	iVar0 = func_1079(&iLocal_2125, iParam1, iParam2, 0);
	if (iVar0 <= 1)
	{
		return true;
	}
	return false;
}

void func_827(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2125[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2125[iVar0]) || ENTITY::_IS_ENTITY_FROZEN(iLocal_2125[iVar0]))
			{
				func_267(iLocal_2125[iVar0], Local_611.f_369[iVar0 /*32*/].f_6, Local_611.f_369[iVar0 /*32*/].f_9, 2, 1073741824 /* Float: 2f */);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2125[iVar0], false);
			}
			func_783(&(iLocal_2125[iVar0]));
			TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
			TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_2125[iVar0], iLocal_196);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
			if (!MAP::DOES_BLIP_EXIST(uLocal_2136[iVar0]))
			{
				__LIB_2__::func_73(iLocal_2125[iVar0], &(uLocal_2136[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			}
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_2125[iVar0], "HOWL_SHORT", false);
		}
		iVar0++;
	}
	FLOCK::_0xA881F5C77A560906(10f);
	FLOCK::_0x706B434FEFAD6A24(1f);
}

bool func_829(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_593)
	{
		case 0:
			if (STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR06X")))
			{
				if (!__LIB_2__::func_763(Local_1614.f_138, 0))
				{
					__LIB_8__::func_123(Local_1614.f_138, 1, 1);
				}
				__LIB_8__::func_147(&(Local_479[1 /*7*/]), *iParam0, "FOREMAN", 1);
				__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[4 /*12*/].f_8, "BOOK");
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_611.f_690[25 /*12*/].f_8, false);
				func_739(0, 0, 1);
				func_405(0, 1, 1);
				__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[25 /*12*/].f_8, "CHAIR");
				__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[3 /*12*/].f_8, "PEN");
				__LIB_8__::func_148(&(Local_479[1 /*7*/]), Local_611.f_690[6 /*12*/].f_8, "MONEY");
				StringCopy(&(Local_479[1 /*7*/].f_4), "bBreakInternalLoop", 24);
				__LIB_8__::func_26(&(Local_479[1 /*7*/]), "PBL_COMBAT");
				__LIB_8__::func_16(&(Local_479[1 /*7*/]));
				iLocal_593 = 1;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (__LIB_1__::func_205(Global_35, iLocal_75[0], 1, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_0__::func_769();
				__LIB_7__::func_922(4096);
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
				__LIB_8__::func_192(&(Local_479[1 /*7*/]), "bBreakInternalLoop");
				if (PED::_IS_PED_CARRYING(Global_35))
				{
					iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
					if (ENTITY::IS_ENTITY_A_PED(iVar0))
					{
						iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
						if (__LIB_1__::func_248(iVar1, &iLocal_2125))
						{
							__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPGNB", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else if (iVar1 == iLocal_2077[2] || iVar1 == iLocal_2077[3])
						{
							__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPGNC", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPGN", *iParam0, Global_35, 0, 0, 1, 1);
						}
					}
					else
					{
						iVar2 = __LIB_16__::func_179(iVar0);
						if ((iVar2 == joaat("PROVISION_WOLF_FUR") || iVar2 == joaat("PROVISION_WOLF_FUR_POOR")) || iVar2 == joaat("PROVISION_WOLF_FUR_PRISTINE"))
						{
							__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPGND", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPGN", *iParam0, Global_35, 0, 0, 1, 1);
						}
					}
				}
				else
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPGN", *iParam0, Global_35, 0, 0, 1, 1);
				}
				__LIB_2__::func_259(&(vLocal_557[3 /*3*/]));
				iLocal_593 = 2;
			}
			break;
		case 2:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -885630237))
			{
				__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPMT", *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_8__::func_108(&(Local_1614.f_35), "LCMP_FP_FPART", 0);
				__LIB_0__::func_325(&(uLocal_2097[0]));
				__LIB_2__::func_73(Local_611.f_690[6 /*12*/].f_8, &(uLocal_2097[0]), 2098831270, 580546400, 0, "LOG_BLIP_MONEY");
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1399.851f, -208.337f, 103.0584f, 0f, 0f, 20.63401f, 2.916667f, 1.934417f, 2.383611f, "EA Appleseed - volMoney");
				__LIB_7__::func_928(536870912);
				func_405(0, 1, 1);
				func_739(0, 0, 1);
				iLocal_593 = 3;
			}
			break;
		case 3:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (__LIB_8__::func_24(&(Local_479[1 /*7*/]), "bBreakInternalLoop"))
			{
				__LIB_8__::func_196(&(Local_479[1 /*7*/]), "bBreakInternalLoop");
				__LIB_8__::func_26(&(Local_479[1 /*7*/]), "PBL_IMPATIENT");
			}
			if (__LIB_0__::func_899(&(vLocal_557[3 /*3*/])) && __LIB_1__::func_592(&(vLocal_557[3 /*3*/])) > 30000)
			{
				iLocal_593 = 5;
			}
			if (!__LIB_1__::func_322("LCMP_IG_FPMT"))
			{
				__LIB_7__::func_934(8388608);
			}
			if (__LIB_7__::func_933(16777216))
			{
				__LIB_8__::func_151(&(Local_479[1 /*7*/]), "PBL_YELL");
				__LIB_8__::func_82(Local_1614.f_136, 8);
				__LIB_8__::func_131(&Local_1614, 128);
				__LIB_8__::func_85(Local_1614.f_136, 8);
				__LIB_8__::func_253(&Local_1614);
				__LIB_8__::func_93(Local_1614.f_136, 1);
				func_1081(iLocal_154, 1, 1, 0, 1);
				__LIB_8__::func_227(60, 1);
				iLocal_593 = 6;
			}
			if (!__LIB_1__::func_322("LCMP_IG_FPMT") && !__LIB_1__::func_205(Global_35, iLocal_75[0], 1, 0))
			{
				__LIB_8__::func_151(&(Local_479[1 /*7*/]), "PBL_YELL");
				__LIB_8__::func_82(Local_1614.f_136, 8);
				__LIB_8__::func_131(&Local_1614, 128);
				__LIB_8__::func_85(Local_1614.f_136, 8);
				__LIB_8__::func_253(&Local_1614);
				__LIB_8__::func_93(Local_1614.f_136, 1);
				func_1081(iLocal_154, 1, 1, 0, 1);
				__LIB_8__::func_227(60, 1);
				iLocal_593 = 6;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			__LIB_8__::func_191(&(Local_479[1 /*7*/]), "PBL_IMPATIENT", 1);
			__LIB_8__::func_192(&(Local_479[1 /*7*/]), "bBreakInternalLoop");
			__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPDW", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_0__::func_37(&(vLocal_557[3 /*3*/]));
			iLocal_593 = 3;
			break;
		case 6:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (!__LIB_1__::func_205(Global_35, iLocal_75[0], 1, 0))
			{
				if (__LIB_7__::func_908(1, 2) && func_258(-3.5f, 1, Global_35, 1))
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_FP_LATER", *iParam0, Global_35, 0, 0, 1, 1);
				}
				__LIB_7__::func_941(4096);
				iLocal_593 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_763(Local_1614.f_138, 0))
			{
				__LIB_8__::func_123(Local_1614.f_138, 1, 1);
			}
			if (__LIB_8__::func_34(&(Local_479[1 /*7*/])))
			{
				__LIB_8__::func_240(&(Local_479[1 /*7*/]), 1, 1);
				if (__LIB_2__::func_117(64))
				{
					__LIB_8__::func_108(&(Local_1614.f_35), "LCMP_IG_FPACT2", 0);
				}
				else
				{
					__LIB_8__::func_108(&(Local_1614.f_35), "LCMP_IG_FPACT2A", 0);
				}
				iLocal_593 = 8;
			}
			break;
		case 8:
			if (__LIB_8__::func_24(&(Local_479[1 /*7*/]), "bBreakInternalLoop"))
			{
				__LIB_8__::func_196(&(Local_479[1 /*7*/]), "bBreakInternalLoop");
			}
			if (__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), -1398.91f, -210.66f, 101.88f, 5f, 0))
			{
				if (__LIB_2__::func_117(64))
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPACT2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_13__::func_879(&(Local_1614.f_35), "LCMP_IG_FPACT2A", *iParam0, Global_35, 0, 0, 1, 1);
				}
				iLocal_593 = 9;
			}
			break;
		case 9:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 752883333))
			{
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), *iParam0, 1);
			}
			if (func_258(0, 1, 0, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_830(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_1__::func_902(11, &iVar0, &iVar1, 0, 0);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if ((__LIB_0__::func_29(iVar2) && __LIB_2__::func_767(iVar2, 0)) && iVar2 != 807)
		{
			iVar3 = __LIB_2__::func_963(iVar2);
			if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && iVar3 != iParam4) && __LIB_0__::func_94(iVar3, vParam0, 1) < fParam3)
			{
				PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(iVar2), "EventAreas/Appleseed/LCMP_Workers");
			}
		}
		iVar2++;
	}
	__LIB_7__::func_922(8);
}

void func_833(int iParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(iLocal_2147[*iParam0])))
	{
		iVar0 = __LIB_2__::func_963(iLocal_2147[*iParam0]);
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
		if (__LIB_8__::func_70(iLocal_2147[*iParam0]))
		{
			func_991(iLocal_2147[*iParam0]);
		}
		else
		{
			__LIB_2__::func_753(iLocal_2147[*iParam0], 0, 1, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
		}
	}
	__LIB_2__::func_56(iVar0, 1, 1);
}

bool func_843(int iParam0)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_450[iParam0]))
	{
		return false;
	}
	return OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_450[iParam0]) == 5;
}

int func_957(int* iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
			__LIB_2__::func_259(&(iParam1->f_13));
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
					if (__LIB_8__::func_340(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_957(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_8__::func_341(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_1154(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
				if (func_1158(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_3__::func_272(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1154(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_341(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (func_1158(iParam0, iParam1, fParam4, bVar6))
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

void func_958(int* iParam0, var uParam1, int* iParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = __LIB_2__::func_511(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			__LIB_3__::func_600(Global_35, *iParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_976(int iParam0, int iParam1, int iParam2)
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
		iLocal_473[iParam2] = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1300850144))
	{
		iLocal_473[iParam2] = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1011860333))
	{
		iLocal_473[iParam2] = 2;
	}
	else
	{
		iLocal_473[iParam2] = -1;
	}
}

bool func_981(int iParam0, int iParam1)
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
	if (func_1168(iParam1))
	{
		return false;
	}
	return true;
}

void func_982(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_693(iParam0);
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

bool func_984(int iParam0, bool bParam1)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_450[iParam0]))
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
	if (!__LIB_0__::func_899(&(vLocal_557[0 /*3*/])))
	{
		return false;
	}
	if (__LIB_1__::func_592(&(vLocal_557[0 /*3*/])) <= 5000)
	{
		return false;
	}
	return true;
}

void func_988(int iParam0)
{
	int iVar0[30];
	int iVar31;
	int iVar32;
	int iVar33;
	iVar31 = 0;
	iVar31 = func_302(&iVar0);
	iVar32 = (810 + iParam0);
	iVar33 = __LIB_2__::func_963(iVar32);
	if (!ENTITY::IS_ENTITY_DEAD(iVar33))
	{
		iVar0[iVar31] = iVar33;
		iVar31++;
	}
	if (!__LIB_7__::func_923(32))
	{
		func_1170(&iVar0, &iParam0, 1);
	}
	else
	{
		func_1171(iLocal_2077[0], &iVar0);
	}
}

void func_991(int iParam0)
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
	iVar2 = func_693(iVar1);
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
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_462[iVar1]))
			{
				TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_462[iVar1], 0, 0, true, false, 0, false, -1f, false);
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

void func_992(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_2__::func_411(&(Local_256[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

void func_993(int iParam0, int iParam1)
{
	vector3 vVar0;
	if (__LIB_8__::func_24(&(Local_479[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop"))
	{
		__LIB_8__::func_196(&(Local_479[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
	}
	func_1175(iParam0, iParam1);
	if (iLocal_191[iParam1] < 3)
	{
		if (PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 330, true);
			vVar0 = { __LIB_8__::func_214(iParam0, __LIB_8__::func_161(iParam1), __LIB_8__::func_162(iParam1), iLocal_470[iParam1], 1) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				TASK::TASK_PLAY_ANIM(*iParam0, "script_proc@event_area@appleseed@boom_lift", &vVar0, 2f, -2f, -1, 16, 0f, false, 0, false, 0, false);
			}
			iLocal_191[iParam1] = 3;
		}
		else if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			vVar0 = { __LIB_8__::func_214(iParam0, __LIB_8__::func_161(iParam1), __LIB_8__::func_162(iParam1), iLocal_470[iParam1], 0) };
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
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_611.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[13 /*12*/].f_8, -1064143891))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_479[__LIB_8__::func_160(iParam1) /*7*/], 1f);
				__LIB_8__::func_192(&(Local_479[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_479[__LIB_8__::func_160(iParam1) /*7*/], __LIB_8__::func_163(iParam1), 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_479[__LIB_8__::func_160(iParam1) /*7*/], -1f);
				__LIB_8__::func_192(&(Local_479[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 2;
			}
			break;
		case 2:
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_611.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[13 /*12*/].f_8, -1064143891))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_479[__LIB_8__::func_160(iParam1) /*7*/], 1f);
				__LIB_8__::func_192(&(Local_479[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_479[__LIB_8__::func_160(iParam1) /*7*/], __LIB_8__::func_164(iParam1), 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_479[__LIB_8__::func_160(iParam1) /*7*/], 1f);
				__LIB_8__::func_192(&(Local_479[__LIB_8__::func_160(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 1;
			}
			break;
		case 3:
			if (!PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()) && !PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_611.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_611.f_690[13 /*12*/].f_8, -1064143891))
				{
					iLocal_191[iParam1] = 4;
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_RATE(Local_479[__LIB_8__::func_160(iParam1) /*7*/]) > 0f)
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
			if (iLocal_591 < 14)
			{
				iLocal_591 = 14;
			}
			break;
		case 5:
			break;
	}
}

bool func_997()
{
	if (!__LIB_1__::func_205(Global_35, iLocal_75[18], 1, 0))
	{
		return false;
	}
	if (!__LIB_7__::func_908(Local_1614.f_136, 256))
	{
		return false;
	}
	if (__LIB_7__::func_908(Local_1614.f_136, 8))
	{
		return false;
	}
	return true;
}

bool func_1000(var uParam0, int iParam1)
{
	if (func_226(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!__LIB_0__::func_71(uParam0->f_1) && !__LIB_0__::func_163(uParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !__LIB_0__::func_163(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_1001(var uParam0, int iParam1)
{
	var uVar0;
	if (func_226(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!__LIB_0__::func_27(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!__LIB_1__::func_750(&uVar0))
	{
		return true;
	}
	return false;
}

bool func_1003(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (func_226(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (__LIB_0__::func_27(uParam0->f_23, 512) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return true;
	}
	return false;
}

bool func_1005(var uParam0, int iParam1)
{
	if (func_226(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 4096) && __LIB_0__::func_163(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 256))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

void func_1014(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_1__::func_484(Local_256[iParam0 /*52*/][iParam1 /*17*/].f_6, sParam2, 0);
	Local_256[iParam0 /*52*/][iParam1 /*17*/].f_5 = sParam2;
}

void func_1015(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_3__::func_158(&(Local_256[iParam0 /*52*/][iParam1 /*17*/]), bParam2);
}

int func_1029(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = __LIB_5__::func_76(iParam0);
		if (!__LIB_0__::func_144(iVar0, 0))
		{
			iVar0 = __LIB_16__::func_179(iParam0);
		}
	}
	else
	{
		iVar0 = __LIB_16__::func_179(iParam0);
	}
	return iVar0;
}

void func_1036(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	if (iParam1 >= *iParam0 || iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 >= *iParam0 || iParam2 < iParam1)
	{
		iParam2 = (*iParam0 - 1);
	}
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		if (__LIB_7__::func_906(iParam0[iVar1], iParam3, iParam4, iParam5, 0, bParam6, 0, 0))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		__LIB_6__::func_675();
	}
}

bool func_1038(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;
	if (!__LIB_0__::func_71(iParam0))
	{
		if (bParam11)
		{
			iVar0 = __LIB_0__::func_398(7);
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(iParam0);
		}
		if (!__LIB_0__::func_272(iVar0, 1) || (!(VOLUME::_DOES_VOLUME_EXIST(iParam5) && __LIB_1__::func_205(iVar0, iParam5, 1, 0)) && __LIB_0__::func_665(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (__LIB_1__::func_16(iVar0) && __LIB_0__::func_402(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*iParam1 = __LIB_1__::func_854(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
				{
					*iParam1 = iVar0;
				}
			}
			else
			{
				*iParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			return true;
		}
		if (__LIB_0__::func_272(*iParam1, 1))
		{
			if (!(__LIB_0__::func_163(*iParam1, 518218985) || __LIB_0__::func_163(*iParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*iParam1, true, false);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*iParam1, 0);
				POPULATION::_0xF74E134F40192884(*iParam1, 2);
				if (!__LIB_0__::func_86(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, vParam2, fParam12, -1, 0.25f, 0, 40000f);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, VOLUME::_GET_VOLUME_COORDS(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && __LIB_0__::func_86(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

Vector3 func_1041(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1403.075f, -238.4616f, 98.94506f;
		case 1:
			return -1412.607f, -248.3197f, 99.1035f;
		case 2:
			return -1426.356f, -251.0305f, 99.57942f;
		default:
			break;
	}
	return __LIB_1__::func_977();
}

void func_1043(int iParam0)
{
	__LIB_7__::func_932(536870912);
	func_1014(iParam0, 0, __LIB_2__::func_460(7));
	func_992(iParam0, 0, 1);
	func_1014(iParam0, 1, __LIB_2__::func_460(30));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	__LIB_7__::func_932(268435456);
	__LIB_7__::func_965(536870912);
}

void func_1061(int iParam0, float fParam1)
{
	if (fParam1 < 0f)
	{
		__LIB_4__::func_168(&(Local_256[iParam0 /*52*/][0 /*17*/]), 0);
		__LIB_4__::func_168(&(Local_256[iParam0 /*52*/][1 /*17*/]), 0);
		__LIB_4__::func_168(&(Local_256[iParam0 /*52*/][2 /*17*/]), 0);
	}
	else
	{
		__LIB_3__::func_362(&(Local_256[iParam0 /*52*/][0 /*17*/]), fParam1);
		__LIB_3__::func_362(&(Local_256[iParam0 /*52*/][1 /*17*/]), fParam1);
		__LIB_3__::func_362(&(Local_256[iParam0 /*52*/][2 /*17*/]), fParam1);
	}
}

Vector3 func_1062(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case default:
			return -1398.377f, -212.7954f, 102.8864f;
		case 1:
			return -1399.682f, -212.1699f, 102.8864f;
		case 2:
			return -1396.998f, -211.1999f, 102.8864f;
			default:
				break;
	}
}

float func_1063(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case default:
			return 7.28f;
		case 1:
			return -53.73f;
		case 2:
			return 83.99f;
			default:
				break;
	}
}

int func_1066(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	vector3 vVar1;
	iParam4 = iParam4;
	fParam3 = fParam3;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &iVar0))
	{
		return 0;
	}
	if (iVar0 > -1)
	{
		if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, iVar0, &vVar1))
		{
			if (__LIB_0__::func_266(iParam0, vVar1, fParam2, 1, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1071(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	iVar0 = __LIB_0__::func_55(iParam0 == 2, 0, 1);
	if (iLocal_211 == 0)
	{
		PED::APPLY_PED_DAMAGE_PACK(iLocal_2077[iParam0], "PD_Animal_melee_kill", 1f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_2077[iParam0], "PD_Animal_melee_head", 1f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_2077[iParam0], "PD_Animal_melee_body", 1f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_2077[iParam0], "PD_Animal_attack_left", 1f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_2077[iParam0], "PD_Animal_attack_right", 1f, 1f);
		GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(iLocal_2077[iParam0], true, false), false);
		__LIB_8__::func_165(&(Local_401[iVar0 /*22*/]), 0.175f, 1048576000 /* Float: 0.25f */);
		func_1251(&(Local_401[iVar0 /*22*/]), 0.15f, 0f, 0f, 0.2f, 0.5f, 1048576000 /* Float: 0.25f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
		func_1252(&(Local_401[iVar0 /*22*/]), "VFXBLOODINFO_PISTOL_LARGE", 0.75f, 0.1f);
	}
	else if (iLocal_211 < 10)
	{
		fVar1 = __LIB_0__::func_514((iLocal_211 % 2) == 0, 0.5f, -0.5f);
		func_1253(&(Local_401[iVar0 /*22*/]), func_490((iLocal_211 - 1), iParam0), func_490(iLocal_211, iParam0), 0.5f, fVar1);
		__LIB_19__::func_137(&(Local_401[iVar0 /*22*/]), 0f, 0f, 0f, 0f, 16);
	}
	else if (iLocal_211 == 10)
	{
		func_1253(&(Local_401[iVar0 /*22*/]), func_490(9, iParam0), Local_611.f_15[iParam0 /*32*/].f_6, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
		__LIB_19__::func_137(&(Local_401[iVar0 /*22*/]), 0f, 0f, 0f, 0f, 16);
		vVar2 = { func_490(0, iParam0) };
		vVar2.f_2 = (vVar2.z - 0.03f);
		ENTITY::SET_ENTITY_COORDS(Local_611.f_690[iParam1 /*12*/].f_8, vVar2, true, false, true, true);
		ENTITY::SET_ENTITY_COLLISION(Local_611.f_690[iParam1 /*12*/].f_8, false, false);
	}
}

int func_1079(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = *iParam0;
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam1 >= iVar1)
	{
		iParam1 = (iVar1 - 1);
	}
	if (iParam2 < 0 || iParam2 >= iVar1)
	{
		iParam2 = (iVar1 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
		{
			iVar2++;
		}
		iVar0++;
	}
	if (bParam3)
	{
	}
	return iVar2;
}

void func_1081(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		__LIB_8__::func_366(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_8__::func_367(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
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
						func_1281(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_1281(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_1281(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_1281(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_1281(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_1281(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_1281(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_1281(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_1281(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_1281(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_1281(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_1281(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_1281(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1283();
						func_1284(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_1281(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_1081(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_1081(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_1081(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_1281(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1319();
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
							func_1281(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_1154(int* iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_3__::func_161(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
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
						__LIB_2__::func_259(&(iParam1->f_18));
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

bool func_1158(int* iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_2__::func_259(&(iParam1->f_18));
			return false;
		}
		else if (__LIB_0__::func_899(&(iParam1->f_18)))
		{
			__LIB_0__::func_37(&(iParam1->f_18));
			return false;
		}
	}
	if (!__LIB_0__::func_899(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_226(&(iParam1->f_18), fParam2);
	return true;
}

bool func_1168(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_2163)
	{
		if (iParam0 == iLocal_2147[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1170(int iParam0, int iParam1, bool bParam2)
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
	__LIB_1__::func_902(Local_1614.f_137, &iVar4, &iVar5, 0, 0);
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
						func_1385(iVar3, -1);
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
							func_1385(iVar3, -1);
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
				if (iLocal_2163 >= 15)
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

void func_1171(int iParam0, int iParam1)
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
	__LIB_1__::func_902(Local_1614.f_137, &iVar3, &iVar4, 0, 0);
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
					if (iLocal_2163 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1387(&fVar7);
						}
						else
						{
							fVar1 = -1f;
						}
					}
					if (fVar0 <= fVar1 && !ENTITY::IS_ENTITY_DEAD(iVar27))
					{
						func_1385(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iLocal_2163] = fVar23;
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
				if (iLocal_98 == 2 && !func_1388(813))
				{
					iVar26 = func_1387(&fVar7);
					func_1385(813, iVar26);
					func_474(func_693(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iLocal_2163)
				{
					iVar27 = __LIB_2__::func_963(iLocal_2147[iVar28]);
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

void func_1175(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1389(iParam0);
			break;
		case 1:
			func_1390(iParam0);
			break;
	}
}

void func_1251(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	__LIB_1__::func_336(iParam0, 4);
	iParam0->f_14 = fParam1;
	iParam0->f_15 = fParam2;
	iParam0->f_16 = fParam3;
	iParam0->f_17 = fParam4;
	iParam0->f_18 = fParam5;
	iParam0->f_19 = iParam7;
	iParam0->f_20 = iParam8;
	iParam0->f_21 = iParam6;
}

void func_1252(int iParam0, char* sParam1, float fParam2, float fParam3)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		__LIB_1__::func_336(iParam0, 2);
		iParam0->f_11 = sParam1;
		iParam0->f_12 = fParam2;
		iParam0->f_13 = fParam3;
	}
}

void func_1253(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_8 = fParam8;
}

bool func_1281(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_1471(iParam0, iParam1, bParam2, iParam5))
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
			__LIB_19__::func_148(iVar5);
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
				func_1281(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
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
		__LIB_9__::func_717(28);
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
			if (!func_1494(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
			__LIB_10__::func_444(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_10__::func_445(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_10__::func_446(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_11__::func_618(iParam0);
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
			func_1506(iParam0, iParam1);
			__LIB_19__::func_149(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_11__::func_620(iParam0, 0, 0, 0);
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
						func_1281(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_1281(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_1281(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_1281(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_1281(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_1281(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1281(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_9__::func_717(24);
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
					func_1281(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1281(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_9__::func_725(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_19__::func_154(iParam0);
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
				func_1281(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		func_1539(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_1283()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1547();
	func_1548();
	func_1549();
	func_1550();
	func_1551();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_1284(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1554(iParam0, 1, 1, -142743235, 1);
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

void func_1319()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1579(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_1385(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_2147[iParam1] = iParam0;
	}
	else
	{
		iLocal_2147[iLocal_2163] = iParam0;
		iLocal_2163++;
	}
}

int func_1387(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iLocal_2163)
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

bool func_1388(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_2163)
	{
		if (iLocal_2147[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1389(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1428722195))
		{
			iLocal_470[0] = 0;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1738422014))
		{
			iLocal_470[0] = 1;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1327707782))
		{
			iLocal_470[0] = 2;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1022661161))
		{
			iLocal_470[0] = 3;
		}
		else
		{
			iLocal_470[0] = -1;
		}
	}
}

void func_1390(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1428722195))
		{
			iLocal_470[1] = 0;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1738422014))
		{
			iLocal_470[1] = 1;
		}
		else
		{
			iLocal_470[1] = -1;
		}
	}
}

bool func_1471(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_1__::func_800(iParam0))
		{
			func_1673(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_1494(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!__LIB_1__::func_761(iParam0, &uVar1, 1, 0, 0))
		{
			func_1673(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_708(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					__LIB_1__::func_708(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

void func_1506(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_18__::func_102(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1539(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_455())
	{
		__LIB_0__::func_456(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && __LIB_0__::func_774(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = __LIB_0__::func_356(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1756(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = __LIB_0__::func_54(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || __LIB_0__::func_192(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0));
	}
	__LIB_0__::func_924(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_1547()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1760(0);
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
	func_1760(1);
}

void func_1548()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_1281(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1549()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1763(0);
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
	func_1763(1);
}

void func_1550()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1763(0);
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
	func_1763(1);
}

void func_1551()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_1281(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1281(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1554(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1554(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1554(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1539(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_1554(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		func_1539(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_11__::func_837(iParam0, iParam1);
	return 1;
}

int func_1579(var uParam0, var uParam1, var uParam2, var uParam3)
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
	iVar11 = (func_1789(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_1281(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

void func_1673(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !__LIB_0__::func_214(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && __LIB_1__::func_614(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_1539(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

bool func_1756(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @230; //curOff = 140
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 163
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 186
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_1760(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_1281(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1922(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_1284(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1554(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1926(Var0);
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

void func_1763(bool bParam0)
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
		func_1281(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1281(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1554(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1554(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1554(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1554(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1554(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1554(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1554(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1554(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1554(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1554(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1554(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1789(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1789(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1789(iVar63, -915411861, 1, 0, 0));
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

void func_1922(int iParam0)
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
	func_1554(iParam0, 1, 1, -142743235, 1);
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
		func_1554(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1926(struct<6> Param0)
{
	if (!func_2017(Param0.f_4, 1))
	{
	}
	if (!func_2017(Param0, 1))
	{
	}
	if (!func_2017(Param0.f_2, 1))
	{
	}
	if (!func_2017(Param0.f_5, 1))
	{
	}
	if (!func_2017(Param0.f_3, 1))
	{
	}
	if (!func_2017(Param0.f_1, 1))
	{
	}
}

bool func_2017(int iParam0, int iParam1)
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
				if (func_2017(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2017(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2017(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2017(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

