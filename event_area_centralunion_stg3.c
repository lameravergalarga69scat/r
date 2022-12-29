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
	struct<12> Local_21[20];
	int iLocal_262 = 0;
	struct<21> Local_263 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	float fLocal_301 = 0f;
	vector3 vLocal_302[24] = "";
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	float fLocal_307 = 0f;
	struct<44> Local_308 = { 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1072064102, 1072064102, -1082130432 } ;
	var uLocal_352 = -1082130432;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 1065353216;
	var uLocal_357 = 1;
	int iLocal_358 = 0;
	int iLocal_359[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_375[4] = { 0, 0, 0, 0 };
	var uLocal_380 = 0;
	vector3 vLocal_381[14] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<7> Local_424[9];
	struct<31> Local_488 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	var uLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531[4] = { 0, 0, 0, 0 };
	int iLocal_536[4] = { 0, 0, 0, 0 };
	int iLocal_541 = 0;
	var uLocal_542[4] = { 0, 0, 0, 0 };
	var uLocal_547[4] = { 0, 0, 0, 0 };
	float fLocal_552 = 0f;
	int iLocal_553[4] = { 0, 0, 0, 0 };
	struct<136> Local_558 = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1109393408, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 } ;
	var uLocal_694 = 1;
	var uLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	struct<691> Local_699 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = -1;
	var uLocal_1400 = 1;
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
	var uLocal_1411 = -1;
	var uLocal_1412 = 1;
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
	var uLocal_1423 = -1;
	var uLocal_1424 = 1;
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
	var uLocal_1435 = -1;
	var uLocal_1436 = 1;
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
	var uLocal_1448 = 1;
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
	var uLocal_1459 = -1;
	var uLocal_1460 = 1;
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
	var uLocal_1471 = -1;
	var uLocal_1472 = 1;
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
	var uLocal_1483 = -1;
	var uLocal_1484 = 1;
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
	var uLocal_1495 = -1;
	var uLocal_1496 = 1;
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
	var uLocal_1507 = -1;
	var uLocal_1508 = 1;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = -1;
	var uLocal_1520 = 1;
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
	var uLocal_1531 = -1;
	var uLocal_1532 = 1;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = -1;
	var uLocal_1544 = 1;
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
	var uLocal_1555 = -1;
	var uLocal_1556 = 1;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = -1;
	var uLocal_1568 = 1;
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
	var uLocal_1580 = 1;
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
	var uLocal_1591 = -1;
	var uLocal_1592 = 1;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = -1;
	var uLocal_1604 = 1;
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
	var uLocal_1615 = -1;
	var uLocal_1616 = 1;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = -1;
	var uLocal_1628 = 1;
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
	var uLocal_1639 = -1;
	var uLocal_1640 = 1;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = -1;
	var uLocal_1652 = 1;
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
	var uLocal_1663 = -1;
	var uLocal_1664 = 1;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = -1;
	var uLocal_1676 = 1;
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
	var uLocal_1687 = -1;
	var uLocal_1688 = 1;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = -1;
	var uLocal_1700 = 1;
	var uLocal_1701 = 0;
	struct<141> Local_1702 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
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
	var uLocal_1858 = 10;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
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
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
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
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
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
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 10;
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
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	struct<35> Local_1960 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1096810496, 1090519040, 0 } ;
	struct<35> Local_1995 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1096810496, 1090519040, 0 } ;
	int iLocal_2030[3] = { 0, 0, 0 };
	var uLocal_2034[4] = { 0, 0, 0, 0 };
	int iLocal_2039 = 0;
	var uLocal_2040 = 1;
	var uLocal_2041 = 0;
	int iLocal_2042 = 0;
	var uLocal_2043[3] = { 0, 0, 0 };
	int iLocal_2047[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2078 = 30;
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
	var uLocal_2109[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2140 = 0;
	struct<21> Local_2141[2];
	struct<52> Local_2184[2];
	int iLocal_2289 = 0;
	int iLocal_2290 = 0;
	int iLocal_2291 = 0;
	int iLocal_2292 = 0;
	int iLocal_2293 = 0;
	int iLocal_2294 = 0;
	int iLocal_2295 = 0;
	int iLocal_2296 = 0;
	struct<98> Local_2297 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	bool bLocal_2402 = false;
	int iLocal_2403 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_307 = 15f;
	iLocal_697 = 4;
	iLocal_2039 = -1;
	Local_1702.f_136 = 2;
	Local_1702.f_137 = uScriptParam_0;
	Local_1702.f_138 = 834;
	if (__LIB_0__::func_2() != 0)
	{
	}
	else
	{
		__LIB_8__::func_369();
		__LIB_8__::func_203(Local_1702.f_136);
		return;
	}
	if (!__LIB_7__::func_908(Local_1702.f_136, 2097152))
	{
		__LIB_8__::func_82(Local_1702.f_136, 2097152);
	}
	__LIB_8__::func_563(4, __LIB_8__::func_215(Local_1702.f_136));
	if (__LIB_7__::func_908(Local_1702.f_136, 33554432))
	{
		__LIB_8__::func_370(4);
		__LIB_8__::func_83(Local_1702.f_136, 33554432);
	}
	__LIB_8__::func_564(1024, __LIB_7__::func_908(Local_1702.f_136, 32));
	__LIB_8__::func_563(8, __LIB_7__::func_907(Local_1702.f_136, 128));
	__LIB_8__::func_563(256, __LIB_1__::func_707(joaat("DOCUMENT_HOMESTEAD_DEED"), 1, 0));
	__LIB_8__::func_563(1073741824 /* Float: 2f */, __LIB_8__::func_242(Local_1702.f_136));
	__LIB_8__::func_563(2, __LIB_8__::func_309(Local_1702.f_136));
	__LIB_8__::func_131(&Local_1702, 2048);
	__LIB_8__::func_234(0, &Local_1702, 0);
	if (__LIB_7__::func_907(Local_1702.f_136, 256))
	{
		return;
	}
	__LIB_8__::func_581(__LIB_0__::func_982(Local_1702.f_136));
	__LIB_8__::func_203(Local_1702.f_136);
	iLocal_14 = __LIB_0__::func_982(Local_1702.f_136);
	if (iLocal_14 != 2)
	{
	}
	else
	{
		__LIB_8__::func_563(1048576, __LIB_7__::func_908(Local_1702.f_136, 128));
	}
	__LIB_8__::func_565(16, func_19());
	__LIB_8__::func_235(&Local_1702, 32, (__LIB_7__::func_907(Local_1702.f_136, 524288) || iLocal_14 > 3));
	if (__LIB_7__::func_924(&Local_1702, 32))
	{
		if (!__LIB_0__::func_117(Local_1702.f_138, 32))
		{
			__LIB_0__::func_123(Local_1702.f_138, 32);
		}
		if (!__LIB_8__::func_343(1073741824 /* Float: 2f */))
		{
			iVar0 = 16;
			__LIB_3__::func_710(Global_1392194[Local_1702.f_136 /*10*/].f_6, iVar0);
		}
	}
	else
	{
		__LIB_7__::func_925(Global_1392194[Local_1702.f_136 /*10*/].f_6);
	}
	if (__LIB_8__::func_343(2))
	{
		Local_263.f_3 = 1;
	}
	func_28();
	__LIB_8__::func_255(Local_1702.f_136, Local_1702.f_137, &Local_699, &Local_1702, 1, 1);
	TASK::_0x9C8F42A5D1859DC1(Global_1392194[Local_1702.f_136 /*10*/].f_5);
	func_30();
	func_31();
	Local_699.f_4 = { __LIB_7__::func_943(Local_1702.f_136, __LIB_0__::func_982(Local_1702.f_136)) };
	func_33();
	func_34();
	if (2 != iLocal_14)
	{
	}
	else
	{
		iLocal_2293 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2076.216f, 1001.187f, 112.332f, 0f, 0f, 13.199f, 14.446f, 11.798f, 3.385f, "Roanoke Trapper - m_volTrapper");
		iLocal_2294 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2076.577f, 1000.768f, 113.832f, 0f, 0f, 14.334f, 1.507f, 2.813f, 4.877f, "Roanoke Trapper - m_volTrapperPrompt");
		iLocal_2295 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2073.717f, 1000.015f, 113.832f, 0f, 0f, 14.334f, 3.821f, 4.158f, 4.877f, "Roanoke Trapper - m_volTrapperOfflimits");
		__LIB_6__::func_594(18, 952, iLocal_2293, 90, iLocal_2294, iLocal_2295, 12, -1082130432 /* Float: -1f */, 0, 0);
		__LIB_2__::func_783();
	}
	if (__LIB_8__::func_343(8))
	{
		switch (iLocal_14)
		{
			case 1:
				iLocal_359[14] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA CURR - volCamp");
				VOLUME::_0x6E0D3C3F828DA773(iLocal_359[14], Global_1392194[Local_1702.f_136 /*10*/].f_6);
				VOLUME::_0x39816F6F94F385AD(iLocal_359[14], 2209.547f, 714.8749f, 100.4683f, 6.993175f, 0f, 18.50221f, 28.08039f, 73.75477f, 14.58272f);
				break;
			case 2:
				iLocal_359[14] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA CURR - volCamp");
				VOLUME::_0x6E0D3C3F828DA773(iLocal_359[14], Global_1392194[Local_1702.f_136 /*10*/].f_6);
				VOLUME::_0x39816F6F94F385AD(iLocal_359[14], 2184.146f, 862.6637f, 113.3422f, 0f, 0f, 15.49503f, 34.40951f, 61.63839f, 11.3804f);
				break;
		}
	}
	else if (iLocal_14 == 1)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_359[13]))
		{
			iLocal_359[13] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2236.119f, 702.1536f, 101.6987f, 0f, 0f, 18.48959f, 84.40749f, 113.9496f, 29.56531f, "EA CURR - volObjective");
		}
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_2402 = true;
	}
	func_37();
	while (true)
	{
		__LIB_2__::func_265(bLocal_2402, 8307, 0);
		if (!bLocal_2402)
		{
			switch (iLocal_2291)
			{
				case 0:
					if (!__LIB_7__::func_924(&Local_1702, 32) && Local_699.f_3 < (1 + (Local_699.f_1 + Local_699)))
					{
						__LIB_7__::func_927((1 + (Local_699 + Local_699.f_1)), &Local_699);
					}
					else if (func_41())
					{
						iLocal_2291 = 1;
					}
					break;
				case 1:
					__LIB_8__::func_371(16);
					if (!__LIB_8__::func_372(8))
					{
						if (!__LIB_7__::func_924(&Local_1702, 32))
						{
							if (__LIB_8__::func_128(&Local_699) && __LIB_3__::func_400(__LIB_1__::func_977(), &Local_21, 0, 0, 0, -1, 1))
							{
								__LIB_8__::func_373(8);
							}
						}
						else
						{
							__LIB_8__::func_373(8);
						}
					}
					if (!__LIB_8__::func_372(1) && func_48())
					{
						if (!__LIB_7__::func_924(&Local_1702, 32))
						{
							bVar1 = __LIB_8__::func_372(16);
							__LIB_8__::func_564(1, __LIB_8__::func_544(&Local_699, &Local_1702, &iLocal_2030, &uLocal_694, &bVar1, &iLocal_293));
							__LIB_8__::func_564(16, bVar1);
							if (__LIB_8__::func_372(1))
							{
								iLocal_293 = 0;
							}
						}
						else
						{
							__LIB_8__::func_373(1);
						}
					}
					if (!__LIB_8__::func_372(4))
					{
						if (!__LIB_7__::func_924(&Local_1702, 32))
						{
							__LIB_2__::func_935(Local_1702.f_138, 1, 0, 0, 0, 0);
							__LIB_8__::func_564(4, __LIB_8__::func_123(Local_1702.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1702.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1702.f_138), 301, false);
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1702.f_138), 297, true);
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1702.f_138), 315, true);
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1702.f_138), 146, true);
								PED::_0x24C82EF607105FAA(__LIB_2__::func_963(Local_1702.f_138), joaat("AVOID"));
								PED::_0xB8B6430EAD2D2437(__LIB_2__::func_963(Local_1702.f_138), 1220865053);
							}
						}
						else
						{
							__LIB_8__::func_373(4);
						}
					}
					Local_1702.f_35 = { Local_2297 };
					Local_558.f_33 = { Local_2297 };
					Local_558.f_33 = { Local_2297 };
					__LIB_8__::func_170(Local_1702.f_136, 1);
					if ((((((!CAM::IS_SCREEN_FADED_OUT() && __LIB_8__::func_372(1)) && __LIB_8__::func_372(4)) && __LIB_8__::func_372(8)) && func_54()) && __LIB_8__::func_566()) || __LIB_7__::func_924(&Local_1702, 32))
					{
						if (!__LIB_7__::func_924(&Local_1702, 32) && (__LIB_8__::func_343(4) || !func_56()))
						{
							__LIB_0__::func_928(&Local_2297, Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&Local_2297, __LIB_2__::func_963(Local_1702.f_138), "EA_Rcamp_Foreman", 0);
							switch (iLocal_14)
							{
								case 1:
									__LIB_0__::func_928(&Local_2297, iLocal_2030[0], "RAIL_INSTIGATOR", 0);
									__LIB_0__::func_928(&Local_2297, iLocal_2030[1], "RAIL_WORKER", 0);
									break;
								case 2:
									__LIB_0__::func_928(&Local_2297, iLocal_2030[0], "RCMP_GOONL", 0);
									__LIB_0__::func_928(&Local_2297, iLocal_2030[1], "RCMP_GOON1", 0);
									__LIB_0__::func_928(&Local_2297, iLocal_2030[2], "RCMP_GOON2", 0);
									break;
							}
							func_58();
						}
						else
						{
							__LIB_0__::func_928(&Local_2297, Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&Local_2297, __LIB_2__::func_963(Local_1702.f_138), "EA_Rcamp_Foreman", 0);
							__LIB_8__::func_124(Local_1702.f_138, 1);
						}
						__LIB_1__::func_148(&(vLocal_381[3 /*3*/]));
						func_61(0);
						iLocal_2291 = 2;
					}
					break;
				case 2:
					if (__LIB_7__::func_924(&Local_1702, 128) && __LIB_7__::func_935(Local_1702.f_136, __LIB_8__::func_343(4)))
					{
						func_63();
						func_64();
						__LIB_8__::func_545(0);
						__LIB_8__::func_132(&Local_1702, 128);
					}
					if (__LIB_0__::func_383())
					{
					}
					else
					{
						__LIB_8__::func_567();
						func_69();
						__LIB_8__::func_546(&Local_1702, &Local_699);
						if (!__LIB_7__::func_924(&Local_1702, 2) && !__LIB_7__::func_924(&Local_1702, 4))
						{
							func_71(&iLocal_295);
							func_72();
							func_73();
							if (!__LIB_7__::func_924(&Local_1702, 32) && __LIB_8__::func_343(4))
							{
								__LIB_8__::func_117(&Local_1702, 0, __LIB_0__::func_514((iLocal_14 == 1 && __LIB_8__::func_372(8192)), 1f, 2f), __LIB_0__::func_514((iLocal_14 == 1 && __LIB_8__::func_372(8192)), 1f, 1.75f));
							}
							__LIB_8__::func_357(&iLocal_2047, &uLocal_2109, &Local_1702, 835, 857, &iLocal_696, &iLocal_295, 10, __LIB_0__::func_514((iLocal_14 == 2 && !__LIB_8__::func_343(8)), 45f, -1f), 1);
							__LIB_7__::func_936(&iLocal_2047);
							__LIB_7__::func_936(&iLocal_2030);
							func_78(__LIB_2__::func_963(Local_1702.f_138));
							if (__LIB_8__::func_374(&iLocal_298, 1))
							{
								func_80();
							}
							if (func_81())
							{
								AUDIO::_0x36559148B78853B3(1, 0, 0);
								__LIB_8__::func_206(&Local_263, &Local_1702, 0);
								__LIB_0__::func_769();
								__LIB_1__::func_748(&(Local_1702.f_32), 1, 1);
								func_85(0);
								__LIB_8__::func_93(Local_1702.f_136, 8388608);
								__LIB_3__::func_334(&uLocal_2034);
								__LIB_8__::func_375();
								if (__LIB_0__::func_6(iLocal_292) && __LIB_1__::func_44(iLocal_292))
								{
									__LIB_1__::func_559(iLocal_292, 0, 2);
								}
								if (__LIB_5__::func_656(1))
								{
									__LIB_8__::func_131(&Local_1702, 4096);
									__LIB_8__::func_131(&Local_1702, 16384);
								}
								else
								{
									__LIB_8__::func_82(Local_1702.f_136, 1024);
								}
								__LIB_2__::func_303(__LIB_2__::func_963(func_93()), Global_35, "OPENS_FIRE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_8__::func_131(&Local_1702, 2);
								__LIB_8__::func_244(Local_1702.f_136, 3);
								func_96();
								iVar2 = 0;
								while (iVar2 < 4)
								{
									func_97(__LIB_2__::func_963(iLocal_553[iVar2]), iVar2);
									iVar2++;
								}
								__LIB_8__::func_207(&Local_1702);
								__LIB_8__::func_369();
								__LIB_8__::func_131(&Local_1702, 128);
							}
						}
						else
						{
							func_99(&iLocal_2047, &Local_1702);
							iVar3 = 0;
							while (iVar3 < 4)
							{
								func_97(__LIB_2__::func_963(iLocal_553[iVar3]), iVar3);
								iVar3++;
							}
							if (__LIB_8__::func_509(&Local_1702, &iLocal_2030, &uLocal_2040, &(Local_1702.f_139), 4, 0))
							{
								if (!__LIB_7__::func_924(&Local_1702, 4))
								{
									__LIB_8__::func_131(&Local_1702, 4);
									__LIB_8__::func_131(&Local_1702, 128);
									__LIB_0__::func_769();
								}
							}
						}
						if (iLocal_14 != 1)
						{
						}
						else
						{
							__LIB_8__::func_568(128, func_101());
							__LIB_8__::func_569(131072, ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2030[0], Global_35, 1, 1));
						}
						if (func_104())
						{
							if (func_105())
							{
								if (PED::_0x57779B55B83E2BEA(iLocal_2030[0]))
								{
									TASK::_0x2948235DB2058E99(iLocal_2030[0], 512);
									TASK::_0xB2F47A1AFDFCC595(iLocal_2030[0], 32);
								}
								AUDIO::_0x36559148B78853B3(1, 0, 0);
								if (!__LIB_8__::func_377(&(iLocal_2030[0])))
								{
									if (PED::_IS_PED_USING_SCENARIO_HASH(iLocal_2030[0], __LIB_8__::func_378()))
									{
										TASK::_0xD999E379265A4501(iLocal_2030[0], func_108(), 0);
									}
									if (((!__LIB_8__::func_372(2) && !__LIB_8__::func_372(67108864)) && !PED::_IS_PED_HOGTIED(iLocal_2030[0])) && !__LIB_8__::func_379(8192))
									{
										TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
										PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 225, false);
									}
								}
								__LIB_8__::func_370(128);
								if (__LIB_5__::func_259("RCMP_INST01A"))
								{
									__LIB_8__::func_111("RCMP_INST01A", 0);
								}
								if (__LIB_5__::func_259("RCMP_INST01B"))
								{
									__LIB_8__::func_111("RCMP_INST01B", 0);
								}
								__LIB_1__::func_748(&(Local_1702.f_32), 1, 1);
							}
						}
						if (__LIB_7__::func_924(&Local_1702, 4))
						{
							func_112();
						}
						if (!__LIB_7__::func_924(&Local_1702, 2) && !__LIB_7__::func_924(&Local_1702, 32))
						{
							__LIB_8__::func_217(&Local_263);
							if (__LIB_8__::func_88(&Local_263, 1))
							{
								func_115(&Local_1702, &Local_263, &(Local_2141[1 /*21*/]), &(Local_2184[1 /*52*/]));
							}
							else
							{
								__LIB_8__::func_89(&Local_263, 4);
							}
							if (func_117())
							{
								iLocal_2291 = 3;
							}
						}
					}
			}
		}
		if (func_118())
		{
			bLocal_2402 = true;
		}
		BUILTIN::WAIT(Local_1702.f_30);
	}
}

bool func_19()
{
	if (iLocal_14 != 3)
	{
		return false;
	}
	if (__LIB_8__::func_343(8))
	{
		return false;
	}
	if (__LIB_7__::func_907(Local_1702.f_136, 4))
	{
		return false;
	}
	return true;
}

void func_28()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_7__::func_924(&Local_1702, 256))
	{
		__LIB_8__::func_373(134217728);
	}
	else
	{
		__LIB_8__::func_371(134217728);
	}
	sVar2 = func_145(!__LIB_8__::func_557());
	sVar3 = __LIB_8__::func_383();
	sVar0 = func_147(0);
	sVar1 = func_148();
	__LIB_8__::func_352(Local_1702.f_138, sVar3);
	iVar6 = __LIB_8__::func_384(0);
	iVar7 = __LIB_8__::func_385(0);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		__LIB_8__::func_352(iVar5, sVar2);
		iVar5++;
	}
	iVar6 = __LIB_8__::func_384(1);
	iVar7 = __LIB_8__::func_385(1);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		if (__LIB_8__::func_386(iVar8, __LIB_8__::func_372(268435456)))
		{
			sVar4 = sVar1;
			DECORATOR::DECOR_SET_BOOL(iVar8, "bOnBreak", true);
		}
		else
		{
			sVar4 = func_147(!__LIB_8__::func_557());
		}
		__LIB_8__::func_352(iVar5, sVar4);
		iVar8 = __LIB_2__::func_963(iVar5);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar8) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar8, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar8))
		{
			TASK::TASK_PERSISTENT_CHARACTER(iVar8);
		}
		iVar5++;
	}
	iVar6 = __LIB_8__::func_384(2);
	iVar7 = __LIB_8__::func_385(2);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		if (__LIB_8__::func_386(iVar8, __LIB_8__::func_372(536870912)))
		{
			sVar4 = sVar1;
			DECORATOR::DECOR_SET_BOOL(iVar8, "bOnBreak", true);
		}
		else
		{
			sVar4 = func_147(!__LIB_8__::func_557());
		}
		__LIB_8__::func_352(iVar5, sVar4);
		iVar8 = __LIB_2__::func_963(iVar5);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar8) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar8, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar8))
		{
			TASK::TASK_PERSISTENT_CHARACTER(iVar8);
		}
		iVar5++;
	}
	iVar6 = __LIB_8__::func_384(3);
	iVar7 = __LIB_8__::func_385(3);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		if (__LIB_8__::func_386(iVar8, __LIB_8__::func_372(1073741824 /* Float: 2f */)))
		{
			sVar4 = sVar1;
			DECORATOR::DECOR_SET_BOOL(iVar8, "bOnBreak", true);
		}
		else
		{
			sVar4 = sVar0;
		}
		__LIB_8__::func_352(iVar5, sVar4);
		iVar8 = __LIB_2__::func_963(iVar5);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar8) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar8, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar8))
		{
			TASK::TASK_PERSISTENT_CHARACTER(iVar8);
		}
		iVar5++;
	}
	iVar6 = __LIB_8__::func_384(4);
	iVar7 = __LIB_8__::func_385(4);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		if (__LIB_8__::func_386(iVar8, __LIB_8__::func_372(-2147483648)))
		{
			sVar4 = sVar1;
			DECORATOR::DECOR_SET_BOOL(iVar8, "bOnBreak", true);
		}
		else
		{
			sVar4 = sVar0;
		}
		__LIB_8__::func_352(iVar5, sVar4);
		iVar8 = __LIB_2__::func_963(iVar5);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar8) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar8, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar8))
		{
			TASK::TASK_PERSISTENT_CHARACTER(iVar8);
		}
		iVar5++;
	}
}

void func_30()
{
	int iVar0;
	int iVar1;
	switch (iLocal_14)
	{
		case 1:
			iLocal_698 = 16;
			break;
		case 2:
			iLocal_698 = 16;
			break;
		case 3:
			iLocal_698 = 12;
			break;
		default:
			iLocal_698 = 0;
			break;
	}
	if (__LIB_7__::func_924(&Local_1702, 32))
	{
		iLocal_698 = 0;
	}
	iVar1 = 838;
	while (iVar1 <= 857)
	{
		if (iVar0 >= iLocal_698)
		{
			__LIB_0__::func_123(iVar1, 32);
			__LIB_8__::func_91(iVar1);
		}
		else
		{
			__LIB_0__::func_121(iVar1, 32);
			if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar1)))
			{
				PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iVar1));
			}
		}
		iVar0++;
		iVar1++;
	}
	iVar1 = 835;
	while (iVar1 <= 837)
	{
		if (iLocal_14 >= 4 || __LIB_7__::func_924(&Local_1702, 32))
		{
			__LIB_0__::func_123(iVar1, 32);
			__LIB_8__::func_91(iVar1);
		}
		else
		{
			__LIB_0__::func_121(iVar1, 32);
			if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar1)))
			{
				PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iVar1));
			}
		}
		iVar1++;
	}
}

void func_31()
{
	switch (iLocal_14)
	{
		case 1:
			iLocal_359[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2204.035f, 640.3217f, 96.741f, 0f, 0f, -60.07614f, 5.208361f, 7.620852f, 2.721208f, "EA CURR - volRcmpInt");
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_359[0], 0, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(iLocal_359[0], 0, 0, 0, -1, -1, 0);
			MISC::SET_BIT(&iLocal_2403, 0);
			iLocal_359[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2223.267f, 647.9719f, 94.57482f, 0.478955f, 2.413458f, -36.62908f, 4.519195f, 4.858881f, 2.951118f, "EA CURR - volSupplies");
			iLocal_359[10] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2204.302f, 646.4114f, 96.90681f, 0f, 0f, 29.00312f, 11.29416f, 14.33589f, 2.546122f, "EA CURR - volHorseBlock");
			break;
		case 2:
			iLocal_359[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2183.472f, 778.6752f, 107.4242f, 0f, 0f, 29.5373f, 8.13396f, 4.581317f, 2.768851f, "EA CURR - volRcmpInt");
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_359[0], 0, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(iLocal_359[0], 0, 0, 0, -1, -1, 0);
			MISC::SET_BIT(&iLocal_2403, 0);
			iLocal_359[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2186.02f, 814.3329f, 109.6374f, 4.299829f, 0f, -22.4855f, 4.833133f, 4.665477f, 3.172462f, "EA CURR - volSupplies");
			iLocal_359[10] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA CURR - volHorseBlock");
			VOLUME::_0xBCE668AAF83608BE(iLocal_359[10], 2187.902f, 780.4258f, 108.85f, 0f, 0f, 0f, 8.055205f, 14.14526f, 3.793504f);
			if (!__LIB_8__::func_343(8))
			{
				VOLUME::_0xBCE668AAF83608BE(iLocal_359[10], 2180.28f, 880.4135f, 116.4027f, 0f, 0f, 18.69797f, 7.689991f, 10.58464f, 4.79523f);
			}
			break;
		case 3:
			iLocal_359[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1944.993f, 947.5162f, 116.3001f, 0f, 0f, 19.37593f, 4.376749f, 6.216661f, 3.277854f, "EA CURR - volRcmpInt");
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_359[0], 0, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(iLocal_359[0], 0, 0, 0, -1, -1, 0);
			MISC::SET_BIT(&iLocal_2403, 0);
			iLocal_359[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1965.389f, 928.3877f, 117.2054f, 0f, 0f, 6.195515f, 4.741714f, 4.767919f, 3.094948f, "EA CURR - volSupplies");
			iLocal_359[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1948.251f, 943.1533f, 117.0246f, 0f, 0f, 12.15738f, 8.350031f, 7.58487f, 4f, "EA CURR - volHorseBlock");
			break;
	}
}

void func_33()
{
	switch (iLocal_14)
	{
		case 1:
			Local_699.f_7 = { 2177.521f, 618.694f, 90f };
			Local_699.f_10 = { 2256.262f, 700.7935f, 115f };
			break;
		case 2:
			Local_699.f_7 = { 2161.365f, 757.0647f, 100f };
			Local_699.f_10 = { 2231.307f, 864.3625f, 125f };
			break;
		case 3:
			Local_699.f_7 = { 1903.7f, 901.1866f, 100f };
			Local_699.f_10 = { 1987.008f, 961.9562f, 125f };
			break;
	}
}

void func_34()
{
	int iVar0;
	switch (iLocal_14)
	{
		case 1:
			iVar0 = -586415580;
			break;
		case 2:
			iVar0 = 1251859782;
			break;
		case 3:
			iVar0 = 994786977;
			break;
	}
	if (!__LIB_0__::func_30(iVar0) || !__LIB_8__::func_344(iVar0))
	{
		__LIB_0__::func_568(Local_699.f_4, 80f, 0);
		__LIB_1__::func_206(Local_699.f_4, 80f, 0);
	}
}

void func_37()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_553[iVar0] = -1;
		iVar0++;
	}
}

void func_38()
{
	int iVar0;
	vector3 vVar1;
	switch (iLocal_306)
	{
		case 0:
			if (__LIB_7__::func_924(&Local_1702, 16384))
			{
				if (!__LIB_7__::func_924(&Local_1702, 32768))
				{
					__LIB_8__::func_176(Local_1702.f_136);
				}
				else
				{
					__LIB_8__::func_82(Local_1702.f_136, 1024);
				}
			}
			if (__LIB_7__::func_924(&Local_1702, 2))
			{
				func_85(1);
			}
			if (iLocal_14 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 252, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 187, false);
			__LIB_8__::func_206(&Local_263, &Local_1702, 0);
			__LIB_8__::func_387();
			if (__LIB_7__::func_907(Local_1702.f_136, 128))
			{
				iVar0 = __LIB_2__::func_963(Local_1702.f_138);
				__LIB_8__::func_345(&iVar0);
			}
			switch (iLocal_14)
			{
				case 2:
					if (__LIB_1__::func_707(joaat("DOCUMENT_HOMESTEAD_DEED"), 1, 0))
					{
						Global_40.f_9096[Local_1702.f_136 /*12*/].f_2 = -1;
					}
					break;
			}
			if ((((iLocal_14 == 2 && !__LIB_7__::func_907(Local_1702.f_136, 524288)) && !__LIB_7__::func_907(Local_1702.f_136, 1048576)) && !__LIB_7__::func_907(Local_1702.f_136, 2097152)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_359[1]))
			{
				vVar1 = { VOLUME::_GET_VOLUME_SCALE(iLocal_359[1]) };
				PED::_0x9851DE7AEC10B4E1(VOLUME::_GET_VOLUME_COORDS(iLocal_359[1]), ((vVar1.x + vVar1.y) / 2f), 1, 0);
			}
			break;
		case 1:
			iLocal_296 = 0;
			while (iLocal_296 < 15)
			{
				__LIB_0__::func_172(iLocal_359[iLocal_296]);
				iLocal_296++;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(uLocal_380))
			{
				VOLUME::_0xFDFECC6EE4491E11(uLocal_380);
			}
			iLocal_296 = 0;
			while (iLocal_296 < iLocal_2030)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[iLocal_296]))
				{
					if (__LIB_1__::func_205(iLocal_2030[iLocal_296], Global_1392194[Local_1702.f_136 /*10*/].f_5, 1, 0))
					{
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_2030[iLocal_296], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2030[iLocal_296], true, false);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2030[iLocal_296], false, true);
						PED::DELETE_PED(&(iLocal_2030[iLocal_296]));
					}
					else
					{
						PED::SET_PED_KEEP_TASK(iLocal_2030[iLocal_296], true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2030[iLocal_296]));
					}
				}
				iLocal_296++;
			}
			break;
		case 2:
			if (MISC::_0x0D0AE5081F88CFE1(Local_699.f_15[0 /*32*/].f_1))
			{
				MISC::_0x154340E87D8CC178(Local_699.f_15[0 /*32*/].f_1);
			}
			if (MISC::_0x0D0AE5081F88CFE1(joaat("U_M_M_RACFOREMAN_01")))
			{
				MISC::_0x154340E87D8CC178(joaat("U_M_M_RACFOREMAN_01"));
			}
			__LIB_8__::func_375();
			VEHICLE::_0x8379E05871AD24E0();
			__LIB_0__::func_11();
			func_192(1);
			if (__LIB_0__::func_6(iLocal_292))
			{
				__LIB_1__::func_559(iLocal_292, 1, 2);
			}
			break;
		case 3:
			if (__LIB_8__::func_343(4))
			{
				__LIB_0__::func_769();
			}
			__LIB_8__::func_339(Local_1702.f_136, &Local_699, &Local_1702);
			__LIB_8__::func_136(&Local_699);
			HUD::_TEXT_DATABASE_DELETE(__LIB_8__::func_388());
			HUD::_TEXT_DATABASE_DELETE(__LIB_8__::func_389());
			break;
		default:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	iLocal_306++;
}

bool func_41()
{
	switch (iLocal_2292)
	{
		case 0:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				func_198();
				__LIB_8__::func_251(&Local_1702);
				__LIB_7__::func_895(&Local_1702, 1f);
			}
			else
			{
				return false;
			}
			__LIB_3__::func_284(&(Local_699.f_15));
			__LIB_3__::func_284(&(Local_699.f_304));
			__LIB_3__::func_284(&(Local_699.f_369));
			func_202();
			__LIB_8__::func_390();
			func_204();
			__LIB_3__::func_314(&(Local_699.f_690));
			__LIB_3__::func_314(&Local_21);
			__LIB_8__::func_391();
			if (__LIB_8__::func_343(4))
			{
				func_207(&Local_558);
			}
			if (iLocal_14 == 2 && !__LIB_8__::func_343(8))
			{
				__LIB_8__::func_570();
			}
			HUD::_TEXT_DATABASE_REQUEST(__LIB_8__::func_388());
			HUD::_TEXT_DATABASE_REQUEST(__LIB_8__::func_389());
			iLocal_2292 = 1;
			break;
		case 1:
			if (!func_48())
			{
			}
			if (!func_209())
			{
			}
			if (!func_54())
			{
			}
			if (!__LIB_8__::func_390())
			{
				return false;
			}
			if (!__LIB_8__::func_566())
			{
			}
			if (!__LIB_8__::func_571())
			{
				__LIB_8__::func_570();
				return false;
			}
			return true;
	}
	return false;
}

bool func_48()
{
	if (!__LIB_3__::func_366(&(Local_699.f_15)))
	{
		return false;
	}
	if (!__LIB_3__::func_366(&(Local_699.f_369)))
	{
		return false;
	}
	if (!__LIB_3__::func_366(&(Local_699.f_304)))
	{
		return false;
	}
	return true;
}

bool func_54()
{
	if (!__LIB_3__::func_315(&uLocal_1858))
	{
		return false;
	}
	if (!func_228())
	{
		return false;
	}
	return true;
}

bool func_56()
{
	if (__LIB_8__::func_343(2))
	{
		return true;
	}
	if (__LIB_8__::func_343(8))
	{
		return true;
	}
	switch (iLocal_14)
	{
		case 1:
			if (__LIB_7__::func_908(Local_1702.f_136, 256) && !__LIB_7__::func_908(Local_1702.f_136, 64))
			{
				return false;
			}
			break;
		case 2:
			if (__LIB_7__::func_908(Local_1702.f_136, 4) && !__LIB_7__::func_907(Local_1702.f_136, 262144))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_58()
{
	int iVar0;
	iVar0 = __LIB_2__::func_963(Local_1702.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (!__LIB_7__::func_955(iVar0, 1))
		{
			__LIB_2__::func_133(iVar0, "EA_Rcamp_Foreman", 0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
	}
	switch (iLocal_14)
	{
		case 1:
			if (!__LIB_7__::func_907(Local_1702.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					func_233(&iVar0, __LIB_8__::func_392(), 1, 0, 1, 0, 1, 1, 0);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, __LIB_8__::func_392(), 1.5f, -1, true, false, false, false);
			}
			break;
		case 2:
			if (!__LIB_7__::func_907(Local_1702.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, 2182.488f, 776.2858f, 106.6281f, 1.5f, -1, true, false, false, false);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1702.f_138)))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, 2186.958f, 784.5914f, 106.6165f, 1.5f, -1, true, false, false, false);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1702.f_138)))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, __LIB_8__::func_393(), 1.5f, -1, true, false, false, false);
			}
			break;
	}
}

void func_61(int iParam0)
{
	if (iLocal_14 == 2 && ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[3 /*12*/].f_8))
	{
		ENTITY::_0x56E0735D6273B227(Local_699.f_690[3 /*12*/].f_8, iParam0);
	}
}

