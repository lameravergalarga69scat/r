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
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	int iLocal_21[69] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_91[21] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	bool bLocal_157 = false;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	struct<20> Local_173[7];
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<20> Local_324[6];
	int iLocal_445 = 0;
	struct<20> Local_446[49];
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	struct<20> Local_1432[4];
	struct<23> Local_1513[2];
	int iLocal_1560 = 0;
	int iLocal_1561 = 0;
	int iLocal_1562[3] = { 0, 0, 0 };
	int iLocal_1566[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1572 = 0;
	int iLocal_1573 = 0;
	vector3 vLocal_1574 = { 0f, 0f, 0f };
	float fLocal_1577 = 0f;
	vector3 vLocal_1578 = { 0f, 0f, 0f };
	float fLocal_1581 = 0f;
	int iLocal_1582 = 0;
	int iLocal_1583 = 0;
	bool bLocal_1584 = false;
	int iLocal_1585 = 0;
	int iLocal_1586 = 0;
	int iLocal_1587 = 0;
	int iLocal_1588 = 0;
	int iLocal_1589 = 0;
	int iLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	int iLocal_1597 = 0;
	int iLocal_1598 = 0;
	int iLocal_1599 = 0;
	int iLocal_1600[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_1613 = false;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = -1;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 1097859072;
	var uLocal_1632 = 1000;
	var uLocal_1633 = 1067450368;
	var uLocal_1634 = 5000;
	var uLocal_1635 = 42;
	var uLocal_1636 = 1103626240;
	var uLocal_1637 = 1077936128;
	var uLocal_1638 = 1106247680;
	var uLocal_1639 = 1103101952;
	var uLocal_1640 = 1097859072;
	var uLocal_1641 = 1103626240;
	var uLocal_1642 = 0;
	vector3 vLocal_1643 = { 0f, 0f, 0f };
	int iLocal_1646 = 0;
	float fLocal_1647 = 0f;
	int iLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 1;
	var uLocal_1654 = 1;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	bool bLocal_1663 = false;
	int iLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	int iLocal_1668 = 0;
	int iLocal_1669 = 0;
	int iLocal_1670 = 0;
	int iLocal_1671 = 0;
	int iLocal_1672 = 0;
	int iLocal_1673 = 0;
	int iLocal_1674 = 0;
	int iLocal_1675 = 0;
	int iLocal_1676 = 0;
	int iLocal_1677 = 0;
	var uLocal_1678 = 0;
	int iLocal_1679 = 0;
	int iLocal_1680 = 0;
	int iLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	vector3 vLocal_1685[11] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	bool bLocal_1725 = false;
	bool bLocal_1726 = false;
	bool bLocal_1727 = false;
	var uLocal_1728 = 1;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 570;
	var uLocal_1732 = 1065353216;
	var uLocal_1733 = -1082130432;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 3;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	bool bLocal_1746 = false;
	int iLocal_1747 = 0;
	var uLocal_1748 = -1;
	var uLocal_1749 = 0;
	var uLocal_1750 = -1;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = -1;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 1073741824;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 1;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 1106247680;
	var uLocal_1774 = 1067450368;
	var uLocal_1775 = 0;
	var uLocal_1776 = 1092616192;
	var uLocal_1777 = 1112014848;
	var uLocal_1778 = 1106247680;
	var uLocal_1779 = 1101529088;
	var uLocal_1780 = 1101004800;
	var uLocal_1781 = 1084227584;
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
	struct<17> Local_1808[1];
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	bool bLocal_1829 = false;
	bool bLocal_1830 = false;
	char* sLocal_1831 = NULL;
	char* sLocal_1832 = NULL;
	struct<5> Local_1833[65];
	int iLocal_2159 = 0;
	int iLocal_2160 = 0;
	char* sLocal_2161[3] = { NULL, NULL, NULL };
	var uLocal_2165 = 0;
	vector3 vLocal_2166 = { 0f, 0f, 0f };
	float fLocal_2169 = 0f;
	vector3 vLocal_2170 = { 0f, 0f, 0f };
	float fLocal_2173 = 0f;
	vector3 vLocal_2174 = { 0f, 0f, 0f };
	float fLocal_2177 = 0f;
	vector3 vLocal_2178 = { 0f, 0f, 0f };
	float fLocal_2181 = 0f;
	int iLocal_2182 = 0;
	bool bLocal_2183 = false;
	int iLocal_2184 = 0;
	bool bLocal_2185 = false;
	int iLocal_2186[49] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_2236 = false;
	bool bLocal_2237 = false;
	bool bLocal_2238 = false;
	bool bLocal_2239 = false;
	bool bLocal_2240 = false;
	bool bLocal_2241 = false;
	bool bLocal_2242 = false;
	bool bLocal_2243 = false;
	bool bLocal_2244 = false;
	int iLocal_2245 = 0;
	int iLocal_2246 = 0;
	bool bLocal_2247 = false;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	bool bLocal_2251 = false;
	bool bLocal_2252 = false;
	bool bLocal_2253 = false;
	bool bLocal_2254 = false;
	bool bLocal_2255 = false;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	float fLocal_2259 = 0f;
	struct<61> Local_2260[2];
	struct<17> Local_2383[2];
	bool bLocal_2418 = false;
	int iLocal_2419 = 0;
	int iLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	float fLocal_2424 = 0f;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	bool bLocal_2427 = false;
	bool bLocal_2428 = false;
	float fLocal_2429 = 0f;
	bool bLocal_2430 = false;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	bool bLocal_2434 = false;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	bool bLocal_2438 = false;
	bool bLocal_2439 = false;
	int iLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	bool bLocal_2444 = false;
	bool bLocal_2445 = false;
	bool bLocal_2446 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_19 = true;
	iLocal_165 = joaat("A_C_HORSE_AMERICANPAINT_OVERO");
	iLocal_168 = joaat("CS_PENELOPEBRAITHWAITE");
	iLocal_172 = joaat("WAGON02X");
	iLocal_314 = joaat("RCSP_BEAUANDPENELOPE1_FEMALES_01");
	iLocal_315 = joaat("CS_MRS_CALHOUN");
	iLocal_1572 = joaat("A_M_M_RHDTOWNFOLK_02");
	iLocal_1573 = joaat("RCSP_BEAUANDPENELOPE_MALES_01");
	vLocal_1574 = { 1435.21f, -1440.91f, 78.61f };
	fLocal_1577 = -134.72f;
	vLocal_1578 = { 1434.94f, -1441.8f, 78.55f };
	fLocal_1581 = -108.58f;
	iLocal_1585 = joaat("A_M_M_RHDTOWNFOLK_02");
	iLocal_1586 = joaat("A_M_M_RHDUPPERCLASS_01");
	iLocal_1587 = joaat("A_F_M_RHDTOWNFOLK_01");
	iLocal_1588 = joaat("A_F_M_RHDUPPERCLASS_01");
	iLocal_1589 = joaat("CS_SCOTTGRAY");
	iLocal_1590 = joaat("CS_IANGRAY");
	iLocal_1681 = joaat("P_CS_LETTER03X");
	sLocal_1831 = "rbap13_beauLeadsToWagon";
	sLocal_1832 = "rbap12_beau_chapel";
	vLocal_2166 = { 1850.647f, -1355.572f, 41.118f };
	fLocal_2169 = 199.6201f;
	vLocal_2170 = { func_1(24) };
	fLocal_2173 = func_2(24);
	vLocal_2174 = { func_1(19) };
	fLocal_2177 = func_2(19);
	vLocal_2178 = { 1412.941f, -1768.659f, 65.9138f };
	fLocal_2181 = 207.5457f;
	fLocal_2259 = 15f;
	iLocal_2419 = -1;
	fLocal_2424 = 5f;
	Var0 = 9;
	Var0.f_28 = 4;
	Var0.f_41 = 25;
	Var0.f_117 = 10;
	Var0.f_175 = -1;
	Var0.f_178.f_8 = -1;
	Var0.f_178.f_17 = 1097859072;
	Var0.f_178.f_18 = 1000;
	Var0.f_178.f_19 = 1067450368;
	Var0.f_178.f_20 = 5000;
	Var0.f_178.f_21 = 42;
	Var0.f_178.f_22 = 1103626240;
	Var0.f_178.f_23 = 1077936128;
	Var0.f_178.f_24 = 1106247680;
	Var0.f_178.f_25 = 1103101952;
	Var0.f_178.f_26 = 1097859072;
	Var0.f_178.f_27 = 1103626240;
	Var0.f_206 = 1;
	Var0.f_206.f_13 = 27;
	Var0.f_206.f_338 = 1097859072;
	Var0.f_206.f_339 = 1101004800;
	Var0.f_206.f_366 = 4;
	Var0.f_643 = 24;
	Var0.f_741 = 1092616192;
	Var0.f_742 = 1094713344;
	Var0.f_744 = -1082130432;
	Var0.f_745 = 1103626240;
	Var0.f_748 = -1;
	Var0.f_749 = -1;
	Var0.f_750 = -1;
	Var0.f_751 = -1;
	Var0.f_752 = -1;
	Var0.f_753.f_3 = 27;
	Var0.f_753.f_3.f_1.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_355.f_15 = 1;
	Var0.f_753.f_371 = 30;
	Var0.f_753.f_371.f_1 = -1;
	Var0.f_753.f_371.f_1.f_2 = 1;
	Var0.f_753.f_371.f_1.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_912 = 8;
	Var0.f_753.f_1241 = 8;
	Var0.f_753.f_1241.f_1.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1418 = 11;
	Var0.f_753.f_1529 = 2;
	Var0.f_753.f_1564 = 2;
	Var0.f_753.f_1581 = -1;
	Var0.f_753.f_1584 = -1;
	Var0.f_753.f_1585 = -1082130432;
	Var0.f_753.f_1667 = 24;
	Var0.f_753.f_1791 = -1;
	Var0.f_2605 = 15;
	Var0.f_2605.f_241 = 15;
	Var0.f_2605.f_482 = 16;
	Var0.f_2605.f_739 = 2;
	Var0.f_2605.f_772 = 3;
	Var0.f_174 = ScriptParam_0;
	if (ScriptParam_0.f_1)
	{
		__LIB_0__::func_7(&(Var0.f_172), 4096);
	}
	else
	{
		__LIB_0__::func_8(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_5(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_6(&Var0);
	while (true)
	{
		func_7(&Var0);
		if (__LIB_0__::func_1(Var0.f_172, 50331648))
		{
			func_9(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					__LIB_12__::func_906(&Var0);
					break;
				case 1:
					func_11(&Var0);
					break;
				case 3:
					func_12(&Var0);
					break;
				case 4:
					func_13(&Var0);
					break;
				case 2:
					func_14(&Var0);
					break;
				case 5:
					func_15(&Var0);
					break;
				case 6:
					func_16(&Var0);
					break;
				case 7:
					func_17(&Var0);
					break;
				case 8:
					func_18(&Var0);
					break;
				case 9:
					func_19(&Var0, 0);
					break;
				case 10:
					func_20(&Var0);
					break;
				case 11:
					if (Var0.f_174 == __LIB_10__::func_698())
					{
						__LIB_0__::func_297();
						__LIB_1__::func_140();
					}
					func_24(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

Vector3 func_1(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1862.547f, -1350.442f, 41.6879f;
		case 1:
			return 1860.705f, -1350.494f, 41.3188f;
		case 2:
			return 1387.92f, -1788.915f, 65.3236f;
		case 5:
			return 1454.201f, -1442.725f, 75.2137f;
		case 6:
			return 1299.637f, -1317.098f, 75.522f;
		case 3:
			return 1299.35f, -1315.24f, 75.54f;
		case 4:
			return 1442.054f, -1447.067f, 76.2945f;
		case 8:
			return 1302.225f, -1297.588f, 75.5048f;
		case 9:
			return 1278.744f, -1314.463f, 75.7564f;
		case 10:
			return 1862.543f, -1349.136f, 41.2966f;
		case 11:
			return 1860.97f, -1350.12f, 41.31f;
		case 12:
			return 1857.801f, -1358.067f, 41.2644f;
		case 13:
			return 1276.18f, -1323.179f, 75.8406f;
		case 14:
			return 1407.337f, -1773.477f, 65.7306f;
		case 15:
			return 1443.85f, -1445.677f, 76.2724f;
		case 16:
			return 1300.25f, -1292.55f, 76.2185f;
		case 17:
			return 1443.321f, -1437.516f, 77.8997f;
		case 18:
			return 1291.974f, -1286.901f, 74.8584f;
		case 19:
			return 1293.936f, -1317.825f, 75.7399f;
		case 20:
			return 1299.336f, -1300.77f, 76.3604f;
		case 21:
			return 1303.329f, -1298.778f, 75.4939f;
		case 22:
			return 1846.914f, -1350.948f, 41.3527f;
		case 23:
			return 1277.143f, -1317.557f, 75.6573f;
		case 24:
			return 1444.651f, -1444.013f, 76.4894f;
		case 25:
			return 1444.7f, -1444.2f, 75.38f;
		case 26:
			return 1335.679f, -1309.494f, 75.4299f;
		case 27:
			return 1407.337f, -1773.477f, 65.7306f;
		case 28:
			return 1283.967f, -1326.134f, 76.3259f;
		case 29:
			return 1399.489f, -1782.868f, 64.4201f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_2(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 20.7268f;
		case 2:
			return 9.4121f;
		case 5:
			return 67.9497f;
		case 6:
			return 88.4141f;
		case 8:
			return 8.3227f;
		case 4:
			return 333.6f;
		case 9:
			return 156.5724f;
		case 10:
			return 101.538f;
		case 12:
			return 200.538f;
		case 13:
			return 288.6784f;
		case 14:
			return 0f;
		case 15:
			return 301.217f;
		case 16:
			return 139.542f;
		case 17:
			return 70f;
		case 18:
			return 55.3556f;
		case 19:
			return 117.4983f;
		case 20:
			return 324.1779f;
		case 21:
			return 0f;
		case 22:
			return 205.3468f;
		case 23:
			return 180f;
		case 24:
			return 52.9749f;
		case 25:
			return 0f;
		case 26:
			return 0f;
		case 27:
			return 0f;
		default:
			break;
	}
	return 0f;
}

void func_5(var uParam0)
{
	int iVar0;
	if (Global_1879534 == 1)
	{
		__LIB_2__::func_426(&(Global_1347702[uParam0->f_174 /*49*/].f_43));
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		__LIB_0__::func_11(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_18(uParam0);
		}
		else
		{
			func_19(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_12__::func_836(&(uParam0->f_753));
	func_24(uParam0);
}

void func_6(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (uParam0->f_174 == __LIB_10__::func_698())
	{
		bVar0 = true;
	}
	else if (__LIB_12__::func_738(uParam0))
	{
		bVar0 = true;
		__LIB_12__::func_638(uParam0, 128);
	}
	if (bVar0)
	{
		__LIB_12__::func_638(uParam0, 64);
		if (__LIB_4__::func_512())
		{
			__LIB_12__::func_638(uParam0, 128);
		}
		__LIB_0__::func_145(0, 0);
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!__LIB_12__::func_639(uParam0, 64))
	{
		__LIB_12__::func_640(uParam0->f_174, 1);
		__LIB_12__::func_641(uParam0->f_174, 1);
	}
	__LIB_11__::func_196(uParam0->f_174);
	func_38(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_44(uParam0);
	__LIB_12__::func_918(uParam0, 1);
	iVar1 = __LIB_1__::func_976(uParam0);
	if (!__LIB_0__::func_1(uParam0->f_172, 8388608) && __LIB_12__::func_882(uParam0))
	{
		iVar1 = 4;
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		}
	}
	__LIB_0__::func_769();
	__LIB_12__::func_837(uParam0, iVar1);
}

void func_7(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		return;
	}
	if (__LIB_10__::func_255())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 16777216);
		if (!__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_12__::func_643(uParam0, 14);
		}
		return;
	}
	else if (__LIB_10__::func_257())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 33554432);
		if (!__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_12__::func_643(uParam0, 15);
		}
		return;
	}
	if (func_55(uParam0))
	{
		return;
	}
	__LIB_0__::func_8(&(uParam0->f_172), 64);
	__LIB_0__::func_8(&(uParam0->f_172), 128);
	if (__LIB_0__::func_1(uParam0->f_172, 67108864))
	{
		__LIB_12__::func_868(1);
		__LIB_0__::func_8(&(uParam0->f_172), 67108864);
	}
	__LIB_12__::func_963(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 4096))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (!__LIB_0__::func_6(iVar0) || Global_1347702[uParam0->f_174 /*49*/].f_15 == iVar0)
		{
			__LIB_0__::func_8(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 8) && __LIB_12__::func_766())
	{
		if (uParam0->f_174 != 59 || !__LIB_1__::func_200(97))
		{
			if (uParam0->f_174 != 155 || !__LIB_1__::func_200(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (__LIB_12__::func_639(uParam0, 32))
			{
				if (!__LIB_12__::func_639(uParam0, 64))
				{
					if (!__LIB_0__::func_13(32768))
					{
						Var1 = { func_63(0) };
						if (func_64(&Var1))
						{
							__LIB_12__::func_791(uParam0, 32);
						}
					}
					else
					{
						__LIB_12__::func_791(uParam0, 32);
					}
				}
				else
				{
					__LIB_12__::func_791(uParam0, 32);
				}
			}
			if (func_66(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					__LIB_12__::func_837(uParam0, 9);
					return;
				}
			}
			else if (__LIB_0__::func_58(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					__LIB_12__::func_837(uParam0, 8);
					return;
				}
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 131072))
			{
				if (!Global_1935630.f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 268435456))
			{
				__LIB_4__::func_515();
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 1073741824 /* Float: 2f */))
			{
				__LIB_4__::func_516(1, 0);
			}
			__LIB_0__::func_11(uParam0);
		}
		else if (!__LIB_12__::func_639(uParam0, 64) && !__LIB_12__::func_738(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
			if (func_72(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_24(uParam0);
					return;
				}
				func_74(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_12__::func_996(uParam0);
			}
			func_76(uParam0);
		}
	}
	__LIB_13__::func_160(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_12__::func_645(uParam0));
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (__LIB_12__::func_964(uParam0))
		{
		}
	}
}

void func_9(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_19(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_899(&(uParam0->f_2597)))
		{
			__LIB_4__::func_89(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_9__::func_401(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_74(uParam0);
			}
			func_24(uParam0);
		}
	}
}

void func_11(var uParam0)
{
	if (func_87(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			func_88(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			func_89(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_12(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_88(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_13(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_93(uParam0);
	if (func_94(uParam0))
	{
		func_88(uParam0);
		iVar0 = __LIB_11__::func_454(uParam0);
		if (iVar0 == 5)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_15(uParam0);
			if (uParam0->f_177 == 6)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 5;
			}
		}
		else if (iVar0 == 6)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_16(uParam0);
		}
		else if (iVar0 == 7)
		{
			MISC::_0xA565FAC215CBC77D();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (__LIB_12__::func_738(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		__LIB_12__::func_964(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_14(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, func_98(uParam0, __LIB_12__::func_767(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::_0x297B72E2AF094742(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		__LIB_8__::func_710(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_15(var uParam0)
{
	if (func_100(uParam0))
	{
		func_16(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_16(var uParam0)
{
	int iVar0;
	func_101(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_103(uParam0))
		{
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = func_105(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
		iVar0 = func_105(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_17(var uParam0)
{
	int iVar0;
	if (func_106(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		func_108(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_109(uParam0);
	if (iVar0 == 5)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_15(uParam0);
		if (uParam0->f_177 == 6)
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 5;
		}
	}
	else if (iVar0 == 6)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_16(uParam0);
	}
	__LIB_12__::func_837(uParam0, iVar0);
}

void func_18(var uParam0)
{
	vector3 vVar0[24];
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;
	if (uParam0->f_177 != 8)
	{
		__LIB_12__::func_837(uParam0, 8);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 32768))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
			return;
		}
		if (MISC::_0x1B065A2BF7953815(1) == 1)
		{
			return;
		}
	}
	if (__LIB_12__::func_644(uParam0) != 0)
	{
		__LIB_12__::func_643(uParam0, 0);
		if (__LIB_1__::func_241(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15)))
			{
				STATS::_0xCA41E86545413B5B(__LIB_0__::func_700(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_76(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_872(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15), Global_36);
			}
			if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15)))
			{
			}
			else
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15), 0);
			}
		}
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 262144))
		{
			__LIB_0__::func_496();
			__LIB_1__::func_323(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0);
		}
		__LIB_9__::func_830(uParam0->f_174, 1);
		__LIB_12__::func_869(uParam0);
		__LIB_5__::func_496(__LIB_0__::func_12(), 0);
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_5__::func_109(uParam0, 0, 1);
			if (__LIB_3__::func_736(uParam0->f_174, 128))
			{
				__LIB_3__::func_735(uParam0->f_174, 128);
			}
		}
		__LIB_0__::func_11(uParam0);
		if (!__LIB_0__::func_1(uParam0->f_172, 32768) || !__LIB_0__::func_1(uParam0->f_172, 65536))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				__LIB_0__::func_769();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				__LIB_5__::func_370(Global_1347702[uParam0->f_174 /*49*/].f_15);
				__LIB_5__::func_102();
				__LIB_0__::func_8(&Global_1935630, 8);
			}
			MemCopy(&cVar0, {Global_1347702[uParam0->f_174 /*49*/].f_1}, 3);
			StringConCat(&cVar0, "_obj", 24);
			if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4))
			{
				if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
					{
						__LIB_12__::func_883(uParam0, &cVar0, 1, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = __LIB_0__::func_513();
			func_130(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (__LIB_0__::func_1(uParam0->f_172, 8))
			{
				iVar4 = __LIB_12__::func_767(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = __LIB_0__::func_299(__LIB_12__::func_609(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = __LIB_12__::func_644(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = __LIB_0__::func_398(0);
				TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1347702[uParam0->f_174 /*49*/].f_3), &Var5);
				bVar12 = false;
				bVar12 = true;
				if (bVar12)
				{
					__LIB_0__::func_297();
					__LIB_1__::func_140();
				}
			}
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 32768) || !__LIB_0__::func_1(uParam0->f_172, 65536))
	{
		if (__LIB_12__::func_738(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			__LIB_13__::func_467();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			__LIB_9__::func_786(1, 1);
			__LIB_0__::func_7(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		__LIB_1__::func_954(1);
		__LIB_5__::func_116();
		__LIB_0__::func_320(6);
		__LIB_0__::func_319(4096);
	}
	func_74(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_24(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_19(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	__LIB_12__::func_837(uParam0, 9);
	if (__LIB_12__::func_644(uParam0) != 1)
	{
		__LIB_12__::func_643(uParam0, 1);
		if (__LIB_3__::func_736(uParam0->f_174, 128))
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		__LIB_0__::func_11(uParam0);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	__LIB_9__::func_830(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == __LIB_10__::func_698())
		{
			__LIB_0__::func_297();
			__LIB_1__::func_140();
		}
	}
	else
	{
		bVar0 = false;
		if (__LIB_0__::func_1(uParam0->f_172, 134217728))
		{
			bVar0 = true;
		}
		if (!CAM::IS_SCREEN_FADED_OUT() || __LIB_0__::func_1(uParam0->f_172, 134217728))
		{
			if (!__LIB_0__::func_899(&(uParam0->f_2597)))
			{
				__LIB_4__::func_89(&(uParam0->f_2597), 0);
			}
			__LIB_0__::func_11(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!__LIB_0__::func_1(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					__LIB_1__::func_193(1, 1);
					return;
				}
				else
				{
					__LIB_0__::func_7(&(uParam0->f_172), 2097152);
				}
			}
			if (bVar2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				__LIB_0__::func_8(&(uParam0->f_172), 134217728);
			}
			else if (__LIB_9__::func_401(&(uParam0->f_2597)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				__LIB_0__::func_8(&(uParam0->f_172), 134217728);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			else if (__LIB_0__::func_1(uParam0->f_172, 134217728))
			{
				return;
			}
		}
		iVar3 = 1;
		if (__LIB_0__::func_1(uParam0->f_172, 16777216))
		{
			iVar3 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_KO", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_DEAD", 24);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 33554432))
		{
			iVar3 = 6;
			StringCopy(&(uParam0->f_2578), "PLAYER_ARRESTED", 24);
		}
		__LIB_1__::func_611(Global_1347702[uParam0->f_174 /*49*/].f_15, iVar3, &(uParam0->f_2578), __LIB_12__::func_793(uParam0), 0, bVar0);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_769();
		__LIB_0__::func_8(&Global_1935630, 8);
	}
	if (__LIB_12__::func_648(&(uParam0->f_2605)))
	{
		__LIB_12__::func_768(uParam0);
	}
	__LIB_1__::func_645(Global_1347702[uParam0->f_174 /*49*/].f_15);
	bParam1 = true;
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_74(uParam0);
	}
	if (bParam1)
	{
		func_24(uParam0);
	}
	else
	{
		__LIB_12__::func_837(uParam0, 10);
	}
}

void func_20(var uParam0)
{
	bool bVar0;
	int iVar1;
	if (Global_1347702[uParam0->f_174 /*49*/].f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37);
		uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
		__LIB_12__::func_613(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (__LIB_0__::func_296(64, 1, 1))
	{
		iVar1 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar1))
		{
			__LIB_0__::func_11(uParam0);
			func_24(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_24(uParam0);
	}
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		if (func_152(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_161(uParam0);
	__LIB_3__::func_319(uParam0->f_751);
	__LIB_12__::func_975(uParam0);
	__LIB_12__::func_907(uParam0);
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_0__::func_698(2);
	iVar0 = 0;
	bVar2 = false;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		__LIB_12__::func_993(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (__LIB_12__::func_644(uParam0) == 2)
	{
		__LIB_2__::func_426(&(Global_1347702[uParam0->f_174 /*49*/].f_43));
	}
	else
	{
		__LIB_2__::func_788(&(Global_1347702[uParam0->f_174 /*49*/].f_43), 1, 0, 1);
	}
	Global_1347702[uParam0->f_174 /*49*/].f_43 = 0;
	__LIB_12__::func_652(uParam0);
	__LIB_12__::func_653(uParam0);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
	}
	if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_8__::func_993(uParam0->f_174);
	}
	if (__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		__LIB_1__::func_559(Global_1347702[uParam0->f_174 /*49*/].f_15, 0, 2);
	}
	__LIB_12__::func_966(uParam0, 0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	if (Global_1347702[uParam0->f_174 /*49*/].f_35 != -1)
	{
		__LIB_12__::func_654(uParam0->f_174, 0);
	}
	if (__LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && __LIB_0__::func_298(0) == Global_1888801[16 /*35*/])
		{
			__LIB_4__::func_838(uParam0->f_174, 8192);
		}
	}
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 32768);
	__LIB_12__::func_949(uParam0);
	__LIB_0__::func_769();
	func_183(0);
	func_183(1);
	__LIB_4__::func_509(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_38(var uParam0)
{
	__LIB_12__::func_658(uParam0, 5);
	__LIB_12__::func_659(uParam0, 79);
	__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	func_190();
	func_191();
	func_192();
	func_193();
	func_194();
	vLocal_1685[0 /*3*/] = { 2.9f, -2.55f, -0.5f };
	vLocal_1685[1 /*3*/] = { -2.78f, 0.2f, -0.5f };
	vLocal_1685[2 /*3*/] = { 3.1f, -0.15f, -0.5f };
	vLocal_1685[3 /*3*/] = { -2.4f, -1.84f, -0.5f };
	vLocal_1685[4 /*3*/] = { -2.27f, -2.96f, -0.5f };
	vLocal_1685[5 /*3*/] = { 2.56f, -3.35f, -0.5f };
	vLocal_1685[6 /*3*/] = { -2.36f, -6.22f, -0.5f };
	vLocal_1685[7 /*3*/] = { 2.23f, -5.2f, -0.5f };
	vLocal_1685[8 /*3*/] = { 2.29f, -7.2f, -0.5f };
	vLocal_1685[9 /*3*/] = { 3.3f, -8.51f, -0.5f };
	vLocal_1685[10 /*3*/] = { -3.29f, -8.26f, -0.5f };
	func_195();
	sLocal_2161[0] = func_196(22);
	sLocal_2161[1] = func_196(23);
	sLocal_2161[2] = func_196(24);
	__LIB_4__::func_228(&uLocal_1614);
	__LIB_1__::func_402(&uLocal_1614, 0);
	__LIB_1__::func_401(&uLocal_1614, 1);
	__LIB_1__::func_398(&uLocal_1614, 0);
}

void func_44(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_1585, 7);
	__LIB_12__::func_867(uParam0, iLocal_165, 7);
	__LIB_12__::func_867(uParam0, joaat("CS_BEAUGRAY"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_BRUSHHORSE01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_PLAYERSATCHEL"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BILLSTACK01X"), 7);
	__LIB_12__::func_867(uParam0, iLocal_1681, 2);
	__LIB_12__::func_867(uParam0, joaat("P_SIGN_SUFFRAGETTE01X"), 7);
	__LIB_13__::func_15(uParam0, "rbap13_wagonroute", 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_1832, 2, -1, 7);
	__LIB_13__::func_15(uParam0, "rbap12_caliga_gate_assist", 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_1831, 2, -1, 7);
}

bool func_55(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_19(uParam0, 0);
			return true;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((__LIB_0__::func_6(iVar0) && iVar0 == Global_1347702[uParam0->f_174 /*49*/].f_15) && __LIB_0__::func_1(uParam0->f_172, 8)) && (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 134217728) || __LIB_0__::func_13(32768)))
			{
				bVar1 = true;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, bVar1);
			break;
	}
	return false;
}

struct<4> func_63(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { vLocal_2166 };
			Var1.f_3 = fLocal_2169;
			break;
		case 1:
		case 2:
			Var1 = { vLocal_2170 };
			Var1.f_3 = fLocal_2173;
			break;
		case 3:
		case 4:
			Var1 = { vLocal_2174 };
			Var1.f_3 = fLocal_2177;
			break;
		case 5:
			Var1 = { vLocal_2178 };
			Var1.f_3 = fLocal_2181;
			break;
	}
	return Var1;
}

bool func_64(var uParam0)
{
	return func_215(*uParam0, uParam0->f_3);
}

bool func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[10];
	int iVar14;
	int iVar15[10];
	if (uParam0->f_177 == 7 || uParam0->f_177 == 5)
	{
		if (iLocal_14 < 1)
		{
			if (!__LIB_0__::func_899(&uLocal_1722))
			{
				if (MISC::HAS_BULLET_IMPACTED_IN_AREA(func_1(15), 20f, true, true))
				{
					func_216(uParam0);
					return false;
				}
				if (PED::_0xB7DBB2986B87E230(iLocal_166, 1f) && __LIB_0__::func_48(Global_35, iLocal_166, 30f, 1))
				{
					func_216(uParam0);
					return false;
				}
				if (func_218(1) && func_219(uParam0))
				{
					func_216(uParam0);
					return false;
				}
			}
			else if (__LIB_4__::func_118(&uLocal_1722) > 1f)
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
				return true;
			}
		}
		else if (iLocal_14 > 2)
		{
			if (__LIB_4__::func_118(&uLocal_2441) > 2f)
			{
				func_216(uParam0);
				StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
				return true;
			}
			iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
			if (!__LIB_0__::func_899(&uLocal_2441))
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1513[iVar1 /*23*/]))
					{
						if ((__LIB_0__::func_255(Local_1513[iVar1 /*23*/], 0) && !PED::GET_PED_CONFIG_FLAG(Local_1513[iVar1 /*23*/], 11, false)) || (PED::_0xB7DBB2986B87E230(Local_1513[iVar1 /*23*/], 1f) && iVar0 != joaat("WEAPON_LASSO")))
						{
							if (__LIB_6__::func_903(func_196(47)))
							{
								__LIB_5__::func_20(0, 0);
							}
							if (func_225(uParam0, 62, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 0, 0))
							{
								__LIB_2__::func_259(&uLocal_2441);
							}
						}
					}
					iVar1++;
				}
				if (PED::_0xB7DBB2986B87E230(iLocal_166, 1f) && iVar0 != joaat("WEAPON_LASSO"))
				{
					if (PED::_0x285D36C5C72B0569(Global_35) < 8f)
					{
						if (__LIB_6__::func_903(func_196(47)))
						{
							__LIB_5__::func_20(0, 0);
						}
						if (func_225(uParam0, 62, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 0, 0))
						{
							__LIB_2__::func_259(&uLocal_2441);
						}
					}
					else
					{
						func_216(uParam0);
						StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN7", 24);
						return true;
					}
				}
			}
		}
		if (__LIB_0__::func_899(&uLocal_1722))
		{
			return false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_159))
		{
			if (PED::IS_PED_DEAD_OR_DYING(iLocal_159, true))
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_BEAUD", 24);
				return true;
			}
		}
		if (__LIB_4__::func_118(&uLocal_2256) > 1f)
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_COUS", 24);
			return true;
		}
		if (func_219(uParam0))
		{
			return true;
		}
		if (iLocal_14 < 1 || iLocal_14 > 5)
		{
			if (!__LIB_0__::func_899(&uLocal_1665))
			{
				__LIB_2__::func_259(&uLocal_1665);
			}
			else if (__LIB_1__::func_583(&uLocal_1665) > 1.5f)
			{
				PLAYER::_0x1A6E84F13C952094(PLAYER::PLAYER_ID(), 300, &iVar3);
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar3[iVar2]))
					{
						if (!__LIB_0__::func_255(iVar3[iVar2], 0))
						{
							if (((PED::IS_PED_MODEL(iVar3[iVar2], joaat("G_M_M_UNIGRAYS_01")) || PED::IS_PED_MODEL(iVar3[iVar2], joaat("G_M_M_UNIGRAYS_02"))) || PED::IS_PED_MODEL(iVar3[iVar2], joaat("S_M_M_CGHWORKER_01"))) || PED::IS_PED_MODEL(iVar3[iVar2], joaat("S_F_M_CGHWORKER_01")))
							{
								iLocal_1664++;
								__LIB_2__::func_259(&uLocal_1665);
								return false;
							}
						}
						else
						{
							iLocal_1664++;
							__LIB_2__::func_259(&uLocal_1665);
							return false;
						}
					}
					iVar2++;
				}
			}
			if (iLocal_1664 == 1)
			{
				func_225(uParam0, 48, &iLocal_159, 70f, 80f, 0, 0);
			}
			else if (iLocal_1664 == 2)
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_GRAY", 24);
				return true;
			}
		}
		if (iLocal_14 == 2)
		{
			PLAYER::_0x1A6E84F13C952094(PLAYER::PLAYER_ID(), 300, &iVar15);
			iVar14 = 0;
			while (iVar14 < iVar15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar15[iVar14]))
				{
					if (!__LIB_0__::func_255(iVar15[iVar14], 0))
					{
						iLocal_1583++;
					}
				}
				iVar14++;
			}
			if (iLocal_1583 > 0)
			{
				func_225(uParam0, 33, &iLocal_166, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 0, 0);
				if (iLocal_21[33] && !__LIB_6__::func_903(func_196(33)))
				{
					StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
					return true;
				}
			}
		}
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
			func_216(uParam0);
			return true;
		}
		if (iLocal_14 == 0)
		{
			if (func_229(uParam0, 6, "BAP12_F_ABAN1", 0f, 0f, 0f, iLocal_159, 60f, 30f, 300f))
			{
				return true;
			}
		}
		if (iLocal_14 == 1)
		{
			if (func_229(uParam0, 7, "BAP12_F_ABAN3", 0f, 0f, 0f, iLocal_170, 60f, 30f, 300f))
			{
				return true;
			}
		}
		if (iLocal_14 == 2)
		{
			if (iLocal_2440 > 10)
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rbap13_wagonroute"))
				{
					if (fLocal_1647 > 15f)
					{
						func_225(uParam0, 35, &(Local_173[0 /*20*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
					}
					else if (fLocal_1647 > 10f)
					{
						func_225(uParam0, 34, &(Local_173[0 /*20*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
					}
					if (func_229(uParam0, 5, "BAP12_F_ABAN2", vLocal_1643, 0, 12.5f, 10f, 30f))
					{
						return true;
					}
				}
			}
			else
			{
				iLocal_2440++;
			}
		}
		if ((iLocal_14 == 4 || iLocal_14 == 5) || iLocal_14 == 7)
		{
			if (func_229(uParam0, 6, "BAP12_F_ABAN1", 0f, 0f, 0f, iLocal_159, 60f, 30f, (300f / 3f)) || __LIB_3__::func_291(Global_35, 1))
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN1", 24);
				return true;
			}
		}
	}
	if (__LIB_4__::func_118(&uLocal_1722) > 1f)
	{
		StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
		return true;
	}
	return false;
}

bool func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_382(64))
	{
		return false;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return false;
	}
	else if (__LIB_1__::func_927())
	{
		return false;
	}
	else if (Global_1310720.f_6)
	{
		return false;
	}
	else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 0))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0) && __LIB_12__::func_769(uParam0, iVar0))
		{
		}
		else
		{
			__LIB_12__::func_643(uParam0, 12);
			return true;
		}
	}
	if (func_233(uParam0->f_174))
	{
		__LIB_12__::func_643(uParam0, 13);
		return true;
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (Global_1347702[uParam0->f_174 /*49*/].f_17 * Global_1347702[uParam0->f_174 /*49*/].f_17))
		{
			__LIB_12__::func_643(uParam0, 2);
			return true;
		}
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 65536) && !__LIB_9__::func_138(uParam0->f_174))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 16384);
		__LIB_12__::func_643(uParam0, 3);
		return true;
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 8388608 != 0)
	{
		iVar1 = __LIB_11__::func_128(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (__LIB_0__::func_730(iVar1))
			{
				if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
				{
					__LIB_4__::func_838(uParam0->f_174, 32768);
				}
				__LIB_12__::func_643(uParam0, 5);
				return true;
			}
			else if (__LIB_3__::func_151(iVar1))
			{
				if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
				{
					__LIB_4__::func_838(uParam0->f_174, 32768);
				}
				__LIB_12__::func_643(uParam0, 5);
				return true;
			}
		}
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_45 != -1)
	{
		if (__LIB_0__::func_730(Global_1347702[uParam0->f_174 /*49*/].f_45))
		{
			__LIB_4__::func_838(uParam0->f_174, 2048);
			__LIB_12__::func_643(uParam0, 6);
			return true;
		}
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_46 != 0)
	{
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 268435456 == 0)
		{
			iVar2 = __LIB_2__::func_954();
			if (!__LIB_12__::func_614(iVar2, Global_1347702[uParam0->f_174 /*49*/].f_46))
			{
				__LIB_12__::func_643(uParam0, 7);
				return true;
			}
		}
	}
	if (Global_1357549.f_1614 == 1)
	{
		__LIB_12__::func_643(uParam0, 8);
		return true;
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			__LIB_4__::func_838(uParam0->f_174, 16384);
			__LIB_12__::func_643(uParam0, 9);
			return true;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !__LIB_12__::func_778(uParam0->f_174, 1, 1, 0, 0))
	{
		__LIB_12__::func_643(uParam0, 10);
		return true;
	}
	if (func_242(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 1024);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	if (!__LIB_0__::func_58(uParam0) && __LIB_10__::func_270(uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 8192);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	return false;
}

void func_74(var uParam0)
{
	bool bVar0;
	__LIB_12__::func_955();
	func_247(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_627(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_975(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_1__::func_561(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

void func_76(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if ((__LIB_0__::func_1(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 256);
			__LIB_3__::func_319(uParam0->f_751);
			func_262(uParam0);
		}
		else
		{
			__LIB_12__::func_838(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (__LIB_12__::func_882(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 16))
			{
				cVar0 = { __LIB_0__::func_134() };
				Var8 = { __LIB_12__::func_665(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					__LIB_12__::func_909(&(uParam0->f_206));
					__LIB_12__::func_839(&(uParam0->f_206), &cVar0);
				}
			}
			__LIB_0__::func_7(&(uParam0->f_172), 256);
		}
	}
}

bool func_87(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_286(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_88(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			__LIB_3__::func_727(uParam0->f_174, 128);
		}
		else
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
			{
				__LIB_7__::func_602(uParam0->f_174);
				__LIB_10__::func_822(uParam0->f_174);
			}
		}
		else
		{
			__LIB_10__::func_694(Global_1347702[uParam0->f_174 /*49*/]);
			__LIB_7__::func_602(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174), 0, "");
		}
	}
	if (!__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		if (!__LIB_0__::func_702(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			__LIB_1__::func_298(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		}
		__LIB_1__::func_821(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 8);
	}
	bVar0 = true;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_12__::func_667(uParam0);
	__LIB_0__::func_7(&(uParam0->f_172), 8);
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		__LIB_12__::func_868(0);
		LAW::_0x55F37F5F3F2475E1();
		LAW::_0x292AD61A33A7A485();
		__LIB_0__::func_112(1, 16384, 1);
		__LIB_0__::func_7(&(uParam0->f_172), 67108864);
	}
	__LIB_5__::func_109(uParam0, 1, 0);
	__LIB_1__::func_723(1);
	__LIB_1__::func_564(1);
	__LIB_12__::func_770();
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	func_300(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
	if (__LIB_12__::func_882(uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 256);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8388608) || !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_12__::func_918(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(Global_1347702[uParam0->f_174 /*49*/].f_3));
	HUD::SET_MISSION_NAME(true, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::_0x33D51F801CB16E4F();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_302(uParam0);
	if (uParam0->f_174 != __LIB_10__::func_698())
	{
		if (!__LIB_0__::func_13(32768))
		{
			Var1 = { func_63(0) };
			if (!func_64(&Var1))
			{
				__LIB_12__::func_638(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (__LIB_12__::func_871(uParam0))
	{
		iVar5 = __LIB_12__::func_767(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0, iVar5, __LIB_12__::func_639(uParam0, 64));
	if (uParam0->f_174 != __LIB_10__::func_698())
	{
		__LIB_12__::func_997(uParam0, func_63(0), func_63(1), 0, 1, 0);
	}
}

void func_89(var uParam0)
{
	char[] cVar0[8];
	StringCopy(&(uParam0->f_2575), func_305(uParam0), 24);
	switch (iLocal_15)
	{
		case 0:
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_159, "BeauGray", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_164, "Horse_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_161, "p_brushHorse01x", 0, 0, 0);
			__LIB_12__::func_779(uParam0, 1859.742f, -1352.796f, 41.3019f);
			__LIB_13__::func_16(uParam0, 51268);
			__LIB_12__::func_981(uParam0, 51518);
			__LIB_13__::func_17(&(uParam0->f_206), "1-DayVersion", 0);
			__LIB_13__::func_17(&(uParam0->f_206), "2-NightVersion", 0);
			__LIB_13__::func_17(&(uParam0->f_206), "1-DayVersion-MultiStart", 0);
			__LIB_13__::func_17(&(uParam0->f_206), "2-NightVersion-MultiStart", 0);
			if ((__LIB_4__::func_511() || __LIB_12__::func_936(uParam0)) || bLocal_1584)
			{
				if (func_315())
				{
					cVar0 = "2-NightVersion-MultiStart";
				}
				else
				{
					cVar0 = "1-DayVersion-MultiStart";
				}
			}
			else if (func_315())
			{
				cVar0 = "2-NightVersion";
			}
			else
			{
				cVar0 = "1-DayVersion";
			}
			__LIB_12__::func_676(&(uParam0->f_206), cVar0);
			__LIB_12__::func_839(&(uParam0->f_206), cVar0);
			__LIB_12__::func_943(&(uParam0->f_206), 1855.141f, -1344.115f, 41.3835f, 319.4096f, 1);
			__LIB_12__::func_982(uParam0, 52150);
			break;
		case 1:
			__LIB_12__::func_779(uParam0, func_1(24));
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_159, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_166, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[0 /*20*/], "MRS_CALHOUN", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[5 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[2 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[3 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^3", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[4 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^4", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[6 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^5", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[1 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^6", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[4 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^7", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[1 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^8", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[3 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^9", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[2 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^10", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[0 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^11", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1427, "p_chair_crate02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[0], "p_sign_suffragette01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[1], "p_sign_suffragette05x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[2], "p_sign_suffragette03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[3], "p_sign_suffragette04x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[4], "p_sign_suffragette05x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[5], "p_sign_suffragette03x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1560, "A_M_M_RhdTownfolk_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1561, "A_M_M_RhdTownfolk_02", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_170, "wagon02x", 0, 0, 0);
			if (__LIB_4__::func_511())
			{
				cVar0 = "MultiStart";
			}
			else
			{
				cVar0 = "MultiStart";
			}
			__LIB_0__::func_88(&(uParam0->f_206), 131072);
			__LIB_12__::func_676(&(uParam0->f_206), cVar0);
			__LIB_12__::func_839(&(uParam0->f_206), cVar0);
			__LIB_12__::func_779(uParam0, func_1(15));
			__LIB_12__::func_981(uParam0, 52290);
			__LIB_12__::func_982(uParam0, 52531);
			break;
		case 2:
			__LIB_12__::func_957(uParam0, iLocal_170, "wagon02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_159, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_166, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[0 /*20*/], "MRS_CALHOUN", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_1513[0 /*23*/], "CS_SCOTTGRAY", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_1513[1 /*23*/], "CS_IANGRAY", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[2 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[3 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[4 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^3", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[5 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^4", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[6 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^5", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[3 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^6", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_173[1 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^7", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[0 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^8", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[1 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^9", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[2 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^10", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_324[4 /*20*/], "RCSP_BEAUANDPENELOPE1_FEMALES_01^11", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[0], "p_sign_suffragette01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[2], "p_sign_suffragette03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[5], "p_sign_suffragette03x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[3], "p_sign_suffragette04x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[6], "p_sign_suffragette04x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[4], "p_sign_suffragette05x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_316[1], "p_sign_suffragette05x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1562[0], "A_M_M_RhdTownfolk_02", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1562[1], "A_M_M_RhdTownfolk_02^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1562[2], "A_M_M_RhdTownfolk_02^3", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1566[0], "RCSP_BEAUANDPENELOPE_MALES_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1566[1], "RCSP_BEAUANDPENELOPE_MALES_01^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1566[2], "RCSP_BEAUANDPENELOPE_MALES_01^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1566[3], "RCSP_BEAUANDPENELOPE_MALES_01^3", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1566[4], "RCSP_BEAUANDPENELOPE_MALES_01^4", 0, 0, 0);
			__LIB_12__::func_676(&(uParam0->f_206), "MultiStart");
			uParam0->f_206.f_338 = 120f;
			uParam0->f_206.f_339 = 140f;
			__LIB_12__::func_779(uParam0, func_1(16));
			__LIB_0__::func_88(&(uParam0->f_206), 268435456);
			__LIB_13__::func_16(uParam0, 52595);
			__LIB_12__::func_981(uParam0, 52748);
			__LIB_12__::func_982(uParam0, 53066);
			break;
		case 3:
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_159, "BeauGray", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1428, "Horse_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_163, "Horse_01^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_2160, "p_cs_billstack01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_2159, "p_cs_playersatchel", 0, 0, 0);
			__LIB_12__::func_779(uParam0, func_1(27));
			__LIB_12__::func_676(&(uParam0->f_206), "MultiStart");
			__LIB_12__::func_839(&(uParam0->f_206), "MultiStart");
			__LIB_0__::func_88(&(uParam0->f_206), 268435456);
			break;
	}
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_93(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159))
	{
		func_326(uParam0);
	}
	if (__LIB_1__::func_205(Global_35, iLocal_1674, 1, 0))
	{
		__LIB_9__::func_204(Global_35, func_1(0), &uLocal_2431, 10f, 7.5f, 7.25f, 7f, 0.25f, 0, 1, 1, 1, 1);
		PED::SET_PED_RESET_FLAG(Global_35, 108, true);
	}
	if (__LIB_0__::func_266(Global_35, func_1(0), 12f, 1, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
}

bool func_94(var uParam0)
{
	bool bVar0;
	if (__LIB_12__::func_738(uParam0))
	{
		return true;
	}
	bVar0 = false;
	if (__LIB_0__::func_1(uParam0->f_172, 4096) || __LIB_12__::func_766())
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		if (!bVar0)
		{
			return true;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		func_108(uParam0, bVar0);
		if (__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			return true;
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (bVar0)
		{
			return false;
		}
		if (uParam0->f_171 != 0 || func_330(uParam0))
		{
			if (__LIB_13__::func_40(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_98(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	__LIB_17__::func_532();
	func_334();
	__LIB_1__::func_572(Global_36, 500f, 0, 0, 0, 0, 0);
	iVar1 = iParam1;
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_159, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_163))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_163, false);
	}
	Var2 = { func_63(iParam1) };
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var2, Var2.f_3, true, false, true);
	iLocal_2440 = 0;
	if (iVar1 >= 4)
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
	}
	if (iVar1 >= 2)
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
	}
	switch (iVar1)
	{
		case 0:
			SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
			if (__LIB_12__::func_936(uParam0))
			{
				if (!func_336(uParam0, iParam1))
				{
					return 2;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
				{
					func_337(&iLocal_1428, vLocal_2166, fLocal_2169, 1, 1, 1, 1);
					return 2;
				}
				iLocal_15 = 0;
				func_89(uParam0);
				__LIB_12__::func_997(uParam0, func_63(0), func_63(1), 0, 1, 0);
				return 5;
			}
			else
			{
				if (!func_336(uParam0, iParam1))
				{
					return 2;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
				{
					func_337(&iLocal_1428, vLocal_2166, fLocal_2169, 1, 1, 1, 1);
					return 2;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1428))
				{
					__LIB_1__::func_571(Global_35, iLocal_1428, 0, -1, 1);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1428, vLocal_2166, fLocal_2169, true, false, true);
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(0), func_2(0), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(12), func_2(12), true, false, true);
				if (!bLocal_1663)
				{
					__LIB_12__::func_994(&uLocal_1649, vLocal_2166, fLocal_2169, 0, 0, 0, 1, 0, 0, 1, 1);
					bLocal_1663 = true;
				}
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[2 /*5*/]))
				{
					func_340(2, 0, 0);
					return 2;
				}
				if (!__LIB_10__::func_926(&uLocal_1649))
				{
					return 2;
				}
				__LIB_1__::func_948(-677410626, 0, -1f, 1, 1, 0, 0, 0);
				iLocal_15 = 1;
				iLocal_16 = 0;
				__LIB_1__::func_571(iLocal_159, iLocal_163, 0, -1, 1);
				__LIB_0__::func_489(0, 0);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (__LIB_4__::func_511())
				{
					__LIB_12__::func_997(uParam0, func_63(0), func_63(1), 0, 1, 0);
				}
				bLocal_1663 = false;
			}
			return 7;
		case 1:
			if (!bLocal_2445)
			{
				if (!bLocal_2238)
				{
					STREAMING::REQUEST_MODEL(iLocal_1587, false);
					STREAMING::REQUEST_MODEL(iLocal_1585, false);
					STREAMING::REQUEST_MODEL(iLocal_1586, false);
					STREAMING::REQUEST_MODEL(iLocal_1588, false);
					bLocal_2238 = true;
				}
				if (!bLocal_1663)
				{
					__LIB_12__::func_994(&uLocal_1649, vLocal_2170, fLocal_2173, 0, 0, 0, 1, 0, 0, 1, 1);
					bLocal_1663 = true;
				}
				if (!__LIB_10__::func_926(&uLocal_1649))
				{
					return 2;
				}
				if (!func_336(uParam0, iParam1))
				{
					return 2;
				}
				if (!func_344(uParam0))
				{
					return 2;
				}
				if (!func_345(1, 0, 1))
				{
					return 2;
				}
				if (!func_346())
				{
					return 2;
				}
				if (!func_347())
				{
					return 2;
				}
				if (!func_340(63, 1, 0))
				{
					return 2;
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, true);
				ENTITY::SET_ENTITY_COORDS(iLocal_166, 1401.694f, -1418.2f, 78.5293f, true, false, true, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(5), func_2(5), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(5), func_2(5), true, false, true);
				__LIB_1__::func_571(iLocal_159, iLocal_163, 0, -1, 1);
				__LIB_0__::func_489(0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_170, 0f);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_170, func_1(17), func_2(17), true, false, true);
				func_348(1);
				func_349(3);
				func_350(2);
				func_351(5, 0);
				func_352(11);
				if (!bLocal_2446)
				{
					iLocal_15 = 1;
					func_89(uParam0);
					bLocal_2446 = true;
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, false);
				iLocal_15 = 1;
				iLocal_16 = 0;
				bLocal_1663 = false;
				func_89(uParam0);
				bLocal_2445 = false;
				func_353(uParam0);
				bLocal_2445 = true;
				__LIB_1__::func_572(func_1(26), 500f, 0, 0, 0, 0, 0);
				__LIB_0__::func_568(func_1(26), 500f, 0);
				if (__LIB_4__::func_511())
				{
					__LIB_12__::func_997(uParam0, func_63(1), func_63(2), 1, 2, 0);
				}
				ENTITY::SET_ENTITY_COORDS(Local_324[4 /*20*/], 1290.316f, -1310.462f, 76.0403f, true, false, true, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_324[4 /*20*/], true);
				return 5;
			}
			break;
		case 2:
			if (!bLocal_2238)
			{
				STREAMING::REQUEST_MODEL(iLocal_1587, false);
				STREAMING::REQUEST_MODEL(iLocal_1585, false);
				STREAMING::REQUEST_MODEL(iLocal_1586, false);
				STREAMING::REQUEST_MODEL(iLocal_1588, false);
				bLocal_2238 = true;
			}
			if (!bLocal_2445)
			{
				if (__LIB_4__::func_511())
				{
					__LIB_12__::func_997(uParam0, func_63(2), func_63(3), 2, 3, 0);
				}
				if (!bLocal_1663)
				{
					__LIB_12__::func_994(&uLocal_1649, vLocal_2170, fLocal_2173, 0, 0, 0, 1, 0, 0, 1, 1);
					bLocal_1663 = true;
				}
				if (!__LIB_10__::func_926(&uLocal_1649))
				{
					return 2;
				}
				if (!func_336(uParam0, iParam1))
				{
					return 2;
				}
				if (!func_344(uParam0))
				{
					return 2;
				}
				if (!func_345(1, 0, 1))
				{
					return 2;
				}
				if (!func_346())
				{
					return 2;
				}
				if (!func_347())
				{
					return 2;
				}
				if (!func_340(63, 1, 0))
				{
					return 2;
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(5), func_2(5), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(5), func_2(5), true, false, true);
				ENTITY::SET_ENTITY_COORDS(Local_324[4 /*20*/], 1290.316f, -1310.462f, 76.0403f, true, false, true, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_324[4 /*20*/], true);
				__LIB_1__::func_571(iLocal_159, iLocal_163, 0, -1, 1);
				__LIB_4__::func_185(&Global_35, &iLocal_170, -1, 1);
				__LIB_0__::func_489(0, 0);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_170, func_1(17), func_2(17), true, false, true);
				func_348(1);
				iLocal_15 = 2;
				func_89(uParam0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, false);
				bLocal_2445 = true;
			}
			else
			{
				if (!__LIB_0__::func_255(iLocal_163, 0))
				{
					if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_163))
					{
						return 2;
					}
				}
				if (!__LIB_0__::func_255(iLocal_159, 0))
				{
					if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_159))
					{
						return 2;
					}
				}
				__LIB_4__::func_185(&Global_35, &iLocal_170, -1, 1);
				func_356();
				if (iLocal_18 >= 2)
				{
					__LIB_1__::func_572(func_1(26), 500f, 0, 0, 1, 1, 0);
					__LIB_0__::func_568(func_1(26), 500f, 0);
					func_349(3);
					func_350(2);
					func_351(5, 0);
					func_352(11);
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_353(uParam0);
					bLocal_1725 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1560))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1560, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_2__::func_788(&iLocal_1560, 1, 0, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1561))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1561, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_2__::func_788(&iLocal_1561, 1, 0, 1);
					}
					iLocal_15 = 2;
					func_89(uParam0);
					iLocal_16 = 0;
					bLocal_1663 = false;
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_170, func_1(17), func_2(17), true, false, true);
					return 7;
				}
			}
			return 2;
		case 3:
			if (!bLocal_2238)
			{
				STREAMING::REQUEST_MODEL(iLocal_1587, false);
				STREAMING::REQUEST_MODEL(iLocal_1585, false);
				STREAMING::REQUEST_MODEL(iLocal_1586, false);
				STREAMING::REQUEST_MODEL(iLocal_1588, false);
				bLocal_2238 = true;
			}
			if (!bLocal_1663)
			{
				__LIB_12__::func_994(&uLocal_1649, vLocal_2174, fLocal_2177, 0, 0, 0, 1, 0, 0, 1, 1);
				bLocal_1663 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_1649))
			{
				return 2;
			}
			if (!func_336(uParam0, iParam1))
			{
				return 2;
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_159, -1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(9), func_2(9), true, false, true);
			}
			if (!func_344(uParam0))
			{
				return 2;
			}
			if (!func_357(uParam0, 1))
			{
				return 2;
			}
			if (!func_345(0, 0, 1))
			{
				return 2;
			}
			if (!func_358(uParam0, 0))
			{
				return 2;
			}
			if (!func_359())
			{
				return 2;
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				__LIB_2__::func_919(Local_173[iVar0 /*20*/], 1, 1);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_173[iVar0 /*20*/], func_361(iVar0), func_362(iVar0), true, false, true);
				iVar0++;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_166, func_1(16), func_2(16), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_170, func_1(18), func_2(18), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(13), func_2(13), true, false, true);
			func_363(6);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_2174, fLocal_2177, true, false, true);
			__LIB_0__::func_489(0, 0);
			func_350(4);
			iLocal_15 = 2;
			func_89(uParam0);
			bLocal_1663 = false;
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, false);
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_63(3), func_63(4), 3, 4, 0);
			}
			if (!__LIB_0__::func_255(Local_173[1 /*20*/], 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_173[1 /*20*/], func_361(1), func_362(1), true, false, true);
			}
			return 5;
		case 4:
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_63(4), func_63(5), 4, 5, 0);
			}
			if (!bLocal_1663)
			{
				__LIB_12__::func_994(&uLocal_1649, vLocal_2174, fLocal_2177, 0, 0, 0, 1, 0, 0, 1, 1);
				bLocal_1663 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_1649))
			{
				return 2;
			}
			if (!func_344(uParam0))
			{
				return 2;
			}
			if (!func_357(uParam0, 1))
			{
				return 2;
			}
			if (!func_345(0, 0, 1))
			{
				return 2;
			}
			if (!func_358(uParam0, 0))
			{
				return 2;
			}
			if (!func_336(uParam0, iParam1))
			{
				return 2;
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_159, -1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(9), func_2(9), true, false, true);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				__LIB_2__::func_919(Local_173[iVar0 /*20*/], 1, 1);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_173[iVar0 /*20*/], func_361(iVar0), func_362(iVar0), true, false, true);
				iVar0++;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_166, func_1(16), func_2(16), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_170, func_1(18), func_2(18), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(13), func_2(13), true, false, true);
			func_363(6);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_2174, fLocal_2177, true, false, true);
			__LIB_0__::func_489(0, 0);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			func_350(4);
			iLocal_15 = 3;
			func_89(uParam0);
			bLocal_1663 = false;
			return 7;
		case 5:
			if (!func_336(uParam0, iParam1))
			{
				return 2;
			}
			if (!func_358(uParam0, 0))
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(2), func_2(2), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(14), func_2(14), true, false, true);
			if (!bLocal_1663)
			{
				__LIB_12__::func_994(&uLocal_1649, vLocal_2178, fLocal_2181, 0, 0, 0, 1, 0, 0, 1, 1);
				bLocal_1663 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_1649))
			{
				return 2;
			}
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			iLocal_15 = 3;
			func_89(uParam0);
			bLocal_1663 = false;
			return 5;
	}
	return 2;
}

bool func_100(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!__LIB_0__::func_1(uParam0->f_172, 1))
		{
			return false;
		}
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return false;
		}
		MISC::_0xA565FAC215CBC77D();
		return true;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if (!__LIB_13__::func_281(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_87(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_89(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		func_108(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!func_370(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

void func_101(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 2048))
	{
		return;
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		__LIB_12__::func_912(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 512))
		{
			__LIB_12__::func_742(uParam0, 0);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		__LIB_12__::func_997(uParam0, func_63(0), func_63(1), 0, 1, 1);
	}
	__LIB_0__::func_8(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (__LIB_11__::func_394(Global_35))
		{
			if (__LIB_12__::func_771())
			{
				__LIB_1__::func_240(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_7(&(uParam0->f_172), 2048);
}

int func_103(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_376(Var0, &(uParam0->f_206), uParam0);
}

int func_105(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			iLocal_15 = 1;
			if (__LIB_1__::func_707(joaat("DOCUMENT_PENELOPES_LETTER"), 1, 0))
			{
				func_381(joaat("DOCUMENT_PENELOPES_LETTER"), 1, 0, -1387038764, 0);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_206.f_348))
			{
				PED::_SET_PED_ON_MOUNT(iLocal_159, iLocal_163, -1, true);
			}
			__LIB_1__::func_616(1200, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			__LIB_1__::func_951(&iLocal_161);
			return 7;
		case 1:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			__LIB_4__::func_185(&Global_35, &iLocal_170, -1, 1);
			ENTITY::SET_ENTITY_COORDS(Local_324[4 /*20*/], 1290.316f, -1310.462f, 76.0403f, true, false, true, true);
			ENTITY::SET_ENTITY_VISIBLE(Local_324[4 /*20*/], true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1560))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1560, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_2__::func_788(&iLocal_1560, 1, 0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1561))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1561, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_2__::func_788(&iLocal_1561, 1, 0, 1);
			}
			func_348(1);
			iLocal_15 = 2;
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
			return 7;
		case 2:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			iLocal_15 = 3;
			func_350(4);
			func_384();
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, false);
			func_89(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_206.f_348))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_1513[1 /*23*/], Local_1513[1 /*23*/].f_6, Local_1513[1 /*23*/].f_22, true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_1513[0 /*23*/], Local_1513[0 /*23*/].f_6, Local_1513[0 /*23*/].f_22, true, false, true);
			}
			if (!__LIB_0__::func_255(Local_173[1 /*20*/], 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_173[1 /*20*/], func_361(1), func_362(1), true, false, true);
			}
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
			return 7;
		case 3:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				iLocal_1598 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(1346.359f, -1798.611f, 68.2199f, joaat("RE_MURDER_CAMPFIRE_RANGED_SCRIPT"), 200f, 0, false);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				TASK::_0x5A40040BB5AE3EA2(iLocal_1598);
			}
			__LIB_3__::func_152(41);
			__LIB_1__::func_616(3000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			return 8;
		default:
			break;
	}
	return 7;
}

bool func_106(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_13__::func_281(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_87(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_89(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				__LIB_12__::func_997(uParam0, func_63(0), func_63(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

void func_108(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (func_386(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_109(var uParam0)
{
	if (!func_218(4194304))
	{
		__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
		func_389(4194304);
		__LIB_1__::func_600(0);
	}
	func_391();
	func_326(uParam0);
	func_392();
	func_393(uParam0);
	func_394();
	__LIB_17__::func_532();
	func_395(0);
	if (!__LIB_0__::func_255(iLocal_159, 0))
	{
		PED::SET_PED_RESET_FLAG(iLocal_159, 49, true);
	}
	__LIB_9__::func_827(20, 59, 59, 0);
	if (!func_218(8388608))
	{
		__LIB_1__::func_572(func_1(15), 450f, 0, 1, 0, 0, 0);
		__LIB_0__::func_568(func_1(15), 450f, 0);
		POPULATION::_0xC6DCC2A3A8825C85(1);
		func_389(8388608);
	}
	POPULATION::_0xF45E46DEECF7DF6E(2048, 0, 0, -1, -1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	PED::_0xC0258742B034DFAF(0f);
	PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xBA0980B5C0A11924(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0x28CB6391ACEDD9DB(0f);
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("rbap13_wagonroute", Global_36, &iLocal_1646);
	TASK::WAYPOINT_RECORDING_GET_COORD("rbap13_wagonroute", iLocal_1646, &vLocal_1643);
	switch (iLocal_14)
	{
		case 0:
			if (func_397(uParam0))
			{
				func_350(2);
				return 5;
			}
			break;
		case 2:
			__LIB_0__::func_568(Global_36, 450f, 0);
			if (func_398(uParam0))
			{
				if (!__LIB_6__::func_904())
				{
					func_350(3);
				}
			}
			break;
		case 3:
			if (func_400(uParam0))
			{
				func_350(4);
				return 5;
			}
			break;
		case 4:
			if (func_401(uParam0))
			{
				if (func_218(32768))
				{
					func_350(7);
				}
				else
				{
					func_350(5);
				}
			}
			break;
		case 5:
			if (func_402(uParam0))
			{
				func_350(7);
			}
			break;
		case 7:
			if (func_403(uParam0))
			{
				func_350(8);
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				iLocal_1598 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(1346.359f, -1798.611f, 68.2199f, joaat("RE_MURDER_CAMPFIRE_RANGED_SCRIPT"), 200f, 0, false);
			}
			break;
		case 8:
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			__LIB_12__::func_773(1, 1, 1, 1);
			__LIB_12__::func_937(uParam0, 5);
			__LIB_5__::func_20(1, 0);
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				iLocal_1598 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(1346.359f, -1798.611f, 68.2199f, joaat("RE_MURDER_CAMPFIRE_RANGED_SCRIPT"), 200f, 0, false);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				TASK::_0x5A40040BB5AE3EA2(iLocal_1598);
			}
			__LIB_3__::func_152(41);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[62 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[62 /*5*/]);
			}
			return 5;
	}
	bLocal_19 = true;
	iLocal_20 = 0;
	return 7;
}

void func_130(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char[] cVar0[8];
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_113())
	{
		__LIB_3__::func_727(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!__LIB_0__::func_13(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_FWB")))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_CLEMENS"), 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!__LIB_0__::func_113())
		{
			Global_1347702[iParam0 /*49*/].f_35 = 104;
			Global_1347702[104 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
		}
	}
	__LIB_12__::func_969(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		__LIB_12__::func_899(Global_1347702[iParam0 /*49*/].f_35);
		if (iParam1 == 1)
		{
			__LIB_4__::func_471(Global_1347702[iParam0 /*49*/].f_35, 0);
			if (__LIB_11__::func_197(iParam0))
			{
				Global_1347702[Global_1347702[iParam0 /*49*/].f_35 /*49*/].f_43 = Global_1347702[iParam0 /*49*/].f_43;
			}
		}
	}
	else
	{
		__LIB_12__::func_628();
	}
	if (!__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1) && !__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 33554432))
	{
		if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 262144))
		{
			if (bParam5)
			{
				__LIB_10__::func_709(iParam0);
			}
			bParam5 = false;
			cVar0 = __LIB_1__::func_613(Global_1347702[iParam0 /*49*/].f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cVar0), 2);
			}
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 4);
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_441(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_152(var uParam0)
{
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
			{
				func_337(&iLocal_1428, 0f, 0f, 0f, 0f, 1, 1, 1, 1);
				return false;
			}
			else
			{
				__LIB_2__::func_426(&iLocal_159);
				__LIB_2__::func_426(&iLocal_163);
				return true;
			}
			break;
		case 11:
			func_352(20);
			if (!__LIB_13__::func_109(iLocal_159, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
			{
				return false;
			}
			break;
		default:
			if (!__LIB_13__::func_109(iLocal_159, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_161(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159) && PED::IS_PED_GROUP_MEMBER(iLocal_159, __LIB_0__::func_110(), 0))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_159);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "BNP12_GUARD_CONV");
	__LIB_2__::func_788(&iLocal_159, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_166, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_163, 1, 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1587);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1585);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1588);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1586);
	if (__LIB_2__::func_763(631, 0))
	{
		__LIB_2__::func_753(631, 0, 1, 0, 0);
	}
	if (__LIB_2__::func_763(632, 0))
	{
		__LIB_2__::func_753(632, 0, 1, 0, 0);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		__LIB_2__::func_788(&(Local_173[iVar0 /*20*/]), 1, 0, 1);
		if (Local_173[iVar0 /*20*/].f_17 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_173[iVar0 /*20*/].f_17);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_324[iVar0 /*20*/]) && PED::IS_PED_IN_GROUP(Local_324[iVar0 /*20*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_324[iVar0 /*20*/]);
			_NAMESPACE29::_0x0EABF182FBB63D72(Local_324[iVar0 /*20*/], 6, 1);
		}
		__LIB_2__::func_788(&(Local_324[iVar0 /*20*/]), 0, 1, 1);
		if (Local_324[iVar0 /*20*/].f_17 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(Local_324[iVar0 /*20*/].f_17))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_324[iVar0 /*20*/].f_17);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_446[iVar0 /*20*/]))
		{
			__LIB_2__::func_788(&(Local_446[iVar0 /*20*/]), 0, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_446[iVar0 /*20*/].f_16))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_446[iVar0 /*20*/].f_16));
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_446[iVar0 /*20*/].f_11))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_446[iVar0 /*20*/].f_11);
		}
		if (Local_446[iVar0 /*20*/].f_17 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(Local_446[iVar0 /*20*/].f_17))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_446[iVar0 /*20*/].f_17);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_2__::func_788(&(Local_1513[iVar0 /*23*/]), 1, 1, 1);
		__LIB_2__::func_788(&(Local_1513[iVar0 /*23*/].f_2), 1, 1, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_2__::func_788(&(Local_1432[iVar0 /*20*/]), 1, 0, 1);
		__LIB_1__::func_951(&(Local_1432[iVar0 /*20*/].f_16));
		if (Local_1432[iVar0 /*20*/].f_17 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(Local_1432[iVar0 /*20*/].f_17))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1432[iVar0 /*20*/].f_17);
			}
		}
		iVar0++;
	}
	__LIB_0__::func_325(&iLocal_160);
	__LIB_0__::func_325(&iLocal_1599);
	__LIB_0__::func_172(iLocal_1671);
	__LIB_0__::func_172(iLocal_1672);
	__LIB_0__::func_172(iLocal_1673);
	__LIB_2__::func_788(&iLocal_164, 1, 0, 1);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_165))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_168))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_172))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_314))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_314);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1585))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1585);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1589))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1589);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1590))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1590);
	}
	POPULATION::_0x74C2B3DC0B294102(iLocal_1668);
	POPULATION::_0xA1CFB35069D23C23(iLocal_1668);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1678, false);
	__LIB_0__::func_172(iLocal_1668);
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_2186[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_2186[iVar0]);
		}
		iVar0++;
	}
	__LIB_4__::func_193(631);
	__LIB_4__::func_193(632);
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CGH_FARM_HAND"));
	PERSCHAR::_0x4F81EAD1DE8FA19B(iVar1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1562[iVar0]))
		{
			__LIB_2__::func_788(&(iLocal_1562[iVar0]), 0, 1, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1566[iVar0]))
		{
			__LIB_2__::func_788(&(iLocal_1566[iVar0]), 0, 1, 1);
		}
		iVar0++;
	}
	__LIB_10__::func_24(joaat("CGH_HORSE_GUARD"));
	__LIB_10__::func_24(joaat("CGH_FIELD_GUARD"));
	__LIB_4__::func_193(633);
	__LIB_4__::func_193(627);
}

