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
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	char* sLocal_34 = NULL;
	int iLocal_35 = 0;
	var uLocal_36 = 24;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	char* sLocal_135 = NULL;
	char* sLocal_136 = NULL;
	char* sLocal_137 = NULL;
	char* sLocal_138 = NULL;
	char* sLocal_139 = NULL;
	char* sLocal_140 = NULL;
	char* sLocal_141 = NULL;
	vector3 vLocal_142 = { 0f, 0f, 0f };
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	struct<1334> Local_195 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1077936128, 1065353216, 4, 8, 50, 10, 200, 0, 0, 0, 0, 0, 0, 0, 3, 10, 20, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1053609165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = -1;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 2;
	var uLocal_1537 = 1;
	var uLocal_1538 = 1;
	var uLocal_1539 = 1;
	var uLocal_1540 = 0;
	var uLocal_1541 = 1;
	var uLocal_1542 = 2;
	var uLocal_1543 = 2;
	var uLocal_1544 = 3;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 3;
	var uLocal_1548 = 1;
	var uLocal_1549 = 3;
	var uLocal_1550 = 3;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	int iLocal_1553 = 0;
	int iLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	float fLocal_1561 = 0f;
	int iLocal_1562 = 0;
	int iLocal_1563 = 0;
	int iLocal_1564 = 0;
	var uLocal_1565[3] = { 0, 0, 0 };
	var uLocal_1569[3] = { 0, 0, 0 };
	int iLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = -1;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 2;
	var uLocal_1583 = 1;
	var uLocal_1584 = 1;
	var uLocal_1585 = 1;
	var uLocal_1586 = 0;
	var uLocal_1587 = 1;
	var uLocal_1588 = 2;
	var uLocal_1589 = 2;
	var uLocal_1590 = 3;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 3;
	var uLocal_1594 = 1;
	var uLocal_1595 = 3;
	var uLocal_1596 = 3;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = -1;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 2;
	var uLocal_1608 = 1;
	var uLocal_1609 = 1;
	var uLocal_1610 = 1;
	var uLocal_1611 = 0;
	var uLocal_1612 = 1;
	var uLocal_1613 = 2;
	var uLocal_1614 = 2;
	var uLocal_1615 = 3;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 3;
	var uLocal_1619 = 1;
	var uLocal_1620 = 3;
	var uLocal_1621 = 3;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	bool bLocal_1624 = false;
	char* sLocal_1625 = NULL;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	int iLocal_1630 = 0;
	struct<9> Local_1631 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	int iLocal_1647 = 0;
	var uLocal_1648 = 2;
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
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
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
	var uLocal_1681 = 2;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
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
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 10;
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
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
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
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
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
	var uLocal_1875 = 2;
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
	var uLocal_1908 = 3;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_14 = true;
	iLocal_15 = 1;
	iLocal_16 = 1;
	fLocal_31 = 150f;
	iLocal_33 = -1;
	sLocal_34 = "CFSH";
	sLocal_135 = "fishing01_cme_shot1";
	sLocal_136 = "fishing01_cme_shot2";
	sLocal_137 = "fishing02_goto_a";
	sLocal_138 = "fishing02_return_a";
	sLocal_139 = "fishing02_down_to_lake";
	sLocal_140 = "fishing01_Jav_goto_fishing_rock";
	vLocal_142 = { 1182.287f, -580.2337f, 67.1474f };
	fLocal_1561 = 50f;
	iLocal_1562 = 16;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	__LIB_1__::func_751(&uScriptParam_0, &uLocal_1648);
	while (!func_3(&uScriptParam_0))
	{
		__LIB_1__::func_598(&uScriptParam_0, &uLocal_1648, __LIB_0__::func_749());
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
	__LIB_12__::func_955();
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
					func_25();
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
				__LIB_1__::func_687(&uLocal_1648);
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
		__LIB_17__::func_760(uParam0);
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

void func_7(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(iLocal_145))
	{
		MAP::REMOVE_BLIP(&iLocal_145);
		MAP::CLEAR_GPS_CUSTOM_ROUTE();
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
	__LIB_5__::func_547(1);
	PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_271(uParam0->f_2));
	func_63(0, 0);
	__LIB_0__::func_705(uParam0->f_2, 0);
	AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(uParam0->f_2), false);
	func_65();
	STREAMING::END_SRL();
	func_66(1, 0);
	if (__LIB_0__::func_899(&uLocal_146))
	{
		__LIB_1__::func_561(&uLocal_146);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_27))
	{
		__LIB_2__::func_145(iLocal_27, 0);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_137);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_138);
	__LIB_5__::func_540(1);
	if (__LIB_0__::func_212(2))
	{
		__LIB_1__::func_463(__LIB_0__::func_177(2), 2, 1, 0, 0);
	}
	if (__LIB_1__::func_22(2))
	{
		__LIB_10__::func_992(2, 0, 0, 0, 40f, 1, 1, 0, 0, 0, 0);
	}
	func_76(uParam0, __LIB_0__::func_27(Local_195.f_95, 512));
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		__LIB_10__::func_992(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(iParam1), false);
		__LIB_10__::func_992(iParam1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
						func_143(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_143(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_143(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_143(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_143(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_143(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_143(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_143(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_143(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_143(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_143(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_143(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_143(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_145();
						func_146(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_143(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_143(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_183();
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
							func_143(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_25()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_197(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
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
		__LIB_1__::func_281(&(uParam0->f_44), 1, 1);
	}
	if (__LIB_0__::func_899(&(uParam0->f_45)))
	{
		__LIB_1__::func_561(&(uParam0->f_45));
	}
}

bool func_39(var uParam0)
{
	if (!__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		__LIB_4__::func_89(&uLocal_152, 0);
		if (__LIB_3__::func_514(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_J_DEAD", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return true;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(__LIB_0__::func_271(uParam0->f_2), Global_35, 1, 1))
	{
		__LIB_4__::func_89(&uLocal_152, 0);
		if (__LIB_3__::func_514(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_J_ATK", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return true;
		}
	}
	if (((!__LIB_0__::func_272(iLocal_28, 0) || PED::IS_PED_INJURED(iLocal_28)) || TASK::IS_PED_IN_WRITHE(iLocal_28)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_28))
	{
		__LIB_4__::func_89(&uLocal_152, 0);
		if (__LIB_3__::func_514(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_JH_DEAD", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return true;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_28, Global_35, 1, 1))
	{
		__LIB_4__::func_89(&uLocal_152, 0);
		if (__LIB_3__::func_514(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_JH_ATK", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return true;
		}
	}
	if (((!__LIB_0__::func_272(iLocal_27, 0) || PED::IS_PED_INJURED(iLocal_27)) || TASK::IS_PED_IN_WRITHE(iLocal_27)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_27))
	{
		__LIB_4__::func_89(&uLocal_152, 0);
		if (__LIB_3__::func_514(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_PH_DEAD", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return true;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_27, Global_35, 1, 1))
	{
		__LIB_4__::func_89(&uLocal_152, 0);
		if (__LIB_3__::func_514(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_PH_ATK", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return true;
		}
	}
	if (Local_195.f_3 >= 3 && Local_195.f_3 <= 8)
	{
		if (!__LIB_0__::func_27(Local_195.f_83, 2))
		{
			if (__LIB_0__::func_94(Global_35, vLocal_142, 1) < 20f && func_217("FISH01_O_RET"))
			{
				__LIB_1__::func_324("FISH01_O_FFSL");
				__LIB_1__::func_422("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_220("FISH01_O_RET", 0);
			}
			else if (__LIB_0__::func_94(Global_35, vLocal_142, 1) > 40f && !func_217("FISH01_O_RET"))
			{
				__LIB_1__::func_324("FISH01_O_RET");
				__LIB_1__::func_422("FISH01_O_RET", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_220("FISH01_O_RET", 1);
			}
			else if (__LIB_0__::func_94(Global_35, vLocal_142, 1) > 55f)
			{
				__LIB_1__::func_581(&(Local_195.f_83), 2);
			}
		}
	}
	if (__LIB_0__::func_27(Local_195.f_83, 1))
	{
		__LIB_4__::func_89(&uLocal_152, 0);
		if (__LIB_3__::func_514(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISHCOMP_FAIL2", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return true;
		}
	}
	if (__LIB_0__::func_27(Local_195.f_83, 2))
	{
		__LIB_4__::func_89(&uLocal_152, 0);
		if (__LIB_3__::func_514(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISHCOMP_FAIL2", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return true;
		}
	}
	if (Local_195.f_3 >= 4 && Local_195.f_3 <= 8)
	{
		if (((PED::IS_PED_SHOOTING(Global_35) && !WEAPON::_IS_WEAPON_THROWABLE(__LIB_0__::func_153(Global_35, 0, 1, 0))) && !WEAPON::_IS_WEAPON_BOW(__LIB_0__::func_153(Global_35, 0, 1, 0))) || (__LIB_0__::func_899(&uLocal_152) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_15), "FSH_SCARE")))
		{
			if (!__LIB_0__::func_899(&uLocal_152))
			{
				__LIB_4__::func_89(&uLocal_152, 0);
				StringCopy(&(uParam0->f_15), "FSH_SCARE", 24);
			}
			if (__LIB_3__::func_514(&uLocal_152, (1.6f * 1.75f)))
			{
				StringCopy(&(uParam0->f_15), "FSH_SCARE", 24);
				uParam0->f_14 = 2;
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
				return true;
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_15), "FSH_SCARE"))
		{
			StringCopy(&(uParam0->f_15), "", 24);
		}
	}
	if ((__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1) || __LIB_5__::func_656(512)) && !__LIB_0__::func_27(Local_195.f_83, 4))
	{
		__LIB_1__::func_581(&(Local_195.f_83), 4);
	}
	if (__LIB_0__::func_27(Local_195.f_83, 4))
	{
		__LIB_4__::func_89(&uLocal_152, 0);
		if (__LIB_3__::func_514(&uLocal_152, (1.6f * 2f)))
		{
			StringCopy(&(uParam0->f_15), "FISH01_FAIL_LAW", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return true;
		}
	}
	return false;
}

int func_45(var uParam0)
{
	func_233(uParam0, &Local_195);
	switch (Local_195.f_3)
	{
		case 0:
			__LIB_6__::func_813(uParam0, func_234(0), func_234(1), 0, 1);
			func_236(&(Local_195.f_3), 1);
			break;
		case 1:
			if (func_237(uParam0))
			{
				func_236(&(Local_195.f_3), 2);
			}
			break;
		case 2:
			if (func_238(uParam0))
			{
				func_236(&(Local_195.f_3), 3);
			}
			break;
		case 3:
			if (func_239(uParam0))
			{
				func_236(&(Local_195.f_3), 4);
			}
			break;
		case 4:
			if (func_240(uParam0))
			{
				func_236(&(Local_195.f_3), 5);
			}
			break;
		case 5:
			if (func_241(uParam0))
			{
				func_236(&(Local_195.f_3), 6);
			}
			break;
		case 6:
			if (func_242(uParam0))
			{
				func_236(&(Local_195.f_3), 7);
			}
			break;
		case 7:
			if (func_243(uParam0))
			{
				func_236(&(Local_195.f_3), 8);
			}
			break;
		case 8:
			if (func_244(uParam0))
			{
				Local_195.f_7 = 0;
				Local_195.f_339 = { Global_36 };
				func_236(&(Local_195.f_3), 9);
			}
			break;
		case 9:
			if (func_245(uParam0))
			{
				PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_271(uParam0->f_2));
				func_236(&(Local_195.f_3), 10);
			}
			break;
		case 10:
			uParam0->f_14 = 1;
			uParam0->f_13 = 6;
			break;
	}
	return 1;
}

bool func_49(var uParam0)
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_51(&(uParam0->f_3), __LIB_0__::func_771(iVar0)))
		{
			if (__LIB_0__::func_903(iVar0))
			{
				if (!__LIB_1__::func_22(iVar0))
				{
					func_250(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
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
				func_250(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	if (!func_252(uParam0))
	{
		return false;
	}
	__LIB_0__::func_772(uParam0);
	if (__LIB_0__::func_750(&(uParam0->f_9), 128))
	{
		if (!func_254(uParam0))
		{
			return false;
		}
	}
	sVar1 = __LIB_0__::func_758(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		MISC::_0x1096603B519C905F(sVar1);
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
		func_258(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return true;
}

bool func_51(var uParam0)
{
	if ((__LIB_0__::func_27(Local_195.f_95, 1024) || __LIB_0__::func_27(Local_195.f_95, 512)) && __LIB_0__::func_27(Local_195.f_95, 16384))
	{
		return true;
	}
	return false;
}

void func_63(int iParam0, bool bParam1)
{
	if (Global_1900073.f_179[iParam0] != bParam1)
	{
		Global_1900073.f_179[iParam0] = bParam1;
	}
}

void func_65()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_2__::func_353(&(uLocal_1569[iVar0]), 1);
		iVar0++;
	}
	iLocal_1573 = 0;
}

void func_66(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (__LIB_1__::func_85(iVar0, iParam0))
		{
			__LIB_8__::func_980(iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_76(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_288(1);
	}
	else if (__LIB_1__::func_650())
	{
		__LIB_10__::func_693(8);
	}
	else
	{
		func_291();
	}
	if (__LIB_0__::func_866(uParam0->f_2, 0))
	{
		__LIB_1__::func_640(uParam0->f_2);
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED(sLocal_34))
	{
		HUD::_TEXT_DATABASE_DELETE(sLocal_34);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		PED::_0xAE6004120C18DF97(__LIB_0__::func_271(uParam0->f_2), 0, 1);
	}
	__LIB_1__::func_600(1);
}

bool func_143(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_143(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_143(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_143(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_143(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_143(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_143(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_143(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_143(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_143(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_143(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_5__::func_507(iParam0);
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
				func_143(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_145()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_439();
	func_440();
	func_441();
	func_442();
	func_443();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_446(iParam0, 1, 1, -142743235, 1);
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

void func_183()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_487(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_197(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_502(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_502(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

bool func_217(char* sParam0)
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_513(iVar0) != -1)
	{
		return true;
	}
	return false;
}

void func_220(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_217(sParam0))
		{
			iVar1 = iLocal_161;
			if (iLocal_192 < iVar1)
			{
				iLocal_161[iLocal_192] = iVar0;
				iLocal_192++;
			}
		}
	}
	else
	{
		iVar2 = func_513(iVar0);
		if (iVar2 != -1)
		{
			iLocal_161[iVar2] = 0;
			func_516();
			iLocal_192 = (iLocal_192 - 1);
		}
	}
}

int func_233(var uParam0, var uParam1)
{
	vector3 vVar0[24];
	struct<27> Var3;
	int iVar41;
	bool bVar42;
	float fVar43;
	int iVar44;
	struct<14> Var45;
	bool bVar70;
	int iVar71;
	Var3.f_4 = 1065353216;
	Var3.f_5 = 1065353216;
	Var3.f_9 = 1065353216;
	Var3.f_10 = 1065353216;
	Var3.f_14 = 1065353216;
	Var3.f_15 = 1065353216;
	Var3.f_17 = 1040187392;
	Var3.f_18 = 1040187392;
	Var3.f_19 = -1;
	Var3.f_26 = -1082130432;
	switch (uParam1->f_6)
	{
		case 0:
			if (!__LIB_0__::func_163(__LIB_0__::func_271(uParam0->f_2), 1868526510) && !__LIB_0__::func_163(__LIB_0__::func_271(uParam0->f_2), 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar41);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_28, true, false), 1f, -1, 1.5f, 0, 40000f);
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_28, -1, -1, 1f, 1, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(3, 9), 1.25f, -1, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar41);
				TASK::TASK_PERFORM_SEQUENCE(__LIB_0__::func_271(uParam0->f_2), iVar41);
				TASK::CLEAR_SEQUENCE_TASK(&iVar41);
				PED::_0x2208438012482A1A(__LIB_0__::func_271(uParam0->f_2), false, false);
			}
			__LIB_0__::func_19(&(uParam1->f_6), 1);
			break;
		case 1:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(__LIB_0__::func_271(uParam0->f_2), true))
			{
				__LIB_2__::func_259(&(uParam1->f_41));
				__LIB_0__::func_19(&(uParam1->f_6), 6);
			}
			__LIB_4__::func_89(&(uParam1->f_41), 0);
			if (__LIB_0__::func_899(&(uParam1->f_41)) && __LIB_1__::func_583(&(uParam1->f_41)) > 5f)
			{
				__LIB_1__::func_561(&(uParam1->f_41));
				__LIB_0__::func_19(&(uParam1->f_6), 0);
			}
			break;
		case 6:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(__LIB_0__::func_271(uParam0->f_2), true))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar41);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(3, 9), 1.25f, -1, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar41);
				TASK::TASK_PERFORM_SEQUENCE(__LIB_0__::func_271(uParam0->f_2), iVar41);
				TASK::CLEAR_SEQUENCE_TASK(&iVar41);
				__LIB_1__::func_561(&(Local_195.f_38));
				__LIB_0__::func_19(&(uParam1->f_6), 7);
			}
			break;
		case 7:
			if (__LIB_0__::func_94(__LIB_0__::func_271(uParam0->f_2), func_532(3, 9), 1) < 5f || __LIB_3__::func_514(&(Local_195.f_38), 15f))
			{
				if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(__LIB_0__::func_271(uParam0->f_2), true) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && __LIB_0__::func_48(Global_35, __LIB_0__::func_271(uParam0->f_2), 12f, 1))
				{
					__LIB_0__::func_900(2);
					__LIB_0__::func_19(&(uParam1->f_6), 8);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(__LIB_0__::func_271(uParam0->f_2), 242628503, true) != 1)
			{
				__LIB_0__::func_19(&(uParam1->f_6), 6);
			}
			break;
		case 8:
			if (!PED::DOES_GROUP_EXIST(uParam1->f_36))
			{
				uParam1->f_36 = PED::CREATE_GROUP(0);
				PED::SET_GROUP_FORMATION(uParam1->f_36, 3);
				PED::SET_PED_AS_GROUP_LEADER(__LIB_0__::func_271(uParam0->f_2), uParam1->f_36, false);
				PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_271(uParam0->f_2), 279, true);
				__LIB_1__::func_721(7);
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(__LIB_0__::func_271(uParam0->f_2), sLocal_137, 0, 25612, -1, 0, 0, -1);
			__LIB_2__::func_259(&(uParam1->f_56));
			uParam1->f_339 = { Global_36 };
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_271(uParam0->f_2), 2f, 0f, 1, 2, 0);
			PED::_0x0E9E95FDEDCC9D35(Global_35, 1, 0);
			func_536(uParam1, 1);
			__LIB_0__::func_19(&(uParam1->f_6), 9);
			break;
		case 9:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), 0))
			{
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(__LIB_0__::func_271(uParam0->f_2), 1);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1.75f, 0, 0.2f, 0);
				__LIB_1__::func_648(1, 1);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_271(uParam0->f_2), 2f, 0f, 1, 2, 0);
				PED::_0x0E9E95FDEDCC9D35(Global_35, 1, 0);
				__LIB_1__::func_561(&(Local_195.f_56));
				__LIB_0__::func_19(&(uParam1->f_6), 10);
			}
			else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), sLocal_137))
			{
				__LIB_0__::func_19(&(uParam1->f_6), 8);
			}
			break;
		case 10:
			func_538(uParam0);
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), sLocal_137))
			{
				__LIB_0__::func_19(&(uParam1->f_6), 15);
			}
			bVar42 = __LIB_0__::func_71(__LIB_0__::func_271(uParam0->f_2));
			fVar43 = __LIB_0__::func_94(__LIB_0__::func_271(uParam0->f_2), func_540(), 1);
			if (!bVar42 && fVar43 > 10f)
			{
				__LIB_0__::func_19(&(uParam1->f_6), 13);
				return 0;
			}
			if (!__LIB_0__::func_396(Global_35))
			{
				__LIB_4__::func_89(&(Local_195.f_56), 0);
				if (__LIB_3__::func_514(&(Local_195.f_56), 3f))
				{
					__LIB_0__::func_745(2);
					__LIB_0__::func_19(&(uParam1->f_6), 11);
				}
			}
			else
			{
				__LIB_1__::func_561(&(Local_195.f_56));
			}
			break;
		case 11:
			TASK::OPEN_SEQUENCE_TASK(&iVar41);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar41);
			TASK::TASK_PERFORM_SEQUENCE(__LIB_0__::func_271(uParam0->f_2), iVar41);
			TASK::CLEAR_SEQUENCE_TASK(&iVar41);
			__LIB_0__::func_19(&(uParam1->f_6), 12);
			break;
		case 12:
			if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(__LIB_0__::func_271(uParam0->f_2), true) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && __LIB_0__::func_48(Global_35, __LIB_0__::func_271(uParam0->f_2), 12f, 1))
			{
				__LIB_0__::func_900(2);
				__LIB_0__::func_19(&(uParam1->f_6), 8);
			}
			break;
		case 13:
			if (!__LIB_0__::func_71(__LIB_0__::func_271(uParam0->f_2)))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(__LIB_0__::func_271(uParam0->f_2), 1868526510, true) != 1)
				{
					__LIB_1__::func_562(__LIB_0__::func_271(uParam0->f_2), iLocal_28, 0, 1065353216 /* Float: 1f */, -1);
				}
			}
			else
			{
				__LIB_0__::func_19(&(uParam1->f_6), 9);
			}
			break;
		case 15:
			TASK::OPEN_SEQUENCE_TASK(&iVar41);
			TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(2, 1), 1f, -1, 0.25f, 4456448, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar41);
			TASK::TASK_PERFORM_SEQUENCE(__LIB_0__::func_271(uParam0->f_2), iVar41);
			TASK::CLEAR_SEQUENCE_TASK(&iVar41);
			__LIB_0__::func_19(&(uParam1->f_6), 16);
			break;
		case 16:
			if (!__LIB_0__::func_71(Global_35))
			{
				__LIB_1__::func_324("FISH01_O_DSJV");
				__LIB_2__::func_259(&(uParam1->f_56));
				__LIB_1__::func_561(&uLocal_149);
				PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_271(uParam0->f_2));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_536(uParam1, 0);
				__LIB_1__::func_561(&(uParam1->f_56));
				__LIB_0__::func_19(&(uParam1->f_6), 17);
			}
			else if (__LIB_0__::func_899(&(uParam1->f_56)) && __LIB_1__::func_583(&(uParam1->f_56)) >= 6f)
			{
				if (!__LIB_0__::func_27(uParam1->f_94, -2147483648))
				{
					__LIB_2__::func_259(&(uParam1->f_56));
					__LIB_1__::func_581(&(uParam1->f_94), -2147483648);
				}
				else
				{
					StringCopy(&cVar0, "FIHJ1ARVDSMT", 24);
					__LIB_1__::func_104(&uLocal_36, cVar0, 0, -1, 0, 0);
					__LIB_1__::func_561(&(uParam1->f_56));
				}
			}
			break;
		case 17:
			if (PED::IS_PED_ON_MOUNT(__LIB_0__::func_271(uParam0->f_2)))
			{
				return 0;
			}
			__LIB_1__::func_324("FISH01_O_GTFS");
			if (!__LIB_1__::func_685(2))
			{
				__LIB_0__::func_900(2);
			}
			if (!__LIB_0__::func_899(&(Local_195.f_56)))
			{
				__LIB_2__::func_259(&(Local_195.f_56));
			}
			iVar44 = 25612;
			__LIB_11__::func_9(__LIB_0__::func_271(uParam0->f_2), Global_35, &Var3, 0f, 0f, 0f, sLocal_139, iVar44, 1, 5f, 2f, -1.2f, 1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
			func_545(Global_35, __LIB_0__::func_271(uParam0->f_2), &Var3, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, 0.5f, 0, 32, 0.8f, 0.5f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 2f, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			__LIB_1__::func_731(&(uParam1->f_19));
			__LIB_1__::func_686();
			__LIB_1__::func_648(1, 1);
			__LIB_0__::func_19(&(uParam1->f_6), 18);
			break;
		case 18:
			if (__LIB_0__::func_163(__LIB_0__::func_271(uParam0->f_2), 985146578) || __LIB_0__::func_266(__LIB_0__::func_271(uParam0->f_2), func_532(1, 3), 3f, 1, 1))
			{
				func_549(&Local_195, 0);
				__LIB_0__::func_19(&(uParam1->f_6), 19);
			}
			break;
		case 19:
			if (!__LIB_0__::func_163(__LIB_0__::func_271(uParam0->f_2), 985146578))
			{
				__LIB_1__::func_726(__LIB_0__::func_271(uParam0->f_2), 1);
				__LIB_1__::func_727(Global_35, 1);
				__LIB_5__::func_438(&(uParam1->f_19));
				__LIB_0__::func_19(&(uParam1->f_6), 4);
			}
			else
			{
				__LIB_2__::func_966(__LIB_0__::func_271(uParam0->f_2), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				__LIB_2__::func_966(Global_35, __LIB_0__::func_271(uParam0->f_2), 1, 1, 1, 0, 1, 1, 0, 1, 1);
				__LIB_8__::func_602(&(uParam1->f_19), __LIB_0__::func_271(uParam0->f_2));
			}
			break;
		case 4:
			TASK::TASK_TURN_PED_TO_FACE_COORD(__LIB_0__::func_271(uParam0->f_2), 1182.44f, -582.5126f, 68.1995f, 0);
			__LIB_0__::func_19(&(uParam1->f_6), 5);
			break;
		case 5:
			if (__LIB_0__::func_665(__LIB_0__::func_271(uParam0->f_2), Global_35, 1, 1) < 5f && !__LIB_0__::func_163(__LIB_0__::func_271(uParam0->f_2), 1464580341))
			{
				if (__LIB_11__::func_349(&uLocal_36, "FIHJ1_STRTFISH", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					__LIB_2__::func_259(&uLocal_17);
					if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
					{
						MAP::REMOVE_BLIP(&(Local_195.f_90));
					}
					Local_195.f_90 = MAP::_0xA6EF0C54A3443E70(408396114, Local_195.f_355);
					__LIB_1__::func_324("FISH01_O_FFSL");
					if (__LIB_1__::func_685(2))
					{
						__LIB_0__::func_745(2);
					}
					if (!__LIB_0__::func_899(&(Local_195.f_38)))
					{
						__LIB_2__::func_259(&(Local_195.f_38));
					}
					__LIB_0__::func_19(&(uParam1->f_6), 20);
				}
			}
			break;
		case 20:
			__LIB_4__::func_89(&(Local_195.f_38), 0);
			if (__LIB_3__::func_514(&(Local_195.f_38), 2f))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar41);
				TASK::TASK_PLAY_ANIM(0, "script_re@lost_drunk@player_point", "FWD_LEFT", 8f, -4f, -1, 24, 0f, false, 0, false, 0, false);
				TASK::TASK_ACHIEVE_HEADING(0, func_558(1, 6), 0);
				TASK::TASK_PLAY_ANIM(0, "script_re@lost_drunk@player_point", "BK_RIGHT", 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar41);
				TASK::TASK_PERFORM_SEQUENCE(__LIB_0__::func_271(uParam0->f_2), iVar41);
				TASK::CLEAR_SEQUENCE_TASK(&iVar41);
				PED::_0x2208438012482A1A(__LIB_0__::func_271(uParam0->f_2), false, false);
				if (!__LIB_0__::func_899(&(Local_195.f_56)))
				{
					__LIB_2__::func_259(&(Local_195.f_56));
				}
				__LIB_2__::func_259(&(uParam1->f_41));
				__LIB_1__::func_561(&(Local_195.f_38));
				__LIB_0__::func_19(&(uParam1->f_6), 21);
			}
			break;
		case 21:
			if (__LIB_1__::func_583(&(uParam1->f_41)) > 2.5f)
			{
				TASK::CLEAR_PED_TASKS(__LIB_0__::func_271(uParam0->f_2), true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar41);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_140, 0, 25612, -1, 0, 0, -1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(1, 6), 1f, -1, 0.25f, 0, func_558(1, 6));
				TASK::TASK_ACHIEVE_HEADING(0, func_558(1, 6), 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar41);
				TASK::TASK_PERFORM_SEQUENCE(__LIB_0__::func_271(uParam0->f_2), iVar41);
				TASK::CLEAR_SEQUENCE_TASK(&iVar41);
				PED::_0x2208438012482A1A(__LIB_0__::func_271(uParam0->f_2), false, false);
				__LIB_2__::func_259(&(uParam1->f_41));
				__LIB_0__::func_19(&(uParam1->f_6), 22);
			}
			else
			{
				Var45.f_4 = -1;
				Var45.f_8 = 2;
				Var45.f_9 = 1;
				Var45.f_10 = 1;
				Var45.f_11 = 1;
				Var45.f_13 = 1;
				Var45.f_14 = 2;
				Var45.f_15 = 2;
				Var45.f_16 = 3;
				Var45.f_19 = 3;
				Var45.f_20 = 1;
				Var45.f_21 = 3;
				Var45.f_22 = 3;
				Var45 = { 0f, 0f, 0f };
				Var45.f_3 = Global_35;
				Var45.f_8 = 4;
				Var45.f_13 = 3;
				Var45.f_7 = 500;
				_NAMESPACE29::_0x66F9EB44342BB4C5(__LIB_0__::func_271(uParam0->f_2), &Var45);
			}
			if (__LIB_1__::func_583(&(uParam1->f_41)) > 15f)
			{
				if (!__LIB_0__::func_899(&uLocal_17))
				{
					__LIB_1__::func_585(&uLocal_17, 5f);
				}
				__LIB_0__::func_19(&(uParam1->f_6), 21);
			}
			break;
		case 22:
			if (!__LIB_0__::func_163(__LIB_0__::func_271(uParam0->f_2), 242628503) && __LIB_3__::func_514(&(uParam1->f_41), 2f))
			{
				if (__LIB_0__::func_266(__LIB_0__::func_271(uParam0->f_2), func_532(1, 6), 3f, 1, 1))
				{
					__LIB_1__::func_648(1, 0);
					__LIB_1__::func_657(1);
					func_560();
					__LIB_0__::func_19(&(uParam1->f_6), 23);
				}
				else
				{
					__LIB_0__::func_19(&(uParam1->f_6), 21);
				}
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1f, 0, -1f, 0);
			}
			break;
		case 23:
			__LIB_1__::func_648(1, 0);
			__LIB_1__::func_657(1);
			if (__LIB_0__::func_899(&(uParam1->f_41)) && __LIB_1__::func_583(&(uParam1->f_41)) > 10f)
			{
				if (!__LIB_4__::func_149(1))
				{
					func_560();
					__LIB_2__::func_259(&(uParam1->f_41));
				}
				else
				{
					__LIB_1__::func_561(&(uParam1->f_41));
				}
			}
			if (__LIB_1__::func_656(1) || __LIB_1__::func_563(&(uParam1->f_96)))
			{
				if (!__LIB_1__::func_563(&(uParam1->f_96)))
				{
					uParam1->f_86++;
				}
				func_63(1, 1);
				__LIB_0__::func_19(&(uParam1->f_6), 24);
			}
			break;
		case 24:
			if (__LIB_1__::func_563(&(uParam1->f_96)))
			{
				__LIB_0__::func_19(&(uParam1->f_6), 25);
			}
			break;
		case 25:
			if (!__LIB_1__::func_563(&(uParam1->f_96)))
			{
				func_63(1, 0);
				__LIB_0__::func_19(&(uParam1->f_6), 27);
			}
			break;
		case 27:
			bVar70 = __LIB_4__::func_149(1);
			if (bVar70 && !__LIB_0__::func_27(uParam1->f_94, 8))
			{
				__LIB_1__::func_657(1);
			}
			if (__LIB_0__::func_27(uParam1->f_94, 8))
			{
				if (!__LIB_0__::func_899(&(uParam1->f_44)))
				{
					__LIB_2__::func_259(&(uParam1->f_44));
				}
				if (bVar70)
				{
					if (!__LIB_1__::func_675(1) || !__LIB_1__::func_673(1))
					{
						if (__LIB_0__::func_899(&(uParam1->f_44)))
						{
							if (__LIB_1__::func_583(&(uParam1->f_44)) > 1f)
							{
								if (!__LIB_0__::func_27(uParam1->f_94, 4194304))
								{
									__LIB_1__::func_581(&(uParam1->f_94), 4194304);
								}
								__LIB_1__::func_561(&(uParam1->f_44));
								__LIB_0__::func_19(&(uParam1->f_6), 29);
							}
						}
					}
				}
			}
			break;
		case 29:
			if (__LIB_0__::func_27(uParam1->f_94, 4194304))
			{
				func_566();
				if (!__LIB_0__::func_481(1) && __LIB_11__::func_349(&uLocal_36, "FIHJ1_IG2", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					__LIB_0__::func_900(2);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_STOP_FISH");
					__LIB_2__::func_259(&(Local_195.f_56));
					__LIB_0__::func_19(&(uParam1->f_6), 30);
				}
			}
			break;
		case 30:
			func_566();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
			func_568(Local_195.f_37, &uLocal_1599, 1500, Global_35);
			func_568(Global_35, &uLocal_1574, 1500, Local_195.f_37);
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE() && __LIB_3__::func_514(&(Local_195.f_56), 1.25f))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_195.f_37, 0f, 0f, 0f, true, 45000, 10000, 3000, 0);
			}
			if (__LIB_0__::func_266(Local_195.f_37, func_532(2, 5), 3f, 1, 1) && !__LIB_0__::func_163(Global_35, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_195.f_37, 6000, -1f, -1f, -1f);
			}
			if (!__LIB_0__::func_481(1) && __LIB_1__::func_372(Local_195.f_37, 0) != joaat("WEAPON_FISHINGROD"))
			{
				__LIB_1__::func_561(&(Local_195.f_56));
				__LIB_18__::func_168(1);
				__LIB_0__::func_900(2);
				func_571(&(Local_195.f_37), &iLocal_1553, &iLocal_1554, "FISH01_UC_LEAV", "FISH01_UC_STAY", fLocal_1561, iLocal_1562);
				if (!__LIB_0__::func_163(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_195.f_37, 6000, -1f, -1f, -1f);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_195.f_37, 0f, 0f, 0f, true, 45000, 10000, 3000, 0);
				}
				__LIB_0__::func_19(&(uParam1->f_6), 31);
			}
			break;
		case 31:
			func_566();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
			if (!__LIB_0__::func_139(iLocal_1553) || !__LIB_0__::func_139(iLocal_1554))
			{
				func_571(&(Local_195.f_37), &iLocal_1553, &iLocal_1554, "FISH01_UC_LEAV", "FISH01_UC_STAY", fLocal_1561, iLocal_1562);
				__LIB_0__::func_900(2);
				__LIB_1__::func_561(&(Local_195.f_56));
				iVar71 = -1;
			}
			else if (__LIB_0__::func_139(iLocal_1553) && __LIB_0__::func_139(iLocal_1554))
			{
				if (__LIB_0__::func_266(Local_195.f_37, func_532(2, 5), 2f, 1, 1))
				{
					__LIB_4__::func_89(&uLocal_1555, 0);
				}
				iVar71 = func_572(Local_195.f_37, &iLocal_1553, &iLocal_1554, fLocal_1561, 1, "COMP_JAVIER");
			}
			if (((((iVar71 != -1 || !__LIB_1__::func_205(Global_35, uLocal_1565[2], 1, 0)) || (!__LIB_1__::func_205(Global_35, uLocal_1565[1], 1, 0) && !__LIB_0__::func_48(Global_35, Local_195.f_37, fLocal_1561, 1))) || __LIB_3__::func_514(&uLocal_1555, 10.5f)) || __LIB_0__::func_27(Local_195.f_95, 1024)) || __LIB_0__::func_27(Local_195.f_95, 512))
			{
				if (((iVar71 == 0 || !__LIB_1__::func_205(Global_35, uLocal_1565[2], 1, 0)) || (!__LIB_1__::func_205(Global_35, uLocal_1565[1], 1, 0) && !__LIB_0__::func_48(Global_35, Local_195.f_37, fLocal_1561, 1))) || (__LIB_3__::func_514(&uLocal_1555, 10.5f) && !__LIB_1__::func_205(Global_35, uLocal_1565[1], 1, 0)))
				{
					if ((!__LIB_0__::func_27(Local_195.f_95, 512) && !__LIB_0__::func_481(1)) && __LIB_11__::func_349(&uLocal_36, "FIHJ1_IG2_POS", Global_35, __LIB_0__::func_271(uParam0->f_2), 0, 0, 1, 1))
					{
						__LIB_1__::func_581(&(Local_195.f_95), 512);
					}
				}
				else if (iVar71 == 1 || (__LIB_3__::func_514(&uLocal_1555, 10.5f) && __LIB_1__::func_205(Global_35, uLocal_1565[1], 1, 0)))
				{
					if ((!__LIB_0__::func_27(Local_195.f_95, 1024) && !__LIB_0__::func_481(1)) && __LIB_11__::func_349(&uLocal_36, "FIHJ1_IG2_NEG", Global_35, __LIB_0__::func_271(uParam0->f_2), 0, 0, 1, 1))
					{
						__LIB_1__::func_581(&(Local_195.f_95), 1024);
					}
				}
				if (__LIB_0__::func_27(Local_195.f_95, 1024) || __LIB_0__::func_27(Local_195.f_95, 512))
				{
					__LIB_1__::func_281(&iLocal_1553, 1, 1);
					__LIB_1__::func_281(&iLocal_1554, 1, 1);
					CAM::STOP_GAMEPLAY_HINT(false);
					__LIB_0__::func_745(2);
					MISC::_0xE98D55C5983F2509(__LIB_0__::func_271(uParam0->f_2));
					__LIB_0__::func_19(&(uParam1->f_6), 32);
				}
			}
			break;
		case 32:
			func_566();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
			if (__LIB_0__::func_27(Local_195.f_95, 1024) || __LIB_0__::func_27(Local_195.f_95, 512))
			{
				if (!__LIB_0__::func_27(Local_195.f_94, 134217728))
				{
					TASK::CLEAR_PED_TASKS(__LIB_0__::func_271(uParam0->f_2), true, false);
					WEAPON::SET_CURRENT_PED_WEAPON(__LIB_0__::func_271(uParam0->f_2), joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(__LIB_0__::func_271(uParam0->f_2), 1, 0, 0, 0);
					PED::_0x2208438012482A1A(__LIB_0__::func_271(uParam0->f_2), false, false);
					__LIB_1__::func_581(&(Local_195.f_94), 67108864);
					__LIB_1__::func_581(&(Local_195.f_94), 134217728);
				}
			}
			if (__LIB_0__::func_27(Local_195.f_95, 1024))
			{
				if (!__LIB_1__::func_322("FIHJ1_IG2_NEG"))
				{
					__LIB_0__::func_19(&(uParam1->f_6), 33);
				}
			}
			if (__LIB_0__::func_27(Local_195.f_95, 512))
			{
				if (!__LIB_1__::func_322("FIHJ1_IG2_POS"))
				{
					if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
					{
						MAP::REMOVE_BLIP(&(Local_195.f_90));
					}
					__LIB_1__::func_718(7);
					__LIB_0__::func_19(&(uParam1->f_6), 33);
				}
			}
			break;
		case 33:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
			if (!__LIB_0__::func_899(&(Local_195.f_68)))
			{
				__LIB_2__::func_259(&(Local_195.f_68));
			}
			else if (__LIB_1__::func_583(&(Local_195.f_68)) > 1f)
			{
				func_576(0);
				__LIB_0__::func_19(&(uParam1->f_6), 34);
			}
			break;
		case 34:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
			if (TASK::GET_SCRIPT_TASK_STATUS(__LIB_0__::func_271(uParam0->f_2), 716706914, true) == 1 || __LIB_1__::func_372(__LIB_0__::func_271(uParam0->f_2), 0) != joaat("WEAPON_FISHINGROD"))
			{
				__LIB_0__::func_19(&(uParam1->f_6), 37);
			}
			break;
		case 37:
			if (TASK::GET_SCRIPT_TASK_STATUS(__LIB_0__::func_271(uParam0->f_2), 716706914, true) == 1)
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_28))
			{
				__LIB_2__::func_259(&(Local_195.f_41));
				return 1;
			}
			break;
	}
	return 0;
}

struct<4> func_234(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { func_532(3, 5) };
			Var0.f_3 = func_558(3, 5);
			break;
		case 1:
			Var0 = { func_532(0, 2) };
			Var0.f_3 = func_558(0, 2);
			break;
		case 2:
			Var0 = { 1158.692f, -574.4988f, 76.6756f };
			Var0.f_3 = 241.7831f;
			break;
		case 3:
			Var0 = { func_532(1, 2) };
			Var0.f_3 = func_558(1, 2);
			break;
		case 4:
			Var0 = { 1182.354f, -580.723f, 67.0964f };
			Var0.f_3 = 251.5964f;
			break;
		case 5:
			Var0 = { func_532(1, 2) };
			Var0.f_3 = func_558(1, 2);
			break;
		case 6:
			Var0 = { func_532(1, 2) };
			Var0.f_3 = func_558(1, 2);
			break;
	}
	return Var0;
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	__LIB_0__::func_19(&(Local_195.f_4), 0);
	func_579(&(Local_195.f_5), 0);
}

bool func_237(var uParam0)
{
	func_580(uParam0);
	switch (Local_195.f_4)
	{
		case 0:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				if (ENTITY::_IS_ENTITY_FROZEN(iLocal_27))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_27, false);
				}
				__LIB_1__::func_721(7);
				__LIB_0__::func_19(&(Local_195.f_4), 29);
			}
			break;
		case 29:
			if (((((!__LIB_1__::func_322("FIHJ1_CLM_WNT") && !__LIB_1__::func_322("FIHJ1JAVMNT")) && !__LIB_1__::func_322("FIHJ1_DPART_MRN")) && !__LIB_1__::func_322("FIHJ1_DPART_EVN")) && func_217("FIHJ1_DPART")) && func_217("FIHJ1JAVMNT"))
			{
				__LIB_6__::func_813(uParam0, func_234(1), func_234(2), 1, 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_238(var uParam0)
{
	vector3 vVar0[24];
	func_581(uParam0);
	if (PED::IS_PED_ON_MOUNT(__LIB_0__::func_271(uParam0->f_2)) && TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 30)
	{
		if (!func_582(uParam0, &Local_195, "FISH01_O_CTCJ", 22f, 12f, 45f, 0))
		{
			return false;
		}
	}
	else if (PED::IS_PED_ON_MOUNT(__LIB_0__::func_271(uParam0->f_2)) && !func_582(uParam0, &Local_195, "FISH01_O_CTCJ", 1106247680 /* Float: 30f */, 1101004800 /* Float: 20f */, 1114636288 /* Float: 60f */, 1))
	{
		return false;
	}
	else if (!func_582(uParam0, &Local_195, "FISH01_O_CTCJ", 1106247680 /* Float: 30f */, 1101004800 /* Float: 20f */, 90f, 1))
	{
		return false;
	}
	switch (Local_195.f_4)
	{
		case 0:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(__LIB_0__::func_271(uParam0->f_2), true) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), sLocal_137))
			{
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_271(uParam0->f_2), 2f, 0f, 1, 2, 0);
				PED::_0x0E9E95FDEDCC9D35(Global_35, 0, 0);
				__LIB_6__::func_813(uParam0, func_234(1), func_234(2), 1, 2);
				__LIB_1__::func_721(7);
				__LIB_0__::func_19(&(Local_195.f_4), 1);
			}
			break;
		case 1:
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), sLocal_137) && (__LIB_1__::func_205(__LIB_0__::func_271(uParam0->f_2), Local_195.f_354, 1, 0) || __LIB_0__::func_266(__LIB_0__::func_271(uParam0->f_2), func_532(1, 0), 70f, 1, 1)))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_396(__LIB_0__::func_271(uParam0->f_2)))
			{
				__LIB_4__::func_89(&(Local_195.f_56), 0);
			}
			if (func_583(uParam0, &Local_195, 32, 1069547520 /* Float: 1.5f */) || !__LIB_0__::func_71(Global_35))
			{
				__LIB_1__::func_324("FISH01_O_DSJV");
				__LIB_1__::func_561(&uLocal_149);
				PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_271(uParam0->f_2));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_0__::func_19(&(Local_195.f_4), 3);
			}
			else if ((__LIB_0__::func_899(&(Local_195.f_56)) && __LIB_1__::func_583(&(Local_195.f_56)) >= 3.5f) && __LIB_0__::func_71(Global_35))
			{
				if (!__LIB_0__::func_27(Local_195.f_94, -2147483648))
				{
					__LIB_1__::func_422("FISH01_O_DSJV", 7500, 0, 1, 0, 0, -1, -1, 0);
					__LIB_2__::func_259(&(Local_195.f_56));
					__LIB_1__::func_581(&(Local_195.f_94), -2147483648);
				}
				else
				{
					StringCopy(&cVar0, "FIHJ1ARVDSMT", 24);
					__LIB_1__::func_104(&uLocal_36, cVar0, 0, -1, 0, 0);
					__LIB_1__::func_561(&(Local_195.f_56));
				}
			}
			break;
		case 3:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			if (!__LIB_0__::func_71(Global_35) && (__LIB_1__::func_205(Global_35, Local_195.f_354, 1, 0) || __LIB_0__::func_266(Global_35, func_532(1, 0), 50f, 1, 1)))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 29);
			}
			break;
		case 29:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			__LIB_6__::func_813(uParam0, func_234(2), func_234(3), 2, 3);
			return true;
	}
	return false;
}

bool func_239(var uParam0)
{
	func_584(uParam0);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
	switch (Local_195.f_4)
	{
		case 0:
			if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), sLocal_139) || __LIB_0__::func_266(__LIB_0__::func_271(uParam0->f_2), func_532(1, 3), 2f, 1, 1)) || __LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 1);
			}
			break;
		case 1:
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), sLocal_139) && (__LIB_0__::func_266(__LIB_0__::func_271(uParam0->f_2), func_532(1, 3), 2f, 1, 1) || __LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0)))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 29);
			}
			break;
		case 29:
			__LIB_6__::func_813(uParam0, func_234(3), func_234(4), 3, 4);
			return true;
	}
	return false;
}