void func_63()
{
	bool bVar0;
	char* sVar1[4];
	int iVar6[4];
	Local_1960.f_24 = 0;
	Local_1960.f_23 = 0;
	Local_1960.f_17 = 0;
	__LIB_1__::func_336(&(Local_1960.f_34), 1);
	if (!__LIB_8__::func_343(2))
	{
		switch (iLocal_14)
		{
			case 1:
				sVar1[0] = "TRACKS_AMB01A";
				iVar6[0] = 1;
				sVar1[1] = "TRACKS_AMB02A";
				iVar6[1] = 1;
				sVar1[2] = "TRACKS_AMB03A";
				iVar6[2] = 1;
				sVar1[3] = "TRACKS_AMB04A";
				iVar6[3] = 1;
				break;
			case 2:
				if (!__LIB_8__::func_547())
				{
					sVar1[0] = "TRACKS_AMB01B";
					iVar6[0] = 1;
					sVar1[1] = "TRACKS_AMB02B";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_AMB03B";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_AMB04B";
					iVar6[3] = 1;
				}
				else
				{
					sVar1[0] = "TRACKS_AMB01B_W";
					iVar6[0] = 1;
					sVar1[1] = "TRACKS_AMB02B_W";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_AMB03B_W";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_AMB04B_W";
					iVar6[3] = 1;
				}
				break;
			case 3:
				sVar1[0] = "TRACKS_AMB01C";
				iVar6[0] = 1;
				sVar1[1] = "TRACKS_AMB02C";
				iVar6[1] = 1;
				sVar1[2] = "TRACKS_AMB03C";
				iVar6[2] = 1;
				sVar1[3] = "TRACKS_AMB04C";
				iVar6[3] = 1;
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
	Local_1960.f_33 = 15f;
	__LIB_8__::func_95(&sVar1, &iVar6, &Local_1960, bVar0);
}

void func_64()
{
	bool bVar0;
	char* sVar1[4];
	int iVar6[4];
	Local_1995.f_24 = 0;
	Local_1995.f_23 = 0;
	Local_1995.f_17 = 0;
	__LIB_1__::func_336(&(Local_1995.f_34), 1);
	__LIB_1__::func_336(&(Local_1995.f_34), 8);
	if (!__LIB_8__::func_343(2))
	{
		switch (iLocal_14)
		{
			case 1:
				if (!__LIB_8__::func_343(8))
				{
					if (!__LIB_8__::func_372(4096))
					{
						sVar1[0] = "TRACKS_GUARD01A";
						iVar6[0] = 0;
					}
					else
					{
						sVar1[0] = "TRACKS_GUARD04A";
						iVar6[0] = 1;
					}
					sVar1[1] = "TRACKS_GUARD02A";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_GUARD03A";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04A";
					iVar6[3] = 1;
					bVar0 = true;
				}
				else
				{
					sVar1[0] = "TRACKS_GUARD01A_W";
					iVar6[0] = 0;
					sVar1[1] = "TRACKS_GUARD02A_W";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_GUARD03A_W";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04A_W";
					iVar6[3] = 1;
				}
				break;
			case 2:
				if (__LIB_8__::func_547())
				{
					sVar1[0] = "TRACKS_GUARD01B_W";
					iVar6[0] = 1;
					sVar1[1] = "TRACKS_GUARD02B_W";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_GUARD03B_W";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04B_W";
					iVar6[3] = 1;
				}
				else if (__LIB_7__::func_908(Local_1702.f_136, 128))
				{
					sVar1[0] = "TRACKS_GUARD01B_A";
					iVar6[0] = 0;
					sVar1[1] = "TRACKS_GUARD02B_A";
					iVar6[1] = 0;
					sVar1[2] = "TRACKS_GUARD03B_A";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04B_A";
					iVar6[3] = 1;
				}
				else
				{
					if (!__LIB_8__::func_372(4096))
					{
						if (!__LIB_7__::func_908(Local_1702.f_136, 64))
						{
							sVar1[0] = "TRACKS_GUARD01BA";
						}
						else
						{
							sVar1[0] = "TRACKS_GUARD01B";
						}
						iVar6[0] = 0;
					}
					else
					{
						sVar1[0] = "TRACKS_GUARD04B";
						iVar6[0] = 1;
					}
					sVar1[1] = "TRACKS_GUARD02B";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_GUARD03B";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04B";
					iVar6[3] = 1;
					bVar0 = true;
				}
				break;
			case 3:
				if (__LIB_7__::func_908(Local_1702.f_136, 64) || __LIB_7__::func_908(Local_1702.f_136, 128))
				{
					sVar1[0] = "TRACKS_GUARD01C";
				}
				else
				{
					sVar1[0] = "TRACKS_GUARD01CA";
				}
				iVar6[0] = 0;
				sVar1[1] = "TRACKS_GUARD02C";
				iVar6[1] = 1;
				sVar1[2] = "TRACKS_GUARD03C";
				iVar6[2] = 1;
				sVar1[3] = "TRACKS_GUARD04C";
				iVar6[3] = 1;
				break;
		}
	}
	Local_1995.f_33 = 15f;
	Local_1995.f_32 = 10f;
	__LIB_8__::func_95(&sVar1, &iVar6, &Local_1995, bVar0);
}

void func_69()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if ((iLocal_295 % 10) == 0)
	{
		iVar0 = 835;
		while (iVar0 <= 837)
		{
			iVar1 = __LIB_2__::func_963(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_7__::func_955(iVar1, 1))
			{
				sVar2 = __LIB_7__::func_959(Local_1702.f_136, -1);
				PED::SET_PED_CONFIG_FLAG(iVar1, 301, false);
				PED::SET_PED_CONFIG_FLAG(iVar1, 297, true);
				__LIB_2__::func_133(iVar1, sVar2, 0);
				PED::_0xB8B6430EAD2D2437(iVar1, joaat("STANDARD_PED_AGRO_GUARD"));
			}
			iVar0++;
		}
	}
}

void func_71(int iParam0)
{
	bool bVar0;
	if (!__LIB_8__::func_379(16) && (__LIB_8__::func_372(8388608) || __LIB_1__::func_313(&(vLocal_381[3 /*3*/]), 120f)))
	{
		if (!__LIB_8__::func_558())
		{
			__LIB_1__::func_148(&(vLocal_381[3 /*3*/]));
			return;
		}
		if (__LIB_8__::func_557() && !(__LIB_8__::func_372(268435456) && __LIB_8__::func_372(536870912)))
		{
			if (!__LIB_8__::func_372(268435456))
			{
				__LIB_8__::func_373(268435456);
				func_28();
				__LIB_1__::func_148(&(vLocal_381[3 /*3*/]));
			}
			else if (!__LIB_8__::func_372(536870912))
			{
				__LIB_8__::func_373(536870912);
				func_28();
				__LIB_1__::func_148(&(vLocal_381[3 /*3*/]));
			}
		}
		else if (!__LIB_8__::func_372(1073741824 /* Float: 2f */))
		{
			__LIB_8__::func_373(1073741824 /* Float: 2f */);
			func_28();
			__LIB_1__::func_148(&(vLocal_381[3 /*3*/]));
		}
		else if (!__LIB_8__::func_372(-2147483648))
		{
			__LIB_8__::func_373(-2147483648);
			func_28();
		}
		else if (__LIB_8__::func_379(8))
		{
			func_28();
			__LIB_8__::func_396(8);
			__LIB_8__::func_376(16);
		}
		__LIB_8__::func_371(8388608);
	}
	if (__LIB_8__::func_234(*iParam0, &Local_1702, 5) || (__LIB_7__::func_924(&Local_1702, 256) && !__LIB_8__::func_372(134217728)))
	{
		if (!__LIB_8__::func_558())
		{
			func_253();
		}
		func_28();
	}
	if (__LIB_0__::func_75(&(vLocal_381[3 /*3*/])))
	{
		bVar0 = true;
		if (__LIB_8__::func_372(134217728))
		{
			if (__LIB_8__::func_557())
			{
				__LIB_8__::func_373(268435456);
				__LIB_8__::func_373(536870912);
			}
			bVar0 = false;
		}
		if (!__LIB_2__::func_117(64))
		{
			__LIB_18__::func_106();
			func_253();
			bVar0 = false;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_75(&(vLocal_381[3 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_381[3 /*3*/]));
			}
		}
		else if (__LIB_0__::func_75(&(vLocal_381[3 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_381[3 /*3*/]));
		}
	}
}

void func_72()
{
	int iVar0;
	int iVar1;
	if (!__LIB_8__::func_379(8388608))
	{
		if (!__LIB_8__::func_343(32) && __LIB_3__::func_332(__LIB_8__::func_394(), 1) < 50f)
		{
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[iVar0 /*12*/].f_8))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_699.f_690[iVar0 /*12*/].f_8, false);
				}
				iVar0++;
			}
			__LIB_8__::func_376(8388608);
		}
	}
	else if (__LIB_8__::func_343(32) || __LIB_3__::func_332(__LIB_8__::func_394(), 1) > 75f)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[iVar1 /*12*/].f_8))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_699.f_690[iVar1 /*12*/].f_8, true);
			}
			iVar1++;
		}
		__LIB_8__::func_396(8388608);
	}
}

void func_73()
{
	int iVar0;
	struct<21> Var1;
	char* sVar30;
	if (!__LIB_8__::func_346(2048))
	{
		if (__LIB_8__::func_346(1024) || (MISC::GET_FRAME_COUNT() % 9) == 0)
		{
			__LIB_8__::func_397(1024);
			iVar0 = (MISC::GET_FRAME_COUNT() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			iLocal_296 = 0;
			while (iLocal_296 < 2)
			{
				sVar30 = __LIB_8__::func_510(&Var1, iLocal_296);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
				{
					AUDIO::_0xEF51242E35242B47(sVar30);
				}
				iLocal_296++;
			}
			if (iVar0 == 8)
			{
				__LIB_8__::func_397(2048);
			}
		}
	}
}

void func_78(int iParam0)
{
	func_266();
	if (!__LIB_8__::func_343(2) && (iLocal_299 >= 3 || __LIB_8__::func_88(&Local_263, 16)))
	{
		if (!__LIB_8__::func_88(&Local_263, 16))
		{
			__LIB_7__::func_961(&Local_263, 1);
			__LIB_8__::func_130(&Local_263, &(Local_2141[1 /*21*/]), &(Local_2184[1 /*52*/]));
			__LIB_8__::func_206(&Local_263, &Local_1702, 0);
			__LIB_7__::func_961(&Local_263, 16);
		}
		func_269(&iParam0);
	}
}

void func_80()
{
	int iVar0;
	__LIB_1__::func_148(&(vLocal_381[8 /*3*/]));
	if (iLocal_298 >= 3)
	{
		func_270();
		iLocal_298 = (iLocal_298 - 2);
		func_271();
		if (!__LIB_8__::func_88(&Local_263, 1))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, true))
			{
				Local_1702.f_10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
			__LIB_19__::func_565(&Local_263, &Local_1702, 65536, 51549, 1, 1);
			if (Local_263 == __LIB_2__::func_963(Local_1702.f_138))
			{
				StringCopy(&(Local_263.f_20[0 /*4*/]), __LIB_8__::func_510(&Local_263, 0), 32);
				StringCopy(&(Local_263.f_20[1 /*4*/]), __LIB_8__::func_510(&Local_263, 1), 32);
				__LIB_7__::func_961(&Local_263, 32);
			}
			else
			{
				func_274();
			}
		}
		else
		{
			__LIB_7__::func_961(&Local_263, 512);
		}
	}
}

int func_81()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = iLocal_305;
	if (__LIB_8__::func_343(32))
	{
		return 0;
	}
	else if (__LIB_8__::func_379(131072))
	{
		return 1;
	}
	else if ((__LIB_8__::func_88(&Local_263, 2) || func_275(&Local_1702, &(Local_1702.f_28))) || func_276(__LIB_2__::func_963(Local_1702.f_138), 0, &Local_1702, &(Local_1702.f_28), 0, 0))
	{
		if (__LIB_8__::func_88(&Local_263, 2))
		{
		}
		else if (Local_1702.f_28 == 65536)
		{
			__LIB_7__::func_898(&Local_1702, &(Local_1702.f_28));
			__LIB_2__::func_571(&Local_1702, &(Local_1702.f_28));
			return 0;
		}
		else if (Local_1702.f_28 == 32)
		{
			return func_279();
		}
		else if (!func_280())
		{
			if (!func_281())
			{
				return 1;
			}
			return 0;
		}
		return 1;
	}
	else if ((func_282(&iLocal_2047, &Local_1702, &(Local_1702.f_28), &iLocal_305, 0, (iLocal_696 - 1), 4) || (__LIB_8__::func_398() && (func_276(iLocal_2030[1], 0, &Local_1702, &(Local_1702.f_28), 0, 0) || func_276(iLocal_2030[2], 0, &Local_1702, &(Local_1702.f_28), 0, 0)))) || func_284())
	{
		if (!func_280())
		{
			if (__LIB_7__::func_960(&(Local_1702.f_28)))
			{
				if (!func_281())
				{
					if (!__LIB_8__::func_88(&Local_263, 1))
					{
						if (Local_1702.f_28 == 65536)
						{
							func_271();
							bVar1 = true;
						}
						func_270();
						__LIB_19__::func_565(&Local_263, &Local_1702, Local_1702.f_28, 51549, bVar1, bVar1);
						if (Local_263 == __LIB_2__::func_963(Local_1702.f_138))
						{
							StringCopy(&(Local_263.f_20[0 /*4*/]), __LIB_8__::func_510(&Local_263, 0), 32);
							StringCopy(&(Local_263.f_20[1 /*4*/]), __LIB_8__::func_510(&Local_263, 1), 32);
							__LIB_7__::func_961(&Local_263, 32);
						}
						else
						{
							func_274();
						}
					}
					else if (Local_263.f_13 > 2)
					{
						if (Local_1702.f_28 == 65536)
						{
							func_271();
						}
						__LIB_7__::func_961(&Local_263, 512);
					}
				}
				if (!__LIB_8__::func_88(&Local_263, 2))
				{
					__LIB_7__::func_898(&Local_1702, &(Local_1702.f_28));
					__LIB_2__::func_571(&Local_1702, &(Local_1702.f_28));
					return 0;
				}
			}
			else if (Local_1702.f_28 == 32)
			{
				return func_279();
			}
			return 1;
		}
	}
	else if (!__LIB_8__::func_343(16777216) && __LIB_19__::func_566(&Local_1702, &Local_263, 51549))
	{
		if (!__LIB_8__::func_88(&Local_263, 1))
		{
			func_270();
			__LIB_19__::func_565(&Local_263, &Local_1702, 1024, 51549, 0, 0);
			if (Local_263 == __LIB_2__::func_963(Local_1702.f_138))
			{
				StringCopy(&(Local_263.f_20[0 /*4*/]), __LIB_8__::func_510(&Local_263, 0), 32);
				StringCopy(&(Local_263.f_20[1 /*4*/]), __LIB_8__::func_510(&Local_263, 1), 32);
				__LIB_7__::func_961(&Local_263, 32);
			}
			else
			{
				func_274();
			}
		}
		else
		{
			__LIB_7__::func_961(&Local_263, 512);
		}
	}
	else if (func_287())
	{
		Local_1702.f_28 = 65536;
		return 1;
	}
	iVar2 = __LIB_0__::func_259(iVar0 + 4, (iLocal_696 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar2)
	{
		if (uLocal_2109[iVar0] < Local_1702.f_19 && __LIB_7__::func_962(iLocal_2047[iVar0], &Local_1702, 0, uLocal_2109[iVar0]))
		{
			__LIB_1__::func_148(&(vLocal_381[10 /*3*/]));
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (__LIB_1__::func_313(&(vLocal_381[10 /*3*/]), 10f))
	{
		__LIB_7__::func_898(&Local_1702, &(Local_1702.f_28));
	}
	return 0;
}

void func_85(bool bParam0)
{
	if (func_293(bParam0))
	{
		__LIB_8__::func_83(Local_1702.f_136, 4);
		__LIB_8__::func_85(Local_1702.f_136, 67108864);
		if (__LIB_7__::func_908(Local_1702.f_136, 128) && !__LIB_7__::func_907(Local_1702.f_136, 128))
		{
			__LIB_8__::func_85(Local_1702.f_136, 262144);
			__LIB_8__::func_253(&Local_1702);
		}
	}
}

int func_93()
{
	int iVar0[3];
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	iVar0[0] = 835;
	iVar0[1] = 836;
	iVar0[2] = 837;
	fVar5 = 999f;
	iVar6 = -1;
	iLocal_296 = 0;
	while (iLocal_296 < 3)
	{
		iVar7 = __LIB_2__::func_963(iVar0[iLocal_296]);
		fVar4 = __LIB_2__::func_118(iVar7, 1, 1);
		if (fVar4 < fVar5)
		{
			iVar6 = iVar0[iLocal_296];
			fVar5 = fVar4;
		}
		iLocal_296++;
	}
	return iVar6;
}

void func_96()
{
	int iVar0;
	int iVar1;
	__LIB_8__::func_123(Local_1702.f_138, 1, 1);
	iVar1 = __LIB_2__::func_963(Local_1702.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		__LIB_8__::func_277(&Local_1702, iVar1, &(uLocal_2043[0]), 1, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0);
	}
	__LIB_1__::func_748(&(Local_1702.f_32), 1, 1);
	__LIB_1__::func_748(&(Local_1702.f_33), 1, 1);
	__LIB_7__::func_927(iLocal_696, &Local_699);
	iLocal_697 = __LIB_0__::func_55(iLocal_697 > iVar0, (iLocal_697 - iVar0), 0);
	iVar0 = (iVar0 + __LIB_8__::func_532(&Local_1702, &iLocal_2047, &uLocal_2078, iLocal_697, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iLocal_696, 0, 0, 0, 1, __LIB_7__::func_940(&Local_1702, Local_1702.f_28), 1051260355 /* Float: 0.33f */));
	iLocal_697 = __LIB_0__::func_55(iLocal_697 > iVar0, (iLocal_697 - iVar0), 0);
	iVar0 = (iVar0 + func_319(&Local_1702, &iLocal_2030, &uLocal_2034, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, iLocal_697, 0, 0, 1, __LIB_7__::func_940(&Local_1702, Local_1702.f_28), 1051260355 /* Float: 0.33f */));
}

int func_97(int iParam0, int iParam1)
{
	bool bVar0;
	if (iParam1 >= 4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (!__LIB_7__::func_963(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/])))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_375[__LIB_8__::func_347(iParam1)]);
		__LIB_0__::func_172(iLocal_375[__LIB_8__::func_347(iParam1)]);
		return 1;
	}
	switch (iLocal_536[iParam1])
	{
		case 10:
		default:
			func_323(10, iParam1);
			break;
			if (__LIB_2__::func_598(iParam0, Local_424[__LIB_8__::func_399(iParam1) /*7*/], "worker", 0, 0, 1, 0))
			{
				bVar0 = true;
			}
			else if (func_325(&iParam0, iParam1))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_323(11, iParam1);
			}
			break;
		case 11:
			if (__LIB_2__::func_598(iParam0, Local_424[__LIB_8__::func_399(iParam1) /*7*/], "worker", 0, 0, 1, 0))
			{
				__LIB_8__::func_183(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), iParam0, "worker");
				__LIB_8__::func_183(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), Local_21[__LIB_8__::func_400(0, iParam1) /*12*/].f_8, "HAMMER");
				PHYSICS::ACTIVATE_PHYSICS(Local_21[__LIB_8__::func_400(0, iParam1) /*12*/].f_8);
				__LIB_8__::func_277(&Local_1702, iParam0, &(uLocal_2034[0]), 1, 0, Global_35);
				func_323(9, iParam1);
				POPULATION::_0x74C2B3DC0B294102(iLocal_375[__LIB_8__::func_347(iParam1)]);
				__LIB_0__::func_172(iLocal_375[__LIB_8__::func_347(iParam1)]);
				return 1;
			}
			break;
		case 9:
			if (!__LIB_0__::func_75(&(vLocal_381[6 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_381[6 /*3*/]));
			}
			return 1;
	}
	return 0;
}

int func_99(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
		{
			if (DECORATOR::DECOR_EXIST_ON((*iParam0)[iVar0], "bCowering"))
			{
				if ((func_276((*iParam0)[iVar0], 0, iParam1, &(iParam1->f_28), 0, 0) || __LIB_4__::func_102((*iParam0)[iVar0], iParam1, &(iParam1->f_28), 0)) || __LIB_0__::func_665((*iParam0)[iVar0], Global_35, 1, 1) < 8f)
				{
					if (iParam1->f_28 != 32 || __LIB_7__::func_971(iParam0[iVar0], iParam1, 1097859072 /* Float: 15f */))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[iVar0], joaat("REL_PLAYER_DISLIKE"));
						TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK((*iParam0)[iVar0], true);
						DECORATOR::DECOR_REMOVE((*iParam0)[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_101()
{
	__LIB_8__::func_396(8192);
	if (PED::_0xD0B7AEB56229D317(Global_35) == iLocal_2030[0])
	{
		__LIB_8__::func_376(8192);
		return true;
	}
	__LIB_8__::func_396(8192);
	if (!__LIB_0__::func_48(iLocal_2030[0], Global_35, 20f, 1))
	{
		return false;
	}
	if (PED::_0x7F9B9791D4CB71F6(iLocal_2030[0], Global_35, false, 0) == 0)
	{
		return false;
	}
	if (__LIB_3__::func_112(iLocal_2030[0], Global_35, 0.6f) != 0)
	{
		return false;
	}
	if (!WEAPON::_0xCB690F680A3EA971(Global_35, 4))
	{
		return false;
	}
	if (!PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		return false;
	}
	if (__LIB_2__::func_401(iLocal_2030[0], 1, 1, 1, 0, 0))
	{
		return true;
	}
	if (__LIB_4__::func_207(iLocal_2030[0], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
	{
		return true;
	}
	return false;
}

bool func_104()
{
	if (iLocal_14 != 1)
	{
		return false;
	}
	if (!__LIB_7__::func_908(Local_1702.f_136, 256))
	{
		return false;
	}
	if (__LIB_8__::func_343(128))
	{
		return false;
	}
	if (iLocal_529 == 4)
	{
		return false;
	}
	if (__LIB_1__::func_205(iLocal_2030[0], iLocal_359[5], 1, 0))
	{
		return false;
	}
	return true;
}

bool func_105()
{
	if (PED::_0x57779B55B83E2BEA(iLocal_2030[0]))
	{
		return true;
	}
	return false;
}

char* func_108()
{
	char* sVar0;
	vector3 vVar1;
	int iVar4;
	vVar1 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
	iVar4 = __LIB_4__::func_352(ENTITY::GET_ENTITY_COORDS(iLocal_2030[0], true, false), __LIB_8__::func_353(__LIB_8__::func_402()), vVar1, 1060437492 /* Float: 0.707f */);
	switch (iVar4)
	{
		case 0:
			iVar4 = __LIB_4__::func_352(ENTITY::GET_ENTITY_COORDS(iLocal_2030[0], true, false), __LIB_8__::func_353(__LIB_8__::func_402()), vVar1, 1f);
			switch (iVar4)
			{
				case 3:
					sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_L";
					break;
				case 2:
					sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_R";
					break;
			}
			break;
		case 2:
			sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_R";
			break;
		case 3:
			sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_L";
			break;
		case 1:
			iVar4 = __LIB_4__::func_352(ENTITY::GET_ENTITY_COORDS(iLocal_2030[0], true, false), __LIB_8__::func_353(__LIB_8__::func_402()), vVar1, 1f);
			switch (iVar4)
			{
				case 3:
					sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_BL";
					break;
				case 2:
					sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_BR";
					break;
			}
			break;
	}
	return sVar0;
}

void func_112()
{
	int iVar0;
	int iVar1;
	if (iLocal_2296 < 0)
	{
		return;
	}
	if (iLocal_2296 < Local_699)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[iLocal_2296]) && !PED::IS_PED_IN_COMBAT(iLocal_2030[iLocal_2296], 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_2030[iLocal_2296], true, false);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_2030[iLocal_2296], Global_35, 4, 0, 1000f, -1, 0);
			__LIB_3__::func_608(iLocal_2030[iLocal_2296]);
		}
	}
	else
	{
		iVar0 = 1;
	}
	if (iLocal_2296 < iLocal_696)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2047[iLocal_2296]) && !PED::IS_PED_IN_COMBAT(iLocal_2047[iLocal_2296], 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_2047[iLocal_2296], true, false);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_2047[iLocal_2296], Global_35, 4, 0, 1000f, -1, 0);
			__LIB_3__::func_608(iLocal_2047[iLocal_2296]);
		}
	}
	else
	{
		iVar1 = 1;
	}
	if (!(iVar0 && iVar1))
	{
		iLocal_2296++;
	}
}