void func_183(int iParam0)
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
	func_498();
}

void func_190()
{
	Local_324[0 /*20*/].f_19 = 723785634;
	Local_324[1 /*20*/].f_19 = 92458080;
	Local_324[2 /*20*/].f_19 = -631044895;
	Local_324[3 /*20*/].f_19 = -1178090581;
	Local_324[4 /*20*/].f_19 = 646454646;
	Local_324[5 /*20*/].f_19 = -295686949;
}

void func_191()
{
	Local_173[1 /*20*/].f_19 = 1888985740;
	Local_173[2 /*20*/].f_19 = 1652360791;
	Local_173[3 /*20*/].f_19 = -504265410;
	Local_173[4 /*20*/].f_19 = -612403110;
	Local_173[5 /*20*/].f_19 = -851584041;
	Local_173[6 /*20*/].f_19 = -1193528556;
}

void func_192()
{
	Local_1432[1 /*20*/].f_17 = joaat("P_APPLE01X");
	Local_1432[3 /*20*/].f_17 = joaat("P_APPLE01X");
}

void func_193()
{
	Local_1513[0 /*23*/].f_3 = { 1286.696f, -1308.803f, 76.0404f };
	Local_1513[1 /*23*/].f_3 = { 1286.696f, -1308.803f, 76.0404f };
	Local_1513[0 /*23*/].f_11 = { 1320.682f, -1287.831f, 75.3074f };
	Local_1513[1 /*23*/].f_11 = { 1320.818f, -1285.151f, 75.3802f };
	Local_1513[0 /*23*/].f_15 = { -2.5f, -1f, 0f };
	Local_1513[1 /*23*/].f_15 = { 2f, -1.5f, 0f };
	Local_1513[0 /*23*/].f_9 = 121.5863f;
	Local_1513[1 /*23*/].f_9 = 153.9735f;
	Local_1513[0 /*23*/].f_14 = 39.6244f;
	Local_1513[1 /*23*/].f_14 = 44.3274f;
	Local_1513[0 /*23*/].f_6 = { 1295.5f, -1314.29f, 75.69f };
	Local_1513[1 /*23*/].f_6 = { 1297.68f, -1313.2f, 75.65f };
	Local_1513[0 /*23*/].f_18 = { 1313.948f, -1301.993f, 75.0898f };
	Local_1513[1 /*23*/].f_18 = { 1297.914f, -1280.208f, 75.1689f };
	Local_1513[0 /*23*/].f_21 = 58.1594f;
	Local_1513[1 /*23*/].f_21 = 202.9539f;
	Local_1513[0 /*23*/].f_22 = 178.1128f;
	Local_1513[1 /*23*/].f_22 = 178.1128f;
}

