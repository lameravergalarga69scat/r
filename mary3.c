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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<31> Local_38[14];
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	float fLocal_493 = 0f;
	float fLocal_494 = 0f;
	float fLocal_495 = 0f;
	float fLocal_496 = 0f;
	float fLocal_497 = 0f;
	bool bLocal_498 = false;
	bool bLocal_499 = false;
	bool bLocal_500 = false;
	bool bLocal_501 = false;
	bool bLocal_502 = false;
	bool bLocal_503 = false;
	vector3 vLocal_504 = { 0f, 0f, 0f };
	vector3 vLocal_507 = { 0f, 0f, 0f };
	vector3 vLocal_510 = { 0f, 0f, 0f };
	vector3 vLocal_513 = { 0f, 0f, 0f };
	vector3 vLocal_516 = { 0f, 0f, 0f };
	vector3 vLocal_519 = { 0f, 0f, 0f };
	vector3 vLocal_522 = { 0f, 0f, 0f };
	char* sLocal_525 = NULL;
	char* sLocal_526 = NULL;
	char* sLocal_527 = NULL;
	char* sLocal_528 = NULL;
	char* sLocal_529 = NULL;
	struct<178> Local_530[1];
	struct<18> Local_709[15];
	struct<18> Local_980[6];
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	struct<9> Local_1105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204[2] = { 0, 0 };
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	int iLocal_1222 = 0;
	int iLocal_1223[44] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1268[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1285 = 0;
	int iLocal_1286 = 0;
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
	int iLocal_1301[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	var uLocal_1323 = 2;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 1065353216;
	var uLocal_1333 = 1065353216;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 1065353216;
	var uLocal_1338 = 1065353216;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 1065353216;
	var uLocal_1343 = 1065353216;
	var uLocal_1344 = 0;
	var uLocal_1345 = 1040187392;
	var uLocal_1346 = 1040187392;
	var uLocal_1347 = -1;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = -1082130432;
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
	int iLocal_1366 = 0;
	int iLocal_1367 = 0;
	int iLocal_1368 = 0;
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
	int iLocal_1383 = 0;
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
	var uLocal_1403 = 27;
	var uLocal_1404 = 8;
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
	var uLocal_1425 = -1;
	var uLocal_1426 = 8;
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
	var uLocal_1447 = -1;
	var uLocal_1448 = 8;
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
	var uLocal_1469 = -1;
	var uLocal_1470 = 8;
	var uLocal_1471 = 0;
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
	var uLocal_1492 = 8;
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
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = -1;
	var uLocal_1514 = 8;
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
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = -1;
	var uLocal_1536 = 8;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
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
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = -1;
	var uLocal_1558 = 8;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
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
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = -1;
	var uLocal_1580 = 8;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
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
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = -1;
	var uLocal_1602 = 8;
	var uLocal_1603 = 0;
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
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = -1;
	var uLocal_1624 = 8;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = -1;
	var uLocal_1646 = 8;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = -1;
	var uLocal_1668 = 8;
	var uLocal_1669 = 0;
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
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = -1;
	var uLocal_1690 = 8;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = -1;
	var uLocal_1712 = 8;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
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
	var uLocal_1733 = -1;
	var uLocal_1734 = 8;
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
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = -1;
	var uLocal_1756 = 8;
	var uLocal_1757 = 0;
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
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = -1;
	var uLocal_1778 = 8;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
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
	var uLocal_1799 = -1;
	var uLocal_1800 = 8;
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
	var uLocal_1821 = -1;
	var uLocal_1822 = 8;
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
	var uLocal_1843 = -1;
	var uLocal_1844 = 8;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = -1;
	var uLocal_1866 = 8;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = -1;
	var uLocal_1888 = 8;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = -1;
	var uLocal_1910 = 8;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = -1;
	var uLocal_1932 = 8;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = -1;
	var uLocal_1954 = 8;
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
	var uLocal_1975 = -1;
	var uLocal_1976 = 8;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = -1;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
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
	var uLocal_2036 = 2;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 60;
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
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
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
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 40;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 20;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 14;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 60;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 20;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 20;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 20;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 20;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 20;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 20;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 20;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 20;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 20;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 20;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 20;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 20;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 20;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 20;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 20;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 20;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 20;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 20;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 20;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 20;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 20;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 20;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 20;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 20;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 20;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 20;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 20;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 20;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 20;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 20;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 20;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 20;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 20;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 20;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 20;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 20;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 20;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 20;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 20;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 20;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 20;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 20;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 20;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 20;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 20;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 20;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 20;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 20;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 20;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 20;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 20;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 20;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 20;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 20;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 20;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 20;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 20;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 20;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 20;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 20;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 10;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 10;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 3;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 5;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 5;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 5;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 24;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 30;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 3;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = -1;
	var uLocal_6837 = 0;
	var uLocal_6838 = 5;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 10;
	var uLocal_6850 = 3;
	var uLocal_6851 = 500;
	var uLocal_6852 = 10000;
	var uLocal_6853 = 0;
	var uLocal_6854 = 3;
	var uLocal_6855 = 500;
	var uLocal_6856 = 10000;
	var uLocal_6857 = 0;
	var uLocal_6858 = 3;
	var uLocal_6859 = 500;
	var uLocal_6860 = 10000;
	var uLocal_6861 = 0;
	var uLocal_6862 = 3;
	var uLocal_6863 = 500;
	var uLocal_6864 = 10000;
	var uLocal_6865 = 0;
	var uLocal_6866 = 3;
	var uLocal_6867 = 500;
	var uLocal_6868 = 10000;
	var uLocal_6869 = 0;
	var uLocal_6870 = 3;
	var uLocal_6871 = 500;
	var uLocal_6872 = 10000;
	var uLocal_6873 = 0;
	var uLocal_6874 = 3;
	var uLocal_6875 = 500;
	var uLocal_6876 = 10000;
	var uLocal_6877 = 0;
	var uLocal_6878 = 3;
	var uLocal_6879 = 500;
	var uLocal_6880 = 10000;
	var uLocal_6881 = 0;
	var uLocal_6882 = 3;
	var uLocal_6883 = 500;
	var uLocal_6884 = 10000;
	var uLocal_6885 = 0;
	var uLocal_6886 = 3;
	var uLocal_6887 = 500;
	var uLocal_6888 = 10000;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 3;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = -1;
	var uLocal_6902 = 0;
	var uLocal_6903 = 5;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 10;
	var uLocal_6915 = 3;
	var uLocal_6916 = 500;
	var uLocal_6917 = 10000;
	var uLocal_6918 = 0;
	var uLocal_6919 = 3;
	var uLocal_6920 = 500;
	var uLocal_6921 = 10000;
	var uLocal_6922 = 0;
	var uLocal_6923 = 3;
	var uLocal_6924 = 500;
	var uLocal_6925 = 10000;
	var uLocal_6926 = 0;
	var uLocal_6927 = 3;
	var uLocal_6928 = 500;
	var uLocal_6929 = 10000;
	var uLocal_6930 = 0;
	var uLocal_6931 = 3;
	var uLocal_6932 = 500;
	var uLocal_6933 = 10000;
	var uLocal_6934 = 0;
	var uLocal_6935 = 3;
	var uLocal_6936 = 500;
	var uLocal_6937 = 10000;
	var uLocal_6938 = 0;
	var uLocal_6939 = 3;
	var uLocal_6940 = 500;
	var uLocal_6941 = 10000;
	var uLocal_6942 = 0;
	var uLocal_6943 = 3;
	var uLocal_6944 = 500;
	var uLocal_6945 = 10000;
	var uLocal_6946 = 0;
	var uLocal_6947 = 3;
	var uLocal_6948 = 500;
	var uLocal_6949 = 10000;
	var uLocal_6950 = 0;
	var uLocal_6951 = 3;
	var uLocal_6952 = 500;
	var uLocal_6953 = 10000;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 3;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = -1;
	var uLocal_6967 = 0;
	var uLocal_6968 = 5;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 10;
	var uLocal_6980 = 3;
	var uLocal_6981 = 500;
	var uLocal_6982 = 10000;
	var uLocal_6983 = 0;
	var uLocal_6984 = 3;
	var uLocal_6985 = 500;
	var uLocal_6986 = 10000;
	var uLocal_6987 = 0;
	var uLocal_6988 = 3;
	var uLocal_6989 = 500;
	var uLocal_6990 = 10000;
	var uLocal_6991 = 0;
	var uLocal_6992 = 3;
	var uLocal_6993 = 500;
	var uLocal_6994 = 10000;
	var uLocal_6995 = 0;
	var uLocal_6996 = 3;
	var uLocal_6997 = 500;
	var uLocal_6998 = 10000;
	var uLocal_6999 = 0;
	var uLocal_7000 = 3;
	var uLocal_7001 = 500;
	var uLocal_7002 = 10000;
	var uLocal_7003 = 0;
	var uLocal_7004 = 3;
	var uLocal_7005 = 500;
	var uLocal_7006 = 10000;
	var uLocal_7007 = 0;
	var uLocal_7008 = 3;
	var uLocal_7009 = 500;
	var uLocal_7010 = 10000;
	var uLocal_7011 = 0;
	var uLocal_7012 = 3;
	var uLocal_7013 = 500;
	var uLocal_7014 = 10000;
	var uLocal_7015 = 0;
	var uLocal_7016 = 3;
	var uLocal_7017 = 500;
	var uLocal_7018 = 10000;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 3;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = -1;
	var uLocal_7032 = 0;
	var uLocal_7033 = 5;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 10;
	var uLocal_7045 = 3;
	var uLocal_7046 = 500;
	var uLocal_7047 = 10000;
	var uLocal_7048 = 0;
	var uLocal_7049 = 3;
	var uLocal_7050 = 500;
	var uLocal_7051 = 10000;
	var uLocal_7052 = 0;
	var uLocal_7053 = 3;
	var uLocal_7054 = 500;
	var uLocal_7055 = 10000;
	var uLocal_7056 = 0;
	var uLocal_7057 = 3;
	var uLocal_7058 = 500;
	var uLocal_7059 = 10000;
	var uLocal_7060 = 0;
	var uLocal_7061 = 3;
	var uLocal_7062 = 500;
	var uLocal_7063 = 10000;
	var uLocal_7064 = 0;
	var uLocal_7065 = 3;
	var uLocal_7066 = 500;
	var uLocal_7067 = 10000;
	var uLocal_7068 = 0;
	var uLocal_7069 = 3;
	var uLocal_7070 = 500;
	var uLocal_7071 = 10000;
	var uLocal_7072 = 0;
	var uLocal_7073 = 3;
	var uLocal_7074 = 500;
	var uLocal_7075 = 10000;
	var uLocal_7076 = 0;
	var uLocal_7077 = 3;
	var uLocal_7078 = 500;
	var uLocal_7079 = 10000;
	var uLocal_7080 = 0;
	var uLocal_7081 = 3;
	var uLocal_7082 = 500;
	var uLocal_7083 = 10000;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 3;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = -1;
	var uLocal_7097 = 0;
	var uLocal_7098 = 5;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 10;
	var uLocal_7110 = 3;
	var uLocal_7111 = 500;
	var uLocal_7112 = 10000;
	var uLocal_7113 = 0;
	var uLocal_7114 = 3;
	var uLocal_7115 = 500;
	var uLocal_7116 = 10000;
	var uLocal_7117 = 0;
	var uLocal_7118 = 3;
	var uLocal_7119 = 500;
	var uLocal_7120 = 10000;
	var uLocal_7121 = 0;
	var uLocal_7122 = 3;
	var uLocal_7123 = 500;
	var uLocal_7124 = 10000;
	var uLocal_7125 = 0;
	var uLocal_7126 = 3;
	var uLocal_7127 = 500;
	var uLocal_7128 = 10000;
	var uLocal_7129 = 0;
	var uLocal_7130 = 3;
	var uLocal_7131 = 500;
	var uLocal_7132 = 10000;
	var uLocal_7133 = 0;
	var uLocal_7134 = 3;
	var uLocal_7135 = 500;
	var uLocal_7136 = 10000;
	var uLocal_7137 = 0;
	var uLocal_7138 = 3;
	var uLocal_7139 = 500;
	var uLocal_7140 = 10000;
	var uLocal_7141 = 0;
	var uLocal_7142 = 3;
	var uLocal_7143 = 500;
	var uLocal_7144 = 10000;
	var uLocal_7145 = 0;
	var uLocal_7146 = 3;
	var uLocal_7147 = 500;
	var uLocal_7148 = 10000;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 3;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = -1;
	var uLocal_7162 = 0;
	var uLocal_7163 = 5;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 10;
	var uLocal_7175 = 3;
	var uLocal_7176 = 500;
	var uLocal_7177 = 10000;
	var uLocal_7178 = 0;
	var uLocal_7179 = 3;
	var uLocal_7180 = 500;
	var uLocal_7181 = 10000;
	var uLocal_7182 = 0;
	var uLocal_7183 = 3;
	var uLocal_7184 = 500;
	var uLocal_7185 = 10000;
	var uLocal_7186 = 0;
	var uLocal_7187 = 3;
	var uLocal_7188 = 500;
	var uLocal_7189 = 10000;
	var uLocal_7190 = 0;
	var uLocal_7191 = 3;
	var uLocal_7192 = 500;
	var uLocal_7193 = 10000;
	var uLocal_7194 = 0;
	var uLocal_7195 = 3;
	var uLocal_7196 = 500;
	var uLocal_7197 = 10000;
	var uLocal_7198 = 0;
	var uLocal_7199 = 3;
	var uLocal_7200 = 500;
	var uLocal_7201 = 10000;
	var uLocal_7202 = 0;
	var uLocal_7203 = 3;
	var uLocal_7204 = 500;
	var uLocal_7205 = 10000;
	var uLocal_7206 = 0;
	var uLocal_7207 = 3;
	var uLocal_7208 = 500;
	var uLocal_7209 = 10000;
	var uLocal_7210 = 0;
	var uLocal_7211 = 3;
	var uLocal_7212 = 500;
	var uLocal_7213 = 10000;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 3;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = -1;
	var uLocal_7227 = 0;
	var uLocal_7228 = 5;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 10;
	var uLocal_7240 = 3;
	var uLocal_7241 = 500;
	var uLocal_7242 = 10000;
	var uLocal_7243 = 0;
	var uLocal_7244 = 3;
	var uLocal_7245 = 500;
	var uLocal_7246 = 10000;
	var uLocal_7247 = 0;
	var uLocal_7248 = 3;
	var uLocal_7249 = 500;
	var uLocal_7250 = 10000;
	var uLocal_7251 = 0;
	var uLocal_7252 = 3;
	var uLocal_7253 = 500;
	var uLocal_7254 = 10000;
	var uLocal_7255 = 0;
	var uLocal_7256 = 3;
	var uLocal_7257 = 500;
	var uLocal_7258 = 10000;
	var uLocal_7259 = 0;
	var uLocal_7260 = 3;
	var uLocal_7261 = 500;
	var uLocal_7262 = 10000;
	var uLocal_7263 = 0;
	var uLocal_7264 = 3;
	var uLocal_7265 = 500;
	var uLocal_7266 = 10000;
	var uLocal_7267 = 0;
	var uLocal_7268 = 3;
	var uLocal_7269 = 500;
	var uLocal_7270 = 10000;
	var uLocal_7271 = 0;
	var uLocal_7272 = 3;
	var uLocal_7273 = 500;
	var uLocal_7274 = 10000;
	var uLocal_7275 = 0;
	var uLocal_7276 = 3;
	var uLocal_7277 = 500;
	var uLocal_7278 = 10000;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 3;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = -1;
	var uLocal_7292 = 0;
	var uLocal_7293 = 5;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 10;
	var uLocal_7305 = 3;
	var uLocal_7306 = 500;
	var uLocal_7307 = 10000;
	var uLocal_7308 = 0;
	var uLocal_7309 = 3;
	var uLocal_7310 = 500;
	var uLocal_7311 = 10000;
	var uLocal_7312 = 0;
	var uLocal_7313 = 3;
	var uLocal_7314 = 500;
	var uLocal_7315 = 10000;
	var uLocal_7316 = 0;
	var uLocal_7317 = 3;
	var uLocal_7318 = 500;
	var uLocal_7319 = 10000;
	var uLocal_7320 = 0;
	var uLocal_7321 = 3;
	var uLocal_7322 = 500;
	var uLocal_7323 = 10000;
	var uLocal_7324 = 0;
	var uLocal_7325 = 3;
	var uLocal_7326 = 500;
	var uLocal_7327 = 10000;
	var uLocal_7328 = 0;
	var uLocal_7329 = 3;
	var uLocal_7330 = 500;
	var uLocal_7331 = 10000;
	var uLocal_7332 = 0;
	var uLocal_7333 = 3;
	var uLocal_7334 = 500;
	var uLocal_7335 = 10000;
	var uLocal_7336 = 0;
	var uLocal_7337 = 3;
	var uLocal_7338 = 500;
	var uLocal_7339 = 10000;
	var uLocal_7340 = 0;
	var uLocal_7341 = 3;
	var uLocal_7342 = 500;
	var uLocal_7343 = 10000;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 3;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = -1;
	var uLocal_7357 = 0;
	var uLocal_7358 = 5;
	var uLocal_7359 = 0;
	var uLocal_7360 = 0;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 10;
	var uLocal_7370 = 3;
	var uLocal_7371 = 500;
	var uLocal_7372 = 10000;
	var uLocal_7373 = 0;
	var uLocal_7374 = 3;
	var uLocal_7375 = 500;
	var uLocal_7376 = 10000;
	var uLocal_7377 = 0;
	var uLocal_7378 = 3;
	var uLocal_7379 = 500;
	var uLocal_7380 = 10000;
	var uLocal_7381 = 0;
	var uLocal_7382 = 3;
	var uLocal_7383 = 500;
	var uLocal_7384 = 10000;
	var uLocal_7385 = 0;
	var uLocal_7386 = 3;
	var uLocal_7387 = 500;
	var uLocal_7388 = 10000;
	var uLocal_7389 = 0;
	var uLocal_7390 = 3;
	var uLocal_7391 = 500;
	var uLocal_7392 = 10000;
	var uLocal_7393 = 0;
	var uLocal_7394 = 3;
	var uLocal_7395 = 500;
	var uLocal_7396 = 10000;
	var uLocal_7397 = 0;
	var uLocal_7398 = 3;
	var uLocal_7399 = 500;
	var uLocal_7400 = 10000;
	var uLocal_7401 = 0;
	var uLocal_7402 = 3;
	var uLocal_7403 = 500;
	var uLocal_7404 = 10000;
	var uLocal_7405 = 0;
	var uLocal_7406 = 3;
	var uLocal_7407 = 500;
	var uLocal_7408 = 10000;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 3;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = -1;
	var uLocal_7422 = 0;
	var uLocal_7423 = 5;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 10;
	var uLocal_7435 = 3;
	var uLocal_7436 = 500;
	var uLocal_7437 = 10000;
	var uLocal_7438 = 0;
	var uLocal_7439 = 3;
	var uLocal_7440 = 500;
	var uLocal_7441 = 10000;
	var uLocal_7442 = 0;
	var uLocal_7443 = 3;
	var uLocal_7444 = 500;
	var uLocal_7445 = 10000;
	var uLocal_7446 = 0;
	var uLocal_7447 = 3;
	var uLocal_7448 = 500;
	var uLocal_7449 = 10000;
	var uLocal_7450 = 0;
	var uLocal_7451 = 3;
	var uLocal_7452 = 500;
	var uLocal_7453 = 10000;
	var uLocal_7454 = 0;
	var uLocal_7455 = 3;
	var uLocal_7456 = 500;
	var uLocal_7457 = 10000;
	var uLocal_7458 = 0;
	var uLocal_7459 = 3;
	var uLocal_7460 = 500;
	var uLocal_7461 = 10000;
	var uLocal_7462 = 0;
	var uLocal_7463 = 3;
	var uLocal_7464 = 500;
	var uLocal_7465 = 10000;
	var uLocal_7466 = 0;
	var uLocal_7467 = 3;
	var uLocal_7468 = 500;
	var uLocal_7469 = 10000;
	var uLocal_7470 = 0;
	var uLocal_7471 = 3;
	var uLocal_7472 = 500;
	var uLocal_7473 = 10000;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 3;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = -1;
	var uLocal_7487 = 0;
	var uLocal_7488 = 5;
	var uLocal_7489 = 0;
	var uLocal_7490 = 0;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 10;
	var uLocal_7500 = 3;
	var uLocal_7501 = 500;
	var uLocal_7502 = 10000;
	var uLocal_7503 = 0;
	var uLocal_7504 = 3;
	var uLocal_7505 = 500;
	var uLocal_7506 = 10000;
	var uLocal_7507 = 0;
	var uLocal_7508 = 3;
	var uLocal_7509 = 500;
	var uLocal_7510 = 10000;
	var uLocal_7511 = 0;
	var uLocal_7512 = 3;
	var uLocal_7513 = 500;
	var uLocal_7514 = 10000;
	var uLocal_7515 = 0;
	var uLocal_7516 = 3;
	var uLocal_7517 = 500;
	var uLocal_7518 = 10000;
	var uLocal_7519 = 0;
	var uLocal_7520 = 3;
	var uLocal_7521 = 500;
	var uLocal_7522 = 10000;
	var uLocal_7523 = 0;
	var uLocal_7524 = 3;
	var uLocal_7525 = 500;
	var uLocal_7526 = 10000;
	var uLocal_7527 = 0;
	var uLocal_7528 = 3;
	var uLocal_7529 = 500;
	var uLocal_7530 = 10000;
	var uLocal_7531 = 0;
	var uLocal_7532 = 3;
	var uLocal_7533 = 500;
	var uLocal_7534 = 10000;
	var uLocal_7535 = 0;
	var uLocal_7536 = 3;
	var uLocal_7537 = 500;
	var uLocal_7538 = 10000;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 3;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = -1;
	var uLocal_7552 = 0;
	var uLocal_7553 = 5;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = 0;
	var uLocal_7557 = 0;
	var uLocal_7558 = 0;
	var uLocal_7559 = 0;
	var uLocal_7560 = 0;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 10;
	var uLocal_7565 = 3;
	var uLocal_7566 = 500;
	var uLocal_7567 = 10000;
	var uLocal_7568 = 0;
	var uLocal_7569 = 3;
	var uLocal_7570 = 500;
	var uLocal_7571 = 10000;
	var uLocal_7572 = 0;
	var uLocal_7573 = 3;
	var uLocal_7574 = 500;
	var uLocal_7575 = 10000;
	var uLocal_7576 = 0;
	var uLocal_7577 = 3;
	var uLocal_7578 = 500;
	var uLocal_7579 = 10000;
	var uLocal_7580 = 0;
	var uLocal_7581 = 3;
	var uLocal_7582 = 500;
	var uLocal_7583 = 10000;
	var uLocal_7584 = 0;
	var uLocal_7585 = 3;
	var uLocal_7586 = 500;
	var uLocal_7587 = 10000;
	var uLocal_7588 = 0;
	var uLocal_7589 = 3;
	var uLocal_7590 = 500;
	var uLocal_7591 = 10000;
	var uLocal_7592 = 0;
	var uLocal_7593 = 3;
	var uLocal_7594 = 500;
	var uLocal_7595 = 10000;
	var uLocal_7596 = 0;
	var uLocal_7597 = 3;
	var uLocal_7598 = 500;
	var uLocal_7599 = 10000;
	var uLocal_7600 = 0;
	var uLocal_7601 = 3;
	var uLocal_7602 = 500;
	var uLocal_7603 = 10000;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 3;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = -1;
	var uLocal_7617 = 0;
	var uLocal_7618 = 5;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 10;
	var uLocal_7630 = 3;
	var uLocal_7631 = 500;
	var uLocal_7632 = 10000;
	var uLocal_7633 = 0;
	var uLocal_7634 = 3;
	var uLocal_7635 = 500;
	var uLocal_7636 = 10000;
	var uLocal_7637 = 0;
	var uLocal_7638 = 3;
	var uLocal_7639 = 500;
	var uLocal_7640 = 10000;
	var uLocal_7641 = 0;
	var uLocal_7642 = 3;
	var uLocal_7643 = 500;
	var uLocal_7644 = 10000;
	var uLocal_7645 = 0;
	var uLocal_7646 = 3;
	var uLocal_7647 = 500;
	var uLocal_7648 = 10000;
	var uLocal_7649 = 0;
	var uLocal_7650 = 3;
	var uLocal_7651 = 500;
	var uLocal_7652 = 10000;
	var uLocal_7653 = 0;
	var uLocal_7654 = 3;
	var uLocal_7655 = 500;
	var uLocal_7656 = 10000;
	var uLocal_7657 = 0;
	var uLocal_7658 = 3;
	var uLocal_7659 = 500;
	var uLocal_7660 = 10000;
	var uLocal_7661 = 0;
	var uLocal_7662 = 3;
	var uLocal_7663 = 500;
	var uLocal_7664 = 10000;
	var uLocal_7665 = 0;
	var uLocal_7666 = 3;
	var uLocal_7667 = 500;
	var uLocal_7668 = 10000;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 3;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = -1;
	var uLocal_7682 = 0;
	var uLocal_7683 = 5;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 0;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 10;
	var uLocal_7695 = 3;
	var uLocal_7696 = 500;
	var uLocal_7697 = 10000;
	var uLocal_7698 = 0;
	var uLocal_7699 = 3;
	var uLocal_7700 = 500;
	var uLocal_7701 = 10000;
	var uLocal_7702 = 0;
	var uLocal_7703 = 3;
	var uLocal_7704 = 500;
	var uLocal_7705 = 10000;
	var uLocal_7706 = 0;
	var uLocal_7707 = 3;
	var uLocal_7708 = 500;
	var uLocal_7709 = 10000;
	var uLocal_7710 = 0;
	var uLocal_7711 = 3;
	var uLocal_7712 = 500;
	var uLocal_7713 = 10000;
	var uLocal_7714 = 0;
	var uLocal_7715 = 3;
	var uLocal_7716 = 500;
	var uLocal_7717 = 10000;
	var uLocal_7718 = 0;
	var uLocal_7719 = 3;
	var uLocal_7720 = 500;
	var uLocal_7721 = 10000;
	var uLocal_7722 = 0;
	var uLocal_7723 = 3;
	var uLocal_7724 = 500;
	var uLocal_7725 = 10000;
	var uLocal_7726 = 0;
	var uLocal_7727 = 3;
	var uLocal_7728 = 500;
	var uLocal_7729 = 10000;
	var uLocal_7730 = 0;
	var uLocal_7731 = 3;
	var uLocal_7732 = 500;
	var uLocal_7733 = 10000;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 3;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = -1;
	var uLocal_7747 = 0;
	var uLocal_7748 = 5;
	var uLocal_7749 = 0;
	var uLocal_7750 = 0;
	var uLocal_7751 = 0;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 0;
	var uLocal_7755 = 0;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 10;
	var uLocal_7760 = 3;
	var uLocal_7761 = 500;
	var uLocal_7762 = 10000;
	var uLocal_7763 = 0;
	var uLocal_7764 = 3;
	var uLocal_7765 = 500;
	var uLocal_7766 = 10000;
	var uLocal_7767 = 0;
	var uLocal_7768 = 3;
	var uLocal_7769 = 500;
	var uLocal_7770 = 10000;
	var uLocal_7771 = 0;
	var uLocal_7772 = 3;
	var uLocal_7773 = 500;
	var uLocal_7774 = 10000;
	var uLocal_7775 = 0;
	var uLocal_7776 = 3;
	var uLocal_7777 = 500;
	var uLocal_7778 = 10000;
	var uLocal_7779 = 0;
	var uLocal_7780 = 3;
	var uLocal_7781 = 500;
	var uLocal_7782 = 10000;
	var uLocal_7783 = 0;
	var uLocal_7784 = 3;
	var uLocal_7785 = 500;
	var uLocal_7786 = 10000;
	var uLocal_7787 = 0;
	var uLocal_7788 = 3;
	var uLocal_7789 = 500;
	var uLocal_7790 = 10000;
	var uLocal_7791 = 0;
	var uLocal_7792 = 3;
	var uLocal_7793 = 500;
	var uLocal_7794 = 10000;
	var uLocal_7795 = 0;
	var uLocal_7796 = 3;
	var uLocal_7797 = 500;
	var uLocal_7798 = 10000;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 3;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = -1;
	var uLocal_7812 = 0;
	var uLocal_7813 = 5;
	var uLocal_7814 = 0;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 0;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 10;
	var uLocal_7825 = 3;
	var uLocal_7826 = 500;
	var uLocal_7827 = 10000;
	var uLocal_7828 = 0;
	var uLocal_7829 = 3;
	var uLocal_7830 = 500;
	var uLocal_7831 = 10000;
	var uLocal_7832 = 0;
	var uLocal_7833 = 3;
	var uLocal_7834 = 500;
	var uLocal_7835 = 10000;
	var uLocal_7836 = 0;
	var uLocal_7837 = 3;
	var uLocal_7838 = 500;
	var uLocal_7839 = 10000;
	var uLocal_7840 = 0;
	var uLocal_7841 = 3;
	var uLocal_7842 = 500;
	var uLocal_7843 = 10000;
	var uLocal_7844 = 0;
	var uLocal_7845 = 3;
	var uLocal_7846 = 500;
	var uLocal_7847 = 10000;
	var uLocal_7848 = 0;
	var uLocal_7849 = 3;
	var uLocal_7850 = 500;
	var uLocal_7851 = 10000;
	var uLocal_7852 = 0;
	var uLocal_7853 = 3;
	var uLocal_7854 = 500;
	var uLocal_7855 = 10000;
	var uLocal_7856 = 0;
	var uLocal_7857 = 3;
	var uLocal_7858 = 500;
	var uLocal_7859 = 10000;
	var uLocal_7860 = 0;
	var uLocal_7861 = 3;
	var uLocal_7862 = 500;
	var uLocal_7863 = 10000;
	var uLocal_7864 = 0;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = 0;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 3;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = -1;
	var uLocal_7877 = 0;
	var uLocal_7878 = 5;
	var uLocal_7879 = 0;
	var uLocal_7880 = 0;
	var uLocal_7881 = 0;
	var uLocal_7882 = 0;
	var uLocal_7883 = 0;
	var uLocal_7884 = 0;
	var uLocal_7885 = 0;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 10;
	var uLocal_7890 = 3;
	var uLocal_7891 = 500;
	var uLocal_7892 = 10000;
	var uLocal_7893 = 0;
	var uLocal_7894 = 3;
	var uLocal_7895 = 500;
	var uLocal_7896 = 10000;
	var uLocal_7897 = 0;
	var uLocal_7898 = 3;
	var uLocal_7899 = 500;
	var uLocal_7900 = 10000;
	var uLocal_7901 = 0;
	var uLocal_7902 = 3;
	var uLocal_7903 = 500;
	var uLocal_7904 = 10000;
	var uLocal_7905 = 0;
	var uLocal_7906 = 3;
	var uLocal_7907 = 500;
	var uLocal_7908 = 10000;
	var uLocal_7909 = 0;
	var uLocal_7910 = 3;
	var uLocal_7911 = 500;
	var uLocal_7912 = 10000;
	var uLocal_7913 = 0;
	var uLocal_7914 = 3;
	var uLocal_7915 = 500;
	var uLocal_7916 = 10000;
	var uLocal_7917 = 0;
	var uLocal_7918 = 3;
	var uLocal_7919 = 500;
	var uLocal_7920 = 10000;
	var uLocal_7921 = 0;
	var uLocal_7922 = 3;
	var uLocal_7923 = 500;
	var uLocal_7924 = 10000;
	var uLocal_7925 = 0;
	var uLocal_7926 = 3;
	var uLocal_7927 = 500;
	var uLocal_7928 = 10000;
	var uLocal_7929 = 0;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = 0;
	var uLocal_7936 = 3;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = -1;
	var uLocal_7942 = 0;
	var uLocal_7943 = 5;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 10;
	var uLocal_7955 = 3;
	var uLocal_7956 = 500;
	var uLocal_7957 = 10000;
	var uLocal_7958 = 0;
	var uLocal_7959 = 3;
	var uLocal_7960 = 500;
	var uLocal_7961 = 10000;
	var uLocal_7962 = 0;
	var uLocal_7963 = 3;
	var uLocal_7964 = 500;
	var uLocal_7965 = 10000;
	var uLocal_7966 = 0;
	var uLocal_7967 = 3;
	var uLocal_7968 = 500;
	var uLocal_7969 = 10000;
	var uLocal_7970 = 0;
	var uLocal_7971 = 3;
	var uLocal_7972 = 500;
	var uLocal_7973 = 10000;
	var uLocal_7974 = 0;
	var uLocal_7975 = 3;
	var uLocal_7976 = 500;
	var uLocal_7977 = 10000;
	var uLocal_7978 = 0;
	var uLocal_7979 = 3;
	var uLocal_7980 = 500;
	var uLocal_7981 = 10000;
	var uLocal_7982 = 0;
	var uLocal_7983 = 3;
	var uLocal_7984 = 500;
	var uLocal_7985 = 10000;
	var uLocal_7986 = 0;
	var uLocal_7987 = 3;
	var uLocal_7988 = 500;
	var uLocal_7989 = 10000;
	var uLocal_7990 = 0;
	var uLocal_7991 = 3;
	var uLocal_7992 = 500;
	var uLocal_7993 = 10000;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 3;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = -1;
	var uLocal_8007 = 0;
	var uLocal_8008 = 5;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 10;
	var uLocal_8020 = 3;
	var uLocal_8021 = 500;
	var uLocal_8022 = 10000;
	var uLocal_8023 = 0;
	var uLocal_8024 = 3;
	var uLocal_8025 = 500;
	var uLocal_8026 = 10000;
	var uLocal_8027 = 0;
	var uLocal_8028 = 3;
	var uLocal_8029 = 500;
	var uLocal_8030 = 10000;
	var uLocal_8031 = 0;
	var uLocal_8032 = 3;
	var uLocal_8033 = 500;
	var uLocal_8034 = 10000;
	var uLocal_8035 = 0;
	var uLocal_8036 = 3;
	var uLocal_8037 = 500;
	var uLocal_8038 = 10000;
	var uLocal_8039 = 0;
	var uLocal_8040 = 3;
	var uLocal_8041 = 500;
	var uLocal_8042 = 10000;
	var uLocal_8043 = 0;
	var uLocal_8044 = 3;
	var uLocal_8045 = 500;
	var uLocal_8046 = 10000;
	var uLocal_8047 = 0;
	var uLocal_8048 = 3;
	var uLocal_8049 = 500;
	var uLocal_8050 = 10000;
	var uLocal_8051 = 0;
	var uLocal_8052 = 3;
	var uLocal_8053 = 500;
	var uLocal_8054 = 10000;
	var uLocal_8055 = 0;
	var uLocal_8056 = 3;
	var uLocal_8057 = 500;
	var uLocal_8058 = 10000;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 3;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = -1;
	var uLocal_8072 = 0;
	var uLocal_8073 = 5;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 10;
	var uLocal_8085 = 3;
	var uLocal_8086 = 500;
	var uLocal_8087 = 10000;
	var uLocal_8088 = 0;
	var uLocal_8089 = 3;
	var uLocal_8090 = 500;
	var uLocal_8091 = 10000;
	var uLocal_8092 = 0;
	var uLocal_8093 = 3;
	var uLocal_8094 = 500;
	var uLocal_8095 = 10000;
	var uLocal_8096 = 0;
	var uLocal_8097 = 3;
	var uLocal_8098 = 500;
	var uLocal_8099 = 10000;
	var uLocal_8100 = 0;
	var uLocal_8101 = 3;
	var uLocal_8102 = 500;
	var uLocal_8103 = 10000;
	var uLocal_8104 = 0;
	var uLocal_8105 = 3;
	var uLocal_8106 = 500;
	var uLocal_8107 = 10000;
	var uLocal_8108 = 0;
	var uLocal_8109 = 3;
	var uLocal_8110 = 500;
	var uLocal_8111 = 10000;
	var uLocal_8112 = 0;
	var uLocal_8113 = 3;
	var uLocal_8114 = 500;
	var uLocal_8115 = 10000;
	var uLocal_8116 = 0;
	var uLocal_8117 = 3;
	var uLocal_8118 = 500;
	var uLocal_8119 = 10000;
	var uLocal_8120 = 0;
	var uLocal_8121 = 3;
	var uLocal_8122 = 500;
	var uLocal_8123 = 10000;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 3;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = -1;
	var uLocal_8137 = 0;
	var uLocal_8138 = 5;
	var uLocal_8139 = 0;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 10;
	var uLocal_8150 = 3;
	var uLocal_8151 = 500;
	var uLocal_8152 = 10000;
	var uLocal_8153 = 0;
	var uLocal_8154 = 3;
	var uLocal_8155 = 500;
	var uLocal_8156 = 10000;
	var uLocal_8157 = 0;
	var uLocal_8158 = 3;
	var uLocal_8159 = 500;
	var uLocal_8160 = 10000;
	var uLocal_8161 = 0;
	var uLocal_8162 = 3;
	var uLocal_8163 = 500;
	var uLocal_8164 = 10000;
	var uLocal_8165 = 0;
	var uLocal_8166 = 3;
	var uLocal_8167 = 500;
	var uLocal_8168 = 10000;
	var uLocal_8169 = 0;
	var uLocal_8170 = 3;
	var uLocal_8171 = 500;
	var uLocal_8172 = 10000;
	var uLocal_8173 = 0;
	var uLocal_8174 = 3;
	var uLocal_8175 = 500;
	var uLocal_8176 = 10000;
	var uLocal_8177 = 0;
	var uLocal_8178 = 3;
	var uLocal_8179 = 500;
	var uLocal_8180 = 10000;
	var uLocal_8181 = 0;
	var uLocal_8182 = 3;
	var uLocal_8183 = 500;
	var uLocal_8184 = 10000;
	var uLocal_8185 = 0;
	var uLocal_8186 = 3;
	var uLocal_8187 = 500;
	var uLocal_8188 = 10000;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 3;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = -1;
	var uLocal_8202 = 0;
	var uLocal_8203 = 5;
	var uLocal_8204 = 0;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 10;
	var uLocal_8215 = 3;
	var uLocal_8216 = 500;
	var uLocal_8217 = 10000;
	var uLocal_8218 = 0;
	var uLocal_8219 = 3;
	var uLocal_8220 = 500;
	var uLocal_8221 = 10000;
	var uLocal_8222 = 0;
	var uLocal_8223 = 3;
	var uLocal_8224 = 500;
	var uLocal_8225 = 10000;
	var uLocal_8226 = 0;
	var uLocal_8227 = 3;
	var uLocal_8228 = 500;
	var uLocal_8229 = 10000;
	var uLocal_8230 = 0;
	var uLocal_8231 = 3;
	var uLocal_8232 = 500;
	var uLocal_8233 = 10000;
	var uLocal_8234 = 0;
	var uLocal_8235 = 3;
	var uLocal_8236 = 500;
	var uLocal_8237 = 10000;
	var uLocal_8238 = 0;
	var uLocal_8239 = 3;
	var uLocal_8240 = 500;
	var uLocal_8241 = 10000;
	var uLocal_8242 = 0;
	var uLocal_8243 = 3;
	var uLocal_8244 = 500;
	var uLocal_8245 = 10000;
	var uLocal_8246 = 0;
	var uLocal_8247 = 3;
	var uLocal_8248 = 500;
	var uLocal_8249 = 10000;
	var uLocal_8250 = 0;
	var uLocal_8251 = 3;
	var uLocal_8252 = 500;
	var uLocal_8253 = 10000;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 3;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = -1;
	var uLocal_8267 = 0;
	var uLocal_8268 = 5;
	var uLocal_8269 = 0;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 10;
	var uLocal_8280 = 3;
	var uLocal_8281 = 500;
	var uLocal_8282 = 10000;
	var uLocal_8283 = 0;
	var uLocal_8284 = 3;
	var uLocal_8285 = 500;
	var uLocal_8286 = 10000;
	var uLocal_8287 = 0;
	var uLocal_8288 = 3;
	var uLocal_8289 = 500;
	var uLocal_8290 = 10000;
	var uLocal_8291 = 0;
	var uLocal_8292 = 3;
	var uLocal_8293 = 500;
	var uLocal_8294 = 10000;
	var uLocal_8295 = 0;
	var uLocal_8296 = 3;
	var uLocal_8297 = 500;
	var uLocal_8298 = 10000;
	var uLocal_8299 = 0;
	var uLocal_8300 = 3;
	var uLocal_8301 = 500;
	var uLocal_8302 = 10000;
	var uLocal_8303 = 0;
	var uLocal_8304 = 3;
	var uLocal_8305 = 500;
	var uLocal_8306 = 10000;
	var uLocal_8307 = 0;
	var uLocal_8308 = 3;
	var uLocal_8309 = 500;
	var uLocal_8310 = 10000;
	var uLocal_8311 = 0;
	var uLocal_8312 = 3;
	var uLocal_8313 = 500;
	var uLocal_8314 = 10000;
	var uLocal_8315 = 0;
	var uLocal_8316 = 3;
	var uLocal_8317 = 500;
	var uLocal_8318 = 10000;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 3;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = -1;
	var uLocal_8332 = 0;
	var uLocal_8333 = 5;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 10;
	var uLocal_8345 = 3;
	var uLocal_8346 = 500;
	var uLocal_8347 = 10000;
	var uLocal_8348 = 0;
	var uLocal_8349 = 3;
	var uLocal_8350 = 500;
	var uLocal_8351 = 10000;
	var uLocal_8352 = 0;
	var uLocal_8353 = 3;
	var uLocal_8354 = 500;
	var uLocal_8355 = 10000;
	var uLocal_8356 = 0;
	var uLocal_8357 = 3;
	var uLocal_8358 = 500;
	var uLocal_8359 = 10000;
	var uLocal_8360 = 0;
	var uLocal_8361 = 3;
	var uLocal_8362 = 500;
	var uLocal_8363 = 10000;
	var uLocal_8364 = 0;
	var uLocal_8365 = 3;
	var uLocal_8366 = 500;
	var uLocal_8367 = 10000;
	var uLocal_8368 = 0;
	var uLocal_8369 = 3;
	var uLocal_8370 = 500;
	var uLocal_8371 = 10000;
	var uLocal_8372 = 0;
	var uLocal_8373 = 3;
	var uLocal_8374 = 500;
	var uLocal_8375 = 10000;
	var uLocal_8376 = 0;
	var uLocal_8377 = 3;
	var uLocal_8378 = 500;
	var uLocal_8379 = 10000;
	var uLocal_8380 = 0;
	var uLocal_8381 = 3;
	var uLocal_8382 = 500;
	var uLocal_8383 = 10000;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 3;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = -1;
	var uLocal_8397 = 0;
	var uLocal_8398 = 5;
	var uLocal_8399 = 0;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 10;
	var uLocal_8410 = 3;
	var uLocal_8411 = 500;
	var uLocal_8412 = 10000;
	var uLocal_8413 = 0;
	var uLocal_8414 = 3;
	var uLocal_8415 = 500;
	var uLocal_8416 = 10000;
	var uLocal_8417 = 0;
	var uLocal_8418 = 3;
	var uLocal_8419 = 500;
	var uLocal_8420 = 10000;
	var uLocal_8421 = 0;
	var uLocal_8422 = 3;
	var uLocal_8423 = 500;
	var uLocal_8424 = 10000;
	var uLocal_8425 = 0;
	var uLocal_8426 = 3;
	var uLocal_8427 = 500;
	var uLocal_8428 = 10000;
	var uLocal_8429 = 0;
	var uLocal_8430 = 3;
	var uLocal_8431 = 500;
	var uLocal_8432 = 10000;
	var uLocal_8433 = 0;
	var uLocal_8434 = 3;
	var uLocal_8435 = 500;
	var uLocal_8436 = 10000;
	var uLocal_8437 = 0;
	var uLocal_8438 = 3;
	var uLocal_8439 = 500;
	var uLocal_8440 = 10000;
	var uLocal_8441 = 0;
	var uLocal_8442 = 3;
	var uLocal_8443 = 500;
	var uLocal_8444 = 10000;
	var uLocal_8445 = 0;
	var uLocal_8446 = 3;
	var uLocal_8447 = 500;
	var uLocal_8448 = 10000;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 3;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = -1;
	var uLocal_8462 = 0;
	var uLocal_8463 = 5;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 10;
	var uLocal_8475 = 3;
	var uLocal_8476 = 500;
	var uLocal_8477 = 10000;
	var uLocal_8478 = 0;
	var uLocal_8479 = 3;
	var uLocal_8480 = 500;
	var uLocal_8481 = 10000;
	var uLocal_8482 = 0;
	var uLocal_8483 = 3;
	var uLocal_8484 = 500;
	var uLocal_8485 = 10000;
	var uLocal_8486 = 0;
	var uLocal_8487 = 3;
	var uLocal_8488 = 500;
	var uLocal_8489 = 10000;
	var uLocal_8490 = 0;
	var uLocal_8491 = 3;
	var uLocal_8492 = 500;
	var uLocal_8493 = 10000;
	var uLocal_8494 = 0;
	var uLocal_8495 = 3;
	var uLocal_8496 = 500;
	var uLocal_8497 = 10000;
	var uLocal_8498 = 0;
	var uLocal_8499 = 3;
	var uLocal_8500 = 500;
	var uLocal_8501 = 10000;
	var uLocal_8502 = 0;
	var uLocal_8503 = 3;
	var uLocal_8504 = 500;
	var uLocal_8505 = 10000;
	var uLocal_8506 = 0;
	var uLocal_8507 = 3;
	var uLocal_8508 = 500;
	var uLocal_8509 = 10000;
	var uLocal_8510 = 0;
	var uLocal_8511 = 3;
	var uLocal_8512 = 500;
	var uLocal_8513 = 10000;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 3;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = -1;
	var uLocal_8527 = 0;
	var uLocal_8528 = 5;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 10;
	var uLocal_8540 = 3;
	var uLocal_8541 = 500;
	var uLocal_8542 = 10000;
	var uLocal_8543 = 0;
	var uLocal_8544 = 3;
	var uLocal_8545 = 500;
	var uLocal_8546 = 10000;
	var uLocal_8547 = 0;
	var uLocal_8548 = 3;
	var uLocal_8549 = 500;
	var uLocal_8550 = 10000;
	var uLocal_8551 = 0;
	var uLocal_8552 = 3;
	var uLocal_8553 = 500;
	var uLocal_8554 = 10000;
	var uLocal_8555 = 0;
	var uLocal_8556 = 3;
	var uLocal_8557 = 500;
	var uLocal_8558 = 10000;
	var uLocal_8559 = 0;
	var uLocal_8560 = 3;
	var uLocal_8561 = 500;
	var uLocal_8562 = 10000;
	var uLocal_8563 = 0;
	var uLocal_8564 = 3;
	var uLocal_8565 = 500;
	var uLocal_8566 = 10000;
	var uLocal_8567 = 0;
	var uLocal_8568 = 3;
	var uLocal_8569 = 500;
	var uLocal_8570 = 10000;
	var uLocal_8571 = 0;
	var uLocal_8572 = 3;
	var uLocal_8573 = 500;
	var uLocal_8574 = 10000;
	var uLocal_8575 = 0;
	var uLocal_8576 = 3;
	var uLocal_8577 = 500;
	var uLocal_8578 = 10000;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 3;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = -1;
	var uLocal_8592 = 0;
	var uLocal_8593 = 5;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 10;
	var uLocal_8605 = 3;
	var uLocal_8606 = 500;
	var uLocal_8607 = 10000;
	var uLocal_8608 = 0;
	var uLocal_8609 = 3;
	var uLocal_8610 = 500;
	var uLocal_8611 = 10000;
	var uLocal_8612 = 0;
	var uLocal_8613 = 3;
	var uLocal_8614 = 500;
	var uLocal_8615 = 10000;
	var uLocal_8616 = 0;
	var uLocal_8617 = 3;
	var uLocal_8618 = 500;
	var uLocal_8619 = 10000;
	var uLocal_8620 = 0;
	var uLocal_8621 = 3;
	var uLocal_8622 = 500;
	var uLocal_8623 = 10000;
	var uLocal_8624 = 0;
	var uLocal_8625 = 3;
	var uLocal_8626 = 500;
	var uLocal_8627 = 10000;
	var uLocal_8628 = 0;
	var uLocal_8629 = 3;
	var uLocal_8630 = 500;
	var uLocal_8631 = 10000;
	var uLocal_8632 = 0;
	var uLocal_8633 = 3;
	var uLocal_8634 = 500;
	var uLocal_8635 = 10000;
	var uLocal_8636 = 0;
	var uLocal_8637 = 3;
	var uLocal_8638 = 500;
	var uLocal_8639 = 10000;
	var uLocal_8640 = 0;
	var uLocal_8641 = 3;
	var uLocal_8642 = 500;
	var uLocal_8643 = 10000;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 3;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = -1;
	var uLocal_8657 = 0;
	var uLocal_8658 = 5;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 10;
	var uLocal_8670 = 3;
	var uLocal_8671 = 500;
	var uLocal_8672 = 10000;
	var uLocal_8673 = 0;
	var uLocal_8674 = 3;
	var uLocal_8675 = 500;
	var uLocal_8676 = 10000;
	var uLocal_8677 = 0;
	var uLocal_8678 = 3;
	var uLocal_8679 = 500;
	var uLocal_8680 = 10000;
	var uLocal_8681 = 0;
	var uLocal_8682 = 3;
	var uLocal_8683 = 500;
	var uLocal_8684 = 10000;
	var uLocal_8685 = 0;
	var uLocal_8686 = 3;
	var uLocal_8687 = 500;
	var uLocal_8688 = 10000;
	var uLocal_8689 = 0;
	var uLocal_8690 = 3;
	var uLocal_8691 = 500;
	var uLocal_8692 = 10000;
	var uLocal_8693 = 0;
	var uLocal_8694 = 3;
	var uLocal_8695 = 500;
	var uLocal_8696 = 10000;
	var uLocal_8697 = 0;
	var uLocal_8698 = 3;
	var uLocal_8699 = 500;
	var uLocal_8700 = 10000;
	var uLocal_8701 = 0;
	var uLocal_8702 = 3;
	var uLocal_8703 = 500;
	var uLocal_8704 = 10000;
	var uLocal_8705 = 0;
	var uLocal_8706 = 3;
	var uLocal_8707 = 500;
	var uLocal_8708 = 10000;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 3;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = -1;
	var uLocal_8722 = 0;
	var uLocal_8723 = 5;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 10;
	var uLocal_8735 = 3;
	var uLocal_8736 = 500;
	var uLocal_8737 = 10000;
	var uLocal_8738 = 0;
	var uLocal_8739 = 3;
	var uLocal_8740 = 500;
	var uLocal_8741 = 10000;
	var uLocal_8742 = 0;
	var uLocal_8743 = 3;
	var uLocal_8744 = 500;
	var uLocal_8745 = 10000;
	var uLocal_8746 = 0;
	var uLocal_8747 = 3;
	var uLocal_8748 = 500;
	var uLocal_8749 = 10000;
	var uLocal_8750 = 0;
	var uLocal_8751 = 3;
	var uLocal_8752 = 500;
	var uLocal_8753 = 10000;
	var uLocal_8754 = 0;
	var uLocal_8755 = 3;
	var uLocal_8756 = 500;
	var uLocal_8757 = 10000;
	var uLocal_8758 = 0;
	var uLocal_8759 = 3;
	var uLocal_8760 = 500;
	var uLocal_8761 = 10000;
	var uLocal_8762 = 0;
	var uLocal_8763 = 3;
	var uLocal_8764 = 500;
	var uLocal_8765 = 10000;
	var uLocal_8766 = 0;
	var uLocal_8767 = 3;
	var uLocal_8768 = 500;
	var uLocal_8769 = 10000;
	var uLocal_8770 = 0;
	var uLocal_8771 = 3;
	var uLocal_8772 = 500;
	var uLocal_8773 = 10000;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 1;
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = 0;
	var uLocal_8789 = 0;
	var uLocal_8790 = 65;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 0;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = 0;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 0;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 0;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 1097859072;
	var uLocal_9572 = 1101004800;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 0;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 0;
	var uLocal_9599 = 4;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 0;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 0;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 40;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = 0;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 0;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 0;
	var uLocal_9754 = 0;
	var uLocal_9755 = 0;
	var uLocal_9756 = 0;
	var uLocal_9757 = 0;
	var uLocal_9758 = 0;
	var uLocal_9759 = 0;
	var uLocal_9760 = 0;
	var uLocal_9761 = 0;
	var uLocal_9762 = 0;
	var uLocal_9763 = 0;
	var uLocal_9764 = 0;
	var uLocal_9765 = 0;
	var uLocal_9766 = 0;
	var uLocal_9767 = 0;
	var uLocal_9768 = 0;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 0;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 0;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 0;
	var uLocal_9805 = 0;
	var uLocal_9806 = 0;
	var uLocal_9807 = 0;
	var uLocal_9808 = 0;
	var uLocal_9809 = 0;
	var uLocal_9810 = 0;
	var uLocal_9811 = 0;
	var uLocal_9812 = 0;
	var uLocal_9813 = 0;
	var uLocal_9814 = 0;
	var uLocal_9815 = 0;
	var uLocal_9816 = 0;
	var uLocal_9817 = 0;
	var uLocal_9818 = 0;
	var uLocal_9819 = 0;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 0;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 0;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = 0;
	var uLocal_9857 = 0;
	var uLocal_9858 = 0;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 0;
	var uLocal_9870 = 0;
	var uLocal_9871 = 0;
	var uLocal_9872 = 0;
	var uLocal_9873 = 0;
	var uLocal_9874 = 0;
	var uLocal_9875 = 0;
	var uLocal_9876 = 0;
	var uLocal_9877 = 0;
	var uLocal_9878 = 0;
	var uLocal_9879 = 0;
	var uLocal_9880 = 0;
	var uLocal_9881 = 0;
	var uLocal_9882 = 0;
	var uLocal_9883 = 0;
	var uLocal_9884 = 0;
	var uLocal_9885 = 0;
	var uLocal_9886 = 0;
	var uLocal_9887 = 0;
	var uLocal_9888 = 0;
	var uLocal_9889 = 0;
	var uLocal_9890 = 0;
	var uLocal_9891 = 0;
	var uLocal_9892 = 0;
	var uLocal_9893 = 0;
	var uLocal_9894 = 0;
	var uLocal_9895 = 0;
	var uLocal_9896 = 0;
	var uLocal_9897 = 0;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 0;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 0;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = 0;
	var uLocal_9938 = 0;
	var uLocal_9939 = 0;
	var uLocal_9940 = 0;
	var uLocal_9941 = 0;
	var uLocal_9942 = 0;
	var uLocal_9943 = 0;
	var uLocal_9944 = 0;
	var uLocal_9945 = 0;
	var uLocal_9946 = 0;
	var uLocal_9947 = 0;
	var uLocal_9948 = 0;
	var uLocal_9949 = 0;
	var uLocal_9950 = 0;
	var uLocal_9951 = 0;
	var uLocal_9952 = 0;
	var uLocal_9953 = 0;
	var uLocal_9954 = 0;
	var uLocal_9955 = 0;
	var uLocal_9956 = 0;
	var uLocal_9957 = 0;
	var uLocal_9958 = 0;
	var uLocal_9959 = 0;
	var uLocal_9960 = 0;
	var uLocal_9961 = 0;
	var uLocal_9962 = 0;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 0;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 0;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = 0;
	var uLocal_10003 = 0;
	var uLocal_10004 = 0;
	var uLocal_10005 = 0;
	var uLocal_10006 = 0;
	var uLocal_10007 = 0;
	var uLocal_10008 = 0;
	var uLocal_10009 = 0;
	var uLocal_10010 = 0;
	var uLocal_10011 = 0;
	var uLocal_10012 = 0;
	var uLocal_10013 = 0;
	var uLocal_10014 = 0;
	var uLocal_10015 = 0;
	var uLocal_10016 = 0;
	var uLocal_10017 = 0;
	var uLocal_10018 = 0;
	var uLocal_10019 = 0;
	var uLocal_10020 = 0;
	var uLocal_10021 = 0;
	var uLocal_10022 = 0;
	var uLocal_10023 = 0;
	var uLocal_10024 = 0;
	var uLocal_10025 = 0;
	var uLocal_10026 = 0;
	var uLocal_10027 = 0;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 0;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 0;
	var uLocal_10053 = 0;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = 0;
	var uLocal_10068 = 0;
	var uLocal_10069 = 0;
	var uLocal_10070 = 0;
	var uLocal_10071 = 0;
	var uLocal_10072 = 0;
	var uLocal_10073 = 0;
	var uLocal_10074 = 0;
	var uLocal_10075 = 0;
	var uLocal_10076 = 0;
	var uLocal_10077 = 0;
	var uLocal_10078 = 0;
	var uLocal_10079 = 0;
	var uLocal_10080 = 0;
	var uLocal_10081 = 0;
	var uLocal_10082 = 0;
	var uLocal_10083 = 0;
	var uLocal_10084 = 0;
	var uLocal_10085 = 0;
	var uLocal_10086 = 0;
	var uLocal_10087 = 0;
	var uLocal_10088 = 0;
	var uLocal_10089 = 0;
	var uLocal_10090 = 0;
	var uLocal_10091 = 0;
	var uLocal_10092 = 0;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 0;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 0;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = 0;
	var uLocal_10133 = 0;
	var uLocal_10134 = 0;
	var uLocal_10135 = 0;
	var uLocal_10136 = 0;
	var uLocal_10137 = 0;
	var uLocal_10138 = 0;
	var uLocal_10139 = 0;
	var uLocal_10140 = 0;
	var uLocal_10141 = 0;
	var uLocal_10142 = 0;
	var uLocal_10143 = 0;
	var uLocal_10144 = 0;
	var uLocal_10145 = 0;
	var uLocal_10146 = 0;
	var uLocal_10147 = 0;
	var uLocal_10148 = 0;
	var uLocal_10149 = 0;
	var uLocal_10150 = 0;
	var uLocal_10151 = 0;
	var uLocal_10152 = 0;
	var uLocal_10153 = 0;
	var uLocal_10154 = 0;
	var uLocal_10155 = 0;
	var uLocal_10156 = 0;
	var uLocal_10157 = 0;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 0;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 0;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = 0;
	var uLocal_10182 = 0;
	var uLocal_10183 = 0;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = 0;
	var uLocal_10198 = 0;
	var uLocal_10199 = 0;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 0;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 0;
	var uLocal_10211 = 0;
	var uLocal_10212 = 0;
	var uLocal_10213 = 0;
	var uLocal_10214 = 0;
	var uLocal_10215 = 0;
	var uLocal_10216 = 0;
	var uLocal_10217 = 0;
	var uLocal_10218 = 0;
	var uLocal_10219 = 0;
	var uLocal_10220 = 0;
	var uLocal_10221 = 0;
	var uLocal_10222 = 0;
	var uLocal_10223 = 0;
	var uLocal_10224 = 0;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 0;
	var uLocal_10231 = 0;
	var uLocal_10232 = 0;
	var uLocal_10233 = 0;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 0;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = 0;
	var uLocal_10247 = 0;
	var uLocal_10248 = 0;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = 0;
	var uLocal_10263 = 0;
	var uLocal_10264 = 0;
	var uLocal_10265 = 0;
	var uLocal_10266 = 0;
	var uLocal_10267 = 0;
	var uLocal_10268 = 0;
	var uLocal_10269 = 0;
	var uLocal_10270 = 0;
	var uLocal_10271 = 0;
	var uLocal_10272 = 0;
	var uLocal_10273 = 0;
	var uLocal_10274 = 0;
	var uLocal_10275 = 0;
	var uLocal_10276 = 0;
	var uLocal_10277 = 0;
	var uLocal_10278 = 0;
	var uLocal_10279 = 0;
	var uLocal_10280 = 0;
	var uLocal_10281 = 0;
	var uLocal_10282 = 0;
	var uLocal_10283 = 0;
	var uLocal_10284 = 0;
	var uLocal_10285 = 0;
	var uLocal_10286 = 0;
	var uLocal_10287 = 0;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 0;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 0;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = 0;
	var uLocal_10312 = 40;
	var uLocal_10313 = 0;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = 0;
	var uLocal_10328 = 0;
	var uLocal_10329 = 0;
	var uLocal_10330 = 0;
	var uLocal_10331 = 0;
	var uLocal_10332 = 0;
	var uLocal_10333 = 0;
	var uLocal_10334 = 0;
	var uLocal_10335 = 0;
	var uLocal_10336 = 0;
	var uLocal_10337 = 0;
	var uLocal_10338 = 0;
	var uLocal_10339 = 0;
	var uLocal_10340 = 0;
	var uLocal_10341 = 0;
	var uLocal_10342 = 0;
	var uLocal_10343 = 0;
	var uLocal_10344 = 0;
	var uLocal_10345 = 0;
	var uLocal_10346 = 0;
	var uLocal_10347 = 0;
	var uLocal_10348 = 0;
	var uLocal_10349 = 0;
	var uLocal_10350 = 0;
	var uLocal_10351 = 0;
	var uLocal_10352 = 0;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 0;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 0;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = 0;
	var uLocal_10377 = 0;
	var uLocal_10378 = 0;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 0;
	var uLocal_10392 = 0;
	var uLocal_10393 = 0;
	var uLocal_10394 = 0;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 0;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = 0;
	var uLocal_10403 = 0;
	var uLocal_10404 = 0;
	var uLocal_10405 = 0;
	var uLocal_10406 = 0;
	var uLocal_10407 = 0;
	var uLocal_10408 = 0;
	var uLocal_10409 = 0;
	var uLocal_10410 = 0;
	var uLocal_10411 = 0;
	var uLocal_10412 = 0;
	var uLocal_10413 = 0;
	var uLocal_10414 = 0;
	var uLocal_10415 = 0;
	var uLocal_10416 = 0;
	var uLocal_10417 = 0;
	var uLocal_10418 = 0;
	var uLocal_10419 = 0;
	var uLocal_10420 = 0;
	var uLocal_10421 = 0;
	var uLocal_10422 = 0;
	var uLocal_10423 = 0;
	var uLocal_10424 = 0;
	var uLocal_10425 = 0;
	var uLocal_10426 = 0;
	var uLocal_10427 = 0;
	var uLocal_10428 = 0;
	var uLocal_10429 = 0;
	var uLocal_10430 = 0;
	var uLocal_10431 = 0;
	var uLocal_10432 = 0;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 0;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = 0;
	var uLocal_10442 = 0;
	var uLocal_10443 = 0;
	var uLocal_10444 = 0;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 0;
	var uLocal_10453 = 0;
	var uLocal_10454 = 0;
	var uLocal_10455 = 0;
	var uLocal_10456 = 0;
	var uLocal_10457 = 0;
	var uLocal_10458 = 0;
	var uLocal_10459 = 0;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 0;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = 0;
	var uLocal_10468 = 0;
	var uLocal_10469 = 0;
	var uLocal_10470 = 0;
	var uLocal_10471 = 0;
	var uLocal_10472 = 0;
	var uLocal_10473 = 0;
	var uLocal_10474 = 0;
	var uLocal_10475 = 0;
	var uLocal_10476 = 0;
	var uLocal_10477 = 0;
	var uLocal_10478 = 0;
	var uLocal_10479 = 0;
	var uLocal_10480 = 0;
	var uLocal_10481 = 0;
	var uLocal_10482 = 0;
	var uLocal_10483 = 0;
	var uLocal_10484 = 0;
	var uLocal_10485 = 0;
	var uLocal_10486 = 0;
	var uLocal_10487 = 0;
	var uLocal_10488 = 0;
	var uLocal_10489 = 0;
	var uLocal_10490 = 0;
	var uLocal_10491 = 0;
	var uLocal_10492 = 0;
	var uLocal_10493 = 0;
	var uLocal_10494 = 0;
	var uLocal_10495 = 0;
	var uLocal_10496 = 0;
	var uLocal_10497 = 0;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 0;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = 0;
	var uLocal_10507 = 0;
	var uLocal_10508 = 0;
	var uLocal_10509 = 0;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 0;
	var uLocal_10518 = 0;
	var uLocal_10519 = 0;
	var uLocal_10520 = 0;
	var uLocal_10521 = 0;
	var uLocal_10522 = 0;
	var uLocal_10523 = 0;
	var uLocal_10524 = 0;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 0;
	var uLocal_10528 = 0;
	var uLocal_10529 = 0;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = 0;
	var uLocal_10533 = 0;
	var uLocal_10534 = 0;
	var uLocal_10535 = 0;
	var uLocal_10536 = 0;
	var uLocal_10537 = 0;
	var uLocal_10538 = 0;
	var uLocal_10539 = 0;
	var uLocal_10540 = 0;
	var uLocal_10541 = 0;
	var uLocal_10542 = 0;
	var uLocal_10543 = 0;
	var uLocal_10544 = 0;
	var uLocal_10545 = 0;
	var uLocal_10546 = 0;
	var uLocal_10547 = 0;
	var uLocal_10548 = 0;
	var uLocal_10549 = 0;
	var uLocal_10550 = 0;
	var uLocal_10551 = 0;
	var uLocal_10552 = 0;
	var uLocal_10553 = 0;
	var uLocal_10554 = 0;
	var uLocal_10555 = 0;
	var uLocal_10556 = 0;
	var uLocal_10557 = 0;
	var uLocal_10558 = 0;
	var uLocal_10559 = 0;
	var uLocal_10560 = 0;
	var uLocal_10561 = 0;
	var uLocal_10562 = 0;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 0;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = 0;
	var uLocal_10572 = 0;
	var uLocal_10573 = 0;
	var uLocal_10574 = 0;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 0;
	var uLocal_10583 = 0;
	var uLocal_10584 = 0;
	var uLocal_10585 = 0;
	var uLocal_10586 = 0;
	var uLocal_10587 = 0;
	var uLocal_10588 = 0;
	var uLocal_10589 = 0;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 0;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = 0;
	var uLocal_10598 = 0;
	var uLocal_10599 = 0;
	var uLocal_10600 = 0;
	var uLocal_10601 = 0;
	var uLocal_10602 = 0;
	var uLocal_10603 = 0;
	var uLocal_10604 = 0;
	var uLocal_10605 = 0;
	var uLocal_10606 = 0;
	var uLocal_10607 = 0;
	var uLocal_10608 = 0;
	var uLocal_10609 = 0;
	var uLocal_10610 = 0;
	var uLocal_10611 = 0;
	var uLocal_10612 = 0;
	var uLocal_10613 = 0;
	var uLocal_10614 = 0;
	var uLocal_10615 = 0;
	var uLocal_10616 = 0;
	var uLocal_10617 = 0;
	var uLocal_10618 = 0;
	var uLocal_10619 = 0;
	var uLocal_10620 = 0;
	var uLocal_10621 = 0;
	var uLocal_10622 = 0;
	var uLocal_10623 = 0;
	var uLocal_10624 = 0;
	var uLocal_10625 = 0;
	var uLocal_10626 = 0;
	var uLocal_10627 = 0;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 0;
	var uLocal_10639 = 0;
	var uLocal_10640 = 0;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 0;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 0;
	var uLocal_10676 = 0;
	var uLocal_10677 = 0;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 0;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = 0;
	var uLocal_10691 = 0;
	var uLocal_10692 = 0;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 0;
	var uLocal_10704 = 0;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 0;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 0;
	var uLocal_10741 = 0;
	var uLocal_10742 = 0;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 0;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = 0;
	var uLocal_10756 = 0;
	var uLocal_10757 = 0;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 0;
	var uLocal_10769 = 0;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 0;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 0;
	var uLocal_10806 = 0;
	var uLocal_10807 = 0;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 0;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = 0;
	var uLocal_10821 = 0;
	var uLocal_10822 = 0;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 0;
	var uLocal_10834 = 0;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 0;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 0;
	var uLocal_10871 = 0;
	var uLocal_10872 = 0;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 0;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = 0;
	var uLocal_10886 = 0;
	var uLocal_10887 = 0;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 0;
	var uLocal_10899 = 0;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 0;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 0;
	var uLocal_10936 = 0;
	var uLocal_10937 = 0;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 0;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = 0;
	var uLocal_10951 = 0;
	var uLocal_10952 = 0;
	var uLocal_10953 = 60;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 0;
	var uLocal_10964 = 0;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 0;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 0;
	var uLocal_10989 = 0;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 0;
	var uLocal_11001 = 0;
	var uLocal_11002 = 0;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 0;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 0;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 0;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 0;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	var uLocal_11331 = 0;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 0;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = 0;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = 0;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 0;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 0;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 15;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 0;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 10;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = -1;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 0;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 65;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = 0;
	var uLocal_12208 = -1569615261;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = -1569615261;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = 0;
	var uLocal_12234 = -1569615261;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = 0;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = -1569615261;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = -1569615261;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = -1569615261;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = 0;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = -1569615261;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = -1569615261;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = -1569615261;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = -1569615261;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = 0;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = -1569615261;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 0;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = -1569615261;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = -1569615261;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = 0;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = -1569615261;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 0;
	var uLocal_12387 = 0;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = -1569615261;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = -1569615261;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = -1569615261;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = 0;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = -1569615261;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = 0;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = -1569615261;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = 0;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = -1569615261;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = 0;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = -1569615261;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = 0;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = -1569615261;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 0;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = -1569615261;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = -1569615261;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = 0;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = -1569615261;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = -1569615261;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = -1569615261;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = -1569615261;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = 0;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = -1569615261;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 0;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = -1569615261;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = -1569615261;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = 0;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = -1569615261;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 0;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = -1569615261;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = -1569615261;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = -1569615261;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = -1569615261;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = 0;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = -1569615261;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = -1569615261;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = 0;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = -1569615261;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = 0;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = -1569615261;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = -1569615261;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = -1569615261;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = -1569615261;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = -1569615261;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = -1569615261;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = -1569615261;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 0;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = -1569615261;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = -1569615261;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = -1569615261;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = -1569615261;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = -1569615261;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = -1569615261;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = 0;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = -1569615261;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = -1569615261;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = -1569615261;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = -1569615261;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = -1569615261;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = -1569615261;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = -1569615261;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = -1569615261;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = -1569615261;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = -1569615261;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = -1569615261;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = -1569615261;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = -1569615261;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 1;
	var uLocal_13059 = 30;
	var uLocal_13060 = -1;
	var uLocal_13061 = 0;
	var uLocal_13062 = 1;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 1065353216;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 1065353216;
	var uLocal_13076 = 1;
	var uLocal_13077 = 0;
	var uLocal_13078 = -1;
	var uLocal_13079 = 0;
	var uLocal_13080 = 1;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 1065353216;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 1065353216;
	var uLocal_13094 = 1;
	var uLocal_13095 = 0;
	var uLocal_13096 = -1;
	var uLocal_13097 = 0;
	var uLocal_13098 = 1;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 1065353216;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 1065353216;
	var uLocal_13112 = 1;
	var uLocal_13113 = 0;
	var uLocal_13114 = -1;
	var uLocal_13115 = 0;
	var uLocal_13116 = 1;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 1065353216;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 1065353216;
	var uLocal_13130 = 1;
	var uLocal_13131 = 0;
	var uLocal_13132 = -1;
	var uLocal_13133 = 0;
	var uLocal_13134 = 1;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 1065353216;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 1065353216;
	var uLocal_13148 = 1;
	var uLocal_13149 = 0;
	var uLocal_13150 = -1;
	var uLocal_13151 = 0;
	var uLocal_13152 = 1;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 1065353216;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 1065353216;
	var uLocal_13166 = 1;
	var uLocal_13167 = 0;
	var uLocal_13168 = -1;
	var uLocal_13169 = 0;
	var uLocal_13170 = 1;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 1065353216;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 1065353216;
	var uLocal_13184 = 1;
	var uLocal_13185 = 0;
	var uLocal_13186 = -1;
	var uLocal_13187 = 0;
	var uLocal_13188 = 1;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 1065353216;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 1065353216;
	var uLocal_13202 = 1;
	var uLocal_13203 = 0;
	var uLocal_13204 = -1;
	var uLocal_13205 = 0;
	var uLocal_13206 = 1;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 1065353216;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 1065353216;
	var uLocal_13220 = 1;
	var uLocal_13221 = 0;
	var uLocal_13222 = -1;
	var uLocal_13223 = 0;
	var uLocal_13224 = 1;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 1065353216;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 1065353216;
	var uLocal_13238 = 1;
	var uLocal_13239 = 0;
	var uLocal_13240 = -1;
	var uLocal_13241 = 0;
	var uLocal_13242 = 1;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 1065353216;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 1065353216;
	var uLocal_13256 = 1;
	var uLocal_13257 = 0;
	var uLocal_13258 = -1;
	var uLocal_13259 = 0;
	var uLocal_13260 = 1;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 1065353216;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 1065353216;
	var uLocal_13274 = 1;
	var uLocal_13275 = 0;
	var uLocal_13276 = -1;
	var uLocal_13277 = 0;
	var uLocal_13278 = 1;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 1065353216;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 1065353216;
	var uLocal_13292 = 1;
	var uLocal_13293 = 0;
	var uLocal_13294 = -1;
	var uLocal_13295 = 0;
	var uLocal_13296 = 1;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 1065353216;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 1065353216;
	var uLocal_13310 = 1;
	var uLocal_13311 = 0;
	var uLocal_13312 = -1;
	var uLocal_13313 = 0;
	var uLocal_13314 = 1;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 1065353216;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 1065353216;
	var uLocal_13328 = 1;
	var uLocal_13329 = 0;
	var uLocal_13330 = -1;
	var uLocal_13331 = 0;
	var uLocal_13332 = 1;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 1065353216;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 1065353216;
	var uLocal_13346 = 1;
	var uLocal_13347 = 0;
	var uLocal_13348 = -1;
	var uLocal_13349 = 0;
	var uLocal_13350 = 1;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 1065353216;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 1065353216;
	var uLocal_13364 = 1;
	var uLocal_13365 = 0;
	var uLocal_13366 = -1;
	var uLocal_13367 = 0;
	var uLocal_13368 = 1;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 1065353216;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 1065353216;
	var uLocal_13382 = 1;
	var uLocal_13383 = 0;
	var uLocal_13384 = -1;
	var uLocal_13385 = 0;
	var uLocal_13386 = 1;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 1065353216;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 1065353216;
	var uLocal_13400 = 1;
	var uLocal_13401 = 0;
	var uLocal_13402 = -1;
	var uLocal_13403 = 0;
	var uLocal_13404 = 1;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 1065353216;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 1065353216;
	var uLocal_13418 = 1;
	var uLocal_13419 = 0;
	var uLocal_13420 = -1;
	var uLocal_13421 = 0;
	var uLocal_13422 = 1;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 1065353216;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 1065353216;
	var uLocal_13436 = 1;
	var uLocal_13437 = 0;
	var uLocal_13438 = -1;
	var uLocal_13439 = 0;
	var uLocal_13440 = 1;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 1065353216;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 1065353216;
	var uLocal_13454 = 1;
	var uLocal_13455 = 0;
	var uLocal_13456 = -1;
	var uLocal_13457 = 0;
	var uLocal_13458 = 1;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 1065353216;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 1065353216;
	var uLocal_13472 = 1;
	var uLocal_13473 = 0;
	var uLocal_13474 = -1;
	var uLocal_13475 = 0;
	var uLocal_13476 = 1;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 1065353216;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 1065353216;
	var uLocal_13490 = 1;
	var uLocal_13491 = 0;
	var uLocal_13492 = -1;
	var uLocal_13493 = 0;
	var uLocal_13494 = 1;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 1065353216;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 1065353216;
	var uLocal_13508 = 1;
	var uLocal_13509 = 0;
	var uLocal_13510 = -1;
	var uLocal_13511 = 0;
	var uLocal_13512 = 1;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 1065353216;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = 1065353216;
	var uLocal_13526 = 1;
	var uLocal_13527 = 0;
	var uLocal_13528 = -1;
	var uLocal_13529 = 0;
	var uLocal_13530 = 1;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 1065353216;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 1065353216;
	var uLocal_13544 = 1;
	var uLocal_13545 = 0;
	var uLocal_13546 = -1;
	var uLocal_13547 = 0;
	var uLocal_13548 = 1;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 1065353216;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 1065353216;
	var uLocal_13562 = 1;
	var uLocal_13563 = 0;
	var uLocal_13564 = -1;
	var uLocal_13565 = 0;
	var uLocal_13566 = 1;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 1065353216;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 1065353216;
	var uLocal_13580 = 1;
	var uLocal_13581 = 0;
	var uLocal_13582 = -1;
	var uLocal_13583 = 0;
	var uLocal_13584 = 1;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 1065353216;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 1065353216;
	var uLocal_13598 = 1;
	var uLocal_13599 = 0;
	var uLocal_13600 = 8;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 0;
	var uLocal_13617 = 0;
	var uLocal_13618 = 0;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 0;
	var uLocal_13635 = 0;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 0;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 0;
	var uLocal_13815 = 0;
	var uLocal_13816 = 0;
	var uLocal_13817 = 0;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = 0;
	var uLocal_13861 = 0;
	var uLocal_13862 = 0;
	var uLocal_13863 = 0;
	var uLocal_13864 = 0;
	var uLocal_13865 = 0;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 0;
	var uLocal_13869 = 0;
	var uLocal_13870 = 0;
	var uLocal_13871 = 0;
	var uLocal_13872 = 0;
	var uLocal_13873 = 0;
	var uLocal_13874 = 0;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 0;
	var uLocal_13878 = 0;
	var uLocal_13879 = 0;
	var uLocal_13880 = 0;
	var uLocal_13881 = 0;
	var uLocal_13882 = 0;
	var uLocal_13883 = 0;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 0;
	var uLocal_13887 = 0;
	var uLocal_13888 = 0;
	var uLocal_13889 = 0;
	var uLocal_13890 = 0;
	var uLocal_13891 = 0;
	var uLocal_13892 = 0;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 0;
	var uLocal_13896 = 0;
	var uLocal_13897 = 0;
	var uLocal_13898 = 0;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 0;
	var uLocal_13909 = 0;
	var uLocal_13910 = 0;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 0;
	var uLocal_13914 = 0;
	var uLocal_13915 = 0;
	var uLocal_13916 = 0;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 0;
	var uLocal_13927 = 0;
	var uLocal_13928 = 0;
	var uLocal_13929 = 8;
	var uLocal_13930 = 0;
	var uLocal_13931 = 0;
	var uLocal_13932 = 0;
	var uLocal_13933 = 0;
	var uLocal_13934 = 0;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 0;
	var uLocal_13945 = 0;
	var uLocal_13946 = 0;
	var uLocal_13947 = 0;
	var uLocal_13948 = 0;
	var uLocal_13949 = 0;
	var uLocal_13950 = -1;
	var uLocal_13951 = 0;
	var uLocal_13952 = 0;
	var uLocal_13953 = 0;
	var uLocal_13954 = 0;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 0;
	var uLocal_13963 = 0;
	var uLocal_13964 = 0;
	var uLocal_13965 = 0;
	var uLocal_13966 = 0;
	var uLocal_13967 = 0;
	var uLocal_13968 = 0;
	var uLocal_13969 = 0;
	var uLocal_13970 = 0;
	var uLocal_13971 = 0;
	var uLocal_13972 = -1;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 0;
	var uLocal_13981 = 0;
	var uLocal_13982 = 0;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = 0;
	var uLocal_13986 = 0;
	var uLocal_13987 = 0;
	var uLocal_13988 = 0;
	var uLocal_13989 = 0;
	var uLocal_13990 = 0;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = -1;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 0;
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = 0;
	var uLocal_14004 = 0;
	var uLocal_14005 = 0;
	var uLocal_14006 = 0;
	var uLocal_14007 = 0;
	var uLocal_14008 = 0;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = -1;
	var uLocal_14017 = 0;
	var uLocal_14018 = 0;
	var uLocal_14019 = 0;
	var uLocal_14020 = 0;
	var uLocal_14021 = 0;
	var uLocal_14022 = 0;
	var uLocal_14023 = 0;
	var uLocal_14024 = 0;
	var uLocal_14025 = 0;
	var uLocal_14026 = 0;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = 0;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 0;
	var uLocal_14035 = 0;
	var uLocal_14036 = 0;
	var uLocal_14037 = 0;
	var uLocal_14038 = -1;
	var uLocal_14039 = 0;
	var uLocal_14040 = 0;
	var uLocal_14041 = 0;
	var uLocal_14042 = 0;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = 0;
	var uLocal_14052 = 0;
	var uLocal_14053 = 0;
	var uLocal_14054 = 0;
	var uLocal_14055 = 0;
	var uLocal_14056 = 0;
	var uLocal_14057 = 0;
	var uLocal_14058 = 0;
	var uLocal_14059 = 0;
	var uLocal_14060 = -1;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 0;
	var uLocal_14071 = 0;
	var uLocal_14072 = 0;
	var uLocal_14073 = 0;
	var uLocal_14074 = 0;
	var uLocal_14075 = 0;
	var uLocal_14076 = 0;
	var uLocal_14077 = 0;
	var uLocal_14078 = 0;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = -1;
	var uLocal_14083 = 0;
	var uLocal_14084 = 0;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = 0;
	var uLocal_14096 = 0;
	var uLocal_14097 = 0;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = -1;
	var uLocal_14105 = 0;
	var uLocal_14106 = 11;
	var uLocal_14107 = 0;
	var uLocal_14108 = 0;
	var uLocal_14109 = 0;
	var uLocal_14110 = 0;
	var uLocal_14111 = 0;
	var uLocal_14112 = 0;
	var uLocal_14113 = 0;
	var uLocal_14114 = 0;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = 0;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 0;
	var uLocal_14124 = 0;
	var uLocal_14125 = 0;
	var uLocal_14126 = 0;
	var uLocal_14127 = 0;
	var uLocal_14128 = 0;
	var uLocal_14129 = 0;
	var uLocal_14130 = 0;
	var uLocal_14131 = 0;
	var uLocal_14132 = 0;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 0;
	var uLocal_14142 = 0;
	var uLocal_14143 = 0;
	var uLocal_14144 = 0;
	var uLocal_14145 = 0;
	var uLocal_14146 = 0;
	var uLocal_14147 = 0;
	var uLocal_14148 = 0;
	var uLocal_14149 = 0;
	var uLocal_14150 = 0;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 0;
	var uLocal_14161 = 0;
	var uLocal_14162 = 0;
	var uLocal_14163 = 0;
	var uLocal_14164 = 0;
	var uLocal_14165 = 0;
	var uLocal_14166 = 0;
	var uLocal_14167 = 0;
	var uLocal_14168 = 0;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 0;
	var uLocal_14179 = 0;
	var uLocal_14180 = 0;
	var uLocal_14181 = 0;
	var uLocal_14182 = 0;
	var uLocal_14183 = 0;
	var uLocal_14184 = 0;
	var uLocal_14185 = 0;
	var uLocal_14186 = 0;
	var uLocal_14187 = 0;
	var uLocal_14188 = 0;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 0;
	var uLocal_14197 = 0;
	var uLocal_14198 = 0;
	var uLocal_14199 = 0;
	var uLocal_14200 = 0;
	var uLocal_14201 = 0;
	var uLocal_14202 = 0;
	var uLocal_14203 = 0;
	var uLocal_14204 = 0;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = 0;
	var uLocal_14215 = 0;
	var uLocal_14216 = 0;
	var uLocal_14217 = 2;
	var uLocal_14218 = 0;
	var uLocal_14219 = 0;
	var uLocal_14220 = 0;
	var uLocal_14221 = 0;
	var uLocal_14222 = 0;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = 0;
	var uLocal_14228 = 0;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 0;
	var uLocal_14232 = 0;
	var uLocal_14233 = 0;
	var uLocal_14234 = 0;
	var uLocal_14235 = 0;
	var uLocal_14236 = 0;
	var uLocal_14237 = 0;
	var uLocal_14238 = 0;
	var uLocal_14239 = 0;
	var uLocal_14240 = 0;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 0;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 0;
	var uLocal_14250 = 0;
	var uLocal_14251 = 0;
	var uLocal_14252 = 2;
	var uLocal_14253 = 0;
	var uLocal_14254 = 0;
	var uLocal_14255 = 0;
	var uLocal_14256 = 0;
	var uLocal_14257 = 0;
	var uLocal_14258 = 0;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 0;
	var uLocal_14265 = 0;
	var uLocal_14266 = 0;
	var uLocal_14267 = 0;
	var uLocal_14268 = 0;
	var uLocal_14269 = -1;
	var uLocal_14270 = 0;
	var uLocal_14271 = 0;
	var uLocal_14272 = -1;
	var uLocal_14273 = -1082130432;
	var uLocal_14274 = 0;
	var uLocal_14275 = 0;
	var uLocal_14276 = 0;
	var uLocal_14277 = 0;
	var uLocal_14278 = 0;
	var uLocal_14279 = 0;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 0;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 0;
	var uLocal_14286 = 0;
	var uLocal_14287 = 0;
	var uLocal_14288 = 0;
	var uLocal_14289 = 0;
	var uLocal_14290 = 0;
	var uLocal_14291 = 0;
	var uLocal_14292 = 0;
	var uLocal_14293 = 0;
	var uLocal_14294 = 0;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = 0;
	var uLocal_14300 = 0;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 0;
	var uLocal_14304 = 0;
	var uLocal_14305 = 0;
	var uLocal_14306 = 0;
	var uLocal_14307 = 0;
	var uLocal_14308 = 0;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 0;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = 0;
	var uLocal_14322 = 0;
	var uLocal_14323 = 0;
	var uLocal_14324 = 0;
	var uLocal_14325 = 0;
	var uLocal_14326 = 0;
	var uLocal_14327 = 0;
	var uLocal_14328 = 0;
	var uLocal_14329 = 0;
	var uLocal_14330 = 0;
	var uLocal_14331 = 0;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 0;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 0;
	var uLocal_14340 = 0;
	var uLocal_14341 = 0;
	var uLocal_14342 = 0;
	var uLocal_14343 = 0;
	var uLocal_14344 = 0;
	var uLocal_14345 = 0;
	var uLocal_14346 = 0;
	var uLocal_14347 = 0;
	var uLocal_14348 = 0;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 0;
	var uLocal_14355 = 24;
	var uLocal_14356 = 0;
	var uLocal_14357 = 0;
	var uLocal_14358 = 0;
	var uLocal_14359 = 0;
	var uLocal_14360 = 0;
	var uLocal_14361 = 0;
	var uLocal_14362 = 0;
	var uLocal_14363 = 0;
	var uLocal_14364 = 0;
	var uLocal_14365 = 0;
	var uLocal_14366 = 0;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = 0;
	var uLocal_14371 = 0;
	var uLocal_14372 = 0;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 0;
	var uLocal_14376 = 0;
	var uLocal_14377 = 0;
	var uLocal_14378 = 0;
	var uLocal_14379 = 0;
	var uLocal_14380 = 0;
	var uLocal_14381 = 0;
	var uLocal_14382 = 0;
	var uLocal_14383 = 0;
	var uLocal_14384 = 0;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 0;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 0;
	var uLocal_14394 = 0;
	var uLocal_14395 = 0;
	var uLocal_14396 = 0;
	var uLocal_14397 = 0;
	var uLocal_14398 = 0;
	var uLocal_14399 = 0;
	var uLocal_14400 = 0;
	var uLocal_14401 = 0;
	var uLocal_14402 = 0;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 0;
	var uLocal_14409 = 0;
	var uLocal_14410 = 0;
	var uLocal_14411 = 0;
	var uLocal_14412 = 0;
	var uLocal_14413 = 0;
	var uLocal_14414 = 0;
	var uLocal_14415 = 0;
	var uLocal_14416 = 0;
	var uLocal_14417 = 0;
	var uLocal_14418 = 0;
	var uLocal_14419 = 0;
	var uLocal_14420 = 0;
	var uLocal_14421 = 0;
	var uLocal_14422 = 0;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 0;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 0;
	var uLocal_14430 = 0;
	var uLocal_14431 = 0;
	var uLocal_14432 = 0;
	var uLocal_14433 = 0;
	var uLocal_14434 = 0;
	var uLocal_14435 = 0;
	var uLocal_14436 = 0;
	var uLocal_14437 = 0;
	var uLocal_14438 = 0;
	var uLocal_14439 = 0;
	var uLocal_14440 = 0;
	var uLocal_14441 = 0;
	var uLocal_14442 = 0;
	var uLocal_14443 = 0;
	var uLocal_14444 = 0;
	var uLocal_14445 = 0;
	var uLocal_14446 = 0;
	var uLocal_14447 = 0;
	var uLocal_14448 = 0;
	var uLocal_14449 = 0;
	var uLocal_14450 = 0;
	var uLocal_14451 = 0;
	var uLocal_14452 = 0;
	var uLocal_14453 = 0;
	var uLocal_14454 = 0;
	var uLocal_14455 = 0;
	var uLocal_14456 = 0;
	var uLocal_14457 = 0;
	var uLocal_14458 = 0;
	var uLocal_14459 = 0;
	var uLocal_14460 = 0;
	var uLocal_14461 = 0;
	var uLocal_14462 = 0;
	var uLocal_14463 = 0;
	var uLocal_14464 = 0;
	var uLocal_14465 = 0;
	var uLocal_14466 = 0;
	var uLocal_14467 = 0;
	var uLocal_14468 = 0;
	var uLocal_14469 = 0;
	var uLocal_14470 = 0;
	var uLocal_14471 = 0;
	var uLocal_14472 = 0;
	var uLocal_14473 = 0;
	var uLocal_14474 = 0;
	var uLocal_14475 = 0;
	var uLocal_14476 = 0;
	var uLocal_14477 = 0;
	var uLocal_14478 = 0;
	var uLocal_14479 = -1;
	var uLocal_14480 = 0;
	var uLocal_14481 = 0;
	var uLocal_14482 = 0;
	var uLocal_14483 = 0;
	var uLocal_14484 = 0;
	var uLocal_14485 = 0;
	var uLocal_14486 = 0;
	var uLocal_14487 = 0;
	var uLocal_14488 = 0;
	var uLocal_14489 = 0;
	var uLocal_14490 = 0;
	var uLocal_14491 = 0;
	var uLocal_14492 = 0;
	var uLocal_14493 = 0;
	var uLocal_14494 = 0;
	var uLocal_14495 = 0;
	var uLocal_14496 = 0;
	var uLocal_14497 = 0;
	var uLocal_14498 = 0;
	var uLocal_14499 = 0;
	var uLocal_14500 = 0;
	var uLocal_14501 = 0;
	var uLocal_14502 = 0;
	var uLocal_14503 = 0;
	var uLocal_14504 = 0;
	var uLocal_14505 = 0;
	var uLocal_14506 = -1;
	var uLocal_14507 = 20;
	var uLocal_14508 = 0;
	var uLocal_14509 = 0;
	var uLocal_14510 = 0;
	var uLocal_14511 = 0;
	var uLocal_14512 = 0;
	var uLocal_14513 = 0;
	var uLocal_14514 = 0;
	var uLocal_14515 = 0;
	var uLocal_14516 = 0;
	var uLocal_14517 = 0;
	var uLocal_14518 = 0;
	var uLocal_14519 = 0;
	var uLocal_14520 = 0;
	var uLocal_14521 = 0;
	var uLocal_14522 = 0;
	var uLocal_14523 = 0;
	var uLocal_14524 = 0;
	var uLocal_14525 = 0;
	var uLocal_14526 = 0;
	var uLocal_14527 = 0;
	var uLocal_14528 = 0;
	var uLocal_14529 = 0;
	var uLocal_14530 = 0;
	var uLocal_14531 = 0;
	var uLocal_14532 = 0;
	var uLocal_14533 = 0;
	var uLocal_14534 = 0;
	var uLocal_14535 = 1028443341;
	var uLocal_14536 = 1038174126;
	var uLocal_14537 = 1065353216;
	var uLocal_14538 = 1065353216;
	var uLocal_14539 = 1086324736;
	var uLocal_14540 = 1082130432;
	var uLocal_14541 = 1073741824;
	var uLocal_14542 = 1065353216;
	var uLocal_14543 = 1108082688;
	var uLocal_14544 = 1108082688;
	var uLocal_14545 = 3000;
	var uLocal_14546 = 1092616192;
	var uLocal_14547 = 0;
	var uLocal_14548 = 0;
	var uLocal_14549 = 0;
	var uLocal_14550 = 0;
	var uLocal_14551 = 0;
	var uLocal_14552 = 0;
	var uLocal_14553 = 0;
	var uLocal_14554 = 0;
	var uLocal_14555 = 0;
	var uLocal_14556 = 0;
	var uLocal_14557 = 0;
	var uLocal_14558 = 0;
	var uLocal_14559 = 0;
	var uLocal_14560 = 0;
	var uLocal_14561 = 0;
	var uLocal_14562 = 0;
	var uLocal_14563 = 0;
	var uLocal_14564 = 0;
	var uLocal_14565 = 0;
	var uLocal_14566 = 0;
	var uLocal_14567 = 0;
	var uLocal_14568 = 0;
	var uLocal_14569 = 0;
	var uLocal_14570 = 0;
	var uLocal_14571 = 0;
	var uLocal_14572 = 0;
	var uLocal_14573 = 0;
	var uLocal_14574 = 0;
	var uLocal_14575 = 0;
	var uLocal_14576 = 0;
	var uLocal_14577 = 0;
	var uLocal_14578 = 0;
	var uLocal_14579 = 0;
	var uLocal_14580 = 0;
	var uLocal_14581 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_17 = 1;
	iLocal_18 = 2;
	iLocal_19 = 3;
	iLocal_20 = 4;
	iLocal_21 = 5;
	iLocal_22 = 6;
	iLocal_23 = 25;
	iLocal_473 = joaat("CS_MARYLINTON");
	iLocal_474 = joaat("MSP_MARY3_MALES_01");
	iLocal_475 = joaat("CS_ASHTON");
	iLocal_476 = joaat("A_M_M_BIVWORKER_01");
	iLocal_477 = joaat("CS_MRLINTON");
	iLocal_478 = joaat("A_M_M_NBXDOCKWORKERS_01");
	iLocal_479 = joaat("S_M_M_GENCONDUCTOR_01");
	iLocal_480 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iLocal_481 = joaat("ROWBOATSWAMP");
	iLocal_489 = -1;
	iLocal_490 = -1;
	vLocal_507 = { 2255.546f, -875.3812f, 40.68118f };
	vLocal_510 = { 2455.464f, -578.2695f, 40.96408f };
	vLocal_516 = { 2496.476f, -1446.824f, 45.32647f };
	vLocal_519 = { 2493.226f, -1450.587f, 45.1101f };
	sLocal_527 = "AMB_REST_SIT@PROP_HUMAN_SEAT_CHAIR@SAD@FEMALE_B@base";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_6__::func_860(&uLocal_1402, 1073741824 /* Float: 2f */);
		func_2(&uLocal_1402, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_1402);
	func_5(&uLocal_1402);
	while (!__LIB_6__::func_861(&uLocal_1402, -2147483648))
	{
		func_7(&uLocal_1402);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_1402, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	if (__LIB_6__::func_862(cParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(cParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_281(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(cParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_716(1);
		__LIB_0__::func_722(1, 0);
		__LIB_8__::func_703(cParam0, 1);
		__LIB_1__::func_723(0);
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		Global_36605 = 0;
		__LIB_5__::func_384(3);
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!bParam1)
	{
		if (!__LIB_6__::func_861(cParam0, 1048576))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_1__::func_965(0);
			}
			else if (__LIB_6__::func_863(cParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (__LIB_6__::func_863(cParam0) == 1 || __LIB_6__::func_863(cParam0) == 2)
					{
						if (__LIB_4__::func_505(&(cParam0->f_8269)) && __LIB_4__::func_506(&(cParam0->f_8269)))
						{
							__LIB_1__::func_582(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!__LIB_0__::func_899(&(cParam0->f_13118)))
					{
						__LIB_4__::func_89(&(cParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						__LIB_6__::func_860(cParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && __LIB_6__::func_861(cParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !__LIB_17__::func_558(cParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_6__::func_861(cParam0, 80))
						{
							if (!bVar1)
							{
								__LIB_8__::func_722(cParam0);
							}
							return false;
						}
						if (__LIB_6__::func_861(cParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (__LIB_6__::func_863(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (__LIB_0__::func_0(cParam0))
								{
									cParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((cParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > cParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (__LIB_6__::func_863(cParam0) == 1)
						{
							if (__LIB_17__::func_558(cParam0, bVar1))
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						CAM::IS_SCREEN_FADING_IN();
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							return false;
						}
					}
				}
			}
			else if (__LIB_6__::func_861(cParam0, 2))
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
					return false;
				}
				if (MISC::_0x1B065A2BF7953815(1) == 1)
				{
					return false;
				}
			}
			if (!__LIB_4__::func_678() && __LIB_6__::func_863(cParam0) != 0)
			{
				__LIB_8__::func_725(cParam0, func_34(__LIB_6__::func_864(cParam0)), func_34(__LIB_9__::func_40(cParam0)), __LIB_6__::func_864(cParam0), __LIB_9__::func_40(cParam0));
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(cParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(cParam0->f_7375.f_804);
		}
	}
	__LIB_6__::func_860(cParam0, 1048576);
	if (!__LIB_6__::func_861(cParam0, 2097152))
	{
		if (!func_9(cParam0))
		{
			return false;
		}
		__LIB_6__::func_860(cParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	__LIB_5__::func_325(&(cParam0->f_8269));
	if (__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		__LIB_4__::func_507(&(cParam0->f_8269));
	}
	AUDIO::SET_GPS_ACTIVE(false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(1);
	__LIB_0__::func_267(1);
	LAW::_0xC5EB2755FA25F1E9(1);
	__LIB_0__::func_395(0);
	__LIB_4__::func_679();
	__LIB_5__::func_384(3);
	if (!__LIB_6__::func_861(cParam0, 8))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	__LIB_4__::func_716(1);
	__LIB_4__::func_782();
	__LIB_4__::func_680();
	HUD::SET_MISSION_NAME(false, 0);
	__LIB_0__::func_769();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	__LIB_6__::func_865(cParam0);
	__LIB_5__::func_20(1, 0);
	__LIB_0__::func_698(2);
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::_0xAAC0EE3B4999ABB5(Global_35, 0);
		WEAPON::_0xB832F1A686B9B810(Global_35, __LIB_5__::func_21(), 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		__LIB_1__::func_733(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	if (CAM::DOES_CAM_EXIST(cParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(cParam0->f_609.f_2, false);
	}
	__LIB_5__::func_326(&(cParam0->f_10792));
	__LIB_4__::func_508();
	CAM::STOP_GAMEPLAY_HINT(true);
	__LIB_1__::func_600(1);
	__LIB_5__::func_327();
	if (__LIB_1__::func_652())
	{
		STREAMING::_0x2F9AC754FE179D58(0.3f);
	}
	__LIB_4__::func_845(0, 14);
	bVar2 = false;
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		__LIB_8__::func_704(cParam0);
	}
	__LIB_9__::func_412(cParam0, 0, !bVar2, bVar2);
	__LIB_9__::func_70(cParam0, !bVar2);
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	__LIB_4__::func_509(0);
	__LIB_5__::func_329(__LIB_6__::func_866(cParam0));
	__LIB_5__::func_330(__LIB_6__::func_866(cParam0));
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_11(__LIB_6__::func_863(cParam0));
	__LIB_8__::func_658(cParam0);
	if (!bVar2)
	{
		__LIB_0__::func_722(1, 0);
	}
	if (__LIB_6__::func_863(cParam0) != 1)
	{
		__LIB_5__::func_101(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	__LIB_1__::func_978(1);
	__LIB_1__::func_564(0);
	__LIB_0__::func_8(&Global_1935630, 2097152);
	__LIB_1__::func_723(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_5__::func_370(Global_1835011[cParam0->f_607 /*74*/].f_1);
	}
	__LIB_5__::func_102();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (__LIB_6__::func_863(cParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !__LIB_6__::func_861(cParam0, 4)) && !__LIB_6__::func_861(cParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(cParam0);
				__LIB_11__::func_104(cParam0);
				__LIB_0__::func_297();
				__LIB_5__::func_496(__LIB_0__::func_12(), 0);
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_5__::func_126(cParam0->f_607);
				bVar3 = __LIB_0__::func_513();
				if (!__LIB_0__::func_13(32768))
				{
					func_83(__LIB_3__::func_918(cParam0->f_607), !__LIB_6__::func_861(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					__LIB_1__::func_809(__LIB_3__::func_918(cParam0->f_607), bVar3);
				}
				__LIB_8__::func_703(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_9__::func_41(cParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_6__::func_833();
					__LIB_1__::func_141(0);
				}
				else if (__LIB_6__::func_861(cParam0, 2))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					__LIB_1__::func_954(1);
					__LIB_5__::func_116();
					__LIB_0__::func_320(6);
					__LIB_0__::func_319(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				__LIB_1__::func_645(__LIB_3__::func_918(cParam0->f_607));
				__LIB_4__::func_942();
				if (__LIB_6__::func_863(cParam0) == 2)
				{
					__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")), 1);
				}
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
				LAW::_0x07E8B8B20570271C(PLAYER::GET_PLAYER_INDEX());
				break;
			case 5:
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_4__::func_942();
				Var4 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				__LIB_1__::func_559(__LIB_3__::func_918(cParam0->f_607), 0, 2);
				break;
			default:
				func_83(__LIB_3__::func_918(cParam0->f_607), 1, 1, 0, 1);
				__LIB_1__::func_140();
				break;
		}
		if (__LIB_6__::func_863(cParam0) != 0)
		{
			Var6 = { __LIB_6__::func_867(cParam0) };
			__LIB_5__::func_117(__LIB_3__::func_918(cParam0->f_607), __LIB_6__::func_863(cParam0), &Var6, 0, 0, __LIB_6__::func_861(cParam0, 64));
		}
	}
	__LIB_4__::func_510(1);
	__LIB_5__::func_384(3);
	__LIB_6__::func_868(cParam0, 4096);
	return true;
}

void func_4(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::_0xED9582B3DA8F02B4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!__LIB_0__::func_2() == 0)
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_43616) && ITEMSET::GET_ITEMSET_SIZE(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43616);
				iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
				if (((!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3)) && !ITEMSET::IS_IN_ITEMSET(iVar2, iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	__LIB_9__::func_201(cParam1);
	if (!__LIB_0__::func_2() == 0)
	{
		if (__LIB_9__::func_399(cParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < cParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(cParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(cParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(cParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
				}
				iVar4++;
			}
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		PED::_0xF008E0BA1FE1D644(ITEMSET::GET_ITEMSET_SIZE(iVar0));
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (__LIB_4__::func_511())
	{
		__LIB_6__::func_869(cParam1, 4194304);
	}
	if (__LIB_4__::func_512())
	{
		__LIB_6__::func_869(cParam1, 8388608);
	}
	if (__LIB_5__::func_371())
	{
		if (!__LIB_4__::func_512() && !__LIB_4__::func_511())
		{
			__LIB_6__::func_869(cParam1, 4);
		}
		else
		{
			if (__LIB_4__::func_512())
			{
			}
			if (__LIB_4__::func_511())
			{
			}
		}
		__LIB_6__::func_870(cParam1, __LIB_4__::func_513());
	}
	func_108(cParam1, uParam0);
	func_109(cParam1);
	if (cParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((cParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(char[4] cParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	cVar0 = __LIB_0__::func_631(cParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (cParam0->f_607 != 77)
	{
		__LIB_0__::func_496();
		__LIB_1__::func_323(&cVar0, 0);
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_0__::func_105(1);
	__LIB_2__::func_459();
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_769();
	__LIB_0__::func_267(__LIB_6__::func_871(cParam0));
	LAW::_0x55F37F5F3F2475E1();
	LAW::_0x292AD61A33A7A485();
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0x2161278C6322F740(16384, 0, 0, -1, -1, 0);
	}
	__LIB_0__::func_112(1, 0, 1);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	__LIB_4__::func_514(cParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630.f_12)
	{
		__LIB_0__::func_145(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!__LIB_6__::func_872(cParam0, 16384) && (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2) || __LIB_5__::func_371()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
		}
		PED::CLEAR_PED_WETNESS(Global_35);
		PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Global_35);
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
		{
			if ((((WEAPON::_0x2C83212A7AA51D3D(iVar1) || iVar1 == joaat("OBJECT_1")) || iVar1 == joaat("OBJECT_2")) || iVar1 == joaat("OBJECT_3")) || iVar1 == joaat("OBJECT_4"))
			{
				if (!__LIB_5__::func_371() && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
				{
				}
			}
			else if (!__LIB_0__::func_214(iVar1) && !__LIB_0__::func_13(32768))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, iVar1, true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
		}
		WEAPON::_0xB832F1A686B9B810(Global_35, false, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		func_123(cParam0);
	}
	__LIB_1__::func_564(1);
	__LIB_1__::func_600(0);
	__LIB_6__::func_873(cParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_15 = __LIB_6__::func_874(cParam0);
	iLocal_15 = iLocal_15;
	if (!Global_1935630.f_12)
	{
		if (!__LIB_5__::func_371())
		{
			Var2 = { func_34(__LIB_6__::func_864(cParam0)) };
			if (__LIB_6__::func_864(cParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(cParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				__LIB_6__::func_869(cParam0, 1048576);
			}
			__LIB_6__::func_870(cParam0, 0);
			if (__LIB_6__::func_875(cParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_9__::func_194(cParam0, __LIB_1__::func_469(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			__LIB_6__::func_870(cParam0, __LIB_4__::func_513());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[cParam0->f_607 /*74*/].f_8), 0, __LIB_5__::func_24(__LIB_6__::func_864(cParam0)), __LIB_5__::func_371());
	}
	__LIB_9__::func_187(cParam0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 0);
	if (!__LIB_8__::func_659(cParam0, __LIB_6__::func_864(cParam0)))
	{
		__LIB_6__::func_870(cParam0, 0);
	}
	__LIB_8__::func_706(cParam0);
	__LIB_6__::func_922(cParam0);
	func_139(cParam0);
	__LIB_6__::func_869(cParam0, 2097152);
	__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 134217728);
	if (__LIB_0__::func_13(32768))
	{
		__LIB_6__::func_860(cParam0, 4);
	}
	__LIB_9__::func_457(cParam0);
	__LIB_8__::func_718(cParam0, __LIB_6__::func_864(cParam0));
	__LIB_5__::func_105(__LIB_6__::func_866(cParam0));
	if (!__LIB_6__::func_872(cParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_6__::func_866(cParam0));
	}
	__LIB_9__::func_42(cParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_8__::func_660(cParam0);
	__LIB_9__::func_196(cParam0);
	__LIB_0__::func_11(cParam0);
	__LIB_8__::func_661(cParam0, 30f);
	__LIB_8__::func_662(cParam0, 40f);
	__LIB_9__::func_154(cParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_4__::func_510(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	__LIB_1__::func_723(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = __LIB_0__::func_631(cParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

void func_7(char[4] cParam0)
{
	var uVar0;
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 16384))
	{
		__LIB_4__::func_515();
	}
	if (!__LIB_6__::func_862(cParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!__LIB_6__::func_862(cParam0, 2048))
	{
		__LIB_4__::func_516(1, 0);
	}
	switch (__LIB_6__::func_877(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {__LIB_4__::func_681(__LIB_6__::func_866(cParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				__LIB_6__::func_869(cParam0, 64);
			}
			func_156(cParam0, 0);
			__LIB_0__::func_16(cParam0);
			if (func_158(cParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_878(cParam0)) && __LIB_6__::func_875(cParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_6__::func_878(cParam0), false);
				}
				__LIB_6__::func_879(cParam0, 1);
			}
			if (__LIB_6__::func_861(cParam0, -2147483648))
			{
				__LIB_6__::func_879(cParam0, 2);
			}
			break;
		case 1:
			if (func_161(cParam0))
			{
				__LIB_6__::func_860(cParam0, -2147483648);
				__LIB_6__::func_879(cParam0, 2);
			}
			func_156(cParam0, __LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) > 4);
			break;
		case 2:
			if (func_2(cParam0, 0))
			{
				__LIB_6__::func_860(cParam0, -2147483648);
				__LIB_6__::func_879(cParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (__LIB_6__::func_877(cParam0) < 2)
	{
	}
}

bool func_9(char[4] cParam0)
{
	int iVar0;
	if (Global_1394141.f_1328)
	{
		__LIB_1__::func_683(&(Global_1394141.f_1326), -2147483648);
	}
	if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(iLocal_1202)))
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(iLocal_1202));
	}
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 0);
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 299, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 299, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 364, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
	}
	PED::_0x949B2F9ED2917F5D(Global_35, 0);
	func_164();
	__LIB_0__::func_893(9);
	__LIB_11__::func_10(9, 0, 0);
	__LIB_4__::func_932(44, 1);
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 1f);
	ENTITY::REMOVE_MODEL_HIDE(2627.006f, -1379.284f, 46.15857f, 5f, joaat("P_BAT_LUMBER04X"), 0);
	func_168(joaat("PROVISION_MARYS_BROOCH"), 1, 1, -142743235, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	__LIB_1__::func_941(1388233219);
	__LIB_1__::func_941(1234907076);
	__LIB_0__::func_400(-596723840);
	__LIB_0__::func_400(-1762770596);
	__LIB_0__::func_400(-2084311522);
	__LIB_0__::func_325(&(Local_709[0 /*18*/].f_1));
	__LIB_0__::func_325(&iLocal_1213);
	__LIB_0__::func_325(&iLocal_1209);
	__LIB_0__::func_325(&iLocal_1211);
	__LIB_0__::func_325(&iLocal_1212);
	__LIB_0__::func_325(&iLocal_1214);
	__LIB_0__::func_325(&iLocal_1210);
	__LIB_0__::func_325(&(Local_709[1 /*18*/].f_1));
	iVar0 = 0;
	while (iVar0 < 15)
	{
		__LIB_2__::func_426(&(Local_709[iVar0 /*18*/]));
		iVar0++;
	}
	__LIB_2__::func_426(&(Local_530[0 /*178*/]));
	__LIB_2__::func_426(&(iLocal_1204[0]));
	__LIB_2__::func_426(&(iLocal_1204[1]));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_2__::func_426(&(Local_980[iVar0 /*18*/]));
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1217))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_1217);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1221))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1221);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1222))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1222);
	}
	if (__LIB_0__::func_139(iLocal_1320))
	{
		__LIB_1__::func_281(&iLocal_1320, 1, 1);
	}
	if (__LIB_0__::func_139(iLocal_1319))
	{
		__LIB_1__::func_281(&iLocal_1319, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1216))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_1216);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_1287))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1287, false);
	}
	__LIB_0__::func_484(&uLocal_1288, iLocal_1223[4], 0);
	__LIB_0__::func_484(&uLocal_1289, iLocal_1223[24], 0);
	__LIB_0__::func_484(&uLocal_1290, iLocal_1223[5], 0);
	__LIB_0__::func_484(&uLocal_1291, iLocal_1223[0], 0);
	__LIB_0__::func_484(&uLocal_1292, iLocal_1223[42], 0);
	__LIB_0__::func_484(&uLocal_1293, iLocal_1223[43], 0);
	__LIB_0__::func_484(&uLocal_1294, iLocal_1223[9], 0);
	__LIB_0__::func_484(&uLocal_1295, iLocal_1223[19], 0);
	__LIB_0__::func_484(&uLocal_1296, iLocal_1223[20], 0);
	__LIB_0__::func_484(&uLocal_1297, iLocal_1223[37], 0);
	__LIB_0__::func_484(&uLocal_1298, iLocal_1223[22], 0);
	__LIB_0__::func_484(&uLocal_1298, iLocal_1223[23], 0);
	PATHFIND::_0xD17672447692478E(iLocal_1223[0], 0);
	PATHFIND::_0xD17672447692478E(iLocal_1223[5], 0);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[15]))
	{
		PATHFIND::_0xD17672447692478E(iLocal_1223[15], 0);
	}
	POPULATION::_0xBC90BDF4E5228EA1();
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[35]))
	{
		__LIB_0__::func_484(&uLocal_1300, iLocal_1223[35], 0);
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_1223[35], 0, 1);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_1223[43]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[43]);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_1223[0]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[0]);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_1223[5]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[5]);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_1223[23]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[23]);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_1223[6]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[6]);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_1223[18]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[18]);
	}
	func_174(0, 43);
	func_175();
	__LIB_4__::func_193(285);
	__LIB_4__::func_193(286);
	__LIB_4__::func_193(933);
	__LIB_4__::func_193(934);
	__LIB_0__::func_121(285, 32);
	__LIB_0__::func_121(286, 32);
	__LIB_0__::func_121(933, 32);
	__LIB_0__::func_121(934, 32);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(369265386, true);
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Local_709[iVar0 /*18*/].f_16 != 0)
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Local_709[iVar0 /*18*/].f_16);
		}
		iVar0++;
	}
	if (iLocal_485 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_485);
	}
	if (iLocal_486 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_486);
	}
	if (iLocal_487 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_487);
	}
	func_178(&uLocal_1323);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_1381, 1);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_1382, 1);
	PED::_0xDE7B2B4144906CDF(joaat("INTIMIDATED_ON_KNEES"), Local_709[1 /*18*/]);
	AUDIO::_0x660A8F876DF1D4F8(9);
	AUDIO::_0x43037ABFE214A851();
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "MRY3_GRIEF");
	VEHICLE::SET_RANDOM_TRAINS(true);
	STREAMING::END_SRL();
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	if (iParam0 == iLocal_16)
	{
		__LIB_4__::func_954(&Var0, func_215(0, 2));
	}
	else if (iParam0 == iLocal_17)
	{
		__LIB_4__::func_954(&Var0, func_215(0, 0));
	}
	else if (iParam0 == iLocal_18)
	{
		__LIB_4__::func_954(&Var0, func_215(0, 5));
	}
	else if (iParam0 == iLocal_19)
	{
		__LIB_4__::func_954(&Var0, func_215(0, 3));
	}
	else if (iParam0 == iLocal_20)
	{
		__LIB_4__::func_954(&Var0, func_215(0, 3));
	}
	else if (iParam0 == iLocal_21)
	{
		__LIB_4__::func_954(&Var0, func_215(5, 2));
	}
	else if (iParam0 == iLocal_22)
	{
		__LIB_4__::func_954(&Var0, func_215(0, 3));
	}
	else if (iParam0 == iLocal_23)
	{
		__LIB_4__::func_954(&Var0, func_215(3, 5));
	}
	return Var0;
}

void func_74(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_8__::func_663(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (__LIB_8__::func_587(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (__LIB_6__::func_863(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		__LIB_5__::func_109(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_273(cParam0);
	}
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_9__::func_202();
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
						func_310(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_310(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_310(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_310(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_310(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_310(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_310(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_310(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_310(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_310(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_310(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_310(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_310(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312();
						func_313(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_310(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_83(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_322(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_83(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_83(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_310(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_350();
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
							func_310(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_108(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_374(cParam0);
	cParam0->f_634[0] = 57781;
	cParam0->f_634[1] = 57781;
	cParam0->f_637 = 0;
	__LIB_6__::func_883(cParam0, *uParam1);
	func_377(cParam0);
}

void func_109(char[4] cParam0)
{
	int iVar0;
	if (!func_378(65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
		{
			func_379(__LIB_0__::func_398(7), func_215(12, 0), 2, 1073741824 /* Float: 2f */);
			func_380(65536);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1204)
	{
		if (__LIB_0__::func_272(__LIB_9__::func_342(cParam0, joaat("MSP_MARY3_MALES_01"), 0), 0))
		{
			iLocal_1204[iVar0] = __LIB_9__::func_342(cParam0, joaat("MSP_MARY3_MALES_01"), 1);
		}
		iVar0++;
	}
	if (__LIB_8__::func_587(cParam0) == 0)
	{
		iLocal_1220 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		iLocal_1208 = PED::_GET_LAST_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1208))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_1208, 2683.154f, -1260.354f, 50.3981f, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_1208, 295.8101f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1220))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_1220, 2683.154f, -1260.354f, 50.3981f, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_1220, 295.8101f);
		}
		if (__LIB_6__::func_864(cParam0) == 0)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[0]))
			{
				iLocal_1223[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MARY3_VOL_INT_CLEAR_AREA");
				VOLUME::_0x39816F6F94F385AD(iLocal_1223[0], 2713.793f, -1242.869f, 53.02395f, 0f, 0f, 25.01506f, 19.03873f, 14.94918f, 12.5923f);
				VOLUME::_0x39816F6F94F385AD(iLocal_1223[0], 2674.628f, -1265.024f, 55.92817f, 0f, 0f, 25.01506f, 19.03873f, 14.94918f, 12.5923f);
				PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1223[0], 0, 0, 0);
				uLocal_1291 = __LIB_1__::func_391(iLocal_1223[0], 0, 0, 10208);
				__LIB_3__::func_730(iLocal_1223[0], 0, 0, 1, 1, 0);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[0], 7);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[1]))
			{
				iLocal_1223[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MARY3_VOL_INT_CLEAR_VEHICLES");
				VOLUME::_0x39816F6F94F385AD(iLocal_1223[1], 2634.974f, -1280.685f, 53.00139f, 0f, 0f, 25.01507f, 66.12298f, 14.94918f, 12.5923f);
				VOLUME::_0x39816F6F94F385AD(iLocal_1223[1], 2702.059f, -1250.474f, 53.00139f, 0f, 0f, 25.01507f, 43.57701f, 14.94918f, 12.5923f);
				__LIB_3__::func_730(iLocal_1223[1], 0, 0, 1, 1, 0);
			}
		}
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 18 && CLOCK::GET_CLOCK_HOURS() < 20)
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	else if ((CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 4) || (CLOCK::GET_CLOCK_HOURS() == 4 && CLOCK::GET_CLOCK_MINUTES() < 15))
	{
		CLOCK::SET_CLOCK_TIME(4, 15, 0);
	}
}

void func_123(char[4] cParam0)
{
	if (__LIB_0__::func_91())
	{
		func_387(&(cParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_389(Param0, Param0.f_3);
}

void func_139(char[4] cParam0)
{
	__LIB_9__::func_43(cParam0, iLocal_473, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_476, 56);
	__LIB_9__::func_43(cParam0, iLocal_477, 31);
	__LIB_9__::func_43(cParam0, iLocal_478, 31);
	__LIB_9__::func_43(cParam0, iLocal_474, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_475, 62);
	__LIB_9__::func_43(cParam0, iLocal_480, 24);
	__LIB_9__::func_43(cParam0, joaat("COACH2"), 62);
	__LIB_9__::func_43(cParam0, joaat("TROLLEY01X"), 524384);
	__LIB_9__::func_43(cParam0, iLocal_481, 24);
	__LIB_9__::func_43(cParam0, joaat("P_BROOM04X"), 3);
	__LIB_9__::func_43(cParam0, joaat("P_BROOM02X"), 3);
	__LIB_9__::func_43(cParam0, iLocal_479, 524384);
	__LIB_8__::func_709(cParam0, "mary3_father_follow", 6, 2, -1);
	__LIB_8__::func_709(cParam0, "mary3_amb_wagon_left", 24, 2, -1);
	__LIB_8__::func_709(cParam0, "mary3_amb_wagon_right", 24, 2, -1);
	__LIB_8__::func_709(cParam0, "mary3_wagon_chase_left", 56, 2, -1);
	__LIB_8__::func_709(cParam0, "mary3_boat_route", 16, 2, -1);
	__LIB_8__::func_709(cParam0, "mary3_cme_to_denis", 32, 2, -1);
	__LIB_8__::func_709(cParam0, "mary3_assist_line", 2, 2, -1);
	__LIB_8__::func_708(cParam0, sLocal_527, 32);
	__LIB_9__::func_237(cParam0, "script@story@mry3@leadin@mcs1@leadin_p1", &(Local_38[4 /*31*/]), 1, 0, func_409(19), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@leadin@mcs1@leadin_p2", &(Local_38[5 /*31*/]), 1, 2, func_409(20), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@leadout@mcs1@mary_lets_follow", &(Local_38[6 /*31*/]), 2, 0, func_409(22), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig1_beckon@ig_1_beckon", &(Local_38[1 /*31*/]), 2, 0, func_409(4), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig2_bump@ig2_bump", &(Local_38[3 /*31*/]), 2, 0, func_409(18), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig3_argue@ig3_argue", &(Local_38[0 /*31*/]), 24, 0, func_409(0), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig4_buyer_runs@ig_4_buyer_runs_player", &(Local_38[8 /*31*/]), 8, 0, func_409(26), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig4_buyer_runs@ig_4_buyer_runs_buyer", &(Local_38[9 /*31*/]), 8, 0, func_409(28), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig6_cower@ig6_cower", &(Local_38[2 /*31*/]), 56, 0, func_409(7), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig7_panic@ig7_panic", &(Local_38[10 /*31*/]), 48, 0, func_409(30), 0, 0);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig8_scramble@ig8_scramble", &(Local_38[11 /*31*/]), 32, 0, func_409(41), 0, 0);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig9_broach@ig9_broach", &(Local_38[12 /*31*/]), 32, 0, func_409(43), 0, 0);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig10_drunk_stop@ig10_drunk_stop", &(Local_38[7 /*31*/]), 2, 0, func_409(23), 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mry3@ig@ig10_theater@ig10_theater", &(Local_38[13 /*31*/]), 64, 0, func_409(48), 0, 1);
	__LIB_9__::func_238(cParam0, Local_38[5 /*31*/], func_409(21), 1);
	__LIB_9__::func_238(cParam0, Local_38[1 /*31*/], func_409(5), 2);
	__LIB_9__::func_238(cParam0, Local_38[1 /*31*/], func_409(6), 2);
	__LIB_9__::func_238(cParam0, Local_38[2 /*31*/], func_409(10), 24);
	__LIB_9__::func_238(cParam0, Local_38[2 /*31*/], func_409(11), 24);
	__LIB_9__::func_238(cParam0, Local_38[8 /*31*/], func_409(24), 8);
	__LIB_9__::func_238(cParam0, Local_38[9 /*31*/], func_409(29), 8);
	__LIB_9__::func_238(cParam0, Local_38[8 /*31*/], func_409(25), 8);
	__LIB_9__::func_238(cParam0, Local_38[8 /*31*/], func_409(27), 8);
	__LIB_9__::func_238(cParam0, Local_38[12 /*31*/], func_409(45), 32);
	__LIB_9__::func_238(cParam0, Local_38[12 /*31*/], func_409(47), 32);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(67), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(49), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(66), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(50), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(51), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(52), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(53), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(54), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(55), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(56), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(57), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(58), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(59), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(60), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(61), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(62), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(63), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(64), 64);
	__LIB_9__::func_238(cParam0, Local_38[13 /*31*/], func_409(65), 64);
}

void func_156(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 134217728))
	{
		func_139(cParam0);
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 134217728);
	}
	if (bParam1 && !__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 536870912))
	{
		if (__LIB_9__::func_65(cParam0, __LIB_9__::func_40(cParam0), 0))
		{
			__LIB_8__::func_707(cParam0, __LIB_9__::func_40(cParam0), 536870912);
		}
	}
	if (__LIB_6__::func_862(cParam0, 8192))
	{
		if (!__LIB_6__::func_862(cParam0, 536870912))
		{
			if (__LIB_5__::func_569(&(cParam0->f_1126), __LIB_6__::func_864(cParam0)))
			{
				__LIB_6__::func_868(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_9__::func_65(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_6__::func_868(cParam0, 8192);
	}
}

bool func_158(char[4] cParam0)
{
	if (__LIB_6__::func_884(cParam0) < 1)
	{
		func_421(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0);
		func_422(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!__LIB_6__::func_872(cParam0, 4) && !__LIB_5__::func_371()) && !__LIB_6__::func_875(cParam0, 3))
	{
		if (!__LIB_6__::func_872(cParam0, 32))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_6__::func_869(cParam0, 32);
			}
			else
			{
				func_423(cParam0);
			}
		}
		if (__LIB_6__::func_872(cParam0, 32))
		{
			func_424(cParam0);
		}
	}
	switch (__LIB_6__::func_884(cParam0))
	{
		case -1:
		case 0:
			__LIB_6__::func_885(cParam0, 1);
			break;
		case 1:
			if (func_426(cParam0))
			{
				if (__LIB_6__::func_872(cParam0, 4096))
				{
					__LIB_6__::func_885(cParam0, 2);
				}
				else
				{
					__LIB_6__::func_885(cParam0, 3);
				}
			}
			break;
		case 2:
			if (__LIB_9__::func_382(cParam0))
			{
				__LIB_6__::func_885(cParam0, 3);
			}
			break;
		case 3:
			if (func_428(cParam0))
			{
				__LIB_6__::func_885(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_161(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_864(cParam0) == 26)
	{
		__LIB_6__::func_886(cParam0, 0);
		return true;
	}
	if (func_430(cParam0))
	{
		iVar0 = __LIB_6__::func_864(cParam0);
		__LIB_6__::func_870(cParam0, __LIB_9__::func_40(cParam0));
		if (__LIB_6__::func_864(cParam0) == 26)
		{
			__LIB_6__::func_886(cParam0, 0);
			return true;
		}
		else if (__LIB_8__::func_705(cParam0, iVar0, 128))
		{
			func_430(cParam0);
		}
	}
	return false;
}

void func_164()
{
	int iVar0;
	iVar0 = 137;
	while (iVar0 <= 324)
	{
		__LIB_4__::func_193(iVar0);
		__LIB_0__::func_121(iVar0, 32);
		iVar0++;
	}
}

bool func_168(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
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
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return false;
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
			func_168(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_451(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
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
	func_453(iParam0, iParam1);
	return true;
}

void func_174(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1223[iVar0]);
		}
		iVar0++;
	}
}

void func_175()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		TASK::REMOVE_COVER_POINT(iLocal_1301[iVar0]);
		iVar0++;
	}
}

void func_178(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_1__::func_281(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

struct<4> func_215(int iParam0, int iParam1)
{
	return func_486(iParam0, iParam1);
}

void func_273(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
	{
		if (__LIB_6__::func_872(cParam0, 16))
		{
			__LIB_9__::func_70(cParam0, 0);
		}
		if (func_422(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_310(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_563(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_564(iParam0, &iVar0, iParam1))
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
				func_310(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_11__::func_106(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_11__::func_106(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_11__::func_106(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_11__::func_106(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
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
		func_583(28);
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
					if (__LIB_0__::func_708(0) && func_588(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
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
					if (__LIB_0__::func_708(0) && func_588(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
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
			if (!func_590(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_592(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_593(iParam0);
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
			__LIB_12__::func_192(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_12__::func_193(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_12__::func_194(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_603(iParam0);
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
			__LIB_12__::func_195(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_607(iParam0, 0, 0, 0);
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
						func_310(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_310(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_310(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_310(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_310(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_310(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
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
				func_310(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_583(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_611(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					func_588(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_611(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_310(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_310(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!func_632(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_633(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_634(iParam0);
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
				func_310(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_312()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_645();
	func_646();
	func_647();
	func_648();
	func_649();
	func_650();
	__LIB_0__::func_376();
}

void func_313(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_168(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		func_653(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(func_654(iParam0), 1);
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

int func_322(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { func_667(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_611(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_350()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_691(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_374(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_730(cParam0, iVar0);
		iVar0++;
	}
}

void func_377(char[4] cParam0)
{
	__LIB_9__::func_45(cParam0, iLocal_16, iLocal_17, 108102, 108196, 108394, 108925, 109589, "MRY3_INT", 10, -1);
	__LIB_9__::func_45(cParam0, iLocal_17, iLocal_18, 110084, 110288, 110667, 111339, 112418, "MRY3_MCS1", 10, -1);
	__LIB_9__::func_45(cParam0, iLocal_18, iLocal_19, 112567, 112883, 112977, 113404, 114030, "", 264, -1);
	__LIB_9__::func_45(cParam0, iLocal_19, iLocal_20, 114331, 114686, 114815, 115320, 115758, "MRY3_MCS2", 10, -1);
	__LIB_9__::func_45(cParam0, iLocal_20, iLocal_21, 115828, 116381, 116480, 116772, 118320, "", 8, -1);
	__LIB_9__::func_45(cParam0, iLocal_21, iLocal_22, 118546, 118821, 118840, 119321, 124280, "", 8, -1);
	__LIB_9__::func_45(cParam0, iLocal_22, iLocal_23, 124357, 124499, 124722, 124850, 125017, "MRY3_EXT", 16777282, -1);
	__LIB_9__::func_45(cParam0, iLocal_23, 26, 125117, 125169, 125480, 125514, 125563, "MRY3_EXT", 66, -1);
}

bool func_378(int iParam0)
{
	return __LIB_0__::func_27(iLocal_483, iParam0);
}

void func_379(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_772(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_380(int iParam0)
{
	if (!func_378(iParam0))
	{
		__LIB_1__::func_683(&iLocal_483, iParam0);
	}
}

void func_387(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_860, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_4__::func_534(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_860, 524288))
		{
			func_778(&(uParam0->f_872));
		}
		func_779(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_781(uParam0);
		func_782(uParam0);
		__LIB_5__::func_47(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_5__::func_48(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
		}
	}
}

int func_389(vector3 vParam0, var uParam3)
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
		iVar0 = func_790(0, 0);
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
	__LIB_5__::func_119(0, vParam0, uParam3);
	return 1;
}

char* func_409(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 19:
			sVar0 = "pl_leadin_P1";
			break;
		case 20:
			sVar0 = "pl_enter";
			break;
		case 21:
			sVar0 = "pl_leadin";
			break;
		case 0:
			sVar0 = "pl_argue";
			break;
		case 4:
			sVar0 = "pl_enter";
			break;
		case 5:
			sVar0 = "pl_quick";
			break;
		case 6:
			sVar0 = "pl_down_here";
			break;
		case 7:
			sVar0 = "pl_base_loop";
			break;
		case 10:
			sVar0 = "pl_right_to_Left_trans";
			break;
		case 11:
			sVar0 = "pl_left_to_Right_trans";
			break;
		case 12:
			sVar0 = "pl_what_ru_doing_R";
			break;
		case 13:
			sVar0 = "pl_what_ru_doing_L";
			break;
		case 14:
			sVar0 = "pl_who_are_you_R";
			break;
		case 15:
			sVar0 = "pl_who_are_you_L";
			break;
		case 16:
			sVar0 = "pl_are_you_insane_R";
			break;
		case 17:
			sVar0 = "pl_are_you_insane_L";
			break;
		case 18:
			sVar0 = "PBL_Bump_Full";
			break;
		case 23:
			sVar0 = "pl_drunk_enter";
			break;
		case 24:
			sVar0 = "pl_player_hold_it_walk";
			break;
		case 25:
			sVar0 = "pl_player_hold_it_walk_alt";
			break;
		case 26:
			sVar0 = "pl_player_hold_it_run";
			break;
		case 27:
			sVar0 = "pl_player_hold_it_run_alt";
			break;
		case 28:
			sVar0 = "pl_buyer_01_run";
			break;
		case 29:
			sVar0 = "pl_buyer_02_run";
			break;
		case 30:
			sVar0 = "pl_loop_base";
			break;
		case 31:
			sVar0 = "pl_Do_you_know_who";
			break;
		case 32:
			sVar0 = "pl_What_the_hell";
			break;
		case 33:
			sVar0 = "pl_brought_that_broach";
			break;
		case 34:
			sVar0 = "pl_did_linton_put";
			break;
		case 35:
			sVar0 = "pl_lemme_outta_here";
			break;
		case 36:
			sVar0 = "pl_let_me_go";
			break;
		case 37:
			sVar0 = "pl_making_a_big_mistake";
			break;
		case 38:
			sVar0 = "pl_thiis_is_insane";
			break;
		case 39:
			sVar0 = "pl_where_you_taking_me";
			break;
		case 40:
			sVar0 = "pl_you_cant_do_this";
			break;
		case 41:
			sVar0 = "pl_pulls_buyer_out";
			break;
		case 42:
			sVar0 = "pl_pulls_buyer_out_alt";
			break;
		case 43:
			sVar0 = "pl_HandOver_p1";
			break;
		case 44:
			sVar0 = "pl_HandOver_p2";
			break;
		case 45:
			sVar0 = "pl_TossOver_p1";
			break;
		case 46:
			sVar0 = "pl_TossOver_p2";
			break;
		case 47:
			sVar0 = "pl_RunAway";
			break;
		case 22:
			sVar0 = "pl_mary_follow";
			break;
		case 48:
			sVar0 = "pl_Enter_TakeSeat";
			break;
		case 49:
			sVar0 = "pl_Base";
			break;
		case 66:
			sVar0 = "pl_Time_to_Go_End";
			break;
		case 67:
			sVar0 = "pl_Time_to_Go_Mid";
			break;
		case 50:
			sVar0 = "pl_Idle_01_WeightShift";
			break;
		case 51:
			sVar0 = "pl_Idle_02_lookAtEachOther";
			break;
		case 52:
			sVar0 = "pl_Idle_03_MaryExcited";
			break;
		case 53:
			sVar0 = "pl_Idle_04_ArthurFakeExcited";
			break;
		case 54:
			sVar0 = "pl_Idle_05_LookAtThat";
			break;
		case 55:
			sVar0 = "pl_Idle_06_Laugh";
			break;
		case 56:
			sVar0 = "pl_Idle_07_MaryApplause";
			break;
		case 57:
			sVar0 = "pl_Idle_08_MaryJohnApplause";
			break;
		case 58:
			sVar0 = "pl_Idle_09_StealingGlances";
			break;
		case 59:
			sVar0 = "pl_Idle_10_LookAround";
			break;
		case 60:
			sVar0 = "pl_Idle_11_EnjoyingTheShow";
			break;
		case 61:
			sVar0 = "pl_Idle_12_BooSmall";
			break;
		case 62:
			sVar0 = "pl_Idle_13_BooBig";
			break;
		case 63:
			sVar0 = "pl_Idle_14_CheerSmall";
			break;
		case 64:
			sVar0 = "pl_Idle_15_CheerBig";
			break;
		case 65:
			sVar0 = "pl_Make_a_Move";
			break;
		default:
			break;
	}
	return sVar0;
}

bool func_421(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_6__::func_872(cParam0, 2))
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = __LIB_4__::func_543(__LIB_6__::func_866(cParam0));
	if (!__LIB_0__::func_91())
	{
		vVar2 = { __LIB_1__::func_469(cParam0->f_607) };
	}
	if (func_848(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_422(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5411))
	{
		if (!__LIB_6__::func_872(cParam0, 16777216))
		{
			if (!__LIB_8__::func_667(cParam0))
			{
				__LIB_6__::func_869(cParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = __LIB_4__::func_720(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					__LIB_6__::func_869(cParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							__LIB_6__::func_869(cParam0, 16777216);
						}
						else if (__LIB_0__::func_48(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (__LIB_0__::func_126(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
		{
			return true;
		}
	}
	if (__LIB_6__::func_872(cParam0, 1))
	{
		return true;
	}
	vVar14 = { __LIB_1__::func_469(cParam0->f_607) };
	if (__LIB_0__::func_2() == 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_6__::func_874(cParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_6__::func_874(cParam0)))
		{
			return false;
		}
		if (__LIB_5__::func_50(&iVar17, __LIB_6__::func_874(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			__LIB_6__::func_869(cParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (__LIB_6__::func_872(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (__LIB_6__::func_872(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = __LIB_4__::func_720(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!__LIB_6__::func_872(cParam0, 16))
			{
				__LIB_6__::func_869(cParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		__LIB_8__::func_598(cParam0, bParam1);
		if (!__LIB_6__::func_872(cParam0, 256))
		{
			if (!__LIB_6__::func_872(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_772(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(cParam0);
			Call_Loc(cParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_423(char[4] cParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_6__::func_872(cParam0, 32) && __LIB_6__::func_875(cParam0, 3))
	{
		if (__LIB_4__::func_544(cParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			__LIB_6__::func_869(cParam0, 32);
		}
	}
	if (!__LIB_6__::func_872(cParam0, 32))
	{
		if (func_857(&(cParam0->f_609), cParam0->f_607))
		{
			__LIB_6__::func_869(cParam0, 32);
		}
	}
}

void func_424(char[4] cParam0)
{
	struct<4> Var0;
	if (!__LIB_6__::func_872(cParam0, 128))
	{
		if (__LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_8__::func_668(cParam0);
			if (__LIB_19__::func_182(cParam0))
			{
				__LIB_5__::func_326(&(cParam0->f_10792));
				__LIB_6__::func_887(cParam0, 2097152);
				__LIB_6__::func_881(cParam0, 16384);
				__LIB_6__::func_869(cParam0, 128);
			}
			return;
		}
		if (__LIB_6__::func_875(cParam0, 1))
		{
			return;
		}
		if (__LIB_6__::func_872(cParam0, 64))
		{
			__LIB_8__::func_668(cParam0);
			MemCopy(&Var0, {__LIB_4__::func_681(__LIB_6__::func_866(cParam0))}, 4);
			if (func_861(cParam0, Var0))
			{
				if (__LIB_6__::func_884(cParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_6__::func_869(cParam0, 128);
			}
		}
		else
		{
			if (__LIB_6__::func_884(cParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			__LIB_6__::func_869(cParam0, 128);
		}
	}
}

bool func_426(char[4] cParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_9__::func_155(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_421(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_422(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (__LIB_6__::func_872(cParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {__LIB_4__::func_542(cParam0->f_607)}, 3);
		if (__LIB_5__::func_341(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_6__::func_875(cParam0, 1))
	{
		if (!__LIB_0__::func_899(&(cParam0->f_13115)))
		{
			__LIB_4__::func_89(&(cParam0->f_13115), 0);
		}
		if (__LIB_1__::func_583(&(cParam0->f_13115)) < 30f)
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				iVar0 = 0;
			}
			if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630.f_12 && !PED::_0xA0BC8FAED8CFEB3C(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_428(char[4] cParam0)
{
	if (func_867(cParam0))
	{
		__LIB_9__::func_42(cParam0, Local_530[0 /*178*/], "MARYLINT", 0);
	}
	else
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_1202, 0))
	{
		iLocal_1202 = __LIB_11__::func_107(func_868(12, 0), func_869(12, 0), 1, 1, 0, 1, 1);
		return false;
	}
	else if (__LIB_6__::func_864(cParam0) >= iLocal_17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1202))
		{
			func_379(iLocal_1202, func_215(12, 1), 2, 1073741824 /* Float: 2f */);
			if (!__LIB_0__::func_163(iLocal_1202, -982327190))
			{
				TASK::TASK_STAND_STILL(iLocal_1202, -1);
			}
		}
	}
	if (__LIB_6__::func_864(cParam0) == iLocal_16)
	{
		if (!__LIB_0__::func_272(Local_709[5 /*18*/], 0))
		{
			Local_709[5 /*18*/] = __LIB_1__::func_545(iLocal_474, vLocal_516, 344.88f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(Local_709[5 /*18*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_709[5 /*18*/], joaat("REL_PLAYER_ALLY"));
			PED::_SET_PED_BODY_COMPONENT(Local_709[5 /*18*/], 865644342);
			PED::_UPDATE_PED_VARIATION(Local_709[5 /*18*/], false, true, true, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_709[5 /*18*/], true);
			return false;
		}
		else if (!__LIB_0__::func_163(Local_709[5 /*18*/], -1098463898))
		{
			TASK::TASK_START_SCENARIO_AT_POSITION(Local_709[5 /*18*/], joaat("WORLD_HUMAN_BROOM_WORKING"), vLocal_516, 344.88f, -1, false, true, "WORLD_HUMAN_BROOM_WORKING_MALE_B", -1f, false);
		}
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_18 && __LIB_6__::func_864(cParam0) <= iLocal_20)
	{
		if (!func_873(cParam0))
		{
			return false;
		}
	}
	func_874();
	func_875(2, 3);
	if (__LIB_6__::func_864(cParam0) >= 0 && __LIB_6__::func_864(cParam0) <= 2)
	{
		func_876(cParam0);
		func_875(0, 23);
	}
	if (__LIB_6__::func_864(cParam0) >= 3 && __LIB_6__::func_864(cParam0) <= 25)
	{
		func_875(24, 43);
	}
	if (__LIB_8__::func_587(cParam0) != 0)
	{
		if (__LIB_6__::func_864(cParam0) == iLocal_16)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[0]))
			{
				PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1223[0], 0, 0, 0);
				uLocal_1291 = __LIB_1__::func_391(iLocal_1223[0], 0, 0, 10208);
				__LIB_3__::func_730(iLocal_1223[0], 0, 0, 1, 1, 0);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[0], 7);
			}
		}
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_19 && __LIB_6__::func_864(cParam0) <= iLocal_21)
	{
		POPULATION::_0xC6DCC2A3A8825C85(1);
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_19 && __LIB_6__::func_864(cParam0) <= iLocal_20)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[35]))
		{
			uLocal_1300 = __LIB_1__::func_391(iLocal_1223[35], 0, 0, 10208);
			PATHFIND::_0xE5EF9DE716FF737E(iLocal_1223[35], 0, 1);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[32]))
	{
		MISC::_0x2FCD528A397E5C88(iLocal_1223[32], 8);
		MISC::_0x2FCD528A397E5C88(iLocal_1223[32], 40);
		__LIB_3__::func_729(iLocal_1223[32], 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[3]))
	{
		if (!PED::_0x91A5F9CBEBB9D936(uLocal_1287))
		{
			uLocal_1287 = PED::_0x4C39C95AE5DB1329(iLocal_1223[3], false, 15);
		}
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_18 && __LIB_6__::func_864(cParam0) <= iLocal_20)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[19]))
		{
			uLocal_1295 = __LIB_1__::func_391(iLocal_1223[19], 0, 0, 0);
			MISC::_0x2FCD528A397E5C88(iLocal_1223[19], 40);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[20]))
		{
			uLocal_1296 = __LIB_1__::func_391(iLocal_1223[20], 0, 0, 0);
			MISC::_0x2FCD528A397E5C88(iLocal_1223[20], 40);
		}
	}
	__LIB_9__::func_16(cParam0, 144298);
	__LIB_9__::func_15(cParam0, 144587);
	__LIB_9__::func_14(cParam0, 146658);
	__LIB_9__::func_42(cParam0, Global_35, "ARTHUR", 0);
	__LIB_3__::func_229(285);
	__LIB_3__::func_229(286);
	__LIB_3__::func_229(933);
	__LIB_3__::func_229(934);
	__LIB_0__::func_123(285, 32);
	__LIB_0__::func_123(286, 32);
	__LIB_0__::func_123(933, 32);
	__LIB_0__::func_123(934, 32);
	func_886();
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(369265386, false);
	__LIB_6__::func_888(9);
	ENTITY::CREATE_MODEL_HIDE(2627.006f, -1379.284f, 46.15857f, 5f, joaat("P_BAT_LUMBER04X"), false);
	__LIB_0__::func_401(-2084311522);
	if ((__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_872(cParam0, 4194304)) || __LIB_6__::func_875(cParam0, 2))
	{
		MISC::_SET_WEATHER_TYPE(joaat("FOG"), true, true, false, 0f, false);
	}
	else
	{
		MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 60f, false);
	}
	__LIB_11__::func_10(9, 1, 0);
	__LIB_4__::func_932(44, 0);
	__LIB_1__::func_948(1388233219, 1, 0f, 1, 0, 0, 1, 0);
	__LIB_1__::func_948(1234907076, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(726257907, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(229021101, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(joaat("SD_CARRIAGE_ENTR_01_L"), 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(joaat("SD_CARRIAGE_ENTR_01_R"), 1, 0f, 0, 0, 0, 1, 0);
	__LIB_0__::func_489(0, 0);
	func_890(iLocal_1202, 0, 0);
	iLocal_485 = GRAPHICS::CREATE_TRACKED_POINT();
	iLocal_486 = GRAPHICS::CREATE_TRACKED_POINT();
	iLocal_487 = GRAPHICS::CREATE_TRACKED_POINT();
	return true;
}

bool func_430(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_891(cParam0);
	__LIB_11__::func_105(cParam0);
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_9__::func_40(cParam0);
	iVar2 = __LIB_8__::func_663(cParam0, iVar0);
	if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			__LIB_19__::func_182(cParam0);
		}
	}
	__LIB_9__::func_188(cParam0);
	__LIB_9__::func_197(cParam0);
	__LIB_9__::func_47(cParam0);
	__LIB_9__::func_48(cParam0);
	__LIB_9__::func_49(cParam0);
	__LIB_10__::func_974(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_9__::func_63(cParam0);
	}
	if ((__LIB_6__::func_864(cParam0) == 0 && iVar2 < 3) && __LIB_8__::func_587(cParam0) == 0)
	{
		func_424(cParam0);
	}
	if (__LIB_8__::func_705(cParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(cParam0);
	switch (iVar2)
	{
		case 0:
			if (__LIB_9__::func_50(cParam0, iVar0, 0))
			{
				if (__LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)))
				{
					PED::_0xF008E0BA1FE1D644((__LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((__LIB_6__::func_864(cParam0) == 25 || __LIB_6__::func_864(cParam0) == 26) && __LIB_0__::func_13(32768))
				{
					__LIB_8__::func_665(cParam0, 524288);
				}
				if (__LIB_6__::func_872(cParam0, 4))
				{
					if (!__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_0__::func_16(cParam0, iVar0);
						__LIB_6__::func_868(cParam0, 4);
					}
					__LIB_9__::func_373(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 1);
				}
				else
				{
					__LIB_8__::func_670(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (__LIB_9__::func_155(cParam0))
			{
				if (__LIB_11__::func_101(cParam0))
				{
					if (__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_6__::func_887(cParam0, 4);
					}
					__LIB_8__::func_670(cParam0, iVar0, 2);
				}
			}
			else if (__LIB_9__::func_369(cParam0) >= cParam0->f_13144)
			{
				if (__LIB_6__::func_862(cParam0, 4))
				{
					__LIB_6__::func_887(cParam0, 4);
				}
				__LIB_8__::func_670(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (__LIB_9__::func_50(cParam0, iVar0, 2))
			{
				if (!__LIB_9__::func_18(cParam0))
				{
					__LIB_8__::func_670(cParam0, iVar0, 4);
					if (func_908(cParam0, iVar0, iVar1))
					{
						__LIB_8__::func_670(cParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_9__::func_189(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 3);
					if (func_910(cParam0, iVar0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 4);
						if (func_908(cParam0, iVar0, iVar1))
						{
							__LIB_8__::func_670(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_8__::func_671(cParam0))
			{
				func_910(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_910(cParam0, iVar0))
			{
				__LIB_8__::func_670(cParam0, iVar0, 4);
				if (func_908(cParam0, iVar0, iVar1))
				{
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_908(cParam0, iVar0, iVar1))
			{
				__LIB_8__::func_670(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_11__::func_235(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_11__::func_91(cParam0);
				if (__LIB_8__::func_705(cParam0, iVar1, 2))
				{
					if (__LIB_9__::func_52(cParam0, iVar1))
					{
						__LIB_9__::func_353(cParam0, iVar1);
					}
				}
			}
			if (__LIB_9__::func_50(cParam0, iVar0, 5))
			{
				if (__LIB_9__::func_50(cParam0, iVar0, 7))
				{
					if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
					{
						__LIB_9__::func_198(cParam0, __LIB_6__::func_864(cParam0));
					}
					__LIB_9__::func_378(cParam0, iVar1);
					__LIB_11__::func_105(cParam0);
					return true;
				}
				else
				{
					__LIB_8__::func_670(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						__LIB_1__::func_164(0);
					}
					__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 4194304);
				}
				if ((__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_6__::func_872(cParam0, 8192)) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (__LIB_0__::func_0(cParam0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 6);
					}
				}
				if (__LIB_6__::func_862(cParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						__LIB_8__::func_725(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						__LIB_6__::func_887(cParam0, 268435456);
					}
				}
				if (__LIB_6__::func_872(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						__LIB_6__::func_881(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_11__::func_235(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_11__::func_91(cParam0);
				if (__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 2))
				{
					if (__LIB_9__::func_52(cParam0, __LIB_9__::func_40(cParam0)))
					{
						__LIB_9__::func_353(cParam0, __LIB_9__::func_40(cParam0));
					}
				}
			}
			if ((!__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_6__::func_872(cParam0, 8192)) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
			{
				if (__LIB_9__::func_50(cParam0, iVar0, 5))
				{
					if (__LIB_0__::func_0(cParam0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 7);
					}
				}
				else
				{
					__LIB_0__::func_0(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_9__::func_50(cParam0, iVar0, 5);
				__LIB_0__::func_16(cParam0);
			}
			break;
		case 7:
			if (__LIB_9__::func_50(cParam0, iVar0, 7))
			{
				if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
				{
					__LIB_9__::func_198(cParam0, __LIB_6__::func_864(cParam0));
				}
				__LIB_9__::func_378(cParam0, iVar1);
				__LIB_11__::func_105(cParam0);
				return true;
			}
			break;
		default:
			__LIB_8__::func_670(cParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_451(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_667(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_453(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_12__::func_197(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_607(iParam0, iParam1, 1, 0);
		}
	}
}

struct<4> func_486(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_964(iParam0, iParam1) };
	Var0.f_3 = func_965(iParam0, iParam1);
	return Var0;
}

bool func_563(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_1023(iParam0))
		{
			__LIB_1__::func_695(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_564(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_667(iParam0, 0, 1) };
	iVar5 = __LIB_0__::func_936(iParam0, &Var0, 0, 0);
	iVar6 = __LIB_0__::func_788(iParam0, 0);
	if ((iVar5 > 1 && !__LIB_1__::func_195()) && (iVar6 + iParam2) >= iVar5)
	{
		if (__LIB_0__::func_192(iParam0, -2051813666))
		{
			__LIB_1__::func_240(583, 1);
		}
		else
		{
			__LIB_1__::func_240(582, 0);
		}
	}
	if (func_1028(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_583(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1046(iParam0);
}

bool func_588(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_667(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1048((386 + iVar28), 1);
			if (func_1049(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					__LIB_0__::func_916(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_590(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (!func_1028(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_1__::func_695(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_588(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_588(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_588(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
					func_588(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_588(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
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
					if (!func_588(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_588(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_588(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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

bool func_592(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_632(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_593(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_1057(Global_35, iParam0, &uVar0))
		{
			func_611(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

void func_603(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			func_1073(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_1073(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_1073(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_1073(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			func_1073(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_607(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_1__::func_707(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1083(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1084(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_611(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_667(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1089(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_632(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_667(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_1102(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_633(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_611(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_583(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			func_588(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_634(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1110(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1110(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1110(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1110(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1110(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1110(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1110(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1110(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1110(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1110(-1, iParam0);
	}
}

void func_645()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1118(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_1119();
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
	func_1118(1);
}

void func_646()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_310(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_647()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1121(0);
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
	func_1121(1);
}

void func_648()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1121(0);
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
	func_1121(1);
}

void func_649()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_310(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_310(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_168(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_168(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

void func_650()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	Var1 = { __LIB_1__::func_605() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_588(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { __LIB_1__::func_605() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1126(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_1126(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_1126(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_1126(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_1126(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_1126(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_1126(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_1126(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_1126(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_1126(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_1126(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_1126(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_1126(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_1126(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !__LIB_0__::func_91())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (__LIB_0__::func_154(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (__LIB_0__::func_293(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((__LIB_0__::func_293(24) && __LIB_0__::func_154(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!__LIB_0__::func_154(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (__LIB_0__::func_293(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

void func_653(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_1127(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1127(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1127(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1127(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1127(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1127(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		__LIB_0__::func_460();
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 0);
	}
}

int func_654(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_667(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

struct<5> func_667(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { __LIB_0__::func_949(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { __LIB_1__::func_117(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1049(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1049(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (__LIB_1__::func_429(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { __LIB_1__::func_118(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!__LIB_0__::func_464(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_691(var uParam0, int iParam1, int iParam2, int iParam3)
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
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_667(iVar0, 0, 1) };
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
	iVar11 = (func_1162(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_310(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_730(char[4] cParam0, int iParam1)
{
	func_1188(cParam0, iParam1);
	__LIB_8__::func_679(cParam0, iParam1, 26);
}

bool func_731(char[4] cParam0)
{
	Global_43838 = 0;
	if (!__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_4__::func_568(&(cParam0->f_7375), "1-Start");
		if (!func_1191(cParam0, 0))
		{
			return false;
		}
	}
	else
	{
		if (CLOCK::GET_CLOCK_HOURS() != 16)
		{
			CLOCK::SET_CLOCK_TIME(16, 0, 0);
		}
		__LIB_8__::func_711(cParam0, "MRY3_CONVO", 1);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_732(char[4] cParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[4]))
	{
		if (!PATHFIND::_0xDE0EA444735C1368(iLocal_1223[4]))
		{
			PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[4], 7);
		}
		uLocal_1288 = __LIB_1__::func_391(iLocal_1223[4], 0, 0, 0);
		__LIB_3__::func_729(iLocal_1223[4], 0, 0);
		MISC::_0x2FCD528A397E5C88(iLocal_1223[4], 16408);
		MISC::_0x2FCD528A397E5C88(iLocal_1223[4], 16384);
	}
	__LIB_0__::func_401(-596723840);
	__LIB_0__::func_401(-1762770596);
	VEHICLE::_0xCF9DA72002FC16BF(Local_530[0 /*178*/], iLocal_1202, 35);
	__LIB_9__::func_154(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_530[0 /*178*/], "MaryLinton", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_1202, "Horse_01", 0, 0, 0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_733(char[4] cParam0)
{
	if ((!PED::_0xA0BC8FAED8CFEB3C(Global_35) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_1202)) || !PED::_0xA0BC8FAED8CFEB3C(Local_530[0 /*178*/]))
	{
		return false;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_0__::func_489(0, 0);
	}
	if (func_1193(131072))
	{
		if (__LIB_17__::func_574(cParam0, 26, 0, 1, 1))
		{
			return cParam0->f_607 == cParam0->f_607;
		}
	}
	if (func_1193(131072))
	{
		func_1195(131072);
	}
	if (func_1193(32768))
	{
		func_1195(32768);
	}
	if (func_1193(65536))
	{
		func_1195(65536);
	}
	AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(24, 3, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
	if (!__LIB_0__::func_163(iLocal_1202, -982327190))
	{
		TASK::TASK_STAND_STILL(iLocal_1202, -1);
	}
	iLocal_1286 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2686.604f, -1259.912f, 50.1938f, joaat("PROP_HITCHINGPOST"), 10f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1286))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_1286, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[0]))
	{
		__LIB_0__::func_484(&uLocal_1291, iLocal_1223[0], 0);
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[0]);
		PATHFIND::_0xD17672447692478E(iLocal_1223[0], 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[5]))
	{
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1223[5], 0, 0, 0);
		uLocal_1290 = __LIB_1__::func_391(iLocal_1223[5], 0, 0, 10208);
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_1212))
	{
		iLocal_1212 = __LIB_8__::func_777(408396114, vLocal_519, 10f, 1);
		MAP::_BLIP_SET_MODIFIER(iLocal_1212, -1878373110);
	}
	if (!__LIB_0__::func_899(&uLocal_1193))
	{
		__LIB_4__::func_89(&uLocal_1193, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1285))
	{
		iLocal_1285 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2496.533f, -1446.497f, 46.03777f, 0f, 0f, 0f, 1.134854f, 1.624505f, 1.794976f);
	}
	func_1197();
	ENTITY::SET_ENTITY_PROOFS(Local_530[0 /*178*/], 0, false);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 1);
	__LIB_6__::func_868(cParam0, 33554432);
	return cParam0->f_607 == cParam0->f_607;
}

int func_734(char[4] cParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1202))
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(iLocal_1202)))
		{
		}
	}
	if (func_1193(131072))
	{
		return 1;
	}
	func_1198(cParam0);
	func_1199(cParam0);
	func_1200(cParam0);
	if (__LIB_0__::func_724(joaat("SD_CARRIAGE_ENTR_01_L")))
	{
		__LIB_1__::func_948(726257907, 1, 0f, 0, 0, 0, 1, 0);
		__LIB_1__::func_948(229021101, 1, 0f, 0, 0, 0, 1, 0);
		__LIB_1__::func_948(joaat("SD_CARRIAGE_ENTR_01_L"), 1, 0f, 0, 0, 0, 1, 0);
		__LIB_1__::func_948(joaat("SD_CARRIAGE_ENTR_01_R"), 1, 0f, 0, 0, 0, 1, 0);
		__LIB_1__::func_948(1234907076, 1, 0f, 0, 0, 0, 1, 0);
		__LIB_1__::func_948(1388233219, 1, 0f, 0, 0, 0, 1, 0);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (!__LIB_0__::func_27(iVar0, 2))
			{
				__LIB_1__::func_683(&iVar0, 2);
			}
			if (__LIB_8__::func_727(Global_35, vLocal_519, &uLocal_1130, 30f, 20f, 10f, 9f, 1f, 0, 0, 1, 1, 1))
			{
			}
			if (__LIB_0__::func_94(Global_35, vLocal_519, 1) <= 10f)
			{
				__LIB_5__::func_79(Global_35, &iVar0, 2049, 0, 0, 2f, 2, 0, 0);
			}
			if (!func_873(cParam0))
			{
				return 0;
			}
			if (!func_1205())
			{
				return 0;
			}
			if (__LIB_0__::func_94(Global_35, vLocal_519, 1) <= 10f)
			{
				if (!func_1193(536870912))
				{
					AUDIO::_0x660A8F876DF1D4F8(6);
					AUDIO::_0x660A8F876DF1D4F8(24);
					func_1206(536870912);
				}
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_1212))
					{
						MAP::REMOVE_BLIP(&iLocal_1212);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_1209))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_1209, -546708623);
					}
					if (__LIB_8__::func_684("MRY3_CONVO"))
					{
						__LIB_6__::func_900("MRY3_CONVO", 1, 0);
					}
					__LIB_9__::func_142(cParam0, "MRY3_OBJ_MARY", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_6__::func_876(cParam0, 1);
				}
			}
			break;
		case 1:
			if (iLocal_29 == 7)
			{
				if (!__LIB_0__::func_899(&uLocal_1187))
				{
					__LIB_4__::func_89(&uLocal_1187, 0);
				}
				__LIB_6__::func_876(cParam0, 29);
			}
			if ((ANIMSCENE::_0x005E6F28DD7ED58D(Local_38[5 /*31*/], "MaryLinton") || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_38[5 /*31*/], "MaryLinton")) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_38[5 /*31*/]) >= 1f)
			{
				if (!__LIB_0__::func_899(&uLocal_1187))
				{
					__LIB_4__::func_89(&uLocal_1187, 0);
				}
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			if (__LIB_9__::func_178(&uLocal_1187) >= 10f)
			{
				if (!func_378(524288))
				{
					return 1;
				}
			}
			if (!func_378(524288))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_735(var uParam0)
{
	if (func_1193(131072))
	{
		return uParam0->f_607 == uParam0->f_607;
	}
	if (__LIB_3__::func_439(Local_38[5 /*31*/]))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[5 /*31*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[5 /*31*/]);
		}
	}
	if (__LIB_0__::func_899(&uLocal_1187))
	{
		__LIB_1__::func_561(&uLocal_1187);
	}
	if (__LIB_0__::func_899(&uLocal_1178))
	{
		__LIB_1__::func_561(&uLocal_1178);
	}
	if (iLocal_36 != 0)
	{
		iLocal_36 = 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(Local_530[0 /*178*/], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0))
	{
		PED::REMOVE_PED_FROM_GROUP(Local_530[0 /*178*/]);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_1212))
	{
		MAP::REMOVE_BLIP(&iLocal_1212);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_1209))
	{
		MAP::_BLIP_REMOVE_MODIFIER(iLocal_1209, -546708623);
	}
	__LIB_0__::func_400(-596723840);
	__LIB_0__::func_400(-1762770596);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "MRY3_GRIEF");
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1221))
	{
		iLocal_1221 = PED::_0x4D0D2E3D8BC000EB(Local_709[5 /*18*/], "p_broom04x_PH_R_HAND", 1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[0]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1223[0]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[5]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1223[5]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[1]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1223[1]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1285))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1285);
	}
	AUDIO::_0x660A8F876DF1D4F8(14);
	if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(iLocal_1202)))
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(iLocal_1202));
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_737(char[4] cParam0)
{
	if (CLOCK::GET_CLOCK_HOURS() != 17)
	{
		CLOCK::SET_CLOCK_TIME(17, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1221))
	{
		iLocal_1221 = OBJECT::CREATE_OBJECT(joaat("P_BROOM04X"), 2502.185f, -1441.229f, 45.31293f, true, true, false, false, true);
		return false;
	}
	if (!func_873(cParam0))
	{
		return false;
	}
	if (!func_1205())
	{
		return false;
	}
	if (!__LIB_0__::func_272(Local_709[5 /*18*/], 0))
	{
		Local_709[5 /*18*/] = __LIB_1__::func_545(iLocal_474, func_868(3, 3), func_869(3, 3), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::_SET_PED_BODY_COMPONENT(Local_709[5 /*18*/], 865644342);
		PED::_UPDATE_PED_VARIATION(Local_709[5 /*18*/], false, true, true, true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_709[5 /*18*/], true);
		return false;
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_738(char[4] cParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1202))
	{
		func_379(iLocal_1202, func_215(12, 1), 2, 1073741824 /* Float: 2f */);
		if (!__LIB_0__::func_163(iLocal_1202, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_1202, -1);
		}
	}
	__LIB_1__::func_948(joaat("SD_CARRIAGE_ENTR_01_L"), 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(joaat("SD_CARRIAGE_ENTR_01_R"), 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1388233219, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1234907076, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(726257907, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(229021101, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(865213245, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1797818933, 1, 0f, 0, 0, 0, 1, 0);
	PED::_0xAB0D553FE20A6E25(0.75f);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[5]))
	{
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1223[5], 0, 0, 0);
		uLocal_1290 = __LIB_1__::func_391(iLocal_1223[5], 0, 0, 10208);
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[5], 7);
	}
	__LIB_9__::func_154(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_530[0 /*178*/], "MaryLinton", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_709[0 /*18*/], "cs_mrlinton", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_709[5 /*18*/], "A_M_M_NBXDOCKWORKERS_01", 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1221))
	{
		__LIB_9__::func_62(cParam0, iLocal_1221, "p_broom04x", 0, 0, 0, 0);
	}
	__LIB_3__::func_456(Local_530[0 /*178*/]);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_739(char[4] cParam0)
{
	if (!PED::_0xA0BC8FAED8CFEB3C(Local_530[0 /*178*/]))
	{
		return false;
	}
	__LIB_1__::func_948(1388233219, 1, 0f, 1, 0, 0, 1, 0);
	__LIB_1__::func_948(1234907076, 1, 0f, 0, 0, 0, 1, 0);
	PED::_0xAB0D553FE20A6E25(0.75f);
	if (!__LIB_0__::func_899(&uLocal_1121))
	{
		__LIB_4__::func_87(&uLocal_1121, 10f, 0);
	}
	if (!MAP::DOES_BLIP_EXIST(Local_709[0 /*18*/].f_1))
	{
		Local_709[0 /*18*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_709[0 /*18*/]);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_709[0 /*18*/].f_1, "MRY3_BLIP_FATHER");
		MAP::_BLIP_SET_MODIFIER(Local_709[0 /*18*/].f_1, -401963276);
		MAP::_BLIP_SET_MODIFIER(Local_709[0 /*18*/].f_1, 231194138);
		MAP::_BLIP_SET_MODIFIER(Local_709[0 /*18*/].f_1, 476433942);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1203))
	{
		iLocal_1203 = __LIB_1__::func_545(iLocal_474, func_868(7, 0), func_869(7, 0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::_SET_PED_BODY_COMPONENT(iLocal_1203, 2083890004);
		PED::_UPDATE_PED_VARIATION(iLocal_1203, false, true, true, true, false);
	}
	func_379(Local_709[0 /*18*/], func_215(3, 1), 2, 1073741824 /* Float: 2f */);
	if (!PATHFIND::_0xDE0EA444735C1368(iLocal_1223[6]))
	{
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[6], 16);
	}
	if (!PATHFIND::_0xDE0EA444735C1368(iLocal_1223[18]))
	{
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[18], 16);
	}
	if (!PATHFIND::_0xDE0EA444735C1368(iLocal_1223[7]))
	{
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[7], 16);
	}
	if (!PATHFIND::_0xDE0EA444735C1368(iLocal_1223[7]))
	{
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[7], 7);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[9]))
	{
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1223[9], 0, 0, 0);
		uLocal_1294 = __LIB_1__::func_391(iLocal_1223[9], 0, 0, 10208);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[5]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[5]);
		PATHFIND::_0xD17672447692478E(iLocal_1223[5], 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[15]))
	{
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1223[15], 0, 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[19]))
	{
		uLocal_1295 = __LIB_1__::func_391(iLocal_1223[19], 0, 0, 0);
		MISC::_0x2FCD528A397E5C88(iLocal_1223[19], 40);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[20]))
	{
		uLocal_1296 = __LIB_1__::func_391(iLocal_1223[20], 0, 0, 0);
		MISC::_0x2FCD528A397E5C88(iLocal_1223[20], 40);
	}
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("mary3_assist_line", 1, 1f, 1f, 1);
	PED::_0x89F5E7ADECCCB49C(Local_709[0 /*18*/], "moderate_drunk");
	__LIB_0__::func_19(&(Local_709[0 /*18*/].f_2), 0);
	__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_740(char[4] cParam0)
{
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 1))
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_530[0 /*178*/], 8192);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_530[0 /*178*/], 16384);
	}
	else
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_530[0 /*178*/], 8192);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_530[0 /*178*/], 16384);
	}
	func_1220();
	func_1221();
	func_1222(cParam0);
	func_1223();
	func_1224(cParam0);
	func_1225(cParam0);
	func_1226(cParam0);
	if (__LIB_11__::func_97(2097152))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[3 /*31*/], false)) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]))
		{
			__LIB_2__::func_966(Local_530[0 /*178*/], Global_35, 1, 1, 1, 0, 1, 1, 1, 1, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 229, true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			func_1229(cParam0);
		}
	}
	PED::_0xAB0D553FE20A6E25(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 28, 1);
	PED::SET_PED_RESET_FLAG(Global_35, 189, true);
	GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_487, ENTITY::GET_ENTITY_COORDS(Local_709[0 /*18*/], true, false), 1f);
	__LIB_1__::func_538(0);
	fLocal_493 = __LIB_0__::func_665(Global_35, Local_709[0 /*18*/], 1, 1);
	if (__LIB_1__::func_205(Global_35, iLocal_1223[11], 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (!__LIB_11__::func_97(256))
			{
				func_1232(256);
			}
			if (!__LIB_11__::func_97(262144))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_709[0 /*18*/], 0))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_709[0 /*18*/]) >= 58)
					{
						MAP::_BLIP_SET_MODIFIER(Local_709[0 /*18*/].f_1, 197772266);
						func_1232(262144);
					}
				}
			}
			if (!__LIB_11__::func_97(131072))
			{
				if (!func_378(4194304))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_530[0 /*178*/], joaat("JOG")))
					{
						func_380(4194304);
					}
				}
				else if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_530[0 /*178*/], 17))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			if (!__LIB_11__::func_97(1))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 17))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
					func_1232(131072);
				}
			}
			if (__LIB_1__::func_205(Global_35, iLocal_1223[10], 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_709[0 /*18*/], 2611.611f, -1414.558f, 46.26895f, 3.6875f, 3.1875f, 1f, false, true, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Global_35, 2589.023f, -1433.736f, 46.58189f, 32.375f, 17.75f, 1.625f, false, true, 0))
				{
					if (!__LIB_11__::func_97(64))
					{
						__LIB_9__::func_195(cParam0, 7);
						func_1232(64);
					}
				}
			}
			if (!__LIB_11__::func_97(1))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 3167))
				{
					if (fLocal_493 <= 10f)
					{
						if (__LIB_0__::func_899(&uLocal_1121))
						{
							if (__LIB_1__::func_583(&uLocal_1121) >= 10f)
							{
								if (func_1233(cParam0))
								{
									__LIB_2__::func_259(&uLocal_1121);
								}
							}
						}
					}
				}
			}
			if (iLocal_28 == 2)
			{
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_38[3 /*31*/], "Mary")) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]))
			{
				func_1234(&uLocal_1089);
				__LIB_3__::func_887(Global_35, Local_530[0 /*178*/], &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
				__LIB_11__::func_98(Local_530[0 /*178*/], Global_35, &uLocal_1328, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 64, 1f, -1f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			if (MAP::DOES_BLIP_EXIST(Local_709[0 /*18*/].f_1))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_709[0 /*18*/].f_1, 197772266);
			}
			return 1;
	}
	return 0;
}

bool func_741(var uParam0)
{
	iLocal_36 = 0;
	if (__LIB_0__::func_899(&uLocal_1148))
	{
		__LIB_1__::func_561(&uLocal_1148);
	}
	VOLUME::_DELETE_VOLUME(iLocal_1223[6]);
	__LIB_0__::func_172(iLocal_1223[14]);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[9]))
	{
		__LIB_0__::func_484(&uLocal_1294, iLocal_1223[9], 0);
	}
	if (PED::IS_PED_IN_GROUP(Local_530[0 /*178*/]))
	{
		PED::REMOVE_PED_FROM_GROUP(Local_530[0 /*178*/]);
	}
	if (MAP::DOES_BLIP_EXIST(Local_709[0 /*18*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_709[0 /*18*/].f_1));
	}
	__LIB_2__::func_426(&(Local_709[5 /*18*/]));
	return uParam0->f_607 == uParam0->f_607;
}

bool func_742(char[4] cParam0)
{
	iLocal_36 = 0;
	if (__LIB_0__::func_899(&uLocal_1148))
	{
		__LIB_1__::func_561(&uLocal_1148);
	}
	if (!__LIB_0__::func_899(&uLocal_1121))
	{
		__LIB_4__::func_87(&uLocal_1121, 10f, 0);
	}
	func_379(Global_35, func_215(0, 5), 2, 1073741824 /* Float: 2f */);
	func_379(Local_530[0 /*178*/], func_215(1, 3), 2, 1073741824 /* Float: 2f */);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[15]))
	{
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1223[15], 0, 0, 0);
	}
	__LIB_9__::func_142(cParam0, "MRY3_FOLLOW_OBJ", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_11__::func_231(cParam0, "MRY3_FOLLOW_OBJ", 4, 0, 0);
	if (CLOCK::GET_CLOCK_HOURS() != 17)
	{
		CLOCK::SET_CLOCK_TIME(17, 0, 0);
	}
	func_1234(&uLocal_1089);
	__LIB_3__::func_887(Global_35, Local_530[0 /*178*/], &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	__LIB_11__::func_98(Local_530[0 /*178*/], Global_35, &uLocal_1328, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 64, 1f, -1f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_743(char[4] cParam0)
{
	if (!PED::_0xA0BC8FAED8CFEB3C(Local_530[0 /*178*/]))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(Local_709[0 /*18*/]))
	{
		return 0;
	}
	if (__LIB_6__::func_862(cParam0, 8))
	{
		__LIB_9__::func_142(cParam0, "MRY3_FOLLOW_OBJ", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	PED::_0xAB0D553FE20A6E25(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	return 1;
}

bool func_744(char[4] cParam0)
{
	PED::_0xAB0D553FE20A6E25(0.75f);
	if (!MAP::DOES_BLIP_EXIST(Local_709[0 /*18*/].f_1))
	{
		Local_709[0 /*18*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_709[0 /*18*/]);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_709[0 /*18*/].f_1, "MRY3_BLIP_FATHER");
		MAP::_BLIP_SET_MODIFIER(Local_709[0 /*18*/].f_1, -401963276);
		MAP::_BLIP_SET_MODIFIER(Local_709[0 /*18*/].f_1, 231194138);
		MAP::_BLIP_SET_MODIFIER(Local_709[0 /*18*/].f_1, 476433942);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[22]))
	{
		uLocal_1298 = __LIB_1__::func_391(iLocal_1223[22], 0, 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[23]))
	{
		uLocal_1299 = __LIB_1__::func_391(iLocal_1223[23], 0, 0, 0);
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[23], 16);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[6]) && !PATHFIND::_0xDE0EA444735C1368(iLocal_1223[6]))
	{
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[6], 16);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[18]) && !PATHFIND::_0xDE0EA444735C1368(iLocal_1223[18]))
	{
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[18], 16);
	}
	__LIB_0__::func_19(&(Local_709[0 /*18*/].f_2), 0);
	__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 1);
	__LIB_9__::func_154(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_709[0 /*18*/], "cs_mrlinton", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_530[0 /*178*/], "MaryLinton", 0, 0, 0, 0);
	__LIB_9__::func_142(cParam0, "MRY3_FOLLOW_OBJ", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_6__::func_868(cParam0, 33554432);
	return cParam0->f_607 == cParam0->f_607;
}

int func_745(char[4] cParam0)
{
	func_1239(cParam0);
	func_1240(cParam0);
	func_1241(cParam0);
	func_1229(cParam0);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 28, 1);
	PED::SET_PED_RESET_FLAG(Global_35, 189, true);
	PED::_0xAB0D553FE20A6E25(0.75f);
	GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_487, ENTITY::GET_ENTITY_COORDS(Local_709[0 /*18*/], true, false), 1f);
	__LIB_1__::func_538(0);
	fLocal_493 = __LIB_0__::func_665(Global_35, Local_709[0 /*18*/], 1, 1);
	if (!func_378(16))
	{
		if (func_1242(cParam0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_709[1 /*18*/], true);
			__LIB_9__::func_154(cParam0, Local_709[1 /*18*/], "cs_ashton", 0, 0, 0, 0);
			func_380(16);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	if (__LIB_1__::func_205(Global_35, iLocal_1223[21], 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (__LIB_1__::func_205(Global_35, iLocal_1223[22], 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
			else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 17))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
			if (!__LIB_11__::func_97(256))
			{
				func_1232(256);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_709[0 /*18*/], 2611.611f, -1414.558f, 46.26895f, 3.6875f, 3.1875f, 1f, false, true, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Global_35, 2589.023f, -1433.736f, 46.58189f, 32.375f, 17.75f, 1.625f, false, true, 0))
				{
					if (!__LIB_11__::func_97(64))
					{
						__LIB_9__::func_195(cParam0, 7);
						func_1232(64);
					}
				}
			}
			if (!__LIB_11__::func_97(1))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 3167))
				{
					if (fLocal_493 <= 10f)
					{
						if (__LIB_0__::func_899(&uLocal_1121))
						{
							if (__LIB_1__::func_583(&uLocal_1121) >= 10f)
							{
								if (func_1233(cParam0))
								{
									__LIB_2__::func_259(&uLocal_1121);
								}
							}
						}
					}
				}
			}
			if (!__LIB_11__::func_97(128))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_709[0 /*18*/], 2620.297f, -1384.312f, 47.8912f, 5.0625f, 2.9375f, 2.6875f, false, true, 0))
				{
					__LIB_6__::func_876(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1243(cParam0, 0))
			{
				if (!func_378(1))
				{
					func_380(1);
				}
				func_1244(cParam0, 0);
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_746(char[4] cParam0)
{
	__LIB_1__::func_727(Local_530[0 /*178*/], 1);
	__LIB_1__::func_726(Global_35, 1);
	__LIB_5__::func_438(&uLocal_1089);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1203);
	if (PED::IS_PED_IN_GROUP(Local_530[0 /*178*/]))
	{
		PED::REMOVE_PED_FROM_GROUP(Local_530[0 /*178*/]);
	}
	if (MAP::DOES_BLIP_EXIST(Local_709[0 /*18*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_709[0 /*18*/].f_1));
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 299, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 299, false);
	}
	__LIB_0__::func_484(&uLocal_1298, iLocal_1223[22], 0);
	__LIB_0__::func_484(&uLocal_1299, iLocal_1223[23], 0);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[23]) && PATHFIND::_0xDE0EA444735C1368(iLocal_1223[23]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[23]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[6]) && PATHFIND::_0xDE0EA444735C1368(iLocal_1223[6]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[6]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[18]) && PATHFIND::_0xDE0EA444735C1368(iLocal_1223[18]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[18]);
	}
	__LIB_6__::func_887(cParam0, 33554432);
	func_174(4, 23);
	func_1248(cParam0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_747(char[4] cParam0)
{
	if (!func_1249(6, 11, 1))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(Local_709[6 /*18*/]))
	{
		return 0;
	}
	if (!func_1250(cParam0))
	{
		return 0;
	}
	else if (!func_1251(cParam0, 2, 4))
	{
		return 0;
	}
	else
	{
		if (!__LIB_2__::func_343(Local_709[2 /*18*/], iLocal_1216, 0))
		{
			__LIB_4__::func_185(&(Local_709[2 /*18*/]), &iLocal_1216, -1, 1);
		}
		if (!__LIB_2__::func_343(Local_709[3 /*18*/], iLocal_1216, 0))
		{
			__LIB_4__::func_185(&(Local_709[3 /*18*/]), &iLocal_1216, 0, 1);
		}
		if (!__LIB_0__::func_71(Local_709[4 /*18*/]))
		{
			__LIB_1__::func_571(Local_709[4 /*18*/], Local_709[10 /*18*/], 0, -1, 1);
		}
	}
	if (!func_1256())
	{
		return 0;
	}
	if (!func_1242(cParam0))
	{
		return 0;
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_709[1 /*18*/], true);
	}
	__LIB_9__::func_154(cParam0, Local_709[1 /*18*/], "cs_ashton", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_709[0 /*18*/], "cs_mrlinton", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_530[0 /*178*/], "MaryLinton", 0, 0, 0, 0);
	if (Global_43838 != 1 && Global_43838 != 2)
	{
		func_379(Local_709[1 /*18*/], func_215(4, 1), 2, 1073741824 /* Float: 2f */);
	}
	if (CLOCK::GET_CLOCK_HOURS() != 18)
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	}
	return 1;
}

bool func_748(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[19]))
	{
		uLocal_1295 = __LIB_1__::func_391(iLocal_1223[19], 0, 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[20]))
	{
		uLocal_1296 = __LIB_1__::func_391(iLocal_1223[20], 0, 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[35]))
	{
		uLocal_1300 = __LIB_1__::func_391(iLocal_1223[35], 0, 0, 10208);
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_1223[35], 0, 1);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_749(char[4] cParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (__LIB_6__::func_862(cParam0, 8))
	{
		if (!func_1249(6, 11, 1))
		{
			return false;
		}
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_1209))
	{
		MAP::REMOVE_BLIP(&iLocal_1209);
	}
	if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ASHTON")))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ASHTON"));
	}
	__LIB_0__::func_19(&(Local_709[1 /*18*/].f_2), 2);
	__LIB_9__::func_195(cParam0, 1);
	func_772(iLocal_1202, 2493.517f, -1445.109f, 45.101f, 2.257f, 2, 1073741824 /* Float: 2f */);
	GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_486, ENTITY::GET_ENTITY_COORDS(Local_709[1 /*18*/], true, false), 1f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1216))
	{
		PED::_0x53BA7D96B9A421D9(Global_35, iLocal_1216);
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_1213))
	{
		iLocal_1213 = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, 2592.583f, -1432.581f, 45.4481f, 25f);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1213, "MRY3_BLIP_BUYER");
	}
	if (!__LIB_0__::func_163(Local_709[0 /*18*/], -982327190))
	{
		TASK::TASK_STAND_STILL(Local_709[0 /*18*/], -1);
	}
	if (!__LIB_0__::func_163(Local_530[0 /*178*/], -982327190))
	{
		TASK::TASK_STAND_STILL(Local_530[0 /*178*/], -1);
	}
	if (!__LIB_0__::func_163(Local_709[1 /*18*/], -982327190))
	{
		TASK::TASK_STAND_STILL(Local_709[1 /*18*/], -1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[2]))
	{
		MISC::_0x2FCD528A397E5C88(iLocal_1223[2], 8);
		MISC::_0x2FCD528A397E5C88(iLocal_1223[2], 40);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1223[2], 0, 0, 0);
		__LIB_3__::func_729(iLocal_1223[2], 0, 0);
	}
	POPULATION::_0xC6DCC2A3A8825C85(1);
	if (!__LIB_0__::func_899(&uLocal_1142))
	{
		__LIB_4__::func_89(&uLocal_1142, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[24]))
	{
		uLocal_1289 = __LIB_1__::func_391(iLocal_1223[24], 0, 0, 0);
	}
	__LIB_3__::func_456(Local_530[0 /*178*/]);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_530[0 /*178*/], joaat("REL_GANG_DUTCHS"));
	if (func_378(1))
	{
		func_1257(1);
	}
	__LIB_6__::func_876(cParam0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_750(char[4] cParam0)
{
	if (__LIB_0__::func_899(&uLocal_1142))
	{
	}
	func_1258(cParam0);
	func_1259();
	func_1260();
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	PED::SET_PED_RESET_FLAG(iLocal_1202, 154, true);
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1216, 0))
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1216, 6f);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_709[4 /*18*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_709[4 /*18*/], 1.5f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (!__LIB_0__::func_163(Local_709[11 /*18*/], -1057545828))
	{
		TASK::TASK_ANIMAL_INTERACTION(Local_709[11 /*18*/], Local_709[6 /*18*/], joaat("INTERACTION_FOOD"), 0, 0);
	}
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_486))
	{
		if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_486) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[1 /*18*/], 17))
		{
			if (__LIB_0__::func_899(&uLocal_1142))
			{
				__LIB_1__::func_561(&uLocal_1142);
			}
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_1223[27], 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			func_1261(cParam0);
			func_1262();
			if (PED::IS_PED_IN_VEHICLE(Local_709[1 /*18*/], iLocal_1216, false))
			{
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (PED::IS_PED_IN_VEHICLE(Local_709[1 /*18*/], iLocal_1216, true))
			{
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1216, 0, true);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_1216, 0, true, true, true);
				if (!__LIB_0__::func_163(Local_709[2 /*18*/], -235832601))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_709[2 /*18*/], iLocal_1216, "mary3_wagon_chase_left", 0, 0, 9740, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
				}
			}
			if (__LIB_0__::func_163(Local_709[2 /*18*/], -235832601))
			{
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_751(var uParam0)
{
	GRAPHICS::DESTROY_TRACKED_POINT(iLocal_485);
	GRAPHICS::DESTROY_TRACKED_POINT(iLocal_486);
	GRAPHICS::DESTROY_TRACKED_POINT(Local_709[6 /*18*/].f_16);
	GRAPHICS::DESTROY_TRACKED_POINT(Local_709[7 /*18*/].f_16);
	GRAPHICS::DESTROY_TRACKED_POINT(Local_709[8 /*18*/].f_16);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_752(char[4] cParam0)
{
	if (!func_1250(cParam0))
	{
		return false;
	}
	else
	{
		if (!func_1251(cParam0, 2, 4))
		{
			return false;
		}
		else
		{
			__LIB_4__::func_185(&(Local_709[2 /*18*/]), &iLocal_1216, -1, 1);
			__LIB_4__::func_185(&(Local_709[3 /*18*/]), &iLocal_1216, 0, 1);
			__LIB_1__::func_571(Local_709[4 /*18*/], Local_709[10 /*18*/], 0, -1, 1);
		}
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1216, 0, true);
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_1216, 0, true, true, true);
		PED::_0x53BA7D96B9A421D9(Global_35, iLocal_1216);
	}
	if (!func_1242(cParam0))
	{
		return false;
	}
	else
	{
		__LIB_4__::func_185(&(Local_709[1 /*18*/]), &iLocal_1216, 3, 1);
	}
	if (!func_1249(6, 11, 1))
	{
		return false;
	}
	else if (!__LIB_0__::func_163(Local_709[11 /*18*/], -1057545828))
	{
		TASK::TASK_ANIMAL_INTERACTION(Local_709[11 /*18*/], Local_709[6 /*18*/], joaat("INTERACTION_FOOD"), 0, 0);
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(Local_709[6 /*18*/]))
	{
		return false;
	}
	if (!func_1256())
	{
		return false;
	}
	func_379(Local_530[0 /*178*/], func_215(1, 4), 2, 1073741824 /* Float: 2f */);
	if (Global_43838 == 1)
	{
		func_379(iLocal_1216, func_215(5, 0), 2, 1073741824 /* Float: 2f */);
		func_379(Global_35, func_215(0, 7), 2, 1073741824 /* Float: 2f */);
		func_379(Local_709[10 /*18*/], func_215(10, 3), 2, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_379(iLocal_1216, func_215(5, 3), 2, 1073741824 /* Float: 2f */);
		func_379(Global_35, func_215(0, 8), 2, 1073741824 /* Float: 2f */);
		func_379(Local_709[10 /*18*/], func_215(10, 2), 2, 1073741824 /* Float: 2f */);
	}
	if (!MAP::DOES_BLIP_EXIST(Local_709[1 /*18*/].f_1))
	{
		Local_709[1 /*18*/].f_1 = __LIB_8__::func_778(408396114, iLocal_1216, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_709[1 /*18*/].f_1, "MRY3_BLIP_WAGON");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[2]))
	{
		MISC::_0x2FCD528A397E5C88(iLocal_1223[2], 8);
		MISC::_0x2FCD528A397E5C88(iLocal_1223[2], 40);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1223[2], 0, 0, 0);
		__LIB_3__::func_729(iLocal_1223[2], 0, 0);
	}
	if (CLOCK::GET_CLOCK_HOURS() != 18)
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_753(var uParam0)
{
	if (!__LIB_0__::func_163(Local_709[4 /*18*/], 658540077))
	{
		if (Global_43838 == 1)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_709[4 /*18*/], "mary3_amb_wagon_right", 0, 9740, -1, 0, 0, -1);
		}
		else if (Global_43838 == 2)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_709[4 /*18*/], "mary3_amb_wagon_left", 0, 9740, -1, 0, 0, -1);
		}
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_754(char[4] cParam0)
{
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 0.35f);
	if (TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_1216))
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_RESUME(iLocal_1216);
	}
	if (!__LIB_0__::func_163(Local_709[2 /*18*/], -235832601))
	{
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_709[2 /*18*/], iLocal_1216, "mary3_wagon_chase_left", 0, 0, 9740, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
	}
	if (!__LIB_0__::func_163(Local_709[4 /*18*/], 658540077))
	{
		if (Global_43838 == 1)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_709[4 /*18*/], "mary3_amb_wagon_right", 0, 9740, -1, 0, 0, -1);
		}
		else
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_709[4 /*18*/], "mary3_amb_wagon_left", 0, 9740, -1, 0, 0, -1);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[37]))
	{
		uLocal_1297 = __LIB_1__::func_391(iLocal_1223[37], 0, 0, 4096);
	}
	if (!__LIB_0__::func_899(&uLocal_1139))
	{
		__LIB_4__::func_89(&uLocal_1139, 0);
	}
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_MISSION_CHASE"));
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 1);
	uLocal_1381 = GRAPHICS::_0xFA50F79257745E74(vLocal_507, 14f, 1, 45, 0);
	AUDIO::_0x0D7FD6A55FD63AEF(9, 3, 0);
	__LIB_9__::func_195(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_755(char[4] cParam0)
{
	func_1264(cParam0);
	func_1259();
	func_1260();
	if (STREAMING::_0x8A3945405B31048F() > 0.9f)
	{
		__LIB_5__::func_521(0.9f);
	}
	PED::_0xAB0D553FE20A6E25(0.8f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	PED::SET_PED_RESET_FLAG(iLocal_1202, 154, true);
	PED::SET_PED_RESET_FLAG(Local_709[2 /*18*/], 222, true);
	PED::SET_PED_RESET_FLAG(Local_709[3 /*18*/], 222, true);
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_709[4 /*18*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_709[4 /*18*/], 1.5f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (!__LIB_11__::func_97(2048))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_1216, iLocal_1223[36], true, 0))
		{
			func_1232(2048);
		}
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			func_1266();
			if (__LIB_0__::func_665(iLocal_1217, Global_35, 1, 1) <= 250f)
			{
				if (!__LIB_0__::func_163(Local_709[12 /*18*/], -235832601))
				{
					__LIB_9__::func_948(cParam0, Local_38[10 /*31*/]);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_709[12 /*18*/], iLocal_1217, "mary3_boat_route", 524308, 0, 8, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
				}
			}
			if (__LIB_0__::func_394(Global_35, Local_709[6 /*18*/], 0))
			{
				if (!__LIB_0__::func_163(Local_709[11 /*18*/], 2121492476))
				{
					TASK::TASK_REACT(Local_709[11 /*18*/], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Shocked", 2f, 1f, 4);
				}
			}
			if (!__LIB_11__::func_97(16))
			{
				VEHICLE::_0xCBF88256E44D5D39(iLocal_1216, 1);
				func_1232(16);
			}
			if (PED::GET_VEHICLE_PED_IS_USING(Global_35) == iLocal_1216)
			{
				if (!__LIB_0__::func_30(iLocal_1368))
				{
					iLocal_1368 = __LIB_0__::func_45("MRY3_JACK_HELP", 10000, 0, 0, 0, 1);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_709[2 /*18*/], joaat("REL_PLAYER_ENEMY"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_709[3 /*18*/], joaat("REL_PLAYER_ENEMY"));
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[2 /*31*/], func_409(7));
				__LIB_9__::func_142(cParam0, "MRY3_OBJ_JACK", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_6__::func_876(cParam0, 1);
			}
			if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_1216) >= 802)
			{
				__LIB_17__::func_523(iLocal_1216);
				VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iLocal_1216, 4);
				VEHICLE::_0xCBF88256E44D5D39(iLocal_1216, 0);
				if (!__LIB_11__::func_97(134217728))
				{
					func_1232(134217728);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_709[2 /*18*/], 1, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_709[3 /*18*/], 1, false);
				func_1232(4194304);
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1216, 11.7f);
			if (!__LIB_11__::func_97(4194304))
			{
				if (PED::GET_VEHICLE_PED_IS_USING(Global_35) != iLocal_1216)
				{
					if (__LIB_0__::func_899(&uLocal_1166))
					{
						__LIB_1__::func_561(&uLocal_1166);
					}
					iLocal_27 = 6;
					func_1270(2, 7);
					func_1271(cParam0, "MRY3_OBJ_CHASE", ENTITY::GET_ENTITY_COORDS(iLocal_1216, true, false));
					__LIB_9__::func_208(cParam0, "MRY3_OBJ_CHASE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_6__::func_876(cParam0, 0);
				}
			}
			if (__LIB_3__::func_330(Global_35, iLocal_1216, 1))
			{
				iLocal_1366 = PED::_GET_SEAT_PED_IS_USING(Global_35);
				if (PED::IS_PED_JACKING(Global_35))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_38[2 /*31*/], "bPanicLoop", true, false);
					iLocal_27 = 7;
					if (!__LIB_0__::func_899(&uLocal_1157))
					{
						__LIB_4__::func_89(&uLocal_1157, 0);
					}
				}
				if (__LIB_0__::func_899(&uLocal_1157))
				{
					if (__LIB_1__::func_583(&uLocal_1157) <= 10f)
					{
						if (__LIB_0__::func_272(Local_709[2 /*18*/], 0))
						{
							ENTITY::SET_ENTITY_PROOFS(Local_709[2 /*18*/], 8, false);
						}
						if (__LIB_0__::func_272(Local_709[3 /*18*/], 0))
						{
							ENTITY::SET_ENTITY_PROOFS(Local_709[3 /*18*/], 8, false);
						}
					}
					else
					{
						if (__LIB_0__::func_272(Local_709[2 /*18*/], 0))
						{
							ENTITY::SET_ENTITY_PROOFS(Local_709[2 /*18*/], 0, false);
						}
						if (__LIB_0__::func_272(Local_709[3 /*18*/], 0))
						{
							ENTITY::SET_ENTITY_PROOFS(Local_709[2 /*18*/], 0, false);
						}
					}
				}
			}
			if (__LIB_11__::func_97(4194304))
			{
				if (__LIB_0__::func_272(Local_709[2 /*18*/], 0))
				{
					if (!__LIB_0__::func_163(Local_709[2 /*18*/], 242628503))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1215);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1215);
						TASK::TASK_LEAVE_VEHICLE(0, iLocal_1216, 64, 0);
						TASK::TASK_SMART_FLEE_PED(0, Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1215);
						TASK::TASK_PERFORM_SEQUENCE(Local_709[2 /*18*/], iLocal_1215);
					}
				}
				if (__LIB_0__::func_272(Local_709[3 /*18*/], 0))
				{
					if (!__LIB_0__::func_163(Local_709[3 /*18*/], 242628503))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1215);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1215);
						TASK::TASK_LEAVE_VEHICLE(0, iLocal_1216, 64, 0);
						TASK::TASK_SMART_FLEE_PED(0, Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1215);
						TASK::TASK_PERFORM_SEQUENCE(Local_709[3 /*18*/], iLocal_1215);
					}
				}
			}
			else
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_709[2 /*18*/], iLocal_1216, false))
				{
					if (!__LIB_0__::func_163(Local_709[2 /*18*/], 518218985))
					{
						TASK::TASK_SMART_FLEE_PED(Local_709[2 /*18*/], Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
					}
					if (PED::IS_PED_IN_VEHICLE(Local_709[3 /*18*/], iLocal_1216, false))
					{
						if (!__LIB_0__::func_163(Local_709[3 /*18*/], 242628503))
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1215);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1215);
							TASK::TASK_LEAVE_VEHICLE(0, iLocal_1216, 64, 0);
							TASK::TASK_SMART_FLEE_PED(0, Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1215);
							TASK::TASK_PERFORM_SEQUENCE(Local_709[3 /*18*/], iLocal_1215);
						}
					}
				}
				if (!PED::IS_PED_IN_VEHICLE(Local_709[3 /*18*/], iLocal_1216, false))
				{
					if (!__LIB_0__::func_163(Local_709[3 /*18*/], 518218985))
					{
						TASK::TASK_SMART_FLEE_PED(Local_709[3 /*18*/], Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
					}
					if (PED::IS_PED_IN_VEHICLE(Local_709[2 /*18*/], iLocal_1216, false))
					{
						if (!__LIB_0__::func_163(Local_709[2 /*18*/], 242628503))
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1215);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1215);
							TASK::TASK_LEAVE_VEHICLE(0, iLocal_1216, 64, 0);
							TASK::TASK_SMART_FLEE_PED(0, Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1215);
							TASK::TASK_PERFORM_SEQUENCE(Local_709[2 /*18*/], iLocal_1215);
						}
					}
				}
			}
			if ((iLocal_1366 == -1 || iLocal_1366 == 0) || __LIB_11__::func_97(4194304))
			{
				if ((!__LIB_5__::func_463() && !PED::IS_PED_IN_VEHICLE(Local_709[2 /*18*/], iLocal_1216, false)) && !PED::IS_PED_IN_VEHICLE(Local_709[3 /*18*/], iLocal_1216, false))
				{
					__LIB_6__::func_876(cParam0, 29);
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_756(var uParam0)
{
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 1f);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_709[2 /*18*/], false);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_709[3 /*18*/], false);
	if (MAP::DOES_BLIP_EXIST(Local_709[1 /*18*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_709[1 /*18*/].f_1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_709[0 /*18*/]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_709[0 /*18*/]));
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_709[10 /*18*/]));
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_709[4 /*18*/]));
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1217);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_709[12 /*18*/]));
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_709[13 /*18*/]));
	Global_43838 = 0;
	ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[2 /*31*/]);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[35]))
	{
		__LIB_0__::func_484(&uLocal_1300, iLocal_1223[35], 0);
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_1223[35], 0, 1);
	}
	__LIB_2__::func_426(&(Local_709[11 /*18*/]));
	__LIB_2__::func_426(&(Local_709[6 /*18*/]));
	return uParam0->f_607 == uParam0->f_607;
}

bool func_757(char[4] cParam0)
{
	int iVar0;
	if (!func_1250(cParam0))
	{
		return false;
	}
	else
	{
		if (!func_1242(cParam0))
		{
			return false;
		}
		PED::_0x53BA7D96B9A421D9(Global_35, iLocal_1216);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_980[iVar0 /*18*/]))
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(Local_980[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[37]))
	{
		uLocal_1297 = __LIB_1__::func_391(iLocal_1223[37], 0, 0, 4096);
	}
	uLocal_1381 = GRAPHICS::_0xFA50F79257745E74(vLocal_507, 14f, 1, 45, 0);
	uLocal_1382 = GRAPHICS::_0xFA50F79257745E74(vLocal_510, 14f, 1, 45, 0);
	func_379(iLocal_1216, func_215(5, 2), 2, 1073741824 /* Float: 2f */);
	__LIB_4__::func_185(&Global_35, &iLocal_1216, -1, 1);
	__LIB_4__::func_185(&(Local_709[1 /*18*/]), &iLocal_1216, 3, 1);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 1);
	__LIB_9__::func_948(cParam0, Local_38[10 /*31*/]);
	if (CLOCK::GET_CLOCK_HOURS() != 18)
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_759(char[4] cParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(Local_530[0 /*178*/], 0))
	{
		if (!ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_530[0 /*178*/]))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_530[0 /*178*/], false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_530[0 /*178*/], false, false);
			return false;
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_530[0 /*178*/], func_868(1, 2), false, true, true);
		ENTITY::SET_ENTITY_HEADING(Local_530[0 /*178*/], func_869(1, 2));
		ENTITY::FREEZE_ENTITY_POSITION(Local_530[0 /*178*/], true);
		if (!__LIB_0__::func_163(Local_530[0 /*178*/], -2017877118))
		{
			TASK::TASK_PLAY_ANIM(Local_530[0 /*178*/], sLocal_527, "base", 8f, -8f, -1, 1, 0f, false, 524299, false, 0, false);
		}
	}
	else
	{
		return false;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_0__::func_489(0, 0);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Local_980[iVar0 /*18*/] = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_1216, iVar0);
		ENTITY::SET_ENTITY_PROOFS(Local_980[iVar0 /*18*/], 0, false);
		iVar0++;
	}
	AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_1216, 0, 16, -1);
	__LIB_9__::func_254(cParam0, Local_530[0 /*178*/], 1);
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0f, true, false);
	}
	__LIB_9__::func_243(cParam0, "1-BeforeChoice");
	PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_ASS"), Local_709[1 /*18*/]);
	if (__LIB_11__::func_97(4194304))
	{
		AITRANSPORT::_0xBA8818212633500A(iLocal_1216, 0, 1);
		__LIB_6__::func_876(cParam0, 1);
		__LIB_9__::func_195(cParam0, 4);
	}
	else
	{
		__LIB_6__::func_876(cParam0, 0);
		__LIB_9__::func_195(cParam0, 1);
	}
	func_1277();
	__LIB_9__::func_948(cParam0, Local_38[11 /*31*/]);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[11 /*31*/], func_409(42));
	__LIB_9__::func_948(cParam0, Local_38[12 /*31*/]);
	__LIB_4__::func_527(&(cParam0->f_7375), 1f);
	__LIB_9__::func_125(cParam0, "1-BeforeChoice");
	PED::ADD_RELATIONSHIP_GROUP("m_relLasso", &iLocal_1383);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_1383);
	PED::SET_PED_CONFIG_FLAG(Local_709[1 /*18*/], 138, true);
	return cParam0->f_607 == cParam0->f_607;
}

int func_760(char[4] cParam0)
{
	int iVar0;
	func_1279();
	func_1280(cParam0);
	if (__LIB_1__::func_707(joaat("PROVISION_MARYS_BROOCH"), 1, 0))
	{
		bLocal_498 = true;
		if (__LIB_6__::func_889(cParam0) <= 1)
		{
			__LIB_6__::func_876(cParam0, 2);
		}
	}
	if (bLocal_498)
	{
		if (!__LIB_0__::func_272(Local_709[1 /*18*/], 0))
		{
			if (!__LIB_11__::func_97(32768))
			{
				__LIB_1__::func_715(3, 0, 1, "MRY3_HON_MURDER", Local_709[1 /*18*/], 0, 1065353216 /* Float: 1f */, 0);
				func_1232(32768);
			}
		}
	}
	if (__LIB_6__::func_889(cParam0) >= 2)
	{
		if (iLocal_34 == 5 || ANIMSCENE::_0x1F0E401031E20146(Local_38[12 /*31*/], func_409(47)))
		{
			if (!__LIB_0__::func_163(Local_709[1 /*18*/], 518218985))
			{
				if (__LIB_0__::func_272(Local_709[1 /*18*/], 0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_709[1 /*18*/], Global_35, 3, 2097152, -1f, -1, 0);
				}
			}
		}
		if (func_1281(cParam0))
		{
			return 1;
		}
	}
	if (__LIB_6__::func_889(cParam0) == 1)
	{
		func_1282();
	}
	if (__LIB_6__::func_889(cParam0) >= 2)
	{
		func_1283(cParam0);
	}
	if (STREAMING::_0x8A3945405B31048F() > 0.9f)
	{
		__LIB_5__::func_521(0.9f);
	}
	PED::_0xAB0D553FE20A6E25(0.8f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (__LIB_3__::func_330(Local_709[1 /*18*/], iLocal_1216, 0))
	{
		if (!__LIB_11__::func_97(1024))
		{
			func_1232(1024);
		}
	}
	else if (__LIB_11__::func_97(1024))
	{
		func_1284(1024);
	}
	if (__LIB_11__::func_97(2048))
	{
		vLocal_504 = { vLocal_510 };
	}
	else
	{
		vLocal_504 = { vLocal_507 };
	}
	if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_LASSO"))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_709[1 /*18*/]) != iLocal_1383)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_709[1 /*18*/], iLocal_1383);
		}
	}
	else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_709[1 /*18*/]) != joaat("REL_CIVMALE"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_709[1 /*18*/], joaat("REL_CIVMALE"));
	}
	if (__LIB_6__::func_889(cParam0) <= 2)
	{
		if (__LIB_11__::func_97(16384))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_709[1 /*18*/]))
	{
		if (__LIB_0__::func_139(iLocal_1322))
		{
			__LIB_1__::func_281(&iLocal_1322, 1, 1);
		}
		if (__LIB_0__::func_139(iLocal_1321))
		{
			__LIB_1__::func_281(&iLocal_1321, 1, 1);
		}
	}
	if (__LIB_6__::func_889(cParam0) >= 1)
	{
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Local_709[1 /*18*/], 3f, 3, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_709[1 /*18*/]), "DISCOVERABLE_NAME_ASHTON", 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_709[1 /*18*/]) && !__LIB_0__::func_272(Local_709[1 /*18*/], 0))
	{
		if (!func_378(16384))
		{
			func_380(16384);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[10 /*31*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[10 /*31*/]);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[2 /*31*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[2 /*31*/]);
		}
	}
	if (func_378(8192))
	{
		__LIB_4__::func_614();
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (__LIB_11__::func_97(4194304))
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_1216, 0, 1);
				__LIB_6__::func_876(cParam0, 1);
			}
			if (__LIB_3__::func_330(Global_35, iLocal_1216, 1))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_1211))
				{
					iLocal_1211 = __LIB_8__::func_777(408396114, vLocal_504, 14f, 1);
					MAP::_BLIP_SET_MODIFIER(iLocal_1211, -1878373110);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_1214))
				{
					MAP::REMOVE_BLIP(&iLocal_1214);
				}
				if (__LIB_8__::func_618(cParam0) != 1 && __LIB_8__::func_618(cParam0) != -1)
				{
					__LIB_9__::func_195(cParam0, 1);
				}
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_1211))
				{
					MAP::REMOVE_BLIP(&iLocal_1211);
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_1214))
				{
					iLocal_1214 = __LIB_8__::func_778(408396114, iLocal_1216, 1);
				}
				if (__LIB_8__::func_618(cParam0) != 2 && __LIB_8__::func_618(cParam0) != 3)
				{
					__LIB_9__::func_195(cParam0, 2);
				}
			}
			if (__LIB_0__::func_266(iLocal_1216, vLocal_504, 14f, 1, 1))
			{
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_MISSION_CHASE"));
				if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_1216))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1216, 5f, 4, false);
				}
				if (ENTITY::GET_ENTITY_SPEED(iLocal_1216) <= 1f)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1216, 0f);
					TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
					AITRANSPORT::_0xBA8818212633500A(iLocal_1216, 0, 1);
					if (!__LIB_11__::func_97(134217728))
					{
						func_1232(134217728);
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[2 /*31*/]))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[2 /*31*/]);
					}
					__LIB_0__::func_325(&iLocal_1211);
					__LIB_9__::func_195(cParam0, 4);
					__LIB_6__::func_876(cParam0, 1);
				}
			}
			else if (__LIB_11__::func_97(134217728))
			{
				func_1284(134217728);
			}
			break;
		case 1:
			if (!func_378(8192))
			{
				func_380(8192);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (!func_1193(2))
			{
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1216, false))
				{
					if (!__LIB_0__::func_139(iLocal_1319))
					{
						iLocal_1319 = __LIB_2__::func_403("MRY3_CXT_PULL", joaat("INPUT_CONTEXT_Y"), iLocal_1216, 3, 1, 0, 1, 0, 2.25f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_1319) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_709[1 /*18*/]), 0);
						HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[__LIB_0__::func_17(iLocal_1319) /*18*/].f_3, 22, 1);
					}
					__LIB_2__::func_259(&uLocal_1133);
					__LIB_9__::func_195(cParam0, 7);
					func_1206(2);
				}
			}
			if (!MAP::DOES_BLIP_EXIST(Local_709[1 /*18*/].f_1))
			{
				Local_709[1 /*18*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_709[1 /*18*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_709[1 /*18*/].f_1, "MRY3_BLIP_BUYER");
				MAP::_BLIP_SET_MODIFIER(Local_709[1 /*18*/].f_1, -401963276);
			}
			if (!__LIB_11__::func_97(4194304))
			{
				if (!__LIB_0__::func_266(iLocal_1216, vLocal_504, 14f, 1, 1))
				{
					MAP::REMOVE_BLIP(&(Local_709[1 /*18*/].f_1));
					func_1195(2);
					if (__LIB_11__::func_97(134217728))
					{
						func_1284(134217728);
					}
					__LIB_9__::func_195(cParam0, 1);
					__LIB_6__::func_876(cParam0, 0);
				}
			}
			if (__LIB_1__::func_732(iLocal_1319, 1))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
				if (!__LIB_0__::func_272(Local_709[1 /*18*/], 0))
				{
					AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_1216, 0, 16, 3);
					TASK::TASK_ENTER_VEHICLE(Global_35, iLocal_1216, 20000, 3, 2f, 524288, 0);
				}
				else
				{
					if (__LIB_0__::func_94(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1216, 0.8303f, -0.1263f, 0.6512f), 1) <= __LIB_0__::func_94(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1216, -0.8303f, -0.1263f, 0.6512f), 1))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_38[11 /*31*/], "player_zero", func_409(42), 1.48f, 1, 0, 20000, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_38[11 /*31*/], "player_zero", func_409(41), 1.48f, 1, 0, 20000, -1082130432 /* Float: -1f */);
					}
					iLocal_33 = 3;
				}
				if (!__LIB_11__::func_97(16384))
				{
					func_1232(16384);
					PED::_0xB8DE69D9473B7593(Global_35, 0);
				}
				__LIB_9__::func_195(cParam0, 5);
				__LIB_1__::func_281(&iLocal_1319, 1, 1);
			}
			if (!PED::IS_PED_IN_VEHICLE(Local_709[1 /*18*/], iLocal_1216, false))
			{
				AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_1216, 0, 16, -1);
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_38[11 /*31*/], "IG_ASHTON") || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_38[11 /*31*/], "IG_ASHTON"))
			{
				if (!__LIB_0__::func_163(Local_709[1 /*18*/], joaat("SCRIPT_TASK_INTIMIDATED")))
				{
					if (PED::_0x854BC9B1A1CCD034(joaat("INTIMIDATED_ON_ASS"), Local_709[1 /*18*/]))
					{
						PED::FORCE_PED_MOTION_STATE(Local_709[1 /*18*/], joaat("MOTIONSTATE_CROUCH_IDLE"), true, 1, true);
						TASK::_TASK_INTIMIDATED_2(Local_709[1 /*18*/], Global_35, 0, 1, 1, 1, 0, 0, 0);
					}
				}
			}
			if (__LIB_0__::func_163(Local_709[1 /*18*/], joaat("SCRIPT_TASK_INTIMIDATED")))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_709[1 /*18*/], joaat("SCRIPT_TASK_INTIMIDATED"), true) == 1)
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_709[1 /*18*/], 100, 0);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_709[1 /*18*/]);
					__LIB_9__::func_195(cParam0, 8);
					__LIB_6__::func_876(cParam0, 2);
				}
			}
			break;
		case 2:
			func_1290();
			if (func_1193(512) && !__LIB_5__::func_463())
			{
				if (!__LIB_11__::func_97(4096))
				{
					if (!__LIB_0__::func_139(iLocal_1322))
					{
						iLocal_1322 = __LIB_2__::func_403("MRY3_CXT_HIT", joaat("INPUT_MELEE_ATTACK"), Local_709[1 /*18*/], 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_709[1 /*18*/]), 0);
						HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, 22, 1);
						func_1232(4096);
					}
				}
				if ((bLocal_499 && !__LIB_11__::func_97(8192)) && !func_378(8388608))
				{
					if (!__LIB_0__::func_139(iLocal_1321))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_709[1 /*18*/]))
						{
							iLocal_1321 = __LIB_2__::func_403("MRY3_CXT_ACC", joaat("INPUT_INTERACT_POS"), Local_709[1 /*18*/], 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
							HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_1321) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_709[1 /*18*/]), 0);
							HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[__LIB_0__::func_17(iLocal_1321) /*18*/].f_3, 22, 1);
						}
					}
				}
				else if (__LIB_0__::func_139(iLocal_1321))
				{
					__LIB_1__::func_281(&iLocal_1321, 1, 1);
				}
			}
			if (bLocal_498 == 1)
			{
				if (__LIB_0__::func_139(iLocal_1321))
				{
					__LIB_1__::func_281(&iLocal_1321, 1, 1);
				}
				if (__LIB_0__::func_139(iLocal_1322))
				{
					__LIB_1__::func_281(&iLocal_1322, 1, 1);
				}
				if (__LIB_1__::func_707(joaat("PROVISION_MARYS_BROOCH"), 1, 0))
				{
					if (__LIB_8__::func_618(cParam0) != 6)
					{
						__LIB_9__::func_195(cParam0, 6);
					}
					iVar0 = 0;
					while (iVar0 < 6)
					{
						Local_980[iVar0 /*18*/] = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_1216, iVar0);
						ENTITY::SET_ENTITY_PROOFS(Local_980[iVar0 /*18*/], 0, false);
						PED::SET_PED_CAN_BE_TARGETTED(Local_980[iVar0 /*18*/], true);
						PED::SET_PED_CONFIG_FLAG(Local_980[iVar0 /*18*/], 253, false);
						iVar0++;
					}
					__LIB_17__::func_523(iLocal_1216);
					VEHICLE::_0x226C6A4E3346D288(iLocal_1216, 1);
					PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					AITRANSPORT::_0xBA8818212633500A(iLocal_1216, 0, 0);
					PED::_0x949B2F9ED2917F5D(Global_35, 0);
					__LIB_6__::func_876(cParam0, 3);
				}
			}
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
			switch (iLocal_488)
			{
				case 0:
					if (__LIB_1__::func_732(iLocal_1321, 1))
					{
						__LIB_1__::func_281(&iLocal_1321, 1, 1);
						bLocal_498 = true;
						__LIB_1__::func_432(10000, 0, 0, 1, 1);
						__LIB_1__::func_715(12, 1514826129, 0, 0, Local_709[1 /*18*/], 0, 1065353216 /* Float: 1f */, 0);
						bLocal_502 = true;
						__LIB_2__::func_190(Local_709[1 /*18*/], 10000);
					}
					else if (__LIB_1__::func_732(iLocal_1322, 1))
					{
						__LIB_1__::func_281(&iLocal_1322, 1, 1);
						func_1232(8192);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_709[1 /*18*/]);
						if (!__LIB_0__::func_899(&uLocal_1172))
						{
							__LIB_4__::func_89(&uLocal_1172, 0);
						}
						if (__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 1, 0, 0)) && !WEAPON::_0x705BE297EEBDB95D(__LIB_0__::func_399(Global_35, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
						}
						TASK::TASK_MELEE(Global_35, Local_709[1 /*18*/], joaat("AR_ATT_GROUNDED_RIGHT_HOOK_DIST_NEAR_V1"), 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
					}
					if (__LIB_0__::func_899(&uLocal_1172))
					{
						if (__LIB_1__::func_583(&uLocal_1172) >= 5f)
						{
							func_1284(8192);
							if (!__LIB_0__::func_139(iLocal_1322))
							{
								iLocal_1322 = __LIB_2__::func_403("MRY3_CXT_HIT", joaat("INPUT_MELEE_ATTACK"), Local_709[1 /*18*/], 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
								HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_709[1 /*18*/]), 0);
								HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, 22, 1);
								__LIB_1__::func_561(&uLocal_1172);
							}
						}
					}
					if (__LIB_3__::func_528(Local_709[1 /*18*/], Global_35))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_38[12 /*31*/], "bHasBeenHit", true, false);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_709[1 /*18*/]);
						__LIB_1__::func_561(&uLocal_1172);
						__LIB_9__::func_195(cParam0, 11);
						iLocal_488++;
					}
					break;
				case 1:
					if (func_1193(1024))
					{
						if (!__LIB_5__::func_463())
						{
							func_1284(8192);
							if (!__LIB_0__::func_139(iLocal_1322))
							{
								iLocal_1322 = __LIB_2__::func_403("MRY3_CXT_HIT", joaat("INPUT_MELEE_ATTACK"), Local_709[1 /*18*/], 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
								HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_709[1 /*18*/]), 0);
								HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, 22, 1);
								iLocal_488++;
							}
						}
					}
					break;
				case 2:
					if (__LIB_1__::func_732(iLocal_1321, 1))
					{
						__LIB_1__::func_281(&iLocal_1321, 1, 1);
						bLocal_498 = true;
						__LIB_1__::func_432(5000, 0, 0, 1, 1);
						__LIB_2__::func_190(Local_709[1 /*18*/], 5000);
						bLocal_502 = true;
					}
					else if (__LIB_1__::func_732(iLocal_1322, 1))
					{
						__LIB_1__::func_281(&iLocal_1322, 1, 1);
						func_1232(8192);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_709[1 /*18*/]);
						if (!__LIB_0__::func_899(&uLocal_1172))
						{
							__LIB_4__::func_89(&uLocal_1172, 0);
						}
						if (__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 1, 0, 0)) && !WEAPON::_0x705BE297EEBDB95D(__LIB_0__::func_399(Global_35, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
						}
						TASK::TASK_MELEE(Global_35, Local_709[1 /*18*/], joaat("AR_ATT_GROUNDED_LEFT_HOOK_DIST_NEAR_V1"), 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
					}
					if (__LIB_0__::func_899(&uLocal_1172))
					{
						if (__LIB_1__::func_583(&uLocal_1172) >= 5f)
						{
							func_1284(8192);
							if (!__LIB_0__::func_139(iLocal_1322))
							{
								iLocal_1322 = __LIB_2__::func_403("MRY3_CXT_HIT", joaat("INPUT_MELEE_ATTACK"), Local_709[1 /*18*/], 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
								HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_709[1 /*18*/]), 0);
								HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, 22, 1);
								__LIB_1__::func_561(&uLocal_1172);
							}
						}
					}
					if (__LIB_3__::func_528(Local_709[1 /*18*/], Global_35))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_38[12 /*31*/], "bHasBeenHit", true, false);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_709[1 /*18*/]);
						__LIB_9__::func_195(cParam0, 12);
						__LIB_1__::func_561(&uLocal_1172);
						iLocal_488++;
					}
					break;
				case 3:
					if (func_1193(2048))
					{
						if (!__LIB_5__::func_463())
						{
							func_1284(8192);
							if (!__LIB_0__::func_139(iLocal_1322))
							{
								iLocal_1322 = __LIB_2__::func_403("MRY3_CXT_HIT", joaat("INPUT_MELEE_ATTACK"), Local_709[1 /*18*/], 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
								HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_709[1 /*18*/]), 0);
								HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, 22, 1);
								iLocal_488++;
							}
						}
					}
					break;
				case 4:
					if (__LIB_1__::func_732(iLocal_1321, 1))
					{
						__LIB_1__::func_281(&iLocal_1321, 1, 1);
						bLocal_498 = true;
						__LIB_1__::func_432(2500, 0, 0, 1, 1);
						__LIB_2__::func_190(Local_709[1 /*18*/], 2500);
						bLocal_502 = true;
					}
					else if (__LIB_1__::func_732(iLocal_1322, 1))
					{
						func_380(8388608);
						__LIB_1__::func_281(&iLocal_1322, 1, 1);
						__LIB_1__::func_281(&iLocal_1321, 1, 1);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_709[1 /*18*/]);
						if (!__LIB_0__::func_899(&uLocal_1172))
						{
							__LIB_4__::func_89(&uLocal_1172, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
						if (__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 1, 0, 0)) && !WEAPON::_0x705BE297EEBDB95D(__LIB_0__::func_399(Global_35, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
						}
						TASK::TASK_MELEE(Global_35, Local_709[1 /*18*/], joaat("AR_ATT_GROUNDED_LEFT_KICK_DIST_NEAR_V1"), 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
					}
					if (__LIB_0__::func_899(&uLocal_1172))
					{
						if (__LIB_1__::func_583(&uLocal_1172) >= 5f)
						{
							func_1284(8192);
							if (!__LIB_0__::func_139(iLocal_1322))
							{
								iLocal_1322 = __LIB_2__::func_403("MRY3_CXT_HIT", joaat("INPUT_MELEE_ATTACK"), Local_709[1 /*18*/], 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
								HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_709[1 /*18*/]), 0);
								HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[__LIB_0__::func_17(iLocal_1322) /*18*/].f_3, 22, 1);
								__LIB_1__::func_561(&uLocal_1172);
							}
						}
					}
					if (__LIB_3__::func_528(Local_709[1 /*18*/], Global_35))
					{
						if (!__LIB_0__::func_899(&uLocal_1175))
						{
							__LIB_4__::func_89(&uLocal_1175, 0);
						}
						else if (__LIB_1__::func_583(&uLocal_1175) >= 3f)
						{
							bLocal_503 = true;
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_38[12 /*31*/], "bHasBeenHit", true, false);
							__LIB_1__::func_561(&uLocal_1172);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_709[1 /*18*/]);
							bLocal_498 = true;
							iLocal_488++;
						}
					}
					break;
			}
			break;
		case 3:
			if (func_378(8192))
			{
				func_1257(8192);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				if (!__LIB_11__::func_97(8388608))
				{
					func_1232(8388608);
				}
				if (__LIB_11__::func_97(16777216))
				{
					func_1284(16777216);
				}
				iLocal_1219 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			}
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				if (!__LIB_11__::func_97(16777216))
				{
					func_1232(16777216);
				}
				if (__LIB_11__::func_97(8388608))
				{
					func_1284(8388608);
				}
				iLocal_1207 = PED::GET_MOUNT(Global_35);
			}
			if (__LIB_11__::func_97(33554432))
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (__LIB_11__::func_97(4194304) && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1216, false))
			{
				if (!__LIB_11__::func_97(536870912))
				{
					func_1232(536870912);
				}
			}
			else if (__LIB_11__::func_97(536870912))
			{
				func_1284(536870912);
			}
			if (!__LIB_11__::func_97(536870912))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					if ((__LIB_1__::func_205(Global_35, iLocal_1223[38], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_1223[39], 1, 0)) || __LIB_1__::func_205(Global_35, iLocal_1223[40], 1, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_1216) > 0.5f || ENTITY::GET_ENTITY_SPEED(PED::GET_MOUNT(Global_35)) > 0.5f)
						{
							if (!__LIB_0__::func_899(&uLocal_1145))
							{
								__LIB_4__::func_89(&uLocal_1145, 0);
							}
						}
						if (__LIB_0__::func_899(&uLocal_1145))
						{
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
							if (CAM::_0xDD0B7C5AE58F721D(&Local_1105))
							{
								if (!__LIB_11__::func_97(33554432))
								{
									CAM::_0xB8B207C34285E978(&Local_1105);
									func_1232(33554432);
								}
								else if (__LIB_1__::func_583(&uLocal_1145) >= 3f)
								{
									CAM::_0x0A5A4F1979ABB40E(&Local_1105);
									CAM::_0x798BE43C9393632B(&Local_1105);
									iLocal_37 = 2;
									__LIB_6__::func_876(cParam0, 4);
								}
							}
						}
					}
					else if (__LIB_0__::func_899(&uLocal_1145))
					{
						__LIB_1__::func_561(&uLocal_1145);
					}
				}
				else if (__LIB_0__::func_899(&uLocal_1145))
				{
					__LIB_1__::func_561(&uLocal_1145);
				}
			}
			if (__LIB_0__::func_665(Global_35, Local_530[0 /*178*/], 1, 1) <= 100f)
			{
				if (!__LIB_6__::func_862(cParam0, 33554432))
				{
					__LIB_6__::func_868(cParam0, 33554432);
					__LIB_8__::func_665(cParam0, 8388608);
				}
			}
			if (__LIB_1__::func_205(Global_35, iLocal_1223[41], 1, 0))
			{
				if (!func_378(4096))
				{
					func_380(4096);
				}
			}
			if (func_378(4096))
			{
				if (!__LIB_0__::func_899(&uLocal_1199))
				{
					__LIB_4__::func_89(&uLocal_1199, 0);
				}
				else if (__LIB_9__::func_178(&uLocal_1199) >= 2f)
				{
					__LIB_6__::func_876(cParam0, 29);
				}
			}
			break;
		case 4:
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_761(var uParam0)
{
	PED::_0xDE7B2B4144906CDF(joaat("INTIMIDATED_ON_KNEES"), Local_709[1 /*18*/]);
	if (MAP::DOES_BLIP_EXIST(Local_709[1 /*18*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_709[1 /*18*/].f_1));
	}
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 0);
	POPULATION::_0xBC90BDF4E5228EA1();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_762(char[4] cParam0)
{
	if (!func_1279())
	{
		return false;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		if (__LIB_6__::func_872(cParam0, 4))
		{
			if (!__LIB_0__::func_27(Global_1394141.f_1326, 8192))
			{
				__LIB_1__::func_683(&(Global_1394141.f_1326), 8192);
			}
		}
		if (!__LIB_0__::func_27(Global_1394141.f_1326, 4096))
		{
			return false;
		}
	}
	__LIB_0__::func_203(Global_35);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	__LIB_4__::func_568(&(cParam0->f_7375), "1-BeforeChoice");
	return cParam0->f_607 == cParam0->f_607;
}

bool func_763(var uParam0)
{
	__LIB_2__::func_165(2738.975f, -1414.386f, 45.03957f, 10f, 0, 0, 5);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[43]))
	{
		uLocal_1293 = __LIB_1__::func_391(iLocal_1223[43], 0, 0, 0);
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[43], 7);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[42]))
	{
		uLocal_1292 = __LIB_1__::func_391(iLocal_1223[42], 0, 0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	__LIB_9__::func_154(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(uParam0, Local_530[0 /*178*/], "MaryLinton", 0, 0, 0, 0);
	__LIB_9__::func_62(uParam0, iLocal_1218, "trolley01x", 0, 0, 0, 0);
	if (CLOCK::GET_CLOCK_HOURS() != 18)
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	}
	__LIB_9__::func_56(uParam0, 1024);
	__LIB_6__::func_902(uParam0, 4);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_764(char[4] cParam0)
{
	__LIB_9__::func_195(cParam0, 1);
	if (func_1193(65536))
	{
		__LIB_6__::func_876(cParam0, 0);
	}
	if (func_1193(131072))
	{
		__LIB_6__::func_876(cParam0, 29);
	}
	__LIB_6__::func_868(cParam0, 33554432);
	__LIB_9__::func_243(cParam0, "3A-PlayerLeftEarly");
	__LIB_9__::func_243(cParam0, "3B-PlayerStayed");
	__LIB_4__::func_568(&(cParam0->f_7375), "3A-PlayerLeftEarly");
	__LIB_8__::func_665(cParam0, 8388608);
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
	return cParam0->f_607 == cParam0->f_607;
}

int func_765(char[4] cParam0)
{
	func_1297(cParam0);
	if (Global_1394141.f_1328)
	{
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (__LIB_1__::func_514(iLocal_1326, 1))
			{
				if (Global_1394141.f_1328)
				{
					__LIB_6__::func_916(&iLocal_1326);
					func_1232(524288);
					iLocal_35 = 23;
				}
			}
			if (!Global_1394141.f_1328)
			{
				if (!__LIB_11__::func_97(1048576))
				{
					__LIB_1__::func_281(&iLocal_1326, 1, 1);
					iLocal_35 = 24;
					func_1232(1048576);
				}
			}
			if (__LIB_3__::func_439(Local_38[13 /*31*/]))
			{
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_766(var uParam0)
{
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (__LIB_0__::func_84(&(uParam0->f_7375), 512))
	{
		__LIB_4__::func_550(&(uParam0->f_7375), 512, 1);
	}
	if (__LIB_0__::func_84(&(uParam0->f_7375), 2))
	{
		__LIB_4__::func_550(&(uParam0->f_7375), 2, 1);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_767(var uParam0)
{
	if (!func_1279())
	{
		return false;
	}
	__LIB_4__::func_568(&(uParam0->f_7375), "3B-PlayerStayed");
	func_1206(65536);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_768(var uParam0)
{
	if (!__LIB_0__::func_272(Local_530[0 /*178*/], 0))
	{
		return false;
	}
	if (func_1193(65536))
	{
		__LIB_2__::func_165(2738.975f, -1414.386f, 45.03957f, 10f, 0, 0, 5);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[42]))
		{
			uLocal_1292 = __LIB_1__::func_391(iLocal_1223[42], 0, 0, 0);
		}
		if (__LIB_11__::func_97(524288))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_7375.f_804, "3A-PlayerLeftEarly"))
			{
				__LIB_4__::func_980(&(uParam0->f_7375), "3A-PlayerLeftEarly");
			}
		}
		else if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_7375.f_804, "3B-PlayerStayed"))
		{
			__LIB_4__::func_980(&(uParam0->f_7375), "3B-PlayerStayed");
		}
		__LIB_9__::func_154(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
		__LIB_9__::func_154(uParam0, Local_530[0 /*178*/], "MaryLinton", 0, 0, 0, 0);
		__LIB_9__::func_62(uParam0, iLocal_1218, "trolley01x", 0, 0, 0, 0);
	}
	if (CLOCK::GET_CLOCK_HOURS() != 18)
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	}
	__LIB_5__::func_85(&(uParam0->f_7375));
	__LIB_8__::func_726(&(uParam0->f_7375), 1);
	__LIB_5__::func_67(&(uParam0->f_7375));
	__LIB_4__::func_622(&(uParam0->f_7375));
	__LIB_0__::func_108(&(uParam0->f_7375));
	__LIB_4__::func_977(&(uParam0->f_7375), 4);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_769(char[4] cParam0)
{
	__LIB_9__::func_195(cParam0, 1);
	__LIB_6__::func_876(cParam0, 29);
	return cParam0->f_607 == cParam0->f_607;
}

int func_770(char[4] cParam0)
{
	func_1297(cParam0);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_771(var uParam0)
{
	__LIB_0__::func_484(&uLocal_1293, iLocal_1223[43], 0);
	PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1223[43]);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1218))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_1218);
	}
	return uParam0->f_607 == uParam0->f_607;
}

void func_772(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_772(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_772(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_778(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_611(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!__LIB_0__::func_144(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_779(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
	if (!__LIB_0__::func_1(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*iParam0, 4) && !__LIB_0__::func_1(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*iParam0, 8192))
	{
		func_1315();
	}
	if (!__LIB_0__::func_1(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 1024))
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
		if (!__LIB_0__::func_1(*iParam0, 16))
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
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
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
	if (!__LIB_0__::func_1(*iParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*iParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 2097152))
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
	*iParam0 = 0;
}

void func_781(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0)))
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
			func_772(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_772(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_782(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_772(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_790(int iParam0, int iParam1)
{
	var uVar0;
	return func_1338(&uVar0, iParam0, iParam1);
}

bool func_848(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1369(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1370(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

bool func_857(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (!__LIB_5__::func_343(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			__LIB_4__::func_560(uParam0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_779(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_6__::func_918(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_4__::func_89(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_583(&(uParam0->f_3)) >= 1f)
			{
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_91())
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(uParam0->f_2))
				{
					CAM::DESTROY_CAM(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			func_1399(&iVar1, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			__LIB_0__::func_19(uParam0, 0);
			return true;
	}
	return false;
}

bool func_861(char[4] cParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return true;
	}
	if (__LIB_6__::func_862(cParam0, 16777216))
	{
		__LIB_8__::func_712(cParam0);
		__LIB_8__::func_689(cParam0);
		return true;
	}
	if (func_1409(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (__LIB_6__::func_877(cParam0) == 0)
	{
		__LIB_11__::func_105(cParam0);
	}
	if (__LIB_0__::func_91())
	{
		if (!__LIB_6__::func_862(cParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(cParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(cParam0->f_609.f_2, false);
			}
			__LIB_5__::func_326(&(cParam0->f_10792));
			__LIB_4__::func_974(cParam0);
			__LIB_6__::func_887(cParam0, 524288);
			__LIB_8__::func_713(cParam0);
			__LIB_8__::func_661(cParam0, 30f);
			__LIB_8__::func_662(cParam0, 40f);
			__LIB_6__::func_868(cParam0, 262144);
		}
		if (!__LIB_6__::func_862(cParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(cParam0->f_7375.f_804))
		{
			__LIB_6__::func_868(cParam0, 524288);
		}
	}
	return false;
}

bool func_867(char[4] cParam0)
{
	vector3 vVar0;
	switch (__LIB_6__::func_864(cParam0))
	{
		case 0:
			vVar0 = { func_215(1, 1) };
			break;
		case 1:
			vVar0 = { func_215(1, 0) };
			break;
		case 2:
			vVar0 = { func_215(1, 3) };
			break;
		case 3:
		case 4:
		case 5:
		case 25:
			vVar0 = { func_215(1, 4) };
			break;
	}
	func_1416();
	if (!__LIB_0__::func_272(Local_530[0 /*178*/], 0))
	{
		if (__LIB_0__::func_272(__LIB_9__::func_342(cParam0, joaat("CS_MARYLINTON"), 0), 0))
		{
			Local_530[0 /*178*/] = __LIB_9__::func_342(cParam0, joaat("CS_MARYLINTON"), 1);
		}
		else
		{
			Local_530[0 /*178*/] = __LIB_1__::func_545(iLocal_473, vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_530[0 /*178*/]))
	{
		if (__LIB_0__::func_272(Local_530[0 /*178*/], 0))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1209))
			{
				iLocal_1209 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_530[0 /*178*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1209, "MRY3_BLIP_MARY");
			}
			PED::_SET_PED_BODY_COMPONENT(Local_530[0 /*178*/], -486951805);
			PED::_UPDATE_PED_VARIATION(Local_530[0 /*178*/], false, true, true, true, false);
			PED::SET_PED_CAN_BE_TARGETTED(Local_530[0 /*178*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_530[0 /*178*/], 297, true);
			PED::SET_PED_CONFIG_FLAG(Local_530[0 /*178*/], 309, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_530[0 /*178*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_530[0 /*178*/], joaat("REL_PLAYER_ALLY"));
			return true;
		}
	}
	return false;
}

Vector3 func_868(int iParam0, int iParam1)
{
	return func_964(iParam0, iParam1);
}

float func_869(int iParam0, int iParam1)
{
	return func_965(iParam0, iParam1);
}

bool func_873(char[4] cParam0)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_6__::func_864(cParam0) == 0)
	{
		vVar0 = { 2507.269f, -1461.026f, 45.3167f };
		fVar3 = 92.0544f;
	}
	else if (__LIB_6__::func_864(cParam0) == 1)
	{
		vVar0 = { func_868(2, 0) };
		fVar3 = func_869(2, 0);
	}
	else if (__LIB_6__::func_864(cParam0) == 2)
	{
		vVar0 = { func_868(2, 1) };
		fVar3 = func_869(2, 1);
	}
	else if (__LIB_6__::func_864(cParam0) >= 3)
	{
		vVar0 = { func_868(2, 2) };
		fVar3 = func_869(2, 2);
	}
	if (!__LIB_0__::func_272(Local_709[0 /*18*/], 0))
	{
		Local_709[0 /*18*/] = __LIB_1__::func_545(iLocal_477, vVar0, fVar3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::_SET_PED_BODY_COMPONENT(Local_709[0 /*18*/], joaat("META_OUTFIT_DEFAULT"));
		PED::_UPDATE_PED_VARIATION(Local_709[0 /*18*/], false, true, true, true, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_709[0 /*18*/], joaat("REL_GANG_DUTCHS"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_709[0 /*18*/], true);
		__LIB_9__::func_42(cParam0, Local_709[0 /*18*/], "MRY3_FATHER", 0);
		return false;
	}
	return true;
}

void func_874()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = __LIB_0__::func_398(1);
	iVar1 = 0;
	vVar2 = { 2647.098f, -1270.327f, 51.0841f };
	fVar5 = 113.0633f;
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && ENTITY::IS_ENTITY_IN_VOLUME(iVar0, __LIB_0__::func_559(5), true, 0))
	{
		if (__LIB_0__::func_126(iVar0))
		{
			PHYSICS::_0x0348469DAA17576C(iVar0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
		func_772(iVar0, vVar2, fVar5, 2, 1073741824 /* Float: 2f */);
		iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar2, joaat("PROP_HITCHINGPOST"), 2f, 0, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar1, "", -1, false, true, 0, false, -1f, false);
		}
		else
		{
			TASK::TASK_STAND_STILL(iVar0, -1);
		}
	}
}

void func_875(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	char* sVar10;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		switch (iVar0)
		{
			case 4:
				vVar1 = { 2676.067f, -1268.667f, 55.77193f };
				vVar4 = { 0f, 0f, 25.83045f };
				vVar7 = { 28.17047f, 5.649572f, 11.3652f };
				sVar10 = "MARY3_VOL_INTRO_BLOCK";
				break;
			case 8:
				vVar1 = { 2564.333f, -1417.924f, 47.84305f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 7.000798f, 2.99244f, 6.073237f };
				sVar10 = "MARY3_VOL_BOX_COVER";
				break;
			case 11:
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[11]))
				{
					iLocal_1223[11] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MARY3_VOL_BLOCK_CLIMBING");
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[11], 2559.047f, -1420.069f, 48.11821f, 0f, 0f, 0f, 8.622968f, 15.20198f, 7.235769f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[11], 2567.982f, -1421.171f, 48.11821f, 0f, 0f, 0f, 12.54362f, 3.617082f, 7.235769f);
				}
				break;
			case 6:
				vVar1 = { 2560.235f, -1415.119f, 47.20535f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 5.346095f, 9.083188f, 4.162855f };
				sVar10 = "MARY3_VOL_NAV_BLOCKING";
				break;
			case 7:
				vVar1 = { 2549.077f, -1414.007f, 46.65154f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 3.94653f, 3.838621f, 3.072046f };
				sVar10 = "MARY3_VOL_NAV_BLOCK_DOOR";
				break;
			case 24:
				vVar1 = { 2623.157f, -1418.104f, 46.56877f };
				vVar4 = { 0f, 0f, 1.609269f };
				vVar7 = { 37.17809f, 6.026463f, 6.014519f };
				sVar10 = "MARY3_VOL_PEDS_CLEAR";
				break;
			case 2:
				vVar1 = { 2361.5f, -855.7745f, 72.2333f };
				vVar4 = { 0f, 0f, 2.109299f };
				vVar7 = { 626.6743f, 1432.68f, 157.3131f };
				sVar10 = "MARY3_VOL_VEHICLE_CLEAR";
				break;
			case 32:
				vVar1 = { 2624.081f, -1422.021f, 46.56877f };
				vVar4 = { 0f, 0f, 2.109299f };
				vVar7 = { 20.50032f, 3.544907f, 4.080611f };
				sVar10 = "MARY3_VOL_WAGON_CLEAR";
				break;
			case 25:
				vVar1 = { 2611.857f, -1389.085f, 47.08357f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 7.306688f, 3.567551f, 5.011181f };
				sVar10 = "MARY3_VOL_RIGHT_TRIGGER";
				break;
			case 26:
				vVar1 = { 2637.528f, -1397.875f, 45.88699f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 10.1378f, 12.53464f, 6.717197f };
				sVar10 = "MARY3_VOL_LEFT_TRIGGER";
				break;
			case 36:
				vVar1 = { 2260.451f, -960.2484f, 46.43104f };
				vVar4 = { 0f, 0f, -2.976917f };
				vVar7 = { 4.171563f, 13.77848f, 16.71082f };
				sVar10 = "MARY3_VOL_SPOT_TRIGGER";
				break;
			case 33:
				vVar1 = { 1910.067f, -1578.355f, 44.16736f };
				vVar4 = { -3.144623f, -1.484692f, -151.7873f };
				vVar7 = { 4.204058f, 1.762825f, 3.055763f };
				sVar10 = "MARY3_VOL_WAGON_LEFT_SIDE";
				break;
			case 34:
				vVar1 = { 1910.067f, -1578.355f, 44.16736f };
				vVar4 = { -3.144623f, -1.484692f, -151.7873f };
				vVar7 = { 4.204058f, 1.762825f, 3.055763f };
				sVar10 = "MARY3_VOL_WAGON_RIGHT_SIDE";
				break;
			case 5:
				vVar1 = { 2493.19f, -1448.861f, 48.13944f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 14.76307f, 42.51423f, 8.302655f };
				sVar10 = "MARY3_VOL_MCS1_CLEAR_AREA";
				break;
			case 9:
				vVar1 = { 2557.314f, -1415.538f, 47.05839f };
				vVar4 = { 0f, 0f, -179.5891f };
				vVar7 = { 12.3514f, 8.481095f, 4.624906f };
				sVar10 = "MARY3_VOL_FOLLOW_CLEAR_AREA";
				break;
			case 10:
				vVar1 = { 2560.229f, -1413.544f, 46.47549f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 6.479941f, 5.622358f, 3.292628f };
				sVar10 = "MARY3_VOL_FORCE_WALK";
				break;
			case 15:
				vVar1 = { 2586.052f, -1409.986f, 47.60594f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 4.348464f, 10.64148f, 5.761968f };
				sVar10 = "MARY3_VOL_ROAD_DISABLE_1";
				break;
			case 42:
				vVar1 = { 2635.976f, -1398.498f, 48.28503f };
				vVar4 = { 0f, 0f, 17.32687f };
				vVar7 = { 28.82826f, 48.79539f, 6.717197f };
				sVar10 = "MARY3_VOL_OUTRO_PED_CLEAR";
				break;
			case 38:
				vVar1 = { 2275.684f, -926.5105f, 57.32553f };
				vVar4 = { 0f, 0f, 14.53321f };
				vVar7 = { 254.1658f, 188.1887f, 46.93304f };
				sVar10 = "MARY3_VOL_CME_TRIGGER_1";
				break;
			case 39:
				vVar1 = { 2452.131f, -630.6329f, 57.32553f };
				vVar4 = { 0f, 0f, 14.53321f };
				vVar7 = { 254.1658f, 188.1887f, 46.93304f };
				sVar10 = "MARY3_VOL_CME_TRIGGER_2";
				break;
			case 40:
				vVar1 = { 2396.922f, -247.5679f, 57.32553f };
				vVar4 = { 0f, 0f, 14.53321f };
				vVar7 = { 254.1658f, 188.1887f, 46.93304f };
				sVar10 = "MARY3_VOL_CME_TRIGGER_3";
				break;
			case 12:
				vVar1 = { 2537.268f, -1426.316f, 46.57167f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 3.480352f, 2.607908f, 3.227798f };
				sVar10 = "MARY3_VOL_DIAG_CORNER";
				break;
			case 13:
				vVar1 = { 2561.78f, -1414.576f, 46.55922f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 2.27035f, 1f, 3.97613f };
				sVar10 = "MARY3_VOL_DIAG_CRATE";
				break;
			case 19:
				vVar1 = { 2638.473f, -1417.158f, 46.56877f };
				vVar4 = { 0f, 0f, 2.109298f };
				vVar7 = { 7.168409f, 7.26614f, 4.080611f };
				sVar10 = "MARY3_VOL_CLEAR_RUN_LEFT";
				break;
			case 20:
				vVar1 = { 2611.186f, -1417.317f, 46.56877f };
				vVar4 = { 0f, 0f, 2.109298f };
				vVar7 = { 7.168409f, 7.26614f, 4.080611f };
				sVar10 = "MARY3_VOL_CLEAR_RUN_RIGHT";
				break;
			case 16:
				vVar1 = { 2583.654f, -1392.903f, 50.56699f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 15.07896f, 26.52871f, 11.67837f };
				sVar10 = "MARY3_VOL_WRONG_WAY_1";
				break;
			case 17:
				vVar1 = { 2628.71f, -1423.4f, 51.03245f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 26.11412f, 13.43156f, 11.67837f };
				sVar10 = "MARY3_VOL_WRONG_WAY_2";
				break;
			case 28:
				vVar1 = { 2596.123f, -1376.975f, 47.52084f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 3.311842f, 6.238957f, 4.992996f };
				sVar10 = "MARY3_VOL_WRONG_WAY_3";
				break;
			case 29:
				vVar1 = { 2596.171f, -1361.4f, 47.52084f };
				vVar4 = { 0f, 0f, -18.81132f };
				vVar7 = { 3.311842f, 7.965707f, 4.992996f };
				sVar10 = "MARY3_VOL_WRONG_WAY_4";
				break;
			case 21:
				vVar1 = { 2611.271f, -1392.067f, 47.19597f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 8.173466f, 10.76377f, 4.608119f };
				sVar10 = "MARY3_VOL_BLOCK_CLIMBING_2";
				break;
			case 30:
				vVar1 = { 2638.119f, -1415.428f, 45.2187f };
				vVar4 = { 0f, 0f, 7.327471f };
				vVar7 = { 1.917503f, 1f, 4.553709f };
				sVar10 = "MARY3_VOL_PLAYER_RUN_LEFT";
				break;
			case 31:
				vVar1 = { 2611.761f, -1416.637f, 45.2187f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 1.917503f, 1f, 4.553709f };
				sVar10 = "MARY3_VOL_PLAYER_RUN_RIGHT";
				break;
			case 18:
				vVar1 = { 2570.024f, -1417.933f, 47.20535f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 14.36632f, 3.452018f, 4.162855f };
				sVar10 = "MARY3_VOL_ALLEY";
				break;
			case 14:
				vVar1 = { 2562.174f, -1413.903f, 46.54226f };
				vVar4 = { 0f, 0f, 16.78326f };
				vVar7 = { 3.283338f, 1.212145f, 2.851954f };
				sVar10 = "MARY3_VOL_BUMP_TRIGGER";
				break;
			case 22:
				vVar1 = { 2611.725f, -1397.968f, 47.96184f };
				vVar4 = { 0f, 0f, 0.912822f };
				vVar7 = { 7.327817f, 35.57869f, 6.451694f };
				sVar10 = "MARY3_VOL_FACT_ALLEY_CLEAR";
				break;
			case 23:
				vVar1 = { 2624.696f, -1383.871f, 47.96184f };
				vVar4 = { 0f, 0f, -90.00552f };
				vVar7 = { 7.327817f, 18.79066f, 6.451694f };
				sVar10 = "MARY3_VOL_FACT_ALLEY_NAVMESH";
				break;
			case 35:
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[35]))
				{
					iLocal_1223[35] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MARY3_VOL_AVOID_ROAD");
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[35], 2584.77f, -1447.538f, 46.47818f, 0f, 0f, 55.99229f, 40.8517f, 7.131345f, 7.886738f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[35], 2594.667f, -1432.979f, 46.47818f, 0f, 0f, 43.52136f, 24.53756f, 7.131345f, 7.886738f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[35], 2615.017f, -1424.058f, 46.46979f, 0f, 0f, 0f, 64.37097f, 7.131345f, 7.886738f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[35], 2586.524f, -1432.854f, 46.46979f, 0f, 0f, 90.65791f, 24.78514f, 7.131345f, 7.886738f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[35], 2565.995f, -1468.55f, 46.47818f, 0f, 0f, 25.81751f, 19.81384f, 6.45993f, 7.886738f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[35], 2415.569f, -1437.723f, 46.47818f, 0f, 0f, -38.9641f, 81.81699f, 7.131345f, 7.886738f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[35], 2591.012f, -1429.13f, 46.47818f, 0f, 0f, 43.52136f, 8.411131f, 7.131345f, 7.886738f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[35], 2461.86f, -1466.917f, 46.47818f, 0f, 0f, -17.80367f, 35.91303f, 7.131345f, 7.886738f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[35], 2518.231f, -1471.95f, 46.47818f, 0f, 0f, 0.138219f, 81.81699f, 7.131345f, 7.886738f);
				}
				break;
			case 43:
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[43]))
				{
					iLocal_1223[43] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MARY3_VOL_THEATRE_CLEAR");
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[43], 2527.487f, -1321.362f, 49.30772f, 0f, 0f, -106.1684f, 20.97531f, 7.01f, 5.163333f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[43], 2531.963f, -1330.449f, 49.30772f, 0f, 0f, 0f, 20.97531f, 3.913322f, 5.163333f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[43], 2731.807f, -1402.828f, 47.25246f, 0f, 0f, -64.45999f, 17.78216f, 17.05902f, 5.902164f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[43], 2531.227f, -1279.95f, 50.20545f, 0f, 0f, 0f, 8.637694f, 12.01823f, 4.474741f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[43], 2634.701f, -1417.631f, 47.25246f, 0f, 0f, 0f, 31.93571f, 8.961099f, 5.902164f);
				}
				break;
			case 41:
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[41]))
				{
					iLocal_1223[41] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MARY3_VOL_OUTRO_TRIGGER");
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[41], 2603.584f, -1367.832f, 47.52084f, 0f, 0f, -48.27879f, 3.311842f, 7.965707f, 4.992996f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[41], 2602.549f, -1375.762f, 47.52084f, 0f, 0f, 0f, 3.311842f, 10.90322f, 4.992996f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[41], 2611.618f, -1412.165f, 47.86766f, 0f, 0f, 2.109298f, 8.005536f, 7.26614f, 5.469234f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[41], 2646.868f, -1409.7f, 47.86766f, 0f, 0f, 26.11105f, 9.563106f, 7.26614f, 5.469234f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[41], 2639.9f, -1411.885f, 47.86766f, 0f, 0f, 7.045374f, 9.563106f, 7.26614f, 5.469234f);
				}
				break;
			case 27:
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[27]))
				{
					iLocal_1223[27] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MARY3_VOL_BLOCK_CLIMBING_3");
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[27], 2638.909f, -1396.198f, 45.88699f, 0f, 0f, 21.85925f, 4.041228f, 16.73971f, 11.07725f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[27], 2642.038f, -1415.163f, 45.88699f, 0f, 0f, -82.41966f, 4.041228f, 12.77264f, 11.07725f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[27], 2641.816f, -1404.35f, 45.88699f, 0f, 0f, 89.33925f, 4.939544f, 12.77264f, 11.07725f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[27], 2648.401f, -1408.473f, 45.88699f, 0f, 0f, 22.34857f, 6.65543f, 12.77264f, 11.07725f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[27], 2612.506f, -1415.773f, 45.88699f, 0f, 0f, -90.06153f, 6.839558f, 9.456755f, 11.07725f);
				}
				break;
			case 37:
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[37]))
				{
					iLocal_1223[37] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MARY3_VOL_ANIMAL_CLEAR");
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[37], 2120.552f, -991.1982f, 43.33574f, 0.437863f, 0.715294f, 47.89995f, 63.76992f, 66.79929f, 8.876685f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[37], 2250.044f, -864.2026f, 45.38305f, 0.437863f, 0.715294f, 47.89995f, 108.9317f, 118.0184f, 32.27951f);
				}
				break;
			case 0:
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[0]))
				{
					iLocal_1223[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MARY3_VOL_INT_CLEAR_AREA");
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[0], 2713.793f, -1242.869f, 53.02395f, 0f, 0f, 25.01506f, 19.03873f, 14.94918f, 12.5923f);
					VOLUME::_0x39816F6F94F385AD(iLocal_1223[0], 2674.628f, -1265.024f, 55.92817f, 0f, 0f, 25.01506f, 19.03873f, 14.94918f, 12.5923f);
				}
				break;
		}
		if ((((((iVar0 != 11 && iVar0 != 35) && iVar0 != 43) && iVar0 != 41) && iVar0 != 27) && iVar0 != 37) && iVar0 != 0)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[iVar0]))
			{
				__LIB_3__::func_573(&(iLocal_1223[iVar0]), vVar1, vVar4, vVar7, sVar10);
			}
		}
		iVar0++;
	}
}

void func_876(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1268[iVar0]))
		{
			iLocal_1268[iVar0] = VOLUME::_CREATE_VOLUME_CYLINDER(func_964(8, iVar0), 0f, 0f, 0f, 3f, 3f, 2f);
		}
		iVar0++;
	}
}

int func_878(var uParam0)
{
	switch (__LIB_6__::func_864(uParam0))
	{
		case 0:
			break;
		case 1:
			__LIB_9__::func_142(uParam0, "MRY3_FOLLOW_OBJ", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 2:
			__LIB_9__::func_142(uParam0, "MRY3_FOLLOW_OBJ", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 3:
			__LIB_9__::func_142(uParam0, "MRY3_OBJ_CATCHUP", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 4:
			__LIB_9__::func_142(uParam0, "MRY3_OBJ_CHASE", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 5:
			__LIB_9__::func_142(uParam0, "MRY3_OBJ_DRIVE", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 6:
			if (func_1193(65536))
			{
				if (!__LIB_0__::func_27(Global_1394141.f_1326, 8192))
				{
					__LIB_1__::func_683(&(Global_1394141.f_1326), 8192);
				}
				if (!Global_1394141.f_1328)
				{
					return 0;
				}
				if (!__LIB_0__::func_27(Global_1394141.f_1326, 4096))
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_880(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	if (iVar0 == iLocal_16)
	{
		if (__LIB_8__::func_615(&(cParam0->f_7375), "MRY3_INT"))
		{
			if (!func_1193(268435456))
			{
				__LIB_8__::func_711(cParam0, "MRY3_CONVO", 1);
				func_1206(268435456);
			}
			if (!func_378(65536))
			{
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
				{
					func_379(__LIB_0__::func_398(7), func_215(12, 0), 2, 1073741824 /* Float: 2f */);
					func_380(65536);
				}
			}
			if (__LIB_0__::func_871())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam0->f_7375.f_804, "Honor_is", true, false);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam0->f_7375.f_804, "Honor_is", false, false);
			}
			if (!func_1193(65536) && !func_1193(131072))
			{
				func_1421(&(cParam0->f_7375), cParam0);
			}
		}
		if (!func_1193(131072))
		{
			if (__LIB_18__::func_299(cParam0, Local_530[0 /*178*/], "MaryLinton", 0, 1, 1))
			{
				if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_1202, func_868(12, 0), 3f, 3f, 3f, false, true, 0))
					{
						func_379(iLocal_1202, func_215(12, 0), 2, 1073741824 /* Float: 2f */);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_1202, -1, true);
					}
					if (!PED::IS_PED_ON_MOUNT(Local_530[0 /*178*/]))
					{
						PED::_SET_PED_ON_MOUNT(Local_530[0 /*178*/], iLocal_1202, 0, true);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1204[0]))
		{
		}
		if (__LIB_18__::func_299(cParam0, iLocal_1204[0], "A_M_M_HtlFancyTravellers_01", 0, 1, 0))
		{
			if (__LIB_0__::func_272(iLocal_1204[0], 0))
			{
				PED::DELETE_PED(&(iLocal_1204[0]));
			}
			if (__LIB_0__::func_272(iLocal_1204[1], 0))
			{
				PED::DELETE_PED(&(iLocal_1204[1]));
			}
		}
	}
	else if (iVar0 == iLocal_17)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		if (__LIB_11__::func_97(1073741824 /* Float: 2f */))
		{
			func_1284(1073741824 /* Float: 2f */);
		}
		func_1223();
		if (__LIB_18__::func_299(cParam0, Local_530[0 /*178*/], "MaryLinton", 0, 1, 1))
		{
			iLocal_26 = 2;
		}
		if (__LIB_18__::func_299(cParam0, Local_709[5 /*18*/], "A_M_M_NBXDOCKWORKERS_01", 0, 1, 0))
		{
			__LIB_2__::func_426(&(Local_709[5 /*18*/]));
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1221))
			{
				OBJECT::DELETE_OBJECT(&iLocal_1221);
			}
		}
	}
	else if (iVar0 == iLocal_19)
	{
		if (__LIB_18__::func_299(cParam0, Global_35, "ARTHUR", 0, 1, 1) || ANIMSCENE::_0x005E6F28DD7ED58D(Global_43800, "ARTHUR"))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				if (Global_43838 == 1)
				{
					func_379(Global_35, func_215(0, 1), 2, 1073741824 /* Float: 2f */);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[8 /*31*/], func_409(27), true);
					iLocal_31 = 3;
				}
				else if (Global_43838 == 2)
				{
					func_379(Global_35, func_215(0, 4), 2, 1073741824 /* Float: 2f */);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[8 /*31*/], func_409(26), true);
					iLocal_31 = 3;
				}
				func_379(Local_709[0 /*18*/], func_215(2, 2), 2, 1073741824 /* Float: 2f */);
				func_379(Local_530[0 /*178*/], func_215(1, 4), 2, 1073741824 /* Float: 2f */);
			}
			else
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
			}
		}
		if (__LIB_18__::func_299(cParam0, Local_709[1 /*18*/], "CS_ASHTON", 0, 1, 1))
		{
			if (Global_43838 == 1)
			{
				func_379(Local_709[1 /*18*/], func_215(4, 0), 2, 1073741824 /* Float: 2f */);
			}
			else if (Global_43838 == 2)
			{
				func_379(Local_709[1 /*18*/], func_215(4, 1), 2, 1073741824 /* Float: 2f */);
			}
			else
			{
				func_379(Local_709[1 /*18*/], func_215(4, 1), 2, 1073741824 /* Float: 2f */);
			}
			ENTITY::FREEZE_ENTITY_POSITION(Local_709[1 /*18*/], false);
		}
	}
	else if (iVar0 == iLocal_22)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
		if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0) && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			}
		}
		if (!func_378(131072))
		{
			MISC::SET_BIT(&(Global_1956580.f_1), 5);
			__LIB_0__::func_203(Global_35);
			func_380(131072);
		}
		if (func_378(4096))
		{
			func_1257(4096);
		}
		if (__LIB_11__::func_97(33554432))
		{
			func_1284(33554432);
		}
		if (!func_1193(65536) && !func_1193(131072))
		{
			func_1421(&(cParam0->f_7375), cParam0);
		}
		if (__LIB_18__::func_299(cParam0, Global_35, "ARTHUR", 0, 1, 1) || ANIMSCENE::_0x005E6F28DD7ED58D(Global_43800, "ARTHUR"))
		{
			if (func_1193(65536))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[13 /*31*/]))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[13 /*31*/], false))
					{
						func_772(Global_35, 2546.104f, -1294.094f, 48.2355f, 175.7322f, 2, 1073741824 /* Float: 2f */);
						func_772(Local_530[0 /*178*/], 2545.532f, -1293.922f, 49.2009f, 175.7322f, 2, 1073741824 /* Float: 2f */);
						ANIMSCENE::START_ANIM_SCENE(Local_38[13 /*31*/]);
					}
					else
					{
						iLocal_35 = 3;
					}
				}
			}
			if (func_1193(131072))
			{
				__LIB_6__::func_876(cParam0, 29);
			}
		}
		if (__LIB_0__::func_84(&(cParam0->f_7375), 512))
		{
			if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				vLocal_522 = { 2690.132f, -1391.983f, 45.44843f };
			}
			else
			{
				vLocal_522 = { 2693.239f, -1408.94f, 45.6074f };
			}
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1218, -1995617374))
		{
			if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				vLocal_522 = { 2692.113f, -1398.907f, 45.52513f };
			}
			else
			{
				vLocal_522 = { 2696.837f, -1416.611f, 45.60464f };
			}
		}
		if ((ANIMSCENE::_0x1F0E401031E20146(Global_43800, "4-Refuses") || ANIMSCENE::_0x1F0E401031E20146(Global_43800, "3A-PlayerLeftEarly")) || ANIMSCENE::_0x1F0E401031E20146(Global_43800, "3B-PlayerStayed"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1218, -1995617374) || (__LIB_0__::func_84(&(cParam0->f_7375), 512) && CAM::IS_SCREEN_FADING_IN()))
			{
				if (!func_378(2097152))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1218))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Global_43800, "trolley01x", iLocal_1218);
						VEHICLE::_0xC9EA26893C9E4024(iLocal_1218, vLocal_522, 0);
						if (__LIB_0__::func_84(&(cParam0->f_7375), 512) && (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()))
						{
							VEHICLE::SET_TRAIN_SPEED(iLocal_1218, 6.5f);
						}
						else
						{
							VEHICLE::SET_TRAIN_SPEED(iLocal_1218, 5.5f);
						}
						func_380(2097152);
					}
				}
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1780970610))
		{
			__LIB_1__::func_432(400, 0, 0, 1, 1);
		}
	}
	else if (iVar0 == iLocal_23)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
		if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0) && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			}
		}
		if (__LIB_0__::func_84(&(cParam0->f_7375), 512))
		{
			if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				vLocal_522 = { 2690.132f, -1391.983f, 45.44843f };
			}
			else
			{
				vLocal_522 = { 2693.239f, -1408.94f, 45.6074f };
			}
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1218, -1995617374))
		{
			if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				vLocal_522 = { 2692.113f, -1398.907f, 45.52513f };
			}
			else
			{
				vLocal_522 = { 2696.837f, -1416.611f, 45.60464f };
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1218, -1995617374) || (__LIB_0__::func_84(&(cParam0->f_7375), 512) && CAM::IS_SCREEN_FADING_IN()))
		{
			if (!func_378(2097152))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1218))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Global_43800, "trolley01x", iLocal_1218);
					VEHICLE::_0xC9EA26893C9E4024(iLocal_1218, vLocal_522, 0);
					if (__LIB_0__::func_84(&(cParam0->f_7375), 512) && (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()))
					{
						VEHICLE::SET_TRAIN_SPEED(iLocal_1218, 6.5f);
					}
					else
					{
						VEHICLE::SET_TRAIN_SPEED(iLocal_1218, 5.5f);
					}
					func_380(2097152);
				}
			}
		}
	}
	return 1;
}

int func_882(var uParam0)
{
	switch (__LIB_6__::func_864(uParam0))
	{
		case 3:
			break;
	}
	return 0;
}

void func_886()
{
	int iVar0;
	iVar0 = 137;
	while (iVar0 <= 324)
	{
		__LIB_3__::func_229(iVar0);
		__LIB_0__::func_123(iVar0, 32);
		iVar0++;
	}
}

void func_890(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar25;
	int iVar26;
	int iVar27[10];
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = __LIB_3__::func_697(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!__LIB_0__::func_708(0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		__LIB_1__::func_451(iVar1, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			iVar26 = Var2.f_1[iVar25];
			if (__LIB_0__::func_144(iVar26, 0))
			{
				if (!bParam1 || __LIB_11__::func_80(iVar26))
				{
					func_310(iVar26, Var2.f_12[iVar25], bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = PED::_GET_PED_DAMAGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_BUCK_ANTLER"), 1, 0))
		{
			if (iVar39 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		iVar42 = __LIB_9__::func_806(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar41);
		PED::_0x6B89FAA36FC909A3(&iVar27, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (iVar27[iVar38] != 0)
			{
				if (__LIB_9__::func_807(iVar0) && !__LIB_9__::func_808(iVar27[iVar38]))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || __LIB_11__::func_80(iVar27[iVar38]))
				{
					func_310(iVar27[iVar38], 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	iVar43 = __LIB_9__::func_984(iVar0);
	if (!__LIB_0__::func_144(iVar43, 0))
	{
		iVar43 = __LIB_8__::func_694(iVar0);
	}
	if (__LIB_0__::func_144(iVar43, 0))
	{
		func_1437(iVar43, 1, 1, -142743235, 0);
	}
	ENTITY::_DELETE_CARRIABLE(&iVar0);
}

void func_891(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_6__::func_864(cParam0);
	if (!func_1193(131072))
	{
		if (!func_378(1))
		{
			func_1438(cParam0);
		}
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 18)
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	}
	if (iVar0 == iLocal_16 || iVar0 == iLocal_17)
	{
		if (__LIB_11__::func_97(1073741824 /* Float: 2f */))
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (iVar0 == iLocal_16 || iVar0 == iLocal_17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_709[5 /*18*/]))
		{
			if (TASK::_0xFDECCA06E8B81346(Local_709[5 /*18*/]))
			{
			}
		}
	}
	if (iVar0 == iLocal_18 || iVar0 == iLocal_19)
	{
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 299, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 299, true);
		}
	}
	if (iVar0 == iLocal_19)
	{
		func_1439();
		if (__LIB_6__::func_862(cParam0, 8))
		{
			func_875(24, 43);
		}
		if (!func_1250(cParam0))
		{
		}
		else if (!func_1251(cParam0, 2, 4))
		{
		}
		else
		{
			if (!__LIB_2__::func_343(Local_709[2 /*18*/], iLocal_1216, 0))
			{
				__LIB_4__::func_185(&(Local_709[2 /*18*/]), &iLocal_1216, -1, 1);
			}
			if (!__LIB_2__::func_343(Local_709[3 /*18*/], iLocal_1216, 0))
			{
				__LIB_4__::func_185(&(Local_709[3 /*18*/]), &iLocal_1216, 0, 1);
			}
			if (!__LIB_0__::func_71(Local_709[4 /*18*/]))
			{
				__LIB_1__::func_571(Local_709[4 /*18*/], Local_709[10 /*18*/], 0, -1, 1);
			}
		}
		if (!func_1256())
		{
		}
	}
	if (iVar0 >= iLocal_19)
	{
		func_1440();
		if (!func_378(256))
		{
			VEHICLE::DELETE_ALL_TRAINS();
			VEHICLE::SET_RANDOM_TRAINS(false);
			func_380(256);
		}
	}
	if (iVar0 == iLocal_19 || iVar0 == iLocal_20)
	{
		__LIB_9__::func_254(cParam0, Local_530[0 /*178*/], 1);
		iVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((__LIB_0__::func_272(iVar1, 0) && !__LIB_0__::func_394(Global_35, iVar1, 0)) && !__LIB_0__::func_163(iVar1, -982327190))
		{
			TASK::TASK_STAND_STILL(iVar1, -1);
		}
	}
	if (iVar0 == iLocal_20 || iVar0 == iLocal_21)
	{
		func_1441(cParam0);
	}
	if (iVar0 == iLocal_21 || iVar0 == iLocal_22)
	{
		if (func_378(4096) || __LIB_11__::func_97(33554432))
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (iVar0 == iLocal_22)
	{
		if (func_1193(65536) || __LIB_6__::func_872(cParam0, 4))
		{
			func_1442(cParam0);
		}
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
}

bool func_908(char[4] cParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_6__::func_862(cParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_9__::func_50(cParam0, iParam1, 4))
	{
		if (__LIB_6__::func_864(cParam0) != 25 && __LIB_6__::func_864(cParam0) != 26)
		{
			if (!__LIB_6__::func_862(cParam0, 512) && !__LIB_6__::func_872(cParam0, 4))
			{
				__LIB_8__::func_725(cParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1453(cParam0);
		if (__LIB_8__::func_616(cParam0))
		{
			__LIB_9__::func_33(cParam0);
		}
		if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 33554432) && __LIB_6__::func_862(cParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		__LIB_6__::func_887(cParam0, 524288);
		__LIB_4__::func_977(&(cParam0->f_7375), 4);
		if (__LIB_9__::func_145(cParam0))
		{
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 8388608);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		return true;
	}
	return false;
}

bool func_910(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_6__::func_872(cParam0, 16384))
	{
		if (__LIB_19__::func_182(cParam0))
		{
			__LIB_5__::func_326(&(cParam0->f_10792));
			__LIB_6__::func_887(cParam0, 2097152);
			__LIB_6__::func_881(cParam0, 16384);
			__LIB_6__::func_869(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!__LIB_6__::func_862(cParam0, 4))
	{
		__LIB_0__::func_16(cParam0, iParam1);
		__LIB_6__::func_868(cParam0, 4);
	}
	Var0 = { __LIB_8__::func_688(cParam0, iParam1) };
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		if (__LIB_6__::func_862(cParam0, 2097152))
		{
			if (__LIB_19__::func_182(cParam0))
			{
				__LIB_6__::func_887(cParam0, 2097152);
				func_861(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_861(cParam0, Var0);
		}
	}
	else if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (__LIB_19__::func_182(cParam0))
		{
			__LIB_6__::func_887(cParam0, 2097152);
			__LIB_8__::func_689(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		return func_861(cParam0, Var0);
	}
	return true;
}

Vector3 func_964(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2496.714f, -1449.32f, 46.4004f;
				case 1:
					return 2611.882f, -1416.146f, 45.2808f;
				case 2:
					return 2667.999f, -1267.186f, 52.5174f;
				case 3:
					return 2629.009f, -1385.906f, 46.2792f;
				case 4:
					return 2638.111f, -1415.061f, 45.3699f;
				case 5:
					return 2564.781f, -1418.028f, 46.1963f;
				case 6:
					return 2629.551f, -1386.395f, 46.2155f;
				case 7:
					return 2608.005f, -1419.578f, 45.4451f;
				case 8:
					return 2635.685f, -1418.359f, 45.4399f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2495.802f, -1444.102f, 46.3275f;
				case 1:
					return 2669.94f, -1269.536f, 51.006f;
				case 2:
					return 2625.438f, -1377.62f, 45.69f;
				case 3:
					return 2563.787f, -1417.386f, 46.1675f;
				case 4:
					return 2620.136f, -1385.286f, 46.2428f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2502.55f, -1443.829f, 45.3126f;
				case 1:
					return 2587.055f, -1419.5f, 46.2489f;
				case 2:
					return 2620.183f, -1386.184f, 46.2515f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2497.516f, -1451.117f, 45.3393f;
				case 1:
					return 2507.615f, -1432.438f, 45.3223f;
				case 2:
					return 2616.001f, -1377.403f, 45.2553f;
				case 3:
					return 2496.928f, -1454.166f, 45.3152f;
				case 4:
					return 2626.388f, -1379.105f, 45.1696f;
				case 5:
					return 2638.231f, -1417.223f, 45.3576f;
				case 6:
					return 2577.725f, -1417.278f, 45.315f;
				case 7:
					return 2577.65f, -1418.425f, 45.3641f;
				case 8:
					return 2557.726f, -1417.636f, 45.1369f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2588.303f, -1440.807f, 45.4894f;
				case 1:
					return 2606.273f, -1423.878f, 45.4104f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2582.7f, -1446.572f, 45.4204f;
				case 1:
					return 2408.861f, -1428.505f, 44.827f;
				case 2:
					return 2078.942f, -1033.068f, 42.4332f;
				case 3:
					return 2602.434f, -1422.932f, 45.4816f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2583.369f, -1430.951f, 45.5f;
				case 1:
					return 2640.914f, -1420.747f, 45.3081f;
				case 2:
					return 2602.829f, -1430.352f, 45.4955f;
				case 3:
					return 2622.523f, -1420.9f, 45.4055f;
				case 4:
					return 2605.46f, -1427.89f, 45.4089f;
				case 5:
					return 2602.893f, -1430.387f, 45.4047f;
				case 6:
					return 2583.355f, -1424.999f, 45.2854f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2581.206f, -1421.794f, 45.3306f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2505.676f, -1426.501f, 45.1694f;
				case 1:
					return 2516.323f, -1434.497f, 45.3648f;
				case 2:
					return 2527.776f, -1432.66f, 45.3418f;
				case 3:
					return 2533.618f, -1428.373f, 45.2831f;
				case 4:
					return 2541.378f, -1427.477f, 45.2044f;
				case 5:
					return 2546.545f, -1415.776f, 45.1651f;
				case 6:
					return 2552.502f, -1412.87f, 45.1466f;
				case 7:
					return 2562.353f, -1415.984f, 45.1809f;
				case 8:
					return 2566.911f, -1416.686f, 45.2463f;
				case 9:
					return 2581.475f, -1419.808f, 45.3294f;
				case 10:
					return 2590.353f, -1417.617f, 45.3184f;
				case 11:
					return 2593.355f, -1418.873f, 45.3698f;
				case 12:
					return 2607.483f, -1418.919f, 45.3847f;
				case 13:
					return 2613.187f, -1416.945f, 45.2949f;
				case 14:
					return 2614.115f, -1411.299f, 45.5156f;
				case 15:
					return 2609.315f, -1396.108f, 45.2304f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2546.937f, -1415.839f, 45.2274f;
				case 1:
					return 2546.773f, -1415.107f, 45.3285f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2548.1f, -1470.444f, 45.1848f;
				case 1:
					return 2580.395f, -1452.726f, 45.4781f;
				case 2:
					return 2595.333f, -1433.062f, 45.4986f;
				case 3:
					return 2575.907f, -1462.534f, 45.2863f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 2640.273f, -1419.894f, 45.3832f;
				case 1:
					return 2582.483f, -1430.91f, 45.4136f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 2667.999f, -1267.186f, 51.0947f;
				case 1:
					return 2493.328f, -1444.25f, 45.1124f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2226.699f, -1365.706f, 40.25f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_965(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 354.13f;
				case 1:
					return 181.37f;
				case 2:
					return 136.52f;
				case 3:
					return 250.37f;
				case 4:
					return -172.43f;
				case 5:
					return 269.2301f;
				case 6:
					return 239.33f;
				case 7:
					return -223.92f;
				case 8:
					return 90.12f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 354.13f;
				case 1:
					return 23.395f;
				case 2:
					return 225.64f;
				case 3:
					return 268.405f;
				case 4:
					return 194.91f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 170.9488f;
				case 1:
					return 239.24f;
				case 2:
					return 315.69f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 270f;
				case 2:
					return 66.9498f;
				case 3:
					return 0.332f;
				case 4:
					return 42.3758f;
				case 5:
					return 4.42f;
				case 6:
					return 178.835f;
				case 7:
					return 358.75f;
				case 8:
					return 93.38f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 146.615f;
				case 1:
					return 94.515f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 146.34f;
				case 1:
					return 55.3938f;
				case 2:
					return 317.835f;
				case 3:
					return 93.295f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -180.625f;
				case 1:
					return 95.4f;
				case 2:
					return -97.92f;
				case 3:
					return 90.005f;
				case 4:
					return 147.6f;
				case 5:
					return -95.4f;
				case 6:
					return 181.4219f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1.9744f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 269.09f;
				case 1:
					return 274.475f;
				case 2:
					return 269.6563f;
				case 3:
					return 3.175f;
				case 4:
					return 270.1063f;
				case 5:
					return 270.1063f;
				case 6:
					return 270.1063f;
				case 7:
					return 252.7238f;
				case 8:
					return 271.8033f;
				case 9:
					return 271.8033f;
				case 10:
					return 271.8033f;
				case 11:
					return 271.8033f;
				case 12:
					return 271.8033f;
				case 13:
					return 271.8033f;
				case 14:
					return 271.8033f;
				case 15:
					return 271.8033f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 90.595f;
				case 1:
					return 180.82f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -94.045f;
				case 1:
					return -36.635f;
				case 2:
					return -38.76f;
				case 3:
					return 325.495f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 182.76f;
				case 1:
					return 269.28f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 136.51f;
				case 1:
					return 179.745f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 93.19f;
			}
			break;
	}
	return 0f;
}

bool func_1023(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_1028(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

bool func_1028(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_0__::func_799(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!func_1049(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!func_1049(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_1515(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

void func_1046(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						func_632(iVar0, 1, 752097756);
					}
					func_611(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_632(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_632(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					func_632(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_632(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_632(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					func_632(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1551();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_1048(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
			return -1911121386;
			return 1756656691;
			return -1774867076;
			return -421952220;
			return -1087003323;
			return 1231618917;
			return -1183777174;
			return -841767082;
			return 1043717005;
			return 142663787;
			return 1718143051;
			return -6605744;
			return 953047564;
			return 769706682;
			return 1635590003;
			return -2047978619;
			return -586319254;
			return 249896112;
			return -1060513333;
			return 1317351007;
			return -500478573;
			return -806573802;
			return -1109949204;
			return -740156546;
			return -684532710;
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return 1419177114;
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return 1686943047;
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return -511891179;
			return -1207567168;
			return -1315407613;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return joaat("SLOTID_HORSE_BEDROLL");
			return joaat("SLOTID_HORSE_BLANKET");
			return joaat("SLOTID_HORSE_CANTLE");
			return joaat("SLOTID_HORSE_FENDER");
			return joaat("SLOTID_HORSE_HORN");
			return joaat("SLOTID_HORSE_INSURANCE");
			return 802754820;
			return joaat("SLOTID_HORSE_MANE");
			return -1886147520;
			return joaat("SLOTID_HORSE_REINS");
			return joaat("SLOTID_HORSE_SADDLE");
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return joaat("SLOTID_HORSE_SADDLEBAG");
			return 724026534;
			return joaat("SLOTID_HORSE_SEAT");
			return joaat("SLOTID_HORSE_SEX");
			return joaat("SLOTID_HORSE_SKIRT");
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return joaat("SLOTID_HORSE_STIRRUP");
			return joaat("SLOTID_HORSE_TAIL");
			return -2015960939;
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return joaat("SLOTID_PROGRESSION");
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
bool func_1049(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1057(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = __LIB_0__::func_2() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (__LIB_0__::func_357(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_654(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_549(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = __LIB_0__::func_546(iVar8, iVar4, iVar2, bVar1);
				iVar9 = __LIB_0__::func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

bool func_1073(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_9__::func_831(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_9__::func_831(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_9__::func_831(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_9__::func_831(iVar1))
		{
			*iParam2++;
		}
		if (__LIB_9__::func_831(iVar0) && __LIB_9__::func_831(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_9__::func_831(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_9__::func_831(iVar1))
		{
			*iParam2++;
		}
		if (__LIB_9__::func_831(iVar2))
		{
			*iParam2++;
		}
		if ((__LIB_9__::func_831(iVar0) && __LIB_9__::func_831(iVar1)) && __LIB_9__::func_831(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_9__::func_831(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_9__::func_831(iVar1))
		{
			*iParam2++;
		}
		if (__LIB_9__::func_831(iVar2))
		{
			*iParam2++;
		}
		if (__LIB_9__::func_831(iVar3))
		{
			*iParam2++;
		}
		if (((__LIB_9__::func_831(iVar0) && __LIB_9__::func_831(iVar1)) && __LIB_9__::func_831(iVar2)) && __LIB_9__::func_831(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1083(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		func_1073(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_11__::func_106(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1084(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (func_1073(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_11__::func_106(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_11__::func_106(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1089(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_667(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

bool func_1102(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_1028(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1110(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_1601(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_1601(iParam1, 1);
		func_1602(iParam0);
	}
}

void func_1118(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_310(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1119();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1607(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_313(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_168(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1612(Var0);
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
				func_1621(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_1119()
{
	if (!func_1622(-1898635967, __LIB_1__::func_124(), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_26())
	{
		if (!func_1622(146323340, __LIB_1__::func_124(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1121(bool bParam0)
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
		func_310(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_168(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_168(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_168(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_168(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_168(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_168(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_168(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_168(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_168(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_168(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_168(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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
				func_1621(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1119();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_1126(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (__LIB_0__::func_814(Param1, iParam5, &Var5, 0))
	{
		__LIB_0__::func_939(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1102(iParam0, &Var19, &Var0, 1, 752097756, 0);
	__LIB_1__::func_556(Var19, 1);
}

int func_1127(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_0__::func_554(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_1628(iParam0, 1);
	return 1;
}

int func_1162(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1162(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1162(iVar63, -915411861, 1, 0, 0));
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

void func_1188(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		cParam0->f_1[iVar0 /*22*/][iVar1] = 57781;
		MISC::CLEAR_BIT(&(cParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

bool func_1191(char[4] cParam0, int iParam1)
{
	int iVar0;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_1204)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1204[iVar0]))
				{
					iLocal_1204[iVar0] = __LIB_1__::func_545(iLocal_474, 2681.97f, -1287.527f, 50.64278f, 0f, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
					if (iVar0 == 0)
					{
						PED::_SET_PED_BODY_COMPONENT(iLocal_1204[iVar0], 697683187);
						PED::_UPDATE_PED_VARIATION(iLocal_1204[iVar0], false, true, true, true, false);
					}
					else if (iVar0 == 1)
					{
						iLocal_1204[iVar0] = __LIB_1__::func_545(iLocal_474, 2681.97f, -1287.527f, 50.64278f, 0f, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
						PED::_SET_PED_BODY_COMPONENT(iLocal_1204[iVar0], 928671868);
						PED::_UPDATE_PED_VARIATION(iLocal_1204[iVar0], false, true, true, true, false);
					}
					return false;
				}
				else if (iVar0 == 0)
				{
				}
				else if (iVar0 == 1)
				{
				}
				iVar0++;
			}
			__LIB_9__::func_154(cParam0, iLocal_1204[0], "A_M_M_HtlFancyTravellers_01", 0, 0, 0, 0);
			__LIB_9__::func_154(cParam0, iLocal_1204[1], "A_M_M_HtlFancyTravellers_01^1", 0, 0, 0, 0);
			break;
	}
	return true;
}

bool func_1193(int iParam0)
{
	return __LIB_0__::func_27(iLocal_484, iParam0);
}

void func_1195(int iParam0)
{
	if (func_1193(iParam0))
	{
		__LIB_1__::func_681(&iLocal_484, iParam0);
	}
}

void func_1197()
{
	if (PED::DOES_GROUP_EXIST(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (PED::_0x0455546F23FF08E4(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
		{
			PED::SET_GROUP_FORMATION(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_530[0 /*178*/]))
			{
				if (!PED::IS_PED_GROUP_MEMBER(Local_530[0 /*178*/], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0) && PED::IS_PED_IN_GROUP(Local_530[0 /*178*/]))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_530[0 /*178*/]);
				}
				if (!PED::IS_PED_GROUP_MEMBER(Local_530[0 /*178*/], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0))
				{
					TASK::CLEAR_PED_TASKS(Local_530[0 /*178*/], true, false);
					PED::SET_PED_CONFIG_FLAG(Local_530[0 /*178*/], 279, true);
					PED::SET_PED_AS_GROUP_MEMBER(Local_530[0 /*178*/], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
				}
			}
		}
	}
}

void func_1198(char[4] cParam0)
{
	var uVar0;
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_0__::func_665(Global_35, Local_530[0 /*178*/], 1, 1) <= 0.85f)
		{
			if (!__LIB_0__::func_899(&uLocal_1196))
			{
				__LIB_4__::func_89(&uLocal_1196, 0);
			}
			else if (!__LIB_5__::func_463())
			{
				if (__LIB_9__::func_178(&uLocal_1196) >= 3f)
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_CLOSEMARY", 0))
					{
						__LIB_2__::func_259(&uLocal_1196);
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1196);
			}
		}
		else if (__LIB_0__::func_899(&uLocal_1196))
		{
			__LIB_1__::func_561(&uLocal_1196);
		}
	}
	else if (__LIB_0__::func_899(&uLocal_1196))
	{
		__LIB_1__::func_561(&uLocal_1196);
	}
	if (__LIB_1__::func_750(&uVar0) && !func_1193(16777216))
	{
		if (!__LIB_5__::func_463())
		{
			if (__LIB_9__::func_178(&uLocal_1133) >= 3f)
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_BANDANA", 0))
				{
					func_1206(16777216);
				}
			}
		}
		else
		{
			__LIB_2__::func_259(&uLocal_1133);
		}
	}
	if (__LIB_6__::func_889(cParam0) == 0)
	{
		if (!__LIB_2__::func_800())
		{
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0f)
			{
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vLocal_519, 90f))
				{
				}
				else
				{
					__LIB_2__::func_259(&uLocal_1193);
				}
			}
		}
		else if (__LIB_9__::func_178(&uLocal_1193) >= 7f)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_QUICK", 0))
				{
					__LIB_2__::func_259(&uLocal_1193);
					iLocal_492++;
				}
			}
			else
			{
				__LIB_1__::func_585(&uLocal_1193, 5f);
			}
		}
		if (iLocal_492 <= 2)
		{
			if (__LIB_9__::func_178(&uLocal_1193) >= 10f)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_QUICK", 0))
					{
						__LIB_2__::func_259(&uLocal_1193);
						iLocal_492++;
					}
				}
				else
				{
					__LIB_1__::func_585(&uLocal_1193, 8f);
				}
			}
		}
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			func_1271(cParam0, "MRY3_OBJ_STABLE", 2493.226f, -1450.587f, 45.1101f);
			__LIB_2__::func_259(&uLocal_1133);
			__LIB_9__::func_195(cParam0, 2);
			break;
		case 2:
			if (__LIB_9__::func_178(&uLocal_1133) >= 2f)
			{
				if (__LIB_7__::func_175("MRY3_CONVO"))
				{
					__LIB_2__::func_259(&uLocal_1133);
					if (!__LIB_0__::func_899(&uLocal_1178))
					{
						__LIB_4__::func_89(&uLocal_1178, 0);
					}
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
	}
}

void func_1199(char[4] cParam0)
{
	switch (Local_530[0 /*178*/].f_169)
	{
		case 0:
			__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 2);
			break;
		case 2:
			if (__LIB_6__::func_889(cParam0) == 1)
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_ON_MOUNT(Local_530[0 /*178*/]))
				{
					__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 1);
				}
			}
			break;
		case 1:
			if (PED::IS_PED_GROUP_MEMBER(Local_530[0 /*178*/], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_530[0 /*178*/]);
			}
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_530[0 /*178*/], "MRY3_GRIEF", 0f, 0f, 0f, 0, "MRY3_GRIEF");
			TASK::TASK_ENTER_ANIM_SCENE(Local_530[0 /*178*/], Local_38[5 /*31*/], "MaryLinton", func_409(20), 2f, 1, 2, 20000, -1082130432 /* Float: -1f */);
			__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 3);
			break;
		case 3:
			break;
	}
}

void func_1200(char[4] cParam0)
{
	switch (iLocal_29)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[4 /*31*/]) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[5 /*31*/]))
			{
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_38[5 /*31*/], "MaryLinton", &uLocal_1369, false, func_409(20), 2);
				func_1665(4);
				func_1665(5);
				iLocal_29 = 1;
			}
			break;
		case 1:
			if (Local_530[0 /*178*/].f_169 == 3)
			{
				iLocal_29 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[4 /*31*/]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[4 /*31*/], false))
				{
					if (__LIB_8__::func_684("MRY3_CONVO"))
					{
						__LIB_6__::func_900("MRY3_CONVO", 0, 0);
					}
					ANIMSCENE::START_ANIM_SCENE(Local_38[4 /*31*/]);
				}
				else
				{
					iLocal_29 = 5;
				}
			}
			break;
		case 5:
			if (__LIB_3__::func_439(Local_38[4 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[4 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[4 /*31*/]);
					iLocal_29 = 4;
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[5 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[5 /*31*/], false))
			{
				iLocal_29 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[5 /*31*/], false) && ANIMSCENE::_0x8D81E7824B7753F7(Local_38[5 /*31*/], "s_idle_wait", 1))
			{
				if (__LIB_0__::func_665(Global_35, Local_530[0 /*178*/], 1, 1) <= 5f)
				{
					if (!__LIB_11__::func_97(1073741824 /* Float: 2f */))
					{
						func_1232(1073741824 /* Float: 2f */);
					}
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_38[5 /*31*/], "b_breakout", true, false);
					iLocal_29 = 6;
				}
				else
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_1212))
					{
						MAP::REMOVE_BLIP(&iLocal_1212);
					}
					MAP::_BLIP_SET_MODIFIER(iLocal_1209, -546708623);
					__LIB_9__::func_142(cParam0, "MRY3_OBJ_FRONT", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_11__::func_231(cParam0, "MRY3_OBJ_FRONT", 4, 0, 0);
				}
			}
			break;
		case 6:
			if (__LIB_3__::func_439(Local_38[5 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[5 /*31*/]))
				{
					iLocal_29 = 7;
				}
			}
			break;
	}
}

bool func_1205()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = iVar1;
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_1301[iVar0]))
		{
			iLocal_1301[iVar0] = TASK::ADD_COVER_POINT(func_868(8, iVar0), func_869(8, iVar0), 3, 2, 0, false);
		}
		iVar1++;
	}
	return true;
}

void func_1206(int iParam0)
{
	if (!func_1193(iParam0))
	{
		__LIB_1__::func_683(&iLocal_484, iParam0);
	}
}

void func_1220()
{
	if (__LIB_0__::func_899(&uLocal_1151))
	{
	}
	switch (iLocal_25)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/]))
			{
				func_1665(1);
				iLocal_25 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[1 /*31*/], false))
				{
					iLocal_25 = 2;
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[1 /*31*/], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(Local_38[1 /*31*/], "pl_loop_base"))
				{
					if (!__LIB_0__::func_899(&uLocal_1151))
					{
						__LIB_4__::func_89(&uLocal_1151, 0);
					}
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/]) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_38[1 /*31*/], "IG_MaryLinton"))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[1 /*31*/]);
				iLocal_25 = 6;
			}
			if (__LIB_0__::func_899(&uLocal_1151))
			{
				if (__LIB_1__::func_583(&uLocal_1151) >= 5f)
				{
					func_1270(1, 6);
					iLocal_25 = 3;
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_899(&uLocal_1151))
			{
				if (__LIB_1__::func_583(&uLocal_1151) >= 13f)
				{
					func_1270(1, 5);
					iLocal_25 = 4;
				}
			}
			break;
		case 4:
			iLocal_25 = 6;
			break;
		case 5:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[1 /*31*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_38[1 /*31*/]);
				}
				else
				{
					iLocal_25 = 2;
				}
			}
			break;
		case 6:
			if (__LIB_3__::func_439(Local_38[1 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[1 /*31*/]);
				}
			}
			break;
	}
}

void func_1221()
{
	if (iLocal_28 >= 2 && !__LIB_11__::func_97(268435456))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	switch (iLocal_28)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]))
			{
				func_1665(3);
				iLocal_28 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_205(Global_35, iLocal_1223[14], 1, 0))
			{
				iLocal_28 = 2;
			}
			break;
		case 2:
			if (!__LIB_11__::func_97(128))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[3 /*31*/], false))
					{
						__LIB_1__::func_727(Local_530[0 /*178*/], 1);
						__LIB_1__::func_726(Global_35, 1);
						__LIB_5__::func_438(&uLocal_1089);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
						ANIMSCENE::START_ANIM_SCENE(Local_38[3 /*31*/]);
					}
					else
					{
						iLocal_28 = 3;
					}
				}
			}
			break;
		case 3:
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_38[3 /*31*/]) >= 0.1398344f)
			{
				func_1674();
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_38[3 /*31*/]) >= 0.1398344f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_38[3 /*31*/]) <= 0.2998155f)
			{
				if (!__LIB_11__::func_97(67108864))
				{
					func_1232(67108864);
				}
			}
			else if (__LIB_11__::func_97(67108864))
			{
				func_1284(67108864);
			}
			if (!__LIB_11__::func_97(268435456))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_38[3 /*31*/]) >= 0.9816008f)
				{
					__LIB_0__::func_489(0, 0);
					func_1232(268435456);
				}
			}
			if (__LIB_3__::func_439(Local_38[3 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[3 /*31*/]);
					func_1234(&uLocal_1089);
					__LIB_3__::func_887(Global_35, Local_530[0 /*178*/], &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
					__LIB_11__::func_98(Local_530[0 /*178*/], Global_35, &uLocal_1328, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 64, 1f, -1f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
					if (!__LIB_0__::func_163(iLocal_1203, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1203, 2563.96f, -1262.823f, 50.19314f, 1f, -1, 0.25f, 0, 40000f);
					}
					iLocal_28 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1222(char[4] cParam0)
{
	int iVar0;
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_709[0 /*18*/], 1318273915))
	{
	}
	switch (iLocal_30)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[7 /*31*/]))
			{
				func_1665(7);
				iLocal_30 = 1;
			}
			break;
		case 1:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("mary3_father_follow", ENTITY::GET_ENTITY_COORDS(Local_709[0 /*18*/], true, false), &iVar0);
			if (iVar0 >= 47)
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_38[7 /*31*/], ENTITY::GET_ENTITY_COORDS(Local_709[0 /*18*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_709[0 /*18*/], 2), 2);
				iLocal_30 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[7 /*31*/]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[7 /*31*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_38[7 /*31*/]);
				}
				else if (!__LIB_0__::func_899(&uLocal_1160))
				{
					__LIB_4__::func_89(&uLocal_1160, 0);
					iLocal_30 = 2;
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[7 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[7 /*31*/], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(Local_38[7 /*31*/], func_409(23)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_38[7 /*31*/]) >= 0.1445946f)
				{
					if (!func_1193(524288))
					{
						__LIB_5__::func_20(0, 0);
						if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0f)
						{
							if (__LIB_8__::func_711(cParam0, "MRY3_PUKE", 0))
							{
								__LIB_9__::func_195(cParam0, 8);
								func_1206(524288);
							}
						}
						else
						{
							__LIB_9__::func_195(cParam0, 8);
							func_1206(524288);
						}
					}
				}
			}
			if (__LIB_0__::func_899(&uLocal_1160))
			{
				if (__LIB_1__::func_583(&uLocal_1160) >= 8f)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_38[7 /*31*/], "bLoop", true, false);
					iLocal_30 = 4;
				}
			}
			break;
		case 4:
			if (__LIB_3__::func_439(Local_38[7 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[7 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[7 /*31*/]);
					if (!__LIB_0__::func_163(Local_709[0 /*18*/], 658540077))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_709[0 /*18*/], "mary3_father_follow", 0, 25673, -1, 0, 0, -1);
					}
					__LIB_8__::func_711(cParam0, "MRY3_CHAT", 0);
					iLocal_30 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1223()
{
	switch (iLocal_26)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[6 /*31*/]))
			{
				func_1665(6);
				iLocal_26 = 1;
			}
			break;
		case 1:
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[6 /*31*/]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[6 /*31*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_38[6 /*31*/]);
				}
				else
				{
					iLocal_26 = 3;
				}
			}
			break;
		case 3:
			if (__LIB_3__::func_439(Local_38[6 /*31*/]))
			{
				if (!__LIB_0__::func_163(Local_530[0 /*178*/], 1369124074))
				{
					TASK::TASK_ENTER_ANIM_SCENE(Local_530[0 /*178*/], Local_38[1 /*31*/], "IG_MaryLinton", func_409(4), 3f, 1, 2, 20000, -1082130432 /* Float: -1f */);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[6 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[6 /*31*/]);
					iLocal_26 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1224(char[4] cParam0)
{
	func_1675(cParam0);
	if (__LIB_0__::func_665(Global_35, Local_709[0 /*18*/], 1, 1) <= 30f)
	{
		if (__LIB_1__::func_205(Local_709[0 /*18*/], iLocal_1223[12], 1, 0))
		{
			if (!func_1193(4096))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WHISPER", 0))
					{
						func_1206(4096);
					}
				}
			}
		}
		else if (__LIB_1__::func_205(Local_709[0 /*18*/], iLocal_1223[13], 1, 0))
		{
			if (!func_1193(8192))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WHISPER2", 0))
					{
						func_1206(8192);
					}
				}
			}
		}
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			__LIB_9__::func_142(cParam0, "MRY3_FOLLOW_OBJ", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (__LIB_11__::func_231(cParam0, "MRY3_FOLLOW_OBJ", 4, 0, 0))
			{
				__LIB_9__::func_195(cParam0, 3);
			}
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 3167) && !__LIB_10__::func_598())
			{
				__LIB_0__::func_45("MRY3_FOLLOW_HELP", 10000, 0, 0, 0, 1);
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 4:
			if (!__LIB_11__::func_97(128))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WARN_1", 0))
					{
						__LIB_9__::func_195(cParam0, -1);
					}
				}
				else
				{
					__LIB_5__::func_20(0, 0);
				}
			}
			break;
		case 5:
			if (!__LIB_11__::func_97(128))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WARN_2", 0))
					{
						__LIB_9__::func_195(cParam0, -1);
					}
				}
				else
				{
					__LIB_5__::func_20(0, 0);
				}
			}
			break;
		case 6:
			if (!__LIB_11__::func_97(128))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WARN_3", 0))
					{
						__LIB_9__::func_195(cParam0, -1);
					}
				}
				else
				{
					__LIB_5__::func_20(0, 0);
				}
			}
			break;
		case 7:
			if (!__LIB_11__::func_97(128))
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_ALLEY", 0))
				{
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 8:
			if (!__LIB_11__::func_97(128))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_PUKE_RE", 0))
					{
						__LIB_9__::func_195(cParam0, -1);
					}
				}
			}
			break;
	}
}

void func_1225(var uParam0)
{
	if (__LIB_11__::func_97(128))
	{
		if (Local_709[0 /*18*/].f_2 != 4)
		{
			__LIB_0__::func_19(&(Local_709[0 /*18*/].f_2), 4);
		}
	}
	switch (Local_709[0 /*18*/].f_2)
	{
		case 0:
			__LIB_0__::func_19(&(Local_709[0 /*18*/].f_2), 2);
			break;
		case 2:
			if (!PED::IS_PED_IN_COVER(Global_35, false, false))
			{
				if (__LIB_11__::func_97(1))
				{
					func_1284(1);
				}
			}
			if (!__LIB_0__::func_163(Local_709[0 /*18*/], 658540077))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_709[0 /*18*/], "mary3_father_follow", 0, 25673, -1, 0, 0, -1);
				__LIB_0__::func_19(&(Local_709[0 /*18*/].f_2), 5);
			}
			break;
		case 5:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_709[0 /*18*/], 0))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_709[0 /*18*/]) >= 64)
				{
					TASK::CLEAR_PED_TASKS(Local_709[0 /*18*/], true, false);
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_163(Local_709[0 /*18*/], -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_709[0 /*18*/], Global_35, -1, -1f, -1f, -1f);
			}
			break;
		case 6:
			break;
		case 9:
			break;
	}
}

void func_1226(var uParam0)
{
	func_1677();
	switch (Local_530[0 /*178*/].f_169)
	{
		case 0:
			__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 2);
			break;
		case 2:
			if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[6 /*31*/]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[6 /*31*/], false)) && (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[1 /*31*/], false))) || (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[6 /*31*/]) && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/])))
			{
				if (__LIB_2__::func_123(Local_530[0 /*178*/], Global_35, 0))
				{
					__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 1);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[1 /*31*/], false) && ANIMSCENE::_0x8D81E7824B7753F7(Local_38[1 /*31*/], "s_loop_base", 1))
				{
					if (__LIB_2__::func_123(Local_530[0 /*178*/], Global_35, 0))
					{
						__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 1);
					}
				}
			}
			break;
		case 1:
			func_1234(&uLocal_1089);
			__LIB_3__::func_887(Global_35, Local_530[0 /*178*/], &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
			__LIB_11__::func_98(Local_530[0 /*178*/], Global_35, &uLocal_1328, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 64, 1f, -1f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			if (!__LIB_11__::func_97(2097152))
			{
				func_1232(2097152);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[1 /*31*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[1 /*31*/]);
			}
			__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 3);
			break;
		case 3:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[3 /*31*/], false)) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]))
			{
				func_1679();
				if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
				{
					if (!__LIB_0__::func_163(Local_530[0 /*178*/], 1910705116))
					{
						__LIB_5__::func_438(&uLocal_1089);
						__LIB_1__::func_727(Local_530[0 /*178*/], 1);
						TASK::TASK_SEEK_COVER_FROM_PED(Local_530[0 /*178*/], Local_709[0 /*18*/], -1, 0, 0, 0);
					}
					else
					{
						__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 4);
					}
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_IN_COVER(Global_35, false, false) && !PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[3 /*31*/], false)) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]))
				{
					func_1234(&uLocal_1089);
					__LIB_3__::func_887(Global_35, Local_530[0 /*178*/], &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
					__LIB_11__::func_98(Local_530[0 /*178*/], Global_35, &uLocal_1328, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 64, 1f, -1f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
					__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 3);
				}
			}
			break;
		case 5:
			__LIB_1__::func_727(Local_530[0 /*178*/], 1);
			if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_487))
			{
				if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_487))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_1223[8], 1, 0))
					{
						if (!PED::IS_PED_IN_COVER(Global_35, false, false) && !PED::IS_PED_GOING_INTO_COVER(Global_35))
						{
							if (!__LIB_0__::func_163(Local_530[0 /*178*/], 713668775))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_530[0 /*178*/], 2561.818f, -1415.543f, 45.15988f, 2f, 20000, 0.25f, 0, 40000f);
							}
						}
					}
				}
			}
			if (PED::IS_PED_IN_COVER(Global_35, false, false))
			{
				__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 6);
			}
			break;
		case 6:
			if (!PED::IS_PED_IN_COVER(Global_35, false, false) && !PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[3 /*31*/], false)) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]))
				{
					VOLUME::_DELETE_VOLUME(iLocal_1223[6]);
					PED::_SET_PED_CROUCH_MOVEMENT(Local_530[0 /*178*/], false, 0, false);
					__LIB_3__::func_887(Global_35, Local_530[0 /*178*/], &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
					__LIB_11__::func_98(Local_530[0 /*178*/], Global_35, &uLocal_1328, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 64, 1f, -1f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
					__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), -1);
				}
			}
			break;
		case 7:
			__LIB_1__::func_727(Local_530[0 /*178*/], 1);
			if (!__LIB_0__::func_163(Local_530[0 /*178*/], 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_530[0 /*178*/], 2561.818f, -1415.543f, 45.15988f, 2f, 20000, 0.25f, 0, 40000f);
			}
			break;
	}
}

void func_1229(char[4] cParam0)
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[7 /*31*/]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[7 /*31*/], false)) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[7 /*31*/]))
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) <= 0f)
		{
			if (!__LIB_0__::func_899(&uLocal_1181))
			{
				__LIB_4__::func_89(&uLocal_1181, 0);
			}
			else if (!__LIB_11__::func_97(128))
			{
				if (__LIB_1__::func_583(&uLocal_1181) >= 10f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_8__::func_711(cParam0, "MRY3_FOLLOW", 0))
						{
							__LIB_2__::func_259(&uLocal_1181);
						}
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_561(&uLocal_1181);
		}
	}
	else if (__LIB_0__::func_899(&uLocal_1181))
	{
		__LIB_1__::func_561(&uLocal_1181);
	}
	if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0f)
	{
		if (!__LIB_1__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(Local_709[0 /*18*/], true, false), 0f))
		{
			if (!__LIB_0__::func_899(&uLocal_1184))
			{
				__LIB_4__::func_89(&uLocal_1184, 0);
			}
		}
		else if (__LIB_0__::func_899(&uLocal_1184))
		{
			__LIB_1__::func_561(&uLocal_1184);
		}
	}
	if (!__LIB_11__::func_97(128))
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0f)
		{
			if (__LIB_1__::func_583(&uLocal_1184) >= 5f)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WHERE", 0))
					{
						__LIB_2__::func_259(&uLocal_1184);
					}
				}
			}
		}
	}
}

void func_1232(int iParam0)
{
	if (!__LIB_11__::func_97(iParam0))
	{
		__LIB_1__::func_683(&iLocal_482, iParam0);
	}
}

bool func_1233(char[4] cParam0)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	switch (iVar0)
	{
		case 1:
			__LIB_9__::func_195(cParam0, 4);
			return true;
		case 2:
			__LIB_9__::func_195(cParam0, 5);
			return true;
		case 3:
			__LIB_9__::func_195(cParam0, 6);
			return true;
	}
	return false;
}

void func_1234(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_NO_REORIENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(sParam0);
}

void func_1239(char[4] cParam0)
{
	func_1675(cParam0);
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			if (!__LIB_5__::func_463())
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_WHISPER4", 0))
				{
					__LIB_2__::func_259(&uLocal_1133);
					__LIB_9__::func_195(cParam0, 3);
				}
			}
			break;
		case 3:
			if (!PED::IS_PED_IN_MELEE_COMBAT(Global_35))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_CHAT3", 0))
					{
						__LIB_2__::func_259(&uLocal_1133);
						__LIB_9__::func_195(cParam0, 9);
					}
				}
			}
			break;
		case 9:
			if (!PED::IS_PED_IN_MELEE_COMBAT(Global_35))
			{
				if (__LIB_0__::func_899(&uLocal_1133) && __LIB_1__::func_583(&uLocal_1133) >= 2f)
				{
					if (!__LIB_5__::func_463())
					{
						if (!func_1193(1073741824 /* Float: 2f */))
						{
							if (func_1688(cParam0))
							{
								func_1206(1073741824 /* Float: 2f */);
								__LIB_9__::func_195(cParam0, -1);
							}
						}
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1133);
			}
			break;
		case 4:
			if (!__LIB_11__::func_97(128))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WARN_1", 0))
					{
						__LIB_9__::func_195(cParam0, -1);
					}
				}
				else
				{
					__LIB_5__::func_20(0, 0);
				}
			}
			break;
		case 5:
			if (!__LIB_11__::func_97(128))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WARN_2", 0))
					{
						__LIB_9__::func_195(cParam0, -1);
					}
				}
				else
				{
					__LIB_5__::func_20(0, 0);
				}
			}
			break;
		case 6:
			if (!__LIB_11__::func_97(128))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WARN_3", 0))
					{
						__LIB_9__::func_195(cParam0, -1);
					}
				}
				else
				{
					__LIB_5__::func_20(0, 0);
				}
			}
			break;
		case 7:
			if (!__LIB_11__::func_97(128))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_ALLEY", 0))
					{
						__LIB_2__::func_259(&uLocal_1133);
						__LIB_9__::func_195(cParam0, 8);
					}
				}
			}
			break;
		case 8:
			if (!__LIB_11__::func_97(128))
			{
				if (!PED::IS_PED_IN_MELEE_COMBAT(Global_35) && !__LIB_5__::func_463())
				{
					if (__LIB_0__::func_899(&uLocal_1133) && __LIB_1__::func_583(&uLocal_1133) >= 3f)
					{
						if (__LIB_8__::func_711(cParam0, "MRY3_CHAT2", 0))
						{
							__LIB_9__::func_195(cParam0, -1);
						}
					}
				}
				else
				{
					__LIB_2__::func_259(&uLocal_1133);
				}
			}
			break;
	}
}

void func_1240(char[4] cParam0)
{
	if (__LIB_11__::func_97(128))
	{
		if (Local_709[0 /*18*/].f_2 != 4)
		{
			__LIB_0__::func_19(&(Local_709[0 /*18*/].f_2), 4);
		}
	}
	if (!func_378(32768))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_709[0 /*18*/], -1))
		{
			func_380(32768);
		}
	}
	switch (Local_709[0 /*18*/].f_2)
	{
		case 0:
			__LIB_0__::func_19(&(Local_709[0 /*18*/].f_2), 2);
			break;
		case 2:
			if (!PED::IS_PED_IN_COVER(Global_35, false, false))
			{
				if (__LIB_11__::func_97(1))
				{
					func_1284(1);
				}
			}
			if (!__LIB_0__::func_163(Local_709[0 /*18*/], 658540077))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_709[0 /*18*/], "mary3_father_follow", 0, 25673, -1, 0, 0, -1);
				__LIB_0__::func_19(&(Local_709[0 /*18*/].f_2), 5);
			}
			break;
		case 5:
			break;
		case 4:
			if (!__LIB_0__::func_163(Local_709[0 /*18*/], -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_709[0 /*18*/], Global_35, -1, -1f, -1f, -1f);
			}
			break;
	}
}

void func_1241(char[4] cParam0)
{
	func_1677();
	switch (Local_530[0 /*178*/].f_169)
	{
		case 0:
			__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 2);
			break;
		case 2:
			func_1679();
			__LIB_2__::func_966(Local_530[0 /*178*/], Global_35, 1, 1, 1, 0, 1, 1, 1, 1, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 229, true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				if (!__LIB_0__::func_163(Local_530[0 /*178*/], 1910705116))
				{
					__LIB_5__::func_438(&uLocal_1089);
					__LIB_1__::func_727(Local_530[0 /*178*/], 1);
					TASK::TASK_SEEK_COVER_FROM_PED(Local_530[0 /*178*/], Local_709[0 /*18*/], -1, 0, 0, 0);
				}
				else
				{
					__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 1);
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_COVER(Global_35, false, false) && !PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				func_1234(&uLocal_1089);
				__LIB_3__::func_887(Global_35, Local_530[0 /*178*/], &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
				__LIB_11__::func_98(Local_530[0 /*178*/], Global_35, &uLocal_1328, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 64, 1f, -1f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				__LIB_0__::func_19(&(Local_530[0 /*178*/].f_169), 2);
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

bool func_1242(char[4] cParam0)
{
	vector3 vVar0;
	if (__LIB_6__::func_864(cParam0) >= 5)
	{
		vVar0 = { 2080.798f, -1033.691f, 42.45461f };
	}
	else
	{
		vVar0 = { 2623.061f, -1389.606f, 46.71011f };
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_709[1 /*18*/]))
	{
		Local_709[1 /*18*/] = __LIB_1__::func_545(iLocal_475, vVar0, 0f, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0);
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_709[1 /*18*/], true);
	PED::_SET_PED_BODY_COMPONENT(Local_709[1 /*18*/], joaat("META_OUTFIT_DEFAULT"));
	PED::_UPDATE_PED_VARIATION(Local_709[1 /*18*/], false, true, true, true, false);
	__LIB_9__::func_42(cParam0, Local_709[1 /*18*/], "MRY3_BUYER", 0);
	PED::SET_PED_CONFIG_FLAG(Local_709[1 /*18*/], 180, true);
	__LIB_1__::func_991(Local_709[1 /*18*/], 0);
	TASK::_0x41D1331AFAD5A091(Local_709[1 /*18*/], 1, 0);
	AUDIO::STOP_PED_SPEAKING(Local_709[1 /*18*/], true);
	__LIB_4__::func_490(Local_709[1 /*18*/]);
	__LIB_2__::func_463(Local_709[1 /*18*/], joaat("PROVISION_MARYS_BROOCH"), 1, 0);
	Local_709[1 /*18*/].f_13 = 1;
	return true;
}

bool func_1243(char[4] cParam0, bool bParam1)
{
	__LIB_19__::func_182(cParam0);
	if (((bParam1 && __LIB_4__::func_576(&(cParam0->f_10792)) != 11) && !__LIB_4__::func_562(&(cParam0->f_10792), 131072)) && !__LIB_4__::func_562(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return __LIB_4__::func_581(&(cParam0->f_10792));
}

void func_1244(char[4] cParam0, int iParam1)
{
	struct<8> Var0;
	Var0 = { __LIB_5__::func_65(&(cParam0->f_7375)) };
	if ((((__LIB_4__::func_562(&(cParam0->f_10792), 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false)) && ANIMSCENE::_0xA9016536015DE29D(cParam0->f_7375.f_804, &Var0)) && ANIMSCENE::_0x23E33CB9F4A3F547(cParam0->f_7375.f_804, &Var0))
	{
		__LIB_9__::func_46(cParam0, &Var0);
		func_1696(cParam0);
	}
	else
	{
		if (iParam1 == 1 && __LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_4__::func_618(&(cParam0->f_10792), Global_43805);
			__LIB_4__::func_532(&(cParam0->f_10792), 8);
		}
		__LIB_0__::func_19(&(cParam0->f_10792), iParam1);
		__LIB_19__::func_182(cParam0);
		__LIB_6__::func_868(cParam0, 2097152);
	}
}

void func_1248(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1268[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1268[iVar0]);
		}
		iVar0++;
	}
}

bool func_1249(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<4> Var7;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_709[iVar1 /*18*/]))
		{
			switch (iVar1)
			{
				case 6:
					Var3 = { func_215(6, 0) };
					Var7 = { func_215(6, 1) };
					iVar2 = iLocal_480;
					break;
				case 7:
					Var3 = { func_215(6, 4) };
					Var7 = { func_215(6, 4) };
					iVar2 = iLocal_480;
					break;
				case 8:
					Var3 = { func_215(6, 3) };
					Var7 = { func_215(6, 5) };
					iVar2 = iLocal_480;
					break;
				case 9:
					Var7 = { func_215(6, 6) };
					Var3 = { func_215(6, 6) };
					iVar2 = iLocal_480;
					break;
				case 10:
					Var7 = { func_215(10, 1) };
					Var3 = { func_215(10, 0) };
					iVar2 = iLocal_480;
					break;
				case 11:
					Var3 = { func_215(11, 1) };
					Var7 = { func_215(11, 0) };
					iVar2 = iLocal_478;
					break;
			}
			if (Global_43838 == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_709[iVar1 /*18*/]))
				{
					Local_709[iVar1 /*18*/] = __LIB_1__::func_545(iVar2, Var3, Var3.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				if (iVar1 == 9)
				{
					PED::_0xCAC43D060099EA72(Local_709[9 /*18*/]);
					ENTITY::SET_ENTITY_VISIBLE(Local_709[9 /*18*/], false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_709[9 /*18*/], true);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_709[9 /*18*/], false, false);
					PED::SET_PED_CONFIG_FLAG(Local_709[9 /*18*/], 471, true);
					PED::SET_PED_CONFIG_FLAG(Local_709[9 /*18*/], 324, true);
				}
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_709[iVar1 /*18*/]))
				{
					Local_709[iVar1 /*18*/] = __LIB_1__::func_545(iVar2, Var7, Var7.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				if (iVar1 == 8)
				{
					PED::_0xCAC43D060099EA72(Local_709[8 /*18*/]);
					ENTITY::SET_ENTITY_VISIBLE(Local_709[8 /*18*/], false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_709[8 /*18*/], true);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_709[8 /*18*/], false, false);
					PED::SET_PED_CONFIG_FLAG(Local_709[8 /*18*/], 471, true);
					PED::SET_PED_CONFIG_FLAG(Local_709[8 /*18*/], 324, true);
				}
			}
			Local_709[iVar1 /*18*/].f_13 = 1;
			Local_709[iVar1 /*18*/].f_5 = { Var3 };
			Local_709[iVar1 /*18*/].f_9 = { Var7 };
			Local_709[iVar1 /*18*/].f_16 = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(Local_709[iVar1 /*18*/].f_16, ENTITY::GET_ENTITY_COORDS(Local_709[iVar1 /*18*/], true, false), 1f);
			if (iVar1 != 11)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_709[iVar1 /*18*/], true);
				PED::SET_PED_CONFIG_FLAG(Local_709[iVar1 /*18*/], 6, true);
				__LIB_1__::func_991(Local_709[iVar1 /*18*/], 0);
			}
			if (bParam2)
			{
				return false;
			}
		}
		else if (bParam2)
		{
			if (iVar1 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1250(char[4] cParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1216))
	{
		if (__LIB_6__::func_864(cParam0) == 3)
		{
			if (Global_43838 == 1)
			{
				iLocal_1216 = VEHICLE::CREATE_VEHICLE(joaat("COACH2"), func_868(5, 0), func_869(5, 0), true, true, false, false);
			}
			else if (Global_43838 == 2)
			{
				iLocal_1216 = VEHICLE::CREATE_VEHICLE(joaat("COACH2"), func_868(5, 3), func_869(5, 3), true, true, false, false);
			}
			else
			{
				iLocal_1216 = VEHICLE::CREATE_VEHICLE(joaat("COACH2"), func_868(5, 3), func_869(5, 3), true, true, false, false);
			}
		}
		else
		{
			iLocal_1216 = VEHICLE::CREATE_VEHICLE(joaat("COACH2"), func_868(5, 3), func_869(5, 3), true, true, false, false);
		}
		VEHICLE::_SET_VEHICLE_TINT(iLocal_1216, 3);
		VEHICLE::_SET_VEHICLE_LIVERY(iLocal_1216, 3);
		__LIB_9__::func_340(iLocal_1216);
		VEHICLE::_0x226C6A4E3346D288(iLocal_1216, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1216, 1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_1216, 3, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1216, 0f);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1216, true);
		VEHICLE::_0xCBF88256E44D5D39(iLocal_1216, 0);
		VEHICLE::_0xF489F94BFEE12BB0(iLocal_1216, joaat("COACH2_MARY3"));
		PED::_0x7C00CFC48A782DC0(iLocal_1223[33], iLocal_1216, -0.88f, -0.5f, 0.75f, 0f, 0f, 90f, 2, 1);
		PED::_0x7C00CFC48A782DC0(iLocal_1223[34], iLocal_1216, 0.88f, -0.5f, 0.75f, 0f, 0f, 90f, 2, 1);
	}
	else if (__LIB_4__::func_475(&iLocal_1216) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1216, false, false))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_980[iVar0 /*18*/]) != joaat("REL_PLAYER_ALLY"))
			{
				Local_980[iVar0 /*18*/] = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_1216, iVar0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_980[iVar0 /*18*/], joaat("REL_PLAYER_ALLY"));
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

bool func_1251(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_709[iVar1 /*18*/]))
		{
			switch (iVar1)
			{
				case 2:
					vVar4 = { 2621.119f, -1417.653f, 45.4384f };
					iVar2 = iLocal_474;
					iVar3 = -1028993974;
					break;
				case 3:
					vVar4 = { 2621.119f, -1417.653f, 45.4384f };
					iVar2 = iLocal_474;
					iVar3 = 1696207146;
					break;
				case 4:
					vVar4 = { 2555.575f, -1466.246f, 45.2951f };
					iVar2 = iLocal_476;
					break;
			}
			Local_709[iVar1 /*18*/] = __LIB_1__::func_545(iVar2, vVar4, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (iVar1 != 4)
			{
				PED::_SET_PED_BODY_COMPONENT(Local_709[iVar1 /*18*/], iVar3);
				PED::_UPDATE_PED_VARIATION(Local_709[iVar1 /*18*/], false, true, true, true, false);
			}
			if (iVar1 == 2)
			{
				__LIB_9__::func_42(cParam0, Local_709[2 /*18*/], "MRY3_DRIVER1", 0);
			}
			else if (iVar1 == 3)
			{
				__LIB_9__::func_42(cParam0, Local_709[3 /*18*/], "MRY3_DRIVER2", 0);
			}
			PED::SET_PED_CONFIG_FLAG(Local_709[iVar1 /*18*/], 37, true);
			PED::SET_PED_CONFIG_FLAG(Local_709[iVar1 /*18*/], 180, true);
			PED::SET_PED_CONFIG_FLAG(Local_709[iVar1 /*18*/], 6, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_709[iVar1 /*18*/], joaat("REL_PLAYER_ALLY"));
			__LIB_1__::func_991(Local_709[iVar1 /*18*/], 0);
			PED::SET_PED_CONFIG_FLAG(Local_709[iVar1 /*18*/], 6, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_709[iVar1 /*18*/], true);
			Local_709[iVar1 /*18*/].f_13 = 1;
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1256()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1217))
	{
		iLocal_1217 = VEHICLE::CREATE_VEHICLE(iLocal_481, func_868(13, 0), func_869(13, 0), true, true, false, false);
		return false;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_709[12 /*18*/]))
		{
			Local_709[12 /*18*/] = __LIB_1__::func_545(iLocal_478, 2177.356f, -1382.305f, 39.8501f, 293.1471f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			__LIB_4__::func_185(&(Local_709[12 /*18*/]), &iLocal_1217, -1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_709[13 /*18*/]))
		{
			Local_709[13 /*18*/] = __LIB_1__::func_545(iLocal_478, 2177.356f, -1382.305f, 39.8501f, 293.1471f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			__LIB_4__::func_185(&(Local_709[13 /*18*/]), &iLocal_1217, 0, 1);
		}
	}
	return true;
}

void func_1257(int iParam0)
{
	if (func_378(iParam0))
	{
		__LIB_1__::func_681(&iLocal_483, iParam0);
	}
}

void func_1258(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			func_1271(cParam0, "MRY3_OBJ_CATCHUP", 2625.3f, -1420.164f, 45.4558f);
			__LIB_2__::func_259(&uLocal_1136);
			if (!__LIB_5__::func_352("MRY3_OBJ_CATCHUP"))
			{
				__LIB_11__::func_231(cParam0, "MRY3_OBJ_CATCHUP", 5, 0, 0);
			}
			__LIB_9__::func_195(cParam0, 2);
			break;
		case 2:
			if (__LIB_0__::func_665(Global_35, Local_530[0 /*178*/], 1, 1) <= 10f)
			{
				if (!__LIB_0__::func_899(&uLocal_1127))
				{
					__LIB_4__::func_89(&uLocal_1127, 0);
				}
				else if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[0 /*31*/], "s_Loop_01", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_38[0 /*31*/], "s_Loop_02", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_38[0 /*31*/], "s_Loop_02", 1))
				{
					if (__LIB_1__::func_583(&uLocal_1127) >= 5f)
					{
						if (__LIB_8__::func_711(cParam0, "MRY3_IDLE_1", 0))
						{
							__LIB_2__::func_259(&uLocal_1127);
						}
					}
				}
				else
				{
					__LIB_2__::func_259(&uLocal_1127);
				}
			}
			else
			{
				if (__LIB_0__::func_899(&uLocal_1127))
				{
					__LIB_1__::func_561(&uLocal_1127);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(Global_35, 2610.099f, -1419.531f, 45.267f, 1f, 1f, 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(Global_35, 2635.751f, -1418.39f, 45.3884f, 1f, 1f, 3f, false, true, 0))
				{
					func_1206(4);
					__LIB_9__::func_195(cParam0, 3);
				}
			}
			break;
		case 3:
			func_1271(cParam0, "MRY3_OBJ_STOP", ENTITY::GET_ENTITY_COORDS(Local_709[1 /*18*/], true, false));
			__LIB_2__::func_259(&uLocal_1136);
			__LIB_9__::func_195(cParam0, -1);
			break;
		case 51:
			break;
	}
}

void func_1259()
{
	switch (iLocal_24)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[0 /*31*/]))
			{
				func_1665(0);
				iLocal_24 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[0 /*31*/]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[0 /*31*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_38[0 /*31*/]);
				}
				else
				{
					iLocal_24 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_439(Local_38[0 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[0 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[0 /*31*/]);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1217))
			{
				if (__LIB_0__::func_665(iLocal_1217, Global_35, 1, 1) <= 250f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[0 /*31*/]))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[0 /*31*/]);
					}
				}
			}
			break;
	}
}

void func_1260()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	if (PED::WAS_PED_SKELETON_UPDATED(Global_35))
	{
		vVar4 = { PED::GET_PED_BONE_COORDS(Global_35, 0, 0f, 0f, 0f) };
	}
	if (__LIB_0__::func_899(&uLocal_1166) && __LIB_1__::func_583(&uLocal_1166) >= 6f)
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_38[2 /*31*/].f_3[iVar0] == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 3)
	{
		bVar3 = true;
	}
	if (bVar2 && !bVar3)
	{
		if (iLocal_490 == -1)
		{
			iLocal_490 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		else
		{
			iLocal_490 = __LIB_9__::func_844(0, 3, iLocal_490);
		}
		if (!Local_38[2 /*31*/].f_14[iLocal_490])
		{
			if (iLocal_490 == 0)
			{
				if (iLocal_27 == 1)
				{
					sLocal_529 = func_409(12);
				}
				else if (iLocal_27 == 2)
				{
					sLocal_529 = func_409(13);
				}
			}
			else if (iLocal_490 == 1)
			{
				if (iLocal_27 == 1)
				{
					sLocal_529 = func_409(14);
				}
				else if (iLocal_27 == 2)
				{
					sLocal_529 = func_409(15);
				}
			}
			else if (iLocal_490 == 2)
			{
				if (iLocal_27 == 1)
				{
					sLocal_529 = func_409(16);
				}
				else if (iLocal_27 == 2)
				{
					sLocal_529 = func_409(17);
				}
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[2 /*31*/], false) && !ANIMSCENE::_0x0DF57F86FE71DBE5(Local_38[2 /*31*/], sLocal_529)) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_38[2 /*31*/], sLocal_529))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[2 /*31*/], sLocal_529);
			}
			Local_38[2 /*31*/].f_14[iLocal_490] = 1;
			__LIB_1__::func_561(&uLocal_1166);
			iLocal_27 = 3;
		}
	}
	switch (iLocal_27)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[2 /*31*/]))
			{
				func_1665(2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_38[2 /*31*/], iLocal_1216, 12);
				iLocal_27 = 5;
			}
			break;
		case 5:
			if (PED::IS_PED_IN_VEHICLE(Local_709[1 /*18*/], iLocal_1216, false))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[2 /*31*/]))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[2 /*31*/], false))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_38[2 /*31*/]);
					}
					else
					{
						iLocal_27 = 6;
					}
				}
			}
			break;
		case 6:
			if (TASK::_0x9420FB11B8D77948(Global_35) == 1 || TASK::_0x9420FB11B8D77948(Global_35) == 2)
			{
				if (__LIB_2__::func_157(iLocal_1223[33], vVar4))
				{
					func_1704(2, 10);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_38[2 /*31*/], "bJumpLeft", true, false);
					iLocal_27 = 1;
				}
				if (__LIB_2__::func_157(iLocal_1223[34], vVar4))
				{
					func_1704(2, 11);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_38[2 /*31*/], "bJumpRight", true, false);
					iLocal_27 = 2;
				}
			}
			break;
		case 1:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[2 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[2 /*31*/], false)) && ANIMSCENE::_0x8D81E7824B7753F7(Local_38[2 /*31*/], "s_panic_base_loop_R", 1))
			{
				if (!__LIB_0__::func_899(&uLocal_1166))
				{
					__LIB_4__::func_89(&uLocal_1166, 0);
				}
			}
			if (__LIB_3__::func_330(Global_35, iLocal_1216, 1))
			{
				if (__LIB_2__::func_157(iLocal_1223[34], vVar4))
				{
					func_1704(2, 11);
					func_1270(2, 10);
					iLocal_27 = 2;
				}
			}
			break;
		case 2:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[2 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[2 /*31*/], false)) && ANIMSCENE::_0x8D81E7824B7753F7(Local_38[2 /*31*/], "s_panic_base_loop_L", 1))
			{
				if (!__LIB_0__::func_899(&uLocal_1166))
				{
					__LIB_4__::func_89(&uLocal_1166, 0);
				}
			}
			if (__LIB_3__::func_330(Global_35, iLocal_1216, 1))
			{
				if (__LIB_2__::func_157(iLocal_1223[33], vVar4))
				{
					func_1704(2, 10);
					func_1270(2, 11);
					iLocal_27 = 1;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[2 /*31*/], false))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_38[2 /*31*/], sLocal_529))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_38[2 /*31*/], sLocal_529))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[2 /*31*/], sLocal_529, true);
						iLocal_27 = 4;
					}
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[2 /*31*/], "s_panic_base_loop_L", 1))
			{
				if (!__LIB_0__::func_899(&uLocal_1166))
				{
					__LIB_4__::func_89(&uLocal_1166, 0);
					iLocal_27 = 2;
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[2 /*31*/], "s_panic_base_loop_R", 1))
			{
				if (!__LIB_0__::func_899(&uLocal_1166))
				{
					__LIB_4__::func_89(&uLocal_1166, 0);
					iLocal_27 = 1;
				}
			}
			break;
		case 7:
			break;
	}
}

void func_1261(char[4] cParam0)
{
	switch (Local_709[1 /*18*/].f_2)
	{
		case 2:
			if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_486))
			{
				if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_486) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[1 /*18*/], 17))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_1213))
					{
						MAP::REMOVE_BLIP(&iLocal_1213);
					}
					if (!MAP::DOES_BLIP_EXIST(Local_709[1 /*18*/].f_1))
					{
						Local_709[1 /*18*/].f_1 = __LIB_8__::func_778(408396114, Local_709[1 /*18*/], 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_709[1 /*18*/].f_1, "MRY3_BLIP_BUYER");
					}
					if (!__LIB_0__::func_163(Local_709[4 /*18*/], 658540077))
					{
						if (Global_43838 == 1)
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_709[4 /*18*/], "mary3_amb_wagon_right", 0, 9740, -1, 0, 0, -1);
						}
						else if (Global_43838 == 2)
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_709[4 /*18*/], "mary3_amb_wagon_left", 0, 9740, -1, 0, 0, -1);
						}
					}
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_GAMEPLAY_PED_HINT(Local_709[1 /*18*/], 0f, 0f, 0f, true, 3000, 2000, 2000);
					}
					else
					{
						__LIB_0__::func_19(&(Local_709[1 /*18*/].f_2), 4);
					}
				}
			}
			break;
		case 4:
			break;
		case 9:
			break;
	}
}

void func_1262()
{
	if (!__LIB_11__::func_97(8))
	{
		if (!__LIB_11__::func_97(2))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_1223[25], 1, 0))
			{
				func_772(Local_709[6 /*18*/], Local_709[6 /*18*/].f_5, Local_709[6 /*18*/].f_5.f_3, 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[7 /*18*/], Local_709[7 /*18*/].f_5, Local_709[7 /*18*/].f_5.f_3, 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[8 /*18*/], Local_709[8 /*18*/].f_5, Local_709[8 /*18*/].f_5.f_3, 2, 1073741824 /* Float: 2f */);
				func_379(iLocal_1216, func_215(5, 0), 2, 1073741824 /* Float: 2f */);
				func_379(Local_709[1 /*18*/], func_215(4, 0), 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[10 /*18*/], Local_709[10 /*18*/].f_5, Local_709[10 /*18*/].f_5.f_3, 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[11 /*18*/], Local_709[11 /*18*/].f_5, Local_709[11 /*18*/].f_5.f_3, 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[11 /*18*/], Local_709[11 /*18*/].f_5, Local_709[11 /*18*/].f_5.f_3, 2, 1073741824 /* Float: 2f */);
				GRAPHICS::SET_TRACKED_POINT_INFO(Local_709[6 /*18*/].f_16, ENTITY::GET_ENTITY_COORDS(Local_709[6 /*18*/], true, false), 1f);
				GRAPHICS::SET_TRACKED_POINT_INFO(Local_709[7 /*18*/].f_16, ENTITY::GET_ENTITY_COORDS(Local_709[7 /*18*/], true, false), 1f);
				GRAPHICS::SET_TRACKED_POINT_INFO(Local_709[8 /*18*/].f_16, ENTITY::GET_ENTITY_COORDS(Local_709[8 /*18*/], true, false), 1f);
				GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_486, ENTITY::GET_ENTITY_COORDS(Local_709[1 /*18*/], true, false), 1f);
				if (Local_709[9 /*18*/].f_16 == 0)
				{
					Local_709[9 /*18*/].f_16 = GRAPHICS::CREATE_TRACKED_POINT();
				}
				else
				{
					GRAPHICS::SET_TRACKED_POINT_INFO(Local_709[9 /*18*/].f_16, ENTITY::GET_ENTITY_COORDS(Local_709[9 /*18*/], true, false), 1f);
				}
				PED::_0xCAC43D060099EA72(Local_709[9 /*18*/]);
				ENTITY::SET_ENTITY_VISIBLE(Local_709[9 /*18*/], false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_709[9 /*18*/], true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_709[9 /*18*/], false, false);
				PED::SET_PED_CONFIG_FLAG(Local_709[9 /*18*/], 471, true);
				PED::SET_PED_CONFIG_FLAG(Local_709[9 /*18*/], 324, true);
				PED::_0xCAC43D060099EA72(Local_709[8 /*18*/]);
				ENTITY::SET_ENTITY_VISIBLE(Local_709[8 /*18*/], false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_709[8 /*18*/], true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_709[8 /*18*/], false, false);
				PED::SET_PED_CONFIG_FLAG(Local_709[8 /*18*/], 471, true);
				PED::SET_PED_CONFIG_FLAG(Local_709[8 /*18*/], 324, true);
				Global_43838 = 1;
				func_1232(2);
				func_1284(4);
			}
		}
		if (!__LIB_11__::func_97(4))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_1223[26], 1, 0))
			{
				func_772(Local_709[6 /*18*/], Local_709[6 /*18*/].f_9, Local_709[6 /*18*/].f_9.f_3, 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[7 /*18*/], Local_709[7 /*18*/].f_9, Local_709[7 /*18*/].f_9.f_3, 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[8 /*18*/], Local_709[8 /*18*/].f_9, Local_709[8 /*18*/].f_9.f_3, 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[9 /*18*/], Local_709[9 /*18*/].f_9, Local_709[9 /*18*/].f_9.f_3, 2, 1073741824 /* Float: 2f */);
				func_379(iLocal_1216, func_215(5, 3), 2, 1073741824 /* Float: 2f */);
				func_379(Local_709[1 /*18*/], func_215(4, 1), 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[10 /*18*/], Local_709[10 /*18*/].f_9, Local_709[10 /*18*/].f_9.f_3, 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[11 /*18*/], Local_709[11 /*18*/].f_9, Local_709[11 /*18*/].f_9.f_3, 2, 1073741824 /* Float: 2f */);
				func_772(Local_709[11 /*18*/], Local_709[11 /*18*/].f_9, Local_709[11 /*18*/].f_9.f_3, 2, 1073741824 /* Float: 2f */);
				GRAPHICS::SET_TRACKED_POINT_INFO(Local_709[6 /*18*/].f_16, ENTITY::GET_ENTITY_COORDS(Local_709[6 /*18*/], true, false), 1f);
				GRAPHICS::SET_TRACKED_POINT_INFO(Local_709[7 /*18*/].f_16, ENTITY::GET_ENTITY_COORDS(Local_709[7 /*18*/], true, false), 1f);
				GRAPHICS::SET_TRACKED_POINT_INFO(Local_709[8 /*18*/].f_16, ENTITY::GET_ENTITY_COORDS(Local_709[8 /*18*/], true, false), 1f);
				GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_486, ENTITY::GET_ENTITY_COORDS(Local_709[1 /*18*/], true, false), 1f);
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(Local_709[9 /*18*/].f_16))
				{
					GRAPHICS::DESTROY_TRACKED_POINT(Local_709[9 /*18*/].f_16);
				}
				PED::_0xC9151483CC06A414(Local_709[9 /*18*/]);
				ENTITY::SET_ENTITY_VISIBLE(Local_709[9 /*18*/], true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_709[9 /*18*/], false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_709[9 /*18*/], true, false);
				PED::SET_PED_CONFIG_FLAG(Local_709[9 /*18*/], 471, false);
				PED::SET_PED_CONFIG_FLAG(Local_709[9 /*18*/], 324, false);
				PED::_0xCAC43D060099EA72(Local_709[8 /*18*/]);
				ENTITY::SET_ENTITY_VISIBLE(Local_709[8 /*18*/], false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_709[8 /*18*/], true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_709[8 /*18*/], false, false);
				PED::SET_PED_CONFIG_FLAG(Local_709[8 /*18*/], 471, true);
				PED::SET_PED_CONFIG_FLAG(Local_709[8 /*18*/], 324, true);
				Global_43838 = 2;
				func_1232(4);
				func_1284(2);
			}
		}
	}
	else if (__LIB_11__::func_97(2))
	{
		if (Global_43838 != 1)
		{
			Global_43838 = 1;
		}
	}
	else if (__LIB_11__::func_97(4))
	{
		if (Global_43838 != 2)
		{
			Global_43838 = 2;
		}
	}
}

void func_1264(char[4] cParam0)
{
	int iVar0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("mary3_wagon_chase_left", ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0);
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			func_1271(cParam0, "MRY3_OBJ_CHASE", ENTITY::GET_ENTITY_COORDS(iLocal_1216, true, false));
			__LIB_9__::func_208(cParam0, "MRY3_OBJ_CHASE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (__LIB_0__::func_899(&uLocal_1136))
			{
				__LIB_2__::func_259(&uLocal_1136);
			}
			__LIB_9__::func_195(cParam0, 1);
			break;
		case 1:
			if (__LIB_8__::func_711(cParam0, "MRY3_CHASE", 0))
			{
				__LIB_9__::func_195(cParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_5__::func_463())
			{
				if (iVar0 >= 29)
				{
					if (!func_1193(8))
					{
						if (__LIB_0__::func_665(Global_35, iLocal_1216, 1, 1) <= 40f)
						{
							__LIB_11__::func_99(cParam0, "MRY3_CATCH_UP", 0, 0);
							func_1206(8);
						}
					}
				}
				if (iVar0 >= 110)
				{
					if (!func_1193(16))
					{
						if (__LIB_0__::func_665(Global_35, iLocal_1216, 1, 1) <= 25f)
						{
							__LIB_11__::func_99(cParam0, "MRY3_CATCH_UP", 2, 0);
							func_1206(16);
						}
					}
				}
				if (iVar0 >= 214)
				{
					if (!func_1193(32))
					{
						if (__LIB_0__::func_665(Global_35, iLocal_1216, 1, 1) <= 15f)
						{
							__LIB_11__::func_99(cParam0, "MRY3_CATCH_UP", 5, 0);
							func_1206(32);
						}
					}
				}
				if (iVar0 == 10)
				{
					if (!func_1193(64))
					{
						__LIB_11__::func_99(cParam0, "MRY3_CATCH_UP", 1, 0);
						func_1206(64);
					}
				}
				else if (iVar0 == 45)
				{
					if (!func_1193(128))
					{
						__LIB_11__::func_99(cParam0, "MRY3_CATCH_UP", 3, 0);
						func_1206(128);
					}
				}
				else if (iVar0 == 70)
				{
					if (!func_1193(256))
					{
						__LIB_11__::func_99(cParam0, "MRY3_CATCH_UP", 4, 0);
						func_1206(256);
					}
				}
			}
			if (__LIB_0__::func_665(Global_35, iLocal_1216, 1, 1) <= 5f)
			{
				func_1271(cParam0, "MRY3_OBJ_JUMP", ENTITY::GET_ENTITY_COORDS(iLocal_1216, true, false));
				if (__LIB_11__::func_231(cParam0, "MRY3_OBJ_JUMP", 4, 0, 0))
				{
					__LIB_2__::func_259(&uLocal_1136);
					__LIB_2__::func_259(&uLocal_1133);
					__LIB_9__::func_195(cParam0, 3);
				}
			}
			break;
		case 3:
			if (PED::GET_VEHICLE_PED_IS_USING(Global_35) != iLocal_1216)
			{
				if (__LIB_0__::func_899(&uLocal_1133))
				{
					if (__LIB_9__::func_178(&uLocal_1133) >= 5f)
					{
						if (!__LIB_0__::func_30(iLocal_1367))
						{
							iLocal_1367 = __LIB_0__::func_45("MRY3_JUMP_HELP", 10000, 0, 0, 0, 1);
							__LIB_2__::func_259(&uLocal_1133);
							__LIB_9__::func_195(cParam0, -1);
						}
					}
				}
			}
			break;
		case 51:
			break;
	}
}

void func_1266()
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar3 = 22f;
	if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1216))
	{
		fVar2 = 2f;
	}
	else if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_1216) <= 9)
	{
		fVar2 = 10f;
	}
	else if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_1216) >= 799)
	{
		fVar2 = 13f;
	}
	else if (__LIB_0__::func_665(Global_35, iLocal_1216, 1, 1) <= 50f)
	{
		fVar2 = 11.7f;
	}
	else if (__LIB_0__::func_665(Global_35, iLocal_1216, 1, 1) >= 100f)
	{
		fVar2 = 6f;
	}
	else
	{
		fVar2 = 8f;
	}
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("mary3_wagon_chase_left", &uVar0);
	fLocal_493 = __LIB_0__::func_665(iLocal_1216, Global_35, 1, 1);
	fVar1 = (1f - (BUILTIN::TO_FLOAT(TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_1216)) / 281f));
	if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_1216) >= 231)
	{
		fLocal_496 = 3f;
	}
	else
	{
		fLocal_496 = (30f * fVar1);
	}
	if (fLocal_496 <= 3f)
	{
		fLocal_496 = 3f;
	}
	fLocal_494 = (fLocal_496 / fLocal_493);
	fLocal_495 = (15f * fLocal_494);
	if (fLocal_495 < fVar2)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1216, fVar2);
	}
	else if (fLocal_495 > fVar3)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1216, fVar3);
	}
	else
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1216, fLocal_495);
	}
}

int func_1270(int iParam0, int iParam1)
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[iParam0 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[iParam0 /*31*/], false)) && !ANIMSCENE::_0x1F0E401031E20146(Local_38[iParam0 /*31*/], func_409(iParam1)))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_38[iParam0 /*31*/], func_409(iParam1)))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[iParam0 /*31*/], func_409(iParam1), true);
			return 1;
		}
	}
	return 0;
}

void func_1271(char[4] cParam0, char* sParam1, vector3 vParam2)
{
	if (!__LIB_1__::func_588(sParam1, 0, 0, -1, -1, 0))
	{
		__LIB_9__::func_142(cParam0, sParam1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		vLocal_513 = { vParam2 };
		fLocal_497 = MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_513, Global_36, true);
	}
}

void func_1277()
{
	StringCopy(&Local_1105, "camera_treatments", 64);
	StringCopy(&(Local_1105.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&Local_1105);
}

bool func_1279()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1218))
	{
		iLocal_1218 = VEHICLE::_CREATE_MISSION_TRAIN(-1083616881, 2738.975f, -1414.386f, 45.03957f, false, false, true, true);
		return false;
	}
	return true;
}

void func_1280(char[4] cParam0)
{
	bool bVar0;
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			func_1271(cParam0, "MRY3_OBJ_DRIVE", 1804.312f, -1728.799f, 46.5772f);
			if (!PED::IS_PED_IN_VEHICLE(Local_709[3 /*18*/], iLocal_1216, false))
			{
				__LIB_2__::func_259(&uLocal_1136);
				__LIB_11__::func_231(cParam0, "MRY3_OBJ_DRIVE", 5, 0, 0);
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 2:
			func_1271(cParam0, "MRY3_OBJ_WAGON", ENTITY::GET_ENTITY_COORDS(iLocal_1216, true, false));
			if (__LIB_11__::func_231(cParam0, "MRY3_OBJ_WAGON", 5, 0, 0))
			{
				__LIB_9__::func_195(cParam0, 3);
			}
			break;
		case 3:
			break;
		case 4:
			func_1271(cParam0, "MRY3_BROOCH", ENTITY::GET_ENTITY_COORDS(Local_709[1 /*18*/], true, false));
			__LIB_2__::func_259(&uLocal_1136);
			if (__LIB_11__::func_231(cParam0, "MRY3_BROOCH", 5, 0, 0))
			{
				__LIB_9__::func_195(cParam0, 4);
			}
			break;
		case 5:
			if (!func_378(16384))
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_THREATEN", 0))
				{
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			else
			{
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 6:
			if (__LIB_1__::func_707(joaat("PROVISION_MARYS_BROOCH"), 1, 0))
			{
				bVar0 = true;
			}
			if (iLocal_34 == 6)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[12 /*31*/], false))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_38[12 /*31*/], func_409(44)))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_38[12 /*31*/]) >= 0.5833333f)
						{
							bVar0 = true;
							func_310(joaat("PROVISION_MARYS_BROOCH"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
							__LIB_11__::func_799(Local_709[1 /*18*/], joaat("PROVISION_MARYS_BROOCH"), 1);
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(Local_38[12 /*31*/], func_409(46)))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_38[12 /*31*/]) >= 0.5724138f)
						{
							bVar0 = true;
							func_310(joaat("PROVISION_MARYS_BROOCH"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
							__LIB_11__::func_799(Local_709[1 /*18*/], joaat("PROVISION_MARYS_BROOCH"), 1);
						}
					}
				}
			}
			if (bVar0)
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_1209))
				{
					iLocal_1209 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_530[0 /*178*/]);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1209, "MRY3_BLIP_MARY");
				}
				__LIB_3__::func_356(Local_530[0 /*178*/], -401963276, 1);
				func_1271(cParam0, "MRY3_RETURN", ENTITY::GET_ENTITY_COORDS(Local_530[0 /*178*/], true, false));
				if (MAP::DOES_BLIP_EXIST(Local_709[1 /*18*/].f_1))
				{
					MAP::REMOVE_BLIP(&(Local_709[1 /*18*/].f_1));
				}
				if (__LIB_11__::func_231(cParam0, "MRY3_RETURN", 5, 0, 0))
				{
					__LIB_2__::func_259(&uLocal_1136);
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 7:
			if (__LIB_1__::func_583(&uLocal_1133) >= 10f)
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_8__::func_711(cParam0, "MRY3_PANIC_V2", 0);
					__LIB_2__::func_259(&uLocal_1133);
				}
			}
			break;
		case 8:
			if (!AUDIO::_0x54B187F111D9C6F8(Local_709[1 /*18*/], 1))
			{
				__LIB_8__::func_711(cParam0, "MRY3_BUY1", 0);
				__LIB_2__::func_259(&uLocal_1133);
				__LIB_9__::func_195(cParam0, 9);
			}
			break;
		case 9:
			if (!__LIB_8__::func_684("MRY3_BUY1"))
			{
				if (!func_1193(512))
				{
					func_1206(512);
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 11:
			if (!__LIB_5__::func_463() && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_709[1 /*18*/]))
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_BUY2", 0))
				{
					func_1206(1024);
					__LIB_2__::func_259(&uLocal_1133);
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 12:
			if (!__LIB_5__::func_463() && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_709[1 /*18*/]))
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_BUY3", 0))
				{
					func_1206(2048);
					__LIB_2__::func_259(&uLocal_1133);
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
	}
}

bool func_1281(char[4] cParam0)
{
	if (__LIB_11__::func_97(33554432))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (iLocal_37 >= 3 && iLocal_37 < 7)
	{
		CAM::_0x702B75DC9D3EDE56(true);
		if (__LIB_11__::func_97(8388608))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1219, 0))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1219, 6f);
			}
		}
		if (__LIB_11__::func_97(16777216))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 2f, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
	switch (iLocal_37)
	{
		case 0:
			CAM::_0x1B3C2D961F5FC0E1("script@Story@Mary3@return_to_saintdenis");
			STREAMING::PREFETCH_SRL("script@cme@MRY3_CME_Bayou_srl");
			STREAMING::_0xAE00387E53B1E9FC();
			iLocal_37 = 1;
			break;
		case 1:
			break;
		case 2:
			if (CAM::_0xDD0B7C5AE58F721D("script@Story@Mary3@return_to_saintdenis"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				iLocal_37 = 3;
			}
			break;
		case 3:
			if (STREAMING::IS_SRL_LOADED() && ENTITY::_0x6BFBDC46139C45AB(2077.499f, -1034.204f, 42.53389f))
			{
				CAM::_0xBC016635D6A73B31("script@Story@Mary3@return_to_saintdenis", "3_BayouRoad_1", 5);
				AUDIO::_0x5E3CCF03995388B5(-205522369, 2077.499f, -1034.204f, 42.53389f);
				if (__LIB_11__::func_97(16777216))
				{
					func_772(iLocal_1207, 2077.499f, -1034.204f, 42.53389f, 153.3f, 2, 1073741824 /* Float: 2f */);
					PED::FORCE_PED_MOTION_STATE(iLocal_1207, joaat("MOTIONSTATE_RUN"), false, 0, false);
					PED::_0x2208438012482A1A(iLocal_1207, false, false);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, "mary3_cme_to_denis", 0, 9480, -1, 0, 0, -1);
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 2f, 0, -1082130432 /* Float: -1f */, 0);
				}
				if (__LIB_11__::func_97(8388608))
				{
					func_772(iLocal_1219, 2077.499f, -1034.204f, 42.53389f, 153.3f, 0, 1073741824 /* Float: 2f */);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1219, 6f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_35, iLocal_1219, "mary3_cme_to_denis", 524295, 0, 9224, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1219, 6f);
				}
				if (!__LIB_0__::func_899(&uLocal_1154))
				{
					__LIB_4__::func_89(&uLocal_1154, 0);
				}
				else
				{
					__LIB_2__::func_259(&uLocal_1154);
				}
				bLocal_500 = true;
				iLocal_37 = 4;
			}
			break;
		case 4:
			if (__LIB_11__::func_97(16777216))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 2f, 0, -1082130432 /* Float: -1f */, 0);
			}
			if (__LIB_11__::func_97(8388608))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1219, 6f);
			}
			if (bLocal_500)
			{
				STREAMING::END_SRL();
				STREAMING::PREFETCH_SRL("script@cme@MRY3_CME_StDenis_srl");
				STREAMING::_0xAE00387E53B1E9FC();
				bLocal_500 = false;
			}
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7("script@Story@Mary3@return_to_saintdenis", "3_BayouRoad_1", 5) - __LIB_9__::func_401(&uLocal_1154)), -514203335, 2279.801f, -1370.593f, 44.38634f, STREAMING::IS_SRL_LOADED(), (CAM::_0x465F04F68AD38197("script@Story@Mary3@return_to_saintdenis", "3_BayouRoad_1", 5) - __LIB_9__::func_401(&uLocal_1154))))
			{
				iLocal_37 = 5;
			}
			break;
		case 5:
			CAM::_0xBC016635D6A73B31("script@Story@Mary3@return_to_saintdenis", "2_StDenisBridge_1", 5);
			if (__LIB_11__::func_97(16777216))
			{
				func_772(iLocal_1207, 2279.801f, -1370.593f, 44.38634f, -108.8f, 0, 1073741824 /* Float: 2f */);
				PED::FORCE_PED_MOTION_STATE(iLocal_1207, joaat("MOTIONSTATE_RUN"), false, 0, false);
				PED::_0x2208438012482A1A(iLocal_1207, false, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, "mary3_cme_to_denis", 0, 9480, -1, 0, 0, -1);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 2f, 0, -1082130432 /* Float: -1f */, 0);
			}
			if (__LIB_11__::func_97(8388608))
			{
				func_772(iLocal_1219, 2279.801f, -1370.593f, 44.38634f, -108.8f, 0, 1073741824 /* Float: 2f */);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1219, 6f);
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_35, iLocal_1219, "mary3_cme_to_denis", 524295, 0, 9224, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1219, 6f);
			}
			__LIB_2__::func_259(&uLocal_1154);
			bLocal_500 = true;
			iLocal_37 = 6;
			break;
		case 6:
			if (__LIB_11__::func_97(16777216))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 2f, 0, -1082130432 /* Float: -1f */, 0);
			}
			if (__LIB_11__::func_97(8388608))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1219, 6f);
			}
			if (bLocal_500)
			{
				STREAMING::END_SRL();
				bLocal_500 = false;
			}
			else if (!__LIB_6__::func_862(cParam0, 33554432))
			{
				__LIB_6__::func_868(cParam0, 33554432);
			}
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7("script@Story@Mary3@return_to_saintdenis", "2_StDenisBridge_1", 5) - __LIB_9__::func_401(&uLocal_1154)), 0, 2279.801f, -1370.593f, 44.38634f, true, (CAM::_0x465F04F68AD38197("script@Story@Mary3@return_to_saintdenis", "2_StDenisBridge_1", 5) - __LIB_9__::func_401(&uLocal_1154))))
			{
				iLocal_37 = 7;
			}
			break;
		case 7:
			AUDIO::_0x43037ABFE214A851();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			return true;
	}
	return false;
}

void func_1282()
{
	switch (iLocal_33)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[11 /*31*/]))
			{
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_38[11 /*31*/], iLocal_1216, 12);
				func_1665(11);
				iLocal_33 = 1;
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[11 /*31*/], false))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[10 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[10 /*31*/], false))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[10 /*31*/]);
				}
			}
			if (__LIB_3__::func_439(Local_38[11 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[11 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[11 /*31*/]);
					iLocal_33 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1283(char[4] cParam0)
{
	switch (iLocal_34)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[12 /*31*/]))
			{
				func_1665(12);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[12 /*31*/], func_409(46));
				iLocal_34 = 1;
			}
			break;
		case 1:
			if (bLocal_502)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[12 /*31*/]))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[12 /*31*/], false))
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_38[12 /*31*/], ENTITY::GET_ENTITY_COORDS(Local_709[1 /*18*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_709[1 /*18*/], 2), 2);
						iLocal_34 = 2;
					}
				}
			}
			else if (bLocal_503)
			{
				if (__LIB_0__::func_665(Global_35, Local_709[1 /*18*/], 1, 1) >= 2f)
				{
					iLocal_34 = 4;
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_38[12 /*31*/], ENTITY::GET_ENTITY_COORDS(Local_709[1 /*18*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_709[1 /*18*/], 2), 2);
					iLocal_34 = 2;
				}
			}
			break;
		case 2:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_38[12 /*31*/], "player_zero", func_409(43), 1.48f, 1, 0, 20000, -1082130432 /* Float: -1f */);
				iLocal_34 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[12 /*31*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[12 /*31*/], false))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					__LIB_9__::func_195(cParam0, 6);
					func_1206(2097152);
					iLocal_34 = 6;
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[12 /*31*/]))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_38[12 /*31*/], func_409(46)))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[12 /*31*/], false))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[12 /*31*/], func_409(46), true);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_38[12 /*31*/], ENTITY::GET_ENTITY_COORDS(Local_709[1 /*18*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_709[1 /*18*/], 2), 2);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
						ANIMSCENE::START_ANIM_SCENE(Local_38[12 /*31*/]);
						__LIB_9__::func_195(cParam0, 6);
					}
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[12 /*31*/], false))
				{
					func_1206(2097152);
					iLocal_34 = 6;
				}
			}
			break;
		case 6:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[12 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[12 /*31*/], false)) && ANIMSCENE::_0x1F0E401031E20146(Local_38[12 /*31*/], func_409(47)))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			if (__LIB_3__::func_439(Local_38[12 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[12 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[12 /*31*/]);
					iLocal_34 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1284(int iParam0)
{
	if (__LIB_11__::func_97(iParam0))
	{
		__LIB_1__::func_681(&iLocal_482, iParam0);
	}
}

void func_1290()
{
	int iVar0;
	switch (iLocal_488)
	{
		case 0:
			iVar0 = 10000;
			break;
		case 2:
			iVar0 = 5000;
			break;
		case 4:
			iVar0 = 2500;
			break;
	}
	if (__LIB_0__::func_492(1) >= iVar0)
	{
		bLocal_499 = true;
	}
	else
	{
		bLocal_499 = false;
	}
}

void func_1297(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			break;
		case 51:
			break;
	}
}

void func_1315()
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
			func_1734(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1735(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_1734(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1338(var uParam0, int iParam1, int iParam2)
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
		return func_1338(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1369(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
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
						__LIB_9__::func_203(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
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
				func_772(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			func_1753(iParam0, Global_1360165[iParam0 /*1157*/]);
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

void func_1370(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	__LIB_4__::func_787(iParam1, bParam3, bParam4, bParam6);
	if (!__LIB_6__::func_872(cParam0, 512))
	{
		if (__LIB_6__::func_872(cParam0, 4) && bParam4)
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 5f, 0f, 0f) };
			__LIB_1__::func_338(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1756(cParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
	__LIB_9__::func_141(cParam0, iParam1, 512);
	if (bParam5)
	{
		__LIB_9__::func_141(cParam0, iParam1, 128);
	}
	else
	{
		__LIB_9__::func_147(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1399(int iParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*iParam0, 8));
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*iParam0, 2) || __LIB_0__::func_1(*iParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*iParam0, 32))
	{
		func_611(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1796(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*iParam0 = 0;
}

bool func_1409(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_5__::func_378(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false))
				{
					__LIB_9__::func_199(uParam4, &cParam0, cParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
				{
					__LIB_8__::func_726(uParam4, 4);
					return false;
				}
				else
				{
					if (__LIB_4__::func_584(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					__LIB_8__::func_632(cParam5);
				}
				__LIB_8__::func_726(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (__LIB_8__::func_705(cParam5, __LIB_6__::func_864(cParam5), 262144))
				{
					if (!__LIB_0__::func_84(uParam4, 2097152))
					{
						__LIB_5__::func_69(uParam4);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_806)) && (!__LIB_6__::func_862(cParam5, 8) || __LIB_0__::func_84(uParam4, 134217728)))
				{
				}
				else
				{
					__LIB_5__::func_309(uParam4);
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
				__LIB_5__::func_350(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (__LIB_5__::func_577(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (__LIB_8__::func_587(cParam5) != 0 || (__LIB_6__::func_877(cParam5) == 1 && __LIB_8__::func_663(cParam5, __LIB_6__::func_864(cParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_9__::func_199(uParam4, &cParam0, cParam5);
						__LIB_8__::func_726(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_387(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_8__::func_632(cParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_5__::func_448(uParam4, 1))
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
				__LIB_5__::func_378(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_4__::func_585(uParam4) - __LIB_4__::func_586(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_4__::func_988(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_586(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_4__::func_989(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
				}
				func_1845(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_804);
						}
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_4__::func_586(uParam4) <= 5000) && __LIB_4__::func_586(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_1399(&(uParam4->f_861), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_4__::func_586(uParam4) >= 5000 && __LIB_4__::func_586(uParam4) <= (__LIB_4__::func_585(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_4__::func_989(uParam4))
			{
				func_1845(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_804))
					{
						return false;
					}
				}
				iVar0 = 1;
				if (__LIB_6__::func_877(cParam5) == 1 && __LIB_8__::func_663(cParam5, __LIB_6__::func_864(cParam5)) >= 3)
				{
					if (__LIB_8__::func_634(cParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_4__::func_584(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
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

void func_1416()
{
	Local_530[0 /*178*/].f_169 = 0;
}

void func_1421(var uParam0, char[4] cParam1)
{
	if (__LIB_8__::func_615(uParam0, "MRY3_INT"))
	{
		if (!func_1193(65536) && !func_1193(131072))
		{
			if (!__LIB_4__::func_813(&uLocal_1384))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam1->f_7375.f_804) && (ANIMSCENE::_0x8D81E7824B7753F7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1)))
				{
					func_1206(32768);
					if (!__LIB_0__::func_84(uParam0, 2))
					{
						__LIB_0__::func_88(uParam0, 2);
					}
					__LIB_10__::func_519(&uLocal_1384, "MRY3_CXT_HELP", "MRY3_CXT_DHELP", __LIB_0__::func_342(), 0, 23000, 1, -1, -1);
				}
			}
			else if (__LIB_14__::func_242(&uLocal_1384))
			{
				if (__LIB_4__::func_819(&uLocal_1384))
				{
					if (__LIB_8__::func_349(&uLocal_1384))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "Loop", true, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "Yes_is", true, false);
						}
						else
						{
							__LIB_11__::func_720(&uLocal_1384);
							__LIB_1__::func_715(13, 709690973, 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
							func_1206(65536);
							func_1195(32768);
							TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "MRY3_CXT_HELP");
							STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_LEND_HAND"), 1);
						}
					}
					else if (__LIB_8__::func_350(&uLocal_1384))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "Loop", true, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "Yes_is", false, false);
						}
						else
						{
							__LIB_11__::func_720(&uLocal_1384);
							func_1206(131072);
							func_1195(32768);
							__LIB_1__::func_532(Global_1835011[36 /*74*/].f_1, 1);
							TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "MRY3_CXT_DHELP");
							func_1206(131072);
						}
					}
				}
				else if (__LIB_8__::func_349(&uLocal_1384))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam1->f_7375.f_804, "Honor_is", true, false);
					}
					else
					{
						__LIB_11__::func_720(&uLocal_1384);
						func_1206(65536);
						func_1195(32768);
						TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "MRY3_CXT_HELP");
						STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_LEND_HAND"), 1);
					}
				}
				else if (__LIB_8__::func_350(&uLocal_1384))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam1->f_7375.f_804, "Honor_is", false, false);
					}
					else
					{
						__LIB_11__::func_720(&uLocal_1384);
						func_1206(131072);
						func_1195(32768);
						__LIB_1__::func_532(Global_1835011[36 /*74*/].f_1, 1);
						TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "MRY3_CXT_DHELP");
						func_1206(131072);
					}
				}
				if (__LIB_0__::func_84(uParam0, 512))
				{
					__LIB_4__::func_550(uParam0, 512, 1);
				}
				if (__LIB_0__::func_84(uParam0, 2))
				{
					__LIB_4__::func_550(uParam0, 2, 1);
				}
			}
		}
	}
	if (__LIB_8__::func_615(uParam0, "MRY3_EXT"))
	{
		if (!func_1193(65536) && !func_1193(131072))
		{
			if (!__LIB_4__::func_813(&uLocal_1384))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam1->f_7375.f_804) && ANIMSCENE::_0x1F0E401031E20146(uParam0->f_804, "2-Choice"))
				{
					if (!__LIB_0__::func_84(uParam0, 2))
					{
						__LIB_0__::func_88(uParam0, 2);
					}
					func_1206(32768);
					__LIB_10__::func_519(&uLocal_1384, "MRY3_CXT_YES", "MRY3_CXT_NO", __LIB_0__::func_342(), 0, 20000, 1, -1, -1);
				}
			}
			else if (__LIB_14__::func_242(&uLocal_1384))
			{
				if (__LIB_4__::func_819(&uLocal_1384))
				{
					if (__LIB_8__::func_349(&uLocal_1384))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_804, "2-Choice"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "bChoice", true, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "bBreakout", true, false);
						}
						else
						{
							__LIB_11__::func_720(&uLocal_1384);
							Global_1357515 = 0;
							TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "MRY3_CXT_YES");
							__LIB_8__::func_720(cParam1, joaat("MRY3_MARYTHEATER"));
							func_1206(65536);
							func_1195(32768);
						}
					}
					else if (__LIB_8__::func_350(&uLocal_1384))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_804, "2-Choice"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "bChoice", false, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "bBreakout", true, false);
						}
						else
						{
							__LIB_11__::func_720(&uLocal_1384);
							Global_1357515 = 1;
							TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "MRY3_CXT_NO");
							func_1206(131072);
							func_1195(32768);
							__LIB_8__::func_685(cParam1, __LIB_9__::func_40(cParam1), 2);
						}
					}
				}
				else if (__LIB_8__::func_349(&uLocal_1384))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_804, "2-Choice"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "bChoice", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "bBreakout", true, false);
					}
					else
					{
						__LIB_11__::func_720(&uLocal_1384);
						Global_1357515 = 0;
						TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "MRY3_CXT_YES");
						__LIB_8__::func_720(cParam1, joaat("MRY3_MARYTHEATER"));
						func_1206(65536);
						func_1195(32768);
					}
				}
				else if (__LIB_8__::func_350(&uLocal_1384))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_804, "2-Choice"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "bChoice", false, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_804, "bBreakout", true, false);
					}
					else
					{
						__LIB_11__::func_720(&uLocal_1384);
						Global_1357515 = 1;
						TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "MRY3_CXT_NO");
						func_1206(131072);
						func_1195(32768);
						__LIB_8__::func_685(cParam1, __LIB_9__::func_40(cParam1), 2);
					}
				}
				if (__LIB_0__::func_84(uParam0, 512))
				{
					__LIB_4__::func_550(uParam0, 512, 1);
				}
				if (__LIB_0__::func_84(uParam0, 2))
				{
					__LIB_4__::func_550(uParam0, 2, 1);
				}
			}
		}
	}
}

int func_1437(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (!bParam4)
	{
		iParam1 = func_1871(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = __LIB_8__::func_716(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_1873(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_1874(iParam0, iParam1, bParam2, iParam3);
}

void func_1438(char[4] cParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar1 = { 2582.681f, -1407.028f, 45.18142f };
	vVar4 = { 2613.832f, -1423.258f, 45.37554f };
	iVar0 = __LIB_6__::func_864(cParam0);
	if (__LIB_11__::func_97(128))
	{
		if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	}
	switch (iLocal_36)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_530[0 /*178*/]))
			{
				if (!__LIB_0__::func_272(Local_530[0 /*178*/], 0))
				{
					func_1875("MRY3_MARY_FAIL_1", 0);
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_530[0 /*178*/], Global_35, 1, 1))
			{
				func_380(524288);
				func_1875("MRY3_MATT_FAIL", 0);
			}
			if (__LIB_6__::func_864(cParam0) == 0 && __LIB_6__::func_889(cParam0) >= 1)
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_530[0 /*178*/], true, false), 30f))
				{
					func_380(524288);
					func_1875("MRY3_MATT_FAIL", 0);
				}
			}
			if (__LIB_11__::func_97(128) && (iVar0 == iLocal_17 || iVar0 == iLocal_18))
			{
				if (PED::IS_PED_FACING_PED(Local_709[0 /*18*/], Global_35, 80f))
				{
					if (!func_1193(262144))
					{
						if (!__LIB_8__::func_684("MRY3_FT_SHOOT") && !__LIB_8__::func_684("MRY3_SPOTTED"))
						{
							__LIB_5__::func_20(0, 0);
							if (__LIB_8__::func_711(cParam0, "MRY3_SPOTTED", 0))
							{
								__LIB_2__::func_259(&uLocal_1124);
								func_1206(262144);
							}
						}
					}
					else if (!__LIB_8__::func_684("MRY3_SPOTTED"))
					{
						func_1875("MRY3_FOLLOW_FAIL", 0);
					}
				}
			}
			if (!__LIB_11__::func_97(128))
			{
				if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_1875("MRY3_LAW_FAIL", 0);
				}
			}
			if (iVar0 == iLocal_16)
			{
				if (__LIB_0__::func_899(&uLocal_1178))
				{
					if (__LIB_1__::func_583(&uLocal_1178) >= 120f)
					{
						func_1875("MRY3_TIME_FAIL", 0);
					}
				}
				if (__LIB_0__::func_94(Global_35, vLocal_519, 1) >= 500f)
				{
					func_1875("MRY3_TIME_FAIL", 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_709[5 /*18*/]))
				{
					if (!__LIB_0__::func_272(Local_709[5 /*18*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_709[5 /*18*/], Global_35, 1, 1))
					{
						func_1875("MRY3_LAW_FAIL", 0);
					}
				}
				if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) == 5 && __LIB_0__::func_272(Local_530[0 /*178*/], 0))
				{
					if (__LIB_11__::func_109(cParam0, Local_530[0 /*178*/], "MRY3_OBJ_RETURN", "MRY3_MARY_FAIL_2", 25f, 50f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"), 0))
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_1212))
						{
							MAP::REMOVE_BLIP(&iLocal_1212);
						}
						MAP::_BLIP_SET_MODIFIER(iLocal_1209, -546708623);
					}
					else if (__LIB_6__::func_889(cParam0) == 0)
					{
						if (!MAP::DOES_BLIP_EXIST(iLocal_1212))
						{
							iLocal_1212 = __LIB_8__::func_777(408396114, vLocal_519, 10f, 1);
							MAP::_BLIP_SET_MODIFIER(iLocal_1212, -1878373110);
						}
						MAP::_BLIP_REMOVE_MODIFIER(iLocal_1209, -546708623);
					}
				}
			}
			if (iVar0 == iLocal_17 || iVar0 == iLocal_18)
			{
				if (!__LIB_11__::func_97(1))
				{
					if (__LIB_11__::func_97(256))
					{
						if (PED::_IS_PED_LASSOED(Local_709[0 /*18*/]))
						{
							func_1875("MRY3_FHARM_FAIL", 0);
						}
						if (func_1877())
						{
							if (!__LIB_1__::func_205(Local_709[0 /*18*/], iLocal_1223[18], 1, 0))
							{
								if (!__LIB_11__::func_97(128))
								{
									if (__LIB_8__::func_711(cParam0, "MRY3_FT_SHOOT", 0))
									{
										func_1232(128);
									}
								}
							}
							else
							{
								func_1875("MRY3_FOLLOW_FAIL", 0);
							}
						}
						if (!__LIB_0__::func_272(Local_709[0 /*18*/], 0))
						{
							func_1875("MRY3_FKILL_FAIL", 0);
						}
						else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_709[0 /*18*/], Global_35, 1, 1))
						{
							func_1875("MRY3_FHARM_FAIL", 0);
						}
						if (!func_378(32768))
						{
							if (fLocal_493 <= 7f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 3167))
							{
								if (!__LIB_1__::func_205(Local_709[0 /*18*/], iLocal_1223[18], 1, 0))
								{
									func_1232(128);
								}
							}
						}
						if (!func_378(32768))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 3167))
							{
								if (!__LIB_1__::func_205(Local_709[0 /*18*/], iLocal_1223[18], 1, 0))
								{
									if (PED::IS_PED_FACING_PED(Local_709[0 /*18*/], Global_35, 80f))
									{
										func_1232(128);
									}
								}
							}
						}
						if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 3167) && !GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_487))
						{
							if (!__LIB_0__::func_899(&uLocal_1148))
							{
								__LIB_4__::func_89(&uLocal_1148, 0);
							}
						}
						else if (__LIB_0__::func_899(&uLocal_1148))
						{
							__LIB_1__::func_561(&uLocal_1148);
						}
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[3 /*31*/]))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[3 /*31*/], false))
							{
								if (__LIB_0__::func_899(&uLocal_1148))
								{
									__LIB_1__::func_561(&uLocal_1148);
								}
							}
						}
						if (__LIB_0__::func_899(&uLocal_1148))
						{
							if (__LIB_11__::func_97(2097152))
							{
								if (__LIB_1__::func_583(&uLocal_1148) >= 10f)
								{
									if (!__LIB_5__::func_463())
									{
										if (!func_1193(4194304))
										{
											if (__LIB_8__::func_711(cParam0, "MRY3_WHISPER3", 0))
											{
												func_1206(4194304);
											}
										}
									}
								}
							}
							if (__LIB_1__::func_583(&uLocal_1148) >= 15f)
							{
								func_1875("MRY3_FATH_DIST_FAIL", 1);
							}
						}
						__LIB_11__::func_109(cParam0, Local_709[0 /*18*/], "MRY3_FOLLOW_OBJ", "MRY3_FATH_DIST_FAIL", 40f, 60f, 0, 0, 0, joaat("BLIP_STYLE_COMPANION"), 0);
						if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
						{
							if (!__LIB_0__::func_899(&uLocal_1169))
							{
								__LIB_4__::func_89(&uLocal_1169, 0);
							}
						}
						else if (__LIB_0__::func_899(&uLocal_1169))
						{
							__LIB_1__::func_561(&uLocal_1169);
						}
						if (__LIB_0__::func_899(&uLocal_1169))
						{
							if (__LIB_1__::func_583(&uLocal_1169) >= 2f)
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 3167) && __LIB_0__::func_665(Global_35, Local_709[0 /*18*/], 1, 1) <= 25f)
								{
									func_1232(128);
								}
							}
						}
						if (__LIB_1__::func_205(Global_35, iLocal_1223[16], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_1223[17], 1, 0))
						{
							if (!func_1193(1048576))
							{
								if (__LIB_8__::func_711(cParam0, "MRY3_WHERE", 0))
								{
									func_1206(1048576);
								}
							}
							else if (!__LIB_8__::func_684("MRY3_WHERE"))
							{
								if (__LIB_1__::func_205(Global_35, iLocal_1223[16], 1, 0))
								{
									if (__LIB_0__::func_94(Global_35, vVar1, 1) >= 20f)
									{
										func_1875("MRY3_FATH_DIST_FAIL", 0);
									}
								}
								if (__LIB_1__::func_205(Global_35, iLocal_1223[17], 1, 0))
								{
									if (__LIB_0__::func_94(Global_35, vVar4, 1) >= 20f)
									{
										func_1875("MRY3_FATH_DIST_FAIL", 0);
									}
								}
							}
						}
					}
				}
			}
			if (iVar0 >= iLocal_19 && iVar0 <= iLocal_23)
			{
				if (Local_709[1 /*18*/].f_13 && !bLocal_498)
				{
					if (!__LIB_11__::func_97(134217728))
					{
						if (!__LIB_0__::func_272(Local_709[1 /*18*/], 0))
						{
							func_1875("MRY3_BKILL_FAIL", 0);
						}
						else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_709[1 /*18*/], Global_35, 1, 1))
						{
							func_1875("MRY3_BHARM_FAIL", 0);
						}
					}
					else if (FIRE::IS_ENTITY_ON_FIRE(Local_709[1 /*18*/]))
					{
						func_1875("MRY3_DEST_FAIL", 0);
					}
				}
			}
			if (iVar0 == iLocal_19)
			{
				if (__LIB_0__::func_899(&uLocal_1142))
				{
					if (__LIB_1__::func_583(&uLocal_1142) >= 30f)
					{
						if (!__LIB_11__::func_97(8))
						{
							Global_43838 = 0;
						}
						func_1875("MRY3_CONFRONT_FAIL", 0);
					}
				}
				if (Local_709[2 /*18*/].f_13 && Local_709[3 /*18*/].f_13)
				{
					if (!PED::IS_PED_JACKING(Global_35))
					{
						if (!__LIB_0__::func_272(Local_709[2 /*18*/], 0) || !__LIB_0__::func_272(Local_709[3 /*18*/], 0))
						{
							if (!__LIB_11__::func_97(8))
							{
								Global_43838 = 0;
							}
							func_1875("MRY3_DKILL_FAIL", 0);
						}
						else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_709[2 /*18*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_709[3 /*18*/], Global_35, 1, 1))
						{
							if (!__LIB_11__::func_97(8))
							{
								Global_43838 = 0;
							}
							func_1875("MRY3_DHARM_FAIL", 0);
						}
					}
				}
				if (__LIB_1__::func_205(Global_35, iLocal_1223[28], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_1223[29], 1, 0))
				{
					if (!__LIB_11__::func_97(8))
					{
						Global_43838 = 0;
					}
					func_1875("MRY3_FATH_DIST_FAIL", 1);
				}
			}
			if (iVar0 == iLocal_20)
			{
				if (PED::IS_PED_RAGDOLL(Local_709[2 /*18*/]))
				{
				}
				__LIB_11__::func_109(cParam0, iLocal_1216, "MRY3_OBJ_CHASE", "MRY3_WAG_DIST_FAIL", 100f, 150f, 0, 0, 0, joaat("BLIP_STYLE_COMPANION"), 0);
				if (Local_709[2 /*18*/].f_13 && Local_709[3 /*18*/].f_13)
				{
					if (!PED::IS_PED_JACKING(Global_35))
					{
						if (!__LIB_0__::func_272(Local_709[2 /*18*/], 0) || !__LIB_0__::func_272(Local_709[3 /*18*/], 0))
						{
							func_1875("MRY3_DKILL_FAIL", 0);
						}
						else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_709[2 /*18*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_709[3 /*18*/], Global_35, 1, 1))
						{
							func_1875("MRY3_DHARM_FAIL", 0);
						}
					}
					else
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_709[2 /*18*/]);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_709[3 /*18*/]);
					}
					if (PED::_IS_PED_LASSOED(Local_709[2 /*18*/]) || PED::_IS_PED_LASSOED(Local_709[3 /*18*/]))
					{
						func_1875("MRY3_DHARM_FAIL", 0);
					}
				}
			}
			if (iVar0 == iLocal_21)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1216))
				{
					if (!__LIB_11__::func_97(4194304) && !__LIB_11__::func_97(16384))
					{
						if (__LIB_13__::func_559(&iLocal_1216) || (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1216, false, false) && !__LIB_11__::func_97(4194304)))
						{
							func_1875("MRY3_WAG_FAIL", 0);
						}
					}
				}
				if (!bLocal_498)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_709[1 /*18*/]))
					{
						if (__LIB_11__::func_109(cParam0, Local_709[1 /*18*/], "MRY3_BDIST_REMIN", "MRY3_BDIST_FAIL", 15f, 50f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"), 0))
						{
							if (!MAP::DOES_BLIP_EXIST(Local_709[1 /*18*/].f_1))
							{
								Local_709[1 /*18*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_709[1 /*18*/]);
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_709[1 /*18*/].f_1, "MRY3_BLIP_BUYER");
								MAP::_BLIP_SET_MODIFIER(Local_709[1 /*18*/].f_1, -401963276);
								if (!func_378(8))
								{
									func_380(8);
								}
							}
							if (MAP::DOES_BLIP_EXIST(iLocal_1214))
							{
								MAP::REMOVE_BLIP(&iLocal_1214);
								if (!func_378(4))
								{
									func_380(4);
								}
							}
							if (MAP::DOES_BLIP_EXIST(iLocal_1211))
							{
								MAP::REMOVE_BLIP(&iLocal_1211);
								if (!func_378(2))
								{
									func_380(2);
								}
							}
						}
						else
						{
							if (func_378(8))
							{
								if (MAP::DOES_BLIP_EXIST(Local_709[1 /*18*/].f_1))
								{
									MAP::REMOVE_BLIP(&(Local_709[1 /*18*/].f_1));
									func_1257(8);
								}
							}
							if (func_378(4))
							{
								if (!MAP::DOES_BLIP_EXIST(iLocal_1214))
								{
									iLocal_1214 = __LIB_8__::func_778(408396114, iLocal_1216, 1);
									func_1257(4);
								}
							}
							if (func_378(2))
							{
								if (!MAP::DOES_BLIP_EXIST(iLocal_1211))
								{
									iLocal_1211 = __LIB_8__::func_777(408396114, vLocal_504, 14f, 1);
									func_1257(2);
								}
							}
						}
						if (__LIB_0__::func_665(Global_35, Local_709[1 /*18*/], 1, 1) >= 50f)
						{
							func_1875("MRY3_BDIST_FAIL", 0);
						}
					}
				}
				if (__LIB_7__::func_439())
				{
					func_1875("MRY3_SECL_FAIL", 0);
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_899(&uLocal_1124))
			{
				if (bLocal_501)
				{
					__LIB_9__::func_205(cParam0, sLocal_525, sLocal_526, 1, 0);
					iLocal_36 = 2;
				}
				else if (__LIB_1__::func_583(&uLocal_1124) >= 1.5f)
				{
					__LIB_9__::func_205(cParam0, sLocal_525, sLocal_526, 1, 0);
					iLocal_36 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

void func_1439()
{
	var uVar0;
	float fVar1;
	switch (iLocal_31)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[8 /*31*/]) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[9 /*31*/]))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1216) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && ENTITY::DOES_ENTITY_EXIST(Local_709[1 /*18*/]))
				{
					func_1665(8);
					func_1665(9);
					iLocal_31 = 1;
				}
			}
			break;
		case 1:
			PED::_0xF60165E1D2C5370B(Global_35, &uVar0, &fVar1);
			if (__LIB_1__::func_205(Global_35, iLocal_1223[30], 1, 0))
			{
				if (fVar1 <= 1.5f)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[8 /*31*/], func_409(24), true);
					iLocal_31 = 3;
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[8 /*31*/], func_409(26), true);
					iLocal_31 = 3;
				}
			}
			if (__LIB_1__::func_205(Global_35, iLocal_1223[31], 1, 0))
			{
				if (fVar1 <= 1.5f)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[8 /*31*/], func_409(25), true);
					iLocal_31 = 3;
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[8 /*31*/], func_409(27), true);
					iLocal_31 = 3;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[8 /*31*/]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[8 /*31*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_38[8 /*31*/]);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[9 /*31*/]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[9 /*31*/], false))
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_38[9 /*31*/], iLocal_1216, 12);
					ANIMSCENE::START_ANIM_SCENE(Local_38[9 /*31*/]);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[8 /*31*/]) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[9 /*31*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[8 /*31*/], false) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[9 /*31*/], false))
				{
					iLocal_31 = 4;
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[9 /*31*/]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[9 /*31*/], false))
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_38[9 /*31*/], iLocal_1216, 12);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_38[9 /*31*/], ENTITY::GET_ENTITY_COORDS(iLocal_1216, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_1216, 2), 2);
					ANIMSCENE::START_ANIM_SCENE(Local_38[9 /*31*/]);
				}
				else
				{
					iLocal_31 = 4;
				}
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_RATE(Local_38[9 /*31*/], 1.15f);
			if (__LIB_3__::func_439(Local_38[9 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[9 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[9 /*31*/]);
					iLocal_31 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1440()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_378(32))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_980[iVar0 /*18*/], true, false), 4f))
			{
				func_380(32);
			}
		}
		if (func_378(32))
		{
			if (!Local_980[iVar0 /*18*/].f_14)
			{
				FIRE::START_ENTITY_FIRE(Local_980[iVar0 /*18*/], 0, -1, 0);
				Local_980[iVar0 /*18*/].f_14 = 1;
			}
		}
		if (!func_378(64))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_980[iVar0 /*18*/]) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_980[iVar0 /*18*/], true, false), 3f))
			{
				__LIB_17__::func_523(iLocal_1216);
				FIRE::START_ENTITY_FIRE(iLocal_1216, 0, -1, 0);
				func_380(64);
			}
		}
		if (!func_378(128))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(iLocal_1216))
			{
				FIRE::START_ENTITY_FIRE(Local_709[1 /*18*/], 0, -1, 0);
				func_380(128);
			}
		}
		iVar0++;
	}
}

void func_1441(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	switch (iLocal_32)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[10 /*31*/]) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[10 /*31*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1216))
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_38[10 /*31*/], iLocal_1216, 12);
					iLocal_32 = 5;
				}
			}
			break;
		case 1:
			break;
		case 5:
			if ((iLocal_1366 == -1 || iLocal_1366 == 0) || __LIB_11__::func_97(4194304))
			{
				if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[2 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[2 /*31*/], false)) && ANIMSCENE::_0x1F0E401031E20146(Local_38[2 /*31*/], "pl_Panic_Loop_Base")) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[2 /*31*/], false))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[10 /*31*/]))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_38[10 /*31*/], true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[10 /*31*/], false))
							{
								if (ENTITY::GET_ENTITY_SPEED(iLocal_1216) >= 6f)
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[10 /*31*/], func_409(32), true);
								}
								iLocal_489 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
								func_1665(10);
								ANIMSCENE::START_ANIM_SCENE(Local_38[10 /*31*/]);
								if (!__LIB_0__::func_899(&uLocal_1163))
								{
									__LIB_4__::func_89(&uLocal_1163, 0);
								}
							}
							else
							{
								func_380(512);
								iLocal_32 = 2;
							}
						}
					}
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[10 /*31*/], false) && ANIMSCENE::_0x8D81E7824B7753F7(Local_38[10 /*31*/], "s_loop_base", 1))
			{
				__LIB_2__::func_259(&uLocal_1163);
				iLocal_32 = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_266(iLocal_1216, vLocal_504, 40f, 1, 1))
			{
				if (__LIB_0__::func_899(&uLocal_1163))
				{
					if (__LIB_1__::func_583(&uLocal_1163) >= 6f)
					{
						if (iLocal_489 == -1)
						{
							iLocal_489 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
						}
						else
						{
							iLocal_489 = __LIB_9__::func_844(0, 9, iLocal_489);
						}
						if (!Local_38[10 /*31*/].f_3[iLocal_489])
						{
							if (iLocal_489 == 0)
							{
								sLocal_528 = func_409(33);
							}
							else if (iLocal_489 == 1)
							{
								sLocal_528 = func_409(40);
							}
							else if (iLocal_489 == 2)
							{
								sLocal_528 = func_409(34);
							}
							else if (iLocal_489 == 3)
							{
								sLocal_528 = func_409(31);
							}
							else if (iLocal_489 == 4)
							{
								sLocal_528 = func_409(35);
							}
							else if (iLocal_489 == 5)
							{
								sLocal_528 = func_409(36);
							}
							else if (iLocal_489 == 6)
							{
								sLocal_528 = func_409(37);
							}
							else if (iLocal_489 == 7)
							{
								sLocal_528 = func_409(38);
							}
							else if (iLocal_489 == 8)
							{
								sLocal_528 = func_409(39);
							}
							if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[10 /*31*/], false) && !ANIMSCENE::_0x0DF57F86FE71DBE5(Local_38[10 /*31*/], sLocal_528)) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_38[10 /*31*/], sLocal_528))
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[10 /*31*/], sLocal_528);
							}
							Local_38[10 /*31*/].f_3[iLocal_489] = 1;
							__LIB_1__::func_561(&uLocal_1163);
							iLocal_32 = 4;
						}
						iVar0 = 0;
						while (iVar0 < 10)
						{
							if (Local_38[10 /*31*/].f_3[iVar0] == 1)
							{
								iVar1++;
							}
							iVar0++;
						}
						if (iVar1 == 10)
						{
							iLocal_32 = 6;
						}
						else
						{
							iVar1 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[10 /*31*/], false) || func_378(512))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_38[10 /*31*/], sLocal_528))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_38[10 /*31*/], sLocal_528))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[10 /*31*/], sLocal_528, true);
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[10 /*31*/], "s_loop_base", 1))
				{
					if (!__LIB_0__::func_899(&uLocal_1163))
					{
						__LIB_4__::func_89(&uLocal_1163, 0);
						iLocal_32 = 3;
					}
				}
			}
			break;
		case 6:
			if (__LIB_3__::func_439(Local_38[10 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[10 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[10 /*31*/]);
					iLocal_32 = 7;
				}
			}
			break;
		case 7:
			break;
	}
}

void func_1442(char[4] cParam0)
{
	int iVar0;
	if (func_378(262144))
	{
		iVar0 = __LIB_0__::func_57(Local_530[0 /*178*/]);
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, 0, 0))
		{
			if (Local_530[0 /*178*/] == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0))
			{
				if (__LIB_0__::func_139(iLocal_1327))
				{
					if ((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[13 /*31*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[13 /*31*/], false)) && ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1)) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !AUDIO::_0x54B187F111D9C6F8(Local_530[0 /*178*/], 1))
					{
						__LIB_1__::func_221(iLocal_1327, 1, 1);
					}
					else
					{
						__LIB_1__::func_221(iLocal_1327, 0, 1);
					}
					if (__LIB_1__::func_732(iLocal_1327, 1))
					{
						func_1270(13, 65);
						func_1257(262144);
						__LIB_1__::func_281(&iLocal_1327, 1, 1);
					}
				}
				else
				{
					iLocal_1327 = __LIB_2__::func_403("MRY3_CXT_MOVE", joaat("INPUT_CONTEXT_X"), Local_530[0 /*178*/], 3, 0, 0, 1, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_1__::func_221(iLocal_1327, 0, 1);
					__LIB_2__::func_450(iLocal_1327, 3f, 1);
					HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_1327) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_530[0 /*178*/]), 0);
				}
			}
			else
			{
				__LIB_1__::func_281(&iLocal_1327, 1, 1);
			}
		}
		else
		{
			__LIB_1__::func_281(&iLocal_1327, 1, 1);
		}
	}
	switch (iLocal_35)
	{
		case 0:
			iLocal_1318 = INTERIOR::GET_INTERIOR_AT_COORDS(2549.9f, -1296.5f, 48.8f);
			if (!INTERIOR::IS_VALID_INTERIOR(iLocal_1318))
			{
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1318);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[13 /*31*/]))
			{
				func_1665(13);
				iLocal_35 = 4;
			}
			break;
		case 4:
			if (__LIB_18__::func_299(cParam0, Global_35, "ARTHUR", 0, 1, 1) || ANIMSCENE::_0x005E6F28DD7ED58D(Global_43800, "ARTHUR"))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[13 /*31*/]))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[13 /*31*/], false))
					{
						func_772(Global_35, 2546.104f, -1294.094f, 48.2355f, 175.7322f, 2, 1073741824 /* Float: 2f */);
						func_772(Local_530[0 /*178*/], 2545.532f, -1293.922f, 49.2009f, 175.7322f, 2, 1073741824 /* Float: 2f */);
						ANIMSCENE::START_ANIM_SCENE(Local_38[13 /*31*/]);
					}
					else
					{
						iLocal_35 = 1;
					}
				}
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("MRY3_TH_ENTER")))
			{
				AUDIO::SET_AUDIO_FLAG("DisableSubtitleDistancePriorityFiltering", true);
				__LIB_8__::func_711(cParam0, "MRY3_TH_ENTER", 0);
				AUDIO::_0xF232C2C546AC16D0("MRY3_TH_ENTER");
			}
			if (__LIB_8__::func_684("MRY3_TH_ENTER"))
			{
				if (!func_378(16777216))
				{
					func_380(16777216);
				}
			}
			if (func_378(16777216))
			{
				if (!__LIB_8__::func_684("MRY3_TH_ENTER"))
				{
					if (!func_378(33554432))
					{
						AUDIO::SET_AUDIO_FLAG("DisableSubtitleDistancePriorityFiltering", false);
						func_380(33554432);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[13 /*31*/], false) && ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1))
			{
				if (!__LIB_0__::func_139(iLocal_1326))
				{
					iLocal_1326 = __LIB_1__::func_877("MRY3_CXT_LEAVE", joaat("INPUT_CONTEXT_Y"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					iLocal_35 = 5;
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_INTRO"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335) >= 0.4270833f)
				{
					if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
					{
						if (__LIB_8__::func_711(cParam0, "MRY3_TH_WAIT", 0))
						{
							__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
							iLocal_35 = 6;
						}
					}
					else
					{
						iLocal_35 = 6;
					}
				}
			}
			break;
		case 6:
			if (!__LIB_8__::func_684("MRY3_TH_WAIT"))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 4)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 56);
					func_380(262144);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 7;
				}
				else
				{
					iLocal_35 = 7;
				}
			}
			break;
		case 7:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_P2")) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335) >= 0.25f)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 54);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 8;
				}
				else
				{
					iLocal_35 = 8;
				}
			}
			break;
		case 8:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("MRY3_TH_POINT1")))
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_TH_POINT2", 0))
				{
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !__LIB_8__::func_684("MRY3_TH_POINT2"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_P2")) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335) >= 0.5f)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 50);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[13 /*31*/], func_409(54));
					iLocal_35 = 9;
				}
				else
				{
					iLocal_35 = 9;
				}
			}
			break;
		case 9:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_P2")) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335) >= 0.75f)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 51);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 10;
				}
				else
				{
					iLocal_35 = 10;
				}
			}
			break;
		case 10:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 15)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					__LIB_8__::func_711(cParam0, "MRY3_TH_MCLAP", 0);
					func_1270(13, 57);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 11;
				}
				else
				{
					iLocal_35 = 11;
				}
			}
			break;
		case 11:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 1)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 53);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 12;
				}
				else
				{
					iLocal_35 = 12;
				}
			}
			break;
		case 12:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1419636573))
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_TH_FEXCTE1", 0))
				{
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !__LIB_8__::func_684("MRY3_TH_FEXCTE1"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 13)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 52);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 14;
				}
				else
				{
					iLocal_35 = 14;
				}
			}
			break;
		case 14:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_530[0 /*178*/], joaat("MRY3_TH_MEXCTE")))
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_TH_MEXCTE", 0))
				{
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !__LIB_8__::func_684("MRY3_TH_MEXCTE"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 16)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_TH_FIRE", 0))
					{
						__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
						iLocal_35 = 13;
					}
				}
				else
				{
					iLocal_35 = 13;
				}
			}
			break;
		case 13:
			if (!__LIB_8__::func_684("MRY3_TH_FIRE"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 18)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 54);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 15;
				}
				else
				{
					iLocal_35 = 15;
				}
			}
			break;
		case 15:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("MRY3_TH_POINT1")))
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_TH_POINT1", 0))
				{
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !__LIB_8__::func_684("MRY3_TH_POINT1"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 21)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 59);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[13 /*31*/], func_409(57));
					iLocal_35 = 16;
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[13 /*31*/], func_409(57));
					iLocal_35 = 16;
				}
			}
			break;
		case 16:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 24)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					__LIB_8__::func_711(cParam0, "MRY3_TH_MCLAP", 0);
					func_1270(13, 57);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 17;
				}
				else
				{
					iLocal_35 = 17;
				}
			}
			break;
		case 17:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 14)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_TH_CANCAN1", 0))
					{
						__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
						iLocal_35 = 18;
					}
				}
				else
				{
					iLocal_35 = 18;
				}
			}
			break;
		case 18:
			if (!__LIB_8__::func_684("MRY3_TH_CANCAN1"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 15)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_TH_CANCAN2", 0))
					{
						__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
						iLocal_35 = 19;
					}
				}
				else
				{
					iLocal_35 = 19;
				}
			}
			break;
		case 19:
			if (!__LIB_8__::func_684("MRY3_TH_CANCAN2"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335) >= 0.4113616f)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 55);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 20;
				}
				else
				{
					iLocal_35 = 20;
				}
			}
			break;
		case 20:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_530[0 /*178*/], 2033048347))
			{
				if (__LIB_8__::func_711(cParam0, "MRY3_TH_MLAUGH", 0))
				{
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !__LIB_8__::func_684("MRY3_TH_MLAUGH"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 19)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 58);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 21;
				}
				else
				{
					iLocal_35 = 21;
				}
			}
			break;
		case 21:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !__LIB_8__::func_684("MRY3_TH_MLAUGH"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 21)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 60);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[13 /*31*/], func_409(57));
					iLocal_35 = 22;
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[13 /*31*/], func_409(57));
					iLocal_35 = 22;
				}
			}
			break;
		case 22:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false) && Global_1394141.f_1332 == 23)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					__LIB_8__::func_711(cParam0, "MRY3_TH_MCLAP", 0);
					func_1270(13, 57);
					__LIB_1__::func_683(&(Global_1394141.f_1326), 16384);
					iLocal_35 = 2;
				}
				else
				{
					iLocal_35 = 2;
				}
			}
			break;
		case 23:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1) && !__LIB_8__::func_684("MRY3_TH_MLAUGH"))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[13 /*31*/]))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_38[13 /*31*/], func_409(67)))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[13 /*31*/], false))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[13 /*31*/], func_409(67), true);
						iLocal_35 = 25;
					}
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_38[13 /*31*/], "s_Base", 1))
			{
				if (__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					__LIB_1__::func_681(&(Global_1394141.f_1326), 16384);
				}
			}
			break;
		case 24:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[13 /*31*/]))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_38[13 /*31*/], func_409(66)))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[13 /*31*/], false))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_38[13 /*31*/], func_409(66), true);
						iLocal_35 = 25;
					}
				}
			}
			break;
		case 25:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("MRY3_TH_LEARLY")))
			{
				__LIB_8__::func_711(cParam0, "MRY3_TH_LEARLY", 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("MRY3_TH_LEND")))
			{
				__LIB_8__::func_711(cParam0, "MRY3_TH_LEND", 0);
			}
			if (__LIB_3__::func_439(Local_38[13 /*31*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_38[13 /*31*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_38[13 /*31*/]);
					iLocal_35 = 26;
				}
			}
			break;
		case 26:
			break;
	}
}

void func_1453(char[4] cParam0)
{
	struct<8> Var0;
	func_1895(cParam0);
	if (__LIB_8__::func_587(cParam0) == 1 && CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	else if (__LIB_8__::func_587(cParam0) == 0 && !__LIB_6__::func_862(cParam0, 8))
	{
		__LIB_8__::func_668(cParam0);
	}
	__LIB_5__::func_326(&(cParam0->f_10792));
	__LIB_8__::func_696(cParam0);
	__LIB_8__::func_638(cParam0, 67108864);
	__LIB_8__::func_638(cParam0, 8192);
	__LIB_6__::func_887(cParam0, 4);
	__LIB_6__::func_887(cParam0, 512);
	__LIB_6__::func_887(cParam0, 65536);
	__LIB_6__::func_887(cParam0, 1024);
	__LIB_6__::func_887(cParam0, 262144);
	__LIB_6__::func_887(cParam0, 16777216);
	__LIB_6__::func_887(cParam0, 64);
	__LIB_6__::func_881(cParam0, 128);
	__LIB_6__::func_868(cParam0, -2147483648);
	__LIB_6__::func_896(cParam0, 1);
	if (__LIB_6__::func_872(cParam0, 4194304))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 1073741824 /* Float: 2f */);
	}
	__LIB_6__::func_881(cParam0, 4194304);
	__LIB_6__::func_881(cParam0, 8388608);
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_1__::func_965(8);
		__LIB_5__::func_103(1);
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 64) || !__LIB_6__::func_871(cParam0))
	{
		__LIB_0__::func_267(0);
	}
	else
	{
		__LIB_0__::func_267(1);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!__LIB_6__::func_862(cParam0, 131072))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	}
	__LIB_1__::func_561(&(cParam0->f_13106));
	__LIB_2__::func_259(&(cParam0->f_13112));
	__LIB_9__::func_213(cParam0, __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1));
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1024))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 32768))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)))
	{
		PED::_0xF008E0BA1FE1D644((__LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)) - PED::_0x62DE46F061CAA468()));
	}
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	Var0 = { __LIB_8__::func_697(cParam0) };
	MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(&Var0);
	Global_43805 = -1;
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		__LIB_0__::func_7(&Global_1935630, 2097152);
	}
	else
	{
		__LIB_0__::func_8(&Global_1935630, 2097152);
	}
	__LIB_9__::func_37(cParam0);
	if (__LIB_6__::func_864(cParam0) == 25 && __LIB_0__::func_13(32768))
	{
		__LIB_9__::func_56(cParam0, 16);
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 512))
	{
		__LIB_4__::func_587(1f, 0f, 0f, 0f);
	}
	else
	{
		__LIB_4__::func_680();
	}
}

bool func_1515(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_667(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1048((386 + iVar29), 1);
		if (func_1049(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

void func_1551()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1978();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_632(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_632(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_1601(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_583(50);
			}
			else
			{
				func_583(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_583(51);
			}
			else
			{
				func_583(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_583(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_1602(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (__LIB_1__::func_771(0))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(2))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					func_1998();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_1998();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (__LIB_1__::func_771(1))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(3))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					func_2000();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_2000();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (__LIB_1__::func_771(5))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(6))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					func_2001();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_2001();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_1607(int iParam0)
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
	func_168(iParam0, 1, 1, -142743235, 1);
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
	func_653(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_168(uVar18[iVar36], 1, 1, -142743235, 1);
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
		func_653(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(func_654(uVar18[iVar36]), 1);
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
				func_653(__LIB_0__::func_998(iVar35), 1, 1);
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

void func_1612(struct<6> Param0)
{
	if (!func_2023(Param0.f_4, 1))
	{
	}
	if (!func_2023(Param0, 1))
	{
	}
	if (!func_2023(Param0.f_2, 1))
	{
	}
	if (!func_2023(Param0.f_5, 1))
	{
	}
	if (!func_2023(Param0.f_3, 1))
	{
	}
	if (!func_2023(Param0.f_1, 1))
	{
	}
}

int func_1621(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iParam1))
	{
		return 0;
	}
	if (__LIB_1__::func_127(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { __LIB_0__::func_949(0) };
	Var1.f_4 = iVar0;
	if (!func_1102(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1622(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (__LIB_0__::func_144(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (__LIB_0__::func_800(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					__LIB_0__::func_610(&Var7);
					if (func_1102(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							__LIB_1__::func_556(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1628(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_667(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

void func_1665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "IG_MRLINTON", Local_709[0 /*18*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "IG_MaryLinton", Local_530[0 /*178*/], 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "IG_MaryLinton", Local_530[0 /*178*/], 0);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "Ashton", Local_709[1 /*18*/], 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "Mary", Local_530[0 /*178*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "MrLinton", Local_709[0 /*18*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "player", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "Pedestrian", iLocal_1203, 0);
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "MaryLinton", Local_530[0 /*178*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "ARTHUR", Global_35, 0);
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "MaryLinton", Local_530[0 /*178*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "ARTHUR", Global_35, 0);
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "IG_MaryLinton", Local_530[0 /*178*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "ARTHUR", Global_35, 0);
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "IG_MRLINTON", Local_709[0 /*18*/], 0);
			break;
		case 8:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "player_zero", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "MRY3_BUYER", Local_709[1 /*18*/], 0);
			break;
		case 9:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "COACH2", iLocal_1216, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "IG_ASHTON", Local_709[1 /*18*/], 0);
			break;
		case 10:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "Ashton", Local_709[1 /*18*/], 0);
			break;
		case 11:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "player_zero", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "IG_ASHTON", Local_709[1 /*18*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "COACH2", iLocal_1216, 0);
			break;
		case 12:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "player_zero", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "IG_ASHTON", Local_709[1 /*18*/], 0);
			break;
		case 13:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_38[iParam0 /*31*/], "MaryLinton", Local_530[0 /*178*/], 0);
			break;
	}
}

void func_1674()
{
	switch (iLocal_491)
	{
		case 0:
			PAD::SET_PAD_SHAKE(0, 200, 50);
			if (!__LIB_0__::func_899(&uLocal_1190))
			{
				__LIB_4__::func_89(&uLocal_1190, 0);
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1190);
			}
			iLocal_491++;
			break;
		case 1:
			if (__LIB_10__::func_919(&uLocal_1190) >= 600)
			{
				PAD::SET_PAD_SHAKE(0, 200, 55);
				__LIB_2__::func_259(&uLocal_1190);
				iLocal_491++;
			}
			break;
		case 2:
			if (__LIB_11__::func_97(67108864))
			{
				if (__LIB_10__::func_919(&uLocal_1190) >= 1200)
				{
					iLocal_491 = 0;
				}
			}
			break;
	}
}

void func_1675(char[4] cParam0)
{
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_530[0 /*178*/], -1))
	{
		if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_LASSO") && !func_1193(33554432))
		{
			if (!__LIB_0__::func_899(&uLocal_1133))
			{
				__LIB_4__::func_89(&uLocal_1133, 0);
			}
			else if (!__LIB_5__::func_463())
			{
				if (__LIB_9__::func_178(&uLocal_1133) >= 3f)
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_LASSO", 0))
					{
						func_1206(33554432);
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1133);
			}
		}
		else if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::GET_PLAYER_INDEX()) && !func_1193(134217728))
		{
			if (!__LIB_0__::func_899(&uLocal_1133))
			{
				__LIB_4__::func_89(&uLocal_1133, 0);
			}
			else if (!__LIB_5__::func_463())
			{
				if (__LIB_9__::func_178(&uLocal_1133) >= 3f)
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WTARGET", 0))
					{
						func_1206(134217728);
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1133);
			}
		}
		else if (((__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO")) && !WEAPON::_0x6ABAD7B0A854F8FB(__LIB_0__::func_399(Global_35, 1, 0, 0))) && !func_1193(67108864))
		{
			if (!__LIB_0__::func_899(&uLocal_1133))
			{
				__LIB_4__::func_89(&uLocal_1133, 0);
			}
			else if (!__LIB_5__::func_463())
			{
				if (__LIB_9__::func_178(&uLocal_1133) >= 3f)
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_WEAPON", 0))
					{
						func_1206(67108864);
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1133);
			}
		}
	}
	else if (__LIB_0__::func_899(&uLocal_1133))
	{
		__LIB_2__::func_259(&uLocal_1133);
	}
}

void func_1677()
{
	int iVar0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("mary3_father_follow", ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0);
	if (func_378(1024))
	{
		func_1257(2048);
		func_1257(1024);
	}
	if (iVar0 >= 98)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[15])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[15], 0, 0);
		}
	}
	else if (iVar0 >= 90)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[14])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[14], 0, 0);
		}
	}
	else if (iVar0 >= 87)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[13])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[13], 0, 0);
		}
	}
	else if (iVar0 >= 84)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[12])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[12], 0, 0);
		}
	}
	else if (iVar0 >= 76)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[11])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[11], 0, 0);
		}
	}
	else if (iVar0 >= 74)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[10])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[10], 0, 0);
		}
	}
	else if (iVar0 >= 66)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[9])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[9], 0, 0);
		}
	}
	else if (iVar0 >= 63)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[8])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[8], 0, 0);
		}
	}
	else if (iVar0 >= 58)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[7])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[7], 0, 0);
		}
	}
	else if (iVar0 >= 49)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[6])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[6], 0, 0);
		}
	}
	else if (iVar0 >= 45)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[5])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[5], 0, 0);
		}
	}
	else if (iVar0 >= 39)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[4])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[4], 0, 0);
		}
	}
	else if (iVar0 >= 35)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[3])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[3], 0, 0);
		}
	}
	else if (iVar0 >= 31)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[2])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[2], 0, 0);
		}
	}
	else if (iVar0 >= 24)
	{
		if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[1])
		{
			__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[1], 0, 0);
		}
	}
	else if (PED::_0xEF2E6F870783369B(Local_530[0 /*178*/], 0) != iLocal_1268[0])
	{
		__LIB_3__::func_442(Local_530[0 /*178*/], iLocal_1268[0], 0, 0);
	}
}

void func_1679()
{
	var uVar0[1];
	if (CAM::_0xDD0B7C5AE58F721D(&uLocal_1089) && !CAM::_0x927B810E43E99932(&uLocal_1089))
	{
		CAM::_0xB8B207C34285E978(&uLocal_1089);
		uVar0[0] = Local_530[0 /*178*/];
		CAM::_0xFEB8646818294C75(&uLocal_1089, &uVar0);
	}
}

bool func_1688(char[4] cParam0)
{
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_530[0 /*178*/], -1))
	{
		if (Global_1347477.f_196 > 0)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_9__::func_178(&uLocal_1133) >= 4f)
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_OVERWEIGHT", 0))
					{
						return true;
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1133);
			}
		}
		else if (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("STRANGE_LOWER")) || PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("STRANGE_UPPER")))
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_9__::func_178(&uLocal_1133) >= 4f)
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_ST_OUTFIT", 0))
					{
						return true;
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1133);
			}
		}
		else if (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("STRANGE_HAT")))
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_9__::func_178(&uLocal_1133) >= 4f)
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_ST_HAT", 0))
					{
						return true;
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1133);
			}
		}
		else if (ATTRIBUTE::GET_ATTRIBUTE_POINTS(Global_35, 16) >= 80)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_9__::func_178(&uLocal_1133) >= 4f)
				{
					if (__LIB_8__::func_711(cParam0, "MRY3_DIRTY", 0))
					{
						return true;
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1133);
			}
		}
		else
		{
			return true;
		}
	}
	else if (__LIB_0__::func_899(&uLocal_1133))
	{
		__LIB_2__::func_259(&uLocal_1133);
	}
	return false;
}

void func_1696(char[4] cParam0)
{
	struct<4> Var0;
	Var0 = { __LIB_8__::func_688(cParam0, __LIB_9__::func_40(cParam0)) };
	func_2073(cParam0, &Var0);
}

void func_1704(int iParam0, int iParam1)
{
	if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_38[iParam0 /*31*/], false) && !ANIMSCENE::_0x0DF57F86FE71DBE5(Local_38[iParam0 /*31*/], func_409(iParam1))) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_38[iParam0 /*31*/], func_409(iParam1)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_38[iParam0 /*31*/], func_409(iParam1));
	}
}

int func_1734(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (__LIB_0__::func_154(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (__LIB_0__::func_154(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_214(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && __LIB_0__::func_154(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_588(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		__LIB_0__::func_215(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (__LIB_0__::func_216(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

int func_1735(int iParam0, int iParam1)
{
	var uVar0;
	return func_2086(&uVar0, iParam0, iParam1);
}

void func_1753(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_1734(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_1734(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_1756(char[4] cParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_3__::func_358(__LIB_8__::func_645(cParam0)))
	{
		__LIB_8__::func_660(cParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (__LIB_0__::func_31(iParam2))
		{
			sParam3 = __LIB_1__::func_464(iParam2, 0);
		}
		else
		{
			sParam3 = __LIB_4__::func_608(iParam2);
		}
	}
	if (!__LIB_9__::func_133(cParam0, iParam1))
	{
		func_2110(cParam0, iParam1, 372254, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!__LIB_4__::func_610(cParam0->f_5421, iParam1))
	{
		__LIB_4__::func_999(cParam0->f_5421, iParam1);
	}
	DECORATOR::DECOR_SET_INT(iParam1, __LIB_4__::func_611(), iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam1, false);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 10);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 11);
}

void func_1796(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_667(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

void func_1845(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_1399(&(uParam0->f_861), uParam0->f_872);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_85(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_5__::func_67(uParam0);
	__LIB_4__::func_622(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_977(uParam0, 4);
	__LIB_5__::func_69(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_570(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_804))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_861, 128));
	if (!__LIB_0__::func_1(uParam0->f_861, 128))
	{
		__LIB_1__::func_625();
	}
}

int func_1871(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	iParam1 = __LIB_11__::func_103(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = __LIB_8__::func_716(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1873(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_1873(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(*iParam0);
	iVar1 = __LIB_7__::func_601(iVar0, iParam1);
	if (func_2210(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { __LIB_0__::func_777(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (__LIB_7__::func_599(iParam1))
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
		}
		else
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
			__LIB_11__::func_103(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - __LIB_7__::func_601(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_1874(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_614(iParam0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_168(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!__LIB_9__::func_988(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			__LIB_0__::func_45("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

void func_1875(char* sParam0, int iParam1)
{
	__LIB_2__::func_259(&uLocal_1124);
	bLocal_501 = iParam1;
	sLocal_525 = sParam0;
	iLocal_36 = 1;
}

bool func_1877()
{
	struct<28> Var0;
	Var0.f_8 = -1;
	Var0.f_17 = 1097859072;
	Var0.f_18 = 1000;
	Var0.f_19 = 1067450368;
	Var0.f_20 = 5000;
	Var0.f_21 = 42;
	Var0.f_22 = 1103626240;
	Var0.f_23 = 1077936128;
	Var0.f_24 = 1106247680;
	Var0.f_25 = 1103101952;
	Var0.f_26 = 1097859072;
	Var0.f_27 = 1103626240;
	if (__LIB_0__::func_272(Local_709[0 /*18*/], 0))
	{
		if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_709[0 /*18*/], true, false), 10f, true, true) && !WEAPON::_0xBDD9C235D8D1052E(Global_35))
		{
			return true;
		}
		if (__LIB_2__::func_875(Global_35, Local_709[0 /*18*/], &Var0))
		{
			return true;
		}
		if (__LIB_2__::func_877(Global_35, Local_709[0 /*18*/], &Var0, 0))
		{
			return true;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_709[0 /*18*/], true, false), 50f))
		{
			return true;
		}
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if ((PED::IS_PED_SHOOTING(Global_35) && !WEAPON::_0xBDD9C235D8D1052E(Global_35)) && WEAPON::_0x705BE297EEBDB95D(__LIB_0__::func_399(Global_35, 1, 0, 0)))
		{
			return true;
		}
	}
	if (__LIB_0__::func_272(Local_709[0 /*18*/], 0))
	{
		if ((PED::IS_PED_SHOOTING(Global_35) && !WEAPON::_0xBDD9C235D8D1052E(Global_35)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_709[0 /*18*/], Global_35, 1, 1))
		{
			return true;
		}
	}
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_709[0 /*18*/], 17))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::_IS_WEAPON_BOW(__LIB_0__::func_399(Global_35, 1, 0, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1895(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_864(cParam0) == 25 || __LIB_6__::func_864(cParam0) == 26)
	{
		return;
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4096))
	{
		if (__LIB_6__::func_872(cParam0, 4) && !__LIB_6__::func_862(cParam0, 8))
		{
			if (!Global_1935630.f_12)
			{
				if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
					{
						if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
						{
							iVar1 = func_2226(128);
							if (__LIB_0__::func_154(iVar1))
							{
								if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, true, 0, false, false);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_2227(cParam0);
		}
	}
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 33));
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8192))
	{
		if (__LIB_6__::func_862(cParam0, 1024) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4))
		{
			if (!Global_1935630.f_12)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
		}
	}
}

void func_1978()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_0__::func_840(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_2281(0);
	func_2282(7);
	func_2283(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_2283(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_2283(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_1998()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_632(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_2000()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_632(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_2001()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_632(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

bool func_2023(int iParam0, int iParam1)
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
	if (!func_2303(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
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
				if (func_2023(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2023(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2023(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2023(iVar21, 1))
				{
				}
			}
		}
		func_2307();
		return true;
	}
	return false;
}

void func_2073(char[4] cParam0, char* sParam1)
{
	char cVar0[32];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false))
	{
		return;
	}
	StringCopy(&cVar0, sParam1, 32);
	func_1409(cVar0, &(cParam0->f_7375), cParam0);
}

int func_2086(var uParam0, int iParam1, int iParam2)
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
		return func_2086(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2110(char[4] cParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_133(cParam0, iParam1))
	{
		if (!__LIB_9__::func_38(cParam0, iParam1, &iVar0))
		{
			if (!__LIB_8__::func_701(cParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 1);
	cParam0->f_5423[iVar0 /*65*/] = iParam1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (__LIB_0__::func_125(iParam3))
		{
			cParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 16);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam3))
		{
			cParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 8);
		}
	}
	cParam0->f_5423[iVar0 /*65*/].f_4 = sParam4;
	cParam0->f_5423[iVar0 /*65*/].f_7 = iParam5;
	cParam0->f_5423[iVar0 /*65*/].f_6 = iParam6;
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (iParam8 == -1)
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == __LIB_0__::func_398(7))
			{
				cParam0->f_5423[iVar0 /*65*/].f_9 = 40;
			}
			else
			{
				cParam0->f_5423[iVar0 /*65*/].f_9 = __LIB_4__::func_633(iParam1);
			}
		}
		else
		{
			cParam0->f_5423[iVar0 /*65*/].f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			cParam0->f_5423[iVar0 /*65*/].f_10 = iParam8;
		}
		if (__LIB_0__::func_31(cParam0->f_5423[iVar0 /*65*/].f_10))
		{
		}
	}
	cParam0->f_13145++;
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
	{
		if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
		{
			EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			cParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 372254;
			iVar1++;
		}
		__LIB_9__::func_134(cParam0, iParam1, 2, 4);
		__LIB_9__::func_135(cParam0, iParam1, 2500, 8);
		__LIB_9__::func_135(cParam0, iParam1, 2500, 512);
		__LIB_9__::func_136(cParam0, iParam1, 5000, 512);
		if (cParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_9__::func_137(cParam0, iParam1, -2147483648);
		}
	}
}

int func_2210(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	if (__LIB_1__::func_16(iParam0))
	{
		iVar1 = __LIB_0__::func_402(iParam0);
		if (__LIB_0__::func_144(iParam1, 0))
		{
			if (__LIB_7__::func_599(iParam1))
			{
				__LIB_7__::func_681(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_2417(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_2226(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1338(&uVar0, iParam0, 0);
	iVar9 = func_2086(&uVar4, iParam0, 0);
	if (iVar8 == 0)
	{
		if (iVar9 == 0)
		{
			if (__LIB_0__::func_27(iParam0, 256))
			{
				return joaat("WEAPON_UNARMED");
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return iVar9;
		}
	}
	else if (iVar9 == 0)
	{
		return iVar8;
	}
	if (WEAPON::_0xA2091482ED42EF85(Global_35, &uVar0) > WEAPON::_0xA2091482ED42EF85(Global_35, &uVar4) && !__LIB_0__::func_27(iParam0, 64))
	{
		return iVar8;
	}
	return iVar9;
}

void func_2227(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1935630.f_12)
	{
		if (cParam0->f_7374 != 0 && cParam0->f_7374 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (iVar0 != cParam0->f_7374)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, cParam0->f_7374, true, 0, false, false);
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, cParam0->f_7374, 0, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, cParam0->f_7374) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, cParam0->f_7374, true, 0, false, false);
				}
			}
		}
		else if ((__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4)) && __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == 0 || iVar1 == joaat("WEAPON_UNARMED"))
				{
					iVar2 = func_2226(128);
					if (__LIB_0__::func_154(iVar2))
					{
						if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar2, false, 0, false, false);
						}
					}
				}
			}
			else
			{
				iVar3 = func_2226(128);
				if (__LIB_0__::func_154(iVar3))
				{
					if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar3, false, 0, false, false);
					}
				}
			}
		}
	}
}

void func_2281(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_653(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_2282(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_94(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			func_2445(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1628(iVar2, 0))
		{
			func_1796(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_2283(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_673(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_2447(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_2447(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_2447(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_2447(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_2447(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_2447(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_2449(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_2449(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_2449(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	func_1796(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

bool func_2303(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = __LIB_0__::func_357(iParam1);
		iVar5 = __LIB_0__::func_857(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_667(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { __LIB_0__::func_429(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = __LIB_0__::func_162(0);
			Var37 = { func_667(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { __LIB_0__::func_429(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = __LIB_0__::func_357(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (__LIB_0__::func_814(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

int func_2307()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	Var0 = { func_667(856287005, 0, 0) };
	Var5 = { __LIB_0__::func_429(856287005, Var0, Var0.f_4, 0) };
	iVar10 = __LIB_0__::func_357(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = __LIB_1__::func_81(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!__LIB_0__::func_144(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = __LIB_0__::func_857(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = __LIB_1__::func_81(Var5, iVar11, 0);
			if (!__LIB_0__::func_144(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (__LIB_0__::func_848(iVar14) || __LIB_0__::func_847(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (__LIB_0__::func_848(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!__LIB_0__::func_848(iVar14) && __LIB_0__::func_688(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (__LIB_1__::func_419(iVar11, &Var16, 1))
									{
										if (!__LIB_1__::func_556(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

int func_2417(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!__LIB_7__::func_654(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { __LIB_0__::func_777(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) < 0)
		{
			func_2417(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!__LIB_7__::func_653(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

void func_2445(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_2518(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

int func_2447(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (__LIB_0__::func_554(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1628(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_2445(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_2449(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_667(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

void func_2518(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_654(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		__LIB_1__::func_192(uParam0);
	}
}