void func_115(var uParam0, int* iParam1, int* iParam2, var uParam3)
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
		func_355(iParam1, iParam2, uParam3, 0);
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
			iParam1->f_5 = __LIB_8__::func_574(*iParam1, 0);
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
					__LIB_8__::func_336(&(uParam0->f_35), &(iParam1->f_20[0 /*4*/]), *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_2__::func_303(*iParam1, Global_35, &(iParam1->f_20[0 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				__LIB_2__::func_303(*iParam1, Global_35, __LIB_8__::func_186(iParam1, 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
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
					__LIB_8__::func_336(&(uParam0->f_35), &(iParam1->f_20[1 /*4*/]), *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_2__::func_303(*iParam1, Global_35, &(iParam1->f_20[1 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				__LIB_2__::func_303(*iParam1, Global_35, __LIB_8__::func_186(iParam1, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
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

int func_117()
{
	int iVar0;
	func_372();
	func_373();
	if (__LIB_7__::func_924(&Local_1702, 32))
	{
		return 0;
	}
	if (!__LIB_8__::func_379(16777216))
	{
		if (func_374(0) && func_375(0))
		{
			func_376(0, 1, 1);
			__LIB_8__::func_376(16777216);
		}
	}
	iVar0 = __LIB_2__::func_963(Local_1702.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		__LIB_0__::func_928(&Local_2297, iVar0, "EA_Rcamp_Foreman", 0);
		Local_558.f_33 = { Local_2297 };
		Local_1702.f_35 = { Local_2297 };
		func_377(&iVar0);
		func_378(&iVar0);
		PED::SET_PED_RESET_FLAG(iVar0, 49, true);
	}
	func_379(&iVar0);
	func_380(&iVar0);
	func_381();
	if (!__LIB_8__::func_372(128))
	{
		func_382(1);
		__LIB_8__::func_373(128);
	}
	if (!__LIB_8__::func_343(8))
	{
		switch (iLocal_14)
		{
			case 1:
				func_383(&iVar0);
				break;
			case 2:
				__LIB_1__::func_976(&iVar0);
				break;
		}
	}
	if (!__LIB_8__::func_343(4))
	{
		func_385();
		return 0;
	}
	if (__LIB_8__::func_343(8))
	{
		if (!__LIB_8__::func_343(2))
		{
			return func_386(&iVar0);
		}
		else
		{
			return func_387(&iVar0);
		}
	}
	switch (iLocal_14)
	{
		case 1:
			if (!__LIB_8__::func_343(2))
			{
				return func_388(&iVar0);
			}
			else
			{
				return func_387(&iVar0);
			}
			break;
		case 2:
			if (!__LIB_8__::func_343(2))
			{
				return func_389(&iVar0);
			}
			else
			{
				return func_387(&iVar0);
			}
			break;
		case 3:
			if (!__LIB_8__::func_343(2))
			{
				return func_390(&iVar0);
			}
			else
			{
				return func_387(&iVar0);
			}
			break;
	}
	return 0;
}

bool func_118()
{
	if (__LIB_7__::func_924(&Local_1702, 1024))
	{
		return true;
	}
	if (bLocal_2402)
	{
		return true;
	}
	if (__LIB_8__::func_343(2048))
	{
		return false;
	}
	if (iLocal_2291 == 1)
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
	if (__LIB_8__::func_97(bLocal_2402))
	{
		return true;
	}
	return false;
}

char* func_145(bool bParam0)
{
	switch (iLocal_14)
	{
		case 1:
			if (__LIB_8__::func_343(8))
			{
				if (__LIB_7__::func_924(&Local_1702, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Guard_stage1_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Guard_stage1";
				}
			}
			else if (bParam0)
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage1";
			}
			else if (__LIB_7__::func_924(&Local_1702, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage1_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage1";
			}
			break;
		case 2:
			if (__LIB_8__::func_343(8) && !__LIB_8__::func_548())
			{
				if (__LIB_7__::func_924(&Local_1702, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Guard_stage2_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Guard_stage2";
				}
			}
			else if (__LIB_7__::func_924(&Local_1702, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage2_Shelter";
			}
			else if (!__LIB_8__::func_343(1048576) || __LIB_8__::func_548())
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage2";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage2";
			}
			break;
		case 3:
			if (__LIB_7__::func_924(&Local_1702, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage3_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage3";
			}
			break;
	}
	return "";
}

char* func_147(bool bParam0)
{
	switch (iLocal_14)
	{
		case 1:
			if (__LIB_8__::func_343(8))
			{
				if (__LIB_7__::func_924(&Local_1702, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage1_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage1";
				}
			}
			else if (bParam0)
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_AllWork";
			}
			else if (__LIB_7__::func_924(&Local_1702, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_AllWork";
			}
			break;
		case 2:
			if (__LIB_8__::func_343(8) && !__LIB_8__::func_548())
			{
				if (__LIB_7__::func_924(&Local_1702, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage2_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage2";
				}
			}
			else if (__LIB_7__::func_924(&Local_1702, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2_Shelter";
			}
			else if (!__LIB_8__::func_343(1048576) || __LIB_8__::func_548())
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2_AllBreak";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2";
			}
			break;
		case 3:
			if (__LIB_7__::func_924(&Local_1702, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage3_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage3";
			}
			break;
	}
	return "";
}

char* func_148()
{
	switch (iLocal_14)
	{
		case 1:
			if (__LIB_8__::func_343(8))
			{
				if (__LIB_7__::func_924(&Local_1702, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage1_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage1_AllBreak";
				}
			}
			else if (__LIB_7__::func_924(&Local_1702, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_AllBreak";
			}
			break;
		case 2:
			if (__LIB_8__::func_343(8) && !__LIB_8__::func_548())
			{
				if (__LIB_7__::func_924(&Local_1702, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage2_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage2_AllBreak";
				}
			}
			else if (__LIB_7__::func_924(&Local_1702, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2_AllBreak";
			}
			break;
		case 3:
			if (__LIB_7__::func_924(&Local_1702, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage3_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage3_AllBreak";
			}
			break;
	}
	return "";
}

void func_192(bool bParam0)
{
	if (__LIB_8__::func_343(8388608) || bParam0)
	{
		if (__LIB_2__::func_1(iLocal_2042, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_2042, 136, false);
			func_432(iLocal_2042, 0);
		}
		__LIB_8__::func_380(8388608);
	}
}

void func_198()
{
	func_63();
	func_64();
	if (__LIB_7__::func_924(&Local_1702, 32))
	{
		Local_699 = 0;
		Local_699.f_1 = 0;
		return;
	}
	switch (iLocal_14)
	{
		case 1:
			Local_699 = 3;
			if (__LIB_7__::func_908(Local_1702.f_136, 16) && !__LIB_7__::func_908(Local_1702.f_136, 32))
			{
				__LIB_8__::func_397(524288);
			}
			if ((!__LIB_7__::func_907(Local_1702.f_136, 128) && !__LIB_7__::func_908(Local_1702.f_136, 8)) && !__LIB_7__::func_908(Local_1702.f_136, 16))
			{
				if (!__LIB_7__::func_908(Local_1702.f_136, 32))
				{
					Local_699.f_15[0 /*32*/].f_6 = { 2215.099f, 694.2832f, 97.988f };
					Local_699.f_15[0 /*32*/].f_9 = -155.9f;
					Local_699.f_15[0 /*32*/].f_1 = joaat("S_M_M_MICGUARD_01");
					Local_699.f_15[0 /*32*/].f_3 = -1919484294;
					StringCopy(&(Local_699.f_15[0 /*32*/].f_23), "0931_A_M_M_Civ_White_AVOID_01", 64);
				}
				if (!__LIB_7__::func_908(Local_1702.f_136, 256))
				{
					Local_699.f_15[1 /*32*/].f_6 = { 2196.471f, 651.7592f, 95.78493f };
					Local_699.f_15[1 /*32*/].f_9 = -47.65f;
					Local_699.f_15[1 /*32*/].f_20 = -1;
					Local_699.f_15[1 /*32*/].f_1 = joaat("S_M_Y_RACRAILWORKER_01");
					Local_699.f_15[2 /*32*/].f_6 = { 2198.87f, 652.9921f, 95.78352f };
					Local_699.f_15[2 /*32*/].f_9 = 43.7f;
					Local_699.f_15[2 /*32*/].f_20 = -1;
					Local_699.f_15[2 /*32*/].f_1 = joaat("S_M_Y_RACRAILWORKER_01");
				}
			}
			break;
		case 2:
			Local_699 = 0;
			if ((__LIB_1__::func_707(joaat("DOCUMENT_HOMESTEAD_DEED"), 1, 0) || __LIB_8__::func_547()) || __LIB_7__::func_908(Local_1702.f_136, 128))
			{
				__LIB_8__::func_397(1048576);
			}
			else
			{
				Local_699 += 3;
				Local_699.f_15[0 /*32*/].f_6 = { 2178.166f, 880.4974f, 113.1879f };
				Local_699.f_15[0 /*32*/].f_9 = 169.05f;
				Local_699.f_15[0 /*32*/].f_20 = -1;
				Local_699.f_15[0 /*32*/].f_1 = joaat("G_M_M_UNICORNWALLGOONS_01");
				Local_699.f_15[0 /*32*/].f_3 = -1063184219;
				Local_699.f_15[1 /*32*/].f_6 = { 2175.762f, 878.707f, 113.1591f };
				Local_699.f_15[1 /*32*/].f_9 = -110.33f;
				Local_699.f_15[1 /*32*/].f_20 = -1;
				Local_699.f_15[1 /*32*/].f_1 = joaat("G_M_M_UNICORNWALLGOONS_01");
				Local_699.f_15[1 /*32*/].f_3 = -766329848;
				Local_699.f_15[2 /*32*/].f_6 = { 2176.169f, 880.1107f, 113.1453f };
				Local_699.f_15[2 /*32*/].f_9 = -110.33f;
				Local_699.f_15[2 /*32*/].f_20 = -1;
				Local_699.f_15[2 /*32*/].f_1 = joaat("G_M_M_UNICORNWALLGOONS_01");
				Local_699.f_15[2 /*32*/].f_3 = -472883453;
			}
			break;
		case 3:
			Local_699 = 0;
			break;
		case 4:
			Local_699 = 0;
			Local_699.f_1 = 0;
			break;
	}
}

void func_202()
{
	int iVar0;
	if (iLocal_14 != 2 || __LIB_8__::func_343(8))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_8__::func_188(&(Local_424[__LIB_8__::func_399(iVar0) /*7*/]), "scenario@proc@unionrailroad@work_hammer@main", __LIB_8__::func_403(5), 0);
			iVar0++;
		}
	}
	if (__LIB_8__::func_343(8))
	{
	}
	else
	{
		switch (iLocal_14)
		{
			case 1:
				if (!__LIB_7__::func_908(Local_1702.f_136, 256))
				{
					__LIB_8__::func_188(&(Local_424[3 /*7*/]), "script@proc@eventareas@unionrailroad@rcmp@leadout@int@leadout", __LIB_8__::func_403(3), 0);
					__LIB_8__::func_188(&(Local_424[4 /*7*/]), "script@proc@eventareas@unionRailroad@rcmp@leadin@int@ilo", __LIB_8__::func_403(4), 0);
				}
				__LIB_8__::func_188(&(Local_424[0 /*7*/]), "script@proc@eventareas@unionrailroad@stageonerailroad", __LIB_8__::func_403(0), 64);
				__LIB_8__::func_188(&(Local_424[2 /*7*/]), "script@proc@eventareas@unionrailroad@stageonetree", __LIB_8__::func_403(2), 0);
				break;
			case 2:
				__LIB_8__::func_188(&(Local_424[2 /*7*/]), "script@proc@eventareas@unionrailroad@stageTwoTent", __LIB_8__::func_403(2), 0);
				__LIB_8__::func_188(&(Local_424[0 /*7*/]), "script@proc@eventareas@unionrailroad@stagetwogoons", __LIB_8__::func_403(0), 0);
				break;
			case 3:
				__LIB_8__::func_188(&(Local_424[0 /*7*/]), "scenario@PROC@UNIONRAILROAD@work_line@main", __LIB_8__::func_403(0), 0);
				break;
		}
	}
}

void func_204()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (iLocal_14 != 2 || __LIB_8__::func_343(8))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Local_21[__LIB_8__::func_400(0, iVar0) /*12*/].f_7 = joaat("P_SLEDGEHAMMER01X");
			Local_21[__LIB_8__::func_400(0, iVar0) /*12*/] = { 2204.3f, 642.27f, 90.65f };
			Local_21[__LIB_8__::func_400(0, iVar0) /*12*/].f_3 = 120.9f;
			Local_21[__LIB_8__::func_400(0, iVar0) /*12*/].f_10 = 0;
			bVar1 = TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1197006729);
			iVar2 = 0;
			while (iVar2 < 4)
			{
				Local_21[__LIB_8__::func_559(iVar2, iVar0) /*12*/].f_7 = joaat("P_SPIKE01X");
				Local_21[__LIB_8__::func_559(iVar2, iVar0) /*12*/] = { __LIB_8__::func_404(iVar0, iVar2, bVar1) };
				Local_21[__LIB_8__::func_559(iVar2, iVar0) /*12*/].f_4 = { __LIB_8__::func_405(iVar0, iVar2, bVar1) };
				Local_21[__LIB_8__::func_559(iVar2, iVar0) /*12*/].f_10 = 0;
				__LIB_1__::func_581(&(Local_21[__LIB_8__::func_559(iVar2, iVar0) /*12*/].f_11), 75);
				iVar2++;
			}
			iVar0++;
		}
	}
	if (__LIB_8__::func_406(16))
	{
		Local_699.f_690[15 /*12*/].f_7 = joaat("P_STICK_RAILROAD01X");
		Local_699.f_690[15 /*12*/] = { __LIB_8__::func_407() };
		Local_699.f_690[15 /*12*/].f_3 = 0f;
		Local_699.f_690[15 /*12*/].f_10 = 0;
		__LIB_1__::func_336(&(Local_699.f_690[15 /*12*/].f_11), 2);
		Local_699.f_690[16 /*12*/].f_7 = joaat("P_STICK_RAILROAD01X");
		Local_699.f_690[16 /*12*/] = { __LIB_8__::func_407() };
		Local_699.f_690[16 /*12*/].f_3 = 0f;
		Local_699.f_690[16 /*12*/].f_10 = 0;
		__LIB_1__::func_336(&(Local_699.f_690[16 /*12*/].f_11), 2);
		Local_699.f_690[17 /*12*/].f_7 = joaat("P_STICK_RAILROAD01X");
		Local_699.f_690[17 /*12*/] = { __LIB_8__::func_407() };
		Local_699.f_690[17 /*12*/].f_3 = 0f;
		Local_699.f_690[17 /*12*/].f_10 = 0;
		__LIB_1__::func_336(&(Local_699.f_690[17 /*12*/].f_11), 2);
		Local_699.f_690[18 /*12*/].f_7 = joaat("P_STICK_RAILROAD01X");
		Local_699.f_690[18 /*12*/] = { __LIB_8__::func_407() };
		Local_699.f_690[18 /*12*/].f_3 = 0f;
		Local_699.f_690[18 /*12*/].f_10 = 0;
		__LIB_1__::func_336(&(Local_699.f_690[18 /*12*/].f_11), 2);
		Local_699.f_690[19 /*12*/].f_7 = joaat("P_CS_SINGLERAILTRACK01X");
		Local_699.f_690[19 /*12*/] = { __LIB_8__::func_407() };
		Local_699.f_690[19 /*12*/].f_3 = 0f;
		Local_699.f_690[19 /*12*/].f_10 = 0;
		__LIB_1__::func_336(&(Local_699.f_690[19 /*12*/].f_11), 2);
		Local_699.f_690[20 /*12*/].f_7 = joaat("P_CS_RAILROADTRACK02X");
		Local_699.f_690[20 /*12*/] = { __LIB_8__::func_407() };
		Local_699.f_690[20 /*12*/].f_3 = 0f;
		Local_699.f_690[20 /*12*/].f_10 = 0;
		__LIB_1__::func_336(&(Local_699.f_690[20 /*12*/].f_11), 2);
	}
	switch (iLocal_14)
	{
		case 1:
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[3 /*12*/].f_7 = joaat("P_CHAIR_CRATE02X");
			}
			else
			{
				Local_699.f_690[3 /*12*/].f_7 = 0;
			}
			Local_699.f_690[3 /*12*/] = { 2204.122f, 642.5524f, 95.60305f };
			Local_699.f_690[3 /*12*/].f_3 = 120.9f;
			Local_699.f_690[3 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[4 /*12*/].f_7 = joaat("P_CIGARETTE_CS01X");
			}
			else
			{
				Local_699.f_690[4 /*12*/].f_7 = 0;
			}
			Local_699.f_690[4 /*12*/] = { 2204.3f, 642.27f, 90.65f };
			Local_699.f_690[4 /*12*/].f_3 = 120.9f;
			Local_699.f_690[4 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[5 /*12*/].f_7 = joaat("P_CIGARETTE_CS01X");
			}
			else
			{
				Local_699.f_690[5 /*12*/].f_7 = 0;
			}
			Local_699.f_690[5 /*12*/] = { 2204.3f, 642.27f, 90.65f };
			Local_699.f_690[5 /*12*/].f_3 = 120.9f;
			Local_699.f_690[5 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[6 /*12*/].f_7 = joaat("P_CIGARETTE_CS01X");
			}
			else
			{
				Local_699.f_690[6 /*12*/].f_7 = 0;
			}
			Local_699.f_690[6 /*12*/] = { 2204.3f, 642.27f, 90.65f };
			Local_699.f_690[6 /*12*/].f_3 = 120.9f;
			Local_699.f_690[6 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[12 /*12*/].f_7 = joaat("P_CIGARETTE_CS01X");
			}
			else
			{
				Local_699.f_690[12 /*12*/].f_7 = 0;
			}
			Local_699.f_690[12 /*12*/] = { 2204.3f, 642.27f, 90.65f };
			Local_699.f_690[12 /*12*/].f_3 = 120.9f;
			Local_699.f_690[12 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[7 /*12*/].f_7 = joaat("P_MATCHES01X");
			}
			else
			{
				Local_699.f_690[7 /*12*/].f_7 = 0;
			}
			Local_699.f_690[7 /*12*/] = { 2204.3f, 642.27f, 90.65f };
			Local_699.f_690[7 /*12*/].f_3 = 120.9f;
			Local_699.f_690[7 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[8 /*12*/].f_7 = joaat("P_MATCHSTICK01X");
			}
			else
			{
				Local_699.f_690[8 /*12*/].f_7 = 0;
			}
			Local_699.f_690[8 /*12*/] = { 2204.3f, 642.2f, 95.65f };
			Local_699.f_690[8 /*12*/].f_3 = 120.9f;
			Local_699.f_690[8 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[9 /*12*/].f_7 = joaat("P_CS_BILLSTACK03X");
			}
			else
			{
				Local_699.f_690[9 /*12*/].f_7 = 0;
			}
			Local_699.f_690[9 /*12*/] = { 2259.46f, 785.18f, 97.18f };
			Local_699.f_690[9 /*12*/].f_4 = { -7.6f, -3.1f, -98.89f };
			Local_699.f_690[9 /*12*/].f_10 = 0;
			__LIB_1__::func_581(&(Local_699.f_690[9 /*12*/].f_11), 1);
			__LIB_1__::func_581(&(Local_699.f_690[9 /*12*/].f_11), 2);
			__LIB_1__::func_581(&(Local_699.f_690[9 /*12*/].f_11), 32);
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[10 /*12*/].f_7 = joaat("P_CS_BILLSTACK03X");
			}
			else
			{
				Local_699.f_690[10 /*12*/].f_7 = 0;
			}
			Local_699.f_690[10 /*12*/] = { 2204.3f, 642.27f, 90.65f };
			Local_699.f_690[10 /*12*/].f_3 = 120.9f;
			Local_699.f_690[10 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[11 /*12*/].f_7 = joaat("P_PEN01X");
			}
			else
			{
				Local_699.f_690[11 /*12*/].f_7 = 0;
			}
			Local_699.f_690[11 /*12*/] = { 2204.3f, 642.27f, 90.65f };
			Local_699.f_690[11 /*12*/].f_3 = 120.9f;
			Local_699.f_690[11 /*12*/].f_10 = 0;
			Local_699.f_690[0 /*12*/].f_7 = __LIB_8__::func_408();
			Local_699.f_690[0 /*12*/] = { 2205.05f, 641.5634f, 95.5918f };
			Local_699.f_690[0 /*12*/].f_3 = 164.33f;
			Local_699.f_690[0 /*12*/].f_10 = 1;
			__LIB_1__::func_336(&(Local_699.f_690[0 /*12*/].f_11), 2);
			Local_699.f_690[1 /*12*/].f_7 = __LIB_8__::func_408();
			Local_699.f_690[1 /*12*/] = { 2204.482f, 643.2203f, 95.5754f };
			Local_699.f_690[1 /*12*/].f_3 = 56.04f;
			Local_699.f_690[1 /*12*/].f_10 = 0;
			__LIB_1__::func_336(&(Local_699.f_690[0 /*12*/].f_11), 2);
			Local_699.f_690[2 /*12*/].f_7 = __LIB_8__::func_409();
			Local_699.f_690[2 /*12*/] = { __LIB_8__::func_410() };
			Local_699.f_690[2 /*12*/].f_3 = __LIB_8__::func_411();
			Local_699.f_690[2 /*12*/].f_10 = 0;
			__LIB_1__::func_336(&(Local_699.f_690[0 /*12*/].f_11), 2);
			break;
		case 2:
			Local_699.f_690[14 /*12*/].f_7 = joaat("P_BOOKBOX01X");
			Local_699.f_690[14 /*12*/] = { 2182.38f, 775.87f, 106.18f };
			Local_699.f_690[14 /*12*/].f_3 = 26f;
			Local_699.f_690[14 /*12*/].f_10 = 0;
			__LIB_1__::func_581(&(Local_699.f_690[14 /*12*/].f_11), 67);
			if (!__LIB_8__::func_343(1048576))
			{
				Local_699.f_690[3 /*12*/].f_7 = joaat("P_CAMPFIRE05X");
			}
			else
			{
				Local_699.f_690[3 /*12*/].f_7 = 0;
			}
			Local_699.f_690[3 /*12*/] = { __LIB_8__::func_412() };
			Local_699.f_690[3 /*12*/].f_3 = 0f;
			Local_699.f_690[3 /*12*/].f_10 = 0;
			__LIB_1__::func_581(&(Local_699.f_690[3 /*12*/].f_11), 1);
			__LIB_1__::func_581(&(Local_699.f_690[3 /*12*/].f_11), 2);
			if (!__LIB_8__::func_343(1048576))
			{
				Local_699.f_690[13 /*12*/].f_7 = joaat("P_MUGCOFFEE01X");
			}
			else
			{
				Local_699.f_690[13 /*12*/].f_7 = 0;
			}
			Local_699.f_690[13 /*12*/] = { 2181.265f, 776.1055f, 106.9767f };
			Local_699.f_690[13 /*12*/].f_3 = 0f;
			Local_699.f_690[13 /*12*/].f_10 = 0;
			__LIB_1__::func_581(&(Local_699.f_690[13 /*12*/].f_11), 1);
			__LIB_1__::func_581(&(Local_699.f_690[13 /*12*/].f_11), 2);
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[12 /*12*/].f_7 = joaat("S_CENTRALUNION_ENV");
			}
			else
			{
				Local_699.f_690[12 /*12*/].f_7 = 0;
			}
			Local_699.f_690[12 /*12*/] = { 2204.3f, 642.27f, 95.65f };
			Local_699.f_690[12 /*12*/].f_3 = 120.9f;
			Local_699.f_690[12 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[4 /*12*/].f_7 = joaat("P_CIGARETTE_CS01X");
			}
			else
			{
				Local_699.f_690[4 /*12*/].f_7 = 0;
			}
			Local_699.f_690[4 /*12*/] = { 2181.2f, 779.1f, 105.5f };
			Local_699.f_690[4 /*12*/].f_3 = 120.9f;
			Local_699.f_690[4 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[5 /*12*/].f_7 = joaat("P_CIGARETTE_CS01X");
			}
			else
			{
				Local_699.f_690[5 /*12*/].f_7 = 0;
			}
			Local_699.f_690[5 /*12*/] = { 2178.156f, 880.2429f, 112.6794f };
			Local_699.f_690[5 /*12*/].f_3 = 120.9f;
			Local_699.f_690[5 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[11 /*12*/].f_7 = joaat("P_PEN01X");
			}
			else
			{
				Local_699.f_690[11 /*12*/].f_7 = 0;
			}
			Local_699.f_690[11 /*12*/] = { 2181.2f, 779.1f, 105.5f };
			Local_699.f_690[11 /*12*/].f_3 = 120.9f;
			Local_699.f_690[11 /*12*/].f_10 = 0;
			if (!__LIB_8__::func_343(8))
			{
				Local_699.f_690[9 /*12*/].f_7 = joaat("P_FOLDEDBILLS01X");
			}
			else
			{
				Local_699.f_690[9 /*12*/].f_7 = 0;
			}
			Local_699.f_690[9 /*12*/] = { 2181.2f, 779.1f, 105.5f };
			Local_699.f_690[9 /*12*/].f_3 = 120.9f;
			Local_699.f_690[9 /*12*/].f_10 = 0;
			Local_699.f_690[0 /*12*/].f_7 = __LIB_8__::func_409();
			Local_699.f_690[0 /*12*/] = { __LIB_8__::func_413(0, 0) };
			Local_699.f_690[0 /*12*/].f_3 = __LIB_8__::func_414(0);
			Local_699.f_690[0 /*12*/].f_10 = 0;
			__LIB_1__::func_336(&(Local_699.f_690[0 /*12*/].f_11), 2);
			break;
		case 3:
			Local_699.f_690[0 /*12*/].f_7 = __LIB_8__::func_409();
			Local_699.f_690[0 /*12*/] = { __LIB_8__::func_393() };
			Local_699.f_690[0 /*12*/].f_3 = __LIB_8__::func_415();
			Local_699.f_690[0 /*12*/].f_10 = 0;
			__LIB_1__::func_336(&(Local_699.f_690[0 /*12*/].f_11), 2);
			break;
	}
}

void func_207(float fParam0)
{
	fParam0->f_132 = 1;
	*fParam0 = -3.5f;
	fParam0->f_12 = 20f;
	fParam0->f_13 = 10f;
	if (!__LIB_8__::func_343(2))
	{
		if (__LIB_7__::func_907(Local_1702.f_136, 128))
		{
			switch (iLocal_14)
			{
				case 1:
					fParam0->f_11 = 1;
					if (!__LIB_7__::func_907(Local_1702.f_136, 16777216))
					{
						fParam0->f_1 = "RCMP_F01AN";
						fParam0->f_135 = "RCMP_F01ANP";
						fParam0->f_5 = "RCMP_F01ANN";
					}
					else
					{
						fParam0->f_1 = "RCMP_F02AN";
						fParam0->f_135 = "RCMP_F02ANP";
						fParam0->f_5 = "RCMP_F02ANN";
					}
					break;
				case 2:
					if (func_473())
					{
						if (!__LIB_7__::func_907(Local_1702.f_136, 16777216))
						{
							fParam0->f_1 = "RCMP_F01BN";
							fParam0->f_135 = "RCMP_F01BNP";
							fParam0->f_5 = "RCMP_F01BNN";
						}
						else
						{
							fParam0->f_1 = "RCMP_F02BN";
							fParam0->f_135 = "RCMP_F02BNP";
							fParam0->f_5 = "RCMP_F02BNN";
						}
					}
					break;
			}
		}
		else
		{
			switch (iLocal_14)
			{
				case 1:
					fParam0->f_1 = "RCMP_F01A";
					break;
				case 2:
					__LIB_8__::func_577(fParam0);
					break;
				case 3:
					if (func_473())
					{
						fParam0->f_1 = "RCMP_F01DH";
						fParam0->f_3 = "RCMP_F02DH";
						fParam0->f_135 = "RCMP_F03DHP";
						fParam0->f_5 = "RCMP_F03DHN";
					}
					else
					{
						fParam0->f_1 = "RCMP_F01D";
						fParam0->f_5 = "RCMP_F01DN";
					}
					break;
				case 4:
					break;
			}
		}
	}
	else if (__LIB_1__::func_985())
	{
		fParam0->f_1 = "RCMP_LNTA";
	}
	else
	{
		fParam0->f_1 = "RCMP_LNTB";
	}
	fParam0->f_8 = 0;
}

bool func_209()
{
	if (!__LIB_3__::func_316(&(Local_699.f_690)) || !__LIB_3__::func_316(&Local_21))
	{
		return false;
	}
	return true;
}

bool func_228()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_424[iVar1 /*7*/]))
		{
			if (!__LIB_7__::func_990(&(Local_424[iVar1 /*7*/])))
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

void func_233(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (__LIB_2__::func_118(*iParam0, 1, 1) > 230f)
	{
		__LIB_8__::func_380(67108864);
		return;
	}
	if (!__LIB_8__::func_343(67108864))
	{
		if (!bParam10 && PED::_IS_PED_USING_SCENARIO_HASH(*iParam0, __LIB_8__::func_416(bParam7, bParam9)))
		{
			__LIB_8__::func_370(67108864);
		}
		else if (bParam9)
		{
		}
		else
		{
			func_501(iParam0, vParam1, &iLocal_522, iParam4, iParam5, bParam6, bParam7, bParam8, bParam9);
		}
	}
}

void func_253()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_359[12]))
	{
		if (!__LIB_8__::func_557() && (__LIB_7__::func_924(&Local_1702, 256) || !__LIB_2__::func_117(64)))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_359[12], 534496, 0, 0, -1, -1, 0);
		}
		else
		{
			POPULATION::_0x74C2B3DC0B294102(iLocal_359[12]);
		}
	}
}

void func_266()
{
	if (iLocal_299 < 3 || !func_529())
	{
		if (iLocal_358 <= 1 && __LIB_1__::func_313(&(vLocal_381[12 /*3*/]), 90f))
		{
			iLocal_299 = (iLocal_299 - 1);
			func_530(0);
			if (iLocal_299 > 0)
			{
				__LIB_1__::func_148(&(vLocal_381[12 /*3*/]));
			}
		}
	}
	if (__LIB_1__::func_313(&(vLocal_381[8 /*3*/]), 30f))
	{
		iLocal_298 = (iLocal_298 - 1);
		if (iLocal_298 > 0)
		{
			__LIB_1__::func_148(&(vLocal_381[8 /*3*/]));
		}
	}
}

void func_269(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (iLocal_2039 != -1)
	{
		iVar0 = __LIB_2__::func_963(iLocal_2039);
		Local_308.f_40 = iVar0;
	}
	if (func_529())
	{
		if (iLocal_358 > 1)
		{
			func_355(&Local_263, &(Local_2141[1 /*21*/]), &(Local_2184[1 /*52*/]), ENTITY::DOES_ENTITY_EXIST(iVar0));
		}
		if (!__LIB_2__::func_763(Local_1702.f_138, 0))
		{
			__LIB_8__::func_123(Local_1702.f_138, 1, 1);
		}
		if (!__LIB_8__::func_372(512) && ENTITY::DOES_ENTITY_EXIST(Local_308.f_40))
		{
			__LIB_8__::func_373(512);
			if (!ENTITY::IS_ENTITY_DEAD(Local_308.f_40))
			{
				PED::_0xAAB050DA48B57978(Local_308.f_40, "Default_Angry", Global_35, -1, 4);
			}
			if (iLocal_358 == 4)
			{
				Local_1702.f_28 = 65536;
				__LIB_8__::func_376(131072);
			}
		}
		if (__LIB_0__::func_75(&(vLocal_381[13 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_381[13 /*3*/]));
		}
		if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_381[7 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_381[7 /*3*/]));
		}
		if (func_533())
		{
			fVar1 = 7.5f;
		}
		else
		{
			fVar1 = 20f;
		}
		if (__LIB_1__::func_285(&(vLocal_381[7 /*3*/]), fVar1))
		{
			switch (iLocal_358)
			{
				case 0:
					if (!__LIB_8__::func_346(65536) && !__LIB_8__::func_88(&Local_263, 16))
					{
						__LIB_8__::func_336(&(Local_1702.f_35), func_534(), *iParam0, Global_35, 0, 0, 1, 1);
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						Local_308.f_40 = *iParam0;
						Local_308 = 0;
					}
					__LIB_0__::func_37(&(vLocal_381[7 /*3*/]));
					break;
				case 1:
					if (!__LIB_8__::func_346(65536) && !__LIB_8__::func_88(&Local_263, 16))
					{
						if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && __LIB_2__::func_215(*iParam0, Global_35, 0, 25f, 0))
						{
							__LIB_8__::func_336(&(Local_1702.f_35), func_534(), *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							return;
						}
					}
					if (iLocal_2039 == -1)
					{
						if (__LIB_8__::func_417(Local_263.f_5))
						{
							iLocal_2039 = Local_263.f_5;
						}
						else
						{
							iLocal_2039 = func_93();
						}
					}
					if (iLocal_2039 != -1)
					{
						__LIB_8__::func_123(iLocal_2039, 1, 1);
						iVar0 = __LIB_2__::func_963(iLocal_2039);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						__LIB_8__::func_397(65536);
						__LIB_7__::func_961(&Local_263, 16);
						__LIB_3__::func_334(&uLocal_2043);
						__LIB_1__::func_491(&(Local_2141[1 /*21*/]), 3);
						Local_263.f_16 = 0;
						Local_263 = iVar0;
						TASK::CLEAR_PED_TASKS(iVar0, true, false);
						iVar2 = __LIB_7__::func_967(iVar0);
						if (__LIB_0__::func_154(iVar2))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar2, true, 0, false, false);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_2140);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_2140);
						if (__LIB_0__::func_154(iVar2))
						{
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						}
						if (__LIB_2__::func_118(iVar0, 1, 1) > 10f)
						{
							TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 10f, 2f, 0f, 1);
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 500, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_2140);
						TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_2140);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_2140);
						PED::_0xAAB050DA48B57978(iVar0, "Default_Angry", Global_35, -1, 4);
						Local_308.f_40 = iVar0;
						Local_308 = 0;
					}
					break;
				case 2:
					if (iLocal_2039 == -1)
					{
						if (__LIB_8__::func_417(Local_263.f_5))
						{
							iLocal_2039 = Local_263.f_5;
						}
						else
						{
							iLocal_2039 = func_93();
						}
						__LIB_8__::func_123(iLocal_2039, 1, 1);
						iVar0 = __LIB_2__::func_963(iLocal_2039);
					}
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && __LIB_2__::func_215(iVar0, Global_35, 0, 12.5f, 0))
					{
						if (__LIB_8__::func_343(2) && __LIB_2__::func_763(Local_1702.f_138, 0))
						{
							TASK::CLEAR_PED_TASKS(*iParam0, true, false);
							__LIB_8__::func_124(Local_1702.f_138, 1);
						}
						TASK::CLEAR_PED_TASKS(iVar0, true, false);
						__LIB_8__::func_89(&Local_263, 1);
						__LIB_2__::func_303(iVar0, Global_35, func_534(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_315(249295937, iVar0, 1);
						Local_308.f_40 = iVar0;
						Local_308 = 0;
						__LIB_0__::func_37(&(vLocal_381[7 /*3*/]));
					}
					else
					{
						return;
					}
					break;
				case 3:
					if (iLocal_2039 == -1)
					{
						if (__LIB_8__::func_417(Local_263.f_5))
						{
							iLocal_2039 = Local_263.f_5;
						}
						else
						{
							iLocal_2039 = func_93();
						}
						__LIB_8__::func_123(iLocal_2039, 1, 1);
						iVar0 = __LIB_2__::func_963(iLocal_2039);
					}
					__LIB_2__::func_303(iVar0, Global_35, func_534(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(249295937, iVar0, 1);
					Local_308.f_40 = iVar0;
					Local_308 = 0;
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
					iVar3 = __LIB_7__::func_967(iVar0);
					if (__LIB_0__::func_154(iVar3))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar3, true, 0, false, false);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_2140);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_2140);
					if (__LIB_0__::func_154(iVar3))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_2140);
					TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_2140);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_2140);
					__LIB_0__::func_37(&(vLocal_381[7 /*3*/]));
					break;
				case 4:
					__LIB_8__::func_376(131072);
					Local_1702.f_28 = 65536;
					__LIB_0__::func_37(&(vLocal_381[7 /*3*/]));
					break;
			}
			iLocal_358++;
		}
	}
	else
	{
		if (__LIB_0__::func_75(&(vLocal_381[7 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_381[7 /*3*/]));
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && __LIB_0__::func_163(iVar0, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, Global_35, -1, false, 1);
		}
		if (__LIB_8__::func_372(512))
		{
			if (!__LIB_0__::func_75(&(vLocal_381[13 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_381[13 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_381[13 /*3*/]), 15f))
			{
				if (__LIB_8__::func_343(2) && __LIB_2__::func_763(Local_1702.f_138, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
					{
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						PED::_0x935CF6E42BAF7F4D(*iParam0);
					}
					__LIB_8__::func_124(Local_1702.f_138, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
					PED::_0x935CF6E42BAF7F4D(iVar0);
				}
				__LIB_8__::func_124(iLocal_2039, 1);
				iLocal_2039 = -1;
				__LIB_8__::func_371(512);
			}
		}
		else if (iLocal_358 > 1)
		{
			if (!__LIB_0__::func_75(&(vLocal_381[13 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_381[13 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_381[13 /*3*/]), 30f))
			{
				iLocal_358 = (iLocal_358 - 1);
				__LIB_1__::func_148(&(vLocal_381[13 /*3*/]));
			}
		}
		else if (__LIB_0__::func_75(&(vLocal_381[13 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_381[13 /*3*/]));
		}
	}
	if (__LIB_8__::func_372(512))
	{
		if (!__LIB_0__::func_163(Local_308.f_40, 242628503))
		{
			__LIB_8__::func_221(&Local_308, 0);
		}
	}
}

void func_270()
{
	if (__LIB_8__::func_88(&Local_263, 16))
	{
		Local_263.f_1 = Local_263.f_3;
	}
}

void func_271()
{
	iLocal_299++;
	__LIB_1__::func_148(&(vLocal_381[12 /*3*/]));
}

int func_272(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_2__::func_963(Local_1702.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		(*uParam0)[iVar0] = iVar1;
		iVar0++;
	}
	return iVar0;
}

void func_274()
{
	int iVar0;
	if (Local_263 == iLocal_2030[0])
	{
		return;
	}
	iVar0 = __LIB_8__::func_574(Local_263, 0);
	switch (iVar0)
	{
		case 834:
		case 835:
		case 836:
		case 837:
			return;
	}
	iVar0 = func_93();
	Local_263 = __LIB_2__::func_963(iVar0);
	switch (Local_263.f_16)
	{
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
			break;
		case 5:
			Local_263.f_16 = 6;
			break;
		default:
			Local_263.f_16 = 8;
			break;
	}
	__LIB_7__::func_961(&Local_263, 256);
}

bool func_275(int iParam0, var uParam1)
{
	if (__LIB_8__::func_343(1073741824 /* Float: 2f */))
	{
		if ((((__LIB_4__::func_102(__LIB_2__::func_963(Local_1702.f_138), iParam0, uParam1, 0) || ((iLocal_295 % 3) == 1 && __LIB_7__::func_918(&iLocal_2047, iParam0, uParam1, 0, (iLocal_696 / 3)))) || ((iLocal_295 % 3) == 2 && __LIB_7__::func_918(&iLocal_2047, iParam0, uParam1, (iLocal_696 / 3) + 1, (iLocal_696 * 2 / 3)))) || ((iLocal_295 % 3) == 0 && __LIB_7__::func_918(&iLocal_2047, iParam0, uParam1, (iLocal_696 * 2 / 3) + 1, iLocal_696))) || __LIB_7__::func_918(&iLocal_2030, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_276(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_4__::func_23(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_8__::func_189(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

int func_279()
{
	if (!func_574())
	{
		__LIB_2__::func_571(&Local_1702, &(Local_1702.f_28));
		__LIB_7__::func_898(&Local_1702, &(Local_1702.f_28));
		return 0;
	}
	if (!__LIB_18__::func_126(&Local_1702))
	{
		if (!__LIB_8__::func_0(&(Global_1935630.f_34[0])))
		{
			return 0;
		}
		__LIB_8__::func_131(&Local_1702, 4096);
	}
	return 1;
}

bool func_280()
{
	if (iLocal_14 != 1)
	{
		return false;
	}
	if (__LIB_8__::func_343(8))
	{
		return false;
	}
	if (!__LIB_8__::func_343(256))
	{
		return false;
	}
	if (__LIB_1__::func_205(iLocal_2030[0], Global_1392194[Local_1702.f_136 /*10*/].f_6, 1, 0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
	{
		return false;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_2030[0], true, false), 20f, 512) >= 1)
	{
		return true;
	}
	return false;
}

bool func_281()
{
	if (Local_1702.f_28 == 8192 && func_577())
	{
		return true;
	}
	return false;
}

bool func_282(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_276((*iParam0)[*iParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_284()
{
	int iVar0;
	iVar0 = func_578();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		__LIB_8__::func_396(32);
		return false;
	}
	if (!__LIB_1__::func_205(iVar0, Global_1392194[Local_1702.f_136 /*10*/].f_6, 0, 0))
	{
		__LIB_8__::func_396(32);
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 4, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 6, false);
	if (iLocal_14 == 2 && __LIB_1__::func_248(iVar0, &iLocal_2030))
	{
		return false;
	}
	if (iLocal_14 != 1)
	{
		__LIB_8__::func_396(32);
		return true;
	}
	if (__LIB_8__::func_377(&iVar0))
	{
		__LIB_8__::func_396(32);
		return true;
	}
	if (iVar0 != iLocal_2030[0])
	{
		__LIB_8__::func_396(32);
		return true;
	}
	if (func_580())
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 4, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 6, true);
		__LIB_8__::func_376(32);
		return false;
	}
	__LIB_8__::func_396(32);
	return true;
}

bool func_287()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bVar0 = false;
	if (PED::_0x5407B7288D0478B7(Global_35, 512) > 0)
	{
		iVar1 = ITEMSET::CREATE_ITEMSET(true);
		iVar2 = PED::_0x7BE607DAFF382FD2(Global_35, iVar1, 512);
		if (iVar2 > 0)
		{
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				bVar0 = false;
				iVar4 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
				if (ENTITY::IS_ENTITY_A_PED(iVar4))
				{
					iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
					if (__LIB_1__::func_205(iVar5, Global_1392194[Local_1702.f_136 /*10*/].f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (iVar5 == __LIB_2__::func_963(Local_1702.f_138))
					{
						bVar0 = true;
					}
					else if (__LIB_1__::func_248(iVar5, &iLocal_2047))
					{
						bVar0 = true;
					}
					else if (iLocal_14 == 1 && __LIB_1__::func_248(iVar5, &iLocal_2030))
					{
						if (iVar5 == iLocal_2030[0] && func_280())
						{
						}
						else
						{
							bVar0 = true;
							Jump @236; //curOff = 206
							if (bVar0)
							{
								if (!__LIB_8__::func_0(&iVar5))
								{
									bVar0 = false;
								}
							}
						}
						iVar3++;
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return bVar0;
					}
				}
			}
		}
	}
}

bool func_293(bool bParam0)
{
	if (iLocal_14 != 2)
	{
		return false;
	}
	if (__LIB_7__::func_907(Local_1702.f_136, 128))
	{
		return false;
	}
	if (!bParam0 && iLocal_526 == 17)
	{
		__LIB_8__::func_397(32768);
		return false;
	}
	if (__LIB_8__::func_548())
	{
		__LIB_8__::func_397(32768);
		return false;
	}
	__LIB_8__::func_401(32768);
	return true;
}

int func_319(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bParam7 = (bParam7 || __LIB_7__::func_924(iParam0, 4096));
	iVar2 = 0;
	while (iVar2 < *iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar2]))
		{
			if (!__LIB_1__::func_248((*iParam1)[iVar2], &(iParam0->f_140)))
			{
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 146, false);
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 277, false);
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 178, true);
				PED::SET_PED_CAN_BE_TARGETTED((*iParam1)[iVar2], true);
				iVar3 = __LIB_8__::func_574((*iParam1)[iVar2], 0);
				if (__LIB_0__::func_29(iVar3))
				{
					__LIB_8__::func_123(iVar3, 1, 1);
				}
				PED::_0xFC3DB99C8144CD81((*iParam1)[iVar2], Global_1392194[iParam0->f_136 /*10*/].f_5, 0, 0, 0);
				if (__LIB_8__::func_185((*iParam1)[iVar2], (iParam5 == -1 || iVar1 < iParam5), (bParam8 || bParam7)))
				{
					if (bParam6)
					{
						PED::_0x802092B07E3B1EEA((*iParam1)[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS((*iParam1)[iVar2], true, false);
					}
					PED::_0x802092B07E3B1EEA((*iParam1)[iVar2], Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar2], joaat("REL_PLAYER_ENEMY"));
					__LIB_2__::func_73((*iParam1)[iVar2], uParam2[iVar2], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 31, true);
					if (__LIB_7__::func_966((*iParam1)[iVar2]))
					{
						iVar4 = __LIB_7__::func_967((*iParam1)[iVar2]);
					}
					if (PED::IS_PED_HUMAN((*iParam1)[iVar2]))
					{
						if (__LIB_7__::func_969(iParam1[iVar2], iVar4, (bParam8 || bParam7)))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2((*iParam1)[iVar2], iParam3, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (__LIB_0__::func_154(iVar4))
							{
								WEAPON::SET_CURRENT_PED_WEAPON((*iParam1)[iVar2], iVar4, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_HUMAN((*iParam1)[iVar2]))
					{
						if (__LIB_0__::func_154(iVar4))
						{
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE((*iParam1)[iVar2], true))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						}
						else if (iParam4 != 0)
						{
						}
						else if (!__LIB_7__::func_966((*iParam1)[iVar2]))
						{
							TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
						}
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iVar1++;
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar2], joaat("REL_PLAYER_DISLIKE"));
					if (bParam6)
					{
						PED::_0x802092B07E3B1EEA((*iParam1)[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS((*iParam1)[iVar2], true, false);
					}
					else
					{
						PED::_0xEEED8FAFEC331A70((*iParam1)[iVar2], Global_36, 1);
					}
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 1048576, false);
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 65536, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE((*iParam1)[iVar2], true))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4160);
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK((*iParam1)[iVar2], true);
					__LIB_7__::func_970(iParam1[iVar2], iParam9, fParam10);
				}
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam1)[iVar2], true);
			}
		}
		iVar2++;
	}
	return iVar1;
}

void func_323(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return;
	}
	iLocal_536[iParam1] = iParam0;
}

bool func_325(int iParam0, int iParam1)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("SAFETOBREAKOUTA")))
	{
		if (__LIB_8__::func_348(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), "PBL_BRKOUT_A"))
		{
			__LIB_8__::func_418(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), "PBL_BRKOUT_A", 1);
			return true;
		}
		else
		{
			__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), "PBL_BRKOUT_A");
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("SAFETOBREAKOUTB")))
	{
		if (__LIB_8__::func_348(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), "PBL_BRKOUT_B"))
		{
			__LIB_8__::func_418(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), "PBL_BRKOUT_B", 1);
			return true;
		}
		else
		{
			__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), "PBL_BRKOUT_B");
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("SAFETOBREAKOUTC")))
	{
		if (__LIB_8__::func_348(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), "PBL_BRKOUT_C"))
		{
			__LIB_8__::func_418(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), "PBL_BRKOUT_C", 1);
			return true;
		}
		else
		{
			__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), "PBL_BRKOUT_C");
		}
	}
	return false;
}