void func_194()
{
	int iVar0;
	vLocal_91[0 /*3*/] = "BAP12_O_GET_HORSE";
	vLocal_91[1 /*3*/] = "BAP12_O_COOL";
	vLocal_91[2 /*3*/] = "BAP12_O_RETURN";
	vLocal_91[3 /*3*/] = "BAP12_O_WAGON";
	vLocal_91[9 /*3*/] = "BAP12_O_DRIVE";
	vLocal_91[5 /*3*/] = "BAP12_O_WARN1";
	vLocal_91[6 /*3*/] = "BAP12_O_WARN2";
	vLocal_91[7 /*3*/] = "BAP12_O_WARN3";
	vLocal_91[8 /*3*/] = "BAP12_O_WARN4";
	vLocal_91[4 /*3*/] = "BAP12_O_STOP";
	vLocal_91[10 /*3*/] = "BAP12_IG_SONG";
	vLocal_91[12 /*3*/] = "BAP12_O_GRAB";
	vLocal_91[13 /*3*/] = "BAP12_O_DRAG";
	vLocal_91[11 /*3*/] = "BAP12_IG_HECK";
	vLocal_91[14 /*3*/] = "BAP12_O_ALLEY";
	vLocal_91[15 /*3*/] = "BAP12_O_LEAVE";
	vLocal_91[16 /*3*/] = "BAP12_O_COOL";
	vLocal_91[17 /*3*/] = "BAP12_O_COAC";
	vLocal_91[18 /*3*/] = "BAP12_O_BEAT";
	vLocal_91[20 /*3*/] = "BAP12_O_HORSE";
	vLocal_91[19 /*3*/] = "BAP12_O_HORSE";
	iVar0 = 0;
	while (iVar0 < 21)
	{
		vLocal_91[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
}

void func_195()
{
	Local_1833[0 /*5*/].f_1 = "script@rcm@bnp1@leadin@rc3@base";
	Local_1833[0 /*5*/].f_2 = func_501(0);
	Local_1833[1 /*5*/].f_1 = "script@rcm@bnp1@leadin@rc3@front";
	Local_1833[1 /*5*/].f_2 = func_501(1);
	Local_1833[2 /*5*/].f_1 = "script@timelapse@rbnp12_timelapse";
	Local_1833[2 /*5*/].f_2 = func_501(2);
	Local_1833[3 /*5*/].f_1 = "script@rcm@bnp1@leadin@s2@mcs1@leadin_crowd";
	Local_1833[3 /*5*/].f_2 = "pl_loop_A_leadin_loop_B";
	Local_1833[4 /*5*/].f_1 = "script@rcm@bnp1@leadin@s2@mcs1@leadin_penelope";
	Local_1833[4 /*5*/].f_2 = "pl_loop_A_leadin_loop_B";
	Local_1833[5 /*5*/].f_1 = "script@rcm@bnp1@ig@s2@ig5_attack_the_wagon@ig5_taunt_heckler";
	Local_1833[5 /*5*/].f_2 = "pbl_action";
	Local_1833[6 /*5*/].f_1 = "script@rcm@bnp1@ig@s2@ig5_attack_the_wagon@ig5_taunt_supporters";
	Local_1833[6 /*5*/].f_2 = "pbl_React_To_Heckler_Taunts";
	Local_1833[7 /*5*/].f_1 = "script@rcm@bnp1@ig@s2@ig5_attack_the_wagon@ig5_action";
	Local_1833[7 /*5*/].f_2 = "pbl_action";
	Local_1833[8 /*5*/].f_1 = "script@rcm@bnp1@ig@s2@ig7_rallycontinues@mrs_calhoun";
	Local_1833[8 /*5*/].f_2 = "pl_base";
	Local_1833[9 /*5*/].f_1 = "script@rcm@bnp1@ig@s2@ig6_deal_with_grays@ig6_deal_with_grays_arthur_scott";
	Local_1833[9 /*5*/].f_2 = "pbl_New_In_Town_Son";
	Local_1833[10 /*5*/].f_1 = "script@rcm@bnp1@ig@s2@ig6_deal_with_grays@ig6_deal_with_grays_ian";
	Local_1833[10 /*5*/].f_2 = "pbl_Ian_Idle_Loop_A";
	Local_1833[11 /*5*/].f_1 = "script@rcm@bnp1@ig@s2@ig6_deal_with_grays@ig6_deal_with_grays_beau";
	Local_1833[11 /*5*/].f_2 = "pbl_Enter_Idle_Loop";
	Local_1833[63 /*5*/].f_1 = "script@rcm@bnp1@ig@s2@ig2_signing_on_wagon@ig2_signing_on_wagon";
	Local_1833[63 /*5*/].f_2 = "pbl_Intro_Singing";
	Local_1833[64 /*5*/].f_1 = "script@rcm@bnp1@ig@s2@ig7_rallycontinues@mrs_calhoun";
	Local_1833[64 /*5*/].f_2 = "PL_SPEECH";
	Local_1833[62 /*5*/].f_1 = "script@rcm@rbnp1@leadin@s2@ext@leadin";
	Local_1833[62 /*5*/].f_2 = "";
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAP12_GUARD";
		case 1:
			return "BAP12_GUARD_NM";
		case 2:
			return "BAP12_RESPONSE";
		case 3:
			return "BAP12_RESPONSE2";
		case 4:
			return "RBNP1_GBEAU1";
		case 5:
			return "RBNP1_GBEAU2";
		case 6:
			return "RBNP1_GBEAU3";
		case 7:
			return "BNP1_S2_CMONB";
		case 8:
			return "BAP12_MOUNT";
		case 9:
			return "BAP12_BMOUNT";
		case 11:
			return "BAP12_DIRECT";
		case 10:
			return "BAP12_RIDE";
		case 12:
			return "BAP12_DIRECT2";
		case 13:
			return "BAP12_DAWD";
		case 14:
			return "BAP12_RIDE";
		case 15:
			return "BAP12_THERE";
		case 16:
			return "BAP12_DRIVE";
		case 17:
			return "BNP1_S1_IG5_PRO";
		case 18:
			return "BAP12_CHAT1";
		case 19:
			return "BAP12_SHERIFF";
		case 20:
			return "BAP12_CAL_HECK";
		case 21:
			return "BAP12_CAL_HECK2";
		case 22:
			return "BAP12_STPD1";
		case 23:
			return "BAP12_STPD2";
		case 24:
			return "BAP12_STPD3";
		case 25:
			return "BAP12_ROUT1";
		case 26:
			return "BAP12_ROUT2";
		case 27:
			return "BAP12_CALDIR";
		case 28:
			return "BAP12_CAL_BANK";
		case 29:
			return "BAP12_CAL_FUR";
		case 30:
			return "BAP12_CAL_HERE";
		case 31:
			return "BAP12_PEDS";
		case 32:
			return "BAP12_RECK";
		case 33:
			return "BAP12_RUNOVER2";
		case 34:
			return "BAP12_ROUT1";
		case 35:
			return "BAP12_ROUT2";
		case 50:
			return "BNP12_LEAVE";
		case 48:
			return "BAP12_RUNOVER1";
		case 49:
			return "BAP12_RUNOVER2";
		case 51:
			return "BNP12_LEAVE_ALT";
		case 52:
			return "BNP12_RET_RALLY";
		case 53:
			return "RBNP12_B_TOWN";
		case 54:
			return "BAP12_CHAP";
		case 55:
			return "BAP12_CHAPDAWD";
		case 56:
			return "BAP12_CHAPARR";
		case 57:
			return "BNP12_IAN_LEAV";
		case 58:
			return "BNP12_IAN_CHAS";
		case 59:
			return "BNP12_SCOT_LEAV";
		case 60:
			return "BNP12_SCOT_CHAS";
		case 61:
			return "BNP12_DRAW";
		case 62:
			return "BNP12_USE";
		case 63:
			return "BNP12_HOG";
		case 36:
			return "BAP12_FIGHT";
		case 37:
			return "BAP12_FIGHT2";
		case 38:
			return "BAP12_TAUNT2";
		case 39:
			return "BAP12_TAUNT";
		case 40:
			return "BAP12_SCOTT";
		case 41:
			return "BAP12_IAN";
		case 42:
			return "BAP12_SCOTT_EN";
		case 43:
			return "BAP12_SCOTT_K";
		case 44:
			return "BAP12_IAN_EN";
		case 45:
			return "BAP12_IAN_K";
		case 46:
			return "BNP12_KNOCK1";
		case 47:
			return "BNP12_KNOCK2";
		case 64:
			return "BNP1_S2_IG6_C1";
		case 65:
			return "BNP1_S2_IG6_C2B";
		case 66:
			return "BNP1_S2_IG6_A2B";
		case 68:
			return "BAP12DEFIAN";
		case 67:
			return "BAP12DEFSCOTT";
		default:
			break;
	}
	return "";
}

int func_215(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_9__::func_786(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_530(0, 0);
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

void func_216(var uParam0)
{
	if (!__LIB_0__::func_899(&uLocal_1722))
	{
		if (iLocal_14 < 1)
		{
			if (func_534(3, 2, func_501(8), 0) && func_534(4, 2, func_501(9), 0))
			{
				__LIB_2__::func_259(&uLocal_1722);
			}
		}
		else
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[8 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[8 /*5*/]);
			}
			func_535();
			func_349(5);
			func_351(7, 0);
			__LIB_2__::func_259(&uLocal_1722);
		}
	}
}

bool func_218(int iParam0)
{
	return __LIB_0__::func_27(iLocal_1648, iParam0);
}

bool func_219(var uParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_159))
	{
		if (iLocal_14 < 4)
		{
			if (func_537(uParam0, &iLocal_159, "BAP12_F_ABAN5", iLocal_159, 69))
			{
				return true;
			}
		}
		else if (PED::IS_PED_DEAD_OR_DYING(iLocal_159, true))
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN5", 24);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
	{
		if (func_537(uParam0, &iLocal_166, "BAP12_F_ABAN6", iLocal_159, 69))
		{
			return true;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_173[iVar0 /*20*/]))
		{
			if ((func_537(uParam0, &(Local_173[iVar0 /*20*/]), "BAP12_F_ABAN7", iLocal_166, 69) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_173[iVar0 /*20*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_173[iVar0 /*20*/], iLocal_170, 1, 1))
			{
				if (iLocal_14 == 2)
				{
					if (func_225(uParam0, 49, &(Local_173[0 /*20*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
					{
						StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
						return true;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
					return true;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_324[iVar0 /*20*/]))
		{
			if ((PED::IS_PED_DEAD_OR_DYING(Local_324[iVar0 /*20*/], true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_324[iVar0 /*20*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_324[iVar0 /*20*/], iLocal_170, 1, 1))
			{
				if (PED::IS_PED_INJURED(Local_324[iVar0 /*20*/]) && ENTITY::_GET_ENTITY_HEALTH_FLOAT(Local_324[iVar0 /*20*/]) < 0.3f)
				{
					if (iLocal_14 == 2)
					{
						if (func_225(uParam0, 49, &(Local_173[0 /*20*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
						{
							StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
							return true;
						}
					}
					else
					{
						StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		if (!__LIB_0__::func_272(iLocal_163, 1))
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN8", 24);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170, false, false))
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN9", 24);
			return true;
		}
		if (!bLocal_2438)
		{
			bLocal_2438 = __LIB_4__::func_475(&iLocal_170);
		}
		else
		{
			if (__LIB_11__::func_330(iLocal_170, 0))
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN9", 24);
				return true;
			}
			if (__LIB_11__::func_330(iLocal_170, 1))
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN9", 24);
				return true;
			}
		}
	}
	return false;
}

bool func_225(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5, bool bParam6)
{
	if (!iLocal_21[iParam1])
	{
		if (__LIB_0__::func_48(*iParam2, Global_35, fParam3, 1))
		{
			if (!bParam6)
			{
				__LIB_5__::func_20(1, 0);
			}
			if (__LIB_5__::func_463())
			{
				return false;
			}
			if (__LIB_12__::func_876(uParam0, func_196(iParam1), 0))
			{
				if (*iParam2 != Global_35)
				{
					TASK::TASK_LOOK_AT_ENTITY(*iParam2, Global_35, 30000, 4, 51, 0);
				}
				iLocal_21[iParam1] = 1;
			}
		}
		else
		{
			return false;
		}
	}
	else if (__LIB_6__::func_903(func_196(iParam1)))
	{
		if (!__LIB_0__::func_48(*iParam2, Global_35, fParam4, 1))
		{
			__LIB_6__::func_900(func_196(iParam1), 0, 0);
		}
		iLocal_21[iParam1] = 1;
		return true;
	}
	return false;
}

bool func_229(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	if (!iParam6 == 0)
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam6, 1, 1);
		bVar1 = true;
	}
	else
	{
		fVar0 = __LIB_0__::func_94(Global_35, vParam3, 1);
	}
	if (fVar0 > fParam9)
	{
		if (bVar1)
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iParam6))
			{
				StringCopy(&(uParam0->f_2578), sParam2, 24);
				return true;
			}
		}
		else
		{
			StringCopy(&(uParam0->f_2578), sParam2, 24);
			return true;
		}
	}
	else if (fVar0 > fParam7)
	{
		if (!vLocal_91[iParam1 /*3*/].f_1)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422(vLocal_91[iParam1 /*3*/], 7500, 0, 1, 0, 0, -1, -1, 0);
			vLocal_91[iParam1 /*3*/].f_1 = 1;
		}
	}
	else if (fVar0 < fParam8)
	{
		__LIB_18__::func_609(vLocal_91[iParam1 /*3*/]);
		if (vLocal_91[iParam1 /*3*/].f_1)
		{
		}
		iVar2 = 0;
		while (iVar2 < 21)
		{
			vLocal_91[iVar2 /*3*/].f_2 = 0;
			iVar2++;
		}
		vLocal_91[iParam1 /*3*/].f_1 = 0;
	}
	return false;
}

bool func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1347702[iParam0 /*49*/].f_13 & 8 != 0)
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		if (!__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return true;
			}
		}
		if (__LIB_1__::func_25(Global_1835011[67 /*74*/].f_1, 1))
		{
			if ((!__LIB_1__::func_25(Global_1347702[8 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[67 /*74*/].f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[67 /*74*/].f_22))) > 0)
				{
					return true;
				}
			}
		}
	}
	else if ((!__LIB_8__::func_779(2) && !__LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[59 /*49*/].f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return true;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = __LIB_1__::func_293(__LIB_3__::func_574(65536), 0, 3, __LIB_3__::func_575(65536));
		if (__LIB_0__::func_6(iVar1))
		{
			iVar0 = __LIB_0__::func_895(iVar1);
			if (!__LIB_0__::func_27(iVar0, 4))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1347702[62 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[0 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[94 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1835011[25 /*74*/].f_1, 1)) && (__LIB_1__::func_25(Global_1835011[8 /*74*/].f_1, 1) || (__LIB_1__::func_25(Global_1347702[98 /*49*/].f_15, 1) && __LIB_0__::func_895(Global_1347702[98 /*49*/].f_15) == 0)))
		{
			return true;
		}
	}
	else if (iParam0 == 27)
	{
		if (!__LIB_1__::func_25(Global_1835011[34 /*74*/].f_1, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 42)
	{
		if (!__LIB_1__::func_25(Global_1347702[41 /*49*/].f_15, 1))
		{
			if (!__LIB_0__::func_315(8))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!__LIB_11__::func_139(2))
		{
			return true;
		}
	}
	else if (iParam0 == 52)
	{
		if (!__LIB_1__::func_25(Global_1347702[51 /*49*/].f_15, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 57)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (__LIB_5__::func_297(Global_1347702[iParam0 /*49*/].f_15) == 0)
		{
			if (__LIB_0__::func_342() <= 160)
			{
				return true;
			}
			else
			{
				__LIB_7__::func_448(Global_1347702[iParam0 /*49*/].f_15, 1);
			}
		}
		if (!__LIB_1__::func_187(68))
		{
			return true;
		}
	}
	else if (iParam0 == 77)
	{
		if (__LIB_0__::func_702(Global_1835011[47 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[45 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_627(16, 0))
		{
			return true;
		}
	}
	else if (iParam0 == 87)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 95)
	{
		if (__LIB_0__::func_702(Global_1835011[20 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < Global_1898438)
		{
			return true;
		}
		else if (Global_1879534.f_1 || Global_1879534)
		{
			return true;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[113 /*49*/].f_42, false) && __LIB_11__::func_188())
		{
			if (__LIB_1__::func_422("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
				__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), 64);
				func_130(113, 1, 0, 1, 1, 1, 0);
				return true;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
		{
			return true;
		}
	}
	else if (iParam0 == 117)
	{
		if (__LIB_0__::func_702(Global_1835011[69 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 136)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	return false;
}

int func_242(var uParam0)
{
	if (func_219(uParam0) || iLocal_162 == 20)
	{
		bLocal_2439 = true;
		func_352(20);
	}
	if (bLocal_2439)
	{
		if (!__LIB_0__::func_899(&uLocal_1722))
		{
			__LIB_2__::func_259(&uLocal_1722);
		}
		else if (__LIB_4__::func_118(&uLocal_1722) > 1.5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_247(var uParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		__LIB_1__::func_600(1);
		func_579(4194304);
		func_580(1);
		if (__LIB_0__::func_272(Global_35, 0))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_170);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_170))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_170, true);
			}
			__LIB_10__::func_284(&iLocal_170);
		}
		func_582();
		if (PED::DOES_GROUP_EXIST(iLocal_445))
		{
			PED::REMOVE_GROUP(iLocal_445);
		}
		__LIB_1__::func_948(-215861784, 0, 0f, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(-543954117, 0, 0f, 0, 1, 0, 0, 0);
		__LIB_0__::func_267(1);
		STREAMING::_REMOVE_IMAP(-1390612743);
		func_583(0);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1671))
		{
			PATHFIND::_0xD17672447692478E(iLocal_1671, 0);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1672))
		{
			PATHFIND::_0xD17672447692478E(iLocal_1672, 0);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1673))
		{
			PATHFIND::_0xD17672447692478E(iLocal_1673, 0);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1598))
	{
		iLocal_1598 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(1346.359f, -1798.611f, 68.2199f, joaat("RE_MURDER_CAMPFIRE_RANGED_SCRIPT"), 200f, 0, false);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1598))
	{
		TASK::_0x5A40040BB5AE3EA2(iLocal_1598);
	}
	__LIB_3__::func_152(41);
	__LIB_1__::func_401(&uLocal_1614, 1);
	__LIB_1__::func_398(&uLocal_1614, 0);
	__LIB_2__::func_828(&uLocal_1614, 1);
	__LIB_0__::func_325(&iLocal_160);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_159))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_159);
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_324[iVar0 /*20*/]) && PED::IS_PED_IN_GROUP(Local_324[iVar0 /*20*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_324[iVar0 /*20*/]);
		}
		_NAMESPACE29::_0x0EABF182FBB63D72(Local_324[iVar0 /*20*/], 6, 1);
		__LIB_2__::func_788(&(Local_324[iVar0 /*20*/]), 0, 1, 1);
		iVar0++;
	}
	__LIB_0__::func_325(&iLocal_1599);
	__LIB_0__::func_325(&iLocal_171);
	__LIB_0__::func_325(&iLocal_167);
	__LIB_0__::func_267(1);
	__LIB_2__::func_161(func_1(26), 150f, 5);
	if (__LIB_2__::func_343(Global_35, iLocal_170, 0))
	{
		func_586(&iLocal_170);
	}
	if (!__LIB_12__::func_644(uParam0) == 1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_272(Local_173[iVar0 /*20*/], 0))
			{
				if (iVar0 == 0)
				{
					__LIB_4__::func_185(&(Local_173[iVar0 /*20*/]), &iLocal_170, -1, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_173[iVar0 /*20*/], 2, true);
					TASK::CLEAR_PED_TASKS(Local_173[iVar0 /*20*/], true, false);
					TASK::TASK_SMART_FLEE_COORD(Local_173[iVar0 /*20*/], func_1(18), 10000f, -1, false, 2f);
					__LIB_2__::func_788(&(Local_173[iVar0 /*20*/]), 1, 1, 1);
				}
				else
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_173[iVar0 /*20*/], false))
					{
						__LIB_2__::func_919(Local_173[iVar0 /*20*/], 0, 0);
					}
					TASK::TASK_WANDER_STANDARD(Local_173[iVar0 /*20*/], 40000f, 0);
					__LIB_2__::func_788(&(Local_173[iVar0 /*20*/]), 1, 1, 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_316[iVar0]))
			{
				fVar1 = (0.2f + IntToFloat((iVar0 + 1 / 20)));
				__LIB_7__::func_880(iLocal_316[iVar0], iLocal_170, 0f, -0.61f, fVar1, 90f, 0f, 0f, 1, 0, 0);
			}
			iVar0++;
		}
	}
	__LIB_0__::func_325(&iLocal_1599);
}

void func_262(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_89(uParam0);
	}
}

int func_286(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1668))
	{
		iLocal_1668 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1286.332f, -1316.415f, 76.95814f, 0f, 0f, -37.5624f, 27.1345f, 21.13703f, 8.672677f, "m_volBlockAlley");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1670))
	{
		iLocal_1670 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1305.05f, -1288.248f, 77.5198f, 0f, 0f, -36.80527f, 54.27384f, 48.38937f, 9.148383f, "m_volRallyFail");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1671))
	{
		iLocal_1671 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1409.628f, -1413.222f, 79.15613f, 0f, 0f, 143.6281f, 113.7582f, 193.8853f, 44.3486f, "m_volBlockMainRoad");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1676))
	{
		iLocal_1676 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1437.704f, -1435.688f, 78.87199f, 0f, 0f, -22.20845f, 4.101529f, 7.48863f, 4.006544f, "m_volFlee");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1672))
	{
		iLocal_1672 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1340.538f, -1309.592f, 79.15613f, 0f, 0f, -20.59999f, 161.659f, 150.1979f, 62.87448f, "m_volBlockPubRoad");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1673))
	{
		iLocal_1673 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1295.226f, -1566.839f, 79.15613f, 0f, 0f, 91.0927f, 185.7997f, 211.4777f, 40.12586f, "m_volBlockStartRoad");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1674))
	{
		iLocal_1674 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1862.033f, -1352.947f, 41.7592f, 0f, 0f, 21.03727f, 12.35007f, 8.990881f, 3.933563f, "m_volRestrict");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1675))
	{
		iLocal_1675 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1863.443f, -1350.684f, 42.27082f, 0f, 0f, 20.76675f, 3.686311f, 5.982208f, 2.096659f, "Force start!");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1669))
	{
		iLocal_1669 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1303.825f, -1293.668f, 78.40648f, 0f, 0f, -37.56239f, 27.1345f, 21.13703f, 8.672677f, "m_volTriggerCousinsToAttackBeau");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1677))
	{
		iLocal_1677 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1857.837f, -1352.987f, 42.52772f, 0f, 0f, 21.71396f, 7.713505f, 4.974056f, 2.583666f, "ILO");
	}
	if (!bVar0)
	{
		return 0;
	}
	__LIB_0__::func_568(func_1(0), 20f, 0);
	uLocal_1678 = __LIB_1__::func_391(iLocal_1668, 0, 0, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_1668, 0, 262144, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_1668, 0, 0, 0, -1, -1, 0);
	if (func_336(uParam0, -1))
	{
		STREAMING::_REQUEST_IMAP(-1390612743);
		__LIB_3__::func_123(1860876114, 1);
		return 1;
	}
	return 0;
}

void func_300(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
	{
		return;
	}
	else if (__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
		{
			if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_CATTLEMAN")))
			{
				__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN"));
			}
			func_654(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"));
			if (iVar1 < iVar0)
			{
				WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_302(var uParam0)
{
	func_657(&(uParam0->f_206));
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_159, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_163, false);
}

char* func_305(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			return "RBNP1_RC3";
		case 1:
			return "RBNP1_S2_MCS1";
		case 2:
			return "rbnp1_s2_mcs2";
		case 3:
			return "RBNP1_S2_EXT";
		default:
			break;
	}
	return "INVALID";
}

void func_308(var uParam0)
{
	int iVar0;
	int iVar1;
	LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
	PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
	__LIB_1__::func_948(-677410626, 0, -1f, 1, 1, 0, 0, 0);
	func_337(&iLocal_1428, vLocal_2166, fLocal_2169, 1, 1, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1428, func_1(22), func_2(22), true, false, true);
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, 1897.992f, -1353.131f, 41.5754f, 336.9154f, true, false, true);
	}
	__LIB_0__::func_568(Global_36, 180f, 0);
	__LIB_1__::func_572(1855.296f, -1353.97f, 41.2732f, 180f, 0, 0, 1, 0, 0);
	__LIB_12__::func_991(&iLocal_1747, iLocal_159);
	__LIB_2__::func_480(&Local_1808, 0, 0, 1, 0);
	iVar1 = 1592;
	MISC::CLEAR_AREA(1855.296f, -1353.97f, 41.2732f, 90f, iVar1);
}

void func_310(var uParam0)
{
	__LIB_1__::func_572(1855.296f, -1353.97f, 41.2732f, 180f, 0, 0, 1, 0, 0);
	LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
	func_657(uParam0);
	if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
	{
		if (!bLocal_1830)
		{
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
			bLocal_1830 = true;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
	{
		func_337(&iLocal_1428, vLocal_2166, fLocal_2169, 1, 1, 1, 1);
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_348) < 0.01f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1428, func_1(22), func_2(22), true, false, true);
		}
	}
	if (__LIB_13__::func_218(uParam0, iLocal_159, 0, 0, 1, 1))
	{
		func_352(3);
	}
}

bool func_315()
{
	int iVar0;
	iVar0 = __LIB_0__::func_96();
	if (iVar0 != 1 && iVar0 != 2)
	{
		if (CLOCK::GET_CLOCK_HOURS() < 6 || CLOCK::GET_CLOCK_HOURS() >= 21)
		{
			return true;
		}
	}
	return false;
}

int func_318(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1428, func_1(22), func_2(22), true, false, true);
	}
	__LIB_1__::func_571(iLocal_159, iLocal_163, 0, -1, 1);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(12), func_2(12), true, false, true);
	__LIB_1__::func_572(1855.296f, -1353.97f, 41.2732f, 180f, 0, 0, 0, 0, 0);
	return 1;
}

void func_321(var uParam0)
{
	__LIB_1__::func_572(Global_36, 500f, 0, 0, 0, 0, 0);
	if (!func_218(8388608))
	{
		__LIB_1__::func_572(func_1(15), 450f, 0, 1, 0, 0, 0);
		__LIB_0__::func_568(func_1(15), 450f, 0);
		POPULATION::_0xC6DCC2A3A8825C85(1);
		func_389(8388608);
	}
	vLocal_1643 = { ENTITY::GET_ENTITY_COORDS(iLocal_170, true, false) };
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[3 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[3 /*5*/]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[4 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[4 /*5*/]);
	}
	if (!func_347())
	{
		return;
	}
	if (!func_346())
	{
		return;
	}
	if (!func_345(1, 1, 1))
	{
		return;
	}
	if (!Local_1833[63 /*5*/].f_3)
	{
		Local_1833[63 /*5*/].f_3 = func_340(63, 1, 0);
	}
	if (__LIB_13__::func_218(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		func_534(63, 1, 0, 0);
	}
}

int func_322(var uParam0)
{
	if (!func_347())
	{
		return 0;
	}
	if (!func_346())
	{
		return 0;
	}
	if (!func_345(1, 1, 1))
	{
		return 0;
	}
	if (!func_340(63, 1, 0))
	{
		return 0;
	}
	return 1;
}

void func_323(var uParam0)
{
	int iVar0;
	__LIB_12__::func_891(uParam0, iLocal_170, "wagon02x", 0, 0, 0);
	__LIB_2__::func_426(&(Local_324[5 /*20*/]));
	func_583(1);
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_446[iVar0 /*20*/].f_11))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_446[iVar0 /*20*/].f_11);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_446[iVar0 /*20*/]))
		{
			func_674(iVar0, 7);
			__LIB_2__::func_788(&(Local_446[iVar0 /*20*/]), 1, 1, 1);
		}
		iVar0++;
	}
	if (!__LIB_0__::func_255(iLocal_163, 0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(13), func_2(13), true, false, true);
	}
}

void func_324(var uParam0)
{
	if (!func_218(8388608))
	{
		__LIB_1__::func_572(func_1(15), 450f, 0, 1, 0, 0, 0);
		__LIB_0__::func_568(func_1(15), 450f, 0);
		POPULATION::_0xC6DCC2A3A8825C85(1);
		func_389(8388608);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[6 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[6 /*5*/]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[5 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[5 /*5*/]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[7 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[7 /*5*/]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[63 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[63 /*5*/]);
	}
	if (__LIB_13__::func_218(uParam0, Local_1513[0 /*23*/], "CS_SCOTTGRAY", 0, 1, 1))
	{
		func_675(2, 0);
	}
	if (__LIB_13__::func_218(uParam0, Local_1513[1 /*23*/], "CS_IANGRAY", 0, 1, 1))
	{
		func_675(2, 1);
	}
	if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
	{
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_170, false))
	{
		PED::_0xE0B61ED8BB37712F(Global_35);
	}
	if (iLocal_2245 == 0)
	{
		__LIB_0__::func_568(Global_36, 180f, 0);
		__LIB_1__::func_572(Global_36, 180f, 0, 0, 0, 0, 0);
	}
	else if (iLocal_2245 > 3)
	{
		iLocal_2245 = 0;
	}
	iLocal_2245++;
}

int func_325(var uParam0)
{
	int iVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[6 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[6 /*5*/]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[5 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[5 /*5*/]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[7 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[7 /*5*/]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[63 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[63 /*5*/]);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_316[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_316[iVar0]));
		}
		iVar0++;
	}
	if (!__LIB_0__::func_255(Local_173[1 /*20*/], 0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_173[1 /*20*/], func_361(1), func_362(1), true, false, true);
	}
	if (!__LIB_0__::func_255(iLocal_163, 0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(13), func_2(13), true, false, true);
	}
	func_350(4);
	return 1;
}

void func_326(var uParam0)
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159) && !(iLocal_162 == 6 || iLocal_162 == 16))
	{
	}
	switch (iLocal_162)
	{
		case 0:
			break;
		case 1:
			if (!Local_1833[0 /*5*/].f_4)
			{
				if (func_534(0, 0, func_501(0), 0))
				{
					Local_1833[0 /*5*/].f_4 = 1;
				}
			}
			if (PED::_0xB7DBB2986B87E230(iLocal_159, 1f))
			{
				func_352(20);
			}
			break;
		case 2:
			if (!Local_1833[1 /*5*/].f_4)
			{
				if (func_534(1, 0, func_501(1), 0))
				{
					Local_1833[1 /*5*/].f_4 = 1;
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[0 /*5*/]);
				}
			}
			break;
		case 3:
			if ((__LIB_0__::func_163(iLocal_159, 242628503) && TASK::GET_SEQUENCE_PROGRESS(iLocal_159) > 1) || PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			break;
		case 5:
			if (PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				if (iLocal_14 == 6)
				{
					if (__LIB_0__::func_394(Global_35, iLocal_1428, 0))
					{
						func_352(16);
					}
				}
				else if (iLocal_14 == 7)
				{
					if (iLocal_21[53] && __LIB_0__::func_394(Global_35, iLocal_1428, 0))
					{
						func_352(16);
					}
				}
				else if (iLocal_14 == 0)
				{
					func_352(6);
				}
			}
			fVar0 = 1.9f;
			if (iLocal_14 == 4)
			{
				fVar0 = 1.5f;
			}
			if (__LIB_0__::func_394(Global_35, iLocal_163, 0))
			{
				if (!__LIB_0__::func_163(iLocal_159, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_159, iLocal_1428, 60000, -1, fVar0, 1, 0, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_159, 167, true);
				}
			}
			else if (!__LIB_0__::func_163(iLocal_159, 1868526510) && PED::_IS_MOUNT_SEAT_FREE(iLocal_163, -1))
			{
				TASK::TASK_MOUNT_ANIMAL(iLocal_159, iLocal_163, 60000, -1, fVar0, 1, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_159, 167, true);
				AITRANSPORT::_0xBA8818212633500A(iLocal_163, 0, 1);
			}
			break;
		case 4:
			if (__LIB_0__::func_163(iLocal_159, 242628503) && TASK::GET_SEQUENCE_PROGRESS(iLocal_159) > 0)
			{
				func_352(6);
			}
			break;
		case 6:
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			else if (!func_678(sLocal_1831))
			{
				func_352(7);
			}
			break;
		case 7:
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			else if (func_678(sLocal_1831))
			{
				func_352(6);
			}
			break;
		case 16:
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			else if (!func_678(sLocal_1832))
			{
				func_352(18);
			}
			break;
		case 18:
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			else if (__LIB_0__::func_394(Global_35, iLocal_1428, 0))
			{
				if (func_678(sLocal_1832))
				{
					func_352(16);
				}
			}
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			if (__LIB_0__::func_266(iLocal_159, func_1(13), 10f, 1, 1) && !__LIB_0__::func_71(iLocal_159))
			{
				func_352(12);
			}
			break;
		case 13:
			if (!__LIB_1__::func_205(Global_35, iLocal_1668, 1, 0))
			{
				func_352(6);
			}
			break;
	}
}