bool func_240(var uParam0)
{
	vector3 vVar0[24];
	func_585(uParam0);
	func_586(&Local_195);
	if (__LIB_0__::func_27(Local_195.f_94, 33554432) && (func_217("FIHJ1LIFE") || __LIB_1__::func_322("FIHJ1LIFE")))
	{
		if (__LIB_1__::func_655(0))
		{
			func_588();
		}
		else
		{
			func_589();
		}
	}
	switch (Local_195.f_4)
	{
		case 0:
			if (__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				__LIB_8__::func_675(128);
				__LIB_1__::func_721(7);
				__LIB_12__::func_615();
				__LIB_12__::func_600();
				__LIB_1__::func_564(0);
				__LIB_0__::func_19(&(Local_195.f_4), 1);
			}
			break;
		case 1:
			if (__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				func_560();
				Local_195.f_84 = 0;
				__LIB_0__::func_19(&(Local_195.f_4), 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_647() && __LIB_4__::func_149(0))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 3);
			}
			break;
		case 3:
			if (func_595(0))
			{
				if (!__LIB_0__::func_27(Local_195.f_94, 4))
				{
					__LIB_1__::func_581(&(Local_195.f_94), 4);
				}
				__LIB_0__::func_19(&(Local_195.f_4), 4);
			}
			else if (__LIB_0__::func_27(Local_195.f_94, 4))
			{
				__LIB_1__::func_681(&(Local_195.f_94), 4);
			}
			if (!__LIB_1__::func_647() || !__LIB_4__::func_149(0))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 2);
			}
			break;
		case 4:
			if (__LIB_0__::func_27(Local_195.f_94, 131072))
			{
				if (!TASK::_0xB520DBDA7FCF573F(__LIB_0__::func_271(uParam0->f_2)))
				{
					if (!__LIB_0__::func_899(&(Local_195.f_77)))
					{
						__LIB_2__::func_259(&(Local_195.f_77));
					}
				}
			}
			if (__LIB_0__::func_27(Local_195.f_94, 131072))
			{
				__LIB_4__::func_89(&(Local_195.f_53), 0);
				if (__LIB_3__::func_514(&(Local_195.f_53), 6f))
				{
					func_63(1, __LIB_0__::func_481(1));
				}
				else
				{
					func_63(1, 1);
				}
			}
			func_63(0, 1);
			func_597();
			if (!TASK::_0xB520DBDA7FCF573F(__LIB_0__::func_271(uParam0->f_2)))
			{
				if (__LIB_3__::func_514(&(Local_195.f_77), 60f) && __LIB_0__::func_27(Local_195.f_94, 33554432))
				{
					if (!__LIB_0__::func_481(0))
					{
						__LIB_0__::func_19(&(Local_195.f_4), 29);
						__LIB_1__::func_561(&(Local_195.f_77));
					}
				}
				else if (__LIB_3__::func_514(&(Local_195.f_77), 55f))
				{
					if (!__LIB_0__::func_481(0))
					{
						if (!__LIB_0__::func_27(Local_195.f_94, 33554432) && __LIB_1__::func_655(0))
						{
							StringCopy(&cVar0, "FIHJ1LIFE", 24);
							__LIB_1__::func_104(&uLocal_36, cVar0, 0, -1, 0, 0);
							func_588();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
							__LIB_1__::func_581(&(Local_195.f_94), 33554432);
						}
					}
				}
				__LIB_4__::func_89(&(Local_195.f_77), 0);
			}
			else if (__LIB_0__::func_899(&(Local_195.f_77)))
			{
				__LIB_1__::func_561(&(Local_195.f_77));
			}
			if ((((!__LIB_0__::func_27(Local_195.f_94, 8192) && func_217("FIHJ1_REM")) && func_217("FIHJ1_WEATHER")) && !__LIB_1__::func_322("FIHJ1_REM")) && !__LIB_1__::func_322("FIHJ1_WEATHER"))
			{
				__LIB_2__::func_259(&(Local_195.f_59));
				__LIB_1__::func_581(&(Local_195.f_94), 8192);
			}
			if (__LIB_1__::func_655(0) && __LIB_0__::func_27(Local_195.f_94, 8192))
			{
				if (__LIB_1__::func_655(1))
				{
					if (__LIB_0__::func_27(Local_195.f_94, 33554432) && (__LIB_1__::func_583(&(Local_195.f_59)) >= 10f || (!__LIB_1__::func_322("FIHJ1LIFE") && __LIB_1__::func_583(&(Local_195.f_59)) >= 2f)))
					{
						if (!__LIB_0__::func_481(0))
						{
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
							{
								func_588();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
							}
							func_63(1, 0);
							__LIB_0__::func_19(&(Local_195.f_4), 29);
						}
					}
					else if (__LIB_1__::func_583(&(Local_195.f_59)) >= 10f && !__LIB_0__::func_27(Local_195.f_94, 33554432))
					{
						if (!__LIB_0__::func_481(0) && __LIB_1__::func_655(0))
						{
							__LIB_2__::func_259(&(Local_195.f_59));
							StringCopy(&cVar0, "FIHJ1LIFE", 24);
							__LIB_1__::func_104(&uLocal_36, cVar0, 0, -1, 0, 0);
							func_588();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
							func_63(1, 1);
							func_220("FIHJ1LIFE", 1);
							__LIB_1__::func_581(&(Local_195.f_94), 33554432);
						}
					}
					else
					{
						if (__LIB_1__::func_322("FIHJ1LIFE"))
						{
						}
						if (__LIB_0__::func_27(Local_195.f_94, 33554432) && __LIB_1__::func_583(&(Local_195.f_59)) >= 10f)
						{
						}
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && __LIB_1__::func_655(0))
						{
							func_588();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
						}
					}
				}
				else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && __LIB_1__::func_655(0))
				{
					func_588();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				}
			}
			else if (__LIB_0__::func_27(Local_195.f_94, 8192))
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
			}
			if (!__LIB_1__::func_647() || !__LIB_4__::func_149(0))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 2);
			}
			break;
		case 29:
			func_588();
			__LIB_6__::func_813(uParam0, func_234(4), func_234(5), 4, 5);
			return true;
	}
	return false;
}

