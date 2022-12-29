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
	struct<70> Local_14 = { 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 4 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	struct<34> Local_89 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_123[5] = { 0, 0, 0, 0, 0 };
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	struct<6> Local_133[56];
	vector3 vLocal_470[101] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_774 = 0f;
	int iLocal_775[4] = { 0, 0, 0, 0 };
	int iLocal_780 = 0;
	int iLocal_781[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_792[48] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_937[3] = { 0, 0, 0 };
	struct<2> Local_941[32];
	int iLocal_1006[2] = { 0, 0 };
	int iLocal_1009[5] = { 0, 0, 0, 0, 0 };
	struct<13> Local_1015[8];
	int iLocal_1120 = 0;
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	struct<6> Local_1123[7];
	char cLocal_1166[16] = "";
	float fLocal_1168 = 0f;
	struct<2> Local_1169 = { -1, 1 } ;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	var uLocal_1178 = 0;
	int iLocal_1179 = 0;
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 21;
	var uLocal_1191 = 6;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	int iLocal_1195 = 0;
	int iLocal_1196 = 0;
	int iLocal_1197 = 0;
	int iLocal_1198 = 0;
	int iLocal_1199 = 0;
	int iLocal_1200 = 0;
	int iLocal_1201 = 0;
	struct<20> Local_1202 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1222 = 0;
	int iLocal_1223 = 0;
	int iLocal_1224 = 0;
	float fLocal_1225 = 0f;
	float fLocal_1226 = 0f;
	float fLocal_1227 = 0f;
	float fLocal_1228 = 0f;
	float fLocal_1229 = 0f;
	float fLocal_1230 = 0f;
	int iLocal_1231 = 0;
	int iLocal_1232 = 0;
	int iLocal_1233 = 0;
	int iLocal_1234 = 0;
	struct<14> Local_1235 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	float fLocal_1251 = 0f;
	float fLocal_1252 = 0f;
	int iLocal_1253 = 0;
	float fLocal_1254 = 0f;
	int iLocal_1255 = 0;
	float fLocal_1256 = 0f;
	float fLocal_1257 = 0f;
	float fLocal_1258 = 0f;
	float fLocal_1259 = 0f;
	float fLocal_1260 = 0f;
	int iLocal_1261 = 0;
	int iLocal_1262 = 0;
	int iLocal_1263 = 0;
	float fLocal_1264 = 0f;
	int iLocal_1265 = 0;
	int iLocal_1266 = 0;
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	struct<2> Local_1269 = { 1676963302, 379542007 } ;
	int iLocal_1271 = 0;
	int iLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = -1;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 1097859072;
	var uLocal_1290 = 1000;
	var uLocal_1291 = 1067450368;
	var uLocal_1292 = 5000;
	var uLocal_1293 = 42;
	var uLocal_1294 = 1103626240;
	var uLocal_1295 = 1077936128;
	var uLocal_1296 = 1106247680;
	var uLocal_1297 = 1103101952;
	var uLocal_1298 = 1097859072;
	var uLocal_1299 = 1103626240;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	vector3 vLocal_1303 = { 0f, 0f, 0f };
	int iLocal_1306 = 0;
	struct<8> Local_1307[2];
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	vector3 vLocal_1328 = { 0f, 0f, 0f };
	vector3 vLocal_1331 = { 0f, 0f, 0f };
	vector3 vLocal_1334 = { 0f, 0f, 0f };
	int iLocal_1337 = 0;
	var uLocal_1338 = 0;
	int iLocal_1339 = 0;
	struct<2> Local_1340 = { 0, 0 } ;
	int iLocal_1342[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_1370 = false;
	struct<5> Local_1371[22];
	int iLocal_1482[4] = { 0, 0, 0, 0 };
	int iLocal_1487 = 0;
	int iLocal_1488 = 0;
	int iLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 27;
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
	var uLocal_1998 = 8;
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
	var uLocal_2019 = -1;
	var uLocal_2020 = 8;
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
	var uLocal_2041 = -1;
	var uLocal_2042 = 8;
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
	var uLocal_2063 = -1;
	var uLocal_2064 = 8;
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
	var uLocal_2085 = -1;
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
	var uLocal_2124 = 2;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 60;
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
	var uLocal_2221 = 0;
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
	var uLocal_2309 = 40;
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
	var uLocal_2422 = 0;
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
	var uLocal_2483 = 0;
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
	var uLocal_2510 = 20;
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
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
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
	var uLocal_2571 = 14;
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
	var uLocal_2600 = 0;
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
	var uLocal_2616 = 60;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 20;
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
	var uLocal_2667 = 0;
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
	var uLocal_2688 = 20;
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
	var uLocal_2734 = 0;
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
	var uLocal_2755 = 20;
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
	var uLocal_2801 = 0;
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
	var uLocal_2822 = 20;
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
	var uLocal_2868 = 0;
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
	var uLocal_2889 = 20;
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
	var uLocal_2935 = 0;
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
	var uLocal_2956 = 20;
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
	var uLocal_3002 = 0;
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
	var uLocal_3023 = 20;
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
	var uLocal_3069 = 0;
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
	var uLocal_3090 = 20;
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
	var uLocal_3136 = 0;
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
	var uLocal_3157 = 20;
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
	var uLocal_3203 = 0;
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
	var uLocal_3224 = 20;
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
	var uLocal_3270 = 0;
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
	var uLocal_3291 = 20;
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
	var uLocal_3337 = 0;
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
	var uLocal_3358 = 20;
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
	var uLocal_3404 = 0;
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
	var uLocal_3425 = 20;
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
	var uLocal_3471 = 0;
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
	var uLocal_3492 = 20;
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
	var uLocal_3538 = 0;
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
	var uLocal_3559 = 20;
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
	var uLocal_3605 = 0;
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
	var uLocal_3626 = 20;
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
	var uLocal_3672 = 0;
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
	var uLocal_3693 = 20;
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
	var uLocal_3739 = 0;
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
	var uLocal_3760 = 20;
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
	var uLocal_3806 = 0;
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
	var uLocal_3827 = 20;
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
	var uLocal_3873 = 0;
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
	var uLocal_3894 = 20;
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
	var uLocal_3940 = 0;
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
	var uLocal_3961 = 20;
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
	var uLocal_4007 = 0;
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
	var uLocal_4028 = 20;
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
	var uLocal_4074 = 0;
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
	var uLocal_4095 = 20;
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
	var uLocal_4141 = 0;
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
	var uLocal_4162 = 20;
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
	var uLocal_4208 = 0;
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
	var uLocal_4229 = 20;
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
	var uLocal_4275 = 0;
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
	var uLocal_4296 = 20;
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
	var uLocal_4342 = 0;
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
	var uLocal_4363 = 20;
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
	var uLocal_4409 = 0;
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
	var uLocal_4430 = 20;
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
	var uLocal_4476 = 0;
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
	var uLocal_4497 = 20;
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
	var uLocal_4543 = 0;
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
	var uLocal_4564 = 20;
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
	var uLocal_4610 = 0;
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
	var uLocal_4631 = 20;
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
	var uLocal_4677 = 0;
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
	var uLocal_4698 = 20;
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
	var uLocal_4744 = 0;
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
	var uLocal_4765 = 20;
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
	var uLocal_4811 = 0;
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
	var uLocal_4832 = 20;
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
	var uLocal_4878 = 0;
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
	var uLocal_4899 = 20;
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
	var uLocal_4945 = 0;
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
	var uLocal_4966 = 20;
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
	var uLocal_5012 = 0;
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
	var uLocal_5033 = 20;
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
	var uLocal_5079 = 0;
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
	var uLocal_5100 = 20;
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
	var uLocal_5146 = 0;
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
	var uLocal_5167 = 20;
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
	var uLocal_5213 = 0;
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
	var uLocal_5234 = 20;
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
	var uLocal_5280 = 0;
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
	var uLocal_5301 = 20;
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
	var uLocal_5347 = 0;
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
	var uLocal_5368 = 20;
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
	var uLocal_5414 = 0;
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
	var uLocal_5435 = 20;
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
	var uLocal_5481 = 0;
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
	var uLocal_5502 = 20;
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
	var uLocal_5548 = 0;
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
	var uLocal_5569 = 20;
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
	var uLocal_5615 = 0;
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
	var uLocal_5636 = 20;
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
	var uLocal_5682 = 0;
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
	var uLocal_5703 = 20;
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
	var uLocal_5749 = 0;
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
	var uLocal_5770 = 20;
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
	var uLocal_5816 = 0;
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
	var uLocal_5837 = 20;
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
	var uLocal_5883 = 0;
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
	var uLocal_5904 = 20;
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
	var uLocal_5950 = 0;
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
	var uLocal_5971 = 20;
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
	var uLocal_6017 = 0;
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
	var uLocal_6038 = 20;
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
	var uLocal_6084 = 0;
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
	var uLocal_6105 = 20;
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
	var uLocal_6151 = 0;
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
	var uLocal_6172 = 20;
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
	var uLocal_6218 = 0;
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
	var uLocal_6239 = 20;
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
	var uLocal_6285 = 0;
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
	var uLocal_6306 = 20;
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
	var uLocal_6352 = 0;
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
	var uLocal_6373 = 20;
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
	var uLocal_6419 = 0;
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
	var uLocal_6440 = 20;
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
	var uLocal_6486 = 0;
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
	var uLocal_6507 = 20;
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
	var uLocal_6549 = 0;
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
	var uLocal_6574 = 20;
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
	var uLocal_6590 = 0;
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
	var uLocal_6637 = 10;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
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
	var uLocal_6667 = 0;
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
	var uLocal_6678 = 10;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
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
	var uLocal_6712 = 0;
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
	var uLocal_6729 = 3;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 5;
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
	var uLocal_6755 = 5;
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
	var uLocal_6776 = 5;
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
	var uLocal_6800 = 24;
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
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
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
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 30;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 3;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = -1;
	var uLocal_6925 = 0;
	var uLocal_6926 = 5;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 10;
	var uLocal_6938 = 3;
	var uLocal_6939 = 500;
	var uLocal_6940 = 10000;
	var uLocal_6941 = 0;
	var uLocal_6942 = 3;
	var uLocal_6943 = 500;
	var uLocal_6944 = 10000;
	var uLocal_6945 = 0;
	var uLocal_6946 = 3;
	var uLocal_6947 = 500;
	var uLocal_6948 = 10000;
	var uLocal_6949 = 0;
	var uLocal_6950 = 3;
	var uLocal_6951 = 500;
	var uLocal_6952 = 10000;
	var uLocal_6953 = 0;
	var uLocal_6954 = 3;
	var uLocal_6955 = 500;
	var uLocal_6956 = 10000;
	var uLocal_6957 = 0;
	var uLocal_6958 = 3;
	var uLocal_6959 = 500;
	var uLocal_6960 = 10000;
	var uLocal_6961 = 0;
	var uLocal_6962 = 3;
	var uLocal_6963 = 500;
	var uLocal_6964 = 10000;
	var uLocal_6965 = 0;
	var uLocal_6966 = 3;
	var uLocal_6967 = 500;
	var uLocal_6968 = 10000;
	var uLocal_6969 = 0;
	var uLocal_6970 = 3;
	var uLocal_6971 = 500;
	var uLocal_6972 = 10000;
	var uLocal_6973 = 0;
	var uLocal_6974 = 3;
	var uLocal_6975 = 500;
	var uLocal_6976 = 10000;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 3;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = -1;
	var uLocal_6990 = 0;
	var uLocal_6991 = 5;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 10;
	var uLocal_7003 = 3;
	var uLocal_7004 = 500;
	var uLocal_7005 = 10000;
	var uLocal_7006 = 0;
	var uLocal_7007 = 3;
	var uLocal_7008 = 500;
	var uLocal_7009 = 10000;
	var uLocal_7010 = 0;
	var uLocal_7011 = 3;
	var uLocal_7012 = 500;
	var uLocal_7013 = 10000;
	var uLocal_7014 = 0;
	var uLocal_7015 = 3;
	var uLocal_7016 = 500;
	var uLocal_7017 = 10000;
	var uLocal_7018 = 0;
	var uLocal_7019 = 3;
	var uLocal_7020 = 500;
	var uLocal_7021 = 10000;
	var uLocal_7022 = 0;
	var uLocal_7023 = 3;
	var uLocal_7024 = 500;
	var uLocal_7025 = 10000;
	var uLocal_7026 = 0;
	var uLocal_7027 = 3;
	var uLocal_7028 = 500;
	var uLocal_7029 = 10000;
	var uLocal_7030 = 0;
	var uLocal_7031 = 3;
	var uLocal_7032 = 500;
	var uLocal_7033 = 10000;
	var uLocal_7034 = 0;
	var uLocal_7035 = 3;
	var uLocal_7036 = 500;
	var uLocal_7037 = 10000;
	var uLocal_7038 = 0;
	var uLocal_7039 = 3;
	var uLocal_7040 = 500;
	var uLocal_7041 = 10000;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 0;
	var uLocal_7049 = 3;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = -1;
	var uLocal_7055 = 0;
	var uLocal_7056 = 5;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 10;
	var uLocal_7068 = 3;
	var uLocal_7069 = 500;
	var uLocal_7070 = 10000;
	var uLocal_7071 = 0;
	var uLocal_7072 = 3;
	var uLocal_7073 = 500;
	var uLocal_7074 = 10000;
	var uLocal_7075 = 0;
	var uLocal_7076 = 3;
	var uLocal_7077 = 500;
	var uLocal_7078 = 10000;
	var uLocal_7079 = 0;
	var uLocal_7080 = 3;
	var uLocal_7081 = 500;
	var uLocal_7082 = 10000;
	var uLocal_7083 = 0;
	var uLocal_7084 = 3;
	var uLocal_7085 = 500;
	var uLocal_7086 = 10000;
	var uLocal_7087 = 0;
	var uLocal_7088 = 3;
	var uLocal_7089 = 500;
	var uLocal_7090 = 10000;
	var uLocal_7091 = 0;
	var uLocal_7092 = 3;
	var uLocal_7093 = 500;
	var uLocal_7094 = 10000;
	var uLocal_7095 = 0;
	var uLocal_7096 = 3;
	var uLocal_7097 = 500;
	var uLocal_7098 = 10000;
	var uLocal_7099 = 0;
	var uLocal_7100 = 3;
	var uLocal_7101 = 500;
	var uLocal_7102 = 10000;
	var uLocal_7103 = 0;
	var uLocal_7104 = 3;
	var uLocal_7105 = 500;
	var uLocal_7106 = 10000;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 3;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = -1;
	var uLocal_7120 = 0;
	var uLocal_7121 = 5;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 10;
	var uLocal_7133 = 3;
	var uLocal_7134 = 500;
	var uLocal_7135 = 10000;
	var uLocal_7136 = 0;
	var uLocal_7137 = 3;
	var uLocal_7138 = 500;
	var uLocal_7139 = 10000;
	var uLocal_7140 = 0;
	var uLocal_7141 = 3;
	var uLocal_7142 = 500;
	var uLocal_7143 = 10000;
	var uLocal_7144 = 0;
	var uLocal_7145 = 3;
	var uLocal_7146 = 500;
	var uLocal_7147 = 10000;
	var uLocal_7148 = 0;
	var uLocal_7149 = 3;
	var uLocal_7150 = 500;
	var uLocal_7151 = 10000;
	var uLocal_7152 = 0;
	var uLocal_7153 = 3;
	var uLocal_7154 = 500;
	var uLocal_7155 = 10000;
	var uLocal_7156 = 0;
	var uLocal_7157 = 3;
	var uLocal_7158 = 500;
	var uLocal_7159 = 10000;
	var uLocal_7160 = 0;
	var uLocal_7161 = 3;
	var uLocal_7162 = 500;
	var uLocal_7163 = 10000;
	var uLocal_7164 = 0;
	var uLocal_7165 = 3;
	var uLocal_7166 = 500;
	var uLocal_7167 = 10000;
	var uLocal_7168 = 0;
	var uLocal_7169 = 3;
	var uLocal_7170 = 500;
	var uLocal_7171 = 10000;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 3;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = -1;
	var uLocal_7185 = 0;
	var uLocal_7186 = 5;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 10;
	var uLocal_7198 = 3;
	var uLocal_7199 = 500;
	var uLocal_7200 = 10000;
	var uLocal_7201 = 0;
	var uLocal_7202 = 3;
	var uLocal_7203 = 500;
	var uLocal_7204 = 10000;
	var uLocal_7205 = 0;
	var uLocal_7206 = 3;
	var uLocal_7207 = 500;
	var uLocal_7208 = 10000;
	var uLocal_7209 = 0;
	var uLocal_7210 = 3;
	var uLocal_7211 = 500;
	var uLocal_7212 = 10000;
	var uLocal_7213 = 0;
	var uLocal_7214 = 3;
	var uLocal_7215 = 500;
	var uLocal_7216 = 10000;
	var uLocal_7217 = 0;
	var uLocal_7218 = 3;
	var uLocal_7219 = 500;
	var uLocal_7220 = 10000;
	var uLocal_7221 = 0;
	var uLocal_7222 = 3;
	var uLocal_7223 = 500;
	var uLocal_7224 = 10000;
	var uLocal_7225 = 0;
	var uLocal_7226 = 3;
	var uLocal_7227 = 500;
	var uLocal_7228 = 10000;
	var uLocal_7229 = 0;
	var uLocal_7230 = 3;
	var uLocal_7231 = 500;
	var uLocal_7232 = 10000;
	var uLocal_7233 = 0;
	var uLocal_7234 = 3;
	var uLocal_7235 = 500;
	var uLocal_7236 = 10000;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 3;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = -1;
	var uLocal_7250 = 0;
	var uLocal_7251 = 5;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 10;
	var uLocal_7263 = 3;
	var uLocal_7264 = 500;
	var uLocal_7265 = 10000;
	var uLocal_7266 = 0;
	var uLocal_7267 = 3;
	var uLocal_7268 = 500;
	var uLocal_7269 = 10000;
	var uLocal_7270 = 0;
	var uLocal_7271 = 3;
	var uLocal_7272 = 500;
	var uLocal_7273 = 10000;
	var uLocal_7274 = 0;
	var uLocal_7275 = 3;
	var uLocal_7276 = 500;
	var uLocal_7277 = 10000;
	var uLocal_7278 = 0;
	var uLocal_7279 = 3;
	var uLocal_7280 = 500;
	var uLocal_7281 = 10000;
	var uLocal_7282 = 0;
	var uLocal_7283 = 3;
	var uLocal_7284 = 500;
	var uLocal_7285 = 10000;
	var uLocal_7286 = 0;
	var uLocal_7287 = 3;
	var uLocal_7288 = 500;
	var uLocal_7289 = 10000;
	var uLocal_7290 = 0;
	var uLocal_7291 = 3;
	var uLocal_7292 = 500;
	var uLocal_7293 = 10000;
	var uLocal_7294 = 0;
	var uLocal_7295 = 3;
	var uLocal_7296 = 500;
	var uLocal_7297 = 10000;
	var uLocal_7298 = 0;
	var uLocal_7299 = 3;
	var uLocal_7300 = 500;
	var uLocal_7301 = 10000;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = 3;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = -1;
	var uLocal_7315 = 0;
	var uLocal_7316 = 5;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 10;
	var uLocal_7328 = 3;
	var uLocal_7329 = 500;
	var uLocal_7330 = 10000;
	var uLocal_7331 = 0;
	var uLocal_7332 = 3;
	var uLocal_7333 = 500;
	var uLocal_7334 = 10000;
	var uLocal_7335 = 0;
	var uLocal_7336 = 3;
	var uLocal_7337 = 500;
	var uLocal_7338 = 10000;
	var uLocal_7339 = 0;
	var uLocal_7340 = 3;
	var uLocal_7341 = 500;
	var uLocal_7342 = 10000;
	var uLocal_7343 = 0;
	var uLocal_7344 = 3;
	var uLocal_7345 = 500;
	var uLocal_7346 = 10000;
	var uLocal_7347 = 0;
	var uLocal_7348 = 3;
	var uLocal_7349 = 500;
	var uLocal_7350 = 10000;
	var uLocal_7351 = 0;
	var uLocal_7352 = 3;
	var uLocal_7353 = 500;
	var uLocal_7354 = 10000;
	var uLocal_7355 = 0;
	var uLocal_7356 = 3;
	var uLocal_7357 = 500;
	var uLocal_7358 = 10000;
	var uLocal_7359 = 0;
	var uLocal_7360 = 3;
	var uLocal_7361 = 500;
	var uLocal_7362 = 10000;
	var uLocal_7363 = 0;
	var uLocal_7364 = 3;
	var uLocal_7365 = 500;
	var uLocal_7366 = 10000;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 3;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = -1;
	var uLocal_7380 = 0;
	var uLocal_7381 = 5;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 10;
	var uLocal_7393 = 3;
	var uLocal_7394 = 500;
	var uLocal_7395 = 10000;
	var uLocal_7396 = 0;
	var uLocal_7397 = 3;
	var uLocal_7398 = 500;
	var uLocal_7399 = 10000;
	var uLocal_7400 = 0;
	var uLocal_7401 = 3;
	var uLocal_7402 = 500;
	var uLocal_7403 = 10000;
	var uLocal_7404 = 0;
	var uLocal_7405 = 3;
	var uLocal_7406 = 500;
	var uLocal_7407 = 10000;
	var uLocal_7408 = 0;
	var uLocal_7409 = 3;
	var uLocal_7410 = 500;
	var uLocal_7411 = 10000;
	var uLocal_7412 = 0;
	var uLocal_7413 = 3;
	var uLocal_7414 = 500;
	var uLocal_7415 = 10000;
	var uLocal_7416 = 0;
	var uLocal_7417 = 3;
	var uLocal_7418 = 500;
	var uLocal_7419 = 10000;
	var uLocal_7420 = 0;
	var uLocal_7421 = 3;
	var uLocal_7422 = 500;
	var uLocal_7423 = 10000;
	var uLocal_7424 = 0;
	var uLocal_7425 = 3;
	var uLocal_7426 = 500;
	var uLocal_7427 = 10000;
	var uLocal_7428 = 0;
	var uLocal_7429 = 3;
	var uLocal_7430 = 500;
	var uLocal_7431 = 10000;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 3;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = -1;
	var uLocal_7445 = 0;
	var uLocal_7446 = 5;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 10;
	var uLocal_7458 = 3;
	var uLocal_7459 = 500;
	var uLocal_7460 = 10000;
	var uLocal_7461 = 0;
	var uLocal_7462 = 3;
	var uLocal_7463 = 500;
	var uLocal_7464 = 10000;
	var uLocal_7465 = 0;
	var uLocal_7466 = 3;
	var uLocal_7467 = 500;
	var uLocal_7468 = 10000;
	var uLocal_7469 = 0;
	var uLocal_7470 = 3;
	var uLocal_7471 = 500;
	var uLocal_7472 = 10000;
	var uLocal_7473 = 0;
	var uLocal_7474 = 3;
	var uLocal_7475 = 500;
	var uLocal_7476 = 10000;
	var uLocal_7477 = 0;
	var uLocal_7478 = 3;
	var uLocal_7479 = 500;
	var uLocal_7480 = 10000;
	var uLocal_7481 = 0;
	var uLocal_7482 = 3;
	var uLocal_7483 = 500;
	var uLocal_7484 = 10000;
	var uLocal_7485 = 0;
	var uLocal_7486 = 3;
	var uLocal_7487 = 500;
	var uLocal_7488 = 10000;
	var uLocal_7489 = 0;
	var uLocal_7490 = 3;
	var uLocal_7491 = 500;
	var uLocal_7492 = 10000;
	var uLocal_7493 = 0;
	var uLocal_7494 = 3;
	var uLocal_7495 = 500;
	var uLocal_7496 = 10000;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = 3;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = -1;
	var uLocal_7510 = 0;
	var uLocal_7511 = 5;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 10;
	var uLocal_7523 = 3;
	var uLocal_7524 = 500;
	var uLocal_7525 = 10000;
	var uLocal_7526 = 0;
	var uLocal_7527 = 3;
	var uLocal_7528 = 500;
	var uLocal_7529 = 10000;
	var uLocal_7530 = 0;
	var uLocal_7531 = 3;
	var uLocal_7532 = 500;
	var uLocal_7533 = 10000;
	var uLocal_7534 = 0;
	var uLocal_7535 = 3;
	var uLocal_7536 = 500;
	var uLocal_7537 = 10000;
	var uLocal_7538 = 0;
	var uLocal_7539 = 3;
	var uLocal_7540 = 500;
	var uLocal_7541 = 10000;
	var uLocal_7542 = 0;
	var uLocal_7543 = 3;
	var uLocal_7544 = 500;
	var uLocal_7545 = 10000;
	var uLocal_7546 = 0;
	var uLocal_7547 = 3;
	var uLocal_7548 = 500;
	var uLocal_7549 = 10000;
	var uLocal_7550 = 0;
	var uLocal_7551 = 3;
	var uLocal_7552 = 500;
	var uLocal_7553 = 10000;
	var uLocal_7554 = 0;
	var uLocal_7555 = 3;
	var uLocal_7556 = 500;
	var uLocal_7557 = 10000;
	var uLocal_7558 = 0;
	var uLocal_7559 = 3;
	var uLocal_7560 = 500;
	var uLocal_7561 = 10000;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = 3;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = -1;
	var uLocal_7575 = 0;
	var uLocal_7576 = 5;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 10;
	var uLocal_7588 = 3;
	var uLocal_7589 = 500;
	var uLocal_7590 = 10000;
	var uLocal_7591 = 0;
	var uLocal_7592 = 3;
	var uLocal_7593 = 500;
	var uLocal_7594 = 10000;
	var uLocal_7595 = 0;
	var uLocal_7596 = 3;
	var uLocal_7597 = 500;
	var uLocal_7598 = 10000;
	var uLocal_7599 = 0;
	var uLocal_7600 = 3;
	var uLocal_7601 = 500;
	var uLocal_7602 = 10000;
	var uLocal_7603 = 0;
	var uLocal_7604 = 3;
	var uLocal_7605 = 500;
	var uLocal_7606 = 10000;
	var uLocal_7607 = 0;
	var uLocal_7608 = 3;
	var uLocal_7609 = 500;
	var uLocal_7610 = 10000;
	var uLocal_7611 = 0;
	var uLocal_7612 = 3;
	var uLocal_7613 = 500;
	var uLocal_7614 = 10000;
	var uLocal_7615 = 0;
	var uLocal_7616 = 3;
	var uLocal_7617 = 500;
	var uLocal_7618 = 10000;
	var uLocal_7619 = 0;
	var uLocal_7620 = 3;
	var uLocal_7621 = 500;
	var uLocal_7622 = 10000;
	var uLocal_7623 = 0;
	var uLocal_7624 = 3;
	var uLocal_7625 = 500;
	var uLocal_7626 = 10000;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 3;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = -1;
	var uLocal_7640 = 0;
	var uLocal_7641 = 5;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 10;
	var uLocal_7653 = 3;
	var uLocal_7654 = 500;
	var uLocal_7655 = 10000;
	var uLocal_7656 = 0;
	var uLocal_7657 = 3;
	var uLocal_7658 = 500;
	var uLocal_7659 = 10000;
	var uLocal_7660 = 0;
	var uLocal_7661 = 3;
	var uLocal_7662 = 500;
	var uLocal_7663 = 10000;
	var uLocal_7664 = 0;
	var uLocal_7665 = 3;
	var uLocal_7666 = 500;
	var uLocal_7667 = 10000;
	var uLocal_7668 = 0;
	var uLocal_7669 = 3;
	var uLocal_7670 = 500;
	var uLocal_7671 = 10000;
	var uLocal_7672 = 0;
	var uLocal_7673 = 3;
	var uLocal_7674 = 500;
	var uLocal_7675 = 10000;
	var uLocal_7676 = 0;
	var uLocal_7677 = 3;
	var uLocal_7678 = 500;
	var uLocal_7679 = 10000;
	var uLocal_7680 = 0;
	var uLocal_7681 = 3;
	var uLocal_7682 = 500;
	var uLocal_7683 = 10000;
	var uLocal_7684 = 0;
	var uLocal_7685 = 3;
	var uLocal_7686 = 500;
	var uLocal_7687 = 10000;
	var uLocal_7688 = 0;
	var uLocal_7689 = 3;
	var uLocal_7690 = 500;
	var uLocal_7691 = 10000;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 0;
	var uLocal_7699 = 3;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = 0;
	var uLocal_7704 = -1;
	var uLocal_7705 = 0;
	var uLocal_7706 = 5;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 10;
	var uLocal_7718 = 3;
	var uLocal_7719 = 500;
	var uLocal_7720 = 10000;
	var uLocal_7721 = 0;
	var uLocal_7722 = 3;
	var uLocal_7723 = 500;
	var uLocal_7724 = 10000;
	var uLocal_7725 = 0;
	var uLocal_7726 = 3;
	var uLocal_7727 = 500;
	var uLocal_7728 = 10000;
	var uLocal_7729 = 0;
	var uLocal_7730 = 3;
	var uLocal_7731 = 500;
	var uLocal_7732 = 10000;
	var uLocal_7733 = 0;
	var uLocal_7734 = 3;
	var uLocal_7735 = 500;
	var uLocal_7736 = 10000;
	var uLocal_7737 = 0;
	var uLocal_7738 = 3;
	var uLocal_7739 = 500;
	var uLocal_7740 = 10000;
	var uLocal_7741 = 0;
	var uLocal_7742 = 3;
	var uLocal_7743 = 500;
	var uLocal_7744 = 10000;
	var uLocal_7745 = 0;
	var uLocal_7746 = 3;
	var uLocal_7747 = 500;
	var uLocal_7748 = 10000;
	var uLocal_7749 = 0;
	var uLocal_7750 = 3;
	var uLocal_7751 = 500;
	var uLocal_7752 = 10000;
	var uLocal_7753 = 0;
	var uLocal_7754 = 3;
	var uLocal_7755 = 500;
	var uLocal_7756 = 10000;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 0;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = 3;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = -1;
	var uLocal_7770 = 0;
	var uLocal_7771 = 5;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 10;
	var uLocal_7783 = 3;
	var uLocal_7784 = 500;
	var uLocal_7785 = 10000;
	var uLocal_7786 = 0;
	var uLocal_7787 = 3;
	var uLocal_7788 = 500;
	var uLocal_7789 = 10000;
	var uLocal_7790 = 0;
	var uLocal_7791 = 3;
	var uLocal_7792 = 500;
	var uLocal_7793 = 10000;
	var uLocal_7794 = 0;
	var uLocal_7795 = 3;
	var uLocal_7796 = 500;
	var uLocal_7797 = 10000;
	var uLocal_7798 = 0;
	var uLocal_7799 = 3;
	var uLocal_7800 = 500;
	var uLocal_7801 = 10000;
	var uLocal_7802 = 0;
	var uLocal_7803 = 3;
	var uLocal_7804 = 500;
	var uLocal_7805 = 10000;
	var uLocal_7806 = 0;
	var uLocal_7807 = 3;
	var uLocal_7808 = 500;
	var uLocal_7809 = 10000;
	var uLocal_7810 = 0;
	var uLocal_7811 = 3;
	var uLocal_7812 = 500;
	var uLocal_7813 = 10000;
	var uLocal_7814 = 0;
	var uLocal_7815 = 3;
	var uLocal_7816 = 500;
	var uLocal_7817 = 10000;
	var uLocal_7818 = 0;
	var uLocal_7819 = 3;
	var uLocal_7820 = 500;
	var uLocal_7821 = 10000;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 0;
	var uLocal_7829 = 3;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = 0;
	var uLocal_7833 = 0;
	var uLocal_7834 = -1;
	var uLocal_7835 = 0;
	var uLocal_7836 = 5;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 10;
	var uLocal_7848 = 3;
	var uLocal_7849 = 500;
	var uLocal_7850 = 10000;
	var uLocal_7851 = 0;
	var uLocal_7852 = 3;
	var uLocal_7853 = 500;
	var uLocal_7854 = 10000;
	var uLocal_7855 = 0;
	var uLocal_7856 = 3;
	var uLocal_7857 = 500;
	var uLocal_7858 = 10000;
	var uLocal_7859 = 0;
	var uLocal_7860 = 3;
	var uLocal_7861 = 500;
	var uLocal_7862 = 10000;
	var uLocal_7863 = 0;
	var uLocal_7864 = 3;
	var uLocal_7865 = 500;
	var uLocal_7866 = 10000;
	var uLocal_7867 = 0;
	var uLocal_7868 = 3;
	var uLocal_7869 = 500;
	var uLocal_7870 = 10000;
	var uLocal_7871 = 0;
	var uLocal_7872 = 3;
	var uLocal_7873 = 500;
	var uLocal_7874 = 10000;
	var uLocal_7875 = 0;
	var uLocal_7876 = 3;
	var uLocal_7877 = 500;
	var uLocal_7878 = 10000;
	var uLocal_7879 = 0;
	var uLocal_7880 = 3;
	var uLocal_7881 = 500;
	var uLocal_7882 = 10000;
	var uLocal_7883 = 0;
	var uLocal_7884 = 3;
	var uLocal_7885 = 500;
	var uLocal_7886 = 10000;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 0;
	var uLocal_7890 = 0;
	var uLocal_7891 = 0;
	var uLocal_7892 = 0;
	var uLocal_7893 = 0;
	var uLocal_7894 = 3;
	var uLocal_7895 = 0;
	var uLocal_7896 = 0;
	var uLocal_7897 = 0;
	var uLocal_7898 = 0;
	var uLocal_7899 = -1;
	var uLocal_7900 = 0;
	var uLocal_7901 = 5;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 10;
	var uLocal_7913 = 3;
	var uLocal_7914 = 500;
	var uLocal_7915 = 10000;
	var uLocal_7916 = 0;
	var uLocal_7917 = 3;
	var uLocal_7918 = 500;
	var uLocal_7919 = 10000;
	var uLocal_7920 = 0;
	var uLocal_7921 = 3;
	var uLocal_7922 = 500;
	var uLocal_7923 = 10000;
	var uLocal_7924 = 0;
	var uLocal_7925 = 3;
	var uLocal_7926 = 500;
	var uLocal_7927 = 10000;
	var uLocal_7928 = 0;
	var uLocal_7929 = 3;
	var uLocal_7930 = 500;
	var uLocal_7931 = 10000;
	var uLocal_7932 = 0;
	var uLocal_7933 = 3;
	var uLocal_7934 = 500;
	var uLocal_7935 = 10000;
	var uLocal_7936 = 0;
	var uLocal_7937 = 3;
	var uLocal_7938 = 500;
	var uLocal_7939 = 10000;
	var uLocal_7940 = 0;
	var uLocal_7941 = 3;
	var uLocal_7942 = 500;
	var uLocal_7943 = 10000;
	var uLocal_7944 = 0;
	var uLocal_7945 = 3;
	var uLocal_7946 = 500;
	var uLocal_7947 = 10000;
	var uLocal_7948 = 0;
	var uLocal_7949 = 3;
	var uLocal_7950 = 500;
	var uLocal_7951 = 10000;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 0;
	var uLocal_7959 = 3;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = -1;
	var uLocal_7965 = 0;
	var uLocal_7966 = 5;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 10;
	var uLocal_7978 = 3;
	var uLocal_7979 = 500;
	var uLocal_7980 = 10000;
	var uLocal_7981 = 0;
	var uLocal_7982 = 3;
	var uLocal_7983 = 500;
	var uLocal_7984 = 10000;
	var uLocal_7985 = 0;
	var uLocal_7986 = 3;
	var uLocal_7987 = 500;
	var uLocal_7988 = 10000;
	var uLocal_7989 = 0;
	var uLocal_7990 = 3;
	var uLocal_7991 = 500;
	var uLocal_7992 = 10000;
	var uLocal_7993 = 0;
	var uLocal_7994 = 3;
	var uLocal_7995 = 500;
	var uLocal_7996 = 10000;
	var uLocal_7997 = 0;
	var uLocal_7998 = 3;
	var uLocal_7999 = 500;
	var uLocal_8000 = 10000;
	var uLocal_8001 = 0;
	var uLocal_8002 = 3;
	var uLocal_8003 = 500;
	var uLocal_8004 = 10000;
	var uLocal_8005 = 0;
	var uLocal_8006 = 3;
	var uLocal_8007 = 500;
	var uLocal_8008 = 10000;
	var uLocal_8009 = 0;
	var uLocal_8010 = 3;
	var uLocal_8011 = 500;
	var uLocal_8012 = 10000;
	var uLocal_8013 = 0;
	var uLocal_8014 = 3;
	var uLocal_8015 = 500;
	var uLocal_8016 = 10000;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = 3;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = -1;
	var uLocal_8030 = 0;
	var uLocal_8031 = 5;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 10;
	var uLocal_8043 = 3;
	var uLocal_8044 = 500;
	var uLocal_8045 = 10000;
	var uLocal_8046 = 0;
	var uLocal_8047 = 3;
	var uLocal_8048 = 500;
	var uLocal_8049 = 10000;
	var uLocal_8050 = 0;
	var uLocal_8051 = 3;
	var uLocal_8052 = 500;
	var uLocal_8053 = 10000;
	var uLocal_8054 = 0;
	var uLocal_8055 = 3;
	var uLocal_8056 = 500;
	var uLocal_8057 = 10000;
	var uLocal_8058 = 0;
	var uLocal_8059 = 3;
	var uLocal_8060 = 500;
	var uLocal_8061 = 10000;
	var uLocal_8062 = 0;
	var uLocal_8063 = 3;
	var uLocal_8064 = 500;
	var uLocal_8065 = 10000;
	var uLocal_8066 = 0;
	var uLocal_8067 = 3;
	var uLocal_8068 = 500;
	var uLocal_8069 = 10000;
	var uLocal_8070 = 0;
	var uLocal_8071 = 3;
	var uLocal_8072 = 500;
	var uLocal_8073 = 10000;
	var uLocal_8074 = 0;
	var uLocal_8075 = 3;
	var uLocal_8076 = 500;
	var uLocal_8077 = 10000;
	var uLocal_8078 = 0;
	var uLocal_8079 = 3;
	var uLocal_8080 = 500;
	var uLocal_8081 = 10000;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 3;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = -1;
	var uLocal_8095 = 0;
	var uLocal_8096 = 5;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 10;
	var uLocal_8108 = 3;
	var uLocal_8109 = 500;
	var uLocal_8110 = 10000;
	var uLocal_8111 = 0;
	var uLocal_8112 = 3;
	var uLocal_8113 = 500;
	var uLocal_8114 = 10000;
	var uLocal_8115 = 0;
	var uLocal_8116 = 3;
	var uLocal_8117 = 500;
	var uLocal_8118 = 10000;
	var uLocal_8119 = 0;
	var uLocal_8120 = 3;
	var uLocal_8121 = 500;
	var uLocal_8122 = 10000;
	var uLocal_8123 = 0;
	var uLocal_8124 = 3;
	var uLocal_8125 = 500;
	var uLocal_8126 = 10000;
	var uLocal_8127 = 0;
	var uLocal_8128 = 3;
	var uLocal_8129 = 500;
	var uLocal_8130 = 10000;
	var uLocal_8131 = 0;
	var uLocal_8132 = 3;
	var uLocal_8133 = 500;
	var uLocal_8134 = 10000;
	var uLocal_8135 = 0;
	var uLocal_8136 = 3;
	var uLocal_8137 = 500;
	var uLocal_8138 = 10000;
	var uLocal_8139 = 0;
	var uLocal_8140 = 3;
	var uLocal_8141 = 500;
	var uLocal_8142 = 10000;
	var uLocal_8143 = 0;
	var uLocal_8144 = 3;
	var uLocal_8145 = 500;
	var uLocal_8146 = 10000;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 3;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = -1;
	var uLocal_8160 = 0;
	var uLocal_8161 = 5;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 10;
	var uLocal_8173 = 3;
	var uLocal_8174 = 500;
	var uLocal_8175 = 10000;
	var uLocal_8176 = 0;
	var uLocal_8177 = 3;
	var uLocal_8178 = 500;
	var uLocal_8179 = 10000;
	var uLocal_8180 = 0;
	var uLocal_8181 = 3;
	var uLocal_8182 = 500;
	var uLocal_8183 = 10000;
	var uLocal_8184 = 0;
	var uLocal_8185 = 3;
	var uLocal_8186 = 500;
	var uLocal_8187 = 10000;
	var uLocal_8188 = 0;
	var uLocal_8189 = 3;
	var uLocal_8190 = 500;
	var uLocal_8191 = 10000;
	var uLocal_8192 = 0;
	var uLocal_8193 = 3;
	var uLocal_8194 = 500;
	var uLocal_8195 = 10000;
	var uLocal_8196 = 0;
	var uLocal_8197 = 3;
	var uLocal_8198 = 500;
	var uLocal_8199 = 10000;
	var uLocal_8200 = 0;
	var uLocal_8201 = 3;
	var uLocal_8202 = 500;
	var uLocal_8203 = 10000;
	var uLocal_8204 = 0;
	var uLocal_8205 = 3;
	var uLocal_8206 = 500;
	var uLocal_8207 = 10000;
	var uLocal_8208 = 0;
	var uLocal_8209 = 3;
	var uLocal_8210 = 500;
	var uLocal_8211 = 10000;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 3;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = -1;
	var uLocal_8225 = 0;
	var uLocal_8226 = 5;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 10;
	var uLocal_8238 = 3;
	var uLocal_8239 = 500;
	var uLocal_8240 = 10000;
	var uLocal_8241 = 0;
	var uLocal_8242 = 3;
	var uLocal_8243 = 500;
	var uLocal_8244 = 10000;
	var uLocal_8245 = 0;
	var uLocal_8246 = 3;
	var uLocal_8247 = 500;
	var uLocal_8248 = 10000;
	var uLocal_8249 = 0;
	var uLocal_8250 = 3;
	var uLocal_8251 = 500;
	var uLocal_8252 = 10000;
	var uLocal_8253 = 0;
	var uLocal_8254 = 3;
	var uLocal_8255 = 500;
	var uLocal_8256 = 10000;
	var uLocal_8257 = 0;
	var uLocal_8258 = 3;
	var uLocal_8259 = 500;
	var uLocal_8260 = 10000;
	var uLocal_8261 = 0;
	var uLocal_8262 = 3;
	var uLocal_8263 = 500;
	var uLocal_8264 = 10000;
	var uLocal_8265 = 0;
	var uLocal_8266 = 3;
	var uLocal_8267 = 500;
	var uLocal_8268 = 10000;
	var uLocal_8269 = 0;
	var uLocal_8270 = 3;
	var uLocal_8271 = 500;
	var uLocal_8272 = 10000;
	var uLocal_8273 = 0;
	var uLocal_8274 = 3;
	var uLocal_8275 = 500;
	var uLocal_8276 = 10000;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 3;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = -1;
	var uLocal_8290 = 0;
	var uLocal_8291 = 5;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 10;
	var uLocal_8303 = 3;
	var uLocal_8304 = 500;
	var uLocal_8305 = 10000;
	var uLocal_8306 = 0;
	var uLocal_8307 = 3;
	var uLocal_8308 = 500;
	var uLocal_8309 = 10000;
	var uLocal_8310 = 0;
	var uLocal_8311 = 3;
	var uLocal_8312 = 500;
	var uLocal_8313 = 10000;
	var uLocal_8314 = 0;
	var uLocal_8315 = 3;
	var uLocal_8316 = 500;
	var uLocal_8317 = 10000;
	var uLocal_8318 = 0;
	var uLocal_8319 = 3;
	var uLocal_8320 = 500;
	var uLocal_8321 = 10000;
	var uLocal_8322 = 0;
	var uLocal_8323 = 3;
	var uLocal_8324 = 500;
	var uLocal_8325 = 10000;
	var uLocal_8326 = 0;
	var uLocal_8327 = 3;
	var uLocal_8328 = 500;
	var uLocal_8329 = 10000;
	var uLocal_8330 = 0;
	var uLocal_8331 = 3;
	var uLocal_8332 = 500;
	var uLocal_8333 = 10000;
	var uLocal_8334 = 0;
	var uLocal_8335 = 3;
	var uLocal_8336 = 500;
	var uLocal_8337 = 10000;
	var uLocal_8338 = 0;
	var uLocal_8339 = 3;
	var uLocal_8340 = 500;
	var uLocal_8341 = 10000;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 3;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = -1;
	var uLocal_8355 = 0;
	var uLocal_8356 = 5;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 10;
	var uLocal_8368 = 3;
	var uLocal_8369 = 500;
	var uLocal_8370 = 10000;
	var uLocal_8371 = 0;
	var uLocal_8372 = 3;
	var uLocal_8373 = 500;
	var uLocal_8374 = 10000;
	var uLocal_8375 = 0;
	var uLocal_8376 = 3;
	var uLocal_8377 = 500;
	var uLocal_8378 = 10000;
	var uLocal_8379 = 0;
	var uLocal_8380 = 3;
	var uLocal_8381 = 500;
	var uLocal_8382 = 10000;
	var uLocal_8383 = 0;
	var uLocal_8384 = 3;
	var uLocal_8385 = 500;
	var uLocal_8386 = 10000;
	var uLocal_8387 = 0;
	var uLocal_8388 = 3;
	var uLocal_8389 = 500;
	var uLocal_8390 = 10000;
	var uLocal_8391 = 0;
	var uLocal_8392 = 3;
	var uLocal_8393 = 500;
	var uLocal_8394 = 10000;
	var uLocal_8395 = 0;
	var uLocal_8396 = 3;
	var uLocal_8397 = 500;
	var uLocal_8398 = 10000;
	var uLocal_8399 = 0;
	var uLocal_8400 = 3;
	var uLocal_8401 = 500;
	var uLocal_8402 = 10000;
	var uLocal_8403 = 0;
	var uLocal_8404 = 3;
	var uLocal_8405 = 500;
	var uLocal_8406 = 10000;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = 3;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = -1;
	var uLocal_8420 = 0;
	var uLocal_8421 = 5;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 10;
	var uLocal_8433 = 3;
	var uLocal_8434 = 500;
	var uLocal_8435 = 10000;
	var uLocal_8436 = 0;
	var uLocal_8437 = 3;
	var uLocal_8438 = 500;
	var uLocal_8439 = 10000;
	var uLocal_8440 = 0;
	var uLocal_8441 = 3;
	var uLocal_8442 = 500;
	var uLocal_8443 = 10000;
	var uLocal_8444 = 0;
	var uLocal_8445 = 3;
	var uLocal_8446 = 500;
	var uLocal_8447 = 10000;
	var uLocal_8448 = 0;
	var uLocal_8449 = 3;
	var uLocal_8450 = 500;
	var uLocal_8451 = 10000;
	var uLocal_8452 = 0;
	var uLocal_8453 = 3;
	var uLocal_8454 = 500;
	var uLocal_8455 = 10000;
	var uLocal_8456 = 0;
	var uLocal_8457 = 3;
	var uLocal_8458 = 500;
	var uLocal_8459 = 10000;
	var uLocal_8460 = 0;
	var uLocal_8461 = 3;
	var uLocal_8462 = 500;
	var uLocal_8463 = 10000;
	var uLocal_8464 = 0;
	var uLocal_8465 = 3;
	var uLocal_8466 = 500;
	var uLocal_8467 = 10000;
	var uLocal_8468 = 0;
	var uLocal_8469 = 3;
	var uLocal_8470 = 500;
	var uLocal_8471 = 10000;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 3;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = -1;
	var uLocal_8485 = 0;
	var uLocal_8486 = 5;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 10;
	var uLocal_8498 = 3;
	var uLocal_8499 = 500;
	var uLocal_8500 = 10000;
	var uLocal_8501 = 0;
	var uLocal_8502 = 3;
	var uLocal_8503 = 500;
	var uLocal_8504 = 10000;
	var uLocal_8505 = 0;
	var uLocal_8506 = 3;
	var uLocal_8507 = 500;
	var uLocal_8508 = 10000;
	var uLocal_8509 = 0;
	var uLocal_8510 = 3;
	var uLocal_8511 = 500;
	var uLocal_8512 = 10000;
	var uLocal_8513 = 0;
	var uLocal_8514 = 3;
	var uLocal_8515 = 500;
	var uLocal_8516 = 10000;
	var uLocal_8517 = 0;
	var uLocal_8518 = 3;
	var uLocal_8519 = 500;
	var uLocal_8520 = 10000;
	var uLocal_8521 = 0;
	var uLocal_8522 = 3;
	var uLocal_8523 = 500;
	var uLocal_8524 = 10000;
	var uLocal_8525 = 0;
	var uLocal_8526 = 3;
	var uLocal_8527 = 500;
	var uLocal_8528 = 10000;
	var uLocal_8529 = 0;
	var uLocal_8530 = 3;
	var uLocal_8531 = 500;
	var uLocal_8532 = 10000;
	var uLocal_8533 = 0;
	var uLocal_8534 = 3;
	var uLocal_8535 = 500;
	var uLocal_8536 = 10000;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 3;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = -1;
	var uLocal_8550 = 0;
	var uLocal_8551 = 5;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 10;
	var uLocal_8563 = 3;
	var uLocal_8564 = 500;
	var uLocal_8565 = 10000;
	var uLocal_8566 = 0;
	var uLocal_8567 = 3;
	var uLocal_8568 = 500;
	var uLocal_8569 = 10000;
	var uLocal_8570 = 0;
	var uLocal_8571 = 3;
	var uLocal_8572 = 500;
	var uLocal_8573 = 10000;
	var uLocal_8574 = 0;
	var uLocal_8575 = 3;
	var uLocal_8576 = 500;
	var uLocal_8577 = 10000;
	var uLocal_8578 = 0;
	var uLocal_8579 = 3;
	var uLocal_8580 = 500;
	var uLocal_8581 = 10000;
	var uLocal_8582 = 0;
	var uLocal_8583 = 3;
	var uLocal_8584 = 500;
	var uLocal_8585 = 10000;
	var uLocal_8586 = 0;
	var uLocal_8587 = 3;
	var uLocal_8588 = 500;
	var uLocal_8589 = 10000;
	var uLocal_8590 = 0;
	var uLocal_8591 = 3;
	var uLocal_8592 = 500;
	var uLocal_8593 = 10000;
	var uLocal_8594 = 0;
	var uLocal_8595 = 3;
	var uLocal_8596 = 500;
	var uLocal_8597 = 10000;
	var uLocal_8598 = 0;
	var uLocal_8599 = 3;
	var uLocal_8600 = 500;
	var uLocal_8601 = 10000;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 3;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = -1;
	var uLocal_8615 = 0;
	var uLocal_8616 = 5;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 10;
	var uLocal_8628 = 3;
	var uLocal_8629 = 500;
	var uLocal_8630 = 10000;
	var uLocal_8631 = 0;
	var uLocal_8632 = 3;
	var uLocal_8633 = 500;
	var uLocal_8634 = 10000;
	var uLocal_8635 = 0;
	var uLocal_8636 = 3;
	var uLocal_8637 = 500;
	var uLocal_8638 = 10000;
	var uLocal_8639 = 0;
	var uLocal_8640 = 3;
	var uLocal_8641 = 500;
	var uLocal_8642 = 10000;
	var uLocal_8643 = 0;
	var uLocal_8644 = 3;
	var uLocal_8645 = 500;
	var uLocal_8646 = 10000;
	var uLocal_8647 = 0;
	var uLocal_8648 = 3;
	var uLocal_8649 = 500;
	var uLocal_8650 = 10000;
	var uLocal_8651 = 0;
	var uLocal_8652 = 3;
	var uLocal_8653 = 500;
	var uLocal_8654 = 10000;
	var uLocal_8655 = 0;
	var uLocal_8656 = 3;
	var uLocal_8657 = 500;
	var uLocal_8658 = 10000;
	var uLocal_8659 = 0;
	var uLocal_8660 = 3;
	var uLocal_8661 = 500;
	var uLocal_8662 = 10000;
	var uLocal_8663 = 0;
	var uLocal_8664 = 3;
	var uLocal_8665 = 500;
	var uLocal_8666 = 10000;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = 3;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = -1;
	var uLocal_8680 = 0;
	var uLocal_8681 = 5;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 10;
	var uLocal_8693 = 3;
	var uLocal_8694 = 500;
	var uLocal_8695 = 10000;
	var uLocal_8696 = 0;
	var uLocal_8697 = 3;
	var uLocal_8698 = 500;
	var uLocal_8699 = 10000;
	var uLocal_8700 = 0;
	var uLocal_8701 = 3;
	var uLocal_8702 = 500;
	var uLocal_8703 = 10000;
	var uLocal_8704 = 0;
	var uLocal_8705 = 3;
	var uLocal_8706 = 500;
	var uLocal_8707 = 10000;
	var uLocal_8708 = 0;
	var uLocal_8709 = 3;
	var uLocal_8710 = 500;
	var uLocal_8711 = 10000;
	var uLocal_8712 = 0;
	var uLocal_8713 = 3;
	var uLocal_8714 = 500;
	var uLocal_8715 = 10000;
	var uLocal_8716 = 0;
	var uLocal_8717 = 3;
	var uLocal_8718 = 500;
	var uLocal_8719 = 10000;
	var uLocal_8720 = 0;
	var uLocal_8721 = 3;
	var uLocal_8722 = 500;
	var uLocal_8723 = 10000;
	var uLocal_8724 = 0;
	var uLocal_8725 = 3;
	var uLocal_8726 = 500;
	var uLocal_8727 = 10000;
	var uLocal_8728 = 0;
	var uLocal_8729 = 3;
	var uLocal_8730 = 500;
	var uLocal_8731 = 10000;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = 3;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = -1;
	var uLocal_8745 = 0;
	var uLocal_8746 = 5;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 10;
	var uLocal_8758 = 3;
	var uLocal_8759 = 500;
	var uLocal_8760 = 10000;
	var uLocal_8761 = 0;
	var uLocal_8762 = 3;
	var uLocal_8763 = 500;
	var uLocal_8764 = 10000;
	var uLocal_8765 = 0;
	var uLocal_8766 = 3;
	var uLocal_8767 = 500;
	var uLocal_8768 = 10000;
	var uLocal_8769 = 0;
	var uLocal_8770 = 3;
	var uLocal_8771 = 500;
	var uLocal_8772 = 10000;
	var uLocal_8773 = 0;
	var uLocal_8774 = 3;
	var uLocal_8775 = 500;
	var uLocal_8776 = 10000;
	var uLocal_8777 = 0;
	var uLocal_8778 = 3;
	var uLocal_8779 = 500;
	var uLocal_8780 = 10000;
	var uLocal_8781 = 0;
	var uLocal_8782 = 3;
	var uLocal_8783 = 500;
	var uLocal_8784 = 10000;
	var uLocal_8785 = 0;
	var uLocal_8786 = 3;
	var uLocal_8787 = 500;
	var uLocal_8788 = 10000;
	var uLocal_8789 = 0;
	var uLocal_8790 = 3;
	var uLocal_8791 = 500;
	var uLocal_8792 = 10000;
	var uLocal_8793 = 0;
	var uLocal_8794 = 3;
	var uLocal_8795 = 500;
	var uLocal_8796 = 10000;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 3;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = -1;
	var uLocal_8810 = 0;
	var uLocal_8811 = 5;
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
	var uLocal_8822 = 10;
	var uLocal_8823 = 3;
	var uLocal_8824 = 500;
	var uLocal_8825 = 10000;
	var uLocal_8826 = 0;
	var uLocal_8827 = 3;
	var uLocal_8828 = 500;
	var uLocal_8829 = 10000;
	var uLocal_8830 = 0;
	var uLocal_8831 = 3;
	var uLocal_8832 = 500;
	var uLocal_8833 = 10000;
	var uLocal_8834 = 0;
	var uLocal_8835 = 3;
	var uLocal_8836 = 500;
	var uLocal_8837 = 10000;
	var uLocal_8838 = 0;
	var uLocal_8839 = 3;
	var uLocal_8840 = 500;
	var uLocal_8841 = 10000;
	var uLocal_8842 = 0;
	var uLocal_8843 = 3;
	var uLocal_8844 = 500;
	var uLocal_8845 = 10000;
	var uLocal_8846 = 0;
	var uLocal_8847 = 3;
	var uLocal_8848 = 500;
	var uLocal_8849 = 10000;
	var uLocal_8850 = 0;
	var uLocal_8851 = 3;
	var uLocal_8852 = 500;
	var uLocal_8853 = 10000;
	var uLocal_8854 = 0;
	var uLocal_8855 = 3;
	var uLocal_8856 = 500;
	var uLocal_8857 = 10000;
	var uLocal_8858 = 0;
	var uLocal_8859 = 3;
	var uLocal_8860 = 500;
	var uLocal_8861 = 10000;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 1;
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
	var uLocal_8878 = 65;
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
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
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
	var uLocal_9599 = 0;
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
	var uLocal_9659 = 1097859072;
	var uLocal_9660 = 1101004800;
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
	var uLocal_9671 = 0;
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
	var uLocal_9687 = 4;
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
	var uLocal_9759 = 40;
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
	var uLocal_10312 = 0;
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
	var uLocal_10400 = 40;
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
	var uLocal_10953 = 0;
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
	var uLocal_11041 = 60;
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
	var uLocal_11914 = 0;
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
	var uLocal_12002 = 15;
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
	var uLocal_12155 = 0;
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
	var uLocal_12185 = 0;
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
	var uLocal_12197 = 0;
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
	var uLocal_12208 = 0;
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
	var uLocal_12221 = 0;
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
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = 10;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
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
	var uLocal_12260 = 0;
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
	var uLocal_12273 = -1;
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
	var uLocal_12285 = 65;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = -1569615261;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = -1569615261;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = -1569615261;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = 0;
	var uLocal_12335 = -1569615261;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 0;
	var uLocal_12348 = -1569615261;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 0;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = -1569615261;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = 0;
	var uLocal_12374 = -1569615261;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 0;
	var uLocal_12387 = -1569615261;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = -1569615261;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = -1569615261;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = 0;
	var uLocal_12426 = -1569615261;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = 0;
	var uLocal_12439 = -1569615261;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = 0;
	var uLocal_12452 = -1569615261;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = 0;
	var uLocal_12465 = -1569615261;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = 0;
	var uLocal_12478 = -1569615261;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 0;
	var uLocal_12491 = -1569615261;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = -1569615261;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = 0;
	var uLocal_12517 = -1569615261;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = -1569615261;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = 0;
	var uLocal_12543 = -1569615261;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = -1569615261;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = 0;
	var uLocal_12569 = -1569615261;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 0;
	var uLocal_12582 = -1569615261;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = -1569615261;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = 0;
	var uLocal_12608 = -1569615261;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 0;
	var uLocal_12621 = -1569615261;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = -1569615261;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = -1569615261;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = -1569615261;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = 0;
	var uLocal_12673 = -1569615261;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = -1569615261;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = 0;
	var uLocal_12699 = -1569615261;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = 0;
	var uLocal_12712 = -1569615261;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = -1569615261;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = -1569615261;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = -1569615261;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = -1569615261;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = -1569615261;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = -1569615261;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 0;
	var uLocal_12803 = -1569615261;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = -1569615261;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = -1569615261;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = -1569615261;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = -1569615261;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = -1569615261;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = 0;
	var uLocal_12881 = -1569615261;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = -1569615261;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = -1569615261;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = -1569615261;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = -1569615261;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = -1569615261;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = -1569615261;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = -1569615261;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = -1569615261;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = -1569615261;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = -1569615261;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = -1569615261;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = -1569615261;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = -1569615261;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = 0;
	var uLocal_13063 = -1569615261;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = -1569615261;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = -1569615261;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = 0;
	var uLocal_13097 = 0;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = -1569615261;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = 0;
	var uLocal_13115 = -1569615261;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = -1569615261;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 1;
	var uLocal_13147 = 30;
	var uLocal_13148 = -1;
	var uLocal_13149 = 0;
	var uLocal_13150 = 1;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 1065353216;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 1065353216;
	var uLocal_13164 = 1;
	var uLocal_13165 = 0;
	var uLocal_13166 = -1;
	var uLocal_13167 = 0;
	var uLocal_13168 = 1;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 1065353216;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 1065353216;
	var uLocal_13182 = 1;
	var uLocal_13183 = 0;
	var uLocal_13184 = -1;
	var uLocal_13185 = 0;
	var uLocal_13186 = 1;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 1065353216;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 1065353216;
	var uLocal_13200 = 1;
	var uLocal_13201 = 0;
	var uLocal_13202 = -1;
	var uLocal_13203 = 0;
	var uLocal_13204 = 1;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 1065353216;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 1065353216;
	var uLocal_13218 = 1;
	var uLocal_13219 = 0;
	var uLocal_13220 = -1;
	var uLocal_13221 = 0;
	var uLocal_13222 = 1;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 1065353216;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 1065353216;
	var uLocal_13236 = 1;
	var uLocal_13237 = 0;
	var uLocal_13238 = -1;
	var uLocal_13239 = 0;
	var uLocal_13240 = 1;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 1065353216;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 1065353216;
	var uLocal_13254 = 1;
	var uLocal_13255 = 0;
	var uLocal_13256 = -1;
	var uLocal_13257 = 0;
	var uLocal_13258 = 1;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 1065353216;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 1065353216;
	var uLocal_13272 = 1;
	var uLocal_13273 = 0;
	var uLocal_13274 = -1;
	var uLocal_13275 = 0;
	var uLocal_13276 = 1;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 1065353216;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 1065353216;
	var uLocal_13290 = 1;
	var uLocal_13291 = 0;
	var uLocal_13292 = -1;
	var uLocal_13293 = 0;
	var uLocal_13294 = 1;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 1065353216;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 1065353216;
	var uLocal_13308 = 1;
	var uLocal_13309 = 0;
	var uLocal_13310 = -1;
	var uLocal_13311 = 0;
	var uLocal_13312 = 1;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 1065353216;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 1065353216;
	var uLocal_13326 = 1;
	var uLocal_13327 = 0;
	var uLocal_13328 = -1;
	var uLocal_13329 = 0;
	var uLocal_13330 = 1;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 1065353216;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 1065353216;
	var uLocal_13344 = 1;
	var uLocal_13345 = 0;
	var uLocal_13346 = -1;
	var uLocal_13347 = 0;
	var uLocal_13348 = 1;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 1065353216;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 1065353216;
	var uLocal_13362 = 1;
	var uLocal_13363 = 0;
	var uLocal_13364 = -1;
	var uLocal_13365 = 0;
	var uLocal_13366 = 1;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 1065353216;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 1065353216;
	var uLocal_13380 = 1;
	var uLocal_13381 = 0;
	var uLocal_13382 = -1;
	var uLocal_13383 = 0;
	var uLocal_13384 = 1;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 1065353216;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 1065353216;
	var uLocal_13398 = 1;
	var uLocal_13399 = 0;
	var uLocal_13400 = -1;
	var uLocal_13401 = 0;
	var uLocal_13402 = 1;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 1065353216;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 1065353216;
	var uLocal_13416 = 1;
	var uLocal_13417 = 0;
	var uLocal_13418 = -1;
	var uLocal_13419 = 0;
	var uLocal_13420 = 1;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 1065353216;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 1065353216;
	var uLocal_13434 = 1;
	var uLocal_13435 = 0;
	var uLocal_13436 = -1;
	var uLocal_13437 = 0;
	var uLocal_13438 = 1;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 1065353216;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 1065353216;
	var uLocal_13452 = 1;
	var uLocal_13453 = 0;
	var uLocal_13454 = -1;
	var uLocal_13455 = 0;
	var uLocal_13456 = 1;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 1065353216;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 1065353216;
	var uLocal_13470 = 1;
	var uLocal_13471 = 0;
	var uLocal_13472 = -1;
	var uLocal_13473 = 0;
	var uLocal_13474 = 1;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 1065353216;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 1065353216;
	var uLocal_13488 = 1;
	var uLocal_13489 = 0;
	var uLocal_13490 = -1;
	var uLocal_13491 = 0;
	var uLocal_13492 = 1;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 1065353216;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 1065353216;
	var uLocal_13506 = 1;
	var uLocal_13507 = 0;
	var uLocal_13508 = -1;
	var uLocal_13509 = 0;
	var uLocal_13510 = 1;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 1065353216;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 1065353216;
	var uLocal_13524 = 1;
	var uLocal_13525 = 0;
	var uLocal_13526 = -1;
	var uLocal_13527 = 0;
	var uLocal_13528 = 1;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 1065353216;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 1065353216;
	var uLocal_13542 = 1;
	var uLocal_13543 = 0;
	var uLocal_13544 = -1;
	var uLocal_13545 = 0;
	var uLocal_13546 = 1;
	var uLocal_13547 = 0;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 1065353216;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 1065353216;
	var uLocal_13560 = 1;
	var uLocal_13561 = 0;
	var uLocal_13562 = -1;
	var uLocal_13563 = 0;
	var uLocal_13564 = 1;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 1065353216;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 1065353216;
	var uLocal_13578 = 1;
	var uLocal_13579 = 0;
	var uLocal_13580 = -1;
	var uLocal_13581 = 0;
	var uLocal_13582 = 1;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 1065353216;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 1065353216;
	var uLocal_13596 = 1;
	var uLocal_13597 = 0;
	var uLocal_13598 = -1;
	var uLocal_13599 = 0;
	var uLocal_13600 = 1;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 1065353216;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 1065353216;
	var uLocal_13614 = 1;
	var uLocal_13615 = 0;
	var uLocal_13616 = -1;
	var uLocal_13617 = 0;
	var uLocal_13618 = 1;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 1065353216;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 1065353216;
	var uLocal_13632 = 1;
	var uLocal_13633 = 0;
	var uLocal_13634 = -1;
	var uLocal_13635 = 0;
	var uLocal_13636 = 1;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 1065353216;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 1065353216;
	var uLocal_13650 = 1;
	var uLocal_13651 = 0;
	var uLocal_13652 = -1;
	var uLocal_13653 = 0;
	var uLocal_13654 = 1;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 1065353216;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 1065353216;
	var uLocal_13668 = 1;
	var uLocal_13669 = 0;
	var uLocal_13670 = -1;
	var uLocal_13671 = 0;
	var uLocal_13672 = 1;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 1065353216;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 1065353216;
	var uLocal_13686 = 1;
	var uLocal_13687 = 0;
	var uLocal_13688 = 8;
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
	var uLocal_13929 = 0;
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
	var uLocal_13950 = 0;
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
	var uLocal_13972 = 0;
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
	var uLocal_13994 = 0;
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
	var uLocal_14016 = 0;
	var uLocal_14017 = 8;
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
	var uLocal_14106 = 0;
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
	var uLocal_14126 = -1;
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
	var uLocal_14148 = -1;
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
	var uLocal_14170 = -1;
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
	var uLocal_14192 = -1;
	var uLocal_14193 = 0;
	var uLocal_14194 = 11;
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
	var uLocal_14217 = 0;
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
	var uLocal_14252 = 0;
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
	var uLocal_14269 = 0;
	var uLocal_14270 = 0;
	var uLocal_14271 = 0;
	var uLocal_14272 = 0;
	var uLocal_14273 = 0;
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
	var uLocal_14305 = 2;
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
	var uLocal_14340 = 2;
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
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = -1;
	var uLocal_14358 = 0;
	var uLocal_14359 = 0;
	var uLocal_14360 = -1;
	var uLocal_14361 = -1082130432;
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
	var uLocal_14443 = 24;
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
	var uLocal_14479 = 0;
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
	var uLocal_14506 = 0;
	var uLocal_14507 = 0;
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
	var uLocal_14535 = 0;
	var uLocal_14536 = 0;
	var uLocal_14537 = 0;
	var uLocal_14538 = 0;
	var uLocal_14539 = 0;
	var uLocal_14540 = 0;
	var uLocal_14541 = 0;
	var uLocal_14542 = 0;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = 0;
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
	var uLocal_14567 = -1;
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
	var uLocal_14581 = 0;
	var uLocal_14582 = 0;
	var uLocal_14583 = 0;
	var uLocal_14584 = 0;
	var uLocal_14585 = 0;
	var uLocal_14586 = 0;
	var uLocal_14587 = 0;
	var uLocal_14588 = 0;
	var uLocal_14589 = 0;
	var uLocal_14590 = 0;
	var uLocal_14591 = 0;
	var uLocal_14592 = 0;
	var uLocal_14593 = 0;
	var uLocal_14594 = -1;
	var uLocal_14595 = 20;
	var uLocal_14596 = 0;
	var uLocal_14597 = 0;
	var uLocal_14598 = 0;
	var uLocal_14599 = 0;
	var uLocal_14600 = 0;
	var uLocal_14601 = 0;
	var uLocal_14602 = 0;
	var uLocal_14603 = 0;
	var uLocal_14604 = 0;
	var uLocal_14605 = 0;
	var uLocal_14606 = 0;
	var uLocal_14607 = 0;
	var uLocal_14608 = 0;
	var uLocal_14609 = 0;
	var uLocal_14610 = 0;
	var uLocal_14611 = 0;
	var uLocal_14612 = 0;
	var uLocal_14613 = 0;
	var uLocal_14614 = 0;
	var uLocal_14615 = 0;
	var uLocal_14616 = 0;
	var uLocal_14617 = 0;
	var uLocal_14618 = 0;
	var uLocal_14619 = 0;
	var uLocal_14620 = 0;
	var uLocal_14621 = 0;
	var uLocal_14622 = 0;
	var uLocal_14623 = 1028443341;
	var uLocal_14624 = 1038174126;
	var uLocal_14625 = 1065353216;
	var uLocal_14626 = 1065353216;
	var uLocal_14627 = 1086324736;
	var uLocal_14628 = 1082130432;
	var uLocal_14629 = 1073741824;
	var uLocal_14630 = 1065353216;
	var uLocal_14631 = 1108082688;
	var uLocal_14632 = 1108082688;
	var uLocal_14633 = 3000;
	var uLocal_14634 = 1092616192;
	var uLocal_14635 = 0;
	var uLocal_14636 = 0;
	var uLocal_14637 = 0;
	var uLocal_14638 = 0;
	var uLocal_14639 = 0;
	var uLocal_14640 = 0;
	var uLocal_14641 = 0;
	var uLocal_14642 = 0;
	var uLocal_14643 = 0;
	var uLocal_14644 = 0;
	var uLocal_14645 = 0;
	var uLocal_14646 = 0;
	var uLocal_14647 = 0;
	var uLocal_14648 = 0;
	var uLocal_14649 = 0;
	var uLocal_14650 = 0;
	var uLocal_14651 = 0;
	var uLocal_14652 = 0;
	var uLocal_14653 = 0;
	var uLocal_14654 = 0;
	var uLocal_14655 = 0;
	var uLocal_14656 = 0;
	var uLocal_14657 = 0;
	var uLocal_14658 = 0;
	var uLocal_14659 = 0;
	var uLocal_14660 = 0;
	var uLocal_14661 = 0;
	var uLocal_14662 = 0;
	var uLocal_14663 = 0;
	var uLocal_14664 = 0;
	var uLocal_14665 = 0;
	var uLocal_14666 = 0;
	var uLocal_14667 = 0;
	var uLocal_14668 = 0;
	var uLocal_14669 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_131 = -1679307491;
	fLocal_774 = 1f;
	StringCopy(&cLocal_1166, "DRUNK_SHAKE", 16);
	iLocal_1177 = -1;
	fLocal_1226 = 0.5f;
	fLocal_1227 = 0.5f;
	fLocal_1228 = 0.5f;
	fLocal_1256 = 0f;
	fLocal_1257 = 0.5f;
	fLocal_1258 = 0.5f;
	fLocal_1259 = 0.5f;
	fLocal_1260 = 0f;
	iLocal_1301 = 33;
	iLocal_1302 = joaat("BAIT_BAG");
	iLocal_1306 = -1;
	iLocal_1326 = 8225;
	vLocal_1328 = { -1210.37f, -712.323f, 72.118f };
	vLocal_1331 = { 42f, -18f, 198f };
	vLocal_1334 = { 4.5f, 10f, 4.5f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_4__::func_935(&uLocal_1490, 1073741824 /* Float: 2f */);
		func_2(&uLocal_1490, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_1490);
	func_5(&uLocal_1490);
	while (!__LIB_4__::func_936(&uLocal_1490, -2147483648))
	{
		func_7(&uLocal_1490);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_1490, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	if (__LIB_4__::func_937(uParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(uParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_281(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_716(1);
		__LIB_0__::func_722(1, 0);
		__LIB_5__::func_324(uParam0, 1);
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
		if (!__LIB_4__::func_936(uParam0, 1048576))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_1__::func_965(0);
			}
			else if (__LIB_4__::func_938(uParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (__LIB_4__::func_938(uParam0) == 1 || __LIB_4__::func_938(uParam0) == 2)
					{
						if (__LIB_4__::func_505(&(uParam0->f_8269)) && __LIB_4__::func_506(&(uParam0->f_8269)))
						{
							__LIB_1__::func_582(0, &(uParam0->f_8269.f_1282));
						}
					}
					if (!__LIB_0__::func_899(&(uParam0->f_13118)))
					{
						__LIB_4__::func_89(&(uParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						__LIB_4__::func_935(uParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && __LIB_4__::func_936(uParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !__LIB_11__::func_55(uParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_4__::func_936(uParam0, 80))
						{
							if (!bVar1)
							{
								__LIB_5__::func_380(uParam0);
							}
							return false;
						}
						if (__LIB_4__::func_936(uParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (__LIB_4__::func_938(uParam0) == 2)
						{
							if (uParam0->f_13104 == -1)
							{
								if (__LIB_0__::func_0(uParam0))
								{
									uParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((uParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > uParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (__LIB_4__::func_938(uParam0) == 1)
						{
							if (__LIB_11__::func_55(uParam0, bVar1))
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
			else if (__LIB_4__::func_936(uParam0, 2))
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
			if (!__LIB_4__::func_678() && __LIB_4__::func_938(uParam0) != 0)
			{
				__LIB_5__::func_599(uParam0, func_34(__LIB_4__::func_939(uParam0)), func_34(__LIB_5__::func_475(uParam0)), __LIB_4__::func_939(uParam0), __LIB_5__::func_475(uParam0));
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_7375.f_804);
		}
	}
	__LIB_4__::func_935(uParam0, 1048576);
	if (!__LIB_4__::func_936(uParam0, 2097152))
	{
		if (!func_9(uParam0))
		{
			return false;
		}
		__LIB_4__::func_935(uParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	__LIB_5__::func_325(&(uParam0->f_8269));
	if (__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		__LIB_4__::func_507(&(uParam0->f_8269));
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
	if (!__LIB_4__::func_936(uParam0, 8))
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
	__LIB_4__::func_940(uParam0);
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
	if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
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
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		__LIB_5__::func_328(uParam0);
	}
	__LIB_11__::func_836(uParam0, 0, !bVar2, bVar2);
	__LIB_5__::func_595(uParam0, !bVar2);
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	__LIB_4__::func_509(0);
	__LIB_5__::func_329(__LIB_4__::func_941(uParam0));
	__LIB_5__::func_330(__LIB_4__::func_941(uParam0));
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_11(__LIB_4__::func_938(uParam0));
	__LIB_5__::func_22(uParam0);
	if (!bVar2)
	{
		__LIB_0__::func_722(1, 0);
	}
	if (__LIB_4__::func_938(uParam0) != 1)
	{
		__LIB_5__::func_101(0, &(uParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	__LIB_1__::func_978(1);
	__LIB_1__::func_564(0);
	__LIB_0__::func_8(&Global_1935630, 2097152);
	__LIB_1__::func_723(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_5__::func_370(Global_1835011[uParam0->f_607 /*74*/].f_1);
	}
	__LIB_5__::func_102();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (__LIB_4__::func_938(uParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !__LIB_4__::func_936(uParam0, 4)) && !__LIB_4__::func_936(uParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(uParam0);
				__LIB_5__::func_503(uParam0);
				__LIB_0__::func_297();
				__LIB_5__::func_496(__LIB_0__::func_12(), 0);
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_5__::func_126(uParam0->f_607);
				bVar3 = __LIB_0__::func_513();
				if (!__LIB_0__::func_13(32768))
				{
					func_83(__LIB_3__::func_918(uParam0->f_607), !__LIB_4__::func_936(uParam0, 128), 1, bVar3, 1);
				}
				else
				{
					__LIB_1__::func_809(__LIB_3__::func_918(uParam0->f_607), bVar3);
				}
				__LIB_5__::func_324(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_5__::func_104(uParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_86();
					__LIB_1__::func_141(0);
				}
				else if (__LIB_4__::func_936(uParam0, 2))
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
				__LIB_1__::func_645(__LIB_3__::func_918(uParam0->f_607));
				__LIB_8__::func_760();
				if (__LIB_4__::func_938(uParam0) == 2)
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
				__LIB_8__::func_760();
				Var4 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
				break;
			default:
				func_83(__LIB_3__::func_918(uParam0->f_607), 1, 1, 0, 1);
				__LIB_1__::func_140();
				break;
		}
		if (__LIB_4__::func_938(uParam0) != 0)
		{
			Var6 = { __LIB_4__::func_943(uParam0) };
			__LIB_5__::func_117(__LIB_3__::func_918(uParam0->f_607), __LIB_4__::func_938(uParam0), &Var6, 0, 0, __LIB_4__::func_936(uParam0, 64));
		}
	}
	__LIB_4__::func_510(1);
	__LIB_5__::func_384(3);
	__LIB_4__::func_944(uParam0, 4096);
	return true;
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::_0xED9582B3DA8F02B4(20);
	uParam1->f_608 = uParam0->f_1;
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
	__LIB_5__::func_587(uParam1);
	if (!__LIB_0__::func_2() == 0)
	{
		if (__LIB_5__::func_23(uParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < uParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(uParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
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
		__LIB_4__::func_945(uParam1, 4194304);
	}
	if (__LIB_4__::func_512())
	{
		__LIB_4__::func_945(uParam1, 8388608);
	}
	if (__LIB_5__::func_371())
	{
		if (!__LIB_4__::func_512() && !__LIB_4__::func_511())
		{
			__LIB_4__::func_945(uParam1, 4);
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
		__LIB_4__::func_946(uParam1, __LIB_4__::func_513());
	}
	func_108(uParam1, uParam0);
	func_109(uParam1);
	if (uParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((uParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(var uParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	cVar0 = __LIB_0__::func_631(uParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (uParam0->f_607 != 77)
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
	__LIB_0__::func_267(__LIB_4__::func_947(uParam0));
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
	__LIB_4__::func_514(uParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630.f_12)
	{
		__LIB_0__::func_145(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!__LIB_4__::func_948(uParam0, 16384) && (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2) || __LIB_5__::func_371()))
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
				if (!__LIB_5__::func_371() && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
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
		func_123(uParam0);
	}
	__LIB_1__::func_564(1);
	__LIB_1__::func_600(0);
	__LIB_4__::func_949(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_88 = __LIB_4__::func_950(uParam0);
	iLocal_88 = iLocal_88;
	if (!Global_1935630.f_12)
	{
		if (!__LIB_5__::func_371())
		{
			Var2 = { func_34(__LIB_4__::func_939(uParam0)) };
			if (__LIB_4__::func_939(uParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(uParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				__LIB_4__::func_945(uParam0, 1048576);
			}
			__LIB_4__::func_946(uParam0, 0);
			if (__LIB_4__::func_951(uParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_11__::func_58(uParam0, __LIB_1__::func_469(uParam0->f_607), 0);
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
			__LIB_4__::func_946(uParam0, __LIB_4__::func_513());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[uParam0->f_607 /*74*/].f_8), 0, __LIB_5__::func_24(__LIB_4__::func_939(uParam0)), __LIB_5__::func_371());
	}
	__LIB_5__::func_332(uParam0);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 0);
	if (!__LIB_5__::func_278(uParam0, __LIB_4__::func_939(uParam0)))
	{
		__LIB_4__::func_946(uParam0, 0);
	}
	__LIB_5__::func_333(uParam0);
	func_138(uParam0);
	func_139(uParam0);
	__LIB_4__::func_945(uParam0, 2097152);
	__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	if (__LIB_0__::func_13(32768))
	{
		__LIB_4__::func_935(uParam0, 4);
	}
	__LIB_11__::func_846(uParam0);
	__LIB_8__::func_935(uParam0, __LIB_4__::func_939(uParam0));
	__LIB_5__::func_105(__LIB_4__::func_941(uParam0));
	if (!__LIB_4__::func_948(uParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_4__::func_941(uParam0));
	}
	__LIB_5__::func_106(uParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_5__::func_25(uParam0);
	__LIB_11__::func_60(uParam0);
	__LIB_0__::func_11(uParam0);
	__LIB_5__::func_26(uParam0, 30f);
	__LIB_5__::func_27(uParam0, 40f);
	__LIB_8__::func_806(uParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_4__::func_510(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	__LIB_1__::func_723(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (uParam0->f_607 != 77)
	{
		cVar6 = __LIB_0__::func_631(uParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

void func_7(var uParam0)
{
	var uVar0;
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16384))
	{
		__LIB_4__::func_515();
	}
	if (!__LIB_4__::func_937(uParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!__LIB_4__::func_937(uParam0, 2048))
	{
		__LIB_4__::func_516(1, 0);
	}
	switch (__LIB_0__::func_81(uParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				__LIB_4__::func_945(uParam0, 64);
			}
			func_156(uParam0, 0);
			func_157(uParam0);
			if (func_158(uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_4__::func_953(uParam0)) && __LIB_4__::func_951(uParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_4__::func_953(uParam0), false);
				}
				__LIB_0__::func_19(uParam0, 1);
			}
			if (__LIB_4__::func_936(uParam0, -2147483648))
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 1:
			if (func_161(uParam0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 2);
			}
			func_156(uParam0, __LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) > 4);
			break;
		case 2:
			if (func_2(uParam0, 0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (__LIB_0__::func_81(uParam0) < 2)
	{
	}
}

bool func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_163(0);
	func_164(0);
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	}
	if (func_165(152))
	{
		func_166();
	}
	if (func_165(27))
	{
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	}
	if (CAM::_0x927B810E43E99932(&Local_1202))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_1202);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_1202))
	{
		CAM::_0x798BE43C9393632B(&Local_1202);
	}
	func_167(0);
	func_168(0);
	func_169(1);
	func_170(0);
	func_171(1);
	func_172(0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_173(iVar0, 0);
		iVar0++;
	}
	func_174(0);
	if (PED::DOES_GROUP_EXIST(iLocal_1179))
	{
		PED::REMOVE_GROUP(iLocal_1179);
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	CAM::_0x2412216FCC7B4E3E("script@Story@DST3@return_to_camp");
	VEHICLE::SET_RANDOM_TRAINS(true);
	STREAMING::END_SRL();
	__LIB_0__::func_92(1);
	if (!__LIB_4__::func_938(uParam0) == 0)
	{
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
		HUD::_DISPLAY_HUD_COMPONENT(iLocal_131);
	}
	else
	{
		__LIB_4__::func_935(uParam0, 8);
	}
	ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 1);
	PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	func_176(108);
	func_167(0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 0, true);
	func_177();
	__LIB_4__::func_509(0);
	func_178();
	func_179(1);
	func_180(uParam0, 1);
	__LIB_0__::func_105(1);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_2__::func_348();
	func_182();
	func_183();
	func_184(uParam0, 0, 55, func_165(5));
	if (__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_CARRIABLE")))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
		}
		if (ENTITY::IS_ENTITY_ATTACHED(Global_35))
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				ENTITY::DETACH_ENTITY(Global_35, true, true);
			}
		}
		PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 100f, 1, 1);
	}
	iVar1 = 0;
	while (iVar1 < Local_1307)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_1307[iVar1 /*8*/].f_7) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1307[iVar1 /*8*/].f_7)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1307[iVar1 /*8*/].f_7, true))
		{
			VEHICLE::DELETE_MISSION_TRAIN(&(Local_1307[iVar1 /*8*/].f_7));
			__LIB_11__::func_817(Local_1307[iVar1 /*8*/]);
		}
		iVar1++;
	}
	if (ENTITY::_0x0B7CB1300CBFE19C(Global_35, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(Global_35, 0, false);
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		}
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_182();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_TIME_SCALE(1f);
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && PED::_IS_PED_HOGTIED(Global_35))
	{
		TASK::_0x79559BAD83CCD038(Global_35, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (ENTITY::_IS_ENTITY_FROZEN(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	}
	func_188(0);
	CLOCK::PAUSE_CLOCK(false, 0);
	if (!ENTITY::IS_ENTITY_VISIBLE(Global_35))
	{
		ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	}
	func_176(13);
	Local_133[7 /*6*/] = 0;
	__LIB_0__::func_783(7, 32);
	__LIB_5__::func_595(uParam0, 1);
	__LIB_5__::func_593(7, 0);
	__LIB_1__::func_724(1024);
	__LIB_8__::func_820(7);
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_13__::func_626(Global_1835011[uParam0->f_607 /*74*/].f_1, 1);
	}
	else
	{
		__LIB_13__::func_626(Global_1835011[uParam0->f_607 /*74*/].f_1, 0);
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		func_194(iVar2, 0);
		iVar2++;
	}
	if (PATHFIND::_0xDE0EA444735C1368(Local_89.f_20))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_89.f_20);
	}
	func_195();
	func_196();
	func_197();
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		GRAPHICS::ANIMPOSTFX_STOP(func_198(iVar3));
		iVar3++;
	}
	if (__LIB_11__::func_16(__LIB_4__::func_938(uParam0)))
	{
		__LIB_11__::func_64(uParam0->f_607, 0, 12, 0);
	}
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		if (INVENTORY::_0x7C7E4AB748EA3B07())
		{
			func_201(0);
			__LIB_1__::func_532(__LIB_3__::func_918(23), 451);
		}
		__LIB_1__::func_971(0);
		__LIB_2__::func_268(3, 24, 0, 0);
	}
	__LIB_0__::func_400(joaat("M_08_ODR3_CAMP"));
	func_206(0);
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_9__::func_160(200f, 0, 0, 1);
		__LIB_9__::func_159(200f, 0, 0, 1);
		__LIB_9__::func_158(200f, 0, 0, 1);
	}
	func_210(0);
	__LIB_1__::func_600(1);
	if (__LIB_0__::func_13(32768))
	{
		HUD::_DISPLAY_HUD_COMPONENT(iLocal_131);
	}
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	Var4 = { func_247(iParam0) };
	Var0 = { Var4 };
	Var0.f_3 = Var4.f_3;
	return Var0;
}

void func_74(var uParam0)
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
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_279(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (__LIB_5__::func_253(uParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (__LIB_4__::func_938(uParam0) == 0)
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
		func_303(uParam0);
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
						func_339(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_339(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_339(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_339(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_339(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_339(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_339(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_339(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_339(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_339(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_339(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_339(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_339(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341();
						func_342(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_339(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_339(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_380();
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
							func_339(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_86()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_390(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	func_404(uParam0);
	uParam0->f_634[0] = 62441;
	uParam0->f_634[1] = 62441;
	uParam0->f_637 = 0;
	__LIB_4__::func_960(uParam0, *uParam1);
	func_407(uParam0);
}

void func_109(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_34(uParam0, joaat("P_CS_RAG02X"), 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		Local_941[3 /*2*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	iLocal_1177 = __LIB_4__::func_939(uParam0);
	__LIB_5__::func_262(&(uParam0->f_7375));
	func_410();
	func_411(uParam0);
	if (Global_1905942 == -1)
	{
		__LIB_9__::func_959(Global_35);
	}
}

void func_123(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		func_415(&(uParam0->f_7375));
	}
}

int func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return 1;
	}
	return func_417(Param0, Param0.f_3);
}

void func_138(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		Local_14 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_5__::func_338(uParam0, joaat("P_NAILFILE01X"), 2048);
	__LIB_5__::func_338(uParam0, joaat("P_CS_SHACKLELEG05X"), 2048);
	__LIB_5__::func_338(uParam0, joaat("P_CS_CHAINLINK01X"), 2048);
	__LIB_5__::func_338(uParam0, joaat("P_CS_RAG02X"), 2048);
	__LIB_5__::func_338(uParam0, joaat("A_C_HORSE_MORGAN_BAY"), 2048);
	__LIB_5__::func_338(uParam0, joaat("CS_DUTCH"), 2048);
	__LIB_5__::func_338(uParam0, joaat("CS_MICAHBELL"), 2048);
	__LIB_5__::func_338(uParam0, joaat("PLAYER_ZERO"), 2048);
	__LIB_5__::func_338(uParam0, joaat("G_M_M_UNIDUSTER_01"), 2048);
	__LIB_5__::func_338(uParam0, joaat("G_M_M_UNIDUSTER_02"), 2048);
	__LIB_5__::func_338(uParam0, joaat("G_M_M_UNIDUSTER_03"), 2048);
	__LIB_5__::func_338(uParam0, joaat("G_M_M_UNIDUSTER_04"), 2048);
	__LIB_5__::func_338(uParam0, joaat("NORTHSTEAMER01X"), 2048);
	__LIB_5__::func_338(uParam0, joaat("P_NAILFILE01X"), 2048);
	__LIB_5__::func_338(uParam0, joaat("P_CS_SHACKLELEG05X"), 2048);
	__LIB_5__::func_338(uParam0, joaat("P_CS_CHAINLINK01X"), 2048);
	__LIB_5__::func_338(uParam0, joaat("P_CS_RAG02X"), 2048);
}

int func_139(var uParam0)
{
	vLocal_470[0 /*3*/].f_2 = 524295;
	vLocal_470[1 /*3*/].f_2 = 524295;
	vLocal_470[2 /*3*/].f_2 = 1;
	vLocal_470[3 /*3*/].f_2 = 524288;
	vLocal_470[4 /*3*/].f_2 = 524288;
	vLocal_470[5 /*3*/].f_2 = 524289;
	vLocal_470[6 /*3*/].f_2 = 524288;
	vLocal_470[7 /*3*/].f_2 = 524288;
	vLocal_470[8 /*3*/].f_2 = 524288;
	vLocal_470[11 /*3*/].f_2 = 6;
	vLocal_470[10 /*3*/].f_2 = 6;
	vLocal_470[12 /*3*/].f_2 = 7;
	vLocal_470[24 /*3*/].f_2 = 1;
	vLocal_470[12 /*3*/].f_2 = 192;
	vLocal_470[69 /*3*/].f_2 = 16;
	vLocal_470[70 /*3*/].f_2 = 16;
	vLocal_470[71 /*3*/].f_2 = 16;
	vLocal_470[96 /*3*/].f_2 = 16;
	vLocal_470[91 /*3*/].f_2 = 2;
	vLocal_470[93 /*3*/].f_2 = 2;
	__LIB_5__::func_254(uParam0, 32);
	return 1;
}

void func_156(var uParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 134217728))
	{
		func_139(uParam0);
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	}
	if (bParam1 && !__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 536870912))
	{
		if (__LIB_9__::func_306(uParam0, __LIB_5__::func_475(uParam0), 0))
		{
			__LIB_5__::func_334(uParam0, __LIB_5__::func_475(uParam0), 536870912);
		}
	}
	if (__LIB_4__::func_937(uParam0, 8192))
	{
		if (!__LIB_4__::func_937(uParam0, 536870912))
		{
			if (__LIB_8__::func_928(&(uParam0->f_1126), __LIB_4__::func_939(uParam0)))
			{
				__LIB_4__::func_944(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_9__::func_306(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_4__::func_944(uParam0, 8192);
	}
}

void func_157(var uParam0)
{
	if ((((iLocal_1177 == 1 || iLocal_1177 == 2) || iLocal_1177 == 3) || iLocal_1177 == 4) || iLocal_1177 == 5)
	{
		POPULATION::_0xF45E46DEECF7DF6E(14336, 0, 0, -1, -1);
		PED::_0xAB0D553FE20A6E25(0f);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
}

bool func_158(var uParam0)
{
	if (__LIB_4__::func_962(uParam0) < 1)
	{
		func_446(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0);
		func_447(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!__LIB_4__::func_948(uParam0, 4) && !__LIB_5__::func_371()) && !__LIB_4__::func_951(uParam0, 3))
	{
		if (!__LIB_4__::func_948(uParam0, 32))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_4__::func_945(uParam0, 32);
			}
			else
			{
				func_448(uParam0);
			}
		}
		if (__LIB_4__::func_948(uParam0, 32))
		{
			func_449(uParam0);
		}
	}
	switch (__LIB_4__::func_962(uParam0))
	{
		case -1:
		case 0:
			__LIB_4__::func_963(uParam0, 1);
			break;
		case 1:
			if (func_451(uParam0))
			{
				if (__LIB_4__::func_948(uParam0, 4096))
				{
					__LIB_4__::func_963(uParam0, 2);
				}
				else
				{
					__LIB_4__::func_963(uParam0, 3);
				}
			}
			break;
		case 2:
			if (__LIB_11__::func_65(uParam0))
			{
				__LIB_4__::func_963(uParam0, 3);
			}
			break;
		case 3:
			if (func_453(uParam0))
			{
				__LIB_4__::func_963(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_161(var uParam0)
{
	int iVar0;
	if (__LIB_4__::func_939(uParam0) == 26)
	{
		__LIB_4__::func_964(uParam0, 0);
		return true;
	}
	if (func_455(uParam0))
	{
		iVar0 = __LIB_4__::func_939(uParam0);
		__LIB_4__::func_946(uParam0, __LIB_5__::func_475(uParam0));
		if (__LIB_4__::func_939(uParam0) == 26)
		{
			__LIB_4__::func_964(uParam0, 0);
			return true;
		}
		else if (__LIB_5__::func_331(uParam0, iVar0, 128))
		{
			func_455(uParam0);
		}
	}
	return false;
}

void func_163(bool bParam0)
{
	if ((bParam0 && func_165(28)) || (!bParam0 && !func_165(28)))
	{
		return;
	}
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1956580.f_1), 5);
		func_456(28);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		func_176(28);
	}
}

void func_164(bool bParam0)
{
	int iVar0;
	int iVar1;
	if ((bParam0 && func_165(2)) || (!bParam0 && !func_165(2)))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (37 - 1))
	{
		iVar0 = iVar1;
		if (bParam0)
		{
			__LIB_19__::func_20(iVar0);
		}
		else
		{
			__LIB_19__::func_19(iVar0);
		}
		iVar1++;
	}
	if (bParam0)
	{
		func_456(2);
	}
	else
	{
		func_176(2);
	}
}

bool func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	return __LIB_0__::func_1(uLocal_123[iVar1], __LIB_0__::func_470(iVar0));
}

void func_166()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
}

void func_167(bool bParam0)
{
	if ((bParam0 && func_165(36)) || (!bParam0 && !func_165(36)))
	{
		return;
	}
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_133[6 /*6*/]))
		{
			PED::_0x1E017404784AA6A3(Local_133[6 /*6*/], joaat("ODR3_RIDE1"));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_133[7 /*6*/]))
		{
			PED::_0x1E017404784AA6A3(Local_133[7 /*6*/], joaat("ODR3_RIDE1"));
		}
		AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(29, 3, 0);
		func_456(36);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_133[6 /*6*/]))
		{
			PED::_0x2B4CE170DE09F346(Local_133[6 /*6*/], joaat("ODR3_RIDE1"));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_133[7 /*6*/]))
		{
			PED::_0x2B4CE170DE09F346(Local_133[7 /*6*/], joaat("ODR3_RIDE1"));
		}
		AUDIO::_0x660A8F876DF1D4F8(7);
		AUDIO::_0x660A8F876DF1D4F8(25);
		AUDIO::_0x660A8F876DF1D4F8(21);
		AUDIO::_0x660A8F876DF1D4F8(19);
		AUDIO::_0x660A8F876DF1D4F8(23);
		AUDIO::_0x660A8F876DF1D4F8(22);
		AUDIO::_0x660A8F876DF1D4F8(29);
		func_176(36);
	}
}

void func_168(bool bParam0)
{
	if (bParam0 && func_165(120))
	{
		return;
	}
	if (!bParam0 && !func_165(120))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0x4DBC4873707E8FD6(PLAYER::PLAYER_ID(), 0.05f, 0.05f, 0.05f);
		PED::_0xCBDE59C48F2B06F5(Global_35, joaat("WEAPON_THROWN_THROWING_KNIVES"), 0f);
		func_456(120);
	}
	else
	{
		PLAYER::_0xCEDC16930526F728(PLAYER::PLAYER_ID());
		PED::_0x6A190B94C2541A99(Global_35);
		func_176(120);
	}
}

void func_169(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::_0xA3716A77DCF17424(Global_35, iLocal_781[1], iParam0);
		WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_KIT_BINOCULARS"), iParam0);
	}
}

bool func_170(bool bParam0)
{
	if (bParam0 && func_165(91))
	{
		return true;
	}
	iLocal_1255 = INTERIOR::GET_INTERIOR_AT_COORDS(-859.7f, -742.6f, 56.8f);
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_1255))
	{
	}
	if (!INTERIOR::IS_INTERIOR_READY(iLocal_1255))
	{
	}
	if (bParam0)
	{
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_1255, "loneMule_CandleOn"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_1255, "loneMule_CandleOn", 0);
		}
		else
		{
			func_462(func_461(16));
			if (!func_463(func_461(16)))
			{
				return false;
			}
			if (iLocal_1234 == 0)
			{
				iLocal_1234 = ENTITY::_0x6F3068258A499E52(func_464(func_461(16)), -859.7f, -742.6f, 56.8f, 7);
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_1234))
			{
				Local_941[16 /*2*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1234));
				if (ENTITY::DOES_ENTITY_EXIST(Local_941[16 /*2*/]))
				{
					ENTITY::_0xEBDC12861D079ABA(Local_941[16 /*2*/], 1);
					__LIB_1__::func_336(&(Local_941[16 /*2*/].f_1), 1);
					INTERIOR::_0x2533F2AB0EB9C6F9(iLocal_1255, 1);
					INTERIOR::_0xFE2B3D5500B1B2E4(iLocal_1255, 1);
					func_456(91);
					return true;
				}
			}
		}
	}
	else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_1255, "loneMule_CandleOn"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_941[16 /*2*/]))
		{
			if (!iLocal_1234 == 0)
			{
				ENTITY::_0xD2B9C78537ED5759(iLocal_1234);
				iLocal_1234 = 0;
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_941[16 /*2*/]));
		}
		func_466(func_461(16));
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1255, "loneMule_CandleOn", true);
		INTERIOR::_0x2533F2AB0EB9C6F9(iLocal_1255, 0);
		INTERIOR::_0xFE2B3D5500B1B2E4(iLocal_1255, 0);
		func_176(91);
	}
	else
	{
		return true;
	}
	return false;
}

void func_171(bool bParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if ((!bParam0 && func_165(29)) || (bParam0 && !func_165(29)))
	{
		return;
	}
	PED::SET_PED_CAN_LEG_IK(Global_35, bParam0);
	if (bParam0)
	{
		PED::SET_PED_LEG_IK_MODE(Global_35, 2);
	}
	else
	{
		PED::SET_PED_LEG_IK_MODE(Global_35, 0);
	}
	if (bParam0)
	{
		func_176(29);
	}
	else
	{
		func_456(29);
	}
}

void func_172(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	iVar0 = 1845216;
	iVar1 = 15;
	if (bParam0)
	{
		if (!func_165(148))
		{
			POPULATION::_0xB56D41A694E42E86(Local_89.f_31, iVar0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(Local_89.f_31, iVar0, 0, 0, -1, -1, 0);
			uLocal_1338 = PED::_0x4C39C95AE5DB1329(Local_89.f_31, 0, iVar1);
			PATHFIND::_0xC1799FAFD2FDF52B(Local_89.f_31, 0, 0, 0);
			PATHFIND::_0xE5EF9DE716FF737E(Local_89.f_31, 0, 1);
			func_456(148);
		}
	}
	else if (func_165(148))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_89.f_31);
		POPULATION::_0xA1CFB35069D23C23(Local_89.f_31);
		if (PED::_0x91A5F9CBEBB9D936(uLocal_1338))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1338, false);
		}
		PATHFIND::_0xD17672447692478E(Local_89.f_31, 0);
		VOLUME::_GET_VOLUME_BOUNDS(Local_89.f_31, &vVar2, &vVar5);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar2, vVar5, 0);
		VOLUME::_DELETE_VOLUME(Local_89.f_31);
		func_176(148);
	}
}

void func_173(int iParam0, bool bParam1)
{
	struct<4> Var0;
	if ((bParam1 && __LIB_0__::func_1(uLocal_1178, __LIB_0__::func_470(iParam0))) || (!bParam1 && !__LIB_0__::func_1(uLocal_1178, __LIB_0__::func_470(iParam0))))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Var0 = { 666.5955f, -1244.908f, 43.1396f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_STOOLFOLDING01X"), true);
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_STOOLFOLDING01X"), 0);
			}
			break;
		case 1:
			Var0 = { -859.4767f, -742.5208f, 56.7802f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CANEMPTY09X"), false);
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CANEMPTY11X"), false);
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_APPLEROTTEN01X"), false);
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_POTSBROKEN03"), false);
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CANDLESTAND02X"), false);
				Var0 = { -860.7357f, -742.3193f, 55.9638f };
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CHAIR23X"), false);
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CANEMPTY09X"), 0);
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CANEMPTY11X"), 0);
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_APPLEROTTEN01X"), 0);
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_POTSBROKEN03"), 0);
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CANDLESTAND02X"), 0);
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CHAIR23X"), 0);
			}
			break;
		case 2:
			if (bParam1)
			{
				ENTITY::CREATE_MODEL_HIDE(-869.9185f, -733.5781f, 58.8276f, 1f, joaat("P_CRATE14X"), true);
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(-869.9185f, -733.5781f, 58.8276f, 1f, joaat("P_CRATE14X"), 0);
			}
			break;
	}
	if (bParam1)
	{
		__LIB_1__::func_336(&uLocal_1178, __LIB_0__::func_470(iParam0));
	}
	else
	{
		__LIB_0__::func_516(&uLocal_1178, __LIB_0__::func_470(iParam0));
	}
}

void func_174(bool bParam0)
{
	if ((bParam0 && func_165(24)) || (!bParam0 && !func_165(24)))
	{
		return;
	}
	if (bParam0)
	{
		AUDIO::_0xD47D47EFBF103FB8(Global_35, 5);
		func_456(24);
	}
	else
	{
		AUDIO::_0xD47D47EFBF103FB8(Global_35, 0);
		func_176(24);
	}
}

void func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	__LIB_0__::func_516(&(uLocal_123[iVar1]), __LIB_0__::func_470(iVar0));
}

void func_177()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1006)
	{
		func_469(iVar0);
		iVar0++;
	}
}

void func_178()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_1371)
	{
		iVar1 = iVar0;
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[iVar1 /*5*/]) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Local_1371[iVar1 /*5*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1371[iVar1 /*5*/]);
		}
		Local_1371[iVar1 /*5*/].f_1 = 0;
		iVar0++;
	}
}

void func_179(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iLocal_775)
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_775[iVar0]))
		{
			MAP::REMOVE_BLIP(&(iLocal_775[iVar0]));
		}
		iVar0++;
	}
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 <= 55)
		{
			if ((iVar1 == 0 || iVar1 == 1) || !func_470(iVar1) == -1)
			{
			}
			else if (MAP::DOES_BLIP_EXIST(Local_133[iVar1 /*6*/].f_1))
			{
				MAP::REMOVE_BLIP(&(Local_133[iVar1 /*6*/].f_1));
			}
			iVar1++;
		}
	}
}

void func_180(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_941)
	{
		func_471(uParam0, iVar0, bParam1);
		iVar0++;
	}
	func_472();
}

void func_182()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1009)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_1009[iVar0]))
		{
			func_473(iVar0);
		}
		iVar0++;
	}
}

void func_183()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_937)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_937[iVar0]))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iLocal_937[iVar0], false);
		}
		iVar0++;
	}
	STREAMING::REMOVE_PTFX_ASSET();
}

void func_184(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (iVar0 == 0)
		{
		}
		else if (bParam3)
		{
			if (iVar0 == 1)
			{
			}
			else
			{
				func_474(uParam0, iVar0, 0, 0);
			}
			iVar0++;
		}
	}
}

void func_188(bool bParam0)
{
	if (bParam0 && func_165(26))
	{
		return;
	}
	if (!bParam0 && !func_165(26))
	{
		return;
	}
	if (bParam0)
	{
		__LIB_11__::func_885();
		__LIB_4__::func_517(1);
		__LIB_9__::func_160(-100f, 1, 0, 1);
		__LIB_9__::func_159(-100f, 1, 0, 1);
		__LIB_9__::func_158(-100f, 1, 0, 1);
		func_456(26);
	}
	else
	{
		__LIB_4__::func_517(0);
		__LIB_9__::func_160(200f, 1, 0, 1);
		__LIB_9__::func_159(200f, 1, 0, 1);
		__LIB_9__::func_158(200f, 1, 0, 1);
		__LIB_0__::func_188(8);
		func_176(26);
	}
}

void func_194(int iParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	if ((bParam1 && __LIB_0__::func_1(uLocal_132, __LIB_0__::func_470(iParam0))) || (!bParam1 && !__LIB_0__::func_1(uLocal_132, __LIB_0__::func_470(iParam0))))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = Local_89.f_23;
			break;
		case 1:
			iVar0 = Local_89.f_22;
			break;
		case 2:
			iVar0 = Local_89.f_25;
			break;
	}
	VOLUME::_GET_VOLUME_BOUNDS(iVar0, &vVar1, &vVar4);
	if (bParam1)
	{
		PATHFIND::_0xC1799FAFD2FDF52B(iVar0, 0, 0, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 1);
		__LIB_1__::func_336(&uLocal_132, __LIB_0__::func_470(iParam0));
	}
	else
	{
		PATHFIND::_0xD17672447692478E(iVar0, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar1, vVar4, 0);
		__LIB_0__::func_516(&uLocal_132, __LIB_0__::func_470(iParam0));
	}
}

void func_195()
{
	VOLUME::_DELETE_VOLUME(Local_89);
	VOLUME::_DELETE_VOLUME(Local_89.f_1);
	VOLUME::_DELETE_VOLUME(Local_89.f_2);
	VOLUME::_DELETE_VOLUME(Local_89.f_3);
	VOLUME::_DELETE_VOLUME(Local_89.f_4);
	VOLUME::_DELETE_VOLUME(Local_89.f_5);
	VOLUME::_DELETE_VOLUME(Local_89.f_6);
	VOLUME::_DELETE_VOLUME(Local_89.f_7);
	VOLUME::_DELETE_VOLUME(Local_89.f_8);
	VOLUME::_DELETE_VOLUME(Local_89.f_9);
	VOLUME::_DELETE_VOLUME(Local_89.f_10);
	VOLUME::_DELETE_VOLUME(Local_89.f_11);
	VOLUME::_DELETE_VOLUME(Local_89.f_12);
	VOLUME::_DELETE_VOLUME(Local_89.f_13);
	VOLUME::_DELETE_VOLUME(Local_89.f_14);
	VOLUME::_DELETE_VOLUME(Local_89.f_15);
	VOLUME::_DELETE_VOLUME(Local_89.f_16);
	VOLUME::_DELETE_VOLUME(Local_89.f_17);
	VOLUME::_DELETE_VOLUME(Local_89.f_18);
	VOLUME::_DELETE_VOLUME(Local_89.f_19);
	VOLUME::_DELETE_VOLUME(Local_89.f_20);
	VOLUME::_DELETE_VOLUME(Local_89.f_21);
	VOLUME::_DELETE_VOLUME(Local_89.f_22);
	VOLUME::_DELETE_VOLUME(Local_89.f_23);
	VOLUME::_DELETE_VOLUME(Local_89.f_24);
	VOLUME::_DELETE_VOLUME(Local_89.f_25);
	VOLUME::_DELETE_VOLUME(Local_89.f_26);
	VOLUME::_DELETE_VOLUME(Local_89.f_27);
	VOLUME::_DELETE_VOLUME(Local_89.f_28);
	VOLUME::_DELETE_VOLUME(Local_89.f_29);
	VOLUME::_DELETE_VOLUME(Local_89.f_30);
	VOLUME::_DELETE_VOLUME(Local_89.f_31);
	VOLUME::_DELETE_VOLUME(Local_89.f_32);
	VOLUME::_DELETE_VOLUME(Local_89.f_33);
}

void func_196()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < vLocal_470.x)
	{
		if (vLocal_470[iVar0 /*3*/].f_1 == 5 && !vLocal_470[iVar0 /*3*/] == 3)
		{
		}
		else
		{
			func_466(iVar0);
		}
		iVar0++;
	}
}

void func_197()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < vLocal_470.x)
	{
		switch (vLocal_470[iVar0 /*3*/])
		{
			case 0:
				break;
			case 1:
				if (vLocal_470[iVar0 /*3*/].f_1 == 1)
				{
					STREAMING::REQUEST_MODEL(func_464(iVar0), false);
				}
				else if (vLocal_470[iVar0 /*3*/].f_1 == 2)
				{
					STREAMING::REQUEST_ANIM_DICT(func_494(iVar0, 1));
				}
				else if (vLocal_470[iVar0 /*3*/].f_1 == 3)
				{
					WEAPON::_0x72D4CB5DB927009C(func_495(iVar0), -1, 0);
				}
				else if (vLocal_470[iVar0 /*3*/].f_1 == 4)
				{
					TASK::REQUEST_WAYPOINT_RECORDING(func_496(iVar0));
				}
				else if (vLocal_470[iVar0 /*3*/].f_1 == 5)
				{
					STREAMING::_REQUEST_MOVE_NETWORK_DEF(func_497(iVar0));
				}
				vLocal_470[iVar0 /*3*/] = 2;
				break;
			case 2:
				if (((((vLocal_470[iVar0 /*3*/].f_1 == 1 && STREAMING::HAS_MODEL_LOADED(func_464(iVar0))) || (vLocal_470[iVar0 /*3*/].f_1 == 2 && STREAMING::HAS_ANIM_DICT_LOADED(func_494(iVar0, 1)))) || (vLocal_470[iVar0 /*3*/].f_1 == 3 && WEAPON::_0xFF07CF465F48B830(func_495(iVar0)))) || (vLocal_470[iVar0 /*3*/].f_1 == 4 && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_496(iVar0)))) || (vLocal_470[iVar0 /*3*/].f_1 == 5 && STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(func_497(iVar0))))
				{
					vLocal_470[iVar0 /*3*/] = 3;
				}
				break;
			case 3:
				break;
			case 4:
				if (vLocal_470[iVar0 /*3*/].f_1 == 1)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_464(iVar0));
				}
				else if (vLocal_470[iVar0 /*3*/].f_1 == 2)
				{
					STREAMING::REMOVE_ANIM_DICT(func_494(iVar0, 1));
				}
				else if (vLocal_470[iVar0 /*3*/].f_1 == 3)
				{
					WEAPON::_0xC3896D03E2852236(func_495(iVar0));
				}
				else if (vLocal_470[iVar0 /*3*/].f_1 == 4)
				{
					TASK::REMOVE_WAYPOINT_RECORDING(func_496(iVar0));
				}
				else if (vLocal_470[iVar0 /*3*/].f_1 == 5)
				{
					STREAMING::_REMOVE_MOVE_NETWORK_DEF(func_497(iVar0));
				}
				vLocal_470[iVar0 /*3*/] = 0;
				break;
		}
		iVar0++;
	}
}

char* func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ODR3_Injured01Loop";
		case 1:
			return "ODR3_Injured02Loop";
		case 2:
			return "ODR3_Injured03Loop";
	}
	return "";
}

void func_201(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (!bParam0)
	{
		INVENTORY::_0xE36D4A38D28D9CFB(0);
		INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
		__LIB_1__::func_851();
		return;
	}
	iVar0 = func_500(1);
	iVar1 = func_500(0);
	Local_1269.f_1 = iVar0;
	Local_1269 = iVar1;
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_1__::func_851();
	INVENTORY::_0xE36D4A38D28D9CFB(1);
	__LIB_1__::func_851();
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		__LIB_0__::func_401(joaat("LON_01_ODR3_PROPS"));
		GRAPHICS::_0xDFEA23EC90113657(joaat("LON_01_ODR3_PROPS"));
		__LIB_5__::func_441("nav_odriscolls3_cabin");
	}
	else
	{
		__LIB_0__::func_400(joaat("LON_01_ODR3_PROPS"));
		GRAPHICS::_0xDD0BC0EDCB2162F6(joaat("LON_01_ODR3_PROPS"));
		__LIB_5__::func_440("nav_odriscolls3_cabin");
	}
}

void func_210(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = -1;
		while (iVar0 <= 26)
		{
			if (!__LIB_0__::func_31(iVar0))
			{
			}
			else if (func_519(iVar0))
			{
			}
			else
			{
				if ((__LIB_0__::func_892(iVar0) || iVar0 == 1) || iVar0 == 2)
				{
					__LIB_6__::func_888(iVar0);
					iLocal_1342[iVar0] = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iVar0)))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_0__::func_271(iVar0), true);
				}
				__LIB_1__::func_197(iVar0, 1, 1, 1, 1);
			}
			iVar0++;
		}
		if (!__LIB_14__::func_129(2, 1))
		{
			__LIB_11__::func_818(2, 1);
			bLocal_1370 = true;
		}
	}
	else
	{
		iVar0 = -1;
		while (iVar0 <= 26)
		{
			if (!__LIB_0__::func_31(iVar0))
			{
			}
			else if (func_519(iVar0))
			{
			}
			else
			{
				if (iLocal_1342[iVar0])
				{
					__LIB_0__::func_893(iVar0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iVar0)))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_0__::func_271(iVar0), false);
				}
			}
			iVar0++;
		}
		if (bLocal_1370)
		{
			__LIB_11__::func_818(2, 0);
		}
	}
}

struct<4> func_247(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { func_551(1, 0) };
			break;
		case 1:
			Var0 = { func_551(1, 1) };
			break;
		case 2:
			Var0 = { func_551(1, 2) };
			break;
		case 3:
			Var0 = { func_551(1, 3) };
			break;
		case 4:
			Var0 = { func_551(1, 4) };
			break;
		case 5:
			Var0 = { func_551(1, 5) };
			break;
		case 6:
			Var0 = { -860.527f, -742.4977f, 57.0047f };
			Var0.f_3 = -113.39f;
			break;
		case 7:
			Var0 = { -862.2938f, -745.3156f, 55.958f };
			Var0.f_3 = 100f;
			break;
		case 8:
			Var0 = { func_551(1, 8) };
			break;
		case 25:
			Var0 = { func_551(1, 9) };
			break;
	}
	return Var0;
}

void func_303(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
	{
		if (__LIB_4__::func_948(uParam0, 16))
		{
			__LIB_5__::func_595(uParam0, 0);
		}
		if (func_447(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_339(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
			__LIB_4__::func_465(iVar5);
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
				func_339(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_11__::func_838(28);
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
			__LIB_11__::func_619(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
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
						func_339(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_339(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_339(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_339(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_339(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_339(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_339(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_11__::func_838(24);
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
					func_339(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_339(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_17__::func_907(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_18__::func_161(iParam0);
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
				func_339(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_341()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_705();
	func_706();
	func_707();
	func_708();
	func_709();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_712(iParam0, 1, 1, -142743235, 1);
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

void func_380()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_753(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_390(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_769(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_769(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_404(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_792(uParam0, iVar0);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	__LIB_5__::func_476(uParam0, 0, 1, 117413, 117554, 117629, 118287, 119725, "ODR3_INT", 2, 14);
	__LIB_5__::func_476(uParam0, 1, 2, 119951, 120386, 120482, 120573, 122766, "", 0, 13);
	__LIB_5__::func_476(uParam0, 2, 3, 122993, 123390, 123590, 123662, 124598, "ODR3_MCS1", 7186, 13);
	__LIB_5__::func_476(uParam0, 3, 4, 124811, 124886, 125037, 125085, 126726, "", 2064, 9);
	__LIB_5__::func_476(uParam0, 4, 5, 126800, 126907, 127391, 127679, 130212, "ODR3_MCS2", 16779282, 3);
	__LIB_5__::func_476(uParam0, 5, 6, 130227, 130600, 130623, 130643, 130938, "", 16779264, 1);
	__LIB_5__::func_476(uParam0, 6, 7, 130953, 131185, 131642, 131950, 132289, "", 3072, 2);
	__LIB_5__::func_476(uParam0, 7, 8, 132337, 132618, 133147, 133291, 135985, "", 0, 29);
	__LIB_5__::func_476(uParam0, 8, 25, 136133, 136191, 136245, 136357, 136854, "", 1040, 11);
	__LIB_5__::func_476(uParam0, 25, 26, 136874, 137089, 137281, 137659, 137700, "ODR3_EXT", 3090, 9);
	__LIB_5__::func_334(uParam0, 26, 16);
}

void func_410()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		vLocal_470[iVar0 /*3*/].f_1 = 1;
		iVar0++;
	}
	iVar0 = 45;
	while (iVar0 <= 81)
	{
		vLocal_470[iVar0 /*3*/].f_1 = 2;
		iVar0++;
	}
	iVar0 = 82;
	while (iVar0 <= 90)
	{
		vLocal_470[iVar0 /*3*/].f_1 = 3;
		iVar0++;
	}
	iVar0 = 91;
	while (iVar0 <= 95)
	{
		vLocal_470[iVar0 /*3*/].f_1 = 4;
		iVar0++;
	}
	iVar0 = 96;
	while (iVar0 <= 100)
	{
		vLocal_470[iVar0 /*3*/].f_1 = 5;
		iVar0++;
	}
	StringCopy(&Local_1202, "generic_hint_cam", 64);
	StringCopy(&(Local_1202.f_8), "GENERIC_HINT_CAM", 64);
	Local_1307[0 /*8*/].f_1 = { func_845(7, 0) };
	Local_1307[0 /*8*/].f_4 = 1;
	Local_1307[1 /*8*/].f_1 = { func_845(7, 1) };
	Local_1307[1 /*8*/].f_4 = 0;
	Local_1123[0 /*6*/] = 3.1f;
	Local_1123[1 /*6*/] = Local_1123[0 /*6*/];
	Local_1123[2 /*6*/].f_4 = 0f;
	Local_1123[2 /*6*/].f_5 = 1f;
	Local_1123[2 /*6*/] = 3.75f;
	Local_1123[2 /*6*/].f_2 = 0.5f;
	Local_1123[2 /*6*/].f_3 = 0.5f;
	Local_1123[4 /*6*/].f_4 = 0f;
	Local_1123[4 /*6*/].f_5 = 1f;
	Local_1123[4 /*6*/] = 9.375f;
	Local_1123[4 /*6*/].f_2 = 0.5f;
	Local_1123[4 /*6*/].f_3 = 0.5f;
	Local_1123[5 /*6*/].f_4 = 0f;
	Local_1123[5 /*6*/].f_5 = 1f;
	Local_1123[5 /*6*/] = Local_1123[4 /*6*/];
	Local_1123[5 /*6*/].f_2 = 0.5f;
	Local_1123[5 /*6*/].f_3 = 0.5f;
	Local_1123[6 /*6*/].f_4 = 0f;
	Local_1123[6 /*6*/].f_5 = 1f;
	Local_1123[6 /*6*/] = Local_1123[4 /*6*/];
	Local_1123[6 /*6*/].f_2 = 0.5f;
	Local_1123[6 /*6*/].f_3 = 0.5f;
	func_846();
	Local_1015[0 /*13*/] = 6;
	Local_1015[0 /*13*/].f_5 = 30f;
	Local_1015[0 /*13*/].f_6 = 15f;
	Local_1015[0 /*13*/].f_11 = 22;
	Local_1015[0 /*13*/].f_12 = 1;
	Local_1015[1 /*13*/] = 2;
	Local_1015[1 /*13*/].f_6 = 50f;
	Local_1015[1 /*13*/].f_11 = 23;
	Local_1015[1 /*13*/].f_12 = 1;
	Local_1015[2 /*13*/] = 5;
	Local_1015[2 /*13*/].f_5 = 0f;
	Local_1015[2 /*13*/].f_6 = 250f;
	Local_1015[2 /*13*/].f_8 = { VOLUME::_GET_VOLUME_COORDS(Local_89.f_6) };
	Local_1015[2 /*13*/].f_11 = 29;
	Local_1015[2 /*13*/].f_12 = 2;
	Local_1015[3 /*13*/] = 4;
	Local_1015[3 /*13*/].f_5 = 0f;
	Local_1015[3 /*13*/].f_11 = 33;
	Local_1015[3 /*13*/].f_12 = 2;
	Local_1015[4 /*13*/] = 4;
	Local_1015[4 /*13*/].f_5 = 0f;
	Local_1015[4 /*13*/].f_11 = 38;
	Local_1015[4 /*13*/].f_12 = 4;
	Local_1015[5 /*13*/] = 4;
	Local_1015[5 /*13*/].f_5 = BUILTIN::TO_FLOAT(2147483647);
	Local_1015[5 /*13*/].f_11 = 40;
	Local_1015[5 /*13*/].f_12 = 112;
	Local_1015[6 /*13*/] = 4;
	Local_1015[6 /*13*/].f_5 = 0f;
	Local_1015[6 /*13*/].f_11 = 45;
	Local_1015[6 /*13*/].f_12 = 128;
	Local_1015[7 /*13*/] = 4;
	Local_1015[7 /*13*/].f_5 = 0f;
	Local_1015[7 /*13*/].f_11 = 69;
	Local_1015[7 /*13*/].f_12 = 128;
}

void func_411(var uParam0)
{
	Local_1371[1 /*5*/].f_3 = 1;
	Local_1371[2 /*5*/].f_3 = 1;
	Local_1371[10 /*5*/].f_3 = 1;
	Local_1371[10 /*5*/].f_2 = 0;
	Local_1371[11 /*5*/].f_3 = 1;
	Local_1371[13 /*5*/].f_3 = 1;
	Local_1371[14 /*5*/].f_2 = 0;
	Local_1371[14 /*5*/].f_3 = 1;
	Local_1371[16 /*5*/].f_2 = 0;
	Local_1371[17 /*5*/].f_2 = 0;
	Local_1371[21 /*5*/].f_3 = 1;
}

void func_415(var uParam0)
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
			__LIB_4__::func_717(&(uParam0->f_872));
		}
		func_856(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_858(uParam0);
		func_859(uParam0);
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

int func_417(vector3 vParam0, var uParam3)
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
		iVar0 = func_867(0, 0);
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

bool func_446(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_4__::func_948(uParam0, 2))
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5408))
	{
		return true;
	}
	iVar0 = __LIB_4__::func_543(__LIB_4__::func_941(uParam0));
	if (!__LIB_0__::func_91())
	{
		vVar2 = { __LIB_1__::func_469(uParam0->f_607) };
	}
	if (func_917(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_447(var uParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5411))
	{
		if (!__LIB_4__::func_948(uParam0, 16777216))
		{
			if (!__LIB_5__::func_283(uParam0))
			{
				__LIB_4__::func_945(uParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = fParam2;
				Var0.f_6.f_1 = fParam3;
				Var0.f_6.f_2 = fParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = __LIB_4__::func_720(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					__LIB_4__::func_945(uParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							__LIB_4__::func_945(uParam0, 16777216);
						}
						else if (__LIB_0__::func_48(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (__LIB_0__::func_126(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, uParam0->f_5417, uParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
		{
			return true;
		}
	}
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return true;
	}
	vVar14 = { __LIB_1__::func_469(uParam0->f_607) };
	if (__LIB_0__::func_2() == 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_4__::func_950(uParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_950(uParam0)))
		{
			return false;
		}
		if (__LIB_5__::func_50(&iVar17, __LIB_4__::func_950(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((uParam0->f_607 == 38 || uParam0->f_607 == 39) || uParam0->f_607 == 43) || uParam0->f_607 == 40) || uParam0->f_607 == 41) || uParam0->f_607 == 42)
		{
			__LIB_4__::func_945(uParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = fParam2;
		Var18.f_6.f_1 = fParam3;
		Var18.f_6.f_2 = fParam4;
		Var18.f_9 = fParam5;
		if (__LIB_4__::func_948(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (__LIB_4__::func_948(uParam0, 32768))
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
			if (!__LIB_4__::func_948(uParam0, 16))
			{
				__LIB_4__::func_945(uParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		uParam0->f_5411 = iVar13;
		uParam0->f_5412 = iVar13;
		__LIB_5__::func_255(uParam0, bParam1);
		if (!__LIB_4__::func_948(uParam0, 256))
		{
			if (!__LIB_4__::func_948(uParam0, 32768))
			{
				vVar14.x = fParam2;
				vVar14.f_1 = fParam3;
				vVar14.f_2 = fParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_925(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_448(var uParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_4__::func_948(uParam0, 32) && __LIB_4__::func_951(uParam0, 3))
	{
		if (__LIB_4__::func_544(uParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			__LIB_4__::func_945(uParam0, 32);
		}
	}
	if (!__LIB_4__::func_948(uParam0, 32))
	{
		if (func_927(&(uParam0->f_609), uParam0->f_607))
		{
			__LIB_4__::func_945(uParam0, 32);
		}
	}
}

void func_449(var uParam0)
{
	struct<4> Var0;
	if (!__LIB_4__::func_948(uParam0, 128))
	{
		if (__LIB_4__::func_948(uParam0, 16384))
		{
			__LIB_5__::func_284(uParam0);
			if (func_929(uParam0))
			{
				__LIB_5__::func_326(&(uParam0->f_10792));
				__LIB_4__::func_969(uParam0, 2097152);
				__LIB_4__::func_958(uParam0, 16384);
				__LIB_4__::func_945(uParam0, 128);
			}
			return;
		}
		if (__LIB_4__::func_951(uParam0, 1))
		{
			return;
		}
		if (__LIB_4__::func_948(uParam0, 64))
		{
			__LIB_5__::func_284(uParam0);
			MemCopy(&Var0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (func_931(uParam0, Var0))
			{
				if (__LIB_4__::func_962(uParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_4__::func_945(uParam0, 128);
			}
		}
		else
		{
			if (__LIB_4__::func_962(uParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			__LIB_4__::func_945(uParam0, 128);
		}
	}
}

bool func_451(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_9__::func_447(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_446(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_447(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		MemCopy(&cVar1, {__LIB_4__::func_542(uParam0->f_607)}, 3);
		if (__LIB_5__::func_341(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_4__::func_951(uParam0, 1))
	{
		if (!__LIB_0__::func_899(&(uParam0->f_13115)))
		{
			__LIB_4__::func_89(&(uParam0->f_13115), 0);
		}
		if (__LIB_1__::func_583(&(uParam0->f_13115)) < 30f)
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

bool func_453(var uParam0)
{
	int iVar0;
	int iVar1;
	iLocal_1177 = __LIB_4__::func_939(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_941[3 /*2*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_941[3 /*2*/]));
	}
	if (iLocal_1177 >= 6)
	{
		func_456(19);
	}
	if (!func_165(10))
	{
		if (!func_937(iLocal_1177))
		{
			func_197();
			return false;
		}
	}
	if (iLocal_1177 >= 4 && !iLocal_1177 == 24)
	{
		if (!func_938(1))
		{
			return false;
		}
		else
		{
			if (iLocal_1177 > 7)
			{
				if (!func_939())
				{
					return false;
				}
			}
			if (!func_940(1, 0))
			{
				return false;
			}
		}
	}
	iVar0 = iLocal_1177;
	iVar1 = func_941(uParam0);
	if (!func_942(uParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_133[1 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
	{
		func_943(1, 1);
		Local_133[1 /*6*/] = Local_133[1 /*6*/];
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_133[1 /*6*/], 48, true);
		POPULATION::_0xF74E134F40192884(Local_133[1 /*6*/], 2);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[1 /*6*/], true);
		EVENT::REMOVE_ALL_SHOCKING_EVENTS(true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_133[1 /*6*/], 512, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_133[1 /*6*/], 16384, true);
		PED::SET_PED_CONFIG_FLAG(Local_133[1 /*6*/], 136, false);
		AITRANSPORT::_0xBA8818212633500A(Local_133[1 /*6*/], 0, 0);
		PED::_0x2EB75FB86C41F026(Local_133[1 /*6*/], 3, 0);
		PED::SET_PED_CONFIG_FLAG(Local_133[1 /*6*/], 113, true);
		PED::SET_PED_CONFIG_FLAG(Local_133[1 /*6*/], 168, false);
		__LIB_4__::func_945(uParam0, 1);
		func_456(42);
	}
	if (!func_165(7))
	{
		func_944();
		func_456(7);
	}
	if ((iLocal_1177 == 3 || iLocal_1177 == 4) || iLocal_1177 == 5)
	{
		__LIB_8__::func_810(7);
	}
	if (iLocal_1177 > 4)
	{
		func_946();
	}
	if (iLocal_1177 == 0)
	{
		if (iVar1 == 0)
		{
			func_947(6);
			func_947(8);
		}
		else if (iVar1 == 2)
		{
			__LIB_5__::func_580(uParam0, Local_133[8 /*6*/], "HoseaMatthews", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_133[9 /*6*/], "MollyOshea", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_133[11 /*6*/], "MrPearson", 0, 0, 0, 0);
		}
	}
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 8)
	{
		func_176(13);
	}
	else
	{
		func_456(13);
	}
	__LIB_5__::func_256(uParam0, 154963);
	__LIB_5__::func_257(uParam0, 155161);
	STREAMING::REQUEST_PTFX_ASSET();
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			break;
		case 4:
			MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
			break;
		case 5:
			MISC::_SET_WEATHER_TYPE(joaat("OVERCASTDARK"), true, true, false, 0f, false);
			break;
	}
	switch (iLocal_1177)
	{
		case 1:
			CLOCK::SET_CLOCK_TIME(8, 26, 0);
			break;
		case 2:
			CLOCK::SET_CLOCK_TIME(10, 0, 0);
			break;
		case 3:
			CLOCK::SET_CLOCK_TIME(15, 0, 0);
			break;
		case 4:
		case 5:
			CLOCK::SET_CLOCK_TIME(20, 50, 0);
			break;
		case 6:
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			break;
		case 7:
		case 8:
		case 25:
			CLOCK::SET_CLOCK_TIME(0, 0, 0);
			break;
	}
	if ((!iVar0 == 6 && !iVar0 == 7) && !iVar0 == 8)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	else
	{
		CLOCK::PAUSE_CLOCK(false, 0);
	}
	if (((iVar0 == 4 || iVar0 == 5) || iVar0 == 6) || iVar0 == 7)
	{
		func_194(2, 1);
	}
	Local_133[0 /*6*/] = Global_35;
	func_943(0, 1);
	__LIB_1__::func_408(-464836488, 1, 0);
	__LIB_1__::func_600(0);
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	}
	return true;
}

bool func_455(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_953(uParam0);
	__LIB_10__::func_929(uParam0);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_475(uParam0);
	iVar2 = __LIB_5__::func_279(uParam0, iVar0);
	if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_929(uParam0);
		}
	}
	__LIB_11__::func_56(uParam0);
	__LIB_8__::func_801(uParam0);
	__LIB_5__::func_478(uParam0);
	__LIB_5__::func_479(uParam0);
	__LIB_5__::func_480(uParam0);
	__LIB_8__::func_768(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_5__::func_575(uParam0);
	}
	if ((__LIB_4__::func_939(uParam0) == 0 && iVar2 < 3) && __LIB_5__::func_253(uParam0) == 0)
	{
		func_449(uParam0);
	}
	if (__LIB_5__::func_331(uParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(uParam0);
	switch (iVar2)
	{
		case 0:
			if (__LIB_5__::func_481(uParam0, iVar0, 0))
			{
				if (__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)))
				{
					PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26) && __LIB_0__::func_13(32768))
				{
					__LIB_5__::func_33(uParam0, 524288);
				}
				if (__LIB_4__::func_948(uParam0, 4))
				{
					if (!__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_0__::func_16(uParam0, iVar0);
						__LIB_4__::func_944(uParam0, 4);
					}
					__LIB_10__::func_922(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (__LIB_9__::func_447(uParam0))
			{
				if (__LIB_11__::func_63(uParam0))
				{
					if (__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_4__::func_969(uParam0, 4);
					}
					__LIB_5__::func_286(uParam0, iVar0, 2);
				}
			}
			else if (__LIB_10__::func_914(uParam0) >= uParam0->f_13144)
			{
				if (__LIB_4__::func_937(uParam0, 4))
				{
					__LIB_4__::func_969(uParam0, 4);
				}
				__LIB_5__::func_286(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (__LIB_5__::func_481(uParam0, iVar0, 2))
			{
				if (!__LIB_5__::func_258(uParam0))
				{
					__LIB_5__::func_286(uParam0, iVar0, 4);
					if (func_970(uParam0, iVar0, iVar1))
					{
						__LIB_5__::func_286(uParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_5__::func_482(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 3);
					if (func_972(uParam0, iVar0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 4);
						if (func_970(uParam0, iVar0, iVar1))
						{
							__LIB_5__::func_286(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_5__::func_52(uParam0))
			{
				func_972(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_972(uParam0, iVar0))
			{
				__LIB_5__::func_286(uParam0, iVar0, 4);
				if (func_970(uParam0, iVar0, iVar1))
				{
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_970(uParam0, iVar0, iVar1))
			{
				__LIB_5__::func_286(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_17__::func_526(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_11__::func_729(uParam0);
				if (__LIB_5__::func_331(uParam0, iVar1, 2))
				{
					if (__LIB_5__::func_483(uParam0, iVar1))
					{
						__LIB_9__::func_449(uParam0, iVar1);
					}
				}
			}
			if (__LIB_5__::func_481(uParam0, iVar0, 5))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 7))
				{
					if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
					{
						__LIB_9__::func_305(uParam0, __LIB_4__::func_939(uParam0));
					}
					__LIB_11__::func_645(uParam0, iVar1);
					__LIB_10__::func_929(uParam0);
					return true;
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						__LIB_1__::func_164(0);
					}
					__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 4194304);
				}
				if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_4__::func_948(uParam0, 8192)) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 6);
					}
				}
				if (__LIB_4__::func_937(uParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						__LIB_5__::func_599(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						__LIB_4__::func_969(uParam0, 268435456);
					}
				}
				if (__LIB_4__::func_948(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						__LIB_4__::func_958(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_17__::func_526(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_11__::func_729(uParam0);
				if (__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 2))
				{
					if (__LIB_5__::func_483(uParam0, __LIB_5__::func_475(uParam0)))
					{
						__LIB_9__::func_449(uParam0, __LIB_5__::func_475(uParam0));
					}
				}
			}
			if ((!__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_4__::func_948(uParam0, 8192)) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 5))
				{
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 7);
					}
				}
				else
				{
					__LIB_0__::func_0(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_5__::func_481(uParam0, iVar0, 5);
				__LIB_0__::func_16(uParam0);
			}
			break;
		case 7:
			if (__LIB_5__::func_481(uParam0, iVar0, 7))
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
				{
					__LIB_9__::func_305(uParam0, __LIB_4__::func_939(uParam0));
				}
				__LIB_11__::func_645(uParam0, iVar1);
				__LIB_10__::func_929(uParam0);
				return true;
			}
			break;
		default:
			__LIB_5__::func_286(uParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_456(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	__LIB_1__::func_336(&(uLocal_123[iVar1]), __LIB_0__::func_470(iVar0));
}

int func_461(int iParam0)
{
	struct<7> Var0;
	Var0 = { func_994(iParam0) };
	return Var0.f_6;
}

void func_462(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!vLocal_470[iParam0 /*3*/] == 0)
	{
		return;
	}
	vLocal_470[iParam0 /*3*/] = 1;
}

bool func_463(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	return vLocal_470[iParam0 /*3*/] == 3;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CS_DUTCH");
		case 1:
			return joaat("CS_MICAHBELL");
		case 2:
			return joaat("CS_HOSEAMATTHEWS");
		case 3:
			return joaat("CS_MOLLYOSHEA");
		case 4:
			return joaat("CS_MARYBETH");
		case 5:
			return joaat("CS_MRPEARSON");
		case 6:
			return joaat("CS_KAREN");
		case 7:
			return joaat("CS_REVSWANSON");
		case 8:
			return joaat("CS_SUSANGRIMSHAW");
		case 9:
			return joaat("CS_BILLWILLIAMSON");
		case 11:
			return joaat("CS_COLMODRISCOLL");
		case 10:
			return joaat("G_M_M_UNIDUSTER_01");
		case 12:
			return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
		case 13:
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
		case 14:
			return joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
		case 15:
			return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
		case 16:
			return joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
		case 17:
			return joaat("A_C_BLUEJAY_01");
		case 18:
			return joaat("A_C_VULTURE_01");
		case 19:
			return joaat("NORTHSTEAMER01X");
		case 20:
			return joaat("NORTHCOALCAR01X");
		case 21:
			return joaat("MIDLANDBOXCAR05X");
		case 22:
			return joaat("PRIVATEFLATCAR01X");
		case 23:
			return joaat("CABOOSE01X");
		case 24:
			return joaat("P_CHAIRFOLDING02X");
		case 25:
			return joaat("P_ADVDECOMPCOY02X");
		case 26:
			return joaat("P_CHAIR23X");
		case 27:
			return joaat("P_CRATE27X");
		case 33:
			return joaat("S_ROPEHOGTIEHANDSMEDIUM01X");
		case 34:
			return joaat("S_BULLET_SGPELLET");
		case 35:
			return joaat("P_CS_PLAYERSATCHEL");
		case 36:
			return joaat("P_CS_CAMERABAG01X");
		case 37:
			return joaat("P_CANDLE04X");
		case 38:
			return joaat("P_CS_SHOTGUN_BULLET");
		case 39:
			return joaat("P_NAILFILE01X");
		case 40:
			return joaat("P_CS_SHACKLELEG05X");
		case 41:
			return joaat("P_CS_CHAINLINK01X");
		case 42:
			return joaat("P_CS_RAG02X");
		case 43:
			return joaat("P_CANDLESTAND02X");
		case 28:
			return joaat("P_AMMOBOXLANCASTER02X");
		case 30:
			return joaat("P_LANTERN04X");
		case 31:
			return joaat("P_LANTERN09XMOTHS");
		case 29:
			return joaat("P_HITCHINGPOST01X");
		case 32:
			return joaat("P_WATERTROUGH03X");
		case 44:
			return joaat("P_CHAIR20X");
	}
	return 0;
}

void func_466(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!vLocal_470[iParam0 /*3*/] == 3)
	{
		return;
	}
	vLocal_470[iParam0 /*3*/] = 4;
}

void func_469(int iParam0)
{
	if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_1006[iParam0]))
	{
		TASK::REMOVE_COVER_POINT(iLocal_1006[iParam0]);
	}
}

int func_470(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 0;
		case 7:
			return 6;
		case 8:
			return 5;
		case 9:
			return 16;
		case 10:
			return 15;
		case 11:
			return 17;
		case 12:
			return 20;
		case 13:
			return 21;
		case 14:
			return 19;
		case 15:
			return 3;
	}
	return -1;
}

void func_471(var uParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_941[iParam1 /*2*/]))
	{
		if (bParam2)
		{
			__LIB_5__::func_335(uParam0, Local_941[iParam1 /*2*/]);
			__LIB_6__::func_908(&(uParam0->f_7375), Local_941[iParam1 /*2*/], 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(Local_941[iParam1 /*2*/]) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_941[iParam1 /*2*/])) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_941[iParam1 /*2*/], true))
		{
			if (__LIB_0__::func_27(Local_941[iParam1 /*2*/].f_1, 1))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_941[iParam1 /*2*/]));
			}
			else
			{
				OBJECT::DELETE_OBJECT(&(Local_941[iParam1 /*2*/]));
			}
		}
	}
}

void func_472()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_14.f_69)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_14.f_69[iVar0]) && ENTITY::_0x88AD6CC10D8D35B2(Local_14.f_69[iVar0])) && !ENTITY::_0xA7E51B53309EAC97(Local_14.f_69[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_14.f_69[iVar0]));
		}
		iVar0++;
	}
}

void func_473(int iParam0)
{
	if (!CAM::DOES_CAM_EXIST(iLocal_1009[iParam0]))
	{
		return;
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_1009[iParam0]))
	{
		CAM::SET_CAM_ACTIVE(iLocal_1009[iParam0], false);
	}
	if (CAM::IS_CAM_SHAKING(iLocal_1009[iParam0]))
	{
		CAM::STOP_CAM_SHAKING(iLocal_1009[iParam0], true);
	}
	CAM::DESTROY_CAM(iLocal_1009[iParam0], false);
}

void func_474(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	if (func_998(iParam1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_133[iParam1 /*6*/]))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_133[iParam1 /*6*/]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_133[iParam1 /*6*/], true))
			{
				iVar0 = PED::_GET_RIDER_OF_MOUNT(Local_133[iParam1 /*6*/], true);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (iVar0 == Global_35)
					{
						return;
					}
				}
				__LIB_5__::func_335(uParam0, Local_133[iParam1 /*6*/]);
				__LIB_6__::func_908(&(uParam0->f_7375), Local_133[iParam1 /*6*/], 0);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
					{
						if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_7375.f_804, sParam2))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, sParam2, Local_133[iParam1 /*6*/]);
						}
					}
				}
				if (func_470(iParam1) == -1)
				{
					if (iParam1 == 2 || iParam1 == 3)
					{
						iVar1 = -1;
						if (iParam1 == 2)
						{
							iVar1 = func_470(6);
						}
						else if (iParam1 == 3)
						{
							iVar1 = func_470(7);
						}
						if (!iVar1 == -1)
						{
							__LIB_1__::func_463(Local_133[iParam1 /*6*/], iVar1, 1, 1, 1);
						}
					}
					else if (iParam1 == 1)
					{
						__LIB_5__::func_595(uParam0, 1);
						__LIB_5__::func_593(7, 0);
						__LIB_5__::func_593(1, 0);
						Local_133[iParam1 /*6*/] = 0;
					}
					else
					{
						PED::DELETE_PED(&(Local_133[iParam1 /*6*/]));
					}
				}
				else
				{
					__LIB_4__::func_705(func_470(iParam1), 0);
					__LIB_0__::func_904(func_470(iParam1), 0);
					__LIB_11__::func_757(uParam0, func_470(iParam1), Local_133[iParam1 /*6*/], 0, !bParam3, 1, 0);
					Local_133[iParam1 /*6*/] = 0;
				}
			}
		}
	}
	Local_133[iParam1 /*6*/].f_4 = 0;
	func_943(iParam1, 0);
	Local_133[iParam1 /*6*/].f_3 = 0;
}

char* func_494(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 45:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "000_enter";
			}
			break;
		case 46:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "000_exit";
			}
			break;
		case 47:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "045_enter";
			}
			break;
		case 48:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "045_exit";
			}
			break;
		case 49:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "090_enter";
			}
			break;
		case 50:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "090_exit";
			}
			break;
		case 51:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "135_enter";
			}
			break;
		case 52:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "135_exit";
			}
			break;
		case 53:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "180_enter";
			}
			break;
		case 54:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "180_exit";
			}
			break;
		case 55:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "225_enter";
			}
			break;
		case 56:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "225_exit";
			}
			break;
		case 57:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "270_enter";
			}
			break;
		case 58:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "270_exit";
			}
			break;
		case 59:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_enter";
			}
			break;
		case 60:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_exit";
			}
			break;
		case 64:
			if (bParam1)
			{
				return "script_re@duel_winner@taunt";
			}
			else
			{
				return "chicken_shit_ped01";
			}
			break;
		case 65:
			if (bParam1)
			{
				return "MECH_LOCO_M@GENERIC@NORMAL@UNARMED@SINGLE_STEP@LONG@LF@-180";
			}
			else
			{
				return "step_face_180";
			}
			break;
		case 61:
			if (bParam1)
			{
				return "MECH_LOCO@GENERIC@HANDCUFFED";
			}
			else
			{
				return "idle";
			}
			break;
		case 62:
			if (bParam1)
			{
				return "MECH_LOCO_M@CHARACTER@ARTHUR@FIDGETS@WEATHER@SNOW_COLD@UNARMED";
			}
			else
			{
				return "rub_arms_b";
			}
			break;
		case 63:
			if (bParam1)
			{
				return "MECH_PICKUP@OBJECT";
			}
			else
			{
				return "loot";
			}
			break;
		case 66:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_enter";
			}
			break;
		case 67:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_loop";
			}
			break;
		case 68:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_exit";
			}
			break;
		case 69:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@ODRISCOLLS3@SWING@ARTHUR";
			}
			break;
		case 70:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@ODRISCOLLS3@SWING@SHACKLE";
			}
			break;
		case 71:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@ODRISCOLLS3@SWING@CHAIN";
			}
			break;
		case 72:
			if (bParam1)
			{
				return "mini_games@story@odr3@surgery_heat";
			}
			break;
		case 73:
			if (bParam1)
			{
				return "mini_games@story@odr3@surgery_gouge";
			}
			break;
		case 74:
			if (bParam1)
			{
				return "mini_games@story@odr3@surgery_pour";
			}
			break;
		case 75:
			if (bParam1)
			{
				return "mini_games@story@odr3@surgery_cauterize";
			}
			break;
		case 76:
			if (bParam1)
			{
				return "ai_react@male_stand@BIG_INTRO@FORWARD";
			}
			else
			{
				return "reaction_forward_big_intro_a";
			}
			break;
		case 77:
			if (bParam1)
			{
				return "amb_work@world_human_inspect@male_a@stand_enter";
			}
			else
			{
				return "enter_back";
			}
			break;
		case 78:
			if (bParam1)
			{
				return "amb_work@world_human_inspect@male_a@idle_b";
			}
			else
			{
				return "idle_f";
			}
			break;
		case 79:
			if (bParam1)
			{
				return "amb_work@world_human_inspect@male_a@stand_exit";
			}
			else
			{
				return "exit_front";
			}
			break;
		case 80:
			if (bParam1)
			{
				return "script_story@odr3@ig@ig18_ig19_pass_out_regain_consciousness_on_horse";
			}
			else
			{
				return "passed_out_loop_front_right_arthur";
			}
			break;
		case 81:
			if (bParam1)
			{
				return "script_story@odr3@ig@ig18_ig19_pass_out_regain_consciousness_on_horse";
			}
			else
			{
				return "weary_loop_arthur";
			}
			break;
	}
	return "";
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return iLocal_781[3];
		case 84:
			return iLocal_781[0];
		case 85:
			return iLocal_781[1];
		case 86:
			return iLocal_781[8];
		case 87:
			return iLocal_781[2];
		case 88:
			return iLocal_781[6];
		case 89:
			return Local_1269;
		case 90:
			return Local_1269.f_1;
	}
	return 0;
}

char* func_496(int iParam0)
{
	switch (iParam0)
	{
		case 91:
			return "odr3_s1_ride_to_meet";
		case 92:
			return "odr3_s1_odriscolls";
		case 93:
			return "odr3_s2_gps_to_overlook";
		case 94:
			return "odr3_s3_ride_river";
		case 95:
			return "odr3_s9_cme";
	}
	return "";
}

char* func_497(int iParam0)
{
	switch (iParam0)
	{
		case 96:
			return "script_odriscolls3_mini_game_swinging";
		case 97:
			return "script_surgery_heat";
		case 98:
			return "script_surgery_gouge";
		case 99:
			return "script_Surgery_Pour_with_requests";
		case 100:
			return "script_Surgery_Cauterize";
	}
	return "";
}

int func_500(bool bParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (bParam0)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_PISTOL_M1899"), 0, true))
		{
			iVar0 = joaat("WEAPON_PISTOL_M1899");
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_LEMAT"), 0, true))
		{
			iVar0 = joaat("WEAPON_REVOLVER_LEMAT");
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"), 0, true))
		{
			iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER");
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_PISTOL_MAUSER"), 0, true))
		{
			iVar0 = joaat("WEAPON_PISTOL_MAUSER");
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_PISTOL_SEMIAUTO"), 0, true))
		{
			iVar0 = joaat("WEAPON_PISTOL_SEMIAUTO");
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_PISTOL_VOLCANIC"), 0, true))
		{
			iVar0 = joaat("WEAPON_PISTOL_VOLCANIC");
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, true))
		{
			iVar0 = joaat("WEAPON_REVOLVER_SCHOFIELD");
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, true))
		{
			iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION");
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, true))
		{
			iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REPEATER_EVANS"), 0, true))
	{
		iVar0 = joaat("WEAPON_REPEATER_EVANS");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_RIFLE_SPRINGFIELD"), 0, true))
	{
		iVar0 = joaat("WEAPON_RIFLE_SPRINGFIELD");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_RIFLE_BOLTACTION"), 0, true))
	{
		iVar0 = joaat("WEAPON_RIFLE_BOLTACTION");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"), 0, true))
	{
		iVar0 = joaat("WEAPON_REPEATER_WINCHESTER");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REPEATER_HENRY"), 0, true))
	{
		iVar0 = joaat("WEAPON_REPEATER_HENRY");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REPEATER_CARBINE"), 0, true))
	{
		iVar0 = joaat("WEAPON_REPEATER_CARBINE");
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		if (bParam0)
		{
			iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		}
		else
		{
			iVar0 = joaat("WEAPON_RIFLE_SPRINGFIELD");
		}
	}
	return iVar0;
}

bool func_519(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 6:
		case 15:
		case 17:
		case 19:
		case 20:
		case 21:
			return true;
	}
	return false;
}

struct<4> func_551(int iParam0, int iParam1)
{
	return func_1068(iParam0, iParam1);
}

void func_705()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1221(0);
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
	func_1221(1);
}

void func_706()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_339(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_707()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1223(0);
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
	func_1223(1);
}

void func_708()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1223(0);
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
	func_1223(1);
}

void func_709()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_339(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_339(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_712(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_712(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_712(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_712(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_11__::func_837(iParam0, iParam1);
	return 1;
}

int func_753(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1267(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_339(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

Vector3 func_769(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1280();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1281(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_4__::func_718(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_792(var uParam0, int iParam1)
{
	func_1292(uParam0, iParam1);
	__LIB_5__::func_292(uParam0, iParam1, 26);
}

int func_793(var uParam0)
{
	if (func_941(uParam0) == 2)
	{
		if (!iLocal_1482[0] == 6)
		{
			func_1294(uParam0);
			if (!iLocal_1482[0] == 6)
			{
				return 0;
			}
		}
	}
	if (func_941(uParam0) == 1 || func_941(uParam0) == 2)
	{
		func_1295(Global_35, func_247(iLocal_1177), 2, 1073741824 /* Float: 2f */);
		func_1295(Local_133[6 /*6*/], func_551(0, 1), 2, 1073741824 /* Float: 2f */);
		func_1295(Local_133[7 /*6*/], func_551(0, 3), 2, 1073741824 /* Float: 2f */);
	}
	return 1;
}

int func_794(var uParam0)
{
	if (!func_941(uParam0) == 1)
	{
		__LIB_5__::func_571(uParam0, Local_133[11 /*6*/], 128);
		__LIB_5__::func_571(uParam0, Local_133[8 /*6*/], 128);
		__LIB_5__::func_571(uParam0, Local_133[9 /*6*/], 128);
	}
	func_462(91);
	func_173(0, 1);
	return 1;
}

int func_795(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (!func_463(91))
	{
		return 0;
	}
	__LIB_5__::func_262(&(uParam0->f_7375));
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == 0)
		{
			iVar1 = 8;
			sVar2 = "HoseaMatthews";
		}
		else if (iVar0 == 1)
		{
			iVar1 = 9;
			sVar2 = "MollyOshea";
		}
		else if (iVar0 == 2)
		{
			iVar1 = 11;
			sVar2 = "MrPearson";
		}
	else
	{
		}
		else
		{
			if (iVar1 == 9 && func_165(38))
			{
			}
			else
			{
				__LIB_5__::func_335(uParam0, Local_133[iVar1 /*6*/]);
				__LIB_6__::func_908(&(uParam0->f_7375), Local_133[iVar1 /*6*/], sVar2);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_7375.f_804, sVar2, false) == Local_133[iVar1 /*6*/])
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, sVar2, Local_133[iVar1 /*6*/]);
					}
				}
			}
			iVar0++;
		}
	}
	func_456(8);
	func_456(9);
	func_194(1, 1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1180))
	{
		TASK::_TASK_USE_SCENARIO_POINT(Local_133[8 /*6*/], iLocal_1180, 0, 0, false, true, 0, false, -1f, false);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_941[1 /*2*/], 666.46f, -1244.86f, 43.14f, -131.26f, true, false, true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1181))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_941[2 /*2*/]))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_941[2 /*2*/], 666.549f, -1243.185f, 43.1437f, -46f, true, false, true);
		}
		TASK::_TASK_USE_SCENARIO_POINT(Local_133[11 /*6*/], iLocal_1181, 0, 0, false, true, 0, false, -1f, false);
	}
	func_474(uParam0, 9, 0, 1);
	func_194(0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[2 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[2 /*6*/], func_845(0, 2), func_1297(0, 2), true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_133[2 /*6*/], 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[3 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[3 /*6*/], func_845(0, 4), func_1297(0, 4), true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_133[3 /*6*/], 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[3 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[3 /*6*/], func_845(0, 4), func_1297(0, 4), true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_133[3 /*6*/], 0);
	}
	func_169(0);
	__LIB_1__::func_718(7);
	func_167(1);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_133[7 /*6*/], joaat("WEAPON_UNARMED"), true, 0, false, false);
	WEAPON::_HIDE_PED_WEAPONS(Local_133[7 /*6*/], 2, false);
	PED::SET_PED_CONFIG_FLAG(Local_133[7 /*6*/], 130, false);
	PED::SET_PED_CONFIG_FLAG(Local_133[7 /*6*/], 315, false);
	PED::SET_PED_CONFIG_FLAG(Local_133[7 /*6*/], 297, true);
	PED::SET_PED_CONFIG_FLAG(Local_133[7 /*6*/], 317, true);
	PED::SET_PED_CONFIG_FLAG(Local_133[7 /*6*/], 359, true);
	return 1;
}

int func_796(var uParam0)
{
	float fVar0;
	int iVar1;
	PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), Local_133[1 /*6*/]);
	iLocal_1200 = func_1299(Global_35);
	iLocal_1201 = func_1299(Local_133[7 /*6*/]);
	if (__LIB_1__::func_322(func_1300(25)))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_1300(25)) >= 24 && iLocal_1200 >= 102)
		{
			__LIB_5__::func_239(func_1300(25), 1, 0);
		}
	}
	func_1303(uParam0);
	func_1304(uParam0);
	if (func_165(34))
	{
		fVar0 = (__LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_89.f_18), 1) / MISC::GET_DISTANCE_BETWEEN_COORDS(func_845(0, 1), VOLUME::_GET_VOLUME_COORDS(Local_89.f_18), true));
		fVar0 = __LIB_0__::func_251(((fVar0 * -1f) + 1f), 0f, 1f);
		__LIB_5__::func_375(6, 0, fVar0, &uLocal_1183);
	}
	else if (!func_165(30))
	{
		CLOCK::PAUSE_CLOCK(true, 0);
		func_456(30);
	}
	if (func_165(8))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]) || PED::IS_PED_FATALLY_INJURED(Local_133[1 /*6*/]))
		{
			__LIB_11__::func_66(uParam0, func_1300(17), "", 1, 0);
		}
	}
	if (func_165(9))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(6) /*6*/]))
		{
			__LIB_11__::func_66(uParam0, func_1300(18), "", 1, 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(7) /*6*/]))
		{
			__LIB_11__::func_66(uParam0, func_1300(19), "", 1, 0);
		}
	}
	func_1309(uParam0);
	func_1310(uParam0);
	func_1311();
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			func_1313(21);
			func_1314(0, Local_133[1 /*6*/]);
			func_1315(uParam0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 180f, false);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 1:
			if (__LIB_0__::func_394(Global_35, Local_133[1 /*6*/], 1))
			{
				if (!func_165(35))
				{
					if ((!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, false) && !WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"), 0, false)) && !WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"), 0, false))
					{
						__LIB_4__::func_7(Global_35, iLocal_781[1], -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					}
					func_456(35);
				}
				if (Local_133[6 /*6*/].f_2 == 27 && Local_133[7 /*6*/].f_2 == 27)
				{
					func_1318(0);
					func_1314(1, Local_133[7 /*6*/]);
					func_1315(uParam0, 1);
					__LIB_0__::func_900(func_470(7));
					__LIB_10__::func_930(uParam0, Local_133[7 /*6*/], joaat("COLOR_NEUTRAL"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
					func_1313(24);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_4__::func_952(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_165(37))
			{
				if ((iLocal_1120 == 0 && !__LIB_5__::func_236(1)) && !__LIB_0__::func_481(1))
				{
					__LIB_4__::func_89(&(vLocal_792[5 /*3*/]), 0);
					if (__LIB_1__::func_583(&(vLocal_792[5 /*3*/])) >= 16f)
					{
						func_1313(25);
						func_456(37);
					}
				}
			}
			if (!func_165(39))
			{
				if (iLocal_1200 >= 10)
				{
					if (!func_941(uParam0) == 1)
					{
						func_474(uParam0, 8, 0, 0);
						func_466(func_1323(8));
						func_471(uParam0, 1, 0);
						func_173(0, 0);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1180))
						{
							iLocal_1180 = 0;
						}
						func_474(uParam0, 11, 0, 0);
						func_466(func_1323(11));
						func_471(uParam0, 2, 0);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1181))
						{
							iLocal_1181 = 0;
						}
						func_456(39);
					}
					else
					{
						func_456(39);
					}
				}
			}
			else if (iLocal_1200 >= 79 || iLocal_1201 >= 79)
			{
				__LIB_4__::func_952(uParam0, 3);
			}
			break;
		case 3:
			func_462(11);
			func_462(10);
			func_462(13);
			func_462(92);
			if (((!func_463(11) || !func_463(10)) || !func_463(13)) || !func_463(92))
			{
			}
			else
			{
				if (func_1324(uParam0, 16, 23, 271))
				{
					iVar1 = 16;
					while (iVar1 <= 23)
					{
						ENTITY::SET_ENTITY_LOD_DIST(Local_133[iVar1 /*6*/], 350);
						iVar1++;
					}
					__LIB_4__::func_952(uParam0, 5);
				}
				Jump @1434; //curOff = 1063
				if (Local_133[16 /*6*/].f_2 == 15)
				{
					if (func_1299(Global_35) >= 94)
					{
						func_1325(16, 19, 26, 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(Local_133[7 /*6*/]))
				{
					if (iLocal_1200 >= 109 || iLocal_1201 >= 111)
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_21, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Local_133[7 /*6*/], Local_89.f_21, true, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_133[16 /*6*/]))
							{
								CAM::SET_GAMEPLAY_ENTITY_HINT(Local_133[16 /*6*/], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
								if (__LIB_11__::func_8(func_1300(25)))
								{
									__LIB_6__::func_900(func_1300(25), 0, 0);
								}
								func_1313(26);
							}
						}
						func_1325(16, 19, 28, 1);
						__LIB_4__::func_952(uParam0, 6);
					}
				}
				Jump @1434; //curOff = 1268
				if (!__LIB_5__::func_259(func_1300(26)) && !__LIB_1__::func_322(func_1300(26)))
				{
					__LIB_4__::func_89(&(vLocal_792[6 /*3*/]), 0);
					if (__LIB_1__::func_583(&(vLocal_792[6 /*3*/])) >= 1.5f)
					{
						__LIB_1__::func_104(&(uParam0->f_5310), func_1329(27), 0, -1, 0, 0);
						func_462(93);
						__LIB_4__::func_952(uParam0, 7);
					}
				}
				Jump @1434; //curOff = 1364
				func_1331();
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_18, true, 0))
				{
					if (__LIB_11__::func_8(func_1300(27)))
					{
						__LIB_6__::func_900(func_1300(27), 0, 0);
					}
					__LIB_4__::func_952(uParam0, 29);
					return 1;
				}
				Jump @1434; //curOff = 1424
				return 1;
			}
			return 0;
			default:
				break;
	}
}

int func_797(var uParam0)
{
	if (PED::IS_PED_IN_GROUP(Local_133[6 /*6*/]))
	{
		PED::REMOVE_PED_FROM_GROUP(Local_133[6 /*6*/]);
	}
	if (PED::IS_PED_IN_GROUP(Local_133[7 /*6*/]))
	{
		PED::REMOVE_PED_FROM_GROUP(Local_133[7 /*6*/]);
	}
	PED::REMOVE_GROUP(iLocal_1179);
	func_167(0);
	func_176(8);
	__LIB_10__::func_930(uParam0, Local_133[7 /*6*/], joaat("COLOR_NEUTRAL"), joaat("BLIP_STYLE_COMPANION"), 0, 1);
	func_167(0);
	return 1;
}

int func_799(var uParam0)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
	{
		PED::_SET_PED_ON_MOUNT(Global_35, Local_133[1 /*6*/], -1, true);
		PED::_0x2208438012482A1A(Global_35, true, false);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[1 /*6*/], func_845(1, 1), func_1297(1, 1), true, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_133[1 /*6*/], false);
		ENTITY::_0x9587913B9E772D29(Local_133[1 /*6*/], 0);
		PED::_0x2208438012482A1A(Local_133[1 /*6*/], false, false);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[6 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(6) /*6*/]))
	{
		PED::_SET_PED_ON_MOUNT(Local_133[6 /*6*/], Local_133[func_1308(6) /*6*/], -1, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[func_1308(6) /*6*/], func_845(0, 5), func_1297(0, 5), true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_133[func_1308(6) /*6*/], 0);
		PED::_0x2208438012482A1A(Local_133[func_1308(6) /*6*/], true, false);
		PED::_0x2208438012482A1A(Local_133[6 /*6*/], true, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[7 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(7) /*6*/]))
	{
		PED::_SET_PED_ON_MOUNT(Local_133[7 /*6*/], Local_133[func_1308(7) /*6*/], -1, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[func_1308(7) /*6*/], func_845(0, 6), func_1297(0, 6), true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_133[func_1308(7) /*6*/], 0);
		PED::_0x2208438012482A1A(Local_133[func_1308(7) /*6*/], true, false);
		PED::_0x2208438012482A1A(Local_133[7 /*6*/], true, false);
	}
	func_169(0);
	func_194(1, 1);
	func_456(8);
	func_456(9);
	CLOCK::SET_CLOCK_TIME(9, 0, 0);
	vVar0 = { func_1336(1, 2) };
	__LIB_3__::func_618(vVar0, 500f, 0, 0, 0, 0, 0);
	return 1;
}

int func_800(var uParam0)
{
	func_462(84);
	func_462(85);
	func_462(86);
	func_462(func_1323(5));
	func_462(func_461(4));
	func_462(45);
	if (!func_463(45))
	{
		return 0;
	}
	__LIB_4__::func_944(uParam0, 33554432);
	func_1325(16, 23, 0, 1);
	__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 1);
	return 1;
}

int func_801(var uParam0)
{
	if (!__LIB_1__::func_583(&(vLocal_792[0 /*3*/])) >= 0.2f)
	{
		return 0;
	}
	CAM::_0x6A4D224FC7643941(&Local_1202);
	Local_1202.f_19 = Local_133[6 /*6*/];
	func_943(6, 1);
	func_943(7, 1);
	WEAPON::_0x72D4CB5DB927009C(iLocal_781[0], -1, 0);
	func_1337(1);
	CLOCK::PAUSE_CLOCK(false, 0);
	func_176(30);
	return 1;
}

int func_802(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar5;
	vector3 vVar8;
	if (!__LIB_0__::func_899(&(vLocal_792[11 /*3*/])))
	{
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			__LIB_4__::func_89(&(vLocal_792[11 /*3*/]), 0);
		}
	}
	else if (__LIB_1__::func_583(&(vLocal_792[11 /*3*/])) >= 3f)
	{
		__LIB_11__::func_648(uParam0, func_1338(20), 1, 0);
	}
	func_1340();
	if (func_165(56))
	{
		HUD::_0xC9CAEAEEC1256E54(iLocal_131);
	}
	if (func_165(48))
	{
		func_1341(0);
	}
	if (!func_165(30))
	{
		if (CLOCK::GET_CLOCK_HOURS() >= 9)
		{
			CLOCK::PAUSE_CLOCK(true, 0);
			func_456(30);
		}
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
	if (func_165(49))
	{
		PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
		CAM::_CLAMP_GAMEPLAY_CAM_YAW(-45f, 45f);
		CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-40f, -16f);
		if (CAM::_0xA24C1D341C6E0D53(1, 0, 1) && !__LIB_11__::func_822(Global_35))
		{
			ENTITY::SET_ENTITY_HEADING(Global_35, 100f);
		}
	}
	if (func_165(56))
	{
		func_1341(2);
	}
	if (func_165(9))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(6) /*6*/]))
		{
			__LIB_11__::func_66(uParam0, func_1300(18), "", 1, 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(7) /*6*/]))
		{
			__LIB_11__::func_66(uParam0, func_1300(19), "", 1, 0);
		}
	}
	if (!func_165(53))
	{
		if (__LIB_11__::func_8(func_1300(31)))
		{
			if (!__LIB_0__::func_899(&(vLocal_792[14 /*3*/])))
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_1300(31)) == 1)
				{
					__LIB_4__::func_89(&(vLocal_792[14 /*3*/]), 0);
				}
			}
			else if (!func_165(52))
			{
				if (__LIB_1__::func_583(&(vLocal_792[14 /*3*/])) >= 3.3f)
				{
					if (!Local_1169.f_1 == 0)
					{
						func_1343(7, &Local_1169, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6));
						func_456(52);
					}
				}
			}
			else if (!func_165(53))
			{
				func_1344(&Local_1169);
				if (Local_1169.f_1 == 0)
				{
					func_456(53);
				}
			}
		}
	}
	func_1345(uParam0);
	func_1309(uParam0);
	func_1346(uParam0);
	func_1310(uParam0);
	if (!func_165(51))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			if ((WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"), 0, false) || WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, false)) || WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"), 0, false))
			{
				__LIB_5__::func_511(6);
			}
			else
			{
				__LIB_4__::func_7(Global_35, iLocal_781[1], -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			func_456(51);
		}
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			func_1318(1);
			__LIB_10__::func_935(uParam0, Local_133[7 /*6*/], 1);
			iVar0 = 6;
			while (iVar0 <= 7)
			{
				if (__LIB_0__::func_665(Global_35, Local_133[iVar0 /*6*/], 1, 1) >= 100f)
				{
					if (iVar0 == 6)
					{
						Var1 = { func_551(0, 5) };
					}
					else if (iVar0 == 7)
					{
						Var1 = { func_551(0, 6) };
					}
					func_1295(Local_133[iVar0 /*6*/], Var1, 2, 1073741824 /* Float: 2f */);
				}
				iVar0++;
			}
			func_1349();
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 1:
			if (!func_165(46))
			{
				if (func_463(func_1323(5)) && func_463(func_461(4)))
				{
					if (func_1324(uParam0, 5, 5, 1))
					{
						func_1350(4);
						func_456(46);
					}
				}
			}
			vVar5 = { VOLUME::_GET_VOLUME_SCALE(Local_89.f_16) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), VOLUME::_GET_VOLUME_COORDS(Local_89.f_16), true) < (vVar5.x * 1.2f))
			{
				if (Local_133[5 /*6*/].f_2 == 1)
				{
					TASK::TASK_FLY_TO_COORD(Local_133[5 /*6*/], 3f, 369.1f, -12.8f, 107.4f, 1, 0);
					func_943(5, 29);
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (Global_36.f_2 >= 130f)
				{
					func_1351(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6), &(vLocal_792[15 /*3*/]), 20f, 15f, 6.2f, 6.1f, 6f, 0, 0, 1, 1, 1);
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Local_133[1 /*6*/], Local_89.f_6, true, 0) && !__LIB_16__::func_776(Global_35, 501393341))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_456(48);
				if (__LIB_1__::func_587(7))
				{
					__LIB_1__::func_721(7);
				}
				if (__LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6), 1) < (__LIB_8__::func_150(Local_89.f_6) * 1f))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				}
				else if (__LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6), 1) < (__LIB_8__::func_150(Local_89.f_6) * 1.25f))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
				{
					vVar8 = { VOLUME::_GET_VOLUME_COORDS(Local_89.f_6) };
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar8, true) <= 20f && MISC::ABSF((Global_36.f_2 - vVar8.z)) <= 5f)
					{
						PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 1f, 1);
						if (!PED::GET_PED_CONFIG_FLAG(Local_133[1 /*6*/], 136, true))
						{
							PED::SET_PED_CONFIG_FLAG(Local_133[1 /*6*/], 136, true);
						}
						if (!func_165(50))
						{
							if (__LIB_0__::func_665(Global_35, Local_133[1 /*6*/], 1, 1) >= 3f)
							{
								func_1355();
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(1, 6), 1f, -1, 0.25f, 0, 40000f);
								TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, true, 0, -1f, false);
								func_1356(Local_133[1 /*6*/], 0);
								func_456(50);
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_16, true, 0))
				{
					func_1337(0);
					func_466(93);
					func_1357();
					func_1358();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
					func_456(49);
					MAP::REMOVE_BLIP(&(iLocal_775[0]));
					__LIB_0__::func_92(0);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_PUT_AWAY"), false);
					func_1318(2);
					if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
					{
						CAM::_0xB8B207C34285E978(&Local_1202);
					}
					__LIB_4__::func_952(uParam0, 2);
				}
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_PUT_AWAY"), false);
			if (CAM::_0x927B810E43E99932(&Local_1202))
			{
				CAM::_0x7B0279170961A73F(&Local_1202);
				if (!PED::IS_PED_ON_MOUNT(Local_133[6 /*6*/]))
				{
					CAM::_0x0A5A4F1979ABB40E(&Local_1202);
				}
			}
			if (!func_165(58))
			{
				if (!__LIB_11__::func_822(Global_35))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
					if (MISC::IS_PC_VERSION())
					{
						func_1359(35);
					}
					else
					{
						func_1359(34);
					}
					func_1360(36);
					__LIB_0__::func_900(func_470(6));
					__LIB_0__::func_900(func_470(7));
					func_456(58);
				}
				else
				{
					UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, func_1361(0)))
			{
				if (CAM::_0x927B810E43E99932(&Local_1202))
				{
					CAM::_0x0A5A4F1979ABB40E(&Local_1202);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, Local_133[6 /*6*/], 21030, false);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_133[6 /*6*/], func_1362(0), true, 2000, 2000, 2000, 0);
				__LIB_4__::func_952(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_PUT_AWAY"), false);
			func_462(11);
			func_462(10);
			func_462(12);
			func_462(func_1323(20));
			func_462(func_1323(21));
			func_462(func_1323(22));
			if (((((!func_463(11) || !func_463(10)) || !func_463(12)) || !func_463(func_1323(20))) || !func_463(func_1323(21))) || !func_463(func_1323(22)))
			{
				return 0;
			}
			if (func_1324(uParam0, 16, 16, 2063))
			{
				__LIB_4__::func_952(uParam0, 4);
			}
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_PUT_AWAY"), false);
			if (func_1324(uParam0, 17, 22, 2063))
			{
				__LIB_4__::func_980(&(uParam0->f_7375), "MultiStart");
				__LIB_4__::func_952(uParam0, 5);
			}
			break;
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_PUT_AWAY"), false);
			if (!iLocal_1482[1] == 6)
			{
				func_1364(uParam0);
			}
			CAM::_0x05BD5E4088B30A66(-5.8f, 26.64f);
			CAM::_SET_FIRST_PERSON_CAM_PITCH_RANGE(-34f, -20f);
			__LIB_4__::func_89(&(vLocal_792[16 /*3*/]), 0);
			if (__LIB_1__::func_583(&(vLocal_792[16 /*3*/])) >= 5f && (__LIB_0__::func_899(&(vLocal_792[17 /*3*/])) && __LIB_1__::func_583(&(vLocal_792[17 /*3*/])) >= 5f))
			{
				if (iLocal_1482[1] == 6)
				{
					__LIB_4__::func_952(uParam0, 29);
				}
			}
			break;
		case 29:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_PUT_AWAY"), false);
			return 1;
	}
	return 0;
}

int func_803(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_PUT_AWAY"), false);
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[6 /*6*/]))
	{
		TASK::CLEAR_PED_TASKS(Local_133[6 /*6*/], true, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[7 /*6*/]))
	{
		TASK::CLEAR_PED_TASKS(Local_133[7 /*6*/], true, false);
	}
	func_176(9);
	__LIB_4__::func_969(uParam0, 33554432);
	func_466(91);
	func_466(45);
	func_474(uParam0, 5, 0, 0);
	func_471(uParam0, 4, 0);
	func_466(func_1323(5));
	func_466(func_461(4));
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iLocal_781[1], 0, true))
	{
		__LIB_4__::func_7(Global_35, iLocal_781[1], -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	CAM::_0x798BE43C9393632B(&Local_1202);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[6 /*6*/], true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[7 /*6*/], true);
	func_169(1);
	__LIB_0__::func_92(1);
	return 1;
}

int func_804(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = func_941(uParam0);
	func_462(85);
	if (!func_165(59))
	{
		func_462(11);
		func_462(10);
		func_462(12);
		func_462(func_1323(20));
		func_462(func_1323(21));
		func_462(func_1323(22));
		if (((((!func_463(11) || !func_463(10)) || !func_463(12)) || !func_463(func_1323(20))) || !func_463(func_1323(21))) || !func_463(func_1323(22)))
		{
			return 0;
		}
		if (!func_1324(uParam0, 16, 16, 2063))
		{
			bVar0 = false;
		}
		if (!func_1324(uParam0, 17, 22, 2079))
		{
			bVar0 = false;
		}
		if (!func_463(85))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			return 0;
		}
		else
		{
			func_456(59);
		}
	}
	if (iVar1 == 2)
	{
		if (!iLocal_1482[1] == 6)
		{
			if (!func_1364(uParam0))
			{
				return 0;
			}
		}
		else
		{
			__LIB_5__::func_494(&(uParam0->f_7375), "MultiStart", 0);
			__LIB_4__::func_568(&(uParam0->f_7375), "MultiStart");
		}
	}
	if (!__LIB_1__::func_707(joaat("WEAPON_KIT_BINOCULARS"), 1, 0))
	{
		func_339(iLocal_781[0], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	__LIB_4__::func_7(Global_35, iLocal_781[1], -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iLocal_781[1], true, 0, false, false);
	func_456(51);
	return 1;
}

int func_805(var uParam0)
{
	func_1341(2);
	if (func_165(56))
	{
		HUD::_0xC9CAEAEEC1256E54(iLocal_131);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	__LIB_11__::func_823(func_1336(6, 1), 30f);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_941[7 /*2*/]))
	{
		Local_941[7 /*2*/] = WEAPON::_CREATE_WEAPON_OBJECT(iLocal_781[8], -1, func_1336(6, 7), true, 1f);
	}
	__LIB_6__::func_902(uParam0, 2);
	__LIB_6__::func_902(uParam0, 4);
	func_462(87);
	if (PED::IS_PED_ON_MOUNT(Local_133[6 /*6*/]))
	{
		PED::_REMOVE_PED_FROM_MOUNT(Local_133[6 /*6*/], true, false);
	}
	if (PED::IS_PED_ON_MOUNT(Local_133[7 /*6*/]))
	{
		PED::_REMOVE_PED_FROM_MOUNT(Local_133[7 /*6*/], true, false);
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	__LIB_5__::func_33(uParam0, 524288);
	func_164(1);
	return 1;
}

int func_806(var uParam0)
{
	func_466(84);
	func_462(87);
	__LIB_4__::func_7(Global_35, iLocal_781[1], -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 0);
	CAM::DO_SCREEN_FADE_OUT(0);
	GRAPHICS::ANIMPOSTFX_PLAY(func_198(0));
	return 1;
}

int func_807(var uParam0)
{
	CAM::_0x8910C24B7E0046EC();
	func_1341(8);
	if (func_165(62))
	{
		func_1369(0);
		if (func_165(64))
		{
			func_1370(1f);
		}
	}
	func_1309(uParam0);
	func_1310(uParam0);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (!__LIB_4__::func_979(uParam0) == 1)
			{
				__LIB_11__::func_59(uParam0, 1);
			}
			func_182();
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			func_194(1, 0);
			HUD::_HIDE_HUD_COMPONENT(iLocal_131);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 1:
			__LIB_0__::func_401(joaat("M_08_ODR3_CAMP"));
			func_474(uParam0, 19, "G_M_M_UNIDUSTER_01", 0);
			func_466(86);
			__LIB_5__::func_335(uParam0, Local_941[7 /*2*/]);
			__LIB_6__::func_908(&(uParam0->f_7375), Local_941[7 /*2*/], "w_shotgun_doubleBarrel01");
			func_471(uParam0, 7, 0);
			func_201(1);
			func_466(85);
			func_176(9);
			func_474(uParam0, 1, 0, 0);
			__LIB_8__::func_810(7);
			func_474(uParam0, 2, 0, 0);
			func_474(uParam0, 3, 0, 0);
			func_474(uParam0, 6, 0, 0);
			func_474(uParam0, 7, 0, 0);
			func_466(0);
			func_466(1);
			func_474(uParam0, 16, 0, 0);
			func_474(uParam0, 18, 0, 0);
			func_474(uParam0, 17, 0, 0);
			func_474(uParam0, 20, 0, 0);
			func_474(uParam0, 22, 0, 0);
			func_474(uParam0, 21, 0, 0);
			func_466(11);
			func_466(13);
			func_176(16);
			func_176(15);
			HUD::_HIDE_HUD_COMPONENT(iLocal_131);
			func_1372(1, 1000);
			ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
			ENTITY::SET_ENTITY_COORDS(Global_35, func_845(2, 4), true, false, true, true);
			func_1372(0, 0);
			func_178();
			__LIB_4__::func_952(uParam0, 3);
			break;
		case 3:
			if (!func_1324(uParam0, 24, 31, 31))
			{
				return 0;
			}
			if (!Local_1371[0 /*5*/].f_1 == 5)
			{
				func_1369(0);
				return 0;
			}
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_133[24 /*6*/], true, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_133[25 /*6*/], true, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_133[26 /*6*/], true, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_133[27 /*6*/], true, true);
			func_456(62);
			__LIB_4__::func_952(uParam0, 4);
			break;
		case 4:
			__LIB_5__::func_106(uParam0, Local_133[24 /*6*/], "ODR3_ODRISCOLL1", 0);
			__LIB_5__::func_106(uParam0, Local_133[25 /*6*/], "ODR_PED6", 0);
			func_1373();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			func_1374(0, 1);
			func_1372(1, BUILTIN::FLOOR((10f * 1000f)));
			func_462(func_461(5));
			HUD::_HIDE_HUD_COMPONENT(iLocal_131);
			__LIB_4__::func_952(uParam0, 5);
			break;
		case 5:
			CAM::_0x90DA5BA5C2635416();
			func_1369(1);
			func_1369(5);
			func_1369(2);
			func_462(func_461(5));
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1371[0 /*5*/], false))
			{
				func_1372(0, 0);
				func_1325(24, 27, 1, 1);
				__LIB_0__::func_105(1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_133[25 /*6*/]))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_133[25 /*6*/], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				}
				__LIB_4__::func_952(uParam0, 6);
			}
			break;
		case 6:
			func_1369(1);
			func_1369(5);
			func_1369(2);
			if (((!Local_1371[1 /*5*/].f_1 == 5 || !Local_1371[5 /*5*/].f_1 == 5) || !Local_1371[2 /*5*/].f_1 == 5) || !func_463(func_461(5)))
			{
			}
			else
			{
				func_1375();
				__LIB_4__::func_89(&(vLocal_792[20 /*3*/]), 1);
				__LIB_4__::func_89(&(vLocal_792[22 /*3*/]), 1);
				__LIB_4__::func_952(uParam0, 7);
				Jump @932; //curOff = 897
				func_1341(7);
				if (func_1376(uParam0))
				{
					__LIB_4__::func_952(uParam0, 29);
				}
				Jump @932; //curOff = 922
				return 1;
			}
			return 0;
			default:
				break;
	}
}

int func_808(var uParam0)
{
	func_178();
	if (((!ENTITY::IS_ENTITY_DEAD(Local_133[28 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_133[29 /*6*/])) && !ENTITY::IS_ENTITY_DEAD(Local_133[30 /*6*/])) && !ENTITY::IS_ENTITY_DEAD(Local_133[31 /*6*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_133[28 /*6*/], 136, false);
		PED::SET_PED_CONFIG_FLAG(Local_133[29 /*6*/], 136, false);
		PED::SET_PED_CONFIG_FLAG(Local_133[30 /*6*/], 136, false);
		PED::SET_PED_CONFIG_FLAG(Local_133[31 /*6*/], 136, false);
	}
	VOLUME::_DELETE_VOLUME(Local_89.f_30);
	VOLUME::_DELETE_VOLUME(Local_89.f_32);
	GRAPHICS::ANIMPOSTFX_STOP(func_198(0));
	func_180(uParam0, 0);
	func_466(33);
	func_466(87);
	func_466(61);
	__LIB_0__::func_400(joaat("M_08_ODR3_CAMP"));
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	func_176(14);
	func_194(0, 0);
	HUD::_DISPLAY_HUD_COMPONENT(iLocal_131);
	return 1;
}

int func_809(var uParam0)
{
	if (!func_1324(uParam0, 24, 31, 31))
	{
		return 0;
	}
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 0);
	__LIB_5__::func_595(uParam0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!INVENTORY::_0x7C7E4AB748EA3B07())
		{
			func_201(1);
		}
	}
	func_164(1);
	return 1;
}

int func_810(var uParam0)
{
	int iVar0;
	func_163(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	__LIB_4__::func_239(Global_35);
	func_456(13);
	__LIB_5__::func_106(uParam0, Local_133[24 /*6*/], "ODR_PED7", 0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	iVar0 = 24;
	while (iVar0 <= 31)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_133[iVar0 /*6*/], joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_133[iVar0 /*6*/], joaat("WEAPON_UNARMED"), true, 1, false, false);
		WEAPON::_HIDE_PED_WEAPONS(Local_133[iVar0 /*6*/], 2, true);
		iVar0++;
	}
	__LIB_0__::func_92(0);
	return 1;
}

int func_811(var uParam0)
{
	func_1325(24, 27, 1, 1);
	func_188(1);
	__LIB_1__::func_561(&(vLocal_792[0 /*3*/]));
	func_194(2, 1);
	GRAPHICS::ANIMPOSTFX_PLAY(func_198(1));
	return 1;
}

int func_812(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<15> Var5;
	bool bVar20;
	bool bVar21;
	func_1341(8);
	func_163(1);
	func_1341(6);
	func_1310(uParam0);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (!__LIB_0__::func_899(&(vLocal_792[0 /*3*/])))
			{
				func_462(94);
				func_462(func_461(19));
				func_1325(24, 27, 1, 1);
				__LIB_11__::func_823(func_845(4, 0), 100f);
				iVar0 = 28;
				while (iVar0 <= 31)
				{
					if (iVar0 == 28)
					{
						Var1 = { func_551(4, 0) };
					}
					else if (iVar0 == 29)
					{
						Var1 = { func_551(4, 1) };
					}
					else if (iVar0 == 30)
					{
						Var1 = { func_551(4, 2) };
					}
					else if (iVar0 == 31)
					{
						Var1 = { func_551(4, 3) };
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[iVar0 /*6*/], Var1, Var1.f_3, true, false, true);
					ENTITY::_0x9587913B9E772D29(Local_133[iVar0 /*6*/], 0);
					iVar0++;
				}
				PED::_SET_PED_ON_MOUNT(Local_133[24 /*6*/], Local_133[28 /*6*/], -1, true);
				PED::_SET_PED_ON_MOUNT(Local_133[25 /*6*/], Local_133[29 /*6*/], -1, true);
				PED::_SET_PED_ON_MOUNT(Local_133[26 /*6*/], Local_133[30 /*6*/], -1, true);
				PED::_SET_PED_ON_MOUNT(Local_133[27 /*6*/], Local_133[31 /*6*/], -1, true);
				TASK::_0x4E806A395D43A458(1);
				ENTITY::_0x18FF3110CF47115D(Global_35, 3, 1);
				ENTITY::_0x18FF3110CF47115D(Global_35, 16, 0);
				ENTITY::_0x18FF3110CF47115D(Global_35, 1, 0);
				ENTITY::_0x18FF3110CF47115D(Global_35, 14, 1);
				TASK::TASK_CARRIABLE(Global_35, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(Global_35, 1), Local_133[28 /*6*/], 0, 0);
				CLOCK::SET_CLOCK_TIME(15, 0, 0);
				MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
				__LIB_4__::func_568(&(uParam0->f_7375), "MultiStart");
				__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 0);
			}
			else
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(func_845(4, 0));
				if ((!func_463(94) || !func_463(func_461(19))) || !__LIB_1__::func_583(&(vLocal_792[0 /*3*/])) > 0.5f)
				{
				}
				else
				{
					func_1378(0, 1056964608 /* Float: 0.5f */);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					Var5 = { func_1379(0) };
					CAM::POINT_CAM_AT_COORD(iLocal_1009[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_133[28 /*6*/], Var5.f_3));
					CAM::SET_CAM_NEAR_CLIP(iLocal_1009[0], 0.01f);
					CAM::SET_CAM_FAR_CLIP(iLocal_1009[0], 50f);
					func_1380();
					ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
					func_1380();
					func_1350(19);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_941[19 /*2*/], Local_133[28 /*6*/], PED::GET_PED_BONE_INDEX(Local_133[28 /*6*/], 0), 0f, -0.625f, 0.7f, -121.68f, 0f, 0f, false, false, false, false, 2, true, false, false);
					iVar0 = 24;
					while (iVar0 <= 27)
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_133[iVar0 /*6*/], func_496(94), 0, 4194344, -1, 0, 0, -1);
						PED::_0x2208438012482A1A(Local_133[iVar0 /*6*/], false, false);
						PED::FORCE_PED_MOTION_STATE(Local_133[func_1308(iVar0) /*6*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
						iVar0++;
					}
					func_1313(39);
					PED::_SET_PED_COMPONENT_DISABLED(Local_133[func_1308(24) /*6*/], -220774791, 1);
					PED::_UPDATE_PED_VARIATION(Local_133[func_1308(24) /*6*/], false, true, true, true, false);
					__LIB_1__::func_561(&(vLocal_792[0 /*3*/]));
					__LIB_4__::func_952(uParam0, 1);
					Jump @1637; //curOff = 809
					if (__LIB_0__::func_899(&(vLocal_792[24 /*3*/])) && __LIB_1__::func_583(&(vLocal_792[24 /*3*/])) < 4f)
					{
					}
					else
					{
						__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 0);
						__LIB_1__::func_561(&(vLocal_792[24 /*3*/]));
						func_1372(1, 1000);
						func_1380();
						if (__LIB_1__::func_583(&(vLocal_792[0 /*3*/])) >= 5f)
						{
							if (!__LIB_5__::func_259(func_1300(39)) && !__LIB_1__::func_322(func_1300(39)))
							{
								if (func_1372(0, 1000))
								{
									func_471(uParam0, 19, 0);
									func_466(func_461(19));
									func_182();
									CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
									func_466(94);
									__LIB_1__::func_561(&(vLocal_792[0 /*3*/]));
									__LIB_4__::func_952(uParam0, 2);
								}
							}
						}
						Jump @1637; //curOff = 996
						if (!__LIB_0__::func_899(&(vLocal_792[0 /*3*/])))
						{
							CLOCK::SET_CLOCK_TIME(21, 0, 0);
							MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
							__LIB_11__::func_823(func_845(5, 0), 100f);
							iVar0 = 28;
							while (iVar0 <= 31)
							{
								if (iVar0 == 28)
								{
									Var1 = { func_551(5, 0) };
								}
								else if (iVar0 == 29)
								{
									Var1 = { func_551(5, 1) };
								}
								else if (iVar0 == 30)
								{
									Var1 = { func_551(5, 2) };
								}
								else if (iVar0 == 31)
								{
									Var1 = { func_551(5, 3) };
								}
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[iVar0 /*6*/], Var1, Var1.f_3, true, false, true);
								ENTITY::_0x9587913B9E772D29(Local_133[iVar0 /*6*/], 0);
								iVar0++;
							}
							func_206(1);
							__LIB_4__::func_89(&(vLocal_792[25 /*3*/]), 0);
							__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 0);
						}
						else
						{
							bVar20 = true;
							if (!func_165(75))
							{
								if (!func_165(74))
								{
									if (STREAMING::_0x513F8AA5BF2F17CF(-864.3f, -735.8f, 59.7f, 20f, 0) || __LIB_1__::func_583(&(vLocal_792[25 /*3*/])) >= 5f)
									{
										__LIB_4__::func_89(&(vLocal_792[25 /*3*/]), 1);
										func_456(74);
									}
									else
									{
										bVar20 = false;
									}
								}
								else
								{
									if (__LIB_1__::func_583(&(vLocal_792[25 /*3*/])) >= 20f)
									{
										bVar21 = true;
									}
									if (!STREAMING::_0xCF45DF50C7775F2A())
									{
										bVar21 = true;
									}
									if (STREAMING::_0x0909F71B5C070797())
									{
										bVar21 = true;
									}
									if (bVar21)
									{
										func_456(75);
									}
								}
							}
							func_1369(19);
							if (!func_165(75))
							{
								bVar20 = false;
							}
							if (!func_1381(1))
							{
								bVar20 = false;
							}
							if (!Local_1371[19 /*5*/].f_1 == 5)
							{
								bVar20 = false;
							}
							if (!bVar20)
							{
								return 0;
							}
							func_1382(-1, 1);
							func_173(1, 1);
							func_1350(15);
							ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
							PED::_REMOVE_PED_FROM_MOUNT(Global_35, false, false);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
							func_1374(19, 1);
							func_1372(1, 1000);
							__LIB_4__::func_952(uParam0, 3);
						}
						Jump @1637; //curOff = 1493
						CAM::_0x90DA5BA5C2635416();
						if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1371[19 /*5*/], "player_zero"))
						{
							CAM::DO_SCREEN_FADE_OUT(0);
							iLocal_1339 = 0;
							__LIB_4__::func_952(uParam0, 29);
						}
						Jump @1637; //curOff = 1536
						if (func_938(1))
						{
							if (func_940(1, 1))
							{
								func_184(uParam0, 24, 31, 0);
								ENTITY::DETACH_ENTITY(Global_35, true, true);
								TASK::_0x9EBD34958AB6F824(Global_35);
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
								func_466(12);
								CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
								func_182();
								CLOCK::PAUSE_CLOCK(false, 0);
								__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 1);
								return 1;
							}
						}
					}
				}
				return 0;
			}
			default:
				break;
	}
}

int func_813(var uParam0)
{
	func_1372(0, 0);
	if (!__LIB_1__::func_583(&(vLocal_792[0 /*3*/])) >= 3f)
	{
		return 0;
	}
	func_206(0);
	func_178();
	func_462(96);
	func_462(69);
	func_462(70);
	func_462(71);
	__LIB_0__::func_92(1);
	return 1;
}

int func_814(var uParam0)
{
	int iVar0;
	iVar0 = func_941(uParam0);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (!func_1381(1))
	{
		return 0;
	}
	func_173(1, 1);
	func_1350(15);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!INVENTORY::_0x7C7E4AB748EA3B07())
		{
			func_201(1);
		}
	}
	func_188(1);
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 0);
	GRAPHICS::ANIMPOSTFX_PLAY(func_198(1));
	func_164(1);
	return 1;
}

int func_815(var uParam0)
{
	__LIB_6__::func_901(uParam0, 524288);
	if (!func_170(1))
	{
		return 0;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		__LIB_4__::func_980(&(uParam0->f_7375), "MultiStart");
	}
	else
	{
		__LIB_4__::func_568(&(uParam0->f_7375), "MultiStart");
	}
	func_462(96);
	func_462(69);
	func_462(70);
	func_462(71);
	STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@ARTHUR");
	STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@SHACKLE");
	STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@CHAIN");
	if (!func_165(80))
	{
		func_472();
		func_1382(-1, 1);
		Local_941[10 /*2*/] = Local_14.f_69[0];
		Local_941[8 /*2*/] = Local_14.f_69[1];
		ENTITY::SET_ENTITY_COLLISION(Local_941[8 /*2*/], false, false);
		Local_941[9 /*2*/] = Local_14.f_69[2];
		ENTITY::SET_ENTITY_COLLISION(Local_941[9 /*2*/], false, false);
		Local_941[12 /*2*/] = Local_14.f_69[3];
		ENTITY::SET_ENTITY_VISIBLE(Local_941[12 /*2*/], false);
		func_1350(13);
		ENTITY::SET_ENTITY_COORDS(Local_941[13 /*2*/], -860.023f, -742.223f, 56.771f, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Local_941[13 /*2*/], -12.96f, 177f, -180f, 2, true);
		func_456(79);
		func_456(80);
	}
	if (!func_941(uParam0) == 1)
	{
		if (!iLocal_1482[2] == 6)
		{
			func_1384(uParam0);
			if (!iLocal_1482[2] == 6)
			{
				return 0;
			}
		}
	}
	MISC::CLEAR_AREA(func_1385(4), 20f, 1065787);
	CLOCK::SET_CLOCK_TIME(21, 5, 0);
	CLOCK::PAUSE_CLOCK(true, 0);
	func_1372(1, 3000);
	func_456(13);
	__LIB_4__::func_89(&(vLocal_792[30 /*3*/]), 1);
	__LIB_0__::func_105(1);
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
	MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
	func_946();
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	func_1350(11);
	iLocal_1339 = 0;
	return 1;
}

int func_816(var uParam0)
{
	bool bVar0;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	bVar0 = true;
	if (!func_938(1))
	{
		bVar0 = false;
	}
	func_1369(7);
	func_1369(8);
	if (!Local_1371[7 /*5*/].f_1 == 5 || !Local_1371[8 /*5*/].f_1 == 5)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	ENTITY::_0xEBDC12861D079ABA(Local_941[16 /*2*/], 1);
	func_184(uParam0, 0, 55, 0);
	func_1350(14);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_941[14 /*2*/], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 30226), func_1362(3), func_1362(0), false, false, false, false, 2, true, false, false);
	CLOCK::SET_CLOCK_TIME(20, 50, 0);
	CLOCK::PAUSE_CLOCK(true, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 1);
	func_171(0);
	Local_1123[0 /*6*/].f_2 = 0f;
	Local_1123[0 /*6*/].f_3 = 0f;
	Local_1123[0 /*6*/].f_4 = -1f;
	Local_1123[0 /*6*/].f_5 = 1f;
	Local_1123[1 /*6*/].f_2 = 0f;
	Local_1123[1 /*6*/].f_3 = 0f;
	Local_1123[1 /*6*/].f_4 = -1f;
	Local_1123[1 /*6*/].f_5 = 1f;
	ENTITY::SET_ENTITY_VISIBLE(Local_941[15 /*2*/], true);
	return 1;
}

int func_817(var uParam0)
{
	struct<31> Var0;
	bool bVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	HUD::_0xC9CAEAEEC1256E54(iLocal_131);
	func_163(1);
	func_1341(8);
	func_1341(9);
	func_1386();
	func_1310(uParam0);
	if (func_165(81) && !func_165(82))
	{
		if (CLOCK::GET_CLOCK_HOURS() == 21)
		{
			CLOCK::PAUSE_CLOCK(true, 0);
			func_456(82);
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1009[1]))
	{
		func_1387();
	}
	if (func_1388())
	{
		func_1389("swing", fLocal_1225);
		func_1389("bend", fLocal_1226);
		func_1390("start_swing_left", func_165(78));
	}
	switch (iLocal_1224)
	{
		case 0:
			func_1369(7);
			func_1369(8);
			if (__LIB_1__::func_583(&(vLocal_792[0 /*3*/])) >= 3f)
			{
				func_1315(uParam0, 5);
				HUD::_HIDE_HUD_COMPONENT(iLocal_131);
				CLOCK::SET_CLOCK_TIME(17, 0, 0);
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
				fLocal_1168 = 0.1f;
				func_940(1, 1);
				__LIB_11__::func_59(uParam0, 4);
				func_1374(7, 1);
				iLocal_1224 = 1;
			}
			break;
		case 1:
			func_1369(7);
			func_1369(8);
			CAM::_0x90DA5BA5C2635416();
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1371[7 /*5*/]))
			{
				func_1374(8, 1);
				CLOCK::SET_CLOCK_TIME(20, 50, 0);
				MISC::_SET_WEATHER_TYPE(joaat("OVERCASTDARK"), true, true, false, 0f, false);
				iLocal_1224 = 2;
			}
			break;
		case 2:
			func_1369(7);
			func_1369(8);
			if (!func_165(76))
			{
				if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_941[10 /*2*/], true, false), 0.1f))
				{
					UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
					func_1359(41);
					func_456(76);
				}
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1371[8 /*5*/], "ARTHUR"))
			{
				if ((((((func_463(96) && func_463(69)) && func_463(70)) && func_463(71)) && STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@ARTHUR")) && STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@SHACKLE")) && STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@CHAIN"))
				{
					Var0.f_6 = -1082130432;
					Var0.f_9 = -1082130432;
					Var0.f_1 = joaat("DEFAULT");
					Var0 = joaat("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@ARTHUR");
					Var0.f_30 = "Idle";
					TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, func_497(96), &Var0, -859.605f, -744.087f, 58.047f, func_1362(0), 2, 0, 0, 0, 128, 0);
					PED::_0x2208438012482A1A(Global_35, true, false);
					Var0 = joaat("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@SHACKLE");
					TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Local_941[8 /*2*/], func_497(96), &Var0, -859.605f, -744.087f, 58.047f, func_1362(0), 2, 0, 0, 0, 128, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_941[8 /*2*/], true);
					Var0 = joaat("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@CHAIN");
					TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Local_941[9 /*2*/], func_497(96), &Var0, -859.605f, -744.087f, 58.047f, func_1362(0), 2, 0, 0, 0, 128, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_941[9 /*2*/], true);
					func_182();
					func_1378(1, 0.5f);
					func_1387();
					func_456(15);
					UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
					iLocal_1224 = 3;
				}
			}
			break;
		case 3:
			PAD::ENABLE_CONTROL_ACTION(0, func_1361(5), true);
			if (!__LIB_0__::func_139(iLocal_129))
			{
				iLocal_129 = __LIB_1__::func_877(func_1300(1), func_1361(5), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				__LIB_1__::func_522(iLocal_129, 0, 1, 1);
			}
			if (!PAD::GET_CONTROL_NORMAL(0, func_1361(5)) == 0f)
			{
				if (func_1388() && func_1393())
				{
					if (PAD::GET_CONTROL_NORMAL(0, func_1361(5)) < 0f)
					{
						func_456(78);
					}
					else
					{
						func_176(78);
					}
					func_1390("start_swing_left", func_165(78));
					func_1394("Swing_Progression");
					__LIB_4__::func_89(&(vLocal_792[29 /*3*/]), 1);
					__LIB_1__::func_281(&iLocal_129, 1, 1);
					SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
					iLocal_1224 = 4;
				}
			}
			break;
		case 4:
			func_1369(9);
			if (func_1388() && func_1393())
			{
				fLocal_1227 = ((PAD::GET_CONTROL_NORMAL(0, func_1361(5)) + 1f) * 0.5f);
				if (iLocal_1233 == 1)
				{
					fLocal_1227 = __LIB_0__::func_251(fLocal_1227, 0f, 1f);
				}
				else if (iLocal_1233 == 2)
				{
					fLocal_1227 = __LIB_0__::func_251(fLocal_1227, 0.5f, 1f);
				}
				else
				{
					fLocal_1227 = 0.5f;
				}
				if (fLocal_1227 < fLocal_1228)
				{
					bVar34 = true;
				}
				fVar35 = MISC::ABSF((fLocal_1227 - fLocal_1228));
				fVar36 = ((fVar35 * 4f) * MISC::GET_FRAME_TIME());
				if (bVar34)
				{
					fLocal_1228 = (fLocal_1228 - fVar36);
				}
				else
				{
					fLocal_1228 = (fLocal_1228 + fVar36);
				}
				fLocal_1226 = fLocal_1228;
				if (func_165(90))
				{
					fLocal_1230 = 1f;
				}
				else
				{
					if (fLocal_1229 < fLocal_1230)
					{
						bVar37 = true;
					}
					fVar35 = MISC::ABSF((fLocal_1230 - fLocal_1229));
					fVar36 = ((fVar35 * __LIB_0__::func_514(bVar37, 1.25f, 0.75f)) * MISC::GET_FRAME_TIME());
					if (bVar37)
					{
						fLocal_1229 = (fLocal_1229 + fVar36);
					}
					else
					{
						fLocal_1229 = (fLocal_1229 - fVar36);
					}
				}
				fLocal_1225 = fLocal_1229;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1329733664))
				{
					iLocal_1233 = 1;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1593132626))
				{
					iLocal_1233 = 2;
				}
				else
				{
					iLocal_1233 = 0;
				}
				if ((iLocal_1233 == 1 && !func_165(88)) || (iLocal_1233 == 2 && !func_165(89)))
				{
					__LIB_1__::func_561(&(vLocal_792[28 /*3*/]));
					func_176(89);
					func_176(88);
					func_176(84);
					func_176(85);
					func_176(86);
					func_176(87);
					if (iLocal_1233 == 1)
					{
						func_456(88);
					}
					else if (iLocal_1233 == 2)
					{
						func_456(89);
					}
				}
				else if (iLocal_1233 == 0)
				{
				}
				if ((iLocal_1233 == 1 && func_165(88)) || (iLocal_1233 == 2 && func_165(89)))
				{
					if (!func_165(85) && !func_165(87))
					{
						if (!func_165(84))
						{
							if ((iLocal_1233 == 1 && fLocal_1228 < (0.5f - 0.125f)) || (iLocal_1233 == 2 && fLocal_1228 > (0.5f + 0.125f)))
							{
								__LIB_4__::func_89(&(vLocal_792[27 /*3*/]), 0);
								if (__LIB_1__::func_583(&(vLocal_792[27 /*3*/])) >= 0.1f)
								{
									func_456(84);
								}
							}
							else if (__LIB_0__::func_899(&(vLocal_792[27 /*3*/])))
							{
								__LIB_9__::func_774(&(vLocal_792[27 /*3*/]));
							}
						}
						else if (!func_165(86))
						{
							fLocal_1230 = __LIB_0__::func_251((fLocal_1230 + 0.25f), 0f, 1f);
							func_456(86);
						}
					}
					if (!func_165(85))
					{
						if ((iLocal_1233 == 1 && fLocal_1227 > (0.5f + 0.125f)) || (iLocal_1233 == 2 && fLocal_1227 < (0.5f - 0.125f)))
						{
							__LIB_4__::func_89(&(vLocal_792[26 /*3*/]), 0);
							if (__LIB_1__::func_583(&(vLocal_792[26 /*3*/])) >= 0.4f)
							{
								func_456(85);
							}
						}
						else if (__LIB_0__::func_899(&(vLocal_792[26 /*3*/])))
						{
							__LIB_9__::func_774(&(vLocal_792[26 /*3*/]));
						}
					}
					else if (!func_165(87))
					{
						fLocal_1230 = __LIB_0__::func_251((fLocal_1230 - 0.4f), 0f, 1f);
						__LIB_1__::func_561(&(vLocal_792[26 /*3*/]));
						func_456(87);
					}
				}
				else if (iLocal_1233 == 0)
				{
					if (__LIB_0__::func_899(&(vLocal_792[26 /*3*/])))
					{
						__LIB_1__::func_561(&(vLocal_792[26 /*3*/]));
					}
					if (__LIB_0__::func_899(&(vLocal_792[27 /*3*/])))
					{
						__LIB_1__::func_561(&(vLocal_792[27 /*3*/]));
					}
					if (!func_165(90))
					{
						if (func_165(89))
						{
							if (__LIB_0__::func_139(iLocal_1232))
							{
								__LIB_1__::func_281(&iLocal_1232, 1, 1);
							}
							func_1397(1);
						}
						else if (func_165(88))
						{
							if (__LIB_0__::func_139(iLocal_1231))
							{
								__LIB_1__::func_281(&iLocal_1231, 1, 1);
							}
							func_1397(2);
						}
					}
					func_176(89);
					func_176(88);
					func_176(84);
					func_176(85);
					func_176(86);
					func_176(87);
				}
				if (fLocal_1227 == 0.5f)
				{
					__LIB_4__::func_89(&(vLocal_792[28 /*3*/]), 0);
					if (__LIB_1__::func_583(&(vLocal_792[28 /*3*/])) >= 0.7f)
					{
						fLocal_1230 = __LIB_0__::func_251((fLocal_1230 - (1f * MISC::GET_FRAME_TIME())), 0f, 1f);
					}
				}
				else
				{
					__LIB_1__::func_561(&(vLocal_792[28 /*3*/]));
				}
				if (fLocal_1225 >= 0.98f)
				{
					if (!__LIB_0__::func_139(iLocal_130) && !func_165(90))
					{
						iLocal_130 = __LIB_1__::func_877(func_1300(4), func_1361(8), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1046849350))
						{
							__LIB_1__::func_522(iLocal_130, 0, 0, 1);
						}
					}
					else
					{
						if (__LIB_0__::func_139(iLocal_130))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1046849350))
							{
								__LIB_1__::func_522(iLocal_130, 0, 1, 1);
							}
							else
							{
								__LIB_1__::func_522(iLocal_130, 0, 0, 1);
							}
							if (__LIB_1__::func_732(iLocal_130, 1))
							{
								__LIB_1__::func_281(&iLocal_130, 1, 1);
								if (__LIB_0__::func_139(iLocal_1231))
								{
									__LIB_1__::func_281(&iLocal_1231, 1, 1);
								}
								if (__LIB_0__::func_139(iLocal_1232))
								{
									__LIB_1__::func_281(&iLocal_1232, 1, 1);
								}
								func_456(90);
							}
						}
						if (func_165(90))
						{
							if (!func_165(92))
							{
								if (iLocal_1233 == 1)
								{
									func_456(92);
								}
							}
							else if (iLocal_1233 == 0)
							{
								iLocal_1224 = 5;
							}
						}
					}
				}
				else if (__LIB_0__::func_139(iLocal_130))
				{
					__LIB_1__::func_281(&iLocal_130, 1, 1);
				}
			}
			break;
		case 5:
			if (func_1374(9, 1))
			{
				func_462(97);
				func_462(72);
				UIFEED::_0x6035E8FBCA32AC5E();
				func_466(96);
				func_466(69);
				func_466(70);
				func_466(71);
				__LIB_11__::func_59(uParam0, 5);
				iLocal_1224 = 6;
			}
			break;
		case 6:
			if (CAM::DOES_CAM_EXIST(iLocal_1009[1]))
			{
				func_182();
			}
			func_1369(10);
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1371[9 /*5*/]))
			{
				if (func_1374(10, 1))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_941[12 /*2*/], true);
					CLOCK::PAUSE_CLOCK(false, 0);
					func_456(81);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_818(var uParam0)
{
	func_1399(8);
	return 1;
}

int func_819(var uParam0)
{
	bool bVar0;
	func_173(1, 1);
	bVar0 = true;
	if (!func_170(1))
	{
		bVar0 = false;
	}
	func_462(97);
	func_462(72);
	if (!func_463(97) || !func_463(72))
	{
		bVar0 = false;
	}
	if (!func_1381(1))
	{
		bVar0 = false;
	}
	else if (!func_165(1))
	{
		func_1350(14);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_941[14 /*2*/], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 30226), func_1362(3), func_1362(0), false, false, false, false, 2, true, false, false);
		func_1382(-1, 1);
		Local_941[10 /*2*/] = Local_14.f_69[0];
		Local_941[8 /*2*/] = Local_14.f_69[1];
		Local_941[9 /*2*/] = Local_14.f_69[2];
		Local_941[12 /*2*/] = Local_14.f_69[3];
		func_1350(13);
		func_1350(11);
		func_1350(15);
		func_456(1);
	}
	if (func_165(1))
	{
		func_1369(10);
		if (!Local_1371[10 /*5*/].f_1 == 5)
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!INVENTORY::_0x7C7E4AB748EA3B07())
		{
			func_201(1);
		}
	}
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 0);
	func_1374(10, 1);
	func_456(15);
	func_188(1);
	func_171(0);
	func_940(1, 1);
	GRAPHICS::ANIMPOSTFX_PLAY(func_198(1));
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	func_164(1);
	return 1;
}

int func_820(var uParam0)
{
	CLOCK::PAUSE_CLOCK(false, 0);
	fLocal_1168 = 0.2f;
	return 1;
}

int func_821(var uParam0)
{
	Local_1235 = 0;
	func_940(1, 1);
	return 1;
}

int func_822(var uParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	HUD::_0xC9CAEAEEC1256E54(iLocal_131);
	func_163(1);
	func_1386();
	PAD::_SET_CONTROL_CONTEXT(5, joaat("ODRISCOLLS3SURGERY"));
	if (!func_165(94))
	{
		func_1315(uParam0, 5);
		func_456(94);
	}
	func_1310(uParam0);
	func_1341(9);
	func_1341(8);
	func_1369(10);
	func_1369(11);
	func_1369(12);
	func_1369(13);
	if (!func_165(93))
	{
		if (CLOCK::GET_CLOCK_HOURS() >= 21 && CLOCK::GET_CLOCK_MINUTES() >= 0)
		{
			CLOCK::PAUSE_CLOCK(true, 0);
			func_456(93);
		}
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (func_1400())
			{
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			if (func_1401())
			{
				__LIB_4__::func_952(uParam0, 3);
			}
			break;
		case 3:
			if (func_1402())
			{
				func_462(func_1323(32));
				func_462(83);
				__LIB_4__::func_952(uParam0, 4);
			}
			break;
		case 4:
			if (func_1403())
			{
				if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
				{
					SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
				}
				func_1404();
				return 1;
			}
			break;
	}
	return 0;
}

int func_823(var uParam0)
{
	func_1399(12);
	return 1;
}

int func_824(var uParam0)
{
	bool bVar0;
	func_1386();
	bVar0 = true;
	if (!func_170(1))
	{
		bVar0 = false;
	}
	if (!func_1381(1))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		func_201(1);
	}
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 0);
	if (!func_165(1))
	{
		func_1382(-1, 1);
		Local_941[10 /*2*/] = Local_14.f_69[0];
		Local_941[8 /*2*/] = Local_14.f_69[1];
		Local_941[9 /*2*/] = Local_14.f_69[2];
		Local_941[12 /*2*/] = Local_14.f_69[3];
		func_456(1);
	}
	func_456(15);
	func_456(100);
	func_456(14);
	func_173(1, 1);
	func_1350(11);
	func_1350(15);
	func_1404();
	PED::_SET_PED_COMPONENT_DISABLED(Global_35, -675377005, 1);
	PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
	GRAPHICS::ANIMPOSTFX_PLAY(func_198(1));
	func_164(1);
	return 1;
}

int func_825(var uParam0)
{
	bool bVar0;
	int iVar1;
	func_1386();
	HUD::_0xC9CAEAEEC1256E54(iLocal_131);
	func_163(1);
	func_462(func_1323(32));
	if (!func_463(func_1323(32)))
	{
		return 0;
	}
	bVar0 = true;
	iVar1 = 717;
	if (!func_941(uParam0) == 0)
	{
		iVar1 |= 16;
	}
	if (!func_1324(uParam0, 32, 32, iVar1))
	{
		bVar0 = false;
	}
	func_462(83);
	if (!func_463(83))
	{
		bVar0 = false;
	}
	if (!func_165(101) && ENTITY::DOES_ENTITY_EXIST(Local_133[32 /*6*/]))
	{
		func_1350(17);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_941[17 /*2*/], true);
		ENTITY::_0xEBDC12861D079ABA(Local_941[17 /*2*/], 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_941[17 /*2*/], true);
		func_456(101);
	}
	if (!func_165(101))
	{
		return 0;
	}
	func_1369(14);
	func_1369(15);
	if (!Local_1371[14 /*5*/].f_1 == 5 || !Local_1371[15 /*5*/].f_1 == 5)
	{
		return 0;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[32 /*6*/]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(Local_133[32 /*6*/], true, true);
		PED::SET_PED_CONFIG_FLAG(Local_133[32 /*6*/], 138, true);
		PED::SET_PED_CONFIG_FLAG(Local_133[32 /*6*/], 21, true);
		ENTITY::_0x18FF3110CF47115D(Local_133[32 /*6*/], 7, 0);
		ENTITY::_SET_ENTITY_HEALTH(Local_133[32 /*6*/], 61, 0);
		__LIB_5__::func_106(uParam0, Local_133[32 /*6*/], "ODR_PED1", 0);
		func_943(32, 29);
		func_1405(32, 1, 0);
		__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(Local_133[32 /*6*/], true, false));
		__LIB_4__::func_239(Local_133[32 /*6*/]);
	}
	func_206(1);
	MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, true, 30f, false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	HUD::_HIDE_HUD_COMPONENT(iLocal_131);
	func_188(1);
	__LIB_11__::func_824(&(Local_89.f_33), joaat("VOLBOX"));
	return 1;
}

int func_826(var uParam0)
{
	int iVar0;
	func_1386();
	HUD::_0xC9CAEAEEC1256E54(iLocal_131);
	if (func_941(uParam0) == 0)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[13 /*5*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1371[13 /*5*/]) || ANIMSCENE::_0x8D81E7824B7753F7(Local_1371[13 /*5*/], "s_Hold_Wound_After_Cauterize", 1))
			{
				iVar0 = 1;
			}
			else if (ANIMSCENE::_0xF94692EB9DC15D74(Local_1371[13 /*5*/], 0) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1371[13 /*5*/], false))
			{
				iVar0 = 1;
			}
			if (!iVar0 == 1)
			{
				return 0;
			}
		}
	}
	if (!func_941(uParam0) == 0)
	{
		__LIB_4__::func_89(&(vLocal_792[2 /*3*/]), 0);
	}
	if (!Local_1371[14 /*5*/].f_1 == 7)
	{
		func_1374(14, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_941[17 /*2*/], false);
	}
	if (!func_941(uParam0) == 0)
	{
		if (!__LIB_1__::func_583(&(vLocal_792[2 /*3*/])) >= 1f)
		{
			return 0;
		}
		else
		{
			__LIB_1__::func_561(&(vLocal_792[2 /*3*/]));
		}
	}
	func_1408(0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	func_171(1);
	func_1409();
	__LIB_9__::func_160(-100f, 0, 0, 1);
	__LIB_9__::func_159(-100f, 0, 0, 1);
	__LIB_9__::func_158(-100f, 0, 0, 1);
	return 1;
}

int func_827(var uParam0)
{
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "odr3_basement", true, 1);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), false);
	func_1341(11);
	func_1341(12);
	func_1341(8);
	func_1310(uParam0);
	func_1386();
	if (func_165(100))
	{
		if (func_165(15))
		{
			func_176(15);
			func_456(16);
		}
	}
	if (!func_165(103))
	{
		func_1315(uParam0, 5);
		func_456(103);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(iLocal_1009[2]))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				func_182();
			}
			if (func_1410())
			{
				HUD::_DISPLAY_HUD_COMPONENT(iLocal_131);
				func_1399(13);
				CLOCK::PAUSE_CLOCK(false, 0);
				func_1399(14);
				func_1399(15);
				if (STREAMING::_IS_IMAP_ACTIVE(-1192199739))
				{
					STREAMING::_REMOVE_IMAP(-1192199739);
				}
				if (!STREAMING::_IS_IMAP_ACTIVE(-65072454))
				{
					STREAMING::_REQUEST_IMAP(-65072454);
				}
				__LIB_4__::func_952(uParam0, 29);
				return 1;
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_828(var uParam0)
{
	func_177();
	func_472();
	func_1381(0);
	if (PATHFIND::_0xDE0EA444735C1368(Local_89.f_20))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_89.f_20);
	}
	func_173(1, 0);
	return 1;
}

int func_829(var uParam0)
{
	bool bVar0;
	__LIB_5__::func_593(7, 0);
	__LIB_4__::func_958(uParam0, 1);
	bVar0 = true;
	if (!func_170(1))
	{
		bVar0 = false;
	}
	if (!func_1324(uParam0, 20, 23, 565))
	{
		bVar0 = false;
	}
	func_462(func_461(15));
	func_462(func_461(11));
	func_462(func_461(17));
	if ((!func_463(func_461(15)) || !func_463(func_461(11))) || !func_463(func_461(17)))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	Local_133[1 /*6*/] = __LIB_4__::func_957(uParam0);
	__LIB_4__::func_945(uParam0, 1);
	func_188(1);
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		func_201(1);
	}
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 0);
	func_456(16);
	__LIB_4__::func_7(Global_35, joaat("WEAPON_THROWN_THROWING_KNIVES"), 3, 1, 0, 1f, 0f, 0);
	func_206(1);
	func_1404();
	func_173(1, 1);
	func_1350(11);
	func_1350(15);
	PED::_SET_PED_COMPONENT_DISABLED(Global_35, -675377005, 1);
	PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
	GRAPHICS::ANIMPOSTFX_PLAY(func_198(1));
	return 1;
}

int func_830(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "odr3_basement", true, 1);
	__LIB_4__::func_89(&(vLocal_792[35 /*3*/]), 0);
	bVar0 = true;
	func_1409();
	if (((((((((((((!func_463(76) || !func_463(77)) || !func_463(78)) || !func_463(79)) || !func_463(func_1323(20))) || !func_463(func_1323(21))) || !func_463(func_1323(22))) || !func_463(func_1323(23))) || !func_463(func_461(20))) || !func_463(func_461(19))) || !func_463(func_461(18))) || !func_463(func_1323(54))) || !func_463(func_1323(55))) || !func_1411(0))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 1581;
	if (!func_941(uParam0) == 0)
	{
		iVar1 |= 16;
	}
	if (!func_1324(uParam0, 20, 23, iVar1))
	{
		bVar0 = false;
	}
	if (!func_1324(uParam0, 33, 53, iVar1))
	{
		bVar0 = false;
	}
	else if (!func_165(137))
	{
		CAM::_0x6A4D224FC7643941(&Local_1202);
		Local_1202.f_19 = Local_133[34 /*6*/];
		func_456(137);
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar2 = 20;
	while (iVar2 <= 23)
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_133[iVar2 /*6*/], 48, true);
		if (iVar2 == 20 || iVar2 == 23)
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(Local_133[iVar2 /*6*/], joaat("WORLD_ANIMAL_HORSE_RESTING"), -1, false, 0, -1f, false);
		}
		iVar2++;
	}
	func_1350(19);
	func_1350(18);
	ENTITY::FREEZE_ENTITY_POSITION(Local_941[18 /*2*/], true);
	__LIB_0__::func_635(1024);
	CLOCK::PAUSE_CLOCK(true, 0);
	__LIB_9__::func_219(1);
	MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, true, 30f, false);
	func_164(0);
	func_940(1, 0);
	func_173(2, 1);
	return 1;
}

int func_831(var uParam0)
{
	vector3 vVar0;
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "odr3_basement", true, 1);
	func_456(14);
	iLocal_1271 = 0;
	func_1414(uParam0);
	iLocal_1272 = 0;
	__LIB_2__::func_181(&iLocal_1272, 1);
	func_1350(23);
	func_1350(24);
	func_1350(25);
	func_1350(26);
	func_168(1);
	func_456(129);
	vVar0.x = Local_89.f_29;
	vVar0.f_2 = 11;
	AICOVERPOINT::_0x733077295AB51304(&vVar0);
	func_163(0);
	__LIB_9__::func_160(-100f, 0, 0, 1);
	__LIB_9__::func_159(-100f, 0, 0, 1);
	__LIB_9__::func_158(-100f, 0, 0, 1);
	return 1;
}

int func_832(var uParam0)
{
	vector3 vVar0;
	bool bVar4;
	int iVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 1);
	func_1416();
	func_1386();
	if (!func_165(107))
	{
		func_1315(uParam0, 5);
		func_456(107);
	}
	if (!func_165(115))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_133[1 /*6*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
			{
				Local_1015[6 /*13*/].f_11 = 46;
				func_1318(6);
				func_1315(uParam0, 6);
				func_456(115);
			}
		}
	}
	func_1417();
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ENTER")))
		{
			AUDIO::STOP_PED_SPEAKING(Global_35, true);
			func_456(108);
		}
	}
	else if (!func_165(138))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ODRISC3_HORSE");
		func_456(138);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 253, true);
	PED::SET_PED_RESET_FLAG(Global_35, 21, true);
	if (func_1418(60, 36))
	{
		if (!func_165(128))
		{
			if (!func_165(140))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_133[34 /*6*/]) && ENTITY::IS_ENTITY_DEAD(Local_133[34 /*6*/])) && (ENTITY::DOES_ENTITY_EXIST(Local_133[36 /*6*/]) && ENTITY::IS_ENTITY_DEAD(Local_133[36 /*6*/])))
				{
					func_1419(uParam0, joaat("DST3_KILLCAPTORS"));
					func_456(128);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_941[19 /*2*/]))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(Local_941[19 /*2*/], 7, 1);
	}
	if (func_165(122))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "Injury", true, 1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Injury", 1f, 1);
		}
		else
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "odr3_outside", true, 1);
		}
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "odr3_basement", true, 1);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 151, true);
	PATHFIND::_0xCF213A5FC3ABFC08(-878f, 715f, 220f);
	func_1414(uParam0);
	func_1420(uParam0);
	func_1309(uParam0);
	func_1310(uParam0);
	func_1421(uParam0);
	func_1422();
	func_1369(18);
	if (__LIB_0__::func_899(&(vLocal_792[44 /*3*/])))
	{
		if (__LIB_1__::func_592(&(vLocal_792[44 /*3*/])) >= 10000)
		{
			func_1359(67);
			__LIB_1__::func_561(&(vLocal_792[44 /*3*/]));
		}
	}
	func_1341(12);
	if (!func_165(125))
	{
		func_1341(8);
	}
	if ((!func_165(30) && CLOCK::GET_CLOCK_HOURS() < 4) && CLOCK::GET_CLOCK_HOURS() >= 3)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
		func_456(30);
	}
	if (func_165(118) && !func_165(139))
	{
		func_1359(68);
		func_456(139);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (func_1423(33, 46, 17) == __LIB_11__::func_825(33, 36))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				__LIB_0__::func_172(Local_89.f_33);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_4, true, 0))
			{
			}
			else
			{
				__LIB_5__::func_106(uParam0, Local_133[34 /*6*/], "ODR_PED2", 0);
				func_1313(47);
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 1))
				{
					func_1426(3, 1056964608 /* Float: 0.5f */);
					func_1427(3, 1);
					CAM::RENDER_SCRIPT_CAMS(true, true, 1500, true, false, 0);
					if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
					{
						bVar4 = true;
					}
					if (bVar4)
					{
						iVar5 = 24;
					}
					else
					{
						iVar5 = 0;
					}
					func_1428(Global_35, 76, 1.5f, -1f, -1, iVar5);
					PED::_0x2208438012482A1A(Global_35, true, false);
				}
				else
				{
					if (CAM::_0xDD0B7C5AE58F721D(&Local_1202))
					{
						if (!CAM::_0x927B810E43E99932(&Local_1202))
						{
							CAM::_0xB8B207C34285E978(&Local_1202);
						}
					}
					func_456(106);
				}
				func_940(1, 0);
				__LIB_5__::func_106(uParam0, Local_133[34 /*6*/], "ODR_PED2", 0);
				func_1313(47);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				__LIB_4__::func_89(&(vLocal_792[36 /*3*/]), 1);
				func_1325(33, 36, 30, 1);
				func_1325(37, 38, 30, 1);
				__LIB_4__::func_952(uParam0, 2);
				Jump @2690; //curOff = 1000
				if (CAM::_0x927B810E43E99932(&Local_1202))
				{
					CAM::_0x7B0279170961A73F(&Local_1202);
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
				if (func_165(106))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
				}
				else
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				}
				if (!func_165(109))
				{
					if (func_1429(Global_35, 76))
					{
						if (func_1430(Global_35, 76) >= 0.6f)
						{
							TASK::STOP_ANIM_TASK(Global_35, func_494(76, 1), func_494(76, 0), -1f);
							func_456(109);
						}
					}
				}
				bVar6 = true;
				func_1431(uParam0);
				if (!func_1432())
				{
					bVar6 = false;
				}
				if (!func_1431(uParam0))
				{
					bVar6 = false;
				}
				if (!func_1324(uParam0, 54, 55, 1))
				{
					bVar6 = false;
				}
				if (func_1429(Global_35, 76))
				{
					func_1433(Global_35, 76, 0.4f);
				}
				if (__LIB_1__::func_583(&(vLocal_792[36 /*3*/])) >= 7f && bVar6)
				{
					iLocal_1271 = 2;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					if (CAM::DOES_CAM_EXIST(iLocal_1009[3]))
					{
						__LIB_3__::func_595(-868.7f, -747.5f, 60.2f);
						CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
						func_473(3);
					}
					if (CAM::_0x927B810E43E99932(&Local_1202))
					{
						CAM::_0x0A5A4F1979ABB40E(&Local_1202);
						CAM::_0x798BE43C9393632B(&Local_1202);
					}
					func_466(76);
					func_1434();
					__LIB_4__::func_952(uParam0, 3);
				}
				Jump @2690; //curOff = 1360
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_19, true, 0))
				{
					func_456(122);
					func_174(1);
					__LIB_4__::func_952(uParam0, 4);
				}
				Jump @2690; //curOff = 1397
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (!func_165(127))
					{
						func_1315(uParam0, 7);
						iLocal_775[2] = __LIB_4__::func_983(408396114, func_1336(0, 0), 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_775[2], func_1300(16));
						MAP::_BLIP_SET_MODIFIER(iLocal_775[2], -1878373110);
						__LIB_1__::func_721(7);
						func_456(127);
					}
				}
				else if (func_165(127))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_775[2]))
					{
						MAP::REMOVE_BLIP(&(iLocal_775[2]));
					}
					__LIB_1__::func_718(7);
					func_1315(uParam0, 6);
					func_176(127);
				}
				if (func_1418(30, 3))
				{
					if ((PED::IS_PED_ON_MOUNT(Global_35) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_5, true, 0)) || (!PED::IS_PED_ON_MOUNT(Global_35) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_28, true, 0)))
					{
						if (func_1436(120f, 33, 46) == 0)
						{
							fVar7 = func_1437(33, 46);
							if (fVar7 > 30f)
							{
								func_456(140);
								func_1325(33, 46, 10, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
								TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
								func_462(95);
								func_462(81);
								func_462(80);
								CAM::_0x1B3C2D961F5FC0E1(func_1438(6));
								__LIB_4__::func_952(uParam0, 5);
							}
						}
					}
				}
				Jump @2690; //curOff = 1745
				func_164(1);
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(PED::_GET_LAST_MOUNT(Global_35), true, false), true) >= 20f)
					{
						bVar8 = true;
					}
					else
					{
						__LIB_4__::func_89(&(vLocal_792[40 /*3*/]), 1);
					}
				}
				else
				{
					bVar8 = true;
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
				vVar0 = { func_1439(0) };
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
				__LIB_4__::func_89(&(vLocal_792[40 /*3*/]), 0);
				if (!__LIB_1__::func_583(&(vLocal_792[40 /*3*/])) >= 15f)
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_165(132))
						{
							if (__LIB_1__::func_583(&(vLocal_792[40 /*3*/])) >= (15f - 9f))
							{
								if (PED::GET_MOUNT(Global_35) == Local_133[1 /*6*/])
								{
									if (__LIB_5__::func_773(PED::GET_MOUNT(Global_35)) == 1)
									{
										func_1313(62);
									}
									else
									{
										func_1313(63);
									}
								}
								else
								{
									func_1313(64);
								}
								func_456(132);
							}
						}
					}
				}
				else
				{
					bVar8 = true;
				}
				if (!bVar8)
				{
				}
				else
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (Local_1371[18 /*5*/].f_1 == 5)
						{
							if (__LIB_5__::func_236(1) || __LIB_0__::func_481(1))
							{
							}
							else
							{
								func_456(130);
								Local_133[4 /*6*/] = PED::GET_MOUNT(Global_35);
								func_943(4, 1);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
								ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_133[4 /*6*/], true);
								PED::SET_PED_RESET_FLAG(Local_133[4 /*6*/], 105, true);
								TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_133[4 /*6*/], func_1336(0, 0), 1073741824 /* Float: 2f */, __LIB_0__::func_646(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Local_133[4 /*6*/]), 1.75f), 2568, 0);
								func_1374(18, 1);
								func_456(123);
								__LIB_4__::func_952(uParam0, 6);
								Jump @2354; //curOff = 2263
								if (func_1418(10, 7))
								{
									if (!func_1442())
									{
										if (MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &fVar9, false))
										{
											PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, 8000, 10000, 0, 0f, 0f, -1f, fVar9, 0f, 0f, 0f, 0f, 0f, 0f);
											func_176(123);
											__LIB_4__::func_89(&(vLocal_792[41 /*3*/]), 0);
											__LIB_4__::func_952(uParam0, 6);
										}
									}
								}
								Jump @2690; //curOff = 2354
								vVar0 = { func_1439(0) };
								STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
								if (!func_165(131))
								{
									WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
								}
								CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
								PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
								PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
								if (func_165(123))
								{
									if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1371[18 /*5*/]))
									{
										CAM::DO_SCREEN_FADE_OUT(0);
										__LIB_4__::func_952(uParam0, 29);
									}
								}
								else if (__LIB_1__::func_583(&(vLocal_792[41 /*3*/])) >= 1f)
								{
									if (func_1372(0, 2000))
									{
										__LIB_4__::func_952(uParam0, 29);
									}
								}
								Jump @2690; //curOff = 2493
								vVar0 = { func_1439(0) };
								STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
								CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
								if (!func_165(123))
								{
									if (!func_1443(uParam0))
									{
									}
									else
									{
										if (func_170(0))
										{
											func_184(uParam0, 32, 53, 0);
											func_471(uParam0, 13, 0);
											func_471(uParam0, 17, 0);
											func_471(uParam0, 19, 0);
											func_471(uParam0, 23, 0);
											func_471(uParam0, 24, 0);
											func_471(uParam0, 25, 0);
											func_471(uParam0, 26, 0);
											func_466(83);
											func_466(89);
											func_466(90);
											func_466(77);
											func_466(78);
											func_466(79);
											func_466(func_461(19));
											func_466(func_461(16));
											func_1399(18);
											return 1;
										}
									}
									return 0;
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

int func_833(var uParam0)
{
	Local_1307[iLocal_1324 /*8*/].f_6 = 7;
	func_1422();
	func_182();
	func_206(0);
	func_466(10);
	func_466(35);
	func_176(14);
	MISC::SET_TIME_SCALE(1f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	GRAPHICS::ANIMPOSTFX_STOP(func_198(1));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_168(0);
	func_173(2, 0);
	if (func_165(129))
	{
		func_1419(uParam0, joaat("DST3_NOTSPOTTED"));
	}
	func_474(uParam0, 54, 0, 0);
	func_474(uParam0, 55, 0, 0);
	__LIB_4__::func_89(&(vLocal_792[45 /*3*/]), 0);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	return 1;
}

int func_834(var uParam0)
{
	CAM::_0x1B3C2D961F5FC0E1(func_1438(6));
	if (!func_165(4))
	{
		func_939();
		func_456(4);
	}
	func_174(1);
	Local_133[4 /*6*/] = Local_133[1 /*6*/];
	func_943(4, 1);
	return 1;
}

int func_835(var uParam0)
{
	vector3 vVar0;
	vVar0 = { func_1439(0) };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	Local_133[6 /*6*/].f_3 = 0;
	Local_133[7 /*6*/].f_3 = 0;
	func_940(1, 0);
	func_172(1);
	return 1;
}

int func_836(var uParam0)
{
	vector3 vVar0;
	vVar0 = { func_1439(0) };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	__LIB_10__::func_925(uParam0, "MultiStart");
	__LIB_5__::func_298(uParam0, "MultiStart");
	__LIB_4__::func_944(uParam0, 4194304);
	__LIB_5__::func_26(uParam0, 100f);
	__LIB_5__::func_27(uParam0, 120f);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	GRAPHICS::ANIMPOSTFX_PLAY(func_198(2));
	return 1;
}

int func_837(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	struct<4> Var5;
	int iVar9;
	if (!func_165(142))
	{
		__LIB_4__::func_944(uParam0, 4194304);
	}
	if (!func_165(145))
	{
		if (!func_165(144))
		{
			if (!Global_1905942 == -1)
			{
				if (__LIB_11__::func_832())
				{
					func_456(144);
				}
			}
		}
		else if (__LIB_9__::func_897())
		{
			func_456(145);
		}
	}
	func_1448();
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	func_1369(21);
	func_1341(12);
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar1);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			vVar1 = { func_1439(0) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar1);
			bVar0 = true;
			func_462(func_461(31));
			if (!func_463(func_461(31)))
			{
				bVar0 = false;
			}
			iVar9 = 6;
			while (iVar9 <= 15)
			{
				if ((((((!iVar9 == 6 && !iVar9 == 7) && !iVar9 == 10) && !iVar9 == 11) && !iVar9 == 12) && !iVar9 == 13) && !iVar9 == 14)
				{
				}
				else if (!Local_133[iVar9 /*6*/].f_3 == 7)
				{
					Var5 = { func_1449(iVar9, 0, 8) };
					if (!func_1450(uParam0, iVar9, 0, 1, 0, Var5, 1))
					{
						bVar0 = false;
					}
					else
					{
						__LIB_5__::func_571(uParam0, Local_133[iVar9 /*6*/], 128);
						ENTITY::SET_ENTITY_VISIBLE(Local_133[iVar9 /*6*/], false);
					}
				}
				iVar9++;
			}
			if (bVar0)
			{
				func_1350(31);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			vVar1 = { func_1439(0) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar1);
			if (func_1451(uParam0))
			{
				__LIB_11__::func_59(uParam0, 6);
				func_1452(1);
				__LIB_5__::func_26(uParam0, 9998f);
				__LIB_5__::func_27(uParam0, 9999f);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			if (func_1453(uParam0))
			{
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_838(var uParam0)
{
	func_466(95);
	__LIB_4__::func_509(0);
	return 1;
}

int func_839(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	func_462(func_461(31));
	if (!func_463(func_461(31)))
	{
		iVar0 = 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_941[31 /*2*/]))
	{
		func_1350(31);
	}
	func_1369(21);
	if (!Local_1371[21 /*5*/].f_1 == 5)
	{
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!iLocal_1482[3] == 6)
	{
		func_1451(uParam0);
		return 0;
	}
	iVar1 = func_941(uParam0);
	if (iVar1 == 1 || iVar1 == 2)
	{
		if (!func_939())
		{
			return 0;
		}
	}
	iLocal_1489 = PED::ADD_SCENARIO_BLOCKING_AREA(-896.4f, -774.7f, 38f, -824.9f, -686.3f, 72f, 0, 16);
	iLocal_1489 = iLocal_1489;
	func_176(16);
	func_176(15);
	return 1;
}

int func_840(var uParam0)
{
	__LIB_5__::func_33(uParam0, 131072);
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	if (!func_165(153))
	{
		if (func_941(uParam0) == 0)
		{
			__LIB_18__::func_409(2, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			if (!ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1371[20 /*5*/]) >= (ANIMSCENE::_GET_ANIM_SCENE_DURATION(Local_1371[20 /*5*/]) - 0.1f))
			{
				return 0;
			}
			__LIB_18__::func_409(3, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			AUDIO::_0x43037ABFE214A851();
			func_456(153);
			return 0;
		}
	}
	func_940(1, 0);
	if (!__LIB_0__::func_13(32768))
	{
		__LIB_9__::func_99(uParam0, -1, 0);
	}
	__LIB_6__::func_902(uParam0, 2);
	__LIB_6__::func_902(uParam0, 4);
	return 1;
}

int func_841(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	}
	if (func_165(149))
	{
		if (!func_165(150))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1371[21 /*5*/]) >= 3.75f)
			{
				CAM::DO_SCREEN_FADE_IN(1000);
				func_456(150);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::CLEAR_PED_ENV_DIRT(Global_35);
		PED::SET_PED_SWEAT(Global_35, 0f);
	}
	func_471(uParam0, 31, 0);
	if (func_165(27))
	{
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	}
	if (__LIB_0__::func_13(32768))
	{
		return 1;
	}
	vVar1 = { 663.0497f, -1229.854f, 44.396f };
	fVar4 = 161.36f;
	__LIB_4__::func_958(uParam0, 1);
	if (!func_447(uParam0, 1, vVar1.x, vVar1.y, vVar1.z, fVar4, 1, 1, 1))
	{
		bVar0 = false;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[21 /*5*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1371[21 /*5*/], false))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1371[21 /*5*/]) >= (ANIMSCENE::_GET_ANIM_SCENE_DURATION(Local_1371[21 /*5*/]) - 1.6f))
			{
				func_1372(0, 1000);
			}
		}
		else if (ANIMSCENE::_0xF94692EB9DC15D74(Local_1371[21 /*5*/], 0))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Local_133[1 /*6*/] = __LIB_4__::func_957(uParam0);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[1 /*6*/], vVar1, fVar4, true, false, true);
		PHYSICS::_0x06AADE17334F7A40(Local_133[1 /*6*/], vVar1);
		func_176(17);
		iLocal_1339 = 3;
		return 1;
	}
	return 0;
}

int func_842(var uParam0)
{
	if (func_165(27))
	{
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	}
	if (func_938(0))
	{
		return 1;
	}
	return 0;
}

int func_843(var uParam0)
{
	__LIB_12__::func_786(Global_1835011[uParam0->f_607 /*74*/].f_1);
	func_456(5);
	__LIB_4__::func_935(uParam0, 4);
	if (func_165(27))
	{
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	}
	return 1;
}

Vector3 func_845(int iParam0, int iParam1)
{
	return func_1457(iParam0, iParam1);
}

void func_846()
{
	Local_89 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_89, -544.8278f, 399.2536f, 85.64386f, 0f, 0f, 0f, 10.75f, 10f, 6f);
	VOLUME::_0x39816F6F94F385AD(Local_89, -553.3588f, 396.089f, 85.644f, 0f, 0f, 0f, 3.75f, 9.5f, 6f);
	VOLUME::_0x39816F6F94F385AD(Local_89, -552.7037f, 401.6336f, 85.644f, 0f, 0f, 47.75f, 4f, 2f, 6f);
	VOLUME::_0x39816F6F94F385AD(Local_89, -541.3427f, 404.4531f, 85.644f, 0f, 0f, 0f, 4.25f, 8.25f, 6f);
	VOLUME::_0x39816F6F94F385AD(Local_89, -541.2624f, 405.205f, 85.644f, 0f, 0f, 46.50001f, 6.75f, 3.5f, 6f);
	VOLUME::_0x39816F6F94F385AD(Local_89, -542.0309f, 402.5838f, 85.644f, 0f, 0f, -19.5f, 5f, 13f, 6f);
	Local_89.f_1 = VOLUME::_CREATE_VOLUME_BOX(-548.9683f, 393.8341f, 85.644f, 0f, 0f, -24.24999f, 24.75f, 7f, 6f);
	Local_89.f_2 = VOLUME::_CREATE_VOLUME_CYLINDER(-852.5347f, -706.927f, 60.56326f, 0f, 0f, 0f, 60f, 60f, 10f);
	Local_89.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER(-865.701f, -592.6326f, 68.19862f, 0f, 0f, 0f, 40f, 40f, 10f);
	Local_89.f_4 = VOLUME::_CREATE_VOLUME_BOX(-861.0254f, -744.1687f, 57.13982f, 0f, 0f, 20.24999f, 6f, 6.5f, 2f);
	Local_89.f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(-857.7269f, -771.7311f, 66.91647f, 0f, 0f, 0f, 330f, 330f, 40f);
	Local_89.f_6 = VOLUME::_CREATE_VOLUME_CYLINDER(462.5026f, 58.14717f, 135.0551f, 0f, 0f, -0.025685f, 5f, 5f, 2f);
	Local_89.f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_89.f_7, -881.258f, -736.6337f, 59.79215f, 0f, 0f, 19f, 10f, 15f, 2f);
	VOLUME::_0x39816F6F94F385AD(Local_89.f_7, -875.3309f, -734.5929f, 59.79215f, 0f, 0f, 19f, 2.5f, 12.5f, 2f);
	VOLUME::_0x39816F6F94F385AD(Local_89.f_7, -870.77f, -733.0226f, 59.79215f, 0f, 0f, 19f, 2.5f, 5f, 2f);
	VOLUME::_0x39816F6F94F385AD(Local_89.f_7, -873.0518f, -733.8082f, 59.79215f, 0f, 0f, 19f, 2.5f, 10f, 2f);
	Local_89.f_8 = VOLUME::_CREATE_VOLUME_BOX(-842.4326f, -666.416f, 62.35727f, 0f, 0f, 17.5f, 200f, 2f, 46f);
	Local_89.f_9 = VOLUME::_CREATE_VOLUME_BOX(-1034.959f, -676.6127f, 79.55116f, 0f, 0f, -11.5f, 200f, 2f, 46f);
	Local_89.f_10 = VOLUME::_CREATE_VOLUME_CYLINDER(674.0331f, -1249.968f, 45.53361f, 0f, 0f, 0f, 32f, 32f, 5f);
	Local_89.f_11 = VOLUME::_CREATE_VOLUME_CYLINDER(-866.0486f, -732.846f, 59.70185f, 0f, 0f, 0f, 1.2f, 1f, 1f);
	Local_89.f_12 = VOLUME::_CREATE_VOLUME_CYLINDER(675.9578f, -1242.402f, 45.53361f, 0f, 0f, 0f, 40f, 40f, 5f);
	Local_89.f_13 = VOLUME::_CREATE_VOLUME_BOX(-545.8317f, 399.7288f, 87.19109f, 0f, 0f, 0f, 6.75f, 9.5f, 4f);
	Local_89.f_14 = VOLUME::_CREATE_VOLUME_CYLINDER(675.9578f, -1242.426f, 45.53361f, 0f, 0f, 0f, 140f, 140f, 10f);
	Local_89.f_15 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_89.f_15, 459.5794f, 58.14141f, 134.8017f, 0f, 0f, 13.75001f, 1.5f, 6f, 2f);
	VOLUME::_0x39816F6F94F385AD(Local_89.f_15, 459.9276f, 62.10038f, 134.8017f, 0f, 0f, -19.74999f, 1.5f, 4f, 2f);
	VOLUME::_0x39816F6F94F385AD(Local_89.f_15, 462.0773f, 54.04677f, 134.8017f, 0f, 0f, 62.25f, 1.5f, 4f, 2f);
	Local_89.f_16 = VOLUME::_CREATE_VOLUME_BOX(459.9813f, 57.20532f, 135.055f, 0f, 0f, 15.99999f, 6f, 10f, 4f);
	Local_89.f_17 = VOLUME::_CREATE_VOLUME_BOX(814.0551f, -337.11f, 87.25781f, 0f, 0f, 0f, 12f, 12f, 3f);
	Local_89.f_18 = VOLUME::_CREATE_VOLUME_CYLINDER(573.9523f, 210.0925f, 128.6858f, 0f, 0f, 0f, 45f, 45f, 4f);
	Local_89.f_19 = VOLUME::_CREATE_VOLUME_BOX(-866.0743f, -746.6395f, 60.08978f, 0f, -8.499995f, 20f, 3f, 4.5f, 2f);
	Local_89.f_20 = VOLUME::_CREATE_VOLUME_BOX(-865.4642f, -734.1829f, 59.51987f, 0f, 0f, 28.00001f, 11f, 6f, 2f);
	Local_89.f_21 = VOLUME::_CREATE_VOLUME_BOX(821.4885f, -370.1398f, 88.53259f, 0f, 0f, 0f, 100f, 100f, 20f);
	Local_89.f_22 = VOLUME::_CREATE_VOLUME_BOX(422.5007f, 37.37281f, 108.3498f, 0f, 0f, 0f, 64f, 128f, 16f);
	Local_89.f_23 = VOLUME::_CREATE_VOLUME_BOX(772.7662f, 21.9545f, 111.4828f, 0f, 0f, 0f, 259f, 514.5f, 120.25f);
	Local_89.f_24 = VOLUME::_CREATE_VOLUME_CYLINDER(-870.1011f, -743.7218f, 57.18891f, 0f, 0f, 0f, 45f, 45f, 10f);
	Local_89.f_25 = VOLUME::_CREATE_VOLUME_BOX(-868.2285f, -617.1415f, 58.89547f, 0f, 0f, 0f, 666f, 519.75f, 80f);
	Local_89.f_26 = VOLUME::_CREATE_VOLUME_CYLINDER(406.694f, 38.0396f, 107.062f, 0f, 0f, 0f, 1f, 1f, 1f);
	Local_89.f_27 = VOLUME::_CREATE_VOLUME_CYLINDER(407.368f, 39.7832f, 106.972f, 0f, 0f, 0f, 1f, 1f, 1f);
	Local_89.f_28 = VOLUME::_CREATE_VOLUME_CYLINDER(-877.9708f, -723.0764f, 66.91647f, 0f, 0f, 0f, 220f, 220f, 40f);
	Local_89.f_29 = VOLUME::_CREATE_VOLUME_BOX(-866.652f, -732.7656f, 59.65343f, 0f, 0f, 19f, 4f, 1f, 2f);
	Local_89.f_30 = VOLUME::_CREATE_VOLUME_BOX(-545.5493f, 399.3469f, 89.30523f, 0f, 0f, -6.75001f, 60f, 1f, 20f);
	Local_89.f_31 = VOLUME::_CREATE_VOLUME_BOX(685.7278f, -1183.635f, 50.25746f, 0f, 0f, -13.5f, 175.5f, 88.75f, 8f);
	Local_89.f_32 = VOLUME::_CREATE_VOLUME_BOX(-532.3943f, 404.438f, 89.30523f, 0f, 0f, 10.49999f, 1f, 17.25f, 20f);
	Local_89.f_33 = VOLUME::_CREATE_VOLUME_BOX(-863.9876f, -745.8814f, 56.92363f, 0f, 0f, 19f, 1f, 3f, 2f);
}

void func_856(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_1472();
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

void func_858(var uParam0)
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
			func_925(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_925(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_859(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_925(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_867(int iParam0, int iParam1)
{
	var uVar0;
	return func_1495(&uVar0, iParam0, iParam1);
}

bool func_917(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1526(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1527(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_925(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == __LIB_0__::func_17(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
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
				func_925(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_925(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_927(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (!func_1553(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			__LIB_4__::func_560(uParam0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_856(&iVar0, 0, 2, 0, 0, 0, 0);
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
			__LIB_5__::func_129(&iVar1, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			__LIB_0__::func_19(uParam0, 0);
			return true;
	}
	return false;
}

bool func_929(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	if (func_1562(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)), 0))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 262144);
		if (__LIB_4__::func_562(&(uParam0->f_10792), 524288))
		{
			__LIB_5__::func_33(uParam0, 67108864);
			__LIB_4__::func_563(&(uParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

bool func_931(var uParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return true;
	}
	if (__LIB_4__::func_937(uParam0, 16777216))
	{
		__LIB_5__::func_345(uParam0);
		__LIB_5__::func_56(uParam0);
		return true;
	}
	if (func_1568(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_81(uParam0) == 0)
	{
		__LIB_10__::func_929(uParam0);
	}
	if (__LIB_0__::func_91())
	{
		if (!__LIB_4__::func_937(uParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
			}
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_974(uParam0);
			__LIB_4__::func_969(uParam0, 524288);
			__LIB_5__::func_346(uParam0);
			__LIB_5__::func_26(uParam0, 30f);
			__LIB_5__::func_27(uParam0, 40f);
			__LIB_4__::func_944(uParam0, 262144);
		}
		if (!__LIB_4__::func_937(uParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_7375.f_804))
		{
			__LIB_4__::func_944(uParam0, 524288);
		}
	}
	return false;
}

bool func_937(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 < vLocal_470.x)
	{
		iVar1 = iVar0;
		if (__LIB_4__::func_688(vLocal_470[iVar1 /*3*/].f_2, iParam0))
		{
			if (vLocal_470[iVar1 /*3*/] == 0)
			{
				func_462(iVar1);
				bVar2 = false;
			}
			else if (vLocal_470[iVar1 /*3*/] == 2)
			{
				bVar2 = false;
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		func_456(10);
	}
	return bVar2;
}

int func_938(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (((!iLocal_1339 == 3 && !iLocal_1339 == 4) && !iLocal_1339 == 5) && !iLocal_1339 == 0)
			{
				func_1575(3);
			}
			return func_1576();
		case 1:
			if ((!iLocal_1339 == 0 && !iLocal_1339 == 1) && !iLocal_1339 == 2)
			{
				func_1575(0);
			}
			return func_1577();
	}
	return 0;
}

bool func_939()
{
	if (!PED::_0xA0BC8FAED8CFEB3C(Global_35))
	{
		return false;
	}
	if (func_165(21))
	{
		return true;
	}
	PED::_SET_PED_BODY_COMPONENT(Global_35, 2072259397);
	PED::_SET_PED_BODY_COMPONENT(Global_35, -88712922);
	PED::_SET_PED_BODY_COMPONENT(Global_35, 361527976);
	PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
	func_456(21);
	return false;
}

bool func_940(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		if ((func_165(22) && bParam1) || (func_165(23) && !bParam1))
		{
			return true;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (bParam1)
		{
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			func_456(22);
			func_176(23);
		}
		else
		{
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			func_456(23);
			func_176(22);
		}
		return true;
	}
	return false;
}

int func_941(var uParam0)
{
	if (__LIB_4__::func_937(uParam0, 8) && !__LIB_4__::func_948(uParam0, 4))
	{
		return 0;
	}
	if (((iLocal_1177 == 0 && !__LIB_4__::func_948(uParam0, 4)) && !__LIB_4__::func_951(uParam0, 1)) && !__LIB_4__::func_951(uParam0, 2))
	{
		return 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !__LIB_4__::func_951(uParam0, 2))
	{
		return 1;
	}
	return 2;
}

bool func_942(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	struct<4> Var9;
	struct<4> Var13;
	struct<4> Var17;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	struct<4> Var27;
	iVar0 = 1;
	iVar25 = __LIB_4__::func_939(uParam0);
	iVar26 = func_941(uParam0);
	if ((iVar25 == 0 || iVar25 == 1) || iVar25 == 2)
	{
		bVar21 = true;
		bVar22 = true;
		bVar23 = true;
		if (iVar25 == 0 && !iVar26 == 1)
		{
			bVar24 = true;
		}
		if (iVar25 == 0)
		{
			if (iVar26 == 1)
			{
				Var1 = { func_551(0, 1) };
				Var17 = { func_551(0, 0) };
			}
			else
			{
				Var1 = { func_1578(10, 0) };
				Var17 = { 663.0721f, -1230.414f, 36.3808f };
			}
			Var9 = { func_551(0, 2) };
			Var5 = { func_551(0, 3) };
			Var13 = { func_551(0, 4) };
		}
		else if (iVar25 == 1)
		{
			Var17 = { func_551(1, 1) };
			Var1 = { func_551(0, 5) };
			Var9 = { func_551(0, 5) };
			Var5 = { func_551(0, 6) };
			Var13 = { func_551(0, 6) };
		}
		else if (iVar25 == 2)
		{
			Var17 = { func_1578(1, 6) };
			Var1 = { func_551(0, 7) };
			Var9 = { func_1578(1, 1) };
			Var5 = { func_551(0, 8) };
			Var13 = { func_1578(1, 4) };
		}
	}
	if (iVar25 == 8)
	{
		bVar23 = true;
		Var17 = { func_1578(0, 2) };
	}
	if (bVar21)
	{
		if (!Local_133[func_1308(6) /*6*/].f_3 == 7)
		{
			if (func_1579(uParam0, 2, 6, 0, 1, 0, Var9, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!Local_133[6 /*6*/].f_3 == 7)
		{
			if (func_1450(uParam0, 6, ((iVar26 == 0 && iVar25 == 0) && __LIB_0__::func_27(__LIB_0__::func_895(__LIB_3__::func_918(23)), 1)), 1, 0, Var1, 0))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (bVar22)
	{
		if (!Local_133[func_1308(7) /*6*/].f_3 == 7)
		{
			if (func_1579(uParam0, func_1308(7), 7, 0, 1, 0, Var13, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!Local_133[7 /*6*/].f_3 == 7)
		{
			if (func_1450(uParam0, 7, (iVar26 == 0 && iVar25 == 0), 1, 0, Var5, 0))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (bVar24)
	{
		Var27 = { 671.6998f, -1251.066f, 42.7555f };
		if (!Local_133[8 /*6*/].f_3 == 7)
		{
			if (func_1450(uParam0, 8, __LIB_0__::func_27(__LIB_0__::func_895(__LIB_3__::func_918(23)), 2), 1, 1, Var27, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!Local_133[9 /*6*/].f_3 == 7)
		{
			if (func_1450(uParam0, 9, __LIB_0__::func_27(__LIB_0__::func_895(__LIB_3__::func_918(23)), 4), 1, 1, Var27, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!Local_133[11 /*6*/].f_3 == 7)
		{
			if (func_1450(uParam0, 11, __LIB_0__::func_27(__LIB_0__::func_895(__LIB_3__::func_918(23)), 8), 1, 1, Var27, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (bVar23 && !Local_133[1 /*6*/].f_2 == 1)
	{
		__LIB_4__::func_958(uParam0, 1);
		if (func_447(uParam0, 1, Var17, Var17.f_1, Var17.f_2, Var17.f_3, 1, 1, 1))
		{
			Local_133[1 /*6*/] = __LIB_4__::func_957(uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_133[1 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
			{
				func_943(1, 1);
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_943(int iParam0, int iParam1)
{
	Local_133[iParam0 /*6*/].f_2 = iParam1;
}

void func_944()
{
	int iVar0;
	iLocal_781[0] = joaat("WEAPON_KIT_BINOCULARS");
	iLocal_781[2] = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
	iLocal_781[1] = 0;
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, false))
	{
		iLocal_781[1] = joaat("WEAPON_SNIPERRIFLE_CARCANO");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"), 0, false))
	{
		iLocal_781[1] = joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK");
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_SNIPERRIFLE_CARCANO")))
	{
		iLocal_781[1] = joaat("WEAPON_SNIPERRIFLE_CARCANO");
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_SNIPERRIFLE_CARCANO")))
	{
		iLocal_781[1] = joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK");
	}
	else
	{
		iLocal_781[1] = joaat("WEAPON_SNIPERRIFLE_CARCANO");
	}
	if (iLocal_781[1] == 0)
	{
	}
	iLocal_781[7] = joaat("WEAPON_REVOLVER_CATTLEMAN");
	iLocal_781[4] = joaat("WEAPON_REVOLVER_CATTLEMAN");
	iLocal_781[5] = joaat("WEAPON_RIFLE_SPRINGFIELD");
	iLocal_781[3] = joaat("WEAPON_MELEE_LANTERN");
	iLocal_781[6] = joaat("WEAPON_RIFLE_SPRINGFIELD");
	iLocal_781[8] = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
	if (__LIB_0__::func_214(joaat("WEAPON_THROWN_THROWING_KNIVES")))
	{
		iLocal_781[9] = joaat("WEAPON_THROWN_THROWING_KNIVES");
	}
	iVar0 = 0;
	while (iVar0 < iLocal_781)
	{
		iVar0++;
	}
}

void func_946()
{
	GRAPHICS::_ADD_BLOOD_POOL(-859.7f, -744f, 56.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(-859.813f, -743.966f, 56.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(-859.702f, -743.883f, 56.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(-859.7f, -744.8f, 56.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(-860.4f, -744.4f, 56.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(-861.8f, -745.5f, 56.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(-862.7f, -745.9f, 56.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(-863.6f, -745.9f, 56.3f, true);
	GRAPHICS::_ADD_BLOOD_POOL(-861f, -745.8f, 56.1f, true);
}

void func_947(int iParam0)
{
	if (Local_133[iParam0 /*6*/].f_3 == 7 && !ENTITY::IS_ENTITY_DEAD(Local_133[iParam0 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[iParam0 /*6*/], func_1336(10, 0), func_1580(10, 0), true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_133[iParam0 /*6*/], 0);
		ENTITY::SET_ENTITY_VISIBLE(Local_133[iParam0 /*6*/], true);
		ENTITY::SET_ENTITY_COLLISION(Local_133[iParam0 /*6*/], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(Local_133[iParam0 /*6*/], false);
	}
}

int func_948(var uParam0)
{
	switch (iLocal_1177)
	{
		case 0:
			if (!func_165(31))
			{
				func_1581(uParam0);
				func_456(31);
			}
			func_1582(uParam0);
			break;
		case 2:
			if (!func_165(61))
			{
				func_1581(uParam0);
				func_456(61);
			}
			func_1583(uParam0);
			break;
		case 4:
			if (!func_165(83))
			{
				func_1581(uParam0);
				func_456(83);
			}
			func_1584(uParam0);
			break;
		case 25:
			if (!func_165(146))
			{
				func_1581(uParam0);
				func_456(146);
			}
			func_1585(uParam0);
			break;
	}
	return 1;
}

int func_950(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			if (func_165(33))
			{
				__LIB_3__::func_98(iLocal_1199);
				func_456(32);
			}
			func_1587();
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "Dutch", Local_133[6 /*6*/]);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "MicahBell", Local_133[7 /*6*/]);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[6 /*6*/], 676.4988f, -1241.685f, 43.8f, -29.28f, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[7 /*6*/], 677.2648f, -1243.689f, 43.8f, -49.12f, true, false, true);
			ENTITY::_0x9587913B9E772D29(Local_133[6 /*6*/], 0);
			ENTITY::_0x9587913B9E772D29(Local_133[7 /*6*/], 0);
			break;
		case 2:
			func_1588(2);
			func_1588(3);
			break;
		case 25:
			CAM::DO_SCREEN_FADE_OUT(0);
			break;
	}
	return 1;
}

void func_953(var uParam0)
{
	if (func_165(29))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 1);
	}
	if (func_165(152))
	{
		func_166();
	}
	if (func_165(15) || func_165(16))
	{
		func_1593();
	}
	if (func_165(0))
	{
		func_176(0);
	}
	if (func_165(13))
	{
		__LIB_1__::func_538(0);
	}
	if (func_165(14))
	{
		func_1370(fLocal_774);
	}
	func_197();
	iLocal_1176 = MISC::GET_FRAME_COUNT();
	iLocal_1177 = __LIB_4__::func_939(uParam0);
	func_176(25);
	if (((((iLocal_1177 == 2 || iLocal_1177 == 3) || iLocal_1177 == 4) || iLocal_1177 == 5) || iLocal_1177 == 6) || iLocal_1177 == 7)
	{
		func_1341(0);
		func_456(25);
	}
	if (func_165(25))
	{
		POPULATION::_0xF45E46DEECF7DF6E(14336, 0, 0, -1, -1);
		PED::_0xAB0D553FE20A6E25(0f);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (((iLocal_1177 == 4 || iLocal_1177 == 5) || iLocal_1177 == 6) || iLocal_1177 == 7)
	{
		if (!__LIB_0__::func_899(&(vLocal_792[1 /*3*/])) || __LIB_1__::func_583(&(vLocal_792[1 /*3*/])) >= 30f)
		{
			__LIB_4__::func_89(&(vLocal_792[1 /*3*/]), 1);
			__LIB_5__::func_521(0.75f);
		}
	}
}

bool func_970(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_4__::func_937(uParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_5__::func_481(uParam0, iParam1, 4))
	{
		if (__LIB_4__::func_939(uParam0) != 25 && __LIB_4__::func_939(uParam0) != 26)
		{
			if (!__LIB_4__::func_937(uParam0, 512) && !__LIB_4__::func_948(uParam0, 4))
			{
				__LIB_5__::func_599(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1606(uParam0);
		if (__LIB_5__::func_261(uParam0))
		{
			__LIB_5__::func_465(uParam0);
		}
		if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33554432) && __LIB_4__::func_937(uParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		__LIB_4__::func_969(uParam0, 524288);
		__LIB_4__::func_977(&(uParam0->f_7375), 4);
		if (__LIB_5__::func_576(uParam0))
		{
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 8388608);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		return true;
	}
	return false;
}

bool func_972(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_948(uParam0, 16384))
	{
		if (func_929(uParam0))
		{
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_4__::func_958(uParam0, 16384);
			__LIB_4__::func_945(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!__LIB_4__::func_937(uParam0, 4))
	{
		__LIB_0__::func_16(uParam0, iParam1);
		__LIB_4__::func_944(uParam0, 4);
	}
	Var0 = { __LIB_5__::func_299(uParam0, iParam1) };
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		if (__LIB_4__::func_937(uParam0, 2097152))
		{
			if (func_929(uParam0))
			{
				__LIB_4__::func_969(uParam0, 2097152);
				func_931(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_931(uParam0, Var0);
		}
	}
	else if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (func_929(uParam0))
		{
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_5__::func_56(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		return func_931(uParam0, Var0);
	}
	return true;
}

struct<7> func_994(int iParam0)
{
	struct<7> Var0;
	Var0.f_6 = -1;
	switch (iParam0)
	{
		case 0:
			Var0 = { 655.6217f, -1251.418f, 42.6823f };
			Var0.f_3 = { 0f, 0f, 135.14f };
			Var0.f_6 = 24;
			break;
		case 1:
			Var0 = { 666.599f, -1244.91f, 43.1356f };
			Var0.f_3 = { 0f, 0f, -134.213f };
			Var0.f_6 = 24;
			break;
		case 2:
			Var0 = { 666.181f, -1243.55f, 43.1394f };
			Var0.f_3 = { 0f, 0f, -39.6912f };
			Var0.f_6 = 24;
			break;
		case 4:
			Var0 = { 459.6345f, 55.1907f, 133.77f };
			Var0.f_3 = { 0f, 0f, 160.04f };
			Var0.f_6 = 25;
			break;
		case 5:
			Var0 = { -545.3f, 397.3f, 87.2f };
			Var0.f_3 = { 0f, 90f, 0f };
			Var0.f_6 = 33;
			break;
		case 13:
			Var0 = { func_845(1, 5) };
			Var0.f_3 = { func_845(1, 5) };
			Var0.f_6 = 38;
			break;
		case 14:
			Var0 = { func_845(1, 5) };
			Var0.f_3 = { func_1362(0) };
			Var0.f_6 = 34;
			break;
		case 15:
			Var0 = { -860.552f, -742.473f, 55.939f };
			Var0.f_3 = { -3.814f, 0f, 96.204f };
			Var0.f_6 = 26;
			break;
		case 17:
			Var0.f_6 = 31;
			break;
		case 10:
			Var0.f_6 = 39;
			break;
		case 8:
			Var0.f_6 = 40;
			break;
		case 9:
			Var0.f_6 = 41;
			break;
		case 12:
			Var0.f_6 = 42;
			break;
		case 11:
			Var0 = { -859.6823f, -742.6375f, 56.7512f };
			Var0.f_6 = 43;
			break;
		case 16:
			Var0.f_6 = 37;
			break;
		case 18:
			Var0 = { -866.1f, -732.663f, 58.7567f };
			Var0.f_3 = { 0f, 0f, 20.88f };
			Var0.f_6 = 27;
			break;
		case 20:
			Var0 = { -866.15f, -732.804f, 58.9605f };
			Var0.f_3 = { 1.65032f, 37.3885f, -147.878f };
			Var0.f_6 = 35;
			break;
		case 19:
			Var0.f_6 = 36;
			break;
		case 23:
			Var0 = { -829.3891f, -603.7919f, 57.4328f };
			Var0.f_6 = 31;
			break;
		case 24:
			Var0 = { -835.6995f, -597.3657f, 56.9936f };
			Var0.f_6 = 31;
			break;
		case 25:
			Var0 = { -1054.51f, -603.02f, 77.68f };
			Var0.f_6 = 31;
			break;
		case 26:
			Var0 = { -1053.338f, -688.8571f, 70.0215f };
			Var0.f_6 = 31;
			break;
		case 27:
			Var0 = { -863.52f, -733.99f, 58.69f };
			Var0.f_3 = { 0f, 2f, -81.93f };
			Var0.f_6 = 28;
			break;
		case 28:
			Var0 = { -849.68f, -726.35f, 58.1f };
			Var0.f_3 = { 0f, 0f, -20.05f };
			Var0.f_6 = 29;
			break;
		case 29:
			Var0 = { -851.47f, -725.87f, 58.44f };
			Var0.f_3 = { 0f, 10f, 0f };
			Var0.f_6 = 30;
			break;
		case 30:
			Var0 = { -849.53f, -725.61f, 58.35f };
			Var0.f_3 = { -5f, -7f, 158.76f };
			Var0.f_6 = 32;
			break;
		case 31:
			Var0 = { 654.4f, -1243.5f, 43.3f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 44;
			break;
		default:
			break;
	}
	return Var0;
}

bool func_998(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return true;
	}
	return false;
}

struct<4> func_1068(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_1457(iParam0, iParam1) };
	Var0.f_3 = func_1685(iParam0, iParam1);
	return Var0;
}

void func_1221(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_339(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1797(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_342(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_712(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1801(Var0);
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

void func_1223(bool bParam0)
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
		func_339(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_712(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_712(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_712(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_712(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_712(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_712(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_712(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_712(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_712(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_712(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_712(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1267(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1267(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1267(iVar63, -915411861, 1, 0, 0));
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

int func_1280()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1830(8);
		}
	}
	return 0;
}

bool func_1281(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1831(iParam0));
}

void func_1292(var uParam0, int iParam1)
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
		uParam0->f_1[iVar0 /*22*/][iVar1] = 62441;
		MISC::CLEAR_BIT(&(uParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

int func_1294(var uParam0)
{
	switch (iLocal_1482[0])
	{
		case 0:
			iLocal_1482[0] = 1;
		case 1:
			iLocal_1482[0] = 2;
		case 2:
			iLocal_1482[0] = 3;
		case 3:
			if (ENTITY::IS_ENTITY_DEAD(Local_133[6 /*6*/]))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_133[7 /*6*/]))
			{
			}
			__LIB_5__::func_580(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_133[6 /*6*/], "Dutch", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_133[7 /*6*/], "MicahBell", 0, 0, 0, 0);
			iLocal_1482[0] = 6;
			break;
		case 6:
			return 1;
	}
	return 0;
}

void func_1295(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_925(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

float func_1297(int iParam0, int iParam1)
{
	return func_1685(iParam0, iParam1);
}

int func_1299(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_496(91), ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &iVar0);
	}
	return iVar0;
}

char* func_1300(int iParam0)
{
	struct<2> Var0;
	Var0 = { func_1851(iParam0) };
	return Var0;
}

void func_1303(var uParam0)
{
	if (!__LIB_17__::func_527(uParam0, Local_133[1 /*6*/], 1125515264 /* Float: 150f */, 0, 1, 1, joaat("BLIP_STYLE_PLAYER_HORSE"), 1084227584 /* Float: 5f */, 1103626240 /* Float: 25f */))
	{
		if (!func_1853(uParam0, func_470(7), func_496(91), 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */, 0, 1, 1, 1117126656 /* Float: 75f */, joaat("BLIP_STYLE_COMPANION")))
		{
			if (!func_165(44))
			{
				__LIB_10__::func_930(uParam0, Local_133[7 /*6*/], joaat("COLOR_NEUTRAL"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_486(uParam0, func_1300(23), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_1360(23);
				func_456(44);
			}
		}
		else
		{
			func_176(44);
		}
	}
	else
	{
		func_176(44);
	}
}

void func_1304(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	if (!Local_133[16 /*6*/].f_2 == 1 && !Local_133[16 /*6*/].f_2 == 0)
	{
		vVar1 = { func_1336(10, 6) };
		PATHFIND::_0xCF213A5FC3ABFC08(vVar1.x, vVar1.y, 50f);
		vVar1 = { func_1336(10, 7) };
		PATHFIND::_0xCF213A5FC3ABFC08(vVar1.x, vVar1.y, 50f);
	}
	iVar0 = 16;
	while (iVar0 <= 19)
	{
		if (Local_133[iVar0 /*6*/].f_2 == 12)
		{
		}
		else
		{
			if ((ENTITY::IS_ENTITY_DEAD(Local_133[iVar0 /*6*/]) && !Local_133[iVar0 /*6*/].f_2 == 0) && !Local_133[iVar0 /*6*/].f_2 == 33)
			{
				func_943(iVar0, 12);
			}
			if ((Local_133[16 /*6*/].f_2 == 15 || Local_133[16 /*6*/].f_2 == 26) || Local_133[16 /*6*/].f_2 == 27)
			{
				if (PED::IS_PED_SHOOTING(Global_35))
				{
					func_1325(16, 19, 28, 1);
				}
			}
			switch (Local_133[iVar0 /*6*/].f_2)
			{
				case 1:
					if (!ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(iVar0) /*6*/]) && PED::_0xA0BC8FAED8CFEB3C(Local_133[func_1308(iVar0) /*6*/]))
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_133[iVar0 /*6*/], 1);
						ENTITY::SET_ENTITY_LOD_DIST(Local_133[iVar0 /*6*/], 1000);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_133[iVar0 /*6*/], true);
						PED::_SET_PED_ON_MOUNT(Local_133[iVar0 /*6*/], Local_133[func_1308(iVar0) /*6*/], -1, true);
						ENTITY::_0x9587913B9E772D29(Local_133[func_1308(iVar0) /*6*/], 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_133[iVar0 /*6*/], joaat("REL_PLAYER_ALLY"));
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_133[func_1308(iVar0) /*6*/], joaat("REL_PLAYER_ALLY"));
						func_943(iVar0, 15);
					}
					break;
				case 26:
					if (iVar0 == 17 || iVar0 == 19)
					{
						fVar5 = -2f;
					}
					else if (iVar0 == 18)
					{
						fVar5 = 2f;
					}
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Local_133[iVar0 /*6*/], func_496(92), fVar5, 0, 4194336, -1, 0);
					func_943(iVar0, 27);
					break;
				case 27:
					break;
				case 28:
					if (iVar0 == 16)
					{
						fVar4 = 3f;
						vVar1 = { func_1336(10, 6) };
					}
					else if (iVar0 == 17)
					{
						fVar4 = (3f + 0.5f);
						vVar1 = { func_1336(10, 6) };
					}
					else if (iVar0 == 18)
					{
						fVar4 = (3f + 0.9f);
						vVar1 = { func_1336(10, 6) };
					}
					else if (iVar0 == 19)
					{
						fVar4 = (3f + 1.1f);
						vVar1 = { func_1336(10, 7) };
					}
					func_1355();
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2.5f, 20000, 0.25f, 0, 40000f);
					TASK::_TASK_FLEE_FROM_PED(0, Global_35, vVar1, 100f, -1, 0, 1077936128 /* Float: 3f */, 0);
					func_1356(Local_133[iVar0 /*6*/], fVar4);
					__LIB_4__::func_89(&(vLocal_792[9 /*3*/]), 0);
					func_943(iVar0, 29);
					break;
				case 29:
					if (func_1418(60, iVar0))
					{
						if ((__LIB_11__::func_822(Local_133[iVar0 /*6*/]) && TASK::GET_SEQUENCE_PROGRESS(Local_133[iVar0 /*6*/]) == 1) || __LIB_1__::func_583(&(vLocal_792[9 /*3*/])) >= 10f)
						{
							func_943(iVar0, 32);
						}
					}
					break;
				case 32:
					func_474(uParam0, iVar0, 0, 0);
					func_474(uParam0, func_1308(iVar0), 0, 0);
					if (iVar0 == 16)
					{
						func_466(11);
						func_466(13);
					}
					else if (Local_133[17 /*6*/].f_2 == 0 && Local_133[18 /*6*/].f_2 == 0)
					{
						func_466(10);
					}
					break;
			}
		}
		iVar0++;
	}
}

int func_1308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 6:
			return 2;
		case 7:
			return 3;
		case 16:
			return 20;
		case 17:
			return 21;
		case 18:
			return 22;
		case 19:
			return 23;
		case 24:
			return 28;
		case 25:
			return 29;
		case 26:
			return 30;
		case 27:
			return 31;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 41:
			return 51;
		case 42:
			return 52;
		case 43:
			return 53;
	}
	return -1;
}

void func_1309(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_1015)
	{
		if (__LIB_4__::func_688(Local_1015[iVar0 /*13*/].f_12, __LIB_4__::func_939(uParam0)))
		{
			switch (Local_1015[iVar0 /*13*/].f_1)
			{
				case 1:
					if (__LIB_5__::func_468(uParam0))
					{
						__LIB_1__::func_561(&(Local_1015[iVar0 /*13*/].f_2));
						Local_1015[iVar0 /*13*/].f_1 = 3;
					}
					else
					{
						if (Local_1015[iVar0 /*13*/] & 2 != 0)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1015[iVar0 /*13*/].f_7))
							{
								return;
							}
						}
						if (Local_1015[iVar0 /*13*/] & 4 != 0)
						{
							if (!__LIB_0__::func_899(&(Local_1015[iVar0 /*13*/].f_2)))
							{
								__LIB_4__::func_89(&(Local_1015[iVar0 /*13*/].f_2), 0);
							}
							if (__LIB_1__::func_583(&(Local_1015[iVar0 /*13*/].f_2)) >= Local_1015[iVar0 /*13*/].f_5)
							{
								__LIB_1__::func_561(&(Local_1015[iVar0 /*13*/].f_2));
								Local_1015[iVar0 /*13*/].f_1 = 4;
							}
						}
						if (Local_1015[iVar0 /*13*/] & 1 != 0)
						{
							if (__LIB_0__::func_94(Global_35, Local_1015[iVar0 /*13*/].f_8, 1) >= Local_1015[iVar0 /*13*/].f_6)
							{
								Local_1015[iVar0 /*13*/].f_1 = 4;
							}
						}
						if (Local_1015[iVar0 /*13*/] & 2 != 0)
						{
							if (__LIB_0__::func_665(Global_35, Local_1015[iVar0 /*13*/].f_7, 1, 1) >= Local_1015[iVar0 /*13*/].f_6)
							{
								Local_1015[iVar0 /*13*/].f_1 = 4;
							}
						}
						Jump @391; //curOff = 335
						__LIB_1__::func_561(&(Local_1015[iVar0 /*13*/].f_2));
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						if (iLocal_1122 == 0)
						{
							func_1360(Local_1015[iVar0 /*13*/].f_11);
							Local_1015[iVar0 /*13*/].f_1 = 5;
						}
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_1310(var uParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	if ((iLocal_1122 == 0 && iLocal_1120 == 0) && iLocal_1121 == 0)
	{
		return;
	}
	if (iLocal_1122 != 0)
	{
		Var0 = { func_1851(iLocal_1122) };
		if (__LIB_11__::func_647(uParam0, Var0, Var0.f_1, 0, 0))
		{
			iLocal_1122 = 0;
		}
	}
	if (iLocal_1120 != 0)
	{
		Var2 = { func_1851(iLocal_1120) };
		if (__LIB_11__::func_647(uParam0, Var2, Var2.f_1, 0, 0))
		{
			iLocal_1120 = 0;
		}
	}
	if (iLocal_1121 != 0)
	{
		Var4 = { func_1851(iLocal_1121) };
		if (__LIB_11__::func_647(uParam0, Var4, Var4.f_1, 0, 0))
		{
			iLocal_1121 = 0;
		}
	}
}

void func_1311()
{
	int iVar0;
	float fVar1;
	__LIB_11__::func_346(Local_133[7 /*6*/], &(vLocal_792[7 /*3*/]));
	__LIB_11__::func_346(Local_133[6 /*6*/], &(vLocal_792[8 /*3*/]));
	iVar0 = 6;
	while (iVar0 <= 7)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_133[iVar0 /*6*/]))
		{
			return;
		}
		switch (Local_133[iVar0 /*6*/].f_2)
		{
			case 1:
				func_943(iVar0, 18);
				break;
			case 18:
				if (!ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(iVar0) /*6*/]))
				{
					TASK::TASK_MOUNT_ANIMAL(Local_133[iVar0 /*6*/], Local_133[func_1308(iVar0) /*6*/], 20000, -1, 1f, 1, 0, 0);
					func_943(iVar0, 19);
				}
				break;
			case 19:
				if (__LIB_0__::func_394(Local_133[iVar0 /*6*/], Local_133[func_1308(iVar0) /*6*/], 0))
				{
					PED::SET_PED_CONFIG_FLAG(Local_133[iVar0 /*6*/], 167, true);
					if (__LIB_0__::func_394(Global_35, Local_133[1 /*6*/], 0))
					{
						func_943(iVar0, 26);
					}
					else
					{
						func_943(iVar0, 20);
					}
				}
				break;
			case 20:
				TASK::TASK_LOOK_AT_ENTITY(Local_133[iVar0 /*6*/], Global_35, -1, 48, 41, 1);
				func_943(iVar0, 21);
				break;
			case 21:
				if (__LIB_0__::func_394(Global_35, Local_133[1 /*6*/], 0))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_133[iVar0 /*6*/]);
					func_943(iVar0, 26);
				}
				break;
			case 26:
				if (iVar0 == 6)
				{
					if ((__LIB_0__::func_394(Global_35, Local_133[1 /*6*/], 1) && __LIB_0__::func_394(Local_133[6 /*6*/], Local_133[2 /*6*/], 1)) && __LIB_0__::func_394(Local_133[7 /*6*/], Local_133[3 /*6*/], 1))
					{
						TASK::CLEAR_PED_TASKS(Local_133[iVar0 /*6*/], true, false);
						func_1859();
						func_943(6, 27);
						func_943(7, 27);
					}
				}
				break;
			case 27:
				if (iVar0 == 7)
				{
					if (__LIB_1__::func_322(func_1300(25)))
					{
						__LIB_8__::func_875(Local_133[7 /*6*/], func_1300(25), 1, 1);
						__LIB_8__::func_875(Local_133[6 /*6*/], func_1300(25), 1, 1);
					}
					if (__LIB_1__::func_322(func_1300(27)))
					{
						__LIB_8__::func_875(Local_133[7 /*6*/], func_1300(27), 1, 1);
						__LIB_8__::func_875(Local_133[6 /*6*/], func_1300(27), 1, 1);
					}
					if (__LIB_1__::func_322(func_1300(27)))
					{
						fVar1 = 1.501f;
					}
					else
					{
						fVar1 = 1.75f;
					}
					if (__LIB_1__::func_322(func_1300(27)))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_133[3 /*6*/], 1.75f);
					}
					__LIB_11__::func_827(Local_133[7 /*6*/], fVar1, 0, 1045220557 /* Float: 0.2f */, 0, 1077936128 /* Float: 3f */, 25f, 35f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_133[iVar0 /*6*/], 0))
					{
						if (!func_165(43))
						{
							if (iLocal_1201 >= 69 && iLocal_1201 < 71)
							{
								PED::_0xD5BD1B5318A81994(iLocal_1179, 1);
								func_456(43);
							}
							if (iLocal_1201 >= 89 && iLocal_1201 < 91)
							{
								PED::_0xD5BD1B5318A81994(iLocal_1179, 1);
								func_456(43);
							}
							if (iLocal_1201 >= 100 && iLocal_1201 < 102)
							{
								PED::_0xD5BD1B5318A81994(iLocal_1179, 1);
								func_456(43);
							}
						}
						else
						{
							if (iLocal_1201 >= 78 && iLocal_1201 < 80)
							{
								PED::_0xD5BD1B5318A81994(iLocal_1179, 0);
								func_176(43);
							}
							if (iLocal_1201 >= 97 && iLocal_1201 < 98)
							{
								PED::_0xD5BD1B5318A81994(iLocal_1179, 0);
								func_176(43);
							}
							if (iLocal_1201 >= 110 && iLocal_1201 < 112)
							{
								PED::_0xD5BD1B5318A81994(iLocal_1179, 0);
								func_176(43);
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Local_133[iVar0 /*6*/], Local_89.f_18, true, 0))
				{
					func_943(7, 13);
					func_943(6, 13);
				}
				break;
			case 13:
				if (iVar0 == 7)
				{
					func_1313(31);
					func_456(45);
					__LIB_4__::func_89(&(vLocal_792[10 /*3*/]), 0);
					PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), Local_133[iVar0 /*6*/]);
				}
				func_943(iVar0, 14);
				break;
			case 14:
				if (!__LIB_1__::func_583(&(vLocal_792[10 /*3*/])) >= 5f)
				{
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(Local_133[iVar0 /*6*/]);
					func_1355();
					if (iVar0 == 6)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_845(0, 5), 2.5f, 20000, 0.25f, 0, 40000f);
					}
					else if (iVar0 == 7)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_845(0, 5), 2.5f, 20000, 0.25f, 0, 40000f);
					}
					TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 48, 41, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					func_1356(Local_133[iVar0 /*6*/], __LIB_0__::func_514(iVar0 == 7, 0f, 1.3f));
					PED::FORCE_PED_MOTION_STATE(Local_133[func_1308(iVar0) /*6*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
					PED::_0x2208438012482A1A(Local_133[iVar0 /*6*/], true, false);
					func_943(iVar0, 15);
				}
				iVar0++;
				default:
					break;
		}
	}
}

void func_1313(int iParam0)
{
	iLocal_1120 = iParam0;
}

void func_1314(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	Local_1015[iParam0 /*13*/].f_7 = iParam1;
}

void func_1315(var uParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	Var0 = { func_1851(Local_1015[iParam1 /*13*/].f_11) };
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_5__::func_486(uParam0, Var0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_1__::func_561(&(Local_1015[iParam1 /*13*/].f_2));
	iVar2 = 0;
	while (iVar2 < Local_1015)
	{
		if (!Local_1015[iVar2 /*13*/].f_1 == 0)
		{
			func_1318(iVar2);
		}
		iVar2++;
	}
	Local_1015[iParam1 /*13*/].f_1 = 1;
}

void func_1318(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_1__::func_561(&(Local_1015[iParam0 /*13*/].f_2));
	Local_1015[iParam0 /*13*/].f_1 = 0;
}

int func_1323(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 2;
		case 9:
			return 3;
		case 10:
			return 4;
		case 11:
			return 5;
		case 12:
			return 6;
		case 13:
			return 7;
		case 14:
			return 8;
		case 15:
			return 9;
		case 16:
			return 11;
		case 5:
			return 18;
		case 17:
		case 18:
		case 19:
		case 24:
		case 25:
		case 26:
		case 27:
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
		case 44:
		case 45:
		case 46:
			return 10;
		case 1:
		case 2:
		case 3:
		case 28:
		case 29:
		case 30:
		case 31:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
			return 12;
		case 20:
			return 13;
		case 22:
			return 14;
		case 21:
			return 15;
		case 23:
			return 16;
		case 54:
		case 55:
			return 17;
	}
	return -1;
}

bool func_1324(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	if (func_165(0) && !__LIB_0__::func_27(iParam3, 16))
	{
		return false;
	}
	iVar0 = __LIB_11__::func_825(iParam1, iParam2);
	iVar1 = func_1869(iParam1, iParam2);
	if (iParam3 & 16 != 0)
	{
		iVar2 = __LIB_11__::func_825(iParam1, iParam2);
	}
	else
	{
		iVar2 = 1;
	}
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		iVar0 = __LIB_11__::func_825(iParam1, iParam2);
		iVar1 = func_1869(iParam1, iParam2);
		iVar5 = (iParam1 + iVar1);
		iVar6 = iVar5;
		if (iVar1 == iVar0)
		{
			if (iParam3 & 4 != 0)
			{
				iVar7 = iParam1;
				while (iVar7 <= iParam2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_133[iVar7 /*6*/]))
					{
						if (!PED::_0xA0BC8FAED8CFEB3C(Local_133[iVar7 /*6*/]))
						{
							return false;
						}
						else if (func_1870(iVar7, &iVar3) && !func_1871(iVar7, 1))
						{
							PED::_SET_PED_BODY_COMPONENT(Local_133[iVar7 /*6*/], iVar3);
							PED::_UPDATE_PED_VARIATION(Local_133[iVar7 /*6*/], false, true, true, true, false);
							func_1872(iVar7, 1);
						}
					}
					iVar7++;
				}
			}
			return true;
		}
		func_462(func_1323(iVar6));
		if (!func_463(func_1323(iVar6)))
		{
			return false;
		}
		Var8 = { func_1449(iVar6, 0, __LIB_4__::func_939(uParam0)) };
		Local_133[iVar6 /*6*/] = __LIB_8__::func_931(func_464(func_1323(iVar6)), Var8, Var8.f_3, 1, 1, func_1873(iVar6), 1, func_1874(iVar6), !func_1870(iVar6, &iVar3), iParam3 & 8 == 0, 0, 0, 0);
		func_456(0);
		if (iParam3 & 2048 != 0)
		{
			func_1876(iVar6, 0);
		}
		if (iParam3 & 1 != 0)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[iVar6 /*6*/], true);
		}
		if (iParam3 & 2 != 0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_133[iVar6 /*6*/], true);
		}
		if (iParam3 & 32 != 0)
		{
			__LIB_1__::func_991(Local_133[iVar6 /*6*/], 0);
		}
		if (iParam3 & 64 != 0)
		{
			__LIB_2__::func_930(Local_133[iVar6 /*6*/], 0);
		}
		if (iParam3 & 128 != 0)
		{
			ENTITY::_0x18FF3110CF47115D(Local_133[iVar6 /*6*/], 2, 0);
			ENTITY::_0x18FF3110CF47115D(Local_133[iVar6 /*6*/], 3, 0);
			ENTITY::_0x18FF3110CF47115D(Local_133[iVar6 /*6*/], 7, 0);
		}
		if (iParam3 & 256 != 0)
		{
			ENTITY::_0x9587913B9E772D29(Local_133[iVar6 /*6*/], 0);
		}
		if (iParam3 & 512 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(Local_133[iVar6 /*6*/], 301, true);
		}
		if (iParam3 & 1024 != 0)
		{
			func_1879(iVar6, 0);
		}
		func_943(iVar6, 1);
		iVar4++;
	}
	return false;
}

void func_1325(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (bParam3 && (Local_133[iVar0 /*6*/].f_2 == 0 || Local_133[iVar0 /*6*/].f_2 == 12))
		{
		}
		else
		{
			func_943(iVar0, iParam2);
		}
		iVar0++;
	}
}

Vector3 func_1329(int iParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, func_1300(iParam0), 24);
	return cVar0;
}

void func_1331()
{
	__LIB_1__::func_448(Global_35, __LIB_1__::func_367(func_845(0, 5), func_845(0, 6), 0.5f), 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
}

Vector3 func_1336(int iParam0, int iParam1)
{
	return func_1883(iParam0, iParam1);
}

void func_1337(bool bParam0)
{
	if (bParam0)
	{
		MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(func_496(93), 0, -1, joaat("COLOR_OBJECTIVE"), false, true);
	}
	else
	{
		MAP::CLEAR_GPS_CUSTOM_ROUTE();
	}
	MAP::SET_GPS_CUSTOM_ROUTE_RENDER(bParam0, 3, 30);
}

struct<8> func_1338(int iParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, func_1300(iParam0), 64);
	return cVar0;
}

void func_1340()
{
	int iVar0;
	if (iLocal_1222 == -1)
	{
		return;
	}
	__LIB_4__::func_89(&(vLocal_792[12 /*3*/]), 0);
	if (__LIB_0__::func_899(&(vLocal_792[12 /*3*/])))
	{
		if (__LIB_1__::func_583(&(vLocal_792[12 /*3*/])) < 2f)
		{
			return;
		}
	}
	switch (iLocal_1222)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_BOX(461.9827f, 161.2422f, 113.2551f, 0f, 0f, -15.5f, 57.75f, 80f, 20f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_BOX(431.9578f, 89.60015f, 113.9916f, 0f, 0f, -15.27942f, 57.75f, 80f, 20f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_BOX(417.2783f, 29.42196f, 113.9916f, 0f, 0f, 37.97058f, 70f, 80f, 20f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_BOX(472.9663f, -10.90625f, 117.9072f, 0f, 0f, 57.47058f, 70f, 80f, 20f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_BOX(459.8409f, 54.1201f, 133.9201f, 0f, 0f, 57.47058f, 20f, 20f, 20f);
			break;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		MISC::_0x2FCD528A397E5C88(iVar0, 1064968);
		iLocal_1222++;
		if (iLocal_1222 == 5)
		{
			iLocal_1222 = -1;
		}
		VOLUME::_DELETE_VOLUME(iVar0);
		__LIB_2__::func_259(&(vLocal_792[12 /*3*/]));
	}
}

void func_1341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__::func_573();
			break;
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DETONATE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_SECONDARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_THROW_GRENADE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LEFT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
			break;
		case 6:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CARRIABLE_BREAK_FREE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CARRIABLE_SUICIDE"), false);
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_PUT_AWAY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_ZOOM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_LT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_RT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP_AMMO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP_WEAPON"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_CANCEL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_CONTEXT_B"), false);
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			func_1341(3);
			break;
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP_AMMO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP_WEAPON"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			break;
		case 7:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_THROW_GRENADE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DETONATE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_SECONDARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LEFT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
			break;
		case 8:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			break;
		case 9:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WHEEL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_ITEM_WHEEL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DETONATE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_SECONDARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_THROW_GRENADE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_SLOWMO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ACCURATE_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_CHANGE_SHOT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_TARGET_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CREATOR_RS"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SNIPER_ZOOM_IN_ONLY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CREATOR_LS"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CREATOR_ACCEPT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LEFT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TALK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WEAPON_SPECIAL_TWO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SHOP_SELL"), false);
			break;
		case 10:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
			break;
		case 12:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 0);
			break;
		case 13:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			break;
	}
}

void func_1343(int iParam0, var uParam1, vector3 vParam2)
{
	*uParam1 = iParam0;
	uParam1->f_1 = 1;
	uParam1->f_2 = { vParam2 };
}

void func_1344(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_133[*uParam0 /*6*/]))
	{
		return;
	}
	switch (uParam0->f_1)
	{
		case 1:
			uParam0->f_5 = func_1885(Local_133[*uParam0 /*6*/], uParam0->f_2, 1);
			uParam0->f_6 = func_1885(Local_133[*uParam0 /*6*/], uParam0->f_2, 2);
			func_1428(Local_133[*uParam0 /*6*/], uParam0->f_5, 0.8f, -0.5f, -1, 26);
			uParam0->f_1 = 2;
			break;
		case 2:
			if (func_1429(Local_133[*uParam0 /*6*/], uParam0->f_5))
			{
				if (func_1430(Local_133[*uParam0 /*6*/], uParam0->f_5) >= 0.884f)
				{
					func_1428(Local_133[*uParam0 /*6*/], uParam0->f_6, 1f, -0.8f, -1, 24);
					uParam0->f_1 = 0;
				}
			}
			break;
		case 0:
			break;
	}
}

void func_1345(var uParam0)
{
	if (func_1418(30, 2))
	{
		if (!func_165(54))
		{
			if (__LIB_1__::func_992(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6), 1) >= 72900f)
			{
				func_1315(uParam0, 3);
				func_456(54);
			}
		}
		else if (__LIB_1__::func_992(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6), 1) <= 67600f)
		{
			UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
			func_1315(uParam0, 2);
			func_176(54);
		}
		else if (__LIB_1__::func_992(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6), 1) >= 136900f)
		{
			__LIB_11__::func_66(uParam0, func_1300(28), "", 1, 0);
		}
	}
}

void func_1346(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	struct<4> Var9;
	bool bVar13;
	bool bVar14;
	iVar0 = 6;
	while (iVar0 <= 7)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_133[iVar0 /*6*/]))
		{
			return;
		}
		switch (Local_133[iVar0 /*6*/].f_2)
		{
			case 1:
				func_462(91);
				if (func_941(uParam0) == 0)
				{
					if (iVar0 == 7)
					{
						PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), Local_133[iVar0 /*6*/]);
					}
				}
				func_943(iVar0, 16);
				break;
			case 16:
				if (iVar0 == 6)
				{
					if (__LIB_0__::func_94(Global_35, func_845(0, 5), 1) < __LIB_0__::func_94(Local_133[6 /*6*/], func_845(0, 5), 1))
					{
						bVar14 = true;
					}
					if (__LIB_0__::func_665(Global_35, Local_133[6 /*6*/], 1, 1) <= 30f || bVar14)
					{
						func_1355();
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_845(0, 5), 2.001f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						func_1356(Local_133[6 /*6*/], 0);
						PED::_0x2208438012482A1A(Local_133[6 /*6*/], true, false);
						if (func_941(uParam0) == 0)
						{
							PED::FORCE_PED_MOTION_STATE(Local_133[func_1308(6) /*6*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
						}
						func_1355();
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_845(0, 6), 2.001f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						func_1356(Local_133[7 /*6*/], 0.2f);
						PED::_0x2208438012482A1A(Local_133[7 /*6*/], true, false);
						if (func_941(uParam0) == 0)
						{
							PED::FORCE_PED_MOTION_STATE(Local_133[func_1308(7) /*6*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
						}
						if (!func_165(45))
						{
							func_1313(31);
						}
						func_456(45);
						func_943(6, 17);
						func_943(7, 17);
					}
				}
				break;
			case 17:
				if (iVar0 == 6)
				{
					__LIB_4__::func_89(&(vLocal_792[18 /*3*/]), 0);
					if (!func_165(47))
					{
						if (AUDIO::_0x1ECC76792F661CF5(func_1300(31)))
						{
							func_456(47);
						}
					}
					if (!func_165(47))
					{
						if (__LIB_1__::func_583(&(vLocal_792[18 /*3*/])) < 10f)
						{
						}
						else
						{
							func_1331();
							if (!__LIB_0__::func_899(&(vLocal_792[13 /*3*/])))
							{
								if (AUDIO::_0x1ECC76792F661CF5(func_1300(31)))
								{
									if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_1300(31)) >= 2)
									{
										__LIB_4__::func_89(&(vLocal_792[13 /*3*/]), 0);
									}
								}
							}
							else if (__LIB_1__::func_583(&(vLocal_792[13 /*3*/])) >= 6f)
							{
								bVar13 = true;
							}
							if (!bVar13)
							{
								if (__LIB_0__::func_665(Global_35, Local_133[6 /*6*/], 1, 1) >= 30f)
								{
									bVar13 = true;
								}
							}
							if (!bVar13)
							{
								if (__LIB_1__::func_583(&(vLocal_792[18 /*3*/])) >= 30f)
								{
								}
							}
							if (bVar13)
							{
								func_1315(uParam0, 2);
								func_943(6, 28);
								func_943(7, 28);
							}
							Jump @2117; //curOff = 776
							if (!func_463(91))
							{
							}
							else
							{
								if (iVar0 == 6)
								{
									__LIB_11__::func_824(&(Local_89.f_26), joaat("VOLCYLINDER"));
								}
								else if (iVar0 == 7)
								{
									__LIB_11__::func_824(&(Local_89.f_27), joaat("VOLCYLINDER"));
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[iVar0 /*6*/], true);
								Var5 = { func_1887(iVar0 == 6, func_1578(1, 1), func_1578(1, 4)) };
								Var9 = { func_1887(iVar0 == 6, func_1578(1, 2), func_1578(1, 5)) };
								PED::SET_PED_CONFIG_FLAG(Local_133[iVar0 /*6*/], 167, false);
								func_1355();
								if (iVar0 == 7)
								{
									TASK::TASK_TURN_PED_TO_FACE_COORD(0, Var5, 0);
								}
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_496(91), 0, 27656, -1, 0, 0, -1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var5, 1.75f, -1, 0.25f, 0, Var5.f_3);
								TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
								func_1356(Local_133[iVar0 /*6*/], __LIB_0__::func_514(iVar0 == 7, 0f, 2.5f));
								func_943(iVar0, 29);
								Jump @2117; //curOff = 1011
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_133[iVar0 /*6*/], func_496(91)))
								{
									if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_133[iVar0 /*6*/]) >= 188)
									{
										if (iVar0 == 6)
										{
											Var1 = { func_1578(1, 0) };
										}
										else if (iVar0 == 7)
										{
											Var1 = { func_1578(1, 3) };
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_133[iVar0 /*6*/], Var1, 1.75f, 40000, 0.25f, 0, Var1.f_3);
										func_943(iVar0, 38);
									}
								}
								Jump @2117; //curOff = 1124
								if (__LIB_16__::func_776(Local_133[iVar0 /*6*/], 713668775))
								{
								}
								else
								{
									if (func_165(56))
									{
										Var5 = { func_1887(iVar0 == 6, func_1578(1, 1), func_1578(1, 4)) };
										func_1355();
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_496(91), 40000, 27658, -1, 0, 0, -1);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var5, 1.75f, -1, 0.25f, 0, Var5.f_3);
										TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
										func_1356(Local_133[iVar0 /*6*/], __LIB_0__::func_514(iVar0 == 6, 0f, 3f));
										func_943(iVar0, 39);
									}
									else if (func_1418(30, 0))
									{
										if (__LIB_0__::func_665(Local_133[iVar0 /*6*/], Global_35, 1, 1) <= 20f)
										{
											if (func_165(45) && iLocal_1120 == 0)
											{
												func_943(iVar0, 36);
											}
										}
									}
									Jump @2117; //curOff = 1334
									if (!__LIB_11__::func_822(Local_133[iVar0 /*6*/]) && !PED::IS_PED_ON_MOUNT(Local_133[iVar0 /*6*/]))
									{
										func_943(iVar0, 14);
									}
									Jump @2117; //curOff = 1375
									Var9 = { func_1887(iVar0 == 6, func_1578(1, 2), func_1578(1, 5)) };
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[iVar0 /*6*/], false);
									TASK::TASK_CLEAR_LOOK_AT(Local_133[iVar0 /*6*/]);
									func_1355();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var9, 1f, 20000, 0.25f, 512, Var9.f_3);
									TASK::TASK_ACHIEVE_HEADING(0, Var9.f_3, 0);
									if (iVar0 == 6)
									{
										TASK::TASK_STAND_STILL(0, -1);
									}
									else if (iVar0 == 7)
									{
										TASK::TASK_STAND_STILL(0, -1);
									}
									func_1356(Local_133[iVar0 /*6*/], 0);
									func_943(iVar0, 15);
									Jump @2117; //curOff = 1508
									if (iVar0 == 6)
									{
										if (!__LIB_0__::func_899(&(vLocal_792[17 /*3*/])))
										{
											if (!PED::IS_PED_ON_MOUNT(Local_133[6 /*6*/]) && !PED::IS_PED_ON_MOUNT(Local_133[7 /*6*/]))
											{
												__LIB_4__::func_89(&(vLocal_792[17 /*3*/]), 0);
											}
										}
									}
									Jump @2117; //curOff = 1572
									if (!PED::_0x77525BBF433F2CD6(Local_133[iVar0 /*6*/]) && !PED::_0x40C9155AF8BC13F3(Local_133[iVar0 /*6*/]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[iVar0 /*6*/], true);
										func_1355();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_5__::func_263(iVar0 == 6, func_1336(1, 2), func_1336(1, 5)), 1f, 20000, 0.25f, 512, __LIB_0__::func_514(iVar0 == 6, func_1580(1, 2), func_1580(1, 5)));
										func_1356(Local_133[iVar0 /*6*/], 0);
										func_943(iVar0, 35);
									}
									Jump @2117; //curOff = 1699
									if (!__LIB_11__::func_822(Local_133[iVar0 /*6*/]))
									{
										func_943(iVar0, 14);
									}
									Jump @2117; //curOff = 1724
									if (iVar0 == 6)
									{
										func_1313(32);
										func_1355();
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6), 0);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6), 2000);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
										func_1356(Local_133[iVar0 /*6*/], 0);
									}
									else if (iVar0 == 7)
									{
										func_1355();
										TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 48, 41, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
										func_1356(Local_133[iVar0 /*6*/], 0);
									}
									func_943(iVar0, 37);
									Jump @2117; //curOff = 1877
									if (iVar0 == 6)
									{
										if ((__LIB_11__::func_822(Local_133[6 /*6*/]) && TASK::GET_SEQUENCE_PROGRESS(Local_133[6 /*6*/]) == 1) && !func_165(55))
										{
											func_1343(6, &Local_1169, VOLUME::_GET_VOLUME_COORDS(Local_89.f_6));
											func_456(55);
										}
									}
									if (!Local_1169.f_1 == 0)
									{
										func_1344(&Local_1169);
									}
									if (func_1418(30, 0))
									{
										if (__LIB_0__::func_665(Local_133[iVar0 /*6*/], Global_35, 1, 1) > 20f)
										{
											func_176(55);
											if (iVar0 == 6)
											{
												Var1 = { func_1578(1, 0) };
											}
											else if (iVar0 == 7)
											{
												Var1 = { func_1578(1, 3) };
											}
											func_1355();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var1, 1.75f, 20000, 0.25f, 0, Var1.f_3);
											TASK::TASK_ACHIEVE_HEADING(0, Var1.f_3, -1);
											func_1356(Local_133[iVar0 /*6*/], __LIB_0__::func_514(iVar0 == 6, 0f, 0.6f));
											func_943(iVar0, 38);
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				default:
					break;
		}
	}
}

void func_1349()
{
	iLocal_775[0] = __LIB_8__::func_777(-1282792512, VOLUME::_GET_VOLUME_COORDS(Local_89.f_16), 7.5f, 1);
	MAP::_BLIP_SET_MODIFIER(iLocal_775[0], -401963276);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_775[0], func_1300(13));
}

void func_1350(int iParam0)
{
	struct<4> Var0;
	int iVar7;
	vector3 vVar8;
	if (ENTITY::DOES_ENTITY_EXIST(Local_941[iParam0 /*2*/]))
	{
		return;
	}
	Var0 = { func_994(iParam0) };
	iVar7 = func_464(Var0.f_6);
	if (STREAMING::HAS_MODEL_LOADED(iVar7))
	{
		if (Var0 <= 1f && Var0 >= -1f)
		{
			vVar8 = { 100f, 100f, -100f };
		}
		else
		{
			vVar8 = { Var0 };
		}
		Local_941[iParam0 /*2*/] = OBJECT::CREATE_OBJECT(iVar7, vVar8, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_941[iParam0 /*2*/], Var0.f_3, 2, true);
	}
}

int func_1351(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, iParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_899(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_4__::func_89(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_1__::func_561(fParam4);
	}
	if (__LIB_0__::func_899(fParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_583(fParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return 0;
}

void func_1355()
{
	if (func_165(12))
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_780);
		func_176(12);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_780);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_780);
	func_456(12);
}

void func_1356(int iParam0, float fParam1)
{
	if (!func_165(12))
	{
		return;
	}
	TASK::CLOSE_SEQUENCE_TASK(iLocal_780);
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (fParam1 == 0f)
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_780);
		}
		else
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iLocal_780, fParam1, fParam1);
		}
	}
	func_176(12);
}

void func_1357()
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!__LIB_1__::func_707(joaat("WEAPON_KIT_BINOCULARS"), 1, 0))
		{
			func_339(iLocal_781[0], 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::_0xED00D72F81CF7278(iVar0, 0, 0);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iLocal_781[0], false, 0, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
		TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
		func_1355();
		TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(6, 8), 1f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_1336(1, 2), 0);
		func_1356(Global_35, 0);
		func_456(56);
		func_456(13);
	}
}

void func_1358()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_133[1 /*6*/]) || ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
	{
		return;
	}
	func_1892(Local_133[1 /*6*/], 4, 0f, 0f, 0f, 1);
	func_1892(Local_133[1 /*6*/], 5, 0f, 0f, 0f, 1);
	func_1892(Local_133[1 /*6*/], 6, 0f, 0f, 0f, 1);
}

void func_1359(int iParam0)
{
	iLocal_1121 = iParam0;
}

void func_1360(int iParam0)
{
	iLocal_1122 = iParam0;
}

int func_1361(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_PC_VERSION())
			{
				return joaat("INPUT_ATTACK");
			}
			else
			{
				return joaat("INPUT_AIM");
			}
			break;
		case 1:
			return joaat("INPUT_MOVE_UD");
		case 2:
			return joaat("INPUT_MOVE_LR");
		case 3:
			return joaat("INPUT_LOOK_LR");
		case 4:
			return joaat("INPUT_LOOK_UP_ONLY");
		case 5:
			return joaat("INPUT_MOVE_LR");
		case 6:
			return joaat("INPUT_MOVE_LEFT_ONLY");
		case 7:
			return joaat("INPUT_MOVE_RIGHT_ONLY");
		case 8:
			return joaat("INPUT_CONTEXT_ACTION");
		case 12:
			return joaat("INPUT_MOVE_LR");
		case 13:
			return joaat("INPUT_MOVE_LEFT_ONLY");
		case 14:
			return joaat("INPUT_MOVE_RIGHT_ONLY");
		case 15:
			return joaat("INPUT_CONTEXT_ACTION");
		case 9:
			return joaat("INPUT_MOVE_LR");
		case 10:
			return joaat("INPUT_MOVE_UD");
		case 11:
			return joaat("INPUT_LOOK_LR");
		case 16:
			return joaat("INPUT_CONTEXT_ACTION");
		case 17:
			return joaat("INPUT_MINIGAME_ACTION_UP");
		case 18:
			return joaat("INPUT_CONTEXT_ACTION");
		case 19:
			return joaat("INPUT_MELEE_ATTACK");
		case 24:
			return joaat("INPUT_ATTACK");
		case 20:
			return joaat("INPUT_CONTEXT_A");
		case 21:
			return joaat("INPUT_CONTEXT_B");
		case 22:
			return joaat("INPUT_CONTEXT_X");
		case 23:
			return joaat("INPUT_CONTEXT_Y");
		case 25:
			return joaat("INPUT_CONTEXT_X");
		case 26:
			return joaat("INPUT_WHISTLE");
	}
	return joaat("INPUT_CONTEXT_A");
}

Vector3 func_1362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0f, -10f, -0.02f;
		case 2:
			return 0.119f, 0.087f, -0.021f;
		case 3:
			return 0.128f, 0.056f, -0.03f;
		case 4:
			return 0.128f, 0.068f, -0.02f;
		case 5:
			return -859.7f, -742.66f, 56.73f;
		case 6:
			return -1210.31f, -713.123f, 71.958f;
		case 7:
			return 50f, -22f, 198f;
		case 8:
			return -866.018f, -732.451f, 59.0688f;
		case 9:
			return 20.6139f, -79.9293f, -177.039f;
		case 10:
			return -866.083f, -732.689f, 58.8119f;
		case 11:
			return -88.8339f, -112.772f, 31.9047f;
	}
	return 0f, 0f, 0f;
}

bool func_1364(var uParam0)
{
	switch (iLocal_1482[1])
	{
		case 0:
			iLocal_1482[1] = 1;
		case 1:
			iLocal_1482[1] = 2;
		case 2:
			iLocal_1482[1] = 3;
		case 3:
			__LIB_5__::func_262(&(uParam0->f_7375));
			__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[6 /*6*/], "Dutch", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[7 /*6*/], "MicahBell", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[16 /*6*/], "ColmODriscoll", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[18 /*6*/], "G_M_M_UniDuster_01^1", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[17 /*6*/], "G_M_M_UNIDUSTER_01", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[20 /*6*/], "Horse_01^1", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[22 /*6*/], "Horse_01", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[21 /*6*/], "Horse_01^2", 0, 0, 0, 0);
			iLocal_1482[1] = 6;
		case 6:
			return true;
	}
	return false;
}

void func_1369(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 0:
			Local_1371[iParam0 /*5*/].f_1 = 1;
		case 1:
			Local_1371[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1896(iParam0, 1), 0, func_1896(iParam0, 0), false, true);
			Local_1371[iParam0 /*5*/].f_1 = 2;
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1371[iParam0 /*5*/], true, false))
			{
				if (Local_1371[iParam0 /*5*/].f_3)
				{
					func_1897(iParam0);
				}
				Local_1371[iParam0 /*5*/].f_1 = 3;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_1371[iParam0 /*5*/], true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_1371[iParam0 /*5*/]);
			}
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1371[iParam0 /*5*/], true, false))
			{
				if (Local_1371[iParam0 /*5*/].f_3)
				{
					func_1897(iParam0);
					if (Local_1371[iParam0 /*5*/].f_4)
					{
						Local_1371[iParam0 /*5*/].f_1 = 4;
					}
				}
				else
				{
					Local_1371[iParam0 /*5*/].f_1 = 4;
				}
			}
			break;
		case 4:
			func_1897(iParam0);
			break;
		case 5:
			break;
		case 6:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[iParam0 /*5*/]))
			{
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1371[iParam0 /*5*/], true, false))
			{
			}
			ANIMSCENE::START_ANIM_SCENE(Local_1371[iParam0 /*5*/]);
			Local_1371[iParam0 /*5*/].f_1 = 7;
			break;
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1371[iParam0 /*5*/]))
			{
				Local_1371[iParam0 /*5*/].f_1 = 8;
			}
			break;
		case 8:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1371[iParam0 /*5*/], false))
			{
				Local_1371[iParam0 /*5*/].f_1 = 9;
			}
			break;
		case 9:
			if (Local_1371[iParam0 /*5*/].f_2)
			{
				Local_1371[iParam0 /*5*/].f_1 = 10;
			}
			break;
		case 10:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[iParam0 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1371[iParam0 /*5*/]);
			}
			Local_1371[iParam0 /*5*/].f_1 = 11;
			break;
	}
}

void func_1370(float fParam0)
{
	float fVar0;
	float fVar1;
	if (fParam0 <= 0f || fParam0 > 2f)
	{
		__LIB_0__::func_251(fParam0, 0f, 2f);
	}
	if (!__LIB_0__::func_899(&(vLocal_792[23 /*3*/])))
	{
		__LIB_4__::func_89(&(vLocal_792[23 /*3*/]), 0);
	}
	fVar0 = (60f / (80f * fParam0));
	fVar1 = (0.2f * fParam0);
	if (!func_165(3))
	{
		if (__LIB_1__::func_583(&(vLocal_792[23 /*3*/])) >= fVar0)
		{
			PAD::SET_PAD_SHAKE(0, 66, 128);
			func_456(3);
		}
	}
	else if (__LIB_1__::func_583(&(vLocal_792[23 /*3*/])) >= (fVar0 + fVar1))
	{
		PAD::SET_PAD_SHAKE(0, 99, 64);
		func_176(3);
		__LIB_2__::func_259(&(vLocal_792[23 /*3*/]));
	}
}

bool func_1372(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam1);
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	return false;
}

void func_1373()
{
	struct<4> Var0;
	CLOCK::SET_CLOCK_TIME(17, 0, 0);
	func_1295(Local_133[24 /*6*/], func_551(2, 0), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[25 /*6*/], func_551(2, 1), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[26 /*6*/], func_551(2, 2), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[27 /*6*/], func_551(2, 3), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[28 /*6*/], func_551(3, 0), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[29 /*6*/], func_551(3, 1), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[30 /*6*/], func_551(3, 2), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[31 /*6*/], func_551(3, 3), 2, 1073741824 /* Float: 2f */);
	TASK::_TASK_START_SCENARIO_IN_PLACE(Local_133[28 /*6*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), 0, false, 0, -1f, false);
	TASK::_TASK_START_SCENARIO_IN_PLACE(Local_133[29 /*6*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), 0, false, 0, -1f, false);
	TASK::_TASK_START_SCENARIO_IN_PLACE(Local_133[30 /*6*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), 0, false, 0, -1f, false);
	TASK::_TASK_START_SCENARIO_IN_PLACE(Local_133[31 /*6*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), 0, false, 0, -1f, false);
	ENTITY::DETACH_ENTITY(Global_35, true, true);
	if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_1371[0 /*5*/], "ARTHUR", &Var0, false, 0, 2))
	{
		Var0 = { func_845(2, 4) };
		Var0.f_3.f_2 = func_1297(2, 4);
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var0, Var0.f_3.f_2, true, false, true);
}

bool func_1374(int iParam0, bool bParam1)
{
	if (!Local_1371[iParam0 /*5*/].f_1 == 5)
	{
		if (bParam1)
		{
		}
		return false;
	}
	Local_1371[iParam0 /*5*/].f_1 = 6;
	func_1369(iParam0);
	return true;
}

void func_1375()
{
	struct<7> Var0;
	CLOCK::SET_CLOCK_TIME(17, 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[27 /*6*/]))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Local_133[27 /*6*/], false, 0, false);
	}
	if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_1371[1 /*5*/], "Shooter", &Var0, true, "pbl_Gang_Conversation", 2))
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[24 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[24 /*6*/], Var0, Var0.f_6.f_2, true, false, true);
	}
	if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_1371[1 /*5*/], "Gang01", &Var0, true, "pbl_Gang_Conversation", 2))
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[25 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[25 /*6*/], Var0, Var0.f_6.f_2, true, false, true);
	}
	if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_1371[1 /*5*/], "Gang02", &Var0, true, "pbl_Gang_Conversation", 2))
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[26 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[26 /*6*/], Var0, Var0.f_6.f_2, true, false, true);
	}
	if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_1371[1 /*5*/], "Gang03", &Var0, true, "pbl_Gang_Conversation", 2))
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[27 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[27 /*6*/], Var0, Var0.f_6.f_2, true, false, true);
	}
	func_1295(Local_133[28 /*6*/], func_551(3, 0), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[29 /*6*/], func_551(3, 1), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[30 /*6*/], func_551(3, 2), 2, 1073741824 /* Float: 2f */);
	func_1295(Local_133[31 /*6*/], func_551(3, 3), 2, 1073741824 /* Float: 2f */);
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[28 /*6*/]))
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(Local_133[28 /*6*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, false, 0, -1f, false);
		PED::SET_PED_CONFIG_FLAG(Local_133[28 /*6*/], 136, true);
		PED::SET_PED_CONFIG_FLAG(Local_133[28 /*6*/], 471, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[29 /*6*/]))
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(Local_133[29 /*6*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, false, 0, -1f, false);
		PED::SET_PED_CONFIG_FLAG(Local_133[29 /*6*/], 136, true);
		PED::SET_PED_CONFIG_FLAG(Local_133[29 /*6*/], 471, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[30 /*6*/]))
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(Local_133[30 /*6*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, false, 0, -1f, false);
		PED::SET_PED_CONFIG_FLAG(Local_133[30 /*6*/], 136, true);
		PED::SET_PED_CONFIG_FLAG(Local_133[30 /*6*/], 471, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[31 /*6*/]))
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(Local_133[31 /*6*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, false, 0, -1f, false);
		PED::SET_PED_CONFIG_FLAG(Local_133[31 /*6*/], 136, true);
		PED::SET_PED_CONFIG_FLAG(Local_133[31 /*6*/], 471, true);
	}
	PED::SET_PED_SEEING_RANGE(Local_133[24 /*6*/], 6f);
	PED::SET_PED_SEEING_RANGE(Local_133[25 /*6*/], 6f);
	PED::SET_PED_SEEING_RANGE(Local_133[26 /*6*/], 6f);
	PED::SET_PED_SEEING_RANGE(Local_133[27 /*6*/], 6f);
	func_1405(24, 1, 2);
	func_1405(25, 1, 2);
	func_1405(26, 1, 2);
	func_1405(27, 1, 2);
	func_462(61);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::SET_ENTITY_HEADING(Global_35, 180f);
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		func_188(1);
	}
}

bool func_1376(var uParam0)
{
	struct<12> Var0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(Local_133[25 /*6*/]))
	{
		return false;
	}
	CAM::_0x90DA5BA5C2635416();
	func_1369(1);
	func_1369(2);
	func_1369(3);
	func_1369(4);
	func_1369(5);
	switch (iLocal_1223)
	{
		case 0:
			func_1374(1, 1);
			func_1374(2, 1);
			func_1369(2);
			__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 1);
			iLocal_1223 = 1;
			break;
		case 1:
			if (__LIB_1__::func_583(&(vLocal_792[0 /*3*/])) >= 1f)
			{
				if (func_1372(1, 3000))
				{
					func_1315(uParam0, 4);
					__LIB_1__::func_561(&(vLocal_792[0 /*3*/]));
					iLocal_1223 = 2;
				}
			}
			break;
		case 2:
			if (!func_165(67))
			{
				if (__LIB_0__::func_899(&(vLocal_792[0 /*3*/])))
				{
					if (__LIB_1__::func_583(&(vLocal_792[0 /*3*/])) >= 30f)
					{
						func_1359(37);
						func_456(67);
					}
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1371[2 /*5*/], "s_Arthur_Looks_Around_Loop", 1))
			{
				if (!__LIB_0__::func_899(&(vLocal_792[0 /*3*/])))
				{
					__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					HUD::_DISPLAY_HUD_COMPONENT(iLocal_131);
				}
				if (MISC::ABSF(PAD::GET_CONTROL_NORMAL(0, func_1361(1))) >= 0.3f || MISC::ABSF(PAD::GET_CONTROL_NORMAL(0, func_1361(2))) >= 0.3f)
				{
					UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1371[2 /*5*/], "pbl_Arthur_Escapes", true);
					iLocal_1223 = 3;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1371[2 /*5*/], "ARTHUR"))
			{
				__LIB_11__::func_824(&(Local_89.f_30), joaat("VOLBOX"));
				__LIB_11__::func_824(&(Local_89.f_32), joaat("VOLBOX"));
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.5f, 1000, 0f, false, false);
				func_1428(Global_35, 61, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, -1, 25);
				iLocal_1223 = 4;
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_1, true, 0))
			{
				func_456(63);
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_13, true, 0))
			{
				func_456(63);
			}
			if (__LIB_1__::func_583(&(vLocal_792[22 /*3*/])) >= 60f)
			{
				func_456(63);
			}
			if (func_165(63))
			{
				iLocal_1223 = 5;
			}
			break;
		case 5:
			if (((ENTITY::IS_ENTITY_DEAD(Local_133[24 /*6*/]) || ENTITY::IS_ENTITY_DEAD(Local_133[25 /*6*/])) || ENTITY::IS_ENTITY_DEAD(Local_133[26 /*6*/])) || ENTITY::IS_ENTITY_DEAD(Local_133[27 /*6*/]))
			{
				return true;
			}
			__LIB_11__::func_59(uParam0, 2);
			PED::SET_PED_SEEING_RANGE(Local_133[24 /*6*/], 60f);
			PED::SET_PED_SEEING_RANGE(Local_133[25 /*6*/], 60f);
			PED::SET_PED_SEEING_RANGE(Local_133[26 /*6*/], 60f);
			PED::SET_PED_SEEING_RANGE(Local_133[27 /*6*/], 60f);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_133[24 /*6*/], 30, true);
			MAP::_BLIP_REMOVE_MODIFIER(Local_133[24 /*6*/].f_1, -662251075);
			MAP::_BLIP_REMOVE_MODIFIER(Local_133[25 /*6*/].f_1, -662251075);
			MAP::_BLIP_REMOVE_MODIFIER(Local_133[26 /*6*/].f_1, -662251075);
			MAP::_BLIP_REMOVE_MODIFIER(Local_133[27 /*6*/].f_1, -662251075);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1371[1 /*5*/], "pbl_Gang_React_to_Player_Escape", true);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_133[24 /*6*/], iLocal_781[2], 10, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			Local_941[6 /*2*/] = WEAPON::_0xC6A6789BB405D11C(Local_133[24 /*6*/], 1);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[5 /*5*/], "SHOTGUN", Local_941[6 /*2*/], 0);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_133[24 /*6*/], iLocal_781[2], 10, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_133[24 /*6*/], iLocal_781[2], true, 0, false, false);
			func_1374(5, 1);
			iLocal_1223 = 6;
			break;
		case 6:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
			if (ENTITY::IS_ENTITY_DEAD(Local_133[24 /*6*/]))
			{
			}
			else
			{
				if (!__LIB_0__::func_899(&(vLocal_792[21 /*3*/])))
				{
					if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1371[5 /*5*/], "Shooter"))
					{
						TASK::TASK_AIM_AT_ENTITY(Local_133[24 /*6*/], Global_35, -1, 1, 0);
						PED::FORCE_PED_MOTION_STATE(Local_133[24 /*6*/], joaat("MOTIONSTATE_AIMING"), false, 0, true);
						Var0.f_8 = -1082130432;
						Var0.f_14 = 1;
						Var0.f_13 = 1;
						Var0.f_12 = 1;
						Var0.f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(PED::GET_PED_BONE_COORDS(Global_35, 21030, func_1362(0)), ENTITY::GET_ENTITY_HEADING(Global_35), -0.2f, 0f, 0f) };
						Var0 = { __LIB_1__::func_367(ENTITY::GET_ENTITY_COORDS(Local_133[24 /*6*/], true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0.1f) };
						Var0.f_6 = iLocal_781[2];
						Var0.f_7 = 0f;
						Var0.f_11 = Global_35;
						MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
						__LIB_4__::func_89(&(vLocal_792[21 /*3*/]), 0);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_941[6 /*2*/]))
					{
						if (ANIMSCENE::_0xF94692EB9DC15D74(Local_1371[5 /*5*/], 0))
						{
							func_471(uParam0, 6, 0);
							WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_133[24 /*6*/], 0, true);
						}
					}
					if (!__LIB_1__::func_583(&(vLocal_792[21 /*3*/])) >= 0.2f)
					{
					}
					else
					{
						func_1374(3, 1);
						PAD::SET_PAD_SHAKE(0, 2000, 222);
						__LIB_11__::func_59(uParam0, 3);
						func_940(1, 1);
						func_1318(4);
						HUD::_HIDE_HUD_COMPONENT(iLocal_131);
						__LIB_5__::func_106(uParam0, Local_133[24 /*6*/], "ODR_PED6", 0);
						__LIB_5__::func_106(uParam0, Local_133[25 /*6*/], "ODR3_ODRISCOLL1", 0);
						UIFEED::_0x6035E8FBCA32AC5E();
						iLocal_1223 = 7;
						Jump @1668; //curOff = 1369
						func_163(1);
						if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1371[3 /*5*/], "ARTHUR"))
						{
							func_1399(1);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[4 /*5*/], "Shooter", Local_133[24 /*6*/], 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[4 /*5*/], "Gang01", Local_133[25 /*6*/], 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[4 /*5*/], "Gang03", Local_133[27 /*6*/], 0);
							func_1374(4, 1);
							iLocal_1223 = 8;
						}
						Jump @1668; //curOff = 1473
						func_163(1);
						if (!func_165(65))
						{
							if (__LIB_0__::func_899(&(vLocal_792[21 /*3*/])))
							{
								if (__LIB_1__::func_592(&(vLocal_792[21 /*3*/])) >= 2000)
								{
									func_456(65);
									func_456(64);
								}
							}
						}
						if (func_165(65))
						{
							if (!func_165(66))
							{
								if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1371[4 /*5*/], "s_Arthur_Shot_Point_Blank_Range", 1) && ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1371[4 /*5*/]) >= 8f)
								{
									func_176(64);
									PAD::SET_PAD_SHAKE(0, 1000, 255);
									func_456(66);
								}
							}
						}
						if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1371[4 /*5*/]))
						{
							CAM::DO_SCREEN_FADE_OUT(0);
							__LIB_4__::func_89(&(vLocal_792[24 /*3*/]), 0);
							iLocal_1223 = 9;
							return true;
						}
						Jump @1668; //curOff = 1653
						func_163(1);
						return true;
					}
					return false;
				}
			}
			default:
				break;
	}
}

void func_1378(int iParam0, float fParam1)
{
	func_1426(iParam0, fParam1);
	func_1427(iParam0, 1);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

struct<15> func_1379(int iParam0)
{
	struct<15> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 0.372f, -0.214f, 0.106f };
			Var0.f_3 = { 0.691f, -0.2f, -0.297f };
			Var0.f_6 = 72f;
			Var0.f_13 = 35f;
			break;
		case 1:
			Var0 = { -862.5888f, -745.315f, 57.19f };
			Var0.f_3 = { -0.4404f, 0.0506f, -68.5564f };
			Var0.f_6 = 50f;
			Var0.f_14 = 10f;
			Var0.f_7 = { -861.562f, -745.496f, 57.4464f };
			Var0.f_10 = { -2.40994f, 0.46253f, -46.8712f };
			Var0.f_13 = 50f;
			break;
		case 2:
			Var0 = { -859.315f, -742.611f, 56.972f };
			Var0.f_3 = { 2.1818f, 0.0491f, 85.9173f };
			Var0.f_6 = 32.2994f;
			break;
		case 6:
			Var0 = { -859.7786f, -742.5337f, 57.0596f };
			Var0.f_3 = { 0.2426f, 0.0794f, 85.4306f };
			Var0.f_6 = 37.8045f;
			break;
		case 7:
			Var0 = { -859.9454f, -742.5367f, 57.0901f };
			Var0.f_3 = { 1.0509f, 0.3513f, 76.9753f };
			Var0.f_6 = 37.0729f;
			break;
		case 8:
			Var0 = { -859.4204f, -741.9394f, 56.9579f };
			Var0.f_3 = { 2.2981f, 0.217f, 110.8169f };
			Var0.f_6 = 20.329f;
			break;
		case 9:
			Var0 = { -860.1362f, -743.3084f, 57.0389f };
			Var0.f_3 = { -5.8418f, 0.0889f, 17.9908f };
			Var0.f_6 = 38f;
			break;
		case 10:
			Var0 = { -860.2368f, -742.8105f, 57.1283f };
			Var0.f_3 = { -8.4311f, -0.0324f, 27.1247f };
			Var0.f_6 = 38f;
			break;
		case 11:
			Var0 = { -860.2751f, -742.7956f, 57.126f };
			Var0.f_3 = { -2.9398f, 0.0889f, 36.3771f };
			Var0.f_6 = 38f;
			break;
		case 3:
			Var0 = { -862.4896f, -744.7618f, 56.9179f };
			Var0.f_3 = { 23.9502f, 0.1425f, 115.4776f };
			Var0.f_6 = 43f;
			break;
		case 4:
			Var0 = { -1210.4f, -712.6f, 72.6f };
			Var0.f_3 = { 32.3f, 0.1f, -160.7f };
			Var0.f_6 = 57.2f;
			break;
		default:
			break;
	}
	return Var0;
}

void func_1380()
{
	struct<14> Var0;
	vector3 vVar15;
	float fVar18;
	Var0 = { func_1379(0) };
	CAM::SET_CAM_COORD(iLocal_1009[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_133[28 /*6*/], Var0));
	vVar15 = { Var0.f_3 };
	vVar15.x = (vVar15.x + func_1899(1, (func_1898(4) * 0.8f)));
	vVar15.f_1 = (vVar15.y - func_1899(0, (PAD::GET_CONTROL_NORMAL(0, func_1361(3)) * 1f)));
	fVar18 = (MISC::ABSF(Local_1123[1 /*6*/].f_2) + (MISC::ABSF(Local_1123[0 /*6*/].f_2) / 2f));
	CAM::SET_CAM_FOV(iLocal_1009[0], __LIB_0__::func_667(Var0.f_6, Var0.f_13, fVar18));
	CAM::POINT_CAM_AT_COORD(iLocal_1009[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_133[28 /*6*/], vVar15));
}

bool func_1381(bool bParam0)
{
	if (bParam0)
	{
		func_462(func_461(13));
		func_462(func_461(10));
		func_462(func_461(8));
		func_462(func_461(9));
		func_462(func_461(12));
		func_462(func_461(11));
		func_462(func_461(14));
		func_462(func_461(15));
		func_462(func_461(17));
		if ((((((((func_463(func_461(13)) && func_463(func_461(10))) && func_463(func_461(8))) && func_463(func_461(9))) && func_463(func_461(12))) && func_463(func_461(11))) && func_463(func_461(14))) && func_463(func_461(15))) && func_463(func_461(17)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	func_466(func_461(13));
	func_466(func_461(10));
	func_466(func_461(8));
	func_466(func_461(9));
	func_466(func_461(12));
	func_466(func_461(11));
	func_466(func_461(14));
	func_466(func_461(15));
	return true;
}

void func_1382(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_68))
	{
		Local_14.f_68 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_69[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_69[0] = OBJECT::CREATE_OBJECT(joaat("P_NAILFILE01X"), -859.8f, -742.82f, 56.75f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_69[0], -86.3137f, 6.8591f, -93.0248f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_69[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_69[0], Local_14);
	__LIB_5__::func_510(Local_14.f_69[0], Local_14.f_68);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_69[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_69[1] = OBJECT::CREATE_OBJECT(joaat("P_CS_SHACKLELEG05X"), -859.569f, -744.096f, 58.0732f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_69[1], 6.8353f, 1.4369f, 125.163f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_69[1], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_69[1], Local_14);
	__LIB_5__::func_510(Local_14.f_69[1], Local_14.f_68);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_69[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_69[2] = OBJECT::CREATE_OBJECT(joaat("P_CS_CHAINLINK01X"), -859.603f, -744.094f, 58.3943f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_69[2], 0.3362f, 91.1119f, -163.176f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_69[2], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_69[2], Local_14);
	__LIB_5__::func_510(Local_14.f_69[2], Local_14.f_68);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_69[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_69[3] = OBJECT::CREATE_OBJECT(joaat("P_CS_RAG02X"), -859.7105f, -742.6176f, 56.761f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_69[3], 0f, 0f, 0f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_69[3], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_69[3], Local_14);
	__LIB_5__::func_510(Local_14.f_69[3], Local_14.f_68);
}

int func_1384(var uParam0)
{
	bool bVar0;
	switch (iLocal_1482[2])
	{
		case 0:
			iLocal_1482[2] = 1;
		case 1:
			func_462(func_1323(16));
			func_462(10);
			if (func_463(11) && func_463(10))
			{
				iLocal_1482[2] = 2;
			}
			break;
		case 2:
			bVar0 = true;
			if (!func_1324(uParam0, 16, 16, 15))
			{
				bVar0 = false;
			}
			if (!func_1324(uParam0, 18, 18, 15))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_1482[2] = 3;
			}
			break;
		case 3:
			PED::_SET_PED_BODY_COMPONENT(Local_133[16 /*6*/], joaat("META_OUTFIT_WARM_WEATHER"));
			PED::_UPDATE_PED_VARIATION(Local_133[16 /*6*/], false, true, true, true, false);
			__LIB_5__::func_262(&(uParam0->f_7375));
			__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[16 /*6*/], "ColmODriscoll", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[18 /*6*/], "G_M_M_UniDuster_01", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_941[8 /*2*/], "p_cs_shackleleg05x", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_941[9 /*2*/], "p_cs_chainlink01x", 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_941[15 /*2*/]))
			{
				__LIB_5__::func_580(uParam0, Local_941[15 /*2*/], "p_chair23x", 0, 0, 0, 0);
			}
			iLocal_1482[2] = 6;
			break;
		case 6:
			return 1;
	}
	return 0;
}

Vector3 func_1385(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_247(iParam0) };
	return vVar0;
}

void func_1386()
{
	if (!__LIB_0__::func_898(-464836488))
	{
		__LIB_0__::func_803(-464836488);
	}
	__LIB_0__::func_400(-1192199739);
	__LIB_0__::func_401(-65072454);
}

void func_1387()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { func_1362(1) };
	vVar0.x = (vVar0.x - (5f * func_1899(0, PAD::GET_CONTROL_NORMAL(0, func_1361(3)))));
	vVar0.f_2 = (vVar0.z - (5f * func_1899(1, PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_UD")))));
	vVar3 = { PED::GET_PED_BONE_COORDS(Global_35, 56200, func_1362(0)) };
	vVar3 = { PED::GET_PED_BONE_COORDS(Global_35, 56200, func_1362(0)) };
	if (func_165(77))
	{
		vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, ENTITY::GET_ENTITY_HEADING(Global_35), vVar0) };
	}
	else
	{
		vVar6 = { -850.24f, -740.684f, 57.0828f };
		func_456(77);
	}
	CAM::POINT_CAM_AT_COORD(iLocal_1009[1], vVar6);
}

bool func_1388()
{
	return ((TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_941[8 /*2*/])) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_941[9 /*2*/]));
}

void func_1389(char* sParam0, float fParam1)
{
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, sParam0, fParam1);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Local_941[8 /*2*/], sParam0, fParam1);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Local_941[9 /*2*/], sParam0, fParam1);
}

void func_1390(char* sParam0, bool bParam1)
{
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Global_35, sParam0, bParam1);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Local_941[8 /*2*/], sParam0, bParam1);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Local_941[9 /*2*/], sParam0, bParam1);
}

bool func_1393()
{
	return ((TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_941[8 /*2*/])) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_941[9 /*2*/]));
}

void func_1394(char* sParam0)
{
	TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, sParam0);
	TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_941[8 /*2*/], sParam0);
	TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_941[9 /*2*/], sParam0);
}

void func_1397(int iParam0)
{
	int iVar0;
	if (iParam0 == 1)
	{
		iLocal_1231 = __LIB_1__::func_877(func_1300(2), func_1361(6), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		iVar0 = iLocal_1231;
	}
	else if (iParam0 == 2)
	{
		iLocal_1232 = __LIB_1__::func_877(func_1300(3), func_1361(7), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		iVar0 = iLocal_1232;
	}
	__LIB_4__::func_862(iVar0, func_1361(5));
	__LIB_4__::func_862(iVar0, func_1361(6));
	__LIB_4__::func_862(iVar0, func_1361(7));
	__LIB_1__::func_522(iVar0, 10, 1, 1);
	__LIB_1__::func_522(iVar0, 14, 1, 1);
	__LIB_1__::func_522(iVar0, 11, 1, 1);
}

void func_1399(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[iParam0 /*5*/]) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Local_1371[iParam0 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1371[iParam0 /*5*/]);
	}
	Local_1371[iParam0 /*5*/].f_1 = 11;
}

bool func_1400()
{
	struct<31> Var0;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		func_1904();
	}
	switch (Local_1235)
	{
		case 0:
			if (!func_165(98))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1371[10 /*5*/]) >= 1.4f)
				{
					PED::_SET_PED_COMPONENT_DISABLED(Global_35, -675377005, 1);
					PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
					func_456(98);
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1371[10 /*5*/], "s_Heat_File_IDLE", 1))
			{
				func_1399(9);
				fLocal_1251 = 0f;
				fLocal_1252 = 0f;
				ENTITY::SET_ENTITY_COORDS(Local_941[16 /*2*/], func_1362(5), true, false, true, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_941[10 /*2*/], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
				Var0.f_6 = -1082130432;
				Var0.f_9 = -1082130432;
				Var0.f_30 = "Heat_File";
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, func_497(97), &Var0, -907.96f, -749.18f, 58.1f, 0f, 0f, 0f, 2, 0, 0, 0, 131200, 0);
				PED::_0x2208438012482A1A(Global_35, true, false);
				func_1378(2, 1056964608 /* Float: 0.5f */);
				Local_1235 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[10 /*5*/]))
			{
				func_1399(10);
			}
			if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
			{
			}
			else
			{
				fVar34 = ((-PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR")) + 1f) * 0.5f);
				fVar35 = func_1899(2, fVar34);
				fLocal_1256 = fVar35;
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LEFT_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_RIGHT_ONLY"), true);
				if (fLocal_1251 < 0.8f && fLocal_1252 < 0.8f)
				{
					if (!__LIB_0__::func_139(iLocal_1261))
					{
						if (__LIB_0__::func_139(iLocal_1262))
						{
							__LIB_1__::func_281(&iLocal_1262, 1, 1);
						}
						if (__LIB_0__::func_139(iLocal_1263))
						{
							__LIB_1__::func_281(&iLocal_1263, 1, 1);
						}
						iLocal_1261 = __LIB_1__::func_877(func_1300(5), joaat("INPUT_MOVE_LR"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_2__::func_369(iLocal_1261, Local_941[10 /*2*/], 0, 1, -1);
						func_1906(iLocal_1261);
					}
				}
				else if (fLocal_1251 < 0.8f && fLocal_1252 >= 0.8f)
				{
					if (!__LIB_0__::func_139(iLocal_1262))
					{
						if (__LIB_0__::func_139(iLocal_1261))
						{
							__LIB_1__::func_281(&iLocal_1261, 1, 1);
						}
						if (__LIB_0__::func_139(iLocal_1263))
						{
							__LIB_1__::func_281(&iLocal_1263, 1, 1);
						}
						iLocal_1262 = __LIB_1__::func_877(func_1300(5), joaat("INPUT_MOVE_LEFT_ONLY"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_2__::func_369(iLocal_1262, Local_941[10 /*2*/], 0, 1, -1);
						func_1906(iLocal_1262);
					}
				}
				else if (fLocal_1251 >= 0.8f && fLocal_1252 < 0.8f)
				{
					if (!__LIB_0__::func_139(iLocal_1263))
					{
						if (__LIB_0__::func_139(iLocal_1261))
						{
							__LIB_1__::func_281(&iLocal_1261, 1, 1);
						}
						if (__LIB_0__::func_139(iLocal_1262))
						{
							__LIB_1__::func_281(&iLocal_1262, 1, 1);
						}
						iLocal_1263 = __LIB_1__::func_877(func_1300(5), joaat("INPUT_MOVE_RIGHT_ONLY"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_2__::func_369(iLocal_1263, Local_941[10 /*2*/], 0, 1, -1);
						func_1906(iLocal_1263);
					}
				}
				if ((__LIB_0__::func_139(iLocal_1261) || __LIB_0__::func_139(iLocal_1262)) || __LIB_0__::func_139(iLocal_1263))
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_941[10 /*2*/]), func_1300(7), 1, 0, 0, 0);
				}
				if (!__LIB_0__::func_899(&(vLocal_792[0 /*3*/])))
				{
					__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 1);
				}
				if (fLocal_1256 < 0.5f)
				{
					fLocal_774 = __LIB_0__::func_667(1f, 1.5f, ((-fLocal_1256 * 2f) + 1f));
				}
				else if (fLocal_1256 > 0.5f)
				{
					fLocal_774 = __LIB_0__::func_667(1f, 1.5f, ((fLocal_1256 * 2f) + -1f));
				}
				fLocal_774 = __LIB_0__::func_251(fLocal_774, 0f, 2f);
				func_1370(fLocal_774);
				fVar36 = (MISC::GET_FRAME_TIME() * 0.5f);
				fVar37 = (MISC::GET_FRAME_TIME() * 0.05f);
				if (fLocal_1256 <= (0.5f - 0.1f))
				{
					fLocal_1252 = (fLocal_1252 + fVar36);
					fLocal_1251 = (fLocal_1251 - fVar37);
				}
				else if (fLocal_1256 > (0.5f + 0.1f))
				{
					fLocal_1251 = (fLocal_1251 + fVar36);
					fLocal_1252 = (fLocal_1252 - fVar37);
				}
				else
				{
					fLocal_1251 = (fLocal_1251 - fVar37);
					fLocal_1252 = (fLocal_1252 - fVar37);
				}
				if (fLocal_1251 < 0f)
				{
					fLocal_1251 = 0f;
				}
				else if (fLocal_1251 > 1f)
				{
					fLocal_1251 = 1f;
				}
				if (fLocal_1252 < 0f)
				{
					fLocal_1252 = 0f;
				}
				else if (fLocal_1252 > 1f)
				{
					fLocal_1252 = 1f;
				}
				if (fLocal_1251 >= 0.8f && fLocal_1252 >= 0.8f)
				{
					UIFEED::_0x6035E8FBCA32AC5E();
					ENTITY::DETACH_ENTITY(Local_941[10 /*2*/], true, true);
					if (__LIB_0__::func_139(iLocal_1261))
					{
						__LIB_1__::func_281(&iLocal_1261, 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_1262))
					{
						__LIB_1__::func_281(&iLocal_1262, 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_1263))
					{
						__LIB_1__::func_281(&iLocal_1263, 1, 1);
					}
					Local_1235 = 2;
				}
				__LIB_2__::func_259(&(vLocal_792[0 /*3*/]));
				Jump @1391; //curOff = 1308
				if (func_1374(11, 1))
				{
					func_466(97);
					func_466(72);
					func_462(98);
					func_462(73);
					func_1399(10);
					Local_1235 = 3;
				}
				Jump @1391; //curOff = 1355
				if (CAM::DOES_CAM_EXIST(iLocal_1009[2]))
				{
					func_1907(2, 6, 3f, 0, 1);
					Local_1235 = 4;
					return true;
				}
			}
			return false;
			default:
				break;
	}
}

bool func_1401()
{
	struct<31> Var0;
	vector3 vVar34;
	float fVar37;
	float fVar38;
	int iVar39;
	vector3 vVar40;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Horizontal", fLocal_1257);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Vertical", fLocal_1258);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Twist", fLocal_1259);
	}
	switch (Local_1235)
	{
		case 4:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1371[11 /*5*/], "s_Hover_Over_Wound", 1))
			{
				Var0.f_6 = -1082130432;
				Var0.f_9 = -1082130432;
				Var0.f_30 = "Ready";
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, func_497(98), &Var0, -907.96f, -749.18f, 58.1f, 0f, 0f, 0f, 2, 0, 0, 0, 128, 0);
				PED::_0x2208438012482A1A(Global_35, true, false);
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
				{
					fLocal_1257 = 0.5f;
					fLocal_1258 = 0.5f;
					fLocal_1259 = 0.5f;
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Horizontal", fLocal_1257);
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Vertical", fLocal_1258);
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Twist", fLocal_1259);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1371[11 /*5*/], "File", Local_941[10 /*2*/]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1371[11 /*5*/], "Candle", Local_941[16 /*2*/]);
				ENTITY::FREEZE_ENTITY_POSITION(Local_941[16 /*2*/], true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_941[10 /*2*/], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
				UIFEED::_0x6035E8FBCA32AC5E();
				iLocal_129 = __LIB_1__::func_877(func_1300(6), func_1361(15), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_2__::func_369(iLocal_129, Local_941[10 /*2*/], 0, 1, -1);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_941[10 /*2*/]), func_1300(7), 1, 0, 0, 0);
				Local_1235 = 5;
			}
			break;
		case 5:
			func_1399(11);
			Local_1371[11 /*5*/].f_1 = 0;
			func_456(95);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_941[10 /*2*/]), func_1300(7), 1, 0, 0, 0);
			Local_1235 = 6;
			break;
		case 6:
			PAD::ENABLE_CONTROL_ACTION(0, func_1361(15), true);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_941[10 /*2*/]), func_1300(7), 1, 0, 0, 0);
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
			{
				if (__LIB_1__::func_514(iLocal_129, 1))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
					{
						__LIB_1__::func_281(&iLocal_129, 1, 1);
						func_1907(2, 7, 3f, 0, 1);
						UIFEED::_0x6035E8FBCA32AC5E();
						if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
						{
							fLocal_1257 = 0.5f;
							fLocal_1258 = 0.5f;
							fLocal_1259 = 0.5f;
							TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Horizontal", fLocal_1257);
							TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Vertical", fLocal_1258);
							TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Twist", fLocal_1259);
						}
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Gouge");
						if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
						{
							fLocal_1257 = 0.5f;
							fLocal_1258 = 0.5f;
							fLocal_1259 = 0.5f;
							TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Horizontal", fLocal_1257);
							TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Vertical", fLocal_1258);
							TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Twist", fLocal_1259);
						}
						__LIB_4__::func_89(&(vLocal_792[31 /*3*/]), 0);
						Local_1235 = 7;
					}
				}
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_941[10 /*2*/]), func_1300(7), 1, 0, 0, 0);
			if (__LIB_0__::func_899(&(vLocal_792[31 /*3*/])))
			{
				if (__LIB_1__::func_583(&(vLocal_792[31 /*3*/])) >= 0.786133f)
				{
					__LIB_1__::func_561(&(vLocal_792[31 /*3*/]));
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Gouge"))
			{
				Local_1235 = 8;
			}
			break;
		case 8:
			PAD::ENABLE_CONTROL_ACTION(0, func_1361(9), true);
			PAD::ENABLE_CONTROL_ACTION(0, func_1361(10), true);
			PAD::ENABLE_CONTROL_ACTION(0, func_1361(11), true);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_941[10 /*2*/]), func_1300(7), 1, 0, 0, 0);
			if (!__LIB_0__::func_139(iLocal_129))
			{
				iLocal_129 = __LIB_1__::func_877(func_1300(8), func_1361(9), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_522(iLocal_129, 14, 1, 1);
				__LIB_1__::func_522(iLocal_129, 10, 1, 1);
			}
			if (!__LIB_0__::func_139(iLocal_130))
			{
				iLocal_130 = __LIB_1__::func_877(func_1300(9), func_1361(11), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_522(iLocal_130, 14, 1, 1);
				__LIB_1__::func_522(iLocal_130, 10, 1, 1);
			}
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_941[10 /*2*/]), func_1300(7), 1, 0, 0, 0);
			fLocal_1257 = func_1899(4, func_1898(9));
			fLocal_1258 = func_1899(5, func_1898(10));
			fLocal_1259 = func_1899(6, func_1898(11));
			func_1909(fLocal_1257, fLocal_1258, fLocal_1259);
			vVar34 = { fLocal_1257, fLocal_1258, fLocal_1259 };
			fVar37 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar34, Local_1235.f_10, true);
			Local_1235.f_9 = (Local_1235.f_9 + fVar37);
			fVar38 = (Local_1235.f_9 / 10f);
			fVar38 = __LIB_0__::func_251(1f, 0f, fVar38);
			iVar39 = -1;
			if (fVar37 > 0.005f)
			{
				iVar39 = BUILTIN::FLOOR(__LIB_0__::func_667(0f, 255f, fVar38));
				func_1910(iVar39);
				if (fLocal_774 < 2.5f)
				{
					fLocal_774 = (fLocal_774 + (MISC::GET_FRAME_TIME() * 1f));
				}
			}
			else
			{
				if (fLocal_774 > 1f)
				{
					fLocal_774 = (fLocal_774 - (MISC::GET_FRAME_TIME() * 0.2f));
				}
				else if (fLocal_774 < 1f)
				{
					fLocal_774 = 1f;
				}
				fLocal_774 = __LIB_0__::func_251(80f, 0f, 2f);
				func_1370(fLocal_774);
			}
			Local_1235.f_10 = { vVar34 };
			vVar40 = { __LIB_1__::func_367(func_1362(3), func_1362(4), fVar38) };
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_941[14 /*2*/], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 30226), vVar40, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			fLocal_1168 = __LIB_0__::func_667(0f, 1f, fVar38);
			if (fVar38 == 1f)
			{
				if (func_1374(11, 1))
				{
					__LIB_1__::func_281(&iLocal_129, 1, 1);
					__LIB_1__::func_281(&iLocal_130, 1, 1);
					func_466(98);
					func_466(73);
					func_462(99);
					func_462(74);
					PAD::STOP_PAD_SHAKE(0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_941[14 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_941[14 /*2*/]));
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_937[1]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_937[1], false);
					}
					UIFEED::_0x6035E8FBCA32AC5E();
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[11 /*5*/], "Shell", Local_941[13 /*2*/], 0);
					ENTITY::DETACH_ENTITY(Local_941[10 /*2*/], true, true);
					fLocal_1168 = 0.3f;
					Local_1235 = 9;
				}
			}
			break;
		case 9:
			Local_1235 = 10;
			return true;
	}
	return false;
}

bool func_1402()
{
	struct<31> Var0;
	func_1370(1f);
	switch (Local_1235)
	{
		case 10:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1371[11 /*5*/], "s_picks_up_rag_then_cartridge", 1))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_1009[2]))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					func_473(2);
				}
			}
			if (ANIMSCENE::_0xF94692EB9DC15D74(Local_1371[11 /*5*/], 0))
			{
				Var0.f_6 = -1082130432;
				Var0.f_9 = -1082130432;
				Var0.f_30 = "ReadytoShake";
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, func_497(99), &Var0, -907.96f, -749.18f, 58.1f, 0f, 0f, 0f, 2, 0, 0, 0, 128, 0);
				PED::_0x2208438012482A1A(Global_35, true, false);
				func_1378(2, 1056964608 /* Float: 0.5f */);
				func_1907(2, 8, 0f, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				ENTITY::SET_ENTITY_COORDS(Local_941[13 /*2*/], -860.441f, -742.315f, 56.9937f, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Local_941[13 /*2*/], -21.5262f, -39.0253f, 93.4809f, 2, true);
				func_456(96);
				Local_1235 = 11;
			}
			break;
		case 11:
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_941[13 /*2*/], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
			if (__LIB_0__::func_139(iLocal_129))
			{
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_941[13 /*2*/]), func_1300(43), 1, 0, 0, 0);
			}
			if (!Local_1371[10 /*5*/].f_1 == 11)
			{
				func_1399(10);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_941[10 /*2*/], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
			}
			if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35) || !TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
			{
			}
			else
			{
				if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "ReadyToShake"))
				{
					if (!__LIB_0__::func_139(iLocal_129))
					{
						func_1911();
					}
					if (__LIB_1__::func_514(iLocal_129, 1))
					{
						__LIB_1__::func_281(&iLocal_129, 1, 1);
						iLocal_1253++;
						if (iLocal_1253 == 2)
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						}
						__LIB_4__::func_89(&(vLocal_792[33 /*3*/]), 0);
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Shake");
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Shake"))
				{
					if (__LIB_0__::func_899(&(vLocal_792[33 /*3*/])))
					{
						if (__LIB_1__::func_583(&(vLocal_792[33 /*3*/])) >= 0.45f)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(func_1912(0), Local_941[13 /*2*/], 0.035f, -0.01f, 0f, 0f, 0f, 0f, 1f, false, false, false);
							__LIB_1__::func_561(&(vLocal_792[33 /*3*/]));
						}
					}
					if (!iLocal_1253 == 2)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1379624381))
						{
							func_1911();
						}
					}
					if (__LIB_0__::func_139(iLocal_129))
					{
						if (__LIB_1__::func_732(iLocal_129, 1))
						{
							iLocal_1253++;
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Shake");
							__LIB_1__::func_281(&iLocal_129, 1, 1);
						}
						else
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1220809546))
							{
								if (!iLocal_1253 >= 2)
								{
									TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "ReadyToShake");
								}
								else
								{
									UIFEED::_0x6035E8FBCA32AC5E();
									func_466(99);
									func_466(74);
									func_1374(13, 1);
									func_462(100);
									func_462(75);
									ENTITY::DETACH_ENTITY(Local_941[13 /*2*/], true, true);
									ENTITY::SET_ENTITY_COORDS(Local_941[13 /*2*/], func_845(1, 5), true, false, true, true);
									Local_1235 = 12;
								}
							}
							Jump @876; //curOff = 844
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							func_473(2);
							Local_1235 = 13;
							return true;
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

bool func_1403()
{
	float fVar0;
	struct<31> Var1;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "ArmPhase", fLocal_1260);
	}
	fVar0 = func_1898(17);
	if (Local_1235 == 16 || Local_1235 == 17)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_1009[2]))
		{
			func_1913(2, 9, 10, fLocal_1260);
		}
	}
	switch (Local_1235)
	{
		case 13:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1371[13 /*5*/]) >= 2.23f)
			{
				Var1.f_6 = -1082130432;
				Var1.f_9 = -1082130432;
				Var1.f_30 = "ArmTransition";
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, func_497(100), &Var1, -907.96f, -749.18f, 58.1f, 0f, 0f, 0f, 2, 0, 0, 0, 128, 0);
				UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1371[13 /*5*/], "Candle", Local_941[16 /*2*/]);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_941[16 /*2*/], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_941[16 /*2*/], true);
				Local_1235 = 14;
			}
			break;
		case 14:
			Local_1235 = 15;
			break;
		case 15:
			func_1378(2, 1056964608 /* Float: 0.5f */);
			func_1907(2, 9, 0f, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			func_1399(13);
			Local_1371[13 /*5*/].f_1 = 0;
			func_456(97);
			Local_1235 = 16;
			break;
		case 16:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[13 /*5*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1371[13 /*5*/], false))
				{
					func_1399(13);
				}
			}
			func_1369(13);
			if (!__LIB_0__::func_139(iLocal_129))
			{
				iLocal_129 = __LIB_1__::func_877(func_1300(10), func_1361(17), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_4__::func_862(iLocal_129, func_1361(18));
				__LIB_1__::func_522(iLocal_129, 10, 1, 1);
				__LIB_1__::func_522(iLocal_129, 14, 1, 1);
				__LIB_1__::func_522(iLocal_129, 11, 1, 1);
			}
			func_1914(&fVar0, &fLocal_1260, 0.5f, 1f, -0.197f);
			func_1370(__LIB_0__::func_667(1f, 1.75f, fLocal_1254));
			if (fLocal_1260 >= 0.5f)
			{
				Local_1235 = 17;
			}
			break;
		case 17:
			func_1369(13);
			if (__LIB_1__::func_530(iLocal_129, 1))
			{
				if (!__LIB_0__::func_139(iLocal_130))
				{
					iLocal_130 = __LIB_1__::func_877(func_1300(11), func_1361(18), 13, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_4__::func_862(iLocal_130, func_1361(17));
					__LIB_1__::func_522(iLocal_130, 10, 1, 1);
					__LIB_1__::func_522(iLocal_130, 14, 1, 1);
					__LIB_1__::func_522(iLocal_130, 11, 1, 1);
				}
			}
			else if (__LIB_0__::func_139(iLocal_130))
			{
				__LIB_1__::func_281(&iLocal_130, 1, 1);
			}
			func_1917(&fLocal_1264, &fLocal_1260, (__LIB_4__::func_443(iLocal_130, 1) && __LIB_1__::func_530(iLocal_129, 1)), 1.1f, 1.1f, 1.169f, 0.235f, 0.958f, 0.383f, 0.5f);
			if (fLocal_1260 == 0.5f)
			{
				fLocal_1264 = 0.5f;
			}
			if (fLocal_1260 == 1f)
			{
				__LIB_1__::func_281(&iLocal_130, 1, 1);
				__LIB_1__::func_281(&iLocal_129, 1, 1);
				func_1907(2, 11, 1f, 0, 1);
				fLocal_1168 = 1f;
				__LIB_4__::func_89(&(vLocal_792[34 /*3*/]), 0);
				func_456(99);
				fLocal_774 = 2f;
				func_456(14);
				ENTITY::DETACH_ENTITY(Local_941[16 /*2*/], true, true);
				CAM::SHAKE_CAM(iLocal_1009[2], "MELEE_IMPACT_SHAKE", 4f);
				PAD::SET_PAD_SHAKE(0, 1000, 128);
				AUDIO::_PLAY_SOUND_FROM_ENTITY(func_1438(5), Local_941[16 /*2*/], func_1438(0), false, 0, 0);
				UIFEED::_0x6035E8FBCA32AC5E();
				func_1374(13, 1);
				func_466(100);
				func_466(75);
				Local_1235 = 20;
				return true;
			}
			else if (!fVar0 > 0f && fLocal_1260 <= (0.5f + 0.05f))
			{
				__LIB_1__::func_281(&iLocal_130, 1, 1);
				Local_1235 = 16;
			}
			break;
		case 19:
			Local_1235 = 20;
			break;
		case 20:
			return true;
	}
	return false;
}

void func_1404()
{
	PED::_SET_PED_BODY_COMPONENT(Global_35, 2072259397);
	PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
}

void func_1405(int iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_133[iParam0 /*6*/]))
	{
		return;
	}
	if (iParam0 >= 16 && iParam0 <= 53)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_133[iParam0 /*6*/].f_1))
		{
			Local_133[iParam0 /*6*/].f_1 = MAP::GET_BLIP_FROM_ENTITY(Local_133[iParam0 /*6*/]);
		}
		if (bParam1)
		{
			if (!MAP::DOES_BLIP_EXIST(Local_133[iParam0 /*6*/].f_1))
			{
				Local_133[iParam0 /*6*/].f_1 = MAP::GET_BLIP_FROM_ENTITY(Local_133[iParam0 /*6*/]);
			}
			if (MAP::DOES_BLIP_EXIST(Local_133[iParam0 /*6*/].f_1))
			{
				MAP::REMOVE_BLIP(&(Local_133[iParam0 /*6*/].f_1));
			}
			Local_133[iParam0 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_133[iParam0 /*6*/]);
			if (iParam2 == 1)
			{
				MAP::_BLIP_SET_MODIFIER(Local_133[iParam0 /*6*/].f_1, -1034486097);
			}
			else if (iParam2 == 2)
			{
				MAP::_BLIP_SET_MODIFIER(Local_133[iParam0 /*6*/].f_1, -662251075);
			}
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_133[iParam0 /*6*/].f_1, func_1300(15));
		}
		else if (MAP::DOES_BLIP_EXIST(Local_133[iParam0 /*6*/].f_1))
		{
			MAP::REMOVE_BLIP(&(Local_133[iParam0 /*6*/].f_1));
		}
		return;
	}
}

void func_1408(int iParam0)
{
	struct<7> Var0;
	Var0 = { func_1920(iParam0) };
	iLocal_1006[iParam0] = TASK::ADD_COVER_POINT(Var0, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, false);
}

void func_1409()
{
	func_462(76);
	func_462(77);
	func_462(78);
	func_462(79);
	func_462(func_1323(20));
	func_462(func_1323(21));
	func_462(func_1323(22));
	func_462(func_1323(23));
	func_462(func_461(20));
	func_462(func_461(19));
	func_462(func_461(18));
	func_462(func_1323(54));
	func_462(func_1323(55));
}

bool func_1410()
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[14 /*5*/]))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1371[14 /*5*/], "s_search_enemy_discover", 1))
		{
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1371[14 /*5*/], "ARTHUR"))
			{
			}
		}
	}
	if (!iLocal_1265 == 7 && !iLocal_1265 == 8)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_133[32 /*6*/]))
		{
			bVar0 = true;
		}
		if (PED::_0xB655DB7582AEC805(Local_133[32 /*6*/]))
		{
			bVar0 = true;
		}
		if (PED::GET_PED_CONFIG_FLAG(Local_133[32 /*6*/], 11, true))
		{
			bVar0 = true;
		}
		vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_133[32 /*6*/], true, false) };
		if (vVar1.z < 40f)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_133[32 /*6*/]))
			{
				ENTITY::_SET_ENTITY_HEALTH(Local_133[32 /*6*/], 0, Global_35);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			HUD::_HIDE_HUD_COMPONENT(iLocal_131);
			func_943(32, 12);
			func_1921(7);
		}
	}
	switch (iLocal_1265)
	{
		case 0:
			if (Local_1371[14 /*5*/].f_1 == 7)
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_133[32 /*6*/], "BRT1_Blocker", -865.68f, -746.76f, 57.84f, 0, 0);
				func_456(11);
				func_1921(1);
			}
			break;
		case 1:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1371[14 /*5*/]) >= 10f)
			{
				iLocal_129 = __LIB_1__::func_877(func_1300(44), func_1361(19), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_2__::func_369(iLocal_129, Local_133[32 /*6*/], 0, 1, -1);
				func_1921(2);
			}
			break;
		case 2:
			if (__LIB_0__::func_139(iLocal_129))
			{
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_133[32 /*6*/]), func_1300(15), 1, 0, 0, 0);
				if (__LIB_1__::func_514(iLocal_129, 1))
				{
					bVar4 = true;
				}
				if (((((PAD::IS_CONTROL_JUST_PRESSED(0, func_1361(19)) || PAD::IS_CONTROL_JUST_PRESSED(0, func_1361(24))) || PAD::IS_CONTROL_JUST_PRESSED(0, func_1361(20))) || PAD::IS_CONTROL_JUST_PRESSED(0, func_1361(21))) || PAD::IS_CONTROL_JUST_PRESSED(0, func_1361(22))) || PAD::IS_CONTROL_JUST_PRESSED(0, func_1361(23)))
				{
					bVar4 = true;
				}
				if (bVar4)
				{
					__LIB_1__::func_281(&iLocal_129, 1, 1);
					func_1921(3);
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1371[14 /*5*/], "s_enemy_loop", 1))
				{
					if (__LIB_0__::func_139(iLocal_129))
					{
						__LIB_1__::func_281(&iLocal_129, 1, 1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1371[14 /*5*/], "pbl_enemy_turns_spots_arthur", true);
					func_1921(5);
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1371[14 /*5*/], "ODRISCOL"))
			{
				func_1922();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				TASK::TASK_COMBAT_PED(Local_133[32 /*6*/], Global_35, 1048576, 16);
				PED::_0x2208438012482A1A(Local_133[32 /*6*/], true, false);
				func_1921(6);
			}
			break;
		case 6:
			break;
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1371[14 /*5*/], "s_enemy_loop", 1))
			{
				if (func_1374(15, 1))
				{
					func_456(102);
					func_1922();
					func_1921(4);
				}
			}
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1371[15 /*5*/], "ARTHUR"))
			{
				func_1921(7);
			}
			break;
		case 7:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &(vVar5.f_2), false);
			OBJECT::CREATE_PICKUP(joaat("PICKUP_WEAPON_THROWN_THROWING_KNIVES"), vVar5, 0, 3, true, 0, 0, 0f, 0);
			__LIB_2__::func_471(joaat("WEAPON_THROWN_THROWING_KNIVES"), 3, 0, 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
			func_1921(8);
		case 8:
			if ((func_165(102) && ANIMSCENE::_0xF94692EB9DC15D74(Local_1371[15 /*5*/], 0)) || !func_165(102))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1411(bool bParam0)
{
	int iVar0;
	iVar0 = 27;
	while (iVar0 <= 30)
	{
		func_462(func_461(iVar0));
		iVar0++;
	}
	if (bParam0)
	{
		return true;
	}
	iVar0 = 27;
	while (iVar0 <= 30)
	{
		if (!func_463(func_461(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 27;
	while (iVar0 <= 30)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_941[iVar0 /*2*/]))
		{
			func_1350(iVar0);
		}
		iVar0++;
	}
	iVar0 = 27;
	while (iVar0 <= 30)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_941[iVar0 /*2*/]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1414(var uParam0)
{
	switch (iLocal_1271)
	{
		case 0:
			func_1923(33, 46, 0.1f, 0.1f, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
			iLocal_1271 = 1;
			break;
		case 2:
			func_1923(33, 46, 8f, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
			iLocal_1271 = 3;
			break;
		case 3:
			if (func_165(125))
			{
				iLocal_1271 = 4;
			}
			break;
		case 4:
			func_1923(33, 46, 24f, 12f, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
			iLocal_1271 = 5;
			break;
		case 5:
			if (PED::IS_PED_ON_MOUNT(Global_35) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) > 1.0011f)
			{
				iLocal_1271 = 8;
			}
			else if (WEAPON::_IS_WEAPON_LANTERN(__LIB_0__::func_399(Global_35, 1, 0, 0)))
			{
				iLocal_1271 = 6;
			}
			break;
		case 6:
			func_1923(33, 46, 8f, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
			iLocal_1271 = 7;
			break;
		case 7:
			if (!WEAPON::_IS_WEAPON_LANTERN(__LIB_0__::func_399(Global_35, 1, 0, 0)))
			{
				if (func_165(125))
				{
					iLocal_1271 = 4;
				}
				else
				{
					iLocal_1271 = 2;
				}
			}
			break;
		case 8:
			func_1923(33, 46, 28f, 14f, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
			iLocal_1271 = 9;
			break;
		case 9:
			if (!PED::IS_PED_ON_MOUNT(Global_35) || (PED::IS_PED_ON_MOUNT(Global_35) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) <= 1.0011f))
			{
				iLocal_1271 = 4;
			}
			break;
	}
}

void func_1416()
{
	vector3 vVar0;
	int iVar4;
	if (((!ENTITY::DOES_ENTITY_EXIST(Local_133[54 /*6*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_133[55 /*6*/])) || ENTITY::IS_ENTITY_DEAD(Local_133[54 /*6*/])) || ENTITY::IS_ENTITY_DEAD(Local_133[55 /*6*/]))
	{
		return;
	}
	switch (Local_133[54 /*6*/].f_2)
	{
		case 1:
			iVar4 = 54;
			while (iVar4 <= 55)
			{
				vVar0 = { func_1449(iVar4, 0, 7) };
				ENTITY::SET_ENTITY_COLLISION(Local_133[iVar4 /*6*/], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_133[iVar4 /*6*/], true);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_133[iVar4 /*6*/], true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[iVar4 /*6*/], vVar0, vVar0.f_3, true, false, true);
				iVar4++;
			}
			func_943(54, 15);
			break;
		case 15:
			if (func_165(118) || __LIB_0__::func_665(Local_133[54 /*6*/], Global_35, 1, 1) < 4f)
			{
				func_943(54, 28);
			}
			break;
		case 28:
			iVar4 = 54;
			while (iVar4 <= 55)
			{
				vVar0 = { func_1449(iVar4, 1, 7) };
				ENTITY::FREEZE_ENTITY_POSITION(Local_133[iVar4 /*6*/], false);
				ENTITY::SET_ENTITY_COLLISION(Local_133[iVar4 /*6*/], true, false);
				func_1355();
				TASK::TASK_FLY_TO_COORD(0, 2f, vVar0, 1, 1);
				func_1356(Local_133[iVar4 /*6*/], __LIB_0__::func_514(iVar4 == 55, 0f, 1f));
				iVar4++;
			}
			func_943(54, 29);
			break;
		case 29:
			if (!__LIB_11__::func_822(Local_133[54 /*6*/]))
			{
				if ((func_165(118) || __LIB_0__::func_665(Local_133[54 /*6*/], Global_35, 1, 1) < 5f) || PED::IS_PED_ON_MOUNT(Global_35))
				{
					iVar4 = 54;
					while (iVar4 <= 55)
					{
						vVar0 = { func_1449(iVar4, 2, 7) };
						func_1355();
						TASK::TASK_FLY_TO_COORD(0, 2f, vVar0, 1, 1);
						func_1356(Local_133[iVar4 /*6*/], __LIB_0__::func_514(iVar4 == 55, 0f, 1f));
						iVar4++;
					}
				}
			}
			break;
	}
}

void func_1417()
{
	struct<4> Var0;
	if (Local_1371[16 /*5*/].f_1 == 5 && Local_1371[17 /*5*/].f_1 == 5)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_941[20 /*2*/], "script_story@odr3@ig@ig16_collect_weapons_undetected", "ig16_collect_weapons_satchel", 1))
		{
			Var0 = { func_994(20) };
			ENTITY::SET_ENTITY_COORDS(Local_941[20 /*2*/], Var0, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_941[20 /*2*/], Var0.f_3, 2, true);
			ENTITY::SET_ENTITY_COLLISION(Local_941[20 /*2*/], false, false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_941[20 /*2*/], true);
			ENTITY::PLAY_ENTITY_ANIM(Local_941[20 /*2*/], "ig16_collect_weapons_satchel", "script_story@odr3@ig@ig16_collect_weapons_undetected", 0.1f, true, false, false, 0f, 0);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_941[20 /*2*/], "script_story@odr3@ig@ig16_collect_weapons_undetected", "ig16_collect_weapons_satchel", 1))
		{
			ENTITY::_SET_ENTITY_ANIM_SPEED(Local_941[20 /*2*/], "script_story@odr3@ig@ig16_collect_weapons_undetected", "ig16_collect_weapons_satchel", 0f);
		}
	}
}

bool func_1418(int iParam0, int iParam1)
{
	return ((iLocal_1176 + iParam1) % iParam0) == 0;
}

void func_1419(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_693(__LIB_3__::func_918(23));
	if (__LIB_0__::func_318(iVar0))
	{
		__LIB_4__::func_997(iVar0, iParam1);
	}
}

void func_1420(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	func_1925(uParam0);
	if (func_165(121))
	{
		func_1926(33, 46);
	}
	else
	{
		func_1926(33, 38);
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_24, true, 0))
		{
			MISC::_SET_WEATHER_TYPE(joaat("FOG"), true, true, true, 20f, false);
			UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
			UIFEED::_0xDD1232B332CBB9E7(4, 1, 0);
			__LIB_5__::func_106(uParam0, Local_133[39 /*6*/], "ODR_PED1", 0);
			func_1313(60);
			if (func_165(124))
			{
				func_1359(65);
			}
			else
			{
				func_1359(66);
			}
			__LIB_4__::func_89(&(vLocal_792[44 /*3*/]), 0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iLocal_1271 = 8;
			}
			else
			{
				iLocal_1271 = 4;
			}
			func_456(121);
		}
	}
	iVar6 = 33;
	iVar7 = 46;
	if (func_165(122))
	{
		if (!func_165(118))
		{
			if (func_1927(0))
			{
				func_456(118);
				vLocal_1303 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			}
			else
			{
				iVar8 = iVar6;
				while (iVar8 <= iVar7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_133[iVar8 /*6*/]))
					{
						if (func_1927(iVar8))
						{
							if (func_1928(iVar8))
							{
								if (!func_165(124))
								{
									func_456(124);
								}
							}
							if (Local_133[iVar8 /*6*/].f_2 == 8 || Local_133[iVar8 /*6*/].f_2 == 9)
							{
								func_176(129);
							}
							func_456(118);
							vLocal_1303 = { ENTITY::GET_ENTITY_COORDS(Local_133[iVar8 /*6*/], true, false) };
						}
						else
						{
							iVar8++;
						}
						iVar8 = iVar6;
						while (iVar8 <= iVar7)
						{
							if (Local_133[iVar8 /*6*/].f_2 == 12)
							{
								if (func_1871(iVar8, 8))
								{
									func_1929(iVar8, 8);
								}
							}
							else if (ENTITY::IS_ENTITY_DEAD(Local_133[iVar8 /*6*/]))
							{
								func_1930(iVar8);
								func_1872(iVar8, 8);
								func_943(iVar8, 12);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_133[iVar8 /*6*/], 0);
								if (func_1931(iVar8))
								{
									iVar9 = func_1308(iVar8);
									if (!iVar9 == -1)
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_133[iVar9 /*6*/]))
										{
											if (iLocal_1325 >= 2)
											{
												func_1588(iVar9);
												func_1355();
												TASK::TASK_HORSE_ACTION(0, 5, Global_35, 0);
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
												TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, false, 0, -1f, false);
												func_1356(Local_133[iVar9 /*6*/], 0);
												iLocal_1325++;
											}
											else
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[iVar9 /*6*/], false);
												PED::SET_PED_KEEP_TASK(Local_133[iVar9 /*6*/], true);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_133[iVar9 /*6*/]));
												func_1355();
												TASK::TASK_HORSE_ACTION(0, 5, Global_35, 0);
												TASK::TASK_SMART_FLEE_PED(0, Global_35, -1f, -1, 0, 3f, 0);
												func_1356(Local_133[iVar9 /*6*/], 0);
												func_943(iVar9, 0);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_133[iVar9 /*6*/]));
												iLocal_1325++;
											}
										}
									}
								}
							}
							else if (!func_165(121))
							{
								if (func_1932(iVar8) || func_1933(iVar8))
								{
								}
								else
								{
									if (func_165(122))
									{
										if ((func_165(118) && !iLocal_1306 == iVar8) && !func_1934(vLocal_1303, 20f))
										{
											VOLUME::_SET_VOLUME_COORDS(Local_89.f_3, vLocal_1303);
											if (func_1871(iVar8, 32))
											{
												if (func_1935(Local_133[iVar8 /*6*/].f_2))
												{
													func_1872(iVar8, 16384);
													func_943(iVar8, 6);
												}
											}
											else if (func_1936(Local_133[iVar8 /*6*/].f_2))
											{
												__LIB_4__::func_89(&(vLocal_792[43 /*3*/]), 1);
												func_943(iVar8, 40);
											}
										}
									}
									if (func_1937(Local_133[iVar8 /*6*/].f_2))
									{
										iLocal_1300 = 0;
										if (__LIB_11__::func_304(Local_133[iVar8 /*6*/], 0, &iLocal_1272, &iLocal_1300, 0, 0))
										{
											if (iLocal_1300 == 128)
											{
												func_943(iVar8, 42);
											}
										}
									}
									if (func_1939(Local_133[iVar8 /*6*/].f_2))
									{
										if (!func_1940(iVar8) == 0)
										{
											func_943(iVar8, 6);
										}
									}
									switch (Local_133[iVar8 /*6*/].f_2)
									{
										case 1:
											if (iVar8 == 34)
											{
												func_1941(1);
											}
											__LIB_2__::func_22(&iLocal_1272, Local_133[iVar8 /*6*/]);
											if (func_1931(iVar8))
											{
												func_1872(iVar8, 16);
												PED::_SET_PED_ON_MOUNT(Local_133[iVar8 /*6*/], Local_133[func_1308(iVar8) /*6*/], -1, true);
											}
											if (func_1928(iVar8) || func_1943(iVar8))
											{
												func_1872(iVar8, 32);
												PED::SET_PED_CONFIG_FLAG(Local_133[iVar8 /*6*/], 138, true);
											}
											PED::SET_PED_CONFIG_FLAG(Local_133[iVar8 /*6*/], 21, true);
											PED::SET_PED_CONFIG_FLAG(Local_133[iVar8 /*6*/], 137, false);
											func_1879(iVar8, 0);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_133[iVar8 /*6*/], 1);
											WEAPON::REMOVE_ALL_PED_WEAPONS(Local_133[iVar8 /*6*/], true, true);
											ENTITY::_0x18FF3110CF47115D(Local_133[iVar8 /*6*/], 7, 0);
											func_943(iVar8, 2);
											break;
										case 2:
											if (func_1944(iVar8, 1))
											{
												func_943(iVar8, 3);
											}
											break;
										case 3:
											if (func_1944(iVar8, 0))
											{
												if (func_1932(iVar8) || func_1933(iVar8))
												{
													func_943(iVar8, 30);
												}
												else
												{
													func_943(iVar8, 16);
												}
											}
											break;
										case 16:
											TASK::TASK_STAND_STILL(Local_133[iVar8 /*6*/], -1);
											func_943(iVar8, 17);
											break;
										case 17:
											break;
										case 30:
											func_1405(iVar8, 1, 2);
											func_1945(iVar8);
											func_943(iVar8, 31);
											break;
										case 31:
											PED::SET_PED_RESET_FLAG(Local_133[iVar8 /*6*/], 301, true);
											if (iVar8 == 34)
											{
												if (!__LIB_11__::func_822(Local_133[iVar8 /*6*/]))
												{
													if (func_165(105))
													{
														func_176(105);
													}
													else
													{
														func_456(105);
													}
													func_943(iVar8, 30);
												}
											}
											else if (iVar8 == 42)
											{
												if (!func_165(126))
												{
													if (func_1442())
													{
														if (!PATHFIND::GET_SAFE_COORD_FOR_PED(VOLUME::_GET_VOLUME_COORDS(Local_89.f_2), false, &vVar3, 12))
														{
															vVar3 = { VOLUME::_GET_VOLUME_COORDS(Local_89.f_2) };
														}
														func_1355();
														TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2.5f, 20000, 0.25f, 0, 40000f);
														TASK::TASK_WANDER_IN_VOLUME(0, Local_89.f_2, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
														func_1356(Local_133[iVar8 /*6*/], 0);
														func_456(126);
													}
												}
											}
											break;
										case 42:
											iVar10 = EVENT::_0x796EECFF0C6D39BE(Local_133[iVar8 /*6*/], 0, 0);
											if (((iVar10 == joaat("EVENT_PED_SEEN_DEAD_PED") || iVar10 == joaat("EVENT_SHOCKING_DEAD_BODY")) || iVar10 == joaat("EVENT_ACQUAINTANCE_PED_DEAD")) || iVar10 == joaat("EVENT_DEAD_PED_FOUND"))
											{
												iVar11 = EVENT::_0x822A001BCEA5BD81(Local_133[iVar8 /*6*/], iVar10, 0, 0);
											}
											if (iVar8 == 34)
											{
												func_1941(0);
											}
											if (__LIB_0__::func_399(Local_133[iVar8 /*6*/], 1, 0, 0) == joaat("WEAPON_MELEE_LANTERN"))
											{
												WEAPON::_0xCEF4C65DE502D367(Local_133[iVar8 /*6*/], 0, 0, 1, 0);
											}
											else if (__LIB_0__::func_399(Local_133[iVar8 /*6*/], 1, 1, 0) == joaat("WEAPON_MELEE_LANTERN"))
											{
												WEAPON::_0xCEF4C65DE502D367(Local_133[iVar8 /*6*/], 0, 1, 1, 0);
											}
											func_1947(iVar8, func_1946(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar11)));
											if (!func_165(114) && !func_165(130))
											{
												iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
												if (iVar12 == 0)
												{
													__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED1", 0);
													func_1313(48);
												}
												else if (iVar12 == 1)
												{
													__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED8", 0);
													func_1313(55);
												}
												func_456(114);
											}
											func_943(iVar8, 43);
											break;
										case 43:
											PED::_SET_PED_BLACKBOARD_FLOAT(Local_133[iVar8 /*6*/], "cautious", 1f, 1);
											break;
										case 6:
											__LIB_2__::func_698(Local_133[iVar8 /*6*/], 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
											func_1405(iVar8, 1, 1);
											if (__LIB_5__::func_259(func_1300(60)) || __LIB_1__::func_322(func_1300(60)))
											{
												__LIB_5__::func_239(func_1300(60), 0, 0);
											}
											PED::_0x802092B07E3B1EEA(Local_133[iVar8 /*6*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
											if (iVar8 == 34)
											{
												func_1941(0);
											}
											if (!func_165(116))
											{
												if (__LIB_1__::func_985())
												{
													__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED1", 0);
													if (func_165(125))
													{
														__LIB_1__::func_104(&(uParam0->f_5310), func_1329(49), 0, -1, 0, 0);
														func_1950(iVar8, 7f);
													}
													else
													{
														__LIB_1__::func_104(&(uParam0->f_5310), func_1329(48), 0, -1, 0, 0);
														func_1950(iVar8, 7f);
													}
												}
												else
												{
													__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED3", 0);
													if (func_165(125))
													{
														__LIB_1__::func_104(&(uParam0->f_5310), func_1329(51), 0, -1, 0, 0);
														func_1950(iVar8, 7f);
													}
													else
													{
														__LIB_1__::func_104(&(uParam0->f_5310), func_1329(50), 0, -1, 0, 0);
														func_1950(iVar8, 7f);
													}
												}
												__LIB_4__::func_89(&(vLocal_792[39 /*3*/]), 0);
												func_456(116);
											}
											else if (__LIB_1__::func_583(&(vLocal_792[39 /*3*/])) >= 5f)
											{
												if (!func_165(133))
												{
													__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED1", 0);
													__LIB_1__::func_104(&(uParam0->f_5310), func_1329(52), 0, -1, 0, 0);
													func_1950(iVar8, 7f);
													func_456(133);
												}
												else if (!func_165(134))
												{
													__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED2", 0);
													__LIB_1__::func_104(&(uParam0->f_5310), func_1329(53), 0, -1, 0, 0);
													func_1950(iVar8, 7f);
													func_456(134);
												}
												else if (!func_165(135))
												{
													__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED3", 0);
													__LIB_1__::func_104(&(uParam0->f_5310), func_1329(54), 0, -1, 0, 0);
													func_1950(iVar8, 7f);
													func_456(135);
												}
												else if (!func_165(136))
												{
													__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED8", 0);
													__LIB_1__::func_104(&(uParam0->f_5310), func_1329(55), 0, -1, 0, 0);
													func_1950(iVar8, 7f);
													func_456(136);
												}
												__LIB_2__::func_259(&(vLocal_792[39 /*3*/]));
											}
											if (__LIB_0__::func_399(Local_133[iVar8 /*6*/], 1, 0, 0) == iLocal_781[3])
											{
												WEAPON::_0xCEF4C65DE502D367(Local_133[iVar8 /*6*/], 0, 0, 1, 0);
											}
											func_943(iVar8, 7);
											break;
										case 7:
											func_943(iVar8, 8);
											break;
										case 40:
											if (func_1933(iVar8))
											{
												TASK::TASK_AIM_AT_COORD(Local_133[iVar8 /*6*/], vLocal_1303, -1, 0, 0);
												func_943(iVar8, 41);
											}
											else if (!PATHFIND::GET_SAFE_COORD_FOR_PED(vLocal_1303 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-20f, 20f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-20f, 20f)), false, &vVar0, 12))
											{
											}
											else
											{
												if (!func_165(139))
												{
													func_1359(68);
													func_456(139);
												}
												func_456(139);
												func_1355();
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, __LIB_0__::func_514(PED::IS_PED_ON_MOUNT(Local_133[iVar8 /*6*/]), 2.001f, 3f), 20000, 0.25f, 0, 40000f);
												TASK::TASK_WANDER_IN_VOLUME(0, Local_89.f_3, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
												func_1356(Local_133[iVar8 /*6*/], 0);
												if (!__LIB_0__::func_899(&(vLocal_792[38 /*3*/])) || __LIB_1__::func_583(&(vLocal_792[38 /*3*/])) >= 10f)
												{
													if (!func_165(130))
													{
														__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED1", 0);
														func_1313(61);
														__LIB_4__::func_89(&(vLocal_792[38 /*3*/]), 1);
													}
												}
												func_943(iVar8, 41);
												Jump @3193; //curOff = 2825
												if (!func_1933(iVar8))
												{
													if ((__LIB_11__::func_822(Local_133[iVar8 /*6*/]) && TASK::GET_SEQUENCE_PROGRESS(Local_133[iVar8 /*6*/]) == 1) && !func_1871(iVar8, 64))
													{
														if (iLocal_1120 == 0)
														{
															__LIB_5__::func_106(uParam0, Local_133[iVar8 /*6*/], "ODR_PED1", 0);
														}
														func_1872(iVar8, 64);
													}
												}
												PED::_SET_PED_BLACKBOARD_FLOAT(Local_133[iVar8 /*6*/], "cautious", 1f, 1);
												if (__LIB_0__::func_899(&(vLocal_792[43 /*3*/])))
												{
													if (__LIB_1__::func_583(&(vLocal_792[43 /*3*/])) >= 60f)
													{
														func_176(139);
														__LIB_1__::func_561(&(vLocal_792[43 /*3*/]));
														func_943(iVar8, 30);
													}
												}
												Jump @3193; //curOff = 2989
												__LIB_4__::func_89(&(vLocal_792[37 /*3*/]), 0);
												TASK::TASK_COMBAT_PED(Local_133[iVar8 /*6*/], Global_35, 16384, 16);
												func_943(iVar8, 9);
												Jump @3193; //curOff = 3030
												TASK::_TASK_SMART_FLEE_STYLE_PED(Local_133[iVar8 /*6*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
												func_943(iVar8, 11);
												Jump @3193; //curOff = 3063
												if (func_1418(30, (9 + iVar8)))
												{
													if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_133[iVar8 /*6*/], true, false), 1f))
													{
														if (PED::IS_PED_ON_MOUNT(Local_133[iVar8 /*6*/]))
														{
															PED::_REMOVE_PED_FROM_MOUNT(Local_133[iVar8 /*6*/], true, false);
														}
														ENTITY::_SET_ENTITY_HEALTH(Local_133[iVar8 /*6*/], 0, 0);
														if (func_1931(iVar8))
														{
															if (!ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(iVar8) /*6*/]))
															{
																TASK::_TASK_SMART_FLEE_STYLE_PED(Local_133[func_1308(iVar8) /*6*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
															}
														}
													}
												}
											}
											iVar8++;
											func_176(118);
											default:
												break;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_1421(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	vector3 vVar16;
	if (iLocal_1268 == 6)
	{
		return;
	}
	if (!func_165(117))
	{
		return;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 108, true);
	func_1369(16);
	func_1369(17);
	switch (iLocal_1268)
	{
		case 0:
			iLocal_1268 = 1;
		case 1:
			vVar0 = { ENTITY::GET_ENTITY_VELOCITY(Global_35, -1) };
			fVar3 = BUILTIN::VMAG2(vVar0);
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_11, true, 0) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) <= 1.1f) && fVar3 < 1.8f)
			{
				if (!__LIB_0__::func_139(iLocal_129))
				{
					iLocal_129 = __LIB_1__::func_877(func_1300(12), func_1361(25), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_522(iLocal_129, 10, 1, 1);
					__LIB_1__::func_522(iLocal_129, 11, 1, 1);
					__LIB_2__::func_369(iLocal_129, Local_941[18 /*2*/], 0, 1, -1);
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_941[18 /*2*/]), func_1300(14), 1, 0, 0, 0);
					if (__LIB_0__::func_567(iLocal_129, 1))
					{
						__LIB_1__::func_281(&iLocal_129, 1, 1);
						iLocal_1268 = 2;
					}
				}
			}
			else if (__LIB_0__::func_139(iLocal_129))
			{
				__LIB_1__::func_281(&iLocal_129, 1, 1);
			}
			break;
		case 2:
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
			if (func_1436(-1082130432 /* Float: -1f */, -1, -1) > 0)
			{
				iLocal_1487 = 17;
				func_1374(iLocal_1487, 1);
			}
			else
			{
				iLocal_1487 = 16;
				func_1374(iLocal_1487, 1);
			}
			ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_1371[iLocal_1487 /*5*/], "ARTHUR", &uVar4, false, 0, 2);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 6400, true);
			if (MAP::DOES_BLIP_EXIST(iLocal_775[1]))
			{
				__LIB_11__::func_828(&(iLocal_775[1]));
			}
			AICOVERPOINT::_0x140B3CB1D424A945(Global_35, Local_1269);
			TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_1371[iLocal_1487 /*5*/], "ARTHUR", func_1896(iLocal_1487, 0), 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
			PED::_0x2208438012482A1A(Global_35, true, false);
			iLocal_1268 = 3;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1371[iLocal_1487 /*5*/], false))
			{
				iLocal_1268 = 4;
			}
			break;
		case 4:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1371[iLocal_1487 /*5*/]))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1371[iLocal_1487 /*5*/], "ARTHUR"))
				{
					iLocal_1266 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_THROWN_THROWING_KNIVES"));
					func_201(0);
					if (iLocal_1266 > 0)
					{
						__LIB_4__::func_7(Global_35, joaat("WEAPON_THROWN_THROWING_KNIVES"), iLocal_1266, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					}
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1371[iLocal_1487 /*5*/], "SATCHEL", Local_941[20 /*2*/]);
					func_471(uParam0, 20, 1);
					func_939();
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1371[iLocal_1487 /*5*/], "CARBINE", Local_941[21 /*2*/]);
					func_471(uParam0, 21, 0);
					__LIB_4__::func_7(Global_35, Local_1269, -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1371[iLocal_1487 /*5*/], "Cattleman", Local_941[22 /*2*/]);
					func_471(uParam0, 22, 0);
					__LIB_4__::func_7(Global_35, Local_1269.f_1, -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_4__::func_89(&(vLocal_792[42 /*3*/]), 0);
					func_1419(uParam0, joaat("DST3_RECOVERWEAPONS"));
					vVar16 = { func_1920(1) };
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, vVar16, BUILTIN::FLOOR((1f * 1000f)), 0, 0f, 0, 0, iLocal_1006[1], 0, 0, 0);
					PED::_0x2208438012482A1A(Global_35, true, false);
					func_456(125);
					PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 1);
					iLocal_1268 = 5;
				}
				else if (iLocal_1487 == 17)
				{
					func_1953();
				}
			}
			break;
		case 5:
			if (__LIB_1__::func_583(&(vLocal_792[42 /*3*/])) >= 1f)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1371[iLocal_1487 /*5*/], false) && ANIMSCENE::_0xF94692EB9DC15D74(Local_1371[iLocal_1487 /*5*/], 0))
				{
					AICOVERPOINT::_0x1A7A802B2301EDC0(Global_35);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					func_1399(16);
					func_1399(17);
					__LIB_1__::func_561(&(vLocal_792[42 /*3*/]));
					iLocal_1268 = 6;
				}
			}
			break;
	}
}

void func_1422()
{
	int iVar0;
	bool bVar1;
	switch (Local_1307[iLocal_1324 /*8*/].f_6)
	{
		case 0:
			Local_1307[iLocal_1324 /*8*/].f_6 = 1;
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_8, true, 0))
			{
				iLocal_1324 = 0;
				Local_1307[iLocal_1324 /*8*/].f_6 = 2;
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_9, true, 0))
			{
				iLocal_1324 = 1;
				Local_1307[iLocal_1324 /*8*/].f_6 = 2;
			}
			break;
		case 2:
			iVar0 = 19;
			while (iVar0 <= 23)
			{
				func_462(iVar0);
				iVar0++;
			}
			bVar1 = true;
			iVar0 = 19;
			while (iVar0 <= 23)
			{
				if (!func_463(iVar0))
				{
					bVar1 = false;
				}
				iVar0++;
			}
			if (bVar1)
			{
				if (__LIB_11__::func_829(Local_1307[iLocal_1324 /*8*/]))
				{
					Local_1307[iLocal_1324 /*8*/].f_6 = 4;
				}
			}
			break;
		case 4:
			Local_1307[iLocal_1324 /*8*/].f_7 = VEHICLE::_CREATE_MISSION_TRAIN(Local_1307[iLocal_1324 /*8*/], Local_1307[iLocal_1324 /*8*/].f_1, Local_1307[iLocal_1324 /*8*/].f_4, true, true, true);
			Local_1307[iLocal_1324 /*8*/].f_6 = 5;
			break;
		case 5:
			if (VEHICLE::_0xBD3C4A2ED509205E(Local_1307[iLocal_1324 /*8*/].f_7))
			{
				iLocal_775[3] = MAP::_BLIP_ADD_FOR_ENTITY(-399496385, Local_1307[iLocal_1324 /*8*/].f_7);
				VEHICLE::_0x4182C037AA1F0091(Local_1307[iLocal_1324 /*8*/].f_7, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1307[iLocal_1324 /*8*/].f_7, false);
				Local_1307[iLocal_1324 /*8*/].f_6 = 6;
			}
			break;
		case 6:
			if (func_1418(90, 95))
			{
				if (__LIB_0__::func_665(Global_35, Local_1307[iLocal_1324 /*8*/].f_7, 1, 1) >= 500f)
				{
					Local_1307[iLocal_1324 /*8*/].f_6 = 7;
				}
			}
			break;
		case 7:
			if (MAP::DOES_BLIP_EXIST(iLocal_775[3]))
			{
				MAP::REMOVE_BLIP(&(iLocal_775[3]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1307[iLocal_1324 /*8*/].f_7))
			{
				VEHICLE::DELETE_MISSION_TRAIN(&(Local_1307[iLocal_1324 /*8*/].f_7));
			}
			iVar0 = 19;
			while (iVar0 <= 23)
			{
				func_466(iVar0);
				iVar0++;
			}
			__LIB_11__::func_817(Local_1307[iLocal_1324 /*8*/]);
			Local_1307[iLocal_1324 /*8*/].f_6 = 8;
			break;
	}
}

int func_1423(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (Local_133[iVar1 /*6*/].f_2 == iParam2)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1426(int iParam0, float fParam1)
{
	struct<7> Var0;
	Var0 = { func_1379(iParam0) };
	iLocal_1009[iParam0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var0, Var0.f_3, Var0.f_6, false, 2);
	if (fParam1 > 0f && fParam1 < 1f)
	{
		CAM::SHAKE_CAM(iLocal_1009[iParam0], "HAND_SHAKE", fParam1);
	}
}

void func_1427(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1009)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_1009[iVar0]))
		{
			CAM::SET_CAM_ACTIVE(iLocal_1009[iVar0], false);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_1009[iParam0]))
		{
			CAM::SET_CAM_ACTIVE(iLocal_1009[iParam0], true);
		}
	}
}

void func_1428(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5)
{
	TASK::TASK_PLAY_ANIM(iParam0, func_494(iParam1, 1), func_494(iParam1, 0), fParam2, fParam3, iParam4, iParam5, 0f, false, 0, false, 0, false);
}

bool func_1429(int iParam0, int iParam1)
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_494(iParam1, 1), func_494(iParam1, 0), 1);
}

float func_1430(int iParam0, int iParam1)
{
	return ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, func_494(iParam1, 1), func_494(iParam1, 0));
}

bool func_1431(var uParam0)
{
	if (!func_165(119))
	{
		__LIB_4__::func_958(uParam0, 1);
		if (func_447(uParam0, 1, -850.948f, -727.9256f, 59.236f, -19.96f, 1, 1, 1))
		{
			Local_133[1 /*6*/] = __LIB_4__::func_957(uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_133[1 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
			{
				if (__LIB_11__::func_830(7))
				{
					__LIB_8__::func_820(7);
				}
				__LIB_0__::func_783(7, 64);
				__LIB_0__::func_782(7, 32);
				func_943(1, 1);
				__LIB_4__::func_945(uParam0, 1);
				func_1588(1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[1 /*6*/], true);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(Local_133[1 /*6*/], -851.3f, -727.8f, 58.4f, 2f, -1, false, false, false, false);
				func_1315(uParam0, 6);
				func_456(119);
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_1432()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (func_165(117))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_941[21 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_941[22 /*2*/]))
	{
		return true;
	}
	bVar0 = true;
	if (Local_1269.f_1 == 0)
	{
		Local_1269.f_1 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
	}
	if (!Local_1269.f_1 == 0)
	{
		func_462(90);
		if (!func_463(90))
		{
			bVar0 = false;
		}
	}
	if (Local_1269 == 0)
	{
		Local_1269 = __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
	}
	if (!Local_1269 == 0)
	{
		func_462(89);
		if (!func_463(89))
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		return false;
	}
	if (!WEAPON::GET_MAX_AMMO(Global_35, &iVar1, Local_1269))
	{
		iVar1 = 32;
	}
	if (!WEAPON::GET_MAX_AMMO(Global_35, &iVar2, Local_1269.f_1))
	{
		iVar2 = 32;
	}
	Local_941[21 /*2*/] = WEAPON::_CREATE_WEAPON_OBJECT(Local_1269, iVar1, func_1362(8), true, 1f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_941[21 /*2*/]))
	{
		ENTITY::SET_ENTITY_ROTATION(Local_941[21 /*2*/], func_1362(9), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_941[21 /*2*/], true);
	}
	Local_941[22 /*2*/] = WEAPON::_CREATE_WEAPON_OBJECT(Local_1269.f_1, iVar2, func_1362(10), true, 1f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_941[22 /*2*/]))
	{
		ENTITY::SET_ENTITY_ROTATION(Local_941[22 /*2*/], func_1362(11), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_941[22 /*2*/], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_941[20 /*2*/]))
	{
		func_1350(20);
	}
	func_456(117);
	return true;
}

void func_1433(int iParam0, int iParam1, float fParam2)
{
	ENTITY::_SET_ENTITY_ANIM_SPEED(iParam0, func_494(iParam1, 1), func_494(iParam1, 0), fParam2);
}

void func_1434()
{
	iLocal_775[1] = MAP::_BLIP_ADD_FOR_COORD(1664425300, ENTITY::GET_ENTITY_COORDS(Local_941[21 /*2*/], true, false));
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_775[1], func_1300(14));
}

int func_1436(float fParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 == -1)
	{
		iVar2 = 0;
	}
	if (iParam2 == -1)
	{
		iVar3 = 55;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		if (Local_133[iVar1 /*6*/].f_2 == 9 || Local_133[iVar1 /*6*/].f_2 == 8)
		{
			if (!fParam0 == -1f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_133[iVar1 /*6*/]))
				{
					if (__LIB_0__::func_665(Global_35, Local_133[iVar1 /*6*/], 1, 1) <= fParam0)
					{
						iVar0++;
					}
				}
			}
			else
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_1437(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 999999.9f;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_133[iVar2 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_133[iVar2 /*6*/]))
		{
			fVar1 = __LIB_0__::func_665(Global_35, Local_133[iVar2 /*6*/], 1, 1);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
			}
		}
		iVar2++;
	}
	return fVar0;
}

char* func_1438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ODR3_Sounds";
		case 3:
			return "Gooey";
		case 1:
			return "Incision";
		case 2:
			return "PeelBack";
		case 4:
			return "Tear";
		case 5:
			return "GunPowder_Ignite";
		case 6:
			return "script@Story@DST3@return_to_camp";
		case 7:
			return "lon_mule_int_02";
	}
	return "";
}

struct<4> func_1439(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 442.8f, -186.5f, 137.5f };
			Var0.f_3 = 66.7f;
			break;
		case 1:
			Var0 = { 702.3f, -526.4f, 70.6f };
			Var0.f_3 = 144.8f;
			break;
		case 2:
			Var0 = { 685.7f, -1194.7f, 46.8f };
			Var0.f_3 = -174f;
			break;
		default:
			break;
	}
	return Var0;
}

bool func_1442()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!Local_1307[iLocal_1324 /*8*/].f_6 == 6)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_1307[iLocal_1324 /*8*/].f_7))
	{
		return false;
	}
	iVar0 = VEHICLE::_0x635423D55CA84FC8(Local_1307[iLocal_1324 /*8*/]);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(Local_1307[iLocal_1324 /*8*/].f_7, iVar2);
		if (PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iVar1))
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_1443(var uParam0)
{
	vector3 vVar0;
	switch (iLocal_1327)
	{
		case 0:
			__LIB_5__::func_595(uParam0, 1);
			Local_133[1 /*6*/] = 0;
			iLocal_1327 = 1;
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_133[1 /*6*/]))
			{
				__LIB_4__::func_958(uParam0, 1);
				if (!func_447(uParam0, 1, -1207.97f, -716.3637f, 72.3763f, 49.43f, 1, 1, 1))
				{
					return false;
				}
				else
				{
					Local_133[1 /*6*/] = __LIB_4__::func_957(uParam0);
					__LIB_4__::func_945(uParam0, 1);
				}
			}
			Local_1123[0 /*6*/].f_4 = -1f;
			Local_1123[0 /*6*/].f_5 = 1f;
			Local_1123[1 /*6*/].f_4 = -1f;
			Local_1123[1 /*6*/].f_5 = 1f;
			func_176(15);
			Local_1340 = 1f;
			iLocal_1327 = 2;
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_941[18 /*2*/]))
			{
				func_1350(18);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
			ENTITY::SET_ENTITY_COORDS(Global_35, -1211.4f, -710.5f, 72.7f, true, false, true, true);
			vVar0 = { func_1449(1, 1, 7) };
			ENTITY::SET_ENTITY_VISIBLE(Local_941[18 /*2*/], false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_941[18 /*2*/], true);
			ENTITY::SET_ENTITY_COLLISION(Local_941[18 /*2*/], false, false);
			ENTITY::SET_ENTITY_COORDS(Local_941[18 /*2*/], func_1362(6), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_941[18 /*2*/], func_1362(7), 2, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[1 /*6*/], vVar0, vVar0.f_3, true, false, true);
			ENTITY::_0x9587913B9E772D29(Local_133[1 /*6*/], 0);
			MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
			CLOCK::SET_CLOCK_TIME(23, 10, 0);
			HUD::_HIDE_HUD_COMPONENT(iLocal_131);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 1);
			iLocal_1327 = 3;
			break;
		case 3:
			if (!__LIB_1__::func_583(&(vLocal_792[0 /*3*/])) >= 2f)
			{
			}
			else
			{
				vVar0 = { func_1449(1, 2, 7) };
				func_1355();
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 1f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
				TASK::TASK_STAND_STILL(0, -1);
				func_1356(Local_133[1 /*6*/], 0);
				if (__LIB_5__::func_773(Local_133[1 /*6*/]) == 1)
				{
					func_1313(62);
				}
				else
				{
					func_1313(63);
				}
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				TASK::TASK_LOOK_AT_ENTITY(Local_133[1 /*6*/], Global_35, BUILTIN::FLOOR((4.5f * 1000f)), 48, 41, 0);
				PED::_0x2208438012482A1A(Local_133[1 /*6*/], false, false);
				PED::FORCE_PED_MOTION_STATE(Local_133[1 /*6*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
				CAM::_0x90DA5BA5C2635416();
				func_1378(4, 0f);
				CAM::SHAKE_CAM(iLocal_1009[4], __LIB_1__::func_569(cLocal_1166), 0.5f);
				CAM::DO_SCREEN_FADE_IN(3000);
				__LIB_4__::func_89(&(vLocal_792[0 /*3*/]), 1);
				ENTITY::SET_ENTITY_COORDS(Local_941[18 /*2*/], vLocal_1328, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Local_941[18 /*2*/], vLocal_1331, 2, true);
				CAM::SET_CAM_COORD(iLocal_1009[4], ENTITY::GET_ENTITY_COORDS(Local_941[18 /*2*/], true, false));
				iLocal_1327 = 4;
				Jump @870; //curOff = 747
				func_1959();
				if (__LIB_1__::func_583(&(vLocal_792[0 /*3*/])) >= 4.5f)
				{
					CAM::DO_SCREEN_FADE_OUT(3000);
					iLocal_1327 = 5;
				}
				Jump @870; //curOff = 784
				func_1959();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					ENTITY::DETACH_ENTITY(Global_35, true, true);
					HUD::_DISPLAY_HUD_COMPONENT(iLocal_131);
					PED::_SET_PED_ON_MOUNT(Global_35, Local_133[1 /*6*/], -1, true);
					Local_133[4 /*6*/] = Local_133[1 /*6*/];
					func_182();
					iLocal_1327 = 6;
					return true;
				}
				Jump @870; //curOff = 860
				return true;
			}
			return false;
			default:
				break;
	}
}

void func_1448()
{
	switch (iLocal_1488)
	{
		case 0:
			if (func_1961(98, 1))
			{
				iLocal_1488 = 1;
			}
			break;
		case 1:
			func_210(1);
			iLocal_1488 = 2;
			break;
	}
}

struct<4> func_1449(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	Var0 = { Var0 };
	switch (iParam0)
	{
		case 1:
			if (iParam2 == 7)
			{
				if (iParam1 == 1)
				{
					Var0 = { -1207.97f, -716.3637f, 72.3763f };
					Var0.f_3 = 49.43f;
					return Var0;
				}
				else if (iParam1 == 2)
				{
					Var0 = { -1209.429f, -714.3657f, 72.963f };
					return Var0;
				}
			}
			break;
		case 39:
		case 49:
			if (iParam1 == 0)
			{
				Var0 = { -1082.241f, -689.3392f, 71.9217f };
				Var0.f_3 = -104.79f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -1040.922f, -687.5663f, 69.6824f };
				Var0.f_3 = 219f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -998.1f, -722.7f, 62.9f };
				Var0.f_3 = 219f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -937.8821f, -757.4938f, 58.7402f };
				Var0.f_3 = 250f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -844.3f, -790.5f, 53f };
				Var0.f_3 = 250f;
				return Var0;
			}
			else if (iParam1 == 7)
			{
				Var0 = { -1056.3f, -619.9f, 76.6f };
				Var0.f_3 = 12.4f;
				return Var0;
			}
			break;
		case 40:
		case 50:
			if (iParam1 == 0)
			{
				Var0 = { -729.3f, -632.8f, 41.9f };
				Var0.f_3 = 120f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -779.8f, -668.7f, 52.6f };
				Var0.f_3 = 0f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -726.7f, -736.4f, 49.5f };
				Var0.f_3 = 0f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -783.7f, -809.1f, 50.6f };
				Var0.f_3 = 0f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -859.7f, -782.7f, 53.9f };
				Var0.f_3 = 0f;
				return Var0;
			}
			break;
		case 41:
		case 51:
			if (iParam1 == 0)
			{
				Var0 = { -789.6f, -536.2f, 48.7f };
				Var0.f_3 = 150.9f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -836.4f, -591.2f, 57.2f };
				Var0.f_3 = -158.3f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -789.8f, -652.2f, 55.5f };
				Var0.f_3 = -152.3f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -736.6f, -713.4f, 52f };
				Var0.f_3 = -133.3f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -728f, -738.3f, 49.1f };
				Var0.f_3 = 30.5f;
				return Var0;
			}
			break;
		case 42:
			if (iParam1 == 0)
			{
				Var0 = { -1058.287f, -614.0875f, 77.3709f };
				Var0.f_3 = -114.39f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -1003.7f, -636.7f, 74.1f };
				Var0.f_3 = -107.15f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -961.3f, -640.5f, 73.5f };
				Var0.f_3 = -83.04f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -931.3f, -640.8f, 72f };
				Var0.f_3 = -83.04f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -904.6f, -641f, 70.7f };
				Var0.f_3 = -83.04f;
				return Var0;
			}
			break;
		case 43:
		case 53:
			if (iParam1 == 0)
			{
				Var0 = { -809.4f, -598f, 53.3f };
				Var0.f_3 = 124f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -828.8f, -608f, 58.3f };
				Var0.f_3 = 131.9f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -865.7f, -629.9f, 64.2f };
				Var0.f_3 = 49.1f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -876.3f, -615.8f, 67.3f };
				Var0.f_3 = -54.1f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -857.6f, -605.1f, 63.7f };
				Var0.f_3 = -111.1f;
				return Var0;
			}
			else if (iParam1 == 7)
			{
				Var0 = { -842.3f, -622.2f, 61.5f };
				Var0.f_3 = -48.7f;
				return Var0;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					Var0 = { -810.5f, -581.6f, 55.2f };
					Var0.f_3 = 106.3f;
					return Var0;
				case 3:
					Var0 = { -832.4f, -600.3f, 58.2f };
					Var0.f_3 = -154.6f;
					return Var0;
				case 4:
					Var0 = { -831.9f, -604.8f, 58.2f };
					Var0.f_3 = 175.8f;
					return Var0;
				case 5:
					Var0 = { -828.7f, -603.5f, 58.2f };
					Var0.f_3 = -109.1f;
					return Var0;
				case 6:
					Var0 = { -834.8f, -593.9f, 57.6f };
					Var0.f_3 = 10.6f;
					return Var0;
			}
			break;
		case 45:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1089.6f, -576.5f, 81.9f };
					Var0.f_3 = -62.8f;
					return Var0;
				case 3:
					Var0 = { -1056.6f, -602.5f, 78.2f };
					Var0.f_3 = -165.8f;
					return Var0;
				case 4:
					Var0 = { -1054.4f, -604.3f, 77.6f };
					Var0.f_3 = -130f;
					return Var0;
				case 5:
					Var0 = { -1060.5f, -601.6f, 78.8f };
					Var0.f_3 = 120.1f;
					return Var0;
				case 6:
					Var0 = { -1057.5f, -595.6f, 80.4f };
					Var0.f_3 = 3.4f;
					return Var0;
			}
			break;
		case 46:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1056.7f, -694.2f, 70.6f };
					Var0.f_3 = -103.2f;
					return Var0;
				case 3:
					Var0 = { -1052.2f, -687.6f, 71.2f };
					Var0.f_3 = -103.2f;
					return Var0;
				case 4:
					Var0 = { -1050f, -689.5f, 71f };
					Var0.f_3 = -134.3f;
					return Var0;
				case 5:
					Var0 = { -1049.6f, -686.9f, 70.6f };
					Var0.f_3 = 120.1f;
					return Var0;
				case 6:
					Var0 = { -1055.1f, -686.8f, 71.2f };
					Var0.f_3 = 90.1f;
					return Var0;
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 0:
					Var0 = { -868.447f, -743.457f, 60.581f };
					Var0.f_3 = -190f;
					return Var0;
				case 1:
					Var0 = { -849.5f, -728.4f, 58.2f };
					Var0.f_3 = 0f;
					return Var0;
				case 2:
					Var0 = { -735.7f, -554.1f, 74.5f };
					return Var0;
			}
			break;
		case 55:
			switch (iParam1)
			{
				case 0:
					Var0 = { -868.627f, -743.553f, 60.581f };
					Var0.f_3 = -172f;
					return Var0;
				case 1:
					Var0 = { -847.8f, -727.6f, 58.1f };
					Var0.f_3 = 0f;
					return Var0;
				case 2:
					Var0 = { -735.7f, -554.1f, 74.5f };
					return Var0;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					Var0 = { 459.8409f, 54.1201f, 133.9201f };
					Var0.f_3 = 2.13f;
					return Var0;
			}
			break;
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 16:
			case 20:
				if (iParam2 == 0)
				{
					return func_1578(10, 1);
				}
				else if (iParam2 == 1 || iParam2 == 2)
				{
					return func_1578(6, 1);
				}
				else if (iParam2 == 4)
				{
					Var0 = { -874.3146f, -747.0599f, 58.371f };
					return Var0;
				}
				else if (iParam2 == 7)
				{
					Var0 = { -849.7007f, -724.3657f, 59.449f };
					Var0.f_3 = -98.44f;
					return Var0;
				}
				break;
			case 17:
			case 21:
				if (iParam2 == 0)
				{
					return func_1578(10, 2);
				}
				else if (iParam2 == 1 || iParam2 == 2)
				{
					return func_1578(6, 4);
				}
				else if (iParam2 == 7)
				{
					Var0 = { -851.4477f, -723.9618f, 59.647f };
					Var0.f_3 = -134.7f;
					return Var0;
				}
				break;
			case 18:
			case 22:
				if (iParam2 == 0)
				{
					return func_1578(10, 3);
				}
				else if (iParam2 == 1 || iParam2 == 2)
				{
					return func_1578(6, 6);
				}
				else if (iParam2 == 4)
				{
					Var0 = { -876.3886f, -746.8376f, 58.4796f };
					return Var0;
				}
				else if (iParam2 == 7)
				{
					Var0 = { -847.5931f, -724.2992f, 59.263f };
					Var0.f_3 = 152.7f;
					return Var0;
				}
				break;
			case 19:
			case 23:
				if (iParam2 == 0)
				{
					return func_1578(10, 4);
				}
				else if (iParam2 == 1 || iParam2 == 2)
				{
					return func_1578(6, 7);
				}
				else if (iParam2 == 7)
				{
					Var0 = { -845.5144f, -718.6787f, 59.9861f };
					Var0.f_3 = -124.03f;
					return Var0;
				}
				break;
			case 24:
				if (iParam2 == 2)
				{
					return func_551(2, 0);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 0);
				}
				break;
			case 25:
				if (iParam2 == 2)
				{
					return func_551(2, 1);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 1);
				}
				break;
			case 26:
				if (iParam2 == 2)
				{
					return func_551(2, 2);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 2);
				}
				break;
			case 27:
				if (iParam2 == 2)
				{
					return func_551(2, 3);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 3);
				}
				break;
			case 28:
				if (iParam2 == 2)
				{
					return func_551(3, 0);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 0);
				}
				break;
			case 29:
				if (iParam2 == 2)
				{
					return func_551(3, 1);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 1);
				}
				break;
			case 30:
				if (iParam2 == 2)
				{
					return func_551(3, 2);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 2);
				}
				break;
			case 31:
				if (iParam2 == 2)
				{
					return func_551(3, 3);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 3);
				}
				break;
			case 32:
				return func_551(6, 0);
			case 33:
				return func_551(6, 1);
			case 34:
				return func_551(6, 2);
			case 35:
				return func_551(6, 3);
			case 36:
				return func_551(6, 4);
			case 37:
			case 47:
				Var0 = { -919.9f, -697.9f, 65.3f };
				Var0.f_3 = -88.6f;
				return Var0;
			case 38:
			case 48:
				Var0 = { -855.1f, -661.6f, 64.4f };
				Var0.f_3 = 0f;
				return Var0;
			case 40:
			case 50:
				return func_1578(4, 10);
			case 41:
			case 51:
				return func_1578(4, 13);
			case 42:
			case 52:
				return func_1578(4, 16);
		}
		if (iParam2 == 8 || iParam2 == 25)
		{
			if (iParam1 == 0)
			{
				switch (iParam0)
				{
					case 6:
						return func_1578(0, 3);
					case 7:
						return func_1578(0, 5);
					case 10:
						return func_1578(0, 4);
					case 11:
						return func_1578(0, 6);
					case 12:
						return func_1578(0, 7);
					case 13:
						return func_1578(0, 8);
					case 14:
						return func_1578(0, 9);
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 16:
			case 17:
			case 18:
				if (iParam2 == 0)
				{
					return func_1578(10, 6);
				}
				break;
			case 19:
				if (iParam2 == 0)
				{
					return func_1578(10, 7);
				}
				break;
		}
	}
	return func_551(0, 0);
}

bool func_1450(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, struct<4> Param5, bool bParam9)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	iVar0 = func_1962(iParam1);
	switch (Local_133[iParam1 /*6*/].f_3)
	{
		case 0:
			if (bParam2)
			{
				Local_133[iParam1 /*6*/].f_3 = 1;
			}
			else if (bParam3)
			{
				Local_133[iParam1 /*6*/].f_3 = 3;
			}
			else if (bParam4)
			{
				Local_133[iParam1 /*6*/].f_3 = 5;
			}
			else
			{
				Local_133[iParam1 /*6*/].f_3 = 8;
			}
			break;
		case 1:
			iVar1 = __LIB_5__::func_34(uParam0, func_464(func_1323(iParam1)), 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				Local_133[iParam1 /*6*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_133[iParam1 /*6*/]))
			{
				if (!func_470(iParam1) == -1)
				{
					Local_133[iParam1 /*6*/].f_3 = 2;
				}
				else
				{
					Local_133[iParam1 /*6*/].f_3 = 6;
				}
			}
			else if (bParam3)
			{
				Local_133[iParam1 /*6*/].f_3 = 3;
			}
			else if (bParam4)
			{
				Local_133[iParam1 /*6*/].f_3 = 5;
			}
			else
			{
				Local_133[iParam1 /*6*/].f_3 = 8;
			}
			break;
		case 2:
			if (func_917(uParam0, func_470(iParam1), &(Local_133[iParam1 /*6*/]), 0, 0, 0, 0, 0, 0, iVar0, 1, 0, 1, 0))
			{
				Local_133[iParam1 /*6*/].f_3 = 6;
			}
			break;
		case 3:
			if (!Local_133[iParam1 /*6*/].f_2 == 1)
			{
				func_943(iParam1, 1);
			}
			if (func_470(iParam1) == -1)
			{
				if (bParam4)
				{
					Local_133[iParam1 /*6*/].f_3 = 5;
				}
				else
				{
					Local_133[iParam1 /*6*/].f_3 = 8;
				}
				return false;
			}
			if (func_917(uParam0, func_470(iParam1), &(Local_133[iParam1 /*6*/]), 0, 0, 0, 0, 0, 0, iVar0, 1, 0, 1, 0))
			{
				if (bParam9)
				{
					if (__LIB_0__::func_86(Param5))
					{
					}
					else
					{
						func_1295(Local_133[iParam1 /*6*/], Param5, 2, 1073741824 /* Float: 2f */);
					}
				}
				Local_133[iParam1 /*6*/].f_3 = 6;
			}
			else
			{
				return false;
			}
			break;
		case 5:
			func_462(func_1323(iParam1));
			if (!func_463(func_1323(iParam1)))
			{
			}
			else
			{
				if (__LIB_0__::func_86(Param5))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					Var2.f_3 = ENTITY::GET_ENTITY_HEADING(Global_35);
				}
				else
				{
					Var2 = { Param5 };
				}
				Local_133[iParam1 /*6*/] = __LIB_8__::func_931(func_464(func_1323(iParam1)), Var2, Var2.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				Local_133[iParam1 /*6*/].f_3 = 6;
				Jump @974; //curOff = 593
				if (!ENTITY::IS_ENTITY_DEAD(Local_133[iParam1 /*6*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[iParam1 /*6*/], true);
					if (!func_470(iParam1) == -1)
					{
						switch (func_470(iParam1))
						{
							case 0:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "DUTCH", 0);
								break;
							case 6:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "MICAH_BELL", 0);
								break;
							case 5:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "HOSEA", 0);
								break;
							case 16:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "MOLLY", 0);
								break;
							case 15:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "MARYBETH", 0);
								break;
							case 17:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "PEARSON", 0);
								break;
							case 20:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "Karen", 0);
								break;
							case 21:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "SWANSON", 0);
								break;
							case 19:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "SUSAN", 0);
								break;
							case 7:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "CHARLES_SMITH", 0);
								break;
							case 3:
								__LIB_5__::func_106(uParam0, Local_133[iParam1 /*6*/], "BILL", 0);
								break;
							default:
								break;
						}
					}
					func_943(iParam1, 1);
					Local_133[iParam1 /*6*/].f_3 = 7;
					return true;
				}
				Jump @974; //curOff = 957
				return true;
				Jump @974; //curOff = 964
				return false;
			}
			return false;
			default:
				break;
	}
}

bool func_1451(var uParam0)
{
	switch (iLocal_1482[3])
	{
		case 0:
			__LIB_5__::func_262(&(uParam0->f_7375));
			iLocal_1482[3] = 1;
		case 1:
			iLocal_1482[3] = 2;
		case 2:
			iLocal_1482[3] = 3;
		case 3:
			__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[6 /*6*/], "Dutch", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[1 /*6*/], "Horse_01", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[10 /*6*/], "MARYBETH", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[7 /*6*/], "MicahBell", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[11 /*6*/], "MrPearson", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[12 /*6*/], "karen", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[13 /*6*/], "RevSwanson", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_133[14 /*6*/], "SusanGrimshaw", 0, 0, 0, 0);
			__LIB_5__::func_111(&(uParam0->f_7375), Local_941[31 /*2*/], "p_chair20x", 0, 0, 0);
			__LIB_4__::func_969(uParam0, 4194304);
			iLocal_1482[3] = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_1452(int iParam0)
{
	iLocal_1337 = iParam0;
}

bool func_1453(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar5;
	bool bVar8;
	float fVar9;
	float fVar10;
	CAM::_0x702B75DC9D3EDE56(true);
	func_1369(20);
	GRAPHICS::_0x98A7CD5EA379A854();
	if (!ENTITY::IS_ENTITY_DEAD(Local_133[4 /*6*/]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1f, 1, -1f, 0);
		}
	}
	bVar8 = true;
	switch (iLocal_1337)
	{
		case 1:
			vVar1 = { func_1439(0) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar1);
			func_462(95);
			func_462(81);
			func_462(80);
			__LIB_4__::func_89(&(vLocal_792[46 /*3*/]), 1);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			func_176(16);
			func_176(15);
			if (!__LIB_0__::func_394(Global_35, Local_133[4 /*6*/], 0))
			{
				PED::_SET_PED_ON_MOUNT(Global_35, Local_133[4 /*6*/], -1, true);
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[4 /*6*/], vVar1, vVar1.f_3, true, false, true);
			ENTITY::_0x9587913B9E772D29(Local_133[4 /*6*/], 0);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_1963(0));
			func_1452(2);
			break;
		case 2:
			vVar1 = { func_1439(0) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar1);
			if (__LIB_0__::func_899(&(vLocal_792[45 /*3*/])) && __LIB_1__::func_583(&(vLocal_792[45 /*3*/])) <= 3f)
			{
				bVar8 = false;
			}
			if (!func_463(95))
			{
				bVar8 = false;
			}
			if (!func_463(81))
			{
				bVar8 = false;
			}
			if (!func_463(80))
			{
				bVar8 = false;
			}
			if (!CAM::_0xAA235E2F2C09E952(func_1438(6)))
			{
				bVar8 = false;
			}
			if (!STREAMING::IS_SRL_LOADED())
			{
				bVar8 = false;
			}
			if (bVar8)
			{
				if (!__LIB_0__::func_394(Global_35, Local_133[4 /*6*/], 0))
				{
					PED::_SET_PED_ON_MOUNT(Global_35, Local_133[4 /*6*/], -1, true);
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[4 /*6*/], vVar1, vVar1.f_3, true, false, true);
				ENTITY::_0x9587913B9E772D29(Local_133[4 /*6*/], 0);
				STREAMING::END_SRL();
				func_1428(Global_35, 80, 1000f, -1056964608 /* Float: -8f */, -1, 17);
				vVar1 = { func_1439(1) };
				__LIB_18__::func_409(0, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
				__LIB_18__::func_409(1, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
				__LIB_18__::func_409(2, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
				__LIB_4__::func_509(1);
				AUDIO::_0x5E3CCF03995388B5(MISC::GET_HASH_KEY(func_1964(0, 0)), ENTITY::GET_ENTITY_COORDS(Local_133[4 /*6*/], true, false));
				CAM::_0xBC016635D6A73B31(func_1438(6), func_1964(0, 1), 5);
				__LIB_2__::func_259(&(vLocal_792[46 /*3*/]));
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_496(95), 0, 4194312, -1, 0, 0, -1);
				PED::_0x2208438012482A1A(Global_35, true, false);
				PED::FORCE_PED_MOTION_STATE(Local_133[4 /*6*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
				PED::_0x2208438012482A1A(Local_133[4 /*6*/], true, false);
				CAM::DO_SCREEN_FADE_IN(1000);
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
				CLOCK::SET_CLOCK_TIME(22, 0, 0);
				STREAMING::PREFETCH_SRL(func_1963(1));
				func_1372(1, 1000);
				__LIB_4__::func_89(&(vLocal_792[47 /*3*/]), 1);
				func_1452(3);
			}
			break;
		case 3:
			__LIB_18__::func_409(2, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			vVar1 = { func_1439(1) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar1);
			vVar5 = { func_1965(1) };
			iVar0 = (func_1966(0) - __LIB_1__::func_592(&(vLocal_792[46 /*3*/])));
			fVar9 = BUILTIN::TO_FLOAT((CAM::_0x465F04F68AD38197(func_1438(6), func_1964(0, 1), 5) / 1000));
			if (func_1967(1, vVar5, iVar0) || __LIB_1__::func_583(&(vLocal_792[47 /*3*/])) >= fVar9)
			{
				__LIB_4__::func_89(&(vLocal_792[47 /*3*/]), 1);
				func_1452(4);
			}
			break;
		case 4:
			vVar1 = { func_1439(1) };
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_1963(2));
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[4 /*6*/], vVar1, vVar1.f_3, true, false, true);
			__LIB_18__::func_409(1, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			ENTITY::_0x9587913B9E772D29(Local_133[4 /*6*/], 0);
			func_1428(Global_35, 81, 1000f, -1056964608 /* Float: -8f */, -1, 17);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_496(95), 0, 4194312, -1, 0, 0, -1);
			PED::_0x2208438012482A1A(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Local_133[4 /*6*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
			PED::_0x2208438012482A1A(Local_133[4 /*6*/], true, false);
			CAM::_0xBC016635D6A73B31(func_1438(6), func_1964(1, 1), 5);
			__LIB_2__::func_259(&(vLocal_792[46 /*3*/]));
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			__LIB_2__::func_259(&(vLocal_792[46 /*3*/]));
			func_1452(5);
			break;
		case 5:
			__LIB_18__::func_409(2, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			vVar1 = { func_1439(2) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar1);
			vVar5 = { func_1965(2) };
			iVar0 = (func_1966(1) - __LIB_1__::func_592(&(vLocal_792[46 /*3*/])));
			fVar10 = BUILTIN::TO_FLOAT((CAM::_0x465F04F68AD38197(func_1438(6), func_1964(1, 1), 5) / 1000));
			if (func_1967(2, vVar5, iVar0) || __LIB_1__::func_583(&(vLocal_792[47 /*3*/])) >= fVar10)
			{
				__LIB_4__::func_89(&(vLocal_792[47 /*3*/]), 1);
				func_1452(6);
			}
			break;
		case 6:
			__LIB_18__::func_409(2, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			STREAMING::END_SRL();
			vVar1 = { func_1439(2) };
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[4 /*6*/], vVar1, vVar1.f_3, true, false, true);
			__LIB_18__::func_409(1, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			ENTITY::_0x9587913B9E772D29(Local_133[4 /*6*/], 0);
			func_1428(Global_35, 81, 1000f, -1056964608 /* Float: -8f */, -1, 17);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_496(95), 0, 4194312, -1, 0, 0, -1);
			PED::_0x2208438012482A1A(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Local_133[4 /*6*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
			PED::_0x2208438012482A1A(Local_133[4 /*6*/], true, false);
			CAM::_0xA54D643D0773EB65(func_1438(6), func_1964(1, 1), 5);
			CAM::_0xBC016635D6A73B31(func_1438(6), func_1964(2, 1), 5);
			AUDIO::_0xFFE9C53DEEA3DB0B(iVar0, MISC::GET_HASH_KEY(func_1964(2, 0)), vVar1, true, 2147483647);
			__LIB_4__::func_89(&(vLocal_792[46 /*3*/]), 1);
			__LIB_4__::func_969(uParam0, 4194304);
			__LIB_2__::func_259(&(vLocal_792[46 /*3*/]));
			func_456(142);
			func_1452(7);
			break;
		case 7:
			__LIB_18__::func_409(2, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			AUDIO::_0xFFE9C53DEEA3DB0B(iVar0, MISC::GET_HASH_KEY(func_1964(2, 0)), 680.5f, -1164.7f, 50.8f, true, 2147483647);
			if (!func_165(143))
			{
				if (__LIB_8__::func_930(&(uParam0->f_7375), "ODR3_EXT", 1, 1))
				{
					func_456(143);
				}
			}
			if (__LIB_1__::func_583(&(vLocal_792[46 /*3*/])) >= (IntToFloat((func_1966(2) / 1000)) - ANIMSCENE::_GET_ANIM_SCENE_DURATION(Local_1371[20 /*5*/])))
			{
				if (func_165(143))
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1371[20 /*5*/], Local_133[4 /*6*/], PED::GET_PED_BONE_INDEX(Local_133[4 /*6*/], 0));
					TASK::STOP_ANIM_TASK(Global_35, func_494(81, 1), func_494(81, 0), -3f);
					if (func_1374(20, 1))
					{
						__LIB_18__::func_409(1, Global_35, 0, Local_133[4 /*6*/], 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
						func_1452(8);
						return true;
					}
				}
			}
			break;
		case 8:
			break;
	}
	return false;
}

Vector3 func_1457(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 682.751f, -1236.762f, 44f;
				case 1:
					return 674.749f, -1245.03f, 43.9384f;
				case 2:
					return 686.1007f, -1229.795f, 44.2394f;
				case 3:
					return 673.59f, -1246.17f, 43.8528f;
				case 4:
					return 691.25f, -1228.155f, 44.3057f;
				case 5:
					return 576.3982f, 211.3043f, 128.7836f;
				case 6:
					return 574.8192f, 215.0694f, 128.3182f;
				case 7:
					return 407.9201f, 32.5632f, 107.4515f;
				case 8:
					return 409.4345f, 30.9572f, 107.5863f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 668.42f, -1245.18f, 44.1039f;
				case 1:
					return 574.0912f, 221.4953f, 127.6389f;
				case 2:
					return 459.0367f, 55.6728f, 134.8933f;
				case 3:
					return -546.1608f, 391.441f, 87.8344f;
				case 4:
					return -860.3899f, -744.6414f, 56.9728f;
				case 5:
					return -860.3899f, -744.6414f, 56.9728f;
				case 6:
					return -861.3741f, -744.9619f, 56.9699f;
				case 7:
					return -861.3741f, -744.9619f, 56.9699f;
				case 8:
					return 442.8f, -186.5f, 137.5f;
				case 9:
					return 672.6711f, -1231.805f, 44.0323f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -547.2589f, 391.083f, 87.918f;
				case 1:
					return -547.5558f, 395.5418f, 88.1152f;
				case 2:
					return -546.1267f, 389.0597f, 87.6621f;
				case 3:
					return -544.7975f, 392.0254f, 87.7219f;
				case 4:
					return -545.664f, 396.658f, 87.9242f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -553.4178f, 388.0737f, 88.0903f;
				case 1:
					return -554.8318f, 392.0486f, 88.4488f;
				case 2:
					return -554.8452f, 398.3689f, 88.2291f;
				case 3:
					return -553.2543f, 400.2751f, 88.0964f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1042.068f, 429.984f, 54.6785f;
				case 1:
					return -1044.376f, 433.5345f, 54.5734f;
				case 2:
					return -1039.677f, 425.9865f, 54.9871f;
				case 3:
					return -1038.198f, 422.5345f, 55.3405f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -852.9872f, -729.9537f, 59.1827f;
				case 1:
					return -848.7188f, -728.8995f, 58.8388f;
				case 2:
					return -843.9165f, -724.0826f, 58.9466f;
				case 3:
					return -839.7863f, -723.0562f, 58.648f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -871.1052f, -746.0158f, 59.4568f;
				case 1:
					return -870.0963f, -732.2602f, 59.8865f;
				case 2:
					return -866.3245f, -751.0563f, 59.4128f;
				case 3:
					return -884.5085f, -747.2338f, 59.4074f;
				case 4:
					return -872.3051f, -742.6536f, 59.5887f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -666.932f, -515.5493f, 76.3865f;
				case 1:
					return -1185.029f, -509.6394f, 89.8865f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1472()
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
	iVar0 = func_1975(6291456, 0);
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

int func_1495(var uParam0, int iParam1, int iParam2)
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
		return func_1495(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1526(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_925(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1527(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	__LIB_4__::func_787(iParam1, bParam3, bParam4, bParam6);
	if (!__LIB_4__::func_948(uParam0, 512))
	{
		if (__LIB_4__::func_948(uParam0, 4) && bParam4)
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 5f, 0f, 0f) };
			__LIB_1__::func_338(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_1998(uParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
	__LIB_5__::func_572(uParam0, iParam1, 512);
	if (bParam5)
	{
		__LIB_5__::func_572(uParam0, iParam1, 128);
	}
	else
	{
		__LIB_5__::func_571(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

bool func_1553(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_2026(iParam0) };
	if (__LIB_0__::func_138(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!__LIB_4__::func_544(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2027(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

bool func_1562(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_9__::func_214(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_9__::func_374(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_382(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_8__::func_897(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_5__::func_382(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_11__::func_110(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_9__::func_379(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_9__::func_178(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_9__::func_180(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_2__::func_259(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_5__::func_382(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_9__::func_180(uParam0, iParam5))
			{
				__LIB_5__::func_382(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1568(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &uParam0);
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
					__LIB_8__::func_938(uParam4, &uParam0, uParam5);
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
					__LIB_5__::func_265(uParam5);
				}
				__LIB_8__::func_726(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (__LIB_5__::func_331(uParam5, __LIB_4__::func_939(uParam5), 262144))
				{
					if (!__LIB_0__::func_84(uParam4, 2097152))
					{
						__LIB_5__::func_69(uParam4);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_806)) && (!__LIB_4__::func_937(uParam5, 8) || __LIB_0__::func_84(uParam4, 134217728)))
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
				if (__LIB_8__::func_930(uParam4, &uParam0, 1, 1))
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
				if (__LIB_5__::func_253(uParam5) != 0 || (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_8__::func_938(uParam4, &uParam0, uParam5);
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
			func_415(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_5__::func_265(uParam5);
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
				__LIB_10__::func_934(uParam4);
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
					__LIB_5__::func_129(&(uParam4->f_861), 0);
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
				__LIB_10__::func_934(uParam4);
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
				if (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3)
				{
					if (__LIB_5__::func_266(uParam5))
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

void func_1575(int iParam0)
{
	iLocal_1339 = iParam0;
}

int func_1576()
{
	switch (iLocal_1339)
	{
		case 3:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				if (!Global_1905942 == -1)
				{
					__LIB_9__::func_960(Global_35, 1);
				}
				else
				{
					__LIB_9__::func_2(Global_35, 9, 1, 1, 0);
				}
				func_1575(5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				func_456(17);
				func_1575(0);
				return 1;
			}
			break;
		case 0:
			return 1;
	}
	return 0;
}

int func_1577()
{
	switch (iLocal_1339)
	{
		case 0:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				__LIB_9__::func_2(Global_35, 13, 1, 1, 0);
				__LIB_1__::func_775(Global_35, -482394719, 0, -358215195, 1, 1, 1, 0, 1, 0);
				func_1575(1);
			}
			break;
		case 1:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, 1263923957, 1);
				if (func_165(19))
				{
					PED::_SET_PED_COMPONENT_DISABLED(Global_35, -675377005, 1);
				}
				PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
				func_456(18);
				func_1575(2);
				return 1;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

struct<4> func_1578(int iParam0, int iParam1)
{
	return func_2098(iParam0, iParam1);
}

bool func_1579(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, struct<4> Param6, bool bParam10)
{
	if (Local_133[iParam1 /*6*/].f_3 == 7)
	{
		return true;
	}
	switch (Local_133[iParam1 /*6*/].f_3)
	{
		case 0:
			if (bParam3)
			{
				Local_133[iParam1 /*6*/].f_3 = 1;
			}
			else if (bParam4)
			{
				Local_133[iParam1 /*6*/].f_3 = 3;
			}
			else if (bParam5)
			{
				Local_133[iParam1 /*6*/].f_3 = 5;
			}
			break;
		case 1:
			Local_133[iParam1 /*6*/].f_3 = 3;
			break;
		case 3:
			if (func_470(iParam2) == -1)
			{
				Local_133[iParam1 /*6*/].f_3 = 5;
				return false;
			}
			Local_133[iParam1 /*6*/] = func_2099(func_470(iParam2), 1, 1, 0, 0, 0, 0, 1, bParam10, Param6, Param6.f_1, Param6.f_2, Param6.f_3, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_133[iParam1 /*6*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_133[iParam1 /*6*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_133[iParam1 /*6*/], true);
					func_943(iParam1, 1);
					Local_133[iParam1 /*6*/].f_3 = 6;
				}
			}
			break;
		case 5:
			func_462(12);
			if (!func_463(12))
			{
				return false;
			}
			Local_133[iParam1 /*6*/] = __LIB_8__::func_931(func_464(12), Param6, Param6.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			Local_133[iParam1 /*6*/].f_3 = 6;
		case 6:
			if (ENTITY::IS_ENTITY_DEAD(Local_133[iParam1 /*6*/]))
			{
			}
			else if (!PED::_0xA0BC8FAED8CFEB3C(Local_133[iParam1 /*6*/]))
			{
			}
			else
			{
				func_943(iParam1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[iParam1 /*6*/], true);
				PED::SET_PED_CONFIG_FLAG(Local_133[iParam1 /*6*/], 113, true);
				PED::SET_PED_CONFIG_FLAG(Local_133[iParam1 /*6*/], 168, false);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_133[iParam1 /*6*/], 512, true);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_133[iParam1 /*6*/], 16384, true);
				PED::_0x2EB75FB86C41F026(Local_133[iParam1 /*6*/], 3, 0);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_133[iParam1 /*6*/], 48, true);
				POPULATION::_0xF74E134F40192884(Local_133[iParam1 /*6*/], 2);
				TASK::CLEAR_PED_TASKS(Local_133[iParam1 /*6*/], true, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_133[iParam1 /*6*/], false, true);
				TASK::TASK_STAND_STILL(Local_133[iParam1 /*6*/], -1);
				Local_133[iParam1 /*6*/].f_3 = 7;
				return true;
			}
			return false;
			default:
				break;
	}
}

float func_1580(int iParam0, int iParam1)
{
	return func_2100(iParam0, iParam1);
}

int func_1581(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_1177)
	{
		case 0:
			if (!func_941(uParam0) == 1)
			{
				ENTITY::SET_ENTITY_COORDS(Local_133[6 /*6*/], func_1336(10, 0), true, false, true, true);
				ENTITY::_0x9587913B9E772D29(Local_133[6 /*6*/], 0);
			}
			iLocal_1195 = CLOCK::GET_CLOCK_HOURS();
			iLocal_1196 = CLOCK::GET_CLOCK_MINUTES();
			iLocal_1197 = CLOCK::GET_CLOCK_SECONDS();
			if (iLocal_1195 > 20 || (iLocal_1195 == 20 && iLocal_1196 > 20))
			{
				func_456(33);
			}
			if (!func_165(33))
			{
				if (iLocal_1195 < 4 || (iLocal_1195 == 4 && iLocal_1196 < 30))
				{
					func_456(33);
				}
			}
			if (func_165(33))
			{
				func_456(34);
			}
			else if (iLocal_1195 > 4 || (iLocal_1195 == 4 && iLocal_1196 >= 30))
			{
				if (iLocal_1195 < 6)
				{
					func_456(34);
				}
			}
			if (func_165(33))
			{
				__LIB_1__::func_159(&iLocal_1198, iLocal_1197, iLocal_1196, iLocal_1195, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				__LIB_1__::func_159(&iLocal_1199, 0, 30, 4, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				iVar1 = func_2101(iLocal_1198, iLocal_1199);
				iLocal_1182 = (iVar1 / 24);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
			{
				if (func_941(uParam0) == 0)
				{
					Local_941[0 /*2*/] = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_7375.f_804, "p_chairFolding02x", false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_941[0 /*2*/], true, true);
					Local_941[1 /*2*/] = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_7375.f_804, "p_chairFolding02x^1", false);
					if (ENTITY::DOES_ENTITY_EXIST(Local_941[1 /*2*/]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_941[1 /*2*/], true, true);
						ENTITY::SET_ENTITY_VISIBLE(Local_941[1 /*2*/], true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_941[1 /*2*/], false);
						ENTITY::SET_ENTITY_COLLISION(Local_941[1 /*2*/], true, false);
					}
					ENTITY::SET_ENTITY_VISIBLE(Local_133[7 /*6*/], true);
					ENTITY::SET_ENTITY_COLLISION(Local_133[7 /*6*/], true, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_133[7 /*6*/], false);
					ENTITY::SET_ENTITY_VISIBLE(Local_133[9 /*6*/], true);
					ENTITY::SET_ENTITY_COLLISION(Local_133[9 /*6*/], true, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_133[9 /*6*/], false);
					ENTITY::SET_ENTITY_VISIBLE(Local_133[11 /*6*/], true);
					ENTITY::SET_ENTITY_COLLISION(Local_133[11 /*6*/], true, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_133[11 /*6*/], false);
				}
				else if (func_941(uParam0) == 2)
				{
					func_1350(1);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "p_chairFolding02x^1", Local_941[1 /*2*/], 0);
				}
			}
			ENTITY::FREEZE_ENTITY_POSITION(Local_133[9 /*6*/], false);
			break;
		case 2:
			iVar0 = 16;
			while (iVar0 <= 22)
			{
				if (func_1871(iVar0, 256))
				{
					func_1876(iVar0, 1);
				}
				iVar0++;
			}
			func_1295(Local_133[2 /*6*/], func_551(0, 5), 2, 1073741824 /* Float: 2f */);
			func_1295(Local_133[3 /*6*/], func_551(0, 6), 2, 1073741824 /* Float: 2f */);
			if (!ENTITY::IS_ENTITY_DEAD(Local_133[19 /*6*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_133[19 /*6*/], false);
			}
			if ((CLOCK::GET_CLOCK_HOURS() > 5 && CLOCK::GET_CLOCK_HOURS() <= 9) || (CLOCK::GET_CLOCK_HOURS() < 13 && CLOCK::GET_CLOCK_HOURS() >= 9))
			{
				CLOCK::SET_CLOCK_TIME(9, 0, 0);
			}
			__LIB_4__::func_7(Local_133[16 /*6*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			break;
		case 4:
			break;
		case 25:
			GRAPHICS::ANIMPOSTFX_STOP(func_198(2));
			func_456(27);
			func_940(1, 0);
			iVar2 = 6;
			while (iVar2 <= 15)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_133[iVar2 /*6*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_133[iVar2 /*6*/], true);
				}
				iVar2++;
			}
			__LIB_5__::func_33(uParam0, 131072);
			break;
	}
	return 1;
}

int func_1582(var uParam0)
{
	int iVar0;
	if (!func_941(uParam0) == 1 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_941[2 /*2*/]))
		{
			Local_941[2 /*2*/] = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_7375.f_804, "p_chairFolding02x^2", false);
			if (ENTITY::DOES_ENTITY_EXIST(Local_941[2 /*2*/]))
			{
				__LIB_1__::func_336(&(Local_941[2 /*2*/].f_1), 1);
			}
		}
	}
	if (func_165(33) && !func_165(32))
	{
		if (func_941(uParam0) == 0 || func_941(uParam0) == 2)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_7375.f_804, false))
			{
				if ((((((((((((((((((((((((((((((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 909096297) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 652547796)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 121526151)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -184306926)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1394634574)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1071302851)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1145651079)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1166426625)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1476650748)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1472733978)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -761515598)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -999844535)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -281351441)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -520401296)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 189113092)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -44103881)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 672554149)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1375449203)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1151931854)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1328255409)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2074280941)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1922783376)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1705924612)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2022243769)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1115525539)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1414739278)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 823455438)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -75332694)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 222701361)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1215474181)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1530417040))
				{
					iVar0 = __LIB_0__::func_23();
					__LIB_1__::func_446(&iVar0, iLocal_1182, 0, 0, 0, 0, 0, 0);
					__LIB_3__::func_98(iVar0);
				}
			}
		}
	}
	if (!func_165(40))
	{
		if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) >= 41.67f) || __LIB_5__::func_448(&(uParam0->f_7375), 1)) || func_941(uParam0) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_133[1 /*6*/], false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[1 /*6*/], func_845(0, 0), func_1297(0, 0), true, false, true);
				ENTITY::_0x9587913B9E772D29(Local_133[1 /*6*/], 0);
				PED::_0x2208438012482A1A(Local_133[1 /*6*/], true, false);
				func_456(40);
			}
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1180))
	{
		if (TASK::_0x6EEAD6AF637DA752(666.6f, -1244.9f, 43.7f, joaat("GENERIC_SEAT_CHAIR_TABLE_SCENARIO"), 1f, 0))
		{
			iLocal_1180 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(666.6f, -1244.9f, 43.7f, joaat("GENERIC_SEAT_CHAIR_TABLE_SCENARIO"), 1f, 0, false);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1181))
	{
		if (TASK::_0x6EEAD6AF637DA752(666.1717f, -1243.589f, 43.6551f, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), 1f, 0))
		{
			iLocal_1181 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(666.1717f, -1243.589f, 43.6551f, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), 1f, 0, false);
		}
	}
	if (!func_165(38))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) >= 28.1f)
			{
				if (__LIB_10__::func_965(uParam0, Local_133[9 /*6*/], "MollyOshea", 0, 1, 0))
				{
					func_1587();
					func_456(38);
				}
			}
		}
	}
	if (!func_165(41))
	{
		if ((((__LIB_4__::func_586(&(uParam0->f_7375)) > 1200 && __LIB_10__::func_965(uParam0, Local_133[6 /*6*/], "Dutch", 0, 1, 1)) || __LIB_5__::func_448(&(uParam0->f_7375), 1)) || __LIB_0__::func_84(&(uParam0->f_7375), 262144)) || func_941(uParam0) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_133[2 /*6*/]))
			{
				func_1295(Local_133[2 /*6*/], func_551(0, 2), 2, 1073741824 /* Float: 2f */);
				if (func_941(uParam0) == 1)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[6 /*6*/], 674.748f, -1245.03f, 43.9383f, 310.1477f, true, false, true);
					ENTITY::_0x9587913B9E772D29(Local_133[6 /*6*/], 0);
				}
				TASK::TASK_MOUNT_ANIMAL(Local_133[6 /*6*/], Local_133[2 /*6*/], 30000, -1, 1.5f, 1, 0, 0);
				PED::_0x2208438012482A1A(Local_133[6 /*6*/], true, false);
				PED::FORCE_PED_MOTION_STATE(Local_133[6 /*6*/], -1415276238, false, 0, false);
			}
			func_943(6, 19);
			func_456(41);
		}
	}
	if (__LIB_10__::func_965(uParam0, Local_133[7 /*6*/], "MicahBell", 0, 1, 1))
	{
		if (!Local_133[7 /*6*/].f_2 == 19)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_133[3 /*6*/]))
			{
				func_1295(Local_133[3 /*6*/], func_551(0, 4), 2, 1073741824 /* Float: 2f */);
				if (func_941(uParam0) == 1)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[7 /*6*/], 673.553f, -1246.18f, 43.8481f, 290.0329f, true, false, true);
					ENTITY::_0x9587913B9E772D29(Local_133[7 /*6*/], 0);
				}
				TASK::TASK_MOUNT_ANIMAL(Local_133[7 /*6*/], Local_133[3 /*6*/], 30000, -1, 1.5f, 1, 0, 0);
				PED::_0x2208438012482A1A(Local_133[7 /*6*/], true, false);
				PED::FORCE_PED_MOTION_STATE(Local_133[7 /*6*/], -1415276238, false, 0, false);
			}
			func_943(7, 19);
		}
	}
	if (__LIB_10__::func_965(uParam0, Global_35, "Arthur", 0, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
		{
			PED::FORCE_PED_MOTION_STATE(Local_133[1 /*6*/], joaat("MOTIONSTATE_IDLE"), false, 0, false);
		}
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
		PED::_0x2208438012482A1A(Global_35, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_941[0 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_7375.f_804))
	{
		__LIB_1__::func_336(&(Local_941[0 /*2*/].f_1), 1);
		func_471(uParam0, 0, 0);
		func_466(24);
	}
	return 1;
}

int func_1583(var uParam0)
{
	if (__LIB_10__::func_965(uParam0, Global_35, "Arthur", 0, 1, 1))
	{
		HUD::_HIDE_HUD_COMPONENT(724769646);
		if (!ENTITY::IS_ENTITY_DEAD(Local_133[19 /*6*/]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_133[19 /*6*/], true);
		}
		func_176(8);
		if (!ENTITY::IS_ENTITY_DEAD(Local_133[1 /*6*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_133[1 /*6*/], 136, false);
		}
		__LIB_5__::func_595(uParam0, 1);
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	return 1;
}

int func_1584(var uParam0)
{
	func_1369(7);
	func_1369(8);
	if (__LIB_10__::func_965(uParam0, Local_133[16 /*6*/], "ColmODriscoll", 0, 1, 1))
	{
		func_474(uParam0, 16, "ColmODriscoll", 0);
		func_466(func_1323(16));
	}
	if (__LIB_10__::func_965(uParam0, Local_133[18 /*6*/], "G_M_M_UniDuster_01", 0, 1, 1))
	{
		func_474(uParam0, 18, "G_M_M_UniDuster_01", 0);
		func_466(10);
	}
	return 1;
}

int func_1585(var uParam0)
{
	if (!__LIB_0__::func_13(32768))
	{
		if (!func_165(151))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_7375.f_804, false))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2030541885) || ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) >= (ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_7375.f_804) - 3.75f))
				{
					func_456(152);
					if (__LIB_0__::func_871())
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1371[21 /*5*/], "PBL_1", true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1371[21 /*5*/], "PBL_2", true);
					}
					func_1374(21, 1);
					func_456(151);
				}
			}
		}
	}
	else if (!func_165(147))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2030541885))
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			func_456(147);
		}
	}
	return 1;
}

void func_1587()
{
	int iVar0;
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_133[9 /*6*/], 670f, -1262.8f, 43.7f, -42.2f, true, false, true);
	ENTITY::_0x9587913B9E772D29(Local_133[9 /*6*/], 0);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(Local_133[9 /*6*/], 671f, -1260f, 43.1f, 2f, -1, false, false, false, false);
	if (TASK::_0x6EEAD6AF637DA752(671f, -1260f, 43.1f, joaat("WORLD_HUMAN_COFFEE_DRINK"), 5f, 1))
	{
		iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(671f, -1260f, 43.1f, joaat("WORLD_HUMAN_COFFEE_DRINK"), 5f, 1, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_133[9 /*6*/], iVar0, 0, 0, true, false, 0, false, -1f, false);
			func_456(38);
		}
	}
}

void func_1588(int iParam0)
{
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_133[iParam0 /*6*/], 48, true);
	POPULATION::_0xF74E134F40192884(Local_133[iParam0 /*6*/], 2);
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(true);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_133[iParam0 /*6*/], 512, true);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_133[iParam0 /*6*/], 16384, true);
	PED::_0x2EB75FB86C41F026(Local_133[iParam0 /*6*/], 3, 0);
	PED::SET_PED_CONFIG_FLAG(Local_133[iParam0 /*6*/], 113, true);
	PED::SET_PED_CONFIG_FLAG(Local_133[iParam0 /*6*/], 168, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_133[iParam0 /*6*/], false, true);
	TASK::TASK_STAND_STILL(Local_133[iParam0 /*6*/], -1);
}

void func_1593()
{
	float fVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (func_165(15))
	{
		if (iLocal_1177 == 5 || iLocal_1177 == 6)
		{
			if (func_165(99))
			{
				fVar0 = (((__LIB_1__::func_583(&(vLocal_792[34 /*3*/])) / 10f) * -1f) + 1f);
				fVar0 = __LIB_0__::func_251(fVar0, 0.1f, 1f);
				fLocal_1168 = fVar0;
				if (fVar0 == 0.1f)
				{
					func_176(99);
					func_456(100);
					__LIB_1__::func_561(&(vLocal_792[34 /*3*/]));
					func_456(100);
				}
			}
		}
	}
	else if (func_165(16))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			bVar1 = true;
			Local_1340.f_1 = (Local_1340.f_1 + 1f);
		}
		if (PED::IS_PED_JUMPING(Global_35))
		{
			if ((__LIB_0__::func_899(&(vLocal_792[3 /*3*/])) && __LIB_1__::func_583(&(vLocal_792[3 /*3*/])) >= 0.81f) || !__LIB_0__::func_899(&(vLocal_792[3 /*3*/])))
			{
				__LIB_4__::func_89(&(vLocal_792[3 /*3*/]), 1);
				bVar1 = true;
				Local_1340.f_1 = (Local_1340.f_1 + 0.5f);
				__LIB_4__::func_89(&(vLocal_792[3 /*3*/]), 0);
			}
		}
		if (MISC::_0x7A76104CC2CC69E8(Global_35, 0, 1))
		{
			bVar1 = true;
			Local_1340.f_1 = (Local_1340.f_1 + 2f);
		}
		if (PED::_0x1D46B417F926D34D(Global_35))
		{
			if ((__LIB_0__::func_899(&(vLocal_792[4 /*3*/])) && __LIB_1__::func_583(&(vLocal_792[4 /*3*/])) >= 2f) || !__LIB_0__::func_899(&(vLocal_792[4 /*3*/])))
			{
				__LIB_4__::func_89(&(vLocal_792[4 /*3*/]), 1);
				bVar1 = true;
				Local_1340.f_1 = (Local_1340.f_1 + 1.5f);
			}
		}
		if (Local_1340.f_1 < 0.5f)
		{
			if (PED::_0xF60165E1D2C5370B(Global_35, &fVar2, &fVar3))
			{
				fVar4 = ((MISC::ABSF(fVar2) + MISC::ABSF(fVar3)) * 0.5f);
				fVar5 = __LIB_16__::func_777(fVar4, 0f, 1.4f);
				fVar5 = __LIB_0__::func_251((fVar5 * 0.5f), 0f, 0.5f);
				Local_1340.f_1 = fVar5;
			}
		}
		Local_1340.f_1 = __LIB_0__::func_251(Local_1340.f_1, 0f, 2f);
		fVar6 = MISC::ABSF((Local_1340 - Local_1340.f_1));
		bVar7 = Local_1340.f_1 > Local_1340;
		fVar6 = (fVar6 * (__LIB_0__::func_514(bVar7, 1f, 0.7f) * MISC::GET_FRAME_TIME()));
		Local_1340 = (Local_1340 + __LIB_0__::func_514(bVar7, fVar6, -fVar6));
		if (!bVar1)
		{
			Local_1340.f_1 = (Local_1340.f_1 - (0.7f * MISC::GET_FRAME_TIME()));
		}
		Local_1340 = __LIB_0__::func_251(Local_1340, 0f, 1f);
		Local_1340.f_1 = __LIB_0__::func_251(Local_1340.f_1, 0f, 2f);
		if (Local_1340 > 0f)
		{
			fLocal_774 = Local_1340;
		}
		if (Local_1340 > 0.1f)
		{
			fLocal_774 = (Local_1340 + 1f);
			func_456(14);
		}
		else
		{
			func_176(14);
			fLocal_774 = 1f;
		}
	}
	func_2105(__LIB_0__::func_514(func_165(15), fLocal_1168, Local_1340));
}

void func_1606(var uParam0)
{
	struct<8> Var0;
	func_2117(uParam0);
	if (__LIB_5__::func_253(uParam0) == 1 && CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	else if (__LIB_5__::func_253(uParam0) == 0 && !__LIB_4__::func_937(uParam0, 8))
	{
		__LIB_5__::func_284(uParam0);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
	__LIB_5__::func_74(uParam0);
	__LIB_4__::func_992(uParam0, 67108864);
	__LIB_4__::func_992(uParam0, 8192);
	__LIB_4__::func_969(uParam0, 4);
	__LIB_4__::func_969(uParam0, 512);
	__LIB_4__::func_969(uParam0, 65536);
	__LIB_4__::func_969(uParam0, 1024);
	__LIB_4__::func_969(uParam0, 262144);
	__LIB_4__::func_969(uParam0, 16777216);
	__LIB_4__::func_969(uParam0, 64);
	__LIB_4__::func_958(uParam0, 128);
	__LIB_4__::func_944(uParam0, -2147483648);
	__LIB_4__::func_993(uParam0, 1);
	if (__LIB_4__::func_948(uParam0, 4194304))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 1073741824 /* Float: 2f */);
	}
	__LIB_4__::func_958(uParam0, 4194304);
	__LIB_4__::func_958(uParam0, 8388608);
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_1__::func_965(8);
		__LIB_5__::func_103(1);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 64) || !__LIB_4__::func_947(uParam0))
	{
		__LIB_0__::func_267(0);
	}
	else
	{
		__LIB_0__::func_267(1);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!__LIB_4__::func_937(uParam0, 131072))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	}
	__LIB_1__::func_561(&(uParam0->f_13106));
	__LIB_2__::func_259(&(uParam0->f_13112));
	__LIB_5__::func_598(uParam0, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1));
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1024))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 32768))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)))
	{
		PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) - PED::_0x62DE46F061CAA468()));
	}
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	Var0 = { __LIB_5__::func_310(uParam0) };
	MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(&Var0);
	Global_43805 = -1;
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		__LIB_0__::func_7(&Global_1935630, 2097152);
	}
	else
	{
		__LIB_0__::func_8(&Global_1935630, 2097152);
	}
	__LIB_5__::func_472(uParam0);
	if (__LIB_4__::func_939(uParam0) == 25 && __LIB_0__::func_13(32768))
	{
		__LIB_5__::func_490(uParam0, 16);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 512))
	{
		__LIB_4__::func_587(1f, 0f, 0f, 0f);
	}
	else
	{
		__LIB_4__::func_680();
	}
}

float func_1685(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 324.3049f;
				case 1:
					return 310.4582f;
				case 2:
					return 328.3253f;
				case 3:
					return 290.6794f;
				case 4:
					return 329.1408f;
				case 5:
					return 109.7703f;
				case 6:
					return 117.7188f;
				case 7:
					return 335.7796f;
				case 8:
					return 323.7797f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 222.8609f;
				case 1:
					return 179.3893f;
				case 2:
					return 113.3904f;
				case 3:
					return 343.8569f;
				case 4:
					return 97.7797f;
				case 5:
					return 97.7797f;
				case 6:
					return 99.7797f;
				case 7:
					return 9.7797f;
				case 8:
					return 66.7f;
				case 9:
					return 289.7797f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 253.39f;
				case 1:
					return 100.3229f;
				case 2:
					return 356.3244f;
				case 3:
					return 126.3231f;
				case 4:
					return 117.6384f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 356.9232f;
				case 1:
					return 175.4363f;
				case 2:
					return 201.7917f;
				case 3:
					return 152.0499f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 31.6375f;
				case 1:
					return 32.9263f;
				case 2:
					return 25.7683f;
				case 3:
					return 16.8305f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 123.4637f;
				case 1:
					return 117.878f;
				case 2:
					return 125.71f;
				case 3:
					return 128.6922f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 270f;
				case 1:
					return 112f;
				case 2:
					return 22f;
				case 3:
					return 123.6085f;
				case 4:
					return 187.9996f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 116f;
				case 1:
					return 226.0003f;
			}
			break;
	}
	return 0f;
}

void func_1797(int iParam0)
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
	func_712(iParam0, 1, 1, -142743235, 1);
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
		func_712(uVar18[iVar36], 1, 1, -142743235, 1);
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
					__LIB_9__::func_2(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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

void func_1801(struct<6> Param0)
{
	if (!func_2273(Param0.f_4, 1))
	{
	}
	if (!func_2273(Param0, 1))
	{
	}
	if (!func_2273(Param0.f_2, 1))
	{
	}
	if (!func_2273(Param0.f_5, 1))
	{
	}
	if (!func_2273(Param0.f_3, 1))
	{
	}
	if (!func_2273(Param0.f_1, 1))
	{
	}
}

int func_1830(int iParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			Jump @9444; //curOff = 787
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			Jump @9444; //curOff = 1570
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			Jump @9444; //curOff = 1958
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			Jump @9444; //curOff = 2479
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			Jump @9444; //curOff = 2918
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			Jump @9444; //curOff = 3513
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			Jump @9444; //curOff = 4296
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::_DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			Jump @9444; //curOff = 4380
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9444; //curOff = 4471
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			Jump @9444; //curOff = 5582
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			Jump @9444; //curOff = 6025
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9444; //curOff = 6714
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9444; //curOff = 7286
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9444; //curOff = 7858
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9444; //curOff = 8172
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9444; //curOff = 8873
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			Global_1897952[iParam0 /*2*/].f_1 = iVar0;
			return iVar0;
		}
bool func_1831(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !__LIB_0__::func_181())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

struct<2> func_1851(int iParam0)
{
	struct<2> Var0;
	switch (iParam0)
	{
		case 0:
			return Var0;
		case 1:
			Var0 = "ODR3_UC_SWSTART";
			Var0.f_1 = 4;
			break;
		case 2:
			Var0 = "ODR3_UC_SW_LEFT";
			Var0.f_1 = 4;
			break;
		case 3:
			Var0 = "ODR3_UC_SW_RGHT";
			Var0.f_1 = 4;
			break;
		case 4:
			Var0 = "ODR3_UC_GRABF";
			Var0.f_1 = 4;
			break;
		case 5:
			Var0 = "ODR3_UC_HEAFILE";
			Var0.f_1 = 4;
			break;
		case 6:
			Var0 = "ODR3_UC_INSER";
			Var0.f_1 = 4;
			break;
		case 7:
			Var0 = "ODR3_UC_FTFIL";
			Var0.f_1 = 4;
			break;
		case 8:
			Var0 = "ODR3_UC_GOUL";
			Var0.f_1 = 4;
			break;
		case 9:
			Var0 = "ODR3_UC_GOUR";
			Var0.f_1 = 4;
			break;
		case 10:
			Var0 = "ODR3_UC_CAUTRAI";
			Var0.f_1 = 4;
			break;
		case 11:
			Var0 = "ODR3_UC_CAUTERZ";
			Var0.f_1 = 4;
			break;
		case 12:
			Var0 = "ODR3_UC_RECOVER";
			Var0.f_1 = 4;
			break;
		case 13:
			Var0 = "ODR3_B_OBSERVEP";
			Var0.f_1 = 4;
			break;
		case 14:
			Var0 = "ODR3_B_ARTWEAP";
			Var0.f_1 = 4;
			break;
		case 15:
			Var0 = "ODR3_B_ODRISC";
			Var0.f_1 = 4;
			break;
		case 16:
			Var0 = "CLP";
			Var0.f_1 = 4;
			break;
		case 17:
			Var0 = "ODR3_F_AHORDED";
			Var0.f_1 = 4;
			break;
		case 18:
			Var0 = "ODR3_F_DHORDED";
			Var0.f_1 = 4;
			break;
		case 19:
			Var0 = "ODR3_F_MHORDED";
			Var0.f_1 = 4;
			break;
		case 20:
			Var0 = "LAW_FAIL";
			Var0.f_1 = 4;
			break;
		case 21:
			Var0 = "ODR3_S1_MOUNT";
			Var0.f_1 = 0;
			break;
		case 24:
			Var0 = "ODR3_S1_RIDE";
			Var0.f_1 = 0;
			break;
		case 25:
			Var0 = "ODR3_S1_SETOFF";
			Var0.f_1 = 0;
			break;
		case 26:
			Var0 = "ODR3_S1_SEE_ODR";
			Var0.f_1 = 0;
			break;
		case 27:
			Var0 = "ODR3_S1_AFTRSEE";
			Var0.f_1 = 0;
			break;
		case 22:
			Var0 = "ODR3_S1_OBJ1";
			Var0.f_1 = 5;
			break;
		case 23:
			Var0 = "ODR3_S1_OBJ2";
			Var0.f_1 = 5;
			break;
		case 28:
			Var0 = "ODR3_F_ABNDMEET";
			Var0.f_1 = 4;
			break;
		case 33:
			Var0 = "ODR3_S2_OBJRET";
			Var0.f_1 = 5;
			break;
		case 29:
			Var0 = "ODR3_S2_OBJ1";
			Var0.f_1 = 5;
			break;
		case 30:
			Var0 = "ODR3_S2_OBJ2";
			Var0.f_1 = 5;
			break;
		case 31:
			Var0 = "ODR3_S2_APROMEE";
			Var0.f_1 = 0;
			break;
		case 32:
			Var0 = "ODR3_S2_GOAWAY";
			Var0.f_1 = 0;
			break;
		case 34:
			Var0 = "ODR3_S2_HLP_BNC";
			Var0.f_1 = 9;
			break;
		case 35:
			Var0 = "ODR3_S2HLPBNCPC";
			Var0.f_1 = 9;
			break;
		case 36:
			Var0 = "ODR3_S2_OBJ_BNC";
			Var0.f_1 = 5;
			break;
		case 38:
			Var0 = "ODR3_S3_OBJ_1";
			Var0.f_1 = 5;
			break;
		case 37:
			Var0 = "ODR3_S3_HLP_2";
			Var0.f_1 = 8;
			break;
		case 39:
			Var0 = "ODR3_RIDEWARTHR";
			Var0.f_1 = 0;
			break;
		case 40:
			Var0 = "ODR3_S5S6S7_OBJ";
			Var0.f_1 = 4;
			break;
		case 41:
			Var0 = "ODR3_S5_HLP_2";
			Var0.f_1 = 9;
			break;
		case 42:
			Var0 = "ODR3_UC_POURSHL";
			Var0.f_1 = 9;
			break;
		case 43:
			Var0 = "ODR3_UC_FTSHELL";
			Var0.f_1 = 4;
			break;
		case 44:
			Var0 = "ODR3_S7_TAKEDWN";
			Var0.f_1 = 4;
			break;
		case 45:
			Var0 = "ODR3_S8_OBJ_1";
			Var0.f_1 = 4;
			break;
		case 46:
			Var0 = "ODR3_S8_OBJ_2";
			Var0.f_1 = 4;
			break;
		case 47:
			Var0 = "ODR3_PASSDOOR";
			Var0.f_1 = 0;
			break;
		case 48:
			Var0 = "ODR3_S7_NOTICE1";
			Var0.f_1 = 0;
			break;
		case 49:
			Var0 = "ODR3_S7_NOTICE2";
			Var0.f_1 = 0;
			break;
		case 50:
			Var0 = "ODR3_NOTICE12";
			Var0.f_1 = 0;
			break;
		case 51:
			Var0 = "ODR3_NOTICE22";
			Var0.f_1 = 0;
			break;
		case 52:
			Var0 = "ODR3_MRODRS1";
			Var0.f_1 = 0;
			break;
		case 53:
			Var0 = "ODR3_MRODRS2";
			Var0.f_1 = 0;
			break;
		case 54:
			Var0 = "ODR3_MRODRS3";
			Var0.f_1 = 0;
			break;
		case 55:
			Var0 = "ODR3_MRODRS4";
			Var0.f_1 = 0;
			break;
		case 56:
			Var0 = "ODR3_SHOOTUT1";
			Var0.f_1 = 0;
			break;
		case 57:
			Var0 = "ODR3_SHOUTUT2";
			Var0.f_1 = 0;
			break;
		case 58:
			Var0 = "ODR3_SHOUTUT3";
			Var0.f_1 = 0;
			break;
		case 59:
			Var0 = "ODR3_SHOOTUT4";
			Var0.f_1 = 0;
			break;
		case 60:
			Var0 = "ODR3_CHASEOD1";
			Var0.f_1 = 0;
			break;
		case 61:
			Var0 = "ODR3_S8_INVESTI";
			Var0.f_1 = 0;
			break;
		case 62:
			Var0 = "ODR3_PASSOUTHM";
			Var0.f_1 = 1;
			break;
		case 63:
			Var0 = "ODR3_PASSOUTHF";
			Var0.f_1 = 1;
			break;
		case 64:
			Var0 = "ODR3_PASSOUTBRW";
			Var0.f_1 = 1;
			break;
		case 65:
			Var0 = "ODR3_S8_HLP1A";
			Var0.f_1 = 8;
			break;
		case 66:
			Var0 = "ODR3_S8_HLP1B";
			Var0.f_1 = 8;
			break;
		case 67:
			Var0 = "ODR3_S8_HLP2";
			Var0.f_1 = 7;
			break;
		case 68:
			Var0 = "ODR3_S8_HLP4";
			Var0.f_1 = 8;
			break;
		case 69:
			Var0 = "ODR3_S8_OBJ2";
			Var0.f_1 = 5;
			break;
		default:
			break;
	}
	return Var0;
}

bool func_1853(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	struct<8> Var10;
	iVar1 = __LIB_0__::func_271(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam2))
	{
		return false;
	}
	StringCopy(&cVar2, __LIB_0__::func_323(iParam1), 64);
	Var10 = { __LIB_0__::func_865(iParam1) };
	if (__LIB_6__::func_912(iVar1, PLAYER::PLAYER_PED_ID(), sParam2, iParam8))
	{
		StringConCat(&cVar2, "_CATCH_UP", 64);
	}
	else
	{
		StringConCat(&cVar2, "_RETURN", 64);
	}
	bVar0 = __LIB_11__::func_727(uParam0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &cVar2, &Var10, 1, sParam3, iParam4, fParam6, fParam7);
	if (__LIB_4__::func_938(uParam0) != 1 && __LIB_4__::func_937(uParam0, 64))
	{
		__LIB_10__::func_936(uParam0, iVar1, iParam9, bVar0, iParam5);
		__LIB_4__::func_969(uParam0, 64);
	}
	return bVar0;
}

int func_1859()
{
	if (!PED::DOES_GROUP_EXIST(iLocal_1179))
	{
		iLocal_1179 = PED::CREATE_GROUP(0);
	}
	if (!PED::DOES_GROUP_EXIST(iLocal_1179))
	{
		return 0;
	}
	PED::SET_GROUP_FORMATION(iLocal_1179, 10);
	PED::SET_PED_CONFIG_FLAG(Local_133[7 /*6*/], 279, true);
	PED::SET_PED_AS_GROUP_LEADER(Local_133[7 /*6*/], iLocal_1179, true);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_133[7 /*6*/], func_496(91), 0, 9226, -1, 0, 1, -1);
	PED::SET_PED_CONFIG_FLAG(Local_133[6 /*6*/], 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(Local_133[6 /*6*/], iLocal_1179);
	PED::_0x0E9E95FDEDCC9D35(Local_133[6 /*6*/], 1, 0);
	PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_133[7 /*6*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 3, 0);
	PED::_0x9BBEAF8B0C007F1E(Local_133[7 /*6*/], 0);
	PED::_0xC99F104BDF8C7F5A(Local_133[7 /*6*/], 0);
	PED::_0x7E5185B979706210(iLocal_1179, 2);
	PED::_0xA8A95CECB1906EA2(iLocal_1179, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[7 /*6*/], true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_133[6 /*6*/], false);
	return 1;
}

int func_1869(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if ((!Local_133[iVar0 /*6*/].f_2 == 0 && !Local_133[iVar0 /*6*/].f_2 == 33) && !Local_133[iVar0 /*6*/].f_2 == 12)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1870(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 1151693532;
	iVar1 = 980377200;
	iVar2 = 658028547;
	iVar3 = 2115003825;
	switch (iParam0)
	{
		case 16:
			*iParam1 = joaat("META_OUTFIT_WARM_WEATHER");
			break;
		case 17:
			*iParam1 = iVar2;
			break;
		case 18:
			*iParam1 = iVar3;
			break;
		case 19:
			*iParam1 = iVar0;
			break;
		case 24:
			*iParam1 = iVar1;
			break;
		case 25:
			*iParam1 = iVar0;
			break;
		case 26:
			*iParam1 = iVar2;
			break;
		case 27:
			*iParam1 = iVar3;
			break;
		case 32:
			*iParam1 = iVar3;
			break;
		case 33:
			*iParam1 = iVar2;
			break;
		case 34:
			*iParam1 = iVar0;
			break;
		case 36:
			*iParam1 = iVar1;
			break;
		default:
			return false;
	}
	return true;
}

bool func_1871(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(Local_133[iParam0 /*6*/].f_4, iParam1);
}

void func_1872(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(Local_133[iParam0 /*6*/].f_4), iParam1);
}

bool func_1873(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 54:
			iVar0 = 1;
			break;
		case 55:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_1874(int iParam0)
{
	switch (iParam0)
	{
		case 28:
			return false;
	}
	return true;
}

void func_1876(int iParam0, bool bParam1)
{
	ENTITY::SET_ENTITY_VISIBLE(Local_133[iParam0 /*6*/], bParam1);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_133[iParam0 /*6*/], !bParam1);
	ENTITY::SET_ENTITY_COLLISION(Local_133[iParam0 /*6*/], bParam1, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_133[iParam0 /*6*/], !bParam1);
	AUDIO::STOP_PED_SPEAKING(Local_133[iParam0 /*6*/], !bParam1);
	PED::SET_PED_CONFIG_FLAG(Local_133[iParam0 /*6*/], 277, !bParam1);
	if (bParam1)
	{
		ENTITY::SET_ENTITY_PROOFS(Local_133[iParam0 /*6*/], 0, false);
		func_1929(iParam0, 256);
	}
	else
	{
		ENTITY::SET_ENTITY_PROOFS(Local_133[iParam0 /*6*/], 11, false);
		func_1872(iParam0, 256);
	}
}

void func_1879(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_133[iParam0 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_133[iParam0 /*6*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_133[iParam0 /*6*/], 96, !bParam1);
		PED::SET_PED_CONFIG_FLAG(Local_133[iParam0 /*6*/], 250, !bParam1);
	}
}

Vector3 func_1883(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 672.5732f, -1234.247f, 43.4074f;
				case 1:
					return 682.02f, -1228.12f, 43.6715f;
				case 2:
					return 680.534f, -1227.45f, 44.4498f;
				case 3:
					return 679.802f, -1230.49f, 44.5812f;
				case 4:
					return 678.789f, -1228.96f, 44.5603f;
				case 5:
					return 667.667f, -1234.94f, 44.1192f;
				case 6:
					return 680.013f, -1242.69f, 43.9291f;
				case 7:
					return 683.276f, -1231.71f, 44.3614f;
				case 8:
					return 666.466f, -1239.67f, 44.1504f;
				case 9:
					return 677.073f, -1242.67f, 43.8215f;
				case 10:
					return 680.6657f, -1244.876f, 44.3406f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 437.1f, 96f, 111.3f;
				case 1:
					return 399.5179f, 40.1409f, 106.75f;
				case 2:
					return 406.694f, 38.0396f, 107.062f;
				case 3:
					return 438.6f, 86.7f, 111f;
				case 4:
					return 403.5562f, 45.1864f, 106.75f;
				case 5:
					return 407.368f, 39.7832f, 106.972f;
				case 6:
					return 477.6718f, 73.7941f, 136.5f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -867.8788f, -744.3757f, 59.5914f;
				case 1:
					return -857.987f, -748.7743f, 58.8414f;
				case 2:
					return -841.6077f, -756.4832f, 56.8414f;
				case 3:
					return -838.7634f, -759.152f, 56.5914f;
				case 4:
					return -840.3719f, -761.2056f, 56.3414f;
				case 5:
					return -842.449f, -762.8663f, 56.3414f;
				case 6:
					return -877.1341f, -757.0429f, 57.3414f;
				case 7:
					return -868.0475f, -747.4024f, 58.8414f;
				case 8:
					return -870.9148f, -743.6945f, 58.8606f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -835.9515f, -749.767f, 57.2203f;
				case 1:
					return -833.1505f, -722.6144f, 57.7203f;
				case 2:
					return -897.8591f, -705.3837f, 63.9703f;
				case 3:
					return -887.8927f, -767.7772f, 55.9703f;
				case 4:
					return -846.0225f, -783.2928f, 53.9703f;
				case 5:
					return -904.9898f, -744.7639f, 59.4703f;
				case 6:
					return -859.7021f, -702.1547f, 61.9703f;
				case 7:
					return -842.4374f, -705.6575f, 60.9703f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -804.7333f, -815.5803f, 51.9957f;
				case 1:
					return -726.3716f, -765.1877f, 49.7457f;
				case 2:
					return -1015.998f, -744.1983f, 61.4839f;
				case 3:
					return -1013.652f, -696.4531f, 66.1742f;
				case 4:
					return -775.8251f, -671.3945f, 51.5519f;
				case 5:
					return -832.3261f, -614.3356f, 58.9139f;
				case 6:
					return -1022.731f, -627.4735f, 74.2904f;
				case 7:
					return -1086.585f, -666.1123f, 75.6462f;
				case 8:
					return -1037.445f, -694.7358f, 69.0404f;
				case 9:
					return -830.1555f, -794.097f, 52.6167f;
				case 10:
					return -773.2299f, -809.0151f, 50.5404f;
				case 11:
					return -773.2299f, -809.0151f, 50.5404f;
				case 12:
					return -976.1211f, -735.1133f, 61.1167f;
				case 13:
					return -836.6229f, -592.222f, 57.5404f;
				case 14:
					return -836.6229f, -592.222f, 57.5404f;
				case 15:
					return -730.5837f, -724.9816f, 50.8667f;
				case 16:
					return -1060.263f, -611.4987f, 77.2904f;
				case 17:
					return -1060.263f, -611.4987f, 77.2904f;
				case 18:
					return -913.1984f, -636.9088f, 71.8667f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -884.5196f, -747.2363f, 59.4074f;
				case 1:
					return -879.4587f, -756.0763f, 57.3414f;
				case 2:
					return -904.2418f, -749.2427f, 58.3414f;
				case 3:
					return -889.1854f, -726.5909f, 60.3414f;
				case 4:
					return -858.2872f, -738.0914f, 58.8606f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 456.534f, -37.4861f, 111.743f;
				case 1:
					return 456.53f, -37.3336f, 112.513f;
				case 2:
					return 410.0617f, 29.9846f, 107.663f;
				case 3:
					return 444.871f, -15.8015f, 107.073f;
				case 4:
					return 451.582f, -20.0439f, 109.843f;
				case 5:
					return 444.871f, -15.8015f, 107.073f;
				case 6:
					return 460.965f, -36.164f, 112.024f;
				case 7:
					return 466.7276f, 65.0557f, 133.9557f;
				case 8:
					return 458.713f, 58.6641f, 134.11f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -870.0945f, -732.2553f, 59.8865f;
				case 1:
					return -871.9661f, -732.822f, 59.8865f;
				case 2:
					return -872.0495f, -731.8901f, 59.8865f;
				case 3:
					return -868.9015f, -744.537f, 58.6365f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -866.9973f, -749.7216f, 59.4862f;
				case 1:
					return -864.0646f, -736.2159f, 58.9234f;
				case 2:
					return -860.6783f, -734.7534f, 59.2138f;
				case 3:
					return -861.0672f, -735.6203f, 58.9364f;
				case 4:
					return -851.0608f, -737.6223f, 58.5719f;
				case 5:
					return -852.1584f, -738.7499f, 58.5719f;
				case 6:
					return -858.8465f, -749.4581f, 58.8606f;
				case 7:
					return -861.2175f, -749.3691f, 58.8606f;
				case 8:
					return -866.3159f, -743.594f, 59.1106f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -865.741f, -733.112f, 59.7295f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 671.6f, -1251.1f, 43.5f;
				case 1:
					return 732.2804f, -234.6356f, 127.0736f;
				case 2:
					return 735.0308f, -232.263f, 127.0648f;
				case 3:
					return 735.7983f, -228.5051f, 127.5959f;
				case 4:
					return 738.5989f, -226.814f, 126.8483f;
				case 5:
					return 692.7094f, -287.5682f, 124.8236f;
				case 6:
					return 497.7188f, -180.3172f, 140.2389f;
				case 7:
					return 611.4946f, -178.9245f, 142.9849f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_1885(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	iVar0 = func_2330(iParam0, vParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam4)
			{
				case 1:
					return 45;
				case 2:
					return 46;
			}
			break;
		case 2:
			switch (iParam4)
			{
				case 1:
					return 47;
				case 2:
					return 48;
			}
			break;
		case 3:
			switch (iParam4)
			{
				case 1:
					return 49;
				case 2:
					return 50;
			}
			break;
		case 4:
			switch (iParam4)
			{
				case 1:
					return 51;
				case 2:
					return 52;
			}
			break;
		case 5:
			switch (iParam4)
			{
				case 1:
					return 53;
				case 2:
					return 54;
			}
			break;
		case 6:
			switch (iParam4)
			{
				case 1:
					return 55;
				case 2:
					return 56;
			}
			break;
		case 7:
			switch (iParam4)
			{
				case 1:
					return 57;
				case 2:
					return 58;
			}
			break;
		case 8:
			switch (iParam4)
			{
				case 1:
					return 59;
				case 2:
					return 60;
			}
			break;
	}
	return 45;
}

struct<4> func_1887(bool bParam0, struct<4> Param1, struct<4> Param5)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param5;
}

void func_1892(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	vector3 vVar0;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	iVar8 = 1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::_0x608BC6A6AACD5036(&Var4, iParam0, iParam1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var4.f_3))
			{
				iVar3 = __LIB_6__::func_140(Var4.f_3);
				if (__LIB_0__::func_144(iVar3, 0))
				{
					if (iParam5 == 0)
					{
						PED::_0xED00D72F81CF7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (__LIB_0__::func_86(vVar0))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, 0f) };
							__LIB_0__::func_634(&vVar0, 50, 10, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Var4.f_3, vVar0, false, false, true, true);
					}
					func_2332(&iParam0, iVar3, &iVar8, 1, -142743235);
				}
				else if (ENTITY::IS_ENTITY_A_PED(Var4.f_3))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var4.f_3);
					if (PED::IS_PED_HUMAN(iVar9))
					{
						PED::_0xED00D72F81CF7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (__LIB_0__::func_86(vVar0))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, 0f) };
							__LIB_0__::func_634(&vVar0, 50, 10, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Var4.f_3, vVar0, false, PED::_IS_PED_HOGTIED(iVar9), true, true);
					}
				}
			}
		}
	}
}

char* func_1896(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig1_beaten@ig1_beaten";
			}
			else
			{
				return "pbl_Beaten";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig2_escape_shot@ig2_escape_shot_gang";
			}
			else
			{
				return "pbl_Gang_Conversation";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig2_escape_shot@ig2_escape_shot_arthur";
			}
			else
			{
				return "pbl_Arthur_Comes_To";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig2_escape_shot@ig2_escape_shot_arthur";
			}
			else
			{
				return "pbl_arthur_falls";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig2_escape_shot@ig2_escape_shot_arthur";
			}
			else
			{
				return "pbl_arthur_shot_point_blank_range";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig2_escape_shot@ig2_escape_shot_shooter";
			}
			else
			{
				return "pbl_React_to_Player_Escape";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig9_swing_escape@ig9_swing_escape";
			}
			else
			{
				return "pbl_swing_wakeup";
			}
			break;
		case 8:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig9_swing_escape@ig9_swing_escape";
			}
			else
			{
				return "pbl_swing_look_around";
			}
			break;
		case 9:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig9_swing_escape@ig9_swing_escape";
			}
			else
			{
				return "pbl_Swing_Escape";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig11_surgery_heat@ig11_surgery_heat";
			}
			else
			{
				return "pbl_Arthur_To_Table_HEAT_ENTER";
			}
			break;
		case 11:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig12_surgery_gouge@ig12_surgery_gouge";
			}
			else if (func_165(95))
			{
				return "pbl_Gouge_Finale_Success";
			}
			else
			{
				return "pbl_Heat_To_Gouge_Transition";
			}
			break;
		case 12:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig13_surgery_pour@ig13_surgery_pour";
			}
			else
			{
				return "pbl_Pour_Hover_Idle";
			}
			break;
		case 13:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig14_surgery_cauterize@ig14_surgery_cauterize";
			}
			else if (func_165(97))
			{
				return "pbl_Cauterize_React";
			}
			else
			{
				return "pbl_throw_cartridge_pickup_candle";
			}
			break;
		case 14:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig15_enemy_discover@ig15_enemy_discover";
			}
			else
			{
				return "Pbl_Search_Enemy_Discover";
			}
			break;
		case 15:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig15_enemy_discover@ig15_enemy_discover";
			}
			else
			{
				return "pbl_arthur_tackles_ped";
			}
			break;
		case 16:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig16_collect_weapons_undetected@ig16_collect_weapons_undetected";
			}
			else
			{
				return "pbl_Collect_Weapons_Undetected";
			}
			break;
		case 17:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig17_collect_weapons_under_fire@ig17_collect_weapons_under_fire";
			}
			else
			{
				return "pbl_Collect_Weapons_Under_Fire";
			}
			break;
		case 18:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig18_pass_out_on_horse@ig18_pass_out_on_horse";
			}
			else
			{
				return "pbl_Pass_Out_Front_Left";
			}
			break;
		case 19:
			if (bParam1)
			{
				return "script@story@odr3@ig@ig22_carry_to_basement@ig22_carry_to_basement";
			}
			else
			{
				return "pbl_carry_to_basement";
			}
			break;
		case 20:
			if (bParam1)
			{
				return "script@story@odr3@leadin@ext@odr3_ext_leadin";
			}
			else
			{
				return "pl_odr3_ext_leadin";
			}
			break;
		case 21:
			if (bParam1)
			{
				return "script@timelapse@buck_coyote@ODR3";
			}
			else
			{
				return "PBL_1";
			}
			break;
	}
	return "";
}

void func_1897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_2333(iParam0);
			break;
		case 1:
			func_2334(iParam0);
			break;
		case 2:
			func_2335(iParam0);
			break;
		case 3:
			func_2336(iParam0);
			break;
		case 4:
			func_2337(iParam0);
			break;
		case 5:
			func_2338(iParam0);
			break;
		case 7:
			func_2336(iParam0);
			break;
		case 8:
			func_2340(iParam0);
			break;
		case 9:
			func_2341(iParam0);
			break;
		case 10:
			func_2342(iParam0);
			break;
		case 11:
			func_2343(iParam0);
			break;
		case 12:
			func_2344(iParam0);
			break;
		case 13:
			func_2345(iParam0);
			break;
		case 14:
			func_2346(iParam0);
			break;
		case 15:
			func_2347(iParam0);
			break;
		case 16:
			func_2348(iParam0);
			break;
		case 17:
			func_2348(iParam0);
			break;
		case 18:
			func_2336(iParam0);
			break;
		case 19:
			func_2351(iParam0);
			break;
		case 20:
			func_2336(iParam0);
			break;
		case 21:
			func_2353(iParam0);
			break;
		default:
			break;
	}
}

float func_1898(int iParam0)
{
	switch (func_1361(iParam0))
	{
		case joaat("INPUT_MOVE_LR"):
			return ((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR")) / 2f) + 0.5f);
		case joaat("INPUT_MOVE_UD"):
			return ((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD")) / 2f) + 0.5f);
		case joaat("INPUT_MINIGAME_ACTION_UP"):
			return MISC::ABSF(PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_ACTION_UP")));
		case joaat("INPUT_LOOK_LR"):
			return ((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_LR")) / 2f) + 0.5f);
		case joaat("INPUT_LOOK_UP_ONLY"):
			return MISC::ABSF(PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_UP_ONLY")));
	}
	return 0f;
}

float func_1899(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = (MISC::GET_FRAME_TIME() * Local_1123[iParam0 /*6*/]);
	Local_1123[iParam0 /*6*/].f_3 = Local_1123[iParam0 /*6*/].f_2;
	fVar1 = (fParam1 - Local_1123[iParam0 /*6*/].f_3);
	fVar2 = (fVar1 - (2f * Local_1123[iParam0 /*6*/].f_1));
	Local_1123[iParam0 /*6*/].f_2 = (Local_1123[iParam0 /*6*/].f_2 + (Local_1123[iParam0 /*6*/].f_1 * fVar0));
	Local_1123[iParam0 /*6*/].f_1 = (Local_1123[iParam0 /*6*/].f_1 + (fVar2 * fVar0));
	if (Local_1123[iParam0 /*6*/].f_4 < Local_1123[iParam0 /*6*/].f_5)
	{
		if (Local_1123[iParam0 /*6*/].f_2 < Local_1123[iParam0 /*6*/].f_4)
		{
			Local_1123[iParam0 /*6*/].f_2 = Local_1123[iParam0 /*6*/].f_4;
			Local_1123[iParam0 /*6*/].f_1 = 0f;
			Local_1123[iParam0 /*6*/].f_3 = Local_1123[iParam0 /*6*/].f_2;
		}
		else if (Local_1123[iParam0 /*6*/].f_2 > Local_1123[iParam0 /*6*/].f_5)
		{
			Local_1123[iParam0 /*6*/].f_2 = Local_1123[iParam0 /*6*/].f_5;
			Local_1123[iParam0 /*6*/].f_1 = 0f;
			Local_1123[iParam0 /*6*/].f_3 = Local_1123[iParam0 /*6*/].f_2;
		}
	}
	return Local_1123[iParam0 /*6*/].f_2;
}

void func_1904()
{
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "rotation", fLocal_1256);
}

void func_1906(int iParam0)
{
	__LIB_4__::func_862(iParam0, func_1361(12));
	__LIB_4__::func_862(iParam0, func_1361(13));
	__LIB_4__::func_862(iParam0, func_1361(14));
	__LIB_1__::func_522(iParam0, 10, 1, 1);
	__LIB_1__::func_522(iParam0, 14, 1, 1);
	__LIB_1__::func_522(iParam0, 11, 1, 1);
}

void func_1907(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	struct<7> Var0;
	if (!CAM::DOES_CAM_EXIST(iLocal_1009[iParam0]))
	{
		return;
	}
	Var0 = { func_1379(iParam1) };
	CAM::SET_CAM_PARAMS(iLocal_1009[iParam0], Var0, Var0.f_3, Var0.f_6, BUILTIN::FLOOR((fParam2 * 1000f)), iParam4, iParam4, 2, iParam3, 0);
}

void func_1909(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_899(&(vLocal_792[32 /*3*/])))
	{
		if (__LIB_1__::func_583(&(vLocal_792[32 /*3*/])) >= 0.5f)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_937[1]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_937[1], false);
				__LIB_1__::func_561(&(vLocal_792[32 /*3*/]));
			}
		}
	}
	fVar0 = 0.25f;
	fVar1 = 0.75f;
	if (fParam0 < fVar0)
	{
		if (!Local_1235.f_1[1])
		{
			Local_1235.f_1[1] = 1;
			func_2357(1);
		}
	}
	else if (fParam0 > fVar1)
	{
		if (!Local_1235.f_1[2])
		{
			Local_1235.f_1[2] = 1;
			func_2357(2);
		}
	}
	else
	{
		Local_1235.f_1[2] = 0;
		Local_1235.f_1[2] = 0;
	}
	if (fParam1 < fVar0)
	{
		if (!Local_1235.f_1[4])
		{
			Local_1235.f_1[4] = 1;
			func_2357(4);
		}
	}
	else if (fParam1 > fVar1)
	{
		if (!Local_1235.f_1[3])
		{
			Local_1235.f_1[3] = 1;
			func_2357(3);
		}
	}
	else
	{
		Local_1235.f_1[4] = 0;
		Local_1235.f_1[3] = 0;
	}
	if (fParam2 < fVar0)
	{
		if (!Local_1235.f_1[5])
		{
			Local_1235.f_1[5] = 1;
			func_2357(5);
		}
	}
	else if (fParam2 > fVar1)
	{
		if (!Local_1235.f_1[6])
		{
			Local_1235.f_1[6] = 1;
			func_2357(6);
		}
	}
	else
	{
		Local_1235.f_1[5] = 0;
		Local_1235.f_1[6] = 0;
	}
}

void func_1910(int iParam0)
{
	if (!__LIB_0__::func_899(&(Local_1235.f_13)))
	{
		__LIB_4__::func_89(&(Local_1235.f_13), 0);
	}
	if (__LIB_1__::func_583(&(Local_1235.f_13)) >= 1f)
	{
		PAD::SET_PAD_SHAKE(0, 250, iParam0);
	}
}

void func_1911()
{
	iLocal_129 = __LIB_1__::func_877(func_1300(42), func_1361(16), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	__LIB_1__::func_522(iLocal_129, 10, 1, 1);
	__LIB_1__::func_522(iLocal_129, 14, 1, 1);
	__LIB_1__::func_522(iLocal_129, 11, 1, 1);
	__LIB_2__::func_369(iLocal_129, Local_941[13 /*2*/], 0, 1, -1);
}

char* func_1912(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "scr_odr3_blood_spurt";
		case 0:
			return "scr_odr3_pour_gunpowder";
		case 2:
			return "scr_odr3_surgery_gunpowder";
	}
	return "";
}

void func_1913(int iParam0, int iParam1, int iParam2, float fParam3)
{
	struct<7> Var0;
	struct<7> Var15;
	if (!fParam3 >= 0f && !fParam3 <= 1f)
	{
		return;
	}
	Var0 = { func_1379(iParam1) };
	Var15 = { func_1379(iParam2) };
	CAM::SET_CAM_COORD(iLocal_1009[iParam0], __LIB_1__::func_367(Var0, Var15, fParam3));
	CAM::SET_CAM_ROT(iLocal_1009[iParam0], __LIB_1__::func_367(Var0.f_3, Var15.f_3, fParam3), 2);
	CAM::SET_CAM_FOV(iLocal_1009[iParam0], __LIB_0__::func_667(Var0.f_6, Var15.f_6, fParam3));
}

void func_1914(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;
	bool bVar1;
	float fVar2;
	fVar2 = __LIB_0__::func_514(*fParam0 == 0f, fParam4, *fParam0);
	fVar0 = MISC::ABSF((*fParam1 - fVar2));
	bVar1 = fVar2 > *fParam1;
	fVar0 = (fVar0 * (__LIB_0__::func_514(bVar1, fParam2, fParam3) * MISC::GET_FRAME_TIME()));
	*fParam1 = (*fParam1 + __LIB_0__::func_514(bVar1, fVar0, -fVar0));
	*fParam1 = __LIB_0__::func_251(*fParam1, 0f, 1f);
	*fParam0 = __LIB_0__::func_251(*fParam0, 0f, 1f);
}

void func_1917(float fParam0, float fParam1, bool bParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	bool bVar1;
	if (bParam2)
	{
		*fParam0 = __LIB_0__::func_251((*fParam0 + fParam6), 0f, fParam5);
	}
	fVar0 = MISC::ABSF((*fParam1 - *fParam0));
	bVar1 = *fParam0 > *fParam1;
	fVar0 = (fVar0 * (__LIB_0__::func_514(bVar1, fParam3, fParam4) * MISC::GET_FRAME_TIME()));
	*fParam1 = (*fParam1 + __LIB_0__::func_514(bVar1, fVar0, -fVar0));
	if (!bParam2)
	{
		*fParam0 = (*fParam0 - (fParam7 * MISC::GET_FRAME_TIME()));
	}
	*fParam1 = __LIB_0__::func_251(*fParam1, fParam9, 1f);
	*fParam0 = __LIB_0__::func_251(*fParam0, fParam8, fParam5);
}

struct<7> func_1920(int iParam0)
{
	struct<7> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -863.7178f, -744.325f, 56.0024f };
			Var0.f_3 = 116f;
			Var0.f_6 = 5;
			Var0.f_5 = 2;
			Var0.f_4 = 1;
			break;
		case 1:
			Var0 = { -865.616f, -734.285f, 58.679f };
			Var0.f_3 = -150f;
			Var0.f_6 = 1;
			Var0.f_5 = 0;
			Var0.f_4 = 0;
			break;
		default:
			break;
	}
	return Var0;
}

void func_1921(int iParam0)
{
	iLocal_1265 = iParam0;
}

void func_1922()
{
	if (func_165(104))
	{
		return;
	}
	ENTITY::DETACH_ENTITY(Local_941[17 /*2*/], true, true);
	ENTITY::SET_ENTITY_DYNAMIC(Local_941[17 /*2*/], true);
	PHYSICS::ACTIVATE_PHYSICS(Local_941[17 /*2*/]);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_941[17 /*2*/], Global_35, false);
	func_456(104);
}

void func_1923(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_133[iVar0 /*6*/]))
		{
			__LIB_2__::func_698(Local_133[iVar0 /*6*/], fParam2, fParam3, fParam4, fParam5, fParam6);
		}
		iVar0++;
	}
}

void func_1925(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_1418(60, 17))
	{
		return;
	}
	if (!__LIB_0__::func_899(&(vLocal_792[37 /*3*/])))
	{
		return;
	}
	if (!__LIB_1__::func_583(&(vLocal_792[37 /*3*/])) >= 12f)
	{
		return;
	}
	if (!iLocal_1120 == 0)
	{
		return;
	}
	if (__LIB_5__::func_236(1) || __LIB_0__::func_481(1))
	{
		return;
	}
	if (func_165(130))
	{
		return;
	}
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iLocal_1267))
	{
		iLocal_1267 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::_CLEAR_ITEMSET(iLocal_1267);
	iVar1 = 33;
	while (iVar1 <= 46)
	{
		if (Local_133[iVar1 /*6*/].f_2 == 8 || Local_133[iVar1 /*6*/].f_2 == 9)
		{
			ITEMSET::ADD_TO_ITEMSET(Local_133[iVar1 /*6*/], iLocal_1267);
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, ITEMSET::GET_ITEMSET_SIZE(iLocal_1267));
	iVar3 = -1;
	iVar1 = 33;
	while (iVar1 <= 46)
	{
		if (MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iLocal_1267)) == Local_133[iVar1 /*6*/])
		{
			iVar3 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (!iVar3 == -1)
	{
		switch (iVar3)
		{
			case 33:
			case 39:
				__LIB_5__::func_106(uParam0, Local_133[iVar1 /*6*/], "ODR_PED1", 0);
				func_1313(59);
				break;
			case 34:
			case 40:
				__LIB_5__::func_106(uParam0, Local_133[iVar1 /*6*/], "ODR_PED2", 0);
				func_1313(56);
				break;
			case 35:
			case 41:
				__LIB_5__::func_106(uParam0, Local_133[iVar1 /*6*/], "ODR_PED3", 0);
				func_1313(57);
				break;
			case 36:
			case 42:
				__LIB_5__::func_106(uParam0, Local_133[iVar1 /*6*/], "ODR_PED8", 0);
				func_1313(58);
				break;
		}
		__LIB_2__::func_259(&(vLocal_792[37 /*3*/]));
	}
	ITEMSET::DESTROY_ITEMSET(iLocal_1267);
}

void func_1926(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (iLocal_1301 < iParam0 || iLocal_1301 > iParam1)
		{
			iLocal_1301 = iParam0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_133[iLocal_1301 /*6*/]))
		{
			if (PED::_0x7F9B9791D4CB71F6(Local_133[iLocal_1301 /*6*/], Global_35, 1, 0) == 1)
			{
				func_1872(iLocal_1301, 2);
			}
			else
			{
				func_1929(iLocal_1301, 2);
			}
		}
		iLocal_1301++;
		iVar0++;
	}
}

bool func_1927(int iParam0)
{
	int iVar0;
	if (PED::IS_PED_SHOOTING(Local_133[iParam0 /*6*/]))
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Local_133[iParam0 /*6*/], &iVar0, true, 0, false);
		if (!(WEAPON::_0x5809DBCA0A37C82B(iVar0) || WEAPON::_0xEA522F991E120D45(iVar0)) && !iVar0 == joaat("WEAPON_UNARMED"))
		{
			return true;
		}
	}
	return false;
}

bool func_1928(int iParam0)
{
	return (iParam0 >= 33 && iParam0 <= 36);
}

void func_1929(int iParam0, int iParam1)
{
	__LIB_0__::func_516(&(Local_133[iParam0 /*6*/].f_4), iParam1);
}

void func_1930(int iParam0)
{
	switch (iParam0)
	{
		case 34:
			func_1941(0);
			break;
	}
}

bool func_1931(int iParam0)
{
	if (func_1943(iParam0) || func_1932(iParam0))
	{
		return true;
	}
	else if (func_1928(iParam0) || func_1933(iParam0))
	{
		return false;
	}
	return false;
}

bool func_1932(int iParam0)
{
	return (iParam0 >= 39 && iParam0 <= 43);
}

bool func_1933(int iParam0)
{
	return (iParam0 >= 44 && iParam0 <= 46);
}

bool func_1934(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!Local_1307[iLocal_1324 /*8*/].f_6 == 6)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_1307[iLocal_1324 /*8*/].f_7))
	{
		return false;
	}
	iVar0 = VEHICLE::_0x635423D55CA84FC8(Local_1307[iLocal_1324 /*8*/]);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(Local_1307[iLocal_1324 /*8*/].f_7, iVar2);
		if (__LIB_0__::func_94(iVar1, vParam0, 1) <= fParam3)
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_1935(int iParam0)
{
	if (((iParam0 == 8 || iParam0 == 9) || iParam0 == 6) || iParam0 == 7)
	{
		return false;
	}
	return true;
}

bool func_1936(int iParam0)
{
	if ((((((iParam0 == 30 || iParam0 == 31) || iParam0 == 16) || iParam0 == 17) || iParam0 == 41) || iParam0 == 42) || iParam0 == 43)
	{
		return true;
	}
	return false;
}

bool func_1937(int iParam0)
{
	switch (iParam0)
	{
		case 16:
		case 17:
		case 30:
		case 31:
		case 40:
		case 41:
			return true;
	}
	return false;
}

bool func_1939(int iParam0)
{
	switch (iParam0)
	{
		case 16:
		case 17:
		case 30:
		case 31:
		case 40:
		case 41:
		case 42:
		case 43:
			return true;
	}
	return false;
}

int func_1940(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (!func_165(122))
	{
		return 0;
	}
	if (func_1871(iParam0, 2))
	{
		func_1872(iParam0, 32768);
		return 32768;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_133[iParam0 /*6*/]))
	{
		func_1872(iParam0, 65536);
		return 65536;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_133[iParam0 /*6*/], Global_35, 1, 1))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		iVar1 = -1;
		if (func_1931(iParam0))
		{
			iVar1 = func_1308(iParam0);
		}
		if (!iVar1 == -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_133[func_1308(iParam0) /*6*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_133[func_1308(iParam0) /*6*/], Global_35, 1, 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		func_1872(iParam0, 131072);
		return 131072;
	}
	if (iParam0 == 33)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89.f_7, true, 0))
		{
			func_1872(iParam0, 262144);
			return 262144;
		}
	}
	if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_133[iParam0 /*6*/], true, false), iLocal_781[9], 2f, true))
	{
		func_1872(iParam0, 524288);
		return 524288;
	}
	if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_133[iParam0 /*6*/], true, false), joaat("WEAPON_THROWN_MOLOTOV"), 30f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_133[iParam0 /*6*/], true, false), joaat("WEAPON_THROWN_DYNAMITE"), 30f, true))
	{
		func_1872(iParam0, 16777216);
		return 16777216;
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_133[iParam0 /*6*/], true, false), 10f, false))
	{
		func_1872(iParam0, 1048576);
		return 1048576;
	}
	if (func_1871(iParam0, 16))
	{
		iVar2 = 33;
		while (iVar2 <= 53)
		{
			if (iVar2 == iParam0)
			{
			}
			else
			{
				if (func_1871(iVar2, 8))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_133[iParam0 /*6*/], true, false), ENTITY::GET_ENTITY_COORDS(Local_133[iVar2 /*6*/], false, false), true) <= 30f)
					{
						func_1872(iParam0, 2097152);
						return 2097152;
					}
				}
				if (Local_133[iVar2 /*6*/].f_2 == 9 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_133[iParam0 /*6*/], true, false), ENTITY::GET_ENTITY_COORDS(Local_133[iVar2 /*6*/], true, false), true) < 20f)
				{
					func_1872(iParam0, 4194304);
					return 4194304;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

void func_1941(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		TASK::TASK_CARRIABLE(Local_941[19 /*2*/], iLocal_1302, Local_133[34 /*6*/], 0, 0);
	}
	else
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Local_133[34 /*6*/]);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::_0xED00D72F81CF7278(iVar0, 0, 0);
		}
	}
}

bool func_1943(int iParam0)
{
	return (iParam0 >= 37 && iParam0 <= 38);
}

bool func_1944(int iParam0, bool bParam1)
{
	if (func_165(0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 33:
		case 34:
			if (bParam1)
			{
				__LIB_4__::func_7(Local_133[iParam0 /*6*/], iLocal_781[7], -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				func_456(0);
				return true;
			}
			else
			{
				return true;
			}
			break;
		case 35:
		case 36:
			if (bParam1)
			{
				__LIB_4__::func_7(Local_133[iParam0 /*6*/], iLocal_781[7], -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				func_456(0);
				return true;
			}
			else
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_133[iParam0 /*6*/], iLocal_781[3], 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_133[iParam0 /*6*/], iLocal_781[3], true, 0, false, false);
				func_456(0);
				return true;
			}
			break;
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			if (bParam1)
			{
				__LIB_4__::func_7(Local_133[iParam0 /*6*/], iLocal_781[7], -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				func_456(0);
				return true;
			}
			else
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_133[iParam0 /*6*/], iLocal_781[3], -1, true, false, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
				func_456(0);
				return true;
			}
			break;
		case 44:
		case 45:
		case 46:
			if (bParam1)
			{
				__LIB_4__::func_7(Local_133[iParam0 /*6*/], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				func_456(0);
				return true;
			}
			else
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

void func_1945(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	func_1355();
	switch (iParam0)
	{
		case 33:
			TASK::TASK_LOOK_AT_COORD(0, -879f, -753f, 60f, 5000, 48, 51, 1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_845(6, 1), 1f, 20000, 0.25f, 512, func_1297(6, 1));
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), -1, true, 0, -1f, false);
			break;
		case 34:
			if (!func_165(105))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -873.464f, -741.401f, 58.875f, 1f, 40000, (0.25f * 2f), 65, 40000f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -864f, -736.6f, 59.1f, 1f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_941[19 /*2*/], func_1362(0), 1f, 1);
				TASK::TASK_ACHIEVE_HEADING(0, 21.9f, 0);
				func_1428(0, 77, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, -1, 0);
				func_1428(0, 78, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, -1, 0);
				func_1428(0, 79, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, -1, 0);
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_941[19 /*2*/]);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(8, 3), 1f, 40000, 0.25f, 0, func_1580(8, 3));
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_941[19 /*2*/], func_1362(0), 1f, 1);
				TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SMOKE"), 10000, false, 0, -1f, false);
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_941[19 /*2*/]);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(8, 4), 1f, 40000, 0.25f, 0, func_1580(8, 4));
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_941[19 /*2*/], func_1362(0), 1f, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(8, 5), 1f, 40000, 0.25f, 0, func_1580(8, 5));
				TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING"), 10000, true, 0, -1f, false);
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_941[19 /*2*/]);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(8, 6), 1f, 40000, 0.25f, 0, func_1580(8, 6));
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_941[19 /*2*/], func_1362(0), 1f, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(8, 7), 1f, 40000, 0.25f, 0, func_1580(8, 7));
				TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_PEE"), 10000, true, 0, -1f, false);
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_941[19 /*2*/]);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(8, 0), 1f, 40000, 0.25f, 1, func_1580(8, 0));
			}
			break;
		case 35:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(5, 1), 1f, 40000, 0.25f, 0, func_1580(5, 1));
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), 10000, true, 0, -1f, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(5, 2), 1f, 40000, 0.25f, 0, func_1580(5, 2));
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SMOKE"), 10000, true, 0, -1f, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(5, 3), 1f, 40000, 0.25f, 0, func_1580(5, 3));
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SMOKE"), 10000, true, 0, -1f, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(5, 0), 1f, 40000, 0.25f, 0, func_1580(5, 0));
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SMOKE"), 10000, true, 0, -1f, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_780, true);
			break;
		case 36:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -857.8242f, -748.667f, 59.6888f, 1f, 40000, 0.25f, 0, 303.9f);
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_CROUCH_INSPECT"), 5000, true, 0, -1f, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(2, 2), 1f, 40000, 0.25f, 0, func_1580(2, 2));
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_GUARD_LAZY"), 5000, true, 0, -1f, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(2, 3), 1f, 40000, 0.25f, 0, -110f);
			TASK::TASK_STAND_STILL(0, 5000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(2, 4), 1f, 40000, 0.25f, 0, func_1580(2, 4));
			TASK::TASK_STAND_STILL(0, 5000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(2, 5), 1f, 40000, 0.25f, 0, func_1580(2, 5));
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_PEE"), 5000, true, 0, -1f, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(2, 6), 1f, 40000, 0.25f, 0, func_1580(2, 6));
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), 10000, true, 0, -1f, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1336(2, 7), 1f, 40000, 0.25f, 0, func_1580(2, 7));
			TASK::TASK_STAND_STILL(0, 5000);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_780, true);
			break;
		case 37:
		case 38:
			vVar0 = { func_2386(iParam0, 0, 7) };
			TASK::TASK_WANDER_IN_AREA(0, vVar0, 30f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			break;
		case 39:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 3, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 4, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 5, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 6, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 5, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 4, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 3, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 7, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_780, true);
			break;
		case 40:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 3, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 4, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 5, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 6, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 5, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 4, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			break;
		case 41:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 3, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 4, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 5, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 6, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 5, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 4, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_780, true);
			break;
		case 42:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 3, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 4, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 5, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 6, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 5, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 4, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 3, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 0, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_780, true);
			break;
		case 43:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 3, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 4, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 5, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 6, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_2386(iParam0, 7, 7), 1.001f, -1, 5f, iLocal_1326, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_780, true);
			break;
		case 44:
		case 45:
		case 46:
			vVar3 = { func_2386(iParam0, 3, 7) };
			fVar6 = func_2387(iParam0, 3, 7);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, 0.25f, 0, fVar6);
			TASK::TASK_AIM_AT_COORD(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 0f, 10f, 0f), 4000, 0, 0);
			vVar3 = { func_2386(iParam0, 4, 7) };
			fVar6 = func_2387(iParam0, 4, 7);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, 0.25f, 0, fVar6);
			TASK::TASK_AIM_AT_COORD(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 0f, 10f, 0f), 2000, 0, 0);
			vVar3 = { func_2386(iParam0, 5, 7) };
			fVar6 = func_2387(iParam0, 5, 7);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, 0.25f, 0, fVar6);
			TASK::TASK_AIM_AT_COORD(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 0f, 10f, 0f), 5000, 0, 0);
			vVar3 = { func_2386(iParam0, 6, 7) };
			fVar6 = func_2387(iParam0, 6, 7);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, 0.25f, 0, fVar6);
			TASK::TASK_AIM_AT_COORD(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 0f, 10f, 0f), 3000, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_780, true);
			break;
		default:
			break;
	}
	func_1356(Local_133[iParam0 /*6*/], 0);
}

int func_1946(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 55)
	{
		if (Local_133[iVar0 /*6*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1947(int iParam0, int iParam1)
{
	vector3 vVar0;
	if (iParam1 == -1 || !ENTITY::DOES_ENTITY_EXIST(Local_133[iParam1 /*6*/]))
	{
		func_1355();
		TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(Local_133[iParam0 /*6*/], true, false), 10f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		func_1356(Local_133[iParam0 /*6*/], 0);
	}
	else
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_133[iParam1 /*6*/], 1f, 0f, 0f) };
		func_1355();
		if (PED::IS_PED_ON_MOUNT(Local_133[iParam0 /*6*/]))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 2f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_133[iParam1 /*6*/], 0, -1f, -1f, -1f);
		if (!func_1871(iParam1, 128))
		{
			TASK::TASK_LOOT_ENTITY(0, Local_133[iParam1 /*6*/]);
			func_1872(iParam1, 128);
		}
		else
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_133[iParam1 /*6*/], MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000), -1f, -1f, -1f);
		}
		if (func_1931(iParam0) && !ENTITY::IS_ENTITY_DEAD(Local_133[func_1308(iParam0) /*6*/]))
		{
			TASK::TASK_MOUNT_ANIMAL(0, Local_133[func_1308(iParam0) /*6*/], 20000, -1, 2f, 1, 0, 0);
		}
		TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(Local_133[iParam1 /*6*/], true, false), 10f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		func_1356(Local_133[iParam0 /*6*/], 0);
	}
}

void func_1950(int iParam0, float fParam1)
{
	int iVar0;
	iVar0 = 33;
	while (iVar0 <= 36)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (func_1939(Local_133[iVar0 /*6*/].f_2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_133[iVar0 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_133[iVar0 /*6*/]))
			{
				if (__LIB_0__::func_665(Local_133[iParam0 /*6*/], Local_133[iVar0 /*6*/], 1, 1) < fParam1)
				{
					func_1872(iVar0, 8388608);
					func_943(iVar0, 6);
				}
			}
		}
		iVar0++;
	}
}

void func_1953()
{
	vector3 vVar0;
	float fVar20;
	bool bVar21;
	if (!Local_1371[17 /*5*/].f_1 == 7)
	{
		return;
	}
	vVar0.f_8 = -1082130432;
	fVar20 = ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1371[17 /*5*/]);
	vVar0.f_6 = iLocal_781[7];
	vVar0.f_7 = 0f;
	vVar0.f_12 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 1;
	vVar0.f_15 = 1;
	vVar0.f_18 = 1;
	if (!func_165(110))
	{
		if (fVar20 >= 0.1f)
		{
			vVar0.f_3 = { -866.2f, -732.5f, 59.8f };
			bVar21 = true;
			func_456(110);
		}
	}
	else if (!func_165(111))
	{
		if (fVar20 >= 0.5f)
		{
			vVar0.f_3 = { 866.1f, -732.5f, 59.8f };
			bVar21 = true;
			func_456(111);
		}
	}
	else if (!func_165(112))
	{
		if (fVar20 >= 0.7f)
		{
			vVar0.f_3 = { 866f, -732.4f, 59.7f };
			bVar21 = true;
			func_456(112);
		}
	}
	else if (!func_165(113))
	{
		if (fVar20 >= 0.8f)
		{
			vVar0.f_3 = { -866.7f, -732.6f, 59.7f };
			bVar21 = true;
			func_456(113);
		}
	}
	if (bVar21)
	{
		vVar0 = { -864.3f, -739.8f, 60.3f };
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&vVar0);
	}
}

void func_1959()
{
	vector3 vVar0;
	vVar0.x = (vLocal_1334.x * func_1899(0, PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_LR"))));
	vVar0.f_1 = vLocal_1334.y;
	vVar0.f_2 = (vLocal_1334.z * func_1899(1, -PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_UD"))));
	CAM::POINT_CAM_AT_COORD(iLocal_1009[4], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_941[18 /*2*/], vVar0));
}

bool func_1961(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 1;
	bVar1 = __LIB_6__::func_389();
	iVar2 = __LIB_5__::func_864(iParam0);
	iVar3 = 0;
	while (iVar3 < 27)
	{
		if (!__LIB_0__::func_287(iVar3, 4, 1))
		{
			if (__LIB_6__::func_159(iVar3))
			{
				iVar4 = 0;
				if (bVar1 && __LIB_0__::func_273(iVar3, 32768, 1))
				{
					iVar4 = 1;
				}
				if (!__LIB_6__::func_183(iVar3, iVar4, iVar2, 0, bParam1))
				{
					iVar0 = 0;
				}
				else if (bParam1 && !__LIB_0__::func_699(iVar3))
				{
					if (func_1526(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
					{
						__LIB_0__::func_288(iVar3, 4, 1);
					}
				}
				else
				{
					__LIB_0__::func_288(iVar3, 4, 1);
				}
			}
			else
			{
				if (((__LIB_0__::func_903(iVar3) && !__LIB_0__::func_699(iVar3)) && !__LIB_1__::func_217(iVar3)) && iVar3 != Global_1357549.f_1497)
				{
					__LIB_6__::func_164(iVar3, 0, 0, 0, 0);
				}
				__LIB_0__::func_288(iVar3, 4, 1);
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_1962(int iParam0)
{
	switch (iParam0)
	{
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
			return -922193456;
	}
	return 0;
}

char* func_1963(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@cme@DST3_CME_SHOT1_srl";
		case 1:
			return "script@cme@DST3_CME_SHOT2_srl";
		case 2:
			return "script@cme@DST3_CME_SHOT5_srl";
	}
	return "";
}

char* func_1964(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_0__::func_196(bParam1, "DST3_SHOT2", "DST3_SHOT2_CAM");
		case 1:
			return __LIB_0__::func_196(bParam1, "DST3_SHOT6", "DST3_SHOT6_CAM");
		case 2:
			return __LIB_0__::func_196(bParam1, "DST3_SHOT4", "DST3_SHOT4_CAM");
	}
	return "";
}

Vector3 func_1965(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 443.2f, -148.7f, 127.5f;
		case 1:
			return 699.1f, -530.4f, 72f;
		case 2:
			return 680.7f, -1168.7f, 48.7f;
	}
	return 0f, 0f, 0f;
}

int func_1966(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return CAM::_0xEA113BF9B0C0C5D7(func_1438(6), func_1964(0, 1), 5);
		case 1:
			return CAM::_0xEA113BF9B0C0C5D7(func_1438(6), func_1964(1, 1), 5);
		case 2:
			return CAM::_0xEA113BF9B0C0C5D7(func_1438(6), func_1964(2, 1), 5);
	}
	return 0;
}

bool func_1967(int iParam0, vector3 vParam1, int iParam4)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	bVar0 = STREAMING::IS_SRL_LOADED();
	iVar1 = CAM::_0x465F04F68AD38197(func_1438(6), func_1964(iParam0, 1), 5);
	if (bVar0 == 0)
	{
		if (__LIB_0__::func_899(&(vLocal_792[47 /*3*/])))
		{
			if (__LIB_1__::func_592(&(vLocal_792[47 /*3*/])) > (iVar1 - 2000))
			{
				bVar0 = true;
			}
		}
	}
	uVar2 = AUDIO::_0xFFE9C53DEEA3DB0B(iParam4, MISC::GET_HASH_KEY(func_1964(iParam0, 0)), vParam1, bVar0, iVar1);
	return uVar2;
}

int func_1975(int iParam0, int iParam1)
{
	var uVar0;
	return func_2406(&uVar0, iParam0, iParam1);
}

void func_1998(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_3__::func_358(__LIB_4__::func_998(uParam0)))
	{
		__LIB_5__::func_25(uParam0);
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
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		func_2430(uParam0, iParam1, 429673, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!__LIB_4__::func_610(uParam0->f_5421, iParam1))
	{
		__LIB_4__::func_999(uParam0->f_5421, iParam1);
	}
	DECORATOR::DECOR_SET_INT(iParam1, __LIB_4__::func_611(), iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam1, false);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 10);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 11);
}

struct<16> func_2026(int iParam0)
{
	struct<16> Var0;
	Var0 = { 0f, 0f, 0f };
	Var0.f_12 = 50f;
	switch (iParam0)
	{
		case 0:
			Var0 = { -662.0871f, 1941.715f, 283.2546f };
			Var0.f_3 = { 10.7841f, 0f, 123.6535f };
			break;
		case 14:
			Var0 = { -233.8414f, 700.0875f, 119.3323f };
			Var0.f_3 = { 12.8748f, 0f, -173.3047f };
			break;
		case 16:
			Var0 = { 830.1321f, -295.2338f, 97.5959f };
			Var0.f_3 = { 18.3589f, 0f, -101.0821f };
			break;
		case 26:
			Var0 = { 1038.921f, -1770.922f, 59.7985f };
			Var0.f_3 = { 3.1623f, 0f, 65.4982f };
			break;
		case 33:
			Var0 = { 2653.284f, -1274.411f, 58.6377f };
			Var0.f_3 = { 43.34f, 0f, -154.5395f };
			break;
		case 28:
			Var0 = { 2398.713f, -1207.737f, 53.7741f };
			Var0.f_3 = { 20.3272f, 0f, 125.8611f };
			Jump @483; //curOff = 324
			Var0 = { 2615.528f, -1028.211f, 54.2337f };
			Var0.f_3 = { 8.9332f, 0f, 135.6429f };
			Jump @483; //curOff = 363
			Var0 = { 2612.871f, -1277.661f, 64.2123f };
			Var0.f_3 = { 19.8571f, 0f, 133.3145f };
			Jump @483; //curOff = 402
			Var0 = { 3923.916f, -3192.353f, 60.3056f };
			Var0.f_3 = { 5.1463f, 0f, 107.0246f };
			Jump @483; //curOff = 441
			Var0 = { 2895.34f, 1402.235f, 71.9482f };
			Var0.f_3 = { 18.5925f, 0f, 104.3773f };
			Var0.f_6 = { Var0 };
			Var0.f_9 = { Var0.f_3 };
			return Var0;
		}
bool func_2027(int iParam0, int iParam1)
{
	return __LIB_0__::func_252(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

struct<4> func_2098(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_1883(iParam0, iParam1) };
	Var0.f_3 = func_2100(iParam0, iParam1);
	return Var0;
}

int func_2099(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10, var uParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_2523(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, uParam9, uParam10, uParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

float func_2100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 4:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 0f;
				case 7:
					return 0f;
				case 8:
					return 0f;
				case 9:
					return 0f;
				case 10:
					return 186f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 165f;
				case 1:
					return 228.8488f;
				case 2:
					return -144.704f;
				case 3:
					return 145f;
				case 4:
					return 230.8488f;
				case 5:
					return -151.5941f;
				case 6:
					return 440.8488f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 333.5561f;
				case 1:
					return 379.5561f;
				case 2:
					return 257.5561f;
				case 3:
					return 381.5561f;
				case 4:
					return 259.5561f;
				case 5:
					return 253.5561f;
				case 6:
					return 149.5561f;
				case 7:
					return 471.5561f;
				case 8:
					return 333.5561f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 51.0824f;
				case 1:
					return 103.0824f;
				case 2:
					return 221.0824f;
				case 3:
					return 325.0824f;
				case 4:
					return 375.0824f;
				case 5:
					return 267.0824f;
				case 6:
					return 181.0824f;
				case 7:
					return 165.0824f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 34f;
				case 1:
					return 76f;
				case 2:
					return -64f;
				case 3:
					return -114f;
				case 4:
					return 136f;
				case 5:
					return 170f;
				case 6:
					return -128f;
				case 7:
					return -94f;
				case 8:
					return -134f;
				case 9:
					return 70f;
				case 10:
					return 90f;
				case 11:
					return 90f;
				case 12:
					return -118f;
				case 13:
					return -158f;
				case 14:
					return -158f;
				case 15:
					return 24f;
				case 16:
					return -116f;
				case 17:
					return -116f;
				case 18:
					return -272f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 483.5561f;
				case 1:
					return 511.5561f;
				case 2:
					return 483.5561f;
				case 3:
					return 437.5561f;
				case 4:
					return 15.5561f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2.0608f;
				case 1:
					return 1.9701f;
				case 2:
					return 0.06f;
				case 3:
					return 58.9554f;
				case 4:
					return 70.0612f;
				case 5:
					return 58.9554f;
				case 6:
					return 2.0321f;
				case 7:
					return 2.0321f;
				case 8:
					return 125.9404f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 471.5561f;
				case 1:
					return 455.5561f;
				case 2:
					return 371.5561f;
				case 3:
					return 347.5561f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 381.5561f;
				case 1:
					return 287.5561f;
				case 2:
					return 291.5561f;
				case 3:
					return 245.5561f;
				case 4:
					return 263.5561f;
				case 5:
					return 289.5561f;
				case 6:
					return 375.5561f;
				case 7:
					return 381.5561f;
				case 8:
					return 381.5561f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 18.4284f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 98.8f;
				case 1:
					return 145.5f;
				case 2:
					return 146f;
				case 3:
					return 142f;
				case 4:
					return 146f;
				case 5:
					return 146f;
				case 6:
					return 0f;
				case 7:
					return 0f;
			}
			break;
	}
	return 0f;
}

int func_2101(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = __LIB_0__::func_41(iParam0);
	iVar2 = __LIB_0__::func_42(iParam0);
	iVar3 = __LIB_0__::func_43(iParam0);
	while (!iVar3 == __LIB_0__::func_43(iParam1))
	{
		if (iVar3 == 60)
		{
			iVar3 = 0;
		}
		if (iVar3 == __LIB_0__::func_43(iParam1))
		{
		}
		else
		{
			iVar3++;
			iVar0++;
		}
	}
	while (!iVar2 == __LIB_0__::func_42(iParam1))
	{
		if (iVar2 == 60)
		{
			iVar2 = 0;
		}
		if (iVar2 == __LIB_0__::func_42(iParam1))
		{
		}
		else
		{
			iVar2++;
			iVar0 += 60;
		}
	}
	while (!iVar1 == __LIB_0__::func_41(iParam1))
	{
		if (iVar1 == 24)
		{
			iVar1 = 0;
			iVar0 = (iVar0 - 3600);
			if (iVar1 == __LIB_0__::func_41(iParam1))
			{
			}
			else
			{
				iVar1++;
				iVar0 += 3600;
			}
			return iVar0;
		}
	}
}

void func_2105(float fParam0)
{
	float fVar0;
	if (fParam0 < 0f)
	{
		fParam0 = 0f;
	}
	if (fParam0 > 1f)
	{
		fParam0 = 1f;
	}
	fVar0 = __LIB_0__::func_667(0.1f, 1f, fParam0);
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fVar0);
	}
	else
	{
		CAM::SHAKE_GAMEPLAY_CAM(&cLocal_1166, fVar0);
	}
}

void func_2117(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26)
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4096))
	{
		if (__LIB_4__::func_948(uParam0, 4) && !__LIB_4__::func_937(uParam0, 8))
		{
			if (!Global_1935630.f_12)
			{
				if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
					{
						if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
						{
							iVar1 = func_2535(128);
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
			func_2536(uParam0);
		}
	}
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33));
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8192))
	{
		if (__LIB_4__::func_937(uParam0, 1024) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4))
		{
			if (!Global_1935630.f_12)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
		}
	}
}

bool func_2273(int iParam0, int iParam1)
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
				if (func_2273(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2273(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2273(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2273(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

int func_2330(int iParam0, vector3 vParam1)
{
	float fVar0;
	int iVar1;
	fVar0 = func_2654(iParam0, vParam1);
	if (fVar0 > 337.5f || fVar0 <= 22.5f)
	{
		iVar1 = 1;
	}
	else if (fVar0 > 22.5f && fVar0 <= 67.5f)
	{
		iVar1 = 2;
	}
	else if (fVar0 > 67.5f && fVar0 <= 112.5f)
	{
		iVar1 = 3;
	}
	else if (fVar0 > 112.5f && fVar0 <= 157.5f)
	{
		iVar1 = 4;
	}
	else if (fVar0 > 157.5f && fVar0 <= 202.5f)
	{
		iVar1 = 5;
	}
	else if (fVar0 > 202.5f && fVar0 <= 247.5f)
	{
		iVar1 = 6;
	}
	else if (fVar0 > 247.5f && fVar0 <= 292.5f)
	{
		iVar1 = 7;
	}
	else if (fVar0 > 292.5f && fVar0 <= 337.5f)
	{
		iVar1 = 8;
	}
	return iVar1;
}

int func_2332(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	if (func_2658(*iParam0, iParam1, *iParam2, bParam3, iParam4))
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
			__LIB_9__::func_348(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - __LIB_7__::func_601(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

void func_2333(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Gang01", Local_133[24 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Gang01^1", Local_133[25 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Gang01^2", Local_133[26 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Gang01^3", Local_133[27 /*6*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2334(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_Gang_Conversation");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_Gang_React_to_Player_Escape");
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_Gang_Conversation") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_Gang_React_to_Player_Escape"))
			{
				Local_1371[iParam0 /*5*/].f_4 = 1;
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Shooter", Local_133[24 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Gang01", Local_133[25 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Gang02", Local_133[26 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Gang03", Local_133[27 /*6*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2335(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_Arthur_Escapes");
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_Arthur_Escapes"))
			{
				Local_1371[iParam0 /*5*/].f_4 = 1;
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Hogtie", Local_941[5 /*2*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2336(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2337(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Shooter", Local_133[24 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Gang03", Local_133[27 /*6*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2338(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_React_to_Player_Escape");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_Shoots_Arthur");
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_React_to_Player_Escape") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_Shoots_Arthur"))
			{
				Local_1371[iParam0 /*5*/].f_4 = 1;
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Shooter", Local_133[24 /*6*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2340(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "File", Local_941[10 /*2*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2341(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "File", Local_941[10 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Chain", Local_941[9 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "shackles", Local_941[8 /*2*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2342(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_Heat_File_IDLE");
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_Heat_File_IDLE"))
			{
				Local_1371[iParam0 /*5*/].f_4 = 1;
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Candle", Local_941[16 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Candle_Holder", Local_941[11 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "File", Local_941[10 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "RAG", Local_941[12 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Chair", Local_941[15 /*2*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2343(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_Gouge_Finale_Success");
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_Gouge_Finale_Success"))
			{
				Local_1371[iParam0 /*5*/].f_4 = 1;
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "File", Local_941[10 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "RAG", Local_941[12 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Chair", Local_941[15 /*2*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2344(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_pour_Hover_to_Start");
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_pour_Hover_to_Start"))
			{
				Local_1371[iParam0 /*5*/].f_4 = 1;
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Bullet", Local_941[13 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Candle_Holder", Local_941[11 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "File", Local_941[10 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "RAG", Local_941[12 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Chair", Local_941[15 /*2*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2345(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_Cauterize_React");
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_Cauterize_React"))
			{
				Local_1371[iParam0 /*5*/].f_4 = 1;
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Bullet", Local_941[13 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Candle", Local_941[16 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Candle_Holder", Local_941[11 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "File", Local_941[10 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "RAG", Local_941[12 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Chair", Local_941[15 /*2*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2346(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_enemy_loop");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "pbl_enemy_turns_spots_arthur");
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_enemy_loop") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "pbl_enemy_turns_spots_arthur"))
			{
				Local_1371[iParam0 /*5*/].f_4 = 1;
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Candle", Local_941[16 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Chair", Local_941[15 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "lantern", Local_941[17 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ODRISCOL", Local_133[32 /*6*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2347(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Candle", Local_941[16 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Chair", Local_941[15 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "lantern", Local_941[17 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ODRISCOL", Local_133[32 /*6*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2348(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "CARBINE", Local_941[21 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "Cattleman", Local_941[22 /*2*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "SATCHEL", Local_941[20 /*2*/], 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2351(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "horse", Local_133[28 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "horse^0", Local_133[29 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "G_M_M_UNIDUSTER_01", Local_133[24 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "G_M_M_UNIDUSTER_01^0", Local_133[25 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1371[iParam0 /*5*/], "player_zero", Global_35, 0);
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2353(int iParam0)
{
	switch (Local_1371[iParam0 /*5*/].f_1)
	{
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1371[iParam0 /*5*/], "PBL_2");
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1371[iParam0 /*5*/], "PBL_2"))
			{
				Local_1371[iParam0 /*5*/].f_4 = 1;
			}
			break;
		case 4:
			Local_1371[iParam0 /*5*/].f_1 = 5;
			break;
	}
}

void func_2357(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			AUDIO::_PLAY_SOUND_FROM_ENTITY(func_1438(1), Local_941[10 /*2*/], func_1438(0), false, 0, 0);
			func_2662();
			break;
		case 2:
			AUDIO::_PLAY_SOUND_FROM_ENTITY(func_1438(1), Local_941[10 /*2*/], func_1438(0), false, 0, 0);
			func_2662();
			break;
		case 4:
			AUDIO::_PLAY_SOUND_FROM_ENTITY(func_1438(2), Local_941[10 /*2*/], func_1438(0), false, 0, 0);
			func_2662();
			break;
		case 3:
			AUDIO::_PLAY_SOUND_FROM_ENTITY(func_1438(2), Local_941[10 /*2*/], func_1438(0), false, 0, 0);
			func_2662();
			break;
		case 5:
			AUDIO::_PLAY_SOUND_FROM_ENTITY(func_1438(3), Local_941[10 /*2*/], func_1438(0), false, 0, 0);
			func_2662();
			break;
		case 6:
			AUDIO::_PLAY_SOUND_FROM_ENTITY(func_1438(4), Local_941[10 /*2*/], func_1438(0), false, 0, 0);
			func_2662();
			break;
	}
}

Vector3 func_2386(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0 = { func_1449(iParam0, iParam1, iParam2) };
	return vVar0;
}

float func_2387(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	Var0 = { func_1449(iParam0, iParam1, iParam2) };
	return Var0.f_3;
}

int func_2406(var uParam0, int iParam1, int iParam2)
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
		return func_2406(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2430(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		if (!__LIB_5__::func_306(uParam0, iParam1, &iVar0))
		{
			if (!__LIB_5__::func_307(uParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 1);
	uParam0->f_5423[iVar0 /*65*/] = iParam1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (__LIB_0__::func_125(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 16);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 8);
		}
	}
	uParam0->f_5423[iVar0 /*65*/].f_4 = sParam4;
	uParam0->f_5423[iVar0 /*65*/].f_7 = iParam5;
	uParam0->f_5423[iVar0 /*65*/].f_6 = iParam6;
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (iParam8 == -1)
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == __LIB_0__::func_398(7))
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = 40;
			}
			else
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = __LIB_4__::func_633(iParam1);
			}
		}
		else
		{
			uParam0->f_5423[iVar0 /*65*/].f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			uParam0->f_5423[iVar0 /*65*/].f_10 = iParam8;
		}
		if (__LIB_0__::func_31(uParam0->f_5423[iVar0 /*65*/].f_10))
		{
		}
	}
	uParam0->f_13145++;
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
			uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 429673;
			iVar1++;
		}
		__LIB_5__::func_561(uParam0, iParam1, 2, 4);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 8);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 512);
		__LIB_5__::func_563(uParam0, iParam1, 5000, 512);
		if (uParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_11__::func_831(uParam0, iParam1, -2147483648);
		}
	}
}

int func_2523(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, var uParam9, var uParam10, var uParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_2806(iParam1, bParam3, bParam8, uParam9, uParam10, uParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

int func_2535(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1495(&uVar0, iParam0, 0);
	iVar9 = func_2406(&uVar4, iParam0, 0);
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

void func_2536(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1935630.f_12)
	{
		if (uParam0->f_7374 != 0 && uParam0->f_7374 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (iVar0 != uParam0->f_7374)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam0->f_7374, 0, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, uParam0->f_7374) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
		}
		else if ((__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4)) && __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == 0 || iVar1 == joaat("WEAPON_UNARMED"))
				{
					iVar2 = func_2535(128);
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
				iVar3 = func_2535(128);
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

float func_2654(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
	fVar1 = __LIB_3__::func_731(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vParam1);
	fVar1 = (fVar1 + fVar0);
	if (fVar1 >= 360f)
	{
		fVar1 = (fVar1 - 360f);
	}
	else if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	return fVar1;
}

bool func_2658(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	return func_2856(iVar0, iParam1, iParam2, bParam3, iParam4);
}

void func_2662()
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_937[1]) && !__LIB_0__::func_899(&(vLocal_792[32 /*3*/])))
	{
		__LIB_4__::func_89(&(vLocal_792[32 /*3*/]), 1);
		iLocal_937[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(func_1912(1), Local_941[14 /*2*/], func_1362(0), func_1362(0), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 0.75f), false, false, false);
	}
}

int func_2806(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { uParam3, uParam4, uParam5 };
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
				if (!__LIB_12__::func_619(iParam0, vVar0, fParam6, iParam10))
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
				func_925(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_12__::func_620(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
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

int func_2856(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			func_2856(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
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
		__LIB_2__::func_471(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