bool func_330(var uParam0)
{
	LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
	func_683(uParam0);
	if (__LIB_0__::func_899(&uLocal_1722))
	{
		return false;
	}
	if (iLocal_162 == 20)
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_1675, 1, 0))
	{
		__LIB_13__::func_282(&iLocal_159, &iLocal_1747, &Local_1808, 10f, -1082130432 /* Float: -1f */, 0);
		if (func_315())
		{
			__LIB_12__::func_676(&(uParam0->f_206), "2-NightVersion-MultiStart");
			__LIB_12__::func_839(&(uParam0->f_206), "2-NightVersion-MultiStart");
		}
		else
		{
			__LIB_12__::func_676(&(uParam0->f_206), "1-DayVersion-MultiStart");
			__LIB_12__::func_839(&(uParam0->f_206), "1-DayVersion-MultiStart");
		}
		__LIB_0__::func_88(&(uParam0->f_206), 268435456);
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 128);
		func_89(uParam0);
		return true;
	}
	else if (bLocal_157)
	{
		__LIB_13__::func_282(&iLocal_159, &iLocal_1747, &Local_1808, 10f, -1082130432 /* Float: -1f */, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
		{
			func_685(uParam0, &iLocal_1428, func_1(22), func_2(22), 0, 1, 1, 1, 1);
		}
		if (!bLocal_2434)
		{
			if (!Local_1833[1 /*5*/].f_3)
			{
				Local_1833[1 /*5*/].f_3 = func_340(1, 0, 0);
			}
			else
			{
				if (func_686())
				{
					if (!__LIB_0__::func_163(Global_35, 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_1833[1 /*5*/], "ARTHUR", "pl_leadin", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
						if (!__LIB_0__::func_899(&uLocal_2435))
						{
							__LIB_2__::func_259(&uLocal_2435);
						}
					}
				}
				if (ANIMSCENE::_0x337F1CC8EE895601(Local_1833[1 /*5*/], "ARTHUR"))
				{
					bLocal_2434 = true;
				}
				if (((__LIB_4__::func_118(&uLocal_2435) > 8f || CAM::_0xA24C1D341C6E0D53(1, 0, 0)) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::_0xD1BA66940E94C547())
				{
					bLocal_1584 = true;
					__LIB_1__::func_948(-677410626, 0, -1f, 1, 1, 0, 0, 0);
					if (func_315())
					{
						__LIB_12__::func_676(&(uParam0->f_206), "2-NightVersion-MultiStart");
						__LIB_12__::func_839(&(uParam0->f_206), "2-NightVersion-MultiStart");
					}
					else
					{
						__LIB_12__::func_676(&(uParam0->f_206), "1-DayVersion-MultiStart");
						__LIB_12__::func_839(&(uParam0->f_206), "1-DayVersion-MultiStart");
					}
					return true;
				}
			}
		}
		else
		{
			iLocal_162 = 2;
			if (Local_1833[1 /*5*/].f_4 && func_687(1, 0.95f))
			{
				if (iLocal_158 != 5)
				{
				}
				__LIB_1__::func_948(-677410626, 0, -1f, 1, 1, 0, 0, 0);
				return true;
			}
		}
	}
	else
	{
		iLocal_162 = 1;
		if (!Local_1833[1 /*5*/].f_3)
		{
			Local_1833[1 /*5*/].f_3 = func_340(1, 0, 0);
		}
		if (__LIB_1__::func_205(Global_35, iLocal_1677, 1, 0))
		{
			func_688();
			if (bLocal_1746)
			{
				if (func_689())
				{
					bLocal_157 = true;
					if (func_315())
					{
						__LIB_12__::func_676(&(uParam0->f_206), "2-NightVersion");
						__LIB_12__::func_839(&(uParam0->f_206), "2-NightVersion");
					}
					else
					{
						__LIB_12__::func_676(&(uParam0->f_206), "1-DayVersion");
						__LIB_12__::func_839(&(uParam0->f_206), "1-DayVersion");
					}
					func_89(uParam0);
				}
			}
		}
		else if (bLocal_1746)
		{
			__LIB_2__::func_480(&Local_1808, 0, 0, 1, 0);
			bLocal_1746 = false;
		}
	}
	return false;
}

void func_334()
{
	int iVar0;
	if (!bLocal_2444)
	{
		__LIB_0__::func_325(&iLocal_160);
		__LIB_0__::func_325(&iLocal_1599);
		__LIB_2__::func_788(&iLocal_166, 1, 0, 1);
		__LIB_2__::func_788(&iLocal_163, 1, 0, 1);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_2__::func_426(&(Local_1432[iVar0 /*20*/]));
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_170);
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			__LIB_2__::func_426(&(Local_173[iVar0 /*20*/]));
			iVar0++;
		}
		bLocal_2444 = true;
	}
}

bool func_336(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_159))
	{
		iLocal_159 = __LIB_8__::func_931(joaat("CS_BEAUGRAY"), func_1(0), func_2(0), 1, 1, 0, 0, 1, 0, 0, 1, 0, 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		iLocal_163 = __LIB_8__::func_931(iLocal_165, func_1(12), func_2(12), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (!func_693(uParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_164))
	{
		iLocal_164 = __LIB_8__::func_931(iLocal_165, func_1(10), func_2(10), 1, 1, 0, 1, 0, 0, 0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
		{
			PED::_SET_PED_SCALE(iLocal_164, 1f);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		iLocal_161 = OBJECT::CREATE_OBJECT(joaat("P_BRUSHHORSE01X"), func_1(0), true, true, false, false, true);
		return false;
	}
	if (!__LIB_0__::func_255(iLocal_159, 0))
	{
		if (!bLocal_2183)
		{
			iLocal_2182 = PED::_REQUEST_METAPED_OUTFIT(joaat("CS_BEAUGRAY"), 243346937);
			bLocal_2183 = true;
		}
		if (!PED::_0x610438375E5D1801(iLocal_2182))
		{
			return false;
		}
		iLocal_2184++;
		if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_159) && iLocal_2184 < 180)
		{
			iVar0 = iParam1;
			switch (iVar0)
			{
				case 0:
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(0), func_2(0), true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(12), func_2(12), true, false, true);
					break;
				case 1:
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(5), func_2(5), true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(5), func_2(5), true, false, true);
					break;
				case 2:
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(5), func_2(5), true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(5), func_2(5), true, false, true);
					break;
				case 3:
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_159, -1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(9), func_2(9), true, false, true);
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(13), func_2(13), true, false, true);
					break;
				case 4:
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_159, -1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(9), func_2(9), true, false, true);
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(13), func_2(13), true, false, true);
					break;
				case 5:
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_159, func_1(2), func_2(2), true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_163, func_1(14), func_2(14), true, false, true);
					break;
			}
			return false;
		}
		PED::_SET_PED_BODY_COMPONENT(iLocal_159, 243346937);
		PED::_UPDATE_PED_VARIATION(iLocal_159, false, true, true, true, false);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_159, -1))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_159, func_1(0), true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_159, func_2(0));
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_159, 364, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_159, 308, true);
		__LIB_2__::func_279(iLocal_159, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_159, 8, false);
		func_695(iLocal_159, 1);
		__LIB_12__::func_875(uParam0, iLocal_159, "BEAU_GRAY", 1);
		PED::_0xAE6004120C18DF97(iLocal_159, 0, 0);
		AUDIO::STOP_PED_SPEAKING(iLocal_159, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_159, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_163, joaat("REL_PLAYER_ALLY"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_BEAUGRAY"));
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_163))
	{
		func_695(iLocal_163, 1);
		PED::_0xAE6004120C18DF97(iLocal_163, 0, 0);
		PED::_0x931B241409216C1F(iLocal_159, iLocal_163, 0);
		AITRANSPORT::_0xBA8818212633500A(iLocal_163, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_164))
	{
		func_695(iLocal_164, 1);
		PED::_0xAE6004120C18DF97(iLocal_164, 0, 0);
		__LIB_10__::func_290(iLocal_164, 1);
		AITRANSPORT::_0xBA8818212633500A(iLocal_164, 0, 1);
	}
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CGH_FARM_HAND"));
	PERSCHAR::_0x7B204F88F6C3D287(iVar1);
	return true;
}

int func_337(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = 1;
	Var0.f_4 = iParam7;
	Var0.f_3 = iParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	*iParam0 = func_697(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return 0;
	}
	else if (iVar11 == 1)
	{
		return 0;
	}
	else if (iVar11 == 2)
	{
		if (!__LIB_0__::func_272(*iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_340(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_1833[iParam0 /*5*/].f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[iParam0 /*5*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1833[iParam0 /*5*/], true, false))
			{
				Local_1833[iParam0 /*5*/].f_3 = 1;
				return Local_1833[iParam0 /*5*/].f_3;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_1833[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1833[iParam0 /*5*/].f_1, iParam1, Local_1833[iParam0 /*5*/].f_2, false, true);
			}
			else
			{
				Local_1833[iParam0 /*5*/].f_2 = sParam2;
				Local_1833[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1833[iParam0 /*5*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[iParam0 /*5*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_1833[iParam0 /*5*/]);
			}
		}
	}
	return Local_1833[iParam0 /*5*/].f_3;
}

bool func_344(var uParam0)
{
	if (!func_716(uParam0))
	{
		return false;
	}
	if (!func_717(uParam0))
	{
		return false;
	}
	if (!func_718())
	{
		return false;
	}
	if (!func_719())
	{
		return false;
	}
	if (!func_720())
	{
		return false;
	}
	return true;
}

bool func_345(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 5;
	if (bParam1)
	{
		iVar1 = 6;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_324[iVar0 /*20*/]))
		{
			STREAMING::REQUEST_MODEL(iLocal_314, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_314))
			{
				return false;
			}
			Local_324[iVar0 /*20*/] = __LIB_8__::func_931(iLocal_314, func_721(iVar0), func_722(iVar0), 1, 1, 2, 1, 1, 1, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_324[iVar0 /*20*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_324[iVar0 /*20*/], 1);
			}
			return false;
		}
		iVar0++;
	}
	if (bParam2)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_324[iVar0 /*20*/]))
			{
				Local_324[iVar0 /*20*/].f_6++;
				if (!PED::_0xA0BC8FAED8CFEB3C(Local_324[iVar0 /*20*/]) && Local_324[iVar0 /*20*/].f_6 < 60)
				{
					if (iVar0 < 4)
					{
						bVar2 = false;
					}
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_324[iVar0 /*20*/]))
		{
			if (!Local_324[iVar0 /*20*/].f_7)
			{
				func_695(Local_324[iVar0 /*20*/], 1);
				if (!bParam0)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_324[iVar0 /*20*/], func_723(iVar0), func_724(iVar0), true, false, true);
				}
				__LIB_0__::func_862(Local_324[iVar0 /*20*/], Local_324[iVar0 /*20*/].f_19);
				PED::SET_PED_CONFIG_FLAG(Local_324[iVar0 /*20*/], 169, true);
				PED::SET_PED_CONFIG_FLAG(Local_324[iVar0 /*20*/], 280, true);
				Local_324[iVar0 /*20*/].f_7 = 1;
			}
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_314);
	return true;
}

bool func_346()
{
	int iVar0;
	int iVar1;
	if (!bLocal_2238)
	{
		STREAMING::REQUEST_MODEL(iLocal_1587, false);
		STREAMING::REQUEST_MODEL(iLocal_1585, false);
		STREAMING::REQUEST_MODEL(iLocal_1586, false);
		STREAMING::REQUEST_MODEL(iLocal_1588, false);
		bLocal_2238 = true;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_1587))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_1585))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_1586))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_1588))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_446[iVar0 /*20*/]))
		{
			if (iVar1 < 38)
			{
				if (func_726(iVar1))
				{
					Local_446[iVar0 /*20*/] = __LIB_8__::func_931(iLocal_1586, func_727(iVar0), func_728(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				else
				{
					Local_446[iVar0 /*20*/] = __LIB_8__::func_931(iLocal_1585, func_727(iVar0), func_728(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
			}
			else if (func_729(iVar1))
			{
				Local_446[iVar0 /*20*/] = __LIB_8__::func_931(iLocal_1588, func_727(iVar0), func_728(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_446[iVar0 /*20*/] = __LIB_8__::func_931(iLocal_1587, func_727(iVar0), func_728(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_446[iVar0 /*20*/]))
		{
			func_695(Local_446[iVar0 /*20*/], 1);
			PED::_0xF1C03A5352243A30(Local_446[iVar0 /*20*/]);
		}
		iVar0++;
	}
	return true;
}

bool func_347()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1432[iVar0 /*20*/]))
		{
			__LIB_0__::func_568(func_730(iVar0), 4f, 0);
			Local_1432[iVar0 /*20*/] = __LIB_8__::func_931(iLocal_1586, func_730(iVar0), func_731(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1432[iVar0 /*20*/]))
		{
			func_695(Local_1432[iVar0 /*20*/], 1);
			PED::_0xF1C03A5352243A30(Local_1432[iVar0 /*20*/]);
		}
		iVar0++;
	}
	return true;
}

void func_348(int iParam0)
{
	if (iParam0 != iLocal_18)
	{
		iLocal_18 = iParam0;
	}
}

void func_349(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_173[iVar0 /*20*/]))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_173[iVar0 /*20*/], true, false);
		}
		func_732(iVar0, iParam0);
		iVar0++;
	}
}

void func_350(int iParam0)
{
	if (iLocal_14 != iParam0)
	{
		iLocal_16 = 0;
		iLocal_14 = iParam0;
		iLocal_1664 = 0;
	}
}

void func_351(int iParam0, int iParam1)
{
	int iVar0;
	if (iLocal_169 != iParam0 && !ENTITY::IS_ENTITY_DEAD(iLocal_166))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_166, -1))
		{
			TASK::CLEAR_PED_TASKS(iLocal_166, true, false);
		}
		iLocal_169 = iParam0;
	}
	else if (iParam1 == 0 || ENTITY::IS_ENTITY_DEAD(iLocal_166))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_166))
	{
		switch (iLocal_169)
		{
			case 0:
				break;
			case 1:
				break;
			case 4:
				__LIB_2__::func_259(&uLocal_1594);
				break;
			case 5:
				break;
			case 6:
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PAUSE(0, 250);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_166, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				break;
			case 7:
				TASK::TASK_SMART_FLEE_COORD(iLocal_166, func_1(16), 1000f, -1, false, 1077936128);
				break;
		}
	}
}

void func_352(int iParam0)
{
	int iVar0;
	if (iLocal_162 != iParam0)
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_159, -1))
		{
		}
		iLocal_162 = iParam0;
	}
	else
	{
		return;
	}
	switch (iLocal_162)
	{
		case 0:
			break;
		case 1:
			break;
		case 3:
			func_733();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1855.972f, -1361.736f, 41.264f, 1.75f, -1, 1.5f, 2105345, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1857.751f, -1360.05f, 41.2644f, 1.75f, -1, 1.5f, 1179648, 40000f);
			TASK::TASK_PAUSE(0, 30000);
			func_734(iLocal_159, 0);
			break;
		case 5:
			if (iLocal_14 == 4)
			{
				if (!PED::IS_PED_ON_MOUNT(iLocal_159))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_159, iLocal_163, 60000, -1, 1.5f, 1, 0, 0);
				}
			}
			else if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				TASK::TASK_MOUNT_ANIMAL(iLocal_159, iLocal_163, 60000, -1, 1.9f, 1, 0, 0);
			}
			PED::SET_PED_CONFIG_FLAG(iLocal_159, 167, true);
			AITRANSPORT::_0xBA8818212633500A(iLocal_163, 0, 1);
			break;
		case 4:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1849.339f, -1370.212f, 41.3223f, 1.5f, -1, 3.5f, 4, 40000f);
			TASK::TASK_PAUSE(0, 100000);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_159, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 6:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_159, sLocal_1831, 7, 25638, -1, 0, 0, -1);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_159, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 2, 0);
			PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iLocal_163, 3);
			break;
		case 7:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_159, Global_35, -1, -1f, -1f, -1f);
			break;
		case 9:
			if (__LIB_0__::func_71(iLocal_159))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_159, 167, false);
				func_733();
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1(5), 1.001f, -1, 5f, 1048576, 40000f);
				TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_166, 20000, 0.5f, 1.5f, 2f, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_166, -1, -1f, -1f, -1f);
				func_734(iLocal_159, 0);
			}
			else
			{
				func_733();
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1(15), 1.5f, -1, 5f, 1048576, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_166, -1, -1f, -1f, -1f);
				func_734(iLocal_159, 0);
			}
			break;
		case 10:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_159, iLocal_166, 0, -1f, -1f, -1f);
			break;
		case 11:
			func_733();
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_163, -1, -1, 2f, 1, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1416.772f, -1424.486f, 79.2515f, 2f, -1, 4f, 5, 40000f);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, func_1(13), 2f, 3f, 0, 0);
			TASK::TASK_ACHIEVE_HEADING(0, func_2(13), 0);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			func_734(iLocal_159, 0);
			break;
		case 13:
			func_733();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1286.039f, -1321.099f, 75.9349f, 1.5f, -1, 0.25f, 4, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			func_734(iLocal_159, 0);
			break;
		case 12:
			__LIB_9__::func_799(iLocal_163, func_1(13), 5f, 1);
			func_733();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1(6), 1f, -1, 0.25f, 4, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, func_2(6), 0);
			__LIB_1__::func_473(0, joaat("WORLD_HUMAN_SMOKE"), 0, 1, 0, -1082130432 /* Float: -1f */);
			func_734(iLocal_159, 0);
			break;
		case 14:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_159, -1))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_159, Global_35, -1, -1f, -1f, -1f);
			}
			break;
		case 15:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1(28), 2f, -1, 0.25f, 8192, 335.2693f);
			TASK::TASK_COWER(0, -1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_159, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 19:
			PED::SET_PED_CONFIG_FLAG(iLocal_159, 167, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1(14), 2f, -1, 0.25f, 4, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_159, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 16:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_159, sLocal_1832, 0, 67134510, -1, 0, 0, -1);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), PED::GET_MOUNT(iLocal_159), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
			PED::_0x0E9E95FDEDCC9D35(Global_35, 1, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_159, 167, true);
			break;
		case 18:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_159, Global_35, -1, -1f, -1f, -1f);
			break;
		case 17:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1(28), 2f, -1, 0.25f, 8192, 335.2693f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_159, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 20:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[0 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[0 /*5*/]);
			}
			TASK::CLEAR_PED_TASKS(iLocal_159, true, false);
			__LIB_1__::func_948(1860876114, 0, -0.3f, 1, 1, 0, 0, 0);
			TASK::TASK_SMART_FLEE_PED(iLocal_159, Global_35, 1000f, -1, 45056, 1077936128 /* Float: 3f */, 0);
			break;
	}
}

void func_353(var uParam0)
{
	__LIB_12__::func_875(uParam0, Local_1432[2 /*20*/], "BAP21_Heckler1", 1);
	__LIB_12__::func_875(uParam0, Local_1432[1 /*20*/], "RBP21_BThug2", 1);
	__LIB_12__::func_875(uParam0, Local_1432[0 /*20*/], "RBP21_BThug3", 1);
}

void func_356()
{
	switch (iLocal_18)
	{
		case 0:
			func_348(3);
			break;
		case 1:
			if (func_534(63, 1, func_501(10), 0))
			{
				func_348(2);
			}
			break;
		case 2:
			if (func_687(63, 0.8f))
			{
				func_348(3);
			}
			break;
		case 3:
			if (func_534(63, 1, func_501(11), 0))
			{
				func_348(4);
			}
			break;
		case 4:
			if (func_687(63, 1065017672 /* Float: 0.98f */))
			{
				func_348(5);
			}
			break;
		case 5:
			if (func_534(63, 1, func_501(12), 0))
			{
				func_348(6);
			}
			break;
		case 6:
			if (func_687(63, 1065017672 /* Float: 0.98f */))
			{
				func_348(7);
			}
			break;
		case 7:
			if (func_534(63, 1, func_501(13), 0))
			{
				func_348(8);
			}
			break;
		case 8:
			if (func_687(63, 1065017672 /* Float: 0.98f */))
			{
				func_348(3);
			}
			break;
	}
}

bool func_357(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1513[iVar0 /*23*/]))
		{
			STREAMING::REQUEST_MODEL(iLocal_1589, false);
			STREAMING::REQUEST_MODEL(iLocal_1590, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_1589) || !STREAMING::HAS_MODEL_LOADED(iLocal_1590))
			{
				return false;
			}
			if (iVar0 == 0)
			{
				Local_1513[iVar0 /*23*/] = __LIB_12__::func_885(uParam0, iLocal_1589, Local_1513[iVar0 /*23*/].f_3, Local_1513[iVar0 /*23*/].f_9, 1, 1, 1, 1, 0, 0, 1, 0);
			}
			else
			{
				Local_1513[iVar0 /*23*/] = __LIB_12__::func_885(uParam0, iLocal_1590, Local_1513[iVar0 /*23*/].f_3, Local_1513[iVar0 /*23*/].f_9, 1, 1, 1, 1, 0, 0, 1, 0);
			}
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1513[iVar0 /*23*/].f_2))
		{
			Local_1513[iVar0 /*23*/].f_2 = __LIB_8__::func_931(iLocal_165, Local_1513[iVar0 /*23*/].f_11, Local_1513[iVar0 /*23*/].f_14, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1513[iVar0 /*23*/]))
		{
			func_695(Local_1513[iVar0 /*23*/], 0);
			if (bParam1)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_1513[iVar0 /*23*/], Local_1513[iVar0 /*23*/].f_6, 1.5f, 1.5f, 1.5f, false, true, 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_1513[iVar0 /*23*/], Local_1513[iVar0 /*23*/].f_6, Local_1513[iVar0 /*23*/].f_22, true, false, true);
				}
			}
			PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_1513[iVar0 /*23*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_CAN_BE_TARGETTED(Local_1513[iVar0 /*23*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_1513[iVar0 /*23*/], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_1513[iVar0 /*23*/], 233, true);
			PED::SET_PED_CONFIG_FLAG(Local_1513[iVar0 /*23*/], 169, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1513[iVar0 /*23*/], 46, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1513[iVar0 /*23*/], 93, true);
			PED::SET_PED_CONFIG_FLAG(Local_1513[iVar0 /*23*/], 199, true);
			ENTITY::_0x18FF3110CF47115D(Local_1513[iVar0 /*23*/], 1, 0);
			ENTITY::_0x18FF3110CF47115D(Local_1513[iVar0 /*23*/], 2, 0);
			ENTITY::_0x18FF3110CF47115D(Local_1513[iVar0 /*23*/], 3, 0);
			ENTITY::_0x18FF3110CF47115D(Local_1513[iVar0 /*23*/], 11, 0);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1513[iVar0 /*23*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false, true, 2, false, 0.5f, 1f, 752097756, false, 0f, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1513[iVar0 /*23*/], true);
			__LIB_2__::func_190(Local_1513[iVar0 /*23*/], __LIB_1__::func_760(joaat("REWARD_BEAT_SMALL"), 0, -1));
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1513[iVar0 /*23*/].f_2))
		{
			func_695(Local_1513[iVar0 /*23*/].f_2, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1513[iVar0 /*23*/].f_2, joaat("REL_CIVMALE"));
		}
		iVar0++;
	}
	__LIB_12__::func_875(uParam0, Local_1513[0 /*23*/], "SCOTT_GRAY", 0);
	__LIB_12__::func_875(uParam0, Local_1513[1 /*23*/], "IAIN_GRAY", 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1589);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1590);
	return true;
}

bool func_358(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
	{
		if (bParam1)
		{
			func_685(uParam0, &iLocal_1428, func_1(22), func_2(22), 1, 1, 1, 1, 1);
		}
		else
		{
			func_685(uParam0, &iLocal_1428, func_1(23), func_2(23), 1, 1, 1, 1, 1);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1428))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1428, true);
		if (bParam1)
		{
			if (!bLocal_1829)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1428, func_1(22), func_2(22), true, false, true);
			}
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1428, func_1(23), func_2(23), true, false, true);
		}
		if (!__LIB_0__::func_163(iLocal_1428, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_1428, -1);
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_1428, 77, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_1428, 312, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1428, 38, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_1428, 512, true);
		PED::SET_COMBAT_FLOAT(iLocal_1428, 22, 8f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1428, 48, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1428, 3, false);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1428, 2, false);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1428, 1, false);
	}
	return true;
}

bool func_359()
{
	int iVar0;
	if (!bLocal_2241)
	{
		STREAMING::REQUEST_MODEL(iLocal_1572, false);
		STREAMING::REQUEST_MODEL(iLocal_1573, false);
		bLocal_2241 = true;
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1572) && STREAMING::HAS_MODEL_LOADED(iLocal_1573))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1562[iVar0]))
			{
				iLocal_1562[iVar0] = __LIB_8__::func_931(iLocal_1572, 1290.316f, -1310.462f, 76.0403f, 160.8107f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return false;
			}
			func_695(iLocal_1562[iVar0], 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1566[iVar0]))
			{
				iLocal_1566[iVar0] = __LIB_8__::func_931(iLocal_1573, 1290.316f, -1310.462f, 76.0403f, 160.8107f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return false;
			}
			func_695(iLocal_1566[iVar0], 1);
			iVar0++;
		}
	}
	else
	{
		return false;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1572);
	return true;
}

Vector3 func_361(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1297.596f, -1297.547f, 76.3398f;
		case 1:
			return 1301.66f, -1293.68f, 76.2255f;
		case 2:
			return 1302.88f, -1296.51f, 76.3702f;
		case 3:
			return 1300.48f, -1293.92f, 76.3611f;
		case 4:
			return 1301.83f, -1295.02f, 76.3458f;
		case 5:
			return 1296.04f, -1292.29f, 76.5021f;
		case 6:
			return 1300.63f, -1296.21f, 76.4984f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 325.6183f;
		case 1:
			return 136.309f;
		case 2:
			return 89.1742f;
		case 3:
			return 113.523f;
		case 4:
			return 102.04f;
		case 5:
			return -138.891f;
		case 6:
			return 89.389f;
		default:
			break;
	}
	return 0f;
}

void func_363(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_741(iVar0, iParam0);
		iVar0++;
	}
}

bool func_370(var uParam0)
{
	int iVar0;
	switch (iLocal_15)
	{
		case 2:
			__LIB_5__::func_20(0, 0);
			iVar0 = 0;
			while (iVar0 < 49)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_446[iVar0 /*20*/].f_11))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_446[iVar0 /*20*/].f_11);
				}
				__LIB_2__::func_426(&(Local_446[iVar0 /*20*/]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				__LIB_2__::func_426(&(Local_1432[iVar0 /*20*/]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_324[iVar0 /*20*/].f_11))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_324[iVar0 /*20*/].f_11);
				}
				iVar0++;
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[63 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1833[63 /*5*/]);
			}
			break;
	}
	return true;
}

int func_376(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_12__::func_927(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false))
				{
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					__LIB_8__::func_726(uParam4, 4);
					return 0;
				}
				else
				{
					if (__LIB_12__::func_688(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					__LIB_12__::func_800(uParam5);
				}
				__LIB_8__::func_726(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_12__::func_909(uParam4);
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
				__LIB_12__::func_913(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
			{
				if (__LIB_12__::func_986(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
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
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
					__LIB_8__::func_726(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_765(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_12__::func_849(uParam4, 1))
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
				__LIB_12__::func_927(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_12__::func_689(uParam4) - __LIB_12__::func_685(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_12__::func_752(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_12__::func_685(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_12__::func_690(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				__LIB_0__::func_488(uParam4);
				func_772(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_12__::func_685(uParam4) <= 5000) && __LIB_12__::func_685(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_773(&(uParam4->f_405), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_12__::func_685(uParam4) >= 5000 && __LIB_12__::func_685(uParam4) <= (__LIB_12__::func_689(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_12__::func_690(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				func_772(uParam4);
				return 1;
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_348))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					if (__LIB_12__::func_801(uParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
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
	return 0;
}

int func_381(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_381(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!func_786(iParam0, iParam1, iParam3, bParam2, bParam4))
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
	func_788(iParam0, iParam1);
	return 1;
}

void func_384()
{
	int iVar0;
	int iVar1;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
		if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
		{
			WEAPON::_0xCEF4C65DE502D367(Global_35, 1, 0, 1, 0);
		}
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
		if (WEAPON::_0x2C83212A7AA51D3D(iVar1))
		{
			WEAPON::_0xCEF4C65DE502D367(Global_35, 1, 1, 1, 0);
		}
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 1);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
	WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
}

bool func_386(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_989(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
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
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_983(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_573(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_13__::func_42(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_4__::func_118(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_979(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_2__::func_259(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_979(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_389(int iParam0)
{
	if (!func_218(iParam0))
	{
		__LIB_1__::func_683(&iLocal_1648, iParam0);
	}
}

void func_391()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_166))
	{
		switch (iLocal_169)
		{
			case 0:
				break;
			case 1:
				break;
			case 4:
				if (__LIB_9__::func_401(&uLocal_1594) > 2500)
				{
					func_351(5, 0);
					func_389(128);
				}
				break;
		}
	}
}

void func_392()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_173[iVar0 /*20*/]))
		{
			iVar1 = Local_173[iVar0 /*20*/].f_1;
			switch (iVar1)
			{
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
			}
		}
		iVar0++;
	}
}

void func_393(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	vector3 vVar5;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1432[iVar0 /*20*/]))
		{
			iVar1 = Local_1432[iVar0 /*20*/].f_1;
			iVar2 = iVar0;
			if (__LIB_9__::func_756(iVar2))
			{
			}
			else if (iVar1 != 7)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Local_446[iVar2 /*20*/], iLocal_1676, true, 0))
				{
					func_828(iVar2, 7);
					iLocal_1582++;
					func_389(16777216);
				}
				else
				{
					switch (iVar1)
					{
						case 0:
							if (bLocal_19)
							{
								func_828(iVar2, 1);
								iLocal_20++;
								if (iLocal_20 > 4)
								{
									bLocal_19 = false;
								}
							}
						else
						{
							}
							else
							{
								Jump @797; //curOff = 191
								if (iLocal_1646 >= func_829(iVar0))
								{
									if (__LIB_9__::func_756(iVar2))
									{
										func_828(iVar2, 5);
									}
									else
									{
										func_828(iVar2, 2);
									}
								}
								else if (!__LIB_0__::func_163(Local_1432[iVar2 /*20*/], 1647992574) && !__LIB_0__::func_163(Local_1432[iVar2 /*20*/], 993674639))
								{
									Local_1432[iVar2 /*20*/].f_6++;
									if (Local_1432[iVar2 /*20*/].f_6 > 5)
									{
										__LIB_1__::func_473(Local_1432[iVar2 /*20*/], joaat("WORLD_HUMAN_SMOKE"), -1, 0, 0, -1082130432 /* Float: -1f */);
									}
								}
								Jump @797; //curOff = 334
								if (__LIB_0__::func_266(Local_1432[iVar0 /*20*/], func_830(iVar2), 1.5f, 1, 1))
								{
									if (func_831(iVar2))
									{
										func_828(iVar2, 4);
									}
									else
									{
										func_828(iVar2, 3);
									}
								}
								Jump @797; //curOff = 390
								Jump @797; //curOff = 393
								sVar3 = func_832(iVar2);
								sVar4 = func_833(iVar2);
								STREAMING::REQUEST_ANIM_DICT(sVar3);
								if (STREAMING::HAS_ANIM_DICT_LOADED(sVar3) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1432[iVar2 /*20*/], sVar3, sVar4, 1))
								{
									if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_1432[iVar2 /*20*/], sVar3, sVar4) > 0.9f)
									{
										func_828(iVar2, 7);
									}
									else if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_1432[iVar2 /*20*/], sVar3, sVar4) > 0.149f)
									{
										if (!ENTITY::DOES_ENTITY_EXIST(Local_1432[iVar2 /*20*/].f_16) && Local_1432[iVar2 /*20*/].f_17 != 0)
										{
											STREAMING::REQUEST_MODEL(Local_1432[iVar2 /*20*/].f_17, false);
											if (STREAMING::HAS_MODEL_LOADED(Local_1432[iVar2 /*20*/].f_17))
											{
												Local_1432[iVar2 /*20*/].f_16 = OBJECT::CREATE_OBJECT(Local_1432[iVar2 /*20*/].f_17, PED::GET_PED_BONE_COORDS(Local_1432[iVar2 /*20*/], 22798, 0f, 0.3f, 0.1f), true, true, false, false, true);
												if (ENTITY::DOES_ENTITY_EXIST(Local_1432[iVar2 /*20*/].f_16))
												{
													PHYSICS::ACTIVATE_PHYSICS(Local_1432[iVar2 /*20*/].f_16);
													vVar5 = { ENTITY::GET_ENTITY_COORDS(iLocal_170, true, false) - ENTITY::GET_ENTITY_COORDS(Local_1432[iVar2 /*20*/], true, false) };
													vVar5 = { __LIB_0__::func_173(vVar5) };
													vVar5.f_2 = 0.3f;
													ENTITY::APPLY_FORCE_TO_ENTITY(Local_1432[iVar2 /*20*/].f_16, 0, vVar5 * Vector(60f, 60f, 60f), 0f, 0f, 0f, 0, false, false, true, false, true);
												}
											}
										}
									}
								}
								if (__LIB_1__::func_583(&(Local_1432[iVar0 /*20*/].f_3)) > 5f)
								{
									func_828(iVar2, 7);
								}
								Jump @797; //curOff = 756
								if (__LIB_0__::func_48(Local_1432[iVar0 /*20*/], Local_173[5 /*20*/], 4.5f, 1))
								{
									func_828(iVar2, 6);
								}
							}
							iVar0++;
							default:
								break;
					}
				}
			}
		}
	}
}

void func_394()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1513[iVar0 /*23*/]))
		{
			if (PED::_IS_PED_LASSOED(Local_1513[iVar0 /*23*/]) || PED::_IS_PED_HOGTIED(Local_1513[iVar0 /*23*/]))
			{
				func_675(10, 0);
				func_675(10, 1);
			}
			if (Local_1513[iVar0 /*23*/].f_10 == 2 || Local_1513[iVar0 /*23*/].f_10 == 3)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_1513[iVar0 /*23*/].f_1))
				{
					Local_1513[iVar0 /*23*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_1513[iVar0 /*23*/]);
				}
				if (MAP::DOES_BLIP_EXIST(Local_1513[iVar0 /*23*/].f_1))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1513[iVar0 /*23*/].f_1, "BAP12_B_COUS");
				}
			}
			else if (Local_1513[iVar0 /*23*/].f_10 == 6)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_1513[iVar0 /*23*/].f_1))
				{
					Local_1513[iVar0 /*23*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1513[iVar0 /*23*/]);
				}
				if (MAP::DOES_BLIP_EXIST(Local_1513[iVar0 /*23*/].f_1))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1513[iVar0 /*23*/].f_1, "BAP12_B_COUSS");
				}
			}
			else
			{
				__LIB_0__::func_325(&(Local_1513[iVar0 /*23*/].f_1));
			}
			switch (Local_1513[iVar0 /*23*/].f_10)
			{
				case 0:
					break;
				case 1:
					if (!__LIB_0__::func_163(Local_1513[iVar0 /*23*/], -875674219))
					{
						TASK::CLEAR_PED_TASKS(Local_1513[iVar0 /*23*/], true, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1513[iVar0 /*23*/], iLocal_159, -1, -1f, -1f, -1f);
					}
					break;
				case 2:
					fVar2 = __LIB_0__::func_94(Local_1513[iVar0 /*23*/], Local_1513[iVar0 /*23*/].f_6, 1);
					fVar3 = __LIB_0__::func_94(Local_1513[iVar0 /*23*/], Global_36, 1);
					fVar4 = __LIB_0__::func_94(Global_35, Local_1513[iVar0 /*23*/].f_6, 1);
					if (fVar2 < 4f)
					{
						if (fVar4 < fVar2 && fVar3 < fVar2)
						{
							func_675(1, iVar0);
						}
					}
					break;
				case 3:
					if (!__LIB_0__::func_48(Global_35, Local_1513[iVar0 /*23*/], 4f, 1))
					{
						func_675(2, iVar0);
					}
					break;
				case 4:
					if (!__LIB_0__::func_163(Local_1513[iVar0 /*23*/], 242628503))
					{
						TASK::CLEAR_PED_TASKS(Local_1513[iVar0 /*23*/], true, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1513[iVar0 /*23*/].f_6, 1f, -1, 1f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_159, -1, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_1513[iVar0 /*23*/], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					break;
				case 5:
					__LIB_0__::func_325(&(Local_1513[iVar0 /*23*/].f_1));
					if (!__LIB_0__::func_163(Local_1513[iVar0 /*23*/], 1868526510))
					{
						__LIB_1__::func_562(Local_1513[iVar0 /*23*/], Local_1513[iVar0 /*23*/].f_2, 0, 1.25f, 60000);
					}
					if (__LIB_0__::func_71(Local_1513[iVar0 /*23*/]))
					{
						func_675(13, iVar0);
					}
					break;
				case 6:
					if (!__LIB_0__::func_163(Local_1513[iVar0 /*23*/], joaat("SCRIPT_TASK_MELEE")))
					{
						TASK::TASK_MELEE(Local_1513[iVar0 /*23*/], Global_35, 0, 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
					}
					if (MAP::DOES_BLIP_EXIST(Local_1513[iVar0 /*23*/].f_1))
					{
						MAP::_BLIP_SET_MODIFIER(Local_1513[iVar0 /*23*/].f_1, 942020339);
					}
					break;
				case 7:
					if (!__LIB_0__::func_163(Local_1513[iVar0 /*23*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_1513[iVar0 /*23*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1513[iVar0 /*23*/], joaat("REL_PLAYER_ENEMY"));
						TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_1513[iVar0 /*23*/], iLocal_159, 0, 0, 0, 1, 1048576);
					}
					break;
				case 12:
					if (!__LIB_0__::func_163(Local_1513[iVar0 /*23*/], 242628503))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1513[iVar0 /*23*/], joaat("WEAPON_PISTOL_SEMIAUTO"), 0, false))
						{
							iVar5 = func_654(Local_1513[iVar0 /*23*/], joaat("WEAPON_PISTOL_SEMIAUTO"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Local_1513[iVar0 /*23*/], iVar5, true, 0, false, false);
						TASK::CLEAR_PED_TASKS(Local_1513[iVar0 /*23*/], true, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_1(16), 0);
						TASK::TASK_SHOOT_AT_COORD(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_1(16), 0f, 0f, 0f, 10f), 100000, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_1513[iVar0 /*23*/], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					break;
				case 13:
					if (!__LIB_0__::func_163(Local_1513[iVar0 /*23*/], 518218985))
					{
						TASK::_TASK_FLEE_FROM_PED(Local_1513[iVar0 /*23*/], Global_35, 1326.15f, -1228.751f, 77.456f, 1000f, -1, 1024, 1077936128 /* Float: 3f */, Local_1513[iVar0 /*23*/].f_2);
					}
					else if (__LIB_0__::func_266(Local_1513[iVar0 /*23*/], 1326.15f, -1228.751f, 77.456f, 10f, 1, 1))
					{
						__LIB_2__::func_788(&(Local_1513[iVar0 /*23*/]), 1, 0, 1);
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(Local_1513[iVar0 /*23*/].f_1));
		}
		iVar0++;
	}
}