bool func_241(var uParam0)
{
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	__LIB_0__::func_105(1);
	__LIB_1__::func_646(0);
	__LIB_1__::func_666(0);
	__LIB_1__::func_667(0);
	__LIB_1__::func_658(1);
	TASK::_0x31BB338F64D5C861(Global_35, 1);
	TASK::_0x31BB338F64D5C861(Local_195.f_37, 1);
	func_603(&(Local_195.f_96), Global_35, 0, "w_melee_fishingpole02^1", 0, 0);
	func_603(&(Local_195.f_96), Local_195.f_37, 0, "w_melee_fishingpole02", 0, 0);
	__LIB_6__::func_751(&(Local_195.f_96), func_604(0));
	__LIB_1__::func_681(&(Local_195.f_94), 32);
	__LIB_1__::func_681(&(Local_195.f_94), 64);
	__LIB_1__::func_681(&(Local_195.f_94), 128);
	__LIB_1__::func_681(&(Local_195.f_94), 256);
	func_588();
	__LIB_18__::func_168(1);
	func_63(0, 1);
	func_63(1, 1);
	func_606();
	return true;
}

bool func_242(var uParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, func_604(0), 32);
	if (func_607(cVar0, &(Local_195.f_96)))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1182.496f, -580.8946f, 67.0303f, 246.3689f, true, true, true);
		__LIB_0__::func_489(-20.9653f, -10.7725f);
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
		return true;
	}
	return false;
}

bool func_243(var uParam0)
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != joaat("WEAPON_FISHINGROD"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), true, 0, false, false);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
	WEAPON::GET_CURRENT_PED_WEAPON(__LIB_0__::func_271(uParam0->f_2), &iVar0, true, 0, false);
	if (iVar0 != joaat("WEAPON_FISHINGROD"))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(__LIB_0__::func_271(uParam0->f_2), joaat("WEAPON_FISHINGROD"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::_0x2208438012482A1A(__LIB_0__::func_271(uParam0->f_2), false, false);
		__LIB_1__::func_664(1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	__LIB_1__::func_657(1);
	__LIB_1__::func_666(1);
	__LIB_1__::func_667(0);
	if (!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CRICKET"), 1, 0))
	{
		func_143(joaat("UPGRADE_FSH_BAIT_CRICKET"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	__LIB_19__::func_447(joaat("UPGRADE_FSH_BAIT_CRICKET"));
	__LIB_10__::func_693(128);
	__LIB_1__::func_564(0);
	TASK::_0x31BB338F64D5C861(Global_35, 0);
	TASK::_0x31BB338F64D5C861(__LIB_0__::func_271(uParam0->f_2), 0);
	func_560();
	__LIB_1__::func_561(&(Local_195.f_47));
	__LIB_18__::func_168(0);
	__LIB_1__::func_663(1, 0);
	__LIB_6__::func_813(uParam0, func_234(4), func_234(5), 4, 5);
	func_63(1, 0);
	__LIB_1__::func_651(0, 0);
	__LIB_1__::func_658(0);
	__LIB_18__::func_164();
	return true;
}

bool func_244(var uParam0)
{
	bool bVar0;
	func_614();
	func_615(uParam0);
	func_597();
	switch (Local_195.f_4)
	{
		case 18:
			if (__LIB_4__::func_149(0))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 1);
			}
			break;
		case 19:
			if (__LIB_4__::func_149(0))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 3);
			}
			break;
		case 0:
			if (!__LIB_1__::func_655(0) && __LIB_4__::func_149(0))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 1);
			}
			break;
		case 1:
			if (func_595(0) && __LIB_8__::func_609(0) == joaat("UPGRADE_FSH_BAIT_CRICKET"))
			{
				__LIB_1__::func_658(0);
				__LIB_0__::func_19(&(Local_195.f_4), 2);
			}
			if (!__LIB_4__::func_149(0))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 18);
			}
			break;
		case 2:
			if (Local_195.f_84 != __LIB_8__::func_611(0))
			{
				Local_195.f_84 = __LIB_8__::func_611(0);
			}
			__LIB_4__::func_89(&(Local_195.f_50), 0);
			if ((__LIB_8__::func_609(0) == joaat("UPGRADE_FSH_BAIT_CRICKET") && __LIB_3__::func_514(&(Local_195.f_50), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 3.25f))) && (Local_195.f_84 == 0 || (Local_195.f_84 >= 1 && func_217("FIHJ1_REM2"))))
			{
				bVar0 = (func_595(0) && __LIB_8__::func_609(0) == joaat("UPGRADE_FSH_BAIT_CRICKET"));
				func_63(0, (__LIB_0__::func_481(1) || bVar0 == 0));
			}
			else
			{
				func_63(0, 1);
			}
			if (Local_195.f_84 >= 1)
			{
				if (!__LIB_0__::func_899(&(Local_195.f_47)))
				{
					func_579(&(Local_195.f_5), 5);
					__LIB_1__::func_561(&(Local_195.f_56));
					__LIB_4__::func_89(&(Local_195.f_47), 0);
				}
				if (((__LIB_3__::func_514(&(Local_195.f_47), 5f) && !__LIB_0__::func_481(1)) && func_217("FIHJ1_TRYAGN")) || __LIB_3__::func_514(&(Local_195.f_47), 20f))
				{
					Local_195.f_84 = 1;
					__LIB_1__::func_561(&(Local_195.f_47));
					__LIB_0__::func_19(&(Local_195.f_4), 3);
				}
			}
			break;
		case 3:
			if (func_595(0))
			{
				__LIB_1__::func_658(0);
				__LIB_1__::func_561(&(Local_195.f_47));
				__LIB_1__::func_681(&(Local_195.f_94), 32);
				__LIB_1__::func_681(&(Local_195.f_94), 64);
				__LIB_1__::func_681(&(Local_195.f_94), 128);
				__LIB_1__::func_681(&(Local_195.f_94), 256);
				__LIB_0__::func_19(&(Local_195.f_4), 4);
			}
			if (!__LIB_4__::func_149(0))
			{
				__LIB_0__::func_19(&(Local_195.f_4), 19);
			}
			break;
		case 4:
			if (Local_195.f_84 != __LIB_8__::func_611(0))
			{
				Local_195.f_84 = __LIB_8__::func_611(0);
			}
			if (!__LIB_0__::func_27(Local_195.f_94, 262144))
			{
				__LIB_4__::func_89(&(Local_195.f_50), 0);
				if ((__LIB_8__::func_609(0) == joaat("UPGRADE_FSH_BAIT_CRICKET") && __LIB_3__::func_514(&(Local_195.f_50), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 3.25f))) && (Local_195.f_84 == 0 || (Local_195.f_84 >= 1 && func_217("FIHJ1_REM2"))))
				{
					bVar0 = (func_595(0) && __LIB_8__::func_609(0) == joaat("UPGRADE_FSH_BAIT_CRICKET"));
					func_63(0, (__LIB_0__::func_481(1) || bVar0 == 0));
				}
				else
				{
					func_63(0, 1);
				}
			}
			else
			{
				func_63(0, 1);
				func_63(1, 1);
				__LIB_1__::func_646(0);
				__LIB_1__::func_666(0);
				__LIB_1__::func_667(0);
				__LIB_1__::func_658(1);
				__LIB_18__::func_168(1);
			}
			if (Local_195.f_84 >= 2)
			{
				if (!__LIB_0__::func_27(Local_195.f_94, 262144))
				{
					if (__LIB_1__::func_676(0))
					{
						__LIB_1__::func_581(&(Local_195.f_94), 262144);
					}
					else if (func_619(0))
					{
						__LIB_1__::func_581(&(Local_195.f_94), 262144);
					}
				}
				if (__LIB_0__::func_27(Local_195.f_94, 262144))
				{
					__LIB_4__::func_89(&(Local_195.f_47), 0);
					if (__LIB_3__::func_514(&(Local_195.f_47), 0.25f))
					{
						__LIB_1__::func_646(0);
						__LIB_1__::func_666(0);
						__LIB_1__::func_667(0);
						__LIB_1__::func_658(1);
						__LIB_18__::func_168(1);
						__LIB_1__::func_581(&(Local_195.f_94), 8);
						__LIB_0__::func_19(&(Local_195.f_4), 29);
					}
				}
			}
			break;
		case 29:
			__LIB_6__::func_813(uParam0, func_234(5), func_234(6), 5, 6);
			return true;
	}
	return false;
}