void func_355(int* iParam0, int* iParam1, var uParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_641(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
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
					__LIB_2__::func_303(Global_35, *iParam0, __LIB_8__::func_194(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_8__::func_12(iParam0, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, *iParam0, 1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_195(iParam0)))
				{
					__LIB_2__::func_303(*iParam0, Global_35, __LIB_8__::func_195(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

void func_372()
{
	int iVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_359[9]))
	{
		func_659();
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_8__::func_406(__LIB_8__::func_76(iVar0)))
		{
			__LIB_8__::func_565(__LIB_8__::func_76(iVar0), func_661(iVar0));
		}
		func_662(iVar0);
		iVar0++;
	}
}

void func_373()
{
	if (__LIB_8__::func_406(16))
	{
		func_663();
	}
}

int func_374(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	__LIB_2__::func_602(&(Local_2184[iParam0 /*52*/][0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_2184[iParam0 /*52*/][1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_2184[iParam0 /*52*/][2 /*17*/]), __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	return 1;
}

int func_375(int iParam0)
{
	if (!MISC::IS_BIT_SET(Local_2184[iParam0 /*52*/][0 /*17*/], 15))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Local_2184[iParam0 /*52*/][1 /*17*/], 15))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Local_2184[iParam0 /*52*/][2 /*17*/], 15))
	{
		return 0;
	}
	return 1;
}

void func_376(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_451(&(Local_2141[iParam0 /*21*/]), 0);
	func_664(iParam0, 0);
	if (!bParam2)
	{
		__LIB_8__::func_396(-2147483648);
	}
	if (bParam1)
	{
		iLocal_2289 = -1;
	}
}

void func_377(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_8__::func_379(16777216))
	{
		return;
	}
	iVar0 = __LIB_2__::func_340(1, 0, 0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar0 = __LIB_2__::func_340(1, 0, 0);
		switch (iVar2)
		{
			case 0:
				iVar3 = *iParam0;
				if (__LIB_8__::func_379(134217728))
				{
					iVar0 = 1;
				}
				iVar4 = iLocal_359[7];
				break;
			case 1:
				Jump @334; //curOff = 99
				iVar5 = 1;
				if (!DECORATOR::DECOR_EXIST_ON(iVar3, "bScriptedILO"))
				{
					DECORATOR::DECOR_SET_BOOL(iVar3, "bScriptedILO", true);
				}
				if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || __LIB_3__::func_63()) || __LIB_3__::func_64()) || __LIB_1__::func_499())
				{
					__LIB_1__::func_148(&(vLocal_381[11 /*3*/]));
				}
				if (__LIB_0__::func_75(&(vLocal_381[11 /*3*/])) && !__LIB_1__::func_285(&(vLocal_381[11 /*3*/]), 0.25f))
				{
					__LIB_3__::func_102(&(Local_2184[iVar2 /*52*/]));
				}
				iVar1 = func_641(&iVar3, &(Local_2141[iVar2 /*21*/]), fLocal_307, &(Local_2184[iVar2 /*52*/]), &iVar5, 0, 1, 0, 0, iVar0, iVar4, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				if (iLocal_2289 <= -1)
				{
					if (iVar1 != -1)
					{
					}
					iLocal_2289 = iVar1;
					iLocal_2290 = iVar2;
				}
				iVar2++;
			}
			if (!__LIB_8__::func_379(268435456))
			{
				if (!__LIB_8__::func_379(-2147483648))
				{
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
					{
						if (iLocal_2289 == 1 && !__LIB_8__::func_379(536870912))
						{
							__LIB_2__::func_303(*iParam0, Global_35, __LIB_8__::func_22(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_376(0, 1, 0);
						if (__LIB_8__::func_379(536870912))
						{
							func_669(0);
						}
						else if (iLocal_297 >= 2)
						{
							func_670(0, 0);
						}
						else
						{
							func_670(0, 1);
						}
					}
				}
				else if (iLocal_2290 == 0)
				{
					switch (iLocal_2289)
					{
						case 0:
							__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
							__LIB_8__::func_376(1073741824 /* Float: 2f */);
							func_376(0, 1, 0);
							break;
						case 1:
							if (__LIB_8__::func_379(536870912))
							{
								__LIB_8__::func_396(536870912);
								__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
								__LIB_8__::func_376(67108864);
								__LIB_8__::func_82(Local_1702.f_136, 262144);
								__LIB_8__::func_83(Local_1702.f_136, 256);
								func_376(0, 1, 0);
							}
							else
							{
								__LIB_2__::func_303(Global_35, *iParam0, __LIB_8__::func_23(), 0, -1082130432 /* Float: -1f */, MISC::GET_RANDOM_INT_IN_RANGE(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
								func_376(0, 0, 0);
								iLocal_297++;
								if (iLocal_297 >= 2)
								{
									func_672(iLocal_2290, 1, 0);
								}
							}
							break;
					}
				}
			}
		}
void func_378(int iParam0)
{
	if (__LIB_8__::func_346(512))
	{
		if (iLocal_300 < 3)
		{
			if (__LIB_2__::func_227(0, 1, *iParam0, 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (!__LIB_0__::func_75(&(vLocal_381[9 /*3*/])))
				{
					if (fLocal_301 < 30f)
					{
						fLocal_301 = 45f;
					}
					else
					{
						fLocal_301 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
					}
					__LIB_1__::func_148(&(vLocal_381[9 /*3*/]));
				}
				if (__LIB_1__::func_285(&(vLocal_381[9 /*3*/]), fLocal_301))
				{
					if (__LIB_2__::func_118(*iParam0, 1, 1) < 12.5f)
					{
						__LIB_8__::func_336(&(Local_1702.f_35), __LIB_8__::func_420(), *iParam0, Global_35, 0, 0, 1, 1);
						__LIB_0__::func_37(&(vLocal_381[9 /*3*/]));
						iLocal_300++;
					}
				}
			}
		}
	}
}

int func_379(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[9];
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	char* sVar19;
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (__LIB_8__::func_88(&Local_263, 1))
	{
		return 0;
	}
	if (__LIB_8__::func_343(-2147483648))
	{
		return 0;
	}
	if (!__LIB_8__::func_372(4096))
	{
		return 0;
	}
	if (!__LIB_2__::func_227(-3.5f, 1, 0, 0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &uVar0, false, false))
	{
		return 0;
	}
	iVar1 = (iLocal_295 % 3);
	switch (iVar1)
	{
		case 0:
			iVar2 = 0;
			iVar3 = (iLocal_698 / 3);
			break;
		case 1:
			iVar2 = (iLocal_698 / 3) + 1;
			iVar3 = (iLocal_698 * 2 / 3);
			break;
		case 2:
			iVar2 = (iLocal_698 * 2 / 3) + 1;
			iVar3 = iLocal_698;
			break;
	}
	if (__LIB_2__::func_118(*iParam0, 1, 1) < 10f)
	{
		return 1;
	}
	iVar16 = (838 + iVar2);
	if (iVar16 > 857)
	{
		iVar16 = 838;
	}
	iVar17 = (838 + iVar3);
	if (iVar17 > 857)
	{
		iVar17 = 838;
	}
	iVar18 = iVar16;
	while (iVar18 <= iVar17)
	{
		if (iVar15 < 9)
		{
			iVar14 = __LIB_2__::func_963(iVar18);
			if (((((!ENTITY::IS_ENTITY_DEAD(iVar14) && iVar14 != iLocal_2030[0]) && __LIB_2__::func_118(iVar14, 1, 1) < 22f) && !PED::_0x9337183FDA2E9035(iVar14, PLAYER::GET_PLAYER_INDEX())) && !PED::_0xA454D234E45BB6E5(iVar14, PLAYER::GET_PLAYER_INDEX())) && !func_674(iVar18))
			{
				if (!__LIB_7__::func_955(iVar14, 1))
				{
					sVar19 = __LIB_7__::func_975(Local_1702.f_136, -1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar19))
					{
						__LIB_2__::func_133(iVar14, sVar19, 0);
					}
				}
				iVar4[iVar15] = iVar14;
				iVar15++;
			}
		}
		iVar18++;
	}
	if (!__LIB_8__::func_343(64) && func_675(&Local_1960, &iVar4, &uLocal_2040, 1, 0))
	{
		__LIB_0__::func_516(&(Local_1960.f_34), 1);
		if (__LIB_0__::func_75(&(Local_1995.f_27)))
		{
			__LIB_1__::func_148(&(Local_1995.f_27));
		}
		return 1;
	}
	return 0;
}

int func_380(int iParam0)
{
	int iVar0[3];
	if (__LIB_8__::func_379(32))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (__LIB_8__::func_88(&Local_263, 1))
	{
		return 0;
	}
	if (__LIB_8__::func_343(-2147483648))
	{
		return 0;
	}
	if (!__LIB_2__::func_227(-3.5f, 1, 0, 0))
	{
		return 0;
	}
	if (__LIB_2__::func_118(*iParam0, 1, 1) < 10f)
	{
		return 1;
	}
	iVar0[0] = __LIB_2__::func_963(835);
	iVar0[1] = __LIB_2__::func_963(836);
	iVar0[2] = __LIB_2__::func_963(837);
	if (!__LIB_8__::func_343(64) && func_675(&Local_1995, &iVar0, &uLocal_2040, 1, 0))
	{
		if (!__LIB_8__::func_343(1) && __LIB_8__::func_343(4))
		{
			__LIB_2__::func_73(*iParam0, &(uLocal_2043[0]), -89429847, 580546400, 0, __LIB_8__::func_421(__LIB_7__::func_908(Local_1702.f_136, 524288)));
			__LIB_8__::func_370(1);
		}
		if (__LIB_0__::func_75(&(Local_1960.f_27)))
		{
			__LIB_1__::func_148(&(Local_1960.f_27));
		}
		__LIB_0__::func_516(&(Local_1995.f_34), 1);
		__LIB_8__::func_373(4096);
		return 1;
	}
	return 0;
}

void func_381()
{
	if (__LIB_1__::func_205(Global_35, iLocal_359[0], 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
}

void func_382(bool bParam0)
{
	if (bParam0)
	{
		VOLUME::_0x52572B331E693AED(iLocal_359[2], joaat("CARRIABLE_INVENTORY_ITEM"), joaat("STEAL_ITEM_PROMPT_TABLE"));
	}
	else
	{
		VOLUME::_0x52572B331E693AED(iLocal_359[2], joaat("CARRIABLE_INVENTORY_ITEM"), joaat("NULL_OVERRIDE_CARRIABLE_PROMPT_TABLE"));
	}
	__LIB_8__::func_563(16777216, !bParam0);
}

int func_383(int iParam0)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	func_677();
	fVar0 = __LIB_2__::func_118(iLocal_2030[0], 1, 1);
	if (__LIB_1__::func_205(Global_35, iLocal_359[3], 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	if (!__LIB_8__::func_346(524288))
	{
		if (!__LIB_8__::func_372(2048) && !__LIB_8__::func_343(2))
		{
			if (!((__LIB_7__::func_908(Local_1702.f_136, 32) || __LIB_7__::func_908(Local_1702.f_136, 16)) || __LIB_7__::func_908(Local_1702.f_136, 8)))
			{
				if (__LIB_8__::func_377(&(iLocal_2030[0])))
				{
					__LIB_8__::func_82(Local_1702.f_136, 32);
					func_678(0, 1, 0);
				}
			}
			else if (iLocal_529 < 17 && __LIB_8__::func_372(1024))
			{
				if (!__LIB_8__::func_377(&(iLocal_2030[0])))
				{
					PED::DELETE_PED(&(iLocal_2030[0]));
				}
				func_679(17);
			}
		}
	}
	if (!__LIB_8__::func_379(512))
	{
		if (PED::_0x57779B55B83E2BEA(iLocal_2030[0]))
		{
			TASK::_0x2948235DB2058E99(iLocal_2030[0], 512);
			TASK::_0xB2F47A1AFDFCC595(iLocal_2030[0], 32);
			__LIB_8__::func_376(512);
		}
	}
	__LIB_8__::func_560();
	switch (iLocal_529)
	{
		case 0:
			if (__LIB_7__::func_908(Local_1702.f_136, 8))
			{
				iLocal_529 = 18;
				return 1;
			}
			if (!__LIB_8__::func_377(&(iLocal_2030[0])))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iLocal_2030[0], "bLostLogs"))
				{
					DECORATOR::DECOR_SET_BOOL(iLocal_2030[0], "bLostLogs", true);
				}
				if (__LIB_8__::func_346(4096))
				{
					iLocal_529 = 2;
				}
				else
				{
					iLocal_529 = 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]) && !PED::IS_PED_USING_ANY_SCENARIO(iLocal_2030[1]))
			{
				__LIB_2__::func_56(iLocal_2030[1], 1, 1);
				__LIB_8__::func_422(iLocal_2030[1], Local_699.f_15[1 /*32*/].f_20, &uLocal_1939, -1, 1, 0, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_2030[1], 7, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[2]) && !PED::IS_PED_USING_ANY_SCENARIO(iLocal_2030[2]))
			{
				__LIB_2__::func_56(iLocal_2030[2], 1, 1);
				__LIB_8__::func_422(iLocal_2030[2], Local_699.f_15[2 /*32*/].f_20, &uLocal_1939, -1, 1, 0, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_2030[2], 7, 0, 1);
			}
			break;
		case 2:
			if (!__LIB_8__::func_88(&Local_263, 1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_2030[0]))
				{
					iLocal_529 = 1;
				}
				if (!__LIB_0__::func_163(iLocal_2030[0], -1098463898))
				{
					iLocal_529 = 0;
				}
			}
			break;
		case 1:
			if (!__LIB_8__::func_379(33554432))
			{
				__LIB_8__::func_376(33554432);
			}
			if (!__LIB_7__::func_908(Local_1702.f_136, 256) && !PED::IS_PED_USING_ANY_SCENARIO(iLocal_2030[0]))
			{
				__LIB_8__::func_397(4096);
				if (__LIB_2__::func_118(iLocal_2030[0], 1, 1) < 10f)
				{
					if (!__LIB_8__::func_88(&Local_263, 1))
					{
						func_270();
						__LIB_19__::func_565(&Local_263, &Local_1702, 2048, 51549, 0, 0);
						Local_263 = iLocal_2030[0];
					}
					else
					{
						__LIB_7__::func_961(&Local_263, 512);
					}
				}
				iLocal_529 = 2;
			}
			if (!__LIB_0__::func_75(&(vLocal_381[4 /*3*/])))
			{
				if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
				{
					__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
					__LIB_2__::func_112(&(vLocal_381[4 /*3*/]));
				}
			}
			else if (__LIB_2__::func_118(iLocal_2030[0], 1, 1) < __LIB_0__::func_514(__LIB_8__::func_379(256), 11.5f, 30f))
			{
				if (__LIB_0__::func_33(&(vLocal_381[4 /*3*/])))
				{
					__LIB_2__::func_112(&(vLocal_381[4 /*3*/]));
				}
			}
			else if (!__LIB_0__::func_33(&(vLocal_381[4 /*3*/])))
			{
				__LIB_2__::func_113(&(vLocal_381[4 /*3*/]));
			}
			if (!__LIB_7__::func_908(Local_1702.f_136, 256) && __LIB_1__::func_313(&(vLocal_381[4 /*3*/]), 15f))
			{
				if (__LIB_8__::func_379(256))
				{
					TASK::_0xE7FA07624574B79A(iLocal_2030[0], Global_35, 2, 2, 2.5f, 1, 0, 0, 0);
					__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFPRE", iLocal_2030[0], Global_35, 0, 0, 1, 1);
				}
				else
				{
					iVar2 = __LIB_4__::func_374(&iLocal_2047, 1, 0, -1, 0, 9f);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						TASK::_0xE7FA07624574B79A(iLocal_2030[0], iVar2, 2, 2, 2.5f, 1, 0, 0, 0);
					}
					__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFYL", iLocal_2030[0], Global_35, 0, 0, 1, 1);
				}
			}
			if ((__LIB_8__::func_379(128) || __LIB_8__::func_379(8192)) || __LIB_8__::func_379(65536))
			{
				__LIB_8__::func_376(131072);
			}
			if (__LIB_8__::func_343(256))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_699.f_690[9 /*12*/].f_8, true);
				PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
				PED::SET_PED_RESET_FLAG(iLocal_2030[0], 170, true);
				PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_2030[0], 0);
				__LIB_0__::func_37(&(vLocal_381[4 /*3*/]));
				func_679(3);
			}
			break;
		case 3:
			if (__LIB_1__::func_205(iLocal_2030[0], iLocal_359[4], 1, 0))
			{
				return 0;
			}
			if (__LIB_8__::func_343(-2147483648))
			{
				__LIB_8__::func_380(-2147483648);
				func_686(1, "TRACKS_OBJ06", func_685(), 0);
			}
			if (__LIB_1__::func_205(iLocal_2030[0], iLocal_359[5], 1, 0))
			{
				if (((__LIB_8__::func_379(128) || __LIB_8__::func_379(8192)) || __LIB_8__::func_379(65536)) || ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_2030[0], Global_35, 1, 1))
				{
					__LIB_8__::func_376(131072);
				}
				return 0;
			}
			if (!__LIB_8__::func_377(&(iLocal_2030[0])))
			{
				if (MAP::_IS_BLIP_ATTACHED_TO_ANY_ENTITY(uLocal_2034[3]))
				{
					if (!__LIB_8__::func_372(131072))
					{
						if (!__LIB_4__::func_296("TRACKS_OBJ06", 1))
						{
							__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
							__LIB_8__::func_373(131072);
						}
					}
					if (__LIB_1__::func_285(&(vLocal_381[4 /*3*/]), 7.5f))
					{
						if (!__LIB_8__::func_343(65536))
						{
							if (!__LIB_4__::func_117(iLocal_2030[0], 25f, 0))
							{
								__LIB_8__::func_370(65536);
								MAP::_BLIP_SET_MODIFIER(uLocal_2034[3], 1411832502);
							}
						}
						else if (__LIB_4__::func_117(iLocal_2030[0], 25f, 0))
						{
							__LIB_8__::func_380(65536);
							MAP::_BLIP_REMOVE_MODIFIER(uLocal_2034[3], 1411832502);
						}
					}
				}
				if ((((__LIB_8__::func_379(2048) || __LIB_8__::func_379(4096)) || PED::_IS_PED_HOGTIED(iLocal_2030[0])) || __LIB_8__::func_346(131072)) && !__LIB_8__::func_379(8192))
				{
					if (!PED::_IS_PED_HOGTIED(iLocal_2030[0]))
					{
						__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_CONV5", iLocal_2030[0], Global_35, 0, 0, 1, 1);
					}
					else
					{
						__LIB_8__::func_111("RCMP_CONF2C", 0);
						__LIB_8__::func_111("RCMP_CONV2D", 0);
						__LIB_8__::func_111("RCMP_CONV3B", 0);
						__LIB_8__::func_111("RCMP_CONF2A", 0);
					}
					if (PED::_IS_PED_HOGTIED(iLocal_2030[0]))
					{
						__LIB_8__::func_82(Local_1702.f_136, 16);
					}
					__LIB_8__::func_376(4194304);
					TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
					func_679(15);
				}
				else if (__LIB_0__::func_58())
				{
					__LIB_1__::func_748(&(Local_1702.f_34), 1, 1);
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_2030[0], 7, 2, 1);
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2030[0], true);
					__LIB_3__::func_732(0);
					if (__LIB_8__::func_379(128) && !__LIB_8__::func_379(8192))
					{
						TASK::TASK_HANDS_UP(iLocal_2030[0], -1, Global_35, -1, false);
					}
					__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEF02H", Global_35, iLocal_2030[0], 0, 0, 1, 1);
					func_679(4);
				}
				else if (PED::_IS_PED_USING_SCENARIO_HASH(iLocal_2030[0], __LIB_8__::func_378()) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_2030[0], 1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2030[0], true);
					PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 178, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 288, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2030[0], 77, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 146, true);
					func_679(6);
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(Global_35) && __LIB_2__::func_227(0, 1, 0, 0)) && func_691())
				{
					if (__LIB_0__::func_94(iLocal_2030[0], __LIB_8__::func_423(), 1) < 7.5f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
						__LIB_8__::func_370(131072);
						__LIB_8__::func_370(1024);
						func_679(6);
					}
					else if (!__LIB_8__::func_343(8192))
					{
						__LIB_8__::func_373(2097152);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
						__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEF02F", iLocal_2030[0], Global_35, 0, 0, 1, 1);
						func_686(1, 0, func_685(), 1);
						WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_2030[0], true, true);
						TASK::TASK_COMBAT_PED(iLocal_2030[0], Global_35, 1048576, 0);
						__LIB_8__::func_373(67108864);
						func_695(Local_699.f_690[2 /*12*/].f_8, __LIB_8__::func_424(), __LIB_8__::func_425(), 1, 1073741824 /* Float: 2f */);
						func_698(&iLocal_521, __LIB_8__::func_426(), __LIB_8__::func_427(), 2);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
						func_699(iParam0, -1);
						if (VOLUME::_0xF6A8A652A6B186CD(uLocal_380))
						{
							VOLUME::_0xFDFECC6EE4491E11(uLocal_380);
						}
						iLocal_525 = 13;
						func_679(16);
					}
				}
			}
			break;
		case 4:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if ((__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_8__::func_346(131072)) && PED::_0xD0B7AEB56229D317(Global_35) != iLocal_2030[0])
			{
				if (PED::_0x57779B55B83E2BEA(iLocal_2030[0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
						__LIB_3__::func_689(iLocal_2030[0]);
						PED::_0xAAB050DA48B57978(iLocal_2030[0], "Default_Nervous", 0, -1, 4);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_2030[0], __LIB_8__::func_423(), 1f, -1, 2f, 0, 40000f);
					}
					func_702("TRACKS_OBJ06a", 1);
					func_679(5);
				}
			}
			func_703();
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_0__::func_175(Global_36, __LIB_8__::func_423(), 3f, 0) && !__LIB_8__::func_346(131072))
			{
				func_28();
				__LIB_8__::func_373(2);
				__LIB_8__::func_370(1024);
				__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEF02I", iLocal_2030[0], Global_35, 0, 0, 1, 1);
				TASK::_0x2E1D6D87346BB7D2(iLocal_2030[0], Global_35, 0, 0);
				func_679(15);
			}
			func_703();
			break;
		case 6:
			if (__LIB_4__::func_117(iLocal_2030[0], 20f, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				func_28();
				__LIB_8__::func_370(1024);
				PED::_0x935CF6E42BAF7F4D(iLocal_2030[0]);
				PED::_0x58F7DB5BD8FA2288(iLocal_2030[0]);
				PED::_0x4FD80C3DD84B817B(iLocal_2030[0]);
				PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 225, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 401, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 199, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 222, true);
				__LIB_8__::func_380(65536);
				func_686(1, "TRACKS_OBJ07", func_685(), 0);
				__LIB_18__::func_106();
				func_679(7);
			}
			break;
		case 7:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			func_705();
			if (!__LIB_2__::func_1(iLocal_2030[0], 0, 1) && !__LIB_8__::func_346(524288))
			{
				if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::GET_PLAYER_INDEX(), 1000))
				{
					__LIB_8__::func_82(Local_1702.f_136, 32);
				}
				func_679(17);
			}
			else if (__LIB_8__::func_343(131072))
			{
				func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
				if (__LIB_8__::func_346(2))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 225, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 401, false);
					__LIB_8__::func_513(&(iLocal_2030[0]), fVar0, 1084227584 /* Float: 5f */);
					__LIB_8__::func_428(&(iLocal_2030[0]), 1);
					PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
					__LIB_8__::func_370(33554432);
					func_679(8);
				}
			}
			else if (!__LIB_8__::func_343(131072))
			{
				__LIB_8__::func_513(&(iLocal_2030[0]), fVar0, 1084227584 /* Float: 5f */);
				if (PED::_IS_PED_USING_SCENARIO_HASH(iLocal_2030[0], __LIB_8__::func_378()) && func_709(fVar0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
					__LIB_8__::func_370(131072);
					func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 225, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 401, false);
					TASK::_0xD999E379265A4501(iLocal_2030[0], func_710(), 0);
					TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
				}
				else if (PED::_IS_PED_USING_SCENARIO_HASH(iLocal_2030[0], __LIB_8__::func_378()))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
					__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_CONV5", iLocal_2030[0], Global_35, 0, 0, 1, 1);
					__LIB_8__::func_376(4194304);
					func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
					__LIB_8__::func_370(131072);
					__LIB_8__::func_373(16384);
					TASK::_0xD999E379265A4501(iLocal_2030[0], func_108(), 0);
					TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
					func_679(15);
				}
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 225, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 401, false);
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_2030[0]))
			{
				__LIB_8__::func_513(&(iLocal_2030[0]), fVar0, 1084227584 /* Float: 5f */);
			}
			else
			{
				__LIB_8__::func_428(&(iLocal_2030[0]), 0);
			}
			if (!__LIB_8__::func_372(32))
			{
				if (__LIB_2__::func_227(0, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_381[4 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
				}
				if (__LIB_1__::func_313(&(vLocal_381[4 /*3*/]), 4.5f))
				{
					func_702("TRACKS_OBJ10", 1);
					__LIB_8__::func_373(32);
				}
			}
			else
			{
				if (__LIB_2__::func_227(0, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_381[4 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
				}
				if (__LIB_1__::func_313(&(vLocal_381[4 /*3*/]), 12f))
				{
					__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFFLEE", iLocal_2030[0], Global_35, 0, 0, 1, 0);
					__LIB_8__::func_373(16384);
					__LIB_8__::func_428(&(iLocal_2030[0]), 0);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_2030[0], Local_699.f_4, 4, 0, 1000f, -1, 0);
					func_679(15);
				}
				else
				{
					if (!__LIB_2__::func_1(iLocal_2030[0], 0, 1))
					{
						__LIB_8__::func_380(33554432);
						func_679(17);
					}
					if (__LIB_8__::func_379(128))
					{
						__LIB_8__::func_380(262144);
						__LIB_8__::func_370(128);
						__LIB_3__::func_732(0);
						__LIB_8__::func_380(33554432);
						func_679(13);
					}
					Jump @7485; //curOff = 3748
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0) || __LIB_8__::func_379(128))
					{
						if (!__LIB_8__::func_346(4) && !__LIB_8__::func_379(128))
						{
							if (!PED::_IS_PED_HOGTIED(iLocal_2030[0]))
							{
								__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_CONF2B", iLocal_2030[0], Global_35, 0, 0, 1, 1);
							}
							__LIB_8__::func_397(4);
						}
						else if (!__LIB_8__::func_346(8) && !__LIB_8__::func_379(128))
						{
							if (!PED::_IS_PED_HOGTIED(iLocal_2030[0]))
							{
								__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_CONF2C", iLocal_2030[0], Global_35, 0, 0, 1, 1);
							}
							__LIB_8__::func_397(8);
						}
						else
						{
							__LIB_3__::func_732(0);
							__LIB_8__::func_370(33554432);
							__LIB_0__::func_37(&(vLocal_381[4 /*3*/]));
							func_679(10);
						}
					}
					Jump @7485; //curOff = 3968
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					if (!__LIB_2__::func_1(iLocal_2030[0], 0, 1))
					{
						func_679(17);
					}
					if (!__LIB_8__::func_372(32))
					{
						if (__LIB_2__::func_227(0, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_381[4 /*3*/])))
						{
							__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
						}
						if (__LIB_1__::func_313(&(vLocal_381[4 /*3*/]), 4.5f))
						{
							func_702("TRACKS_OBJ10", 1);
							__LIB_0__::func_37(&(vLocal_381[4 /*3*/]));
							__LIB_8__::func_373(32);
						}
					}
					else
					{
						if (__LIB_2__::func_227(0, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_381[4 /*3*/])))
						{
							__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
						}
						if (__LIB_1__::func_313(&(vLocal_381[4 /*3*/]), 12f))
						{
							__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFFLEE", iLocal_2030[0], Global_35, 0, 0, 1, 0);
							__LIB_8__::func_428(&(iLocal_2030[0]), 0);
							TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_2030[0], Local_699.f_4, 4, 0, 1000f, -1, 0);
							func_679(15);
						}
						else
						{
							Jump @7485; //curOff = 4232
							__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
							func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
							if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_2030[0], 1))
							{
								if (!__LIB_8__::func_379(4096))
								{
									TASK::_0x2E1D6D87346BB7D2(iLocal_2030[0], Global_35, 0, 0);
									__LIB_8__::func_370(4096);
								}
								TASK::_0xD999E379265A4501(iLocal_2030[0], func_108(), 0);
								TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
							}
							if (((((!__LIB_8__::func_379(8192) && !__LIB_8__::func_379(65536)) && !__LIB_8__::func_343(32768)) && !PED::_IS_PED_LASSOED(iLocal_2030[0])) && !PED::_IS_PED_HOGTIED(iLocal_2030[0])) && WEAPON::_0xCB690F680A3EA971(Global_35, 4))
							{
								__LIB_8__::func_373(16384);
							}
							func_679(12);
							Jump @7485; //curOff = 4443
							__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
							func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
							bVar1 = __LIB_8__::func_379(4096);
							if (bVar1 || !PED::IS_PED_USING_ANY_SCENARIO(iLocal_2030[0]))
							{
								if (!__LIB_2__::func_1(iLocal_2030[0], 0, 1))
								{
									func_679(17);
								}
								__LIB_3__::func_689(iLocal_2030[0]);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]))
								{
									__LIB_2__::func_426(&(iLocal_2030[1]));
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[2]))
								{
									__LIB_2__::func_426(&(iLocal_2030[2]));
								}
								if (__LIB_0__::func_139(Local_1702.f_32))
								{
									__LIB_2__::func_461(0);
									__LIB_1__::func_748(&(Local_1702.f_32), 1, 1);
								}
								if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_8__::func_377(&(iLocal_2030[0])))
								{
									PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_2030[0], 0);
									if ((__LIB_8__::func_343(1024) && (!bVar1 || PED::_0x57779B55B83E2BEA(iLocal_2030[0]))) && __LIB_0__::func_94(iLocal_2030[0], __LIB_8__::func_423(), 1) < 7.5f)
									{
										if (PED::_0x57779B55B83E2BEA(iLocal_2030[0]))
										{
											TASK::_0x2948235DB2058E99(iLocal_2030[0], 512);
											TASK::_0xB2F47A1AFDFCC595(iLocal_2030[0], 32);
										}
										func_679(13);
									}
									else
									{
										if (PED::_0xD0B7AEB56229D317(Global_35) == iLocal_2030[0])
										{
											__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFGRAB", iLocal_2030[0], Global_35, 0, 0, 1, 1);
										}
										else if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_2030[0] || PED::_IS_PED_LASSOED(iLocal_2030[0])) || PED::_IS_PED_HOGTIED(iLocal_2030[0]))
										{
											__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFHOG", iLocal_2030[0], Global_35, 0, 0, 1, 1);
										}
										else
										{
											__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFFLEE", iLocal_2030[0], Global_35, 0, 0, 1, 0);
										}
										if (PED::_IS_PED_HOGTIED(iLocal_2030[0]))
										{
											__LIB_8__::func_82(Local_1702.f_136, 16);
										}
										func_679(14);
									}
								}
							}
							Jump @7485; //curOff = 4961
							__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
							bVar1 = __LIB_8__::func_379(4096);
							__LIB_3__::func_689(iLocal_2030[0]);
							if (__LIB_2__::func_1(iLocal_2030[0], 0, 1))
							{
								if (((bVar1 || __LIB_8__::func_379(128)) || ENTITY::GET_ENTITY_HEALTH(iLocal_2030[0]) < 60) || __LIB_8__::func_379(65536))
								{
									__LIB_8__::func_513(&(iLocal_2030[0]), fVar0, 1084227584 /* Float: 5f */);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
									__LIB_8__::func_132(&Local_1702, 65536);
									__LIB_8__::func_428(&(iLocal_2030[0]), 1);
									__LIB_8__::func_336(&Local_2297, "RCMP_THIEF02B", Global_35, iLocal_2030[0], 0, 0, 1, 1);
									__LIB_8__::func_397(128);
									__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
									PED::SET_PED_USING_ACTION_MODE(iLocal_2030[0], false, -1, 0);
									if (!__LIB_8__::func_372(2) && !__LIB_8__::func_379(65536))
									{
										TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
										PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 225, false);
										TASK::CLEAR_PED_TASKS(Global_35, true, false);
									}
									if ((__LIB_8__::func_379(128) && !__LIB_8__::func_379(2048)) && !__LIB_8__::func_379(65536))
									{
										TASK::TASK_HANDS_UP(iLocal_2030[0], -1, Global_35, -1, false);
										__LIB_8__::func_373(2);
									}
									if (__LIB_0__::func_75(&(vLocal_381[4 /*3*/])))
									{
										__LIB_0__::func_37(&(vLocal_381[4 /*3*/]));
									}
									__LIB_3__::func_689(iLocal_2030[0]);
									func_679(14);
								}
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
								__LIB_8__::func_132(&Local_1702, 65536);
								func_679(17);
							}
							Jump @7485; //curOff = 5354
							__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
							func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
							__LIB_3__::func_689(iLocal_2030[0]);
							if ((((PED::_0x57779B55B83E2BEA(iLocal_2030[0]) || __LIB_1__::func_322("RCMP_THIEF02B")) || __LIB_1__::func_322("RCMP_CONV2D")) || __LIB_1__::func_322("RCMP_CONV3A")) || __LIB_1__::func_322("RCMP_CONV3B"))
							{
								__LIB_8__::func_513(&(iLocal_2030[0]), fVar0, 1084227584 /* Float: 5f */);
							}
							if (ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
							{
								__LIB_0__::func_11();
								__LIB_8__::func_370(-2147483648);
								func_679(17);
							}
							if ((__LIB_8__::func_379(4096) || __LIB_8__::func_379(2048)) || __LIB_8__::func_346(131072))
							{
								AUDIO::_0x36559148B78853B3(1, 0, 0);
								__LIB_8__::func_397(32);
								__LIB_8__::func_397(64);
								__LIB_8__::func_397(16);
								__LIB_8__::func_380(4096);
								__LIB_8__::func_370(524288);
								if (!__LIB_8__::func_377(&(iLocal_2030[0])))
								{
									__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_CONV5", iLocal_2030[0], Global_35, 0, 0, 1, 0);
									TASK::_0x2E1D6D87346BB7D2(iLocal_2030[0], Global_35, 0, 0);
								}
								bVar1 = true;
							}
							if (PED::IS_PED_FLEEING(iLocal_2030[0]))
							{
								AUDIO::_0x36559148B78853B3(1, 0, 0);
								func_679(17);
							}
							func_713();
							if ((((((__LIB_8__::func_343(128) || __LIB_8__::func_379(2048)) || __LIB_8__::func_343(262144)) || __LIB_8__::func_379(128)) || __LIB_8__::func_379(65536)) || __LIB_8__::func_343(32768)) || __LIB_8__::func_346(131072))
							{
								if (__LIB_2__::func_227(__LIB_0__::func_514(__LIB_8__::func_343(262144), -3.5f, -9f), 1, 0, 0))
								{
									if (__LIB_8__::func_343(262144))
									{
										if (!__LIB_8__::func_346(32))
										{
											__LIB_8__::func_336(&Local_2297, "RCMP_CONV3A", Global_35, iLocal_2030[0], 0, 0, 1, 1);
											__LIB_8__::func_397(32);
											__LIB_8__::func_380(33554432);
										}
										else if (!__LIB_8__::func_346(64))
										{
											__LIB_8__::func_336(&Local_2297, "RCMP_CONV3B", iLocal_2030[0], Global_35, 0, 0, 1, 1);
											__LIB_8__::func_397(64);
											__LIB_8__::func_380(33554432);
										}
										else
										{
											func_678(0, 1, 0);
											__LIB_8__::func_373(16384);
											TASK::_0x2E1D6D87346BB7D2(iLocal_2030[0], Global_35, 0, 0);
											__LIB_8__::func_370(524288);
											__LIB_8__::func_380(33554432);
										}
									}
									else if (__LIB_0__::func_94(iLocal_2030[0], __LIB_8__::func_423(), 1) < 7.5f)
									{
										if ((!__LIB_8__::func_346(16) && !__LIB_8__::func_379(2048)) && !bVar1)
										{
											if (!PED::_IS_PED_HOGTIED(iLocal_2030[0]))
											{
												__LIB_8__::func_336(&Local_2297, "RCMP_CONV2D", iLocal_2030[0], Global_35, 0, 0, 1, 1);
											}
											__LIB_8__::func_397(16);
											__LIB_8__::func_380(33554432);
										}
										else
										{
											func_678(0, 1, 0);
											__LIB_8__::func_373(16384);
											TASK::_0x2E1D6D87346BB7D2(iLocal_2030[0], Global_35, 0, 0);
											__LIB_8__::func_370(524288);
											__LIB_8__::func_380(33554432);
										}
									}
								}
							}
							if (PED::IS_PED_USING_ACTION_MODE(iLocal_2030[0]))
							{
								PED::SET_PED_USING_ACTION_MODE(iLocal_2030[0], false, -1, 0);
							}
							if ((((bVar1 || __LIB_8__::func_343(524288)) || __LIB_8__::func_343(4096)) || __LIB_8__::func_379(2048)) || __LIB_8__::func_346(131072))
							{
								if ((__LIB_2__::func_1(iLocal_2030[0], 0, 1) && !__LIB_0__::func_163(iLocal_2030[0], 518218985)) || MAP::DOES_BLIP_EXIST(uLocal_2034[1]))
								{
									func_678(0, 1, 0);
									__LIB_8__::func_373(16384);
									if (__LIB_8__::func_372(2))
									{
										TASK::UPDATE_TASK_HANDS_UP_DURATION(iLocal_2030[0], 1);
									}
									if (__LIB_8__::func_514(iLocal_2030[0], 0f, 0f, 0f, 1120403456 /* Float: 100f */) || PED::_IS_PED_HOGTIED(iLocal_2030[0]))
									{
										if (__LIB_8__::func_377(&(iLocal_2030[0])))
										{
											__LIB_8__::func_131(&Local_1702, 128);
										}
									}
									__LIB_0__::func_11();
									__LIB_8__::func_370(-2147483648);
									func_679(17);
								}
							}
							else if (((__LIB_8__::func_379(128) && !__LIB_8__::func_372(2)) && !__LIB_8__::func_379(2048)) && !bVar1)
							{
								func_678(0, 1, 0);
								__LIB_8__::func_373(16384);
								TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
								TASK::TASK_HANDS_UP(iLocal_2030[0], -1, Global_35, -1, false);
								__LIB_8__::func_373(2);
								if (__LIB_0__::func_75(&(vLocal_381[4 /*3*/])))
								{
									__LIB_0__::func_37(&(vLocal_381[4 /*3*/]));
								}
							}
							Jump @7485; //curOff = 6496
							func_678(0, 1, 0);
							TASK::UPDATE_TASK_HANDS_UP_DURATION(iLocal_2030[0], 1);
							__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
							__LIB_8__::func_373(16384);
							func_679(17);
							Jump @7485; //curOff = 6540
							if (__LIB_2__::func_227(-3.5f, 1, iLocal_2030[0], 1))
							{
								if (!__LIB_0__::func_75(&(vLocal_381[1 /*3*/])))
								{
									__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
								}
								if (__LIB_1__::func_313(&(vLocal_381[1 /*3*/]), 5f))
								{
									__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFMELEE", iLocal_2030[0], Global_35, 0, 0, 1, 1);
								}
							}
							if (__LIB_8__::func_379(128))
							{
								func_679(3);
							}
							if (!__LIB_2__::func_1(iLocal_2030[0], 0, 1) || PED::IS_PED_FLEEING(iLocal_2030[0]))
							{
								func_679(17);
							}
							Jump @7485; //curOff = 6680
							__LIB_3__::func_689(iLocal_2030[0]);
							__LIB_8__::func_380(33554432);
							func_713();
							if ((((PED::_0x57779B55B83E2BEA(iLocal_2030[0]) || __LIB_1__::func_322("RCMP_THIEF02B")) || __LIB_1__::func_322("RCMP_CONV2D")) || __LIB_1__::func_322("RCMP_CONV3A")) || __LIB_1__::func_322("RCMP_CONV3B"))
							{
								__LIB_8__::func_513(&(iLocal_2030[0]), fVar0, 1084227584 /* Float: 5f */);
							}
							if (PED::IS_PED_FLEEING(iLocal_2030[0]) && __LIB_1__::func_322("RCMP_CONV2D"))
							{
								__LIB_8__::func_111("RCMP_CONV2D", 0);
							}
							if ((!__LIB_8__::func_343(1048576) && !__LIB_7__::func_908(Local_1702.f_136, 16)) && ((((__LIB_8__::func_379(2048) || __LIB_8__::func_379(4096)) || __LIB_8__::func_379(4194304)) || PED::_IS_PED_HOGTIED(iLocal_2030[0])) || __LIB_2__::func_227(0, 1, 0, 0)))
							{
								__LIB_8__::func_370(1048576);
								if (!__LIB_7__::func_908(Local_1702.f_136, 8))
								{
									__LIB_8__::func_370(4194304);
									if (__LIB_8__::func_343(1024))
									{
										func_702("TRACKS_OBJ08", func_685());
									}
									else
									{
										func_702("TRACKS_OBJ09", func_685());
									}
								}
								if (PED::_IS_PED_HOGTIED(iLocal_2030[0]))
								{
									__LIB_8__::func_82(Local_1702.f_136, 16);
								}
								__LIB_8__::func_85(Local_1702.f_136, 512);
							}
							if (__LIB_8__::func_379(4194304) || (__LIB_8__::func_343(1048576) && ((__LIB_8__::func_379(2048) || __LIB_8__::func_379(4096)) || __LIB_1__::func_285(&(vLocal_381[1 /*3*/]), 2f))))
							{
								if (!__LIB_8__::func_377(&(iLocal_2030[0])))
								{
									iVar3 = 0;
									if (__LIB_8__::func_343(4096) && !__LIB_8__::func_379(4194304))
									{
										iVar3 |= 384;
									}
									__LIB_8__::func_380(33554432);
									TASK::CLEAR_PED_TASKS(iLocal_2030[0], true, false);
									PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 225, false);
									__LIB_8__::func_428(&(iLocal_2030[0]), 0);
									if (__LIB_8__::func_379(4194304))
									{
										TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_2030[0], Global_35, 4, iVar3, 1000f, -1, 0);
									}
									else
									{
										TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_2030[0], Local_699.f_4, 4, iVar3, 1000f, -1, 0);
									}
									__LIB_8__::func_82(Local_1702.f_136, 16);
								}
								func_679(18);
							}
							if ((__LIB_7__::func_908(Local_1702.f_136, 16) || __LIB_7__::func_908(Local_1702.f_136, 32)) || PED::IS_PED_FLEEING(iLocal_2030[0]))
							{
								if (!__LIB_8__::func_343(1048576))
								{
									__LIB_8__::func_370(1048576);
									if (!__LIB_7__::func_908(Local_1702.f_136, 8))
									{
										__LIB_8__::func_370(4194304);
										if (__LIB_8__::func_343(1024))
										{
											func_702("TRACKS_OBJ08", func_685());
										}
										else
										{
											func_702("TRACKS_OBJ09", func_685());
										}
									}
								}
								func_679(18);
							}
							Jump @7485; //curOff = 7404
							if (((__LIB_7__::func_908(Local_1702.f_136, 8) || __LIB_7__::func_908(Local_1702.f_136, 16)) || __LIB_7__::func_908(Local_1702.f_136, 32)) || Global_40.f_9096[Local_1702.f_136 /*12*/].f_6 != 0)
							{
								return 1;
							}
						}
						return 0;
					}
				}
			}
			default:
				break;
	}
}

void func_385()
{
	if (func_715() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (__LIB_8__::func_215(Local_1702.f_136))
		{
			__LIB_8__::func_370(4);
		}
	}
}

int func_386(int iParam0)
{
	switch (iLocal_525)
	{
		case 0:
			Local_558.f_12 = 15f;
			Local_558.f_13 = 10f;
			func_374(0);
			func_376(0, 1, 1);
			iLocal_525 = 1;
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
			}
			if (func_716(iParam0, 0))
			{
				if (iLocal_14 == 2)
				{
					__LIB_8__::func_85(Local_1702.f_136, 262144);
					__LIB_8__::func_131(&Local_1702, 128);
				}
				__LIB_8__::func_85(Local_1702.f_136, 4096);
				__LIB_8__::func_85(Local_1702.f_136, 16777216);
				__LIB_8__::func_131(&Local_1702, 128);
				__LIB_0__::func_769();
				__LIB_8__::func_397(512);
				iLocal_525 = 17;
			}
			break;
		case 17:
			if (!__LIB_8__::func_372(16777216) && __LIB_2__::func_118(*iParam0, 1, 1) > 15f)
			{
				__LIB_8__::func_373(16777216);
			}
			if (__LIB_8__::func_372(16777216) && __LIB_2__::func_763(Local_1702.f_138, 0))
			{
				if (__LIB_8__::func_254(Local_1702.f_138, &Local_1702, 30000, 1))
				{
					iLocal_525 = 18;
				}
			}
			break;
		case 18:
			break;
	}
	return 0;
}