void func_395(int iParam0)
{
	float fVar0;
	if (iLocal_14 >= 4 || iParam0 == 1)
	{
		switch (iLocal_1679)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1680))
				{
					iLocal_1680 = OBJECT::CREATE_OBJECT(iLocal_1681, 1296.664f, -1295.448f, 75.6598f, true, true, false, false, true);
				}
				else if (func_534(8, 0, "PL_SPEECH", 0))
				{
					iLocal_1679 = 3;
				}
				break;
			case 1:
				if (func_534(8, 0, "PL_QUIET_PLEASE", 0))
				{
					iLocal_1679 = 2;
				}
				break;
			case 2:
				if (func_687(8, 1065017672 /* Float: 0.98f */))
				{
					iLocal_1679 = 3;
				}
				break;
			case 3:
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_1833[8 /*5*/], "PL_SPEECH"))
				{
					func_534(8, 0, "PL_SPEECH", 0);
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1833[8 /*5*/], "base", 1))
				{
					if (!__LIB_0__::func_899(&uLocal_1682))
					{
						__LIB_2__::func_259(&uLocal_1682);
					}
					else if (__LIB_1__::func_583(&uLocal_1682) > 15f)
					{
						iLocal_1679 = 4;
						__LIB_1__::func_561(&uLocal_1682);
					}
				}
				break;
			case 4:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[8 /*5*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1833[8 /*5*/], false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_1833[8 /*5*/], "PL_SINGING"))
					{
						func_534(8, 0, "PL_SINGING", 0);
					}
					else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1833[8 /*5*/], "base", 1) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1833[8 /*5*/]) > 0.6f)
					{
						if (AUDIO::_0xD9130842D7226045("257197976_ig2_signing_on_wagon", 0))
						{
							fVar0 = __LIB_4__::func_118(&uLocal_1682);
							if (!__LIB_0__::func_899(&uLocal_1682))
							{
								bLocal_2242 = false;
								bLocal_2243 = false;
								__LIB_2__::func_259(&uLocal_1682);
							}
							else if (fVar0 > 15f && fVar0 < 30f)
							{
								if (!bLocal_2242)
								{
									bLocal_2242 = true;
									AUDIO::_PLAY_SOUND_FROM_ENTITY("SINGING_P2", Local_173[0 /*20*/], "257197976_ig2_signing_on_wagon", false, 0, 0);
								}
							}
							else if (fVar0 > 30f && fVar0 < 45f)
							{
								if (!bLocal_2243)
								{
									AUDIO::_PLAY_SOUND_FROM_ENTITY("SINGING_P3", Local_173[0 /*20*/], "257197976_ig2_signing_on_wagon", false, 0, 0);
									bLocal_2243 = true;
								}
							}
							else if (__LIB_4__::func_118(&uLocal_1682) > 45f)
							{
								iLocal_1679 = 5;
								__LIB_1__::func_561(&uLocal_1682);
							}
						}
					}
				}
				break;
			case 5:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[8 /*5*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1833[8 /*5*/], false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_1833[8 /*5*/], "PL_BASE"))
					{
						func_534(8, 0, "PL_BASE", 0);
					}
					else if (!__LIB_0__::func_899(&uLocal_1682))
					{
						__LIB_2__::func_259(&uLocal_1682);
					}
					else if (__LIB_1__::func_583(&uLocal_1682) > 0f)
					{
						iLocal_1679 = 4;
						__LIB_1__::func_561(&uLocal_1682);
					}
				}
				break;
		}
	}
}

bool func_397(var uParam0)
{
	int iVar0;
	func_844();
	switch (iLocal_16)
	{
		case 0:
			__LIB_12__::func_997(uParam0, func_63(0), func_63(1), 0, 1, 0);
			func_580(0);
			func_583(1);
			__LIB_1__::func_948(-677410626, 0, -1f, 1, 1, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_159, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_163, false);
			LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			if (__LIB_0__::func_394(Global_35, iLocal_1428, 0))
			{
				bLocal_2251 = true;
			}
			__LIB_12__::func_875(uParam0, iLocal_155, "RBNP1_GRAYGUARD2", 0);
			__LIB_12__::func_875(uParam0, iLocal_156, "RBNP1_GRAYGUARD1", 0);
			__LIB_12__::func_937(uParam0, 0);
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rbap12_caliga_gate_assist"))
			{
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("rbap12_caliga_gate_assist", 1, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
			}
			PED::_0x1E017404784AA6A3(iLocal_159, joaat("RBNP1_RIDE1"));
			__LIB_1__::func_948(-215861784, 0, -1f, 1, 1, 0, 1, 0);
			__LIB_1__::func_948(-543954117, 0, 1f, 1, 1, 0, 1, 0);
			func_352(3);
			iLocal_16 = 1;
			AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 1);
			MISC::_0xE98D55C5983F2509(iLocal_159);
			__LIB_12__::func_938(iLocal_159);
			__LIB_3__::func_229(627);
			__LIB_3__::func_229(633);
			__LIB_10__::func_25(joaat("CGH_HORSE_GUARD"));
			__LIB_10__::func_25(joaat("CGH_FIELD_GUARD"));
			SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
			break;
		case 1:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1831, ENTITY::GET_ENTITY_COORDS(iLocal_159, true, false), &iVar0);
			if (!func_218(131072))
			{
				func_225(uParam0, 8, &iLocal_159, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
			}
			if (__LIB_0__::func_71(Global_35) && __LIB_0__::func_71(iLocal_159))
			{
				func_225(uParam0, 9, &iLocal_159, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
			}
			if (CLOCK::GET_CLOCK_HOURS() < 6)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(500);
			}
			else
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
			}
			if (!__LIB_0__::func_394(Global_35, iLocal_1428, 0))
			{
				if (!bLocal_2251)
				{
					__LIB_0__::func_325(&iLocal_1599);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					func_848(19, 1);
					func_849(7);
					vLocal_91[1 /*3*/].f_2 = 0;
					vLocal_91[1 /*3*/].f_1 = 0;
					bLocal_2251 = true;
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						iLocal_160 = __LIB_8__::func_778(-89429847, iLocal_159, 1);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_160, "BAP12_B_BEAU");
					}
				}
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
				if (bLocal_2251)
				{
					func_183(7);
					func_498();
					bLocal_2251 = false;
					vLocal_91[19 /*3*/].f_2 = 0;
					vLocal_91[19 /*3*/].f_1 = 0;
					func_848(1, 1);
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						iLocal_160 = __LIB_8__::func_778(-89429847, iLocal_159, 1);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_160, -401963276);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_160, "BAP12_B_BEAU");
					}
					if (PED::IS_PED_ON_MOUNT(iLocal_159))
					{
						func_352(6);
					}
				}
			}
			if (__LIB_0__::func_48(iLocal_159, iLocal_156, 25f, 1) && __LIB_3__::func_547(iLocal_156, iLocal_159, 0f) == 0)
			{
				if (func_225(uParam0, 4, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
				{
					__LIB_2__::func_259(&uLocal_2248);
				}
				if (__LIB_4__::func_118(&uLocal_2248) > 12f)
				{
					if (func_225(uParam0, 5, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
					{
						__LIB_2__::func_259(&uLocal_2248);
					}
					if (func_225(uParam0, 6, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
					{
						__LIB_2__::func_259(&uLocal_2248);
					}
				}
			}
			if (!iLocal_21[10])
			{
				if (iVar0 < 30)
				{
					func_225(uParam0, 11, &iLocal_159, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
				}
				if (iVar0 > 65)
				{
					func_225(uParam0, 10, &iLocal_159, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
				}
			}
			LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
			if (!func_218(65536))
			{
				if (func_345(1, 1, 1))
				{
					func_389(65536);
				}
			}
			if (__LIB_0__::func_266(Global_35, func_1(12), 50f, 1, 1))
			{
				if (__LIB_0__::func_394(Global_35, iLocal_1428, 0))
				{
					func_852(1, 30000);
				}
				else
				{
					func_852(19, 30000);
				}
			}
			if (!__LIB_0__::func_266(Global_35, func_1(12), 30f, 1, 1))
			{
				func_389(512);
			}
			if (__LIB_0__::func_266(Global_35, func_1(15), 40f, 1, 1))
			{
				func_225(uParam0, 15, &iLocal_159, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
			}
			if (!func_218(1))
			{
				if (__LIB_0__::func_266(Global_35, func_1(25), 250f, 1, 1) && func_344(uParam0))
				{
					func_389(1);
				}
			}
			if (func_218(65536) && func_218(1))
			{
				if (!bLocal_2247)
				{
					iLocal_15 = 1;
					func_89(uParam0);
					bLocal_2247 = true;
				}
				if (!Local_1833[3 /*5*/].f_4)
				{
					Local_1833[3 /*5*/].f_4 = func_534(3, 0, func_501(7), 0);
				}
				if (!Local_1833[4 /*5*/].f_4)
				{
					Local_1833[4 /*5*/].f_4 = func_534(4, 0, 0, 0);
				}
				if (Local_1833[3 /*5*/].f_4 && Local_1833[4 /*5*/].f_4)
				{
					func_218(1048576);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[3 /*5*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1833[3 /*5*/], false))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1833[3 /*5*/], "Loop_Idle_A"))
				{
					if (__LIB_0__::func_48(Global_35, Local_173[0 /*20*/], 50f, 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1833[3 /*5*/], "Loop_Idle_A", true, false);
					}
				}
			}
			if (func_853(uParam0))
			{
				iLocal_16 = 2;
			}
			__LIB_9__::func_204(Global_35, func_1(15), &uLocal_1429, 40f, 25f, 20f, 15f, 0.5f, 0, 0, 1, 1, 1);
			break;
		case 2:
			func_183(7);
			func_498();
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
			PED::_0x2B4CE170DE09F346(iLocal_159, joaat("RBNP1_RIDE1"));
			func_363(9);
			__LIB_1__::func_561(&uLocal_1429);
			__LIB_0__::func_325(&iLocal_160);
			__LIB_0__::func_325(&iLocal_1599);
			return true;
	}
	return false;
}

bool func_398(var uParam0)
{
	int iVar0;
	int iVar1;
	if (bLocal_1725)
	{
		func_844();
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 175, true);
	PED::SET_PED_RESET_FLAG(Global_35, 246, true);
	__LIB_1__::func_538(0);
	func_854();
	ANIMSCENE::_0xE12D7B4B959644CD();
	switch (iLocal_16)
	{
		case 0:
			func_855(uParam0);
			func_363(9);
			func_580(1);
			func_349(3);
			func_856(1);
			__LIB_12__::func_997(uParam0, func_63(2), func_63(3), 2, 3, 0);
			AUDIO::_0x6378A235374B852F("BLOCKED_CONTEXTS_SPUR", 0);
			__LIB_0__::func_267(0);
			__LIB_1__::func_571(iLocal_159, iLocal_163, 0, -1, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_163, 1453.544f, -1434.671f, 76.0547f, true, false, true, true);
			func_352(11);
			func_384();
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_170, true);
			func_349(3);
			func_384();
			func_857(1, 1);
			func_583(1);
			__LIB_12__::func_937(uParam0, 1);
			AITRANSPORT::_0xBA8818212633500A(iLocal_170, 7, 1);
			bLocal_1725 = false;
			iLocal_16 = 1;
			break;
		case 1:
			func_848(9, 1);
			func_848(9, 0);
			func_858();
			if (!bLocal_2252)
			{
				if (func_357(uParam0, 0) && func_359())
				{
					iLocal_15 = 2;
					func_89(uParam0);
					bLocal_2252 = true;
				}
			}
			if (!bLocal_1726)
			{
				if (func_347())
				{
					func_353(uParam0);
					bLocal_1726 = true;
				}
			}
			if (!bLocal_1727)
			{
				bLocal_1727 = func_346();
			}
			if (!bLocal_1725)
			{
				func_859();
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar1 = iVar0;
					if (((iVar1 == 0 || iVar1 == 1) || iVar1 == 2) || iVar1 == 3)
					{
						func_741(iVar1, 5);
					}
					else
					{
						func_741(iVar1, 2);
					}
					iVar0++;
				}
				bLocal_1725 = true;
			}
			if (__LIB_2__::func_343(Global_35, iLocal_170, 1))
			{
				func_860();
			}
			if (func_218(16777216))
			{
				if (iLocal_1582 == 1)
				{
					func_225(uParam0, 31, &(Local_173[0 /*20*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
				}
				else if (iLocal_1582 >= 2)
				{
					func_225(uParam0, 32, &(Local_173[0 /*20*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
				}
			}
			func_861(uParam0);
			func_862(uParam0);
			if (__LIB_0__::func_266(iLocal_170, func_1(17), 20f, 1, 1))
			{
				func_852(9, 30000);
			}
			func_857(1, 1);
			func_863();
			if (iLocal_18 >= 4)
			{
				if (iLocal_1646 > 4)
				{
					func_225(uParam0, 16, &(Local_173[0 /*20*/]), 30f, 1109393408 /* Float: 40f */, 0, 1);
					if (!bLocal_2254)
					{
						bLocal_2254 = true;
					}
				}
				if (bLocal_2254)
				{
					if (iLocal_1646 > 25)
					{
						func_225(uParam0, 18, &(Local_173[0 /*20*/]), 30f, 1109393408 /* Float: 40f */, 0, 1);
					}
					if (iLocal_1646 > 35)
					{
						func_225(uParam0, 27, &(Local_173[0 /*20*/]), 30f, 1109393408 /* Float: 40f */, 0, 1);
					}
					if (iLocal_1646 > 50)
					{
						func_225(uParam0, 19, &(Local_173[0 /*20*/]), 30f, 1109393408 /* Float: 40f */, 0, 1);
					}
					if ((iLocal_1646 > 73 && iLocal_17 > 2) && iLocal_21[17])
					{
						func_225(uParam0, 20, &(Local_173[0 /*20*/]), 30f, 1109393408 /* Float: 40f */, 0, 1);
					}
					if (iLocal_1646 > 92)
					{
						func_225(uParam0, 29, &(Local_173[0 /*20*/]), 30f, 1109393408 /* Float: 40f */, 0, 1);
					}
					if (iLocal_1646 > 93)
					{
						func_225(uParam0, 28, &(Local_173[0 /*20*/]), 30f, 1109393408 /* Float: 40f */, 0, 1);
					}
				}
			}
			if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), ENTITY::GET_ENTITY_COORDS(iLocal_170, true, false), 3f))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), iLocal_170, -1f, 40f, 40f, -1f, -1f, 360f, true, false, -1, -1);
			}
			func_855(uParam0);
			if (__LIB_0__::func_266(Global_35, func_1(18), (12f + 2f), 1, 1) && __LIB_0__::func_266(iLocal_170, func_1(18), (12f + 2f), 1, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ACCELERATE"), false);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_170) > 0.7f)
				{
					func_225(uParam0, 30, &(Local_173[0 /*20*/]), 30f, 1109393408 /* Float: 40f */, 0, 0);
					func_848(4, 1);
				}
				else if (ENTITY::GET_ENTITY_SPEED(iLocal_170) < 0.3f)
				{
					func_389(32);
					iLocal_16 = 2;
				}
				if (!bLocal_2253)
				{
					if (__LIB_6__::func_142(0, 2f, -1, 0.2f))
					{
						func_389(32);
						iLocal_16 = 2;
						bLocal_2253 = true;
					}
				}
			}
			break;
		case 2:
			AUDIO::_0x87E6302FC61208CC("BLOCKED_CONTEXTS_SPUR");
			func_856(0);
			func_857(1, 1);
			func_582();
			__LIB_0__::func_325(&iLocal_1599);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PATHFIND::_0xD17672447692478E(iLocal_1671, 0);
			PATHFIND::_0xD17672447692478E(iLocal_1672, 0);
			PATHFIND::_0xD17672447692478E(iLocal_1673, 0);
			return true;
	}
	return false;
}

bool func_400(var uParam0)
{
	func_844();
	switch (iLocal_16)
	{
		case 0:
			func_857(1, 1);
			func_580(0);
			__LIB_2__::func_788(&iLocal_1560, 1, 0, 1);
			__LIB_2__::func_788(&iLocal_1561, 1, 0, 1);
			func_583(1);
			iLocal_16 = 1;
			break;
		case 1:
			func_857(1, 1);
			if (func_358(uParam0, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_401(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_844();
	switch (iLocal_16)
	{
		case 0:
			switch (iLocal_2420)
			{
				case 0:
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_170, false);
					__LIB_12__::func_997(uParam0, func_63(4), func_63(5), 4, 5, 0);
					func_384();
					__LIB_12__::func_938(iLocal_159);
					__LIB_2__::func_426(&iLocal_1560);
					__LIB_2__::func_426(&iLocal_1561);
					func_580(0);
					func_351(6, 0);
					func_349(4);
					iLocal_2420++;
					__LIB_0__::func_325(&iLocal_1599);
					iVar0 = 0;
					while (iVar0 < 7)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_316[iVar0]))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_316[iVar0]));
						}
						iVar0++;
					}
					break;
				case 1:
					func_583(1);
					__LIB_12__::func_937(uParam0, 4);
					iVar0 = 0;
					while (iVar0 < 6)
					{
						if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_324[iVar0 /*20*/]))
						{
							ENTITY::SET_ENTITY_COLLISION(Local_324[iVar0 /*20*/], true, false);
						}
						iVar1 = iVar0;
						if (func_866(iVar1))
						{
							func_741(iVar1, 6);
						}
						else
						{
							func_741(iVar1, 7);
						}
						iVar0++;
					}
					iLocal_2420++;
					break;
				case 2:
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1562[iVar0]))
						{
							__LIB_2__::func_788(&(iLocal_1562[iVar0]), 0, 1, 1);
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1566[iVar0]))
						{
							__LIB_2__::func_788(&(iLocal_1566[iVar0]), 0, 1, 1);
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < 49)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_446[iVar0 /*20*/].f_11))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_446[iVar0 /*20*/].f_11);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_446[iVar0 /*20*/]))
						{
							func_674(iVar0, 7);
							__LIB_2__::func_788(&(Local_446[iVar0 /*20*/]), 1, 1, 1);
						}
						iVar0++;
					}
					iLocal_2420++;
					break;
				case 3:
					if (!MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						iLocal_160 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_159);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_160, "BAP12_B_BEAU");
					}
					func_352(5);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_170, func_1(18), func_2(18), true, false, true);
					func_675(2, 0);
					func_675(2, 1);
					__LIB_2__::func_259(&uLocal_1826);
					iLocal_2420++;
					break;
				case 4:
					if (func_358(uParam0, 0))
					{
						vLocal_91[20 /*3*/].f_1 = 0;
						vLocal_91[20 /*3*/].f_2 = 0;
						iLocal_16 = 1;
						__LIB_12__::func_973(&(Local_1513[1 /*23*/]), 1);
						PED::SET_PED_CONFIG_FLAG(Local_1513[1 /*23*/], 413, true);
						PED::SET_PED_CONFIG_FLAG(Local_1513[1 /*23*/], 330, true);
						__LIB_12__::func_973(&(Local_1513[0 /*23*/]), 1);
						PED::SET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 413, true);
						PED::SET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 330, true);
						TASK::TASK_LOOK_AT_ENTITY(Local_1513[0 /*23*/], Global_35, -1, 0, 51, 1);
						TASK::TASK_LOOK_AT_ENTITY(Local_1513[1 /*23*/], Global_35, -1, 0, 51, 1);
						func_849(7);
					}
					break;
			}
			break;
		case 1:
			if (func_225(uParam0, 7, &Global_35, 30f, 50f, 0, 1))
			{
				func_848(20, 1);
			}
			if (__LIB_3__::func_547(Global_35, Local_1513[0 /*23*/], 1060437492 /* Float: 0.707f */) == 0)
			{
				if (func_225(uParam0, 64, &Global_35, 5f, 7f, 0, 1))
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1513[0 /*23*/], 7000, 0, 51, 0);
				}
			}
			if (iLocal_21[64] && !__LIB_6__::func_903(func_196(64)))
			{
				func_868();
			}
			if (bLocal_2418 && iLocal_2419 == -1)
			{
				iVar2 = func_869(&(Local_1513[0 /*23*/]), &(Local_2260[0 /*61*/]), 5f, &Local_2383, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				iVar3 = func_869(&(Local_1513[1 /*23*/]), &(Local_2260[1 /*61*/]), 5f, &Local_2383, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iVar2 == 0 || iVar3 == 0)
				{
					iLocal_2419 = 0;
					func_870();
				}
				else if (iVar2 == 1 || iVar3 == 1)
				{
					iLocal_2419 = 1;
					func_870();
				}
			}
			if (iLocal_2419 == 0)
			{
				func_225(uParam0, 66, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 0, 0);
			}
			if (iLocal_2419 == 1)
			{
				func_225(uParam0, 65, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 0, 0);
			}
			if (!__LIB_0__::func_899(&uLocal_1826))
			{
				__LIB_2__::func_259(&uLocal_1826);
			}
			if (!iLocal_21[65] && !iLocal_21[66])
			{
				if (__LIB_4__::func_118(&uLocal_1826) > fLocal_2259)
				{
					if (func_225(uParam0, 57, &(Local_1513[0 /*23*/]), 30f, 50f, 0, 0))
					{
						__LIB_2__::func_259(&uLocal_1826);
						fLocal_2259 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
					}
					if (func_225(uParam0, 59, &(Local_1513[0 /*23*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
					{
						__LIB_2__::func_259(&uLocal_1826);
						fLocal_2259 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
					}
					if (func_225(uParam0, 58, &(Local_1513[0 /*23*/]), 30f, 50f, 0, 0))
					{
						__LIB_2__::func_259(&uLocal_1826);
						fLocal_2259 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
					}
					if (func_225(uParam0, 60, &(Local_1513[0 /*23*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
					{
						__LIB_2__::func_259(&uLocal_1826);
						fLocal_2259 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
					}
				}
			}
			if (__LIB_1__::func_205(Global_35, iLocal_1669, 1, 0))
			{
				func_675(11, 0);
				func_675(7, 1);
				if (!__LIB_0__::func_899(&uLocal_2256))
				{
					__LIB_2__::func_259(&uLocal_2256);
				}
			}
			if (((func_871() && !__LIB_0__::func_899(&uLocal_2256)) || (iLocal_21[66] && !__LIB_6__::func_903(func_196(66)))) || (iLocal_21[60] && __LIB_4__::func_118(&uLocal_1826) > fLocal_2259))
			{
				iLocal_16 = 2;
			}
			if ((__LIB_0__::func_394(Global_35, iLocal_1428, 0) || (iLocal_21[65] && !__LIB_6__::func_903(func_196(65)))) || (!__LIB_0__::func_266(Global_35, 1297.21f, -1310.92f, 75.67f, 11f, 1, 1) && !__LIB_1__::func_205(Global_35, iLocal_1669, 1, 0)))
			{
				func_389(32768);
				iLocal_16 = 2;
			}
			break;
		case 2:
			__LIB_18__::func_609(vLocal_91[0 /*3*/]);
			func_183(7);
			func_498();
			if (func_218(2097152))
			{
				__LIB_5__::func_20(0, 0);
			}
			__LIB_0__::func_769();
			return true;
	}
	return false;
}

bool func_402(var uParam0)
{
	func_844();
	switch (iLocal_16)
	{
		case 0:
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_170, false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_159, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_159, joaat("REL_CIVMALE"));
			func_580(0);
			PED::SET_PED_CAN_BE_TARGETTED(Local_1513[0 /*23*/], true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_1513[1 /*23*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1513[0 /*23*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1513[1 /*23*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_FLEE_ATTRIBUTES(Local_1513[0 /*23*/], 512, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_1513[1 /*23*/], 512, true);
			PED::SET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 301, true);
			PED::SET_PED_CONFIG_FLAG(Local_1513[1 /*23*/], 301, true);
			PED::SET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 359, false);
			PED::SET_PED_CONFIG_FLAG(Local_1513[1 /*23*/], 359, false);
			PED::SET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 360, false);
			PED::SET_PED_CONFIG_FLAG(Local_1513[1 /*23*/], 360, false);
			ENTITY::_0x18FF3110CF47115D(Local_1513[0 /*23*/], 1, 0);
			ENTITY::_0x18FF3110CF47115D(Local_1513[1 /*23*/], 1, 0);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			__LIB_2__::func_810(15, 16777216);
			__LIB_2__::func_810(2, 16777216);
			if (!MAP::DOES_BLIP_EXIST(iLocal_160))
			{
				iLocal_160 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_159);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_160, "BAP12_B_BEAU");
			}
			func_675(6, 0);
			func_675(6, 1);
			__LIB_0__::func_769();
			PED::SET_PED_USING_ACTION_MODE(Local_1513[0 /*23*/], true, -1, 0);
			PED::SET_PED_USING_ACTION_MODE(Local_1513[1 /*23*/], true, -1, 0);
			vLocal_91[18 /*3*/].f_1 = 0;
			vLocal_91[18 /*3*/].f_2 = 0;
			__LIB_1__::func_532(Global_1347702[5 /*49*/].f_15, 1);
			__LIB_12__::func_937(uParam0, 5);
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_1513[0 /*23*/], "RBAP12_BRAWL", 1294.65f, -1314.59f, 75.81f, 0, 0);
			iLocal_16 = 1;
			break;
		case 1:
			func_848(18, 1);
			if (!bLocal_2255)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1513[0 /*23*/]) && (!PED::_IS_PED_HOGTIED(Local_1513[0 /*23*/]) && !PED::GET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 11, true)))
				{
					if ((ENTITY::IS_ENTITY_DEAD(Local_1513[0 /*23*/]) || PED::_IS_PED_HOGTIED(Local_1513[0 /*23*/])) || PED::GET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 11, true))
					{
						PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_1513[1 /*23*/], "RBAP12_BRAWL", 1294.65f, -1314.59f, 75.81f, 0, 0);
						bLocal_2255 = true;
					}
				}
			}
			func_874(uParam0);
			if (func_875() == 0 && func_225(uParam0, 47, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
			{
				iLocal_16 = 2;
			}
			break;
		case 2:
			__LIB_18__::func_609(vLocal_91[15 /*3*/]);
			__LIB_0__::func_325(&iLocal_1599);
			func_583(0);
			__LIB_0__::func_769();
			return true;
	}
	return false;
}

bool func_403(var uParam0)
{
	int iVar0;
	int iVar1;
	func_844();
	func_857(1, 0);
	switch (iLocal_16)
	{
		case 0:
			bLocal_2244 = false;
			func_580(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_159, joaat("REL_PLAYER_ALLY"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_163, joaat("REL_PLAYER_ALLY"));
			AUDIO::STOP_PED_SPEAKING(iLocal_159, true);
			func_675(5, 0);
			func_675(5, 1);
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			else if (!__LIB_0__::func_394(Global_35, iLocal_1428, 0))
			{
				func_352(17);
			}
			else
			{
				func_352(16);
			}
			__LIB_12__::func_937(uParam0, 6);
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
			iLocal_15 = 3;
			func_89(uParam0);
			vLocal_91[20 /*3*/].f_2 = 0;
			vLocal_91[20 /*3*/].f_1 = 0;
			vLocal_91[16 /*3*/].f_2 = 0;
			vLocal_91[16 /*3*/].f_1 = 0;
			__LIB_12__::func_938(iLocal_159);
			fLocal_2429 = __LIB_0__::func_665(Global_35, iLocal_166, 1, 1);
			if (func_876() && PED::_0x1E017404784AA6A3(iLocal_159, joaat("RBNP1_RIDE1")))
			{
				AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 1);
				if (!__LIB_0__::func_394(Global_35, iLocal_1428, 0))
				{
					__LIB_0__::func_325(&iLocal_1599);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					func_848(20, 0);
					func_849(7);
					func_498();
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						iLocal_160 = __LIB_8__::func_778(-89429847, iLocal_159, 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_160, "BAP12_B_BEAU");
					}
					bLocal_2430 = true;
				}
				else
				{
					func_183(7);
					func_498();
					vLocal_91[20 /*3*/].f_2 = 0;
					vLocal_91[20 /*3*/].f_1 = 0;
					func_848(16, 0);
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						iLocal_160 = __LIB_8__::func_778(-89429847, iLocal_159, 1);
						MAP::_BLIP_SET_MODIFIER(iLocal_160, -401963276);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_160, "BAP12_B_BEAU");
					}
					bLocal_2430 = false;
				}
				iLocal_16 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[8 /*5*/]))
			{
				if (__LIB_0__::func_266(Global_35, func_1(16), 120f, 1, 1))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_1833[8 /*5*/]))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_1833[8 /*5*/], false);
					}
				}
				else if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_1833[8 /*5*/]))
				{
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_1833[8 /*5*/], true);
				}
			}
			if ((fLocal_2429 - 3f) > __LIB_0__::func_665(Global_35, iLocal_166, 1, 1) && 1 == __LIB_3__::func_547(Global_35, iLocal_159, 0f))
			{
				func_225(uParam0, 52, &iLocal_159, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
			}
			if (!__LIB_0__::func_394(Global_35, iLocal_1428, 0))
			{
				if (!bLocal_2430)
				{
					__LIB_0__::func_325(&iLocal_1599);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					func_848(20, 0);
					func_849(7);
					vLocal_91[16 /*3*/].f_2 = 0;
					vLocal_91[16 /*3*/].f_1 = 0;
					bLocal_2430 = true;
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						iLocal_160 = __LIB_8__::func_778(-89429847, iLocal_159, 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_160, "BAP12_B_BEAU");
					}
				}
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
				if (bLocal_2430)
				{
					func_183(7);
					func_498();
					bLocal_2430 = false;
					vLocal_91[20 /*3*/].f_2 = 0;
					vLocal_91[20 /*3*/].f_1 = 0;
					func_848(16, 0);
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						iLocal_160 = __LIB_8__::func_778(-89429847, iLocal_159, 1);
						MAP::_BLIP_SET_MODIFIER(iLocal_160, -401963276);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_160, "BAP12_B_BEAU");
					}
				}
				if (PED::IS_PED_ON_MOUNT(iLocal_159))
				{
					if (iLocal_162 != 19)
					{
						func_352(16);
					}
				}
			}
			if (!func_218(32768))
			{
				if (!iLocal_21[51] && !iLocal_21[63])
				{
					iVar0 = func_875();
					if (iVar0 == 0)
					{
						if (func_877() > 0)
						{
							func_225(uParam0, 63, &iLocal_159, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
						}
						else
						{
							func_225(uParam0, 51, &iLocal_159, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
						}
					}
				}
			}
			else
			{
				func_225(uParam0, 50, &Global_35, 30f, 50f, 0, 1);
			}
			func_225(uParam0, 53, &iLocal_159, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
			if (__LIB_0__::func_71(iLocal_159) && __LIB_0__::func_71(Global_35))
			{
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1832, ENTITY::GET_ENTITY_COORDS(iLocal_159, true, false), &iVar1);
				if (iVar1 >= 1)
				{
					func_225(uParam0, 54, &iLocal_159, 25f, 1109393408 /* Float: 40f */, 1, 1);
				}
			}
			if (__LIB_0__::func_266(iLocal_159, func_1(2), 10f, 1, 1))
			{
				func_352(14);
			}
			else if (__LIB_0__::func_266(iLocal_159, func_1(2), 30f, 1, 1))
			{
				PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), PED::_GET_LAST_MOUNT(iLocal_159));
				func_352(19);
			}
			__LIB_1__::func_448(Global_35, func_1(29), 0, 20f, 17f, 15f, 12f, 1, 1, 1, 0);
			if (__LIB_0__::func_266(iLocal_159, func_1(29), 20f, 1, 1))
			{
				if (__LIB_0__::func_48(iLocal_159, Global_35, 10f, 1))
				{
					if (__LIB_0__::func_394(Global_35, iLocal_1428, 0))
					{
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
						if (bLocal_2428)
						{
							__LIB_13__::func_632(uParam0, vLocal_91[16 /*3*/], 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_1__::func_324(vLocal_91[16 /*3*/]);
							__LIB_1__::func_422(vLocal_91[16 /*3*/], 7500, 0, 1, 0, 0, -1, -1, 0);
							bLocal_2428 = false;
						}
						func_225(uParam0, 56, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
						if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) < 1.7f || TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_1428) < 1.7f)
						{
							__LIB_5__::func_20(1, 0);
							if (!__LIB_6__::func_904())
							{
								iLocal_16 = 2;
							}
						}
					}
					else if (!bLocal_2428)
					{
						__LIB_13__::func_632(uParam0, vLocal_91[20 /*3*/], 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_324(vLocal_91[20 /*3*/]);
						__LIB_1__::func_422(vLocal_91[20 /*3*/], 7500, 0, 1, 0, 0, -1, -1, 0);
						bLocal_2428 = true;
					}
				}
			}
			break;
		case 2:
			func_583(0);
			__LIB_5__::func_20(0, 0);
			__LIB_0__::func_769();
			__LIB_0__::func_325(&iLocal_1599);
			__LIB_1__::func_561(&uLocal_1429);
			func_580(1);
			return true;
	}
	return false;
}