bool func_245(var uParam0)
{
	int iVar0;
	func_620(uParam0);
	if ((Local_195.f_4 > 0 && Local_195.f_4 != 29) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	}
	if (Local_195.f_4 > 0 && Local_195.f_4 <= 3)
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 1);
	}
	switch (Local_195.f_4)
	{
		case 0:
			if (__LIB_0__::func_27(Local_195.f_95, 512) || __LIB_0__::func_27(Local_195.f_95, 1024))
			{
				MISC::SET_BIT(&(Global_1956580.f_1), 5);
				func_606();
				__LIB_1__::func_654(250f);
				__LIB_2__::func_259(&uLocal_20);
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 1);
				func_622(0, 1, 1, 0);
				if (__LIB_0__::func_27(Local_195.f_95, 512))
				{
					if (!__LIB_1__::func_655(0))
					{
						if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
						{
							__LIB_1__::func_681(&(Local_195.f_94), 16);
							MAP::REMOVE_BLIP(&(Local_195.f_90));
						}
						__LIB_2__::func_259(&(Local_195.f_56));
						__LIB_0__::func_19(&(Local_195.f_4), 1);
					}
				}
				else if (__LIB_0__::func_27(Local_195.f_95, 1024))
				{
					__LIB_2__::func_259(&uLocal_20);
					func_623(1);
					__LIB_0__::func_19(&(Local_195.f_4), 9);
				}
			}
			break;
		case 1:
			HUD::_HIDE_HUD_COMPONENT(724769646);
			if (__LIB_1__::func_322("FIHJ1_IG2_POS") || __LIB_11__::func_349(&uLocal_36, "FIHJ1_IG2_POS", Global_35, __LIB_0__::func_271(uParam0->f_2), 0, 0, 1, 1))
			{
				__LIB_0__::func_745(2);
				__LIB_2__::func_344(&(Local_195.f_37));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					func_622(0, 1, 1, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
					func_626(Global_35, func_625(2, 2), 2, 1073741824 /* Float: 2f */);
					func_626(Local_195.f_37, func_625(2, 9), 2, 1073741824 /* Float: 2f */);
					func_626(iLocal_28, func_625(2, 11), 2, 1073741824 /* Float: 2f */);
					func_626(iLocal_27, func_625(2, 0), 2, 1073741824 /* Float: 2f */);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_RETURN");
					PED::_0x2208438012482A1A(Global_35, false, false);
					TASK::TASK_STAND_STILL(Local_195.f_37, -1);
					_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 1);
					iLocal_1563 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_PARAMS(iLocal_1563, 1174.181f, -581.511f, 70.9806f, -9.1036f, 0f, -102.8413f, 26.8524f, 0, 1, 1, 2, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				__LIB_2__::func_259(&uLocal_20);
				__LIB_0__::func_19(&(Local_195.f_4), 2);
			}
			break;
		case 2:
			if ((!__LIB_1__::func_322("FIHJ1_IG2_POS") && __LIB_3__::func_601(&uLocal_20, 2f)) || __LIB_3__::func_601(&uLocal_20, 6f))
			{
				__LIB_2__::func_259(&uLocal_20);
				__LIB_0__::func_19(&(Local_195.f_4), 3);
			}
			break;
		case 3:
			if (((!__LIB_1__::func_322("FIHJ1_IG2_POS") || __LIB_3__::func_601(&uLocal_20, 2f)) && __LIB_11__::func_349(&uLocal_36, "FIHJ1_A_GO", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1)) || (__LIB_3__::func_601(&uLocal_20, 8f) && !__LIB_1__::func_322("FIHJ1_A_GO")))
			{
				func_622(0, 1, 0, 0);
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 0);
				__LIB_1__::func_561(&uLocal_20);
				__LIB_0__::func_19(&(Local_195.f_4), 4);
			}
			break;
		case 4:
			func_628();
			if (iLocal_1647 == 2)
			{
				__LIB_4__::func_89(&uLocal_20, 0);
			}
			else if (iLocal_1647 < 2)
			{
				func_622(0, 1, 0, 0);
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 0);
			}
			if (__LIB_3__::func_601(&uLocal_20, 8f))
			{
				__LIB_2__::func_259(&uLocal_20);
				CAM::DO_SCREEN_FADE_OUT(3000);
				__LIB_0__::func_19(&(Local_195.f_4), 5);
			}
			break;
		case 5:
			func_628();
			if (iLocal_1647 == 3 && CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_1__::func_561(&uLocal_20);
				CAM::DO_SCREEN_FADE_IN(3000);
				__LIB_0__::func_19(&(Local_195.f_4), 6);
			}
			break;
		case 6:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				__LIB_4__::func_89(&uLocal_20, 0);
				if (STREAMING::_0xCF45DF50C7775F2A())
				{
					STREAMING::_0x5A8B01199C3E79C3();
				}
			}
			if (func_628())
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX(), 1.501f, 2000, 0f, true, false);
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				__LIB_2__::func_259(&uLocal_20);
				__LIB_1__::func_581(&(Local_195.f_95), 16384);
				__LIB_0__::func_19(&(Local_195.f_4), 29);
			}
			break;
		case 9:
			HUD::_HIDE_HUD_COMPONENT(724769646);
			if (__LIB_1__::func_322("FIHJ1_IG2_NEG") || __LIB_11__::func_349(&uLocal_36, "FIHJ1_IG2_NEG", Global_35, __LIB_0__::func_271(uParam0->f_2), 0, 0, 1, 1))
			{
				__LIB_0__::func_745(2);
				__LIB_2__::func_344(&(Local_195.f_37));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				func_622(0, 1, 1, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				func_626(Global_35, func_625(2, 2), 2, 1073741824 /* Float: 2f */);
				func_626(Local_195.f_37, func_625(2, 6), 2, 1073741824 /* Float: 2f */);
				func_626(iLocal_28, func_625(2, 1), 2, 1073741824 /* Float: 2f */);
				TASK::TASK_STAND_STILL(Local_195.f_37, -1);
				PED::_0x2208438012482A1A(Global_35, true, false);
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_END");
				iLocal_1563 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_PARAMS(iLocal_1563, 1174.609f, -580.313f, 70.7421f, -1.6942f, 0f, -145.4783f, 35.5906f, 0, 1, 1, 2, 1, 0);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				__LIB_2__::func_259(&uLocal_20);
				__LIB_0__::func_19(&(Local_195.f_4), 10);
			}
			break;
		case 10:
			if ((!__LIB_1__::func_322("FIHJ1_IG2_NEG") && __LIB_3__::func_601(&uLocal_20, 1f)) || __LIB_3__::func_601(&uLocal_20, 2.3f))
			{
				if (__LIB_1__::func_322("FIHJ1_A_STAY") || __LIB_11__::func_349(&uLocal_36, "FIHJ1_A_STAY", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					CAM::SET_CAM_PARAMS(iLocal_1563, 1171.679f, -575.6281f, 74.124f, 17.1551f, 0f, 96.1941f, 24.8162f, 0, 1, 1, 2, 1, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_195.f_37))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						if (!PED::IS_PED_ON_MOUNT(Local_195.f_37))
						{
							TASK::TASK_MOUNT_ANIMAL(0, iLocal_28, 20000, -1, 1f, 262144, 0, 0);
						}
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_138, 0, 4220012, -1, 0, 0, -1);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						__LIB_1__::func_474(Local_195.f_37, &iVar0, 0, 0, 1, 1);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), true, 0, false, false);
					PED::_0x2208438012482A1A(Global_35, false, false);
					__LIB_2__::func_259(&uLocal_20);
					__LIB_0__::func_19(&(Local_195.f_4), 11);
				}
			}
			break;
		case 11:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 2.5f, 0, -1f, 0);
			}
			if (((!__LIB_1__::func_322("FIHJ1_A_STAY") && !ENTITY::IS_ENTITY_ON_SCREEN(Local_195.f_37)) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_28)) || __LIB_3__::func_601(&uLocal_20, 4.8f))
			{
				__LIB_1__::func_539();
				__LIB_2__::func_298();
				__LIB_0__::func_489(-0.6962f, 10.6567f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(iLocal_1563, false);
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 0);
				__LIB_2__::func_259(&uLocal_20);
				__LIB_0__::func_19(&(Local_195.f_4), 12);
			}
			break;
		case 12:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 2.5f, 0, -1f, 0);
			}
			if (__LIB_0__::func_163(Local_195.f_37, 242628503) && TASK::GET_SEQUENCE_PROGRESS(Local_195.f_37) >= 1)
			{
				__LIB_4__::func_89(&uLocal_158, 0);
			}
			if (((!ENTITY::IS_ENTITY_ON_SCREEN(Local_195.f_37) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_28)) || __LIB_3__::func_601(&uLocal_158, 3.5f)) || __LIB_3__::func_601(&uLocal_20, 5f))
			{
				if (__LIB_0__::func_212(2))
				{
					__LIB_1__::func_463(__LIB_0__::func_177(2), 2, 1, 0, 0);
				}
				if (__LIB_1__::func_22(2))
				{
					__LIB_10__::func_992(2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_2__::func_259(&uLocal_20);
				__LIB_1__::func_581(&(Local_195.f_95), 16384);
				__LIB_0__::func_19(&(Local_195.f_4), 29);
			}
			break;
		case 29:
			if (PED::IS_PED_ON_MOUNT(Local_195.f_37) || __LIB_3__::func_514(&uLocal_20, 4f))
			{
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_END");
				__LIB_18__::func_164();
				__LIB_1__::func_581(&(Local_195.f_95), 16384);
				__LIB_18__::func_168(0);
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 0);
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
				return true;
			}
			break;
	}
	return false;
}

int func_250(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_10__::func_992(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_637(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

bool func_252(var uParam0)
{
	int iVar0;
	sLocal_137 = "fishing02_goto_a";
	sLocal_138 = "fishing02_return_a";
	sLocal_139 = "fishing02_down_to_lake";
	sLocal_140 = "fishing01_Jav_goto_fishing_rock";
	sLocal_135 = "fishing01_cme_shot1";
	sLocal_136 = "fishing01_cme_shot2";
	if (func_648(uParam0))
	{
		sLocal_140 = sLocal_140;
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_137);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_138);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_139);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_139);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_140);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_135);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_136);
	}
	else
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("script_re@lost_drunk@player_point"))
	{
		STREAMING::REQUEST_ANIM_DICT("script_re@lost_drunk@player_point");
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("script_re@lost_drunk@player_point"))
	{
		return false;
	}
	if (!__LIB_1__::func_22(uParam0->f_2))
	{
		func_250(uParam0->f_2, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return false;
	}
	if (__LIB_1__::func_661(sLocal_137) == 0 || __LIB_1__::func_661(sLocal_138) == 0)
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_28, 0))
	{
		iLocal_28 = func_650(&(Local_195.f_35), 2, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (!__LIB_0__::func_272(iLocal_28, 0))
	{
		return false;
	}
	if (__LIB_0__::func_665(iLocal_28, __LIB_0__::func_271(uParam0->f_2), 1, 1) > 30f)
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_28, func_651(), true, false, true, true);
		TASK::TASK_STAND_STILL(iLocal_28, -1);
	}
	if (!__LIB_0__::func_272(iLocal_27, 0))
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		Local_195.f_343.f_3 = 1;
		Local_195.f_343.f_4 = 1;
		Local_195.f_343.f_6 = { 662.3802f, -1229.426f, 43.3795f };
		Local_195.f_343.f_9 = 182.7417f;
		iLocal_27 = __LIB_1__::func_854(&(Local_195.f_342), &(Local_195.f_343));
		return false;
	}
	if (uParam0->f_7 == 0)
	{
		iVar0 = func_653(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return false;
		}
		if (!__LIB_0__::func_266(iVar0, func_532(3, 8), 2f, 1, 1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, func_532(3, 8), 3f, 10000, false, false, false, false);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iVar0, func_532(3, 8), 3f, 10000, false, false, false, false);
		}
	}
	__LIB_0__::func_928(&uLocal_36, Global_35, "ARTHUR", 0);
	__LIB_0__::func_928(&uLocal_36, __LIB_0__::func_271(uParam0->f_2), "JAVIER", 0);
	__LIB_5__::func_540(0);
	func_66(1, 1);
	__LIB_0__::func_705(uParam0->f_2, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_0__::func_271(uParam0->f_2), true);
	__LIB_5__::func_548(1);
	func_655();
	Local_195.f_37 = __LIB_0__::func_271(uParam0->f_2);
	AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(uParam0->f_2), false);
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_195.f_355))
	{
		Local_195.f_355 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1182.924f, -580.0331f, 67.1474f, 0f, 0f, -15.99697f, 5.256088f, 7.785017f, 5.105182f, "volFishingLoc");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_195.f_356))
	{
		Local_195.f_356 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1183.408f, -580.9863f, 67.68938f, 0f, 0f, -14.52683f, 5.676475f, 15.55996f, 4.36567f, "volFishingHasBegunLoc");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_195.f_354))
	{
		Local_195.f_354 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1189.868f, -589.7604f, 67.85253f, 0f, 0f, -34.12126f, 34.28095f, 31.20574f, 14.95374f, "volLeavingFishingLoc");
	}
	Local_195.f_1333 = { 0f, 0f, 0f };
	Local_195.f_1333.f_3 = Global_35;
	Local_195.f_1333.f_4 = 21030;
	Local_195.f_1333.f_8 = 4;
	Local_195.f_1333.f_19 = 4;
	Local_195.f_1333.f_21 = 4;
	Local_195.f_1333.f_17 = 4;
	Local_195.f_1333.f_18 = 4;
	Local_195.f_1333.f_7 = 0;
	func_656();
	if (!__LIB_0__::func_750(&(uParam0->f_9), 128))
	{
		__LIB_6__::func_813(uParam0, func_234(0), func_234(1), 0, 1);
	}
	return true;
}

bool func_254(var uParam0)
{
	if (__LIB_0__::func_1(Global_1935630, 2048))
	{
		return false;
	}
	if (func_657(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		__LIB_1__::func_164(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return true;
	}
	return false;
}

int func_258(vector3 vParam0, float fParam3)
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
		iVar0 = func_665(0, 0);
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

void func_288(int iParam0)
{
	if (__LIB_1__::func_650())
	{
		__LIB_10__::func_693(4);
		if (iParam0 == 1)
		{
			__LIB_10__::func_693(8);
		}
	}
	else if (iParam0 == 1)
	{
		func_291();
	}
}

void func_291()
{
	func_63(0, 0);
	func_63(1, 0);
	func_63(2, 0);
	func_63(3, 0);
	__LIB_1__::func_651(0, 0);
	__LIB_1__::func_651(1, 0);
	__LIB_1__::func_651(2, 0);
	__LIB_1__::func_651(3, 0);
	__LIB_1__::func_663(1, 0);
	__LIB_1__::func_663(2, 0);
	__LIB_1__::func_663(3, 0);
	__LIB_18__::func_165(0);
	__LIB_18__::func_166(0);
	__LIB_1__::func_653(0);
	__LIB_1__::func_658(0);
	__LIB_1__::func_648(1, 0);
	__LIB_1__::func_648(2, 0);
	__LIB_1__::func_648(3, 0);
	__LIB_8__::func_674(0, 2048);
	__LIB_8__::func_674(1, 2048);
	__LIB_8__::func_674(2, 2048);
	__LIB_8__::func_674(3, 2048);
	__LIB_1__::func_659(0);
	__LIB_1__::func_657(0);
	__LIB_1__::func_664(0);
	__LIB_1__::func_665(0);
	__LIB_18__::func_167(0);
	__LIB_1__::func_646(0);
	__LIB_1__::func_666(0);
	__LIB_1__::func_667(0);
	__LIB_1__::func_668(0);
	__LIB_1__::func_669(0);
	__LIB_1__::func_670(0);
	__LIB_1__::func_564(0);
	__LIB_18__::func_168(0);
	__LIB_18__::func_164();
	__LIB_1__::func_671(0f, 0f, 0f);
	HUD::_0x160825DADF1B04B3();
	__LIB_8__::func_675(8);
	__LIB_8__::func_675(2048);
}

void func_439()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_840(0);
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
	func_840(1);
}

void func_440()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_143(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_441()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_843(0);
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
	func_843(1);
}

void func_442()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_843(0);
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
	func_843(1);
}

void func_443()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_143(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_143(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_446(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_446(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_446(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_446(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_487(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_889(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_143(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

Vector3 func_502(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_904();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_905(Global_1310720.f_21))
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

int func_513(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_192)
	{
		if (iLocal_161[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_516()
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_161;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_161[iVar1] == 0)
		{
			if (iLocal_161[iVar1 + 1] != 0)
			{
				iLocal_161[iVar1] = iLocal_161[iVar1 + 1];
				iLocal_161[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

Vector3 func_532(int iParam0, int iParam1)
{
	return func_921(iParam0, iParam1);
}

void func_536(var uParam0, bool bParam1)
{
	if (bParam1 == bLocal_1624)
	{
		return;
	}
	if (bParam1)
	{
		AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(6, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(15, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(18, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(22, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(24, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(28, 2, bParam1);
	}
	else
	{
		AUDIO::_0x660A8F876DF1D4F8(21);
		AUDIO::_0x660A8F876DF1D4F8(6);
		AUDIO::_0x660A8F876DF1D4F8(14);
		AUDIO::_0x660A8F876DF1D4F8(15);
		AUDIO::_0x660A8F876DF1D4F8(18);
		AUDIO::_0x660A8F876DF1D4F8(19);
		AUDIO::_0x660A8F876DF1D4F8(22);
		AUDIO::_0x660A8F876DF1D4F8(24);
		AUDIO::_0x660A8F876DF1D4F8(28);
	}
	bLocal_1624 = bParam1;
	if (bParam1 == 0)
	{
		func_922(uParam0, 1);
	}
}

void func_538(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.75f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_27, 1.75f);
		if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 2)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1f, 0, -1f, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 6)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1.001f, 0, -1f, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 35)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1.25f, 0, -1f, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) >= 337 && TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 342)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1.5f, 0, -1f, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 438)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1.75f, 0, -1f, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 452)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1.501f, 0, -1f, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 462)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1.25f, 0, -1f, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 466)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1.001f, 0, -1f, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) < 468)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(__LIB_0__::func_271(uParam0->f_2), 1f, 0, -1f, 0);
		}
	}
}

Vector3 func_540()
{
	return 1150.682f, -574.3315f, 78.1578f;
}

void func_545(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, int iParam14, float fParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, fParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

void func_549(var uParam0, int iParam1)
{
	char cVar0[32];
	__LIB_1__::func_734(&(uParam0->f_96));
	uParam0->f_338 = func_604(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_338))
	{
		return;
	}
	StringCopy(&cVar0, uParam0->f_338, 32);
	__LIB_1__::func_517(&(uParam0->f_96), cVar0);
	switch (iParam1)
	{
		case 0:
			func_929(uParam0);
			break;
	}
}

float func_558(int iParam0, int iParam1)
{
	return func_932(iParam0, iParam1);
}

void func_560()
{
	if (!__LIB_1__::func_650())
	{
		__LIB_10__::func_693(1);
	}
}

void func_566()
{
	if (!__LIB_0__::func_27(Local_195.f_95, 2048))
	{
		if (!__LIB_0__::func_899(&uLocal_1558))
		{
			func_576(0);
			__LIB_4__::func_89(&uLocal_1558, 0);
		}
		if (__LIB_3__::func_514(&uLocal_1558, 1.25f) && __LIB_1__::func_372(Local_195.f_37, 0) != joaat("WEAPON_FISHINGROD"))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1564);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(2, 5), (1f + 0.5f), -1, 5f, 0, func_558(2, 5));
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1564);
			TASK::TASK_PERFORM_SEQUENCE(Local_195.f_37, iLocal_1564);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1564);
			PED::_0x2208438012482A1A(Local_195.f_37, false, false);
			TASK::_0x12990818C1D35886(Local_195.f_37, 0, 1065353216 /* Float: 1f */);
			__LIB_1__::func_581(&(Local_195.f_95), 2048);
		}
	}
}

void func_568(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	*uParam1 = { 0f, 0f, 0f };
	uParam1->f_4 = 21030;
	uParam1->f_8 = 4;
	uParam1->f_19 = 4;
	uParam1->f_21 = 4;
	uParam1->f_17 = 4;
	uParam1->f_18 = 4;
	uParam1->f_3 = uParam3;
	uParam1->f_7 = iParam2;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, uParam1);
}

void func_571(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, float fParam5, int iParam6)
{
	var uVar0;
	uVar0 = *uParam0;
	func_934(&uVar0, iParam1, iParam2, sParam3, sParam4, fParam5, iParam6);
}

int func_572(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, char* sParam5)
{
	if ((!__LIB_0__::func_139(*iParam1) || !__LIB_0__::func_139(*iParam2)) || !ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iParam0, fParam3, 3, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0), sParam5, 0);
	HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0), sParam5, 1, 0, 0, 0);
	__LIB_1__::func_221(*iParam1, 1, 1);
	__LIB_1__::func_382(*iParam1, 1, 1);
	if (__LIB_1__::func_732(*iParam1, 1))
	{
		return 0;
	}
	__LIB_1__::func_221(*iParam2, 1, 1);
	__LIB_1__::func_382(*iParam2, 1, 1);
	if (__LIB_1__::func_732(*iParam2, 1))
	{
		return 1;
	}
	return -1;
}

void func_576(int iParam0)
{
	if (__LIB_4__::func_149(1))
	{
		__LIB_1__::func_657(0);
		func_622(1, 1, 0, iParam0);
	}
}

void func_579(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	__LIB_1__::func_561(&(Local_195.f_56));
	__LIB_1__::func_561(&(Local_195.f_38));
}