int func_387(int iParam0)
{
	char cVar0[64];
	bool bVar8;
	vector3 vVar9[24];
	func_718(*iParam0);
	if (!__LIB_8__::func_346(65536))
	{
		if (Global_40.f_9096[Local_1702.f_136 /*12*/].f_8 > 0)
		{
			iLocal_358 = 1;
			Local_308.f_43 = 4f;
			Local_308.f_41 = 4f;
			Local_308.f_39 = Global_1392194[Local_1702.f_136 /*10*/].f_6;
			__LIB_0__::func_268(&(vLocal_381[7 /*3*/]), (20f / 2f));
			__LIB_8__::func_373(512);
			__LIB_8__::func_397(65536);
			__LIB_8__::func_397(262144);
		}
	}
	if (__LIB_8__::func_346(262144))
	{
		func_269(iParam0);
	}
	switch (iLocal_525)
	{
		case 0:
			if (__LIB_8__::func_379(16777216))
			{
				if (!__LIB_2__::func_763(Local_1702.f_138, 0))
				{
					__LIB_8__::func_123(Local_1702.f_138, 1, 1);
				}
				__LIB_8__::func_376(1073741824 /* Float: 2f */);
				if (!__LIB_7__::func_908(Local_1702.f_136, 131072))
				{
					__LIB_8__::func_82(Local_1702.f_136, 131072);
				}
				else
				{
					__LIB_8__::func_83(Local_1702.f_136, 131072);
				}
				func_719(*iParam0);
				iLocal_525 = 1;
			}
			break;
		case 1:
			__LIB_8__::func_85(Local_1702.f_136, 4096);
			func_376(0, 1, 1);
			if (__LIB_8__::func_372(4096))
			{
				iLocal_525 = 12;
			}
			else
			{
				iLocal_525 = 3;
			}
			break;
		case 12:
			if (!__LIB_3__::func_703(-1f))
			{
				__LIB_0__::func_325(&(uLocal_2043[0]));
				iLocal_525 = 3;
			}
			break;
		case 3:
			if (!__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
			}
			if (__LIB_2__::func_215(*iParam0, Global_35, 0, 10f, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				PED::_0x62FDAD5E01D2DD47(*iParam0, Global_36, 2, 0);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
				__LIB_8__::func_370(64);
				func_721(iParam0, 0, 0);
				__LIB_8__::func_82(Local_1702.f_136, 16777216);
				Local_308.f_40 = *iParam0;
				Local_308.f_43 = 4f;
				Local_308.f_41 = 4f;
				Local_308.f_39 = Global_1392194[Local_1702.f_136 /*10*/].f_6;
				__LIB_8__::func_373(512);
				if (__LIB_1__::func_985())
				{
					__LIB_8__::func_370(16384);
					StringCopy(&cVar0, "RCMP_LNTA", 64);
				}
				else
				{
					StringCopy(&cVar0, "RCMP_LNTB", 64);
				}
				__LIB_8__::func_336(&(Local_1702.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_8__::func_397(262144);
				iLocal_525 = 10;
			}
			break;
		case 10:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			func_706(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_227(-3.5f, 1, *iParam0, 0) && !__LIB_8__::func_379(268435456))
			{
				func_376(0, 1, 1);
				func_722(0);
				func_723(1, 0, 1097859072 /* Float: 15f */);
				__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
			}
			if (__LIB_8__::func_379(268435456) && iLocal_2290 == 0)
			{
				switch (iLocal_2289)
				{
					case 1:
						if (__LIB_8__::func_343(16384))
						{
							StringCopy(&cVar9, "RCMP_LNTA_N", 24);
						}
						else
						{
							StringCopy(&cVar9, "RCMP_LNTB_N", 24);
						}
						Local_308.f_40 = *iParam0;
						Local_308 = 0;
						__LIB_8__::func_336(&(Local_1702.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						func_376(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && __LIB_1__::func_313(&(vLocal_381[1 /*3*/]), 5f))
				{
					func_376(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					func_723(0, 0, 1097859072 /* Float: 15f */);
					iLocal_525 = 4;
				}
			}
			break;
		case 4:
			break;
		case 17:
			break;
	}
	return 0;
}

int func_388(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	func_725(__LIB_0__::func_58());
	func_726();
	__LIB_8__::func_568(65536, __LIB_8__::func_572(&(iLocal_2030[0])));
	__LIB_0__::func_11();
	__LIB_1__::func_976(iParam0);
	func_730();
	switch (iLocal_525)
	{
		case 0:
			if (__LIB_0__::func_383())
			{
				return 0;
			}
			func_731(0f, 0f, 0f, -1020002304 /* Float: -180f */);
			if (!__LIB_0__::func_6(iLocal_292))
			{
				iLocal_292 = __LIB_1__::func_293(128, 1, 3, -1188213839);
				if (__LIB_0__::func_6(iLocal_292))
				{
					__LIB_1__::func_298(iLocal_292, 1);
				}
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_359[13]))
			{
				iLocal_359[13] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2236.119f, 702.1536f, 101.6987f, 0f, 0f, 18.48959f, 84.40749f, 113.9496f, 29.56531f, "EA CURR - volObjective");
			}
			if (!__LIB_7__::func_963(&(Local_424[0 /*7*/])))
			{
				__LIB_3__::func_896(&uLocal_1853);
				Local_558.f_12 = 15f;
				Local_558.f_13 = 10f;
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_359[12]))
			{
				iLocal_359[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2229.667f, 660.7031f, 94.59841f, 5.041285f, -0.379583f, 25.4644f, 6.493775f, 18.3399f, 4.196768f, "EA CURR - volTrackBlock");
				if (__LIB_7__::func_924(&Local_1702, 256))
				{
					POPULATION::_0xB56D41A694E42E86(iLocal_359[12], 534496, 0, 0, -1, -1, 0);
				}
				else
				{
					POPULATION::_0x74C2B3DC0B294102(iLocal_359[12]);
				}
			}
			if (__LIB_0__::func_58() && __LIB_8__::func_379(16777216))
			{
				if (!__LIB_8__::func_377(&(iLocal_2030[0])))
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_2030[0], true, true);
					__LIB_2__::func_133(iLocal_2030[0], "0931_A_M_M_Civ_White_AVOID_01", 0);
				}
				func_253();
				func_670(0, 1);
				func_376(0, 1, 1);
				if ((__LIB_7__::func_908(Local_1702.f_136, 8) || __LIB_7__::func_908(Local_1702.f_136, 32)) || __LIB_7__::func_908(Local_1702.f_136, 16))
				{
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					bVar1 = true;
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					bVar0 = true;
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					__LIB_8__::func_376(524288);
					func_695(Local_699.f_690[2 /*12*/].f_8, __LIB_8__::func_424(), __LIB_8__::func_425(), 1, 1073741824 /* Float: 2f */);
					func_698(&iLocal_521, __LIB_8__::func_426(), __LIB_8__::func_427(), 2);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
					func_699(iParam0, -1);
					func_736();
					__LIB_8__::func_373(32768);
					__LIB_8__::func_370(256);
					__LIB_1__::func_148(&(vLocal_381[3 /*3*/]));
					if (!__LIB_7__::func_908(Local_1702.f_136, 8))
					{
						func_702("TRACKS_OBJ09", func_685());
						__LIB_8__::func_370(4194304);
						ENTITY::SET_ENTITY_COORDS(Local_699.f_690[9 /*12*/].f_8, __LIB_8__::func_423(), true, false, true, true);
					}
					else
					{
						func_702("TRACKS_OBJ04", func_685());
						__LIB_2__::func_73(*iParam0, &(uLocal_2034[3]), -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, __LIB_8__::func_421(__LIB_7__::func_908(Local_1702.f_136, 524288)));
						if (!func_685())
						{
							__LIB_7__::func_903(uLocal_2034[3], 1);
						}
					}
					iLocal_525 = 13;
				}
				else if (__LIB_7__::func_908(Local_1702.f_136, 256))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2030[0], true);
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					bVar1 = true;
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					bVar0 = true;
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					__LIB_8__::func_373(4096);
					__LIB_8__::func_380(1);
					__LIB_8__::func_376(1048576);
					__LIB_8__::func_373(32768);
					if (__LIB_1__::func_985())
					{
						Local_558.f_1 = "RCMP_FINSU2";
					}
					else
					{
						Local_558.f_1 = "RCMP_FINSU3";
					}
					func_736();
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2030[0], false, true);
					__LIB_8__::func_16(&(Local_424[0 /*7*/]));
					iLocal_525 = 7;
				}
				else if (__LIB_7__::func_907(Local_1702.f_136, 64))
				{
					func_233(iParam0, __LIB_8__::func_392(), 1, 0, 1, 0, 1, 1, 0);
					__LIB_7__::func_952(&(Local_424[3 /*7*/]));
					func_376(0, 1, 0);
					func_723(1, 1, 8f);
					func_740(0);
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					bVar1 = true;
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					bVar0 = true;
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
					__LIB_8__::func_376(524288);
					iLocal_525 = 1;
				}
				else
				{
					func_233(iParam0, __LIB_8__::func_392(), 1, 0, 1, 0, 1, 1, 0);
					func_376(0, 1, 0);
					func_723(1, 1, 8f);
					func_670(0, 0);
					__LIB_0__::func_0(0);
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					bVar1 = true;
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					bVar0 = true;
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(bVar0, bVar1), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(bVar0, bVar1));
					iLocal_359[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2198.052f, 653.0551f, 96.21241f, 0f, 0f, 17.8385f, 2.100592f, 2.018646f, 1.146914f, "EA CURR - volTable");
					POPULATION::_0x18262CAFEBB5FBE1(iLocal_359[1], 0, 0, 0, -1, -1, 0);
					POPULATION::_0xB56D41A694E42E86(iLocal_359[1], 0, 0, 0, -1, -1, 0);
					__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
					__LIB_8__::func_376(524288);
					Local_488 = 0;
					Local_488.f_1 = Global_35;
					Local_488.f_8 = { __LIB_8__::func_430() };
					iLocal_525 = 1;
				}
			}
			break;
		case 1:
			func_233(iParam0, __LIB_8__::func_392(), 1, 0, 1, 0, 1, 1, 0);
			if (__LIB_2__::func_466(&(Local_2184[0 /*52*/][0 /*17*/]), 0, 0))
			{
				if (__LIB_8__::func_88(&Local_263, 16))
				{
					func_376(0, 1, 0);
				}
			}
			else if (!__LIB_8__::func_88(&Local_263, 16))
			{
				func_670(0, 0);
			}
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(__LIB_8__::func_416(0, 0), false) && (__LIB_7__::func_907(Local_1702.f_136, 64) || __LIB_0__::func_0(0)))
			{
			}
			break;
		case 2:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_49();
			break;
		case 3:
			__LIB_8__::func_49();
			__LIB_8__::func_380(67108864);
			__LIB_8__::func_380(32);
			MAP::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(true);
			iLocal_525 = 4;
			break;
		case 4:
			if (!__LIB_7__::func_907(Local_1702.f_136, 64))
			{
				if (__LIB_8__::func_355(&(Local_424[3 /*7*/])))
				{
					__LIB_8__::func_360(&(Local_424[3 /*7*/]));
				}
			}
			else if (iLocal_2290 == 0 && iLocal_2289 == 0)
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_8__::func_82(Local_1702.f_136, 256);
				__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_INT_LO_YES", Global_35, *iParam0, 0, 0, 1, 1);
				iLocal_522 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_416(0, 0), __LIB_1__::func_977(), 0f, 0, 0, 0);
				func_698(&iLocal_522, __LIB_8__::func_432(&(Local_424[3 /*7*/]), "RailroadForeman", "EXIT_YES"), __LIB_8__::func_433(&(Local_424[3 /*7*/]), "RailroadForeman", "EXIT_YES"), 0);
				__LIB_8__::func_16(&(Local_424[0 /*7*/]));
				__LIB_1__::func_748(&(Local_1702.f_32), 1, 1);
				__LIB_1__::func_748(&(Local_1702.f_33), 1, 1);
				func_749();
				__LIB_1__::func_148(&(vLocal_381[0 /*3*/]));
				__LIB_8__::func_380(268435456);
				if (__LIB_0__::func_6(iLocal_292))
				{
					__LIB_1__::func_821(iLocal_292, 1, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Local_699.f_690[1 /*12*/].f_8, true);
				iLocal_294 = 0;
				iLocal_525 = 5;
			}
			else if (iLocal_2290 == 0 && iLocal_2289 == 1)
			{
				__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_INT_LO_NO", Global_35, *iParam0, 0, 0, 1, 1);
				iLocal_522 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_416(0, 0), __LIB_1__::func_977(), 0f, 0, 0, 0);
				func_698(&iLocal_522, __LIB_8__::func_432(&(Local_424[3 /*7*/]), "RailroadForeman", "EXIT_NO"), __LIB_8__::func_433(&(Local_424[3 /*7*/]), "RailroadForeman", "EXIT_NO"), 0);
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_1__::func_748(&(Local_1702.f_32), 1, 1);
				__LIB_1__::func_748(&(Local_1702.f_33), 1, 1);
				__LIB_8__::func_380(268435456);
				if (__LIB_0__::func_6(iLocal_292))
				{
					__LIB_1__::func_559(iLocal_292, 1, 2);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Local_699.f_690[1 /*12*/].f_8, true);
				iLocal_525 = 5;
			}
			if (__LIB_7__::func_907(Local_1702.f_136, 64))
			{
				func_751(iParam0, 1.5f, iLocal_14 == 1, 2, 1, 1);
			}
			else if (__LIB_1__::func_285(&(vLocal_381[1 /*3*/]), 12f))
			{
				if (iLocal_294 < 2)
				{
					if (iLocal_294 > 0)
					{
						__LIB_8__::func_435(&(Local_424[3 /*7*/]), __LIB_8__::func_434((iLocal_294 - 1)));
					}
					__LIB_8__::func_419(&(Local_424[3 /*7*/]), __LIB_8__::func_434(iLocal_294));
					iLocal_525 = 6;
				}
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0, 1, *iParam0, 1) && (__LIB_7__::func_907(Local_1702.f_136, 64) || __LIB_8__::func_34(&(Local_424[3 /*7*/]))))
			{
				if (!__LIB_7__::func_907(Local_1702.f_136, 64))
				{
					__LIB_8__::func_575(&(Local_424[3 /*7*/]), 1, 1);
				}
				else
				{
					__LIB_7__::func_952(&(Local_424[3 /*7*/]));
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1702, 65536);
				func_376(0, 1, 0);
				__LIB_8__::func_380(64);
				func_723(0, 0, 1097859072 /* Float: 15f */);
				__LIB_8__::func_85(Local_1702.f_136, 64);
				if (__LIB_7__::func_908(Local_1702.f_136, 256))
				{
					func_192(1);
					iLocal_525 = 7;
				}
				else
				{
					func_192(1);
					iLocal_525 = 8;
				}
			}
			break;
		case 6:
			if (__LIB_8__::func_348(&(Local_424[3 /*7*/]), __LIB_8__::func_434(iLocal_294)))
			{
				__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
				__LIB_8__::func_418(&(Local_424[3 /*7*/]), __LIB_8__::func_434(iLocal_294), 1);
				__LIB_8__::func_359(&(Local_424[3 /*7*/]));
				__LIB_8__::func_336(&(Local_1702.f_35), __LIB_8__::func_436(iLocal_294), *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_294++;
				iLocal_525 = 4;
			}
			break;
		case 7:
			func_758(iParam0, 0);
			if (__LIB_8__::func_379(1048576))
			{
				func_751(iParam0, 1.5f, iLocal_14 == 1, 1, 1, 1);
			}
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_5__::func_236(1))
			{
				__LIB_0__::func_325(&(uLocal_2043[0]));
				if (!__LIB_8__::func_377(&(iLocal_2030[0])))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 6, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 4, true);
				}
			}
			break;
		case 8:
			func_758(iParam0, 0);
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_0__::func_325(&(uLocal_2043[0]));
				func_723(0, 0, 1097859072 /* Float: 15f */);
				func_376(0, 1, 1);
				iLocal_525 = 9;
			}
			break;
		case 9:
			if (func_758(iParam0, 0))
			{
				func_723(0, 0, 1097859072 /* Float: 15f */);
				func_376(0, 1, 0);
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(1, 0), 262148, joaat("U_M_M_RACFOREMAN_01"), __LIB_8__::func_429(1, 0));
				__LIB_8__::func_397(512);
				func_192(1);
				iLocal_525 = 17;
			}
			break;
		case 10:
			func_758(iParam0, 0);
			if (__LIB_8__::func_379(1048576))
			{
				func_751(iParam0, 1.5f, iLocal_14 == 1, 1, 1, 1);
			}
			if (!__LIB_8__::func_372(4194304) && __LIB_2__::func_598(Global_35, Local_424[3 /*7*/], "arthur", 0, 0, 1, 0))
			{
				func_686(2, "TRACKS_OBJ05", func_685(), 0);
				__LIB_8__::func_373(4194304);
			}
			bVar2 = __LIB_8__::func_343(512);
			if ((__LIB_8__::func_372(4194304) && __LIB_8__::func_372(32768)) && __LIB_8__::func_256(iLocal_2030[0], &uLocal_2396, &uLocal_2401, &bVar2, 1f, 50f, 0f, 0, 0f, 1))
			{
				__LIB_8__::func_563(512, bVar2);
				__LIB_3__::func_896(&uLocal_2396);
				__LIB_8__::func_419(&(Local_424[0 /*7*/]), "PBL_idle");
				__LIB_8__::func_370(-2147483648);
				iLocal_525 = 11;
			}
			__LIB_8__::func_563(512, bVar2);
			break;
		case 11:
			func_758(iParam0, 0);
			if (__LIB_8__::func_24(&(Local_424[0 /*7*/]), "BOOL_idle"))
			{
				__LIB_8__::func_196(&(Local_424[0 /*7*/]), "BOOL_idle");
			}
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_381[0 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_381[0 /*3*/]));
			}
			if (!__LIB_8__::func_346(8192) && !TASK::GET_IS_TASK_ACTIVE(iLocal_2030[0], 3))
			{
				if (__LIB_2__::func_118(iLocal_2030[0], 1, 1) < 10f)
				{
					if (!__LIB_8__::func_88(&Local_263, 1))
					{
						func_270();
						__LIB_19__::func_565(&Local_263, &Local_1702, 2048, 51549, 0, 0);
						__LIB_7__::func_961(&Local_263, 128);
						Local_263 = iLocal_2030[0];
					}
					else
					{
						__LIB_7__::func_961(&Local_263, 512);
					}
				}
				__LIB_8__::func_397(8192);
			}
			if (func_763())
			{
			}
			break;
		case 12:
			if (__LIB_2__::func_598(iLocal_2030[0], Local_424[0 /*7*/], "jr_foreman", joaat("ENDSINWALK"), 0, 1, 0))
			{
				if (!__LIB_8__::func_343(256))
				{
					func_695(Local_699.f_690[2 /*12*/].f_8, __LIB_8__::func_424(), __LIB_8__::func_425(), 1, 1073741824 /* Float: 2f */);
					func_698(&iLocal_521, __LIB_8__::func_426(), __LIB_8__::func_427(), 2);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
					func_699(iParam0, -1);
					__LIB_8__::func_370(256);
					__LIB_1__::func_148(&(vLocal_381[3 /*3*/]));
				}
				iLocal_359[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(__LIB_8__::func_423(), 0f, 0f, 0f, 20f, 20f, 10f, "EA CURR - volTree");
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_359[3], 0, 0, 0, -1, -1, 0);
				POPULATION::_0xB56D41A694E42E86(iLocal_359[3], 0, 0, 0, -1, -1, 0);
				TASK::TASK_PLAY_ANIM(iLocal_2030[0], "SCRIPT_PROC@EVENT_AREA@UNION_RAILROAD@STAGE_01@RAILROAD", "THIEF_EXIT", 2f, -2f, -1, 67108880, 0f, false, 0, false, 0, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_2140);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_8__::func_437(0), 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_8__::func_437(1), 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_8__::func_437(2), 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_8__::func_438(), 1f, -1, 0.25f, 0, __LIB_8__::func_439());
				__LIB_1__::func_474(iLocal_2030[0], &iLocal_2140, 0, 0, 1, 1);
				__LIB_1__::func_991(iLocal_2030[0], joaat("HONOR_EVENT_LOOT_INNOCENT"));
				__LIB_1__::func_991(iLocal_2030[0], joaat("HONOR_EVENT_AMBIENT_KO"));
				__LIB_1__::func_991(iLocal_2030[0], joaat("HONOR_EVENT_ANTAGONIZE"));
				__LIB_1__::func_991(iLocal_2030[0], joaat("HONOR_EVENT_SCARE"));
				iLocal_525 = 13;
			}
			break;
		case 13:
			if ((!__LIB_8__::func_372(65536) && !__LIB_1__::func_205(iLocal_2030[0], iLocal_359[5], 1, 0)) && !__LIB_1__::func_205(iLocal_2030[0], Global_1392194[Local_1702.f_136 /*10*/].f_6, 1, 0))
			{
				__LIB_8__::func_373(65536);
			}
			if (func_769())
			{
				__LIB_8__::func_440(&Local_488);
				if (!func_580())
				{
					sVar3 = "PBL_return_no_luck";
				}
				else if (func_771())
				{
					if (__LIB_8__::func_379(32) && __LIB_0__::func_665(Global_35, iLocal_2030[0], 1, 1) < 5f)
					{
						sVar3 = "PBL_return_thief_alive";
						__LIB_8__::func_370(32768);
						__LIB_8__::func_82(Local_1702.f_136, 64);
						__LIB_8__::func_93(Local_1702.f_136, 512);
						__LIB_8__::func_85(Local_1702.f_136, 32);
						__LIB_1__::func_336(&(Local_488.f_23), 4096);
						ENTITY::_0x18FF3110CF47115D(iLocal_2030[0], 1, 0);
					}
					else
					{
						sVar3 = "PBL_return_thief_quit";
						__LIB_8__::func_82(Local_1702.f_136, 64);
						__LIB_8__::func_93(Local_1702.f_136, 512);
						__LIB_8__::func_85(Local_1702.f_136, 32);
					}
				}
				else
				{
					sVar3 = "PBL_return_thief_dead";
					__LIB_8__::func_82(Local_1702.f_136, 64);
					__LIB_8__::func_85(Local_1702.f_136, 512);
					__LIB_8__::func_93(Local_1702.f_136, 32);
				}
				__LIB_8__::func_188(&(Local_424[1 /*7*/]), "script@proc@eventareas@unionrailroad@stageonetent", sVar3, 0);
				__LIB_8__::func_380(-2147483648);
				__LIB_8__::func_370(64);
				func_530(1);
				Local_488.f_1 = Global_35;
				__LIB_1__::func_336(&(Local_488.f_23), 25344);
				Local_488.f_17 = 0.2f;
				Local_488.f_18 = 0.25f;
				__LIB_7__::func_961(&Local_263, 4);
				if (__LIB_7__::func_908(Local_1702.f_136, 8))
				{
					__LIB_0__::func_769();
				}
				MAP::DISPLAY_RADAR(false);
				iLocal_525 = 14;
			}
			break;
		case 14:
			if (__LIB_7__::func_990(&(Local_424[1 /*7*/])))
			{
				if (!func_580())
				{
					sVar4 = "PBL_return_no_luck";
				}
				else if (func_771())
				{
					if (__LIB_8__::func_379(32) && __LIB_0__::func_665(Global_35, iLocal_2030[0], 1, 1) < 5f)
					{
						sVar4 = "PBL_return_thief_alive";
					}
					else
					{
						sVar4 = "PBL_return_thief_quit";
					}
				}
				else
				{
					sVar4 = "PBL_return_thief_dead";
				}
				Local_488.f_8 = { __LIB_8__::func_33(&(Local_424[1 /*7*/]), "plr", sVar4) };
				Local_488.f_19 = __LIB_8__::func_200(&(Local_424[1 /*7*/]), "plr", sVar4);
				Local_488.f_25 = Local_424[1 /*7*/];
				StringCopy(&(Local_488.f_30), "plr", 24);
				StringCopy(&(Local_488.f_26), sVar4, 32);
				__LIB_8__::func_131(&Local_1702, 65536);
				__LIB_8__::func_553(&Local_488, 106);
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				iLocal_525 = 15;
			}
			break;
		case 15:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
			}
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (__LIB_8__::func_553(&Local_488, 106))
			{
				__LIB_2__::func_571(&Local_1702, &(Local_1702.f_28));
				__LIB_8__::func_370(32);
				__LIB_0__::func_928(&Local_2297, *iParam0, "EA_Rcamp_Foreman", 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1702, 65536);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2030[0], true);
				PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 178, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 288, true);
				PED::SET_PED_RESET_FLAG(iLocal_2030[0], 147, true);
				__LIB_8__::func_148(&(Local_424[1 /*7*/]), Local_699.f_690[2 /*12*/].f_8, "Chair");
				__LIB_8__::func_148(&(Local_424[1 /*7*/]), Local_699.f_690[11 /*12*/].f_8, "pen");
				if (func_580())
				{
					ENTITY::SET_ENTITY_COORDS(Local_699.f_690[9 /*12*/].f_8, 2202.462f, 638.4186f, 95.3074f, true, false, true, true);
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_699.f_690[9 /*12*/].f_8))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_699.f_690[9 /*12*/].f_8, true);
					}
					__LIB_8__::func_148(&(Local_424[1 /*7*/]), Local_699.f_690[10 /*12*/].f_8, "money_A");
					__LIB_8__::func_148(&(Local_424[1 /*7*/]), Local_699.f_690[9 /*12*/].f_8, "money_B");
				}
				__LIB_8__::func_147(&(Local_424[1 /*7*/]), *iParam0, "foreman", 1);
				__LIB_8__::func_147(&(Local_424[1 /*7*/]), Global_35, "plr", 1);
				if (!__LIB_8__::func_377(&(iLocal_2030[0])) && __LIB_8__::func_343(32768))
				{
					__LIB_8__::func_147(&(Local_424[1 /*7*/]), iLocal_2030[0], "vic", 0);
				}
				Local_558.f_33 = { Local_2297 };
				__LIB_8__::func_131(&Local_1702, 128);
				if (__LIB_7__::func_908(Local_1702.f_136, 8))
				{
					__LIB_0__::func_769();
				}
				if (__LIB_8__::func_379(32) && __LIB_0__::func_665(Global_35, iLocal_2030[0], 1, 1) < 5f)
				{
					ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]);
					ENTITY::DETACH_ENTITY(iLocal_2030[0], false, false);
				}
				__LIB_8__::func_16(&(Local_424[1 /*7*/]));
				if (!func_580())
				{
					if (__LIB_7__::func_908(Local_1702.f_136, 32) || __LIB_7__::func_908(Local_1702.f_136, 16))
					{
						__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_FINSU1B", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_FINSU1", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				__LIB_0__::func_325(&(uLocal_2043[0]));
				if (__LIB_7__::func_908(Local_1702.f_136, 8))
				{
					__LIB_0__::func_325(&(uLocal_2034[3]));
					__LIB_0__::func_769();
				}
				iLocal_359[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2203.92f, 641.6044f, 96.79558f, 0f, 0f, 33.06224f, 0.750799f, 2.395941f, 2.483808f, "EA CURR - volChairBlock");
				PATHFIND::_0x19C7567D2F2287D6(iLocal_359[11], 7);
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(1, 0), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(1, 0));
				iLocal_525 = 16;
			}
			break;
		case 16:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_343(32))
			{
				func_777(1, "plr");
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (__LIB_8__::func_379(1))
			{
				return 0;
			}
			PED::SET_PED_RESET_FLAG(iLocal_2030[0], 147, true);
			if (!__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("DROP")))
				{
					__LIB_2__::func_919(__LIB_3__::func_661(Global_35), 1, 1);
				}
				if (!__LIB_8__::func_379(4) && func_580())
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1323255486))
					{
						func_780();
						__LIB_2__::func_571(&Local_1702, &(Local_1702.f_28));
						TASK::TASK_KNOCKED_OUT(iLocal_2030[0], -100f, false);
					}
				}
				if (!__LIB_8__::func_379(2) && __LIB_8__::func_379(4))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) || __LIB_2__::func_598(Global_35, Local_424[1 /*7*/], "plr", joaat("RELEASE"), 0, 1, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[9 /*12*/].f_8))
						{
							OBJECT::DELETE_OBJECT(&(Local_699.f_690[9 /*12*/].f_8));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[10 /*12*/].f_8))
						{
							OBJECT::DELETE_OBJECT(&(Local_699.f_690[10 /*12*/].f_8));
						}
						if (func_771())
						{
							iVar5 = (Global_40.f_9096[Local_1702.f_136 /*12*/].f_6 / 2);
							__LIB_2__::func_590(iVar5, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
						}
						else
						{
							iVar5 = (Global_40.f_9096[Local_1702.f_136 /*12*/].f_6 / 4);
							__LIB_2__::func_590(iVar5, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
						}
						__LIB_2__::func_190(*iParam0, (Global_40.f_9096[Local_1702.f_136 /*12*/].f_6 - iVar5));
						__LIB_8__::func_376(2);
					}
				}
			}
			if (!__LIB_7__::func_907(Local_1702.f_136, 128) && __LIB_2__::func_598(Global_35, Local_424[1 /*7*/], "plr", joaat("RELEASE"), 0, 1, 0))
			{
				func_783();
			}
			if (__LIB_2__::func_598(*iParam0, Local_424[1 /*7*/], "foreman", 0, 0, 1, 0))
			{
				func_783();
				func_784(iParam0);
				iLocal_525 = 17;
			}
			break;
		case 17:
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				if (__LIB_2__::func_763(Local_1702.f_138, 0))
				{
					if (!__LIB_0__::func_75(&(Local_1702.f_133)))
					{
						__LIB_1__::func_148(&(Local_1702.f_133));
					}
					if (__LIB_8__::func_343(32768))
					{
						iVar6 = 1000;
					}
					else
					{
						iVar6 = 30000;
					}
					iVar6 = (iVar6 / 1000);
					if (__LIB_1__::func_285(&(Local_1702.f_133), BUILTIN::TO_FLOAT(iVar6)) && !ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
					{
						__LIB_0__::func_37(&(Local_1702.f_133));
						func_785(iParam0);
						iLocal_525 = 18;
					}
				}
			}
			break;
		case 18:
			if (__LIB_2__::func_763(Local_1702.f_138, 0) && !PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				__LIB_8__::func_124(Local_1702.f_138, 1);
			}
			break;
	}
	return 0;
}