void func_441(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
					func_913(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_917(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_917(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_917(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_917(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_917(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_917(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_917(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_917(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_917(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_917(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_917(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_917(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_917(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_919();
						func_920(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_917(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_441(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_927(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_441(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_441(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_917(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_917(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_954();
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
							func_917(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_498()
{
	if (__LIB_0__::func_797(0))
	{
		func_1032(0);
	}
	if (__LIB_0__::func_797(1))
	{
		func_1032(1);
	}
	if (__LIB_0__::func_797(5))
	{
		func_1032(5);
	}
	if (__LIB_0__::func_797(6))
	{
		__LIB_0__::func_798(6);
	}
}

char* func_501(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_base";
		case 1:
			return "pl_leadin";
		case 2:
			return "Playback_List";
		case 3:
			return "pbl_Idle_A";
		case 4:
			return "pbl_Enter_Look_Loop";
		case 5:
			return "pbl_Exit";
		case 6:
			return "pbl_Enter_Heckle_Loop";
		case 7:
			return "pl_loop_A_leadin_loop_B";
		case 8:
			return "pl_Crowd_React_Flee";
		case 9:
			return "pl_Crowd_React_Flee";
		case 10:
			return "pbl_Intro_Singing";
		case 11:
			return "pbl_Singing_P1";
		case 12:
			return "pbl_Singing_P2";
		case 13:
			return "pbl_Singing_P3";
		default:
			break;
	}
	return "";
}

int func_530(int iParam0, int iParam1)
{
	var uVar0;
	return func_1046(&uVar0, iParam0, iParam1);
}

bool func_534(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	char* sVar0;
	if (!Local_1833[iParam0 /*5*/].f_3)
	{
		if (func_340(iParam0, iParam1, sParam2))
		{
			func_1048(iParam0, iParam3);
			Local_1833[iParam0 /*5*/].f_3 = 1;
		}
	}
	if (MISC::IS_STRING_NULL(sParam2))
	{
		sVar0 = Local_1833[iParam0 /*5*/].f_2;
	}
	else
	{
		sVar0 = sParam2;
	}
	if (Local_1833[iParam0 /*5*/].f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[iParam0 /*5*/]))
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1833[iParam0 /*5*/], sVar0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1833[iParam0 /*5*/], sVar0);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1833[iParam0 /*5*/], sVar0))
			{
				func_1048(iParam0, iParam3);
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_1833[iParam0 /*5*/], sVar0))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1833[iParam0 /*5*/], sVar0, true);
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1833[iParam0 /*5*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_1833[iParam0 /*5*/]);
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1833[iParam0 /*5*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_1833[iParam0 /*5*/]);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1833[iParam0 /*5*/], false))
				{
					Local_1833[iParam0 /*5*/].f_4 = 1;
					return true;
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1833[iParam0 /*5*/], false) && ANIMSCENE::_0x1F0E401031E20146(Local_1833[iParam0 /*5*/], sVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_535()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_324[iVar0 /*20*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_324[iVar0 /*20*/], true, false);
			TASK::TASK_SMART_FLEE_COORD(Local_324[iVar0 /*20*/], func_723(iVar0), 1000f, -1, false, 1077936128);
			__LIB_2__::func_788(&(Local_324[iVar0 /*20*/]), 1, 0, 1);
		}
		iVar0++;
	}
}

bool func_537(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (!__LIB_0__::func_272(*iParam1, 1))
	{
		if (iParam4 < 69 && !iParam3 == 0)
		{
			func_225(uParam0, iParam4, &iParam3, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
		}
		StringCopy(&(uParam0->f_2578), sParam2, 24);
		return true;
	}
	else if (__LIB_13__::func_641(*iParam1, 0, &uLocal_1614, &uLocal_1642, 0, 0))
	{
		if (iParam4 < 69 && !iParam3 == 0)
		{
			func_225(uParam0, iParam4, &iParam3, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
		}
		StringCopy(&(uParam0->f_2578), sParam2, 24);
		return true;
	}
	return false;
}

void func_579(int iParam0)
{
	if (func_218(iParam0))
	{
		__LIB_1__::func_681(&iLocal_1648, iParam0);
	}
}

void func_580(bool bParam0)
{
	__LIB_4__::func_932(25, bParam0);
	__LIB_4__::func_932(26, bParam0);
	__LIB_4__::func_932(27, bParam0);
	__LIB_4__::func_932(28, bParam0);
	__LIB_4__::func_932(29, bParam0);
	__LIB_4__::func_932(30, bParam0);
	__LIB_4__::func_932(32, bParam0);
	__LIB_4__::func_932(33, bParam0);
}

void func_582()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	if (bLocal_1613)
	{
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (iLocal_1600[iVar2])
			{
				iVar1 = iVar2;
				sVar0 = func_1073(iVar1);
				AUDIO::_STOP_SOUND_WITH_NAME(sVar0, "rbnp2_Sounds");
			}
			iVar2++;
		}
	}
}

void func_583(bool bParam0)
{
	if (bParam0)
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_1671, 0, 262144, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_1671, 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_1672, 0, 262144, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_1672, 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_1673, 0, 262144, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_1673, 0, 0, 0, -1, -1, 0);
	}
	else
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_1673);
		POPULATION::_0x74C2B3DC0B294102(iLocal_1672);
		POPULATION::_0x74C2B3DC0B294102(iLocal_1671);
	}
}

void func_586(int iParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
			{
				iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
				{
					PED::_0xF9ACF4A08098EA25(iVar1[iVar0], true);
					func_1076(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

int func_654(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		func_1126(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
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

int func_657(var uParam0)
{
	if (func_315())
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "TimelapseBool1", true, false);
	}
	return 0;
}

void func_674(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam1;
	if (Local_446[iParam0 /*20*/].f_1 != iVar0 && !ENTITY::IS_ENTITY_DEAD(Local_446[iParam0 /*20*/]))
	{
		Local_446[iParam0 /*20*/].f_1 = iVar0;
	}
	else
	{
		return;
	}
	if ((iParam1 != 3 && iParam1 != 4) && iParam1 != 5)
	{
	}
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			func_1151(iParam0);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_2186[iParam0]))
			{
				TASK::_TASK_USE_SCENARIO_POINT(Local_446[iParam0 /*20*/], iLocal_2186[iParam0], 0, 0, false, true, func_1152(iParam0), false, -1f, false);
			}
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1153(iParam0), 1.2f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_170, 0, -1f, __LIB_3__::func_745(30f), -1f);
			TASK::TASK_PAUSE(0, 10000);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(Local_446[iParam0 /*20*/], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			TASK::TASK_LOOK_AT_ENTITY(Local_446[iParam0 /*20*/], Global_35, -1, 0, 51, 0);
			func_1155(Local_446[iParam0 /*20*/], Global_35);
			break;
		case 3:
			Local_446[iParam0 /*20*/].f_11.f_1 = func_1157(func_1156(iParam0));
			Local_446[iParam0 /*20*/].f_11.f_2 = func_501(func_1158(iParam0));
			break;
		case 6:
			func_1151(iParam0);
			TASK::_TASK_USE_SCENARIO_POINT(Local_446[iParam0 /*20*/], iLocal_2186[iParam0], 0, 0, true, false, func_1152(iParam0), false, -1f, false);
			__LIB_12__::func_974(Local_446[iParam0 /*20*/]);
			break;
		case 7:
			__LIB_12__::func_974(Local_446[iParam0 /*20*/]);
			TASK::TASK_SMART_FLEE_PED(Local_446[iParam0 /*20*/], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			break;
	}
}

void func_675(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 >= 2)
	{
		return;
	}
	if (!Local_1513[iParam1 /*23*/].f_10 == iParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1513[iParam1 /*23*/]))
		{
			Local_1513[iParam1 /*23*/].f_10 = iParam0;
		}
	}
	switch (Local_1513[iParam1 /*23*/].f_10)
	{
		case 10:
			if (!PED::_IS_PED_HOGTIED(Local_1513[iParam1 /*23*/]))
			{
				func_1160(Local_1513[iParam1 /*23*/], 0, 0);
				TASK::CLEAR_PED_TASKS(Local_1513[iParam1 /*23*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_1513[iParam1 /*23*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 11:
			if (!PED::_IS_PED_HOGTIED(Local_1513[iParam1 /*23*/]))
			{
				func_1160(Local_1513[iParam1 /*23*/], 0, 0);
				TASK::CLEAR_PED_TASKS(Local_1513[iParam1 /*23*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::TASK_COMBAT_PED(0, iLocal_159, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_1513[iParam1 /*23*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1513[iParam1 /*23*/].f_6, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, __LIB_3__::func_745(15f));
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_1513[iParam1 /*23*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(Local_1513[iParam1 /*23*/], joaat("WEAPON_UNARMED"), true, 0, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1513[iParam1 /*23*/], 92, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1513[iParam1 /*23*/], 54, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1513[iParam1 /*23*/], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1513[iParam1 /*23*/], 93, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1513[iParam1 /*23*/], 46, true);
			TASK::TASK_MELEE(Local_1513[iParam1 /*23*/], Global_35, 0, 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
			break;
	}
}

bool func_678(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	iVar0 = -1;
	iVar1 = -1;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, ENTITY::GET_ENTITY_COORDS(iLocal_159, true, false), &iVar0);
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, Global_36, &iVar1);
	iVar2 = (iVar1 - iVar0);
	bVar3 = iVar2 <= false;
	fVar4 = __LIB_0__::func_665(iLocal_159, Global_35, 1, 1);
	if (!bLocal_2244)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bLocal_2244 = true;
			PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
		}
	}
	else if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		bLocal_2244 = false;
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_159, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 2, 0);
		PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iLocal_163, 3);
	}
	if (__LIB_0__::func_394(Global_35, iLocal_1428, 0))
	{
		func_1161(iLocal_159, 2.5f, 0, 0.4f, 1, 3f, 16f, 19f, 22f, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
	}
	else if (iVar0 > 10)
	{
		func_1161(iLocal_159, 0f, 0, 0.4f, 1, 3f, 14f, 18f, 20f, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
	}
	else
	{
		func_1161(iLocal_159, 2.5f, 0, 0.4f, 1, 3f, 16f, 19f, 22f, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
	}
	if (bVar3)
	{
		if (fVar4 > 24f)
		{
			if (iLocal_162 == 7 || iLocal_162 == 18)
			{
			}
			else if (fVar4 > 28f)
			{
			}
		}
	}
	return true;
}

void func_683(var uParam0)
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_155) && ENTITY::DOES_ENTITY_EXIST(iLocal_156))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_156, Global_35, 1, 1))
		{
			iLocal_158 = 6;
		}
		switch (iLocal_158)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_155))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_155, true, true);
				}
				ENTITY::_SET_ENTITY_SOMETHING(iLocal_155, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_155, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_155, joaat("REL_PLAYER_ALLY"));
				PED::SET_PED_CONFIG_FLAG(iLocal_155, 66, true);
				func_1076(iLocal_155, 1713.955f, -1379.242f, 42.9191f, 101.7286f, 2, 1073741824 /* Float: 2f */);
				func_1076(iLocal_156, 1715.875f, -1384.937f, 42.9172f, 101.7286f, 2, 1073741824 /* Float: 2f */);
				func_1076(iLocal_156, 1715.875f, -1384.937f, 42.9172f, 101.7286f, 2, 1073741824 /* Float: 2f */);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_155, joaat("WEAPON_UNARMED"), false, 0, false, false);
				__LIB_2__::func_915(iLocal_155, joaat("WORLD_HUMAN_STARE_STOIC"), 1713.955f, -1379.242f, 42.9191f, 101.7286f, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_155, Global_35, -1, 0, 51, 0);
				iLocal_158 = 1;
				break;
			case 1:
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					fVar0 = 35f;
				}
				else
				{
					fVar0 = 20f;
				}
				if (__LIB_0__::func_895(Global_1347702[3 /*49*/].f_15) == 0)
				{
					if (func_225(uParam0, 1, &iLocal_155, fVar0, 1109393408 /* Float: 40f */, 1, 1))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_155, Global_35, -1, -1f, -1f, -1f);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_155, Global_35, -1, 0, 51, 0);
						iLocal_158 = 2;
						TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_155, 10000, 0, 51, 0);
						CAM::SET_GAMEPLAY_PED_HINT(iLocal_155, 0f, 0f, 0.5f, true, -1, 2000, 2000);
					}
				}
				else if (func_225(uParam0, 0, &iLocal_155, fVar0, 1109393408 /* Float: 40f */, 1, 1))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_155, Global_35, -1, -1f, -1f, -1f);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_155, Global_35, -1, 0, 51, 0);
					iLocal_158 = 2;
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_155, 10000, 0, 51, 0);
					CAM::SET_GAMEPLAY_PED_HINT(iLocal_155, 0f, 0f, 0.5f, true, -1, 2000, 2000);
				}
				break;
			case 2:
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_155, false, false), 0, 25f, 13f, 8f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
				}
				else
				{
					__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_155, false, false), 0, 15f, 8f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
				}
				if (!__LIB_6__::func_904())
				{
					iLocal_158 = 3;
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				break;
			case 3:
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					fVar0 = 35f;
				}
				else
				{
					fVar0 = 20f;
				}
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_155, false, false), 0, 25f, 12.5f, 7.5f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
				}
				if (__LIB_0__::func_895(Global_1347702[3 /*49*/].f_15) == 0)
				{
					if (func_225(uParam0, 3, &iLocal_155, fVar0, 1109393408 /* Float: 40f */, 1, 1))
					{
						iLocal_158 = 4;
					}
				}
				else if (func_225(uParam0, 2, &iLocal_155, fVar0, 1109393408 /* Float: 40f */, 1, 1))
				{
					iLocal_158 = 4;
				}
				break;
			case 4:
				if (!__LIB_8__::func_684(func_196(3)) && !__LIB_8__::func_684(func_196(2)))
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "BNP12_GUARD_CONV");
					__LIB_2__::func_915(iLocal_155, joaat("WORLD_HUMAN_STARE_STOIC"), 1713.955f, -1379.242f, 42.9191f, 101.7286f, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_155, false);
					iLocal_158 = 5;
				}
				else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_155, false, false), 0, 25f, 12.5f, 7.5f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
				}
				break;
			case 5:
				break;
			case 6:
				if (!__LIB_0__::func_163(iLocal_155, 780511057))
				{
					TASK::TASK_COMBAT_PED(iLocal_155, Global_35, 0, 0);
				}
				if (!__LIB_0__::func_163(iLocal_156, 780511057))
				{
					TASK::TASK_COMBAT_PED(iLocal_156, Global_35, 0, 0);
				}
				break;
		}
	}
}

int func_685(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (func_1172(uParam0, vParam2, fParam5, iParam6, fParam7, bParam8, bParam9, bParam10))
	{
		*iParam1 = uParam0->f_2572;
		return 1;
	}
	return 0;
}

bool func_686()
{
	int iVar0;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return true;
	}
	if (!PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		return true;
	}
	else if (PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		iVar0 = __LIB_3__::func_697(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, Global_36, 2f, 9);
		}
	}
	return false;
}

bool func_687(int iParam0, float fParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[iParam0 /*5*/]))
	{
		if ((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1833[iParam0 /*5*/]) >= fParam1 || ANIMSCENE::_0xF94692EB9DC15D74(Local_1833[iParam0 /*5*/], 0)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1833[iParam0 /*5*/], false))
		{
			return true;
		}
	}
	return false;
}

void func_688()
{
	if (!bLocal_1746)
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_159, 301, false);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_159, true);
		__LIB_12__::func_980(&iLocal_1747, &Local_1808, 0, Global_1347702[5 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		__LIB_3__::func_157(&(Local_1808[0 /*17*/]), "BAP12_C_BEAU", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		bLocal_1746 = true;
	}
}

bool func_689()
{
	int iVar0;
	iVar0 = func_869(&iLocal_159, &iLocal_1747, 5f, &Local_1808, 0, 3, 0, 0, 2053, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (iVar0 != -1)
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 1);
		LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
		return true;
	}
	return false;
}

bool func_693(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		if (__LIB_3__::func_397(631, 1))
		{
			iLocal_155 = __LIB_2__::func_965(631, 1, 0, 1, 1, 1);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_156))
	{
		if (__LIB_3__::func_397(632, 1))
		{
			iLocal_156 = __LIB_2__::func_965(632, 1, 0, 1, 1, 1);
		}
		return false;
	}
	__LIB_12__::func_875(uParam0, iLocal_155, "BRT2_Guard_1", 0);
	__LIB_12__::func_875(uParam0, iLocal_156, "RBNP1_GRAYGUARD1", 0);
	__LIB_0__::func_862(iLocal_155, -1853075798);
	__LIB_0__::func_862(iLocal_156, -1999258307);
	return true;
}

void func_695(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	if (bParam1)
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
		if (!PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_PLAYER_ALLY"))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_ALLY"));
		}
	}
	else if (!PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_CIVMALE"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_CIVMALE"));
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
}

int func_697(int iParam0, var uParam1)
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
				func_1189(1, 0);
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
				func_1195(uParam1->f_10);
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

bool func_716(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_166))
	{
		STREAMING::REQUEST_MODEL(iLocal_168, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_168))
		{
			iLocal_166 = __LIB_8__::func_931(iLocal_168, func_1(15), func_2(15), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_166))
	{
		__LIB_12__::func_875(uParam0, iLocal_166, "PENELOPE_BRAITH", 1);
		func_695(iLocal_166, 1);
		__LIB_3__::func_932(iLocal_166, func_1222(0));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
	}
	return true;
}

bool func_717(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_173[iVar0 /*20*/]))
		{
			if (!bLocal_2237)
			{
				STREAMING::REQUEST_MODEL(iLocal_314, false);
				STREAMING::REQUEST_MODEL(iLocal_315, false);
				bLocal_2237 = true;
			}
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_314) || !STREAMING::HAS_MODEL_LOADED(iLocal_315))
			{
				return false;
			}
			if (iVar0 == 0)
			{
				Local_173[iVar0 /*20*/] = __LIB_8__::func_931(iLocal_315, func_1222(iVar0), 0f, 1, 1, 2, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				Local_173[iVar0 /*20*/] = __LIB_8__::func_931(iLocal_314, func_1222(iVar0), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			return false;
		}
		iVar0++;
	}
	if (!func_1224())
	{
		return false;
	}
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_173[iVar0 /*20*/]))
		{
			Local_173[iVar0 /*20*/].f_6++;
			if ((!PED::_0xA0BC8FAED8CFEB3C(Local_173[iVar0 /*20*/]) && __LIB_0__::func_48(Local_173[iVar0 /*20*/], Global_35, 10f, 1)) && Local_173[iVar0 /*20*/].f_6 < 60)
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_173[iVar0 /*20*/]))
		{
			if (!Local_173[iVar0 /*20*/].f_7)
			{
				func_695(Local_173[iVar0 /*20*/], 1);
				Local_173[iVar0 /*20*/].f_7 = 1;
			}
			if (iLocal_14 < 2)
			{
				if (iVar0 == 0)
				{
					__LIB_9__::func_233(Local_173[iVar0 /*20*/], iLocal_166);
				}
				else
				{
					__LIB_9__::func_233(Local_173[iVar0 /*20*/], Local_173[0 /*20*/]);
					__LIB_0__::func_862(Local_173[iVar0 /*20*/], Local_173[iVar0 /*20*/].f_19);
				}
			}
			else if (iVar0 > 0)
			{
				__LIB_0__::func_862(Local_173[iVar0 /*20*/], Local_173[iVar0 /*20*/].f_19);
			}
		}
		iVar0++;
	}
	__LIB_12__::func_875(uParam0, Local_173[0 /*20*/], "RBP_MRS_CALHOON", 0);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1226(iVar0));
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_314);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_315);
	return true;
}

bool func_718()
{
	int iVar0;
	int iVar1;
	if (!bLocal_2239)
	{
		STREAMING::REQUEST_MODEL(iLocal_172, false);
		PROPSET::_REQUEST_PROPSET_2(joaat("PG_RC_BEAUANDPENE201X"));
		bLocal_2239 = true;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_172) || !PROPSET::_HAS_PROPSET_LOADED_2(joaat("PG_RC_BEAUANDPENE201X")))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		iLocal_170 = VEHICLE::CREATE_VEHICLE(iLocal_172, func_1(17), func_2(17), true, true, false, false);
		return false;
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_170))
		{
			if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_170))
			{
				PROPSET::_0xD80FAF919A2E56EA(iLocal_170, joaat("PG_RC_BEAUANDPENE201X"));
			}
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_170, 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_170, 2, true);
			VEHICLE::_0xC1842F40FD501DA2(iLocal_170, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_170, false);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_170, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_170, true);
			AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_170, 0, 16, -1);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_170, 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_170, 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_170, 3, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_170, 4, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_170, 5, true);
			if (!bLocal_2240)
			{
				PED::_0x7C00CFC48A782DC0(iLocal_1676, iLocal_170, 0f, 4f, 0f, 0f, 0f, 0f, 2, 1);
				bLocal_2240 = true;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_170, iVar0);
				if (!__LIB_0__::func_272(iVar1, 0))
				{
				}
				else
				{
					ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar1, 1, 80);
				}
				iVar0++;
			}
		}
		if (!__LIB_4__::func_475(&iLocal_170))
		{
			return false;
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172);
	return true;
}

bool func_719()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1427))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CHAIR_CRATE02X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR_CRATE02X")))
		{
			iLocal_1427 = OBJECT::CREATE_OBJECT(joaat("P_CHAIR_CRATE02X"), 1443.57f, -1446.79f, 76.33f, true, true, false, false, true);
		}
		return false;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIR_CRATE02X"));
	return true;
}

bool func_720()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1560) || !ENTITY::DOES_ENTITY_EXIST(iLocal_1561))
	{
		STREAMING::REQUEST_MODEL(iLocal_1572, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_1572))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1560))
			{
				if (iLocal_14 < 2)
				{
					iLocal_1560 = __LIB_8__::func_931(iLocal_1572, vLocal_1574, fLocal_1577, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_1560, joaat("WORLD_HUMAN_SMOKE"), 0, false, 0, -1f, false);
					return false;
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1561))
			{
				if (iLocal_14 < 2)
				{
					iLocal_1561 = __LIB_8__::func_931(iLocal_1572, vLocal_1578, fLocal_1581, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_1561, joaat("WORLD_HUMAN_STAND_WAITING"), 0, false, 0, -1f, false);
					return false;
				}
			}
		}
		return false;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1572);
	return true;
}

Vector3 func_721(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1436.818f, -1442.657f, 77.2701f;
		case 1:
			return 1444.4f, -1442.9f, 76.8942f;
		case 2:
			return 1437.377f, -1441.915f, 77.3727f;
		case 3:
			return 1436.629f, -1443.79f, 77.0774f;
		case 4:
			return 1444.644f, -1442.376f, 76.5183f;
		case 5:
			return 1346.64f, -1302.555f, 76.4241f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_722(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246.2115f;
		case 1:
			return 178.8188f;
		case 2:
			return 319.9922f;
		case 3:
			return 278.6551f;
		case 4:
			return 343.6501f;
		case 5:
			return 156.5643f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_723(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1301.59f, -1296.86f, 76.4298f;
		case 1:
			return 1302.73f, -1292.98f, 76.103f;
		case 2:
			return 1299.14f, -1294.37f, 76.468f;
		case 3:
			return 1298.25f, -1292.99f, 76.3794f;
		case 4:
			return 1297.766f, -1291.726f, 75.2611f;
		case 5:
			return 1298.16f, -1294.27f, 76.4565f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_724(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70.2663f;
		case 1:
			return 139.586f;
		case 2:
			return 133.157f;
		case 3:
			return 161.965f;
		case 4:
			return -168.595f;
		case 5:
			return -168.595f;
		default:
			break;
	}
	return 0f;
}

bool func_726(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
			return false;
		default:
			break;
	}
	return true;
}

Vector3 func_727(int iParam0)
{
	switch (iParam0)
	{
		case 45:
			return 1414.87f, -1416.71f, 79.58f;
		case 46:
			return 1350.5f, -1323.008f, 76.7845f;
		case 47:
			return 1312.024f, -1319.213f, 75.699f;
		case 48:
			return 1310.172f, -1310.214f, 75.7781f;
		case 29:
			return 1388.54f, -1300.982f, 76.346f;
		case 30:
			return 1390.078f, -1323.199f, 76.789f;
		case 31:
			return 1374.448f, -1304.987f, 75.9773f;
		case 32:
			return 1341.853f, -1354.889f, 77.5125f;
		case 33:
			return 1331.364f, -1351.767f, 77.6944f;
		case 34:
			return 1375.116f, -1366.668f, 77.7171f;
		case 35:
			return 1349.503f, -1376.355f, 79.4806f;
		case 36:
			return 1377.94f, -1408.885f, 78.252f;
		case 37:
			return 1359.634f, -1304.189f, 76.768f;
		case 49:
			return 1352.299f, -1382.358f, 79.5275f;
		default:
			break;
	}
	return func_1231(iParam0);
	return 0f, 0f, 0f;
}

float func_728(int iParam0)
{
	switch (iParam0)
	{
		case 45:
			return 12.8177f;
		case 46:
			return 344.8086f;
		case 47:
			return 284.8845f;
		case 48:
			return 357.6501f;
		case 29:
			return 85.1964f;
		case 30:
			return 69.1031f;
		case 31:
			return 143.1351f;
		case 32:
			return 128.7423f;
		case 33:
			return 138.9083f;
		case 34:
			return 289.8354f;
		case 35:
			return 257.3911f;
		case 36:
			return 108.289f;
		case 37:
			return 161.9209f;
		case 49:
			return 266.7641f;
		default:
			break;
	}
	return func_1232(iParam0);
	return 0f;
}

bool func_729(int iParam0)
{
	switch (iParam0)
	{
		case 45:
		case 46:
		case 47:
		case 48:
			return false;
		default:
			break;
	}
	return true;
}

Vector3 func_730(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1378.981f, -1347.034f, 77.0931f;
		case 2:
			return 1359.42f, -1384.926f, 78.4537f;
		case 3:
			return 1338.32f, -1323.03f, 76.05f;
		case 0:
			return 1352.32f, -1305.82f, 75.9f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_731(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 92.2254f;
		case 2:
			return 160.2428f;
		case 3:
			return 159.5493f;
		case 0:
			return 95f;
		default:
			break;
	}
	return 0f;
}

void func_732(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	if (Local_173[iParam0 /*20*/].f_1 != iVar0 && !ENTITY::IS_ENTITY_DEAD(Local_173[iParam0 /*20*/]))
	{
		Local_173[iParam0 /*20*/].f_1 = iVar0;
	}
	else
	{
		return;
	}
	if (iParam1 != 3)
	{
		TASK::CLEAR_PED_TASKS(Local_173[iParam0 /*20*/], true, false);
	}
	switch (iParam1)
	{
		case 1:
		case 2:
		case 3:
			break;
		case 4:
			if (iParam0 != 0)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_173[iParam0 /*20*/], Local_173[0 /*20*/], -1, -1f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(Local_173[iParam0 /*20*/], Local_173[0 /*20*/], -1, 0, 51, 0);
			}
			break;
		case 5:
			TASK::TASK_SMART_FLEE_COORD(Local_173[iParam0 /*20*/], func_361(iParam0), 1000f, -1, false, 1077936128);
			break;
	}
}

void func_733()
{
	if (!func_218(16384))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1597);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1597);
		func_389(16384);
	}
}

void func_734(int iParam0, bool bParam1)
{
	if (func_218(16384))
	{
		if (bParam1)
		{
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_1597, true);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1597);
		func_579(16384);
	}
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_1597);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1597);
}

void func_741(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;
	iVar0 = iParam1;
	if (Local_324[iParam0 /*20*/].f_1 != iVar0 && !ENTITY::IS_ENTITY_DEAD(Local_324[iParam0 /*20*/]))
	{
		Local_324[iParam0 /*20*/].f_1 = iVar0;
	}
	else
	{
		return;
	}
	if (iParam1 != 4 && iParam1 != 5)
	{
		if (PED::IS_PED_IN_GROUP(Local_324[iParam0 /*20*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_324[iParam0 /*20*/]);
		}
	}
	Var1.f_4 = -1;
	Var1.f_8 = 2;
	Var1.f_9 = 1;
	Var1.f_10 = 1;
	Var1.f_11 = 1;
	Var1.f_13 = 1;
	Var1.f_14 = 2;
	Var1.f_15 = 2;
	Var1.f_16 = 3;
	Var1.f_19 = 3;
	Var1.f_20 = 1;
	Var1.f_21 = 3;
	Var1.f_22 = 3;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_324[iParam0 /*20*/], -1))
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(Local_324[iParam0 /*20*/], func_1222(0), -1);
			}
			break;
		case 2:
			TASK::TASK_STAND_STILL(Local_324[iParam0 /*20*/], -1);
			break;
		case 3:
			Local_324[iParam0 /*20*/].f_8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_170, vLocal_1685[iParam0 /*3*/]) };
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_324[iParam0 /*20*/], Local_324[iParam0 /*20*/].f_8, 1.5f, 20000, 0.25f, 0, 40000f);
			break;
		case 4:
		case 5:
			func_859();
			ENTITY::FREEZE_ENTITY_POSITION(Local_324[iParam0 /*20*/], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_324[iParam0 /*20*/], true);
			if (!PED::IS_PED_IN_GROUP(Local_324[iParam0 /*20*/]))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(Local_324[iParam0 /*20*/]);
				PED::SET_PED_CONFIG_FLAG(Local_324[iParam0 /*20*/], 169, true);
				PED::SET_PED_CONFIG_FLAG(Local_324[iParam0 /*20*/], 279, true);
				PED::SET_PED_CONFIG_FLAG(Local_324[iParam0 /*20*/], 313, true);
				PED::FORCE_PED_MOTION_STATE(Local_324[iParam0 /*20*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
				PED::SET_PED_AS_GROUP_MEMBER(Local_324[iParam0 /*20*/], __LIB_0__::func_110());
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_324[iParam0 /*20*/], 1f);
				PED::_0x0E9E95FDEDCC9D35(Local_324[iParam0 /*20*/], iParam0, 0);
			}
			PED::SET_PED_CONFIG_FLAG(Local_324[iParam0 /*20*/], 53, true);
			Var1 = { 0f, 0f, 1.7f };
			Var1.f_3 = iLocal_170;
			Var1.f_7 = -1;
			Var1.f_8 = 4;
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_324[iParam0 /*20*/], &Var1);
			VEHICLE::_0xFFFE15B433300B8C(iLocal_170, Local_324[iParam0 /*20*/], 2);
			VEHICLE::_0x6EA1273D525427F4(iLocal_170, 3, 1);
			VEHICLE::_0x6EA1273D525427F4(iLocal_170, 5, 1);
			break;
		case 6:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_324[iParam0 /*20*/], func_723(iParam0), func_724(iParam0), true, false, true);
			func_733();
			TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(1, 300));
			func_734(Local_324[iParam0 /*20*/], 0);
			break;
		case 7:
			func_733();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_723(iParam0), 1.5f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_173[0 /*20*/], -1, -1f, -1f, -1f);
			func_734(Local_324[iParam0 /*20*/], 0);
			TASK::TASK_LOOK_AT_ENTITY(Local_324[iParam0 /*20*/], Local_173[0 /*20*/], -1, 0, 51, 0);
			break;
		case 8:
			TASK::TASK_SMART_FLEE_COORD(Local_324[iParam0 /*20*/], func_723(iParam0), 1000f, -1, false, 1077936128);
			break;
	}
}

void func_765(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_404, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_12__::func_705(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_404, 524288))
		{
			func_1259(&(uParam0->f_416));
		}
		func_1260(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1262(uParam0);
		func_1263(uParam0);
		__LIB_12__::func_943(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_12__::func_853(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_417)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_417));
		}
	}
}

void func_772(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_773(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_773(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		func_1276(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1277(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

bool func_786(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	Var0 = { func_1300(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_788(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_852(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_1304(iParam0, iParam1, 1, 0);
		}
	}
}

void func_828(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	iVar0 = iParam1;
	if (Local_1432[iParam0 /*20*/].f_1 != iVar0 && !ENTITY::IS_ENTITY_DEAD(Local_1432[iParam0 /*20*/]))
	{
		if (iParam0 != 0 && 7 != iParam1)
		{
			TASK::CLEAR_PED_TASKS(Local_1432[iParam0 /*20*/], true, false);
		}
		Local_1432[iParam0 /*20*/].f_1 = iVar0;
	}
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(Local_1432[iParam0 /*20*/], func_730(iParam0), 5f, 0, false, true, false, false);
			break;
		case 2:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1432[iParam0 /*20*/], func_830(iParam0), 1f, -1, 0.25f, 0, 40000f);
			break;
		case 5:
			TASK::TASK_GO_TO_ENTITY(Local_1432[iParam0 /*20*/], Local_173[1 /*20*/], -1, 0.2f, 2f, 0f, 1);
			break;
		case 3:
			sVar1 = func_832(iParam0);
			sVar2 = func_833(iParam0);
			sVar3 = func_1362(iParam0);
			sVar4 = func_1363(iParam0);
			STREAMING::REQUEST_ANIM_DICT(sVar1);
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar1) && STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				func_733();
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sVar1, sVar2, iLocal_170, -1, 1.5f, -1.5f, 0, 0f, false, false, -1f, 0, 0, -1f);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sVar3, sVar4, iLocal_170, -1, 1.5f, -1.5f, 0, 0f, false, false, -1f, 0, 0, -1f);
				func_734(Local_1432[iParam0 /*20*/], 0);
				STREAMING::REMOVE_ANIM_DICT(sVar1);
				STREAMING::REMOVE_ANIM_DICT(sVar3);
			}
			break;
		case 4:
			sVar5 = func_832(iParam0);
			sVar6 = func_833(iParam0);
			STREAMING::REQUEST_ANIM_DICT(sVar5);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar5))
			{
				func_733();
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_170, 0, -1f, -1f, -1f);
				TASK::TASK_PLAY_ANIM(0, sVar5, sVar6, 1.5f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
				func_734(Local_1432[iParam0 /*20*/], 0);
				STREAMING::REMOVE_ANIM_DICT(sVar5);
			}
			__LIB_2__::func_259(&(Local_1432[iParam0 /*20*/].f_3));
			break;
		case 7:
			if (iParam0 == 0)
			{
				TASK::TASK_SMART_FLEE_PED(Local_1432[iParam0 /*20*/], Global_35, 1000f, -1, 256, 2f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(Local_1432[iParam0 /*20*/], Global_35, 1000f, -1, 16640, 1f, 0);
			}
			break;
		case 6:
			__LIB_2__::func_259(&(Local_1432[iParam0 /*20*/].f_3));
			break;
	}
}

int func_829(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 46;
		case 2:
			return 30;
		case 3:
			return 68;
		case 0:
			return 72;
		default:
			break;
	}
	return 0;
}

Vector3 func_830(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1376.75f, -1347.89f, 76.7307f;
		case 2:
			return 1362.706f, -1384.568f, 78.4183f;
		case 3:
			return 1341.65f, -1317.06f, 75.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_831(int iParam0)
{
	if (iParam0 == 1 || iParam0 == 3)
	{
		return true;
	}
	return false;
}

char* func_832(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "AI_GESTURES@GEN_MALE@STANDING@SILENT@SCRIPT";
		case 3:
			return "MECH_WEAPONS_THROWN@BASE";
		case 1:
			return "MECH_WEAPONS_THROWN@BASE";
		default:
			break;
	}
	return "";
}

char* func_833(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "silent_aggressive_spit_f_001";
		case 3:
			return "throw_m_fb_stand";
		case 1:
			return "throw_m_fb_stand";
		default:
			break;
	}
	return "";
}

void func_844()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!__LIB_0__::func_255(Local_324[iVar0 /*20*/], 0))
		{
			iVar1 = Local_324[iVar0 /*20*/].f_1;
			iVar2 = iVar0;
			if (iVar1 != 4 && iVar1 != 5)
			{
				if (PED::IS_PED_IN_GROUP(Local_324[iVar0 /*20*/]))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_324[iVar0 /*20*/]);
				}
			}
			switch (iVar1)
			{
				case 0:
					if (iLocal_14 < 1)
					{
						func_741(iVar2, 1);
					}
					else if (iLocal_14 < 3)
					{
					}
					break;
				case 5:
					if (!Local_324[iVar2 /*20*/].f_11.f_4)
					{
						Local_324[iVar2 /*20*/].f_11.f_1 = func_1157(func_1374(iVar2));
						Local_324[iVar2 /*20*/].f_11.f_4 = func_1375(&(Local_324[iVar2 /*20*/].f_11), func_1374(iVar2), 1, "pbl_Idle_A", Local_324[iVar2 /*20*/], 0);
					}
					break;
				case 2:
					if (iLocal_1646 >= func_1376(iVar0))
					{
						if (func_866(iVar2))
						{
							func_741(iVar2, 4);
						}
						else
						{
							func_741(iVar2, 5);
						}
					}
					break;
				case 3:
					if (__LIB_0__::func_266(Local_324[iVar2 /*20*/], Local_324[iVar2 /*20*/].f_8, 2f, 1, 1))
					{
						func_741(iVar2, 5);
					}
					if (!Local_324[iVar2 /*20*/].f_11.f_4)
					{
						Local_324[iVar2 /*20*/].f_11.f_1 = func_1157(func_1374(iVar2));
						Local_324[iVar2 /*20*/].f_11.f_4 = func_1375(&(Local_324[iVar2 /*20*/].f_11), func_1374(iVar2), 1, "pbl_Idle_A", Local_324[iVar2 /*20*/], 0);
					}
					break;
			}
		}
		iVar0++;
	}
}