void func_580(var uParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;
	switch (Local_195.f_5)
	{
		case 0:
			if (__LIB_11__::func_349(&uLocal_36, "FIHJ1_CLM_WNT", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
			{
				__LIB_1__::func_324("FSH_MOUNT");
				if (!__LIB_1__::func_587(7))
				{
					__LIB_1__::func_718(7);
				}
				iLocal_193 = 0;
				__LIB_1__::func_561(&(Local_195.f_38));
				PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
				func_579(&(Local_195.f_5), 1);
			}
			break;
		case 1:
			__LIB_4__::func_89(&(Local_195.f_56), 0);
			if (!__LIB_1__::func_587(7))
			{
				__LIB_1__::func_718(7);
			}
			if (!__LIB_0__::func_71(Global_35))
			{
				PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
			}
			if (__LIB_0__::func_71(Global_35))
			{
				if (__LIB_1__::func_587(7))
				{
					__LIB_1__::func_721(7);
				}
				__LIB_1__::func_390("FSH_MOUNT", 1);
				__LIB_1__::func_561(&(Local_195.f_38));
				__LIB_0__::func_900(2);
				func_579(&(Local_195.f_5), 2);
			}
			else if (!__LIB_1__::func_587(7))
			{
				__LIB_1__::func_718(7);
			}
			else if (__LIB_3__::func_514(&(Local_195.f_56), 6f))
			{
				__LIB_1__::func_422("FSH_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
				__LIB_1__::func_561(&(Local_195.f_56));
			}
			if ((iLocal_193 < 3 && !__LIB_0__::func_71(Global_35)) && __LIB_0__::func_71(__LIB_0__::func_271(uParam0->f_2)))
			{
				__LIB_4__::func_89(&(Local_195.f_38), 0);
				if (__LIB_3__::func_601(&(Local_195.f_38), __LIB_0__::func_514(iLocal_193 == 0, 4.6f, 10f)))
				{
					if (__LIB_1__::func_104(&uLocal_36, __LIB_1__::func_344("FIHJ1_MOUNTUP"), 1, iLocal_193, 0, 0))
					{
						iLocal_193++;
						__LIB_1__::func_561(&(Local_195.f_38));
					}
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_4__::func_89(&(Local_195.f_38), 0);
			}
			if ((__LIB_3__::func_601(&(Local_195.f_38), 1.25f) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(__LIB_0__::func_271(uParam0->f_2), true)) && !__LIB_1__::func_322("FIHJ1_CLM_WNT"))
			{
				iVar1 = __LIB_0__::func_23();
				iVar2 = __LIB_0__::func_41(iVar1);
				cVar0 = "FIHJ1_TOLAKE";
				if (iVar2 > 16)
				{
					cVar0 = "FIHJ1_DPART_EVN";
				}
				else if (iVar2 < 12)
				{
					cVar0 = "FIHJ1_DPART_MRN";
				}
				if (__LIB_11__::func_349(&uLocal_36, cVar0, __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					if (__LIB_1__::func_587(7))
					{
						__LIB_1__::func_721(7);
					}
					__LIB_0__::func_900(2);
					__LIB_1__::func_324("FISH01_O_FLWJ");
					if (MISC::ARE_STRINGS_EQUAL(cVar0, "FIHJ1_TOLAKE"))
					{
						func_220("FIHJ1_TOLAKE", 1);
					}
					iLocal_193 = 0;
					func_220("FIHJ1_DPART", 1);
					__LIB_1__::func_561(&(Local_195.f_38));
					func_579(&(Local_195.f_5), 3);
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_4__::func_89(&(Local_195.f_38), 0);
			}
			if ((__LIB_3__::func_601(&(Local_195.f_38), 2f) && !__LIB_0__::func_481(1)) && __LIB_11__::func_349(&uLocal_36, "FIHJ1JAVMNT", Global_35, __LIB_0__::func_271(uParam0->f_2), 0, 0, 1, 1))
			{
				if (__LIB_1__::func_587(7))
				{
					__LIB_1__::func_721(7);
				}
				__LIB_0__::func_900(2);
				__LIB_1__::func_324("FISH01_O_FLWJ");
				iLocal_193 = 0;
				func_220("FIHJ1JAVMNT", 1);
				func_579(&(Local_195.f_5), 51);
			}
			break;
		case 51:
			if (__LIB_1__::func_587(7))
			{
				__LIB_1__::func_721(7);
			}
			__LIB_0__::func_900(2);
			__LIB_1__::func_561(&(Local_195.f_38));
			__LIB_1__::func_561(&(Local_195.f_56));
			__LIB_1__::func_324("FISH01_O_FLWJ");
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

void func_581(var uParam0)
{
	vector3 vVar0[24];
	switch (Local_195.f_5)
	{
		case 0:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_4__::func_89(&(Local_195.f_38), 0);
			}
			if (!__LIB_0__::func_71(Global_35))
			{
				PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
			}
			if ((__LIB_3__::func_601(&(Local_195.f_38), 1.25f) && !__LIB_0__::func_481(1)) && ((func_217("FIHJ1_TOLAKE") || func_217("FIHJ1_DPART")) || __LIB_11__::func_349(&uLocal_36, "FIHJ1_TOLAKE", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1)))
			{
				__LIB_1__::func_324("FISH01_O_FLWJ");
				func_220("FIHJ1_TOLAKE", 1);
				if (!__LIB_1__::func_587(7))
				{
					__LIB_1__::func_718(7);
				}
				iLocal_193 = 0;
				if (!__LIB_0__::func_71(Global_35))
				{
					func_579(&(Local_195.f_5), 1);
				}
				else
				{
					func_579(&(Local_195.f_5), 11);
				}
			}
			break;
		case 1:
			iLocal_193 = 0;
			if (!__LIB_0__::func_71(Global_35))
			{
				PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
				__LIB_1__::func_422("FSH_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
				__LIB_1__::func_324("FSH_MOUNT");
				__LIB_0__::func_745(2);
				if (!__LIB_1__::func_587(7))
				{
					__LIB_1__::func_718(7);
				}
				func_579(&(Local_195.f_5), 11);
			}
			else if (__LIB_0__::func_71(Global_35))
			{
				__LIB_4__::func_89(&(Local_195.f_38), 0);
				if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), 0) && TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) > 60) && (func_217("FIHJ1_RIDE") || __LIB_11__::func_349(&uLocal_36, "FIHJ1_RIDE", Global_35, __LIB_0__::func_271(uParam0->f_2), 0, 0, 1, 1)))
				{
					if (__LIB_1__::func_587(7))
					{
						__LIB_1__::func_721(7);
					}
					__LIB_1__::func_390("FSH_MOUNT", 1);
					__LIB_0__::func_900(2);
					func_220("FIHJ1_RIDE", 1);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_RIDE");
					__LIB_1__::func_561(&(Local_195.f_38));
					__LIB_1__::func_324("FISH01_O_FLWJ");
					func_579(&(Local_195.f_5), 2);
				}
			}
			break;
		case 11:
			__LIB_4__::func_89(&(Local_195.f_56), 0);
			PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
			if (__LIB_0__::func_71(Global_35))
			{
				__LIB_4__::func_89(&(Local_195.f_38), 0);
				if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), 0) && TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) > 60) && (func_217("FIHJ1_RIDE") || __LIB_11__::func_349(&uLocal_36, "FIHJ1_RIDE", Global_35, __LIB_0__::func_271(uParam0->f_2), 0, 0, 1, 1)))
				{
					if (__LIB_1__::func_587(7))
					{
						__LIB_1__::func_721(7);
					}
					iLocal_193 = 0;
					__LIB_1__::func_390("FSH_MOUNT", 1);
					__LIB_0__::func_900(2);
					func_220("FIHJ1_RIDE", 1);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_RIDE");
					__LIB_1__::func_561(&(Local_195.f_38));
					__LIB_1__::func_324("FISH01_O_FLWJ");
					func_579(&(Local_195.f_5), 2);
				}
			}
			else if (!__LIB_1__::func_587(7))
			{
				__LIB_1__::func_718(7);
			}
			else if (__LIB_3__::func_514(&(Local_195.f_56), 15f))
			{
				__LIB_1__::func_422("FSH_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
				__LIB_1__::func_561(&(Local_195.f_56));
			}
			if ((iLocal_193 < 3 && !__LIB_0__::func_71(Global_35)) && __LIB_0__::func_71(__LIB_0__::func_271(uParam0->f_2)))
			{
				if (!__LIB_0__::func_481(1))
				{
					__LIB_4__::func_89(&(Local_195.f_38), 0);
				}
				if (__LIB_3__::func_601(&(Local_195.f_38), 6f) && !__LIB_0__::func_481(1))
				{
					if (__LIB_1__::func_104(&uLocal_36, __LIB_1__::func_344("FIHJ1_MOUNTUP"), 1, iLocal_193, 0, 0))
					{
						iLocal_193++;
						__LIB_1__::func_561(&(Local_195.f_38));
					}
				}
			}
			if (iLocal_194 < 3)
			{
				if (__LIB_0__::func_71(Global_35) && __LIB_0__::func_665(Global_35, __LIB_0__::func_271(uParam0->f_2), 1, 1) > 23f)
				{
					if (!__LIB_0__::func_481(1))
					{
						__LIB_4__::func_89(&uLocal_155, 0);
					}
					if (__LIB_3__::func_601(&uLocal_155, 8f) && !__LIB_0__::func_481(1))
					{
						if (__LIB_1__::func_104(&uLocal_36, __LIB_1__::func_344("FIHJ1_FALLBACK"), 1, iLocal_194, 0, 0))
						{
							iLocal_194++;
							__LIB_1__::func_561(&uLocal_155);
						}
					}
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_4__::func_89(&(Local_195.f_56), 0);
			}
			if (__LIB_0__::func_665(__LIB_0__::func_271(uParam0->f_2), Global_35, 1, 1) < 10f)
			{
				iLocal_193 = 0;
				__LIB_1__::func_561(&(Local_195.f_38));
				func_579(&(Local_195.f_5), 5);
			}
			else if (__LIB_1__::func_583(&(Local_195.f_56)) >= 6f && !__LIB_0__::func_481(1))
			{
				__LIB_1__::func_422("FISH01_O_FLWJ", 7500, 0, 1, 0, 0, -1, -1, 0);
				__LIB_1__::func_561(&(Local_195.f_38));
				iLocal_193 = 0;
				func_579(&(Local_195.f_5), 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(Local_195.f_94, 536870912))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), sLocal_137))
				{
					if ((TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) >= 338 && TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) <= 341) && !__LIB_0__::func_481(1))
					{
						StringCopy(&cVar0, "FIHJ1FSHRT", 24);
						__LIB_1__::func_104(&uLocal_36, cVar0, 0, -1, 0, 0);
						__LIB_1__::func_581(&(Local_195.f_94), 536870912);
					}
				}
			}
			if (!__LIB_0__::func_27(Local_195.f_94, 1048576))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), sLocal_137))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) > 342 && !__LIB_0__::func_481(1))
					{
						StringCopy(&cVar0, "FIHJ1_LANRIVER", 24);
						__LIB_1__::func_104(&uLocal_36, cVar0, 0, -1, 0, 0);
						__LIB_1__::func_581(&(Local_195.f_94), 1048576);
					}
				}
			}
			if (!__LIB_0__::func_27(Local_195.f_95, 256))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(__LIB_0__::func_271(uParam0->f_2), sLocal_137))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(__LIB_0__::func_271(uParam0->f_2)) >= 440 && !__LIB_0__::func_481(1))
					{
						StringCopy(&cVar0, "FIHJ1FSHDNHR", 24);
						__LIB_1__::func_104(&uLocal_36, cVar0, 0, -1, 0, 0);
						__LIB_1__::func_581(&(Local_195.f_95), 256);
					}
				}
			}
			if (!__LIB_0__::func_396(Global_35))
			{
				__LIB_4__::func_89(&(Local_195.f_56), 0);
				if (__LIB_3__::func_514(&(Local_195.f_56), 1.5f))
				{
					__LIB_0__::func_745(2);
					func_579(&(Local_195.f_5), 0);
				}
			}
			else
			{
				__LIB_1__::func_561(&(Local_195.f_56));
			}
			if (iLocal_194 < 3)
			{
				if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(uParam0->f_2), 1, 1) > 23f)
				{
					if (!__LIB_0__::func_481(1))
					{
						__LIB_4__::func_89(&uLocal_155, 0);
					}
					if (__LIB_3__::func_601(&uLocal_155, 8f) && !__LIB_0__::func_481(1))
					{
						if (__LIB_1__::func_104(&uLocal_36, __LIB_1__::func_344("FIHJ1_FALLBACK"), 1, iLocal_194, 0, 0))
						{
							iLocal_194++;
							__LIB_1__::func_561(&(Local_195.f_38));
						}
					}
				}
			}
			break;
		case 51:
			if (__LIB_11__::func_349(&uLocal_36, "FIHJ1_LOOKSPOT", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_ARRIVE");
				func_579(&(Local_195.f_5), -1);
			}
			break;
	}
}

bool func_582(var uParam0, var uParam1, char* sParam2, float fParam3, float fParam4, float fParam5, bool bParam6)
{
	switch (uParam1->f_12)
	{
		case 0:
			if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(uParam0->f_2), 1, 1) > fParam3)
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(__LIB_0__::func_271(uParam0->f_2)))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(__LIB_0__::func_271(uParam0->f_2), 1, 1, 0);
				}
				if (bParam6)
				{
					__LIB_0__::func_565(sParam2, 7500, 0, 0, 0, 1);
					__LIB_1__::func_324(sParam2);
					__LIB_2__::func_259(&(Local_195.f_56));
				}
				uParam1->f_12 = 1;
			}
			break;
		case 1:
			if (bParam6)
			{
				if (__LIB_0__::func_899(&(Local_195.f_56)))
				{
					if (__LIB_1__::func_583(&(Local_195.f_56)) > 2f)
					{
						__LIB_1__::func_422(sParam2, 7500, 0, 1, 0, 0, -1, -1, 0);
						__LIB_1__::func_561(&(Local_195.f_56));
					}
				}
			}
			if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(uParam0->f_2), 1, 1) > fParam5)
			{
				uParam1->f_12 = 2;
			}
			else if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(uParam0->f_2), 1, 1) < fParam4)
			{
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(__LIB_0__::func_271(uParam0->f_2)))
				{
					TASK::WAYPOINT_PLAYBACK_RESUME(__LIB_0__::func_271(uParam0->f_2), false, -1, 0);
				}
				__LIB_1__::func_324("FISH01_O_FLWJ");
				uParam1->f_12 = 0;
			}
			break;
		case 2:
			if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(uParam0->f_2), 1, 1) < fParam4)
			{
				if (__LIB_0__::func_27(uParam1->f_83, 1))
				{
					__LIB_1__::func_681(&(uParam1->f_83), 1);
				}
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(__LIB_0__::func_271(uParam0->f_2)))
				{
					TASK::WAYPOINT_PLAYBACK_RESUME(__LIB_0__::func_271(uParam0->f_2), false, -1, 0);
				}
				__LIB_1__::func_324("FISH01_O_FLWJ");
				uParam1->f_12 = 0;
			}
			else
			{
				if (!__LIB_0__::func_27(uParam1->f_83, 1))
				{
					__LIB_1__::func_581(&(uParam1->f_83), 1);
				}
				return false;
			}
			break;
	}
	return true;
}

bool func_583(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (__LIB_8__::func_727(Global_35, func_532(1, 0), &uLocal_149, 60f, 50f, 40f, 10f, fParam3, 0, 0, 1, 1, 1) || __LIB_1__::func_205(Global_35, uLocal_1565[0], 1, 0))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
		return true;
	}
	return false;
}