int func_389(int iParam0)
{
	int iVar0;
	struct<6> Var1;
	vector3 vVar7;
	struct<6> Var10;
	vector3 vVar16;
	char[] cVar19[8];
	int iVar20;
	func_725(__LIB_0__::func_58());
	func_787();
	switch (iLocal_526)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
			}
			__LIB_3__::func_999(&Local_1702, 1);
			__LIB_3__::func_896(&uLocal_1853);
			Local_558.f_12 = 13.5f;
			Local_558.f_13 = 10f;
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_359[1]))
			{
				iLocal_359[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2179.364f, 878.3112f, 119.0544f, 0f, 0f, 28.30205f, 5.499839f, 6.271602f, 7.366519f, "EA CURR - volGoons");
				POPULATION::_0xB56D41A694E42E86(iLocal_359[1], 8192, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_359[1], 8192, 0, 0, -1, -1, 0);
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_359[1]))
				{
					iLocal_296 = 0;
					while (iLocal_296 < Local_699)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[iLocal_296]))
						{
							PED::_0xFC3DB99C8144CD81(iLocal_2030[iLocal_296], iLocal_359[1], 0, 0, 0);
						}
						iLocal_296++;
					}
				}
			}
			if (!__LIB_8__::func_372(64))
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_441(), 15, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_442());
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(0, 0), 15, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(0, 0));
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(1, 0), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(1, 0));
				__LIB_8__::func_373(64);
			}
			else
			{
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(__LIB_8__::func_416(0, 0), false))
				{
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(0, 0), 15, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(0, 0));
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(1, 0), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(1, 0));
				}
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(__LIB_8__::func_441(), false))
				{
					STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_441(), 15, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_442());
				}
			}
			uLocal_523 = ENTITY::_0x6F3068258A499E52(joaat("P_DESK01X"), 2181.692f, 776.3154f, 106.1771f, 11);
			if (func_731(0f, 0f, 0f, -1020002304 /* Float: -180f */) && __LIB_8__::func_379(16777216))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				__LIB_8__::func_380(67108864);
				if (__LIB_8__::func_548())
				{
					func_670(0, 1);
					func_376(0, 1, 1);
					func_736();
					__LIB_8__::func_373(32768);
					func_791();
					func_695(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_413(0, 1), __LIB_8__::func_414(0), 1, 1073741824 /* Float: 2f */);
					func_698(&iLocal_522, __LIB_8__::func_443(1, 0), __LIB_8__::func_444(1, 0), 0);
					func_233(iParam0, __LIB_8__::func_413(0, 0), 1, 1, 0, 0, 0, 0, 1);
					__LIB_8__::func_376(524288);
					iLocal_359[7] = iLocal_359[0];
					iLocal_526 = 20;
				}
				else if (__LIB_8__::func_343(1048576))
				{
					func_670(0, 1);
					func_376(0, 1, 1);
					__LIB_8__::func_373(32768);
					func_791();
					func_695(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_413(1, 0), __LIB_8__::func_414(1), 1, 1073741824 /* Float: 2f */);
					func_698(&iLocal_521, __LIB_8__::func_443(1, 1), __LIB_8__::func_444(1, 1), 0);
					func_699(iParam0, -1);
					__LIB_8__::func_188(&(Local_424[1 /*7*/]), "script@proc@eventareas@unionrailroad@stageTwoTent_Return", "PBL_goons_dead_already", 0);
					StringCopy(&(Local_424[1 /*7*/].f_1), "PBL_goons_dead_already", 24);
					iLocal_526 = 23;
				}
				else if (__LIB_0__::func_58())
				{
					func_670(0, 1);
					func_376(0, 1, 1);
					if (__LIB_7__::func_907(Local_1702.f_136, 67108864))
					{
						__LIB_8__::func_373(4096);
						func_736();
						__LIB_0__::func_325(&(uLocal_2043[0]));
						__LIB_8__::func_376(524288);
						func_791();
						iLocal_526 = 8;
					}
					else if (__LIB_7__::func_908(Local_1702.f_136, 4))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2030[0]))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_2030[0], 2, false);
						}
						__LIB_8__::func_373(4096);
						func_736();
						__LIB_8__::func_373(32768);
						__LIB_0__::func_325(&(uLocal_2043[0]));
						__LIB_8__::func_376(524288);
						func_791();
						func_695(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_413(1, 1), __LIB_8__::func_414(1), 1, 1073741824 /* Float: 2f */);
						func_698(&iLocal_521, __LIB_8__::func_443(1, 1), __LIB_8__::func_444(1, 1), 0);
						TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_521, __LIB_8__::func_445(1, 0), -1, false, true, 0, false, -1f, false);
						iLocal_526 = 7;
					}
					else
					{
						func_791();
						func_695(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_413(0, 0), __LIB_8__::func_414(0), 1, 1073741824 /* Float: 2f */);
						func_698(&iLocal_522, __LIB_8__::func_443(0, 0), __LIB_8__::func_444(0, 0), 0);
						__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
						iLocal_294 = 0;
						iLocal_526 = 1;
					}
				}
			}
			break;
		case 1:
			if (!__LIB_8__::func_343(67108864))
			{
				func_698(&iLocal_522, __LIB_8__::func_443(0, 0), __LIB_8__::func_444(0, 0), 0);
			}
			func_233(iParam0, __LIB_8__::func_413(0, 0), 1, 0, 0, 0, 0, 0, 0);
			if (!__LIB_7__::func_907(Local_1702.f_136, 4))
			{
				__LIB_8__::func_85(Local_1702.f_136, 4);
				__LIB_8__::func_131(&Local_1702, 128);
			}
			if (!__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
			}
			if (__LIB_8__::func_372(33554432) || __LIB_1__::func_205(Global_35, iLocal_359[0], 1, 0))
			{
				func_706(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
			}
			if (__LIB_2__::func_227(-7.5f, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_381[1 /*3*/])))
			{
				__LIB_8__::func_371(33554432);
				__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
			}
			if (__LIB_8__::func_372(32768))
			{
				if ((iLocal_294 < 3 && __LIB_2__::func_215(*iParam0, Global_35, 1, 20f, 0)) && __LIB_1__::func_313(&(vLocal_381[1 /*3*/]), 7.5f))
				{
					iLocal_526 = 2;
				}
			}
			if (func_795())
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_8__::func_577(&Local_558);
				__LIB_2__::func_73(*iParam0, &(uLocal_2043[0]), -89429847, 580546400, 0, __LIB_8__::func_421(__LIB_7__::func_908(Local_1702.f_136, 524288)));
				if (__LIB_8__::func_343(8))
				{
					__LIB_8__::func_371(33554432);
					iLocal_526 = 27;
				}
				else
				{
					func_736();
					__LIB_8__::func_371(33554432);
					__LIB_8__::func_82(Local_1702.f_136, 1024);
					__LIB_8__::func_131(&Local_1702, 128);
					__LIB_0__::func_747(30, 0, 1);
					__LIB_8__::func_440(&Local_488);
					Local_488.f_1 = Global_35;
					Local_488.f_8 = { __LIB_8__::func_33(&(Local_424[2 /*7*/]), "plr", "PBL_proposition") };
					Local_488.f_19 = __LIB_8__::func_200(&(Local_424[2 /*7*/]), "plr", "PBL_proposition");
					__LIB_1__::func_336(&(Local_488.f_23), 25088);
					Local_488.f_25 = Local_424[2 /*7*/];
					StringCopy(&(Local_488.f_30), "plr", 24);
					StringCopy(&(Local_488.f_26), "PBL_proposition", 32);
					__LIB_8__::func_93(Local_1702.f_136, 8388608);
					if (!__LIB_7__::func_908(Local_1702.f_136, 64) && (__LIB_7__::func_908(Local_1702.f_136, 32) || __LIB_7__::func_908(Local_1702.f_136, 16)))
					{
						__LIB_8__::func_108(&(Local_1702.f_35), "RCMP_F01ASA", 0);
					}
					else
					{
						__LIB_8__::func_108(&(Local_1702.f_35), "RCMP_F01AS", 0);
					}
					__LIB_8__::func_131(&Local_1702, 65536);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					func_530(1);
					__LIB_8__::func_553(&Local_488, 106);
					__LIB_7__::func_961(&Local_263, 4);
					MAP::DISPLAY_RADAR(false);
					iLocal_526 = 3;
				}
			}
			break;
		case 2:
			func_706(iParam0, 0, Global_35, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_227(0, 1, 0, 0) && __LIB_8__::func_576(iParam0))
			{
				__LIB_8__::func_373(33554432);
				__LIB_8__::func_336(&(Local_1702.f_35), __LIB_8__::func_446(iLocal_294, !__LIB_7__::func_908(Local_1702.f_136, 256)), *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_294++;
				iLocal_526 = 1;
			}
			if (__LIB_3__::func_332(__LIB_8__::func_447(0), 1) < 3f)
			{
				iLocal_526 = 1;
			}
			break;
		case 3:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (__LIB_8__::func_553(&Local_488, 106) && TASK::_0x02EBBB3989B7E695(*iParam0))
			{
				TASK::_0x90703A8F75EE4ABD(*iParam0, 1048576000 /* Float: 0.25f */);
				__LIB_8__::func_373(4096);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1702, 65536);
				__LIB_8__::func_370(32);
				__LIB_8__::func_370(536870912);
				__LIB_8__::func_147(&(Local_424[2 /*7*/]), *iParam0, "foreman", 1);
				__LIB_8__::func_147(&(Local_424[2 /*7*/]), Global_35, "plr", 1);
				__LIB_8__::func_148(&(Local_424[2 /*7*/]), Local_699.f_690[4 /*12*/].f_8, "CIGARETTE");
				__LIB_8__::func_148(&(Local_424[2 /*7*/]), Local_699.f_690[0 /*12*/].f_8, "CHAIR");
				__LIB_8__::func_148(&(Local_424[2 /*7*/]), Local_699.f_690[11 /*12*/].f_8, "PEN");
				__LIB_8__::func_148(&(Local_424[2 /*7*/]), Local_699.f_690[13 /*12*/].f_8, "CUP");
				__LIB_8__::func_376(524288);
				__LIB_8__::func_16(&(Local_424[2 /*7*/]));
				if (!__LIB_7__::func_908(Local_1702.f_136, 64) && (__LIB_7__::func_908(Local_1702.f_136, 32) || __LIB_7__::func_908(Local_1702.f_136, 16)))
				{
					__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_F01ASA", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_F01AS", *iParam0, Global_35, 0, 0, 1, 1);
				}
				iLocal_294 = 0;
				__LIB_0__::func_37(&(vLocal_381[1 /*3*/]));
				iLocal_526 = 4;
			}
			break;
		case 4:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_343(32))
			{
				func_777(2, "plr");
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (!__LIB_8__::func_379(1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				if (!__LIB_8__::func_343(536870912))
				{
					MAP::DISPLAY_RADAR(true);
				}
			}
			if (__LIB_2__::func_598(*iParam0, Local_424[2 /*7*/], "foreman", joaat("RELEASE"), 0, 1, 0))
			{
				if (!__LIB_0__::func_163(*iParam0, 993674639))
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam0, __LIB_8__::func_441(), -1, false, __LIB_8__::func_442(), -1f, false);
					__LIB_8__::func_401(16384);
					func_723(1, 1, 1097859072 /* Float: 15f */);
					func_376(0, 1, 1);
					func_740(0);
				}
				if (!__LIB_8__::func_379(1))
				{
					__LIB_8__::func_380(32);
					func_706(iParam0, 0, Global_35, 1, 0, 0, 0, 1);
					if (__LIB_0__::func_139(Local_1702.f_34))
					{
						__LIB_1__::func_748(&(Local_1702.f_34), 1, 1);
					}
					if (__LIB_8__::func_343(536870912))
					{
						__LIB_8__::func_380(536870912);
					}
					if (!__LIB_0__::func_75(&(vLocal_381[1 /*3*/])) && __LIB_2__::func_227(0, 1, 0, 0))
					{
						__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
					}
					if (iLocal_2290 == 0)
					{
						if (iLocal_2289 == 0)
						{
							__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_P02A", Global_35, *iParam0, 0, 0, 1, 1);
							__LIB_8__::func_82(Local_1702.f_136, 4);
							func_723(0, 0, 1097859072 /* Float: 15f */);
							func_376(0, 1, 1);
							if (__LIB_0__::func_6(iLocal_292))
							{
								__LIB_1__::func_821(iLocal_292, 1, 1);
							}
							__LIB_8__::func_373(32768);
							__LIB_8__::func_188(&(Local_424[3 /*7*/]), "script@proc@eventareas@unionrailroad@stageTwoTent_Response", "PBL_proposition_accept", 0);
							iLocal_526 = 6;
						}
						else if (iLocal_2289 == 1 || !__LIB_1__::func_205(Global_35, iLocal_359[0], 1, 0))
						{
							__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_P02D", Global_35, *iParam0, 0, 0, 1, 1);
							__LIB_8__::func_85(Local_1702.f_136, 67108864);
							func_723(0, 0, 1097859072 /* Float: 15f */);
							func_376(0, 1, 1);
							if (__LIB_0__::func_6(iLocal_292))
							{
								__LIB_1__::func_559(iLocal_292, 1, 2);
							}
							__LIB_8__::func_188(&(Local_424[3 /*7*/]), "script@proc@eventareas@unionrailroad@stageTwoTent_Response", "PBL_proposition_decline", 0);
							iLocal_526 = 6;
						}
					}
					if (__LIB_2__::func_215(*iParam0, Global_35, 1, 20f, 0) && __LIB_1__::func_313(&(vLocal_381[1 /*3*/]), 7.5f))
					{
						if (iLocal_294 < 3)
						{
							iLocal_526 = 5;
						}
						else
						{
							__LIB_1__::func_748(&(Local_1702.f_32), 1, 1);
							__LIB_1__::func_748(&(Local_1702.f_33), 1, 1);
							func_664(0, 0);
							__LIB_8__::func_188(&(Local_424[3 /*7*/]), "script@proc@eventareas@unionrailroad@stageTwoTent_Response", "PBL_proposition_decline", 0);
							iLocal_526 = 6;
						}
					}
				}
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			func_706(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_F01IMPS", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_294++;
				iLocal_526 = 4;
			}
			break;
		case 6:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			func_706(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
			func_706(&Global_35, 0, *iParam0, 0, 0, 0, 0, 1);
			if (__LIB_7__::func_990(&(Local_424[3 /*7*/])) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				__LIB_8__::func_147(&(Local_424[3 /*7*/]), *iParam0, "foreman", 1);
				__LIB_8__::func_147(&(Local_424[3 /*7*/]), Global_35, "Arthur", 1);
				__LIB_8__::func_148(&(Local_424[3 /*7*/]), Local_699.f_690[0 /*12*/].f_8, "CHAIR");
				__LIB_8__::func_148(&(Local_424[3 /*7*/]), Local_699.f_690[11 /*12*/].f_8, "PEN");
				func_664(0, 0);
				func_192(1);
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(1, 0), 1, __LIB_2__::func_929(Local_1702.f_138), __LIB_8__::func_429(1, 0));
				__LIB_8__::func_16(&(Local_424[3 /*7*/]));
				if (__LIB_7__::func_908(Local_1702.f_136, 4))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2030[0]))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_2030[0], 2, false);
					}
					iLocal_528 = 4;
					__LIB_0__::func_325(&(uLocal_2043[0]));
					iLocal_526 = 7;
				}
				else
				{
					__LIB_0__::func_325(&(uLocal_2043[0]));
					iLocal_526 = 8;
				}
			}
			break;
		case 7:
			if (!__LIB_8__::func_372(256))
			{
				if (__LIB_2__::func_227(0, 1, 0, 0))
				{
					func_376(0, 1, 0);
					func_670(0, 1);
					__LIB_8__::func_373(256);
				}
				func_706(iParam0, 0, Global_35, 1, 0, 0, 0, 1);
			}
			if (!__LIB_8__::func_372(256))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
			if (!MAP::DOES_BLIP_EXIST(uLocal_2034[3]))
			{
				func_706(&Global_35, 0, *iParam0, 0, 0, 0, 0, 1);
				if (__LIB_2__::func_227(0, 1, 0, 0))
				{
					__LIB_0__::func_325(&(uLocal_2043[0]));
					__LIB_8__::func_152(&(uLocal_2034[3]), iLocal_359[1], 203020899);
					if (!func_801())
					{
						__LIB_7__::func_903(uLocal_2034[3], 1);
					}
					func_702("TRACKS_OBJ01", func_801());
					__LIB_8__::func_131(&Local_1702, 128);
				}
			}
			__LIB_0__::func_0(0);
			iLocal_526 = 9;
			break;
		case 8:
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam0))
			{
				func_706(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
				func_706(&Global_35, 0, *iParam0, 0, 0, 0, 0, 1);
			}
			else
			{
				__LIB_8__::func_373(256);
			}
			if (__LIB_2__::func_598(*iParam0, Local_424[3 /*7*/], "foreman", joaat("RELEASE"), 0, 1, 0))
			{
				func_698(&iLocal_521, __LIB_8__::func_432(&(Local_424[3 /*7*/]), "foreman", 0), __LIB_8__::func_433(&(Local_424[3 /*7*/]), "foreman", 0), 0);
				func_699(iParam0, -1);
				func_376(0, 1, 0);
				func_670(0, 1);
				__LIB_8__::func_373(256);
				func_802(0);
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(1, 0), 262148, joaat("U_M_M_RACFOREMAN_01"), __LIB_8__::func_429(1, 0));
				__LIB_8__::func_397(512);
				func_192(1);
				iLocal_526 = 26;
			}
			break;
		case 9:
			if (!__LIB_8__::func_346(4194304) && __LIB_2__::func_598(*iParam0, Local_424[3 /*7*/], "foreman", joaat("RELEASE"), 0, 1, 0))
			{
				__LIB_8__::func_371(256);
				func_698(&iLocal_521, __LIB_8__::func_432(&(Local_424[3 /*7*/]), "foreman", 0), __LIB_8__::func_433(&(Local_424[3 /*7*/]), "foreman", 0), 0);
				func_699(iParam0, -1);
				__LIB_8__::func_397(4194304);
			}
			__LIB_8__::func_573();
			if (__LIB_0__::func_0(1))
			{
				iLocal_526 = 10;
			}
			break;
		case 10:
			if (!__LIB_8__::func_346(4194304) && __LIB_2__::func_598(*iParam0, Local_424[3 /*7*/], "foreman", joaat("RELEASE"), 0, 1, 0))
			{
				__LIB_8__::func_371(256);
				func_698(&iLocal_521, __LIB_8__::func_432(&(Local_424[3 /*7*/]), "foreman", 0), __LIB_8__::func_433(&(Local_424[3 /*7*/]), "foreman", 0), 0);
				func_699(iParam0, -1);
				__LIB_8__::func_397(4194304);
			}
			__LIB_8__::func_573();
			if (func_804())
			{
				if (__LIB_8__::func_343(134217728))
				{
					__LIB_8__::func_373(524288);
					__LIB_8__::func_373(1048576);
					__LIB_8__::func_373(262144);
					if ((__LIB_0__::func_71(Global_35) || PED::IS_PED_RAGDOLL(Global_35)) && !__LIB_8__::func_454())
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
						iVar0 = PED::_GET_LAST_MOUNT(Global_35);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							func_695(iVar0, 2184.642f, 869.6215f, 111.9345f, -178.02f, 2, 1073741824 /* Float: 2f */);
						}
					}
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 1, 106);
				}
			}
			break;
		case 12:
			if (func_806(__LIB_8__::func_395()))
			{
				func_807();
				__LIB_2__::func_73(*iParam0, &(uLocal_2043[0]), -89429847, 580546400, 0, __LIB_8__::func_421(__LIB_7__::func_908(Local_1702.f_136, 524288)));
				func_698(&iLocal_522, __LIB_8__::func_443(1, 1), __LIB_8__::func_444(1, 1), 0);
				func_695(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_413(1, 0), __LIB_8__::func_414(1), 1, 1073741824 /* Float: 2f */);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				func_699(iParam0, 0);
				__LIB_8__::func_370(128);
				if (!MISC::_0x0D0AE5081F88CFE1(Local_699.f_15[0 /*32*/].f_1))
				{
					MISC::_0x49F3241C28EBBFBC(0);
					Var1 = joaat("DOCUMENT_HOMESTEAD_DEED");
					Var1.f_1 = 1f;
					Var1.f_3 = 4;
					Var1.f_4 = 1;
					Var1.f_5 = 1;
					MISC::_0x183672FE838A661B(&Var1);
					MISC::_0x38C0C9CAE1544500(Local_699.f_15[0 /*32*/].f_1);
				}
				__LIB_8__::func_82(Local_1702.f_136, 128);
				__LIB_8__::func_82(Local_1702.f_136, 1073741824 /* Float: 2f */);
				__LIB_8__::func_131(&Local_1702, 128);
				iLocal_526 = 16;
			}
			break;
		case 13:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			func_702("TRACKS_OBJ02", func_801());
			__LIB_8__::func_108(&(Local_1702.f_35), "RCMP_IG8", 0);
			func_192(1);
			iLocal_526 = 11;
			break;
		case 11:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
			{
				PED::_0x8B3B71C80A29A4BB(iLocal_2030[0], joaat("MOODAGITATED"), 6);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]))
			{
				PED::_0x8B3B71C80A29A4BB(iLocal_2030[1], joaat("MOODANGRY"), 6);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[2]))
			{
				PED::_0x8B3B71C80A29A4BB(iLocal_2030[2], joaat("MOODANGRY"), 6);
			}
			if (__LIB_4__::func_68("TRACKS_OBJ02", 1))
			{
				__LIB_1__::func_390("TRACKS_OBJ02", 1);
			}
			__LIB_8__::func_370(4194304);
			__LIB_0__::func_769();
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				iLocal_526 = 14;
				return 0;
			}
			__LIB_8__::func_82(Local_1702.f_136, 128);
			__LIB_8__::func_82(Local_1702.f_136, 1073741824 /* Float: 2f */);
			__LIB_8__::func_131(&Local_1702, 128);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
			{
				__LIB_8__::func_183(&(Local_424[0 /*7*/]), iLocal_2030[0], "goon_A");
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]))
			{
				__LIB_8__::func_183(&(Local_424[0 /*7*/]), iLocal_2030[1], "goon_B");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
			{
				PED::SET_PED_USING_ACTION_MODE(iLocal_2030[0], false, -1, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2030[0], Global_35, 10000, 0, 51, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]))
			{
				PED::SET_PED_USING_ACTION_MODE(iLocal_2030[1], false, -1, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2030[1], Global_35, 12000, 0, 51, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[2]))
			{
				PED::SET_PED_USING_ACTION_MODE(iLocal_2030[2], false, -1, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2030[2], Global_35, 9000, 0, 51, 1);
			}
			if (!__LIB_8__::func_343(65536))
			{
				__LIB_0__::func_325(&(uLocal_2034[3]));
				__LIB_8__::func_16(&(Local_424[0 /*7*/]));
				TASK::TASK_PLAY_ANIM(iLocal_2030[2], "SCRIPT_PROC@EVENT_AREA@UNION_RAILROAD@STAGE_02", "goons_flee_goon_c", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
				func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
				func_706(&(iLocal_2030[1]), 0, Global_35, 0, 0, 0, 0, 1);
				func_706(&(iLocal_2030[2]), 0, Global_35, 0, 0, 0, 0, 1);
			}
			if (!__LIB_1__::func_322("RCMP_IG8"))
			{
				__LIB_8__::func_336(&Local_2297, "RCMP_IG8", iLocal_2030[1], iLocal_2030[2], 0, 0, 1, 1);
			}
			iLocal_526 = 15;
			if (!__LIB_8__::func_343(65536))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2030[0], false, true);
					PED::_0x89F5E7ADECCCB49C(iLocal_2030[0], "injured_right_arm");
					__LIB_0__::func_325(&(uLocal_2034[3]));
					__LIB_8__::func_16(&(Local_424[0 /*7*/]));
					TASK::TASK_PLAY_ANIM(iLocal_2030[2], "SCRIPT_PROC@EVENT_AREA@UNION_RAILROAD@STAGE_02", "goons_flee_goon_c", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
					func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
					func_706(&(iLocal_2030[1]), 0, Global_35, 0, 0, 0, 0, 1);
					func_706(&(iLocal_2030[2]), 0, Global_35, 0, 0, 0, 0, 1);
					__LIB_8__::func_336(&Local_2297, "RCMP_IG8", iLocal_2030[1], iLocal_2030[2], 0, 0, 1, 1);
					__LIB_8__::func_370(65536);
				}
			}
			break;
		case 14:
			break;
		case 15:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2030[1], -753365664))
			{
				__LIB_8__::func_370(131072);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2030[1], 110472604))
			{
				__LIB_8__::func_370(262144);
			}
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_699.f_690[12 /*12*/].f_8))
			{
				vVar7 = { ENTITY::GET_ENTITY_VELOCITY(Local_699.f_690[12 /*12*/].f_8, -1) };
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_699.f_690[12 /*12*/].f_8, Local_424[0 /*7*/]) && vVar7.z == 0f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_699.f_690[12 /*12*/].f_8, true);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]) || (__LIB_8__::func_455(&(Local_424[0 /*7*/]), "goon_B") && !__LIB_8__::func_343(524288)))
			{
				if (!__LIB_8__::func_343(131072))
				{
					if (!MISC::_0x0D0AE5081F88CFE1(Local_699.f_15[0 /*32*/].f_1))
					{
						MISC::_0x49F3241C28EBBFBC(0);
						Var10 = joaat("DOCUMENT_HOMESTEAD_DEED");
						Var10.f_1 = 1f;
						Var10.f_3 = 4;
						Var10.f_4 = 1;
						Var10.f_5 = 1;
						MISC::_0x183672FE838A661B(&Var10);
						MISC::_0x38C0C9CAE1544500(Local_699.f_15[0 /*32*/].f_1);
					}
				}
				else if (!__LIB_8__::func_343(262144))
				{
					__LIB_8__::func_183(&(Local_424[0 /*7*/]), Local_699.f_690[12 /*12*/].f_8, "deed");
					PHYSICS::ACTIVATE_PHYSICS(Local_699.f_690[12 /*12*/].f_8);
				}
				__LIB_8__::func_370(524288);
			}
			if (!__LIB_8__::func_343(524288))
			{
				func_706(&(iLocal_2030[0]), 0, Global_35, 0, 0, 0, 0, 1);
				func_706(&(iLocal_2030[1]), 0, Global_35, 0, 0, 0, 0, 1);
				func_706(&(iLocal_2030[2]), 0, Global_35, 0, 0, 0, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
			{
				if (!__LIB_0__::func_163(iLocal_2030[0], 518218985) && ((__LIB_8__::func_455(&(Local_424[0 /*7*/]), "goon_A") || __LIB_7__::func_972(&(Local_424[0 /*7*/]))) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2030[0], joaat("ENDSINRUN"))))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_2030[0]);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_2030[0], Local_699.f_4, 4, 28928, 1000f, -1, 0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]))
			{
				if (!__LIB_0__::func_163(iLocal_2030[1], 518218985) && ((__LIB_8__::func_455(&(Local_424[0 /*7*/]), "goon_B") || __LIB_7__::func_972(&(Local_424[0 /*7*/]))) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2030[1], joaat("ENDSINRUN"))))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_2030[1], Local_699.f_4, 4, 28928, 1000f, -1, 0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[2]))
			{
				if (!__LIB_0__::func_163(iLocal_2030[2], 518218985) && (__LIB_7__::func_972(&(Local_424[0 /*7*/])) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2030[2], joaat("ENDSINRUN"))))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_2030[2], joaat("MOTIONSTATE_RUN"), false, 1, false);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_2030[2], Local_699.f_4, 4, 28928, 1000f, -1, 0);
				}
			}
			if (__LIB_7__::func_972(&(Local_424[0 /*7*/])))
			{
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]) || !ENTITY::IS_ENTITY_DEAD(iLocal_2030[1])) || !ENTITY::IS_ENTITY_DEAD(iLocal_2030[2]))
				{
					if (__LIB_8__::func_343(65536))
					{
						__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_IG8_DISARM", Global_35, iLocal_2030[0], 0, 0, 1, 1);
					}
					else
					{
						__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_IG8_KILLED", Global_35, iLocal_2030[0], 0, 0, 1, 1);
					}
				}
				iLocal_526 = 16;
			}
			break;
		case 16:
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_699.f_690[12 /*12*/].f_8))
			{
				vVar16 = { ENTITY::GET_ENTITY_VELOCITY(Local_699.f_690[12 /*12*/].f_8, -1) };
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_699.f_690[12 /*12*/].f_8, Local_424[0 /*7*/]) && vVar16.z == 0f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_699.f_690[12 /*12*/].f_8, true);
				}
			}
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (!__LIB_8__::func_548())
				{
					if (__LIB_8__::func_343(131072))
					{
						func_702("TRACKS_OBJ03", func_801());
					}
					else
					{
						func_702("TRACKS_OBJ12", func_801());
					}
					__LIB_0__::func_325(&(uLocal_2034[3]));
					if (__LIB_8__::func_343(131072))
					{
						__LIB_2__::func_73(Local_699.f_690[12 /*12*/].f_8, &(uLocal_2034[3]), 408396114, 580546400, 0, "TRACKS_BLIP_DEED");
					}
					else
					{
						__LIB_4__::func_78(__LIB_8__::func_395(), 20f, &(uLocal_2034[3]), -1282792512);
					}
					if (!func_801())
					{
						__LIB_7__::func_903(uLocal_2034[3], 1);
					}
				}
				TASK::_0x78B4567E18B54480(Local_699.f_690[12 /*12*/].f_8);
				ENTITY::_0xA48E4801DEBDF7E4(Local_699.f_690[12 /*12*/].f_8, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_699.f_690[12 /*12*/].f_8, true);
				iLocal_526 = 17;
			}
			func_807();
			break;
		case 17:
			func_807();
			if (__LIB_8__::func_548())
			{
				__LIB_0__::func_325(&(uLocal_2034[3]));
				if (MISC::_0x0D0AE5081F88CFE1(Local_699.f_15[0 /*32*/].f_1))
				{
					MISC::_0x154340E87D8CC178(Local_699.f_15[0 /*32*/].f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2030[0]))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_2030[0], 0, false);
				}
				iLocal_359[7] = iLocal_359[0];
				Local_699.f_690[12 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_699.f_690[12 /*12*/].f_7, Local_699.f_690[12 /*12*/], true, true, false, false, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_699.f_690[12 /*12*/].f_8, false);
				ENTITY::_0xA48E4801DEBDF7E4(Local_699.f_690[12 /*12*/].f_8, 0);
				__LIB_8__::func_85(Local_1702.f_136, 8388608);
				iLocal_526 = 18;
			}
			break;
		case 18:
			func_807();
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				__LIB_8__::func_380(67108864);
				func_695(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_413(0, 1), __LIB_8__::func_414(0), 1, 1073741824 /* Float: 2f */);
				func_698(&iLocal_522, __LIB_8__::func_443(1, 0), __LIB_8__::func_444(1, 0), 0);
				func_233(iParam0, __LIB_8__::func_413(0, 0), 1, 1, 0, 0, 0, 0, 0);
				__LIB_8__::func_131(&Local_1702, 128);
				func_702("TRACKS_OBJ04", func_801());
				__LIB_0__::func_325(&(uLocal_2034[3]));
				__LIB_2__::func_73(*iParam0, &(uLocal_2034[3]), -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, __LIB_8__::func_421(__LIB_7__::func_908(Local_1702.f_136, 524288)));
				if (!func_801())
				{
					__LIB_7__::func_903(uLocal_2034[3], 1);
				}
				iLocal_526 = 20;
			}
			break;
		case 19:
			if (!__LIB_2__::func_1(iLocal_2030[0], 0, 1))
			{
				func_702("TRACKS_OBJ04", func_801());
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_2034[3]), -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, __LIB_8__::func_421(__LIB_7__::func_908(Local_1702.f_136, 524288)));
				if (!func_801())
				{
					__LIB_7__::func_903(uLocal_2034[3], 1);
				}
				iLocal_526 = 20;
			}
			break;
		case 20:
			if (!__LIB_8__::func_343(67108864))
			{
				func_698(&iLocal_522, __LIB_8__::func_443(1, 0), __LIB_8__::func_444(1, 0), 0);
			}
			func_233(iParam0, __LIB_8__::func_413(0, 0), 1, 1, 0, 0, 0, 0, 0);
			func_807();
			if (!__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
			}
			if (MAP::GET_BLIP_FROM_ENTITY(*iParam0) == 0)
			{
				__LIB_2__::func_73(*iParam0, &(uLocal_2034[3]), -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, __LIB_8__::func_421(__LIB_7__::func_908(Local_1702.f_136, 524288)));
				if (!func_801())
				{
					__LIB_7__::func_903(uLocal_2034[3], 1);
				}
			}
			if (__LIB_2__::func_215(*iParam0, Global_35, 0, 15f, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_0__::func_928(&Local_2297, *iParam0, "EA_Rcamp_Foreman", 0);
				Local_558.f_33 = { Local_2297 };
				__LIB_8__::func_188(&(Local_424[1 /*7*/]), "script@proc@eventareas@unionrailroad@stageTwoTent_Return", "PBL_proposition_reward", 0);
				StringCopy(&(Local_424[1 /*7*/].f_1), "PBL_proposition_reward", 24);
				if (__LIB_8__::func_548())
				{
					iLocal_359[7] = iLocal_359[0];
					func_723(1, 1, 1097859072 /* Float: 15f */);
					func_376(0, 1, 1);
					func_813(0);
					__LIB_8__::func_336(&Local_2297, "RCMP_F01S", *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_294 = 0;
					__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
					iLocal_526 = 21;
				}
			}
			break;
		case 21:
			if (!__LIB_8__::func_343(67108864))
			{
				func_698(&iLocal_522, __LIB_8__::func_443(1, 0), __LIB_8__::func_444(1, 0), 0);
			}
			func_233(iParam0, __LIB_8__::func_413(0, 0), 1, 1, 0, 0, 0, 0, 0);
			func_807();
			if (!__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
			}
			if (__LIB_1__::func_205(Global_35, iLocal_359[0], 1, 0))
			{
				func_706(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
			}
			if ((__LIB_2__::func_227(0, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_381[1 /*3*/]))) && iLocal_294 < 4)
			{
				__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
			}
			if (iLocal_2290 == 0 && iLocal_2289 == 2)
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				__LIB_0__::func_172(iLocal_359[7]);
				func_723(0, 0, 1097859072 /* Float: 15f */);
				func_376(0, 0, 1);
				iLocal_526 = 23;
			}
			if (__LIB_2__::func_215(*iParam0, Global_35, 1, 20f, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				if (__LIB_1__::func_313(&(vLocal_381[1 /*3*/]), 7.5f))
				{
					if (iLocal_294 < 4)
					{
						iLocal_526 = 22;
					}
				}
			}
			break;
		case 22:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_8__::func_343(67108864))
			{
				func_698(&iLocal_522, __LIB_8__::func_443(1, 0), __LIB_8__::func_444(1, 0), 0);
			}
			func_233(iParam0, __LIB_8__::func_413(0, 0), 1, 1, 0, 0, 0, 0, 0);
			func_807();
			func_706(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				if (iLocal_294 < 3)
				{
					cVar19 = "RCMP_F04IMPSA";
				}
				else
				{
					cVar19 = "RCMP_F02S";
				}
				__LIB_8__::func_336(&(Local_1702.f_35), cVar19, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_294++;
				iLocal_526 = 21;
			}
			break;
		case 23:
			if ((iLocal_2290 == 0 && iLocal_2289 == 2) || __LIB_1__::func_205(Global_35, iLocal_359[0], 1, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (__LIB_7__::func_990(&(Local_424[1 /*7*/])))
			{
				if (__LIB_2__::func_466(&(Local_2184[0 /*52*/][2 /*17*/]), 0, 0))
				{
					if (!__LIB_8__::func_372(32768))
					{
						func_376(0, 1, 0);
					}
				}
				else if (__LIB_8__::func_372(32768) && __LIB_8__::func_548())
				{
					func_813(0);
				}
				if ((iLocal_2290 == 0 && iLocal_2289 == 2) || __LIB_1__::func_205(Global_35, iLocal_359[0], 1, 0))
				{
					func_530(1);
					__LIB_8__::func_440(&Local_488);
					Local_488.f_1 = Global_35;
					Local_488.f_8 = { __LIB_8__::func_33(&(Local_424[1 /*7*/]), "plr", &(Local_424[1 /*7*/].f_1)) };
					Local_488.f_17 = 0.2f;
					Local_488.f_18 = 0.25f;
					Local_488.f_19 = __LIB_8__::func_200(&(Local_424[1 /*7*/]), "plr", &(Local_424[1 /*7*/].f_1));
					Local_488.f_25 = Local_424[1 /*7*/];
					StringCopy(&(Local_488.f_30), "plr", 24);
					MemCopy(&(Local_488.f_26), {Local_424[1 /*7*/].f_1}, 4);
					__LIB_1__::func_336(&(Local_488.f_23), 25088);
					if (__LIB_8__::func_548())
					{
						__LIB_1__::func_336(&(Local_488.f_23), 1024);
					}
					__LIB_8__::func_131(&Local_1702, 65536);
					__LIB_8__::func_553(&Local_488, 106);
					__LIB_7__::func_961(&Local_263, 4);
					MAP::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(true);
					iLocal_526 = 24;
				}
			}
			break;
		case 24:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_123(Local_1702.f_138, 1, 1);
			}
			if (__LIB_8__::func_553(&Local_488, 106))
			{
				func_723(0, 0, 1097859072 /* Float: 15f */);
				func_376(0, 0, 1);
				__LIB_8__::func_370(32);
				__LIB_8__::func_147(&(Local_424[1 /*7*/]), *iParam0, "foreman", 1);
				__LIB_8__::func_147(&(Local_424[1 /*7*/]), Global_35, "plr", 1);
				__LIB_8__::func_148(&(Local_424[1 /*7*/]), Local_699.f_690[4 /*12*/].f_8, "CIGARETTE");
				__LIB_8__::func_148(&(Local_424[1 /*7*/]), Local_699.f_690[0 /*12*/].f_8, "CHAIR");
				__LIB_8__::func_148(&(Local_424[1 /*7*/]), Local_699.f_690[11 /*12*/].f_8, "PEN");
				__LIB_8__::func_148(&(Local_424[1 /*7*/]), Local_699.f_690[9 /*12*/].f_8, "MONEY");
				__LIB_8__::func_148(&(Local_424[1 /*7*/]), Local_699.f_690[12 /*12*/].f_8, "deed");
				__LIB_8__::func_148(&(Local_424[1 /*7*/]), ENTITY::_0x4735E2A4BB83D9DA(uLocal_523), "DESK");
				ENTITY::SET_ENTITY_VISIBLE(Local_699.f_690[12 /*12*/].f_8, true);
				ENTITY::SET_ENTITY_COORDS(Local_699.f_690[12 /*12*/].f_8, 2181.2f, 779.1f, 105.5f, true, false, true, true);
				__LIB_8__::func_16(&(Local_424[1 /*7*/]));
				__LIB_0__::func_769();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_1702, 65536);
				if (!__LIB_7__::func_908(Local_1702.f_136, 4))
				{
					if (!__LIB_7__::func_907(Local_1702.f_136, 67108864))
					{
						__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_IG7_P1", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THX_02", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (__LIB_8__::func_343(1048576) && !__LIB_8__::func_548())
				{
					__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THX_03", *iParam0, Global_35, 0, 0, 1, 1);
				}
				iLocal_526 = 25;
			}
			break;
		case 25:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_343(32))
			{
				func_777(1, "plr");
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (__LIB_8__::func_379(1))
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!__LIB_8__::func_379(2))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[9 /*12*/].f_8))
						{
							OBJECT::DELETE_OBJECT(&(Local_699.f_690[9 /*12*/].f_8));
							__LIB_4__::func_127(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
							__LIB_8__::func_85(Local_1702.f_136, 262144);
							__LIB_8__::func_376(2);
						}
					}
				}
				if (!__LIB_8__::func_379(4))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 416017708))
					{
						func_815(joaat("DOCUMENT_HOMESTEAD_DEED"), 1, 0, -1387038764, 0);
						__LIB_8__::func_376(4);
					}
				}
				if (!__LIB_8__::func_343(2097152) && __LIB_2__::func_598(Global_35, Local_424[1 /*7*/], "plr", joaat("BLENDOUT"), 0, 1, 0))
				{
					__LIB_8__::func_93(Local_1702.f_136, 8388608);
					__LIB_8__::func_85(Local_1702.f_136, 8);
					__LIB_8__::func_85(Local_1702.f_136, 16384);
					__LIB_8__::func_82(Local_1702.f_136, 1073741824 /* Float: 2f */);
					__LIB_8__::func_82(Local_1702.f_136, 128);
					__LIB_8__::func_82(Local_1702.f_136, 1024);
					__LIB_8__::func_376(524288);
					func_376(0, 1, 0);
					func_670(0, 1);
					__LIB_0__::func_325(&(uLocal_2043[0]));
					__LIB_0__::func_325(&(uLocal_2034[3]));
					__LIB_0__::func_769();
					__LIB_8__::func_253(&Local_1702);
					__LIB_8__::func_131(&Local_1702, 128);
					__LIB_8__::func_380(32);
					if (__LIB_0__::func_139(Local_1702.f_34))
					{
						__LIB_1__::func_748(&(Local_1702.f_34), 1, 1);
					}
					__LIB_8__::func_183(&(Local_424[1 /*7*/]), Global_35, "plr");
					if (__LIB_0__::func_6(iLocal_292))
					{
						func_816(iLocal_292, 1, 1, 0, 1);
					}
					MAP::DISPLAY_RADAR(true);
					__LIB_8__::func_370(2097152);
				}
			}
			if (__LIB_2__::func_598(*iParam0, Local_424[1 /*7*/], "foreman", joaat("RELEASE"), 0, 1, 0))
			{
				if (__LIB_7__::func_908(Local_1702.f_136, 4) && !__LIB_8__::func_343(1048576))
				{
					if (!__LIB_8__::func_346(16384))
					{
						func_501(iParam0, __LIB_8__::func_413(0, 0), &iLocal_522, 1, 0, 0, 0, 0, 0);
					}
					__LIB_8__::func_380(32);
					__LIB_0__::func_325(&(uLocal_2043[0]));
					__LIB_0__::func_325(&(uLocal_2034[3]));
					if (__LIB_0__::func_139(Local_1702.f_34))
					{
						__LIB_1__::func_748(&(Local_1702.f_34), 1, 1);
					}
				}
				MAP::DISPLAY_RADAR(true);
				func_802(0);
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(1, 0), 262148, joaat("U_M_M_RACFOREMAN_01"), __LIB_8__::func_429(1, 0));
				__LIB_8__::func_397(512);
				func_192(1);
				__LIB_8__::func_401(16384);
				iLocal_526 = 26;
			}
			break;
		case 26:
			if (__LIB_2__::func_763(Local_1702.f_138, 0))
			{
				if (!__LIB_0__::func_75(&(Local_1702.f_133)))
				{
					__LIB_1__::func_148(&(Local_1702.f_133));
				}
				iVar20 = __LIB_0__::func_55((!__LIB_7__::func_908(Local_1702.f_136, 4) || __LIB_8__::func_343(1048576)), 5000, 30000);
				iVar20 = (iVar20 / 1000);
				if (__LIB_1__::func_285(&(Local_1702.f_133), BUILTIN::TO_FLOAT(iVar20)) && !ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
				{
					__LIB_0__::func_37(&(Local_1702.f_133));
					func_785(iParam0);
					iLocal_526 = 27;
				}
			}
			break;
		case 27:
			if (__LIB_2__::func_763(Local_1702.f_138, 0) && !PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				__LIB_8__::func_124(Local_1702.f_138, 1);
			}
			break;
	}
	return 0;
}

int func_390(int iParam0)
{
	func_716(iParam0, 0);
	switch (iLocal_524)
	{
		case 0:
			if (__LIB_8__::func_379(16777216))
			{
				__LIB_3__::func_896(&uLocal_1853);
				Local_558.f_12 = 9f;
				Local_558.f_13 = 7f;
				__LIB_8__::func_376(524288);
				func_670(0, 1);
				func_376(0, 1, 1);
				if (!func_473())
				{
					__LIB_8__::func_370(1);
				}
				iLocal_524 = 1;
			}
			break;
		case 1:
			if (!__LIB_7__::func_907(Local_1702.f_136, 4))
			{
				__LIB_8__::func_85(Local_1702.f_136, 4);
				__LIB_8__::func_131(&Local_1702, 128);
			}
			if (iLocal_527 >= 3)
			{
				if (!__LIB_2__::func_763(Local_1702.f_138, 0))
				{
					__LIB_8__::func_123(Local_1702.f_138, 1, 1);
				}
				__LIB_8__::func_85(Local_1702.f_136, 33554432);
				__LIB_8__::func_253(&Local_1702);
				__LIB_8__::func_82(Local_1702.f_136, 1073741824 /* Float: 2f */);
				if (func_473())
				{
					func_382(0);
					iLocal_524 = 3;
				}
				else
				{
					func_376(0, 1, 0);
					__LIB_8__::func_397(512);
					iLocal_524 = 5;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				__LIB_8__::func_82(Local_1702.f_136, 2048);
				__LIB_3__::func_233(&Local_1702, 0);
				__LIB_8__::func_131(&Local_1702, 128);
				func_702("TRACKS_OBJ11", 1);
				iLocal_524 = 4;
			}
			break;
		case 4:
			if (!__LIB_8__::func_372(16777216) && __LIB_2__::func_118(*iParam0, 1, 1) > 15f)
			{
				__LIB_8__::func_373(16777216);
			}
			if (__LIB_8__::func_372(16777216) && __LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_254(Local_1702.f_138, &Local_1702, 5000, 1);
			}
			if (__LIB_1__::func_205(Global_35, iLocal_359[2], 1, 0))
			{
				__LIB_0__::func_325(&(uLocal_2043[1]));
				__LIB_0__::func_769();
				iLocal_524 = 5;
			}
			break;
		case 5:
			if (!__LIB_8__::func_372(16777216) && __LIB_2__::func_118(*iParam0, 1, 1) > 15f)
			{
				__LIB_8__::func_373(16777216);
			}
			if (__LIB_8__::func_372(16777216) && __LIB_2__::func_763(Local_1702.f_138, 0))
			{
				__LIB_8__::func_254(Local_1702.f_138, &Local_1702, 5000, 1);
			}
			break;
	}
	return 0;
}

void func_432(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_16(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_402(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_836(iVar0);
	__LIB_1__::func_108(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = __LIB_0__::func_825(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!__LIB_0__::func_823(iVar0))
		{
			return;
		}
	}
	__LIB_0__::func_836(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && __LIB_0__::func_2() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

bool func_473()
{
	return (__LIB_7__::func_908(Local_1702.f_136, 128) || __LIB_7__::func_908(Local_1702.f_136, 64));
}

void func_501(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam1, __LIB_8__::func_39(), 2f, 0, false);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
	if (bParam9)
	{
		vVar4 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true) };
		fVar7 = TASK::_GET_SCENARIO_POINT_HEADING(iVar0, true);
	}
	else
	{
		vVar4 = { vVar1 };
		fVar7 = ENTITY::GET_ENTITY_HEADING(*iParam0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*iParam4))
	{
		if (bParam5)
		{
			if (bParam10)
			{
				vVar4 = { 0.009f, 0.058f, 0.5f };
				fVar7 = -177.54f;
			}
			else
			{
				vVar4 = { 0.009f, 0.058f, 0.5f };
				fVar7 = -180f;
			}
			*iParam4 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_416(bParam8, bParam10), vVar4, fVar7, 0, 0, 0);
			TASK::_SET_SCENARIO_POINT_FLAG(*iParam4, 19, true);
		}
		else
		{
			*iParam4 = TASK::CREATE_SCENARIO_POINT(__LIB_8__::func_416(bParam8, bParam10), vVar4, fVar7, 0, 0, 0);
			TASK::_SET_SCENARIO_POINT_FLAG(*iParam4, 19, true);
		}
	}
	TASK::_TASK_USE_SCENARIO_POINT(*iParam0, *iParam4, __LIB_8__::func_445(bParam8, bParam10), -1, false, true, 0, false, -1f, false);
}

bool func_529()
{
	if (__LIB_1__::func_205(Global_35, Global_1392194[Local_1702.f_136 /*10*/].f_6, 1, 0))
	{
		return true;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_359[14]))
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_359[14], 1, 0))
	{
		return true;
	}
	return false;
}

void func_530(bool bParam0)
{
	int iVar0;
	iLocal_358 = 0;
	__LIB_8__::func_371(512);
	if (iLocal_2039 != -1)
	{
		iVar0 = __LIB_2__::func_963(iLocal_2039);
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
		__LIB_8__::func_124(iLocal_2039, 1);
		iLocal_2039 = -1;
	}
	__LIB_7__::func_898(&Local_1702, &(Local_1702.f_28));
	__LIB_0__::func_37(&(vLocal_381[13 /*3*/]));
	__LIB_0__::func_37(&(vLocal_381[7 /*3*/]));
	__LIB_8__::func_401(65536);
	__LIB_8__::func_89(&Local_263, 16);
	if (bParam0)
	{
		iLocal_299 = 0;
	}
	else
	{
		iLocal_299 = 2;
	}
}

bool func_533()
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (!func_529())
	{
		return false;
	}
	fVar0 = __LIB_3__::func_332(Local_699.f_4, 0);
	fVar1 = ENTITY::GET_ENTITY_SPEED(Global_35);
	iVar2 = __LIB_2__::func_431(Global_35, Local_699.f_4, 1060437492 /* Float: 0.707f */);
	if (iVar2 == 1 && fVar1 > 1.25f)
	{
		return false;
	}
	if (iVar2 != 0 && (fVar1 > 3f || fVar0 > 20f))
	{
		return false;
	}
	return true;
}

char* func_534()
{
	switch (iLocal_358)
	{
		case 0:
			return "RCMP_ANGR_A";
		case 1:
			return "RCMP_ANGR_B";
		case 2:
			return "GET_LOST";
		case 3:
			return "FINAL_WARNING";
		default:
			break;
	}
	return "";
}

bool func_574()
{
	if (iLocal_14 == 2)
	{
		iLocal_296 = 0;
		while (iLocal_296 < Global_1935630.f_39)
		{
			if (__LIB_1__::func_248(Global_1935630.f_34[iLocal_296], &iLocal_2030))
			{
				return false;
			}
			iLocal_296++;
		}
	}
	return true;
}

bool func_577()
{
	int iVar0;
	if (iLocal_14 != 1)
	{
		__LIB_8__::func_396(32);
		return false;
	}
	if (__LIB_8__::func_379(32))
	{
		return true;
	}
	iVar0 = func_578();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		__LIB_8__::func_396(32);
		return false;
	}
	if (iVar0 == iLocal_2030[0])
	{
		return true;
	}
	return false;
}