int func_848(int iParam0, bool bParam1)
{
	if (!vLocal_91[iParam0 /*3*/].f_1)
	{
		if (bParam1)
		{
			if (!vLocal_91[iParam0 /*3*/].f_2)
			{
				if (!__LIB_1__::func_588(vLocal_91[iParam0 /*3*/], 0, 0, -1, -1, 0))
				{
					__LIB_12__::func_772(5, vLocal_91[iParam0 /*3*/], 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				__LIB_1__::func_422(vLocal_91[iParam0 /*3*/], 7500, 0, 1, 0, 0, -1, -1, 0);
				vLocal_91[iParam0 /*3*/].f_2 = 1;
				return 1;
			}
		}
		else
		{
			if (__LIB_0__::func_270())
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			}
			__LIB_1__::func_422(vLocal_91[iParam0 /*3*/], 7500, 0, 1, 0, 0, -1, -1, 0);
			__LIB_12__::func_772(5, vLocal_91[iParam0 /*3*/], 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			vLocal_91[iParam0 /*3*/].f_1 = 1;
			return 1;
		}
	}
	return 0;
}

void func_849(int iParam0)
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
	__LIB_0__::func_782(iParam0, 32);
	func_498();
}

void func_852(int iParam0, int iParam1)
{
	if (!vLocal_91[iParam0 /*3*/].f_1)
	{
		if (!__LIB_0__::func_899(&uLocal_1719))
		{
			__LIB_2__::func_259(&uLocal_1719);
		}
		else if (__LIB_9__::func_401(&uLocal_1719) > iParam1)
		{
			func_848(iParam0, 0);
		}
		if (__LIB_5__::func_352(vLocal_91[iParam0 /*3*/]))
		{
			vLocal_91[iParam0 /*3*/].f_1 = 1;
			__LIB_1__::func_561(&uLocal_1719);
		}
	}
}

bool func_853(var uParam0)
{
	switch (iLocal_2246)
	{
		case 0:
			if (__LIB_0__::func_266(Global_35, func_1(15), 50f, 1, 1))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1833[4 /*5*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1833[4 /*5*/], false))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_1833[4 /*5*/], "pl_Loop_A_leadin_Loop_B") && !ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1833[4 /*5*/], "Loop_Idle_A"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1833[4 /*5*/], "Loop_Idle_A", true, false);
						iLocal_2246 = 1;
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_266(iLocal_159, func_1(15), 20f, 1, 1) && __LIB_0__::func_266(Global_35, func_1(15), 30f, 1, 1))
			{
				func_389(16);
				func_352(9);
				iLocal_2246++;
				__LIB_6__::func_900(func_196(10), 1, 0);
			}
			break;
		case 2:
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				if (func_534(4, 0, "pl_penelope_turn_run", 0))
				{
					iLocal_2246++;
				}
				func_225(uParam0, 15, &iLocal_166, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
			}
			break;
		case 3:
			if (func_687(4, 1065017672 /* Float: 0.98f */))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_854()
{
	if (!func_218(524288))
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_1671, 0, 262144, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_1672, 0, 262144, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_1673, 0, 262144, 0, -1, -1, 0);
		MISC::_0x2FCD528A397E5C88(iLocal_1671, 49160);
		__LIB_3__::func_729(iLocal_1671, 0, 0);
		MISC::_0x2FCD528A397E5C88(iLocal_1672, 49160);
		__LIB_3__::func_729(iLocal_1672, 0, 0);
		MISC::_0x2FCD528A397E5C88(iLocal_1673, 49160);
		__LIB_3__::func_729(iLocal_1673, 0, 0);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1671, 0, 0, 0);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1672, 0, 0, 0);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1673, 0, 0, 0);
		func_389(524288);
	}
}

void func_855(var uParam0)
{
	float fVar0;
	func_356();
	if (__LIB_2__::func_343(Global_35, iLocal_170, 0))
	{
		fVar0 = 2.6f;
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_170, false);
		VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_170, 1.7f);
		VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_170, 1.7f);
		VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_170, fVar0);
		fLocal_1647 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1643, true);
		if (ENTITY::GET_ENTITY_SPEED(iLocal_170) < 0.05f)
		{
			if (iLocal_21[16] && !iLocal_21[30])
			{
				if ((!__LIB_0__::func_266(Global_35, func_1(18), 12f, 1, 1) && !__LIB_0__::func_266(iLocal_170, func_1(18), 12f, 1, 1)) && (iLocal_17 < 1 || iLocal_17 >= 7))
				{
					func_1380(uParam0, &sLocal_2161, &uLocal_2165, 25f);
				}
			}
		}
	}
}

void func_856(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_324[iVar0 /*20*/]) && !__LIB_0__::func_255(Local_324[iVar0 /*20*/], 0))
		{
			if (bParam0)
			{
				ENTITY::SET_ENTITY_PROOFS(Local_324[iVar0 /*20*/], 8, false);
			}
			else
			{
				ENTITY::SET_ENTITY_PROOFS(Local_324[iVar0 /*20*/], 0, false);
			}
		}
		iVar0++;
	}
}

void func_857(bool bParam0, bool bParam1)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ACCURATE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ATTACK2"), false);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

void func_858()
{
	char* sVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!bLocal_1613)
	{
		bLocal_1613 = AUDIO::_0xD9130842D7226045("rbnp2_Sounds", 0);
	}
	if (bLocal_1613)
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (!iLocal_1600[iVar4])
			{
				iVar6 = iVar4;
				iVar5 = func_1381(iVar6);
				if (iLocal_1646 > iVar5 && iVar5 > 0)
				{
					sVar0 = func_1073(iVar6);
					vVar1 = { func_1382(iVar6) };
					AUDIO::_PLAY_SOUND_FROM_POSITION(sVar0, vVar1, "rbnp2_Sounds", false, 0, true, 0);
					iLocal_1600[iVar4] = 1;
				}
			}
			iVar4++;
		}
	}
}

void func_859()
{
	int iVar0;
	AITRANSPORT::_0xBA8818212633500A(iLocal_170, 2, 1);
	AITRANSPORT::_0xDD0660C997DE94FD(iLocal_170, 0);
	if (!bLocal_2185)
	{
		PED::SET_GROUP_FORMATION(__LIB_0__::func_110(), 5);
		iVar0 = 0;
		while (iVar0 < 11)
		{
			PED::ADD_CUSTOM_FORMATION_LOCATION(__LIB_0__::func_110(), vLocal_1685[iVar0 /*3*/], iVar0);
			iVar0++;
		}
		PED::_0xD5BD1B5318A81994(__LIB_0__::func_110(), 0);
		PED::_0x8AFCCC0F18D70018(__LIB_0__::func_110(), 1);
		PED::SET_FORMATION_POSITIONS_TARGET_RADIUS(__LIB_0__::func_110(), 1.2f);
		PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_110(), 1f, -1f, -1f);
		PED::_0x97C475212B327666(__LIB_0__::func_110(), 1);
		PED::_0x154B7E841AC7412F(__LIB_0__::func_110(), 0);
		PED::_0x8AFCCC0F18D70018(__LIB_0__::func_110(), 1);
		PED::_0xB05CC690CDE8A4A9(__LIB_0__::func_110(), 0f);
		PED::_0x478F6B9920446CE2(__LIB_0__::func_110(), 1);
		bLocal_2185 = true;
	}
}

void func_860()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_1599))
	{
		iLocal_1599 = __LIB_10__::func_860(408396114, func_1(18), 1109393408 /* Float: 40f */, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1599, "BAP12_B_CHURC");
		MAP::_BLIP_SET_MODIFIER(iLocal_1599, -1878373110);
	}
}

void func_861(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_1432[0 /*20*/]))
	{
		switch (iLocal_17)
		{
			case 0:
				if (iLocal_1646 >= func_829(0))
				{
					iLocal_17 = 1;
					func_1155(Local_1432[0 /*20*/], iLocal_166);
				}
				else if (!PED::IS_PED_FACING_PED(Local_1432[0 /*20*/], iLocal_166, 15f) && !__LIB_0__::func_163(Local_1432[0 /*20*/], -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1432[0 /*20*/], iLocal_166, 0, -1f, -1f, -1f);
				}
				break;
			case 1:
				if (func_534(5, 0, 0, 0))
				{
					iLocal_17 = 2;
					__LIB_12__::func_875(uParam0, Local_1432[0 /*20*/], "BAP21_Heckler1", 0);
				}
				break;
			case 2:
				func_225(uParam0, 17, &(Local_1432[0 /*20*/]), 30f, 1109393408 /* Float: 40f */, 1, 1);
				if (func_687(5, 0.92f))
				{
					TASK::TASK_SMART_FLEE_PED(Local_1432[0 /*20*/], Global_35, 10000f, -1, 16640, 1f, 0);
					func_389(128);
					iLocal_17 = 8;
				}
				break;
		}
	}
}

void func_862(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_446[iVar0 /*20*/]))
		{
			iVar1 = Local_446[iVar0 /*20*/].f_1;
			iVar2 = iVar0;
			if (iVar1 != 7)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Local_446[iVar2 /*20*/], iLocal_1676, true, 0))
				{
					func_674(iVar2, 7);
					iLocal_1582++;
					func_389(16777216);
				}
				else
				{
					switch (iVar1)
					{
						case 0:
							if (bLocal_19)
							{
								func_674(iVar2, 1);
								iLocal_20++;
								if (iLocal_20 > 3)
								{
									bLocal_19 = false;
								}
							}
						else
						{
							}
							else
							{
								Jump @864; //curOff = 180
								if (iLocal_1646 >= func_1384(iVar0))
								{
									if (__LIB_0__::func_86(func_1153(iVar2)))
									{
										func_674(iVar2, 3);
									}
									else
									{
										func_674(iVar2, 2);
									}
								}
								else if ((!__LIB_0__::func_163(Local_446[iVar2 /*20*/], 1647992574) && !__LIB_0__::func_163(Local_446[iVar2 /*20*/], 993674639)) && !__LIB_0__::func_163(Local_446[iVar2 /*20*/], -76381094))
								{
									Local_446[iVar2 /*20*/].f_6++;
									if (Local_446[iVar2 /*20*/].f_6 > 15)
									{
										__LIB_1__::func_473(Local_446[iVar2 /*20*/], joaat("WORLD_HUMAN_STARE_STOIC"), -1, 0, 0, -1082130432 /* Float: -1f */);
									}
								}
								Jump @864; //curOff = 350
								if (!Local_446[iVar0 /*20*/].f_2)
								{
									if (__LIB_0__::func_163(Local_446[iVar0 /*20*/], 242628503))
									{
										Local_446[iVar0 /*20*/].f_2 = 1;
									}
								}
								else if (__LIB_0__::func_163(Local_446[iVar0 /*20*/], 242628503) && TASK::GET_SEQUENCE_PROGRESS(Local_446[iVar0 /*20*/]) > 1)
								{
									func_674(iVar2, 3);
								}
								Jump @864; //curOff = 442
								if (!Local_446[iVar0 /*20*/].f_11.f_4)
								{
									if (func_1385(iVar2))
									{
										if (func_1375(&(Local_446[iVar0 /*20*/].f_11), func_1156(iVar2), 0, Local_446[iVar2 /*20*/].f_11.f_2, Local_446[iVar2 /*20*/], Local_446[iVar2 /*20*/].f_16))
										{
											func_1155(Local_446[iVar0 /*20*/], Global_35);
											Local_446[iVar0 /*20*/].f_11.f_4 = 1;
											TASK::TASK_LOOK_AT_ENTITY(Local_446[iVar0 /*20*/], Global_35, -1, 33798, 51, 1);
										}
									}
								}
								else if (Local_446[iVar0 /*20*/].f_2)
								{
									if (!__LIB_0__::func_163(Local_446[iVar0 /*20*/], -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_446[iVar0 /*20*/], iLocal_170, -1, -1f, -1f, -1f);
									}
								}
								else if (func_1386(iVar0) > -1 && iLocal_1646 >= func_1386(iVar0))
								{
									func_674(iVar2, 5);
									Local_446[iVar0 /*20*/].f_11.f_4 = 0;
								}
								Jump @864; //curOff = 679
								Local_446[iVar0 /*20*/].f_11.f_2 = func_501(5);
								if (func_1375(&(Local_446[iVar0 /*20*/].f_11), func_1156(iVar2), 0, func_501(5), Local_446[iVar2 /*20*/], 0))
								{
									func_674(iVar2, 4);
								}
								Jump @864; //curOff = 741
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_446[iVar0 /*20*/].f_11))
								{
									if ((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_446[iVar0 /*20*/].f_11) >= 0.95f || ANIMSCENE::_0xF94692EB9DC15D74(Local_446[iVar0 /*20*/].f_11, 0)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_446[iVar0 /*20*/].f_11, false))
									{
										func_674(iVar2, 6);
										if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_446[iVar0 /*20*/].f_11))
										{
											ANIMSCENE::_DELETE_ANIM_SCENE(Local_446[iVar0 /*20*/].f_11);
										}
									}
								}
							}
							iVar0++;
							default:
								break;
					}
				}
			}
		}
	}
}

void func_863()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_324[iVar0 /*20*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_324[iVar0 /*20*/], 1.7f);
		}
		iVar0++;
	}
}

bool func_866(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return false;
		default:
			break;
	}
	return false;
}

void func_868()
{
	if (!bLocal_2418)
	{
		PED::SET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 301, false);
		PED::SET_PED_CONFIG_FLAG(Local_1513[1 /*23*/], 301, false);
		__LIB_3__::func_157(&(Local_2383[0 /*17*/]), "BAP12_C_ANTA", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		__LIB_3__::func_157(&(Local_2383[1 /*17*/]), "BAP12_C_CALM", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 413, false);
		PED::SET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 330, false);
		PED::SET_PED_CONFIG_FLAG(Local_1513[1 /*23*/], 413, false);
		PED::SET_PED_CONFIG_FLAG(Local_1513[1 /*23*/], 330, false);
		__LIB_2__::func_526(&Local_2383, 1, 0);
		bLocal_2418 = true;
	}
}

int func_869(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	int iVar9;
	int iVar10;
	bool bVar11;
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
		fVar8 = __LIB_5__::func_439(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		__LIB_13__::func_282(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_13__::func_500(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_869(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_8__::func_963(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_12__::func_951(iParam1, uParam3);
					if (__LIB_13__::func_501(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_13__::func_43(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_501(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_12__::func_951(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					__LIB_1__::func_491(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!__LIB_0__::func_163(Global_35, 501393341) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar9 = 0;
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!__LIB_0__::func_163(Global_35, -828834893) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar10 = 0;
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || __LIB_6__::func_789(iParam1, iParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_12__::func_960(iParam1)))
					{
					}
					else if (!func_1405(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_2__::func_259(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								__LIB_2__::func_526(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			case 4:
				if (__LIB_12__::func_952(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_501(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_12__::func_952(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_13__::func_47(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_870()
{
	__LIB_2__::func_480(&Local_2383, 1, 1, 1, 0);
	__LIB_1__::func_480(&(Local_1513[0 /*23*/]));
	__LIB_1__::func_480(&(Local_1513[1 /*23*/]));
	bLocal_2418 = false;
}

bool func_871()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((((((((__LIB_4__::func_417(Local_1513[iVar0 /*23*/]) || PED::IS_PED_DEAD_OR_DYING(Local_1513[iVar0 /*23*/], true)) || PED::GET_PED_CONFIG_FLAG(Local_1513[iVar0 /*23*/], 11, true)) || PED::_IS_PED_LASSOED(Local_1513[iVar0 /*23*/])) || PED::_IS_PED_HOGTIED(Local_1513[iVar0 /*23*/])) || (__LIB_2__::func_401(Local_1513[iVar0 /*23*/], 1, 1, 1, 0, 0) && __LIB_0__::func_48(Local_1513[iVar0 /*23*/], Global_35, 8f, 1))) || PED::_0x29FCE825613FEFCA(Local_1513[iVar0 /*23*/], 500)) || PED::_0x5203038FF8BAE577(Local_1513[iVar0 /*23*/], 15, 1000)) || PED::IS_PED_RAGDOLL(Local_1513[iVar0 /*23*/]))
		{
			func_389(2097152);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_874(var uParam0)
{
	int iVar0;
	iVar0 = func_875();
	if (iLocal_21[65])
	{
		if (!iLocal_21[68] && !iLocal_21[67])
		{
			func_225(uParam0, 67, &(Local_1513[0 /*23*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
			func_225(uParam0, 68, &(Local_1513[1 /*23*/]), 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
		}
	}
	if (func_1412())
	{
		func_225(uParam0, 61, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 0, 0);
	}
	else
	{
		func_225(uParam0, 36, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
	}
	if (!__LIB_0__::func_899(&uLocal_2421))
	{
		__LIB_2__::func_259(&uLocal_2421);
	}
	if (iVar0 == 2)
	{
		if (__LIB_4__::func_118(&uLocal_2421) > fLocal_2424)
		{
			if (func_225(uParam0, 42, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
			{
				__LIB_2__::func_259(&uLocal_2421);
				fLocal_2424 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
				return;
			}
			if (func_225(uParam0, 44, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
			{
				__LIB_2__::func_259(&uLocal_2421);
				fLocal_2424 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
				return;
			}
			if (func_225(uParam0, 38, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
			{
				__LIB_2__::func_259(&uLocal_2421);
				fLocal_2424 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
			}
			if (func_225(uParam0, 44, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
			{
				__LIB_2__::func_259(&uLocal_2421);
				fLocal_2424 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
			}
		}
		if (bLocal_2427)
		{
			if (func_1413(uParam0, &uLocal_2425, 40))
			{
				bLocal_2427 = false;
			}
		}
		else if (func_1413(uParam0, &uLocal_2426, 41))
		{
			bLocal_2427 = true;
		}
	}
	else if (iVar0 == 1)
	{
		func_225(uParam0, 46, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
		if ((ENTITY::IS_ENTITY_DEAD(Local_1513[0 /*23*/]) || PED::_IS_PED_HOGTIED(Local_1513[0 /*23*/])) || PED::GET_PED_CONFIG_FLAG(Local_1513[0 /*23*/], 11, true))
		{
			if (func_225(uParam0, 45, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
			{
				__LIB_2__::func_259(&uLocal_2421);
				fLocal_2424 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
				iLocal_21[39] = 0;
			}
			if (__LIB_4__::func_118(&uLocal_2421) > fLocal_2424)
			{
				func_225(uParam0, 39, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
			}
			func_1413(uParam0, &uLocal_2426, 41);
		}
		if ((ENTITY::IS_ENTITY_DEAD(Local_1513[1 /*23*/]) || PED::_IS_PED_HOGTIED(Local_1513[1 /*23*/])) || PED::GET_PED_CONFIG_FLAG(Local_1513[1 /*23*/], 11, true))
		{
			if (func_225(uParam0, 43, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
			{
				__LIB_2__::func_259(&uLocal_2421);
				fLocal_2424 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
				iLocal_21[38] = 0;
			}
			if (__LIB_4__::func_118(&uLocal_2421) > fLocal_2424)
			{
				func_225(uParam0, 38, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
			}
			func_1413(uParam0, &uLocal_2425, 40);
		}
	}
	if (__LIB_4__::func_118(&uLocal_2421) > fLocal_2424)
	{
		func_225(uParam0, 37, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1);
	}
}

int func_875()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1513[iVar1 /*23*/]) && !PED::_IS_PED_HOGTIED(Local_1513[iVar1 /*23*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_876()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2160))
	{
		iLocal_2160 = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSTACK01X"), 1391.236f, -1788.165f, 63.9684f, true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2160, true);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2159))
	{
		iLocal_2159 = OBJECT::CREATE_OBJECT(joaat("P_CS_PLAYERSATCHEL"), 1391.823f, -1787.786f, 63.7955f, true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2159, true);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		iLocal_163 = __LIB_8__::func_931(iLocal_165, func_1(12), func_2(12), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return 0;
	}
	return 1;
}

int func_877()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1513[iVar1 /*23*/]) && PED::_IS_PED_HOGTIED(Local_1513[iVar1 /*23*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_913(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && __LIB_0__::func_347(iParam1)) != 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_348(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_1437(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			__LIB_0__::func_349(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1437(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_917(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_1440(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_1441(iParam0, &iVar0, iParam1))
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
			func_1447(iVar5);
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
				func_917(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_1456(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1456(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
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
	if (__LIB_0__::func_774(iParam0, 8388608) && !func_1457(28))
	{
		func_1458(28);
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
					if (__LIB_0__::func_708(0) && func_1126(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
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
					if (__LIB_0__::func_708(0) && func_1126(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
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
			if (!func_1463(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_1465(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_1466(iParam0);
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
			func_1473(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			func_1474(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			func_1475(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_1476(iParam0);
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
			func_1478(iParam0, iParam1);
			func_1479(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_1304(iParam0, 0, 0, 0);
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
						func_917(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_917(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_917(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_917(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_917(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_917(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_917(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1458(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_1276(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					func_1126(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_1276(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_917(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_917(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_1457(1))
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
		if (!func_1501(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_1502(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1503(iParam0);
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
				func_917(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_919()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1514();
	func_1515();
	func_1516();
	func_1517();
	func_1518();
	func_1519();
	__LIB_0__::func_376();
}

void func_920(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_381(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		func_1522(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(func_1523(iParam0), 1);
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

int func_927(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { func_1300(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_1276(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_954()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1544(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
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

void func_1032(int iParam0)
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
	bVar3 = func_1457(42);
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
				__LIB_1__::func_457(&(Global_1900383[iParam0 /*45*/].f_27));
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
		__LIB_1__::func_458(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
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

int func_1046(var uParam0, int iParam1, int iParam2)
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
		return func_1046(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1048(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_BeauGray", iLocal_159, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "Horse_01", iLocal_164, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_brushHorse01x", iLocal_161, 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_BeauGray", iLocal_159, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "Horse_01", iLocal_164, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_brushHorse01x", iLocal_161, 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "MRS_CALHOUN", Local_173[0 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RHDTOWNFOLK_01^9", Local_173[1 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RHDTOWNFOLK_01^1", Local_173[2 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RHDTOWNFOLK_01^2", Local_173[3 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RhdTownfolk_01^10", Local_324[4 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RHDTOWNFOLK_01^3", Local_173[5 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RHDTOWNFOLK_01^8", Local_173[6 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RHDTOWNFOLK_01^6", Local_324[0 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RHDTOWNFOLK_01^7", Local_324[1 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RHDTOWNFOLK_01^4", Local_324[2 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_chair_crate02x", iLocal_1427, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_M_M_RhdTownfolk_01", iLocal_1560, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_M_M_RhdTownfolk_01^1", iLocal_1561, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette03x", iLocal_316[2], 0);
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "PENELOPEBRAITHWAITE", iLocal_166, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "BEAUGRAY", iLocal_159, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette03x", iLocal_316[2], 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_316[2], false, false);
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1833[iParam0 /*5*/], ENTITY::GET_ENTITY_COORDS(Local_1432[0 /*20*/], true, false), 0f, 0f, __LIB_3__::func_978(Local_1432[0 /*20*/], iLocal_170, 1), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_M_M_RHDTOWNFOLK_01", Local_1432[0 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "wagon02x", iLocal_170, 0);
			break;
		case 6:
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1833[iParam0 /*5*/], iLocal_170, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_170, "chassis_dummy"));
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_MRS_CALHOUN", Local_173[0 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_NBXTOWNFOLK_01", Local_173[1 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_PenelopeBraithwaite", iLocal_166, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette04x", iLocal_316[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette05x", iLocal_316[2], 0);
			__LIB_4__::func_185(&Global_35, &iLocal_170, -1, 1);
			break;
		case 7:
			__LIB_4__::func_185(&Global_35, &iLocal_170, -1, 1);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1833[iParam0 /*5*/], iLocal_170, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_170, "chassis_dummy"));
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_MRS_CALHOUN", Local_173[0 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_PenelopeBraithwaite", iLocal_166, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RhdTownfolk_01^1", Local_173[1 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette04x", iLocal_316[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette05x", iLocal_316[4], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_M_M_RHDTOWNFOLK_01", Local_1432[0 /*20*/], 0);
			break;
		case 63:
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1833[iParam0 /*5*/], iLocal_170, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_170, "chassis_dummy"));
			__LIB_4__::func_185(&Global_35, &iLocal_170, -1, 1);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RhdTownfolk_01^4", Local_173[2 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RhdTownfolk_01^2", Local_173[3 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RHDTOWNFOLK_01", Local_173[4 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RhdTownfolk_01^3", Local_173[5 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RhdTownfolk_01^5", Local_173[6 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "A_F_M_RhdTownfolk_01^1", Local_173[1 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette01x", iLocal_316[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette02x", iLocal_316[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette03x", iLocal_316[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette04x", iLocal_316[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_sign_suffragette05x", iLocal_316[4], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "PenelopeBraithwaite", iLocal_166, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_MRS_CALHOUN", Local_173[0 /*20*/], 0);
			break;
		case 8:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "MRS_Calhoun", Local_173[0 /*20*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "p_cs_letter03x", iLocal_1680, 0);
			break;
		case 9:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_SCOTTGRAY", Local_1513[0 /*23*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			break;
		case 10:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_IANGRAY", Local_1513[1 /*23*/], 0);
			break;
		case 11:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "CS_BEAUGRAY", iLocal_159, 0);
			break;
		case 62:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1833[iParam0 /*5*/], PED::_GET_LAST_MOUNT(Global_35), 0);
			break;
		case 64:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1833[iParam0 /*5*/], "MRS_CALHOUN", Local_173[0 /*20*/], 0);
			break;
	}
}

char* func_1073(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CROWD_JEER_01";
		case 1:
			return "CROWD_JEER_02";
		case 2:
			return "CROWD_JEER_03";
		case 3:
			return "CROWD_JEER_04";
		case 4:
			return "CROWD_JEER_05";
		case 5:
			return "CROWD_JEER_06";
		case 6:
			return "CROWD_JEER_07";
		case 7:
			return "CROWD_JEER_08";
		case 8:
			return "CROWD_JEER_09";
		case 9:
			return "CROWD_JEER_10";
		case 10:
			return "CROWD_JEER_RANDOM";
		case 11:
			return "CROWD_JEER_LOOP";
		default:
			break;
	}
	return "";
}

void func_1076(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1076(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1076(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_1126(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1300(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = __LIB_0__::func_235((386 + iVar28), 1);
			if (__LIB_1__::func_112(iParam0, &Var0, iVar5, 0))
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

void func_1151(int iParam0)
{
	vector3 vVar0;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_2186[iParam0]))
	{
		if (__LIB_0__::func_86(func_1231(iParam0)))
		{
			iLocal_2186[iParam0] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_727(iParam0), func_1152(iParam0), 4f, 0, false);
		}
		else
		{
			vVar0 = { func_1231(iParam0) };
			iLocal_2186[iParam0] = TASK::CREATE_SCENARIO_POINT(func_1152(iParam0), vVar0, func_1232(iParam0), 0, 0, 0);
		}
	}
}

int func_1152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING");
		case 1:
			return joaat("PROP_HUMAN_SEAT_CHAIR_PORCH");
		case 2:
			return joaat("WORLD_HUMAN_LEAN_POST_RIGHT");
		case 3:
			return joaat("WORLD_HUMAN_LEAN_RAILING");
		case 4:
			return joaat("PROP_HUMAN_SEAT_CHAIR");
		case 5:
			return joaat("WORLD_HUMAN_LEAN_RAILING");
		case 6:
			return joaat("WORLD_HUMAN_LEAN_RAILING_DRINKING");
		case 7:
			return joaat("WORLD_HUMAN_STRAW_BROOM_WORKING");
		case 8:
			return joaat("WORLD_HUMAN_LEAN_RAILING");
		case 9:
			return joaat("PROP_HUMAN_SEAT_BENCH_BACK");
		case 10:
			return joaat("WORLD_HUMAN_LEAN_RAILING");
		case 11:
			return joaat("PROP_HUMAN_SEAT_CHAIR");
		case 12:
			return joaat("WORLD_HUMAN_STARE_STOIC");
		case 13:
			return joaat("WORLD_HUMAN_BADASS");
		case 14:
			return joaat("WORLD_HUMAN_SEAT_STEPS");
		case 15:
			return joaat("PROP_HUMAN_SEAT_BENCH_BACK");
		case 16:
			return joaat("WORLD_HUMAN_LEAN_WALL_DRINKING");
		case 17:
			return joaat("PROP_HUMAN_SEAT_CHAIR_PORCH");
		case 18:
			return joaat("PROP_HUMAN_SEAT_BENCH");
		case 19:
			return joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING");
		case 20:
			return joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING");
		case 21:
			return joaat("WORLD_HUMAN_SEAT_STEPS");
		case 22:
			return joaat("WORLD_HUMAN_LEAN_POST_LEFT");
		case 23:
			return joaat("WORLD_HUMAN_LEAN_POST_RIGHT");
		case 24:
			return joaat("PROP_HUMAN_SEAT_CHAIR");
		case 25:
			return joaat("PROP_HUMAN_SEAT_BENCH");
		case 26:
			return joaat("WORLD_HUMAN_LEAN_RAILING");
		case 27:
			return joaat("PROP_HUMAN_SEAT_CHAIR_READ_NEWSPAPER");
		case 28:
			return joaat("WORLD_HUMAN_LEAN_RAILING");
		case 38:
			return joaat("WORLD_HUMAN_STARE_STOIC");
		case 39:
			return joaat("WORLD_HUMAN_LEAN_RAILING");
		case 40:
			return joaat("WORLD_HUMAN_STRAW_BROOM_WORKING");
		case 43:
			return joaat("WORLD_HUMAN_SMOKE");
		case 44:
			return joaat("PROP_HUMAN_SEAT_CHAIR_READING");
		case 41:
			return joaat("WORLD_HUMAN_FAN");
		case 42:
			return joaat("WORLD_HUMAN_STARE_STOIC");
		default:
			break;
	}
	return joaat("WORLD_HUMAN_STARE_STOIC");
}

Vector3 func_1153(int iParam0)
{
	switch (iParam0)
	{
		case 45:
			return 1414.87f, -1416.71f, 79.58f;
		case 46:
			return 1352.9f, -1319.697f, 75.9733f;
		case 47:
			return 1316.454f, -1311.333f, 75.5759f;
		case 29:
			return 1383.189f, -1322.329f, 76.4066f;
		case 30:
			return 1383.589f, -1322.63f, 76.4066f;
		case 31:
			return 1374.837f, -1311.357f, 76.1924f;
		case 32:
			return 1365.566f, -1354.6f, 77.0466f;
		case 33:
			return 1365.749f, -1351.512f, 76.9995f;
		case 34:
			return 1375.116f, -1366.668f, 77.7171f;
		case 35:
			return 1357.442f, -1377.865f, 78.3128f;
		case 36:
			return 1377.94f, -1408.885f, 78.252f;
		case 37:
			return 1356.428f, -1307.721f, 76.7368f;
		case 49:
			return 1363.513f, -1312.339f, 76.1013f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_1155(int iParam0, int iParam1)
{
	struct<22> Var0;
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
	Var0 = { 0f, 0f, 0f };
	Var0.f_21 = 4;
	Var0.f_19 = 4;
	Var0.f_17 = 4;
	Var0.f_3 = iParam1;
	Var0.f_7 = -1;
	Var0.f_8 = 4;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

int func_1156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		case 1:
			return 13;
		case 2:
			return 14;
		case 3:
			return 15;
		case 4:
			return 16;
		case 5:
			return 17;
		case 6:
			return 18;
		case 7:
			return 19;
		case 8:
			return 20;
		case 9:
			return 21;
		case 10:
			return 22;
		case 11:
			return 23;
		case 12:
			return 24;
		case 13:
			return 25;
		case 14:
			return 26;
		case 19:
			return 31;
		case 20:
			return 32;
		case 21:
			return 33;
		case 22:
			return 34;
		case 23:
			return 35;
		case 24:
			return 36;
		case 25:
			return 37;
		case 26:
			return 38;
		case 27:
			return 39;
		case 28:
			return 40;
		case 15:
			return 27;
		case 16:
			return 28;
		case 17:
			return 29;
		case 18:
			return 30;
		case 38:
			return 41;
		case 39:
			return 42;
		case 43:
			return 44;
		case 44:
			return 45;
		case 41:
			return 46;
		case 42:
			return 47;
		case 40:
			return 43;
		case 45:
			return 52;
		case 46:
			return 54;
		case 47:
			return 54;
		case 48:
			return 52;
		case 29:
			return 59;
		case 30:
			return 60;
		case 31:
			return 61;
		case 32:
			return 55;
		case 33:
			return 56;
		case 34:
			return 57;
		case 35:
			return 58;
		case 37:
			return 58;
		default:
			break;
	}
	return 55;
}

char* func_1157(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_male_a";
		case 13:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_male_b";
		case 14:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_male_c";
		case 15:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_male_d";
		case 16:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_male_e";
		case 17:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_male_f";
		case 18:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_male_g";
		case 19:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_male_h";
		case 20:
			return "script@rcm@bnp1@ig@rsc2_ig3_heckler_doc_sherr@rsc2_ig3_heckler_doc_sherr_male_a";
		case 21:
			return "script@rcm@bnp1@ig@rsc2_ig3_heckler_doc_sherr@rsc2_ig3_heckler_doc_sherr_male_b";
		case 22:
			return "script@rcm@bnp1@ig@rsc2_ig3_heckler_doc_sherr@rsc2_ig3_heckler_doc_sherr_male_c";
		case 23:
			return "script@rcm@bnp1@ig@rsc2_ig3_heckler_doc_sherr@rsc2_ig3_heckler_doc_sherr_male_d";
		case 24:
			return "script@rcm@bnp1@ig@rsc2_ig3_heckler_doc_sherr@rsc2_ig3_heckler_doc_sherr_male_e";
		case 25:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gunsmi_hotel@ig3_heckler_gunsmi_hotel_male_a";
		case 26:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gunsmi_hotel@ig3_heckler_gunsmi_hotel_male_b";
		case 27:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_blueh@ig3_heckler_blueh_male_a";
		case 28:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_blueh@ig3_heckler_blueh_male_b";
		case 29:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_blueh@ig3_heckler_blueh_male_c";
		case 30:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_blueh@ig3_heckler_blueh_male_d";
		case 31:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_genst_undert@ig3_heckler_genst_undert_male_a";
		case 32:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_genst_undert@ig3_heckler_genst_undert_male_b";
		case 33:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_genst_undert@ig3_heckler_genst_undert_male_c";
		case 34:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_genst_undert@ig3_heckler_genst_undert_male_d";
		case 35:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_genst_undert@ig3_heckler_genst_undert_male_e";
		case 36:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_hotel@ig3_heckler_hotel_male_a";
		case 37:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_hotel@ig3_heckler_hotel_male_b";
		case 38:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_hotel@ig3_heckler_hotel_male_c";
		case 39:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_hotel@ig3_heckler_hotel_male_d";
		case 40:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_hotel@ig3_heckler_hotel_male_e";
		case 44:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_hotel@ig3_heckler_hotel_female_a";
		case 45:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_hotel@ig3_heckler_hotel_female_b";
		case 41:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_female_a";
		case 42:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_saloon@ig3_heckler_saloon_female_b";
		case 46:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_genst_undert@ig3_heckler_genst_undert_female_a";
		case 47:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_genst_undert@ig3_heckler_genst_undert_female_b";
		case 43:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gunsmi_hotel@ig3_heckler_gunsmi_hotel_female_a";
		case 48:
			return "script@rcm@bnp1@ig@s2@ig3_supporter_gestures@ig3_supporter_gestures_female_a_upperbody_support_a";
		case 49:
			return "script@rcm@bnp1@ig@s2@ig3_supporter_gestures@ig3_supporter_gestures_female_a_upperbody_support_b";
		case 50:
			return "script@rcm@bnp1@ig@s2@ig3_supporter_gestures@ig3_supporter_gestures_female_b_upperbody_support_a";
		case 51:
			return "script@rcm@bnp1@ig@s2@ig3_supporter_gestures@ig3_supporter_gestures_female_b_upperbody_support_b";
		case 52:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_female_a_upperbody_aggro_a";
		case 53:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_female_a_upperbody_aggro_b";
		case 54:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_female_b_upperbody_aggro";
		case 55:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_male_a_upperbody_aggro_a";
		case 56:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_male_a_upperbody_aggro_b";
		case 57:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_male_b_upperbody_aggro_a";
		case 58:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_male_b_upperbody_aggro_b";
		case 59:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_male_c_upperbody_aggro_a";
		case 60:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_male_c_upperbody_aggro_b";
		case 61:
			return "script@rcm@bnp1@ig@s2@ig3_heckler_gestures@ig3_heckler_gestures_male_d_upperbody_aggro";
		default:
			break;
	}
	return "";
}

int func_1158(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 25:
		case 26:
		case 27:
		case 28:
			return 6;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 45:
		case 46:
		case 47:
		case 48:
			return 3;
		default:
			break;
	}
	return 4;
}

void func_1160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_M1899"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_PISTOL_M1899");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_MAUSER"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_MAUSER");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_LEMAT"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_REVOLVER_LEMAT");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_SEMIAUTO"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_SEMIAUTO");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_SCHOFIELD");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_VOLCANIC"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_VOLCANIC");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SHOTGUN_SAWEDOFF"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
	}
	else
	{
		iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		func_654(iParam0, iVar0, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (bParam1)
	{
		TASK::TASK_SWAP_WEAPON(iParam0, 1, 0, 0, 0);
	}
	else if (iParam0 == Global_35)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, true, 0, false, false);
}

void func_1161(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				if (bParam4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, iParam2, fParam3, 0);
				}
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam0, 1);
				TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iParam0, fParam5, fParam6, fParam7, fParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
}

bool func_1172(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9)
{
	struct<11> Var0;
	int iVar11;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2572))
	{
		if (func_1709(uParam0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = iParam9;
	Var0.f_4 = bParam7;
	Var0.f_3 = bParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	uParam0->f_2572 = func_697(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return false;
	}
	else if (iVar11 == 1)
	{
		return false;
	}
	else if (iVar11 == 2)
	{
		if (!__LIB_0__::func_272(uParam0->f_2572, 0))
		{
			return false;
		}
		else if (!func_1709(uParam0))
		{
			return false;
		}
	}
	return true;
}

void func_1189(int iParam0, int iParam1)
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
	func_498();
}

void func_1195(int iParam0)
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
	func_1751(&iVar0, &iVar1, &iVar2);
	__LIB_0__::func_810(iParam0, iVar0);
	__LIB_0__::func_811(iParam0, iVar1);
	__LIB_0__::func_812(iParam0, iVar2);
	__LIB_0__::func_837(iParam0, 1);
	func_1756(iParam0, 1);
}

Vector3 func_1222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1444.771f, -1443.288f, 76.5693f;
		case 1:
			return 1446.441f, -1445.442f, 76.0755f;
		case 2:
			return 1445.072f, -1446.281f, 76.1978f;
		case 3:
			return 1443.059f, -1445.212f, 76.4308f;
		case 4:
			return 1442.506f, -1443.695f, 76.7337f;
		case 5:
			return 1447.219f, -1444.218f, 76.0418f;
		case 6:
			return 1437.1f, -1444.874f, 76.8253f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1224()
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = true;
	if (!bLocal_2236)
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			STREAMING::REQUEST_MODEL(func_1226(iVar0), false);
			iVar0++;
		}
		bLocal_2236 = true;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_316[iVar0]))
		{
			if (bLocal_2236)
			{
				if (STREAMING::HAS_MODEL_LOADED(func_1226(iVar0)))
				{
					iLocal_316[iVar0] = OBJECT::CREATE_OBJECT(func_1226(iVar0), func_1782(iVar0), true, true, false, false, true);
				}
			}
			bVar1 = false;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		return false;
	}
	if (bLocal_2236)
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_316[iVar0]))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_316[iVar0], false);
			}
			if (STREAMING::HAS_MODEL_LOADED(func_1226(iVar0)))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1226(iVar0));
			}
			iVar0++;
		}
	}
	return bVar1;
}

int func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_SIGN_SUFFRAGETTE01X");
		case 2:
			return joaat("P_SIGN_SUFFRAGETTE03X");
		case 3:
			return joaat("P_SIGN_SUFFRAGETTE04X");
		case 4:
			return joaat("P_SIGN_SUFFRAGETTE05X");
		case 1:
			return joaat("P_SIGN_SUFFRAGETTE05X");
		case 5:
			return joaat("P_SIGN_SUFFRAGETTE03X");
		case 6:
			return joaat("P_SIGN_SUFFRAGETTE04X");
		default:
			break;
	}
	return joaat("P_SIGN_SUFFRAGETTE01X");
}

Vector3 func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1352.57f, -1381.85f, 79.97f;
		case 1:
			return 1352.66f, -1381.06f, 79.97f;
		case 2:
			return 1355.37f, -1375.848f, 79.92896f;
		case 3:
			return 1355.75f, -1374.72f, 79.5f;
		case 4:
			return 1353.22f, -1381.64f, 83.81f;
		case 5:
			return 1355.25f, -1377.08f, 83.35f;
		case 6:
			return 1355.63f, -1375.51f, 83.36f;
		case 7:
			return 1354.44f, -1372.07f, 83.35f;
		case 8:
			return 1360.29f, -1309.29f, 76.67f;
		case 9:
			return 1368.45f, -1309.65f, 77.39f;
		case 10:
			return 1369.82f, -1312.6f, 76.95f;
		case 11:
			return 1371.42f, -1311.67f, 77.4f;
		case 12:
			return 1358.26f, -1308.95f, 76.72f;
		case 13:
			return 1327.04f, -1318.04f, 76.93f;
		case 14:
			return 1326.22f, -1315.01f, 76.71f;
		case 15:
			return 1350.62f, -1323.98f, 77.26f;
		case 16:
			return 1349.384f, -1323.814f, 76.7943f;
		case 17:
			return 1346.88f, -1323.07f, 77.26f;
		case 18:
			return 1344.54f, -1321.92f, 77.26f;
		case 19:
			return 1320.96f, -1294.66f, 76.01f;
		case 20:
			return 1322.74f, -1293.87f, 76.51f;
		case 21:
			return 1322.51f, -1295.99f, 75.99f;
		case 22:
			return 1325.69f, -1297.05f, 76f;
		case 23:
			return 1309.31f, -1308.2f, 75.78f;
		case 24:
			return 1339.08f, -1300.79f, 80.7f;
		case 25:
			return 1339.36f, -1300.02f, 76.79f;
		case 26:
			return 1339.13f, -1302.04f, 76.43f;
		case 27:
			return 1348.56f, -1303.25f, 76.92f;
		case 28:
			return 1345.51f, -1304.59f, 80.29f;
		case 38:
			return 1357.3f, -1383.71f, 78.47f;
		case 39:
			return 1354.21f, -1382.82f, 83.35f;
		case 40:
			return 1323.55f, -1315.5f, 76.91f;
		case 43:
			return 1341.46f, -1302.95f, 76.44f;
		case 44:
			return 1347.8f, -1302.92f, 76.95f;
		case 41:
			return 1326.67f, -1295.44f, 75.99f;
		case 42:
			return 1326.154f, -1293.002f, 76.0246f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_1232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -100.63f;
		case 1:
			return -100f;
		case 2:
			return -115.68f;
		case 3:
			return -103.94f;
		case 4:
			return -100f;
		case 5:
			return -99.3f;
		case 6:
			return -98.18f;
		case 7:
			return -100f;
		case 8:
			return 162.23f;
		case 9:
			return 145.68f;
		case 10:
			return 148.42f;
		case 11:
			return 118.95f;
		case 12:
			return 159.3f;
		case 13:
			return 18.21f;
		case 14:
			return -20.08f;
		case 15:
			return -12.14f;
		case 16:
			return 346.8024f;
		case 17:
			return -7.4f;
		case 18:
			return -52.7f;
		case 19:
			return -129.15f;
		case 20:
			return 152.48f;
		case 21:
			return 154.45f;
		case 22:
			return 118.91f;
		case 23:
			return -38.74f;
		case 24:
			return 163.74f;
		case 25:
			return 161.15f;
		case 26:
			return 160.45f;
		case 27:
			return 160.84f;
		case 28:
			return 159.83f;
		case 38:
			return 170.65f;
		case 39:
			return -100f;
		case 40:
			return -66.13f;
		case 43:
			return 159.35f;
		case 44:
			return 159.37f;
		case 41:
			return 127.84f;
		case 42:
			return 149.3f;
		default:
			break;
	}
	return 0f;
}

void func_1259(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_1276(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
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

void func_1260(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1793();
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

void func_1262(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0)))
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
			func_1076(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1076(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1263(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1076(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1276(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_1300(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1813(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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

void func_1277(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1300(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

struct<5> func_1300(int iParam0, bool bParam1, bool bParam2)
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
			if (bParam2 && func_1824(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!__LIB_1__::func_112(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!__LIB_1__::func_112(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
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

void func_1304(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
				func_1833(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1834(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

char* func_1362(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "AI_GESTURES@GEN_MALE@STANDING@SPEAKER";
		default:
			break;
	}
	return "";
}

char* func_1363(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "angry_taunt_l_001";
		default:
			break;
	}
	return "";
}

int func_1374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 49;
		case 1:
			return 50;
		case 2:
			return 51;
		case 3:
			return 48;
		case 4:
			return 51;
		default:
			break;
	}
	return 50;
}

bool func_1375(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	if (!uParam0->f_3)
	{
		if (func_1892(uParam0, iParam2, sParam3))
		{
			func_1893(uParam0, iParam1, iParam4, iParam5);
			uParam0->f_3 = 1;
		}
	}
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sVar0 = uParam0->f_2;
	}
	else
	{
		sVar0 = sParam3;
	}
	if (uParam0->f_3)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sVar0))
		{
			if (!uParam0->f_4)
			{
				uParam0->f_4 = ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, sVar0);
			}
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sVar0))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam0, sVar0))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sVar0, true);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam0, false))
			{
				ANIMSCENE::START_ANIM_SCENE(*uParam0);
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam0, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam0);
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam0, false))
			{
				return true;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam0, false) && ANIMSCENE::_0x1F0E401031E20146(*uParam0, sVar0))
		{
			return true;
		}
	}
	return false;
}

int func_1376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 1000;
		case 5:
			return 92;
		default:
			break;
	}
	return 0;
}

void func_1380(var uParam0, char* sParam1, var uParam2, float fParam3)
{
	if (*uParam2 < *sParam1)
	{
		if (!__LIB_6__::func_904() && !__LIB_0__::func_270())
		{
			if (__LIB_0__::func_899(&uLocal_1591))
			{
				if (__LIB_1__::func_583(&uLocal_1591) > fParam3)
				{
					if (__LIB_12__::func_876(uParam0, (*sParam1)[*uParam2], 0))
					{
						*uParam2++;
						__LIB_2__::func_259(&uLocal_1591);
					}
				}
			}
			else if (__LIB_12__::func_876(uParam0, (*sParam1)[*uParam2], 0))
			{
				*uParam2++;
				__LIB_2__::func_259(&uLocal_1591);
			}
		}
	}
}

int func_1381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 28;
		case 1:
			return 55;
		case 2:
			return 70;
		case 3:
			return 65;
		case 4:
			return 32;
		case 5:
			return 52;
		case 6:
			return 16;
		case 7:
			return 82;
		case 8:
			return 86;
		case 9:
			return 88;
		default:
			break;
	}
	return 0;
}

Vector3 func_1382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1353.79f, -1380.26f, 79.5f;
		case 1:
			return 1379.87f, -1317.3f, 76.32f;
		case 2:
			return 1357.54f, -1307.56f, 76.73f;
		case 3:
			return 1348.43f, -1322.84f, 76.78f;
		case 4:
			return 1355.45f, -1374.43f, 83.34f;
		case 5:
			return 1361.39f, -1350.32f, 77.33f;
		case 6:
			return 1378.26f, -1408.81f, 78.25f;
		case 7:
			return 1342.68f, -1303.43f, 76.44f;
		case 8:
			return 1325.59f, -1295.76f, 75.99f;
		case 9:
			return 1307.3f, -1309.5f, 75.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
			return 28;
		case 2:
		case 3:
			return 0;
		case 8:
			return 57;
		case 9:
			return 55;
		case 10:
			return 55;
		case 11:
			return 55;
		case 12:
			return 57;
		case 13:
		case 14:
			return 70;
		case 15:
		case 16:
		case 17:
		case 18:
			return 65;
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return 70;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
			return 62;
		case 38:
			return 28;
		case 39:
			return 28;
		case 40:
			return 82;
		case 41:
			return 80;
		case 42:
			return 80;
		case 43:
		case 44:
			return 62;
		case 45:
			return 6;
		case 46:
			return 70;
		case 47:
			return 87;
		case 48:
			return 85;
		case 29:
			return 52;
		case 30:
			return 52;
		case 31:
			return 52;
		case 32:
			return 25;
		case 33:
			return 25;
		case 34:
			return 22;
		case 35:
			return 20;
		case 36:
			return 12;
		case 37:
			return 56;
		default:
			break;
	}
	return 0;
}

bool func_1385(int iParam0)
{
	int iVar0;
	if (PED::IS_PED_USING_ANY_SCENARIO(Local_446[iParam0 /*20*/]))
	{
		iVar0 = PED::_0x4D0D2E3D8BC000EB(Local_446[iParam0 /*20*/], "p_broom02x_PH_R_HAND", 1);
		if (iParam0 == 40)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_446[iParam0 /*20*/].f_16))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					Local_446[iParam0 /*20*/].f_16 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_446[iParam0 /*20*/].f_16))
	{
		switch (iParam0)
		{
			case 12:
				if (!Local_446[iParam0 /*20*/].f_18)
				{
					STREAMING::REQUEST_MODEL(joaat("P_CIGARETTE01X"), false);
					Local_446[iParam0 /*20*/].f_18 = 1;
				}
				if (STREAMING::HAS_MODEL_LOADED(joaat("P_CIGARETTE01X")))
				{
					Local_446[iParam0 /*20*/].f_16 = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTE01X"), 1368.3f, -1282.3f, 77.1f, true, true, false, false, true);
				}
				return false;
			case 41:
				if (!Local_446[iParam0 /*20*/].f_18)
				{
					STREAMING::REQUEST_MODEL(joaat("P_CS_FAN01X"), false);
					Local_446[iParam0 /*20*/].f_18 = 1;
				}
				if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_FAN01X")))
				{
					Local_446[iParam0 /*20*/].f_16 = OBJECT::CREATE_OBJECT(joaat("P_CS_FAN01X"), 1368.3f, -1282.3f, 77.1f, true, true, false, false, true);
				}
				break;
		}
	}
	return true;
}

int func_1386(int iParam0)
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
			return 51;
		case 8:
			return 90;
		case 9:
			return 90;
		case 10:
			return 90;
		case 11:
			return 90;
		case 12:
			return 90;
		case 13:
		case 14:
			return 96;
		case 15:
		case 16:
		case 17:
		case 18:
			return 90;
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return -1;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
			return -1;
		case 38:
			return 51;
		case 39:
			return 51;
		case 40:
			return 95;
		case 41:
			return -1;
		case 42:
			return -1;
		case 43:
			return -1;
		case 44:
			return -1;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 45:
		case 46:
		case 47:
		case 48:
			return -1;
		default:
			break;
	}
	return 0;
}

