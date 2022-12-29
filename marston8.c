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
	struct<58> Local_14 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82[92] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_175 = NULL;
	char[] cLocal_176[8] = 0;
	char* sLocal_177 = NULL;
	char* sLocal_178 = NULL;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	vector3 vLocal_194 = { 0f, 0f, 0f };
	int iLocal_197[4] = { 0, 0, 0, 0 };
	var uLocal_202[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_220[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	struct<28> Local_268[2];
	struct<2> Local_325 = { 0, 0 } ;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	struct<28> Local_356[6];
	struct<28> Local_525[5];
	struct<28> Local_666[2];
	struct<28> Local_723[2];
	struct<28> Local_780[21];
	int iLocal_1369 = 0;
	int iLocal_1370 = 0;
	int iLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	int iLocal_1374 = 0;
	int iLocal_1375 = 0;
	int iLocal_1376 = 0;
	int iLocal_1377 = 0;
	int iLocal_1378 = 0;
	int iLocal_1379 = 0;
	int iLocal_1380 = 0;
	int iLocal_1381 = 0;
	int iLocal_1382 = 0;
	int iLocal_1383 = 0;
	int iLocal_1384 = 0;
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
	var uLocal_1442[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1456[2] = { 0, 0 };
	int iLocal_1459 = 0;
	int iLocal_1460 = 0;
	var uLocal_1461 = 0;
	int iLocal_1462 = 0;
	int iLocal_1463 = 0;
	int iLocal_1464 = 0;
	int iLocal_1465 = 0;
	int iLocal_1466 = 0;
	int iLocal_1467[3] = { 0, 0, 0 };
	int iLocal_1471[3] = { 0, 0, 0 };
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	struct<22> Local_1477 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1 } ;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	struct<22> Local_1505 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1 } ;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	struct<22> Local_1533 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1 } ;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	int iLocal_1561 = 0;
	struct<16> Local_1562 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1578 = 0;
	var uLocal_1579 = 2;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 1;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	struct<16> Local_1590 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1606 = 0;
	var uLocal_1607 = 2;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 1;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	int iLocal_1618 = 0;
	struct<22> Local_1619 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1 } ;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	struct<5> Local_1647 = { 0, 0, 0, 0, 0 } ;
	int iLocal_1652 = 0;
	int iLocal_1653 = 0;
	int iLocal_1654 = 0;
	int iLocal_1655 = 0;
	int iLocal_1656[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char cLocal_1671[16] = "";
	int iLocal_1673 = 0;
	int iLocal_1674 = 0;
	int iLocal_1675 = 0;
	var uLocal_1676 = 0;
	int iLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = -1;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 1097859072;
	var uLocal_1696 = 1000;
	var uLocal_1697 = 1067450368;
	var uLocal_1698 = 5000;
	var uLocal_1699 = 42;
	var uLocal_1700 = 1103626240;
	var uLocal_1701 = 1077936128;
	var uLocal_1702 = 1106247680;
	var uLocal_1703 = 1103101952;
	var uLocal_1704 = 1097859072;
	var uLocal_1705 = 1103626240;
	var uLocal_1706 = 0;
	int iLocal_1707 = 0;
	int iLocal_1708 = 0;
	int iLocal_1709 = 0;
	int iLocal_1710 = 0;
	int iLocal_1711 = 0;
	int iLocal_1712 = 0;
	int iLocal_1713 = 0;
	int iLocal_1714 = 0;
	int iLocal_1715 = 0;
	int iLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	int iLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	int iLocal_1739 = 0;
	int iLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	bool bLocal_1744 = false;
	var uLocal_1745 = 0;
	var uLocal_1746 = 27;
	var uLocal_1747 = 8;
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
	var uLocal_1768 = -1;
	var uLocal_1769 = 8;
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
	var uLocal_1790 = -1;
	var uLocal_1791 = 8;
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
	var uLocal_1812 = -1;
	var uLocal_1813 = 8;
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
	var uLocal_1834 = -1;
	var uLocal_1835 = 8;
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
	var uLocal_1856 = -1;
	var uLocal_1857 = 8;
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
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = -1;
	var uLocal_1879 = 8;
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
	var uLocal_1900 = -1;
	var uLocal_1901 = 8;
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
	var uLocal_1922 = -1;
	var uLocal_1923 = 8;
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
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = -1;
	var uLocal_1945 = 8;
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
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = -1;
	var uLocal_1967 = 8;
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
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = -1;
	var uLocal_1989 = 8;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
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
	var uLocal_2010 = -1;
	var uLocal_2011 = 8;
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
	var uLocal_2032 = -1;
	var uLocal_2033 = 8;
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
	var uLocal_2054 = -1;
	var uLocal_2055 = 8;
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
	var uLocal_2076 = -1;
	var uLocal_2077 = 8;
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
	var uLocal_2098 = -1;
	var uLocal_2099 = 8;
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
	var uLocal_2120 = -1;
	var uLocal_2121 = 8;
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
	var uLocal_2142 = -1;
	var uLocal_2143 = 8;
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
	var uLocal_2164 = -1;
	var uLocal_2165 = 8;
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
	var uLocal_2186 = -1;
	var uLocal_2187 = 8;
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
	var uLocal_2208 = -1;
	var uLocal_2209 = 8;
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
	var uLocal_2230 = -1;
	var uLocal_2231 = 8;
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
	var uLocal_2252 = -1;
	var uLocal_2253 = 8;
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
	var uLocal_2274 = -1;
	var uLocal_2275 = 8;
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
	var uLocal_2296 = -1;
	var uLocal_2297 = 8;
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
	var uLocal_2318 = -1;
	var uLocal_2319 = 8;
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
	var uLocal_2340 = -1;
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
	var uLocal_2379 = 2;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 60;
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
	var uLocal_2564 = 40;
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
	var uLocal_2765 = 20;
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
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 14;
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
	var uLocal_2871 = 60;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 20;
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
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 20;
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
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 20;
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
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 20;
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
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 20;
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
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 20;
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
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 20;
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
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 20;
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
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 20;
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
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 20;
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
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 20;
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
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 20;
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
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 20;
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
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 20;
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
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 20;
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
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 20;
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
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 20;
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
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 20;
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
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 20;
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
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 20;
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
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 20;
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
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 20;
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
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 20;
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
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 20;
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
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 20;
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
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 20;
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
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 20;
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
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 20;
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
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 20;
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
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 20;
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
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 20;
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
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 20;
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
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 20;
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
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 20;
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
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 20;
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
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 20;
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
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 20;
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
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 20;
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
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 20;
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
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 20;
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
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 20;
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
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 20;
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
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 20;
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
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 20;
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
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 20;
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
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 20;
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
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 20;
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
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 20;
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
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 20;
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
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 20;
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
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 20;
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
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 20;
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
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 20;
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
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 20;
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
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 20;
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
	var uLocal_6561 = 20;
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
	var uLocal_6628 = 20;
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
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 20;
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
	var uLocal_6762 = 20;
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
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 20;
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
	var uLocal_6892 = 10;
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
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 10;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
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
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 5;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 5;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 5;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
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
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 0;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 24;
	var uLocal_7056 = 0;
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
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
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
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
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
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 30;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 3;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = -1;
	var uLocal_7180 = 0;
	var uLocal_7181 = 5;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 10;
	var uLocal_7193 = 3;
	var uLocal_7194 = 500;
	var uLocal_7195 = 10000;
	var uLocal_7196 = 0;
	var uLocal_7197 = 3;
	var uLocal_7198 = 500;
	var uLocal_7199 = 10000;
	var uLocal_7200 = 0;
	var uLocal_7201 = 3;
	var uLocal_7202 = 500;
	var uLocal_7203 = 10000;
	var uLocal_7204 = 0;
	var uLocal_7205 = 3;
	var uLocal_7206 = 500;
	var uLocal_7207 = 10000;
	var uLocal_7208 = 0;
	var uLocal_7209 = 3;
	var uLocal_7210 = 500;
	var uLocal_7211 = 10000;
	var uLocal_7212 = 0;
	var uLocal_7213 = 3;
	var uLocal_7214 = 500;
	var uLocal_7215 = 10000;
	var uLocal_7216 = 0;
	var uLocal_7217 = 3;
	var uLocal_7218 = 500;
	var uLocal_7219 = 10000;
	var uLocal_7220 = 0;
	var uLocal_7221 = 3;
	var uLocal_7222 = 500;
	var uLocal_7223 = 10000;
	var uLocal_7224 = 0;
	var uLocal_7225 = 3;
	var uLocal_7226 = 500;
	var uLocal_7227 = 10000;
	var uLocal_7228 = 0;
	var uLocal_7229 = 3;
	var uLocal_7230 = 500;
	var uLocal_7231 = 10000;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 3;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = -1;
	var uLocal_7245 = 0;
	var uLocal_7246 = 5;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 10;
	var uLocal_7258 = 3;
	var uLocal_7259 = 500;
	var uLocal_7260 = 10000;
	var uLocal_7261 = 0;
	var uLocal_7262 = 3;
	var uLocal_7263 = 500;
	var uLocal_7264 = 10000;
	var uLocal_7265 = 0;
	var uLocal_7266 = 3;
	var uLocal_7267 = 500;
	var uLocal_7268 = 10000;
	var uLocal_7269 = 0;
	var uLocal_7270 = 3;
	var uLocal_7271 = 500;
	var uLocal_7272 = 10000;
	var uLocal_7273 = 0;
	var uLocal_7274 = 3;
	var uLocal_7275 = 500;
	var uLocal_7276 = 10000;
	var uLocal_7277 = 0;
	var uLocal_7278 = 3;
	var uLocal_7279 = 500;
	var uLocal_7280 = 10000;
	var uLocal_7281 = 0;
	var uLocal_7282 = 3;
	var uLocal_7283 = 500;
	var uLocal_7284 = 10000;
	var uLocal_7285 = 0;
	var uLocal_7286 = 3;
	var uLocal_7287 = 500;
	var uLocal_7288 = 10000;
	var uLocal_7289 = 0;
	var uLocal_7290 = 3;
	var uLocal_7291 = 500;
	var uLocal_7292 = 10000;
	var uLocal_7293 = 0;
	var uLocal_7294 = 3;
	var uLocal_7295 = 500;
	var uLocal_7296 = 10000;
	var uLocal_7297 = 0;
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 3;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = -1;
	var uLocal_7310 = 0;
	var uLocal_7311 = 5;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 10;
	var uLocal_7323 = 3;
	var uLocal_7324 = 500;
	var uLocal_7325 = 10000;
	var uLocal_7326 = 0;
	var uLocal_7327 = 3;
	var uLocal_7328 = 500;
	var uLocal_7329 = 10000;
	var uLocal_7330 = 0;
	var uLocal_7331 = 3;
	var uLocal_7332 = 500;
	var uLocal_7333 = 10000;
	var uLocal_7334 = 0;
	var uLocal_7335 = 3;
	var uLocal_7336 = 500;
	var uLocal_7337 = 10000;
	var uLocal_7338 = 0;
	var uLocal_7339 = 3;
	var uLocal_7340 = 500;
	var uLocal_7341 = 10000;
	var uLocal_7342 = 0;
	var uLocal_7343 = 3;
	var uLocal_7344 = 500;
	var uLocal_7345 = 10000;
	var uLocal_7346 = 0;
	var uLocal_7347 = 3;
	var uLocal_7348 = 500;
	var uLocal_7349 = 10000;
	var uLocal_7350 = 0;
	var uLocal_7351 = 3;
	var uLocal_7352 = 500;
	var uLocal_7353 = 10000;
	var uLocal_7354 = 0;
	var uLocal_7355 = 3;
	var uLocal_7356 = 500;
	var uLocal_7357 = 10000;
	var uLocal_7358 = 0;
	var uLocal_7359 = 3;
	var uLocal_7360 = 500;
	var uLocal_7361 = 10000;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 3;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = -1;
	var uLocal_7375 = 0;
	var uLocal_7376 = 5;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 10;
	var uLocal_7388 = 3;
	var uLocal_7389 = 500;
	var uLocal_7390 = 10000;
	var uLocal_7391 = 0;
	var uLocal_7392 = 3;
	var uLocal_7393 = 500;
	var uLocal_7394 = 10000;
	var uLocal_7395 = 0;
	var uLocal_7396 = 3;
	var uLocal_7397 = 500;
	var uLocal_7398 = 10000;
	var uLocal_7399 = 0;
	var uLocal_7400 = 3;
	var uLocal_7401 = 500;
	var uLocal_7402 = 10000;
	var uLocal_7403 = 0;
	var uLocal_7404 = 3;
	var uLocal_7405 = 500;
	var uLocal_7406 = 10000;
	var uLocal_7407 = 0;
	var uLocal_7408 = 3;
	var uLocal_7409 = 500;
	var uLocal_7410 = 10000;
	var uLocal_7411 = 0;
	var uLocal_7412 = 3;
	var uLocal_7413 = 500;
	var uLocal_7414 = 10000;
	var uLocal_7415 = 0;
	var uLocal_7416 = 3;
	var uLocal_7417 = 500;
	var uLocal_7418 = 10000;
	var uLocal_7419 = 0;
	var uLocal_7420 = 3;
	var uLocal_7421 = 500;
	var uLocal_7422 = 10000;
	var uLocal_7423 = 0;
	var uLocal_7424 = 3;
	var uLocal_7425 = 500;
	var uLocal_7426 = 10000;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 3;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = -1;
	var uLocal_7440 = 0;
	var uLocal_7441 = 5;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 10;
	var uLocal_7453 = 3;
	var uLocal_7454 = 500;
	var uLocal_7455 = 10000;
	var uLocal_7456 = 0;
	var uLocal_7457 = 3;
	var uLocal_7458 = 500;
	var uLocal_7459 = 10000;
	var uLocal_7460 = 0;
	var uLocal_7461 = 3;
	var uLocal_7462 = 500;
	var uLocal_7463 = 10000;
	var uLocal_7464 = 0;
	var uLocal_7465 = 3;
	var uLocal_7466 = 500;
	var uLocal_7467 = 10000;
	var uLocal_7468 = 0;
	var uLocal_7469 = 3;
	var uLocal_7470 = 500;
	var uLocal_7471 = 10000;
	var uLocal_7472 = 0;
	var uLocal_7473 = 3;
	var uLocal_7474 = 500;
	var uLocal_7475 = 10000;
	var uLocal_7476 = 0;
	var uLocal_7477 = 3;
	var uLocal_7478 = 500;
	var uLocal_7479 = 10000;
	var uLocal_7480 = 0;
	var uLocal_7481 = 3;
	var uLocal_7482 = 500;
	var uLocal_7483 = 10000;
	var uLocal_7484 = 0;
	var uLocal_7485 = 3;
	var uLocal_7486 = 500;
	var uLocal_7487 = 10000;
	var uLocal_7488 = 0;
	var uLocal_7489 = 3;
	var uLocal_7490 = 500;
	var uLocal_7491 = 10000;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 3;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = -1;
	var uLocal_7505 = 0;
	var uLocal_7506 = 5;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 10;
	var uLocal_7518 = 3;
	var uLocal_7519 = 500;
	var uLocal_7520 = 10000;
	var uLocal_7521 = 0;
	var uLocal_7522 = 3;
	var uLocal_7523 = 500;
	var uLocal_7524 = 10000;
	var uLocal_7525 = 0;
	var uLocal_7526 = 3;
	var uLocal_7527 = 500;
	var uLocal_7528 = 10000;
	var uLocal_7529 = 0;
	var uLocal_7530 = 3;
	var uLocal_7531 = 500;
	var uLocal_7532 = 10000;
	var uLocal_7533 = 0;
	var uLocal_7534 = 3;
	var uLocal_7535 = 500;
	var uLocal_7536 = 10000;
	var uLocal_7537 = 0;
	var uLocal_7538 = 3;
	var uLocal_7539 = 500;
	var uLocal_7540 = 10000;
	var uLocal_7541 = 0;
	var uLocal_7542 = 3;
	var uLocal_7543 = 500;
	var uLocal_7544 = 10000;
	var uLocal_7545 = 0;
	var uLocal_7546 = 3;
	var uLocal_7547 = 500;
	var uLocal_7548 = 10000;
	var uLocal_7549 = 0;
	var uLocal_7550 = 3;
	var uLocal_7551 = 500;
	var uLocal_7552 = 10000;
	var uLocal_7553 = 0;
	var uLocal_7554 = 3;
	var uLocal_7555 = 500;
	var uLocal_7556 = 10000;
	var uLocal_7557 = 0;
	var uLocal_7558 = 0;
	var uLocal_7559 = 0;
	var uLocal_7560 = 0;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 3;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = -1;
	var uLocal_7570 = 0;
	var uLocal_7571 = 5;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 0;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 10;
	var uLocal_7583 = 3;
	var uLocal_7584 = 500;
	var uLocal_7585 = 10000;
	var uLocal_7586 = 0;
	var uLocal_7587 = 3;
	var uLocal_7588 = 500;
	var uLocal_7589 = 10000;
	var uLocal_7590 = 0;
	var uLocal_7591 = 3;
	var uLocal_7592 = 500;
	var uLocal_7593 = 10000;
	var uLocal_7594 = 0;
	var uLocal_7595 = 3;
	var uLocal_7596 = 500;
	var uLocal_7597 = 10000;
	var uLocal_7598 = 0;
	var uLocal_7599 = 3;
	var uLocal_7600 = 500;
	var uLocal_7601 = 10000;
	var uLocal_7602 = 0;
	var uLocal_7603 = 3;
	var uLocal_7604 = 500;
	var uLocal_7605 = 10000;
	var uLocal_7606 = 0;
	var uLocal_7607 = 3;
	var uLocal_7608 = 500;
	var uLocal_7609 = 10000;
	var uLocal_7610 = 0;
	var uLocal_7611 = 3;
	var uLocal_7612 = 500;
	var uLocal_7613 = 10000;
	var uLocal_7614 = 0;
	var uLocal_7615 = 3;
	var uLocal_7616 = 500;
	var uLocal_7617 = 10000;
	var uLocal_7618 = 0;
	var uLocal_7619 = 3;
	var uLocal_7620 = 500;
	var uLocal_7621 = 10000;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 3;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = -1;
	var uLocal_7635 = 0;
	var uLocal_7636 = 5;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 10;
	var uLocal_7648 = 3;
	var uLocal_7649 = 500;
	var uLocal_7650 = 10000;
	var uLocal_7651 = 0;
	var uLocal_7652 = 3;
	var uLocal_7653 = 500;
	var uLocal_7654 = 10000;
	var uLocal_7655 = 0;
	var uLocal_7656 = 3;
	var uLocal_7657 = 500;
	var uLocal_7658 = 10000;
	var uLocal_7659 = 0;
	var uLocal_7660 = 3;
	var uLocal_7661 = 500;
	var uLocal_7662 = 10000;
	var uLocal_7663 = 0;
	var uLocal_7664 = 3;
	var uLocal_7665 = 500;
	var uLocal_7666 = 10000;
	var uLocal_7667 = 0;
	var uLocal_7668 = 3;
	var uLocal_7669 = 500;
	var uLocal_7670 = 10000;
	var uLocal_7671 = 0;
	var uLocal_7672 = 3;
	var uLocal_7673 = 500;
	var uLocal_7674 = 10000;
	var uLocal_7675 = 0;
	var uLocal_7676 = 3;
	var uLocal_7677 = 500;
	var uLocal_7678 = 10000;
	var uLocal_7679 = 0;
	var uLocal_7680 = 3;
	var uLocal_7681 = 500;
	var uLocal_7682 = 10000;
	var uLocal_7683 = 0;
	var uLocal_7684 = 3;
	var uLocal_7685 = 500;
	var uLocal_7686 = 10000;
	var uLocal_7687 = 0;
	var uLocal_7688 = 0;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 3;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 0;
	var uLocal_7699 = -1;
	var uLocal_7700 = 0;
	var uLocal_7701 = 5;
	var uLocal_7702 = 0;
	var uLocal_7703 = 0;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 10;
	var uLocal_7713 = 3;
	var uLocal_7714 = 500;
	var uLocal_7715 = 10000;
	var uLocal_7716 = 0;
	var uLocal_7717 = 3;
	var uLocal_7718 = 500;
	var uLocal_7719 = 10000;
	var uLocal_7720 = 0;
	var uLocal_7721 = 3;
	var uLocal_7722 = 500;
	var uLocal_7723 = 10000;
	var uLocal_7724 = 0;
	var uLocal_7725 = 3;
	var uLocal_7726 = 500;
	var uLocal_7727 = 10000;
	var uLocal_7728 = 0;
	var uLocal_7729 = 3;
	var uLocal_7730 = 500;
	var uLocal_7731 = 10000;
	var uLocal_7732 = 0;
	var uLocal_7733 = 3;
	var uLocal_7734 = 500;
	var uLocal_7735 = 10000;
	var uLocal_7736 = 0;
	var uLocal_7737 = 3;
	var uLocal_7738 = 500;
	var uLocal_7739 = 10000;
	var uLocal_7740 = 0;
	var uLocal_7741 = 3;
	var uLocal_7742 = 500;
	var uLocal_7743 = 10000;
	var uLocal_7744 = 0;
	var uLocal_7745 = 3;
	var uLocal_7746 = 500;
	var uLocal_7747 = 10000;
	var uLocal_7748 = 0;
	var uLocal_7749 = 3;
	var uLocal_7750 = 500;
	var uLocal_7751 = 10000;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 0;
	var uLocal_7755 = 0;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 3;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = -1;
	var uLocal_7765 = 0;
	var uLocal_7766 = 5;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 10;
	var uLocal_7778 = 3;
	var uLocal_7779 = 500;
	var uLocal_7780 = 10000;
	var uLocal_7781 = 0;
	var uLocal_7782 = 3;
	var uLocal_7783 = 500;
	var uLocal_7784 = 10000;
	var uLocal_7785 = 0;
	var uLocal_7786 = 3;
	var uLocal_7787 = 500;
	var uLocal_7788 = 10000;
	var uLocal_7789 = 0;
	var uLocal_7790 = 3;
	var uLocal_7791 = 500;
	var uLocal_7792 = 10000;
	var uLocal_7793 = 0;
	var uLocal_7794 = 3;
	var uLocal_7795 = 500;
	var uLocal_7796 = 10000;
	var uLocal_7797 = 0;
	var uLocal_7798 = 3;
	var uLocal_7799 = 500;
	var uLocal_7800 = 10000;
	var uLocal_7801 = 0;
	var uLocal_7802 = 3;
	var uLocal_7803 = 500;
	var uLocal_7804 = 10000;
	var uLocal_7805 = 0;
	var uLocal_7806 = 3;
	var uLocal_7807 = 500;
	var uLocal_7808 = 10000;
	var uLocal_7809 = 0;
	var uLocal_7810 = 3;
	var uLocal_7811 = 500;
	var uLocal_7812 = 10000;
	var uLocal_7813 = 0;
	var uLocal_7814 = 3;
	var uLocal_7815 = 500;
	var uLocal_7816 = 10000;
	var uLocal_7817 = 0;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 3;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 0;
	var uLocal_7829 = -1;
	var uLocal_7830 = 0;
	var uLocal_7831 = 5;
	var uLocal_7832 = 0;
	var uLocal_7833 = 0;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 10;
	var uLocal_7843 = 3;
	var uLocal_7844 = 500;
	var uLocal_7845 = 10000;
	var uLocal_7846 = 0;
	var uLocal_7847 = 3;
	var uLocal_7848 = 500;
	var uLocal_7849 = 10000;
	var uLocal_7850 = 0;
	var uLocal_7851 = 3;
	var uLocal_7852 = 500;
	var uLocal_7853 = 10000;
	var uLocal_7854 = 0;
	var uLocal_7855 = 3;
	var uLocal_7856 = 500;
	var uLocal_7857 = 10000;
	var uLocal_7858 = 0;
	var uLocal_7859 = 3;
	var uLocal_7860 = 500;
	var uLocal_7861 = 10000;
	var uLocal_7862 = 0;
	var uLocal_7863 = 3;
	var uLocal_7864 = 500;
	var uLocal_7865 = 10000;
	var uLocal_7866 = 0;
	var uLocal_7867 = 3;
	var uLocal_7868 = 500;
	var uLocal_7869 = 10000;
	var uLocal_7870 = 0;
	var uLocal_7871 = 3;
	var uLocal_7872 = 500;
	var uLocal_7873 = 10000;
	var uLocal_7874 = 0;
	var uLocal_7875 = 3;
	var uLocal_7876 = 500;
	var uLocal_7877 = 10000;
	var uLocal_7878 = 0;
	var uLocal_7879 = 3;
	var uLocal_7880 = 500;
	var uLocal_7881 = 10000;
	var uLocal_7882 = 0;
	var uLocal_7883 = 0;
	var uLocal_7884 = 0;
	var uLocal_7885 = 0;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 3;
	var uLocal_7890 = 0;
	var uLocal_7891 = 0;
	var uLocal_7892 = 0;
	var uLocal_7893 = 0;
	var uLocal_7894 = -1;
	var uLocal_7895 = 0;
	var uLocal_7896 = 5;
	var uLocal_7897 = 0;
	var uLocal_7898 = 0;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 10;
	var uLocal_7908 = 3;
	var uLocal_7909 = 500;
	var uLocal_7910 = 10000;
	var uLocal_7911 = 0;
	var uLocal_7912 = 3;
	var uLocal_7913 = 500;
	var uLocal_7914 = 10000;
	var uLocal_7915 = 0;
	var uLocal_7916 = 3;
	var uLocal_7917 = 500;
	var uLocal_7918 = 10000;
	var uLocal_7919 = 0;
	var uLocal_7920 = 3;
	var uLocal_7921 = 500;
	var uLocal_7922 = 10000;
	var uLocal_7923 = 0;
	var uLocal_7924 = 3;
	var uLocal_7925 = 500;
	var uLocal_7926 = 10000;
	var uLocal_7927 = 0;
	var uLocal_7928 = 3;
	var uLocal_7929 = 500;
	var uLocal_7930 = 10000;
	var uLocal_7931 = 0;
	var uLocal_7932 = 3;
	var uLocal_7933 = 500;
	var uLocal_7934 = 10000;
	var uLocal_7935 = 0;
	var uLocal_7936 = 3;
	var uLocal_7937 = 500;
	var uLocal_7938 = 10000;
	var uLocal_7939 = 0;
	var uLocal_7940 = 3;
	var uLocal_7941 = 500;
	var uLocal_7942 = 10000;
	var uLocal_7943 = 0;
	var uLocal_7944 = 3;
	var uLocal_7945 = 500;
	var uLocal_7946 = 10000;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 3;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 0;
	var uLocal_7959 = -1;
	var uLocal_7960 = 0;
	var uLocal_7961 = 5;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 10;
	var uLocal_7973 = 3;
	var uLocal_7974 = 500;
	var uLocal_7975 = 10000;
	var uLocal_7976 = 0;
	var uLocal_7977 = 3;
	var uLocal_7978 = 500;
	var uLocal_7979 = 10000;
	var uLocal_7980 = 0;
	var uLocal_7981 = 3;
	var uLocal_7982 = 500;
	var uLocal_7983 = 10000;
	var uLocal_7984 = 0;
	var uLocal_7985 = 3;
	var uLocal_7986 = 500;
	var uLocal_7987 = 10000;
	var uLocal_7988 = 0;
	var uLocal_7989 = 3;
	var uLocal_7990 = 500;
	var uLocal_7991 = 10000;
	var uLocal_7992 = 0;
	var uLocal_7993 = 3;
	var uLocal_7994 = 500;
	var uLocal_7995 = 10000;
	var uLocal_7996 = 0;
	var uLocal_7997 = 3;
	var uLocal_7998 = 500;
	var uLocal_7999 = 10000;
	var uLocal_8000 = 0;
	var uLocal_8001 = 3;
	var uLocal_8002 = 500;
	var uLocal_8003 = 10000;
	var uLocal_8004 = 0;
	var uLocal_8005 = 3;
	var uLocal_8006 = 500;
	var uLocal_8007 = 10000;
	var uLocal_8008 = 0;
	var uLocal_8009 = 3;
	var uLocal_8010 = 500;
	var uLocal_8011 = 10000;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 3;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = -1;
	var uLocal_8025 = 0;
	var uLocal_8026 = 5;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 10;
	var uLocal_8038 = 3;
	var uLocal_8039 = 500;
	var uLocal_8040 = 10000;
	var uLocal_8041 = 0;
	var uLocal_8042 = 3;
	var uLocal_8043 = 500;
	var uLocal_8044 = 10000;
	var uLocal_8045 = 0;
	var uLocal_8046 = 3;
	var uLocal_8047 = 500;
	var uLocal_8048 = 10000;
	var uLocal_8049 = 0;
	var uLocal_8050 = 3;
	var uLocal_8051 = 500;
	var uLocal_8052 = 10000;
	var uLocal_8053 = 0;
	var uLocal_8054 = 3;
	var uLocal_8055 = 500;
	var uLocal_8056 = 10000;
	var uLocal_8057 = 0;
	var uLocal_8058 = 3;
	var uLocal_8059 = 500;
	var uLocal_8060 = 10000;
	var uLocal_8061 = 0;
	var uLocal_8062 = 3;
	var uLocal_8063 = 500;
	var uLocal_8064 = 10000;
	var uLocal_8065 = 0;
	var uLocal_8066 = 3;
	var uLocal_8067 = 500;
	var uLocal_8068 = 10000;
	var uLocal_8069 = 0;
	var uLocal_8070 = 3;
	var uLocal_8071 = 500;
	var uLocal_8072 = 10000;
	var uLocal_8073 = 0;
	var uLocal_8074 = 3;
	var uLocal_8075 = 500;
	var uLocal_8076 = 10000;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 3;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = -1;
	var uLocal_8090 = 0;
	var uLocal_8091 = 5;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 10;
	var uLocal_8103 = 3;
	var uLocal_8104 = 500;
	var uLocal_8105 = 10000;
	var uLocal_8106 = 0;
	var uLocal_8107 = 3;
	var uLocal_8108 = 500;
	var uLocal_8109 = 10000;
	var uLocal_8110 = 0;
	var uLocal_8111 = 3;
	var uLocal_8112 = 500;
	var uLocal_8113 = 10000;
	var uLocal_8114 = 0;
	var uLocal_8115 = 3;
	var uLocal_8116 = 500;
	var uLocal_8117 = 10000;
	var uLocal_8118 = 0;
	var uLocal_8119 = 3;
	var uLocal_8120 = 500;
	var uLocal_8121 = 10000;
	var uLocal_8122 = 0;
	var uLocal_8123 = 3;
	var uLocal_8124 = 500;
	var uLocal_8125 = 10000;
	var uLocal_8126 = 0;
	var uLocal_8127 = 3;
	var uLocal_8128 = 500;
	var uLocal_8129 = 10000;
	var uLocal_8130 = 0;
	var uLocal_8131 = 3;
	var uLocal_8132 = 500;
	var uLocal_8133 = 10000;
	var uLocal_8134 = 0;
	var uLocal_8135 = 3;
	var uLocal_8136 = 500;
	var uLocal_8137 = 10000;
	var uLocal_8138 = 0;
	var uLocal_8139 = 3;
	var uLocal_8140 = 500;
	var uLocal_8141 = 10000;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 3;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = -1;
	var uLocal_8155 = 0;
	var uLocal_8156 = 5;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 10;
	var uLocal_8168 = 3;
	var uLocal_8169 = 500;
	var uLocal_8170 = 10000;
	var uLocal_8171 = 0;
	var uLocal_8172 = 3;
	var uLocal_8173 = 500;
	var uLocal_8174 = 10000;
	var uLocal_8175 = 0;
	var uLocal_8176 = 3;
	var uLocal_8177 = 500;
	var uLocal_8178 = 10000;
	var uLocal_8179 = 0;
	var uLocal_8180 = 3;
	var uLocal_8181 = 500;
	var uLocal_8182 = 10000;
	var uLocal_8183 = 0;
	var uLocal_8184 = 3;
	var uLocal_8185 = 500;
	var uLocal_8186 = 10000;
	var uLocal_8187 = 0;
	var uLocal_8188 = 3;
	var uLocal_8189 = 500;
	var uLocal_8190 = 10000;
	var uLocal_8191 = 0;
	var uLocal_8192 = 3;
	var uLocal_8193 = 500;
	var uLocal_8194 = 10000;
	var uLocal_8195 = 0;
	var uLocal_8196 = 3;
	var uLocal_8197 = 500;
	var uLocal_8198 = 10000;
	var uLocal_8199 = 0;
	var uLocal_8200 = 3;
	var uLocal_8201 = 500;
	var uLocal_8202 = 10000;
	var uLocal_8203 = 0;
	var uLocal_8204 = 3;
	var uLocal_8205 = 500;
	var uLocal_8206 = 10000;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 3;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = -1;
	var uLocal_8220 = 0;
	var uLocal_8221 = 5;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 10;
	var uLocal_8233 = 3;
	var uLocal_8234 = 500;
	var uLocal_8235 = 10000;
	var uLocal_8236 = 0;
	var uLocal_8237 = 3;
	var uLocal_8238 = 500;
	var uLocal_8239 = 10000;
	var uLocal_8240 = 0;
	var uLocal_8241 = 3;
	var uLocal_8242 = 500;
	var uLocal_8243 = 10000;
	var uLocal_8244 = 0;
	var uLocal_8245 = 3;
	var uLocal_8246 = 500;
	var uLocal_8247 = 10000;
	var uLocal_8248 = 0;
	var uLocal_8249 = 3;
	var uLocal_8250 = 500;
	var uLocal_8251 = 10000;
	var uLocal_8252 = 0;
	var uLocal_8253 = 3;
	var uLocal_8254 = 500;
	var uLocal_8255 = 10000;
	var uLocal_8256 = 0;
	var uLocal_8257 = 3;
	var uLocal_8258 = 500;
	var uLocal_8259 = 10000;
	var uLocal_8260 = 0;
	var uLocal_8261 = 3;
	var uLocal_8262 = 500;
	var uLocal_8263 = 10000;
	var uLocal_8264 = 0;
	var uLocal_8265 = 3;
	var uLocal_8266 = 500;
	var uLocal_8267 = 10000;
	var uLocal_8268 = 0;
	var uLocal_8269 = 3;
	var uLocal_8270 = 500;
	var uLocal_8271 = 10000;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 3;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = -1;
	var uLocal_8285 = 0;
	var uLocal_8286 = 5;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 10;
	var uLocal_8298 = 3;
	var uLocal_8299 = 500;
	var uLocal_8300 = 10000;
	var uLocal_8301 = 0;
	var uLocal_8302 = 3;
	var uLocal_8303 = 500;
	var uLocal_8304 = 10000;
	var uLocal_8305 = 0;
	var uLocal_8306 = 3;
	var uLocal_8307 = 500;
	var uLocal_8308 = 10000;
	var uLocal_8309 = 0;
	var uLocal_8310 = 3;
	var uLocal_8311 = 500;
	var uLocal_8312 = 10000;
	var uLocal_8313 = 0;
	var uLocal_8314 = 3;
	var uLocal_8315 = 500;
	var uLocal_8316 = 10000;
	var uLocal_8317 = 0;
	var uLocal_8318 = 3;
	var uLocal_8319 = 500;
	var uLocal_8320 = 10000;
	var uLocal_8321 = 0;
	var uLocal_8322 = 3;
	var uLocal_8323 = 500;
	var uLocal_8324 = 10000;
	var uLocal_8325 = 0;
	var uLocal_8326 = 3;
	var uLocal_8327 = 500;
	var uLocal_8328 = 10000;
	var uLocal_8329 = 0;
	var uLocal_8330 = 3;
	var uLocal_8331 = 500;
	var uLocal_8332 = 10000;
	var uLocal_8333 = 0;
	var uLocal_8334 = 3;
	var uLocal_8335 = 500;
	var uLocal_8336 = 10000;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 3;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = -1;
	var uLocal_8350 = 0;
	var uLocal_8351 = 5;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 10;
	var uLocal_8363 = 3;
	var uLocal_8364 = 500;
	var uLocal_8365 = 10000;
	var uLocal_8366 = 0;
	var uLocal_8367 = 3;
	var uLocal_8368 = 500;
	var uLocal_8369 = 10000;
	var uLocal_8370 = 0;
	var uLocal_8371 = 3;
	var uLocal_8372 = 500;
	var uLocal_8373 = 10000;
	var uLocal_8374 = 0;
	var uLocal_8375 = 3;
	var uLocal_8376 = 500;
	var uLocal_8377 = 10000;
	var uLocal_8378 = 0;
	var uLocal_8379 = 3;
	var uLocal_8380 = 500;
	var uLocal_8381 = 10000;
	var uLocal_8382 = 0;
	var uLocal_8383 = 3;
	var uLocal_8384 = 500;
	var uLocal_8385 = 10000;
	var uLocal_8386 = 0;
	var uLocal_8387 = 3;
	var uLocal_8388 = 500;
	var uLocal_8389 = 10000;
	var uLocal_8390 = 0;
	var uLocal_8391 = 3;
	var uLocal_8392 = 500;
	var uLocal_8393 = 10000;
	var uLocal_8394 = 0;
	var uLocal_8395 = 3;
	var uLocal_8396 = 500;
	var uLocal_8397 = 10000;
	var uLocal_8398 = 0;
	var uLocal_8399 = 3;
	var uLocal_8400 = 500;
	var uLocal_8401 = 10000;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 3;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = -1;
	var uLocal_8415 = 0;
	var uLocal_8416 = 5;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 10;
	var uLocal_8428 = 3;
	var uLocal_8429 = 500;
	var uLocal_8430 = 10000;
	var uLocal_8431 = 0;
	var uLocal_8432 = 3;
	var uLocal_8433 = 500;
	var uLocal_8434 = 10000;
	var uLocal_8435 = 0;
	var uLocal_8436 = 3;
	var uLocal_8437 = 500;
	var uLocal_8438 = 10000;
	var uLocal_8439 = 0;
	var uLocal_8440 = 3;
	var uLocal_8441 = 500;
	var uLocal_8442 = 10000;
	var uLocal_8443 = 0;
	var uLocal_8444 = 3;
	var uLocal_8445 = 500;
	var uLocal_8446 = 10000;
	var uLocal_8447 = 0;
	var uLocal_8448 = 3;
	var uLocal_8449 = 500;
	var uLocal_8450 = 10000;
	var uLocal_8451 = 0;
	var uLocal_8452 = 3;
	var uLocal_8453 = 500;
	var uLocal_8454 = 10000;
	var uLocal_8455 = 0;
	var uLocal_8456 = 3;
	var uLocal_8457 = 500;
	var uLocal_8458 = 10000;
	var uLocal_8459 = 0;
	var uLocal_8460 = 3;
	var uLocal_8461 = 500;
	var uLocal_8462 = 10000;
	var uLocal_8463 = 0;
	var uLocal_8464 = 3;
	var uLocal_8465 = 500;
	var uLocal_8466 = 10000;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 3;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = -1;
	var uLocal_8480 = 0;
	var uLocal_8481 = 5;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 10;
	var uLocal_8493 = 3;
	var uLocal_8494 = 500;
	var uLocal_8495 = 10000;
	var uLocal_8496 = 0;
	var uLocal_8497 = 3;
	var uLocal_8498 = 500;
	var uLocal_8499 = 10000;
	var uLocal_8500 = 0;
	var uLocal_8501 = 3;
	var uLocal_8502 = 500;
	var uLocal_8503 = 10000;
	var uLocal_8504 = 0;
	var uLocal_8505 = 3;
	var uLocal_8506 = 500;
	var uLocal_8507 = 10000;
	var uLocal_8508 = 0;
	var uLocal_8509 = 3;
	var uLocal_8510 = 500;
	var uLocal_8511 = 10000;
	var uLocal_8512 = 0;
	var uLocal_8513 = 3;
	var uLocal_8514 = 500;
	var uLocal_8515 = 10000;
	var uLocal_8516 = 0;
	var uLocal_8517 = 3;
	var uLocal_8518 = 500;
	var uLocal_8519 = 10000;
	var uLocal_8520 = 0;
	var uLocal_8521 = 3;
	var uLocal_8522 = 500;
	var uLocal_8523 = 10000;
	var uLocal_8524 = 0;
	var uLocal_8525 = 3;
	var uLocal_8526 = 500;
	var uLocal_8527 = 10000;
	var uLocal_8528 = 0;
	var uLocal_8529 = 3;
	var uLocal_8530 = 500;
	var uLocal_8531 = 10000;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 3;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = -1;
	var uLocal_8545 = 0;
	var uLocal_8546 = 5;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 10;
	var uLocal_8558 = 3;
	var uLocal_8559 = 500;
	var uLocal_8560 = 10000;
	var uLocal_8561 = 0;
	var uLocal_8562 = 3;
	var uLocal_8563 = 500;
	var uLocal_8564 = 10000;
	var uLocal_8565 = 0;
	var uLocal_8566 = 3;
	var uLocal_8567 = 500;
	var uLocal_8568 = 10000;
	var uLocal_8569 = 0;
	var uLocal_8570 = 3;
	var uLocal_8571 = 500;
	var uLocal_8572 = 10000;
	var uLocal_8573 = 0;
	var uLocal_8574 = 3;
	var uLocal_8575 = 500;
	var uLocal_8576 = 10000;
	var uLocal_8577 = 0;
	var uLocal_8578 = 3;
	var uLocal_8579 = 500;
	var uLocal_8580 = 10000;
	var uLocal_8581 = 0;
	var uLocal_8582 = 3;
	var uLocal_8583 = 500;
	var uLocal_8584 = 10000;
	var uLocal_8585 = 0;
	var uLocal_8586 = 3;
	var uLocal_8587 = 500;
	var uLocal_8588 = 10000;
	var uLocal_8589 = 0;
	var uLocal_8590 = 3;
	var uLocal_8591 = 500;
	var uLocal_8592 = 10000;
	var uLocal_8593 = 0;
	var uLocal_8594 = 3;
	var uLocal_8595 = 500;
	var uLocal_8596 = 10000;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 3;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = -1;
	var uLocal_8610 = 0;
	var uLocal_8611 = 5;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 10;
	var uLocal_8623 = 3;
	var uLocal_8624 = 500;
	var uLocal_8625 = 10000;
	var uLocal_8626 = 0;
	var uLocal_8627 = 3;
	var uLocal_8628 = 500;
	var uLocal_8629 = 10000;
	var uLocal_8630 = 0;
	var uLocal_8631 = 3;
	var uLocal_8632 = 500;
	var uLocal_8633 = 10000;
	var uLocal_8634 = 0;
	var uLocal_8635 = 3;
	var uLocal_8636 = 500;
	var uLocal_8637 = 10000;
	var uLocal_8638 = 0;
	var uLocal_8639 = 3;
	var uLocal_8640 = 500;
	var uLocal_8641 = 10000;
	var uLocal_8642 = 0;
	var uLocal_8643 = 3;
	var uLocal_8644 = 500;
	var uLocal_8645 = 10000;
	var uLocal_8646 = 0;
	var uLocal_8647 = 3;
	var uLocal_8648 = 500;
	var uLocal_8649 = 10000;
	var uLocal_8650 = 0;
	var uLocal_8651 = 3;
	var uLocal_8652 = 500;
	var uLocal_8653 = 10000;
	var uLocal_8654 = 0;
	var uLocal_8655 = 3;
	var uLocal_8656 = 500;
	var uLocal_8657 = 10000;
	var uLocal_8658 = 0;
	var uLocal_8659 = 3;
	var uLocal_8660 = 500;
	var uLocal_8661 = 10000;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 3;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = -1;
	var uLocal_8675 = 0;
	var uLocal_8676 = 5;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 10;
	var uLocal_8688 = 3;
	var uLocal_8689 = 500;
	var uLocal_8690 = 10000;
	var uLocal_8691 = 0;
	var uLocal_8692 = 3;
	var uLocal_8693 = 500;
	var uLocal_8694 = 10000;
	var uLocal_8695 = 0;
	var uLocal_8696 = 3;
	var uLocal_8697 = 500;
	var uLocal_8698 = 10000;
	var uLocal_8699 = 0;
	var uLocal_8700 = 3;
	var uLocal_8701 = 500;
	var uLocal_8702 = 10000;
	var uLocal_8703 = 0;
	var uLocal_8704 = 3;
	var uLocal_8705 = 500;
	var uLocal_8706 = 10000;
	var uLocal_8707 = 0;
	var uLocal_8708 = 3;
	var uLocal_8709 = 500;
	var uLocal_8710 = 10000;
	var uLocal_8711 = 0;
	var uLocal_8712 = 3;
	var uLocal_8713 = 500;
	var uLocal_8714 = 10000;
	var uLocal_8715 = 0;
	var uLocal_8716 = 3;
	var uLocal_8717 = 500;
	var uLocal_8718 = 10000;
	var uLocal_8719 = 0;
	var uLocal_8720 = 3;
	var uLocal_8721 = 500;
	var uLocal_8722 = 10000;
	var uLocal_8723 = 0;
	var uLocal_8724 = 3;
	var uLocal_8725 = 500;
	var uLocal_8726 = 10000;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 3;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = -1;
	var uLocal_8740 = 0;
	var uLocal_8741 = 5;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 10;
	var uLocal_8753 = 3;
	var uLocal_8754 = 500;
	var uLocal_8755 = 10000;
	var uLocal_8756 = 0;
	var uLocal_8757 = 3;
	var uLocal_8758 = 500;
	var uLocal_8759 = 10000;
	var uLocal_8760 = 0;
	var uLocal_8761 = 3;
	var uLocal_8762 = 500;
	var uLocal_8763 = 10000;
	var uLocal_8764 = 0;
	var uLocal_8765 = 3;
	var uLocal_8766 = 500;
	var uLocal_8767 = 10000;
	var uLocal_8768 = 0;
	var uLocal_8769 = 3;
	var uLocal_8770 = 500;
	var uLocal_8771 = 10000;
	var uLocal_8772 = 0;
	var uLocal_8773 = 3;
	var uLocal_8774 = 500;
	var uLocal_8775 = 10000;
	var uLocal_8776 = 0;
	var uLocal_8777 = 3;
	var uLocal_8778 = 500;
	var uLocal_8779 = 10000;
	var uLocal_8780 = 0;
	var uLocal_8781 = 3;
	var uLocal_8782 = 500;
	var uLocal_8783 = 10000;
	var uLocal_8784 = 0;
	var uLocal_8785 = 3;
	var uLocal_8786 = 500;
	var uLocal_8787 = 10000;
	var uLocal_8788 = 0;
	var uLocal_8789 = 3;
	var uLocal_8790 = 500;
	var uLocal_8791 = 10000;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 3;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = -1;
	var uLocal_8805 = 0;
	var uLocal_8806 = 5;
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
	var uLocal_8817 = 10;
	var uLocal_8818 = 3;
	var uLocal_8819 = 500;
	var uLocal_8820 = 10000;
	var uLocal_8821 = 0;
	var uLocal_8822 = 3;
	var uLocal_8823 = 500;
	var uLocal_8824 = 10000;
	var uLocal_8825 = 0;
	var uLocal_8826 = 3;
	var uLocal_8827 = 500;
	var uLocal_8828 = 10000;
	var uLocal_8829 = 0;
	var uLocal_8830 = 3;
	var uLocal_8831 = 500;
	var uLocal_8832 = 10000;
	var uLocal_8833 = 0;
	var uLocal_8834 = 3;
	var uLocal_8835 = 500;
	var uLocal_8836 = 10000;
	var uLocal_8837 = 0;
	var uLocal_8838 = 3;
	var uLocal_8839 = 500;
	var uLocal_8840 = 10000;
	var uLocal_8841 = 0;
	var uLocal_8842 = 3;
	var uLocal_8843 = 500;
	var uLocal_8844 = 10000;
	var uLocal_8845 = 0;
	var uLocal_8846 = 3;
	var uLocal_8847 = 500;
	var uLocal_8848 = 10000;
	var uLocal_8849 = 0;
	var uLocal_8850 = 3;
	var uLocal_8851 = 500;
	var uLocal_8852 = 10000;
	var uLocal_8853 = 0;
	var uLocal_8854 = 3;
	var uLocal_8855 = 500;
	var uLocal_8856 = 10000;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 3;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = -1;
	var uLocal_8870 = 0;
	var uLocal_8871 = 5;
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
	var uLocal_8882 = 10;
	var uLocal_8883 = 3;
	var uLocal_8884 = 500;
	var uLocal_8885 = 10000;
	var uLocal_8886 = 0;
	var uLocal_8887 = 3;
	var uLocal_8888 = 500;
	var uLocal_8889 = 10000;
	var uLocal_8890 = 0;
	var uLocal_8891 = 3;
	var uLocal_8892 = 500;
	var uLocal_8893 = 10000;
	var uLocal_8894 = 0;
	var uLocal_8895 = 3;
	var uLocal_8896 = 500;
	var uLocal_8897 = 10000;
	var uLocal_8898 = 0;
	var uLocal_8899 = 3;
	var uLocal_8900 = 500;
	var uLocal_8901 = 10000;
	var uLocal_8902 = 0;
	var uLocal_8903 = 3;
	var uLocal_8904 = 500;
	var uLocal_8905 = 10000;
	var uLocal_8906 = 0;
	var uLocal_8907 = 3;
	var uLocal_8908 = 500;
	var uLocal_8909 = 10000;
	var uLocal_8910 = 0;
	var uLocal_8911 = 3;
	var uLocal_8912 = 500;
	var uLocal_8913 = 10000;
	var uLocal_8914 = 0;
	var uLocal_8915 = 3;
	var uLocal_8916 = 500;
	var uLocal_8917 = 10000;
	var uLocal_8918 = 0;
	var uLocal_8919 = 3;
	var uLocal_8920 = 500;
	var uLocal_8921 = 10000;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 3;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = -1;
	var uLocal_8935 = 0;
	var uLocal_8936 = 5;
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
	var uLocal_8947 = 10;
	var uLocal_8948 = 3;
	var uLocal_8949 = 500;
	var uLocal_8950 = 10000;
	var uLocal_8951 = 0;
	var uLocal_8952 = 3;
	var uLocal_8953 = 500;
	var uLocal_8954 = 10000;
	var uLocal_8955 = 0;
	var uLocal_8956 = 3;
	var uLocal_8957 = 500;
	var uLocal_8958 = 10000;
	var uLocal_8959 = 0;
	var uLocal_8960 = 3;
	var uLocal_8961 = 500;
	var uLocal_8962 = 10000;
	var uLocal_8963 = 0;
	var uLocal_8964 = 3;
	var uLocal_8965 = 500;
	var uLocal_8966 = 10000;
	var uLocal_8967 = 0;
	var uLocal_8968 = 3;
	var uLocal_8969 = 500;
	var uLocal_8970 = 10000;
	var uLocal_8971 = 0;
	var uLocal_8972 = 3;
	var uLocal_8973 = 500;
	var uLocal_8974 = 10000;
	var uLocal_8975 = 0;
	var uLocal_8976 = 3;
	var uLocal_8977 = 500;
	var uLocal_8978 = 10000;
	var uLocal_8979 = 0;
	var uLocal_8980 = 3;
	var uLocal_8981 = 500;
	var uLocal_8982 = 10000;
	var uLocal_8983 = 0;
	var uLocal_8984 = 3;
	var uLocal_8985 = 500;
	var uLocal_8986 = 10000;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 3;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = -1;
	var uLocal_9000 = 0;
	var uLocal_9001 = 5;
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
	var uLocal_9012 = 10;
	var uLocal_9013 = 3;
	var uLocal_9014 = 500;
	var uLocal_9015 = 10000;
	var uLocal_9016 = 0;
	var uLocal_9017 = 3;
	var uLocal_9018 = 500;
	var uLocal_9019 = 10000;
	var uLocal_9020 = 0;
	var uLocal_9021 = 3;
	var uLocal_9022 = 500;
	var uLocal_9023 = 10000;
	var uLocal_9024 = 0;
	var uLocal_9025 = 3;
	var uLocal_9026 = 500;
	var uLocal_9027 = 10000;
	var uLocal_9028 = 0;
	var uLocal_9029 = 3;
	var uLocal_9030 = 500;
	var uLocal_9031 = 10000;
	var uLocal_9032 = 0;
	var uLocal_9033 = 3;
	var uLocal_9034 = 500;
	var uLocal_9035 = 10000;
	var uLocal_9036 = 0;
	var uLocal_9037 = 3;
	var uLocal_9038 = 500;
	var uLocal_9039 = 10000;
	var uLocal_9040 = 0;
	var uLocal_9041 = 3;
	var uLocal_9042 = 500;
	var uLocal_9043 = 10000;
	var uLocal_9044 = 0;
	var uLocal_9045 = 3;
	var uLocal_9046 = 500;
	var uLocal_9047 = 10000;
	var uLocal_9048 = 0;
	var uLocal_9049 = 3;
	var uLocal_9050 = 500;
	var uLocal_9051 = 10000;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 3;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = -1;
	var uLocal_9065 = 0;
	var uLocal_9066 = 5;
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
	var uLocal_9077 = 10;
	var uLocal_9078 = 3;
	var uLocal_9079 = 500;
	var uLocal_9080 = 10000;
	var uLocal_9081 = 0;
	var uLocal_9082 = 3;
	var uLocal_9083 = 500;
	var uLocal_9084 = 10000;
	var uLocal_9085 = 0;
	var uLocal_9086 = 3;
	var uLocal_9087 = 500;
	var uLocal_9088 = 10000;
	var uLocal_9089 = 0;
	var uLocal_9090 = 3;
	var uLocal_9091 = 500;
	var uLocal_9092 = 10000;
	var uLocal_9093 = 0;
	var uLocal_9094 = 3;
	var uLocal_9095 = 500;
	var uLocal_9096 = 10000;
	var uLocal_9097 = 0;
	var uLocal_9098 = 3;
	var uLocal_9099 = 500;
	var uLocal_9100 = 10000;
	var uLocal_9101 = 0;
	var uLocal_9102 = 3;
	var uLocal_9103 = 500;
	var uLocal_9104 = 10000;
	var uLocal_9105 = 0;
	var uLocal_9106 = 3;
	var uLocal_9107 = 500;
	var uLocal_9108 = 10000;
	var uLocal_9109 = 0;
	var uLocal_9110 = 3;
	var uLocal_9111 = 500;
	var uLocal_9112 = 10000;
	var uLocal_9113 = 0;
	var uLocal_9114 = 3;
	var uLocal_9115 = 500;
	var uLocal_9116 = 10000;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 1;
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
	var uLocal_9133 = 65;
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
	var uLocal_9914 = 1097859072;
	var uLocal_9915 = 1101004800;
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
	var uLocal_9942 = 4;
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
	var uLocal_10014 = 40;
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
	var uLocal_10655 = 40;
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
	var uLocal_11296 = 60;
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
	var uLocal_12243 = 0;
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
	var uLocal_12257 = 15;
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
	var uLocal_12273 = 0;
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
	var uLocal_12296 = 0;
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
	var uLocal_12309 = 0;
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
	var uLocal_12322 = 0;
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
	var uLocal_12335 = 0;
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
	var uLocal_12348 = 0;
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
	var uLocal_12361 = 0;
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
	var uLocal_12374 = 0;
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
	var uLocal_12387 = 0;
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
	var uLocal_12400 = 0;
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
	var uLocal_12413 = 0;
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
	var uLocal_12426 = 0;
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
	var uLocal_12439 = 0;
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
	var uLocal_12452 = 0;
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
	var uLocal_12465 = 0;
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
	var uLocal_12478 = 0;
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
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 10;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = 0;
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
	var uLocal_12517 = 0;
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
	var uLocal_12528 = -1;
	var uLocal_12529 = 0;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 65;
	var uLocal_12541 = 0;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = -1569615261;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = -1569615261;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = 0;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = -1569615261;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 0;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = -1569615261;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = -1569615261;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = 0;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = -1569615261;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 0;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = -1569615261;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = -1569615261;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = -1569615261;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = -1569615261;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = 0;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = -1569615261;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = -1569615261;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = 0;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = -1569615261;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = 0;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = -1569615261;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = -1569615261;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = -1569615261;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = -1569615261;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = -1569615261;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = -1569615261;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = -1569615261;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 0;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = -1569615261;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = -1569615261;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = -1569615261;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = -1569615261;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = -1569615261;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = -1569615261;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = 0;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = -1569615261;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = -1569615261;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = -1569615261;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = -1569615261;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = -1569615261;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = -1569615261;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = -1569615261;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = -1569615261;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = -1569615261;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = -1569615261;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = -1569615261;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = -1569615261;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = -1569615261;
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
	var uLocal_13058 = -1569615261;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = 0;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = -1569615261;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = -1569615261;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = 0;
	var uLocal_13097 = -1569615261;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = -1569615261;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = 0;
	var uLocal_13115 = 0;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = -1569615261;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = -1569615261;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = -1569615261;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = -1569615261;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 0;
	var uLocal_13167 = 0;
	var uLocal_13168 = 0;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = -1569615261;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = -1569615261;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = -1569615261;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = -1569615261;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = -1569615261;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = -1569615261;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = -1569615261;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = -1569615261;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = 0;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = -1569615261;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = -1569615261;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = -1569615261;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 0;
	var uLocal_13311 = 0;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = -1569615261;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = 0;
	var uLocal_13331 = -1569615261;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = -1569615261;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = -1569615261;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = -1569615261;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = -1569615261;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 1;
	var uLocal_13402 = 30;
	var uLocal_13403 = -1;
	var uLocal_13404 = 0;
	var uLocal_13405 = 1;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 1065353216;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 1065353216;
	var uLocal_13419 = 1;
	var uLocal_13420 = 0;
	var uLocal_13421 = -1;
	var uLocal_13422 = 0;
	var uLocal_13423 = 1;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 1065353216;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 1065353216;
	var uLocal_13437 = 1;
	var uLocal_13438 = 0;
	var uLocal_13439 = -1;
	var uLocal_13440 = 0;
	var uLocal_13441 = 1;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 1065353216;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 1065353216;
	var uLocal_13455 = 1;
	var uLocal_13456 = 0;
	var uLocal_13457 = -1;
	var uLocal_13458 = 0;
	var uLocal_13459 = 1;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 1065353216;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 1065353216;
	var uLocal_13473 = 1;
	var uLocal_13474 = 0;
	var uLocal_13475 = -1;
	var uLocal_13476 = 0;
	var uLocal_13477 = 1;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 1065353216;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 1065353216;
	var uLocal_13491 = 1;
	var uLocal_13492 = 0;
	var uLocal_13493 = -1;
	var uLocal_13494 = 0;
	var uLocal_13495 = 1;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 1065353216;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 1065353216;
	var uLocal_13509 = 1;
	var uLocal_13510 = 0;
	var uLocal_13511 = -1;
	var uLocal_13512 = 0;
	var uLocal_13513 = 1;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 1065353216;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 1065353216;
	var uLocal_13527 = 1;
	var uLocal_13528 = 0;
	var uLocal_13529 = -1;
	var uLocal_13530 = 0;
	var uLocal_13531 = 1;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 1065353216;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 1065353216;
	var uLocal_13545 = 1;
	var uLocal_13546 = 0;
	var uLocal_13547 = -1;
	var uLocal_13548 = 0;
	var uLocal_13549 = 1;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 1065353216;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 1065353216;
	var uLocal_13563 = 1;
	var uLocal_13564 = 0;
	var uLocal_13565 = -1;
	var uLocal_13566 = 0;
	var uLocal_13567 = 1;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 1065353216;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 1065353216;
	var uLocal_13581 = 1;
	var uLocal_13582 = 0;
	var uLocal_13583 = -1;
	var uLocal_13584 = 0;
	var uLocal_13585 = 1;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 1065353216;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 1065353216;
	var uLocal_13599 = 1;
	var uLocal_13600 = 0;
	var uLocal_13601 = -1;
	var uLocal_13602 = 0;
	var uLocal_13603 = 1;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 1065353216;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 1065353216;
	var uLocal_13617 = 1;
	var uLocal_13618 = 0;
	var uLocal_13619 = -1;
	var uLocal_13620 = 0;
	var uLocal_13621 = 1;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 1065353216;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 1065353216;
	var uLocal_13635 = 1;
	var uLocal_13636 = 0;
	var uLocal_13637 = -1;
	var uLocal_13638 = 0;
	var uLocal_13639 = 1;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 1065353216;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 1065353216;
	var uLocal_13653 = 1;
	var uLocal_13654 = 0;
	var uLocal_13655 = -1;
	var uLocal_13656 = 0;
	var uLocal_13657 = 1;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 1065353216;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 1065353216;
	var uLocal_13671 = 1;
	var uLocal_13672 = 0;
	var uLocal_13673 = -1;
	var uLocal_13674 = 0;
	var uLocal_13675 = 1;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 1065353216;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 1065353216;
	var uLocal_13689 = 1;
	var uLocal_13690 = 0;
	var uLocal_13691 = -1;
	var uLocal_13692 = 0;
	var uLocal_13693 = 1;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 1065353216;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 1065353216;
	var uLocal_13707 = 1;
	var uLocal_13708 = 0;
	var uLocal_13709 = -1;
	var uLocal_13710 = 0;
	var uLocal_13711 = 1;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 1065353216;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 1065353216;
	var uLocal_13725 = 1;
	var uLocal_13726 = 0;
	var uLocal_13727 = -1;
	var uLocal_13728 = 0;
	var uLocal_13729 = 1;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 1065353216;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 1065353216;
	var uLocal_13743 = 1;
	var uLocal_13744 = 0;
	var uLocal_13745 = -1;
	var uLocal_13746 = 0;
	var uLocal_13747 = 1;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 1065353216;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 1065353216;
	var uLocal_13761 = 1;
	var uLocal_13762 = 0;
	var uLocal_13763 = -1;
	var uLocal_13764 = 0;
	var uLocal_13765 = 1;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 1065353216;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 1065353216;
	var uLocal_13779 = 1;
	var uLocal_13780 = 0;
	var uLocal_13781 = -1;
	var uLocal_13782 = 0;
	var uLocal_13783 = 1;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 1065353216;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 1065353216;
	var uLocal_13797 = 1;
	var uLocal_13798 = 0;
	var uLocal_13799 = -1;
	var uLocal_13800 = 0;
	var uLocal_13801 = 1;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 1065353216;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 1065353216;
	var uLocal_13815 = 1;
	var uLocal_13816 = 0;
	var uLocal_13817 = -1;
	var uLocal_13818 = 0;
	var uLocal_13819 = 1;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 1065353216;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 1065353216;
	var uLocal_13833 = 1;
	var uLocal_13834 = 0;
	var uLocal_13835 = -1;
	var uLocal_13836 = 0;
	var uLocal_13837 = 1;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 1065353216;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 1065353216;
	var uLocal_13851 = 1;
	var uLocal_13852 = 0;
	var uLocal_13853 = -1;
	var uLocal_13854 = 0;
	var uLocal_13855 = 1;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = 0;
	var uLocal_13861 = 0;
	var uLocal_13862 = 0;
	var uLocal_13863 = 0;
	var uLocal_13864 = 0;
	var uLocal_13865 = 1065353216;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 1065353216;
	var uLocal_13869 = 1;
	var uLocal_13870 = 0;
	var uLocal_13871 = -1;
	var uLocal_13872 = 0;
	var uLocal_13873 = 1;
	var uLocal_13874 = 0;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 0;
	var uLocal_13878 = 0;
	var uLocal_13879 = 0;
	var uLocal_13880 = 0;
	var uLocal_13881 = 0;
	var uLocal_13882 = 0;
	var uLocal_13883 = 1065353216;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 1065353216;
	var uLocal_13887 = 1;
	var uLocal_13888 = 0;
	var uLocal_13889 = -1;
	var uLocal_13890 = 0;
	var uLocal_13891 = 1;
	var uLocal_13892 = 0;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 0;
	var uLocal_13896 = 0;
	var uLocal_13897 = 0;
	var uLocal_13898 = 0;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 1065353216;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 1065353216;
	var uLocal_13905 = 1;
	var uLocal_13906 = 0;
	var uLocal_13907 = -1;
	var uLocal_13908 = 0;
	var uLocal_13909 = 1;
	var uLocal_13910 = 0;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 0;
	var uLocal_13914 = 0;
	var uLocal_13915 = 0;
	var uLocal_13916 = 0;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 1065353216;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 1065353216;
	var uLocal_13923 = 1;
	var uLocal_13924 = 0;
	var uLocal_13925 = -1;
	var uLocal_13926 = 0;
	var uLocal_13927 = 1;
	var uLocal_13928 = 0;
	var uLocal_13929 = 0;
	var uLocal_13930 = 0;
	var uLocal_13931 = 0;
	var uLocal_13932 = 0;
	var uLocal_13933 = 0;
	var uLocal_13934 = 0;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 1065353216;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 1065353216;
	var uLocal_13941 = 1;
	var uLocal_13942 = 0;
	var uLocal_13943 = 8;
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
	var uLocal_14038 = 0;
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
	var uLocal_14060 = 0;
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
	var uLocal_14082 = 0;
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
	var uLocal_14104 = 0;
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
	var uLocal_14272 = 8;
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
	var uLocal_14293 = -1;
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
	var uLocal_14315 = -1;
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
	var uLocal_14337 = -1;
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
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = 0;
	var uLocal_14358 = 0;
	var uLocal_14359 = -1;
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
	var uLocal_14381 = -1;
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
	var uLocal_14403 = -1;
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
	var uLocal_14425 = -1;
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
	var uLocal_14447 = -1;
	var uLocal_14448 = 0;
	var uLocal_14449 = 11;
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
	var uLocal_14560 = 2;
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
	var uLocal_14594 = 0;
	var uLocal_14595 = 2;
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
	var uLocal_14612 = -1;
	var uLocal_14613 = 0;
	var uLocal_14614 = 0;
	var uLocal_14615 = -1;
	var uLocal_14616 = -1082130432;
	var uLocal_14617 = 0;
	var uLocal_14618 = 0;
	var uLocal_14619 = 0;
	var uLocal_14620 = 0;
	var uLocal_14621 = 0;
	var uLocal_14622 = 0;
	var uLocal_14623 = 0;
	var uLocal_14624 = 0;
	var uLocal_14625 = 0;
	var uLocal_14626 = 0;
	var uLocal_14627 = 0;
	var uLocal_14628 = 0;
	var uLocal_14629 = 0;
	var uLocal_14630 = 0;
	var uLocal_14631 = 0;
	var uLocal_14632 = 0;
	var uLocal_14633 = 0;
	var uLocal_14634 = 0;
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
	var uLocal_14669 = 0;
	var uLocal_14670 = 0;
	var uLocal_14671 = 0;
	var uLocal_14672 = 0;
	var uLocal_14673 = 0;
	var uLocal_14674 = 0;
	var uLocal_14675 = 0;
	var uLocal_14676 = 0;
	var uLocal_14677 = 0;
	var uLocal_14678 = 0;
	var uLocal_14679 = 0;
	var uLocal_14680 = 0;
	var uLocal_14681 = 0;
	var uLocal_14682 = 0;
	var uLocal_14683 = 0;
	var uLocal_14684 = 0;
	var uLocal_14685 = 0;
	var uLocal_14686 = 0;
	var uLocal_14687 = 0;
	var uLocal_14688 = 0;
	var uLocal_14689 = 0;
	var uLocal_14690 = 0;
	var uLocal_14691 = 0;
	var uLocal_14692 = 0;
	var uLocal_14693 = 0;
	var uLocal_14694 = 0;
	var uLocal_14695 = 0;
	var uLocal_14696 = 0;
	var uLocal_14697 = 0;
	var uLocal_14698 = 24;
	var uLocal_14699 = 0;
	var uLocal_14700 = 0;
	var uLocal_14701 = 0;
	var uLocal_14702 = 0;
	var uLocal_14703 = 0;
	var uLocal_14704 = 0;
	var uLocal_14705 = 0;
	var uLocal_14706 = 0;
	var uLocal_14707 = 0;
	var uLocal_14708 = 0;
	var uLocal_14709 = 0;
	var uLocal_14710 = 0;
	var uLocal_14711 = 0;
	var uLocal_14712 = 0;
	var uLocal_14713 = 0;
	var uLocal_14714 = 0;
	var uLocal_14715 = 0;
	var uLocal_14716 = 0;
	var uLocal_14717 = 0;
	var uLocal_14718 = 0;
	var uLocal_14719 = 0;
	var uLocal_14720 = 0;
	var uLocal_14721 = 0;
	var uLocal_14722 = 0;
	var uLocal_14723 = 0;
	var uLocal_14724 = 0;
	var uLocal_14725 = 0;
	var uLocal_14726 = 0;
	var uLocal_14727 = 0;
	var uLocal_14728 = 0;
	var uLocal_14729 = 0;
	var uLocal_14730 = 0;
	var uLocal_14731 = 0;
	var uLocal_14732 = 0;
	var uLocal_14733 = 0;
	var uLocal_14734 = 0;
	var uLocal_14735 = 0;
	var uLocal_14736 = 0;
	var uLocal_14737 = 0;
	var uLocal_14738 = 0;
	var uLocal_14739 = 0;
	var uLocal_14740 = 0;
	var uLocal_14741 = 0;
	var uLocal_14742 = 0;
	var uLocal_14743 = 0;
	var uLocal_14744 = 0;
	var uLocal_14745 = 0;
	var uLocal_14746 = 0;
	var uLocal_14747 = 0;
	var uLocal_14748 = 0;
	var uLocal_14749 = 0;
	var uLocal_14750 = 0;
	var uLocal_14751 = 0;
	var uLocal_14752 = 0;
	var uLocal_14753 = 0;
	var uLocal_14754 = 0;
	var uLocal_14755 = 0;
	var uLocal_14756 = 0;
	var uLocal_14757 = 0;
	var uLocal_14758 = 0;
	var uLocal_14759 = 0;
	var uLocal_14760 = 0;
	var uLocal_14761 = 0;
	var uLocal_14762 = 0;
	var uLocal_14763 = 0;
	var uLocal_14764 = 0;
	var uLocal_14765 = 0;
	var uLocal_14766 = 0;
	var uLocal_14767 = 0;
	var uLocal_14768 = 0;
	var uLocal_14769 = 0;
	var uLocal_14770 = 0;
	var uLocal_14771 = 0;
	var uLocal_14772 = 0;
	var uLocal_14773 = 0;
	var uLocal_14774 = 0;
	var uLocal_14775 = 0;
	var uLocal_14776 = 0;
	var uLocal_14777 = 0;
	var uLocal_14778 = 0;
	var uLocal_14779 = 0;
	var uLocal_14780 = 0;
	var uLocal_14781 = 0;
	var uLocal_14782 = 0;
	var uLocal_14783 = 0;
	var uLocal_14784 = 0;
	var uLocal_14785 = 0;
	var uLocal_14786 = 0;
	var uLocal_14787 = 0;
	var uLocal_14788 = 0;
	var uLocal_14789 = 0;
	var uLocal_14790 = 0;
	var uLocal_14791 = 0;
	var uLocal_14792 = 0;
	var uLocal_14793 = 0;
	var uLocal_14794 = 0;
	var uLocal_14795 = 0;
	var uLocal_14796 = 0;
	var uLocal_14797 = 0;
	var uLocal_14798 = 0;
	var uLocal_14799 = 0;
	var uLocal_14800 = 0;
	var uLocal_14801 = 0;
	var uLocal_14802 = 0;
	var uLocal_14803 = 0;
	var uLocal_14804 = 0;
	var uLocal_14805 = 0;
	var uLocal_14806 = 0;
	var uLocal_14807 = 0;
	var uLocal_14808 = 0;
	var uLocal_14809 = 0;
	var uLocal_14810 = 0;
	var uLocal_14811 = 0;
	var uLocal_14812 = 0;
	var uLocal_14813 = 0;
	var uLocal_14814 = 0;
	var uLocal_14815 = 0;
	var uLocal_14816 = 0;
	var uLocal_14817 = 0;
	var uLocal_14818 = 0;
	var uLocal_14819 = 0;
	var uLocal_14820 = 0;
	var uLocal_14821 = 0;
	var uLocal_14822 = -1;
	var uLocal_14823 = 0;
	var uLocal_14824 = 0;
	var uLocal_14825 = 0;
	var uLocal_14826 = 0;
	var uLocal_14827 = 0;
	var uLocal_14828 = 0;
	var uLocal_14829 = 0;
	var uLocal_14830 = 0;
	var uLocal_14831 = 0;
	var uLocal_14832 = 0;
	var uLocal_14833 = 0;
	var uLocal_14834 = 0;
	var uLocal_14835 = 0;
	var uLocal_14836 = 0;
	var uLocal_14837 = 0;
	var uLocal_14838 = 0;
	var uLocal_14839 = 0;
	var uLocal_14840 = 0;
	var uLocal_14841 = 0;
	var uLocal_14842 = 0;
	var uLocal_14843 = 0;
	var uLocal_14844 = 0;
	var uLocal_14845 = 0;
	var uLocal_14846 = 0;
	var uLocal_14847 = 0;
	var uLocal_14848 = 0;
	var uLocal_14849 = -1;
	var uLocal_14850 = 20;
	var uLocal_14851 = 0;
	var uLocal_14852 = 0;
	var uLocal_14853 = 0;
	var uLocal_14854 = 0;
	var uLocal_14855 = 0;
	var uLocal_14856 = 0;
	var uLocal_14857 = 0;
	var uLocal_14858 = 0;
	var uLocal_14859 = 0;
	var uLocal_14860 = 0;
	var uLocal_14861 = 0;
	var uLocal_14862 = 0;
	var uLocal_14863 = 0;
	var uLocal_14864 = 0;
	var uLocal_14865 = 0;
	var uLocal_14866 = 0;
	var uLocal_14867 = 0;
	var uLocal_14868 = 0;
	var uLocal_14869 = 0;
	var uLocal_14870 = 0;
	var uLocal_14871 = 0;
	var uLocal_14872 = 0;
	var uLocal_14873 = 0;
	var uLocal_14874 = 0;
	var uLocal_14875 = 0;
	var uLocal_14876 = 0;
	var uLocal_14877 = 0;
	var uLocal_14878 = 1028443341;
	var uLocal_14879 = 1038174126;
	var uLocal_14880 = 1065353216;
	var uLocal_14881 = 1065353216;
	var uLocal_14882 = 1086324736;
	var uLocal_14883 = 1082130432;
	var uLocal_14884 = 1073741824;
	var uLocal_14885 = 1065353216;
	var uLocal_14886 = 1108082688;
	var uLocal_14887 = 1108082688;
	var uLocal_14888 = 3000;
	var uLocal_14889 = 1092616192;
	var uLocal_14890 = 0;
	var uLocal_14891 = 0;
	var uLocal_14892 = 0;
	var uLocal_14893 = 0;
	var uLocal_14894 = 0;
	var uLocal_14895 = 0;
	var uLocal_14896 = 0;
	var uLocal_14897 = 0;
	var uLocal_14898 = 0;
	var uLocal_14899 = 0;
	var uLocal_14900 = 0;
	var uLocal_14901 = 0;
	var uLocal_14902 = 0;
	var uLocal_14903 = 0;
	var uLocal_14904 = 0;
	var uLocal_14905 = 0;
	var uLocal_14906 = 0;
	var uLocal_14907 = 0;
	var uLocal_14908 = 0;
	var uLocal_14909 = 0;
	var uLocal_14910 = 0;
	var uLocal_14911 = 0;
	var uLocal_14912 = 0;
	var uLocal_14913 = 0;
	var uLocal_14914 = 0;
	var uLocal_14915 = 0;
	var uLocal_14916 = 0;
	var uLocal_14917 = 0;
	var uLocal_14918 = 0;
	var uLocal_14919 = 0;
	var uLocal_14920 = 0;
	var uLocal_14921 = 0;
	var uLocal_14922 = 0;
	var uLocal_14923 = 0;
	var uLocal_14924 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_175 = "marston8_Charles_route";
	cLocal_176 = "marston8_Bloodtrail";
	sLocal_177 = "marston8_Dragged_Ped";
	sLocal_178 = "marston8_Assist_route";
	iLocal_328 = 1;
	iLocal_329 = 2;
	iLocal_330 = 3;
	iLocal_331 = 4;
	iLocal_332 = 5;
	iLocal_333 = 6;
	iLocal_334 = 25;
	iLocal_335 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iLocal_336 = joaat("G_M_M_UNIMOUNTAINMEN_01");
	iLocal_337 = joaat("A_M_M_UNICORPSE_01");
	iLocal_338 = joaat("A_M_M_UNICORPSE_01");
	iLocal_339 = joaat("A_F_M_BLWTOWNFOLK_01");
	iLocal_340 = joaat("WAGONPRISON01X");
	iLocal_341 = joaat("P_CS_ROPE02X");
	iLocal_342 = joaat("P_NOOSE03X");
	iLocal_343 = joaat("P_TENT_LEENTO01X");
	iLocal_344 = joaat("P_TORCHPOST01X");
	iLocal_345 = joaat("P_BONESSKELETON02X");
	iLocal_346 = joaat("P_CAN01X");
	iLocal_347 = joaat("P_CS_WAGON02XBROKEN");
	iLocal_348 = joaat("P_CRATECOVER03X");
	iLocal_349 = joaat("P_CRATESTACK01X");
	iLocal_350 = joaat("P_CRATECOVER05X");
	iLocal_351 = joaat("P_BEECHERS_LADDER01X");
	iLocal_352 = joaat("P_CRATEWEAPONS04X");
	iLocal_353 = joaat("S_LUGGAGEPILE01X");
	iLocal_354 = joaat("P_PRISONCAGE01X");
	iLocal_355 = joaat("P_BAT_LUMBER05X");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_4__::func_935(&uLocal_1745, 1073741824 /* Float: 2f */);
		func_2(&uLocal_1745, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_1745);
	func_5(&uLocal_1745);
	while (!__LIB_4__::func_936(&uLocal_1745, -2147483648))
	{
		func_7(&uLocal_1745);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_1745, 0))
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
	__LIB_11__::func_732(uParam0, 0, !bVar2, bVar2);
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
					__LIB_11__::func_238();
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
	iLocal_78 = __LIB_4__::func_950(uParam0);
	iLocal_78 = iLocal_78;
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
	__LIB_10__::func_910(uParam0);
	__LIB_8__::func_800(uParam0, __LIB_4__::func_939(uParam0));
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
			__LIB_0__::func_16(uParam0);
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
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		__LIB_4__::func_935(uParam0, 4);
	}
	AITRANSPORT::_0xBA8818212633500A(iLocal_1460, 0, 0);
	PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	HUD::_0x160825DADF1B04B3();
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1656[8]))
	{
		PATHFIND::_0xD17672447692478E(iLocal_1656[8], 0);
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1656[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1656[iVar0]);
		}
		iVar0++;
	}
	if (!__LIB_0__::func_255(uLocal_1456[0], 0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(uLocal_1456[0], "Stealth", 0f, -1);
	}
	if (!__LIB_0__::func_255(Global_35, 0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_1653))
	{
		MAP::REMOVE_BLIP(&iLocal_1653);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_1654))
	{
		MAP::REMOVE_BLIP(&iLocal_1654);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_1655))
	{
		MAP::REMOVE_BLIP(&iLocal_1655);
	}
	func_164();
	__LIB_0__::func_11();
	__LIB_0__::func_11();
	__LIB_0__::func_11();
	func_168();
	func_169();
	__LIB_5__::func_547(1);
	__LIB_0__::func_893(4);
	PED::SET_PED_CONFIG_FLAG(uLocal_1456[0], 273, false);
	__LIB_2__::func_788(&(uLocal_1456[0]), 1, 0, 1);
	__LIB_2__::func_788(&(uLocal_1456[1]), 1, 0, 1);
	__LIB_2__::func_788(&iLocal_1459, 1, 0, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1460))
	{
		__LIB_2__::func_788(&iLocal_1460, 1, 0, 1);
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	__LIB_11__::func_732(uParam0, 0, 0, 1);
	__LIB_1__::func_288(4, __LIB_1__::func_291(4, 8, 1, 1), 1);
	iVar1 = 0;
	while (iVar1 <= 12)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uLocal_1442[iVar1]), 0);
		iVar1++;
	}
	__LIB_0__::func_172(iLocal_1656[1]);
	PLAYER::_0xDFC85C5199045026(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 0);
	iLocal_80 = 0;
	if (__LIB_11__::func_16(__LIB_4__::func_938(uParam0)))
	{
		__LIB_11__::func_64(uParam0->f_607, 3, 30, 0);
	}
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	if (iParam0 == iLocal_327)
	{
		__LIB_4__::func_954(&Var0, __LIB_7__::func_122(-1598f, -1419f, 85.2f, 56.1916f));
	}
	else if (iParam0 == iLocal_328)
	{
		__LIB_4__::func_954(&Var0, __LIB_7__::func_122(-1642.5f, -1372.6f, 84.5f, 56.1916f));
	}
	else if (iParam0 == iLocal_329)
	{
		__LIB_4__::func_954(&Var0, __LIB_7__::func_122(-2016.7f, -1382.4f, 119.4f, 156.0272f));
	}
	else if (iParam0 == iLocal_330)
	{
		__LIB_4__::func_954(&Var0, __LIB_7__::func_122(func_216(2, 10), -151f));
	}
	else if (iParam0 == iLocal_331)
	{
		__LIB_4__::func_954(&Var0, __LIB_7__::func_122(func_216(2, 8), 193.4264f));
	}
	else if (iParam0 == iLocal_332)
	{
		__LIB_4__::func_954(&Var0, __LIB_7__::func_122(-2066.6f, -1443.4f, 128.7f, 71.0272f));
	}
	else if (iParam0 == iLocal_333)
	{
		__LIB_4__::func_954(&Var0, __LIB_7__::func_122(-2127.6f, -1387.8f, 131.6f, 130.0272f));
	}
	else if (iParam0 == iLocal_334)
	{
		__LIB_4__::func_954(&Var0, __LIB_7__::func_122(-1604.521f, -1405.882f, 80.942f, 251.6454f));
	}
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
		func_273(uParam0);
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
					__LIB_9__::func_212(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_310(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_350();
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
							func_310(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	func_374(uParam0);
	uParam0->f_634[0] = 62613;
	uParam0->f_634[1] = 62613;
	uParam0->f_637 = 0;
	__LIB_4__::func_960(uParam0, *uParam1);
	func_377(uParam0);
}

void func_109(var uParam0)
{
	__LIB_4__::func_961(uParam0, func_378(1, 2));
}

void func_123(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		func_382(&(uParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_384(Param0, Param0.f_3);
}

void func_138(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		Local_14 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_5__::func_338(uParam0, joaat("P_BEECHERS_LADDER01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_BARREL03X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_DEBRIS03X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_BONESHUMAN02X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CRATEWEAPONSBREAK02X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_TORCHPOST01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CRATESTACK01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_MASSGRAVE01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CRATECOVER01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("G_M_M_UNIMOUNTAINMEN_01"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_BEECHERS_LADDER01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_BARREL03X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_DEBRIS03X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_BONESHUMAN02X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CRATEWEAPONSBREAK02X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_TORCHPOST01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CRATESTACK01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_MASSGRAVE01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CRATECOVER01X"), 67108863);
}

int func_139(var uParam0)
{
	__LIB_5__::func_338(uParam0, iLocal_335, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_336, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_337, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_340, 4);
	__LIB_5__::func_338(uParam0, joaat("P_DETONATOR01X"), 60);
	__LIB_5__::func_338(uParam0, iLocal_342, 60);
	__LIB_5__::func_338(uParam0, joaat("P_HAMMER01X"), 1);
	__LIB_5__::func_338(uParam0, joaat("P_NAILSINGLE01X"), 1);
	__LIB_5__::func_338(uParam0, joaat("P_BOTTLEJD01X"), 3);
	__LIB_5__::func_338(uParam0, joaat("P_WHISKEYGLASS01X"), 3);
	__LIB_5__::func_338(uParam0, joaat("P_GLASS01X"), 3);
	__LIB_5__::func_338(uParam0, joaat("P_CS_ROPE01X"), 3);
	__LIB_5__::func_338(uParam0, joaat("P_CS_ROPELASSO01X"), 3);
	__LIB_5__::func_338(uParam0, joaat("P_FEATHER01X"), 3);
	__LIB_5__::func_338(uParam0, joaat("P_PAPER01X"), 3);
	__LIB_5__::func_338(uParam0, joaat("S_CRATESEAT03X"), 3);
	__LIB_5__::func_338(uParam0, joaat("P_STICK02X"), 3);
	__LIB_5__::func_338(uParam0, joaat("P_STICK04X"), 3);
	__LIB_5__::func_338(uParam0, joaat("P_KNIFE01X"), 8);
	__LIB_5__::func_338(uParam0, joaat("S_ROPEHOGTIEHANDS01X"), 28);
	__LIB_5__::func_338(uParam0, joaat("S_ROPEHOGTIEHANDSMEDIUM01X"), 28);
	__LIB_5__::func_338(uParam0, joaat("S_ROPEHOGTIELEGS01X"), 28);
	__LIB_5__::func_338(uParam0, joaat("S_ROPEHOGTIELEGSMEDIUM01X"), 28);
	__LIB_5__::func_338(uParam0, iLocal_339, 4);
	__LIB_5__::func_338(uParam0, iLocal_338, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_341, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_343, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_344, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_345, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_346, 2);
	__LIB_5__::func_338(uParam0, iLocal_347, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_348, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_350, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_351, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_352, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_349, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_354, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_353, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_355, 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_HAMMER01X"), 1);
	__LIB_5__::func_338(uParam0, joaat("P_NAILSINGLE01X"), 1);
	__LIB_8__::func_792(uParam0, func_402(4), &(uLocal_202[4]), 2, 0, 0, 0, 1);
	__LIB_8__::func_792(uParam0, func_402(4), &(uLocal_202[16]), 524288, 2, 0, 0, 1);
	__LIB_8__::func_792(uParam0, func_402(5), &(uLocal_202[5]), 2, 0, 0, 0, 1);
	__LIB_8__::func_792(uParam0, func_402(9), &(uLocal_202[9]), 16, 2, "pbl_ACTION_fail", 0, 1);
	__LIB_8__::func_792(uParam0, func_402(3), &(uLocal_202[3]), 8, 0, 0, 0, 1);
	__LIB_8__::func_792(uParam0, func_402(10), &(uLocal_202[10]), 48, 0, "pbl_ACTION_01_walk", 0, 1);
	__LIB_8__::func_792(uParam0, func_402(11), &(uLocal_202[11]), 32, 0, "pbl_ACTION_02_walk", 0, 1);
	__LIB_8__::func_792(uParam0, func_402(12), &(uLocal_202[12]), 32, 0, "pbl_ACTION_03_walk", 0, 1);
	__LIB_8__::func_792(uParam0, func_402(13), &(uLocal_202[13]), 32, 0, "pbl_ACTION_04_walk", 0, 1);
	__LIB_8__::func_792(uParam0, func_402(14), &(uLocal_202[14]), 32, 0, "pbl_action_04_jump_up_horse", 0, 1);
	__LIB_5__::func_565(uParam0, sLocal_175, 71, 2, -1);
	__LIB_5__::func_565(uParam0, cLocal_176, 70, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_177, 4, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_178, 96, 2, -1);
	__LIB_11__::func_61(uParam0, joaat("AMB_CAMP_BGV_SKINNERS"), 124);
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
		if (__LIB_8__::func_808(uParam0, __LIB_5__::func_475(uParam0), 0))
		{
			__LIB_5__::func_334(uParam0, __LIB_5__::func_475(uParam0), 536870912);
		}
	}
	if (__LIB_4__::func_937(uParam0, 8192))
	{
		if (!__LIB_4__::func_937(uParam0, 536870912))
		{
			if (__LIB_5__::func_569(&(uParam0->f_1126), __LIB_4__::func_939(uParam0)))
			{
				__LIB_4__::func_944(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_8__::func_808(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_4__::func_944(uParam0, 8192);
	}
}

bool func_158(var uParam0)
{
	if (__LIB_4__::func_962(uParam0) < 1)
	{
		func_416(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0);
		func_417(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_418(uParam0);
			}
		}
		if (__LIB_4__::func_948(uParam0, 32))
		{
			func_419(uParam0);
		}
	}
	switch (__LIB_4__::func_962(uParam0))
	{
		case -1:
		case 0:
			__LIB_4__::func_963(uParam0, 1);
			break;
		case 1:
			if (func_421(uParam0))
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
			if (func_423(uParam0))
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
	if (func_425(uParam0))
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
			func_425(uParam0);
		}
	}
	return false;
}

void func_164()
{
	GRAPHICS::_0xDD0BC0EDCB2162F6(joaat("AMB_CAMP_BGV_SKINNERS"));
	GRAPHICS::_0xDD0BC0EDCB2162F6(506519174);
	STREAMING::_REMOVE_IMAP(joaat("AMB_CAMP_BGV_SKINNERS"));
	STREAMING::_REMOVE_IMAP(506519174);
	__LIB_5__::func_440("mar8_skinnercamp");
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(uLocal_1720[0]));
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(uLocal_1720[1]));
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(uLocal_1720[2]));
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(uLocal_1720[3]));
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(uLocal_1720[4]));
}

void func_168()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		__LIB_2__::func_788(&(Local_356[iVar0 /*28*/]), 1, 0, 1);
		if (MAP::DOES_BLIP_EXIST(Local_356[iVar0 /*28*/].f_15))
		{
			MAP::REMOVE_BLIP(&(Local_356[iVar0 /*28*/].f_15));
		}
		iVar0++;
	}
}

void func_169()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		__LIB_2__::func_788(&(Local_525[iVar0 /*28*/]), 1, 0, 1);
		if (MAP::DOES_BLIP_EXIST(Local_525[iVar0 /*28*/].f_15))
		{
			MAP::REMOVE_BLIP(&(Local_525[iVar0 /*28*/].f_15));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_2__::func_788(&(Local_666[iVar0 /*28*/]), 1, 0, 1);
		if (MAP::DOES_BLIP_EXIST(Local_666[iVar0 /*28*/].f_15))
		{
			MAP::REMOVE_BLIP(&(Local_666[iVar0 /*28*/].f_15));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_2__::func_788(&(Local_723[iVar0 /*28*/]), 1, 0, 1);
		if (MAP::DOES_BLIP_EXIST(Local_723[iVar0 /*28*/].f_15))
		{
			MAP::REMOVE_BLIP(&(Local_723[iVar0 /*28*/].f_15));
		}
		iVar0++;
	}
}

Vector3 func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1606.352f, -1405.147f, 80.9438f;
				case 1:
					return -1606.026f, -1407.531f, 80.9361f;
				case 2:
					return -1604.082f, -1403.868f, 80.9598f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1646.146f, -1368.044f, 83.402f;
				case 1:
					return -1649.989f, -1369.677f, 83.402f;
				case 2:
					return -1645.994f, -1376.13f, 82.9664f;
				case 3:
					return -1647.705f, -1375.092f, 82.964f;
				case 4:
					return -1943.591f, -1341.822f, 108.8434f;
				case 5:
					return -1628.409f, -1236.533f, 77.3243f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2052.951f, -1376.251f, 122.1703f;
				case 1:
					return -2079.633f, -1393.263f, 128.4204f;
				case 2:
					return -2086.827f, -1420.447f, 131.3057f;
				case 3:
					return -1951.59f, -1338.622f, 108.9646f;
				case 4:
					return -1947.137f, -1329.651f, 107.4578f;
				case 5:
					return -1949.831f, -1333.517f, 108.1061f;
				case 6:
					return -2068.568f, -1378.193f, 124.3506f;
				case 7:
					return -2052.882f, -1382.301f, 122.3801f;
				case 8:
					return -2080.343f, -1425.442f, 133.7332f;
				case 9:
					return -2086.63f, -1425.582f, 132.614f;
				case 10:
					return -2088.886f, -1413.875f, 131.114f;
				case 11:
					return -2087.249f, -1418.562f, 131.364f;
				case 12:
					return -2083.922f, -1428.102f, 132.468f;
				case 13:
					return -2089.443f, -1414.961f, 131.0912f;
				case 14:
					return -2086.028f, -1421.677f, 131.4788f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -2067.409f, -1449.658f, 127.7156f;
				case 1:
					return -2065.744f, -1449.715f, 127.4928f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2103.103f, -1428.208f, 127.7778f;
				case 1:
					return -2123.495f, -1390.516f, 130.7056f;
				case 2:
					return -2122.903f, -1389.944f, 131.3189f;
				case 3:
					return -2096.659f, -1404.886f, 130.9995f;
				case 4:
					return -2123.85f, -1389.073f, 130.7614f;
				case 5:
					return -2120.298f, -1411.999f, 130.0797f;
				case 6:
					return -2119.538f, -1385.25f, 132.09f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2071.515f, -1376.599f, 123.7521f;
				case 1:
					return -2067.224f, -1386.845f, 127.164f;
				case 2:
					return -2064.402f, -1391.052f, 126.4586f;
				case 3:
					return -2070.525f, -1385.192f, 126.0627f;
				case 4:
					return -2105.6f, -1390.8f, 131.3f;
				case 5:
					return -2094.6f, -1406.7f, 132.2f;
				case 6:
					return -2100.7f, -1397.2f, 131.7f;
				case 7:
					return -2067.699f, -1375.723f, 123.8736f;
				case 8:
					return -2053.896f, -1377.829f, 122.35f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -2068.899f, -1464.688f, 131.0216f;
				case 1:
					return -2067.771f, -1457.842f, 127.8045f;
				case 2:
					return -2072.91f, -1451.945f, 127.866f;
				case 3:
					return -2075.314f, -1442.782f, 127.7675f;
				case 4:
					return -2086.149f, -1458.042f, 131.45f;
				case 5:
					return -2122.7f, -1403.2f, 131.3f;
				case 6:
					return -2051.8f, -1471.359f, 126.1665f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -2097.56f, -1420.738f, 133.55f;
				case 1:
					return -2102.683f, -1438.345f, 133.75f;
				case 2:
					return -2110.467f, -1434.102f, 136f;
				case 3:
					return -2101.13f, -1419.028f, 133.3963f;
				case 4:
					return -2124.612f, -1417.406f, 137.65f;
				case 5:
					return -2120.754f, -1425.645f, 133.8764f;
				case 6:
					return -2113.636f, -1423.71f, 129.8755f;
				case 7:
					return -2121.9f, -1390.1f, 131.1f;
				case 8:
					return -2131f, -1390.1f, 131.5f;
				case 9:
					return -2137.749f, -1398.239f, 137.682f;
				case 10:
					return -2109.333f, -1408.848f, 134.8146f;
				case 11:
					return -2125.482f, -1402.051f, 130.1373f;
				case 12:
					return -2087.932f, -1433.058f, 134.5549f;
				case 13:
					return -2086.584f, -1445.957f, 131.5824f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -2074.6f, -1358.6f, 123.3f;
				case 1:
					return -2122.6f, -1364.6f, 129.3f;
				case 2:
					return -2128.6f, -1388f, 132f;
				case 3:
					return -2049.3f, -1382.6f, 123.4f;
				case 4:
					return -2068.3f, -1373.6f, 123.2f;
				case 5:
					return -2063.9f, -1385.6f, 126.1f;
				case 6:
					return -2091.9f, -1396.6f, 130.5f;
				case 7:
					return -2058.1f, -1378.6f, 124f;
				case 8:
					return -2101.6f, -1391.5f, 130.7f;
				case 9:
					return -2082.2f, -1414.5f, 131.8f;
				case 10:
					return -2091.2f, -1384.5f, 129f;
				case 11:
					return -2051.328f, -1380.019f, 122.0395f;
				case 12:
					return -2119.364f, -1410.866f, 129.8832f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -2184.641f, -1407.336f, 137.7132f;
				case 1:
					return -1632.589f, -1352.228f, 82.6073f;
				case 2:
					return -2072.463f, -1443.072f, 128.1952f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2090.257f, -1435.902f, 127.7519f;
				case 1:
					return -2103.076f, -1424.952f, 128.0095f;
				case 2:
					return -2118.303f, -1418.349f, 130.5069f;
				case 3:
					return -2128.755f, -1392.925f, 130.9532f;
				case 4:
					return -2075.364f, -1443.134f, 127.5111f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -1646.761f, -1233.054f, 78.687f;
				case 1:
					return -1651.507f, -1234.849f, 79.4899f;
				case 2:
					return -1658.442f, -1240.239f, 81.142f;
				case 3:
					return -1667.347f, -1240.968f, 82.3984f;
				case 4:
					return -1668.825f, -1241.907f, 82.6493f;
				case 5:
					return -1683.527f, -1249.88f, 85.0656f;
				case 6:
					return -1687.864f, -1250.987f, 85.7476f;
				case 7:
					return -1696.354f, -1255.593f, 86.6709f;
				case 8:
					return -1703.068f, -1261.649f, 87.6621f;
				case 9:
					return -1712.414f, -1266.641f, 89.167f;
				case 10:
					return -1710.56f, -1266.979f, 89.0932f;
				case 11:
					return -1718.584f, -1270.697f, 90.3446f;
				case 12:
					return -1765.565f, -1286.085f, 90.7204f;
				case 13:
					return -1779.875f, -1293.134f, 91.1126f;
				case 14:
					return -1806.566f, -1295.469f, 92.7444f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_273(var uParam0)
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
		if (func_417(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
				func_310(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_4__::func_469(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
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

void func_312()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_624();
	func_625();
	func_626();
	func_627();
	func_628();
	__LIB_1__::func_848();
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
	func_631(iParam0, 1, 1, -142743235, 1);
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_670(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_374(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_709(uParam0, iVar0);
		iVar0++;
	}
}

void func_377(var uParam0)
{
	__LIB_5__::func_476(uParam0, iLocal_327, iLocal_328, 109260, 109279, 109373, 109392, 109436, "MAR8_INT", 74, -1);
	__LIB_5__::func_476(uParam0, iLocal_328, iLocal_329, 109804, 109899, 109932, 110636, 111212, "", 524360, -1);
	__LIB_5__::func_476(uParam0, iLocal_329, iLocal_330, 111323, 111456, 111537, 111671, 112145, "", 72, -1);
	__LIB_5__::func_476(uParam0, iLocal_330, iLocal_331, 112229, 112488, 112720, 113011, 114376, "MAR8_MCS2", 74, -1);
	__LIB_5__::func_476(uParam0, iLocal_331, iLocal_332, 114641, 114796, 114973, 115038, 116097, "", 72, -1);
	__LIB_5__::func_476(uParam0, iLocal_332, iLocal_333, 116126, 116267, 116416, 116678, 118071, "", 72, -1);
	__LIB_5__::func_476(uParam0, iLocal_333, iLocal_334, 118151, 118319, 118412, 118518, 119264, "", 72, -1);
	__LIB_5__::func_476(uParam0, iLocal_334, 26, 119300, 119358, 119395, 119469, 119503, "MAR8_EXT", 90, -1);
	__LIB_5__::func_334(uParam0, 26, 16);
}

Vector3 func_378(int iParam0, int iParam1)
{
	return func_216(iParam0, iParam1);
}

void func_382(var uParam0)
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
		func_755(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_757(uParam0);
		func_758(uParam0);
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

int func_384(vector3 vParam0, var uParam3)
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
		iVar0 = func_766(0, 0);
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

char[] func_402(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "cutscene@mar8_int";
			break;
		case 2:
			sVar0 = "cutscene@mar8_mcs2";
			break;
		case 3:
			sVar0 = "script@story@mar8@leadout@mcs2@deadeye";
			break;
		case 4:
			sVar0 = "script@timelapse@mar8_timelapse";
			break;
		case 5:
			sVar0 = "script@story@mar8@ig@ig2_dismount@ig2_dismount_charles";
			break;
		case 6:
			sVar0 = "script@story@fus2@ig@fus2_ig30_hanging_help@fus2_ig30_hanging_help";
			break;
		case 7:
			sVar0 = "script@story@mar8@ig@ig4_save@ig4_save";
			break;
		case 8:
			sVar0 = "script@story@mar8@ig@ig4_save@ig4_save";
			break;
		case 9:
			sVar0 = "script@story@mar8@ig@ig4_save@ig4_save";
			break;
		case 10:
			sVar0 = "script@story@mar8@ig@ig5_carry@ig5_carry";
			break;
		case 11:
			sVar0 = "script@story@mar8@ig@ig5_carry@ig5_carry";
			break;
		case 12:
			sVar0 = "script@story@mar8@ig@ig5_carry@ig5_carry";
			break;
		case 13:
			sVar0 = "script@story@mar8@ig@ig5_carry@ig5_carry";
			break;
		case 14:
			sVar0 = "script@story@mar8@ig@ig5_carry@ig5_carry";
			break;
		case 15:
			sVar0 = "script@story@mar8@leadin@ext@leadin";
			break;
		case 16:
			sVar0 = "cutscene@mar8_ext";
			break;
	}
	return sVar0;
}

bool func_416(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	if (func_824(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_417(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
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
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
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
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
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
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_832(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
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

void func_418(var uParam0)
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
		if (func_834(&(uParam0->f_609), uParam0->f_607))
		{
			__LIB_4__::func_945(uParam0, 32);
		}
	}
}

void func_419(var uParam0)
{
	struct<4> Var0;
	if (!__LIB_4__::func_948(uParam0, 128))
	{
		if (__LIB_4__::func_948(uParam0, 16384))
		{
			__LIB_5__::func_284(uParam0);
			if (func_836(uParam0))
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
			if (func_838(uParam0, Var0))
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

bool func_421(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_8__::func_910(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_416(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_417(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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

bool func_423(var uParam0)
{
	if (!func_844(uParam0))
	{
		return false;
	}
	if (!func_845())
	{
		return false;
	}
	__LIB_0__::func_11();
	if (__LIB_4__::func_939(uParam0) != iLocal_327 && __LIB_4__::func_939(uParam0) != iLocal_328)
	{
		func_847();
		func_848();
	}
	__LIB_0__::func_267(0);
	__LIB_0__::func_395(1);
	__LIB_10__::func_768(1);
	__LIB_1__::func_572(-1935.3f, -1368.2f, 107.8f, 30f, 0, 0, 0, 0, 0);
	__LIB_0__::func_568(-1935.3f, -1368.2f, 107.8f, 30f, 0);
	__LIB_5__::func_106(uParam0, Global_35, "JOHN", 0);
	func_852(__LIB_4__::func_939(uParam0));
	__LIB_5__::func_256(uParam0, 134721);
	func_855(__LIB_4__::func_939(uParam0));
	WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
	CLOCK::PAUSE_CLOCK(true, 0);
	func_856();
	iLocal_1656[8] = VOLUME::_CREATE_VOLUME_SPHERE(-2042.674f, -1307.82f, 116.7405f, 0f, 0f, 0f, 200f, 200f, 200f);
	PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1656[8], 0, 0, 0);
	__LIB_5__::func_521(0.7f);
	return true;
}

bool func_425(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_858(uParam0);
	__LIB_10__::func_929(uParam0);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_475(uParam0);
	iVar2 = __LIB_5__::func_279(uParam0, iVar0);
	if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_836(uParam0);
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
		__LIB_11__::func_62(uParam0);
	}
	if ((__LIB_4__::func_939(uParam0) == 0 && iVar2 < 3) && __LIB_5__::func_253(uParam0) == 0)
	{
		func_419(uParam0);
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
			if (__LIB_8__::func_910(uParam0))
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
					if (func_875(uParam0, iVar0, iVar1))
					{
						__LIB_5__::func_286(uParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_5__::func_482(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 3);
					if (func_877(uParam0, iVar0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 4);
						if (func_875(uParam0, iVar0, iVar1))
						{
							__LIB_5__::func_286(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_5__::func_52(uParam0))
			{
				func_877(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_877(uParam0, iVar0))
			{
				__LIB_5__::func_286(uParam0, iVar0, 4);
				if (func_875(uParam0, iVar0, iVar1))
				{
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_875(uParam0, iVar0, iVar1))
			{
				__LIB_5__::func_286(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_18__::func_385(uParam0, iVar0);
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
						__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
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
						__LIB_8__::func_710(0);
					}
					__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 4194304);
				}
				if ((__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_4__::func_948(uParam0, 8192)) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
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
				__LIB_18__::func_385(uParam0, iVar0);
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
			if ((!__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_4__::func_948(uParam0, 8192)) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
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
					__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
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

void func_624()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1081(0);
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
	func_1081(1);
}

void func_625()
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

void func_626()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1084(0);
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
	func_1084(1);
}

void func_627()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1084(0);
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
	func_1084(1);
}

void func_628()
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
				func_631(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_631(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_631(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_631(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_670(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1129(iVar0, iVar1, 1, 0, 0) * iVar2);
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
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_709(var uParam0, int iParam1)
{
	func_1155(uParam0, iParam1);
	__LIB_5__::func_292(uParam0, iParam1, 26);
}

bool func_711(var uParam0)
{
	__LIB_4__::func_944(uParam0, 512);
	func_1157(0, uParam0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
	__LIB_3__::func_618(-1641.1f, -1358.7f, 84.4f, 100f, 1, 0, 0, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_713(var uParam0)
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	__LIB_11__::func_719(uParam0);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

bool func_714(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1370))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1370);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1371))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1371);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1372))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1372);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1373))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1373);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1374);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1375))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1375);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1376))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1376);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1377))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1377);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1378))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1378);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1379))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1379);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1380))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1380);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1381))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1381);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1382))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1382);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_716(var uParam0)
{
	ENTITY::SET_ENTITY_COORDS(func_1164(uParam0), -1647.724f, -1380.479f, 82.9748f, true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(func_1164(uParam0), 55.9328f);
	ENTITY::SET_ENTITY_COORDS(iLocal_1459, -1645.2f, -1377.4f, 83.4f, true, false, true, true);
	__LIB_0__::func_489(0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_717(var uParam0)
{
	__LIB_5__::func_548(1);
	PLAYER::_0xDFC85C5199045026(PLAYER::PLAYER_ID(), 0f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_718(var uParam0)
{
	if (!__LIB_10__::func_529(&(uLocal_202[5]), func_402(5), 0, "pbl_action"))
	{
		return false;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[5], "pbl_action");
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_BOW"), 30, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_BOW"), 0);
	__LIB_0__::func_188(1);
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1456[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1459))
	{
		__LIB_1__::func_571(uLocal_1456[0], iLocal_1459, 0, -1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(func_1164(uParam0)))
	{
		__LIB_1__::func_571(Global_35, func_1164(uParam0), 0, -1, 1);
	}
	if (!func_1169(1))
	{
		WEAPON::_0x899A04AFCC725D04(uLocal_1456[0], joaat("LO_CHARLES"));
		__LIB_0__::func_203(uLocal_1456[0]);
		func_1171(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1370))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1370);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1371))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1371);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1372))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1372);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1373))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1373);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1374);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1375))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1375);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1376))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1376);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1377))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1377);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1378))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1378);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1379))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1379);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1380))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1380);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1381))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1381);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1382))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1382);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1462))
	{
		iLocal_1462 = __LIB_1__::func_545(iLocal_335, -1780.5f, -1354.8f, 93.2f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::_0xCAC43D060099EA72(iLocal_1462);
		return false;
	}
	__LIB_11__::func_650(uParam0, 4, uLocal_1456[1], 0, 1, 1, 0);
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
	CLOCK::SET_CLOCK_TIME(7, 0, 0);
	CLOCK::PAUSE_CLOCK(false, 0);
	__LIB_0__::func_11();
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Searching", 1f, -1);
	PED::_SET_PED_BLACKBOARD_FLOAT(uLocal_1456[0], "Searching", 1f, -1);
	__LIB_11__::func_59(uParam0, 0);
	func_1173(&iLocal_1475, &(uLocal_1456[0]), 1, 5);
	__LIB_18__::func_368(iLocal_1475, &Global_35, 0);
	__LIB_2__::func_259(&uLocal_1415);
	func_1175(uParam0);
	func_1176(joaat("MAR8_RIDE1"));
	return uParam0->f_607 == uParam0->f_607;
}

int func_719(var uParam0)
{
	int iVar0;
	func_1177(uParam0);
	func_1178(uParam0);
	if (CLOCK::GET_CLOCK_HOURS() >= 11)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			func_1175(uParam0);
			func_1179(0);
			func_1157(5, uParam0);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 1:
			if (func_1175(uParam0))
			{
				func_1171(8);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			__LIB_9__::func_204(Global_35, func_216(1, 4), &uLocal_1729, 40f, 25f, 1097859072 /* Float: 15f */, 14f, 5f, 0, 0, 1, 1, 1);
			__LIB_9__::func_204(uLocal_1456[0], func_216(1, 4), &uLocal_1726, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 10f, 5f, 0, 0, 1, 1, 1);
			if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[5], false) && func_1181("MAR8_IG2_DISM")) && !__LIB_1__::func_322("MAR8_IG2_DISM"))
			{
				func_1171(9);
				if (PED::IS_PED_ON_MOUNT(uLocal_1456[0]))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1946.2f, -1325f, 108.7f, 1.5f, -1, 0.25f, 0, 40000f);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_SET_STEALTH_MOVEMENT(0, true, 0, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1951.8f, -1322.8f, 108.7f, 1f, -1, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				__LIB_4__::func_952(uParam0, 3);
			}
			break;
		case 3:
			if (!func_1169(75))
			{
				__LIB_5__::func_511(5);
				func_1171(75);
			}
			if (!func_1169(10) && func_1169(9))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35) && __LIB_0__::func_94(func_1164(uParam0), -1943.1f, -1325.8f, 108.4f, 1) < 20f)
				{
					func_1171(10);
				}
			}
			if (((__LIB_4__::func_979(uParam0) == 51 && func_1169(10)) && !PED::IS_PED_ON_MOUNT(Global_35)) && !PED::IS_PED_ON_MOUNT(uLocal_1456[0]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_1456[0], true, false);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_720(var uParam0)
{
	func_847();
	__LIB_11__::func_563(&iLocal_1475, 1);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Searching", 0f, -1);
	PED::_SET_PED_BLACKBOARD_FLOAT(uLocal_1456[0], "Searching", 0f, -1);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
	PED::_SET_PED_BLACKBOARD_FLOAT(uLocal_1456[0], "Stealth", 1f, -1);
	__LIB_5__::func_547(1);
	__LIB_2__::func_788(&iLocal_1462, 1, 0, 1);
	PLAYER::_0xDFC85C5199045026(PLAYER::PLAYER_ID(), 1f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_721(var uParam0)
{
	func_832(func_1164(uParam0), -1945.674f, -1319.441f, 106.8275f, 47.9075f, 2, 1073741824 /* Float: 2f */);
	func_832(iLocal_1459, -1946.2f, -1325.003f, 107.6886f, -1.65f, 2, 1073741824 /* Float: 2f */);
	func_832(uLocal_1456[0], -1956.652f, -1323.968f, 108.2343f, 135.7446f, 2, 1073741824 /* Float: 2f */);
	__LIB_5__::func_521(0.7f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_722(var uParam0)
{
	PED::_SET_PED_BLACKBOARD_FLOAT(uLocal_1456[0], "Stealth", 1f, -1);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
	__LIB_1__::func_708(joaat("WEAPON_KIT_BINOCULARS"), 0, 0, 1, 0, 0, 752097756, 0);
	func_848();
	AITRANSPORT::_0xBA8818212633500A(iLocal_1460, 0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_723(var uParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("fus2aud");
	__LIB_5__::func_298(uParam0, "NormalStart");
	iLocal_1656[2] = VOLUME::_CREATE_VOLUME_CYLINDER(-2072.522f, -1446.41f, 128.6042f, 0f, 0f, 0f, 16f, 16f, 14f);
	__LIB_5__::func_298(uParam0, "NormalStart");
	__LIB_2__::func_259(&uLocal_1415);
	PED::SET_PED_CONFIG_FLAG(uLocal_1456[0], 273, true);
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_2"));
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1456[0], 91, false);
	return uParam0->f_607 == uParam0->f_607;
}

int func_724(var uParam0)
{
	func_1188(uParam0);
	func_1189(uParam0);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (func_1190(uParam0))
			{
				if (func_1191())
				{
					MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 20f, false);
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
					PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_KIT_BINOCULARS"), 0);
					__LIB_4__::func_952(uParam0, 1);
				}
			}
			break;
		case 1:
			func_1192(uParam0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_KIT_BINOCULARS"), 0, false))
			{
				__LIB_1__::func_708(joaat("WEAPON_KIT_BINOCULARS"), 0, 0, 1, 0, 0, 752097756, 0);
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_KIT_BINOCULARS"), 0);
			}
			if (!func_1169(48))
			{
				func_1171(48);
			}
			if (!func_1169(48))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_BINOCULARS"))
					{
						if (!func_1169(48))
						{
							return 1;
						}
					}
				}
				else if (!func_1169(43))
				{
					func_1171(43);
				}
			}
			else if (!func_1169(43))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_1656[0], 1, 0))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_1653))
					{
						MAP::REMOVE_BLIP(&iLocal_1653);
					}
					Local_325 = 1;
					Local_325.f_1 = joaat("WEAPON_KIT_BINOCULARS");
					HUD::_0x8A59D44189AF2BC5(&Local_325, 1856029758);
					PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_KIT_BINOCULARS"), 0);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_2__::func_259(&uLocal_1415);
					func_1171(43);
				}
			}
			else
			{
				if (!func_1169(51))
				{
					if (func_1194(uParam0))
					{
						func_1171(51);
					}
				}
				if (func_1169(51))
				{
					if (func_1181("MAR8_FOUND"))
					{
						if (__LIB_1__::func_592(&uLocal_1403) >= 100)
						{
							if (!__LIB_11__::func_8("MAR8_FOUND"))
							{
								return 1;
							}
						}
					}
					if (!__LIB_11__::func_608())
					{
						return 1;
					}
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
				}
			}
			break;
	}
	return 0;
}

bool func_725(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
	__LIB_1__::func_864(Local_1477, 0, 0);
	__LIB_1__::func_864(Local_1505, 0, 0);
	__LIB_1__::func_864(Local_1533, 0, 0);
	PED::_SET_PED_BLACKBOARD_FLOAT(uLocal_1456[0], "Stealth", 0f, -1);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_726(var uParam0)
{
	int iVar0;
	if (!func_1191())
	{
		return false;
	}
	func_1198(73);
	ENTITY::SET_ENTITY_COORDS(func_1164(uParam0), func_216(2, 5), true, false, true, true);
	func_1200(uLocal_1456[0], func_1199(2, 2), 2, 1073741824 /* Float: 2f */);
	func_1200(uLocal_1456[1], func_1199(3, 1), 2, 1073741824 /* Float: 2f */);
	__LIB_5__::func_298(uParam0, "NormalStart");
	iVar0 = __LIB_0__::func_23();
	__LIB_0__::func_467(&iVar0, 15);
	__LIB_0__::func_468(&iVar0, 0);
	__LIB_3__::func_98(iVar0);
	__LIB_5__::func_521(0.7f);
	ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[3], "pl_leadout");
	if (!__LIB_10__::func_529(&(uLocal_202[3]), func_402(3), 0, "pl_leadout"))
	{
		return false;
	}
	if (!func_1202(-1, 1))
	{
		return false;
	}
	if (!func_1203())
	{
		return false;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
	TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
	AITRANSPORT::_0xBA8818212633500A(iLocal_1460, 0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_727(var uParam0)
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[3], "pl_leadout");
	if (!__LIB_10__::func_529(&(uLocal_202[3]), func_402(3), 0, "pl_leadout"))
	{
		return false;
	}
	if (!func_1202(-1, 1))
	{
		return false;
	}
	if (!func_1203())
	{
		return false;
	}
	__LIB_3__::func_683(&(iLocal_1656[13]), -2077.583f, -1422.409f, 129.8016f, 0f, 0f, 0f, 10f, 10f, 10f, "Cutscene Horse");
	func_1205(iLocal_1656[13]);
	iLocal_1464 = Local_14.f_34[0];
	iLocal_1465 = Local_14.f_34[1];
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1464, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1465, true);
	func_1157(2, uParam0);
	MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
	HUD::_0x160825DADF1B04B3();
	if (!PED::IS_PED_INJURED(uLocal_1456[1]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1456[1], true, true);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_728(var uParam0)
{
	int iVar0;
	float fVar1;
	iVar0 = func_766(1048704, 0);
	if (iVar0 == 0)
	{
		__LIB_1__::func_766(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 0, false, false);
	func_1207(Global_35);
	WEAPON::_0x183CE355115B6E75(Global_35, iVar0);
	if (!func_1169(73))
	{
		iLocal_1383 = OBJECT::CREATE_OBJECT(joaat("P_KNIFE01X"), -2075.936f, -1424.286f, 130.6443f, true, true, false, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_1464, joaat("WEAPON_UNARMED"), false, 0, false, false);
		func_1157(3, uParam0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[3], "pl_leadout", true);
		ANIMSCENE::START_ANIM_SCENE(uLocal_202[3]);
	}
	fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
	if (fVar1 < 28f)
	{
		__LIB_0__::func_188(2);
	}
	__LIB_2__::func_279(iLocal_1465, 1);
	func_1171(61);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1456[0], 91, true);
	if (__LIB_0__::func_272(Global_35, 0) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
	}
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_729(var uParam0)
{
	float fVar0;
	int iVar1;
	func_1209(uParam0);
	if (func_1169(61))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SELECT_INSPECT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_ITEM_WHEEL"), false);
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 15 && (iLocal_1708 == 4 || iLocal_1708 == 6))
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	func_1192(uParam0);
	if (!__LIB_0__::func_255(iLocal_1465, 0))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[3], "G_M_M_UNIMOUNTAINMEN_01"))
		{
			__LIB_1__::func_864(iLocal_1465, 0, 0);
		}
	}
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == joaat("WEAPON_KIT_BINOCULARS") || iVar1 == joaat("WEAPON_UNARMED"))
				{
					PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), func_766(1048576, 0), 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, func_766(1048576, 0), true, 0, false, false);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_1464))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iLocal_1464, &iVar1, true, 0, false))
				{
					if (iVar1 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_1464, joaat("WEAPON_UNARMED"), true, 0, false, false);
					}
				}
			}
			__LIB_4__::func_89(&uLocal_1736, 0);
			if (__LIB_3__::func_514(&uLocal_1736, 4f))
			{
				__LIB_11__::func_59(uParam0, 1);
				__LIB_0__::func_188(1);
				PLAYER::_0xBBA140062B15A8AC(PLAYER::PLAYER_ID());
				HUD::_HIDE_HUD_COMPONENT(1733954764);
				HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[3], "pl_fail");
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[3], "pl_kill");
				__LIB_2__::func_259(&uLocal_1736);
				__LIB_4__::func_952(uParam0, 1);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 159, true);
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			break;
		case 1:
			if (__LIB_9__::func_913(&uLocal_1736, 5f))
			{
			}
			if (!__LIB_0__::func_139(iLocal_1677))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[3], "pl_leadout"))
				{
					fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_202[3]);
					if (fVar0 > 0.409f && fVar0 < 0.4264f)
					{
						iLocal_1677 = __LIB_1__::func_877("INTERACT_SHOOT", joaat("INPUT_ATTACK"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_0__::func_633(iLocal_1677, 6, 1);
					}
				}
			}
			if (!func_1169(47))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[3], "pl_leadout"))
				{
					fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_202[3]);
					if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[3], "CharlesSmith") || fVar0 >= 0.73f)
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						func_1171(47);
					}
				}
			}
			if (!func_1169(47))
			{
				if (__LIB_0__::func_272(uLocal_1456[0], 0))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[3], "pl_leadout"))
					{
						fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_202[3]);
						if (fVar0 < 0.4264f)
						{
							if (__LIB_0__::func_139(iLocal_1677))
							{
								HUD::_0x052D4AC0922AF91A(7, 1);
								if ((__LIB_1__::func_732(iLocal_1677, 1) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
								{
									PED::_0x4C57F27D1554E6B0(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_1464, false, false), 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
									__LIB_2__::func_259(&uLocal_1736);
									PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[3], "pl_kill", true);
									PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
									PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::PLAYER_ID(), false);
									CAM::_0xE3639DB78B3B5400(iLocal_1464);
									__LIB_1__::func_281(&iLocal_1677, 1, 1);
									__LIB_4__::func_952(uParam0, 2);
								}
							}
						}
						else if (__LIB_0__::func_139(iLocal_1677))
						{
							__LIB_1__::func_281(&iLocal_1677, 1, 1);
							PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
						}
					}
				}
			}
			PED::SET_PED_RESET_FLAG(Global_35, 159, true);
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			break;
		case 2:
			__LIB_4__::func_89(&uLocal_1736, 0);
			if (__LIB_3__::func_514(&uLocal_1736, 4f))
			{
				func_1198(61);
				if (!func_1215(uParam0))
				{
					return 0;
				}
			}
			func_1216();
			if (!__LIB_0__::func_255(iLocal_1464, 0))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[3], "G_M_M_UNIMOUNTAINMEN_01^2"))
				{
					__LIB_1__::func_864(iLocal_1464, 0, 0);
				}
			}
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(uLocal_202[3], "CharlesSmith"))
			{
				if (!func_1169(47))
				{
					func_1217(uParam0);
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uLocal_202[3]))
				{
					__LIB_4__::func_952(uParam0, 29);
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[3], false))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[3], "pl_kill"))
					{
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[3], "pl_fail"))
					{
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[3], "pl_leadout"))
					{
					}
				}
			}
			break;
		case 29:
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return 1;
	}
	return 0;
}

bool func_730(var uParam0)
{
	HUD::_DISPLAY_HUD_COMPONENT(1733954764);
	if (func_1215(uParam0))
	{
		__LIB_0__::func_11();
		__LIB_0__::func_11();
		func_1216();
	}
	else
	{
		return false;
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WHEEL"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_ITEM_WHEEL"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_NAV_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_NAV_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_SLOT_NAV_NEXT"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_SLOT_NAV_PREV"), true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_731(var uParam0)
{
	ENTITY::SET_ENTITY_COORDS(func_1164(uParam0), func_216(2, 5), true, false, true, true);
	if (!func_1215(uParam0))
	{
		return false;
	}
	if (!func_1191())
	{
		return false;
	}
	__LIB_5__::func_590(uParam0, "MAR8_O_SKIN", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_5__::func_521(0.7f);
	func_1192(uParam0);
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
	{
		return false;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_202[7]) <= 0.5f)
	{
		return false;
	}
	AITRANSPORT::_0xBA8818212633500A(iLocal_1460, 0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_732(var uParam0)
{
	if (!PED::IS_PED_INJURED(uLocal_1456[1]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1456[1], true, true);
	}
	iLocal_1656[10] = VOLUME::_CREATE_VOLUME_BOX(-2073.321f, -1446.75f, 127.982f, 0f, 0f, -87.49999f, 21.75f, 5.75f, 4f);
	iLocal_1656[9] = VOLUME::_CREATE_VOLUME_BOX(-2063.877f, -1446.338f, 127.982f, 0f, 0f, -87.49999f, 21.75f, 9.25f, 4f);
	iLocal_1656[12] = VOLUME::_CREATE_VOLUME_BOX(-2066.538f, -1448.646f, 126.8183f, 0f, 0f, -13.75001f, 4.75f, 7.75f, 7f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_733(var uParam0)
{
	PED::_0xFD6943B6DF77E449(uLocal_1456[1], false);
	__LIB_2__::func_259(&uLocal_1403);
	__LIB_2__::func_259(&uLocal_1412);
	StringCopy(&cLocal_1671, "", 16);
	__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_734(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	func_1220(uParam0);
	func_1216();
	func_1221();
	func_1192(uParam0);
	func_1222(uParam0);
	if (__LIB_4__::func_971(uParam0) == 0)
	{
		func_1217(uParam0);
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 15)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (func_1223())
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2060f, -1447.6f, 128.2f, 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2063.526f, -1449.459f, 128.4073f, 2f, -1, 0.25f, 0, 9.56f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				func_1171(34);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, -2065.819f, -1449.797f, 127.5206f, 7.5f, 7.5f, 7.5f, false, true, 0))
			{
				__LIB_11__::func_53();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_1456[0], -2064f, -1448.2f, 128.4f, 10f, 10f, 10f, false, true, 0))
			{
				if (!func_1169(69))
				{
					func_1171(69);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_1456[0], -2063f, -1449.2f, 128.4f, 2f, 2f, 2f, false, true, 0))
			{
				WEAPON::_HIDE_PED_WEAPONS(uLocal_1456[0], 2, false);
				MISC::_0x870708A6E147A9AD(uLocal_1456[1], "", 5f, 0, 0, 0, 0, 0, 0, -1);
				PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 297, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 301, false);
				PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 130, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 317, true);
				func_1171(40);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, -2065.819f, -1449.797f, 127.5206f, 7.5f, 7.5f, 7.5f, false, true, 0))
			{
				__LIB_11__::func_53();
			}
			if (!func_1169(70))
			{
				if (__LIB_9__::func_331(PLAYER::GET_PLAYER_INDEX(), uLocal_1456[1]))
				{
					if (__LIB_0__::func_139(iLocal_1739))
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uLocal_1456[1], 10f, 3, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uLocal_1456[1]), "CUT_FREE_PED", 0);
						if (__LIB_1__::func_514(iLocal_1739, 1))
						{
							func_1227();
							func_1198(69);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1456[1], true);
							__LIB_1__::func_281(&iLocal_1739, 1, 1);
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
							TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (PED::IS_PED_ON_MOUNT(Global_35))
							{
								TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
							}
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2065.384f, -1447.255f, 128.4108f, 1.5f, 10000, 0.25f, 0, -142.6f);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							MISC::_0xFC6ECB9170145ECE();
							PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 297, false);
							PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 301, true);
							PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 130, false);
							PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 317, false);
							func_1171(41);
							__LIB_4__::func_952(uParam0, 3);
						}
						else if (!func_1169(69))
						{
							func_1171(69);
						}
					}
					else
					{
						iLocal_1739 = __LIB_4__::func_864("CUT_FREE_PED", joaat("INPUT_CUT_FREE"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_1__::func_574(&iLocal_1739, uLocal_1456[1]);
					}
				}
				else
				{
					__LIB_1__::func_281(&iLocal_1739, 1, 1);
				}
			}
			else if (__LIB_0__::func_139(iLocal_1739))
			{
				MISC::_0xFC6ECB9170145ECE();
				__LIB_1__::func_281(&iLocal_1739, 1, 1);
			}
			break;
		case 3:
			if (!func_1169(60))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[7], "CS_CharlesSmith"))
				{
					func_1171(60);
					func_1230(uParam0, 10);
				}
			}
			else if (iLocal_180 == 10)
			{
				return 1;
			}
			__LIB_11__::func_53();
			break;
	}
	func_1231(uParam0);
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_202[7]) > 25f)
		{
			func_1232(uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_525[3 /*28*/]))
			{
				uVar2 = Local_525[3 /*28*/];
				ENTITY::DELETE_ENTITY(&uVar2);
			}
		}
	}
	return 0;
}

bool func_735(var uParam0)
{
	CLOCK::PAUSE_CLOCK(false, 0);
	func_168();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_736(var uParam0)
{
	ENTITY::SET_ENTITY_COORDS(func_1164(uParam0), func_216(2, 5), true, false, true, true);
	if (!func_1191())
	{
		return false;
	}
	if (!__LIB_0__::func_899(&uLocal_1433))
	{
		__LIB_2__::func_259(&uLocal_1433);
		return false;
	}
	if (__LIB_1__::func_583(&uLocal_1433) < 5f)
	{
		return false;
	}
	func_1230(uParam0, 10);
	__LIB_5__::func_521(0.7f);
	AITRANSPORT::_0xBA8818212633500A(iLocal_1460, 0, 1);
	if (!PED::IS_PED_INJURED(uLocal_1456[1]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1456[1], true, true);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_737(var uParam0)
{
	var uVar0;
	if (!func_1232(uParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_525[3 /*28*/]))
	{
		uVar0 = Local_525[3 /*28*/];
		ENTITY::DELETE_ENTITY(&uVar0);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_1653))
	{
		MAP::REMOVE_BLIP(&iLocal_1653);
	}
	if (!MAP::DOES_BLIP_EXIST(__LIB_11__::func_526(uLocal_1456[0])))
	{
		__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
	}
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
	__LIB_2__::func_259(&uLocal_1412);
	__LIB_2__::func_259(&uLocal_1421);
	func_1235(uParam0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_738(var uParam0)
{
	PED::_0xF008E0BA1FE1D644(30);
	iLocal_1656[3] = VOLUME::_CREATE_VOLUME_BOX(-2120.392f, -1414.285f, 131.6685f, 0f, 0f, 17.75f, 31f, 20.25f, 7f);
	iLocal_1656[4] = VOLUME::_CREATE_VOLUME_BOX(-2127.033f, -1376.712f, 134.425f, 0f, 0f, 15f, 68.25f, 77.5f, 24f);
	iLocal_1656[5] = VOLUME::_CREATE_VOLUME_BOX(-2107.861f, -1428.449f, 131.8984f, 0f, 0f, -34f, 2.25f, 77.5f, 12f);
	iLocal_1656[6] = VOLUME::_CREATE_VOLUME_SPHERE(-2081.208f, -1438.575f, 127.8925f, 0f, 0f, 0f, 14f, 14f, 14f);
	iLocal_1656[7] = VOLUME::_CREATE_VOLUME_SPHERE(-2088.851f, -1435.283f, 128.0639f, 0f, 0f, 0f, 8f, 8f, 8f);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1459, true);
	func_1235(uParam0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_739(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	struct<28> Var4;
	bool bVar285;
	vector3 vVar286;
	Var4 = 10;
	Var4.f_1.f_7 = 2;
	Var4.f_1.f_17 = 2;
	Var4.f_1.f_21 = 1;
	Var4.f_1.f_28.f_7 = 2;
	Var4.f_1.f_28.f_17 = 2;
	Var4.f_1.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_28.f_21 = 1;
	func_1236(uParam0);
	if (CLOCK::GET_CLOCK_HOURS() >= 19)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			func_1171(35);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 1:
			Var4[0 /*28*/] = { Local_525[0 /*28*/] };
			Var4[1 /*28*/] = { Local_525[1 /*28*/] };
			Var4[2 /*28*/] = { Local_525[2 /*28*/] };
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, func_216(4, 0), 8f, 8f, 8f, false, true, 0) || func_1237(&Var4, 3, 2))
			{
				if (func_1238(uParam0))
				{
					func_1171(36);
					__LIB_4__::func_952(uParam0, 2);
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, func_216(4, 5), 10f, 10f, 7f, false, true, 0))
			{
				bVar285 = true;
			}
			if (__LIB_0__::func_86(vVar286))
			{
			}
			if (!bVar285)
			{
				Var4[0 /*28*/] = { Local_525[0 /*28*/] };
				Var4[1 /*28*/] = { Local_525[1 /*28*/] };
				Var4[2 /*28*/] = { Local_525[2 /*28*/] };
				if (func_1237(&Var4, 3, 3))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_780[6 /*28*/]))
					{
						if (PED::IS_PED_INJURED(Local_780[6 /*28*/]))
						{
							Var4[0 /*28*/] = { Local_666[0 /*28*/] };
							Var4[1 /*28*/] = { Local_666[1 /*28*/] };
							if (func_1237(&Var4, 2, 1))
							{
								bVar285 = true;
							}
							else
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_666[0 /*28*/]))
								{
									if (!PED::IS_PED_INJURED(Local_666[0 /*28*/]))
									{
										vVar286 = { ENTITY::GET_ENTITY_COORDS(Local_666[0 /*28*/], true, false) };
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_666[1 /*28*/]))
								{
									if (!PED::IS_PED_INJURED(Local_666[1 /*28*/]))
									{
										vVar286 = { ENTITY::GET_ENTITY_COORDS(Local_666[1 /*28*/], true, false) };
									}
								}
							}
						}
						else
						{
							vVar286 = { ENTITY::GET_ENTITY_COORDS(Local_780[6 /*28*/], true, false) };
						}
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_525[0 /*28*/]))
					{
						if (!PED::IS_PED_INJURED(Local_525[0 /*28*/]))
						{
							vVar286 = { ENTITY::GET_ENTITY_COORDS(Local_525[0 /*28*/], true, false) };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_525[1 /*28*/]))
					{
						if (!PED::IS_PED_INJURED(Local_525[1 /*28*/]))
						{
							vVar286 = { ENTITY::GET_ENTITY_COORDS(Local_525[1 /*28*/], true, false) };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_525[2 /*28*/]))
					{
						if (!PED::IS_PED_INJURED(Local_525[2 /*28*/]))
						{
							vVar286 = { ENTITY::GET_ENTITY_COORDS(Local_525[2 /*28*/], true, false) };
						}
					}
				}
			}
			if (bVar285)
			{
				if (func_1239(uParam0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1459, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_1164(uParam0), true);
					vVar0 = { -2126.701f, -1391.739f, 131.106f };
					fVar3 = 109.7f;
					ENTITY::SET_ENTITY_COORDS(iLocal_1459, vVar0, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_1459, fVar3);
					ENTITY::SET_ENTITY_COORDS(func_1164(uParam0), func_216(4, 6), true, false, true, true);
					AITRANSPORT::_0xBA8818212633500A(iLocal_1460, 0, 0);
					TASK::TASK_STAND_STILL(iLocal_1459, -1);
					TASK::TASK_STAND_STILL(func_1164(uParam0), -1);
					func_1171(37);
					__LIB_4__::func_952(uParam0, 3);
				}
			}
			break;
		case 3:
			bVar285 = false;
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, func_216(4, 1), 13f, 13f, 9f, false, true, 0))
			{
				bVar285 = true;
			}
			if (!bVar285)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_780[7 /*28*/]))
				{
					Var4[0 /*28*/] = { Local_666[0 /*28*/] };
					Var4[1 /*28*/] = { Local_723[0 /*28*/] };
					Var4[2 /*28*/] = { Local_723[1 /*28*/] };
					Var4[3 /*28*/] = { Local_780[7 /*28*/] };
					Var4[4 /*28*/] = { Local_780[8 /*28*/] };
					if (func_1237(&Var4, 5, 5))
					{
						bVar285 = true;
					}
				}
			}
			if (bVar285)
			{
				TASK::TASK_STAND_STILL(iLocal_1459, -1);
				TASK::TASK_STAND_STILL(func_1164(uParam0), -1);
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
				}
				func_1171(39);
				__LIB_4__::func_952(uParam0, 4);
			}
			break;
		case 4:
			if ((!__LIB_0__::func_163(uLocal_1456[0], 242628503) && PED::IS_PED_ON_MOUNT(uLocal_1456[0])) && PED::IS_PED_ON_MOUNT(Global_35))
			{
				return 1;
			}
			else if (PED::IS_PED_ON_MOUNT(uLocal_1456[0]))
			{
				func_1241();
			}
			break;
	}
	if (!func_1169(59))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1656[3], true, 0))
		{
			func_1171(59);
		}
	}
	else if (!func_1169(66))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1656[4], true, 0))
		{
			func_1171(66);
		}
	}
	func_1242(uParam0, uLocal_1456[0], iLocal_190);
	func_1243(uParam0);
	return 0;
}

bool func_740(var uParam0)
{
	func_169();
	__LIB_0__::func_172(iLocal_1656[5]);
	__LIB_0__::func_172(iLocal_1656[4]);
	__LIB_0__::func_172(iLocal_1656[3]);
	__LIB_1__::func_721(7);
	CLOCK::PAUSE_CLOCK(false, 0);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
	PED::SET_PED_MIN_MOVE_BLEND_RATIO(Global_35, 0f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_741(var uParam0)
{
	func_832(iLocal_1459, -2126.258f, -1385.584f, 130.7001f, 16.5163f, 2, 1073741824 /* Float: 2f */);
	ENTITY::SET_ENTITY_COORDS(func_1164(uParam0), func_216(4, 6), true, false, true, true);
	__LIB_1__::func_571(Global_35, func_1164(uParam0), 0, -1, 1);
	__LIB_1__::func_571(uLocal_1456[0], iLocal_1459, 0, -1, 1);
	__LIB_1__::func_571(uLocal_1456[1], iLocal_1459, 0, 0, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	__LIB_5__::func_521(0.7f);
	if (!PED::IS_PED_INJURED(uLocal_1456[1]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1456[1], true, true);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_742(var uParam0)
{
	if (!__LIB_10__::func_529(&(uLocal_202[15]), func_402(15), 2, "pl_leadin"))
	{
		return false;
	}
	func_1157(15, uParam0);
	iLocal_1656[11] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1633.276f, -1352.512f, 82.7063f, 0f, 0f, 0f, 4f, 4f, 4f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_743(var uParam0)
{
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 90f, false);
	func_1173(&iLocal_1475, &(uLocal_1456[0]), 1, 5);
	__LIB_18__::func_368(iLocal_1475, &Global_35, 0);
	__LIB_5__::func_346(uParam0);
	__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 256);
	__LIB_5__::func_298(uParam0, "MultiStart");
	__LIB_5__::func_511(3);
	__LIB_2__::func_259(&uLocal_1412);
	return uParam0->f_607 == uParam0->f_607;
}

int func_744(var uParam0)
{
	int iVar0;
	bool bVar1;
	func_1245(uParam0);
	func_1246(uParam0);
	func_1247(uParam0);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			func_1179(0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_1456[0], sLocal_178, 0, 9224, -1, 0, 1, -1);
			func_1241();
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 1:
			if (MAP::DOES_BLIP_EXIST(iLocal_1653))
			{
				MAP::REMOVE_BLIP(&iLocal_1653);
			}
			__LIB_4__::func_944(uParam0, 33554432);
			__LIB_4__::func_952(uParam0, 2);
			break;
		case 2:
			__LIB_1__::func_448(uLocal_1456[0], func_216(9, 1), 0, 20f, 15f, 10f, 0f, 1, 1, 1, 0);
			__LIB_1__::func_448(Global_35, func_216(9, 1), 0, 20f, 15f, 10f, 0f, 1, 1, 1, 0);
			func_1249(uParam0);
			if (bLocal_1744 == 0 && ENTITY::IS_ENTITY_AT_COORD(uLocal_1456[0], func_216(9, 1), 10f, 10f, 10f, false, true, 0))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_216(9, 1), 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_STAND_STILL(0, 1000);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				bLocal_1744 = true;
			}
			if (((ENTITY::IS_ENTITY_AT_COORD(uLocal_1456[0], func_216(9, 1), 5f, 5f, 5f, false, true, 0) && !__LIB_0__::func_163(uLocal_1456[0], 242628503)) && PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_665(Global_35, uLocal_1456[0], 1, 1) <= 30f)
			{
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_2"));
				__LIB_4__::func_952(uParam0, 3);
			}
			break;
		case 3:
			if (!func_1169(76))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Global_35, func_216(9, 1), 9f, 9f, 5f, false, true, 0))
				{
					ANIMSCENE::START_ANIM_SCENE(uLocal_202[15]);
					func_1171(76);
				}
			}
			if (func_1169(76))
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				if (!func_1169(90))
				{
					if (__LIB_5__::func_79(Global_35, &uLocal_1676, 64, 256, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
						func_1171(90);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_202[15], "b_breakout", true, false);
					}
				}
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[15], "CHARLES"))
			{
				bVar1 = true;
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[15], "UNCLE"))
			{
				bVar1 = true;
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[15], "PLAYER_THREE"))
			{
				bVar1 = true;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_202[15], false))
			{
				bVar1 = true;
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_202[15]) >= 42.6f)
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
				return 1;
			}
			break;
	}
	func_1243(uParam0);
	return 0;
}

bool func_745(var uParam0)
{
	func_1251(joaat("MAR8_RIDE2"));
	__LIB_11__::func_563(&iLocal_1475, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_746(var uParam0)
{
	ENTITY::SET_ENTITY_COORDS(func_1164(uParam0), -1636.2f, 1349.2f, 83.9f, true, false, true, true);
	__LIB_5__::func_298(uParam0, "MultiStart");
	return uParam0->f_607 == uParam0->f_607;
}

bool func_747(var uParam0)
{
	func_1157(16, uParam0);
	__LIB_5__::func_33(uParam0, 524288);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_748(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1456[1]))
	{
		__LIB_1__::func_288(4, -1341683964, 1);
	}
	__LIB_11__::func_732(uParam0, 0, 0, 1);
	__LIB_4__::func_213(-1169508727, 0f, 1);
	__LIB_4__::func_213(-1679361598, 0f, 1);
	return uParam0->f_607 == uParam0->f_607;
}

void func_755(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_1256();
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

void func_757(var uParam0)
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
			func_832(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_832(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_758(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_832(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_766(int iParam0, int iParam1)
{
	var uVar0;
	return func_1280(&uVar0, iParam0, iParam1);
}

bool func_824(var uParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1310(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1311(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_832(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_832(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_832(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_834(var uParam0, int iParam1)
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
			func_755(&iVar0, 0, 2, 0, 0, 0, 0);
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

bool func_836(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	if (__LIB_18__::func_297(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)), 0))
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

bool func_838(var uParam0, struct<4> Param1)
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
	if (func_1351(Param1, &(uParam0->f_7375), uParam0))
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

bool func_844(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	iVar0 = __LIB_4__::func_939(uParam0);
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	if (iVar0 == iLocal_327)
	{
		bVar13 = true;
		bVar14 = true;
		bVar15 = true;
		vVar1 = { func_216(0, 2) };
		fVar10 = func_1357(0, 2);
		vVar4 = { func_216(0, 1) };
		fVar11 = func_1357(0, 1);
		vVar7 = { func_216(1, 3) };
		fVar12 = func_1357(1, 3);
	}
	else if (iVar0 == iLocal_328)
	{
		bVar13 = true;
		bVar14 = true;
		bVar15 = true;
		vVar1 = { func_216(0, 2) };
		fVar10 = func_1357(0, 2);
		vVar4 = { func_216(0, 1) };
		fVar11 = func_1357(0, 1);
		vVar7 = { func_216(1, 3) };
		fVar12 = func_1357(1, 3);
	}
	else if (iVar0 == iLocal_329)
	{
		bVar13 = true;
		bVar15 = true;
		vVar4 = { func_216(2, 3) };
		fVar11 = func_1357(2, 3);
		vVar7 = { func_216(2, 4) };
		fVar12 = func_1357(2, 4);
		func_832(Global_35, -1953.881f, -1321.5f, 107.6537f, 102.4106f, 2, 1073741824 /* Float: 2f */);
	}
	else if (iVar0 == iLocal_330)
	{
		bVar13 = true;
		bVar15 = true;
		bVar14 = true;
		vVar1 = { func_216(3, 1) };
		fVar10 = func_1357(3, 1);
		vVar4 = { func_216(2, 2) };
		fVar11 = func_1357(2, 2);
		vVar7 = { func_216(2, 4) };
		fVar12 = func_1357(2, 4);
	}
	else if (iVar0 == iLocal_331)
	{
		bVar13 = true;
		bVar15 = true;
		bVar14 = true;
		vVar1 = { func_216(3, 1) };
		fVar10 = func_1357(3, 1);
		vVar4 = { func_216(2, 2) };
		fVar11 = func_1357(2, 2);
		vVar7 = { func_216(2, 4) };
		fVar12 = func_1357(2, 4);
	}
	else if (iVar0 == iLocal_332)
	{
		bVar13 = true;
		bVar15 = true;
		bVar14 = true;
		vVar1 = { func_216(3, 1) };
		fVar10 = func_1357(3, 1);
		vVar4 = { func_216(3, 0) };
		vVar7 = { func_216(2, 4) };
		fVar11 = func_1357(3, 0);
		fVar12 = func_1357(2, 4);
	}
	else if (iVar0 == iLocal_333)
	{
		bVar13 = true;
		bVar15 = true;
		bVar14 = true;
		vVar1 = { func_216(3, 1) };
		fVar10 = func_1357(3, 1);
		vVar4 = { func_216(4, 4) };
		vVar7 = { func_216(4, 6) };
		fVar11 = func_1357(4, 4);
		fVar12 = func_1357(4, 6);
	}
	else if (iVar0 == iLocal_334)
	{
		bVar13 = true;
		bVar15 = true;
		bVar14 = true;
		vVar1 = { -1637.5f, -1348.1f, 83f };
		fVar10 = func_1357(0, 2);
		vVar4 = { -1637.5f, -1348.1f, 83f };
		vVar7 = { -1637.5f, -1348.1f, 83f };
		fVar11 = func_1357(4, 4);
		fVar12 = func_1357(4, 6);
	}
	if (bVar13 && !ENTITY::DOES_ENTITY_EXIST(uLocal_1456[0]))
	{
		func_824(uParam0, 7, &(uLocal_1456[0]), 0, vVar4.x, vVar4.y, vVar4.z, fVar11, 1, -1341683964, 1, 0, 1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1456[0]))
		{
			return false;
		}
		__LIB_5__::func_106(uParam0, uLocal_1456[0], "CHARLES_SMITH", 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1456[0], true);
		if (iVar0 != iLocal_327)
		{
			func_832(uLocal_1456[0], vVar4, fVar11, 2, 1073741824 /* Float: 2f */);
		}
		PED::SET_PED_CONFIG_FLAG(uLocal_1456[0], 192, true);
		if (iVar0 >= iLocal_329)
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_1456[0], 273, true);
		}
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_1456[0], true);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_1456[0], 0);
		return false;
	}
	if (bVar14 && !ENTITY::DOES_ENTITY_EXIST(uLocal_1456[1]))
	{
		func_824(uParam0, 4, &(uLocal_1456[1]), 0, vVar1.x, vVar1.y, vVar1.z, fVar10, 1, 0, 0, 0, 1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1456[1]))
		{
			return false;
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1456[1], true);
		if (iVar0 != iLocal_327)
		{
			func_832(uLocal_1456[1], vVar1, fVar10, 2, 1073741824 /* Float: 2f */);
		}
		__LIB_5__::func_106(uParam0, uLocal_1456[1], "UNCLE", 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_1456[1], true);
		ENTITY::_0x18FF3110CF47115D(uLocal_1456[1], 1, 0);
		ENTITY::_0x18FF3110CF47115D(uLocal_1456[1], 4, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(uLocal_1456[1], true);
		PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 192, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 273, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1456[1], 5, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1456[1], 11, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_1456[1], 512, true);
		return false;
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(uLocal_1456[1]))
	{
		if (__LIB_4__::func_939(uParam0) >= iLocal_329)
		{
			__LIB_1__::func_288(4, -301101630, 1);
		}
		else
		{
			__LIB_1__::func_288(4, -1341683964, 1);
		}
	}
	if (bVar15 && !ENTITY::DOES_ENTITY_EXIST(iLocal_1459))
	{
		iLocal_1459 = func_1358(7, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1459))
		{
			PED::_SET_PED_BODY_COMPONENT(iLocal_1459, joaat("META_HORSE_SADDLE_ONLY"));
			PED::_UPDATE_PED_VARIATION(iLocal_1459, false, true, true, true, false);
			if (iVar0 != iLocal_327 && !__LIB_4__::func_948(uParam0, 4))
			{
				func_832(iLocal_1459, vVar7, fVar12, 2, 1073741824 /* Float: 2f */);
			}
		}
		return false;
	}
	__LIB_11__::func_646(uParam0, iLocal_1459, 7);
	if (iVar0 != iLocal_327)
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_BOW"), 30, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	func_1164(uParam0);
	return true;
}

bool func_845()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1656[0]))
	{
		__LIB_3__::func_573(&(iLocal_1656[0]), -2081.502f, -1425.722f, 133.7f, 0f, -9.999998f, 0f, 8f, 8f, 2f, "Cutscene Cliff");
		return false;
	}
	return true;
}

void func_847()
{
	func_1361(-1, 1);
}

int func_848()
{
	if (!func_1169(68))
	{
		func_1362(-1, 1);
		STREAMING::_REQUEST_IMAP(joaat("AMB_CAMP_BGV_SKINNERS"));
		STREAMING::_REQUEST_IMAP(506519174);
		GRAPHICS::_0xDFEA23EC90113657(joaat("AMB_CAMP_BGV_SKINNERS"));
		GRAPHICS::_0xDFEA23EC90113657(506519174);
		__LIB_5__::func_441("mar8_skinnercamp");
		uLocal_1720[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2070.1f, -1438.6f, 128f, 3.75f, 3.5f, 6f, __LIB_3__::func_745(158.09f), false, 7);
		uLocal_1720[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2075.6f, -1448.2f, 128f, 5.25f, 4.25f, 6f, __LIB_3__::func_745(92.329f), false, 7);
		uLocal_1720[2] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2076f, -1439.3f, 128f, 3.25f, 3.25f, 6f, __LIB_3__::func_745(91.953f), false, 7);
		uLocal_1720[3] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2080.7f, -1433.4f, 129.4f, 3.75f, 2.25f, 6f, __LIB_3__::func_745(91.953f), false, 7);
		uLocal_1720[4] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2070.7f, -1448.8f, 128.7f, 2f, 0.75f, 6f, __LIB_3__::func_745(91.953f), false, 7);
		func_1171(68);
	}
	return 0;
}

void func_852(int iParam0)
{
	iLocal_80 = 0;
	if (iParam0 <= iLocal_331)
	{
		MISC::SET_BIT(&iLocal_80, 0);
		MISC::SET_BIT(&iLocal_80, 2);
		MISC::SET_BIT(&iLocal_80, 3);
	}
	else if (iParam0 <= iLocal_332)
	{
		MISC::SET_BIT(&iLocal_80, 2);
		MISC::SET_BIT(&iLocal_80, 1);
		MISC::SET_BIT(&iLocal_80, 3);
	}
	else if (iParam0 > iLocal_332)
	{
		MISC::SET_BIT(&iLocal_80, 3);
		MISC::SET_BIT(&iLocal_80, 2);
	}
}

int func_853(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_939(uParam0);
	if (iVar0 == iLocal_327)
	{
		if (!func_1169(88))
		{
			__LIB_10__::func_21(Global_35, Global_40.f_7729);
			func_1171(88);
		}
		else if (!func_1169(89))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1334403630))
			{
				if (__LIB_8__::func_924(Global_35))
				{
					func_1171(89);
					__LIB_9__::func_164(Global_35, 1, 0);
				}
			}
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) > 0.360018f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) < 0.3606926f)
		{
			func_1368(1);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) >= 0.4411963f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) < 0.4418709f)
		{
			func_1368(2);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) >= 0.5010119f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) < 0.502586f)
		{
			func_1368(3);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) >= 0.5749944f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) < 0.5758939f)
		{
			func_1368(4);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) > 0.6923769f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) < 0.6970991f)
		{
			func_1368(5);
			if (!func_1169(1))
			{
				WEAPON::_0x899A04AFCC725D04(uLocal_1456[0], joaat("LO_CHARLES"));
				func_1171(1);
				__LIB_0__::func_203(uLocal_1456[0]);
			}
		}
		if (!func_1169(78))
		{
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_7375.f_804, "CHARLESSMITH"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1456[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1459))
				{
					__LIB_1__::func_571(uLocal_1456[0], iLocal_1459, 0, -1, 1);
					func_1171(78);
					func_1175(uParam0);
				}
			}
		}
		else
		{
			func_1175(uParam0);
		}
		if (__LIB_8__::func_789(uParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(func_1164(uParam0)))
			{
				__LIB_1__::func_571(Global_35, func_1164(uParam0), 0, -1, 1);
			}
		}
		if (!func_1169(55))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 30f, false);
				CLOCK::SET_CLOCK_TIME(7, 0, 0);
				func_1171(55);
			}
		}
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_7375.f_804, "uncle"))
		{
			__LIB_6__::func_888(4);
			__LIB_11__::func_650(uParam0, 4, uLocal_1456[1], 0, 1, 1, 0);
		}
	}
	if (iVar0 == iLocal_328)
	{
	}
	if (iVar0 == iLocal_330)
	{
		func_1192(uParam0);
		if (__LIB_8__::func_789(uParam0))
		{
			iLocal_1383 = OBJECT::CREATE_OBJECT(joaat("P_KNIFE01X"), -2075.936f, -1424.286f, 130.6443f, true, true, false, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_1464, joaat("WEAPON_UNARMED"), false, 0, false, false);
			func_1157(3, uParam0);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[3], "pl_leadout", true);
			ANIMSCENE::START_ANIM_SCENE(uLocal_202[3]);
			func_1171(73);
		}
	}
	if (iVar0 == iLocal_334)
	{
		if (__LIB_11__::func_37(uParam0, uLocal_1456[0], 0, 0, 1, 1))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_1456[0], 273, false);
			__LIB_11__::func_650(uParam0, 7, uLocal_1456[0], 0, 0, 1, 0);
		}
		if (__LIB_11__::func_37(uParam0, uLocal_1456[1], 0, 0, 1, 1))
		{
			__LIB_1__::func_288(4, -1341683964, 1);
			__LIB_11__::func_650(uParam0, 4, uLocal_1456[1], 0, 1, 1, 0);
		}
		if (__LIB_11__::func_37(uParam0, Global_35, "JOHN", 0, 1, 1))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	return 1;
}

void func_855(int iParam0)
{
	if (iParam0 == iLocal_327)
	{
	}
	else if (iParam0 == iLocal_328)
	{
		MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
		CLOCK::SET_CLOCK_TIME(19, 0, 0);
	}
	else if (iParam0 == iLocal_329)
	{
		MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 20f, false);
		CLOCK::SET_CLOCK_TIME(13, 0, 0);
	}
	else if (iParam0 == iLocal_331)
	{
		CLOCK::SET_CLOCK_TIME(14, 0, 0);
		MISC::_SET_WEATHER_TYPE(joaat("OVERCAST"), true, true, true, 5f, false);
	}
	else if (iParam0 == iLocal_332)
	{
		CLOCK::SET_CLOCK_TIME(16, 0, 0);
		MISC::_SET_WEATHER_TYPE(joaat("OVERCAST"), true, true, true, 10f, false);
	}
}

void func_856()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_41(iVar0);
	iVar2 = __LIB_0__::func_42(iVar0);
	if (iVar1 > 21 && iVar1 < 4)
	{
		__LIB_1__::func_683(&iLocal_79, 1);
	}
	else if (iVar1 == 20 && iVar2 >= 30)
	{
		__LIB_1__::func_683(&iLocal_79, 1);
	}
	else if (iVar1 == 4 && iVar2 <= 30)
	{
		__LIB_1__::func_683(&iLocal_79, 1);
	}
	if (iLocal_79 != 0)
	{
		return;
	}
	if (iVar1 > 5 && iVar1 <= 6)
	{
		__LIB_1__::func_683(&iLocal_79, 2);
	}
	else if (iVar1 == 4 && iVar2 >= 31)
	{
		__LIB_1__::func_683(&iLocal_79, 2);
	}
	else if (iVar1 == 7 && iVar2 == 0)
	{
		__LIB_1__::func_683(&iLocal_79, 2);
	}
	if (iLocal_79 != 0)
	{
		return;
	}
	if (iVar1 >= 8 && iVar1 <= 11)
	{
		__LIB_1__::func_683(&iLocal_79, 4);
	}
	else if (iVar1 == 7 && iVar2 >= 1)
	{
		__LIB_1__::func_683(&iLocal_79, 4);
	}
	else if (iVar1 == 12 && iVar2 == 0)
	{
		__LIB_1__::func_683(&iLocal_79, 4);
	}
	if (iLocal_79 != 0)
	{
		return;
	}
	if (iVar1 >= 13 && iVar1 <= 16)
	{
		__LIB_1__::func_683(&iLocal_79, 8);
	}
	else if (iVar1 == 12 && iVar2 >= 1)
	{
		__LIB_1__::func_683(&iLocal_79, 8);
	}
	else if (iVar1 == 17 && iVar2 == 0)
	{
		__LIB_1__::func_683(&iLocal_79, 8);
	}
	if (iLocal_79 != 0)
	{
		return;
	}
	if (iVar1 >= 18 && iVar1 <= 20)
	{
		__LIB_1__::func_683(&iLocal_79, 16);
	}
	else if (iVar1 == 17 && iVar2 >= 1)
	{
		__LIB_1__::func_683(&iLocal_79, 16);
	}
	else if (iVar1 == 20 && iVar2 <= 29)
	{
		__LIB_1__::func_683(&iLocal_79, 16);
	}
}

void func_858(var uParam0)
{
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	POPULATION::_0xF45E46DEECF7DF6E(8192, 0, 0, -1, -1);
	POPULATION::_0xF45E46DEECF7DF6E(2048, 0, 0, -1, -1);
	PED::_0xC0258742B034DFAF(0f);
	PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xBA0980B5C0A11924(0f);
	if (__LIB_4__::func_939(uParam0) == iLocal_327)
	{
	}
	else if (__LIB_4__::func_939(uParam0) == iLocal_329)
	{
		func_1373();
	}
	else if (__LIB_4__::func_939(uParam0) == iLocal_330)
	{
		func_1373();
		__LIB_1__::func_538(0);
	}
	else if (__LIB_4__::func_939(uParam0) == iLocal_331)
	{
		func_1373();
		__LIB_1__::func_538(0);
	}
	else if (__LIB_4__::func_939(uParam0) == iLocal_332)
	{
		func_1373();
		__LIB_1__::func_538(0);
	}
	func_1375();
	func_1376(uParam0);
}

bool func_875(var uParam0, int iParam1, int iParam2)
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
		func_1387(uParam0);
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

bool func_877(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_948(uParam0, 16384))
	{
		if (func_836(uParam0))
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
			if (func_836(uParam0))
			{
				__LIB_4__::func_969(uParam0, 2097152);
				func_838(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_838(uParam0, Var0);
		}
	}
	else if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (func_836(uParam0))
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
		return func_838(uParam0, Var0);
	}
	return true;
}

void func_1081(bool bParam0)
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
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1550(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_313(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_631(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1555(Var0);
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

void func_1084(bool bParam0)
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
		func_631(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_631(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_631(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_631(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_631(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_631(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_631(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_631(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_631(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_631(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_631(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1129(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1129(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1129(iVar63, -915411861, 1, 0, 0));
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

void func_1155(var uParam0, int iParam1)
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
		uParam0->f_1[iVar0 /*22*/][iVar1] = 62613;
		MISC::CLEAR_BIT(&(uParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

void func_1157(int iParam0, var uParam1)
{
	if ((((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[iParam0]) && iParam0 != 0) && iParam0 != 1) && iParam0 != 2) && iParam0 != 16)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_1607(uParam1, Global_35, "JOHN", 0, 0);
			func_1607(uParam1, uLocal_1456[0], "CharlesSmith", 0, 0);
			func_1607(uParam1, uLocal_1456[1], "uncle", 0, 0);
			func_1607(uParam1, Local_14.f_43[0], "p_beechers_ladder01x", 0, 0);
			func_1607(uParam1, iLocal_1459, "Horse_01", 0, 0);
			func_1607(uParam1, func_1164(uParam1), "Horse_01^1", 0, 0);
			func_1607(uParam1, __LIB_3__::func_136(1606546482, 0), "p_door11x", 0, 0);
			func_1607(uParam1, Local_14.f_43[0], "p_beechers_ladder01x", 0, 0);
			func_1607(uParam1, iLocal_1370, "p_bottleJD01x", 0, 0);
			func_1607(uParam1, iLocal_1371, "p_whiskeyglass01x", 0, 0);
			func_1607(uParam1, iLocal_1372, "p_whiskeyglass01x^1", 0, 0);
			func_1607(uParam1, iLocal_1373, "p_glass01x", 0, 0);
			func_1607(uParam1, iLocal_1374, "p_glass01x^1", 0, 0);
			func_1607(uParam1, iLocal_1375, "p_stick02x", 0, 0);
			func_1607(uParam1, iLocal_1376, "p_stick02x^1", 0, 0);
			func_1607(uParam1, iLocal_1377, "p_stick04x", 0, 0);
			func_1607(uParam1, iLocal_1378, "s_crateseat03x", 0, 0);
			func_1607(uParam1, iLocal_1379, "p_paper01x", 0, 0);
			func_1607(uParam1, iLocal_1380, "p_feather01x", 0, 0);
			func_1607(uParam1, iLocal_1381, "p_cs_ropelasso01x", 0, 0);
			func_1607(uParam1, iLocal_1382, "p_cs_rope01x", 0, 0);
			break;
		case 1:
			func_1607(uParam1, Global_35, "JOHN", 0, 0);
			func_1607(uParam1, uLocal_1456[0], "CharlesSmith", 0, 0);
			func_1607(uParam1, uLocal_1456[1], "uncle", 0, 0);
			func_1607(uParam1, iLocal_1459, "Horse_01", 0, 0);
			func_1607(uParam1, func_1164(uParam1), "Horse_01^1", 0, 0);
			func_1607(uParam1, __LIB_3__::func_136(1606546482, 0), "p_door11x", 0, 0);
			func_1607(uParam1, Local_14.f_43[0], "p_beechers_ladder01x", 0, 0);
			func_1607(uParam1, iLocal_1370, "p_bottleJD01x", 0, 0);
			func_1607(uParam1, iLocal_1371, "p_whiskeyglass01x", 0, 0);
			func_1607(uParam1, iLocal_1372, "p_whiskeyglass01x^1", 0, 0);
			func_1607(uParam1, iLocal_1373, "p_glass01x", 0, 0);
			func_1607(uParam1, iLocal_1374, "p_glass01x^1", 0, 0);
			func_1607(uParam1, iLocal_1375, "p_stick02x", 0, 0);
			func_1607(uParam1, iLocal_1376, "p_stick02x^1", 0, 0);
			func_1607(uParam1, iLocal_1377, "p_stick04x", 0, 0);
			func_1607(uParam1, iLocal_1378, "s_crateseat03x", 0, 0);
			func_1607(uParam1, iLocal_1379, "p_paper01x", 0, 0);
			func_1607(uParam1, iLocal_1380, "p_feather01x", 0, 0);
			func_1607(uParam1, iLocal_1381, "p_cs_ropelasso01x", 0, 0);
			func_1607(uParam1, iLocal_1382, "p_cs_rope01x", 0, 0);
			break;
		case 2:
			func_1607(uParam1, Global_35, "JOHN", 0, 0);
			func_1607(uParam1, uLocal_1456[0], "CHARLESSMITH", 0, 0);
			func_1607(uParam1, iLocal_1465, "G_M_M_UNIMOUNTAINMEN_01", 0, 0);
			break;
		case 16:
			func_1607(uParam1, Global_35, "JOHN", 0, 0);
			func_1607(uParam1, uLocal_1456[0], "CharlesSmith", 0, 0);
			func_1607(uParam1, uLocal_1456[1], "uncle", 0, 0);
			func_1607(uParam1, iLocal_1459, "Horse_01", 0, 0);
			func_1607(uParam1, func_1164(uParam1), "Horse_01^1", 0, 0);
			func_1607(uParam1, __LIB_3__::func_136(-1984149246, 0), "p_door11x", 0, 0);
			break;
		case 3:
			__LIB_11__::func_559(uLocal_202[iParam0], "CharlesSmith", uLocal_1456[0]);
			__LIB_11__::func_559(uLocal_202[iParam0], "JOHN", Global_35);
			__LIB_11__::func_559(uLocal_202[iParam0], "G_M_M_UNIMOUNTAINMEN_01^2", iLocal_1464);
			__LIB_11__::func_559(uLocal_202[iParam0], "G_M_M_UNIMOUNTAINMEN_01", iLocal_1465);
			__LIB_11__::func_559(uLocal_202[iParam0], "p_knife01x", iLocal_1383);
			break;
		case 4:
			break;
		case 7:
		case 9:
			__LIB_11__::func_559(uLocal_202[iParam0], "CS_JohnMarston", Global_35);
			__LIB_11__::func_559(uLocal_202[iParam0], "CS_CharlesSmith", uLocal_1456[0]);
			__LIB_11__::func_559(uLocal_202[iParam0], "CS_Uncle", uLocal_1456[1]);
			__LIB_11__::func_559(uLocal_202[iParam0], "S_ROPEHOGTIEHANDS01X", iLocal_197[0]);
			__LIB_11__::func_559(uLocal_202[iParam0], "S_ROPEHOGTIEHANDSMEDIUM01X", iLocal_197[1]);
			__LIB_11__::func_559(uLocal_202[iParam0], "S_ROPEHOGTIELEGS01X", iLocal_197[2]);
			__LIB_11__::func_559(uLocal_202[iParam0], "S_ROPEHOGTIELEGSMEDIUM01X", iLocal_197[3]);
			break;
		case 8:
			__LIB_11__::func_559(uLocal_202[iParam0], "CS_JohnMarston", Global_35);
			__LIB_11__::func_559(uLocal_202[iParam0], "CS_CharlesSmith", uLocal_1456[0]);
			__LIB_11__::func_559(uLocal_202[iParam0], "CS_Uncle", uLocal_1456[1]);
			break;
		case 15:
			__LIB_11__::func_559(uLocal_202[iParam0], "PLAYER_THREE", Global_35);
			__LIB_11__::func_559(uLocal_202[iParam0], "CHARLES", uLocal_1456[0]);
			__LIB_11__::func_559(uLocal_202[iParam0], "UNCLE", uLocal_1456[1]);
			break;
		case 5:
			__LIB_11__::func_559(uLocal_202[iParam0], "CS_CharlesSmith", uLocal_1456[0]);
			__LIB_11__::func_559(uLocal_202[iParam0], "P_C_Horse_01", iLocal_1459);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "CS_CharlesSmith", uLocal_1456[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "CS_Uncle", uLocal_1456[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "P_C_HORSE_01", iLocal_1459, 0);
			break;
	}
}

int func_1164(var uParam0)
{
	var uVar0;
	struct<11> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1460))
	{
		Var1.f_10 = 7;
		Var1 = 1;
		Var1.f_1 = 1;
		Var1.f_2 = 0;
		Var1.f_6 = { -1647.8f, -1380.4f, 84.4f };
		Var1.f_9 = 50f;
		iLocal_1460 = __LIB_4__::func_720(&uVar0, &Var1);
	}
	return iLocal_1460;
}

bool func_1169(int iParam0)
{
	if (iLocal_82[iParam0] == 1)
	{
		return true;
	}
	return false;
}

void func_1171(int iParam0)
{
	iLocal_82[iParam0] = 1;
}

void func_1173(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!PED::DOES_GROUP_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_GROUP(2);
	}
	if (PED::DOES_GROUP_EXIST(*iParam0))
	{
		PED::SET_GROUP_FORMATION(*iParam0, iParam3);
		if (iParam3 == 5)
		{
			PED::ADD_CUSTOM_FORMATION_LOCATION(*iParam0, 0f, -2.5f, 0f, 0);
			PED::ADD_CUSTOM_FORMATION_LOCATION(*iParam0, 0f, -5f, 0f, 1);
			PED::ADD_CUSTOM_FORMATION_LOCATION(*iParam0, 0f, -7.5f, 0f, 2);
		}
		if (!__LIB_0__::func_272(*uParam1, 0))
		{
			return;
		}
		PED::SET_PED_CONFIG_FLAG(*uParam1, 279, true);
		if (iParam2 == 0)
		{
			if (*uParam1 == Global_35)
			{
				__LIB_11__::func_562(*iParam0);
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(*uParam1, *iParam0);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 280, true);
			}
		}
		else if (!PED::_0x878B68960C1C2A35(*uParam1, *iParam0))
		{
			if (PED::IS_PED_IN_GROUP(*uParam1))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam1, 279, false);
				PED::REMOVE_PED_FROM_GROUP(*uParam1);
			}
			PED::SET_PED_AS_GROUP_LEADER(*uParam1, *iParam0, false);
		}
	}
}

bool func_1175(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	switch (iLocal_81)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1456[0]))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_1456[0], sLocal_175, 0, 9226, -1, 0, 0, -1);
			}
			__LIB_4__::func_982(uLocal_1456[0], 1.25f);
			__LIB_11__::func_48(1);
			break;
		case 1:
			__LIB_1__::func_448(Global_35, func_216(1, 5), 0, 30f, 15f, 10f, 0f, 1, 1, 1, 0);
			__LIB_1__::func_448(uLocal_1456[0], func_216(1, 5), 0, 30f, 15f, 10f, 0f, 1, 1, 1, 0);
			func_1614(-1618.171f, -1249.236f, 76.7082f, 20f, 10f, 0f);
			func_1615(uParam0);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) > 65)
				{
					if (!func_1169(50))
					{
						func_1171(50);
					}
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					TASK::CLEAR_PED_TASKS(func_1164(uParam0), true, false);
					__LIB_4__::func_982(uLocal_1456[0], 1f);
					TASK::WAYPOINT_RECORDING_GET_COORD(cLocal_176, 6, &vVar1);
					iLocal_1369 = OBJECT::CREATE_OBJECT(iLocal_346, vVar1, true, true, false, false, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_346);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1369, true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1369, true);
					ENTITY::SET_ENTITY_COLLISION(iLocal_1369, false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1369, false);
					__LIB_11__::func_48(2);
				}
				else if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) < 3)
				{
					__LIB_4__::func_982(uLocal_1456[0], 1.25f);
				}
				else
				{
					__LIB_4__::func_982(uLocal_1456[0], 1.75f);
				}
			}
			else if (!func_1169(50))
			{
				__LIB_11__::func_48(0);
				return false;
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) > 50)
				{
					if (!func_1616())
					{
						return false;
					}
				}
			}
			break;
		case 2:
			__LIB_1__::func_448(Global_35, func_216(1, 5), 0, 30f, 15f, 10f, 0f, 1, 1, 1, 0);
			__LIB_1__::func_448(uLocal_1456[0], func_216(1, 5), 0, 30f, 15f, 10f, 0f, 1, 1, 1, 0);
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_1456[0], -1634.5f, -1234.7f, 78f, 30f, 30f, 15f, false, true, 0) && !__LIB_0__::func_899(&uLocal_1717))
			{
				CAM::SET_GAMEPLAY_COORD_HINT(-1634.5f, -1234.7f, 78f, 1000, 1000, 500, 0);
				TASK::TASK_LOOK_AT_COORD(Global_35, -1634.5f, -1234.7f, 78f, 3000, 0, 51, 0);
				TASK::TASK_LOOK_AT_COORD(uLocal_1456[0], -1634.5f, -1234.7f, 78f, 3000, 0, 51, 0);
				__LIB_4__::func_89(&uLocal_1717, 0);
				func_1171(5);
				__LIB_11__::func_48(3);
			}
			Jump @1593; //curOff = 724
			if (!func_1181("MAR8_BLOOD"))
			{
				bVar0 = true;
			}
			else if (__LIB_1__::func_322("MAR8_BLOOD"))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_1__::func_448(Global_35, func_216(1, 5), 0, 30f, 20f, 1f, 0f, 1, 1, 1, 0);
			}
			__LIB_1__::func_448(uLocal_1456[0], func_216(1, 5), 0, 30f, 20f, 1f, 0f, 1, 1, 1, 0);
			if (__LIB_0__::func_899(&uLocal_1717))
			{
				if (__LIB_1__::func_583(&uLocal_1717) > 5f)
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_1456[0], sLocal_175, 0, 4203528, -1, 0, 0, -1);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cLocal_176, ENTITY::GET_ENTITY_COORDS(uLocal_1456[0], true, false), &uLocal_265);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					func_1179(0);
					if (iLocal_1716 == 0)
					{
						if (func_1617(&iLocal_1462, cLocal_176, 1))
						{
							iLocal_1716 = 1;
						}
					}
					__LIB_11__::func_48(4);
				}
			}
			Jump @1593; //curOff = 940
			if (!func_1181("MAR8_BLOOD"))
			{
				bVar0 = true;
			}
			else if (__LIB_1__::func_322("MAR8_BLOOD"))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_1__::func_448(Global_35, func_216(1, 5), 0, 6f, 4f, 2f, 0f, 1, 1, 1, 0);
			}
			__LIB_1__::func_448(uLocal_1456[0], func_216(1, 5), 0, 6f, 4f, 2f, 0f, 1, 1, 1, 0);
			__LIB_1__::func_448(uLocal_1456[0], -1935.4f, -1369.3f, 107.1f, 0, 9f, 6f, 3f, 0f, 1, 1, 1, 0);
			func_1618(uParam0);
			if (!func_1169(79))
			{
				if (__LIB_0__::func_94(uLocal_1456[0], -1935.4f, -1369.3f, 107.1f, 1) < 25f)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Uncle_Distant_Scream", -1972.372f, -1367.576f, 113.6861f, 0, false, 0, true, 0);
					func_1171(79);
				}
			}
			if (!func_1169(7))
			{
				if (__LIB_0__::func_94(uLocal_1456[0], -1935.4f, -1369.3f, 107.1f, 1) < 7.5f)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[5], "pbl_action", true);
					ANIMSCENE::START_ANIM_SCENE(uLocal_202[5]);
					func_1171(7);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_1456[0], -1935.4f, -1369.3f, 107.1f, 0.75f, 0.75f, 0.75f, false, true, 0))
			{
				bVar4 = true;
			}
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
			{
				bVar4 = true;
			}
			if (func_1169(7))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[5], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uLocal_202[5]))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(uLocal_1456[0], 1, 0, 0);
				}
				CAM::STOP_GAMEPLAY_HINT(false);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_1462);
				PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
				__LIB_4__::func_866(&iLocal_1369, 1, 1);
				func_1171(6);
				TASK::CLEAR_PED_TASKS(uLocal_1456[0], true, false);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				if (__LIB_0__::func_104())
				{
					__LIB_0__::func_105(1);
				}
				func_1251(joaat("MAR8_RIDE1"));
				__LIB_11__::func_48(5);
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
			{
				func_1615(uParam0);
				func_1614(-1935.4f, -1369.3f, 107.1f, 1106247680 /* Float: 30f */, 1101004800 /* Float: 20f */, 1097859072 /* Float: 15f */);
			}
			Jump @1593; //curOff = 1527
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_1456[0], -1935.9f, -1369.8f, 106.5f, 10f, 10f, 10f, false, true, 0))
			{
				__LIB_1__::func_561(&uLocal_1717);
				return true;
			}
			return false;
		}
void func_1176(int iParam0)
{
	PED::_0x1E017404784AA6A3(uLocal_1456[0], iParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(7, 2, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(25, 2, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(21, 2, 1);
	AUDIO::_0x660A8F876DF1D4F8(19);
	AUDIO::_0x0D7FD6A55FD63AEF(23, 2, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(22, 2, 1);
}

void func_1177(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			if (__LIB_0__::func_27(iLocal_182, 1))
			{
				if (!__LIB_5__::func_463())
				{
					if (!func_1169(4) && !func_1181("MAR8_WALK"))
					{
						__LIB_5__::func_590(uParam0, "MAR8_O_FOLLOW", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						func_1171(4);
						if (MAP::DOES_BLIP_EXIST(iLocal_1653))
						{
							MAP::REMOVE_BLIP(&iLocal_1653);
						}
						__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
						__LIB_11__::func_59(uParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_665(Global_35, uLocal_1456[0], 1, 1) > 30f && iLocal_1732 == 0)
			{
				iLocal_1732 = 1;
			}
			if ((func_1169(5) && !func_1181("MAR8_BLOOD")) && __LIB_5__::func_314(uParam0, "MAR8_BLOOD", 0))
			{
				func_1622("MAR8_BLOOD", 1);
				__LIB_11__::func_59(uParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_1__::func_322("MAR8_BLOOD"))
			{
				__LIB_11__::func_59(uParam0, 3);
			}
			break;
		case 3:
			if ((func_1169(6) && !func_1181("MAR8_IG2_DISM")) && __LIB_11__::func_647(uParam0, "MAR8_IG2_DISM", 0, 0, 0))
			{
				func_1622("MAR8_IG2_DISM", 1);
				__LIB_11__::func_59(uParam0, 4);
			}
			break;
		case 4:
			if (func_1169(8))
			{
				__LIB_11__::func_59(uParam0, 5);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(iLocal_182, 64))
			{
				if (!__LIB_5__::func_463())
				{
					if (func_1169(9) && !func_1181("MAR8_O_HIDEH"))
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_1653))
						{
							MAP::REMOVE_BLIP(&iLocal_1653);
						}
						iLocal_1653 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, -1943.1f, -1325.8f, 108.4f, 20f);
						__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
						__LIB_5__::func_590(uParam0, "MAR8_O_HIDEH", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_2__::func_259(&uLocal_1415);
						func_1622("MAR8_O_HIDEH", 1);
					}
				}
			}
			if (!func_1169(10))
			{
				if (func_1181("MAR8_O_HIDEH"))
				{
					if (__LIB_1__::func_583(&uLocal_1415) >= 20f)
					{
						if (!__LIB_5__::func_463())
						{
							if (__LIB_5__::func_314(uParam0, "MAR8_LEAVEHOR", 0))
							{
								__LIB_2__::func_259(&uLocal_1415);
							}
						}
					}
				}
			}
			if (func_1169(10) && !__LIB_0__::func_481(1))
			{
				if (__LIB_11__::func_647(uParam0, "MAR8_HIDEMOUNTS", 0, 0, 0))
				{
					__LIB_11__::func_59(uParam0, 51);
				}
			}
			break;
		case 25:
			if (__LIB_11__::func_647(uParam0, "MAR8_STRAIL", 0, 0, 0))
			{
				__LIB_11__::func_59(uParam0, 3);
			}
			break;
		case 26:
			if (__LIB_11__::func_647(uParam0, "MAR8_CTRAIL", 0, 0, 0))
			{
				__LIB_11__::func_59(uParam0, 3);
			}
			break;
		case 51:
			break;
	}
}

void func_1178(var uParam0)
{
	__LIB_8__::func_875(uLocal_1456[0], "MAR8_CHAT2", 1, 1);
	if (!__LIB_0__::func_27(iLocal_182, 1))
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_5__::func_314(uParam0, "MAR8_LETS_GO", 0))
				{
					__LIB_1__::func_683(&iLocal_182, 1);
				}
			}
		}
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
		{
			if (!__LIB_0__::func_27(iLocal_182, 2))
			{
				if (__LIB_1__::func_583(&uLocal_1415) >= 5f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "MAR8_CHAT1", 0))
						{
							__LIB_1__::func_683(&iLocal_182, 2);
						}
					}
				}
			}
		}
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
	{
		if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_1456[0]))
		{
			if (!__LIB_5__::func_463())
			{
				if (!__LIB_0__::func_27(iLocal_182, 32) || __LIB_1__::func_583(&uLocal_1415) >= 10f)
				{
					if (__LIB_5__::func_314(uParam0, "MAR8_DAWDLE", 0))
					{
						__LIB_1__::func_683(&iLocal_182, 32);
						__LIB_2__::func_259(&uLocal_1415);
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_182, 8))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
			{
				if (func_1181("MAR8_BLOOD"))
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_2__::func_259(&uLocal_1415);
						__LIB_1__::func_683(&iLocal_182, 8);
					}
				}
			}
		}
	}
	else if (iLocal_81 >= 3)
	{
		if (!__LIB_0__::func_27(iLocal_182, 4))
		{
			if (__LIB_1__::func_583(&uLocal_1415) >= 4f)
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
					{
						if (!__LIB_0__::func_27(iLocal_182, 4))
						{
							if (!__LIB_5__::func_463())
							{
								if (__LIB_5__::func_314(uParam0, "MAR8_CHAT2", 0))
								{
									__LIB_1__::func_683(&iLocal_182, 4);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_182, 16))
	{
		if (func_1169(7))
		{
			if (__LIB_11__::func_8("MAR8_CHAT2"))
			{
				__LIB_6__::func_900("MAR8_CHAT2", 0, 0);
			}
			if (!__LIB_5__::func_463())
			{
				__LIB_1__::func_683(&iLocal_182, 16);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_182, 64))
	{
		if (func_1169(9))
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_5__::func_314(uParam0, "MAR8_HORSES", 0))
				{
					__LIB_1__::func_683(&iLocal_182, 64);
				}
			}
		}
	}
}

void func_1179(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_1456[0]))
	{
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), uLocal_1456[0], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
		PED::_0x9BBEAF8B0C007F1E(uLocal_1456[0], iParam0);
	}
}

bool func_1181(char* sParam0)
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_1628(iVar0) != -1)
	{
		return true;
	}
	return false;
}

void func_1188(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			if (!__LIB_5__::func_463())
			{
				__LIB_5__::func_486(uParam0, "MAR8_O_FOLLOW", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_5__::func_590(uParam0, "MAR8_O_FOLLOW", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
				}
				__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				__LIB_11__::func_59(uParam0, 1);
			}
			break;
		case 1:
			if (!__LIB_5__::func_463())
			{
				if (!func_1169(12))
				{
					if (!func_1169(46))
					{
						if ((func_1169(11) && !func_1181("MAR8_SPOTDOUBLE")) && __LIB_11__::func_647(uParam0, "MAR8_SPOTDOUBLE", 0, 0, 0))
						{
							func_1622("MAR8_SPOTDOUBLE", 1);
							__LIB_11__::func_59(uParam0, 2);
						}
					}
					else
					{
						__LIB_11__::func_59(uParam0, 2);
					}
				}
				else
				{
					__LIB_11__::func_59(uParam0, 2);
				}
			}
			break;
		case 2:
			if (__LIB_11__::func_8("MAR8_SPOTDOUBLE"))
			{
				if (func_1169(46))
				{
					__LIB_6__::func_900("MAR8_SPOTDOUBLE", 1, 0);
				}
			}
			if (((func_1169(14) && func_1181("MAR8_SPOTDOUBLE")) && func_1181("MAR8_KILLDOUBLE")) && !func_1181("MAR8_O_DOUBLE"))
			{
				func_1622("MAR8_O_DOUBLE", 1);
			}
			if (!func_1169(46))
			{
				if (func_1169(14) && !func_1181("MAR8_KILLDOUBLE"))
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_5__::func_590(uParam0, "MAR8_O_DOUBLE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
						func_1622("MAR8_KILLDOUBLE", 1);
					}
				}
			}
			else if (!func_1181("MAR8_KILLDOUBLE"))
			{
				func_1622("MAR8_KILLDOUBLE", 1);
			}
			if ((func_1169(14) && !func_1181("MAR8_H_STEALTH")) && __LIB_11__::func_647(uParam0, "MAR8_H_STEALTH", 8, 5f, 0))
			{
				func_1622("MAR8_H_STEALTH", 1);
			}
			if (func_1169(17) && __LIB_11__::func_647(uParam0, "MAR8_HANGED", 0, 2f, 0))
			{
				func_1622("MAR8_HANGED", 1);
			}
			if ((iLocal_1708 == 4 && !__LIB_11__::func_8("MAR8_HANGED")) || func_1169(46))
			{
				if (!func_1181("MAR8_DEEPF") && __LIB_11__::func_647(uParam0, "MAR8_DEEPF", 0, 2f, 0))
				{
					func_1622("MAR8_DEEPF", 1);
					__LIB_11__::func_59(uParam0, 3);
				}
				if (!func_1181("MAR8_O_FOLLOW"))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_5__::func_590(uParam0, "MAR8_O_FOLLOW", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					func_1622("MAR8_O_FOLLOW", 1);
				}
			}
			else if (!func_1169(46))
			{
			}
			break;
		case 3:
			if (!func_1169(18))
			{
				if (!__LIB_11__::func_8("MAR8_DEEPF") && !__LIB_11__::func_8("MAR8_HANGED"))
				{
					func_1171(18);
				}
			}
			if (func_1169(28))
			{
				__LIB_4__::func_89(&uLocal_1733, 0);
				if (__LIB_9__::func_913(&uLocal_1733, 3f))
				{
					if (!func_1181("MAR8_PATROL") && __LIB_11__::func_647(uParam0, "MAR8_PATROL", 0, 0, 0))
					{
						func_1622("MAR8_PATROL", 1);
						__LIB_2__::func_259(&uLocal_1415);
						__LIB_11__::func_59(uParam0, 4);
					}
				}
			}
			break;
		case 4:
			if (!func_1181("MAR8_O_SCOUTS"))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_5__::func_590(uParam0, "MAR8_O_SCOUTS", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
					func_1622("MAR8_O_SCOUTS", 1);
				}
			}
			if ((func_1169(31) && !func_1181("MAR8_SKPATROL")) && __LIB_11__::func_647(uParam0, "MAR8_SKPATROL", 0, 1f, 0))
			{
				func_1622("MAR8_SKPATROL", 1);
			}
			if (func_1169(32))
			{
				__LIB_11__::func_59(uParam0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(iLocal_183, 8))
			{
				if (!func_1169(65))
				{
					if (!__LIB_5__::func_463())
					{
						if (!func_1181("MAR8_POSTPAT"))
						{
							if (__LIB_11__::func_647(uParam0, "MAR8_POSTPAT", 0, 3f, 0))
							{
								func_1622("MAR8_POSTPAT", 1);
							}
						}
					}
				}
			}
			if (!__LIB_0__::func_27(iLocal_183, 16384))
			{
				if (!__LIB_0__::func_27(iLocal_183, 8))
				{
					if (func_1181("MAR8_POSTPAT"))
					{
						if (!__LIB_5__::func_463())
						{
							__LIB_5__::func_590(uParam0, "MAR8_O_FOLLOW", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
							__LIB_1__::func_683(&iLocal_183, 16384);
						}
					}
				}
				else if (__LIB_0__::func_27(iLocal_183, 8192))
				{
					if (!__LIB_11__::func_8("MAR8_POSTPATK"))
					{
						__LIB_5__::func_590(uParam0, "MAR8_O_FOLLOW", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
						__LIB_1__::func_683(&iLocal_183, 16384);
					}
				}
			}
			if ((func_1169(19) && !func_1181("MAR8_SCREAM")) && __LIB_11__::func_647(uParam0, "MAR8_SCREAM", 0, 0, 0))
			{
				func_1622("MAR8_SCREAM", 1);
				__LIB_11__::func_59(uParam0, 6);
			}
			break;
		case 6:
			if (!func_1169(22) && !func_1169(58))
			{
				if ((func_1169(20) && !func_1181("MAR8_WAGON")) && __LIB_11__::func_647(uParam0, "MAR8_WAGON", 0, 0, 0))
				{
					__LIB_2__::func_259(&uLocal_1415);
					func_1622("MAR8_WAGON", 1);
				}
				else if (func_1181("MAR8_WAGON"))
				{
					if (!func_1181("MAR8_O_FWAGON"))
					{
						if (!__LIB_11__::func_8("MAR8_WAGON"))
						{
							__LIB_5__::func_590(uParam0, "MAR8_O_FWAGON", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_1622("MAR8_O_FWAGON", 1);
							__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
							if (!MAP::DOES_BLIP_EXIST(Local_1619.f_15))
							{
								Local_1619.f_15 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1619);
								__LIB_3__::func_356(Local_1619, -1118229366, 1);
							}
						}
					}
				}
			}
			if ((func_1169(21) && !func_1181("MAR8_WAGONSTOP")) && __LIB_11__::func_647(uParam0, "MAR8_WAGONSTOP", 0, 0, 0))
			{
				func_1622("MAR8_WAGONSTOP", 1);
				__LIB_11__::func_59(uParam0, 7);
			}
			if (func_1169(22))
			{
				if (__LIB_11__::func_8("MAR8_WAGON"))
				{
					__LIB_6__::func_900("MAR8_WAGON", 1, 0);
				}
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_590(uParam0, "MAR8_O_FOLLOW", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_11__::func_59(uParam0, 7);
			}
			else if (func_1169(58))
			{
				if (__LIB_11__::func_8("MAR8_WAGON"))
				{
					__LIB_6__::func_900("MAR8_WAGON", 1, 0);
				}
				if (!func_1181("MAR8_O_KWAGON"))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_5__::func_590(uParam0, "MAR8_O_KWAGON", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					func_1622("MAR8_O_KWAGON", 1);
				}
			}
			break;
		case 7:
			if (!func_1169(25))
			{
				if (func_1169(22))
				{
					if (!func_1181("MAR8_WAGKILL"))
					{
						if (__LIB_11__::func_647(uParam0, "MAR8_WAGKILL", 0, 0, 0))
						{
							func_1622("MAR8_WAGKILL", 1);
						}
					}
				}
			}
			if (!func_1169(22))
			{
				if (func_1169(25))
				{
					if (__LIB_0__::func_27(iLocal_183, 1024))
					{
						if (!func_1181("MAR8_DRIVER"))
						{
							if (__LIB_11__::func_647(uParam0, "MAR8_DRIVER", 0, 0, 0))
							{
								__LIB_2__::func_259(&uLocal_1415);
								func_1622("MAR8_DRIVER", 1);
							}
						}
					}
				}
			}
			if (!func_1169(22))
			{
				if (!func_1181("MAR8_O_FSKIN"))
				{
					if (!__LIB_11__::func_8("MAR8_WAGONSTOP"))
					{
						if (!__LIB_11__::func_8("MAR8_DRIVER"))
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							__LIB_5__::func_590(uParam0, "MAR8_O_FSKIN", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_1622("MAR8_O_FSKIN", 1);
						}
					}
				}
			}
			if (func_1169(26) && !func_1169(64))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_590(uParam0, "MAR8_O_FOLLOW", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_1171(64);
			}
			if (iLocal_1708 == 6 && iLocal_1707 == 15)
			{
				if (__LIB_11__::func_647(uParam0, "MAR8_ATCAMP", 0, 0, 0))
				{
					__LIB_11__::func_59(uParam0, 8);
				}
			}
			break;
		case 8:
			if (!func_1181("MAR8_O_CLIFF"))
			{
				if (!__LIB_11__::func_8("MAR8_ATCAMP"))
				{
					func_1622("MAR8_O_CLIFF", 1);
					__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
					if (MAP::DOES_BLIP_EXIST(iLocal_1653))
					{
						MAP::REMOVE_BLIP(&iLocal_1653);
					}
					iLocal_1653 = __LIB_5__::func_554(408396114, iLocal_1656[0], 1);
					__LIB_11__::func_59(uParam0, 9);
					__LIB_5__::func_590(uParam0, "MAR8_O_CLIFF", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			break;
		case 9:
			if (!func_1181("MAR8_BINOCS") && __LIB_11__::func_647(uParam0, "MAR8_BINOCS", 0, 0, 0))
			{
				__LIB_2__::func_259(&uLocal_1415);
				func_1622("MAR8_BINOCS", 1);
			}
			else if (func_1181("MAR8_BINOCS"))
			{
				if (!func_1181("MAR8_O_BINOC"))
				{
					if (func_1169(43))
					{
						if (!__LIB_11__::func_8("MAR8_BINOCS"))
						{
							if (MAP::DOES_BLIP_EXIST(iLocal_1653))
							{
								MAP::REMOVE_BLIP(&iLocal_1653);
							}
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							__LIB_5__::func_590(uParam0, "MAR8_O_BINOC", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_1622("MAR8_O_BINOC", 1);
						}
					}
				}
			}
			if (func_1169(43))
			{
				if (func_1169(48))
				{
					if (!func_1181("MAR8_LOOKING"))
					{
						if (__LIB_11__::func_608())
						{
							if (!func_1633(uLocal_1456[1], 25f, 1) && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_1456[1]))
							{
								if (__LIB_11__::func_647(uParam0, "MAR8_LOOKING", 0, 0, 0))
								{
									func_1622("MAR8_LOOKING", 1);
								}
							}
						}
					}
					if (!func_1181("MAR8_FOUND"))
					{
						if (func_1169(51))
						{
							if (!__LIB_11__::func_8("MAR8_LOOKING"))
							{
								if (__LIB_5__::func_314(uParam0, "MAR8_FOUND", 0))
								{
									func_1622("MAR8_FOUND", 1);
									__LIB_2__::func_259(&uLocal_1403);
								}
							}
						}
					}
				}
			}
			break;
		case 51:
			break;
	}
}

void func_1189(var uParam0)
{
	char cVar0[16];
	int iVar2;
	char cVar3[16];
	char cVar5[16];
	if (!__LIB_0__::func_27(iLocal_183, 1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_1__::func_583(&uLocal_1415) >= 3f)
				{
					if (__LIB_5__::func_314(uParam0, "MAR8_C_TREES", 0))
					{
						__LIB_2__::func_259(&uLocal_1415);
						__LIB_1__::func_683(&iLocal_183, 1);
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_1415);
			}
		}
	}
	if (func_1169(12))
	{
		if (!__LIB_0__::func_27(iLocal_183, 2))
		{
			if (!__LIB_0__::func_27(iLocal_183, 32768))
			{
				if (!PED::IS_PED_INJURED(Local_1562) && !PED::IS_PED_INJURED(Local_1590))
				{
					__LIB_1__::func_683(&iLocal_183, 32768);
				}
				else if (!__LIB_0__::func_899(&uLocal_1436))
				{
					__LIB_2__::func_259(&uLocal_1436);
				}
				else if (__LIB_1__::func_583(&uLocal_1436) >= 2f)
				{
					if (!PED::IS_PED_INJURED(Local_1562) || !PED::IS_PED_INJURED(Local_1590))
					{
						__LIB_1__::func_683(&iLocal_183, 32768);
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_183, 32768))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_5__::func_314(uParam0, "MAR8_KILL_MISS", 0))
					{
						__LIB_1__::func_683(&iLocal_183, 2);
					}
				}
			}
		}
	}
	if (iLocal_1561 == 2)
	{
		if (!func_1634())
		{
			if (!func_1635())
			{
				if (__LIB_0__::func_899(&uLocal_1391))
				{
					if (__LIB_1__::func_583(&uLocal_1391) >= 10f)
					{
						if (!__LIB_5__::func_463())
						{
							if (__LIB_5__::func_314(uParam0, "MAR8_HURRY", 0))
							{
								__LIB_2__::func_259(&uLocal_1391);
							}
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_183, 4))
	{
		if (iLocal_1707 == 8)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_5__::func_314(uParam0, "MAR8_LETS_MOVE", 0))
				{
					__LIB_1__::func_683(&iLocal_183, 4);
				}
			}
		}
	}
	if (iLocal_1707 == 9)
	{
		if (func_1181("MAR8_PATROL"))
		{
			if (__LIB_1__::func_583(&uLocal_1415) >= 8f)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_5__::func_314(uParam0, "MAR8_PATROLPASS", 0))
					{
						__LIB_2__::func_259(&uLocal_1415);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_665(Global_35, uLocal_1456[0], 1, 1) >= 28f)
	{
		if (!__LIB_5__::func_463())
		{
			if (!__LIB_0__::func_27(iLocal_183, 4096))
			{
				if ((iLocal_186 % 2) == 0)
				{
					StringCopy(&cVar0, "MAR8_WHERE", 16);
				}
				else
				{
					StringCopy(&cVar0, "MAR8_CATCH_UP", 16);
				}
				if (__LIB_5__::func_314(uParam0, &cVar0, 0))
				{
					__LIB_1__::func_683(&iLocal_183, 4096);
					iLocal_186++;
				}
			}
		}
	}
	else if (__LIB_0__::func_27(iLocal_183, 4096))
	{
		if (__LIB_0__::func_665(Global_35, uLocal_1456[0], 1, 1) <= 15f)
		{
			__LIB_1__::func_681(&iLocal_183, 4096);
		}
	}
	if (!__LIB_0__::func_27(iLocal_183, 8))
	{
		if (iLocal_1707 == 11)
		{
			__LIB_1__::func_683(&iLocal_183, 8);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_183, 16))
	{
		if (iLocal_1707 == 3)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_5__::func_314(uParam0, "MAR8_POSTPATKC", 0))
				{
					__LIB_1__::func_683(&iLocal_183, 16);
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_183, 8192))
	{
		if (iLocal_1707 == 3)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_5__::func_314(uParam0, "MAR8_POSTPATK", 0))
				{
					__LIB_1__::func_683(&iLocal_183, 8192);
				}
			}
		}
	}
	if (func_1181("MAR8_SCREAM"))
	{
		if (!__LIB_0__::func_27(iLocal_183, 32))
		{
			__LIB_2__::func_259(&uLocal_1418);
			__LIB_1__::func_683(&iLocal_183, 32);
		}
		else if (!func_1169(25))
		{
			if (!func_1169(91))
			{
				if (__LIB_1__::func_583(&uLocal_1418) >= 5f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1652, false, false))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1652, 0))
						{
							iVar2 = TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_1652);
							if (iVar2 > 28)
							{
								func_1171(91);
							}
						}
					}
					if (!func_1169(91))
					{
						if ((iLocal_1707 == 3 || iLocal_1707 == 4) || iLocal_1707 == 12)
						{
							if (!__LIB_5__::func_463())
							{
								if (__LIB_5__::func_314(uParam0, "MAR8_DRAGGROAN", 0))
								{
									__LIB_2__::func_259(&uLocal_1418);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_183, 1024))
	{
		if ((Local_1619.f_21 == 4 || Local_1619.f_21 == 5) || Local_1619.f_21 == 7)
		{
			if (func_1169(86))
			{
				if (!__LIB_11__::func_8("MAR8_DRAGGROAN"))
				{
					if (__LIB_5__::func_314(uParam0, "MAR8_DRAGDIES", 0))
					{
						__LIB_1__::func_683(&iLocal_183, 1024);
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_183, 64))
	{
		if (!func_1169(22) && !func_1169(58))
		{
			if (func_1181("MAR8_WAGON"))
			{
				if (__LIB_1__::func_583(&uLocal_1415) > 15f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "MAR8_WAGFOLLOW", 0))
						{
							__LIB_1__::func_683(&iLocal_183, 64);
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_183, 128))
	{
		if (func_1181("MAR8_DRIVER"))
		{
			if (!PED::IS_PED_INJURED(Local_1619))
			{
				if (__LIB_1__::func_583(&uLocal_1415) > 10f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "MAR8_DRIVERTAKE", 0))
						{
							__LIB_1__::func_683(&iLocal_183, 128);
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_183, 256))
	{
		if (iLocal_1707 == 14)
		{
			if (func_1181("MAR8_WAGONSTOP"))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_5__::func_314(uParam0, "MAR8_DRIVERDEAD", 0))
					{
						__LIB_1__::func_683(&iLocal_183, 256);
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_183, 512))
	{
		if (func_1169(26))
		{
			if (__LIB_0__::func_94(uLocal_1456[0], -2071.4f, -1422.2f, 131.7f, 1) < 25f)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_5__::func_314(uParam0, "MAR8_APPR_CAMP", 0))
					{
						__LIB_1__::func_683(&iLocal_183, 512);
					}
				}
			}
		}
	}
	if (!func_1169(43))
	{
		if (func_1181("MAR8_BINOCS"))
		{
			if (__LIB_1__::func_583(&uLocal_1415) >= 8f)
			{
				if (__LIB_0__::func_665(Global_35, uLocal_1456[0], 1, 1) >= 8f)
				{
					if (!__LIB_5__::func_463())
					{
						if ((iLocal_184 % 2) == 0)
						{
							StringCopy(&cVar3, "MAR8_OVERHERE", 16);
						}
						else
						{
							StringCopy(&cVar3, "MAR8_OVERHERE2", 16);
						}
						if (__LIB_5__::func_314(uParam0, &cVar3, 0))
						{
							__LIB_2__::func_259(&uLocal_1415);
							iLocal_184++;
						}
					}
				}
			}
		}
	}
	if (!func_1169(51))
	{
		if (func_1169(43))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_1656[0], 1, 0))
			{
				if (!__LIB_11__::func_608())
				{
					if (__LIB_1__::func_583(&uLocal_1415) > 10f)
					{
						if (!__LIB_5__::func_463())
						{
							if ((iLocal_185 % 2) == 0)
							{
								StringCopy(&cVar5, "MAR8_TOOCLOSE", 16);
							}
							else
							{
								StringCopy(&cVar5, "MAR8_TOOCLOSE2", 16);
							}
							if (__LIB_5__::func_314(uParam0, &cVar5, 0))
							{
								__LIB_2__::func_259(&uLocal_1415);
								iLocal_185++;
							}
						}
					}
				}
			}
		}
	}
}

bool func_1190(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	func_1637(uParam0);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 1);
	if (func_1638(uParam0))
	{
		__LIB_11__::func_648(uParam0, __LIB_0__::func_482("MAR8_FAIL_STEALTH"), 1, 0);
	}
	if ((CLOCK::GET_CLOCK_HOURS() >= 13 && iLocal_1708 != 4) && iLocal_1708 != 6)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 15 && (iLocal_1708 == 4 || iLocal_1708 == 6))
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	switch (iLocal_1708)
	{
		case 0:
			func_1640(uParam0);
			if (func_1641() || func_1642())
			{
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 30f, false);
				__LIB_4__::func_228(&uLocal_1678);
				__LIB_1__::func_401(&uLocal_1678, 1);
				__LIB_2__::func_830(&uLocal_1678, 1);
				__LIB_1__::func_398(&uLocal_1678, 1);
				__LIB_6__::func_905(&uLocal_1678);
				__LIB_1__::func_399(&uLocal_1678, 0);
				__LIB_1__::func_397(&uLocal_1678, 0);
				__LIB_1__::func_396(&uLocal_1678, 1);
				func_1171(11);
				func_1651(1);
			}
			break;
		case 1:
			if (func_1640(uParam0))
			{
				func_1651(4);
			}
			break;
		case 4:
			if (func_1652(uParam0))
			{
				func_1651(2);
			}
			func_1653(uParam0);
			break;
		case 2:
			if (func_1653(uParam0))
			{
				vVar1 = { func_216(3, 1) };
				fVar0 = func_1357(3, 1);
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
					__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				}
				__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				func_824(uParam0, 4, &(uLocal_1456[1]), 0, vVar1.x, vVar1.y, vVar1.z, fVar0, 1, -922193456, 0, 0, 1, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1456[1]))
				{
					return false;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1456[1], true);
				func_832(uLocal_1456[1], vVar1, fVar0, 2, 1073741824 /* Float: 2f */);
				__LIB_5__::func_106(uParam0, uLocal_1456[1], "UNCLE", 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_1456[1], true);
				ENTITY::_0x18FF3110CF47115D(uLocal_1456[1], 1, 0);
				ENTITY::_0x18FF3110CF47115D(uLocal_1456[1], 4, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uLocal_1456[1], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1456[1], joaat("REL_PLAYER_ALLY"));
				PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 192, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 273, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_1456[1], 193, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1456[1], 5, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1456[1], 11, true);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_1456[1], 512, true);
				if (!PED::IS_PED_INJURED(uLocal_1456[1]))
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1456[1], true, true);
				}
				func_1651(5);
			}
			break;
		case 3:
			if (func_1640(uParam0))
			{
				CLOCK::PAUSE_CLOCK(false, 0);
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 40f, false);
				func_1651(4);
			}
			break;
		case 5:
			func_1192(uParam0);
			if (iLocal_1707 == 15)
			{
				func_1651(6);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_1191()
{
	if (!func_1169(54))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_268[0 /*28*/].f_7))
		{
			Local_268[0 /*28*/].f_7 = func_1654(-2080.82f, -1438.206f, 127.3495f, 0);
			Local_268[0 /*28*/] = { -2088.015f, -1434.998f, 132.3212f };
			Local_268[0 /*28*/].f_3 = { -2088.015f, -1434.998f, 130.237f };
			Local_268[0 /*28*/].f_8 = { 0f, 0f, 135.6f };
			Local_268[0 /*28*/].f_11 = { 0f, 0f, 0f };
			Local_268[0 /*28*/].f_14 = 1f;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_268[1 /*28*/].f_7))
		{
			Local_268[1 /*28*/].f_7 = func_1654(-2080.33f, -1436.331f, 127.568f, 0);
			Local_268[1 /*28*/] = { -2087.771f, -1432.823f, 132.2767f };
			Local_268[1 /*28*/].f_3 = { -2087.771f, -1432.823f, 130.2767f };
			Local_268[1 /*28*/].f_8 = { 0f, 0f, 135.6f };
			Local_268[1 /*28*/].f_11 = { 0f, 0f, 0f };
			Local_268[1 /*28*/].f_14 = 1f;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_268[0 /*28*/].f_7))
		{
			if (!Local_268[0 /*28*/].f_25)
			{
				if (func_1655(&(Local_268[0 /*28*/])))
				{
					PED::SET_PED_CAN_RAGDOLL(Local_268[0 /*28*/].f_7, true);
					PED::SET_PED_TO_RAGDOLL(Local_268[0 /*28*/].f_7, 10000, 20000, 0, true, true, false);
					Local_268[0 /*28*/].f_25 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_268[1 /*28*/].f_7))
		{
			if (!Local_268[1 /*28*/].f_25)
			{
				if (func_1655(&(Local_268[1 /*28*/])))
				{
					PED::SET_PED_CAN_RAGDOLL(Local_268[1 /*28*/].f_7, true);
					PED::SET_PED_TO_RAGDOLL(Local_268[1 /*28*/].f_7, 10000, 20000, 0, true, true, false);
					Local_268[1 /*28*/].f_25 = 1;
				}
			}
		}
		if (Local_268[0 /*28*/].f_25 && Local_268[1 /*28*/].f_25)
		{
			func_1171(54);
		}
		return false;
	}
	return true;
}

void func_1192(var uParam0)
{
	switch (iLocal_180)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_197[0]))
			{
				iLocal_197[0] = OBJECT::CREATE_OBJECT(joaat("S_ROPEHOGTIEHANDS01X"), -2065f, -1448.7f, 127.6f, true, true, false, false, true);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_197[1]))
			{
				iLocal_197[1] = OBJECT::CREATE_OBJECT(joaat("S_ROPEHOGTIEHANDSMEDIUM01X"), -2065f, -1448.7f, 127.6f, true, true, false, false, true);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_197[2]))
			{
				iLocal_197[2] = OBJECT::CREATE_OBJECT(joaat("S_ROPEHOGTIELEGS01X"), -2065f, -1448.7f, 127.6f, true, true, false, false, true);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_197[3]))
			{
				iLocal_197[3] = OBJECT::CREATE_OBJECT(joaat("S_ROPEHOGTIELEGSMEDIUM01X"), -2065f, -1448.7f, 127.6f, true, true, false, false, true);
				return;
			}
			if (__LIB_10__::func_529(&(uLocal_202[7]), func_402(7), 0, "pbl_Torture_loop_01"))
			{
				__LIB_1__::func_288(4, -301101630, 1);
				func_1157(7, uParam0);
				iLocal_180 = 2;
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_Torture_loop_01"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_Torture_loop_01");
				return;
			}
			__LIB_11__::func_49(uLocal_202[7]);
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
			{
				iLocal_180 = 3;
			}
			break;
		case 3:
			if (__LIB_4__::func_939(uParam0) <= iLocal_330)
			{
				return;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_ACTION_rescue"))
			{
				func_1157(7, uParam0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_ACTION_rescue");
				return;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_john_over_here"))
			{
				func_1157(7, uParam0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_john_over_here");
				return;
			}
			if (func_1169(40))
			{
				iLocal_180 = 8;
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], "pbl_Torture_loop_01"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_202[7]) > 0.98f)
					{
						func_1157(7, uParam0);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], "pbl_john_over_here", true);
						iLocal_180 = 4;
					}
				}
			}
			break;
		case 4:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_ACTION_rescue"))
			{
				func_1157(7, uParam0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_ACTION_rescue");
				return;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_leave_one_for_me"))
			{
				func_1157(7, uParam0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_leave_one_for_me");
				return;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], "pbl_john_over_here"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_202[7]) > 0.98f)
					{
						func_1157(7, uParam0);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], "pbl_leave_one_for_me", true);
						iLocal_180 = 5;
					}
				}
			}
			break;
		case 5:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_Torture_loop_02"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_Torture_loop_02");
				return;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], "pbl_leave_one_for_me"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_202[7]) > 0.98f)
					{
						func_1157(7, uParam0);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], "pbl_Torture_loop_02", true);
						iLocal_180 = 6;
					}
				}
			}
			break;
		case 6:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_oh_johnny"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_oh_johnny");
				return;
			}
			if (func_1169(40))
			{
				iLocal_180 = 8;
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], "pbl_Torture_loop_02"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_202[7]) > 0.98f)
					{
						func_1157(7, uParam0);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], "pbl_oh_johnny", true);
						iLocal_180 = 7;
					}
				}
			}
			break;
		case 7:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_Torture_loop_03"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_Torture_loop_03");
				return;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], "pbl_oh_johnny"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_202[7]) > 0.98f)
					{
						func_1157(7, uParam0);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], "pbl_Torture_loop_03", true);
						iLocal_180 = 8;
					}
				}
			}
			break;
		case 8:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_ACTION_rescue"))
			{
				func_1157(7, uParam0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_ACTION_rescue");
				return;
			}
			if ((((func_1169(41) && ENTITY::IS_ENTITY_AT_COORD(Global_35, -2065.5f, -1447.1f, 128.4108f, 1f, 1f, 1f, false, true, 0)) && !__LIB_0__::func_163(Global_35, 713668775)) && !__LIB_0__::func_163(Global_35, 242628503)) && iLocal_179 == 2)
			{
				func_1157(7, uParam0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], "pbl_ACTION_rescue", true);
				iLocal_180 = 10;
			}
			else if (func_1169(70))
			{
				iLocal_180 = 9;
			}
			break;
		case 9:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], "pbl_ACTION_fail"))
			{
				func_1157(7, uParam0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], "pbl_ACTION_fail");
				return;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[9], false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
				{
					ANIMSCENE::RESET_ANIM_SCENE(uLocal_202[7], 0);
				}
				func_1157(9, uParam0);
				__LIB_11__::func_49(uLocal_202[9]);
				iLocal_180 = 10;
			}
			break;
	}
	func_1657();
}

bool func_1194(var uParam0)
{
	if (func_1169(51))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(uLocal_1456[1]))
	{
		return false;
	}
	if (!__LIB_11__::func_608())
	{
		return false;
	}
	if (func_1633(uLocal_1456[1], 16f, 1) || func_1633(uLocal_1456[1], 10f, 1))
	{
		return true;
	}
	if (func_1633(uLocal_1456[1], 25f, 1))
	{
		if (!func_1169(49))
		{
			__LIB_2__::func_259(&uLocal_1400);
			func_1171(49);
		}
		else if (__LIB_1__::func_592(&uLocal_1400) >= 500)
		{
			return true;
		}
	}
	else if (func_1169(49))
	{
		func_1198(49);
	}
	return false;
}

void func_1198(int iParam0)
{
	iLocal_82[iParam0] = 0;
}

struct<4> func_1199(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_216(iParam0, iParam1) };
	Var0.f_3 = func_1357(iParam0, iParam1);
	return Var0;
}

void func_1200(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_832(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1202(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_32))
	{
		Local_14.f_32 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_32), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_34[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_34[0] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2086.531f, -1412.815f, 131.9169f, 174.7785f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_34[0], "Skinner1");
		__LIB_6__::func_906(Local_14.f_32, Local_14.f_34[0]);
		__LIB_5__::func_510(Local_14.f_34[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_34[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_34[1] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2088.923f, -1413.015f, 131.9404f, 204.7784f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_34[1], "Skinner2");
		__LIB_6__::func_906(Local_14.f_32, Local_14.f_34[1]);
		__LIB_5__::func_510(Local_14.f_34[1], Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_32), 1);
	return true;
}

bool func_1203()
{
	if (!PED::IS_PED_INJURED(Local_14.f_34[1]))
	{
		if (PED::_0xA0BC8FAED8CFEB3C(Local_14.f_34[1]))
		{
			PED::_SET_PED_BODY_COMPONENT(Local_14.f_34[1], -845386610);
			PED::_UPDATE_PED_VARIATION(Local_14.f_34[1], false, true, true, true, false);
			return true;
		}
	}
	return false;
}

void func_1205(int iParam0)
{
	int iVar0;
	var uVar1[3];
	vector3 vVar5[3];
	int iVar15;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar5[0 /*3*/] = { -2082.583f, -1391.289f, 128.254f };
	vVar5[1 /*3*/] = { -2085.207f, -1389.341f, 128.1798f };
	vVar5[2 /*3*/] = { -2085.795f, -1384.263f, 127.3221f };
	iVar15 = __LIB_9__::func_836(&uVar1, iParam0);
	if (iVar15 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar15)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]))
			{
				func_832(uVar1[iVar0], vVar5[iVar0 /*3*/], 0f, 2, 1073741824 /* Float: 2f */);
			}
			iVar0++;
		}
	}
}

void func_1207(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 9)
	{
		iVar0 = func_1665(iVar2);
		if (iVar0 != 0 && WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false))
		{
			iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar0, true);
			WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar0, iVar1);
		}
		iVar2++;
	}
}

void func_1209(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[3], false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_202[3]) > 1.5f)
				{
					if (__LIB_5__::func_314(uParam0, "MAR8_DEADEYE", 0))
					{
						__LIB_11__::func_59(uParam0, -1);
					}
				}
			}
			break;
		case 1:
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_11__::func_59(uParam0, 2);
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_356[0 /*28*/]) && PED::IS_PED_INJURED(iLocal_1464))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_590(uParam0, "MAR8_O_SKIN", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
	}
}

bool func_1215(var uParam0)
{
	if (!func_1667(-1, 1))
	{
		return false;
	}
	if (!func_1668(uParam0, 0, 0, 1092616192 /* Float: 10f */, 1, 1, 1))
	{
		return false;
	}
	if (!func_1668(uParam0, 1, 1, 2f, 0, 0, 1))
	{
		return false;
	}
	if (!func_1668(uParam0, 2, 1, 2f, 0, 0, 0))
	{
		return false;
	}
	if (!func_1668(uParam0, 3, 1, 2f, 0, 0, 1))
	{
		return false;
	}
	if (!func_1668(uParam0, 4, 1, 2f, 0, 0, 0))
	{
		return false;
	}
	if (!func_1668(uParam0, 5, 1, 2f, 0, 0, 1))
	{
		return false;
	}
	__LIB_5__::func_106(uParam0, Local_356[0 /*28*/], "SAV_PED5", 0);
	__LIB_5__::func_106(uParam0, Local_356[1 /*28*/], "SAV_PED6", 0);
	return true;
}

void func_1216()
{
	__LIB_4__::func_89(&uLocal_1397, 0);
	switch (iLocal_181)
	{
		case 0:
			if (__LIB_9__::func_913(&uLocal_1397, 6f))
			{
				if (__LIB_11__::func_344(Local_356[0 /*28*/], -2072.2f, -1443.9f, 145.4f, 0, 0, 0, 0, 0))
				{
					func_1670(1);
				}
			}
			break;
		case 1:
			if (__LIB_9__::func_913(&uLocal_1397, 2f))
			{
				if (__LIB_11__::func_344(Local_356[1 /*28*/], -2080.3f, -1437.7f, 140.9f, 0, 0, 0, 0, 0))
				{
					func_1670(2);
				}
			}
			break;
		case 2:
			if (__LIB_9__::func_913(&uLocal_1397, 2f))
			{
				if (__LIB_11__::func_344(Local_356[0 /*28*/], -2060.6f, -1446.9f, 136.2f, 0, 0, 0, 0, 0))
				{
					func_1670(3);
				}
			}
			break;
	}
}

void func_1217(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	struct<28> Var4;
	Var4 = 4;
	Var4.f_1.f_7 = 2;
	Var4.f_1.f_17 = 2;
	Var4.f_1.f_21 = 1;
	Var4.f_1.f_28.f_7 = 2;
	Var4.f_1.f_28.f_17 = 2;
	Var4.f_1.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_21 = 1;
	Var4.f_1.f_28.f_28.f_28.f_7 = 2;
	Var4.f_1.f_28.f_28.f_28.f_17 = 2;
	Var4.f_1.f_28.f_28.f_28.f_21 = 1;
	if (!__LIB_0__::func_272(uLocal_1456[0], 0))
	{
		return;
	}
	switch (iLocal_191)
	{
		case 0:
			vVar0 = { -2066.053f, -1434.371f, 126.9193f };
			fVar3 = 194.8738f;
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1456[0], true);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(uLocal_1456[0], vVar0, -2068.6f, -1460.923f, 131.1331f, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			func_1671(1);
			break;
		case 1:
			if ((!__LIB_0__::func_163(uLocal_1456[0], 713668775) && !__LIB_0__::func_163(uLocal_1456[0], 432954108)) || __LIB_0__::func_94(uLocal_1456[0], -2068.6f, -1460.923f, 131.1331f, 1) <= 5f)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], -2066.053f, -1434.371f, 126.9193f, 2f, 0, 0, 0);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				PED::SET_PED_CONFIG_FLAG(uLocal_1456[0], 192, false);
				func_1671(2);
			}
			break;
		case 2:
			Var4[0 /*28*/] = { Local_356[2 /*28*/] };
			Var4[1 /*28*/] = { Local_356[3 /*28*/] };
			Var4[2 /*28*/] = { Local_356[4 /*28*/] };
			if (func_1237(&Var4, 3, 3) || func_1672() == 5)
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(uLocal_1456[0], false);
				vVar0 = { -2065.083f, -1441.996f, 127.1608f };
				fVar3 = 173.1114f;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_1456[0], vVar0, 2f, 10000, 0.25f, 0, fVar3);
				func_1671(3);
			}
			break;
		case 3:
			vVar0 = { -2065.083f, -1441.996f, 127.1608f };
			if (!PED::IS_PED_INJURED(uLocal_1456[0]))
			{
				if (!__LIB_0__::func_163(uLocal_1456[0], 713668775) || __LIB_0__::func_94(uLocal_1456[0], vVar0, 1) <= 1f)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], vVar0, 2f, 0, 0, 0);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
					func_1671(4);
				}
			}
			break;
	}
}

void func_1220(var uParam0)
{
	func_1681(uParam0);
	func_1682(uParam0);
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(iLocal_1653))
			{
				MAP::REMOVE_BLIP(&iLocal_1653);
			}
			__LIB_5__::func_486(uParam0, "MAR8_O_SKIN", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_11__::func_59(uParam0, 1);
			break;
		case 1:
			if (__LIB_11__::func_647(uParam0, "MAR8_POINT", 0, 1f, 0))
			{
				__LIB_11__::func_59(uParam0, 2);
			}
			break;
		case 2:
			if (!func_1169(34))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1671))
				{
					if (__LIB_1__::func_583(&uLocal_1403) >= 10f)
					{
						if (!__LIB_5__::func_463())
						{
							cLocal_1671 = { func_1683() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1671))
							{
								if (__LIB_5__::func_314(uParam0, &cLocal_1671, 0))
								{
									func_1622(&cLocal_1671, 1);
									StringCopy(&cLocal_1671, "", 16);
									__LIB_2__::func_259(&uLocal_1403);
								}
							}
						}
					}
				}
			}
			else
			{
				__LIB_11__::func_59(uParam0, 3);
				__LIB_11__::func_438(uParam0, uLocal_1456[1], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_590(uParam0, "MAR8_O_SAVE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			break;
		case 3:
			if (func_1169(34))
			{
				if (!func_1169(41))
				{
					if (__LIB_11__::func_647(uParam0, "MAR8_CAMP6", 0, 0, 0))
					{
						__LIB_11__::func_59(uParam0, 4);
					}
				}
			}
			break;
		case 51:
			break;
	}
}

void func_1221()
{
	switch (iLocal_1674)
	{
		case 0:
			if (func_1169(69))
			{
				__LIB_2__::func_259(&uLocal_1406);
				iLocal_1674++;
			}
			break;
		case 1:
			if (!func_1169(70))
			{
				if (__LIB_1__::func_583(&uLocal_1406) > 60f)
				{
					func_1171(70);
					iLocal_1674++;
				}
			}
			break;
		case 2:
			if (!func_1169(71))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[9], false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_202[9]) > 0.9f)
					{
						func_1171(71);
					}
				}
			}
			break;
	}
}

void func_1222(var uParam0)
{
	switch (iLocal_179)
	{
		case 0:
			if (((func_1169(40) && ENTITY::IS_ENTITY_AT_COORD(uLocal_1456[0], -2063.526f, -1449.459f, 128.4073f, 0.5f, 0.5f, 1f, false, true, 0)) && !__LIB_0__::func_163(Global_35, 713668775)) && !__LIB_0__::func_163(Global_35, 242628503))
			{
				if (__LIB_10__::func_529(&(uLocal_202[8]), func_402(8), 0, "pbl_checking_rack"))
				{
					func_1157(8, uParam0);
					iLocal_179 = 1;
				}
			}
			break;
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[8], false))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[8], "pbl_checking_rack", true);
				__LIB_11__::func_49(uLocal_202[8]);
				iLocal_179 = 2;
			}
			break;
		case 2:
			break;
	}
}

bool func_1223()
{
	return func_1684();
}

void func_1227()
{
	iLocal_1674 = 0;
}

void func_1230(var uParam0, int iParam1)
{
	func_1157(iParam1, uParam0);
	ANIMSCENE::START_ANIM_SCENE(uLocal_202[iParam1]);
}

void func_1231(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	if (!func_1169(74))
	{
		if (__LIB_4__::func_939(uParam0) >= iLocal_331)
		{
			__LIB_2__::func_259(&uLocal_1409);
			func_1171(74);
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		switch (Local_356[iVar0 /*28*/].f_27)
		{
			case 0:
				if (!PED::IS_PED_INJURED(Local_356[iVar0 /*28*/]))
				{
					func_1686(iVar1, 1);
				}
				break;
			case 1:
				if (!PED::IS_PED_INJURED(Local_356[iVar0 /*28*/]))
				{
					if (__LIB_0__::func_94(Local_356[iVar0 /*28*/], Local_356[iVar0 /*28*/].f_4, 1) < 3f)
					{
						func_1686(iVar1, 2);
					}
				}
				break;
			case 2:
				if (func_1687(iVar1))
				{
					vVar3 = { func_1688(iVar1) };
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_356[iVar1 /*28*/], false);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar3, Global_35, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, vVar3, 2f);
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, vVar3, 140f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_356[iVar1 /*28*/], iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					func_1686(iVar1, 3);
				}
				else if (func_1689(iVar1))
				{
					TASK::CLEAR_PED_TASKS(Local_356[iVar1 /*28*/], true, false);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_356[iVar1 /*28*/], false);
					func_1686(iVar1, 5);
				}
				break;
			case 3:
				vVar3 = { func_1688(iVar1) };
				if (__LIB_0__::func_163(Local_356[iVar1 /*28*/], 242628503))
				{
					iVar6 = TASK::GET_SEQUENCE_PROGRESS(Local_356[iVar1 /*28*/]);
					if (iVar6 >= 2)
					{
						if (func_1689(iVar1))
						{
							TASK::CLEAR_PED_TASKS(Local_356[iVar1 /*28*/], true, false);
							PED::REMOVE_PED_DEFENSIVE_AREA(Local_356[iVar1 /*28*/], false);
							func_1686(iVar1, 5);
						}
					}
				}
				break;
			case 5:
				iVar7 = func_1690(iVar1);
				PED::_0xFC3DB99C8144CD81(Local_356[iVar1 /*28*/], iLocal_1656[iVar7], 0, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_356[iVar1 /*28*/], 42, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_356[iVar1 /*28*/], 5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_356[iVar1 /*28*/], 28, true);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_356[iVar1 /*28*/], -2067.478f, -1446.852f, 127.7739f, 50f, 0, 0);
				func_1686(iVar1, 6);
				break;
			case 6:
				if (func_1691() == 2)
				{
					PED::_0xFC3DB99C8144CD81(Local_356[iVar1 /*28*/], iLocal_1656[12], 0, 0, 0);
					func_1686(iVar1, 7);
				}
				break;
			case 7:
				break;
		}
		iVar0++;
	}
}

bool func_1232(var uParam0)
{
	if (!func_1692(-1, 1))
	{
		return false;
	}
	if (!func_1693(uParam0, 0, 0))
	{
		return false;
	}
	if (!func_1693(uParam0, 1, 0))
	{
		return false;
	}
	if (!func_1693(uParam0, 2, 1))
	{
		return false;
	}
	if (!func_1693(uParam0, 3, 1))
	{
		return false;
	}
	if (!func_1693(uParam0, 4, 1))
	{
		return false;
	}
	return true;
}

void func_1235(var uParam0)
{
	char cVar0[16];
	char cVar2[16];
	if (!__LIB_0__::func_27(iLocal_187, 32768))
	{
		if (__LIB_5__::func_314(uParam0, "MAR8_MORE", 0))
		{
			__LIB_1__::func_683(&iLocal_187, 32768);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_187, 4194304))
	{
		if (!__LIB_5__::func_463())
		{
			if (__LIB_5__::func_314(uParam0, "MAR8_COVER", 0))
			{
				__LIB_1__::func_683(&iLocal_187, 4194304);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_187, 512))
	{
		if (!__LIB_0__::func_481(0))
		{
			if (__LIB_5__::func_314(uParam0, "MAR8_CAMP_GO", 0))
			{
				__LIB_1__::func_683(&iLocal_187, 512);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_187, 1))
	{
		if (!__LIB_0__::func_481(0))
		{
			if (__LIB_11__::func_647(uParam0, "MAR8_COMBAT1", 0, 3f, 0))
			{
				__LIB_1__::func_683(&iLocal_187, 1);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_187, 128))
	{
		if (iLocal_190 == 15)
		{
			if (!__LIB_0__::func_481(0))
			{
				if (__LIB_11__::func_647(uParam0, "MAR8_COMBAT3", 0, 0, 0))
				{
					__LIB_1__::func_683(&iLocal_187, 128);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_187, 2))
	{
		if (func_1169(36))
		{
			if (!__LIB_0__::func_481(0))
			{
				if (!PED::IS_PED_INJURED(Local_525[0 /*28*/]))
				{
					StringCopy(&cVar0, "MAR8_COMBAT5", 16);
				}
				else
				{
					StringCopy(&cVar0, "MAR8_COMBAT2", 16);
				}
				if (__LIB_11__::func_647(uParam0, &cVar0, 0, 0, 0))
				{
					__LIB_1__::func_683(&iLocal_187, 2);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_187, 32))
	{
		if (iLocal_190 == 12)
		{
			if (!__LIB_0__::func_481(0))
			{
				if (__LIB_11__::func_647(uParam0, "MAR8_CAMP_GO2", 0, 0, 0))
				{
					__LIB_1__::func_683(&iLocal_187, 32);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_187, 64))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_780[6 /*28*/]))
		{
			if (!PED::IS_PED_INJURED(Local_780[6 /*28*/]))
			{
				if (PED::IS_PED_INJURED(Local_666[0 /*28*/]) && PED::IS_PED_INJURED(Local_666[1 /*28*/]))
				{
					if (!__LIB_0__::func_481(0))
					{
						__LIB_1__::func_683(&iLocal_187, 64);
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_187, 8))
	{
		if (iLocal_190 == 13)
		{
			if (!__LIB_0__::func_481(0))
			{
				if (__LIB_11__::func_647(uParam0, "MAR8_SEE_HORSES", 0, 0, 0))
				{
					__LIB_1__::func_683(&iLocal_187, 8);
				}
			}
		}
	}
	if (iLocal_190 == 3)
	{
		if (!__LIB_0__::func_27(iLocal_187, 2048))
		{
			if (func_1696() == 0)
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_11__::func_647(uParam0, "MAR8_COMBAT6", 0, 0, 0))
					{
						__LIB_1__::func_683(&iLocal_187, 2048);
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_187, 16))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_780[1 /*28*/]))
		{
			if (Local_780[1 /*28*/].f_27 >= 2)
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_11__::func_647(uParam0, "MAR8_TREES", 0, 0, 0))
					{
						__LIB_1__::func_683(&iLocal_187, 16);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_187, 16))
	{
		if (!__LIB_0__::func_27(iLocal_187, 262144))
		{
			if (!__LIB_0__::func_481(0))
			{
				if (__LIB_11__::func_647(uParam0, "MAR8_GOT_THIS", 0, 0, 0))
				{
					__LIB_1__::func_683(&iLocal_187, 262144);
				}
			}
		}
	}
	if (iLocal_190 == 3)
	{
		if (!__LIB_0__::func_27(iLocal_187, 4096))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[13], false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_202[13]) >= 10f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_11__::func_647(uParam0, "MAR8_COMBAT7", 0, 0, 0))
						{
							__LIB_1__::func_683(&iLocal_187, 4096);
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_187, 4))
	{
		if (PED::IS_PED_ON_MOUNT(uLocal_1456[0]))
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_11__::func_647(uParam0, "MAR8_COMBAT8", 0, 0, 0))
					{
						__LIB_1__::func_683(&iLocal_187, 4);
						__LIB_2__::func_259(&uLocal_1421);
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_1__::func_583(&uLocal_1421) >= 10f)
		{
			if (!__LIB_0__::func_481(0))
			{
				if (__LIB_11__::func_647(uParam0, "MAR8_CANTWAIT", 0, 0, 0))
				{
					__LIB_1__::func_683(&iLocal_187, 4);
					__LIB_2__::func_259(&uLocal_1421);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_187, 8192))
	{
		if (iLocal_190 == 4)
		{
			if (!__LIB_0__::func_481(0))
			{
				if (__LIB_11__::func_647(uParam0, "MAR8_UNC_HORSE", 0, 0, 0))
				{
					__LIB_1__::func_683(&iLocal_187, 8192);
				}
			}
		}
	}
	if ((((((iLocal_190 == 15 || iLocal_190 == 16) || iLocal_190 == 9) || iLocal_190 == 10) || iLocal_190 == 18) || iLocal_190 == 17) || iLocal_190 == 12)
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (__LIB_1__::func_583(&uLocal_1421) > 7.5f)
			{
				if (!__LIB_5__::func_463())
				{
					if ((iLocal_188 % 2) == 0)
					{
						StringCopy(&cVar2, "MAR8_CLEAR", 16);
					}
					else
					{
						StringCopy(&cVar2, "MAR8_GOT_THIS", 16);
					}
					if (__LIB_5__::func_314(uParam0, &cVar2, 0))
					{
						iLocal_188++;
						__LIB_2__::func_259(&uLocal_1421);
					}
				}
			}
		}
	}
}

void func_1236(var uParam0)
{
	func_1697(uParam0);
	func_1235(uParam0);
	func_1698(uParam0);
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			__LIB_11__::func_439(uParam0, uLocal_1456[1], 1);
			__LIB_5__::func_590(uParam0, "MAR8_O_CARRY", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_11__::func_59(uParam0, 1);
			break;
		case 1:
			if (func_1169(36))
			{
				__LIB_11__::func_59(uParam0, 2);
			}
			break;
		case 2:
			if (func_1169(37))
			{
				__LIB_11__::func_59(uParam0, 3);
			}
			break;
		case 3:
			if (func_1169(38))
			{
				if (__LIB_11__::func_647(uParam0, "MAR8_COMBAT4", 0, 3f, 0))
				{
				}
			}
			else if (__LIB_0__::func_71(uLocal_1456[0]) && __LIB_0__::func_71(uLocal_1456[1]))
			{
				__LIB_11__::func_59(uParam0, 4);
			}
			break;
		case 4:
			if (__LIB_0__::func_71(uLocal_1456[0]) && __LIB_0__::func_71(uLocal_1456[1]))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_590(uParam0, "MAR8_O_HORSE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_11__::func_439(uParam0, uLocal_1456[1], 1);
				__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
				__LIB_1__::func_718(7);
				AITRANSPORT::_0xBA8818212633500A(iLocal_1460, 0, 0);
				__LIB_11__::func_59(uParam0, 5);
			}
			break;
		case 51:
			break;
	}
}

bool func_1237(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*28*/]))
		{
			return false;
		}
		if (PED::IS_PED_INJURED((*uParam0)[iVar0 /*28*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 >= iParam2;
}

bool func_1238(var uParam0)
{
	if (!func_1701(-1, 1))
	{
		return false;
	}
	if (!func_1702(uParam0, 0, 1))
	{
		return false;
	}
	if (!func_1702(uParam0, 1, 1))
	{
		return false;
	}
	return true;
}

bool func_1239(var uParam0)
{
	if (!func_1703(-1, 1))
	{
		return false;
	}
	if (!func_1704(uParam0, 0, 1))
	{
		return false;
	}
	if (!func_1704(uParam0, 1, 1))
	{
		return false;
	}
	return true;
}

void func_1241()
{
	if (!func_1169(72))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(uLocal_1456[1], "injury", true, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(uLocal_1456[1], "injury", 1f, -1);
		func_1171(72);
	}
}

void func_1242(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar3;
	if (!__LIB_0__::func_272(iParam1, 0))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			PED::SET_PED_COMBAT_MOVEMENT(iParam1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 0, true);
			__LIB_1__::func_733(iParam1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, vLocal_194, 0.8f, 0, 0, 0);
			COMPANION::_0x2917E634206B9E17(iParam1, 1);
			PED::SET_PED_ACCURACY(iParam1, 10);
			ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
			func_1705();
			PED::SET_PED_CONFIG_FLAG(uLocal_1456[0], 192, false);
			__LIB_11__::func_50(uLocal_202[10], "pbl_action_01_loop");
			__LIB_11__::func_51(8);
			break;
		case 8:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[10], false))
			{
				__LIB_11__::func_50(uLocal_202[10], "pbl_action_01_loop");
				func_1708(10, 1068708659 /* Float: 1.4f */, 1075838976 /* Float: 2.5f */);
				if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[10], "CS_CharlesSmith"))
				{
					if (__LIB_11__::func_50(uLocal_202[10], "pbl_action_01_loop"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[10], "pbl_action_01_loop", true);
						__LIB_1__::func_733(iParam1);
						if (func_1709(8))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, -2086.501f, -1437.651f, 127.5984f, 0.8f, 0, 0, 0);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
							TASK::TASK_PERFORM_SEQUENCE(iParam1, iLocal_1384);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
						}
						__LIB_11__::func_50(uLocal_202[10], "pbl_action_02_loop");
						__LIB_11__::func_51(15);
					}
				}
			}
			break;
		case 15:
			if (func_1169(36))
			{
				__LIB_1__::func_733(iParam1);
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
				vVar0 = { -2086.415f, -1437.827f, 128.554f };
				fVar3 = 110.76f;
				if (!__LIB_0__::func_86(vVar0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_1456[0], vVar0, 2f, 10000, 0.25f, 0, fVar3);
					__LIB_11__::func_51(16);
				}
			}
			break;
		case 16:
			if (!__LIB_0__::func_163(uLocal_1456[0], 713668775))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
				func_1230(uParam0, 11);
				__LIB_11__::func_51(9);
			}
			break;
		case 9:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[11], false))
			{
				__LIB_11__::func_50(uLocal_202[11], "pbl_action_02_loop");
				func_1708(11, 1068708659 /* Float: 1.4f */, 1075838976 /* Float: 2.5f */);
				if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[11], "CS_CharlesSmith"))
				{
					if (__LIB_11__::func_50(uLocal_202[11], "pbl_action_02_loop"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[11], "pbl_action_02_loop", true);
						__LIB_11__::func_51(10);
					}
				}
			}
			break;
		case 10:
			__LIB_1__::func_733(iParam1);
			if (func_1709(10))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, -2102.3f, -1425.659f, 127.8158f, 0.8f, 0, 0, 0);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(iParam1, iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
			}
			__LIB_11__::func_51(18);
			break;
		case 18:
			if ((((func_1169(37) && ENTITY::DOES_ENTITY_EXIST(Local_780[13 /*28*/])) && PED::IS_PED_INJURED(Local_780[13 /*28*/])) && ENTITY::DOES_ENTITY_EXIST(Local_780[14 /*28*/])) && PED::IS_PED_INJURED(Local_780[14 /*28*/]))
			{
				__LIB_1__::func_733(iParam1);
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
				vVar0 = { -2102.222f, -1424.805f, 128.8583f };
				fVar3 = 79.46f;
				if (!__LIB_0__::func_86(vVar0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_1456[0], vVar0, 2f, 10000, 0.25f, 0, fVar3);
					__LIB_11__::func_51(17);
				}
			}
			break;
		case 17:
			if (!__LIB_0__::func_163(uLocal_1456[0], 713668775))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
				func_1230(uParam0, 12);
				__LIB_11__::func_51(12);
			}
			break;
		case 12:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[12], false))
			{
				__LIB_11__::func_50(uLocal_202[12], "pbl_action_03_loop");
				func_1708(12, 1068708659 /* Float: 1.4f */, 1075838976 /* Float: 2.5f */);
				if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[12], "CS_CharlesSmith"))
				{
					if (__LIB_11__::func_50(uLocal_202[12], "pbl_action_03_loop"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[12], "pbl_action_03_loop", true);
						__LIB_1__::func_733(iParam1);
						if (func_1709(12))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, -2117.495f, -1418.066f, 131.2f, 0.8f, 0, 0, 0);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
							TASK::TASK_PERFORM_SEQUENCE(iParam1, iLocal_1384);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
						}
						__LIB_11__::func_51(13);
					}
				}
			}
			break;
		case 13:
			if (func_1169(39))
			{
				__LIB_1__::func_733(iParam1);
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
				__LIB_1__::func_733(iParam1);
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
				vVar0 = { -2117.416f, -1418.052f, 131.1624f };
				fVar3 = 97.68f;
				if (!__LIB_0__::func_86(vVar0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_1456[0], vVar0, 2f, 10000, 0.25f, 0, fVar3);
					__LIB_11__::func_51(14);
				}
			}
			break;
		case 14:
			if (!__LIB_0__::func_163(uLocal_1456[0], 713668775))
			{
				func_1230(uParam0, 13);
				__LIB_11__::func_51(3);
			}
			break;
		case 3:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[13], false))
			{
				func_1230(uParam0, 14);
				__LIB_11__::func_51(4);
			}
			else
			{
				func_1708(13, 1.5f, 1075838976 /* Float: 2.5f */);
			}
			break;
		case 4:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[14], false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1456[1], true, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1456[0], true, true);
				__LIB_11__::func_51(5);
			}
			break;
		case 5:
			__LIB_1__::func_571(uLocal_1456[0], iLocal_1459, 0, -1, 1);
			__LIB_1__::func_571(uLocal_1456[1], iLocal_1459, 0, 0, 1);
			__LIB_11__::func_51(6);
			break;
		case 6:
			if (__LIB_0__::func_71(uLocal_1456[0]) && __LIB_0__::func_71(uLocal_1456[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_1459))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1459, true);
					PED::_0x2EB75FB86C41F026(iLocal_1459, 3, 0);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_1456[0], -2128.87f, -1378.984f, 130.7852f, 1.5f, -1, 0.25f, 0, 22.9364f);
				__LIB_11__::func_51(19);
			}
			break;
		case 19:
			if (!__LIB_0__::func_163(uLocal_1456[0], 713668775))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], -2125.665f, -1384.052f, 130.7238f, 10f, 0, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_1456[0], 140f, 0, 0);
				__LIB_11__::func_51(20);
			}
			break;
		case 7:
			break;
	}
}

void func_1243(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar7;
	var uVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar13 = iVar0;
		if (Local_780[iVar13 /*28*/].f_27 < 8)
		{
			if (func_1710(uParam0, iVar13))
			{
				func_1711(iVar13, 8);
			}
		}
		if (func_1712(iVar13))
		{
			if (!func_1713(Local_780[iVar13 /*28*/], 2))
			{
				if (!PED::IS_PED_INJURED(Local_780[iVar13 /*28*/]))
				{
					WEAPON::GET_CURRENT_PED_WEAPON(Local_780[iVar13 /*28*/], &iVar15, true, 0, false);
					if (iVar15 != joaat("WEAPON_MELEE_MACHETE"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Local_780[iVar13 /*28*/], joaat("WEAPON_MELEE_MACHETE"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(Local_780[iVar13 /*28*/], 1, 1, 0, 0);
					}
					else
					{
						PED::SET_PED_CONFIG_FLAG(Local_780[iVar13 /*28*/], 249, true);
						func_1714(&(Local_780[iVar13 /*28*/]), 2);
					}
				}
			}
		}
		switch (Local_780[iVar13 /*28*/].f_27)
		{
			case 0:
				if (func_1715(iVar13))
				{
					if (func_1716(iVar13))
					{
						if (!bVar14)
						{
							if (func_1718(uParam0, iVar13, func_1717(iVar13)))
							{
								bVar14 = true;
								if (func_1717(iVar13))
								{
									__LIB_2__::func_279(Local_780[iVar13 /*28*/], 1);
								}
								func_1711(iVar13, 1);
							}
						}
					}
				}
				else
				{
					func_1711(iVar13, 10);
				}
				break;
			case 1:
				if (!PED::IS_PED_INJURED(Local_780[iVar13 /*28*/]))
				{
					func_1719(iVar13, &uVar4, &uVar10, &vVar7);
					if (__LIB_0__::func_94(Local_780[iVar13 /*28*/], vVar7, 1) < 4f)
					{
						func_1711(iVar13, 2);
						func_1720(iVar13, 4000, 8000);
						__LIB_2__::func_259(&(Local_780[iVar13 /*28*/].f_22));
					}
				}
				break;
			case 2:
				if (!PED::IS_PED_INJURED(Local_780[iVar13 /*28*/]))
				{
					if (func_1712(iVar13))
					{
						TASK::TASK_COMBAT_PED(Local_780[iVar13 /*28*/], Global_35, 1048576, 0);
						func_1711(iVar13, 9);
					}
					else if (func_1721(iVar13))
					{
						if (Local_780[iVar13 /*28*/].f_26 != 0 && __LIB_1__::func_592(&(Local_780[iVar13 /*28*/].f_22)) >= Local_780[iVar13 /*28*/].f_26)
						{
							if (func_1722(iVar13) == 1)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_780[iVar13 /*28*/], false);
							}
							vVar1 = { func_1723(iVar13, 0) };
							TASK::CLEAR_SEQUENCE_TASK(&iVar11);
							TASK::OPEN_SEQUENCE_TASK(&iVar11);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							if (func_1722(iVar13) == 1)
							{
								TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, vVar1, 2f);
							}
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 140f, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar11);
							TASK::TASK_PERFORM_SEQUENCE(Local_780[iVar13 /*28*/], iVar11);
							TASK::CLEAR_SEQUENCE_TASK(&iVar11);
							if (!Local_780[iVar13 /*28*/].f_17[0])
							{
								Local_780[iVar13 /*28*/].f_17[0] = 1;
							}
							func_1720(iVar13, 4000, 8000);
							__LIB_2__::func_259(&(Local_780[iVar13 /*28*/].f_22));
							func_1711(iVar13, 3);
						}
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (Local_780[iVar13 /*28*/].f_26 != 0)
				{
					if (__LIB_1__::func_592(&(Local_780[iVar13 /*28*/].f_22)) >= Local_780[iVar13 /*28*/].f_26)
					{
						func_1719(iVar13, &uVar4, &uVar10, &vVar7);
						if (func_1722(iVar13) == 1)
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(Local_780[iVar13 /*28*/], false);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iVar11);
						TASK::OPEN_SEQUENCE_TASK(&iVar11);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar7, Global_35, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						if (func_1722(iVar13) == 1)
						{
							TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, vVar7, 2f);
						}
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 140f, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar11);
						TASK::TASK_PERFORM_SEQUENCE(Local_780[iVar13 /*28*/], iVar11);
						TASK::CLEAR_SEQUENCE_TASK(&iVar11);
						func_1720(iVar13, 4000, 8000);
						__LIB_2__::func_259(&(Local_780[iVar13 /*28*/].f_22));
						func_1711(iVar13, 1);
					}
				}
				break;
			case 8:
				if (ENTITY::DOES_ENTITY_EXIST(Local_780[iVar13 /*28*/]))
				{
					uVar12 = Local_780[iVar13 /*28*/];
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar12);
				}
				else
				{
					func_1711(iVar13, 9);
				}
				break;
		}
		iVar0++;
	}
}

void func_1245(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_187, 16384))
	{
		if (!__LIB_5__::func_463())
		{
			if (__LIB_11__::func_647(uParam0, "MAR8_GOGO", 0, 0, 0))
			{
				__LIB_1__::func_683(&iLocal_187, 16384);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_187, 65536))
	{
		if (!__LIB_5__::func_463())
		{
			if (__LIB_11__::func_647(uParam0, "MAR8_COMBAT9", 0, 0, 0))
			{
				__LIB_1__::func_683(&iLocal_187, 65536);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_187, 256))
	{
		if (!__LIB_5__::func_463())
		{
			if (__LIB_11__::func_647(uParam0, "MAR8_COMBAT10", 0, 0, 0))
			{
				__LIB_1__::func_683(&iLocal_187, 256);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_187, 2097152))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
		{
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_1456[0]))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) >= 26 && TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) < 33)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_11__::func_647(uParam0, "MAR8_COMBAT11", 0, 0, 0))
						{
							__LIB_1__::func_683(&iLocal_187, 2097152);
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_187, 524288))
	{
		if (iLocal_1675 > 0)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_1456[0]))
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "MAR8_CHAT3", 0))
						{
							__LIB_1__::func_683(&iLocal_187, 524288);
						}
					}
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_187, 1048576))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
		{
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_1456[0]))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) > 112)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "MAR8_CHAT4", 0))
						{
							__LIB_1__::func_683(&iLocal_187, 1048576);
						}
					}
				}
			}
		}
	}
}

void func_1246(var uParam0)
{
	if (__LIB_1__::func_583(&uLocal_1412) >= 10f)
	{
		if (!__LIB_5__::func_463())
		{
			if (__LIB_5__::func_314(uParam0, "MAR8_UNCFROMHOR", 0))
			{
				__LIB_2__::func_259(&uLocal_1412);
			}
		}
	}
}

void func_1247(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			__LIB_1__::func_721(7);
			__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			if (!func_1725())
			{
				__LIB_5__::func_590(uParam0, "MAR8_O_AWAY", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			__LIB_11__::func_59(uParam0, 1);
			break;
		case 1:
			if (func_1725())
			{
				__LIB_1__::func_721(7);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_590(uParam0, "MAR8_O_EBACK", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
		case 2:
			if (MAP::DOES_BLIP_EXIST(iLocal_1653))
			{
				MAP::REMOVE_BLIP(&iLocal_1653);
			}
			__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
			__LIB_11__::func_439(uParam0, uLocal_1456[1], 1);
			__LIB_5__::func_590(uParam0, "MAR8_O_HORSE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_11__::func_59(uParam0, -1);
			__LIB_1__::func_718(7);
			break;
	}
}

void func_1249(var uParam0)
{
	if (PED::IS_PED_INJURED(uLocal_1456[0]))
	{
		return;
	}
	func_1728(uParam0);
	func_1614(func_216(9, 1), 1106247680 /* Float: 30f */, 1101004800 /* Float: 20f */, 1097859072 /* Float: 15f */);
	switch (iLocal_1675)
	{
		case 0:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], sLocal_178))
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_1456[0]))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) >= 45)
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_1456[0], sLocal_178, 0, 9224, -1, 0, 0, -1);
						__LIB_0__::func_203(uLocal_1456[0]);
						func_1176(joaat("MAR8_RIDE2"));
						iLocal_1675++;
					}
				}
			}
			break;
		case 1:
			func_1729();
			break;
	}
}

void func_1251(int iParam0)
{
	PED::_0x2B4CE170DE09F346(uLocal_1456[0], iParam0);
	AUDIO::_0x660A8F876DF1D4F8(7);
	AUDIO::_0x660A8F876DF1D4F8(25);
	AUDIO::_0x660A8F876DF1D4F8(21);
	AUDIO::_0x660A8F876DF1D4F8(19);
	AUDIO::_0x660A8F876DF1D4F8(23);
	AUDIO::_0x660A8F876DF1D4F8(22);
}

void func_1256()
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
	iVar0 = func_1738(6291456, 0);
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

int func_1280(var uParam0, int iParam1, int iParam2)
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
		return func_1280(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1310(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_832(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1311(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_1757(uParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
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

bool func_1351(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_382(uParam4);
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

float func_1357(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 248.0995f;
				case 1:
					return 10.8f;
				case 2:
					return 112.32f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 147.6f;
				case 1:
					return 195.12f;
				case 2:
					return 333.36f;
				case 3:
					return 336.24f;
				case 4:
					return 248.0995f;
				case 5:
					return 249.86f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 468.9568f;
				case 1:
					return 224.9568f;
				case 2:
					return 166.9568f;
				case 3:
					return 123.84f;
				case 4:
					return 87.4809f;
				case 5:
					return 87.4809f;
				case 6:
					return 87.4809f;
				case 7:
					return 87.4809f;
				case 8:
					return 198.4f;
				case 9:
					return -153.8118f;
				case 10:
					return 176.1882f;
				case 11:
					return 22.1882f;
				case 12:
					return 27.5521f;
				case 13:
					return 329.5766f;
				case 14:
					return 13.1623f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 224.9568f;
				case 1:
					return 90.56f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 224.9568f;
				case 1:
					return 170.9568f;
				case 2:
					return 35.4809f;
				case 3:
					return 87.4809f;
				case 4:
					return 87.4809f;
				case 5:
					return 62.4934f;
				case 6:
					return 105.406f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 224.9568f;
				case 1:
					return 280.5605f;
				case 2:
					return 248.5605f;
				case 3:
					return 278.5605f;
				case 4:
					return 248.5605f;
				case 5:
					return 244.8f;
				case 6:
					return 248.5605f;
				case 7:
					return 250.5605f;
				case 8:
					return 256.5605f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 8.0482f;
				case 1:
					return 8.0482f;
				case 2:
					return -9.9518f;
				case 3:
					return 10.0482f;
				case 4:
					return -41.9518f;
				case 5:
					return 8.0482f;
				case 6:
					return 38.434f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 184.0482f;
				case 1:
					return -7.9518f;
				case 2:
					return -25.9518f;
				case 3:
					return -169.9518f;
				case 4:
					return -107.9518f;
				case 5:
					return -441.9518f;
				case 6:
					return -109.9518f;
				case 7:
					return 8.0482f;
				case 8:
					return 8.0482f;
				case 9:
					return -120.282f;
				case 10:
					return -169.5066f;
				case 11:
					return 62.4934f;
				case 12:
					return -109.7386f;
				case 13:
					return -93.4386f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 93.1286f;
				case 1:
					return 93.1286f;
				case 2:
					return 93.1286f;
				case 3:
					return 93.1286f;
				case 4:
					return 93.1286f;
				case 5:
					return 93.1286f;
				case 6:
					return 93.1286f;
				case 7:
					return 93.1286f;
				case 8:
					return 93.1286f;
				case 9:
					return 93.1286f;
				case 10:
					return 93.1286f;
				case 11:
					return 43.2913f;
				case 12:
					return 33.324f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 87.4809f;
				case 1:
					return 87.4809f;
				case 2:
					return 80.6606f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 77.2067f;
				case 1:
					return 199.2067f;
				case 2:
					return 199.2067f;
				case 3:
					return 199.2067f;
				case 4:
					return 99.3705f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 262.0024f;
				case 1:
					return 262.0024f;
				case 2:
					return 262.0024f;
				case 3:
					return 262.0024f;
				case 4:
					return 262.0024f;
				case 5:
					return 262.0024f;
				case 6:
					return 262.0024f;
				case 7:
					return 262.0024f;
				case 8:
					return 262.0024f;
				case 9:
					return 262.0024f;
				case 10:
					return 249.2917f;
				case 11:
					return 249.2917f;
				case 12:
					return 249.2917f;
				case 13:
					return 249.2917f;
				case 14:
					return 249.2917f;
			}
			break;
	}
	return 0f;
}

int func_1358(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1861(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

void func_1361(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_45))
	{
		Local_14.f_45 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_46[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_46[0] = OBJECT::CREATE_OBJECT(joaat("P_BARREL03X"), -2071.26f, -1367.804f, 122.2771f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_46[0], 0f, 0f, -6.0504f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_46[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_46[0], Local_14);
	__LIB_5__::func_510(Local_14.f_46[0], Local_14.f_45);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_46[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_46[1] = OBJECT::CREATE_OBJECT(joaat("P_DEBRIS03X"), -2073.921f, -1398.4f, 129.0985f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_46[1], 0f, 0f, 83.6224f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_46[1], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_46[1], Local_14);
	__LIB_5__::func_510(Local_14.f_46[1], Local_14.f_45);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_46[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_46[2] = OBJECT::CREATE_OBJECT(joaat("P_BONESHUMAN02X"), -2085.698f, -1405.119f, 130.6225f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_46[2], 0f, 0f, -130.3775f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_46[2], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_46[2], Local_14);
	__LIB_5__::func_510(Local_14.f_46[2], Local_14.f_45);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_46[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_46[3] = OBJECT::CREATE_OBJECT(joaat("P_CRATEWEAPONSBREAK02X"), -2078.892f, -1409.92f, 129.9805f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_46[3], 0f, 0f, -130.3775f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_46[3], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_46[3], Local_14);
	__LIB_5__::func_510(Local_14.f_46[3], Local_14.f_45);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_46[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_46[4] = OBJECT::CREATE_OBJECT(joaat("P_TORCHPOST01X"), -2072.817f, -1360.385f, 122.5165f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_46[4], 0f, 0f, 147.6395f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_46[4], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_46[4], Local_14);
	__LIB_5__::func_510(Local_14.f_46[4], Local_14.f_45);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_46[5]) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_46[5] = OBJECT::CREATE_OBJECT(joaat("P_TORCHPOST01X"), -2101.782f, -1411.355f, 132.2665f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_46[5], 0f, 0f, 147.6395f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_46[5], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_46[5], Local_14);
	__LIB_5__::func_510(Local_14.f_46[5], Local_14.f_45);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_46[6]) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_46[6] = OBJECT::CREATE_OBJECT(joaat("P_TORCHPOST01X"), -2076.556f, -1402.757f, 128.7665f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_46[6], 0f, 0f, 147.6395f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_46[6], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_46[6], Local_14);
	__LIB_5__::func_510(Local_14.f_46[6], Local_14.f_45);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_46[7]) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_46[7] = OBJECT::CREATE_OBJECT(joaat("P_TORCHPOST01X"), -2102.705f, -1444.174f, 134.2665f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_46[7], 0f, 0f, 147.6395f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_46[7], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_46[7], Local_14);
	__LIB_5__::func_510(Local_14.f_46[7], Local_14.f_45);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_46[8]) && (iParam0 == -1 || iParam0 == 8))
	{
		Local_14.f_46[8] = OBJECT::CREATE_OBJECT(joaat("P_TORCHPOST01X"), -2125.604f, -1423.145f, 134.2665f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_46[8], 0f, 0f, 147.6395f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_46[8], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_46[8], Local_14);
	__LIB_5__::func_510(Local_14.f_46[8], Local_14.f_45);
}

void func_1362(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_56))
	{
		Local_14.f_56 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_57[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_57[0] = OBJECT::CREATE_OBJECT(joaat("P_CRATESTACK01X"), -2130.5f, -1391.4f, 130.3f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_57[0], 0f, 0f, 120f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_57[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_57[0], Local_14);
	__LIB_5__::func_510(Local_14.f_57[0], Local_14.f_56);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_57[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_57[1] = OBJECT::CREATE_OBJECT(joaat("P_CRATESTACK01X"), -2103.6f, -1423.8f, 128f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_57[1], 0f, 0f, 50f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_57[1], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_57[1], Local_14);
	__LIB_5__::func_510(Local_14.f_57[1], Local_14.f_56);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_57[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_57[2] = OBJECT::CREATE_OBJECT(joaat("P_BARREL03X"), -2118.906f, -1417.977f, 130.6766f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_57[2], 0f, 0f, 0f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_57[2], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_57[2], Local_14);
	__LIB_5__::func_510(Local_14.f_57[2], Local_14.f_56);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_57[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_57[3] = OBJECT::CREATE_OBJECT(joaat("P_BARREL03X"), -2118.086f, -1417.314f, 130.3409f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_57[3], 0f, 0f, 62.8726f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_57[3], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_57[3], Local_14);
	__LIB_5__::func_510(Local_14.f_57[3], Local_14.f_56);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_57[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_57[4] = OBJECT::CREATE_OBJECT(joaat("P_MASSGRAVE01X"), -2061.23f, -1436.319f, 126.7229f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_57[4], 0f, 0f, -51.7731f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_57[4], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_57[4], Local_14);
	__LIB_5__::func_510(Local_14.f_57[4], Local_14.f_56);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_57[5]) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_57[5] = OBJECT::CREATE_OBJECT(joaat("P_CRATECOVER01X"), -2086.449f, -1433.585f, 128.0023f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_57[5], 0.1352f, 7.1713f, 168.2401f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_57[5], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_57[5], Local_14);
	__LIB_5__::func_510(Local_14.f_57[5], Local_14.f_56);
}

void func_1368(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			if (func_1868())
			{
			}
			else if (func_1869())
			{
				__LIB_0__::func_467(&iVar0, 7);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1870())
			{
				__LIB_0__::func_467(&iVar0, 15);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1871())
			{
				__LIB_0__::func_467(&iVar0, 17);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1872())
			{
				__LIB_0__::func_467(&iVar0, 20);
				__LIB_0__::func_468(&iVar0, 30);
				__LIB_3__::func_98(iVar0);
			}
			break;
		case 2:
			if (func_1868())
			{
			}
			else if (func_1869())
			{
				__LIB_0__::func_467(&iVar0, 16);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1870())
			{
				__LIB_0__::func_467(&iVar0, 15);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1871())
			{
				__LIB_0__::func_467(&iVar0, 19);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1872())
			{
				__LIB_0__::func_467(&iVar0, 20);
				__LIB_0__::func_468(&iVar0, 30);
				__LIB_3__::func_98(iVar0);
			}
			break;
		case 3:
			if (func_1868())
			{
			}
			else if (func_1869())
			{
				__LIB_0__::func_467(&iVar0, 17);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1870())
			{
				__LIB_0__::func_467(&iVar0, 19);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1871())
			{
				__LIB_0__::func_467(&iVar0, 19);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1872())
			{
				__LIB_0__::func_467(&iVar0, 20);
				__LIB_0__::func_468(&iVar0, 30);
				__LIB_3__::func_98(iVar0);
			}
			break;
		case 4:
			if (func_1868())
			{
			}
			else if (func_1869())
			{
				__LIB_0__::func_467(&iVar0, 20);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1870())
			{
				__LIB_0__::func_467(&iVar0, 23);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1871())
			{
				__LIB_0__::func_467(&iVar0, 23);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			else if (func_1872())
			{
				__LIB_0__::func_467(&iVar0, 23);
				__LIB_0__::func_468(&iVar0, 0);
				__LIB_3__::func_98(iVar0);
			}
			break;
		case 5:
			CLOCK::PAUSE_CLOCK(false, 0);
			CLOCK::SET_CLOCK_TIME(7, 0, 0);
			break;
	}
}

void func_1373()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1656[1]))
	{
		iLocal_1656[1] = VOLUME::_CREATE_VOLUME_SPHERE(-2063.719f, -1448.427f, 127.3977f, 0f, 0f, 0f, 2f, 2f, 2f);
		__LIB_3__::func_710(iLocal_1656[1], 4);
	}
}

void func_1375()
{
	if (func_1169(54))
	{
		if (!Local_268[0 /*28*/].f_27)
		{
			if (PED::_0xA0BC8FAED8CFEB3C(Local_268[0 /*28*/].f_7))
			{
				PED::_SET_PED_BODY_COMPONENT(Local_268[0 /*28*/].f_7, -1615863595);
				PED::_UPDATE_PED_VARIATION(Local_268[0 /*28*/].f_7, false, true, true, true, false);
				Local_268[0 /*28*/].f_27 = 1;
			}
		}
		if (!Local_268[1 /*28*/].f_27)
		{
			if (PED::_0xA0BC8FAED8CFEB3C(Local_268[1 /*28*/].f_7))
			{
				PED::_SET_PED_BODY_COMPONENT(Local_268[1 /*28*/].f_7, -967922158);
				PED::_UPDATE_PED_VARIATION(Local_268[1 /*28*/].f_7, false, true, true, true, false);
				Local_268[1 /*28*/].f_27 = 1;
			}
		}
		func_1879(&(Local_268[0 /*28*/]));
		func_1879(&(Local_268[1 /*28*/]));
		func_1880();
	}
}

void func_1376(var uParam0)
{
	char cVar0[64];
	char cVar8[64];
	char cVar16[64];
	char cVar24[64];
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (!__LIB_5__::func_52(uParam0))
	{
		if (MISC::IS_BIT_SET(iLocal_80, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1456[0]))
			{
				if ((ENTITY::IS_ENTITY_DEAD(uLocal_1456[0]) || PED::IS_PED_INJURED(uLocal_1456[0])) || FIRE::IS_ENTITY_ON_FIRE(uLocal_1456[0]))
				{
					__LIB_11__::func_648(uParam0, __LIB_0__::func_864(7), 1, 0);
				}
			}
		}
		if (MISC::IS_BIT_SET(iLocal_80, 3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1460))
			{
				if ((((ENTITY::IS_ENTITY_DEAD(iLocal_1460) || PED::IS_PED_INJURED(iLocal_1460)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_1460)) || TASK::IS_PED_IN_WRITHE(iLocal_1460)) || PED::IS_PED_FATALLY_INJURED(iLocal_1460))
				{
					__LIB_11__::func_648(uParam0, __LIB_6__::func_893(), 1, 0);
				}
			}
		}
		if (MISC::IS_BIT_SET(iLocal_80, 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1456[1]))
			{
				if ((ENTITY::IS_ENTITY_DEAD(uLocal_1456[1]) || PED::IS_PED_INJURED(uLocal_1456[1])) || FIRE::IS_ENTITY_ON_FIRE(uLocal_1456[1]))
				{
					__LIB_11__::func_648(uParam0, __LIB_0__::func_864(4), 1, 0);
				}
			}
		}
		if (__LIB_4__::func_939(uParam0) == iLocal_329)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1619))
			{
				if (func_1883(1130430464 /* Float: 225f */))
				{
					StringCopy(&cVar0, "MAR8_F_SPOT", 64);
					__LIB_11__::func_648(uParam0, cVar0, 1, 0);
				}
			}
			if (__LIB_0__::func_393(Global_35, iLocal_1656[2], 0, 1))
			{
				StringCopy(&cVar8, "MAR8_FAIL_STEALTH", 64);
				__LIB_11__::func_648(uParam0, cVar8, 1, 0);
			}
		}
		if (__LIB_4__::func_939(uParam0) == iLocal_330)
		{
			if (func_1169(47))
			{
				StringCopy(&cVar16, "MAR8_F_CHARD", 64);
				__LIB_11__::func_648(uParam0, cVar16, 1, 0);
			}
		}
		if (__LIB_4__::func_939(uParam0) == iLocal_331)
		{
			if (func_1169(71))
			{
				StringCopy(&cVar24, "MAR8_F_UNCD", 64);
				__LIB_11__::func_648(uParam0, cVar24, 1, 0);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_80, 2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1456[0]))
			{
				if (__LIB_4__::func_939(uParam0) <= iLocal_327)
				{
				}
				else if (__LIB_4__::func_939(uParam0) <= iLocal_328)
				{
					__LIB_19__::func_191(uParam0, 7, 120f, 170f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"));
				}
				else if (__LIB_4__::func_939(uParam0) <= iLocal_329)
				{
					__LIB_19__::func_191(uParam0, 7, 40f, 55f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"));
				}
				else if (__LIB_4__::func_939(uParam0) <= iLocal_331)
				{
					__LIB_19__::func_191(uParam0, 7, 60f, 90f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"));
				}
				else if (__LIB_4__::func_939(uParam0) < iLocal_333)
				{
					__LIB_19__::func_191(uParam0, 7, 40f, 60f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"));
				}
				else
				{
					__LIB_19__::func_191(uParam0, 7, 120f, 170f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"));
				}
			}
		}
		return;
	}
}

void func_1387(var uParam0)
{
	struct<8> Var0;
	func_1897(uParam0);
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

void func_1550(int iParam0)
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
	func_631(iParam0, 1, 1, -142743235, 1);
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
		func_631(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1555(struct<6> Param0)
{
	if (!func_2028(Param0.f_4, 1))
	{
	}
	if (!func_2028(Param0, 1))
	{
	}
	if (!func_2028(Param0.f_2, 1))
	{
	}
	if (!func_2028(Param0.f_5, 1))
	{
	}
	if (!func_2028(Param0.f_3, 1))
	{
	}
	if (!func_2028(Param0.f_1, 1))
	{
	}
}

void func_1607(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	__LIB_5__::func_580(uParam0, iParam1, sParam2, iParam3, iParam4, 0, 0);
}

void func_1614(vector3 vParam0, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
	{
		fVar0 = __LIB_0__::func_665(Global_35, uLocal_1456[0], 1, 1);
		if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_1456[0]))
		{
			fVar1 = __LIB_0__::func_94(uLocal_1456[0], vParam0, 1);
			if ((fVar0 >= fParam3 && fVar1 >= fParam5) || !__LIB_0__::func_394(Global_35, iLocal_1460, 0))
			{
				TASK::WAYPOINT_PLAYBACK_PAUSE(uLocal_1456[0], 1, 0, 0);
			}
		}
		else if (fVar0 <= fParam4)
		{
			if (__LIB_0__::func_394(Global_35, iLocal_1460, 0))
			{
				TASK::WAYPOINT_PLAYBACK_RESUME(uLocal_1456[0], false, -1, 0);
			}
		}
	}
}

void func_1615(var uParam0)
{
	if (!__LIB_0__::func_394(Global_35, iLocal_1460, 0))
	{
		if (!func_1169(85))
		{
			if (__LIB_1__::func_685(7))
			{
				__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
			}
			__LIB_1__::func_718(7);
			__LIB_5__::func_486(uParam0, "MAR8_O_HORSE", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1171(85);
		}
	}
	else if (func_1169(85))
	{
		__LIB_5__::func_590(uParam0, "MAR8_O_FOLLOW", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_721(7);
		__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		func_1198(85);
	}
}

bool func_1616()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(cLocal_176, &iVar0);
	if (iLocal_1711 == 0)
	{
		GRAPHICS::_0x4BD66B4E3427689B("VFXBLOODINFO_PISTOL_LARGE");
		iLocal_1711 = 1;
	}
	iVar1 = iLocal_1709;
	while (iVar1 <= (iVar0 - 1))
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(cLocal_176, iVar1, &vVar2);
		if (!__LIB_0__::func_86(vVar2))
		{
			GRAPHICS::_0xF5E45CB1CF965D2D(vVar2);
		}
		iLocal_1709++;
		if ((iLocal_1709 % 1) == 0)
		{
			return false;
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = iLocal_1710;
	while (iVar1 <= 32)
	{
		vVar2 = { func_2076(iVar1) };
		if (!__LIB_0__::func_86(vVar2))
		{
			GRAPHICS::_0xF5E45CB1CF965D2D(vVar2);
		}
		iLocal_1710++;
		if ((iLocal_1710 % 1) == 0)
		{
			return false;
		}
		iVar1++;
	}
	if (iLocal_1712 == 0)
	{
		GRAPHICS::_0xF2F543D48F319A3A();
		iLocal_1712 = 1;
	}
	return true;
}

bool func_1617(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (iParam2 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 170, true);
		}
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, (iVar0 - 1), &vVar1) && TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, (iVar0 - 2), &vVar4))
			{
				if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
					{
						PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 1);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, vVar1, __LIB_3__::func_731(vVar1, vVar4), true, false, true);
						ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
						ENTITY::SET_ENTITY_VISIBLE(*iParam0, false);
						ENTITY::SET_ENTITY_COLLISION(*iParam0, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 131, true);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 136, true);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 113, true);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 217, true);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 6, true);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 80, false);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 47, true);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 77, true);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 24, false);
						PED::SET_PED_RESET_FLAG(*iParam0, 54, true);
						PED::SET_PED_RESET_FLAG(*iParam0, 131, true);
						PED::SET_PED_RESET_FLAG(*iParam0, 53, true);
						AUDIO::STOP_PED_SPEAKING(*iParam0, true);
						AUDIO::DISABLE_PED_PAIN_AUDIO(*iParam0, true);
						PED::SET_PED_CAN_RAGDOLL(*iParam0, false);
						PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
						ENTITY::_0x1AD922AB5038DEF3(*iParam0);
						if (iParam2 == 1)
						{
							if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), *iParam0))
							{
								PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), *iParam0, 0);
							}
							PED::SET_PED_RESET_FLAG(*iParam0, 170, true);
						}
						if (__LIB_11__::func_52(*iParam0, sParam1, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1) == 1)
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, vVar1 + Vector(-3f, 0f, 0f), __LIB_3__::func_731(vVar1, vVar4), true, false, true);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_1618(var uParam0)
{
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		if (iLocal_1715 == 0)
		{
			iLocal_1714 = 1;
			iLocal_1715 = 1;
		}
		__LIB_4__::func_982(uLocal_1456[0], 0.101f);
		if (iLocal_1713 == 0 && iLocal_1714 == 1)
		{
			__LIB_11__::func_59(uParam0, 25);
			iLocal_1713 = 1;
			iLocal_1714 = 0;
		}
	}
	else
	{
		if (iLocal_81 != 5)
		{
			__LIB_4__::func_982(uLocal_1456[0], 1.501f);
		}
		if (iLocal_1714 == 0 && iLocal_1713 == 1)
		{
			__LIB_11__::func_59(uParam0, 26);
			iLocal_1713 = 0;
			iLocal_1714 = 1;
		}
	}
}

void func_1622(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_1181(sParam0))
		{
			iVar1 = iLocal_220;
			if (iLocal_261 < iVar1)
			{
				iLocal_220[iLocal_261] = iVar0;
				iLocal_261++;
			}
		}
	}
	else
	{
		iVar2 = func_1628(iVar0);
		if (iVar2 != -1)
		{
			iLocal_220[iVar2] = 0;
			func_2080();
			iLocal_261 = (iLocal_261 - 1);
		}
	}
}

int func_1628(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_261)
	{
		if (iLocal_220[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1633(int iParam0, float fParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return __LIB_18__::func_296(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam2);
	}
	return false;
}

bool func_1634()
{
	float fVar0;
	fVar0 = 15f;
	if (__LIB_2__::func_215(Local_1562, Global_35, 1, fVar0, 0) && !PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return true;
	}
	else if (__LIB_2__::func_215(Local_1590, Global_35, 1, fVar0, 0) && !PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return true;
	}
	else if (__LIB_11__::func_54())
	{
		return true;
	}
	else if (func_2088())
	{
		return true;
	}
	else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1994.4f, -1315.6f, 115.5f, 100f))
	{
		return true;
	}
	else if (PED::IS_PED_INJURED(Local_1562) || PED::IS_PED_INJURED(Local_1590))
	{
		return true;
	}
	return false;
}

bool func_1635()
{
	return (PED::IS_PED_INJURED(Local_1562) || PED::IS_PED_INJURED(Local_1590));
}

void func_1637(var uParam0)
{
	switch (iLocal_1707)
	{
		case 0:
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1972.039f, -1328.774f, 111.5978f, 1f, -1, 0.25f, 0, 51.4056f);
			TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
			if (__LIB_0__::func_399(uLocal_1456[0], 1, 0, 0) != joaat("WEAPON_BOW_CHARLES"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1456[0], joaat("WEAPON_BOW_CHARLES"), false, 0, false, false);
			}
			func_2090(1);
			break;
		case 1:
			if (func_1169(11))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				func_2090(2);
			}
			else if (func_1169(12))
			{
				func_2090(2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_163(uLocal_1456[0], 242628503) && !func_1169(14))
			{
				func_1171(14);
			}
			if (!func_1169(14) && func_1642())
			{
				func_1171(14);
			}
			if (func_1169(14) && !func_1169(15))
			{
				func_1171(15);
			}
			if (!func_1169(15) && func_1642())
			{
				if (!PED::IS_PED_INJURED(uLocal_1456[0]))
				{
					if (__LIB_0__::func_163(uLocal_1456[0], 242628503))
					{
						TASK::CLEAR_PED_TASKS(uLocal_1456[0], false, false);
					}
				}
				func_1171(15);
			}
			if (!func_1169(15) && func_1169(12))
			{
				if (!PED::IS_PED_INJURED(uLocal_1456[0]))
				{
					if (__LIB_0__::func_163(uLocal_1456[0], 242628503))
					{
						TASK::CLEAR_PED_TASKS(uLocal_1456[0], false, false);
					}
				}
				func_1171(15);
			}
			if (func_1169(15))
			{
				if ((ENTITY::IS_ENTITY_DEAD(Local_1590) && ENTITY::DOES_ENTITY_EXIST(Local_1590)) || (ENTITY::IS_ENTITY_DEAD(Local_1562) && ENTITY::DOES_ENTITY_EXIST(Local_1562)))
				{
					if (func_2091(Local_1562, Local_1590, 0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(uLocal_1456[0], false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
						TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1992.5f, -1315.7f, 115.3f, 1f, -1, 0.25f, 0, 40000f);
						TASK::TASK_STAND_STILL(0, 500);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
						if (MAP::DOES_BLIP_EXIST(iLocal_1653))
						{
							MAP::REMOVE_BLIP(&iLocal_1653);
						}
						__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
						func_2090(8);
					}
				}
				else if (!func_1169(13))
				{
					if (func_1169(12))
					{
						if (!func_1169(13))
						{
							PED::SET_PED_COMBAT_MOVEMENT(uLocal_1456[0], 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], -1971.03f, -1326.194f, 110.8712f, 5f, 0, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uLocal_1456[0], -1971.03f, -1326.194f, 110.8712f, 125f, 0, 0);
							func_1171(13);
						}
					}
					else
					{
						func_2092(Local_1562, Local_1590, 0);
					}
				}
			}
			break;
		case 8:
			if (func_1169(18))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2040.7f, -1309.1f, 116.8f, 2f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				__LIB_2__::func_259(&uLocal_1439);
				func_2090(9);
			}
			break;
		case 9:
			if (func_1169(28))
			{
				if (func_2093(&Local_1477, 0, 1084227584 /* Float: 5f */, 1112014848 /* Float: 50f */, 1063675494 /* Float: 0.9f */))
				{
					func_2091(Local_1477, Local_1505, 0);
				}
				if (func_2093(&Local_1505, 0, 1084227584 /* Float: 5f */, 1112014848 /* Float: 50f */, 1063675494 /* Float: 0.9f */))
				{
					func_2091(Local_1505, Local_1533, 0);
				}
				if (func_2093(&Local_1533, 0, 1084227584 /* Float: 5f */, 1112014848 /* Float: 50f */, 1063675494 /* Float: 0.9f */))
				{
					func_2091(Local_1533, Local_1477, 0);
				}
			}
			if (!func_1169(82))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1477))
				{
					if (func_1181("MAR8_PATROL"))
					{
						if (__LIB_0__::func_665(Global_35, uLocal_1456[0], 1, 1) < 10f)
						{
							TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1477, -1, 0, 51, 0);
							func_1171(82);
						}
					}
				}
			}
			if (((func_1169(32) && func_1181("MAR8_POSTPAT")) && !__LIB_5__::func_463()) || __LIB_0__::func_94(Global_35, -2133.7f, -1279.2f, 124f, 1) < 80f)
			{
				if (func_1169(82))
				{
					TASK::TASK_CLEAR_LOOK_AT(Global_35);
				}
				__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				__LIB_1__::func_733(uLocal_1456[0]);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2092.956f, -1301.047f, 120.3857f, 1.5f, -1, 0.25f, 0, 91.495f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				func_1171(63);
				func_2090(3);
			}
			else if (func_1169(30))
			{
				if (func_1169(82))
				{
					TASK::TASK_CLEAR_LOOK_AT(Global_35);
				}
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], -2040.939f, -1307.919f, 116.0486f, 25f, 0, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uLocal_1456[0], -2040.939f, -1307.919f, 116.0486f, 125f, 0, 0);
				func_2090(11);
			}
			if (iLocal_1707 == 9)
			{
				if (__LIB_1__::func_583(&uLocal_1439) > 10f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1456[0], 242628503, true) != 1)
					{
						if (__LIB_0__::func_94(uLocal_1456[0], -2040.7f, -1309.1f, 116.8f, 1) > 10f)
						{
							func_2090(8);
						}
					}
				}
			}
			break;
		case 11:
			if (func_1169(32) && func_2094())
			{
				__LIB_11__::func_438(uParam0, uLocal_1456[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				__LIB_1__::func_733(uLocal_1456[0]);
				TASK::CLEAR_PED_TASKS(uLocal_1456[0], true, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				if ((__LIB_0__::func_255(Local_1477, 0) && __LIB_0__::func_255(Local_1505, 0)) && __LIB_0__::func_255(Local_1533, 0))
				{
					TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2092.956f, -1301.047f, 120.3857f, 1.5f, -1, 0.25f, 0, 91.495f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				func_1171(63);
				func_2090(3);
			}
			break;
		case 3:
			if ((((__LIB_0__::func_94(uLocal_1456[0], -2092.956f, -1301.047f, 120.3857f, 1) < 2f || !__LIB_0__::func_163(uLocal_1456[0], 242628503)) && !func_1169(19)) && ENTITY::DOES_ENTITY_EXIST(Local_1619)) && ENTITY::DOES_ENTITY_EXIST(Local_1647))
			{
				func_1171(19);
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_1619) && ENTITY::DOES_ENTITY_EXIST(Local_1647)) && __LIB_0__::func_94(Local_1619, -2095.1f, -1329.7f, 123.4f, 1) < 30f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2087f, -1332.4f, 124.3f, 1.5f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2081.3f, -1348.4f, 124f, 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2077.283f, -1374.865f, 124.341f, 1.5f, -1, 0.25f, 0, 161.205f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				func_1171(20);
				func_2090(4);
			}
			else if (func_1169(58))
			{
				func_2090(4);
			}
			else if (func_1169(22))
			{
				func_2090(4);
			}
			if (func_1169(30) && !func_2094())
			{
				__LIB_11__::func_439(uParam0, uLocal_1456[0], 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], -2040.939f, -1307.919f, 116.0486f, 25f, 0, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uLocal_1456[0], -2040.939f, -1307.919f, 116.0486f, 125f, 0, 0);
				func_2090(11);
			}
			break;
		case 4:
			if (!func_1169(19))
			{
				func_1171(19);
			}
			if (func_1169(25) || __LIB_0__::func_255(Local_1619, 0))
			{
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 30f, false);
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				TASK::TASK_STAND_STILL(0, 15000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2087.664f, -1401.382f, 130.3228f, 1f, -1, 0.25f, 0, 205.3683f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1619);
				__LIB_3__::func_356(Local_1619, -1118229366, 1);
				func_2090(13);
			}
			else if (func_1169(22))
			{
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 30f, false);
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
				}
				func_2090(13);
			}
			else if (func_1169(58))
			{
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 30f, false);
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
				}
				func_2090(12);
			}
			break;
		case 12:
			if (!func_1169(23))
			{
				PED::SET_PED_COMBAT_MOVEMENT(uLocal_1456[0], 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], ENTITY::GET_ENTITY_COORDS(uLocal_1456[0], true, false), 5f, 0, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uLocal_1456[0], ENTITY::GET_ENTITY_COORDS(uLocal_1456[0], true, false), 125f, 0, 0);
				func_1171(23);
			}
			else if (__LIB_0__::func_255(Local_1619, 0))
			{
				TASK::CLEAR_PED_TASKS(uLocal_1456[0], true, false);
				func_2090(13);
			}
			break;
		case 13:
			if (__LIB_0__::func_255(Local_1619, 0))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2077.6f, -1414.3f, 132.2f, 1.5f, -1, 0.25f, 0, 40000f);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -2077.6f, -1414.3f, 132.2f, -1, 0, 0, 0, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				func_2090(14);
			}
			else if (func_2095())
			{
				func_2090(12);
			}
			break;
		case 14:
			if (ENTITY::IS_ENTITY_DEAD(Local_1619) && !func_1169(26))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2071.4f, -1422.2f, 131.7f, 1.5f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				func_1171(26);
			}
			if (__LIB_0__::func_94(uLocal_1456[0], -2076.1f, -1415.6f, 131.1f, 1) < 10f && __LIB_0__::func_94(Global_35, -2076.1f, -1415.6f, 131.1f, 1) < 10f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2072.107f, -1422.678f, 131.314f, 1f, -1, 0.5f, 0, 207.7f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				func_2090(15);
			}
			break;
	}
}

bool func_1638(var uParam0)
{
	int iVar0;
	if (func_1169(57))
	{
		if (!__LIB_0__::func_899(&uLocal_1385))
		{
			__LIB_2__::func_259(&uLocal_1385);
		}
		if (__LIB_9__::func_178(&uLocal_1385) >= 3f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1466))
			{
				iVar0 = 3;
				if (iVar0 == 0)
				{
					__LIB_5__::func_106(uParam0, iLocal_1466, "SAV_PED6", 0);
					__LIB_11__::func_647(uParam0, "MAR8_SK5FOUND1", 0, 0, 0);
				}
				else if (iVar0 == 1)
				{
					__LIB_5__::func_106(uParam0, iLocal_1466, "SAV_PED5", 0);
					__LIB_11__::func_647(uParam0, "MAR8_SK6FOUND1", 0, 0, 0);
				}
				else if (iVar0 == 2)
				{
					__LIB_5__::func_106(uParam0, iLocal_1466, "SAV_PED6", 0);
					__LIB_11__::func_647(uParam0, "MAR8_SK5FOUND2", 0, 0, 0);
				}
				else if (iVar0 == 3)
				{
					__LIB_5__::func_106(uParam0, iLocal_1466, "SAV_PED5", 0);
					__LIB_11__::func_647(uParam0, "MAR8_SK6FOUND2", 0, 0, 0);
				}
				return true;
			}
			else
			{
				iLocal_82[57] = 0;
				iLocal_1466 = 0;
			}
		}
	}
	return false;
}

bool func_1640(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1562))
	{
	}
	switch (iLocal_1561)
	{
		case 0:
			if (func_2096())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1562))
				{
					Local_1562 = __LIB_1__::func_545(iLocal_336, -1994.4f, -1315.6f, 115.5f, -63f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1562, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1562, joaat("REL_PLAYER_ENEMY"));
					__LIB_2__::func_279(Local_1562, 1);
					PED::_0xF1C03A5352243A30(Local_1562);
					PED::_0xAE6004120C18DF97(Local_1562, 0, 0);
					ENTITY::_0x18FF3110CF47115D(Local_1562, 0, 0);
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1590))
				{
					Local_1590 = __LIB_1__::func_545(iLocal_336, -1992.942f, -1314.604f, 114.9588f, 125.016f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1590, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1590, joaat("REL_PLAYER_ENEMY"));
					__LIB_2__::func_279(Local_1590, 1);
					PED::_0xF1C03A5352243A30(Local_1590);
					PED::_0xAE6004120C18DF97(Local_1562, 0, 0);
					ENTITY::_0x18FF3110CF47115D(Local_1562, 0, 0);
					return false;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1590) && ENTITY::DOES_ENTITY_EXIST(Local_1562))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_1653))
					{
						MAP::REMOVE_BLIP(&iLocal_1653);
					}
					if (!PED::IS_PED_INJURED(Local_1562))
					{
						__LIB_1__::func_473(Local_1562, joaat("WORLD_HUMAN_SMOKE"), 0, 0, joaat("WORLD_HUMAN_SMOKE_MALE_C"), -1082130432 /* Float: -1f */);
					}
					if (!PED::IS_PED_INJURED(Local_1590))
					{
						__LIB_1__::func_473(Local_1590, joaat("WORLD_HUMAN_SMOKE"), 0, 0, joaat("WORLD_HUMAN_SMOKE_MALE_B"), -1082130432 /* Float: -1f */);
					}
					func_2098(1);
				}
			}
			break;
		case 1:
			if (func_1181("MAR8_KILLDOUBLE") || func_1634())
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_1562, 0);
				if (!MAP::DOES_BLIP_EXIST(Local_1562.f_15))
				{
					Local_1562.f_15 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1562);
					__LIB_3__::func_356(Local_1562, -1118229366, 1);
				}
				if (!MAP::DOES_BLIP_EXIST(Local_1590.f_15))
				{
					Local_1590.f_15 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1590);
					__LIB_3__::func_356(Local_1590, -1118229366, 1);
				}
				__LIB_2__::func_259(&uLocal_1391);
				func_2098(2);
			}
			break;
		case 2:
			if (func_1634())
			{
				func_1171(12);
				func_2099();
				func_2098(3);
			}
			else if (func_1635())
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
				}
				func_2099();
				func_2098(3);
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_DEAD(Local_1562) && ENTITY::IS_ENTITY_DEAD(Local_1590))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_1653))
				{
					MAP::REMOVE_BLIP(&iLocal_1653);
				}
				func_2098(4);
			}
			break;
		case 4:
			return true;
	}
	func_2100(Local_1562, 1, 0, 15f, 0);
	func_2100(Local_1590, 1, 0, 15f, 0);
	return false;
}

bool func_1641()
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_1562))
	{
		if (!PED::IS_PED_INJURED(Local_1562))
		{
			fVar0 = __LIB_0__::func_665(Global_35, Local_1562, 1, 1);
			if (fVar0 < 25f)
			{
				return true;
			}
			else if (((fVar0 <= 32f && __LIB_0__::func_665(uLocal_1456[0], Local_1562, 1, 1) < 35f) && func_2101(2000)) && !__LIB_0__::func_163(uLocal_1456[0], 242628503))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1642()
{
	bool bVar0;
	if (func_1169(44))
	{
		return true;
	}
	bVar0 = false;
	if (!func_1641())
	{
		if (func_2102())
		{
			bVar0 = true;
		}
	}
	if (!func_1169(14))
	{
		if (func_2102())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_1171(44);
		func_1171(45);
		return true;
	}
	return false;
}

void func_1651(int iParam0)
{
	iLocal_1708 = iParam0;
}

bool func_1652(var uParam0)
{
	switch (iLocal_1476)
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, -2067.325f, -1344.844f, 120.9805f, 1) <= 75f)
			{
				func_2111(uParam0);
			}
			if ((((ENTITY::DOES_ENTITY_EXIST(Local_1477) && ENTITY::DOES_ENTITY_EXIST(Local_1505)) && ENTITY::DOES_ENTITY_EXIST(Local_1533)) && __LIB_0__::func_665(Global_35, uLocal_1456[0], 1, 1) < 40f) && (__LIB_0__::func_94(Global_35, -2040f, -1308f, 117f, 1) < 15f || __LIB_0__::func_94(uLocal_1456[0], -2040f, -1308f, 117f, 1) < 10f))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_1477, "Cautious", 1f, -1);
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_1505, "Searching", 1f, -1);
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_1533, "Cautious", 1f, -1);
				Local_1477.f_4 = { -2067.7f, -1303.7f, 118.8f };
				Local_1505.f_4 = { -2060.2f, -1298f, 116.7f };
				Local_1533.f_4 = { -2058.2f, -1307.7f, 118.2f };
				func_1171(28);
				__LIB_11__::func_647(uParam0, "MAR8_SKPATROL", 0, 20f, 0);
				func_2112(1);
			}
			break;
		case 1:
			func_2113();
			func_2114(&Local_1477);
			func_2114(&Local_1505);
			func_2114(&Local_1533);
			if (!func_2115() && !func_2116())
			{
				if (((!func_1169(29) && Local_1477.f_21 == 3) && Local_1505.f_21 == 3) && Local_1533.f_21 == 3)
				{
					func_1171(29);
				}
				if (((!func_1169(32) && Local_1477.f_21 == 10) && Local_1505.f_21 == 10) && Local_1533.f_21 == 10)
				{
					func_1171(33);
					func_1171(32);
				}
				if (((func_1169(33) && Local_1477.f_21 == 10) && Local_1505.f_21 == 10) && Local_1533.f_21 == 10)
				{
					func_2112(3);
				}
			}
			else
			{
				func_1171(30);
				__LIB_9__::func_114(Local_1477, -1118229366, 1);
				__LIB_9__::func_114(Local_1505, -1118229366, 1);
				__LIB_9__::func_114(Local_1533, -1118229366, 1);
				func_1714(&Local_1477, 1);
				func_1714(&Local_1505, 1);
				func_1714(&Local_1533, 1);
				func_2112(2);
			}
			break;
		case 2:
			func_2114(&Local_1477);
			func_2114(&Local_1505);
			func_2114(&Local_1533);
			if (!func_1169(32))
			{
				if (func_2094())
				{
					func_1171(32);
				}
			}
			if (!func_1169(33))
			{
				if (func_2094())
				{
					func_1171(33);
				}
			}
			if (((func_1169(33) && Local_1477.f_21 == 10) && Local_1505.f_21 == 10) && Local_1533.f_21 == 10)
			{
				func_2112(3);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_1477) && ENTITY::DOES_ENTITY_EXIST(Local_1477))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_1477, "Cautious", 0f, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1505) && ENTITY::DOES_ENTITY_EXIST(Local_1505))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_1505, "Cautious", 0f, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1533) && ENTITY::DOES_ENTITY_EXIST(Local_1533))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_1533, "Cautious", 0f, -1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1477) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_1477))
			{
				func_2114(&Local_1477);
				if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_1477))
				{
					__LIB_3__::func_608(Local_1477);
				}
				__LIB_2__::func_426(&Local_1477);
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1505) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_1505))
			{
				func_2114(&Local_1505);
				if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_1477))
				{
					__LIB_3__::func_608(Local_1505);
				}
				__LIB_2__::func_426(&Local_1505);
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1533) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_1533))
			{
				func_2114(&Local_1533);
				if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_1533))
				{
					__LIB_3__::func_608(Local_1533);
				}
				__LIB_2__::func_426(&Local_1533);
				return false;
			}
			return true;
	}
	return false;
}

bool func_1653(var uParam0)
{
	switch (iLocal_1618)
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, -2133.7f, -1279.2f, 124f, 1) < 70f || __LIB_0__::func_94(uLocal_1456[0], -2133.7f, -1279.2f, 124f, 1) < 70f)
			{
				if (func_1169(63))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1652))
					{
						iLocal_1652 = VEHICLE::CREATE_VEHICLE(iLocal_340, -2133.7f, -1279.2f, 124f, -137f, true, true, false, false);
						VEHICLE::_SET_VEHICLE_TINT(iLocal_1652, 3);
						AITRANSPORT::_0xBA8818212633500A(iLocal_1652, 0, 1);
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1647))
					{
						Local_1647 = __LIB_1__::func_545(iLocal_338, -2137f, -1275f, 125f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1647, true);
						PED::SET_PED_CONFIG_FLAG(Local_1647, 225, true);
						PED::SET_PED_CONFIG_FLAG(Local_1647, 222, true);
						PED::SET_PED_CONFIG_FLAG(Local_1647, 202, true);
						PED::SET_PED_CONFIG_FLAG(Local_1647, 88, true);
						__LIB_2__::func_279(Local_1647, 1);
						__LIB_5__::func_106(uParam0, Local_1647, "CAMPER_0045", 0);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1647, true);
						return false;
					}
					if (!func_1169(81))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(Local_1647))
						{
							PED::_SET_PED_BODY_COMPONENT(Local_1647, 1903941038);
							PED::_UPDATE_PED_VARIATION(Local_1647, false, true, true, true, false);
							func_1171(81);
						}
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1619))
					{
						Local_1619 = __LIB_1__::func_545(iLocal_336, -2047.2f, -1287.2f, 116.8f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1619, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1619, joaat("REL_PLAYER_ENEMY"));
						__LIB_2__::func_279(Local_1619, 1);
						PED::_0xAE6004120C18DF97(Local_1619, 0, 0);
						ENTITY::_0x18FF3110CF47115D(Local_1619, 0, 0);
						AITRANSPORT::_0xE588B5A8A005CB5E(Local_1619, iLocal_1652, -1, 4194336);
						return false;
					}
					if ((!PHYSICS::DOES_ROPE_EXIST(Local_1647.f_1) && ENTITY::DOES_ENTITY_EXIST(Local_1647)) && ENTITY::DOES_ENTITY_EXIST(Local_1619))
					{
						Local_1647.f_1 = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(iLocal_1652, true, false), 0f, 0f, 0f, 4.2f, 1, true, -1, -1f);
						PHYSICS::ROPE_FORCE_LENGTH(Local_1647.f_1, 4.2f);
						PHYSICS::_0x522FA3F490E2F7AC(Local_1647.f_1, 0, 1);
						PHYSICS::_0x462FF2A432733A44(Local_1647.f_1, iLocal_1652, Local_1647, 0f, 0f, 0f, 0f, 0f, 0f, "door_dside_r", "SKEL_L_FOOT");
						PHYSICS::_0x3C6490D940FF5D0B(Local_1647.f_1, 0, "SKEL_L_FOOT", 4.2f, 1);
						PHYSICS::_0x76BAD9D538BCA1AA(Local_1647.f_1, 0f);
						PHYSICS::_0xB40EA9E0D2E2F7F3(Local_1647.f_1, 1f);
						PHYSICS::STOP_ROPE_WINDING(Local_1647.f_1);
						PHYSICS::_0xF1EA2A881EB7F2CD(Local_1647.f_1, 1);
						Local_1647.f_4 = 1;
					}
					if ((ENTITY::DOES_ENTITY_EXIST(Local_1647) && ENTITY::DOES_ENTITY_EXIST(Local_1619)) && Local_1647.f_4 == 1)
					{
						__LIB_3__::func_676(Local_1647, 65535, 65535, 2, "DraggedByCart");
						func_2120(1);
					}
				}
			}
			break;
		case 1:
			func_2121(&Local_1619);
			if (!PED::IS_PED_INJURED(Local_1647))
			{
				PED::RESET_PED_RAGDOLL_TIMER(Local_1647);
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_1619) && ENTITY::DOES_ENTITY_EXIST(Local_1619))
			{
				__LIB_1__::func_864(Local_1647, 0, 0);
				func_2120(3);
			}
			break;
		case 3:
			__LIB_2__::func_788(&Local_1647, 1, 0, 1);
			__LIB_2__::func_788(&Local_1619, 1, 0, 1);
			return true;
	}
	return false;
}

int func_1654(vector3 vParam0, int iParam3)
{
	int iVar0;
	iVar0 = __LIB_1__::func_545(iLocal_337, vParam0, iParam3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 223, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 186, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 38, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar0, 1);
	AUDIO::DISABLE_PED_PAIN_AUDIO(iVar0, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 305, true);
	PED::SET_PED_CAN_BE_TARGETTED(iVar0, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_GANG_DUTCHS"));
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iVar0, "mood_dead_1", "FACE_HUMAN@GEN_MALE@BASE");
	__LIB_1__::func_864(iVar0, 1, 0);
	PHYSICS::ACTIVATE_PHYSICS(iVar0);
	return iVar0;
}

bool func_1655(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		uParam0->f_15 = OBJECT::CREATE_OBJECT(joaat("P_DETONATOR01X"), *uParam0, true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_15, true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_15, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_17))
	{
		uParam0->f_17 = OBJECT::CREATE_OBJECT(joaat("P_NOOSE03X"), uParam0->f_3, true, true, false, false, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_17, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_17))
			{
				OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_17);
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_17, uParam0->f_7, -1, PED::GET_PED_BONE_INDEX(uParam0->f_7, 14284), 0.05f, -0.025f, 0f, 0f, 0f, 0f, 28.4f, 94.3f, 347.4f, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
				uParam0->f_6 = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(uParam0->f_15, true, false), 0f, 0f, 0f, uParam0->f_14, 6, true, -1, -1f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_7, uParam0->f_3, false, false, true, true);
					PHYSICS::ROPE_FORCE_LENGTH(uParam0->f_6, uParam0->f_14);
					PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_6, 1, 1);
					PHYSICS::_0x462FF2A432733A44(uParam0->f_6, uParam0->f_15, uParam0->f_17, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
					PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_6, 0, "ropeAttach", uParam0->f_14, 0);
					PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_6, 0f);
					PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_6, 1f);
					PHYSICS::STOP_ROPE_WINDING(uParam0->f_6);
					PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_6, 1);
					AUDIO::_0xF092B6030D6FD49C(uParam0->f_6, "ROPE_SETTINGS_DEFAULT");
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
					{
						if (!PED::IS_PED_RAGDOLL(uParam0->f_7))
						{
							PED::SET_PED_TO_RAGDOLL(uParam0->f_7, 0, 0, 0, true, true, false);
						}
					}
					PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 324, true);
					PED::_0x6569F31A01B4C097(uParam0->f_7, 1, 0);
					PED::_0x6569F31A01B4C097(uParam0->f_7, 0, 0);
					return true;
				}
			}
		}
	}
	return false;
}

void func_1657()
{
	int iVar0;
	if (!PED::IS_PED_INJURED(uLocal_1456[1]))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(uLocal_1456[1], &iVar0, true, 0, false))
		{
			if (iVar0 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::_0xE9BD19F8121ADE3E(uLocal_1456[1], -1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1456[1], true, true);
			}
		}
	}
}

int func_1665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_REVOLVER_DOUBLEACTION");
		case 1:
			return joaat("WEAPON_PISTOL_SEMIAUTO");
		case 2:
			return joaat("WEAPON_REVOLVER_SCHOFIELD");
		case 3:
			return joaat("WEAPON_PISTOL_VOLCANIC");
		case 4:
			return joaat("WEAPON_REVOLVER_CATTLEMAN");
		case 5:
			return joaat("WEAPON_SHOTGUN_SAWEDOFF");
		case 6:
			return joaat("WEAPON_REVOLVER_LEMAT");
		case 7:
			return joaat("WEAPON_PISTOL_M1899");
		case 8:
			return joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER");
		default:
			break;
	}
	return 0;
}

bool func_1667(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_1))
	{
		Local_14.f_1 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_1), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2063.485f, -1466.536f, 130.6913f, 73.1712f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[0], "ENEMY01");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[0]);
		__LIB_5__::func_510(Local_14.f_3[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_3[1] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2049.076f, -1470.026f, 126.3666f, 47.5709f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[1], "ENEMY02");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[1]);
		__LIB_5__::func_510(Local_14.f_3[1], Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_3[2] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2095.483f, -1463.346f, 133.0925f, 314.5f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[2], "ENEMY03");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[2]);
		__LIB_5__::func_510(Local_14.f_3[2], Local_14);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_3[3] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2099.59f, -1428.101f, 128.1454f, 302.5f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[3], "ENEMY04");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[3]);
		__LIB_5__::func_510(Local_14.f_3[3], Local_14);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_3[4] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2093.676f, -1464.639f, 132.6711f, 314.5175f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[4], "ENEMY05");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[4]);
		__LIB_5__::func_510(Local_14.f_3[4], Local_14);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[5]) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_3[5] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2050.175f, -1490.925f, 129.8675f, 14.4338f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[5], "ENEMY06");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[5]);
		__LIB_5__::func_510(Local_14.f_3[5], Local_14);
		if (bParam1)
		{
			if (iParam0 == 5)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_1), 1);
	return true;
}

bool func_1668(var uParam0, int iParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, int iParam6)
{
	if (!func_1667(iParam1, 1))
	{
		return false;
	}
	Local_356[iParam1 /*28*/] = Local_14.f_3[iParam1];
	Local_356[iParam1 /*28*/].f_1 = { func_2127(0, iParam1) };
	Local_356[iParam1 /*28*/].f_14 = func_2128(0, iParam1);
	Local_356[iParam1 /*28*/].f_4 = { func_2129(iParam1) };
	func_2130(&(Local_356[iParam1 /*28*/]), joaat("WEAPON_RIFLE_BOLTACTION"), iParam2, 0, fParam3, iParam6);
	if (bParam5)
	{
	}
	if (bParam4)
	{
		__LIB_2__::func_279(Local_356[iParam1 /*28*/], 1);
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_356[iParam1 /*28*/], true);
	return true;
}

void func_1670(int iParam0)
{
	iLocal_181 = iParam0;
}

void func_1671(int iParam0)
{
	iLocal_191 = iParam0;
}

int func_1672()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_356[iVar2 /*28*/]))
		{
			if (PED::IS_PED_INJURED(Local_356[iVar2 /*28*/]))
			{
				iVar1++;
			}
			else if (PED::_IS_PED_HOGTIED(Local_356[iVar2 /*28*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1681(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_189, 8))
	{
		if (!__LIB_5__::func_463())
		{
			if (__LIB_11__::func_647(uParam0, "MAR8_CAMP1", 0, 0, 0))
			{
				__LIB_1__::func_683(&iLocal_189, 8);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_189, 1) || !__LIB_0__::func_27(iLocal_189, 2))
	{
		if (!func_2135())
		{
			if (iLocal_191 == 2)
			{
				if (!__LIB_0__::func_27(iLocal_189, 1))
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_11__::func_647(uParam0, "MAR8_CAMP2", 0, 0, 0))
						{
							__LIB_1__::func_683(&iLocal_189, 1);
							BUILTIN::SETTIMERA(0);
						}
					}
				}
				else if (!__LIB_0__::func_27(iLocal_189, 2))
				{
					if (BUILTIN::TIMERA() > 8000)
					{
						if (!__LIB_5__::func_463())
						{
							if (__LIB_11__::func_647(uParam0, "MAR8_CAMP3", 0, 0, 0))
							{
								__LIB_1__::func_683(&iLocal_189, 2);
							}
						}
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_683(&iLocal_189, 1);
			__LIB_1__::func_683(&iLocal_189, 2);
		}
	}
	if (!__LIB_0__::func_27(iLocal_189, 32))
	{
		if (!func_1684())
		{
			if (func_1672() == 5)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_11__::func_647(uParam0, "MAR8_CAMP5", 0, 0, 0))
					{
						__LIB_1__::func_683(&iLocal_189, 32);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_683(&iLocal_189, 32);
		}
	}
	if (!__LIB_0__::func_27(iLocal_189, 16))
	{
		if (!__LIB_0__::func_27(iLocal_189, 32))
		{
			if (iLocal_191 == 3)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_11__::func_647(uParam0, "MAR8_CAMP4", 0, 0, 0))
					{
						__LIB_1__::func_683(&iLocal_189, 16);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_683(&iLocal_189, 16);
		}
	}
	if (!__LIB_0__::func_27(iLocal_189, 8192))
	{
		if (__LIB_0__::func_27(iLocal_189, 4096))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_1456[0], -2064f, -1448.2f, 128.4f, 2f, 2f, 10f, false, true, 0))
			{
				if (!__LIB_0__::func_899(&uLocal_1427))
				{
					__LIB_2__::func_259(&uLocal_1427);
				}
				else if (__LIB_1__::func_583(&uLocal_1427) >= 10f)
				{
					if (!func_1169(41))
					{
						if (!__LIB_5__::func_463())
						{
							if (__LIB_11__::func_647(uParam0, "MAR8_CHAR_UNC", 0, 0, 0))
							{
								__LIB_2__::func_259(&uLocal_1427);
							}
						}
					}
				}
			}
		}
	}
}

void func_1682(var uParam0)
{
	var uVar0;
	if (__LIB_1__::func_583(&uLocal_1412) >= 10f)
	{
		if (!func_1169(41))
		{
			if (!__LIB_0__::func_481(0))
			{
				if (__LIB_0__::func_27(iLocal_189, 512))
				{
					__LIB_1__::func_681(&iLocal_189, 128);
					__LIB_1__::func_681(&iLocal_189, 256);
					__LIB_1__::func_681(&iLocal_189, 512);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
				{
					if (__LIB_5__::func_314(uParam0, &uVar0, 0))
					{
						__LIB_2__::func_259(&uLocal_1412);
					}
				}
			}
		}
	}
	if (!func_1169(41))
	{
		if (!__LIB_0__::func_27(iLocal_189, 1024))
		{
			if (func_2135() || func_1672() >= 2)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_5__::func_314(uParam0, "MAR8_JOHN_UNC", 0))
					{
						__LIB_2__::func_259(&uLocal_1421);
						__LIB_1__::func_683(&iLocal_189, 1024);
					}
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_189, 2048))
		{
			if (func_2135() || func_1672() >= 3)
			{
				if (__LIB_1__::func_583(&uLocal_1421) >= 10f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "MAR8_JOHN_UNC2", 0))
						{
							__LIB_2__::func_259(&uLocal_1421);
							__LIB_1__::func_683(&iLocal_189, 2048);
						}
					}
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_189, 4096))
		{
			if (func_1672() >= 6 && func_2135())
			{
				if (__LIB_1__::func_583(&uLocal_1421) >= 7f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "MAR8_JOHN_UNC3", 0))
						{
							__LIB_1__::func_683(&iLocal_189, 4096);
						}
					}
				}
			}
		}
	}
}

struct<2> func_1683()
{
	char cVar0[16];
	vector3 vVar2;
	vVar2 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (!func_1181("MAR8_SK6FOUND4") && vVar2.z > 130f)
	{
		StringCopy(&cVar0, "MAR8_SK6FOUND4", 16);
	}
	else if (!func_1181("MAR8_SK5FOUND1"))
	{
		StringCopy(&cVar0, "MAR8_SK5FOUND1", 16);
	}
	else if (!func_1181("MAR8_SK6FOUND1"))
	{
		StringCopy(&cVar0, "MAR8_SK6FOUND1", 16);
	}
	else if (!func_1181("MAR8_SK5FOUND2"))
	{
		StringCopy(&cVar0, "MAR8_SK5FOUND2", 16);
	}
	else if (!func_1181("MAR8_SK6FOUND2"))
	{
		StringCopy(&cVar0, "MAR8_SK6FOUND2", 16);
	}
	else if (!func_1181("MAR8_SK5FOUND3"))
	{
		StringCopy(&cVar0, "MAR8_SK5FOUND3", 16);
	}
	else if (!func_1181("MAR8_SK6FOUND3"))
	{
		StringCopy(&cVar0, "MAR8_SK6FOUND3", 16);
	}
	return cVar0;
}

bool func_1684()
{
	return func_1672() == 6;
}

void func_1686(int iParam0, int iParam1)
{
	Local_356[iParam0 /*28*/].f_27 = iParam1;
}

bool func_1687(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_356[3 /*28*/]))
			{
				if (PED::IS_PED_INJURED(Local_356[3 /*28*/]))
				{
					return true;
				}
			}
			if (func_2135())
			{
				return true;
			}
			if (func_1672() >= 3)
			{
				return true;
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_356[3 /*28*/]))
			{
				if (PED::IS_PED_INJURED(Local_356[3 /*28*/]))
				{
					return true;
				}
			}
			break;
		case 5:
			return (func_2135() || func_1672() >= 3);
	}
	return false;
}

Vector3 func_1688(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -2066.03f, -1446.091f, 127.4005f;
		case 4:
			return -2075.251f, -1443.987f, 127.7487f;
		case 5:
			return -2054.633f, -1450.602f, 127.1675f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1689(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		default:
			break;
	}
	if (func_1169(74))
	{
		if (__LIB_1__::func_583(&uLocal_1409) > 20f)
		{
		}
	}
	if (func_1672() >= 2)
	{
		return true;
	}
	return false;
}

int func_1690(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 9;
		case 5:
			return 9;
		case 2:
			return 10;
		case 3:
			return 10;
		case 4:
			return 10;
	}
	return 9;
}

int func_1691()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_356[iVar2 /*28*/]))
		{
			if (!PED::IS_PED_INJURED(Local_356[iVar2 /*28*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1692(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_10))
	{
		Local_14.f_10 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_10), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_12[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_12[0] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2100.407f, -1414.972f, 133.5828f, 237.7217f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_12[0], "ENEMY01");
		__LIB_6__::func_906(Local_14.f_10, Local_14.f_12[0]);
		__LIB_5__::func_510(Local_14.f_12[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_12[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_12[1] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2106.763f, -1451.676f, 135.3135f, 311.8192f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_12[1], "ENEMY02");
		__LIB_6__::func_906(Local_14.f_10, Local_14.f_12[1]);
		__LIB_5__::func_510(Local_14.f_12[1], Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_12[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_12[2] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2126.144f, -1433.885f, 136.5566f, 254.3229f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_12[2], "ENEMY03");
		__LIB_6__::func_906(Local_14.f_10, Local_14.f_12[2]);
		__LIB_5__::func_510(Local_14.f_12[2], Local_14);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_12[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_12[3] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2111.399f, -1404.306f, 134.1989f, 214.9137f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_12[3], "ENEMY04");
		__LIB_6__::func_906(Local_14.f_10, Local_14.f_12[3]);
		__LIB_5__::func_510(Local_14.f_12[3], Local_14);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_12[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_12[4] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2084.283f, -1422.744f, 134.0248f, 161.5864f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_12[4], "ENEMY05");
		__LIB_6__::func_906(Local_14.f_10, Local_14.f_12[4]);
		__LIB_5__::func_510(Local_14.f_12[4], Local_14);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_10), 1);
	return true;
}

bool func_1693(var uParam0, int iParam1, int iParam2)
{
	if (!func_1692(iParam1, 1))
	{
		return false;
	}
	Local_525[iParam1 /*28*/] = Local_14.f_12[iParam1];
	Local_525[iParam1 /*28*/].f_1 = { func_2127(1, iParam1) };
	Local_525[iParam1 /*28*/].f_14 = func_2128(1, iParam1);
	Local_525[iParam1 /*28*/].f_4 = { func_2136(iParam1) };
	func_2130(&(Local_525[iParam1 /*28*/]), joaat("WEAPON_RIFLE_BOLTACTION"), 0, iParam2, 1092616192 /* Float: 10f */, 1);
	return true;
}

int func_1696()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar2 = iVar0;
		if (!PED::IS_PED_INJURED(Local_780[iVar2 /*28*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1697(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1740))
	{
		iVar0 = 0;
		while (iVar0 <= (Local_525 - 1))
		{
			if (__LIB_0__::func_272(Local_525[iVar0 /*28*/], 0))
			{
				iLocal_1740 = Local_525[iVar0 /*28*/];
				return;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_666 - 1))
		{
			if (__LIB_0__::func_272(Local_666[iVar0 /*28*/], 0))
			{
				iLocal_1740 = Local_666[iVar0 /*28*/];
				return;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_723 - 1))
		{
			if (__LIB_0__::func_272(Local_723[iVar0 /*28*/], 0))
			{
				iLocal_1740 = Local_723[iVar0 /*28*/];
				return;
			}
			iVar0++;
		}
	}
	else
	{
		if (!__LIB_0__::func_272(iLocal_1740, 0))
		{
			iLocal_1740 = 0;
		}
		__LIB_4__::func_89(&uLocal_1741, 0);
		if (__LIB_9__::func_913(&uLocal_1741, 10f))
		{
			if (__LIB_4__::func_971(uParam0) == 0)
			{
				if (!func_1181("MAR8_SEEUNCLE"))
				{
					__LIB_5__::func_106(uParam0, iLocal_1740, "SAV_PED6", 0);
					if (__LIB_11__::func_647(uParam0, "MAR8_SEEUNCLE", 0, 0, 0))
					{
						func_1622("MAR8_SEEUNCLE", 1);
						return;
					}
				}
				if (func_1181("MAR8_SEEUNCLE") && !func_1181("MAR8_SEEUNCLE6"))
				{
					__LIB_5__::func_106(uParam0, iLocal_1740, "SAV_PED5", 0);
					if (__LIB_11__::func_647(uParam0, "MAR8_SEEUNCLE6", 0, 0, 0))
					{
						func_1622("MAR8_SEEUNCLE6", 1);
						return;
					}
				}
			}
			else if (__LIB_4__::func_971(uParam0) == 1)
			{
				if (!func_1181("MAR8_SK5ESCAPE1"))
				{
					__LIB_5__::func_106(uParam0, iLocal_1740, "SAV_PED6", 0);
					if (__LIB_11__::func_647(uParam0, "MAR8_SK5ESCAPE1", 0, 0, 0))
					{
						func_1622("MAR8_SK5ESCAPE1", 1);
						return;
					}
				}
				if (func_1181("MAR8_SK5ESCAPE1") && !func_1181("MAR8_SK5ESCAPE2"))
				{
					__LIB_5__::func_106(uParam0, iLocal_1740, "SAV_PED6", 0);
					if (__LIB_11__::func_647(uParam0, "MAR8_SK5ESCAPE2", 0, 0, 0))
					{
						func_1622("MAR8_SK5ESCAPE2", 1);
						return;
					}
				}
			}
			else if (__LIB_4__::func_971(uParam0) == 2)
			{
				if (!func_1181("MAR8_SK6ESCAPE1"))
				{
					__LIB_5__::func_106(uParam0, iLocal_1740, "SAV_PED5", 0);
					if (__LIB_11__::func_647(uParam0, "MAR8_SK6ESCAPE1", 0, 0, 0))
					{
						func_1622("MAR8_SK6ESCAPE1", 1);
						return;
					}
				}
				if (func_1181("MAR8_SK6ESCAPE1") && !func_1181("MAR8_SK6ESCAPE2"))
				{
					__LIB_5__::func_106(uParam0, iLocal_1740, "SAV_PED5", 0);
					if (__LIB_11__::func_647(uParam0, "MAR8_SK6ESCAPE2", 0, 0, 0))
					{
						func_1622("MAR8_SK6ESCAPE2", 1);
						return;
					}
				}
			}
		}
	}
}

void func_1698(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (PED::IS_PED_ON_MOUNT(uLocal_1456[0]) || PED::IS_PED_ON_MOUNT(uLocal_1456[1]))
	{
		bVar0 = false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[14], false))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (__LIB_1__::func_583(&uLocal_1412) >= 10f)
		{
			if (!__LIB_0__::func_481(0))
			{
				if (__LIB_5__::func_314(uParam0, "MAR8_UNCLEDBYC", 0))
				{
					__LIB_2__::func_259(&uLocal_1412);
				}
			}
		}
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!__LIB_0__::func_27(iLocal_187, 1024))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[14], false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_202[14]) >= 2f)
				{
					if (!__LIB_0__::func_481(0))
					{
						if (__LIB_5__::func_314(uParam0, "MAR8_UNCONCHOR", 0))
						{
							__LIB_1__::func_683(&iLocal_187, 1024);
						}
					}
				}
			}
		}
	}
}

bool func_1701(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_18))
	{
		Local_14.f_18 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_18), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_20[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_20[0] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2131.791f, -1417.061f, 137.5208f, 268.9139f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_20[0], "ENEMY01");
		__LIB_6__::func_906(Local_14.f_18, Local_14.f_20[0]);
		__LIB_5__::func_510(Local_14.f_20[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_20[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_20[1] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2121.396f, -1437.812f, 136.7235f, 214.9137f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_20[1], "ENEMY02");
		__LIB_6__::func_906(Local_14.f_18, Local_14.f_20[1]);
		__LIB_5__::func_510(Local_14.f_20[1], Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_18), 1);
	return true;
}

bool func_1702(var uParam0, int iParam1, int iParam2)
{
	if (!func_1701(iParam1, 1))
	{
		return false;
	}
	Local_666[iParam1 /*28*/] = Local_14.f_20[iParam1];
	Local_666[iParam1 /*28*/].f_1 = { func_2127(2, iParam1) };
	Local_666[iParam1 /*28*/].f_14 = func_2128(2, iParam1);
	Local_666[iParam1 /*28*/].f_4 = { func_2137(iParam1) };
	func_2130(&(Local_666[iParam1 /*28*/]), joaat("WEAPON_RIFLE_BOLTACTION"), 0, iParam2, 1092616192 /* Float: 10f */, 1);
	return true;
}

bool func_1703(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_37))
	{
		Local_14.f_37 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_37), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_39[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_39[0] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2144.911f, -1401.942f, 137.3677f, 330.493f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_39[0], "ENEMY01");
		__LIB_6__::func_906(Local_14.f_37, Local_14.f_39[0]);
		__LIB_5__::func_510(Local_14.f_39[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_39[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_39[1] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), -2118.699f, -1394.367f, 135.9519f, 212.4935f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_39[1], "ENEMY02");
		__LIB_6__::func_906(Local_14.f_37, Local_14.f_39[1]);
		__LIB_5__::func_510(Local_14.f_39[1], Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_37), 1);
	return true;
}

bool func_1704(var uParam0, int iParam1, int iParam2)
{
	if (!func_1703(iParam1, 1))
	{
		return false;
	}
	Local_723[iParam1 /*28*/] = Local_14.f_39[iParam1];
	Local_723[iParam1 /*28*/].f_1 = { func_2127(6, iParam1) };
	Local_723[iParam1 /*28*/].f_14 = func_2128(6, iParam1);
	Local_723[iParam1 /*28*/].f_4 = { func_2138(iParam1) };
	func_2130(&(Local_723[iParam1 /*28*/]), joaat("WEAPON_RIFLE_BOLTACTION"), 0, iParam2, 1092616192 /* Float: 10f */, 1);
	return true;
}

void func_1705()
{
	if (iLocal_192 == 0)
	{
		vLocal_194 = { func_216(10, 4) };
		iLocal_193 = 35;
	}
	else if (iLocal_192 == 1)
	{
		vLocal_194 = { func_216(10, 0) };
		iLocal_193 = 36;
	}
	else if (iLocal_192 == 2)
	{
		vLocal_194 = { func_216(10, 1) };
		iLocal_193 = 37;
	}
	else if (iLocal_192 == 3)
	{
		vLocal_194 = { func_216(10, 2) };
		iLocal_193 = 38;
	}
	iLocal_192++;
}

void func_1708(int iParam0, float fParam1, float fParam2)
{
	if (iParam0 == 10)
	{
		ANIMSCENE::SET_ANIM_SCENE_RATE(uLocal_202[iParam0], fParam1);
	}
	else if (!PED::IS_PED_INJURED(uLocal_1456[0]))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_1456[0]))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(uLocal_202[iParam0], fParam1);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(uLocal_202[iParam0], fParam2);
		}
	}
}

bool func_1709(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			if (func_1169(36))
			{
				return false;
			}
			break;
		case 10:
			if ((((func_1169(37) && ENTITY::DOES_ENTITY_EXIST(Local_780[13 /*28*/])) && PED::IS_PED_INJURED(Local_780[13 /*28*/])) && ENTITY::DOES_ENTITY_EXIST(Local_780[14 /*28*/])) && PED::IS_PED_INJURED(Local_780[14 /*28*/]))
			{
				return false;
			}
			break;
		case 12:
			if (func_1169(39))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_1710(var uParam0, int iParam1)
{
	if (__LIB_4__::func_939(uParam0) == iLocal_333)
	{
		if (!PED::IS_PED_INJURED(uLocal_1456[0]))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], sLocal_178))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) >= 50)
				{
					if (__LIB_0__::func_94(Global_35, -2013.513f, -1379.63f, 118.053f, 1) > 70f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_1711(int iParam0, int iParam1)
{
	Local_780[iParam0 /*28*/].f_27 = iParam1;
}

bool func_1712(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1713(struct<26> Param0, var uParam26, var uParam27, int iParam28)
{
	return __LIB_0__::func_27(Param0.f_25, iParam28);
}

void func_1714(int iParam0, int iParam1)
{
	if (!func_1713(*iParam0, iParam1))
	{
		__LIB_1__::func_683(&(iParam0->f_25), iParam1);
	}
}

bool func_1715(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar6;
	func_1719(iParam0, &vVar0, &uVar6, &uVar3);
	return !__LIB_0__::func_86(vVar0);
}

bool func_1716(int iParam0)
{
	struct<28> Var0;
	Var0 = 4;
	Var0.f_1.f_7 = 2;
	Var0.f_1.f_17 = 2;
	Var0.f_1.f_21 = 1;
	Var0.f_1.f_28.f_7 = 2;
	Var0.f_1.f_28.f_17 = 2;
	Var0.f_1.f_28.f_21 = 1;
	Var0.f_1.f_28.f_28.f_7 = 2;
	Var0.f_1.f_28.f_28.f_17 = 2;
	Var0.f_1.f_28.f_28.f_21 = 1;
	Var0.f_1.f_28.f_28.f_28.f_7 = 2;
	Var0.f_1.f_28.f_28.f_28.f_17 = 2;
	Var0.f_1.f_28.f_28.f_28.f_21 = 1;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return func_1169(66);
		case 3:
		case 4:
			if ((ENTITY::DOES_ENTITY_EXIST(Local_780[0 /*28*/]) && ENTITY::DOES_ENTITY_EXIST(Local_780[1 /*28*/])) && ENTITY::DOES_ENTITY_EXIST(Local_780[2 /*28*/]))
			{
			}
			break;
		case 5:
			if (!PED::IS_PED_INJURED(uLocal_1456[0]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], sLocal_178))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) >= 11)
					{
						return true;
					}
				}
			}
			break;
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(Local_666[0 /*28*/]) && ENTITY::DOES_ENTITY_EXIST(Local_666[1 /*28*/]))
			{
				if ((PED::IS_PED_INJURED(Local_666[0 /*28*/]) || PED::IS_PED_INJURED(Local_666[1 /*28*/])) || (VOLUME::_DOES_VOLUME_EXIST(iLocal_1656[5]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1656[5], true, 0)))
				{
					return true;
				}
			}
			break;
		case 7:
		case 8:
			if (iLocal_190 == 12 || func_1169(59))
			{
				return true;
			}
			break;
		case 9:
			if (!PED::IS_PED_INJURED(uLocal_1456[0]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], sLocal_178))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) >= 12)
					{
					}
				}
			}
			break;
		case 10:
		case 11:
			if (!PED::IS_PED_INJURED(uLocal_1456[0]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], sLocal_178))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) >= 20)
					{
						return true;
					}
				}
			}
			break;
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(Local_525[4 /*28*/]))
			{
				if (PED::IS_PED_INJURED(Local_525[4 /*28*/]))
				{
					return true;
				}
			}
			if (__LIB_0__::func_393(Global_35, iLocal_1656[6], 0, 1))
			{
				return true;
			}
			break;
		case 13:
			if (ENTITY::DOES_ENTITY_EXIST(Local_723[0 /*28*/]))
			{
				return true;
			}
			break;
		case 14:
			if (ENTITY::DOES_ENTITY_EXIST(Local_780[13 /*28*/]))
			{
				if (PED::IS_PED_INJURED(Local_780[13 /*28*/]))
				{
					return true;
				}
				if (__LIB_0__::func_665(Global_35, Local_780[13 /*28*/], 1, 1) <= 10f)
				{
					return true;
				}
			}
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				return true;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_780[0 /*28*/]))
			{
				Var0[0 /*28*/] = { Local_780[0 /*28*/] };
				Var0[1 /*28*/] = { Local_780[1 /*28*/] };
				Var0[2 /*28*/] = { Local_780[2 /*28*/] };
				if (func_1237(&Var0, 3, 3))
				{
					return true;
				}
				if (PED::IS_PED_ON_MOUNT(uLocal_1456[0]) && func_1237(&Var0, 3, 2))
				{
					return true;
				}
			}
	}
	return false;
}

bool func_1717(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1718(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	if (ENTITY::DOES_ENTITY_EXIST(Local_780[iParam1 /*28*/]))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_780[iParam1 /*28*/]))
	{
		func_1719(iParam1, &vVar0, &fVar6, &vVar3);
		Local_780[iParam1 /*28*/] = __LIB_1__::func_545(joaat("G_M_M_UNIMOUNTAINMEN_01"), vVar0, fVar6, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		Local_780[iParam1 /*28*/].f_1 = { vVar0 };
		Local_780[iParam1 /*28*/].f_14 = fVar6;
		Local_780[iParam1 /*28*/].f_4 = { vVar3 };
		iVar7 = joaat("WEAPON_RIFLE_BOLTACTION");
		if (iParam1 == 13 || iParam1 == 14)
		{
			iVar7 = joaat("WEAPON_MELEE_MACHETE");
		}
		if (iVar7 == joaat("WEAPON_MELEE_MACHETE"))
		{
			func_2140(&(Local_780[iParam1 /*28*/]), iVar7, func_1722(iParam1), bParam2, func_2139(iParam1));
		}
		else if (!func_2141(iParam1))
		{
			func_2142(&(Local_780[iParam1 /*28*/]), iVar7, func_1722(iParam1), bParam2, func_2139(iParam1));
		}
		else
		{
			func_2130(&(Local_780[iParam1 /*28*/]), iVar7, func_1722(iParam1), bParam2, func_2139(iParam1), 1);
		}
		return true;
	}
	return false;
}

void func_1719(int iParam0, var uParam1, float fParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -2149.205f, -1333.787f, 130.4212f };
			*fParam2 = 198.7372f;
			*uParam3 = { -2140.246f, -1372.843f, 132.1804f };
			break;
		case 1:
			*uParam1 = { -2094.19f, -1376.254f, 127.3596f };
			*fParam2 = 95.3456f;
			*uParam3 = { -2130.322f, -1380.163f, 130.5592f };
			break;
		case 2:
			*uParam1 = { -2124.093f, -1357.552f, 127.9938f };
			*fParam2 = 194.0091f;
			*uParam3 = { -2125.799f, -1358.573f, 128.41f };
			break;
		case 3:
			*uParam1 = { -2091.953f, -1380.182f, 127.35f };
			*fParam2 = 98.1893f;
			*uParam3 = { -2086.494f, -1357.343f, 123.9782f };
			break;
		case 4:
			*uParam1 = { -2090.887f, -1380.297f, 127.293f };
			*fParam2 = 102.4518f;
			*uParam3 = { -2104.554f, -1350.81f, 125.4143f };
			break;
		case 5:
			*uParam1 = { -2046.29f, -1341.136f, 119.3246f };
			*fParam2 = 107.1663f;
			*uParam3 = { -2057.852f, -1357.753f, 120.8323f };
			break;
		case 6:
			*uParam1 = { -2118.375f, -1410.462f, 129.7204f };
			*fParam2 = 197.1401f;
			*uParam3 = { -2113.771f, -1422.913f, 129.6338f };
			break;
		case 7:
			*uParam1 = { -2131.135f, -1389.397f, 130.5466f };
			*fParam2 = 229.0883f;
			*uParam3 = { -2126.244f, -1401.058f, 130.0839f };
			break;
		case 8:
			*uParam1 = { -2120.028f, -1388.916f, 131.3894f };
			*fParam2 = 123.7733f;
			*uParam3 = { -2123.176f, -1401.315f, 130.1291f };
			break;
		case 9:
			*uParam1 = { -2084.789f, -1332.11f, 122.9482f };
			*fParam2 = 236.2731f;
			*uParam3 = { -2100.363f, -1328.633f, 123.2036f };
			break;
		case 10:
			*uParam1 = { -2010.308f, -1370.772f, 117.5029f };
			*fParam2 = 132.684f;
			*uParam3 = { -2014.644f, -1381.376f, 118.2752f };
			break;
		case 11:
			*uParam1 = { -2005.694f, -1368.878f, 117.0929f };
			*fParam2 = 135.3853f;
			*uParam3 = { -2012.421f, -1379.765f, 117.9421f };
			break;
		case 12:
			*uParam1 = { -2096.576f, -1442.367f, 133.9233f };
			*fParam2 = 208.3112f;
			*uParam3 = { -2087.12f, -1445.375f, 131.7016f };
			break;
		case 13:
			*uParam1 = { -2129.424f, -1402.725f, 130.1765f };
			*fParam2 = 291.1511f;
			*uParam3 = { -2129.424f, -1402.725f, 130.1765f };
			break;
		case 14:
			*uParam1 = { -2129.424f, -1402.725f, 130.1765f };
			*fParam2 = 291.1511f;
			*uParam3 = { -2129.424f, -1402.725f, 130.1765f };
			break;
		case 15:
			*uParam1 = { -2104.604f, -1427.329f, 128.113f };
			*fParam2 = 54.8097f;
			*uParam3 = { -2126.206f, -1400.283f, 130.026f };
			break;
		case 16:
			*uParam1 = { -2104.868f, -1431.134f, 128.3821f };
			*fParam2 = 31.1449f;
			*uParam3 = { -2126.206f, -1400.283f, 130.026f };
			break;
		case 17:
			*uParam1 = { -2101.47f, -1427.003f, 127.5545f };
			*fParam2 = 61.4753f;
			*uParam3 = { -2123.296f, -1401.607f, 130.1361f };
			break;
		case 18:
			*uParam1 = { -2141.558f, -1422.872f, 133.9475f };
			*fParam2 = 355.4674f;
			*uParam3 = { -2155.518f, -1393.015f, 138.1324f };
			break;
		case 19:
			*uParam1 = { -2077.119f, -1402.618f, 129.1211f };
			*fParam2 = 79.8967f;
			*uParam3 = { -2103.971f, -1389.183f, 129.6725f };
			break;
	}
}

void func_1720(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam1, iParam2);
	Local_780[iParam0 /*28*/].f_26 = iVar0;
}

bool func_1721(int iParam0)
{
	if (!__LIB_0__::func_86(func_1723(iParam0, 0)))
	{
		switch (iParam0)
		{
			case 2:
				if (PED::IS_PED_INJURED(Local_780[1 /*28*/]))
				{
					return true;
				}
				break;
			case 12:
				if (__LIB_0__::func_393(Global_35, iLocal_1656[7], 0, 1))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

int func_1722(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 0;
		case 12:
			return 0;
		case 13:
			return 2;
		case 14:
			return 2;
		default:
			break;
	}
	return 1;
}

Vector3 func_1723(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2119.108f, -1375.898f, 130.1328f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -2097.04f, -1441.605f, 134.1411f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1725()
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], sLocal_178) && TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) >= 45)
	{
		if (__LIB_0__::func_94(Global_35, -2013.513f, -1379.63f, 118.053f, 1) > 50f)
		{
			return true;
		}
	}
	if (bLocal_1744)
	{
		return true;
	}
	return false;
}

void func_1728(var uParam0)
{
	if (!func_1169(80))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			func_1171(80);
			__LIB_11__::func_59(uParam0, 2);
		}
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		func_1198(80);
		__LIB_11__::func_59(uParam0, 0);
	}
}

void func_1729()
{
	float fVar0;
	fVar0 = 2.5f;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1456[0], 0))
	{
		if (__LIB_0__::func_665(Global_35, uLocal_1456[0], 1, 1) > 20f)
		{
			fVar0 = 1.75f;
		}
		if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_1456[0]) > 122)
		{
			fVar0 = 1.75f;
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2.5f);
		if (!PED::IS_PED_INJURED(iLocal_1460))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1460, 2.5f);
		}
		if (!PED::IS_PED_INJURED(uLocal_1456[0]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_1456[0], fVar0);
		}
		if (!PED::IS_PED_INJURED(iLocal_1459))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1459, fVar0);
		}
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_1456[0], fVar0, 0, -1082130432 /* Float: -1f */, 0);
	}
}

int func_1738(int iParam0, int iParam1)
{
	var uVar0;
	return func_2146(&uVar0, iParam0, iParam1);
}

void func_1757(var uParam0, int iParam1, int iParam2, char* sParam3)
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
		func_2168(uParam0, iParam1, 373556, 0, sParam3, 67108863, 1023, 3, iParam2);
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

int func_1861(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_2260(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

bool func_1868()
{
	return __LIB_0__::func_27(iLocal_79, 1);
}

bool func_1869()
{
	return __LIB_0__::func_27(iLocal_79, 2);
}

bool func_1870()
{
	return __LIB_0__::func_27(iLocal_79, 4);
}

bool func_1871()
{
	return __LIB_0__::func_27(iLocal_79, 8);
}

bool func_1872()
{
	return __LIB_0__::func_27(iLocal_79, 16);
}

void func_1879(var uParam0)
{
	if (uParam0->f_25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
		{
			if (PHYSICS::_0x9B4F7E3E4F9C77B3(uParam0->f_6, uParam0->f_17))
			{
				PED::RESET_PED_RAGDOLL_TIMER(uParam0->f_7);
			}
			PED::SET_PED_RESET_FLAG(uParam0->f_7, 29, true);
		}
	}
}

void func_1880()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	if (func_1169(54))
	{
		func_2276();
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1467[iVar0]))
			{
				if (!iLocal_1471[iVar0])
				{
					if (PED::_0xA0BC8FAED8CFEB3C(iLocal_1467[iVar0]))
					{
						iVar1 = func_2277(iVar0);
						PED::_SET_PED_BODY_COMPONENT(iLocal_1467[iVar0], iVar1);
						PED::_UPDATE_PED_VARIATION(iLocal_1467[iVar0], false, true, true, true, false);
						iLocal_1471[iVar0] = 1;
					}
				}
				else if (!func_1169(35))
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_1467[iVar0], true, false) };
					func_2278(iVar0, &vVar5, &uVar8);
					if (MISC::ABSF((vVar2.z - vVar5.z)) > 1.5f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1467[iVar0], vVar5, true, false, true, true);
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_1883(float fParam0)
{
	int iVar0;
	iVar0 = func_2280(iLocal_1673);
	if (func_2281(iVar0, fParam0))
	{
	}
	iLocal_1673++;
	if (iLocal_1673 >= 5)
	{
		iLocal_1673 = 0;
	}
	return false;
}

void func_1897(var uParam0)
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
							iVar1 = func_2291(128);
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
			func_2292(uParam0);
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

bool func_2028(int iParam0, int iParam1)
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
				if (func_2028(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2028(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2028(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2028(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

Vector3 func_2076(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1633.602f, -1234.746f, 77.2697f;
		case 1:
			return -1636.049f, -1233.665f, 77.4184f;
		case 2:
			return -1640.079f, -1232.652f, 77.725f;
		case 3:
			return -1643.88f, -1232.778f, 78.2445f;
		case 4:
			return -1647.976f, -1233.821f, 78.8108f;
		case 5:
			return -1650.826f, -1234.559f, 79.2505f;
		case 6:
			return -1654.378f, -1235.391f, 79.8608f;
		case 7:
			return -1658.681f, -1236.79f, 80.7795f;
		case 8:
			return -1632.888f, -1234.694f, 77.2236f;
		case 9:
			return -1633.885f, -1233.827f, 77.2526f;
		case 10:
			return -1635.137f, -1233.382f, 77.3105f;
		case 11:
			return -1637.203f, -1232.814f, 77.4918f;
		case 12:
			return -1638.87f, -1232.333f, 77.5807f;
		case 13:
			return -1640.858f, -1231.924f, 77.8768f;
		case 14:
			return -1643.211f, -1232.066f, 78.0524f;
		case 15:
			return -1644.896f, -1232.592f, 78.3188f;
		case 16:
			return -1646.665f, -1233.148f, 78.5883f;
		case 17:
			return -1648.865f, -1233.658f, 78.9108f;
		case 18:
			return -1651.551f, -1234.432f, 79.3487f;
		case 19:
			return -1653.339f, -1234.99f, 79.6567f;
		case 20:
			return -1658.848f, -1236.788f, 80.814f;
		case 21:
			return -1660.078f, -1237.235f, 81.0367f;
		case 22:
			return -1661.851f, -1237.885f, 81.3756f;
		case 23:
			return -1663.368f, -1238.568f, 81.6427f;
		case 24:
			return -1665.268f, -1239.176f, 81.9338f;
		case 25:
			return -1666.948f, -1239.688f, 82.1939f;
		case 26:
			return -1668.935f, -1240.6f, 82.5595f;
		case 27:
			return -1671.238f, -1241.845f, 82.9935f;
		case 28:
			return -1673.268f, -1242.362f, 83.3831f;
		case 29:
			return -1675.428f, -1243.19f, 83.7389f;
		case 30:
			return -1677.912f, -1243.902f, 84.1701f;
		case 31:
			return -1680.248f, -1245.141f, 84.4986f;
		case 32:
			return -1683.014f, -1246.183f, 84.8518f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_2080()
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_220;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_220[iVar1] == 0)
		{
			if (iLocal_220[iVar1 + 1] != 0)
			{
				iLocal_220[iVar1] = iLocal_220[iVar1 + 1];
				iLocal_220[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

bool func_2088()
{
	var uVar0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, true, 0, false))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (!WEAPON::_0x5809DBCA0A37C82B(uVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_2090(int iParam0)
{
	iLocal_1707 = iParam0;
}

bool func_2091(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;
	int iVar12;
	if (!__LIB_0__::func_272(iParam0, 0) && !__LIB_0__::func_272(iParam1, 0))
	{
		if (__LIB_0__::func_899(&uLocal_1388))
		{
			__LIB_1__::func_561(&uLocal_1388);
		}
		iLocal_1463 = 0;
		func_1171(46);
		return true;
	}
	if (__LIB_0__::func_27(iParam2, 1))
	{
		iVar0 = iParam0;
	}
	else if (__LIB_0__::func_27(iParam2, 2))
	{
		iVar0 = iParam1;
	}
	else
	{
		if (!__LIB_0__::func_272(iParam0, 0))
		{
			iVar0 = iParam1;
		}
		if (!__LIB_0__::func_272(iParam1, 0))
		{
			iVar0 = iParam0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (TASK::_0x5EA655F01D93667A(uLocal_1456[0]))
	{
		return false;
	}
	if (PED::IS_PED_SHOOTING(uLocal_1456[0]))
	{
		return false;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(uLocal_1456[0]))
	{
		if (!__LIB_0__::func_163(uLocal_1456[0], joaat("SCRIPT_TASK_SET_CROUCH_MOVEMENT")))
		{
			TASK::TASK_SET_CROUCH_MOVEMENT(uLocal_1456[0], false, 0, false);
		}
		return false;
	}
	PED::SET_PED_ACCURACY(uLocal_1456[0], 100);
	if (__LIB_0__::func_163(uLocal_1456[0], -1073489615) && !__LIB_0__::func_163(uLocal_1456[0], 242628503))
	{
		PED::REGISTER_TARGET(uLocal_1456[0], iVar0, 1);
		__LIB_1__::func_733(uLocal_1456[0]);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 5f, 1, 0, 0);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_1456[0], 1);
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uLocal_1456[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
		if ((vVar1.x < 3f && vVar1.x > -3f) && vVar1.y > 0f)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2f, true, 0.5f, 4f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 80f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
		}
		else
		{
			TASK::_0x2416EC2F31F75266(uLocal_1456[0], iVar0, 8000, 0, 0);
		}
	}
	else if (!__LIB_0__::func_163(uLocal_1456[0], -1073489615) && !__LIB_0__::func_163(uLocal_1456[0], 242628503))
	{
		PED::REGISTER_TARGET(uLocal_1456[0], iVar0, 1);
		__LIB_1__::func_733(uLocal_1456[0]);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 5f, 1, 0, 0);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_1456[0], 1);
		vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uLocal_1456[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
		if ((vVar5.x < 3f && vVar5.x > -3f) && vVar5.y > 0f)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar8);
			TASK::OPEN_SEQUENCE_TASK(&iVar8);
			TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2f, true, 0.5f, 4f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 80f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar8);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iVar8);
			TASK::CLEAR_SEQUENCE_TASK(&iVar8);
		}
		else
		{
			TASK::TASK_SHOOT_AT_ENTITY(uLocal_1456[0], iVar0, 8000, 0, 0);
		}
	}
	else if (func_1169(45))
	{
		PED::REGISTER_TARGET(uLocal_1456[0], iVar0, 1);
		__LIB_1__::func_733(uLocal_1456[0]);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_1456[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 5f, 1, 0, 0);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_1456[0], 1);
		vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uLocal_1456[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
		if ((vVar9.x < 3f && vVar9.x > -3f) && vVar9.y > 0f)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar12);
			TASK::OPEN_SEQUENCE_TASK(&iVar12);
			TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2f, true, 0.5f, 4f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 80f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar12);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_1456[0], iVar12);
			TASK::CLEAR_SEQUENCE_TASK(&iVar12);
		}
		else
		{
			TASK::TASK_SHOOT_AT_ENTITY(uLocal_1456[0], iVar0, 8000, 0, 0);
		}
		func_1198(45);
	}
	return false;
}

void func_2092(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_153(uLocal_1456[0], 0, 1, 0) != joaat("WEAPON_BOW_CHARLES"))
	{
		if (!__LIB_0__::func_163(uLocal_1456[0], 716706914))
		{
			TASK::TASK_SWAP_WEAPON(uLocal_1456[0], 1, 1, 0, 0);
		}
		return;
	}
	if (!__LIB_0__::func_272(iParam0, 0) && !__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (func_2093(&iParam0, 0, 1084227584 /* Float: 5f */, 1112014848 /* Float: 50f */, 1063675494 /* Float: 0.9f */))
		{
			iVar0 = iParam1;
		}
	}
	if (__LIB_0__::func_272(iParam1, 0))
	{
		if (func_2093(&iParam1, 0, 1084227584 /* Float: 5f */, 1112014848 /* Float: 50f */, 1063675494 /* Float: 0.9f */))
		{
			iVar0 = iParam0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && __LIB_0__::func_272(iParam2, 0))
	{
		if (func_2093(&iParam2, 0, 1084227584 /* Float: 5f */, 1112014848 /* Float: 50f */, 1063675494 /* Float: 0.9f */))
		{
			iVar0 = iParam2;
		}
	}
	if (iVar0 == 0)
	{
		__LIB_1__::func_561(&uLocal_1388);
		if (!__LIB_0__::func_899(&uLocal_1394))
		{
			__LIB_2__::func_259(&uLocal_1394);
		}
		if (IntToFloat(__LIB_1__::func_592(&uLocal_1394)) < MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 200f))
		{
			return;
		}
		iLocal_1463 = 0;
		if (!PED::_GET_PED_CROUCH_MOVEMENT(uLocal_1456[0]))
		{
			if (!__LIB_0__::func_163(uLocal_1456[0], joaat("SCRIPT_TASK_SET_CROUCH_MOVEMENT")))
			{
			}
		}
		return;
	}
	__LIB_1__::func_561(&uLocal_1394);
	if (!__LIB_0__::func_899(&uLocal_1388))
	{
		__LIB_2__::func_259(&uLocal_1388);
	}
	bVar1 = false;
	if (iLocal_1463 != iVar0)
	{
		bVar1 = true;
	}
	if (IntToFloat(__LIB_1__::func_592(&uLocal_1388)) > MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 200f))
	{
		if (!__LIB_0__::func_163(uLocal_1456[0], -1073489615) || bVar1)
		{
			PED::_SET_PED_CROUCH_MOVEMENT(uLocal_1456[0], false, 0, false);
			PED::_0x0F967019CC853BCC(iVar0, 21030);
			TASK::CLEAR_PED_TASKS(uLocal_1456[0], true, false);
			TASK::TASK_AIM_AT_ENTITY(uLocal_1456[0], iVar0, -1, 0, 1);
			iLocal_1463 = iVar0;
		}
	}
}

bool func_2093(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (__LIB_2__::func_138(*iParam0, 1, 1, 0, 0, 0))
	{
		return true;
	}
	if (__LIB_11__::func_775(ENTITY::GET_ENTITY_COORDS(*iParam0, false, false), iParam3, iParam4))
	{
		return true;
	}
	return false;
}

bool func_2094()
{
	return ((PED::IS_PED_INJURED(Local_1477) && PED::IS_PED_INJURED(Local_1505)) && PED::IS_PED_INJURED(Local_1533));
}

bool func_2095()
{
	if (__LIB_0__::func_163(uLocal_1456[0], 242628503))
	{
		return false;
	}
	if (__LIB_0__::func_255(Local_1619, 0))
	{
		return false;
	}
	if (__LIB_0__::func_665(Global_35, Local_1619, 1, 1) <= 5f)
	{
		return false;
	}
	if (!__LIB_0__::func_899(&uLocal_1430))
	{
		__LIB_2__::func_259(&uLocal_1430);
		return false;
	}
	if (__LIB_1__::func_583(&uLocal_1430) <= 10f)
	{
		return false;
	}
	return true;
}

bool func_2096()
{
	return (__LIB_0__::func_94(Global_35, -1969.2f, -1329.7f, 113.3f, 1) < 30f || __LIB_0__::func_94(uLocal_1456[0], -1969.2f, -1329.7f, 113.3f, 1) < 30f);
}

void func_2098(int iParam0)
{
	iLocal_1561 = iParam0;
}

void func_2099()
{
	if (!PED::IS_PED_INJURED(Local_1562))
	{
		__LIB_9__::func_114(Local_1562, -1118229366, 1);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_1562, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 140f, 16384, 0);
	}
	if (!PED::IS_PED_INJURED(Local_1590))
	{
		__LIB_9__::func_114(Local_1590, -1118229366, 1);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_1590, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 140f, 16384, 0);
	}
}

void func_2100(int iParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || __LIB_0__::func_899(&uLocal_1385))
	{
		return;
	}
	if (!__LIB_0__::func_272(iParam0, 73))
	{
		if (!bParam1)
		{
			if (__LIB_2__::func_901(iParam0, Global_35))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				PED::REGISTER_HATED_TARGETS_AROUND_PED(iParam0, 50f);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 50f, 0, 0);
				func_1171(57);
			}
		}
		else
		{
			return;
		}
	}
	if (PED::_IS_PED_LASSOED(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		PED::REGISTER_HATED_TARGETS_AROUND_PED(iParam0, 50f);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 50f, 0, 0);
		func_1171(57);
	}
	if (PED::_0x29FCE825613FEFCA(iParam0, 2000))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		PED::REGISTER_HATED_TARGETS_AROUND_PED(iParam0, 50f);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 50f, 0, 0);
		func_1171(57);
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		PED::REGISTER_HATED_TARGETS_AROUND_PED(iParam0, 50f);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 50f, 0, 0);
		func_1171(57);
	}
	if (bParam2)
	{
		if (__LIB_2__::func_215(iParam0, Global_35, 1, fParam3, 0) && !PED::IS_PED_IN_COVER(Global_35, false, false))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			PED::REGISTER_HATED_TARGETS_AROUND_PED(iParam0, 50f);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 50f, 0, 0);
			func_1171(57);
		}
	}
	if (bParam4)
	{
		if (func_2390(iParam0, 0, &uLocal_1678, &uLocal_1706, 0, 0) || func_2391(iParam0, &uLocal_1678, &uLocal_1706, 0))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			PED::REGISTER_HATED_TARGETS_AROUND_PED(iParam0, 50f);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 50f, 0, 0);
			func_1171(57);
		}
	}
	if (func_1169(57))
	{
		iLocal_1466 = iParam0;
	}
}

bool func_2101(int iParam0)
{
	if (!func_1169(77))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1562))
		{
			__LIB_2__::func_259(&uLocal_1424);
			func_1171(77);
		}
	}
	else if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1562))
	{
		if (__LIB_1__::func_592(&uLocal_1424) >= iParam0)
		{
			return true;
		}
	}
	else
	{
		func_1198(77);
	}
	return false;
}

bool func_2102()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1562))
	{
		if (PED::IS_PED_INJURED(Local_1562))
		{
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1590))
	{
		if (PED::IS_PED_INJURED(Local_1590))
		{
			return true;
		}
	}
	return false;
}

int func_2111(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1477))
	{
		Local_1477 = __LIB_1__::func_545(iLocal_336, -2067.527f, -1343.185f, 120.9228f, 86.6613f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1477, joaat("WEAPON_BOW"), 20, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1477, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1477, joaat("REL_PLAYER_ENEMY"));
		__LIB_5__::func_106(uParam0, Local_1477, "SAV_PED6", 0);
		__LIB_2__::func_279(Local_1477, 1);
		PED::_0xAE6004120C18DF97(Local_1477, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_1477, 0, 0);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1505))
	{
		Local_1505 = __LIB_1__::func_545(iLocal_336, -2067.325f, -1344.844f, 120.9805f, 98.4552f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1505, joaat("WEAPON_BOW"), 20, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1505, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1505, joaat("REL_PLAYER_ENEMY"));
		__LIB_5__::func_106(uParam0, Local_1505, "SAV_PED5", 0);
		__LIB_2__::func_279(Local_1505, 1);
		PED::_0xAE6004120C18DF97(Local_1505, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_1505, 0, 0);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1533))
	{
		Local_1533 = __LIB_1__::func_545(iLocal_336, -2067.576f, -1342.055f, 120.8907f, 60.0089f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1533, joaat("WEAPON_REPEATER_CARBINE"), 30, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1533, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1533, joaat("REL_PLAYER_ENEMY"));
		__LIB_2__::func_279(Local_1533, 1);
		PED::_0xAE6004120C18DF97(Local_1533, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_1533, 0, 0);
		return 0;
	}
	return 1;
}

void func_2112(int iParam0)
{
	iLocal_1476 = iParam0;
}

void func_2113()
{
	if (!func_1169(16))
	{
		if ((func_2115() || func_2116()) || func_1181("MAR8_O_SCOUTS"))
		{
			MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1477);
			MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1505);
			MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1533);
			__LIB_3__::func_356(Local_1477, -1118229366, 1);
			__LIB_3__::func_356(Local_1505, -1118229366, 1);
			__LIB_3__::func_356(Local_1533, -1118229366, 1);
			func_1171(16);
		}
	}
}

void func_2114(int iParam0)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (iParam0->f_21 != 11)
		{
			if (iParam0->f_21 != 10)
			{
				__LIB_3__::func_382(iParam0, 10);
			}
		}
		else
		{
			return;
		}
	}
	else if (iParam0->f_21 != 8 && iParam0->f_21 != 9)
	{
		if (func_1713(*iParam0, 1))
		{
			__LIB_3__::func_382(iParam0, 8);
		}
	}
	switch (iParam0->f_21)
	{
		case 1:
			__LIB_3__::func_382(iParam0, 2);
			break;
		case 2:
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_4, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, 3000);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1384);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
			__LIB_3__::func_382(iParam0, 3);
			break;
		case 3:
			if (__LIB_0__::func_163(*iParam0, 242628503) && TASK::GET_SEQUENCE_PROGRESS(*iParam0) == 1)
			{
				if (!func_1169(31))
				{
					func_1171(31);
				}
			}
			if (!__LIB_0__::func_163(*iParam0, 242628503) && func_1169(29))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_STAND_STILL(0, 3000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2100.4f, -1211.1f, 127.9f, 1f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				PED::_SET_PED_BLACKBOARD_FLOAT(*iParam0, "Searching", 1f, -1);
				__LIB_3__::func_382(iParam0, 7);
			}
			break;
		case 7:
			__LIB_4__::func_89(&(iParam0->f_22), 0);
			if (__LIB_9__::func_913(&(iParam0->f_22), 14f))
			{
				if (!func_1169(32))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(*iParam0, "Searching", 0f, -1);
					func_1171(32);
				}
			}
			if (!__LIB_0__::func_163(*iParam0, 242628503) || (__LIB_0__::func_665(*iParam0, Global_35, 1, 1) > 40f && !ENTITY::IS_ENTITY_ON_SCREEN(*iParam0)))
			{
				if (!func_1169(33))
				{
					func_1171(33);
				}
				__LIB_3__::func_382(iParam0, 10);
			}
			break;
		case 8:
			vVar0 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
			PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, vVar0, 50f, 0, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(*iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 140f, 16384, 0);
			__LIB_3__::func_382(iParam0, 9);
			break;
		default:
			func_2393(iParam0);
			break;
	}
}

bool func_2115()
{
	return ((PED::IS_PED_INJURED(Local_1477) || PED::IS_PED_INJURED(Local_1505)) || PED::IS_PED_INJURED(Local_1533));
}

bool func_2116()
{
	float fVar0;
	fVar0 = 15f;
	if (__LIB_2__::func_215(Local_1477, Global_35, 1, fVar0, 0) && !PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return true;
	}
	else if (__LIB_2__::func_215(Local_1505, Global_35, 1, fVar0, 0) && !PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return true;
	}
	else if (__LIB_2__::func_215(Local_1533, Global_35, 1, fVar0, 0) && !PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return true;
	}
	else if (__LIB_11__::func_54())
	{
		return true;
	}
	else if (func_2088())
	{
		return true;
	}
	else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -2059.094f, -1308.55f, 117.5554f, 100f))
	{
		return true;
	}
	return false;
}

void func_2120(int iParam0)
{
	iLocal_1618 = iParam0;
}

void func_2121(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	vector3 vVar4;
	if (PED::IS_PED_INJURED(*iParam0))
	{
		if (iParam0->f_21 != 11)
		{
			if (iParam0->f_21 != 10)
			{
				if (((iParam0->f_21 == 7 || iParam0->f_21 == 4) || iParam0->f_21 == 5) || iParam0->f_21 == 8)
				{
					if (!func_1169(22))
					{
						func_1171(22);
					}
				}
				__LIB_3__::func_382(iParam0, 10);
			}
			else if (func_1169(58))
			{
				if (!func_1169(22))
				{
					func_1171(22);
				}
			}
		}
		else
		{
			return;
		}
	}
	switch (iParam0->f_21)
	{
		case 1:
			__LIB_3__::func_382(iParam0, 6);
			break;
		case 6:
			if (__LIB_0__::func_94(Global_35, -2103.2f, -1286.2f, 121.8f, 1) < 35f || __LIB_0__::func_94(uLocal_1456[0], -2103.2f, -1286.2f, 121.8f, 1) < 35f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_1652, sLocal_177, 524311, 0, 17160, -1, 3f, 0, 1073741824 /* Float: 2f */, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				__LIB_3__::func_382(iParam0, 7);
			}
			break;
		case 7:
			if (!__LIB_0__::func_163(*iParam0, 242628503))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_LEAVE_VEHICLE(0, iLocal_1652, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				if (!func_1169(86))
				{
					func_1171(86);
				}
				__LIB_3__::func_382(iParam0, 4);
			}
			else if (func_2394(iParam0))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_LEAVE_VEHICLE(0, iLocal_1652, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 140f, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				func_1171(58);
				__LIB_3__::func_382(iParam0, 8);
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1652, 0))
			{
				iVar0 = TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_1652);
				if (iVar0 >= 30)
				{
					if (!func_1169(86))
					{
						func_1171(86);
					}
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_163(*iParam0, 242628503))
			{
				func_1171(21);
				if (!PED::IS_PED_INJURED(Local_1647))
				{
					TASK::CLEAR_PED_TASKS(Local_1647, true, false);
				}
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
				TASK::TASK_LEAVE_VEHICLE(0, iLocal_1652, 32, 0);
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_1647);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2079.927f, -1415.144f, 130.6988f, 1f, -1, 0.25f, 0, 198.1806f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
				__LIB_3__::func_382(iParam0, 5);
			}
			break;
		case 5:
			if (!func_1169(25))
			{
				if (!PED::_0xEF3A8772F085B4AA(Local_1647))
				{
					PHYSICS::_0xBB3E9B073E66C3C9(Local_1647.f_1, 1, 0, 1, 0);
					PHYSICS::_0x4CFA2B7FAE115ECB(&(Local_1647.f_1), &uVar1, &uVar2, 3.5f, 0.5f, 1056964608 /* Float: 0.5f */, -1);
					func_1171(25);
				}
			}
			if (!func_1169(84))
			{
				if (!__LIB_0__::func_163(*iParam0, 242628503))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(*iParam0), ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 1f, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2077.896f, -1414.781f, 130.3567f, 1f, -1, 0.25f, 0, 265.2462f);
					__LIB_1__::func_473(0, joaat("WORLD_HUMAN_SMOKE"), 0, 1, joaat("WORLD_HUMAN_SMOKE_MALE_C"), -1082130432 /* Float: -1f */);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1384);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
					PED::_0xF1C03A5352243A30(*iParam0);
					func_1171(84);
				}
			}
			if (!func_1169(24))
			{
				if (__LIB_2__::func_215(*iParam0, Global_35, 1, 15f, 0))
				{
					if (!PED::IS_PED_IN_COVER(Global_35, false, false))
					{
						bVar3 = true;
					}
				}
				if (func_2088())
				{
					bVar3 = true;
				}
				vVar4 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
				if (MISC::IS_BULLET_IN_AREA(vVar4, 5f, true))
				{
					bVar3 = true;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(vVar4 - Vector(5f, 5f, 5f), vVar4 + Vector(5f, 5f, 5f), false))
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1384);
					if (PED::_IS_PED_CARRYING(*iParam0))
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(*iParam0), ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 1f, 1);
					}
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 140f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1384);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1384);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1384);
					func_1171(24);
				}
			}
			break;
		default:
			func_2393(iParam0);
			break;
	}
	func_2395();
}

Vector3 func_2127(int iParam0, int iParam1)
{
	return func_2397(iParam0, iParam1);
}

float func_2128(int iParam0, int iParam1)
{
	return func_2398(iParam0, iParam1);
}

Vector3 func_2129(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { func_216(6, 0) };
			break;
		case 1:
			vVar0 = { func_216(6, 1) };
			break;
		case 2:
			vVar0 = { func_216(6, 2) };
			break;
		case 3:
			vVar0 = { func_216(6, 3) };
			break;
		case 4:
			vVar0 = { func_216(6, 4) };
			break;
		case 5:
			vVar0 = { func_216(6, 6) };
			break;
	}
	return vVar0;
}

void func_2130(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, int iParam5)
{
	int iVar0;
	func_2399(uParam0, iParam1, iParam2, bParam3, fParam4);
	if (!uParam0->f_20)
	{
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		if (iParam1 != joaat("WEAPON_MELEE_MACHETE"))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uParam0->f_4, Global_35, 2f, iParam5, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 140f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		uParam0->f_20 = 1;
	}
}

bool func_2135()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	return vVar0.z < 130f;
}

Vector3 func_2136(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { func_216(7, 0) };
			break;
		case 1:
			vVar0 = { func_216(7, 1) };
			break;
		case 2:
			vVar0 = { func_216(7, 2) };
			break;
		case 3:
			vVar0 = { func_216(7, 3) };
			break;
		case 4:
			vVar0 = { func_216(7, 12) };
			break;
	}
	return vVar0;
}

Vector3 func_2137(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { func_216(7, 4) };
			break;
		case 1:
			vVar0 = { func_216(7, 5) };
			break;
	}
	return vVar0;
}

Vector3 func_2138(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { func_216(7, 9) };
			break;
		case 1:
			vVar0 = { func_216(7, 10) };
			break;
	}
	return vVar0;
}

float func_2139(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 10f;
		case 16:
			return 10f;
		case 17:
			return 10f;
		case 18:
			return 10f;
		case 19:
			return 10f;
		default:
			break;
	}
	return 2f;
}

void func_2140(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	int iVar0;
	func_2399(uParam0, iParam1, iParam2, bParam3, fParam4);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_MELEE_MACHETE"), false, 0, false, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_4, 2f, -1, 0.25f, 0, 40000f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

bool func_2141(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 12:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

void func_2142(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	int iVar0;
	func_2399(uParam0, iParam1, iParam2, bParam3, fParam4);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_4, 2f, -1, 0.25f, 0, 40000f);
	TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 140f, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

int func_2146(var uParam0, int iParam1, int iParam2)
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
		return func_2146(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2168(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
			uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 373556;
			iVar1++;
		}
		__LIB_5__::func_561(uParam0, iParam1, 2, 4);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 8);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 512);
		__LIB_5__::func_563(uParam0, iParam1, 5000, 512);
		if (uParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_5__::func_564(uParam0, iParam1, -2147483648);
		}
	}
}

int func_2260(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				func_832(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_2276()
{
	vector3 vVar0;
	float fVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1467[0]))
	{
		func_2278(0, &vVar0, &fVar3);
		iLocal_1467[0] = func_1654(vVar0, fVar3);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1467[1]))
	{
		func_2278(1, &vVar0, &fVar3);
		iLocal_1467[1] = func_1654(vVar0, fVar3);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1467[2]))
	{
		func_2278(2, &vVar0, &fVar3);
		iLocal_1467[2] = func_1654(vVar0, fVar3);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1467[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1467[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_1467[2]))
	{
		return 1;
	}
	return 0;
}

int func_2277(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1326021790;
			break;
		case 1:
			iVar0 = -729658759;
			break;
		case 2:
			iVar0 = -1615863595;
			break;
	}
	return iVar0;
}

void func_2278(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -2064.078f, -1438.236f, 126.9176f };
			*fParam2 = 343.9246f;
			break;
		case 1:
			*uParam1 = { -2067.816f, -1451.432f, 127.708f };
			*fParam2 = 51.6862f;
			break;
		case 2:
			*uParam1 = { -2061.975f, -1431.126f, 126.9445f };
			*fParam2 = 305.1584f;
			break;
	}
}

int func_2280(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = Local_1562;
			break;
		case 1:
			iVar0 = Local_1562;
			break;
		case 2:
			iVar0 = Local_1477;
			break;
		case 3:
			iVar0 = Local_1505;
			break;
		case 4:
			iVar0 = Local_1533;
			break;
	}
	return iVar0;
}

bool func_2281(int iParam0, float fParam1)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
			vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1619, vVar0) };
			fVar3 = __LIB_1__::func_992(Local_1619, vVar0, 1);
			if (fVar3 < fParam1 && MISC::ABSF(vVar4.x) < 10f)
			{
				return true;
			}
		}
	}
	return false;
}

int func_2291(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1280(&uVar0, iParam0, 0);
	iVar9 = func_2146(&uVar4, iParam0, 0);
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

void func_2292(var uParam0)
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
					iVar2 = func_2291(128);
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
				iVar3 = func_2291(128);
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

int func_2390(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_2391(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_2__::func_899(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_9__::func_660(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_2393(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (iParam0->f_21 != 11)
		{
			if (iParam0->f_21 != 10)
			{
				__LIB_3__::func_382(iParam0, 10);
			}
		}
		else
		{
			return;
		}
	}
	switch (iParam0->f_21)
	{
		case 1:
			break;
		case 10:
			__LIB_3__::func_356(*iParam0, -1269631044, 1);
			break;
	}
}

bool func_2394(int iParam0)
{
	if (func_2584())
	{
		return true;
	}
	else if (func_2585())
	{
		return true;
	}
	else if (__LIB_2__::func_215(*iParam0, Global_35, 1, 15f, 0) && !PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return true;
	}
	return false;
}

void func_2395()
{
	if (func_1169(86))
	{
		if (!func_1169(87))
		{
			if (__LIB_0__::func_27(iLocal_183, 1024))
			{
				if (!__LIB_11__::func_8("MAR8_DRAGDIES"))
				{
					__LIB_1__::func_864(Local_1647, 0, 0);
					func_1171(87);
				}
			}
		}
	}
}

Vector3 func_2397(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2063.485f, -1466.536f, 130.6913f;
				case 1:
					return -2049.076f, -1470.026f, 126.3666f;
				case 2:
					return -2095.483f, -1463.346f, 133.0925f;
				case 3:
					return -2099.59f, -1428.101f, 128.1454f;
				case 4:
					return -2093.676f, -1464.639f, 132.6711f;
				case 5:
					return -2050.175f, -1490.925f, 129.8675f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2100.407f, -1414.972f, 133.5828f;
				case 1:
					return -2106.763f, -1451.676f, 135.3135f;
				case 2:
					return -2126.144f, -1433.885f, 136.5566f;
				case 3:
					return -2111.399f, -1404.306f, 134.1989f;
				case 4:
					return -2084.283f, -1422.744f, 134.0248f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2131.791f, -1417.061f, 137.5208f;
				case 1:
					return -2121.396f, -1437.812f, 136.7235f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -2080.983f, -1390.749f, 129.0172f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2135.7f, -1389.3f, 131.7f;
				case 1:
					return -2131.3f, -1390.1f, 131.5f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2086.531f, -1412.815f, 131.9169f;
				case 1:
					return -2088.923f, -1413.015f, 131.9404f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -2143.064f, -1397.109f, 138.2358f;
				case 1:
					return -2118.699f, -1394.367f, 135.9519f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_2398(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 73.1712f;
				case 1:
					return 47.5709f;
				case 2:
					return 314.5f;
				case 3:
					return 302.5f;
				case 4:
					return 314.5175f;
				case 5:
					return 14.4338f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 237.7217f;
				case 1:
					return 311.8192f;
				case 2:
					return 254.3229f;
				case 3:
					return 214.9137f;
				case 4:
					return 161.5864f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 268.9139f;
				case 1:
					return 214.9137f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 148.9715f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 214.9137f;
				case 1:
					return 0f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 174.7785f;
				case 1:
					return 204.7784f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 260.493f;
				case 1:
					return 212.4935f;
			}
			break;
	}
	return 0f;
}

void func_2399(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	if (uParam0->f_16 == 0)
	{
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_15))
		{
			uParam0->f_15 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_PLAYER_ENEMY"));
		PED::SET_PED_ACCURACY(*uParam0, 40);
		__LIB_1__::func_766(*uParam0, iParam1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, true, iParam1);
		AUDIO::STOP_PED_SPEAKING(*uParam0, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 143, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 58, true);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 1, 0);
		if (iParam1 != joaat("WEAPON_MELEE_MACHETE"))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, true);
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 93, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 93, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 114, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 28, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 68, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 46, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 96, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, true);
		}
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, iParam2);
		if (iParam2 == 1)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_4, fParam4, 0, 0, 0);
		}
		if (bParam3 == 1)
		{
			ENTITY::_SET_ENTITY_HEALTH(*uParam0, 10, 0);
			ENTITY::SET_ENTITY_MAX_HEALTH(*uParam0, 10);
		}
		uParam0->f_16 = 1;
	}
}

bool func_2584()
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1652))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_1652, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_INJURED(iVar1))
			{
				return true;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_2585()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1652))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1652, Global_35, 1, 1))
		{
		}
		return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1652, Global_35, 1, 1);
	}
	return false;
}