int func_578()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<11> Var3;
	int iVar14;
	int iVar15;
	iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (__LIB_2__::func_366(Global_35))
		{
			iVar1 = __LIB_8__::func_105(Global_35);
		}
		else if (__LIB_1__::func_869(Global_35))
		{
			iVar1 = __LIB_8__::func_106(Global_35);
		}
		else if (__LIB_2__::func_365(Global_35))
		{
			iVar1 = __LIB_3__::func_989(Global_35);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		Var3.f_10 = 7;
		iVar14 = func_911(&iVar2, &Var3);
		if (iVar2 == 2 && ENTITY::DOES_ENTITY_EXIST(iVar14))
		{
			iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar14);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar15 = PED::_GET_LAST_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar15))
		{
			iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar15);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return iVar0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (!PED::IS_PED_HUMAN(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_580()
{
	if (__LIB_0__::func_492(1) <= 0)
	{
		return false;
	}
	if (!__LIB_7__::func_908(Local_1702.f_136, 8))
	{
		return false;
	}
	return true;
}

int func_641(int iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_939(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_4__::func_432(iParam1, uParam3, iParam0);
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

void func_659()
{
	switch (iLocal_14)
	{
		case 1:
			if (__LIB_8__::func_343(8))
			{
				iLocal_359[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2208.046f, 720.5657f, 102.7978f, 0f, 0f, 16.96997f, 6.432906f, 7.54794f, 3.979209f, "CURR - volHammerBlk");
			}
			else
			{
				iLocal_359[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2223.633f, 673.8961f, 96.35098f, 0f, 0f, 21.30347f, 5.918352f, 7.950146f, 3.902181f, "CURR - volHammerBlk");
			}
			break;
		case 2:
			iLocal_359[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2184.146f, 862.6637f, 113.3422f, 0f, 0f, 15.49503f, 5.150692f, 10.34767f, 5.253829f, "CURR - volHammerBlk");
			break;
		case 3:
			iLocal_359[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1922.803f, 924.7153f, 117.2035f, 0f, 0f, 22.99839f, 10.06398f, 5.311772f, 3.946446f, "CURR - volHammerBlk");
			break;
	}
}

bool func_661(int iParam0)
{
	if (__LIB_8__::func_372(-2147483648))
	{
		return false;
	}
	if ((iLocal_14 != 1 || __LIB_8__::func_343(8)) && __LIB_7__::func_924(&Local_1702, 256))
	{
		return false;
	}
	if (iLocal_14 == 2 && !__LIB_8__::func_343(8))
	{
		return false;
	}
	if (!__LIB_2__::func_117(64))
	{
		return false;
	}
	if (iLocal_553[iParam0] == -1)
	{
		iLocal_553[iParam0] = func_954(iParam0);
		return false;
	}
	if (!__LIB_0__::func_75(&(vLocal_381[5 /*3*/])))
	{
		__LIB_1__::func_148(&(vLocal_381[5 /*3*/]));
		fLocal_552 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 30f);
	}
	if (__LIB_1__::func_313(&(vLocal_381[5 /*3*/]), fLocal_552))
	{
		return true;
	}
	return false;
}

int func_662(int iParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	int iVar10;
	vector3 vVar11;
	float fVar14;
	int iVar15;
	int iVar16;
	if (iParam0 >= 4)
	{
		return 0;
	}
	if (!__LIB_8__::func_406(__LIB_8__::func_76(iParam0)))
	{
		return 0;
	}
	if (iLocal_553[iParam0] == -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_29(iLocal_553[iParam0]))
	{
		return 0;
	}
	iVar0 = __LIB_2__::func_963(iLocal_553[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	func_955(&iVar0, iParam0);
	if (func_956(iParam0))
	{
		func_957(iParam0, "PBL_EXIT");
		func_323(6, iParam0);
	}
	if (__LIB_8__::func_355(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/])))
	{
		__LIB_8__::func_360(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]));
	}
	bVar1 = TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1197006729);
	switch (iLocal_536[iParam0])
	{
		case 0:
			if (__LIB_7__::func_990(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/])) && PED::_0x5E420FF293EE5472())
			{
				__LIB_8__::func_123(iLocal_553[iParam0], 0, 1);
				__LIB_8__::func_147(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), iVar0, "worker", 1);
				__LIB_8__::func_148(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), Local_21[__LIB_8__::func_400(0, iParam0) /*12*/].f_8, "HAMMER");
				__LIB_8__::func_148(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), Local_21[__LIB_8__::func_559(uLocal_542[iParam0], iParam0) /*12*/].f_8, "spike");
				StringCopy(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/].f_4), "base", 24);
				__LIB_8__::func_15(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), __LIB_8__::func_456(iParam0, uLocal_542[iParam0], bVar1), __LIB_8__::func_457(iParam0, uLocal_542[iParam0], bVar1));
				vVar2 = { __LIB_8__::func_33(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "worker", "PBL_ENTER") };
				fVar8 = __LIB_8__::func_200(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "worker", "PBL_ENTER");
				iVar10 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(iVar0, false);
				vVar5 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar10, true) };
				fVar9 = TASK::_GET_SCENARIO_POINT_HEADING(iVar10, true);
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_2140);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_8__::func_458(vVar5, fVar9), 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_8__::func_458(vVar2, fVar8), 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 1f, -1, 0.25f, 0, fVar8);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_2140);
				TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_2140);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_2140);
				func_323(1, iParam0);
			}
			break;
		case 1:
			if (!__LIB_0__::func_163(iVar0, 242628503))
			{
				vVar11 = { __LIB_8__::func_33(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "worker", "PBL_ENTER") };
				fVar14 = __LIB_8__::func_200(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "worker", "PBL_ENTER");
				if (__LIB_3__::func_625(iVar0, vVar11, fVar14, 1056964608 /* Float: 0.5f */, 1119092736 /* Float: 90f */, 1))
				{
					__LIB_8__::func_16(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]));
					func_963(iParam0);
					func_964(iParam0);
					func_965(&iVar0, iParam0);
					func_957(iParam0, "PBL_HAMMER_LOOP");
					Local_1702.f_140[0] = iVar0;
					func_966(2, iParam0);
					func_967(iParam0);
				}
				else
				{
					func_968(iParam0);
				}
			}
			break;
		case 2:
			if (__LIB_8__::func_34(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/])) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1824589780))
			{
				if (uLocal_542[iParam0] > 0 && uLocal_542[iParam0] < 4)
				{
					iVar15 = __LIB_8__::func_559(uLocal_542[iParam0], iParam0);
					iVar16 = __LIB_8__::func_559(0, iParam0);
					ENTITY::SET_ENTITY_COORDS(Local_21[iVar15 /*12*/].f_8, ENTITY::GET_ENTITY_COORDS(Local_21[iVar16 /*12*/].f_8, true, false), true, false, true, true);
					ENTITY::SET_ENTITY_ROTATION(Local_21[iVar15 /*12*/].f_8, ENTITY::GET_ENTITY_ROTATION(Local_21[iVar16 /*12*/].f_8, 2), 2, true);
				}
				__LIB_8__::func_15(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), __LIB_8__::func_456(iParam0, uLocal_542[iParam0], bVar1), __LIB_8__::func_457(iParam0, uLocal_542[iParam0], bVar1));
				func_965(&iVar0, iParam0);
				func_969(iParam0, 1, uLocal_547[iParam0] >= 3);
				func_957(iParam0, func_970(iParam0));
				func_967(iParam0);
			}
			break;
		case 3:
			if (__LIB_8__::func_34(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/])) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1824589780))
			{
				func_969(iParam0, 1, uLocal_547[iParam0] >= 3);
				func_957(iParam0, func_970(iParam0));
				func_967(iParam0);
			}
			break;
		case 4:
			if (__LIB_8__::func_34(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/])) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1824589780))
			{
				func_969(iParam0, 1, uLocal_547[iParam0] >= 3);
				if (uLocal_542[iParam0] < 3)
				{
					func_957(iParam0, "PBL_STEP_L");
					func_966(5, iParam0);
					func_967(iParam0);
				}
				else
				{
					func_957(iParam0, "PBL_EXIT");
					func_323(6, iParam0);
				}
			}
			break;
		case 5:
			if (__LIB_8__::func_34(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/])) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1824589780))
			{
				uLocal_542[iParam0]++;
				func_969(iParam0, 1, 1);
				if (uLocal_542[iParam0] < 4)
				{
					func_966(2, iParam0);
					func_957(iParam0, func_970(iParam0));
					func_967(iParam0);
				}
				else
				{
					func_957(iParam0, "PBL_EXIT");
					func_967(iParam0);
				}
			}
			break;
		case 6:
			if (__LIB_8__::func_34(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/])) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1824589780))
			{
				func_969(iParam0, 1, 1);
				func_323(7, iParam0);
				func_966(9, iParam0);
			}
			break;
		case 7:
			if (__LIB_2__::func_598(iVar0, Local_424[__LIB_8__::func_399(iParam0) /*7*/], "worker", 0, 0, 1, 0))
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_375[__LIB_8__::func_347(iParam0)]);
				__LIB_0__::func_172(iLocal_375[__LIB_8__::func_347(iParam0)]);
				DECORATOR::DECOR_SET_BOOL(iVar0, "bOnBreak", true);
				__LIB_8__::func_352(iLocal_553[iParam0], func_148());
				__LIB_2__::func_753(iLocal_553[iParam0], 0, 1, 0, 0);
				__LIB_8__::func_63(1, &Local_699);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_424[__LIB_8__::func_399(iParam0) /*7*/]))
				{
					__LIB_8__::func_183(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), Local_21[__LIB_8__::func_400(0, iParam0) /*12*/].f_8, "HAMMER");
				}
				PHYSICS::ACTIVATE_PHYSICS(Local_21[__LIB_8__::func_400(0, iParam0) /*12*/].f_8);
				iVar0 = 0;
				func_323(9, iParam0);
				func_966(9, iParam0);
				return 1;
			}
			break;
		case 8:
			func_706(&iVar0, 0, 0, 0, 0, 0, 0, 1);
			if (func_972(&iVar0, iParam0))
			{
				func_967(iParam0);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_424[__LIB_8__::func_399(iParam0) /*7*/]))
				{
					__LIB_8__::func_360(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]));
				}
			}
			break;
		case 9:
			return 1;
	}
	func_973(&iVar0, iParam0);
	func_974(&iVar0, iParam0);
	return 0;
}

int func_663()
{
	int iVar0[4];
	int iVar5;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar0[iVar5] = __LIB_2__::func_963(__LIB_8__::func_459(iVar5));
		iVar5++;
	}
	switch (iLocal_541)
	{
		case 0:
			__LIB_7__::func_927(4, &Local_699);
			func_976(1);
			break;
		case 1:
			if (PED::_0x5E420FF293EE5472())
			{
				iVar5 = 0;
				while (iVar5 < 4)
				{
					if (!__LIB_2__::func_763(__LIB_8__::func_459(iVar5), 0))
					{
						__LIB_2__::func_965(__LIB_8__::func_459(iVar5), 0, 0, 0, 1, 1);
					}
					if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar5]))
					{
						return 0;
					}
					iVar5++;
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0[0], false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0[1], false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0[2], false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0[3], false, true);
				__LIB_8__::func_147(&(Local_424[0 /*7*/]), iVar0[0], "worker01", 1);
				__LIB_8__::func_147(&(Local_424[0 /*7*/]), iVar0[1], "worker02", 1);
				__LIB_8__::func_147(&(Local_424[0 /*7*/]), iVar0[2], "worker03", 1);
				__LIB_8__::func_147(&(Local_424[0 /*7*/]), iVar0[3], "worker04", 1);
				__LIB_8__::func_148(&(Local_424[0 /*7*/]), Local_699.f_690[15 /*12*/].f_8, "stick01");
				__LIB_8__::func_148(&(Local_424[0 /*7*/]), Local_699.f_690[16 /*12*/].f_8, "stick02");
				__LIB_8__::func_148(&(Local_424[0 /*7*/]), Local_699.f_690[17 /*12*/].f_8, "stick03");
				__LIB_8__::func_148(&(Local_424[0 /*7*/]), Local_699.f_690[18 /*12*/].f_8, "stick04");
				__LIB_8__::func_148(&(Local_424[0 /*7*/]), Local_699.f_690[19 /*12*/].f_8, "rail");
				__LIB_8__::func_148(&(Local_424[0 /*7*/]), Local_699.f_690[20 /*12*/].f_8, "track");
				StringCopy(&(Local_424[0 /*7*/].f_4), "base", 24);
				__LIB_8__::func_16(&(Local_424[0 /*7*/]));
				func_976(2);
			}
			break;
		case 2:
			if (__LIB_8__::func_540(&iVar0, &uLocal_2396, &uLocal_2401, 3f, 30f, 1, 0, 7.5f))
			{
				__LIB_8__::func_359(&(Local_424[0 /*7*/]));
				func_976(3);
			}
			break;
		case 3:
			if (!__LIB_8__::func_406(32))
			{
				if (__LIB_2__::func_598(iVar0[0], Local_424[0 /*7*/], "worker01", 0, 0, 1, 0))
				{
					__LIB_2__::func_753(__LIB_8__::func_459(0), 0, 1, 0, 0);
					__LIB_8__::func_381(32);
				}
			}
			if (!__LIB_8__::func_406(64))
			{
				if (__LIB_2__::func_598(iVar0[1], Local_424[0 /*7*/], "worker02", 0, 0, 1, 0))
				{
					__LIB_2__::func_753(__LIB_8__::func_459(1), 0, 1, 0, 0);
					__LIB_8__::func_381(64);
				}
			}
			if (!__LIB_8__::func_406(128))
			{
				if (__LIB_2__::func_598(iVar0[2], Local_424[0 /*7*/], "worker03", 0, 0, 1, 0))
				{
					__LIB_2__::func_753(__LIB_8__::func_459(2), 0, 1, 0, 0);
					__LIB_8__::func_381(128);
				}
			}
			if (!__LIB_8__::func_406(256))
			{
				if (__LIB_2__::func_598(iVar0[3], Local_424[0 /*7*/], "worker04", 0, 0, 1, 0))
				{
					__LIB_2__::func_753(__LIB_8__::func_459(3), 0, 1, 0, 0);
					__LIB_8__::func_381(256);
				}
			}
			if (((__LIB_8__::func_406(32) && __LIB_8__::func_406(64)) && __LIB_8__::func_406(128)) && __LIB_8__::func_406(256))
			{
				__LIB_8__::func_63(4, &Local_699);
				func_976(4);
			}
			break;
		case 4:
			__LIB_8__::func_382(16);
			return 1;
	}
	return 0;
}

void func_664(int iParam0, bool bParam1)
{
	func_672(iParam0, 0, bParam1);
	func_672(iParam0, 1, bParam1);
	func_672(iParam0, 2, bParam1);
}

void func_669(int iParam0)
{
	__LIB_8__::func_376(536870912);
	func_978(iParam0, 0, __LIB_2__::func_460(7));
	func_672(iParam0, 0, 0);
	func_978(iParam0, 1, __LIB_2__::func_460(30));
	func_672(iParam0, 1, 1);
	func_979(iParam0, 2, 1);
	__LIB_8__::func_376(-2147483648);
}

void func_670(int iParam0, int iParam1)
{
	func_978(iParam0, 0, __LIB_2__::func_460(7));
	func_672(iParam0, 0, !__LIB_8__::func_379(1073741824 /* Float: 2f */));
	func_978(iParam0, 1, __LIB_2__::func_460(10));
	if (iParam1 == 1)
	{
		func_672(iParam0, 1, 1);
	}
	else
	{
		func_672(iParam0, 1, 0);
	}
	func_979(iParam0, 2, 1);
	__LIB_8__::func_376(-2147483648);
}

void func_672(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_2__::func_411(&(Local_2184[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

bool func_674(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_553[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_675(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
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
				if (__LIB_8__::func_213(uParam0, (*iParam1)[uParam0->f_25], uParam2))
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
						func_706(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!__LIB_0__::func_270() && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23])) && __LIB_2__::func_227(0, 1, uParam0->f_31, 1))
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
								__LIB_2__::func_303(uParam0->f_31, Global_35, uParam0->f_2[uParam0->f_23], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							__LIB_1__::func_148(&(uParam0->f_27));
							return true;
						}
						Jump @1215; //curOff = 1078
						if ((__LIB_0__::func_27(uParam0->f_34, 16) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_31)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_31))
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_31, 1, 0);
							__LIB_0__::func_516(&(uParam0->f_34), 16);
						}
						if (__LIB_1__::func_285(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = __LIB_8__::func_574(uParam0->f_31, 0);
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

void func_677()
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2030[0]))
	{
		iVar0 = func_578();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && DECORATOR::DECOR_EXIST_ON(iVar0, "bLostLogs"))
		{
			iLocal_2030[0] = iVar0;
		}
	}
}

void func_678(char* sParam0, bool bParam1, bool bParam2)
{
	__LIB_0__::func_325(&(uLocal_2034[3]));
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_702(sParam0, bParam1);
		}
	}
	else
	{
		__LIB_0__::func_769();
	}
	iLocal_20 = 0;
}

void func_679(int iParam0)
{
	iLocal_529 = iParam0;
}

bool func_685()
{
	if (__LIB_7__::func_897(2) || __LIB_7__::func_897(1))
	{
		return false;
	}
	if (__LIB_8__::func_88(&Local_263, 16))
	{
		return false;
	}
	if (!__LIB_1__::func_205(Global_35, iLocal_359[13], 1, 0))
	{
		return false;
	}
	if (!__LIB_7__::func_908(Local_1702.f_136, 256))
	{
		return false;
	}
	if (__LIB_7__::func_908(Local_1702.f_136, 64))
	{
		return false;
	}
	return true;
}

void func_686(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (iParam0 > 0 && !__LIB_7__::func_908(Local_1702.f_136, 8))
	{
		switch (__LIB_3__::func_147(iParam0))
		{
			case 0:
				func_985(sParam1, bParam2, bParam3);
				break;
			case 1:
				func_986(sParam1, bParam2, bParam3);
				break;
			default:
				break;
		}
	}
}

bool func_691()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (__LIB_8__::func_372(2097152))
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, Global_1392194[Local_1702.f_136 /*10*/].f_6, 1, 0))
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_359[5], 1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_94(iLocal_2030[0], __LIB_8__::func_423(), 1) < 7.5f)
	{
	}
	return false;
}

void func_695(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_695(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_695(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_698(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_699.f_690[iParam5 /*12*/].f_8, vParam1) };
	TASK::_SET_SCENARIO_POINT_COORDS(*iParam0, vVar0, false);
	TASK::_SET_SCENARIO_POINT_HEADING(*iParam0, fParam4, true);
}

void func_699(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		func_698(&iLocal_521, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), ENTITY::GET_ENTITY_HEADING(*iParam0), iParam1);
	}
	TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_521, __LIB_8__::func_445(1, 0), -1, false, true, 0, false, -1f, false);
}

void func_702(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_302, sParam0, 24);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_302))
		{
			__LIB_1__::func_422(&cLocal_302, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

void func_703()
{
	if (!__LIB_2__::func_1(iLocal_2030[0], 0, 1))
	{
		func_679(17);
	}
	else if (__LIB_2__::func_118(iLocal_2030[0], 1, 1) > 20f || __LIB_8__::func_346(131072))
	{
		__LIB_3__::func_732(0);
		func_678(0, 1, 0);
		__LIB_8__::func_376(4194304);
		__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFFLEE", iLocal_2030[0], Global_35, 0, 0, 1, 0);
		TASK::UPDATE_TASK_HANDS_UP_DURATION(iLocal_2030[0], 1);
		func_679(17);
	}
}

int func_705()
{
	if (!__LIB_8__::func_346(2) && (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2030[0], 377515857) || !PED::_IS_PED_USING_SCENARIO_HASH(iLocal_2030[0], __LIB_8__::func_378())))
	{
		__LIB_2__::func_45(iLocal_2030[0], Global_35, -1);
		__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_CONF2A", iLocal_2030[0], Global_35, 0, 0, 1, 1);
		__LIB_8__::func_397(2);
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_706(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		__LIB_1__::func_581(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	__LIB_1__::func_681(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

bool func_709(float fParam0)
{
	float fVar0;
	fVar0 = 10f;
	if (PED::IS_PED_FACING_PED(iLocal_2030[0], Global_35, 160f))
	{
		fVar0 = 25f;
	}
	if (fParam0 < 0f)
	{
		fParam0 = __LIB_0__::func_665(Global_35, iLocal_2030[0], 1, 1);
	}
	if (PED::_0x7F9B9791D4CB71F6(iLocal_2030[0], Global_35, fParam0 > 10f, 0) != 1)
	{
		return false;
	}
	return fParam0 < fVar0;
}

char* func_710()
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
	iVar3 = __LIB_4__::func_352(ENTITY::GET_ENTITY_COORDS(iLocal_2030[0], true, false), __LIB_8__::func_353(__LIB_8__::func_402()), vVar0, 1060437492 /* Float: 0.707f */);
	if (TASK::_0x02EBBB3989B7E695(iLocal_2030[0]))
	{
		switch (iVar3)
		{
			case 0:
				iVar3 = __LIB_4__::func_352(ENTITY::GET_ENTITY_COORDS(iLocal_2030[0], true, false), __LIB_8__::func_353(__LIB_8__::func_402()), vVar0, 1f);
				switch (iVar3)
				{
					case 3:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_L";
					case 2:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_R";
				}
				break;
			case 2:
				return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_R";
			case 3:
				return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_L";
			case 1:
				iVar3 = __LIB_4__::func_352(ENTITY::GET_ENTITY_COORDS(iLocal_2030[0], true, false), __LIB_8__::func_353(__LIB_8__::func_402()), vVar0, 1f);
				switch (iVar3)
				{
					case 3:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_BL";
					case 2:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_BR";
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				iVar3 = __LIB_4__::func_352(ENTITY::GET_ENTITY_COORDS(iLocal_2030[0], true, false), __LIB_8__::func_353(__LIB_8__::func_402()), vVar0, 1f);
				switch (iVar3)
				{
					case 3:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_L_02";
					case 2:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_R_02";
				}
				break;
			case 2:
				return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_R_02";
			case 3:
				return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_L_02";
			case 1:
				iVar3 = __LIB_4__::func_352(ENTITY::GET_ENTITY_COORDS(iLocal_2030[0], true, false), __LIB_8__::func_353(__LIB_8__::func_402()), vVar0, 1f);
				switch (iVar3)
				{
					case 3:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_BL_02";
					case 2:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_BR_02";
				}
				break;
		}
	}
	return "";
}

void func_713()
{
	if (!__LIB_7__::func_908(Local_1702.f_136, 8))
	{
	}
}

bool func_715()
{
	if (__LIB_8__::func_343(2))
	{
		return true;
	}
	if (__LIB_8__::func_343(8))
	{
		return true;
	}
	switch (iLocal_14)
	{
		case 1:
			if (func_685())
			{
				return true;
			}
			break;
		case 2:
			if (func_801())
			{
				return true;
			}
			if (func_806(__LIB_8__::func_395()))
			{
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_716(int iParam0, bool bParam1)
{
	bParam1 = false;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		iLocal_527 = 8;
	}
	if (iLocal_527 != 8 && !__LIB_2__::func_763(Local_1702.f_138, 0))
	{
		__LIB_8__::func_123(Local_1702.f_138, 1, 1);
	}
	switch (iLocal_527)
	{
		case 0:
			if (Local_558.f_12 == 40f)
			{
				Local_558.f_12 = 22f;
			}
			if (Local_558.f_13 == 20f)
			{
				Local_558.f_13 = 3f;
			}
			if (Local_558 == 0f)
			{
				Local_558 = -2f;
			}
			Local_558.f_8 = 0;
			Local_558.f_9 = 0;
			Local_558.f_131 = 2;
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && __LIB_2__::func_215(*iParam0, Global_35, 0, Local_558.f_12, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_3__::func_896(&uLocal_1853);
				TASK::_0xE7FA07624574B79A(*iParam0, Global_35, 1, 1, 7f, 1, 0, 0, 0);
				func_706(iParam0, BUILTIN::CEIL((7f * 1000f)), 0, 0, 0, 0, 0, 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_2043[0]), -89429847, 580546400, 0, __LIB_8__::func_421(__LIB_7__::func_908(Local_1702.f_136, 524288)));
				__LIB_8__::func_336(&Local_2297, Local_558.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
				iLocal_294 = 0;
				__LIB_8__::func_370(64);
				iLocal_527 = 5;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (bParam1)
			{
				if (__LIB_2__::func_118(*iParam0, 1, 1) < Local_558.f_13)
				{
					iLocal_527 = 1;
				}
			}
			else if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (!func_997(iParam0))
				{
				}
				else if (__LIB_2__::func_118(*iParam0, 1, 1) < Local_558.f_13 || iLocal_14 == 3)
				{
					TASK::_0xE7FA07624574B79A(*iParam0, Global_35, 1, 1, 1000f, 1, 0, 0, 0);
					func_706(iParam0, 0, 0, 0, 0, 0, 0, 1);
					__LIB_8__::func_336(&Local_2297, Local_558.f_3, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_527 = 2;
				}
				else
				{
					func_751(iParam0, 1.5f, iLocal_14 == 1, 1, 1, 1);
					Jump @1039; //curOff = 564
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					if (__LIB_2__::func_227(-12f, 1, 0, 0))
					{
						func_376(0, 1, 0);
						func_723(1, 0, 1097859072 /* Float: 15f */);
						func_998(0);
						__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
						iLocal_527 = 3;
					}
					Jump @1039; //curOff = 637
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					if (__LIB_1__::func_313(&(vLocal_381[1 /*3*/]), 15f) || __LIB_2__::func_118(*iParam0, 1, 1) > 12.5f)
					{
						func_376(0, 1, 0);
						iLocal_527 = 1;
					}
					else if (iLocal_2290 == 0)
					{
						switch (iLocal_2289)
						{
							case 0:
								func_376(0, 1, 0);
								__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
								__LIB_8__::func_336(&Local_2297, Local_558.f_135, Global_35, *iParam0, 0, 0, 1, 1);
								iLocal_527 = 1;
								break;
							case 1:
								func_376(0, 1, 0);
								__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
								__LIB_8__::func_336(&Local_2297, Local_558.f_5, Global_35, *iParam0, 0, 0, 1, 1);
								iLocal_527 = 1;
								break;
						}
					}
					else if (__LIB_2__::func_118(*iParam0, 1, 1) < 3f)
					{
					}
					Jump @1039; //curOff = 850
					func_706(iParam0, 0, 0, 0, 0, 0, 0, 1);
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
					{
						if (__LIB_2__::func_118(*iParam0, 1, 1) < Local_558.f_13 || iLocal_14 == 3)
						{
							__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
							__LIB_8__::func_336(&Local_2297, Local_558.f_135, Global_35, *iParam0, 0, 0, 1, 1);
						}
						iLocal_527 = 1;
					}
					Jump @1039; //curOff = 946
					func_706(iParam0, 0, 0, 0, 0, 0, 0, 1);
					if (__LIB_2__::func_227(-7.5f, 1, 0, 0))
					{
						TASK::_0x541E5B41DCA45828(*iParam0, 1, 0);
						__LIB_0__::func_325(&(uLocal_2043[0]));
						__LIB_8__::func_380(64);
						func_723(0, 0, 1097859072 /* Float: 15f */);
						func_376(0, 1, 0);
						iLocal_527 = 8;
						return true;
					}
					Jump @1039; //curOff = 1029
					return true;
				}
				return false;
			}
			default:
				break;
	}
}

void func_718(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_2047)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2047[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_2047[iVar0], 184, true);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 184, true);
	}
}

void func_719(int iParam0)
{
	int iVar0;
	struct<15> Var1;
	Var1.f_12 = 31;
	Var1.f_13 = 0;
	Var1.f_11 = 100;
	Var1 = Global_35;
	iVar0 = 0;
	while (iVar0 < iLocal_2047)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2047[iVar0]))
		{
			Var1.f_14 = iLocal_2047[iVar0];
			MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
			PED::SET_PED_CONFIG_FLAG(iLocal_2047[iVar0], 413, true);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var1.f_14 = iParam0;
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
		PED::SET_PED_CONFIG_FLAG(iParam0, 413, true);
	}
}

void func_721(int iParam0, int iParam1, int iParam2)
{
	struct<23> Var0;
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	__LIB_1__::func_581(&(Var0.f_5), 1);
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

void func_722(int iParam0)
{
	func_978(iParam0, 0, __LIB_2__::func_460(7));
	func_672(iParam0, 0, 0);
	func_978(iParam0, 1, __LIB_2__::func_460(10));
	func_672(iParam0, 1, 1);
	func_672(iParam0, 2, 0);
	func_979(iParam0, 2, 1);
	__LIB_8__::func_376(-2147483648);
}

void func_723(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		__LIB_8__::func_376(268435456);
		__LIB_8__::func_568(134217728, bParam1);
		func_1000(0, fParam2);
	}
	else
	{
		__LIB_8__::func_396(268435456);
		__LIB_8__::func_396(134217728);
		fLocal_307 = 15f;
		func_1000(0, -1082130432 /* Float: -1f */);
	}
}

void func_725(bool bParam0)
{
	if (bParam0)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_359[10], 1, 0))
		{
			__LIB_1__::func_538(0);
			if (!__LIB_8__::func_343(8388608))
			{
				if (!__LIB_0__::func_71(Global_35))
				{
					__LIB_8__::func_563(8388608, func_1002(Global_35, &iLocal_2042, __LIB_1__::func_977(), iLocal_359[10], 1097859072 /* Float: 15f */, 2, 1, 129, 0, 0, 1071644672 /* Float: 1.75f */));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_2042, 136, true);
					}
				}
			}
		}
		else
		{
			func_192(0);
		}
	}
	else if (__LIB_8__::func_343(8388608))
	{
		func_192(0);
	}
}

void func_726()
{
	if (bLocal_2402)
	{
		return;
	}
	if (__LIB_0__::func_383())
	{
		return;
	}
	if (!__LIB_0__::func_6(iLocal_292))
	{
		iLocal_292 = __LIB_1__::func_293(128, 1, 3, -1188213839);
		if (__LIB_0__::func_6(iLocal_292))
		{
			__LIB_1__::func_298(iLocal_292, 1);
		}
	}
	if (__LIB_0__::func_6(iLocal_292))
	{
		if (!__LIB_8__::func_372(32768))
		{
			if (func_685())
			{
				func_702(&cLocal_302, 1);
				__LIB_7__::func_903(uLocal_2034[3], 0);
				if (MAP::DOES_BLIP_EXIST(uLocal_2034[1]))
				{
					__LIB_7__::func_903(uLocal_2034[1], 0);
				}
				if (!__LIB_1__::func_44(iLocal_292))
				{
					__LIB_1__::func_821(iLocal_292, 1, 1);
				}
				__LIB_8__::func_373(32768);
			}
		}
		else if (!func_685())
		{
			__LIB_7__::func_903(uLocal_2034[3], 1);
			if (MAP::DOES_BLIP_EXIST(uLocal_2034[1]))
			{
				__LIB_7__::func_903(uLocal_2034[1], 1);
			}
			__LIB_0__::func_769();
			if (__LIB_1__::func_44(iLocal_292))
			{
				__LIB_1__::func_559(iLocal_292, 0, 2);
				__LIB_1__::func_298(iLocal_292, 1);
			}
			__LIB_8__::func_371(32768);
		}
	}
}

void func_730()
{
	bool bVar0;
	if (__LIB_8__::func_377(&(iLocal_2030[0])))
	{
		return;
	}
	if (PED::_IS_PED_HOGTIED(iLocal_2030[0]))
	{
		bVar0 = true;
		__LIB_8__::func_82(Local_1702.f_136, 16);
	}
	if (!__LIB_8__::func_343(-2147483648))
	{
		return;
	}
	if (bVar0)
	{
		__LIB_8__::func_82(Local_1702.f_136, 16);
		__LIB_8__::func_380(33554432);
		if (!__LIB_0__::func_75(&(vLocal_381[4 /*3*/])))
		{
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_1__::func_148(&(vLocal_381[4 /*3*/]));
				__LIB_2__::func_112(&(vLocal_381[4 /*3*/]));
				ENTITY::_0x18FF3110CF47115D(iLocal_2030[0], 5, 1);
			}
		}
		else if (__LIB_2__::func_118(iLocal_2030[0], 1, 1) < 11.5f)
		{
			if (__LIB_0__::func_33(&(vLocal_381[4 /*3*/])))
			{
				__LIB_2__::func_112(&(vLocal_381[4 /*3*/]));
			}
		}
		else if (!__LIB_0__::func_33(&(vLocal_381[4 /*3*/])))
		{
			__LIB_2__::func_113(&(vLocal_381[4 /*3*/]));
		}
		if (__LIB_7__::func_908(Local_1702.f_136, 8) && func_578() == iLocal_2030[0])
		{
			__LIB_2__::func_180(&Local_1702, 0);
		}
		else
		{
			__LIB_2__::func_180(&Local_1702, 1);
		}
		if ((__LIB_2__::func_227(0, 1, 0, 0) && __LIB_2__::func_118(iLocal_2030[0], 1, 1) < 15f) && __LIB_1__::func_313(&(vLocal_381[4 /*3*/]), 12f))
		{
			func_706(&(iLocal_2030[0]), 2500, Global_35, 0, 0, 0, 0, 1);
			__LIB_8__::func_336(&(Local_1702.f_35), "RCMP_THIEFHOG", iLocal_2030[0], Global_35, 0, 0, 1, 1);
		}
	}
}

bool func_731(vector3 vParam0, float fParam3)
{
	int iVar0;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_521))
	{
		if (__LIB_0__::func_86(vParam0))
		{
			vParam0 = { 0.009f, 0.058f, 0.5f };
		}
		iVar0 = __LIB_0__::func_55(iLocal_14 == 1, 2, 0);
		iLocal_521 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_699.f_690[iVar0 /*12*/].f_8, __LIB_8__::func_416(1, 0), vParam0, fParam3, 0, 0, 0);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_521, 19, true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_521))
	{
		return true;
	}
	return false;
}

void func_736()
{
	__LIB_8__::func_370(1);
	if (Local_1995.f_23 == 0)
	{
		Local_1995.f_23++;
	}
}

void func_740(int iParam0)
{
	func_978(iParam0, 0, __LIB_2__::func_460(0));
	func_672(iParam0, 0, 1);
	func_978(iParam0, 1, __LIB_2__::func_460(1));
	func_672(iParam0, 1, 1);
	func_979(iParam0, 2, 1);
	__LIB_8__::func_376(-2147483648);
}

void func_749()
{
	int iVar0;
	if (!VOLUME::_0xF6A8A652A6B186CD(uLocal_380))
	{
		uLocal_380 = VOLUME::_0x00BBF7CEAE8C666A(__LIB_8__::func_465(), 32f, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (__LIB_8__::func_351(Global_1393237.f_11[iLocal_296 /*30*/].f_3, __LIB_8__::func_465(), 32f, 20f, 1))
		{
			__LIB_3__::func_532(iLocal_296, 131072, 0);
		}
		iVar0++;
	}
}

void func_751(int iParam0, float fParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (__LIB_2__::func_215(*iParam0, Global_35, 0, Local_558.f_12, 0) && func_1020(*iParam0, &(vLocal_381[1 /*3*/])))
	{
		func_706(iParam0, BUILTIN::CEIL((fParam1 * 1000f)), 0, 0, 0, 0, 0, 1);
		if (bParam2)
		{
			TASK::_0xE7FA07624574B79A(*iParam0, Global_35, iParam3, iParam4, fParam1, 1, 0, 0, 0);
		}
		__LIB_8__::func_336(&Local_2297, Local_558.f_1, *iParam0, Global_35, 0, 0, 1, 1);
		if ((bParam5 && !__LIB_8__::func_343(1)) && __LIB_8__::func_343(4))
		{
			__LIB_2__::func_73(*iParam0, &(uLocal_2043[0]), -89429847, 580546400, 0, __LIB_8__::func_421(__LIB_7__::func_908(Local_1702.f_136, 524288)));
			__LIB_8__::func_370(1);
		}
	}
}

bool func_758(int iParam0, int iParam1)
{
	if (!__LIB_8__::func_343(268435456))
	{
		if (__LIB_2__::func_598(*iParam0, Local_424[3 /*7*/], "RailroadForeman", joaat("RELEASE"), 0, 1, 0))
		{
			if (!__LIB_0__::func_163(*iParam0, 993674639))
			{
				func_233(iParam0, __LIB_8__::func_392(), 0, 0, 1, iParam1, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[4 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_699.f_690[4 /*12*/].f_8));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[5 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_699.f_690[5 /*12*/].f_8));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[6 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_699.f_690[6 /*12*/].f_8));
				}
				__LIB_8__::func_370(268435456);
				return true;
			}
		}
	}
	return false;
}

bool func_763()
{
	if (!__LIB_8__::func_372(32768))
	{
		return false;
	}
	if (__LIB_8__::func_377(&(iLocal_2030[0])))
	{
		return false;
	}
	if (!__LIB_2__::func_227(-3.5f, 1, 0, 0))
	{
		return false;
	}
	if (__LIB_1__::func_322("RCMP_INTP") || __LIB_1__::func_322("RCMP_INTN"))
	{
		return false;
	}
	if (Local_263 == iLocal_2030[0])
	{
		return false;
	}
	if (__LIB_8__::func_346(8192))
	{
		return true;
	}
	if (!ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2030[0], joaat("LOOPING")))
	{
		return false;
	}
	if (!(iLocal_294 >= 3 || __LIB_8__::func_34(&(Local_424[0 /*7*/]))))
	{
		return false;
	}
	if (!(__LIB_1__::func_313(&(vLocal_381[0 /*3*/]), 3.5f) || __LIB_0__::func_665(iLocal_2030[0], Global_35, 1, 1) < 10f))
	{
		return false;
	}
	return true;
}

bool func_769()
{
	vector3 vVar0;
	if (__LIB_8__::func_88(&Local_263, 16))
	{
		return false;
	}
	if (__LIB_0__::func_195(2206.056f, 638.5417f, 95.63711f, 2203.771f, 642.9936f, 96.20085f, Global_36))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
	if (__LIB_3__::func_332(__LIB_8__::func_466(0), 1) < 3f)
	{
		return true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, __LIB_8__::func_466(0), true) < 3f)
	{
		return true;
	}
	return false;
}

bool func_771()
{
	if (__LIB_8__::func_346(524288))
	{
		return true;
	}
	if (!__LIB_8__::func_377(&(iLocal_2030[0])))
	{
		return true;
	}
	return false;
}

int func_777(int iParam0, char* sParam1)
{
	if (iLocal_530 < 4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	}
	switch (iLocal_530)
	{
		case 0:
			if (__LIB_0__::func_139(Local_1702.f_34))
			{
				if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_A")))
				{
					__LIB_1__::func_382(Local_1702.f_34, 0, 1);
				}
				else
				{
					__LIB_1__::func_382(Local_1702.f_34, 1, 1);
				}
			}
			if (!__LIB_2__::func_598(Global_35, Local_424[iParam0 /*7*/], sParam1, 0, 0, 1, 0))
			{
				if (__LIB_2__::func_694(&(Local_1702.f_34), "CUTSCENE_SKIP", __LIB_1__::func_977(), Global_35, joaat("INPUT_CONTEXT_A"), 1097859072 /* Float: 15f */, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, joaat("LONG_TIMED_EVENT"), 1))
				{
					__LIB_8__::func_376(1);
					PED::SET_PED_RESET_FLAG(Global_35, 175, true);
					iLocal_530 = 1;
				}
			}
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(Global_35, 175, true);
			CAM::DO_SCREEN_FADE_OUT(2000);
			__LIB_8__::func_397(16384);
			__LIB_0__::func_489(0, 0);
			iLocal_530 = 2;
			break;
		case 2:
			PED::SET_PED_RESET_FLAG(Global_35, 175, true);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_8__::func_467(&(Local_424[iParam0 /*7*/]), 1);
				__LIB_3__::func_732(0);
				switch (iLocal_14)
				{
					case 1:
						func_1040(iParam0);
						break;
					case 2:
						switch (iParam0)
						{
							case 2:
								func_1041(iParam0);
								break;
							case 1:
								func_1042(iParam0);
								break;
						}
						break;
				}
				__LIB_7__::func_952(&(Local_424[iParam0 /*7*/]));
				__LIB_1__::func_148(&(vLocal_381[1 /*3*/]));
				iLocal_530 = 3;
			}
			break;
		case 3:
			PED::SET_PED_RESET_FLAG(Global_35, 175, true);
			__LIB_0__::func_489(0, 0);
			if (__LIB_1__::func_313(&(vLocal_381[1 /*3*/]), 2.5f))
			{
				__LIB_0__::func_489(0, 0);
				CAM::DO_SCREEN_FADE_IN(2000);
				iLocal_530 = 4;
			}
			break;
		case 4:
			__LIB_0__::func_489(0, 0);
			if (CAM::IS_SCREEN_FADED_IN())
			{
				__LIB_8__::func_396(1);
				__LIB_0__::func_489(0, 0);
				iLocal_530 = 0;
				return 1;
			}
			else
			{
				PED::SET_PED_RESET_FLAG(Global_35, 175, true);
			}
			break;
	}
	return 0;
}