bool func_1405(int* iParam0)
{
	var uVar0;
	bool bVar1;
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_4__::func_89(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_1920())
			{
			}
		}
		else
		{
			__LIB_4__::func_89(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_4__::func_118(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || func_1920()) || bVar1)
		{
			if (bVar1)
			{
				func_1921();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

bool func_1412()
{
	int iVar0;
	int iVar1;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false);
	if (func_1925(iVar0) || func_1925(iVar1))
	{
		if (__LIB_11__::func_3())
		{
			return true;
		}
	}
	return false;
}

bool func_1413(var uParam0, var uParam1, int iParam2)
{
	if (*uParam1 < 3)
	{
		if (__LIB_4__::func_118(&uLocal_2421) > fLocal_2424)
		{
			if (func_225(uParam0, iParam2, &Global_35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1))
			{
				iLocal_21[iParam2] = 0;
				*uParam1++;
				__LIB_2__::func_259(&uLocal_2421);
				fLocal_2424 = MISC::GET_RANDOM_FLOAT_IN_RANGE(6f, 8f);
				return true;
			}
		}
	}
	return false;
}

void func_1437(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = __LIB_10__::func_231(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_1457(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!__LIB_0__::func_181())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_0__::func_935(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		__LIB_0__::func_896(10, 1);
	}
}

bool func_1440(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_1944(iParam0))
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

bool func_1441(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_1300(iParam0, 0, 1) };
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
	if (func_1949(iParam0, &Var0, *iParam1, 0, 0))
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

void func_1447(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1952(48);
	__LIB_0__::func_703(0, -1);
}

void func_1456(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			Jump @481; //curOff = 167
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			Jump @481; //curOff = 258
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			Jump @481; //curOff = 303
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			Jump @481; //curOff = 345
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			Jump @481; //curOff = 436
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			if (iParam5 == 2)
			{
				sVar0 = "MISSION_COMPLETE";
				iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
				iVar5 = MISC::GET_HASH_KEY("hud_toasts");
			}
			else
			{
				iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
				sVar1 = "COL_ALL_LOG_UPDATED";
			}
			sVar2 = "COL_CTX_PLAYER_LOG";
			if (iVar7 == -2076669067)
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					iVar6 = joaat("COL_CC_INTRO");
				}
				else
				{
					iVar6 = joaat("COL_CC_INTRO_PRE");
				}
				UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
				if (iParam5 == 0)
				{
					iVar5 = iParam1;
					iVar4 = iParam2;
				}
				if (iParam5 == 2)
				{
					sVar3 = "COL_CC_CARD_POSTED_OBJ";
					iParam3 = 12;
					iParam4 = 12;
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
				else if (iParam5 == 1)
				{
					sVar3 = "COL_CC_CARD_POSTED_OBJ";
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
				else if (iParam5 == 0)
				{
					__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, __LIB_0__::func_426(__LIB_0__::func_354(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
				else
				{
					sVar1 = "COL_CC_INTRO";
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
			}
			else if (iVar7 == joaat("DINO_BONES"))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
				{
					iVar6 = joaat("COL_DB_INTRO");
				}
				else
				{
					iVar6 = joaat("COL_DB_INTRO_PRE");
				}
				UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
				if (iParam5 == 1)
				{
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
				else
				{
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
			}
			else if (iVar7 == joaat("ROCK_CARVINGS"))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
				{
					iVar6 = joaat("COL_RC_INTRO");
				}
				else
				{
					iVar6 = joaat("COL_RC_INTRO_PRE");
				}
				UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
				if (iParam5 == 1)
				{
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
				else
				{
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
			}
			else
			{
				UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
				if (iParam5 == 1)
				{
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
				else
				{
					__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
				}
			}
		}
bool func_1457(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_53(iParam0);
}

void func_1458(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1966(iParam0);
}

bool func_1463(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (!func_1949(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_1__::func_695(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_1126(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_1126(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_1126(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
					func_1126(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1126(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_1457(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && func_1457(24))
				{
					if (!func_1126(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_1126(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_1126(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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

bool func_1465(int iParam0, int iParam1, int iParam2)
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
		__LIB_1__::func_424(func_1970(iParam0), __LIB_0__::func_776(iParam0), 1);
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
		return func_1501(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1466(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_1971(Global_35, iParam0, &uVar0))
		{
			func_1276(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
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

void func_1473(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_1456(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_1456(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			__LIB_1__::func_832(39, 0, 0, 0, 0, 0, 1, 0);
			func_1456(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			__LIB_1__::func_832(41, 0, 0, 0, 0, 0, 1, 0);
			func_1456(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			__LIB_1__::func_832(49, 0, 0, 0, 0, 0, 1, 0);
			func_1456(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_01"), __LIB_1__::func_803(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_02"), __LIB_1__::func_803(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_03"), __LIB_1__::func_803(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_04"), __LIB_1__::func_803(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_05"), __LIB_1__::func_803(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_1474(int iParam0)
{
	if (__LIB_0__::func_942() == 1)
	{
		if (__LIB_1__::func_154(39))
		{
			__LIB_1__::func_240(342, 0);
		}
		else
		{
			__LIB_1__::func_240(343, 0);
			__LIB_0__::func_434(1);
		}
	}
	if (__LIB_0__::func_942() >= 30)
	{
		__LIB_1__::func_240(344, 0);
	}
	__LIB_1__::func_832(39, 0, 0, 0, 0, 0, -1, 0);
	func_1456(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_1475(int iParam0)
{
	if (__LIB_0__::func_438() == 1)
	{
		if (__LIB_1__::func_154(49))
		{
			__LIB_1__::func_240(409, 0);
		}
		else
		{
			__LIB_1__::func_240(410, 0);
			__LIB_0__::func_436(1);
		}
	}
	if (__LIB_0__::func_438() >= 10)
	{
		__LIB_1__::func_240(411, 0);
	}
	__LIB_1__::func_832(49, 0, 0, 0, 0, 0, -1, 0);
	func_1456(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_1476(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_1456(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_1456(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_1456(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_1456(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_1456(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_1478(int iParam0, int iParam1)
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_1456(43, 0, 0, iVar1, 30, 1, 0);
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_1456(43, 0, 0, iVar1, 37, 1, 0);
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
						func_1952(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_1456(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_1456(43, 0, 0, iVar1, 40, 1, 0);
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_1456(43, 0, 0, iVar1, 50, 1, 0);
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_1456(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1479(int iParam0)
{
	int iVar0;
	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_1952(48);
		}
	}
}

bool func_1501(int iParam0, int iParam1, int iParam2)
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
	Var0 = { func_1300(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_1997(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1502(int iParam0)
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
			func_1276(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_1458(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			func_1126(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1503(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_2005(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_2005(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_2005(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_2005(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_2005(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_2005(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_2005(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_2005(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_2005(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_2005(-1, iParam0);
	}
}

void func_1514()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2013(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_2014();
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
	func_2013(1);
}

void func_1515()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_917(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1516()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2016(0);
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
	func_2016(1);
}

void func_1517()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2016(0);
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
	func_2016(1);
}

void func_1518()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_917(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_917(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_381(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_381(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

void func_1519()
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
		if (func_1126(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { __LIB_1__::func_605() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_2021(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_2021(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_2021(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_2021(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_2021(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_2021(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_2021(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_2021(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_2021(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_2021(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_2021(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_2021(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_2021(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_2021(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
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
						if (func_1457(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((func_1457(24) && __LIB_0__::func_154(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
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
				if (func_1457(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

void func_1522(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_2022(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_2022(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_2022(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_2022(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_2022(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_2022(iParam0, &(Global_1946804.f_2657.f_25));
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

int func_1523(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_1300(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

int func_1544(var uParam0, int iParam1, int iParam2, int iParam3)
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
	Var5 = { func_1300(iVar0, 0, 1) };
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
	iVar11 = (func_2038(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_917(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_1709(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	struct<11> Var4;
	int iVar15;
	int iVar16;
	if (!__LIB_12__::func_639(uParam0, 16))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2572))
		{
			return false;
		}
		vVar0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		if (!__LIB_12__::func_941(uParam0, &vVar0, &fVar3))
		{
			__LIB_12__::func_638(uParam0, 16);
			return true;
		}
		else
		{
			Var4.f_10 = 7;
			Var4 = 0;
			Var4.f_1 = 0;
			Var4.f_6 = vVar0.x;
			Var4.f_6.f_1 = vVar0.y;
			Var4.f_6.f_2 = vVar0.z;
			Var4.f_9 = fVar3;
			Var4.f_10 = 1;
			iVar15 = 0;
			iVar16 = func_697(&iVar15, &Var4);
			if (iVar15 == 0)
			{
				return false;
			}
			else
			{
				__LIB_12__::func_638(uParam0, 16);
				if (iVar15 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar16))
				{
					if (iVar16 == uParam0->f_2572)
					{
					}
					else if (__LIB_0__::func_48(iVar16, uParam0->f_2572, 5f, 1))
					{
						if (__LIB_0__::func_126(iVar16))
						{
							PHYSICS::_0x0348469DAA17576C(iVar16);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar16, false, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar16, vVar0, fVar3, true, false, true);
						ENTITY::_0x9587913B9E772D29(iVar16, 0);
					}
				}
			}
		}
	}
	return true;
}

int func_1751(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (__LIB_0__::func_28())
	{
		if (__LIB_0__::func_113())
		{
			bVar0 = false;
			if (!__LIB_1__::func_25(Global_1835011[15 /*74*/].f_1, 1) && !func_1457(42))
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
	else if (__LIB_0__::func_113())
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

void func_1756(int iParam0, int iParam1)
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
		func_1751(&uVar1, &iVar0, &uVar2);
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

Vector3 func_1782(int iParam0)
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
			return 1349.104f, -1378.049f, 79.4806f;
		default:
			break;
	}
	return 1349.104f, -1378.049f, 79.4806f;
}

void func_1793()
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
			func_654(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2200(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_654(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

bool func_1813(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_1300(iParam0, 1, 0) };
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

bool func_1824(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_357(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_1457(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_1833(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_1__::func_804(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_1__::func_832(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_1456(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1834(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_1__::func_804(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1456(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1456(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1892(var uParam0, int iParam1, char* sParam2)
{
	if (!uParam0->f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
			{
				uParam0->f_3 = 1;
				return uParam0->f_3;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, iParam1, uParam0->f_2, false, true);
			}
			else
			{
				uParam0->f_2 = sParam2;
				*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			}
		}
	}
	return uParam0->f_3;
}

void func_1893(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
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
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 38:
		case 39:
		case 40:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "wagon02x", iLocal_170, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_M_M_RHDTOWNFOLK_01^2", iParam2, 0);
			break;
		case 24:
		case 37:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "wagon02x", iLocal_170, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_M_M_RHDTOWNFOLK_01^2", iParam2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_cigarette01x", iParam3, 0);
			break;
		case 36:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_M_M_RHDTOWNFOLK_01^1", iParam2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "wagon02x", iLocal_170, 0);
			break;
		case 41:
		case 42:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_F_M_RHDTOWNFOLK_01", iParam2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "wagon02x", iLocal_170, 0);
			break;
		case 46:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_F_M_RHDTOWNFOLK_01", iParam2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "wagon02x", iLocal_170, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_cs_Fan01x", iParam3, 0);
			break;
		case 43:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_F_M_RHDTOWNFOLK_01", iParam2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "wagon02x", iLocal_170, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_broom01x", iParam3, 0);
			break;
		case 44:
		case 45:
		case 47:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_F_M_RHDTOWNFOLK_01", iParam2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "wagon02x", iLocal_170, 0);
			break;
		case 48:
		case 49:
		case 50:
		case 51:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_F_M_RHDTOWNFOLK_01", iParam2, 0);
			break;
		case 52:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_F_M_RHDTOWNFOLK_01", iParam2, 0);
			break;
		case 53:
		case 54:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_F_M_RHDTOWNFOLK_01", iParam2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "wagon02x", iLocal_170, 0);
			break;
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "A_M_M_RHDTOWNFOLK_01", iParam2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "wagon02x", iLocal_170, 0);
			break;
	}
}

int func_1920()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	if (!__LIB_3__::func_907(iVar0))
	{
		return 0;
	}
	iVar1 = func_1523(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	__LIB_1__::func_683(&iVar2, 1);
	return __LIB_3__::func_630(iVar0, iVar2);
}

int func_1921()
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = func_1523(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_2255(Global_1946804.f_57[__LIB_0__::func_161(iVar1, 1) /*11*/], 8);
	__LIB_1__::func_452(26, 0, 0, 0, 0);
	return 1;
}

int func_1925(int iParam0)
{
	if ((iParam0 != joaat("WEAPON_UNARMED") && iParam0 != joaat("WEAPON_LASSO")) && !WEAPON::_IS_WEAPON_LANTERN(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1944(int iParam0)
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
		return func_1949(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

bool func_1949(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (!__LIB_1__::func_112(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_1824(iParam0, 1))
			{
				if (!__LIB_1__::func_112(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_2267(iParam0, &uVar26, 0))
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

void func_1952(int iParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = __LIB_0__::func_525(iParam0);
	fVar1 = __LIB_1__::func_181(iParam0);
	if ((Global_1347477.f_117 || !func_1457(31)) || !func_2270(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (__LIB_0__::func_963(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_2272(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(6, __LIB_0__::func_526(iParam0), fVar1), "itemtype_textures", __LIB_0__::func_527(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1966(int iParam0)
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
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
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
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
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
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
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
						func_1501(iVar0, 1, 752097756);
					}
					func_1276(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_1501(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_1501(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					func_1501(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_1501(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_1501(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					func_1501(-518019409, 1, 752097756);
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
			func_2301();
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

int func_1970(int iParam0)
{
	int iVar0;
	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_1457(50))
			{
				if (!func_1457(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_1457(51))
			{
				if (!func_1457(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1971(int iParam0, int iParam1, var uParam2)
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
	iVar4 = func_1523(iParam1);
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

bool func_1997(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_1949(iParam0, uParam2, iParam3, bParam5, 0))
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

void func_2005(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_2320(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_2320(iParam1, 1);
		func_2321(iParam0);
	}
}

void func_2013(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_917(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_2014();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2326(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_920(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_381(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2330(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		func_1751(&iVar7, &iVar8, &iVar9);
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
				func_2335(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_2014()
{
	if (!func_2336(-1898635967, __LIB_1__::func_124(), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_26())
	{
		if (!func_2336(146323340, __LIB_1__::func_124(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_2016(bool bParam0)
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
		func_917(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_917(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_381(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_381(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_381(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_381(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_381(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_381(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_381(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_381(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_381(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_381(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_381(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		func_1751(&iVar1, &iVar2, &iVar3);
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
				func_2335(iVar0, iVar4);
			}
			iVar0++;
		}
		func_2014();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_2021(int iParam0, struct<4> Param1, int iParam5)
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
	func_1997(iParam0, &Var19, &Var0, 1, 752097756, 0);
	__LIB_1__::func_556(Var19, 1);
}

int func_2022(int iParam0, var uParam1)
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
	func_2342(iParam0, 1);
	return 1;
}

int func_2038(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2038(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2038(iVar63, -915411861, 1, 0, 0));
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

int func_2200(int iParam0, int iParam1)
{
	var uVar0;
	return func_2384(&uVar0, iParam0, iParam1);
}

void func_2255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	iVar0 = func_1523(iParam0);
	iVar1 = __LIB_0__::func_161(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (__LIB_0__::func_779(iParam0) && __LIB_6__::func_107(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && __LIB_0__::func_156(32768)) || Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && iParam0 != Global_1946804.f_1497.f_1[iVar1 /*3*/])
	{
		if (__LIB_0__::func_779(Global_1946804.f_1497.f_1[iVar1 /*3*/]) && __LIB_6__::func_107(Global_1946804.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (__LIB_0__::func_357(iParam0))
		{
			case 81053684:
				if (__LIB_1__::func_549(-525676072, &uVar3))
				{
					iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (__LIB_0__::func_156(32768))
						{
							__LIB_0__::func_968(__LIB_0__::func_158(iVar1, 1));
						}
						if (__LIB_0__::func_156(32768) || (__LIB_1__::func_549(-2061583405, &iVar4) && !__LIB_6__::func_107(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (__LIB_1__::func_549(81053684, &iVar4))
						{
							iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
							}
							Global_1946804.f_2377[iVar1 /*2*/] = iParam0;
							__LIB_3__::func_16(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

bool func_2267(int iParam0, var uParam1, bool bParam2)
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
	Var0 = { func_1300(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = __LIB_0__::func_235((386 + iVar29), 1);
		if (__LIB_1__::func_112(iParam0, &Var0, iVar5, 0))
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

bool func_2270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1457(18);
		case 2:
			return func_1457(20);
		case 1:
			return func_1457(19);
		default:
			break;
	}
	return true;
}

void func_2272(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_1457(31))
	{
		return;
	}
	iVar0 = __LIB_0__::func_963(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = __LIB_0__::func_963(iParam0);
	if (__LIB_0__::func_594(iParam0) && __LIB_0__::func_595(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = __LIB_0__::func_995(fVar1, fParam1);
			if (fParam1 > IntToFloat(__LIB_0__::func_996(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						__LIB_1__::func_240(__LIB_0__::func_596(iParam0), 0);
					}
					__LIB_1__::func_132(iParam0, iVar2, iVar3);
					__LIB_0__::func_597(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

void func_2301()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_2427();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_1501(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_1501(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_2320(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1458(50);
			}
			else
			{
				func_1458(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1458(51);
			}
			else
			{
				func_1458(49);
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
			func_1458(24);
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

void func_2321(int iParam0)
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
					func_2435();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_2435();
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
					func_2437();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_2437();
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
					func_2438();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_2438();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_2326(int iParam0)
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
	func_381(iParam0, 1, 1, -142743235, 1);
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
	func_1522(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_381(uVar18[iVar36], 1, 1, -142743235, 1);
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
		func_1522(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(func_1523(uVar18[iVar36]), 1);
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
				func_1522(__LIB_0__::func_998(iVar35), 1, 1);
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

void func_2330(struct<6> Param0)
{
	if (!func_2460(Param0.f_4, 1))
	{
	}
	if (!func_2460(Param0, 1))
	{
	}
	if (!func_2460(Param0.f_2, 1))
	{
	}
	if (!func_2460(Param0.f_5, 1))
	{
	}
	if (!func_2460(Param0.f_3, 1))
	{
	}
	if (!func_2460(Param0.f_1, 1))
	{
	}
}

int func_2335(int iParam0, int iParam1)
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
	if (!func_1997(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_2336(int iParam0, struct<4> Param1, bool bParam5)
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
					if (func_1997(Var3, &Var7, &Var12, 1, 752097756, 1))
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

bool func_2342(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1300(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

int func_2384(var uParam0, int iParam1, int iParam2)
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
		return func_2384(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2427()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_3__::func_150(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_2499(0);
	func_2500(7);
	func_2501(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_2501(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_2501(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_2435()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1501(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_2437()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1501(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_2438()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1501(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

bool func_2460(int iParam0, int iParam1)
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
	if (!func_2516(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
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
				if (func_2460(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2460(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2460(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2460(iVar21, 1))
				{
				}
			}
		}
		func_2520();
		return true;
	}
	return false;
}

void func_2499(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_1522(iVar1, 0, bParam0);
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

void func_2500(int iParam0)
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
			func_2531(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_2342(iVar2, 0))
		{
			func_1277(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_2501(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
			bVar1 = func_2533(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_2533(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_2533(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_2533(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_2533(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_2533(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_2535(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_2535(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_2535(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	func_1277(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

bool func_2516(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
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
					*uParam4 = { func_1300(iParam1, 0, 0) };
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
			Var37 = { func_1300(iParam1, 0, 0) };
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

int func_2520()
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
	Var0 = { func_1300(856287005, 0, 0) };
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

void func_2531(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_2557(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

int func_2533(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (bParam3 && !func_2342(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_2531(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_2535(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1300(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

void func_2557(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_1523(iParam1), 1);
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