void func_584(var uParam0)
{
	switch (Local_195.f_5)
	{
		case 0:
			if (!__LIB_0__::func_481(1))
			{
				if (__LIB_11__::func_349(&uLocal_36, "FIHJ1_FLW_FSPOT", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					__LIB_1__::func_324("FISH01_O_GTFS");
					__LIB_2__::func_259(&uLocal_17);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_ARRIVE");
					__LIB_0__::func_900(2);
					func_579(&(Local_195.f_5), 1);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_4__::func_89(&(Local_195.f_38), 0);
			}
			if (__LIB_3__::func_514(&(Local_195.f_38), 2.5f))
			{
				if (__LIB_11__::func_349(&uLocal_36, "FIHJ1_IG1", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					func_579(&(Local_195.f_5), 2);
				}
			}
			break;
		case 2:
			__LIB_4__::func_89(&(Local_195.f_56), 0);
			if (__LIB_3__::func_514(&(Local_195.f_56), 6f) || __LIB_0__::func_665(__LIB_0__::func_271(uParam0->f_2), Global_35, 1, 1) < 5f)
			{
				if (__LIB_0__::func_899(&(Local_195.f_56)) && __LIB_0__::func_665(__LIB_0__::func_271(uParam0->f_2), Global_35, 1, 1) >= 5f)
				{
					__LIB_1__::func_422("FISH01_O_GTFS", 7500, 0, 1, 0, 0, -1, -1, 0);
					__LIB_1__::func_561(&(Local_195.f_56));
				}
				func_579(&(Local_195.f_5), 3);
			}
			break;
		case 3:
			__LIB_4__::func_89(&(Local_195.f_56), 0);
			if (__LIB_3__::func_514(&(Local_195.f_56), 5f))
			{
				if (!__LIB_1__::func_325() && __LIB_0__::func_665(__LIB_0__::func_271(uParam0->f_2), Global_35, 1, 1) > 9f)
				{
					__LIB_1__::func_422("FISH01_O_GTFS", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
			}
			if (__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				func_579(&(Local_195.f_5), 51);
			}
			break;
		case 51:
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

void func_585(var uParam0)
{
	vector3 vVar0[24];
	char cVar3[128];
	func_63(1, __LIB_0__::func_481(1));
	switch (Local_195.f_5)
	{
		case 0:
			if (__LIB_11__::func_349(&uLocal_36, "FIHJ1_STRTFISH", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
			{
				iLocal_193 = 0;
				__LIB_1__::func_324("FISH01_O_FFSL");
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				Local_195.f_90 = MAP::_0xA6EF0C54A3443E70(408396114, Local_195.f_355);
				__LIB_0__::func_745(2);
				func_579(&(Local_195.f_5), 1);
			}
			break;
		case 1:
			__LIB_4__::func_89(&(Local_195.f_56), 0);
			if (__LIB_3__::func_514(&(Local_195.f_56), 6f) || __LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				if (!__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
				{
					__LIB_1__::func_422("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				else
				{
					__LIB_1__::func_324("FISH01_O_GFISH");
				}
				func_579(&(Local_195.f_5), 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0) && !__LIB_0__::func_481(0))
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_START_FISH");
				__LIB_1__::func_324("FISH01_O_GFISH");
				func_560();
				__LIB_1__::func_646(1);
				__LIB_1__::func_666(0);
				__LIB_1__::func_667(1);
				__LIB_1__::func_658(0);
				__LIB_1__::func_561(&(Local_195.f_38));
				__LIB_1__::func_681(&(Local_195.f_94), 16);
				func_579(&(Local_195.f_5), 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_647() && __LIB_4__::func_149(0))
			{
				func_579(&(Local_195.f_5), 4);
			}
			if (__LIB_1__::func_588("FISH01_O_FFSL", 0, 0, -1, -1, 0) && __LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				__LIB_1__::func_324("FISH01_O_GFISH");
			}
			if (!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0) || !__LIB_1__::func_647())
			{
				func_579(&(Local_195.f_5), 10);
			}
			if (func_949())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_1__::func_337()) && MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
				{
					sLocal_141 = "FISH01_O_GFISH";
					__LIB_0__::func_769();
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
			{
				__LIB_1__::func_324(sLocal_141);
				sLocal_141 = "";
			}
			break;
		case 4:
			if (func_949())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_1__::func_337()) && MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
				{
					sLocal_141 = "FISH01_O_GFISH";
					__LIB_0__::func_769();
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
			{
				__LIB_1__::func_324(sLocal_141);
				sLocal_141 = "";
			}
			if (!__LIB_0__::func_27(Local_195.f_94, 131072))
			{
				if (__LIB_1__::func_655(0))
				{
					__LIB_4__::func_89(&(Local_195.f_38), 0);
					if (__LIB_3__::func_514(&(Local_195.f_38), 2f))
					{
						__LIB_1__::func_561(&(Local_195.f_38));
						if (!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0))
						{
							__LIB_1__::func_324("FISH01_O_FFSL");
						}
						else
						{
							__LIB_1__::func_324("FISH01_O_GFISH");
						}
						func_579(&(Local_195.f_5), 5);
						__LIB_1__::func_581(&(Local_195.f_94), 131072);
					}
				}
			}
			else if (__LIB_1__::func_655(0) || func_595(0))
			{
				if (!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0))
				{
					__LIB_1__::func_324("FISH01_O_FFSL");
				}
				else
				{
					__LIB_1__::func_324("FISH01_O_GFISH");
				}
				if (func_217("FIHJ1_WEATHER"))
				{
					func_579(&(Local_195.f_5), 10);
				}
				else
				{
					func_579(&(Local_195.f_5), 15);
				}
				__LIB_1__::func_581(&(Local_195.f_94), 131072);
			}
			if (!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0) || !__LIB_1__::func_647())
			{
				func_579(&(Local_195.f_5), 10);
			}
			break;
		case 5:
			StringCopy(&cVar0, "FIHJ1_REM", 24);
			__LIB_4__::func_89(&(Local_195.f_38), 0);
			if (__LIB_3__::func_514(&(Local_195.f_38), 6f))
			{
				if (__LIB_11__::func_349(&uLocal_36, &cVar0, __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					func_220("FIHJ1_REM", 1);
					__LIB_1__::func_561(&(Local_195.f_38));
					func_579(&(Local_195.f_5), 15);
				}
			}
			break;
		case 15:
			StringCopy(&cVar0, "FIHJ1_WEATHER", 24);
			if (!__LIB_1__::func_322("FIHJ1_REM"))
			{
				__LIB_4__::func_89(&(Local_195.f_38), 0);
			}
			if (!__LIB_3__::func_146(__LIB_2__::func_954()))
			{
				func_220("FIHJ1_WEATHER", 1);
			}
			if (((!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0) || !__LIB_1__::func_647()) || func_217("FIHJ1_WEATHER")) || (__LIB_3__::func_514(&(Local_195.f_38), 10f) && __LIB_11__::func_349(&uLocal_36, &cVar0, __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1)))
			{
				if (__LIB_1__::func_322("FIHJ1_WEATHER"))
				{
					func_220("FIHJ1_WEATHER", 1);
				}
				__LIB_1__::func_561(&(Local_195.f_38));
				func_579(&(Local_195.f_5), 10);
			}
			break;
		case 10:
			if (func_949())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_1__::func_337()) && MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
				{
					StringCopy(&cVar3, __LIB_1__::func_337(), 128);
					sLocal_141 = __LIB_1__::func_569(cVar3);
					__LIB_0__::func_769();
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
			{
				__LIB_1__::func_324(sLocal_141);
				sLocal_141 = "";
			}
			if ((!__LIB_1__::func_205(Global_35, Local_195.f_354, 1, 0) || !__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0)) || !__LIB_1__::func_647())
			{
				if (!__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
				{
					if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
					{
						MAP::REMOVE_BLIP(&(Local_195.f_90));
					}
					Local_195.f_90 = MAP::_0xA6EF0C54A3443E70(408396114, Local_195.f_355);
					__LIB_1__::func_646(0);
					__LIB_1__::func_666(0);
					__LIB_1__::func_667(0);
					__LIB_1__::func_658(1);
				}
				else
				{
					__LIB_1__::func_646(1);
					__LIB_1__::func_666(0);
					__LIB_1__::func_667(1);
					__LIB_1__::func_658(0);
				}
				if (!__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
				{
					__LIB_1__::func_324("FISH01_O_FFSL");
				}
				else
				{
					__LIB_1__::func_324("FISH01_O_GFISH");
				}
				__LIB_1__::func_581(&(Local_195.f_94), 16);
				__LIB_2__::func_259(&(Local_195.f_56));
				func_579(&(Local_195.f_5), 11);
			}
			break;
		case 11:
			if (!__LIB_1__::func_205(Global_35, Local_195.f_354, 1, 0))
			{
				__LIB_4__::func_89(&(Local_195.f_56), 0);
				if (__LIB_3__::func_514(&(Local_195.f_56), 1f))
				{
					__LIB_1__::func_422("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_579(&(Local_195.f_5), 20);
				}
			}
			else if (!__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				__LIB_4__::func_89(&(Local_195.f_56), 0);
				if (__LIB_3__::func_514(&(Local_195.f_56), 3f))
				{
					__LIB_1__::func_422("FISH01_O_FFSL", 10000, 0, 1, 0, 0, -1, -1, 0);
					func_579(&(Local_195.f_5), 12);
				}
			}
			else if (!__LIB_1__::func_647())
			{
				__LIB_1__::func_658(0);
				__LIB_1__::func_646(1);
				__LIB_1__::func_666(0);
				__LIB_1__::func_667(1);
				func_579(&(Local_195.f_5), 13);
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 2);
			}
			break;
		case 12:
			if (!__LIB_1__::func_205(Global_35, Local_195.f_354, 1, 0))
			{
				__LIB_1__::func_422("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_579(&(Local_195.f_5), 20);
			}
			else if (__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 2);
			}
			break;
		case 13:
			if (__LIB_1__::func_647())
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				iLocal_193 = 0;
				func_579(&(Local_195.f_5), 2);
			}
			else
			{
				if (!__LIB_0__::func_481(1))
				{
					__LIB_4__::func_89(&(Local_195.f_38), 0);
				}
				StringCopy(&cVar0, "FIHJ1_EQUIP_FP", 24);
				if (((__LIB_3__::func_514(&(Local_195.f_38), 8f) && !__LIB_0__::func_481(1)) && (!func_217("FIHJ1_EQUIP_FP_1") || !func_217("FIHJ1_EQUIP_FP_2"))) && __LIB_1__::func_104(&uLocal_36, cVar0, 1, iLocal_193, 0, 0))
				{
					__LIB_1__::func_561(&(Local_195.f_38));
					iLocal_193++;
					if (!func_217("FIHJ1_EQUIP_FP_1"))
					{
						func_220("FIHJ1_EQUIP_FP_1", 1);
					}
					else
					{
						func_220("FIHJ1_EQUIP_FP_2", 1);
					}
				}
			}
			if (!__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				func_579(&(Local_195.f_5), 10);
			}
			break;
		case 20:
			if (__LIB_1__::func_205(Global_35, Local_195.f_354, 1, 0))
			{
				func_579(&(Local_195.f_5), 11);
			}
			else if (iLocal_193 < 3)
			{
				if (!__LIB_0__::func_481(1))
				{
					__LIB_4__::func_89(&(Local_195.f_38), 0);
				}
				StringCopy(&cVar0, "FIHJ1_ABANDON1", 24);
				if (iLocal_193 == 1)
				{
					StringCopy(&cVar0, "FIHJ1_ABANDON2", 24);
				}
				else if (iLocal_193 == 2)
				{
					StringCopy(&cVar0, "FIHJ1_ABANDON3", 24);
				}
				if (__LIB_3__::func_601(&(Local_195.f_38), __LIB_0__::func_514(iLocal_193 == 0, 3.6f, 9.8f)) && !__LIB_0__::func_481(1))
				{
					if (__LIB_11__::func_349(&uLocal_36, &cVar0, __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
					{
						iLocal_193++;
						__LIB_1__::func_561(&(Local_195.f_38));
					}
				}
			}
			break;
		case 51:
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

void func_586(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_338))
	{
		return;
	}
	if (!__LIB_0__::func_27(uParam0->f_94, 1))
	{
		if (__LIB_6__::func_724(&(uParam0->f_96), uParam0->f_338, 1, 1))
		{
			__LIB_1__::func_581(&(uParam0->f_94), 1);
		}
	}
}

void func_588()
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	__LIB_18__::func_168(1);
	__LIB_1__::func_651(0, 1);
	func_63(1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y"), false);
}

void func_589()
{
	__LIB_18__::func_168(0);
	__LIB_1__::func_651(0, 0);
}

bool func_595(int iParam0)
{
	return __LIB_8__::func_955(__LIB_8__::func_609(iParam0));
}

void func_597()
{
	float fVar0;
	vector3 vVar1[24];
	Local_195.f_86 = __LIB_8__::func_611(1);
	if (__LIB_4__::func_149(1))
	{
		if (__LIB_0__::func_27(Local_195.f_94, 131072))
		{
			__LIB_4__::func_89(&(Local_195.f_59), 0);
		}
		if (__LIB_1__::func_675(1))
		{
			fVar0 = __LIB_8__::func_626(1);
			if (!__LIB_0__::func_27(Local_195.f_95, 1))
			{
				if (!__LIB_0__::func_27(Local_195.f_95, 4) && !__LIB_0__::func_481(1))
				{
					if (Local_195.f_86 == 0)
					{
						StringCopy(&cVar1, "FIHJ1_JVRHOOK01", 24);
						__LIB_2__::func_259(&(Local_195.f_65));
					}
					else if (Local_195.f_86 >= 1)
					{
						StringCopy(&cVar1, "FIHJ1_JVRHOOK02", 24);
						__LIB_2__::func_259(&(Local_195.f_65));
					}
					__LIB_1__::func_581(&(Local_195.f_95), 4);
				}
				if (!__LIB_1__::func_673(0) && !__LIB_0__::func_481(1))
				{
					__LIB_1__::func_104(&uLocal_36, cVar1, 0, -1, 0, 0);
				}
				__LIB_1__::func_581(&(Local_195.f_95), 1);
				__LIB_1__::func_681(&(Local_195.f_95), 8);
				__LIB_1__::func_681(&(Local_195.f_95), 2);
				__LIB_1__::func_681(&(Local_195.f_95), 16);
				__LIB_1__::func_681(&(Local_195.f_95), 64);
				__LIB_1__::func_681(&(Local_195.f_95), 32);
				__LIB_1__::func_681(&(Local_195.f_95), 128);
				__LIB_1__::func_681(&(Local_195.f_95), 32);
				__LIB_1__::func_681(&(Local_195.f_95), 128);
			}
			if (fVar0 > 0f)
			{
				if (!__LIB_0__::func_481(0))
				{
					if (!__LIB_0__::func_27(Local_195.f_95, 2))
					{
						if (__LIB_1__::func_583(&(Local_195.f_65)) > 0.5f)
						{
							if (!__LIB_0__::func_27(Local_195.f_95, 8))
							{
								if (Local_195.f_86 == 0)
								{
									StringCopy(&cVar1, "FIHJ1_JVRREEL01", 24);
									__LIB_2__::func_259(&(Local_195.f_65));
								}
								else if (Local_195.f_86 >= 1)
								{
									StringCopy(&cVar1, "FIHJ1_JVRREEL02", 24);
									__LIB_2__::func_259(&(Local_195.f_65));
								}
								__LIB_1__::func_581(&(Local_195.f_95), 8);
							}
							if (!__LIB_1__::func_673(0))
							{
								__LIB_1__::func_104(&uLocal_36, cVar1, 0, -1, 0, 0);
							}
							__LIB_1__::func_561(&(Local_195.f_65));
							__LIB_4__::func_89(&(Local_195.f_59), 0);
							__LIB_1__::func_581(&(Local_195.f_95), 2);
						}
					}
				}
			}
		}
		if (__LIB_8__::func_627(1))
		{
			if (!__LIB_0__::func_27(Local_195.f_95, 64))
			{
				if (!__LIB_0__::func_27(Local_195.f_95, 16) && !__LIB_0__::func_481(1))
				{
					StringCopy(&cVar1, "FIHJ1CMPES", 24);
					__LIB_2__::func_259(&(Local_195.f_65));
					__LIB_1__::func_581(&(Local_195.f_95), 16);
				}
				if (!__LIB_1__::func_673(0) && !__LIB_0__::func_481(1))
				{
					__LIB_1__::func_104(&uLocal_36, cVar1, 0, -1, 0, 0);
				}
				__LIB_1__::func_581(&(Local_195.f_95), 64);
				__LIB_1__::func_681(&(Local_195.f_95), 4);
				__LIB_1__::func_681(&(Local_195.f_95), 1);
			}
		}
		if (__LIB_1__::func_673(1))
		{
			if (!__LIB_0__::func_27(Local_195.f_95, 128))
			{
				if (!__LIB_0__::func_27(Local_195.f_95, 32) && !__LIB_0__::func_481(1))
				{
					StringCopy(&cVar1, "FIHJ1_JVRCTCH02", 24);
					__LIB_2__::func_259(&(Local_195.f_65));
					__LIB_1__::func_581(&(Local_195.f_95), 32);
				}
				if (!__LIB_1__::func_673(0) && !__LIB_0__::func_481(1))
				{
					__LIB_1__::func_104(&uLocal_36, cVar1, 0, -1, 0, 0);
				}
				__LIB_1__::func_581(&(Local_195.f_95), 128);
				__LIB_1__::func_681(&(Local_195.f_95), 4);
				__LIB_1__::func_681(&(Local_195.f_95), 1);
			}
			__LIB_1__::func_663(1, 1);
		}
		if (__LIB_0__::func_27(Local_195.f_95, 128) && (__LIB_12__::func_607(1) || __LIB_8__::func_610(1)))
		{
			if (!func_217("FIHJ1_JVRCAST02"))
			{
				StringCopy(&cVar1, "FIHJ1_JVRCAST02", 24);
				__LIB_2__::func_259(&(Local_195.f_65));
				if (!__LIB_1__::func_673(0) && !__LIB_0__::func_481(1))
				{
					__LIB_1__::func_104(&uLocal_36, cVar1, 0, -1, 0, 0);
					func_220("FIHJ1_JVRCAST02", 1);
				}
				__LIB_1__::func_581(&(Local_195.f_95), 128);
			}
		}
	}
}

void func_603(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam1, iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar1, false, iParam2, false))
		{
			sParam3 = __LIB_5__::func_555(iVar1);
		}
	}
	__LIB_1__::func_620(uParam0, iVar0, sParam3, iParam4, iParam5, 1);
}

char* func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAJAV_FSH1_MCS1";
		default:
			break;
	}
	return "FAIL";
}

void func_606()
{
	__LIB_10__::func_693(512);
	__LIB_8__::func_675(1024);
}

bool func_607(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4)
{
	int iVar0;
	__LIB_1__::func_534(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		func_984(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_156, false))
				{
					__LIB_6__::func_751(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
				{
					__LIB_8__::func_726(uParam4, 4);
					return false;
				}
				else if (__LIB_1__::func_503(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				__LIB_8__::func_726(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_158)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_1__::func_739(uParam4);
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
				__LIB_1__::func_743(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (__LIB_6__::func_724(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
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
					__LIB_6__::func_751(uParam4, &cParam0);
					__LIB_8__::func_726(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_990(uParam4);
			if (__LIB_1__::func_503(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_156, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_1__::func_541(uParam4, 1))
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
				func_984(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_1__::func_504(uParam4) - __LIB_1__::func_505(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_1__::func_540(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_1__::func_505(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_1__::func_506(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
				}
				__LIB_0__::func_488(uParam4);
				func_998(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_156);
						}
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_1__::func_477(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_1__::func_505(uParam4) <= 5000) && __LIB_1__::func_505(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_213), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_1__::func_505(uParam4) >= 5000 && __LIB_1__::func_505(uParam4) <= (__LIB_1__::func_504(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_1__::func_506(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				func_998(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_156))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_1__::func_503(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
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

void func_614()
{
	float fVar0;
	vector3 vVar1[24];
	int iVar4;
	if (__LIB_4__::func_149(0))
	{
		if (__LIB_1__::func_675(0))
		{
			if (__LIB_0__::func_27(Local_195.f_94, 2097152))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_1__::func_324("FISH01_O_FFSL");
				__LIB_1__::func_681(&(Local_195.f_94), 2097152);
			}
			fVar0 = __LIB_8__::func_626(0);
			if (!__LIB_0__::func_27(Local_195.f_94, 32) && !__LIB_0__::func_481(1))
			{
				if (Local_195.f_3 == 8 && Local_195.f_84 == 0)
				{
					StringCopy(&cVar1, "FIHJ1HOOK", 24);
					__LIB_2__::func_259(&(Local_195.f_62));
				}
				else if (Local_195.f_3 == 8 && Local_195.f_84 >= 1)
				{
					StringCopy(&cVar1, "FIHJ1HOOK2", 24);
					__LIB_2__::func_259(&(Local_195.f_62));
					func_220("FIHJ1_TRYAGN", 1);
				}
				iVar4 = __LIB_0__::func_309(Local_195.f_84, 0, 3);
				__LIB_1__::func_104(&uLocal_36, cVar1, 1, iVar4, 0, 0);
				__LIB_1__::func_681(&(Local_195.f_94), 128);
				__LIB_1__::func_681(&(Local_195.f_94), 256);
				__LIB_1__::func_681(&(Local_195.f_94), 64);
				__LIB_1__::func_581(&(Local_195.f_94), 32);
			}
			else if (fVar0 > 0f)
			{
				if (!__LIB_0__::func_481(1))
				{
					if (!__LIB_0__::func_27(Local_195.f_94, 64))
					{
						if (__LIB_1__::func_583(&(Local_195.f_62)) > 6f)
						{
							if (Local_195.f_3 == 8 && Local_195.f_84 == 0)
							{
								StringCopy(&cVar1, "FIHJ1REEL", 24);
							}
							else if (Local_195.f_3 == 8 && Local_195.f_84 >= 1)
							{
								StringCopy(&cVar1, "FIHJ1REEL2", 24);
							}
							iVar4 = __LIB_0__::func_309(Local_195.f_84, 0, 3);
							__LIB_1__::func_104(&uLocal_36, cVar1, 1, iVar4, 0, 0);
							__LIB_1__::func_561(&(Local_195.f_62));
							__LIB_1__::func_581(&(Local_195.f_94), 64);
						}
					}
				}
			}
		}
		if (__LIB_8__::func_627(0))
		{
			if (!__LIB_0__::func_27(Local_195.f_94, 128))
			{
				if (Local_195.f_3 == 8 && Local_195.f_84 == 0)
				{
					StringCopy(&cVar1, "FIHJ1ESC", 24);
				}
				else if (Local_195.f_3 == 8 && Local_195.f_84 >= 1)
				{
					StringCopy(&cVar1, "FIHJ1ESC2", 24);
				}
				__LIB_1__::func_681(&(Local_195.f_94), 32);
				__LIB_1__::func_681(&(Local_195.f_94), 64);
				if (!__LIB_0__::func_481(1))
				{
					__LIB_1__::func_104(&uLocal_36, cVar1, 0, -1, 0, 0);
				}
				__LIB_1__::func_581(&(Local_195.f_94), 128);
			}
		}
		if (__LIB_1__::func_673(0))
		{
			if (!__LIB_0__::func_27(Local_195.f_94, 256) && !__LIB_0__::func_481(1))
			{
				if (Local_195.f_3 == 8 && Local_195.f_84 == 0)
				{
					StringCopy(&cVar1, "FIHJ1CHT", 24);
				}
				else if (Local_195.f_3 == 8 && Local_195.f_84 >= 1)
				{
					StringCopy(&cVar1, "FIHJ1_CHT3", 24);
				}
				__LIB_1__::func_681(&(Local_195.f_94), 32);
				__LIB_1__::func_681(&(Local_195.f_94), 64);
				__LIB_1__::func_104(&uLocal_36, cVar1, 0, -1, 0, 0);
				Local_195.f_85 = __LIB_8__::func_611(0);
				__LIB_1__::func_581(&(Local_195.f_94), 256);
			}
			else if (__LIB_0__::func_27(Local_195.f_94, 256))
			{
				if (__LIB_1__::func_676(0))
				{
					if (!__LIB_0__::func_481(1) && !func_217("FIHJ1_ARTCATCH"))
					{
						StringCopy(&cVar1, "FIHJ1_ARTCATCH", 24);
						__LIB_1__::func_104(&uLocal_36, cVar1, 0, -1, 0, 0);
						func_220("FIHJ1_ARTCATCH", 1);
					}
				}
				else if (__LIB_1__::func_677(0))
				{
					if (!__LIB_0__::func_481(1) && !func_217("FIHJ1_ARTRELEAS"))
					{
						StringCopy(&cVar1, "FIHJ1_ARTRELEAS", 24);
						__LIB_1__::func_104(&uLocal_36, cVar1, 0, -1, 0, 0);
						func_220("FIHJ1_ARTRELEAS", 1);
					}
				}
			}
		}
	}
}

void func_615(var uParam0)
{
	vector3 vVar0[24];
	char cVar3[128];
	bool bVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_27(Local_195.f_94, 262144))
	{
		bVar19 = (func_595(0) && __LIB_8__::func_609(0) == joaat("UPGRADE_FSH_BAIT_CRICKET"));
		func_63(0, (__LIB_0__::func_481(1) || bVar19 == 0));
		func_63(1, __LIB_0__::func_481(1));
	}
	switch (Local_195.f_5)
	{
		case 0:
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			iLocal_193 = 0;
			if (__LIB_4__::func_149(0) && __LIB_1__::func_655(0))
			{
				if (HUD::_TEXT_DATABASE_HAS_LOADED("MGFSH"))
				{
					__LIB_0__::func_565("MGFSH_REEL_OBJ", 8000, 0, 0, 0, 1);
					__LIB_1__::func_324("MGFSH_REEL_OBJ");
					func_560();
					func_579(&(Local_195.f_5), 1);
				}
			}
			else if (__LIB_4__::func_149(0) && !__LIB_1__::func_655(0))
			{
				func_560();
				func_579(&(Local_195.f_5), 1);
			}
			break;
		case 1:
			if (__LIB_4__::func_149(0) && !__LIB_1__::func_655(0))
			{
				__LIB_1__::func_658(0);
				__LIB_1__::func_646(1);
				__LIB_1__::func_667(0);
				__LIB_1__::func_666(1);
				__LIB_1__::func_561(&(Local_195.f_38));
				func_579(&(Local_195.f_5), 2);
			}
			else if (__LIB_4__::func_149(0) && __LIB_1__::func_655(0))
			{
				__LIB_4__::func_89(&(Local_195.f_56), 0);
				if ((__LIB_3__::func_514(&(Local_195.f_56), 6f) && HUD::_TEXT_DATABASE_HAS_LOADED("MGFSH")) && !func_217("MGFSH_REEL_OBJ"))
				{
					__LIB_0__::func_565("MGFSH_REEL_OBJ", -1, 0, 0, 0, 1);
					func_220("MGFSH_REEL_OBJ", 1);
					__LIB_1__::func_324("MGFSH_REEL_OBJ");
				}
			}
			break;
		case 2:
			if (func_595(0) && __LIB_8__::func_609(0) == joaat("UPGRADE_FSH_BAIT_CRICKET"))
			{
				if (__LIB_1__::func_588("FISH01_O_QBAIT", 0, 0, -1, -1, 0))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				__LIB_1__::func_324("FISH01_O_FFSL");
				__LIB_2__::func_259(&(Local_195.f_50));
				func_579(&(Local_195.f_5), 3);
			}
			else
			{
				if (!__LIB_0__::func_481(1))
				{
					__LIB_4__::func_89(&(Local_195.f_38), 0);
				}
				if (((__LIB_3__::func_514(&(Local_195.f_38), 7f) && !__LIB_0__::func_481(1)) && !func_217("FIHJ1_EQUIP_CRK")) && __LIB_11__::func_349(&uLocal_36, "FIHJ1_EQUIP_CRK", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					__LIB_1__::func_561(&(Local_195.f_38));
					func_220("FIHJ1_EQUIP_CRK", 1);
				}
			}
			if (!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0) || !__LIB_1__::func_647())
			{
				func_579(&(Local_195.f_5), 10);
			}
			break;
		case 3:
			__LIB_4__::func_89(&(Local_195.f_56), 0);
			if (__LIB_3__::func_514(&(Local_195.f_56), 6f) || __LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				if (!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0))
				{
					__LIB_1__::func_422("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				else
				{
					__LIB_1__::func_324("FISH01_O_GFISH");
				}
				func_579(&(Local_195.f_5), 4);
			}
			break;
		case 4:
			if (__LIB_1__::func_655(0))
			{
				__LIB_1__::func_561(&(Local_195.f_38));
				if (!func_217("FIHJ1_REM2"))
				{
					func_579(&(Local_195.f_5), 8);
				}
				else if (!func_217("FIHJ1_LEGENDSM"))
				{
					func_579(&(Local_195.f_5), 9);
				}
				else
				{
					func_579(&(Local_195.f_5), 10);
				}
			}
			if (__LIB_1__::func_588("FISH01_O_FFSL", 0, 0, -1, -1, 0) && __LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0))
			{
				__LIB_1__::func_324("FISH01_O_GFISH");
			}
			if (!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0) || !__LIB_1__::func_647())
			{
				func_579(&(Local_195.f_5), 10);
			}
			break;
		case 5:
			if (__LIB_1__::func_655(0) || (__LIB_4__::func_149(0) && !__LIB_1__::func_655(0)))
			{
				if (Local_195.f_84 > 1)
				{
					func_220("FIHJ1_TRYAGN", 1);
				}
				if (!__LIB_0__::func_481(1) && (!__LIB_1__::func_675(0) && !__LIB_1__::func_673(0)))
				{
					__LIB_4__::func_89(&(Local_195.f_56), 0);
					if (__LIB_3__::func_514(&(Local_195.f_56), 1.3f))
					{
						if (!func_217("FIHJ1_TRYAGN"))
						{
							StringCopy(&cVar0, "FIHJ1_TRYAGN", 24);
							iVar20 = __LIB_0__::func_23();
							iVar21 = __LIB_0__::func_41(iVar20);
							if (iVar21 > 16)
							{
								StringCopy(&cVar0, "FIHJ1_MIDEVNING", 24);
							}
							else if (iVar21 < 12)
							{
								StringCopy(&cVar0, "FIHJ1_MIDMORN", 24);
							}
							__LIB_1__::func_104(&uLocal_36, cVar0, 0, -1, 0, 0);
							func_220("FIHJ1_TRYAGN", 1);
						}
						__LIB_1__::func_324("FISH01_O_QBAIT");
						func_579(&(Local_195.f_5), 6);
					}
				}
			}
			break;
		case 6:
			if ((!__LIB_1__::func_322("FIHJ1_TRYAGN") && !__LIB_1__::func_322("FIHJ1_MIDMORN")) && !__LIB_1__::func_322("FIHJ1_MIDEVNING"))
			{
				__LIB_3__::func_741("FISH01_O_QBAIT", 5000, 0, 0, 1);
				__LIB_1__::func_324("FISH01_O_QBAIT");
				__LIB_18__::func_168(0);
				func_579(&(Local_195.f_5), 2);
			}
			break;
		case 8:
			if (!__LIB_0__::func_481(1))
			{
				if (!__LIB_0__::func_899(&(Local_195.f_38)))
				{
					__LIB_2__::func_259(&(Local_195.f_50));
				}
				__LIB_4__::func_89(&(Local_195.f_38), 0);
			}
			if (((!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0) || !__LIB_1__::func_647()) || func_217("FIHJ1_REM2")) || ((__LIB_3__::func_514(&(Local_195.f_38), 15.75f) && func_1005()) && __LIB_11__::func_349(&uLocal_36, "FIHJ1_REM2", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1)))
			{
				if (__LIB_1__::func_322("FIHJ1_REM2"))
				{
					func_220("FIHJ1_REM2", 1);
				}
				__LIB_1__::func_561(&(Local_195.f_38));
				if (!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0) || !__LIB_1__::func_647())
				{
					func_579(&(Local_195.f_5), 10);
				}
				else
				{
					func_579(&(Local_195.f_5), 9);
				}
			}
			break;
		case 9:
			if (!__LIB_0__::func_481(1))
			{
				if (!__LIB_0__::func_899(&(Local_195.f_38)))
				{
					__LIB_2__::func_259(&(Local_195.f_50));
				}
				__LIB_4__::func_89(&(Local_195.f_38), 0);
			}
			if (((!__LIB_1__::func_205(Global_35, Local_195.f_356, 1, 0) || !__LIB_1__::func_647()) || func_217("FIHJ1_LEGENDSM")) || ((__LIB_3__::func_514(&(Local_195.f_38), 20f) && func_1005()) && __LIB_11__::func_349(&uLocal_36, "FIHJ1_LEGENDSM", __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1)))
			{
				if (__LIB_1__::func_322("FIHJ1_LEGENDSM"))
				{
					func_220("FIHJ1_LEGENDSM", 1);
				}
				__LIB_1__::func_561(&(Local_195.f_38));
				func_579(&(Local_195.f_5), 10);
			}
			break;
		case 10:
			if (func_949())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_1__::func_337()) && MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
				{
					StringCopy(&cVar3, __LIB_1__::func_337(), 128);
					sLocal_141 = __LIB_1__::func_569(cVar3);
					__LIB_0__::func_769();
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
			{
				__LIB_1__::func_324(sLocal_141);
				sLocal_141 = "";
			}
			if ((!__LIB_1__::func_205(Global_35, Local_195.f_354, 1, 0) || !__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0)) || !__LIB_1__::func_647())
			{
				if (!__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
				{
					if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
					{
						MAP::REMOVE_BLIP(&(Local_195.f_90));
					}
					Local_195.f_90 = MAP::_0xA6EF0C54A3443E70(408396114, Local_195.f_355);
					__LIB_1__::func_646(0);
					__LIB_1__::func_666(0);
					__LIB_1__::func_667(0);
					__LIB_1__::func_658(1);
				}
				else
				{
					__LIB_1__::func_646(1);
					__LIB_1__::func_666(0);
					__LIB_1__::func_667(1);
					__LIB_1__::func_658(0);
				}
				__LIB_1__::func_324("FISH01_O_FFSL");
				__LIB_1__::func_581(&(Local_195.f_94), 16);
				__LIB_2__::func_259(&(Local_195.f_56));
				func_579(&(Local_195.f_5), 11);
			}
			if (__LIB_8__::func_609(0) == joaat("UPGRADE_FSH_BAIT_CRICKET") && __LIB_8__::func_955(__LIB_8__::func_609(0)))
			{
				if (__LIB_0__::func_27(Local_195.f_94, 4))
				{
					__LIB_1__::func_681(&(Local_195.f_94), 4);
				}
				__LIB_1__::func_666(0);
			}
			break;
		case 11:
			if (!__LIB_1__::func_205(Global_35, Local_195.f_354, 1, 0))
			{
				__LIB_4__::func_89(&(Local_195.f_56), 0);
				if (__LIB_3__::func_514(&(Local_195.f_56), 1f))
				{
					__LIB_1__::func_422("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_579(&(Local_195.f_5), 20);
				}
			}
			else if (!__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				__LIB_4__::func_89(&(Local_195.f_56), 0);
				if (__LIB_3__::func_514(&(Local_195.f_56), 3f))
				{
					__LIB_1__::func_422("FISH01_O_FFSL", 10000, 0, 1, 0, 0, -1, -1, 0);
					func_579(&(Local_195.f_5), 12);
				}
			}
			else if (!__LIB_1__::func_647())
			{
				__LIB_1__::func_658(0);
				__LIB_1__::func_646(1);
				__LIB_1__::func_667(0);
				__LIB_1__::func_666(1);
				func_579(&(Local_195.f_5), 13);
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 1);
			}
			break;
		case 12:
			if (!__LIB_1__::func_205(Global_35, Local_195.f_354, 1, 0))
			{
				__LIB_1__::func_422("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_579(&(Local_195.f_5), 20);
			}
			else if (__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 1);
			}
			break;
		case 13:
			if (__LIB_1__::func_647())
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 1);
			}
			if (!__LIB_1__::func_205(Global_35, Local_195.f_355, 1, 0))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				func_579(&(Local_195.f_5), 10);
			}
			break;
		case 20:
			if (__LIB_1__::func_205(Global_35, Local_195.f_354, 1, 0))
			{
				func_579(&(Local_195.f_5), 11);
			}
			else if (iLocal_193 < 3)
			{
				if (!__LIB_0__::func_481(1))
				{
					__LIB_4__::func_89(&(Local_195.f_38), 0);
				}
				StringCopy(&cVar0, "FIHJ1_ABANDON1", 24);
				if (iLocal_193 == 1)
				{
					StringCopy(&cVar0, "FIHJ1_ABANDON2", 24);
				}
				else if (iLocal_193 == 2)
				{
					StringCopy(&cVar0, "FIHJ1_ABANDON3", 24);
				}
				if (__LIB_3__::func_601(&(Local_195.f_38), __LIB_0__::func_514(iLocal_193 == 0, 3.6f, 9.8f)) && !__LIB_0__::func_481(1))
				{
					if (__LIB_11__::func_349(&uLocal_36, &cVar0, __LIB_0__::func_271(uParam0->f_2), Global_35, 0, 0, 1, 1))
					{
						iLocal_193++;
						__LIB_1__::func_561(&(Local_195.f_38));
					}
				}
			}
			break;
		case 51:
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

bool func_619(int iParam0)
{
	return __LIB_1__::func_672(iParam0, 65536);
}

void func_620(var uParam0)
{
	switch (Local_195.f_5)
	{
		case 0:
			__LIB_1__::func_324("FISH01_O_ASK");
			func_579(&(Local_195.f_5), 1);
			break;
		case 1:
			__LIB_4__::func_89(&(Local_195.f_56), 0);
			if ((__LIB_0__::func_27(Local_195.f_95, 512) || __LIB_0__::func_27(Local_195.f_95, 1024)) || __LIB_3__::func_514(&(Local_195.f_56), 15f))
			{
				if (!(__LIB_0__::func_27(Local_195.f_95, 512) || __LIB_0__::func_27(Local_195.f_95, 1024)))
				{
					__LIB_1__::func_422("FISH01_O_ASK", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				func_579(&(Local_195.f_5), 51);
			}
			break;
		case 51:
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

void func_622(int iParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_18__::func_162(iParam0, 2);
	if (iParam1 == 1 && iParam0 != 0)
	{
		__LIB_18__::func_162(iParam0, 512);
	}
	else
	{
		__LIB_8__::func_674(iParam0, 512);
	}
	if (iParam2 == 1 && iParam0 != 0)
	{
		__LIB_18__::func_162(iParam0, 1024);
	}
	else
	{
		__LIB_8__::func_674(iParam0, 1024);
	}
	if (iParam3 == 1 && iParam0 != 0)
	{
		__LIB_18__::func_162(iParam0, 4096);
	}
	else
	{
		__LIB_8__::func_674(iParam0, 4096);
	}
}

void func_623(bool bParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	if (!__LIB_0__::func_27(Local_195.f_95, 4096))
	{
		vVar0 = { func_532(3, 7) };
		fVar3 = func_558(3, 7);
		vVar4 = { func_532(3, 6) };
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1564);
		if (!__LIB_0__::func_71(Local_195.f_37))
		{
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_28, -1, -1, (1f + 0.25f), 1, 0, 0);
		}
		if (bParam0)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_136, 0, 25708, -1, 0, 0, -1);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_4(0, 1.501f, vVar4, 0);
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, (1f + 0.5f), -1, 5f, 0, fVar3);
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar0, 3f, 0, false, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1564);
		TASK::TASK_PERFORM_SEQUENCE(Local_195.f_37, iLocal_1564);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1564);
		PED::SET_PED_KEEP_TASK(Local_195.f_37, true);
		__LIB_1__::func_581(&(Local_195.f_95), 4096);
	}
}

struct<4> func_625(int iParam0, int iParam1)
{
	return func_1007(iParam0, iParam1);
}

void func_626(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_637(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_628()
{
	if (iLocal_1647 > 1 && iLocal_1647 < 5)
	{
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	}
	switch (iLocal_1647)
	{
		case 0:
			__LIB_1__::func_570("script@tripskip@Fishing1_Shot1_srl");
			func_1009();
			__LIB_1__::func_649(&iLocal_1647, 1);
			break;
		case 1:
			if (!CAM::_0xDD0B7C5AE58F721D(sLocal_1625))
			{
			}
			if (CAM::_0xDD0B7C5AE58F721D(sLocal_1625))
			{
				POPULATION::_0xC6DCC2A3A8825C85(1);
				__LIB_1__::func_570("script@tripskip@Fishing1_Shot2_srl");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				HUD::_HIDE_HUD_COMPONENT(724769646);
				func_626(iLocal_28, func_625(2, 11), 2, 1073741824 /* Float: 2f */);
				func_626(iLocal_27, func_625(2, 10), 2, 1073741824 /* Float: 2f */);
				PED::_0x2208438012482A1A(iLocal_28, false, false);
				__LIB_1__::func_571(Global_35, iLocal_27, 0, -1, 1);
				__LIB_1__::func_571(Local_195.f_37, iLocal_28, 0, -1, 1);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_195.f_37, sLocal_135, 0, 25708, -1, 0, 0, -1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, sLocal_135, 0, 25708, -1, 0, 0, -1);
				__LIB_1__::func_572(func_532(2, 16), 100f, 0, 0, 0, 0, 0);
				__LIB_0__::func_568(func_532(2, 16), 100f, 0);
				STREAMING::_0x513F8AA5BF2F17CF(func_532(2, 13), 60f, 1);
				CAM::DESTROY_CAM(iLocal_1563, false);
				AUDIO::_0x5E3CCF03995388B5(1960118912, func_532(2, 11));
				CAM::_0xBC016635D6A73B31(sLocal_1625, "SHOT1", 5);
				__LIB_2__::func_259(&uLocal_1626);
				__LIB_1__::func_649(&iLocal_1647, 2);
			}
			break;
		case 2:
			func_1014(2f, 2f);
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7(sLocal_1625, "SHOT1", 5) - __LIB_1__::func_592(&uLocal_1626)), 1253167713, func_532(2, 13), STREAMING::IS_SRL_LOADED(), 2147483647))
			{
				func_626(iLocal_28, func_625(2, 13), 2, 1073741824 /* Float: 2f */);
				func_626(iLocal_27, func_625(2, 12), 2, 1073741824 /* Float: 2f */);
				__LIB_1__::func_571(Global_35, iLocal_27, 0, -1, 1);
				__LIB_1__::func_571(Local_195.f_37, iLocal_28, 0, -1, 1);
				func_1016();
				func_623(1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, sLocal_136, 0, 25708, -1, 0, 0, -1);
				CAM::_0xA54D643D0773EB65(sLocal_1625, "SHOT1", 5);
				CAM::_0xBC016635D6A73B31(sLocal_1625, "SHOT2", 5);
				__LIB_2__::func_259(&uLocal_1626);
				__LIB_1__::func_649(&iLocal_1647, 3);
			}
			break;
		case 3:
			func_1014(1.501f, 1.501f);
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7(sLocal_1625, "SHOT2", 5) - __LIB_1__::func_592(&uLocal_1626)), -1, 787.8481f, -1117.704f, 49.42791f, true, 2147483647))
			{
				CAM::_0xB8B207C34285E978(&Local_1631);
				__LIB_2__::func_259(&uLocal_1626);
				__LIB_1__::func_649(&iLocal_1647, 4);
			}
			break;
		case 4:
			func_1014(1.501f, 1.501f);
			if (__LIB_3__::func_514(&uLocal_1626, 1f))
			{
				POPULATION::_0xBC90BDF4E5228EA1();
				STREAMING::END_SRL();
				AUDIO::_0x43037ABFE214A851();
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				CAM::_0x2412216FCC7B4E3E(sLocal_1625);
				CAM::_0x798BE43C9393632B(&Local_1631);
				CAM::_0x0A5A4F1979ABB40E(&Local_1631);
				__LIB_2__::func_259(&uLocal_1626);
				__LIB_1__::func_649(&iLocal_1647, 5);
			}
			break;
		case 5:
			func_1014(1.501f, 1.501f);
			if (__LIB_3__::func_514(&uLocal_1626, 0.5f))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.501f, 2000, ENTITY::GET_ENTITY_HEADING(Global_35), false, false);
				func_623(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				__LIB_1__::func_649(&iLocal_1647, 6);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_637(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_637(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_637(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_648(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (bLocal_14)
	{
		bLocal_14 = false;
		HUD::_TEXT_DATABASE_REQUEST(sLocal_34);
		iLocal_35 = 0;
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED(sLocal_34) == 0)
	{
		bVar0 = false;
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		PED::_0xAE6004120C18DF97(__LIB_0__::func_271(uParam0->f_2), 0, 0);
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	__LIB_4__::func_89(&uLocal_23, 0);
	__LIB_1__::func_600(0);
	__LIB_0__::func_928(&uLocal_36, Global_35, "ARTHUR", 0);
	__LIB_0__::func_928(&uLocal_36, __LIB_0__::func_271(uParam0->f_2), __LIB_0__::func_781(uParam0->f_2), 0);
	return true;
}

int func_650(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_1041(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

Vector3 func_651()
{
	switch (__LIB_0__::func_317())
	{
		case 1:
			return -112.3384f, -14.3773f, 94.8194f;
		case 2:
			return 662.6482f, -1230.246f, 43.4672f;
	}
	return 0f, 0f, 0f;
}

int func_653(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_650(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

void func_655()
{
	if (__LIB_0__::func_94(iLocal_27, func_532(3, 4), 1) > 15f)
	{
		func_626(iLocal_27, func_625(3, 4), 2, 1073741824 /* Float: 2f */);
	}
}

void func_656()
{
	__LIB_18__::func_375(&(uLocal_1565[2]), 1189.868f, -589.7604f, 67.85253f, 0f, 0f, -34.12126f, 34.67387f, 31.40111f, 14.95374f, "Fishing Area", 0, 0);
	__LIB_18__::func_375(&(uLocal_1565[1]), 1183.616f, -580.1835f, 67.68938f, 0f, 0f, -14.52683f, 5.676475f, 7.107867f, 3.392037f, "Player Rock/Fish Area", 0, 0);
	__LIB_18__::func_375(&(uLocal_1565[0]), 1184.388f, -583.2227f, 72.31178f, 0f, 0f, -58.59084f, 47.73118f, 40.17714f, 27.84984f, "Player Fish Dismount Area", 0, 0);
}

bool func_657(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	switch (uParam0->f_7)
	{
		case 0:
			return func_1071(uParam0);
		case 1:
			return func_1072(uParam0);
		case 2:
			return func_1073(uParam0);
		case 3:
			return func_1074(uParam0);
		case 4:
			return func_1075(uParam0);
		case 5:
			return func_1076(uParam0);
		case 6:
			return func_1077(uParam0);
		default:
			break;
	}
	return true;
}

int func_665(int iParam0, int iParam1)
{
	var uVar0;
	return func_1080(&uVar0, iParam0, iParam1);
}

void func_840(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_143(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1204(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_146(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_446(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1209(Var0);
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

void func_843(bool bParam0)
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
		func_143(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_446(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_446(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_446(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_446(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_446(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_446(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_446(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_446(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_446(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_446(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_446(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_889(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_889(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_889(iVar63, -915411861, 1, 0, 0));
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

int func_904()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1244(8);
		}
	}
	return 0;
}

bool func_905(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1245(iParam0));
}

Vector3 func_921(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -108.3568f, -15.6171f, 94.8505f;
				case 1:
					return -95.5762f, -14.1243f, 94.6515f;
				case 2:
					return 680.4623f, -1221.427f, 43.9875f;
				case 3:
					return 681.7044f, -1217.882f, 44.2152f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1150.917f, -568.7803f, 77.313f;
				case 1:
					return 1152.86f, -574.4587f, 78.5386f;
				case 2:
					return 1176.209f, -580.1877f, 69.2677f;
				case 3:
					return 1179.079f, -581.7966f, 67.7924f;
				case 4:
					return 1182.354f, -580.723f, 67.0964f;
				case 5:
					return 1184.316f, -594.7933f, 68.3869f;
				case 6:
					return 1185.089f, -595.3312f, 68.0589f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1150.766f, -569.3737f, 77.6678f;
				case 1:
					return 1162.385f, -577.0369f, 76.0753f;
				case 2:
					return 1175.757f, -581.8738f, 69.2246f;
				case 3:
					return 1182.496f, -580.8946f, 67.0303f;
				case 4:
					return 1185.089f, -595.3312f, 68.0589f;
				case 5:
					return 1176.272f, -582.6965f, 68.7668f;
				case 6:
					return 1163.573f, -578.1478f, 75.2313f;
				case 7:
					return 1097.895f, -585.5579f, 89.2839f;
				case 8:
					return 1174.885f, -580.5032f, 70.8415f;
				case 9:
					return 1173.124f, -580.6735f, 71.6362f;
				case 10:
					return 1137f, -603.4f, 83.9f;
				case 11:
					return 1136f, -607.6f, 85.4f;
				case 12:
					return 795.1f, -1085.5f, 49.2f;
				case 13:
					return 795.9f, -1092.4f, 49.1f;
				case 14:
					return 755.0931f, -1191.137f, 43.7034f;
				case 15:
					return 750.2631f, -1190.962f, 43.7675f;
				case 16:
					return 1137.137f, -645.2842f, 87.8167f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -115.3411f, -18.6639f, 94.9392f;
				case 1:
					return -113.6571f, -15.0543f, 94.8969f;
				case 2:
					return -108.3824f, -17.9594f, 94.8904f;
				case 3:
					return -109.2995f, -22.1023f, 94.7682f;
				case 4:
					return 661.4152f, -1229.124f, 43.372f;
				case 5:
					return 674.713f, -1220.37f, 44.109f;
				case 6:
					return 664.2993f, -1229.623f, 43.3788f;
				case 7:
					return 674.277f, -1222.26f, 43.9272f;
				case 8:
					return 676.1924f, -1227.299f, 43.6122f;
				case 9:
					return 682.881f, -1230.918f, 44.3515f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 675.3544f, -1217.752f, 44.5789f;
				case 1:
					return 676.8029f, -1218.12f, 44.2704f;
				case 2:
					return 674.0723f, -1218.424f, 44.5562f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_922(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam1);
	}
	else
	{
		AUDIO::_0x660A8F876DF1D4F8(14);
		AUDIO::_0x660A8F876DF1D4F8(19);
	}
}

void func_929(var uParam0)
{
	__LIB_1__::func_772(&(uParam0->f_96), Global_35, "ARTHUR", 0, 0, 0);
	__LIB_1__::func_772(&(uParam0->f_96), Local_195.f_37, "JavierEscuella", 0, 0, 0);
	__LIB_0__::func_88(&(uParam0->f_96), 65536);
	__LIB_7__::func_911(&(uParam0->f_96), 243429);
}

float func_932(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -82.8f;
				case 1:
					return -59.76f;
				case 2:
					return 313.5827f;
				case 3:
					return 307.3372f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -109.2011f;
				case 1:
					return -164.4883f;
				case 2:
					return 262.8872f;
				case 3:
					return 280.7184f;
				case 4:
					return 251.5964f;
				case 5:
					return 249.3134f;
				case 6:
					return 265.3134f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 97.075f;
				case 1:
					return -34.4883f;
				case 2:
					return 67.0164f;
				case 3:
					return 246.3689f;
				case 4:
					return 265.3134f;
				case 5:
					return 290.8814f;
				case 6:
					return 32.8422f;
				case 7:
					return 85.041f;
				case 8:
					return 69.075f;
				case 9:
					return 73.5117f;
				case 10:
					return 167.1f;
				case 11:
					return 167.1f;
				case 12:
					return -166.9f;
				case 13:
					return -166.9f;
				case 14:
					return 97.075f;
				case 15:
					return 125.5117f;
				case 16:
					return 222.0715f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 71.5988f;
				case 1:
					return 56.7003f;
				case 2:
					return 59.76f;
				case 3:
					return 62.64f;
				case 4:
					return 208.9985f;
				case 5:
					return 162.272f;
				case 6:
					return 163.7694f;
				case 7:
					return 170.475f;
				case 8:
					return 6.9474f;
				case 9:
					return 366.248f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 180.1252f;
				case 1:
					return 200.1252f;
				case 2:
					return -179.1097f;
			}
			break;
	}
	return 0f;
}

void func_934(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, float fParam5, int iParam6)
{
	if ((__LIB_0__::func_139(*iParam1) && __LIB_0__::func_139(*iParam2)) || !ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
	PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), true);
	__LIB_1__::func_573(*uParam0, "", fParam5, 0, 0, iParam6);
	PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), 130, true);
	PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), 315, true);
	PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), 297, true);
	if (!__LIB_0__::func_139(*iParam1))
	{
		*iParam1 = __LIB_2__::func_403(sParam3, joaat("INPUT_INTERACT_LOCKON_POS"), *uParam0, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_1__::func_574(iParam1, *uParam0);
	}
	if (!__LIB_0__::func_139(*iParam2))
	{
		*iParam2 = __LIB_2__::func_403(sParam4, joaat("INPUT_INTERACT_LOCKON_NEG"), *uParam0, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_1__::func_574(iParam2, *uParam0);
	}
	if (__LIB_0__::func_139(*iParam1))
	{
		__LIB_6__::func_697(*iParam2, 0, 1);
		__LIB_1__::func_382(*iParam1, 1, 1);
		__LIB_1__::func_221(*iParam1, 1, 1);
	}
	if (__LIB_0__::func_139(*iParam2))
	{
		__LIB_6__::func_697(*iParam2, 0, 1);
		__LIB_1__::func_382(*iParam2, 1, 1);
		__LIB_1__::func_221(*iParam2, 1, 1);
	}
}

bool func_949()
{
	return __LIB_1__::func_662(2048);
}

void func_984(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_156, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_213, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_1__::func_540(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_156))
	{
		if (!__LIB_0__::func_1(uParam0->f_213, 128))
		{
			__LIB_1__::func_625();
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
	if (__LIB_0__::func_1(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_156);
		__LIB_1__::func_625();
	}
}

void func_990(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_212, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_1__::func_518(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_212, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_224));
		}
		func_1319(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_1__::func_519(uParam0, 0f, 0f, 0f);
		func_1321(uParam0);
		func_1322(uParam0);
		__LIB_1__::func_577(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_1__::func_596(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_225)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_225));
		}
	}
}

void func_998(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_213), uParam0->f_224);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_1__::func_597(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_1__::func_594(uParam0);
	__LIB_1__::func_520(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_1__::func_521(uParam0, 4);
	__LIB_1__::func_595(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_1__::func_476(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_213, 128));
	if (!__LIB_0__::func_1(uParam0->f_213, 128))
	{
		__LIB_1__::func_625();
	}
}

bool func_1005()
{
	if (__LIB_0__::func_481(1))
	{
		return false;
	}
	if (!__LIB_4__::func_149(0) || (__LIB_4__::func_149(0) && __LIB_1__::func_655(0)))
	{
		return true;
	}
	return false;
}

struct<4> func_1007(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_921(iParam0, iParam1) };
	Var0.f_3 = func_932(iParam0, iParam1);
	return Var0;
}

void func_1009()
{
	if (iLocal_1630 == 0)
	{
		sLocal_1625 = "script@Cinematics@TripSkip@Fishing1";
		CAM::_0x1B3C2D961F5FC0E1(sLocal_1625);
		StringCopy(&Local_1631, "camera_treatments", 64);
		StringCopy(&(Local_1631.f_8), "GENERIC_CME_PUSH_IN_TREATMENT_REQUEST", 64);
		CAM::_0x6A4D224FC7643941(&Local_1631);
		iLocal_1630 = 1;
	}
}

void func_1014(float fParam0, float fParam1)
{
	if (__LIB_0__::func_272(Local_195.f_37, 0) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_195.f_37, 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_195.f_37, fParam0, 0, -1f, 0);
	}
	if (__LIB_0__::func_272(Global_35, 0) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, fParam1, 0, -1f, 0);
	}
}

void func_1016()
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_195.f_37, false, true);
}

int func_1041(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				func_637(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_1071(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = __LIB_1__::func_854(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (__LIB_0__::func_272(iLocal_28, 0) == 0)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (__LIB_1__::func_678(func_532(3, 5)) == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_626(Global_35, func_625(3, 5), 2, 1073741824 /* Float: 2f */);
		__LIB_0__::func_489(0, 0);
	}
	if (__LIB_0__::func_272(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(3, 4), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(3, 6), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(__LIB_0__::func_271(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(__LIB_0__::func_271(uParam0->f_2), true, false);
		}
		func_626(__LIB_0__::func_271(uParam0->f_2), func_625(3, 7), 2, 1073741824 /* Float: 2f */);
	}
	if (!__LIB_1__::func_533(1073741824 /* Float: 2f */))
	{
		return 0;
	}
	iLocal_15 = 1;
	iLocal_16 = 1;
	__LIB_6__::func_767();
	func_922(&Local_195, 1);
	__LIB_0__::func_19(&(Local_195.f_6), 0);
	func_236(&(Local_195.f_3), 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_6__::func_813(uParam0, func_234(0), func_234(1), 0, 1);
	return 1;
}

int func_1072(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = __LIB_1__::func_854(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (__LIB_0__::func_272(iLocal_28, 0) == 0)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (__LIB_1__::func_678(func_532(0, 2)) == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_272(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(0, 2), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(0, 3), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (__LIB_0__::func_272(iLocal_27, 0))
		{
			PED::_SET_PED_ON_MOUNT(Global_35, iLocal_27, -1, true);
			__LIB_0__::func_489(0, 0);
		}
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		if (__LIB_0__::func_272(iLocal_28, 0))
		{
			PED::_SET_PED_ON_MOUNT(__LIB_0__::func_271(uParam0->f_2), iLocal_28, -1, true);
		}
	}
	__LIB_0__::func_900(2);
	__LIB_0__::func_19(&(Local_195.f_6), 8);
	func_236(&(Local_195.f_3), 2);
	__LIB_0__::func_489(0, 0);
	func_536(&Local_195, 1);
	__LIB_6__::func_767();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_6__::func_813(uParam0, func_234(1), func_234(2), 1, 2);
	return 1;
}

int func_1073(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = __LIB_1__::func_854(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (__LIB_0__::func_272(iLocal_28, 0) == 0)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (__LIB_1__::func_678(func_532(1, 2)) == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_637(Global_35, 1158.692f, -574.4988f, 76.6756f, 241.7831f, 2, 1073741824 /* Float: 2f */);
		__LIB_0__::func_489(0, 0);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(__LIB_0__::func_271(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(__LIB_0__::func_271(uParam0->f_2), true, false);
		}
		func_637(__LIB_0__::func_271(uParam0->f_2), 1159.571f, -576.0067f, 76.4621f, 266.946f, 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(1, 0), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(1, 1), 2, 1073741824 /* Float: 2f */);
	}
	__LIB_0__::func_19(&(Local_195.f_6), 17);
	func_236(&(Local_195.f_3), 3);
	__LIB_6__::func_767();
	func_922(&Local_195, 1);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_6__::func_813(uParam0, func_234(2), func_234(3), 2, 3);
	return 1;
}

int func_1074(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = __LIB_1__::func_854(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (__LIB_0__::func_272(iLocal_28, 0) == 0)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (__LIB_1__::func_678(func_532(1, 2)) == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_626(Global_35, func_625(1, 2), 2, 1073741824 /* Float: 2f */);
		__LIB_0__::func_489(0, 0);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(__LIB_0__::func_271(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(__LIB_0__::func_271(uParam0->f_2), true, false);
		}
		func_626(__LIB_0__::func_271(uParam0->f_2), func_625(1, 3), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(1, 0), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(1, 1), 2, 1073741824 /* Float: 2f */);
	}
	__LIB_12__::func_615();
	__LIB_12__::func_600();
	func_549(&Local_195, 0);
	__LIB_0__::func_19(&(Local_195.f_6), 20);
	func_236(&(Local_195.f_3), 4);
	__LIB_6__::func_813(uParam0, func_234(3), func_234(4), 3, 4);
	__LIB_6__::func_767();
	__LIB_0__::func_745(2);
	func_922(&Local_195, 1);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	return 1;
}

int func_1075(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = __LIB_1__::func_854(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (__LIB_0__::func_272(iLocal_28, 0) == 0)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (__LIB_1__::func_678(func_532(1, 2)) == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_626(Global_35, func_625(1, 4), 2, 1073741824 /* Float: 2f */);
		__LIB_0__::func_489(0, 0);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(__LIB_0__::func_271(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(__LIB_0__::func_271(uParam0->f_2), true, false);
		}
		func_626(__LIB_0__::func_271(uParam0->f_2), func_625(1, 5), 2, 1073741824 /* Float: 2f */);
		func_626(__LIB_0__::func_271(uParam0->f_2), func_625(1, 5), 0, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(1, 0), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(1, 1), 2, 1073741824 /* Float: 2f */);
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != joaat("WEAPON_FISHINGROD"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), true, 0, false, false);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
	WEAPON::GET_CURRENT_PED_WEAPON(__LIB_0__::func_271(uParam0->f_2), &iVar0, true, 0, false);
	if (iVar0 != joaat("WEAPON_FISHINGROD"))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(__LIB_0__::func_271(uParam0->f_2), joaat("WEAPON_FISHINGROD"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::_0x2208438012482A1A(__LIB_0__::func_271(uParam0->f_2), false, false);
		__LIB_1__::func_664(1);
	}
	__LIB_1__::func_657(1);
	__LIB_1__::func_666(1);
	__LIB_1__::func_667(0);
	if (!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CRICKET"), 1, 0))
	{
		func_143(joaat("UPGRADE_FSH_BAIT_CRICKET"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	__LIB_10__::func_693(128);
	func_1398(0);
	TASK::_0x31BB338F64D5C861(Global_35, 0);
	TASK::_0x31BB338F64D5C861(__LIB_0__::func_271(uParam0->f_2), 0);
	func_63(0, 1);
	func_63(1, 0);
	func_560();
	__LIB_1__::func_561(&(Local_195.f_47));
	__LIB_18__::func_168(0);
	__LIB_6__::func_767();
	__LIB_1__::func_648(1, 0);
	__LIB_1__::func_657(1);
	func_560();
	__LIB_0__::func_19(&(Local_195.f_6), 27);
	func_236(&(Local_195.f_3), 7);
	func_922(&Local_195, 1);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_6__::func_813(uParam0, func_234(4), func_234(5), 4, 5);
	return 1;
}

int func_1076(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = __LIB_1__::func_854(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (__LIB_0__::func_272(iLocal_28, 0) == 0)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (__LIB_1__::func_678(func_532(2, 0)) == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_626(Global_35, func_625(1, 4), 2, 1073741824 /* Float: 2f */);
		__LIB_0__::func_489(0, 0);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(__LIB_0__::func_271(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(__LIB_0__::func_271(uParam0->f_2), true, false);
		}
		func_626(__LIB_0__::func_271(uParam0->f_2), func_625(1, 5), 2, 1073741824 /* Float: 2f */);
		func_626(__LIB_0__::func_271(uParam0->f_2), func_625(1, 5), 0, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(1, 0), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(1, 1), 2, 1073741824 /* Float: 2f */);
	}
	__LIB_0__::func_19(&(Local_195.f_6), 29);
	func_236(&(Local_195.f_3), 9);
	__LIB_1__::func_648(1, 1);
	__LIB_1__::func_657(0);
	__LIB_6__::func_767();
	if (!__LIB_0__::func_27(Local_195.f_94, 2))
	{
		__LIB_1__::func_581(&(Local_195.f_94), 2);
	}
	if (!__LIB_0__::func_27(Local_195.f_94, 4194304))
	{
		__LIB_1__::func_581(&(Local_195.f_94), 4194304);
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != joaat("WEAPON_FISHINGROD"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), true, 0, false, false);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_6__::func_813(uParam0, func_234(5), func_234(6), 5, 6);
	return 1;
}

int func_1077(var uParam0)
{
	__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
	iLocal_35 = 25;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	return 1;
}

int func_1080(var uParam0, int iParam1, int iParam2)
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
		return func_1080(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1204(int iParam0)
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
	func_446(iParam0, 1, 1, -142743235, 1);
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
		func_446(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1209(struct<6> Param0)
{
	if (!func_1479(Param0.f_4, 1))
	{
	}
	if (!func_1479(Param0, 1))
	{
	}
	if (!func_1479(Param0.f_2, 1))
	{
	}
	if (!func_1479(Param0.f_5, 1))
	{
	}
	if (!func_1479(Param0.f_3, 1))
	{
	}
	if (!func_1479(Param0.f_1, 1))
	{
	}
}

int func_1244(int iParam0)
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
			break;
		case 1:
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
			Jump @9445; //curOff = 1571
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
			Jump @9445; //curOff = 1959
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
			Jump @9445; //curOff = 2480
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
			Jump @9445; //curOff = 2919
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
			Jump @9445; //curOff = 3514
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
			Jump @9445; //curOff = 4297
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
			Jump @9445; //curOff = 4381
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9445; //curOff = 4472
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
			Jump @9445; //curOff = 5583
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
			Jump @9445; //curOff = 6026
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
			Jump @9445; //curOff = 6715
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
			Jump @9445; //curOff = 7287
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
			Jump @9445; //curOff = 7859
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9445; //curOff = 8173
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
			Jump @9445; //curOff = 8874
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
bool func_1245(int iParam0)
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

void func_1266(var uParam0)
{
	if (__LIB_6__::func_796(uParam0, Global_35, 0, 0, 1, 1))
	{
	}
	if (__LIB_6__::func_796(uParam0, Local_195.f_37, 0, 0, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_195.f_37))
		{
		}
	}
}

void func_1319(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1539();
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

void func_1321(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_1__::func_524(uParam0)))
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
			func_637(iVar1, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_637(iVar3, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1322(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_1__::func_524(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_1__::func_524(uParam0) };
			func_637(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1398(int iParam0)
{
	if (__LIB_1__::func_655(iParam0))
	{
		__LIB_18__::func_162(iParam0, 2048);
	}
}

bool func_1479(int iParam0, int iParam1)
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
				if (func_1479(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1479(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1479(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1479(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_1539()
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
	iVar0 = func_1652(6291456, 0);
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

int func_1652(int iParam0, int iParam1)
{
	var uVar0;
	return func_1700(&uVar0, iParam0, iParam1);
}

int func_1700(var uParam0, int iParam1, int iParam2)
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
		return func_1700(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