void func_780()
{
	int iVar0;
	if (!__LIB_8__::func_379(4))
	{
		iVar0 = __LIB_0__::func_492(1);
		if (iVar0 < Global_40.f_9096[Local_1702.f_136 /*12*/].f_6)
		{
			Global_40.f_9096[Local_1702.f_136 /*12*/].f_6 = iVar0;
		}
		__LIB_2__::func_522(Global_40.f_9096[Local_1702.f_136 /*12*/].f_6, 0, 0, 1, 1);
		__LIB_8__::func_85(Local_1702.f_136, 32);
		__LIB_8__::func_376(4);
	}
}

void func_783()
{
	if (!__LIB_8__::func_346(2097152))
	{
		if (__LIB_8__::func_379(2))
		{
			Global_40.f_9096[Local_1702.f_136 /*12*/].f_6 = 0;
			if (__LIB_8__::func_346(16384))
			{
				__LIB_0__::func_489(0, 0);
			}
			__LIB_8__::func_131(&Local_1702, 128);
			__LIB_8__::func_253(&Local_1702);
			__LIB_8__::func_82(Local_1702.f_136, 1073741824 /* Float: 2f */);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]) && __LIB_8__::func_343(32768))
			{
				__LIB_8__::func_183(&(Local_424[1 /*7*/]), iLocal_2030[0], "vic");
				TASK::TASK_CARRIABLE(iLocal_2030[0], joaat("HOGTIED_PED"), 0, 0, 0);
			}
			if (__LIB_7__::func_908(Local_1702.f_136, 8))
			{
				__LIB_0__::func_769();
			}
			if (__LIB_0__::func_6(iLocal_292))
			{
				func_816(iLocal_292, 1, 1, 0, 1);
			}
		}
		MAP::DISPLAY_RADAR(true);
		__LIB_0__::func_325(&(uLocal_2043[0]));
		__LIB_8__::func_380(32);
		__LIB_1__::func_748(&(Local_1702.f_34), 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2030[0], false);
			PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 178, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2030[0], 288, false);
		}
		__LIB_8__::func_397(2097152);
	}
}

void func_784(int iParam0)
{
	if (!__LIB_8__::func_346(4194304))
	{
		if (__LIB_8__::func_379(2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[9 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_699.f_690[9 /*12*/].f_8));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[10 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_699.f_690[10 /*12*/].f_8));
			}
		}
		func_802(0);
		if (__LIB_8__::func_346(16384))
		{
			__LIB_0__::func_489(0, 0);
		}
		if (!__LIB_8__::func_343(32768))
		{
			if (!__LIB_8__::func_346(16384))
			{
				func_698(&iLocal_521, __LIB_8__::func_432(&(Local_424[1 /*7*/]), "foreman", 0), __LIB_8__::func_433(&(Local_424[1 /*7*/]), "foreman", 0), 2);
			}
			func_699(iParam0, -1);
		}
		__LIB_8__::func_380(32);
		if (__LIB_0__::func_139(Local_1702.f_34))
		{
			__LIB_1__::func_748(&(Local_1702.f_34), 1, 1);
		}
		STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_416(1, 0), 262148, joaat("U_M_M_RACFOREMAN_01"), __LIB_8__::func_429(1, 0));
		func_1048();
		if (func_580())
		{
			__LIB_8__::func_83(Local_1702.f_136, 8);
			__LIB_8__::func_397(512);
		}
		func_192(1);
		__LIB_8__::func_401(16384);
		__LIB_8__::func_397(4194304);
	}
}

void func_785(int iParam0)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
	func_695(*iParam0, __LIB_8__::func_468(), 0f, 2, 1073741824 /* Float: 2f */);
}

void func_787()
{
	if (bLocal_2402)
	{
		return;
	}
	if (__LIB_0__::func_383())
	{
		return;
	}
	if (!__LIB_0__::func_6(iLocal_292))
	{
		iLocal_292 = __LIB_1__::func_293(128, 2, 3, -621415388);
		if (__LIB_0__::func_6(iLocal_292))
		{
			__LIB_1__::func_298(iLocal_292, 1);
		}
	}
	if (__LIB_0__::func_6(iLocal_292))
	{
		if (!__LIB_8__::func_372(32768))
		{
			if (func_801())
			{
				func_702(&cLocal_302, 1);
				__LIB_7__::func_903(uLocal_2034[3], 0);
				if (!__LIB_1__::func_44(iLocal_292))
				{
					if (!__LIB_0__::func_702(iLocal_292))
					{
						__LIB_1__::func_298(iLocal_292, 1);
					}
					__LIB_1__::func_821(iLocal_292, 1, 1);
				}
				__LIB_8__::func_373(32768);
			}
		}
		else if (!func_801())
		{
			__LIB_7__::func_903(uLocal_2034[3], 1);
			__LIB_0__::func_769();
			if (__LIB_1__::func_44(iLocal_292))
			{
				__LIB_1__::func_559(iLocal_292, 0, 2);
				__LIB_1__::func_298(iLocal_292, 1);
			}
			__LIB_8__::func_371(32768);
		}
	}
}

void func_791()
{
	iLocal_522 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_699.f_690[0 /*12*/].f_8, __LIB_8__::func_416(0, 0), 0.009f, 0.058f, 0.5f, -180f, 0, 0, 0);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_522, 19, true);
}

bool func_795()
{
	vector3 vVar0;
	if (__LIB_8__::func_88(&Local_263, 16))
	{
		return false;
	}
	if (__LIB_0__::func_195(2185.302f, 776.7045f, 106.0465f, 2182.479f, 781.5592f, 106.1757f, Global_36))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
	if (__LIB_3__::func_332(__LIB_8__::func_447(0), 1) < 3f)
	{
		return true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, __LIB_8__::func_447(0), true) < 3f)
	{
		return true;
	}
	return false;
}

bool func_801()
{
	if (__LIB_7__::func_897(2) || __LIB_7__::func_897(1))
	{
		return false;
	}
	if (__LIB_8__::func_88(&Local_263, 16))
	{
		return false;
	}
	if (!__LIB_1__::func_205(Global_35, Global_1392194[Local_1702.f_136 /*10*/].f_5, 1, 0))
	{
		return false;
	}
	if (!__LIB_7__::func_908(Local_1702.f_136, 4))
	{
		return false;
	}
	if (__LIB_7__::func_907(Local_1702.f_136, 262144))
	{
		return false;
	}
	return true;
}

void func_802(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_2403, iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_2403, iParam0);
		POPULATION::_0xA1CFB35069D23C23(iLocal_359[iParam0]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_359[iParam0]);
	}
}

bool func_804()
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_2030[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_2030[1]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_2030[2]))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
	if (__LIB_0__::func_94(iLocal_2030[0], vVar0, 1) > 15f)
	{
		return false;
	}
	return true;
}

bool func_806(vector3 vParam0)
{
	return ((__LIB_8__::func_514(iLocal_2030[0], vParam0, 75f) && __LIB_8__::func_514(iLocal_2030[1], vParam0, 75f)) && __LIB_8__::func_514(iLocal_2030[2], vParam0, 75f));
}

void func_807()
{
	if ((!__LIB_8__::func_343(128) && !__LIB_8__::func_346(1048576)) && __LIB_3__::func_505(&iLocal_2030, 0))
	{
		__LIB_8__::func_370(128);
	}
}

void func_813(int iParam0)
{
	func_978(iParam0, 0, __LIB_2__::func_460(7));
	func_672(iParam0, 0, 0);
	func_978(iParam0, 1, __LIB_2__::func_460(10));
	func_672(iParam0, 1, 0);
	func_672(iParam0, 2, 1);
	func_978(iParam0, 2, "TRACKS_CTXT2");
	func_979(iParam0, 2, 0);
	__LIB_8__::func_376(-2147483648);
}

int func_815(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_815(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_6__::func_701(iParam0, iParam1);
	return 1;
}

void func_816(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		func_1068(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_8__::func_367(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), func_1069());
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
					__LIB_4__::func_467(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_1082(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_1082(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_1082(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_1082(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_1082(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_1082(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_1082(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_1082(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_1082(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_1082(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_1082(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_1082(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_1082(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1084();
						func_1085(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_1082(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_816(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_816(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_816(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_1082(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1082(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_5__::func_337(89200);
						__LIB_5__::func_337(2300);
						__LIB_5__::func_337(2300);
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
						__LIB_5__::func_337(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_5__::func_337(-6000);
						}
						break;
					case 70:
						__LIB_5__::func_337(23400);
						__LIB_5__::func_337(1900);
						__LIB_5__::func_337(-15000);
						break;
					case 71:
						__LIB_5__::func_337(-5500);
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
							__LIB_5__::func_337(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_5__::func_337(46500);
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
		func_1119();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_5__::func_387(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_5__::func_387(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_5__::func_387(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_5__::func_387(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_5__::func_387(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_5__::func_387(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_5__::func_387(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_5__::func_387(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_5__::func_387(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_5__::func_387(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_1082(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_5__::func_387(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_5__::func_387(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_5__::func_387(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_5__::func_387(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_5__::func_387(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
						__LIB_5__::func_387(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_5__::func_387(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_5__::func_387(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_5__::func_387(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_5__::func_387(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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

void func_836(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_0__::func_783(iParam0, 32);
	func_1134();
}

int func_911(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				__LIB_1__::func_778(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				func_1171(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				func_1178(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { __LIB_1__::func_622(uParam1->f_10) };
			Var10 = { __LIB_1__::func_623() };
			__LIB_1__::func_163(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_939(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_8__::func_340(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_939(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					if (__LIB_8__::func_578(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_3__::func_272(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_8__::func_578(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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

int func_954(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 838;
	while (iVar0 <= 857)
	{
		if (!__LIB_0__::func_29(iVar0))
		{
		}
		else if (__LIB_8__::func_561(iVar0))
		{
		}
		else if (func_674(iVar0))
		{
		}
		else if (!__LIB_2__::func_767(iVar0, 0))
		{
		}
		else
		{
			iVar1 = __LIB_2__::func_963(iVar0);
			if (ENTITY::IS_ENTITY_DEAD(iVar1))
			{
			}
			else if (!PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("EA_WORLD_HUMAN_SLEDGEHAMMER_NEW")))
			{
			}
			else if (!__LIB_8__::func_379(262144))
			{
				if (__LIB_1__::func_205(iVar1, iLocal_359[9], 1, 0))
				{
				}
				else
				{
					__LIB_7__::func_927(1, &Local_699);
					iLocal_262 = 0;
					return iVar0;
				}
				iVar0++;
				if (!__LIB_8__::func_379(262144))
				{
					iLocal_262++;
					if (iLocal_262 >= 300)
					{
						__LIB_8__::func_376(262144);
					}
				}
				return -1;
			}
		}
	}
}

void func_955(int iParam0, int iParam1)
{
	if ((iLocal_536[iParam1] > 1 && iLocal_536[iParam1] < 7) || iLocal_536[iParam1] == 8)
	{
		if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
		{
			func_968(iParam1);
		}
	}
}

bool func_956(int iParam0)
{
	if (iParam0 >= 4)
	{
		return false;
	}
	if (iLocal_536[iParam0] >= 6)
	{
		return false;
	}
	if (__LIB_8__::func_372(-2147483648))
	{
		return true;
	}
	if (__LIB_7__::func_924(&Local_1702, 256))
	{
		return true;
	}
	return false;
}

void func_957(int iParam0, char[4] cParam1)
{
	if (iParam0 >= 4)
	{
		return;
	}
	__LIB_8__::func_562(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), cParam1);
}

void func_963(int iParam0)
{
	if (iParam0 >= 4)
	{
		return;
	}
	__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "PBL_REACT_F");
	__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "PBL_REACT_B");
	__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "PBL_REACT_L");
	__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "PBL_REACT_R");
	__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "PBL_BASE");
	__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "PBL_BASE_02");
}

void func_964(int iParam0)
{
	if (iParam0 >= 4)
	{
		return;
	}
	__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "PBL_BRKOUT_A");
	__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "PBL_BRKOUT_B");
	__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), "PBL_BRKOUT_C");
}

void func_965(int iParam0, int iParam1)
{
	vector3 vVar0[24];
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_375[__LIB_8__::func_347(iParam1)]))
	{
		StringCopy(&cVar0, "EA CURR - volHammer", 24);
		StringIntConCat(&cVar0, iParam1, 24);
		iLocal_375[__LIB_8__::func_347(iParam1)] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), __LIB_1__::func_977(), 3.5f, 3.5f, 3f, &cVar0);
		POPULATION::_0xB56D41A694E42E86(iLocal_375[__LIB_8__::func_347(iParam1)], 524288, 0, 0, -1, -1, 2);
	}
	else
	{
		VOLUME::_SET_VOLUME_COORDS(iLocal_375[__LIB_8__::func_347(iParam1)], ENTITY::GET_ENTITY_COORDS(*iParam0, true, false));
	}
}

void func_966(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return;
	}
	iLocal_531[iParam1] = iParam0;
}

void func_967(int iParam0)
{
	if (iParam0 >= 4)
	{
		return;
	}
	iLocal_536[iParam0] = iLocal_531[iParam0];
	if (iLocal_536[iParam0] < 9)
	{
		iLocal_531[iParam0] = iLocal_536[iParam0] + 1;
	}
}

void func_968(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_424[__LIB_8__::func_399(iParam0) /*7*/]))
	{
		__LIB_8__::func_183(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), Local_21[__LIB_8__::func_400(0, iParam0) /*12*/].f_8, "HAMMER");
	}
	PHYSICS::ACTIVATE_PHYSICS(Local_21[__LIB_8__::func_400(0, iParam0) /*12*/].f_8);
	__LIB_7__::func_952(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]));
	func_323(7, iParam0);
}

void func_969(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 >= 4)
	{
		return;
	}
	__LIB_8__::func_575(&(Local_424[__LIB_8__::func_399(iParam0) /*7*/]), bParam1, bParam2);
}

char* func_970(int iParam0)
{
	switch (iLocal_531[iParam0])
	{
		case 2:
		case default:
			return "PBL_HAMMER_LOOP";
		case 3:
			return "PBL_HAMMER_LOOP_02";
		case 4:
			return "PBL_HAMMER_LOOP_03";
			default:
				break;
	}
}

bool func_972(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_424[__LIB_8__::func_399(iParam1) /*7*/]))
	{
		return false;
	}
	if (!__LIB_8__::func_34(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/])))
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_375[__LIB_8__::func_347(iParam1)], 1, 0))
	{
		return false;
	}
	if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	if (!ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1824589780))
	{
		return false;
	}
	return true;
}

void func_973(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 >= 4)
	{
		return;
	}
	if (func_1214(iParam0, iParam1))
	{
		iVar0 = __LIB_3__::func_112(*iParam0, Global_35, 1060437492 /* Float: 0.707f */);
		if (iVar0 == 1)
		{
			iVar0 = __LIB_3__::func_112(*iParam0, Global_35, 1f);
		}
		if (__LIB_8__::func_348(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), __LIB_8__::func_481(iVar0)))
		{
			func_966(iLocal_536[iParam1], iParam1);
			__LIB_8__::func_418(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), __LIB_8__::func_481(iVar0), 1);
			func_323(8, iParam1);
		}
		else
		{
			__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), __LIB_8__::func_481(iVar0));
		}
	}
}

void func_974(int iParam0, int iParam1)
{
	char[] cVar0[8];
	if (iParam1 >= 4)
	{
		return;
	}
	if (func_1216(iParam0, iParam1))
	{
		cVar0 = __LIB_8__::func_482();
		if (__LIB_8__::func_348(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), cVar0))
		{
			func_966(iLocal_536[iParam1], iParam1);
			__LIB_8__::func_418(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), cVar0, 1);
			func_323(8, iParam1);
		}
		else
		{
			__LIB_8__::func_419(&(Local_424[__LIB_8__::func_399(iParam1) /*7*/]), cVar0);
		}
	}
}

void func_976(int iParam0)
{
	iLocal_541 = iParam0;
}

void func_978(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_1__::func_484(Local_2184[iParam0 /*52*/][iParam1 /*17*/].f_6, sParam2, 0);
	Local_2184[iParam0 /*52*/][iParam1 /*17*/].f_5 = sParam2;
}

void func_979(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_3__::func_158(&(Local_2184[iParam0 /*52*/][iParam1 /*17*/]), bParam2);
}

void func_985(char* sParam0, bool bParam1, bool bParam2)
{
	__LIB_0__::func_325(&(uLocal_2034[3]));
	__LIB_2__::func_73(iLocal_2030[0], &(uLocal_2034[3]), -1749618580, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, __LIB_8__::func_483());
	if (!func_685())
	{
		__LIB_7__::func_903(uLocal_2034[3], 1);
	}
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_702(sParam0, bParam1);
		}
	}
	else
	{
		__LIB_0__::func_769();
	}
	iLocal_20 = 0;
	iLocal_20 |= 1;
}

void func_986(char* sParam0, bool bParam1, bool bParam2)
{
	__LIB_0__::func_325(&(uLocal_2034[3]));
	__LIB_8__::func_152(&(uLocal_2034[3]), iLocal_359[4], 203020899);
	if (!func_685())
	{
		__LIB_7__::func_903(uLocal_2034[3], 1);
	}
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_702(sParam0, bParam1);
		}
	}
	else
	{
		__LIB_0__::func_769();
	}
	iLocal_20 = 0;
	iLocal_20 |= 2;
}

bool func_997(int iParam0)
{
	float fVar0;
	int iVar1;
	float fVar2;
	fVar0 = __LIB_2__::func_118(*iParam0, 0, 1);
	if (fVar0 > 22f)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			__LIB_8__::func_132(&Local_1702, 65536);
			MAP::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
		}
		return false;
	}
	if (__LIB_0__::func_71(Global_35))
	{
		iVar1 = __LIB_3__::func_112(Global_35, *iParam0, 0.93f);
		if (iVar1 != 0)
		{
			fVar2 = ENTITY::GET_ENTITY_SPEED(Global_35);
			iVar1 = __LIB_3__::func_112(Global_35, *iParam0, 1060437492 /* Float: 0.707f */);
			if (fVar2 > 6.5f || iVar1 == 1)
			{
				return false;
			}
		}
	}
	return true;
}

void func_998(int iParam0)
{
	func_978(iParam0, 0, __LIB_2__::func_460(7));
	func_672(iParam0, 0, !MISC::IS_STRING_NULL_OR_EMPTY(Local_558.f_135));
	func_978(iParam0, 1, __LIB_2__::func_460(10));
	func_672(iParam0, 1, !MISC::IS_STRING_NULL_OR_EMPTY(Local_558.f_5));
	func_979(iParam0, 2, 1);
	__LIB_8__::func_376(-2147483648);
}

void func_1000(int iParam0, float fParam1)
{
	if (fParam1 < 0f)
	{
		__LIB_4__::func_168(&(Local_2184[iParam0 /*52*/][0 /*17*/]), 0);
		__LIB_4__::func_168(&(Local_2184[iParam0 /*52*/][1 /*17*/]), 0);
		__LIB_4__::func_168(&(Local_2184[iParam0 /*52*/][2 /*17*/]), 0);
	}
	else
	{
		__LIB_3__::func_362(&(Local_2184[iParam0 /*52*/][0 /*17*/]), fParam1);
		__LIB_3__::func_362(&(Local_2184[iParam0 /*52*/][1 /*17*/]), fParam1);
		__LIB_3__::func_362(&(Local_2184[iParam0 /*52*/][2 /*17*/]), fParam1);
	}
}

bool func_1002(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
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
				*iParam1 = func_911(&uVar1, &Var2);
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

bool func_1020(int iParam0, var uParam1)
{
	int iVar0;
	if (__LIB_8__::func_343(8))
	{
		return false;
	}
	if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_0__::func_75(uParam1))
	{
		__LIB_1__::func_148(uParam1);
	}
	if ((__LIB_2__::func_227(-3.5f, 1, 0, 0) && __LIB_1__::func_472(iParam0, Local_558.f_13, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) && __LIB_1__::func_313(uParam1, 11f))
	{
		if (iLocal_294 >= 3)
		{
			return false;
		}
		iVar0 = 0;
		iLocal_2395 = 1;
		iLocal_2395 = iLocal_2395;
		if (__LIB_8__::func_379(1048576))
		{
			iLocal_294 = 3;
			__LIB_1__::func_148(uParam1);
			return true;
		}
		else
		{
			switch (iLocal_14)
			{
				case 1:
					if (__LIB_7__::func_907(Local_1702.f_136, 64))
					{
						if (iLocal_294 == 0)
						{
							Local_558.f_1 = "RCMP_INT_LO_C";
							iVar0 = 1;
						}
						else if (iLocal_294 == 1)
						{
							Local_558.f_1 = "RCMP_INT_LO_B";
							iVar0 = 1;
						}
						else if (iLocal_294 == 2)
						{
							Local_558.f_1 = "RCMP_INT_LO_A";
							iVar0 = 1;
						}
					}
					else if (iLocal_294 == 0)
					{
						Local_558.f_1 = "RCMP_F01A";
						iVar0 = 1;
					}
					else if (iLocal_294 == 1)
					{
						Local_558.f_1 = "RCMP_F01AB";
						iVar0 = 1;
					}
					else if (iLocal_294 == 2)
					{
						Local_558.f_1 = "RCMP_F01AC";
						iVar0 = 1;
					}
					break;
				case 2:
					if (iLocal_294 == 1)
					{
						Local_558.f_1 = "RCMP_F01CSB";
						iVar0 = 1;
					}
					else if (iLocal_294 == 2)
					{
						Local_558.f_1 = "RCMP_F01CSC";
						iVar0 = 1;
					}
					break;
				case 3:
					iLocal_294 = 3;
					__LIB_1__::func_148(uParam1);
					return true;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_294++;
			__LIB_1__::func_148(uParam1);
			return true;
		}
	}
	return false;
}

void func_1040(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	vVar0 = { __LIB_8__::func_432(&(Local_424[iParam0 /*7*/]), "plr", 0) };
	vVar3 = { __LIB_8__::func_432(&(Local_424[iParam0 /*7*/]), "foreman", 0) };
	vVar6 = { __LIB_8__::func_432(&(Local_424[iParam0 /*7*/]), "Chair", 0) };
	fVar9 = __LIB_8__::func_433(&(Local_424[iParam0 /*7*/]), "plr", 0);
	fVar10 = __LIB_8__::func_433(&(Local_424[iParam0 /*7*/]), "foreman", 0);
	fVar11 = __LIB_8__::func_433(&(Local_424[iParam0 /*7*/]), "Chair", 0);
	if (func_580())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[11 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_699.f_690[11 /*12*/].f_8));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[9 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_699.f_690[9 /*12*/].f_8));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[10 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_699.f_690[10 /*12*/].f_8));
		}
	}
	if (__LIB_8__::func_343(32768))
	{
		__LIB_2__::func_919(iLocal_2030[0], 1, 1);
	}
	if (func_580())
	{
		func_780();
		if (!__LIB_8__::func_379(2))
		{
			if (func_771())
			{
				iVar12 = (Global_40.f_9096[Local_1702.f_136 /*12*/].f_6 / 2);
				__LIB_2__::func_590(iVar12, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			else
			{
				iVar12 = (Global_40.f_9096[Local_1702.f_136 /*12*/].f_6 / 4);
				__LIB_2__::func_590(iVar12, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			__LIB_2__::func_190(__LIB_2__::func_963(Local_1702.f_138), (Global_40.f_9096[Local_1702.f_136 /*12*/].f_6 - iVar12));
			__LIB_8__::func_376(2);
		}
	}
	__LIB_0__::func_325(&(uLocal_2043[0]));
	if (__LIB_7__::func_908(Local_1702.f_136, 8))
	{
		__LIB_0__::func_325(&(uLocal_2034[3]));
		__LIB_0__::func_769();
	}
	func_695(Global_35, vVar0, fVar9, 1, 1073741824 /* Float: 2f */);
	iVar13 = __LIB_2__::func_963(Local_1702.f_138);
	func_695(iVar13, vVar3, fVar10, 1, 1073741824 /* Float: 2f */);
	func_695(Local_699.f_690[2 /*12*/].f_8, vVar6, fVar11, 1, 1073741824 /* Float: 2f */);
	if (__LIB_8__::func_343(32768))
	{
		func_695(iLocal_2030[0], __LIB_8__::func_484(), __LIB_8__::func_485(), 1, 1073741824 /* Float: 2f */);
	}
}

void func_1041(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	vVar0 = { __LIB_8__::func_432(&(Local_424[iParam0 /*7*/]), "plr", 0) };
	vVar3 = { __LIB_8__::func_432(&(Local_424[iParam0 /*7*/]), "foreman", 0) };
	vVar6 = { __LIB_8__::func_432(&(Local_424[iParam0 /*7*/]), "CHAIR", 0) };
	fVar9 = __LIB_8__::func_433(&(Local_424[iParam0 /*7*/]), "plr", 0);
	fVar10 = __LIB_8__::func_433(&(Local_424[iParam0 /*7*/]), "foreman", 0);
	fVar11 = __LIB_8__::func_433(&(Local_424[iParam0 /*7*/]), "CHAIR", 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[11 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_699.f_690[11 /*12*/].f_8));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[4 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_699.f_690[4 /*12*/].f_8));
	}
	func_695(Global_35, vVar0, fVar9, 1, 1073741824 /* Float: 2f */);
	iVar12 = __LIB_2__::func_963(Local_1702.f_138);
	func_695(iVar12, vVar3, fVar10, 1, 1073741824 /* Float: 2f */);
	func_695(Local_699.f_690[0 /*12*/].f_8, vVar6, fVar11, 1, 1073741824 /* Float: 2f */);
}

void func_1042(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	vVar0 = { __LIB_8__::func_432(&(Local_424[iParam0 /*7*/]), "plr", 0) };
	vVar3 = { __LIB_8__::func_432(&(Local_424[iParam0 /*7*/]), "foreman", 0) };
	vVar6 = { __LIB_8__::func_432(&(Local_424[iParam0 /*7*/]), "Chair", 0) };
	fVar9 = __LIB_8__::func_433(&(Local_424[iParam0 /*7*/]), "plr", 0);
	fVar10 = __LIB_8__::func_433(&(Local_424[iParam0 /*7*/]), "foreman", 0);
	fVar11 = __LIB_8__::func_433(&(Local_424[iParam0 /*7*/]), "Chair", 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[11 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_699.f_690[11 /*12*/].f_8));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[9 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_699.f_690[9 /*12*/].f_8));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[4 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_699.f_690[4 /*12*/].f_8));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_699.f_690[12 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_699.f_690[12 /*12*/].f_8));
	}
	if (!__LIB_8__::func_379(4))
	{
		func_815(joaat("DOCUMENT_HOMESTEAD_DEED"), 1, 0, -1387038764, 0);
		__LIB_8__::func_376(4);
	}
	if (!__LIB_8__::func_379(2))
	{
		__LIB_4__::func_127(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
		__LIB_8__::func_85(Local_1702.f_136, 262144);
		__LIB_8__::func_376(2);
	}
	__LIB_0__::func_325(&(uLocal_2043[0]));
	__LIB_0__::func_325(&(uLocal_2034[3]));
	__LIB_0__::func_769();
	func_695(Global_35, vVar0, fVar9, 1, 1073741824 /* Float: 2f */);
	iVar12 = __LIB_2__::func_963(Local_1702.f_138);
	func_695(iVar12, vVar3, fVar10, 1, 1073741824 /* Float: 2f */);
	func_695(Local_699.f_690[0 /*12*/].f_8, vVar6, fVar11, 1, 1073741824 /* Float: 2f */);
}

void func_1048()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_2047)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2047[iVar0]))
		{
			MISC::_0xEB946B9E579729AD(iLocal_2047[iVar0], 0);
		}
		iVar0++;
	}
}

void func_1068(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			__LIB_3__::func_904(joaat("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			__LIB_3__::func_755(1);
			break;
		case 16:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (__LIB_0__::func_343(146))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			__LIB_3__::func_755(1);
			break;
		case 76:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			__LIB_3__::func_755(0);
			break;
		case 15:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			__LIB_3__::func_904(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			__LIB_3__::func_904(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			Jump @2196; //curOff = 1119
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_GT_MOB_2"), iParam1);
			Jump @2196; //curOff = 1177
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_GT_MOB_3"), iParam1);
			Jump @2196; //curOff = 1213
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			Jump @2196; //curOff = 1260
			__LIB_3__::func_904(joaat("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			__LIB_3__::func_755(0);
			Jump @2196; //curOff = 1312
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			Jump @2196; //curOff = 1389
			__LIB_3__::func_904(joaat("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			Jump @2196; //curOff = 1403
			if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			Jump @2196; //curOff = 1469
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (__LIB_1__::func_151(51))
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			Jump @2196; //curOff = 1536
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			Jump @2196; //curOff = 1613
			__LIB_3__::func_904(joaat("JOURNAL_GT_NATIVE_3"), iParam1);
			Jump @2196; //curOff = 1627
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			Jump @2196; //curOff = 1641
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			Jump @2196; //curOff = 1719
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			Jump @2196; //curOff = 1733
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			Jump @2196; //curOff = 1747
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			Jump @2196; //curOff = 1790
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			Jump @2196; //curOff = 1837
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			Jump @2196; //curOff = 1873
			__LIB_3__::func_904(joaat("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			Jump @2196; //curOff = 1887
			if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			Jump @2196; //curOff = 1934
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			Jump @2196; //curOff = 1970
			__LIB_3__::func_904(joaat("JOURNAL_GT_CORNWALL_1"), iParam1);
			Jump @2196; //curOff = 1984
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			Jump @2196; //curOff = 1998
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			Jump @2196; //curOff = 2023
			__LIB_3__::func_904(joaat("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			Jump @2196; //curOff = 2037
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			Jump @2196; //curOff = 2062
			__LIB_3__::func_904(joaat("JOURNAL_GT_UTOPIA_2"), iParam1);
			Jump @2196; //curOff = 2076
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			Jump @2196; //curOff = 2123
			__LIB_3__::func_755(1);
			Jump @2196; //curOff = 2131
			if (__LIB_0__::func_26())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4")))
				{
					__LIB_3__::func_904(joaat("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4_SE")))
			{
				__LIB_3__::func_904(joaat("JOURNAL_GT_WINTER_4"), iParam1);
			}
		}
bool func_1069()
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_1082(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_5__::func_388(iParam0, iParam1, bParam2, iParam5))
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
			__LIB_8__::func_579(iVar5);
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
				func_1082(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_10__::func_252(28);
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
			if (!__LIB_5__::func_385(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
				__LIB_4__::func_127(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
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
			__LIB_4__::func_129(iParam0);
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
			__LIB_8__::func_582(iParam0, iParam1);
			__LIB_8__::func_580(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_4__::func_130(iParam0, 0, 0, 0);
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
			__LIB_4__::func_468(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_1082(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_1082(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_1082(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_1082(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_1082(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_1082(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1082(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_10__::func_252(24);
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
					func_1082(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1082(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_10__::func_379(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_19__::func_157(iParam0);
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
				func_1082(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
			__LIB_4__::func_120(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_2__::func_471(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_1084()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1372();
	func_1373();
	func_1374();
	func_1375();
	func_1376();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_1085(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_815(iParam0, 1, 1, -142743235, 1);
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

void func_1119()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1402(&uVar4, &iVar1, &iVar2, &iVar3)))
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
		__LIB_2__::func_472(iVar3, 0, 0);
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

void func_1134()
{
	if (__LIB_0__::func_797(0))
	{
		func_1412(0);
	}
	if (__LIB_0__::func_797(1))
	{
		func_1412(1);
	}
	if (__LIB_0__::func_797(5))
	{
		func_1412(5);
	}
	if (__LIB_0__::func_797(6))
	{
		__LIB_0__::func_798(6);
	}
}

void func_1171(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_507(iParam0, iParam1);
	__LIB_0__::func_508(iParam0, iParam1);
	__LIB_1__::func_720(iParam0, iParam1);
	iVar1 = __LIB_0__::func_398(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			__LIB_1__::func_177(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = __LIB_0__::func_398(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			__LIB_1__::func_177(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_1134();
}

void func_1178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1444(&iVar0, &iVar1, &iVar2);
	__LIB_0__::func_810(iParam0, iVar0);
	__LIB_0__::func_811(iParam0, iVar1);
	__LIB_0__::func_812(iParam0, iVar2);
	__LIB_0__::func_837(iParam0, 1);
	func_1449(iParam0, 1);
}

bool func_1214(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_424[__LIB_8__::func_399(iParam1) /*7*/]))
	{
		return false;
	}
	if (iLocal_536[iParam1] >= 8)
	{
		return false;
	}
	if (!(PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX())))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1824589780) || ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("SAFETOBREAKOUTA")))
	{
		return true;
	}
	return false;
}

bool func_1216(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return false;
	}
	if (iLocal_536[iParam1] >= 8)
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_375[__LIB_8__::func_347(iParam1)]))
	{
		return false;
	}
	if (!__LIB_1__::func_205(Global_35, iLocal_375[__LIB_8__::func_347(iParam1)], 1, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1865930452))
	{
		return true;
	}
	return false;
}

void func_1372()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1620(0);
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
	func_1620(1);
}

void func_1373()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_1082(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1374()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1623(0);
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
	func_1623(1);
}

void func_1375()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1623(0);
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
	__LIB_2__::func_590(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1623(1);
}

void func_1376()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_1082(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1082(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_815(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_815(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1402(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1647(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_1082(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1412(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (__LIB_0__::func_818(iParam0, 64))
	{
		__LIB_0__::func_798(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = __LIB_0__::func_293(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_1653(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		__LIB_0__::func_798(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (__LIB_0__::func_819(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::_BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_1655(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (__LIB_0__::func_818(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = __LIB_0__::func_820(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = __LIB_0__::func_636(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > __LIB_1__::func_136(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = -401963276;
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = -1380599892;
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = 1313031610;
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = -1012863186;
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		__LIB_0__::func_637(Global_1900383[iParam0 /*45*/].f_26);
		__LIB_0__::func_638(Global_1900383[iParam0 /*45*/].f_26);
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (__LIB_0__::func_126(iVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 561559387);
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -201249929);
	}
	iVar21 = __LIB_0__::func_819(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

int func_1444(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (__LIB_0__::func_28())
	{
		if (func_1069())
		{
			bVar0 = false;
			if (!__LIB_1__::func_25(Global_1835011[15 /*74*/].f_1, 1) && !__LIB_0__::func_293(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = __LIB_0__::func_579();
				*iParam1 = __LIB_0__::func_580();
				*iParam2 = __LIB_0__::func_16();
				return 1;
			}
			else
			{
				*iParam0 = __LIB_0__::func_581();
				*iParam1 = __LIB_0__::func_582();
				*iParam2 = __LIB_0__::func_16();
				return 1;
			}
		}
		else if (__LIB_0__::func_181())
		{
			if (!__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
			{
				*iParam0 = __LIB_0__::func_583();
				*iParam1 = __LIB_0__::func_584();
				*iParam2 = __LIB_0__::func_585();
				return 1;
			}
			else
			{
				*iParam0 = __LIB_0__::func_581();
				*iParam1 = __LIB_0__::func_582();
				*iParam2 = __LIB_0__::func_16();
				return 1;
			}
		}
	}
	else if (func_1069())
	{
		*iParam0 = __LIB_0__::func_586();
		*iParam1 = __LIB_0__::func_587();
		*iParam2 = __LIB_0__::func_16();
		return 1;
	}
	else if (__LIB_0__::func_181())
	{
		*iParam0 = __LIB_0__::func_588();
		*iParam1 = __LIB_0__::func_589();
		*iParam2 = __LIB_0__::func_16();
		return 1;
	}
	return 0;
}

void func_1449(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1444(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	__LIB_1__::func_17(iParam1);
	iVar5 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_1620(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_1082(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1812(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_1085(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_815(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			func_1815(&Var0);
			func_1816(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		func_1444(&iVar7, &iVar8, &iVar9);
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

void func_1623(bool bParam0)
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
		func_1082(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1082(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_815(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_815(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_815(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_815(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_815(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_815(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_815(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_815(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_815(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_815(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_815(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		func_1444(&iVar1, &iVar2, &iVar3);
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

int func_1647(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1647(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1647(iVar63, -915411861, 1, 0, 0));
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

void func_1653(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, __LIB_0__::func_666(__LIB_1__::func_191(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_1069())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		__LIB_0__::func_181();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_1655(var uParam0, bool bParam1)
{
	char* sVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, __LIB_0__::func_666(__LIB_1__::func_191(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1069())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (__LIB_0__::func_181())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

void func_1812(int iParam0)
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
	func_815(iParam0, 1, 1, -142743235, 1);
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
		func_815(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1815(var uParam0)
{
	__LIB_0__::func_611(uParam0);
	__LIB_0__::func_19(uParam0, func_1906(-1346384396));
	__LIB_0__::func_115(uParam0, func_1906(-712836614));
	__LIB_0__::func_612(uParam0, func_1906(-1629133289));
	__LIB_0__::func_613(uParam0, func_1906(1302066700));
	__LIB_0__::func_614(uParam0, func_1906(599669344));
	__LIB_0__::func_615(uParam0, func_1906(-1555511632));
}

void func_1816(struct<6> Param0)
{
	if (!func_1913(Param0.f_4, 1))
	{
	}
	if (!func_1913(Param0, 1))
	{
	}
	if (!func_1913(Param0.f_2, 1))
	{
	}
	if (!func_1913(Param0.f_5, 1))
	{
	}
	if (!func_1913(Param0.f_3, 1))
	{
	}
	if (!func_1913(Param0.f_1, 1))
	{
	}
}

int func_1906(int iParam0)
{
	if (func_1069())
	{
		switch (iParam0)
		{
			case -1346384396:
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_000");
			case -712836614:
				return joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_NEW_SADDLE_000");
			case -1629133289:
				return joaat("HORSE_EQUIPMENT_HORN_NEW_000");
			case 1302066700:
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_000");
			case 599669344:
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_01_USED_000");
			case -1555511632:
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_000");
		}
	}
	else if (__LIB_0__::func_181())
	{
		switch (iParam0)
		{
			case -1346384396:
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_09_NEW_001");
			case -712836614:
				return joaat("HORSE_EQUIPMENT_WESTERN_04_STOCK_NEW_SADDLE_005");
			case -1629133289:
				return joaat("HORSE_EQUIPMENT_HORN_NEW_012");
			case 1302066700:
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_006");
			case 599669344:
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_003");
			case -1555511632:
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_NEW_003");
		}
	}
	return 0;
}

bool func_1913(int iParam0, int iParam1)
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
				if (func_1913(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1913(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1913(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1913(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

