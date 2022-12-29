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
	struct<214> Local_156 = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
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
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	struct<282> Local_398 = { 20, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 20, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216 } ;
	struct<7> Local_680 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	struct<31> Local_698 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	var uLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736[5] = { 0, 0, 0, 0, 0 };
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	int iLocal_748 = 0;
	float fLocal_749 = 0f;
	struct<21> Local_750[3];
	struct<52> Local_814[3];
	int iLocal_971 = 0;
	struct<21> Local_972 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	char cLocal_1001[32] = "";
	struct<4> Local_1005 = { 0, 0, 0, 0 } ;
	var uLocal_1009 = 0;
	var uLocal_1010 = 1065353216;
	var uLocal_1011 = 1119092736;
	var uLocal_1012 = 1092616192;
	var uLocal_1013 = 1085276160;
	int iLocal_1014[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1020[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1026[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1032 = 0;
	int iLocal_1033[2] = { 0, 0 };
	int iLocal_1036[2] = { 0, 0 };
	struct<7> Local_1039[11];
	vector3 vLocal_1117[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149[2] = { 0, 0 };
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	struct<691> Local_1157 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = -1;
	var uLocal_1858 = 1;
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
	var uLocal_1869 = -1;
	var uLocal_1870 = 1;
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
	var uLocal_1881 = -1;
	var uLocal_1882 = 1;
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
	var uLocal_1893 = -1;
	var uLocal_1894 = 1;
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
	var uLocal_1905 = -1;
	var uLocal_1906 = 1;
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
	var uLocal_1917 = -1;
	var uLocal_1918 = 1;
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
	var uLocal_1929 = -1;
	var uLocal_1930 = 1;
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
	var uLocal_1941 = -1;
	var uLocal_1942 = 1;
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
	var uLocal_1954 = 1;
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
	var uLocal_1965 = -1;
	var uLocal_1966 = 1;
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
	var uLocal_1977 = -1;
	var uLocal_1978 = 1;
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
	var uLocal_1989 = -1;
	var uLocal_1990 = 1;
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
	var uLocal_2001 = -1;
	var uLocal_2002 = 1;
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
	var uLocal_2013 = -1;
	var uLocal_2014 = 1;
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
	var uLocal_2025 = -1;
	var uLocal_2026 = 1;
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
	var uLocal_2037 = -1;
	var uLocal_2038 = 1;
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
	var uLocal_2049 = -1;
	var uLocal_2050 = 1;
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
	var uLocal_2061 = -1;
	var uLocal_2062 = 1;
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
	var uLocal_2073 = -1;
	var uLocal_2074 = 1;
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
	var uLocal_2086 = 1;
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
	var uLocal_2097 = -1;
	var uLocal_2098 = 1;
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
	var uLocal_2109 = -1;
	var uLocal_2110 = 1;
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
	var uLocal_2121 = -1;
	var uLocal_2122 = 1;
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
	var uLocal_2133 = -1;
	var uLocal_2134 = 1;
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
	var uLocal_2145 = -1;
	var uLocal_2146 = 1;
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
	var uLocal_2157 = -1;
	var uLocal_2158 = 1;
	var uLocal_2159 = 0;
	struct<141> Local_2160 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_2311[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2317 = 0;
	int iLocal_2318 = 0;
	int iLocal_2319 = 0;
	var uLocal_2320[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2351 = 30;
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
	var uLocal_2382[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2413 = 0;
	var uLocal_2414 = 8;
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
	int iLocal_2479[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2489[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2499[2] = { 0, 0 };
	int iLocal_2502[2] = { 0, 0 };
	int iLocal_2505[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2516 = 10;
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
	int iLocal_2527[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2543 = 0;
	struct<35> Local_2544 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1096810496, 1090519040, 0 } ;
	var uLocal_2579[1] = { 0 };
	struct<5> Local_2581[5];
	var uLocal_2607[5] = { 0, 0, 0, 0, 0 };
	struct<24> Local_2613 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	int iLocal_2646 = 0;
	int iLocal_2647 = 0;
	int iLocal_2648 = 0;
	int iLocal_2649 = 0;
	int iLocal_2650 = 0;
	bool bLocal_2651 = false;
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
	int iVar11;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_749 = 15f;
	Local_2160.f_136 = 0;
	Local_2160.f_137 = uScriptParam_0;
	Local_2160.f_138 = 807;
	if (__LIB_0__::func_2() != 0)
	{
	}
	else
	{
		__LIB_7__::func_919();
		__LIB_8__::func_203(Local_2160.f_136);
		return;
	}
	iLocal_98 = __LIB_0__::func_982(Local_2160.f_136);
	if (__LIB_7__::func_907(Local_2160.f_136, 536870912))
	{
		__LIB_0__::func_516(&(Global_40.f_9096[Local_2160.f_136 /*12*/].f_6), __LIB_0__::func_771(__LIB_7__::func_920()));
	}
	if (!__LIB_7__::func_908(Local_2160.f_136, 2097152))
	{
		__LIB_8__::func_82(Local_2160.f_136, 2097152);
	}
	__LIB_7__::func_921();
	__LIB_8__::func_167(128, __LIB_8__::func_215(Local_2160.f_136));
	if (__LIB_7__::func_908(Local_2160.f_136, 33554432))
	{
		__LIB_7__::func_922(128);
		__LIB_8__::func_83(Local_2160.f_136, 33554432);
	}
	__LIB_7__::func_922(1);
	__LIB_8__::func_167(262144, __LIB_7__::func_907(Local_2160.f_136, 128));
	__LIB_8__::func_167(131072, __LIB_7__::func_907(Local_2160.f_136, 4));
	__LIB_8__::func_167(2097152, __LIB_7__::func_908(Local_2160.f_136, 1024));
	__LIB_8__::func_167(-2147483648, __LIB_7__::func_908(Local_2160.f_136, 16384));
	__LIB_8__::func_167(1048576, __LIB_8__::func_242(Local_2160.f_136));
	__LIB_8__::func_167(16, __LIB_8__::func_309(Local_2160.f_136));
	__LIB_8__::func_234(0, &Local_2160, 0);
	VEHICLE::_0x012701ED938B85DE(1f, 5f);
	if (__LIB_7__::func_907(Local_2160.f_136, 128) || (iLocal_98 == 2 && (__LIB_7__::func_923(-2147483648) || !__LIB_7__::func_908(1, 2))))
	{
		__LIB_7__::func_922(262144);
	}
	__LIB_8__::func_235(&Local_2160, 32, func_20());
	if (__LIB_7__::func_924(&Local_2160, 32))
	{
		if (!__LIB_0__::func_117(Local_2160.f_138, 32))
		{
			__LIB_0__::func_123(Local_2160.f_138, 32);
		}
		if (!__LIB_7__::func_923(1048576))
		{
			iVar0 = 16;
			__LIB_3__::func_710(Global_1392194[Local_2160.f_136 /*10*/].f_6, iVar0);
		}
	}
	else
	{
		__LIB_7__::func_925(Global_1392194[Local_2160.f_136 /*10*/].f_6);
	}
	func_27(Local_2160.f_136, Local_2160.f_137, &Local_1157, &Local_2160, 1, 1);
	__LIB_8__::func_167(64, func_28());
	__LIB_8__::func_167(16384, func_29());
	__LIB_8__::func_167(32768, __LIB_8__::func_204());
	__LIB_8__::func_167(65536, __LIB_8__::func_205());
	__LIB_8__::func_167(256, __LIB_8__::func_216());
	func_33();
	Local_1157.f_13 = joaat("LOGGING_WORKERS");
	func_34();
	if (!__LIB_7__::func_924(&Local_2160, 32))
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
	__LIB_8__::func_203(Local_2160.f_136);
	uScriptParam_0 = uScriptParam_0;
	Local_1157.f_4 = { -1399.503f, -223.7296f, 99.81865f };
	Local_1157.f_7 = { -1474.662f, -341.2676f, 80f };
	Local_1157.f_10 = { -1326.326f, -116.0771f, 150f };
	if (__LIB_7__::func_923(16))
	{
		Local_972.f_3 = 1;
	}
	if (__LIB_7__::func_924(&Local_2160, 32))
	{
		POPULATION::_0x74C2B3DC0B294102(Global_1392194[Local_2160.f_136 /*10*/].f_5);
		POPULATION::_0xA1CFB35069D23C23(Global_1392194[Local_2160.f_136 /*10*/].f_5);
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
	__LIB_8__::func_251(&Local_2160);
	__LIB_4__::func_203(&Local_2160, 1);
	if (__LIB_7__::func_923(1048576) || __LIB_7__::func_924(&Local_2160, 32))
	{
		__LIB_8__::func_84(&Local_2160, 1);
	}
	if (__LIB_7__::func_923(262144) && !__LIB_7__::func_907(Local_2160.f_136, 16777216))
	{
		__LIB_8__::func_85(Local_2160.f_136, 16777216);
	}
	__LIB_8__::func_131(&Local_2160, 128);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_2651 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_2651, 9342, 0);
		func_46();
		if (!bLocal_2651)
		{
			switch (iLocal_2648)
			{
				case 0:
					if (!__LIB_7__::func_907(Local_2160.f_136, 524288) && Local_1157.f_3 < (15 + ((2 + (Local_1157 + Local_1157.f_1)) + iLocal_14)))
					{
						__LIB_7__::func_927((15 + ((2 + (Local_1157 + Local_1157.f_1)) + iLocal_14)), &Local_1157);
						__LIB_1__::func_148(&(vLocal_1117[4 /*3*/]));
					}
					else if (func_49())
					{
						iLocal_2648 = 1;
					}
					break;
				case 1:
					__LIB_7__::func_928(16);
					if (!__LIB_7__::func_929(1) && func_52())
					{
						bVar1 = __LIB_7__::func_929(16);
						__LIB_8__::func_168(1, __LIB_8__::func_226(&Local_1157, &Local_2160, &iLocal_2479, &iLocal_2502, &bVar1, &iLocal_733));
						__LIB_8__::func_168(16, bVar1);
						if (__LIB_7__::func_929(1))
						{
							iLocal_733 = 0;
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
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2502[1]))
								{
									iLocal_2502[1] = VEHICLE::_CREATE_MISSION_TRAIN(-1901305252, __LIB_7__::func_930(), false, false, true, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2502[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2502[1], false, false))
								{
									VEHICLE::SET_TRAIN_SPEED(iLocal_2502[1], 0f);
									VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_2502[1], 0f);
									VEHICLE::_0x3660BCAB3A6BB734(iLocal_2502[1]);
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2502[1], false);
									VEHICLE::_0xA72B1BF3857B94D7(iLocal_2502[1], 1);
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
						if (!__LIB_7__::func_924(&Local_2160, 32))
						{
							bVar2 = __LIB_7__::func_929(16);
							__LIB_8__::func_168(2, func_60(&bVar2, &iLocal_733, 0, __LIB_0__::func_55((iLocal_98 == 3 && !__LIB_7__::func_923(262144)), 0, -1)));
							__LIB_8__::func_168(16, bVar2);
							if (__LIB_7__::func_929(2))
							{
								iLocal_733 = 0;
							}
						}
						else
						{
							__LIB_7__::func_932(2);
						}
					}
					if (!__LIB_7__::func_929(4) && !__LIB_7__::func_929(16))
					{
						if (!__LIB_7__::func_924(&Local_2160, 32))
						{
							__LIB_2__::func_935(Local_2160.f_138, 0, 0, 0, 0, 0);
							__LIB_7__::func_932(16);
							__LIB_8__::func_168(4, __LIB_8__::func_123(Local_2160.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_2160.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_2160.f_138), 146, true);
							}
						}
						else
						{
							__LIB_7__::func_932(4);
						}
					}
					if (!__LIB_7__::func_929(8))
					{
						if (!__LIB_7__::func_924(&Local_2160, 32) && !__LIB_7__::func_924(&Local_2160, 2))
						{
							if (__LIB_8__::func_128(&Local_1157))
							{
								if (!__LIB_7__::func_924(&Local_2160, 32) && __LIB_7__::func_923(64))
								{
									__LIB_0__::func_928(&(Local_2160.f_35), iLocal_2479[0], "LOGGING_VICTIM", 0);
									iVar3 = 0 + 810;
									iVar4 = __LIB_2__::func_963(iVar3);
									__LIB_0__::func_928(&(Local_2160.f_35), iVar4, "LOGGING_WORKER", 0);
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
						if (__LIB_7__::func_923(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_2479[5]))
						{
							__LIB_8__::func_323(&(uLocal_72[1]), &(iLocal_2479[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, 0, 0, 0);
						}
						if (__LIB_7__::func_923(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_2479[4]))
						{
							__LIB_8__::func_323(&(uLocal_72[0]), &(iLocal_2479[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, 0, iLocal_743, 0);
							if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
							{
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 1, true);
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 2, true);
								__LIB_7__::func_934(128);
							}
						}
						__LIB_7__::func_932(524288);
					}
					__LIB_8__::func_170(Local_2160.f_136, 1);
					if (((((((((!CAM::IS_SCREEN_FADED_OUT() && __LIB_7__::func_929(1)) && __LIB_7__::func_929(2)) && __LIB_7__::func_929(4)) && __LIB_7__::func_929(8)) && __LIB_7__::func_929(131072)) && __LIB_7__::func_929(524288)) && func_71()) && __LIB_8__::func_171()) || __LIB_7__::func_924(&Local_2160, 32))
					{
						if (!__LIB_7__::func_924(&Local_2160, 32) && (__LIB_7__::func_923(128) || !func_73()))
						{
							__LIB_0__::func_928(&(Local_2160.f_35), Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&(Local_2160.f_35), __LIB_2__::func_963(Local_2160.f_138), "EA_LCMP_Foreman", 0);
							func_74();
						}
						else
						{
							__LIB_0__::func_928(&(Local_2160.f_35), Global_35, "ARTHUR", 0);
							__LIB_0__::func_928(&(Local_2160.f_35), __LIB_2__::func_963(Local_2160.f_138), "EA_LCMP_Foreman", 0);
							__LIB_8__::func_124(Local_2160.f_138, 1);
							__LIB_2__::func_451(&(Local_750[0 /*21*/]), 0);
						}
						func_77();
						iLocal_2648 = 2;
					}
					break;
				case 2:
					if (__LIB_7__::func_924(&Local_2160, 128) && __LIB_7__::func_935(Local_2160.f_136, __LIB_7__::func_923(128)))
					{
						__LIB_8__::func_310(0);
						__LIB_8__::func_132(&Local_2160, 128);
					}
					__LIB_8__::func_252();
					if (!__LIB_7__::func_923(16777216))
					{
						__LIB_8__::func_167(16777216, __LIB_18__::func_72(&Local_2160, &Local_1157));
					}
					if (!__LIB_7__::func_924(&Local_2160, 32))
					{
						if (__LIB_8__::func_234(iLocal_745, &Local_2160, 5))
						{
							func_83();
							func_84();
						}
						if (!__LIB_7__::func_924(&Local_2160, 2))
						{
							__LIB_8__::func_116(&uLocal_2320, &uLocal_2382, &Local_2160, 808, 833, &iLocal_732, &iLocal_745, 10, -1082130432 /* Float: -1f */, 1);
							__LIB_7__::func_936(&uLocal_2320);
							__LIB_7__::func_936(&iLocal_2479);
							__LIB_7__::func_936(&iLocal_2505);
							__LIB_0__::func_11();
							__LIB_8__::func_243();
							if ((!__LIB_7__::func_924(&Local_2160, 32) && !__LIB_7__::func_923(32)) && __LIB_7__::func_923(128))
							{
								__LIB_8__::func_117(&Local_2160, 0, __LIB_8__::func_133(), __LIB_8__::func_134());
								__LIB_8__::func_87();
							}
							if (func_93())
							{
								if (__LIB_7__::func_933(8192))
								{
									TASK::SET_ANIM_RATE(Local_1157.f_690[12 /*12*/].f_8, 0f, 0, false);
									TASK::SET_ANIM_RATE(Local_1157.f_690[13 /*12*/].f_8, 0f, 0, false);
								}
								__LIB_8__::func_206(&Local_972, &Local_2160, 0);
								__LIB_8__::func_129(&Local_2160);
								__LIB_8__::func_83(Local_2160.f_136, 16384);
								__LIB_0__::func_325(&iLocal_2413);
								__LIB_8__::func_258();
								if (__LIB_0__::func_6(iLocal_154) && __LIB_1__::func_44(iLocal_154))
								{
									__LIB_1__::func_559(iLocal_154, 0, 2);
								}
								__LIB_0__::func_267(1);
								LAW::_0x710448D44A64C213(1);
								iVar5 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
								iVar6 = 0;
								while (iVar6 < 2)
								{
									if (PHYSICS::DOES_ROPE_EXIST(iLocal_1036[iVar6]))
									{
										PHYSICS::DELETE_ROPE(&(iLocal_1036[iVar6]));
									}
									iVar6++;
								}
								MAP::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								if (__LIB_5__::func_656(1))
								{
									__LIB_8__::func_131(&Local_2160, 4096);
									__LIB_8__::func_131(&Local_2160, 16384);
								}
								else
								{
									__LIB_8__::func_82(Local_2160.f_136, 1024);
								}
								func_103();
								func_104();
								__LIB_7__::func_937();
								func_106(1);
								iVar7 = 0;
								while (iVar7 < 3)
								{
									__LIB_2__::func_480(&(Local_814[iVar7 /*52*/]), 1, 1, 1, 0);
									iVar7++;
								}
								__LIB_2__::func_461(0);
								__LIB_0__::func_172(iLocal_75[1]);
								__LIB_7__::func_938();
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_2505[0]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2505[0], false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[23 /*12*/].f_8))
								{
									ENTITY::DETACH_ENTITY(Local_1157.f_690[23 /*12*/].f_8, false, true);
								}
								__LIB_3__::func_334(&uLocal_2489);
								__LIB_3__::func_334(&uLocal_2516);
								__LIB_3__::func_334(&uLocal_2499);
								__LIB_8__::func_244(Local_2160.f_136, 3);
								__LIB_8__::func_207(&Local_2160);
								iLocal_2650 = 4;
								iVar8 = __LIB_0__::func_55(!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_2160.f_138)), 1, 0);
								if (!__LIB_7__::func_924(&Local_2160, 4096))
								{
									__LIB_2__::func_478(__LIB_2__::func_963(Local_2160.f_138), Global_35, "LOG_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								if (__LIB_7__::func_929(32768))
								{
									iVar9 = joaat("CRIME_THEFT_VEHICLE");
								}
								else if (__LIB_7__::func_939(268435456))
								{
									iVar9 = joaat("CRIME_THEFT_HORSE");
								}
								else
								{
									iVar9 = __LIB_7__::func_940(&Local_2160, Local_2160.f_28);
								}
								__LIB_8__::func_131(&Local_2160, 2);
								func_117();
								if (!__LIB_7__::func_923(1024))
								{
									__LIB_8__::func_277(&Local_2160, __LIB_2__::func_963(Local_2160.f_138), &(uLocal_2499[0]), 0, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0);
								}
								if (!(__LIB_7__::func_923(32) && __LIB_7__::func_923(1024)))
								{
									iLocal_2650 = __LIB_0__::func_55(iLocal_2650 > iVar8, (iLocal_2650 - iVar8), 0);
									iVar8 = func_120(&Local_2160, &iLocal_2479, &uLocal_2489, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar5, iLocal_2650, 0, 0, 0, iVar9, 1051260355 /* Float: 0.33f */);
									iLocal_2650 = __LIB_0__::func_55(iLocal_2650 > iVar8, (iLocal_2650 - iVar8), 0);
								}
								iLocal_2650 = __LIB_0__::func_55(iLocal_2650 > iVar8, (iLocal_2650 - iVar8), 0);
								__LIB_7__::func_927(iLocal_732, &Local_1157);
								iVar8 = func_121(&Local_2160, &uLocal_2320, &uLocal_2351, iLocal_2650, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iLocal_732, iVar5, 0, 0, 0, iVar9, 1051260355 /* Float: 0.33f */);
								iLocal_2650 = __LIB_0__::func_55(iLocal_2650 > iVar8, (iLocal_2650 - iVar8), 0);
								func_33();
								__LIB_8__::func_131(&Local_2160, 128);
							}
						}
						else
						{
							__LIB_8__::func_327(&uLocal_2320, &Local_2160);
							func_123();
							if (__LIB_7__::func_923(1024))
							{
								if (__LIB_18__::func_78(&Local_2160, __LIB_2__::func_963(Local_2160.f_138), &(uLocal_2499[0]), 0))
								{
									if (__LIB_7__::func_923(32))
									{
										if (func_125())
										{
											iVar11 = 0;
											iVar10 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
											iLocal_2650 = __LIB_0__::func_55(iLocal_2650 > iVar11, (iLocal_2650 - iVar11), 0);
											iVar11 = (func_120(&Local_2160, &iLocal_2479, &uLocal_2489, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar10, iLocal_2650, 0, 0, 0, __LIB_7__::func_940(&Local_2160, Local_2160.f_28), 1051260355 /* Float: 0.33f */) + iVar11);
											iLocal_2650 = __LIB_0__::func_55(iLocal_2650 > iVar11, (iLocal_2650 - iVar11), 0);
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
								if (func_127())
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
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[0]))
									{
										if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_2479[0] || PED::_IS_PED_LASSOED(iLocal_2479[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_2479[0], 3))
										{
											__LIB_1__::func_864(iLocal_2479[0], 0, 0);
										}
									}
								}
								else if (!__LIB_0__::func_163(iLocal_2479[0], 518218985) && !TASK::GET_IS_TASK_ACTIVE(iLocal_2479[0], 3))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2479[0], false);
									PED::_0x89F5E7ADECCCB49C(iLocal_2479[0], "INJURED_LEFT_LEG");
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_2479[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
								}
							}
							if (!__LIB_7__::func_924(&Local_2160, 4) && func_130(&Local_2160, &iLocal_2479, &iLocal_2505, &(Local_2160.f_139), 5, __LIB_2__::func_963(Local_2160.f_138)))
							{
								__LIB_8__::func_131(&Local_2160, 4);
							}
						}
						if (!__LIB_7__::func_924(&Local_2160, 2))
						{
							if (__LIB_7__::func_923(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_2479[5]))
							{
								__LIB_8__::func_323(&(uLocal_72[1]), &(iLocal_2479[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, __LIB_7__::func_923(4096), 0, 0);
								if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]))
								{
									PROPSET::_0xD80FAF919A2E56EA(uLocal_72[1], joaat("PG_VEH_LOGWAGON_1"));
									__LIB_7__::func_934(128);
								}
							}
							if (__LIB_7__::func_923(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_2479[4]))
							{
								__LIB_8__::func_323(&(uLocal_72[0]), &(iLocal_2479[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, __LIB_7__::func_923(4096), iLocal_743, 0);
								if (!__LIB_7__::func_933(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
								{
									__LIB_7__::func_934(128);
								}
							}
						}
					}
					if (!__LIB_7__::func_924(&Local_2160, 2))
					{
						if (!__LIB_7__::func_924(&Local_2160, 32))
						{
							__LIB_8__::func_217(&Local_972);
							if (__LIB_8__::func_88(&Local_972, 1))
							{
								func_133(&Local_2160, &Local_972, &(Local_750[2 /*21*/]), &(Local_814[2 /*52*/]));
							}
							else
							{
								__LIB_8__::func_89(&Local_972, 4);
							}
						}
						if (func_135())
						{
							bLocal_2651 = true;
						}
					}
					else if (!__LIB_7__::func_924(&Local_2160, 32))
					{
						func_136();
					}
					break;
			}
		}
		if (func_137())
		{
			bLocal_2651 = true;
		}
		BUILTIN::WAIT(Local_2160.f_30);
	}
}

bool func_20()
{
	if (((__LIB_7__::func_907(Local_2160.f_136, 524288) || __LIB_7__::func_907(Local_2160.f_136, 2097152)) || __LIB_7__::func_907(Local_2160.f_136, 1048576)) || iLocal_98 > 3)
	{
		return true;
	}
	return false;
}

void func_27(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iParam3->f_136 = uParam0;
	iParam3->f_137 = iParam1;
	__LIB_8__::func_131(iParam3, 128);
	__LIB_1__::func_956(iParam1, 1);
	if (bParam5)
	{
		__LIB_4__::func_858(Global_1392194[iParam3->f_136 /*10*/].f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		__LIB_3__::func_378(Global_1392194[iParam3->f_136 /*10*/].f_6, 0);
		__LIB_7__::func_948(Global_1392194[iParam3->f_136 /*10*/].f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		__LIB_7__::func_949(&iVar1, &iVar2, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		func_161(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (__LIB_0__::func_29(iVar3) && !__LIB_0__::func_117(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_162(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_163(iParam1, iVar1, iVar2, 1);
	}
	if (!__LIB_7__::func_924(iParam3, 32))
	{
		PERSCHAR::_0xB173599D61FAEB31();
	}
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
	if (!__LIB_7__::func_908(Local_2160.f_136, 512))
	{
		if (iLocal_98 == 2 && !__LIB_7__::func_907(Local_2160.f_136, 64))
		{
			if (__LIB_7__::func_907(Local_2160.f_136, 128))
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
		if (iLocal_98 == 1 && __LIB_7__::func_907(Local_2160.f_136, 128))
		{
			return true;
		}
	}
	return false;
}

bool func_29()
{
	if (iLocal_98 == 1 && !__LIB_7__::func_908(Local_2160.f_136, 1024))
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
			if (!__LIB_7__::func_924(&Local_2160, 32))
			{
				if (!__LIB_7__::func_924(&Local_2160, 2))
				{
					iLocal_742 = 1480157862;
					iLocal_743 = -1619191432;
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
			if (!__LIB_7__::func_924(&Local_2160, 32))
			{
				if (!__LIB_7__::func_924(&Local_2160, 2))
				{
					iLocal_742 = 1254150069;
					iLocal_743 = 378017637;
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
			if (!__LIB_7__::func_924(&Local_2160, 32))
			{
				if (!__LIB_7__::func_924(&Local_2160, 2))
				{
					if (__LIB_7__::func_923(262144))
					{
						iLocal_742 = 874422897;
						iLocal_743 = 1663347996;
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
						iLocal_742 = 2077381882;
						iLocal_743 = 1663347996;
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
	TASK::_0x9C8F42A5D1859DC1(Global_1392194[Local_2160.f_136 /*10*/].f_5);
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
	if (__LIB_7__::func_924(&Local_2160, 32))
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
			if (iLocal_98 >= 4 || __LIB_7__::func_924(&Local_2160, 32))
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
			if (iLocal_98 >= 4 || __LIB_7__::func_924(&Local_2160, 32))
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
	func_84();
}

void func_36()
{
	if (__LIB_7__::func_924(&Local_2160, 32))
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
	if (__LIB_7__::func_924(&Local_2160, 32) && !(iLocal_98 == 4 && !__LIB_7__::func_923(262144)))
	{
		__LIB_7__::func_950(&Local_1157);
		return 1;
	}
	else
	{
		func_83();
	}
	switch (iLocal_98)
	{
		case 1:
			Local_1157 = 5;
			__LIB_8__::func_174(&Local_1157);
			break;
		case 2:
			Local_1157 = 5;
			__LIB_8__::func_237(&Local_1157);
			iLocal_14 += 2;
			break;
		case 3:
			__LIB_0__::func_11();
			Local_1157 = 5;
			__LIB_8__::func_300(&Local_1157, __LIB_7__::func_908(Local_2160.f_136, 2048));
			break;
		case 4:
		case 5:
			break;
	}
	if (!__LIB_7__::func_924(&Local_2160, 32))
	{
		if (iLocal_98 < 4)
		{
			func_178();
			func_179();
			func_180();
		}
		if (__LIB_7__::func_923(16384))
		{
			Local_1157.f_369[0 /*32*/].f_1 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
			Local_1157.f_369[0 /*32*/] = 28;
			Local_1157.f_369[0 /*32*/].f_6 = { -1403.857f, -226.9338f, 100.4594f };
			Local_1157.f_369[0 /*32*/].f_9 = -83.35f;
		}
	}
	return 1;
}

bool func_38()
{
	if (iLocal_1155 <= 0)
	{
		return false;
	}
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_2160.f_136, 4))
	{
		return true;
	}
	if (!__LIB_2__::func_117(64))
	{
		return false;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !__LIB_7__::func_907(Local_2160.f_136, 128)))
	{
		return false;
	}
	return true;
}

void func_44()
{
	int iVar0;
	int iVar1;
	switch (iLocal_731)
	{
		case 0:
			func_200();
			if (__LIB_7__::func_923(128))
			{
				__LIB_0__::func_769();
			}
			if (__LIB_7__::func_929(32))
			{
				Global_1914319.f_3[11 /*446*/].f_35 = { Local_398 };
			}
			if (__LIB_7__::func_924(&Local_2160, 16384))
			{
				if (!__LIB_7__::func_924(&Local_2160, 32768))
				{
					__LIB_8__::func_176(Local_2160.f_136);
				}
				else
				{
					__LIB_8__::func_82(Local_2160.f_136, 1024);
				}
			}
			if (__LIB_7__::func_907(Local_2160.f_136, 128))
			{
				iVar0 = __LIB_2__::func_963(Local_2160.f_138);
				__LIB_7__::func_951(&iVar0);
			}
			__LIB_8__::func_206(&Local_972, &Local_2160, 0);
			__LIB_8__::func_93(Local_2160.f_136, 1073741824 /* Float: 2f */);
			__LIB_8__::func_93(Local_2160.f_136, 536870912);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			break;
		case 1:
			if (__LIB_0__::func_6(iLocal_154) && !((__LIB_1__::func_241(iLocal_154) || __LIB_1__::func_25(iLocal_154, 1)) || __LIB_8__::func_125(iLocal_154)))
			{
				__LIB_1__::func_559(iLocal_154, 0, 2);
			}
			if ((__LIB_7__::func_908(Local_2160.f_136, 16384) && ENTITY::DOES_ENTITY_EXIST(iLocal_2502[0])) && (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_IN_VEHICLE(Global_35, iLocal_2502[0], false)))
			{
				__LIB_8__::func_83(Local_2160.f_136, 16384);
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
			func_210();
			func_211(1);
			func_212(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[5]) && !__LIB_1__::func_205(iLocal_2479[5], Global_1392194[Local_2160.f_136 /*10*/].f_5, 1, 0))
			{
				uLocal_2579[0] = iLocal_2479[5];
			}
			VEHICLE::_0x8379E05871AD24E0();
			if (__LIB_7__::func_908(Local_2160.f_136, 256) && !__LIB_7__::func_908(Local_2160.f_136, 32))
			{
				__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
			}
			if (__LIB_7__::func_923(32))
			{
				__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
			}
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (PHYSICS::DOES_ROPE_EXIST(iLocal_1036[iVar1]))
				{
					PHYSICS::DELETE_ROPE(&(iLocal_1036[iVar1]));
				}
				iVar1++;
			}
			break;
		case 3:
			__LIB_7__::func_937();
			__LIB_2__::func_919(Local_1157.f_690[2 /*12*/].f_8, 1, 1);
			__LIB_2__::func_919(Local_1157.f_690[14 /*12*/].f_8, 1, 1);
			__LIB_2__::func_919(Local_1157.f_690[23 /*12*/].f_8, 1, 1);
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[Local_2160.f_136 /*10*/].f_5))
			{
				iVar1 = 0;
				while (iVar1 < iLocal_2479)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[iVar1]))
					{
						if (__LIB_1__::func_205(iLocal_2479[iVar1], Global_1392194[Local_2160.f_136 /*10*/].f_5, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2479[iVar1]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2479[iVar1], true, false);
							}
							PED::DELETE_PED(&(iLocal_2479[iVar1]));
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2479[iVar1], false);
							PED::SET_PED_KEEP_TASK(iLocal_2479[iVar1], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2479[iVar1]));
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
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1039[iVar1 /*7*/]))
				{
					__LIB_7__::func_952(&(Local_1039[iVar1 /*7*/]));
				}
				iVar1++;
			}
			break;
		case 4:
			__LIB_8__::func_258();
			func_106(1);
			__LIB_7__::func_919();
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[Local_2160.f_136 /*10*/].f_5))
			{
				if (!__LIB_7__::func_924(&Local_2160, 4) && !__LIB_7__::func_924(&Local_2160, 32))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[0]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[0], Global_1392194[Local_2160.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[0]));
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[1]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[1], Global_1392194[Local_2160.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[1]));
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2502[iVar1]))
					{
						if (iVar1 == 1)
						{
							VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_2502[iVar1]));
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_2502[iVar1], Global_1392194[Local_2160.f_136 /*10*/].f_5, true, 0))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2502[iVar1]));
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			__LIB_8__::func_82(Local_2160.f_136, 1073741824 /* Float: 2f */);
			func_217(Local_2160.f_136, &Local_1157, &Local_2160);
			__LIB_8__::func_229(&Local_1157);
			HUD::_TEXT_DATABASE_DELETE(__LIB_7__::func_953());
			HUD::_TEXT_DATABASE_DELETE(__LIB_7__::func_954());
			break;
		default:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	iLocal_731++;
}

void func_46()
{
	__LIB_8__::func_168(65536, __LIB_1__::func_205(Global_35, Global_1392194[Local_2160.f_136 /*10*/].f_6, 1, 0));
}

bool func_49()
{
	if (__LIB_1__::func_313(&(vLocal_1117[4 /*3*/]), 30f))
	{
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	switch (iLocal_2649)
	{
		case 0:
			__LIB_3__::func_284(&(Local_1157.f_15));
			__LIB_3__::func_284(&(Local_1157.f_369));
			__LIB_3__::func_187(&(Local_15[0 /*28*/].f_11));
			__LIB_3__::func_187(&(Local_15[1 /*28*/].f_11));
			if (__LIB_7__::func_923(128) && iLocal_98 == 3)
			{
				__LIB_3__::func_284(&(Local_1157.f_369));
			}
			func_226();
			func_227();
			__LIB_3__::func_314(&(Local_1157.f_690));
			func_229();
			__LIB_3__::func_284(&(Local_1157.f_304));
			func_230();
			HUD::_TEXT_DATABASE_REQUEST(__LIB_7__::func_953());
			HUD::_TEXT_DATABASE_REQUEST(__LIB_7__::func_954());
			if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
			{
				__LIB_8__::func_177();
			}
			iLocal_2649 = 1;
			break;
		case 1:
			if (!func_52())
			{
			}
			if (!__LIB_8__::func_86())
			{
			}
			if (!__LIB_0__::func_0())
			{
			}
			if (!func_232())
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

bool func_52()
{
	if (!__LIB_3__::func_366(&(Local_1157.f_15)) || !__LIB_3__::func_366(&(Local_1157.f_369)))
	{
		return false;
	}
	if (!__LIB_3__::func_366(&(Local_1157.f_304)))
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
		iParam3 = Local_1157.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (PED::_0x5C16855277819BBF() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if (Local_1157.f_369[*iParam1 /*32*/].f_1 != 0)
			{
				if (iLocal_98 != 3 || __LIB_7__::func_923(262144))
				{
					iLocal_2505[*iParam1] = __LIB_3__::func_403(Local_1157.f_369[*iParam1 /*32*/].f_1, &(Local_1157.f_369[*iParam1 /*32*/]), Local_1157.f_369[*iParam1 /*32*/].f_6, Local_1157.f_369[*iParam1 /*32*/].f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					DECORATOR::DECOR_SET_BOOL(iLocal_2505[*iParam1], "bNoticePlayer", false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2505[*iParam1], true);
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
	if (!__LIB_3__::func_315(&uLocal_2414))
	{
		return false;
	}
	if (!func_256())
	{
		return false;
	}
	return true;
}

bool func_73()
{
	if (__LIB_7__::func_923(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (__LIB_7__::func_908(Local_2160.f_136, 256) && !__LIB_7__::func_907(Local_2160.f_136, 128))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_74()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_963(Local_2160.f_138);
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
			if (!__LIB_7__::func_907(Local_2160.f_136, 128))
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
			if (!__LIB_7__::func_907(Local_2160.f_136, 128))
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
			if (!__LIB_7__::func_907(Local_2160.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (__LIB_7__::func_908(Local_2160.f_136, 256) || __LIB_7__::func_908(Local_2160.f_136, 262144))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, __LIB_7__::func_958(), 1.5f, 0, false, false, false, false);
					}
					else
					{
						func_262(iVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, 1073741824 /* Float: 2f */);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_2160.f_138)))
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
	if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_2160.f_136, 128))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[0]))
		{
			func_268(iLocal_2479[0], __LIB_3__::func_672(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_2479[0], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2479[0], 146, false);
			__LIB_2__::func_133(iLocal_2479[0], __LIB_7__::func_959(Local_2160.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_2479[0], "HAS_VOICE", true);
			__LIB_2__::func_56(iLocal_2479[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[1]))
		{
			func_268(iLocal_2479[1], __LIB_3__::func_672(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_2479[1], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2479[1], 146, false);
			__LIB_2__::func_133(iLocal_2479[1], __LIB_7__::func_959(Local_2160.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_2479[1], "HAS_VOICE", true);
			__LIB_2__::func_56(iLocal_2479[1], 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2479[2]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2479[2], 1);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_2479[2], true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2479[3]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2479[3], 1);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_2479[3], true);
		}
	}
	else
	{
		if (__LIB_7__::func_923(64))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1388.626f, -234.6199f, 98.7432f, 1f, -1, 0.25f, 0, 9.6661f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1398.8f, -214.8f, 101.4f, 1f, -1, 0.25f, 0, 15.6f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1400.4f, -209.6f, 102f, 1f, -1, 0.25f, 0, 148.8f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -1400.871f, -210.4877f, 101.0936f, 2f, -1, false, false, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_2479[0], iLocal_735);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
				PED::SET_PED_CONFIG_FLAG(iLocal_2479[0], 146, false);
				__LIB_2__::func_56(iLocal_2479[0], 1, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[0]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2479[0], func_270(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2479[0], 146, false);
			__LIB_2__::func_56(iLocal_2479[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[1]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2479[1], func_270(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2479[1], 146, false);
			__LIB_2__::func_56(iLocal_2479[1], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[2]))
		{
			if (!__LIB_7__::func_923(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2479[2], func_270(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_2479[2], 146, false);
				__LIB_2__::func_56(iLocal_2479[2], 1, 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[3]))
		{
			if (!__LIB_7__::func_923(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2479[3], func_270(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_2479[3], 146, false);
				__LIB_2__::func_56(iLocal_2479[3], 1, 1);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[4]))
	{
		__LIB_2__::func_56(iLocal_2479[4], 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[5]))
	{
		__LIB_2__::func_56(iLocal_2479[5], 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < Local_1157)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_2479[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_2479[iVar0], 7, 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1157.f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2505[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_2505[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_2505[iVar0], 7, 0, 1);
		}
		iVar0++;
	}
	__LIB_1__::func_148(&(vLocal_1117[0 /*3*/]));
	return 1;
}

void func_83()
{
	bool bVar0;
	char* sVar1[4];
	int iVar6[4];
	int iVar11;
	Local_2544.f_24 = 0;
	Local_2544.f_23 = 0;
	Local_2544.f_17 = 0;
	__LIB_1__::func_336(&(Local_2544.f_34), 1);
	if (!__LIB_7__::func_923(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((__LIB_7__::func_923(128) && !__LIB_7__::func_923(2)) && !__LIB_7__::func_907(Local_2160.f_136, 4))
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
				if (__LIB_7__::func_924(&Local_2160, 256))
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
				if (__LIB_7__::func_907(Local_2160.f_136, 64))
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
					if (__LIB_7__::func_924(&Local_2160, 256))
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
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					if (__LIB_7__::func_908(Local_2160.f_136, 8))
					{
						if (__LIB_1__::func_149(1) > 0)
						{
							sVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01CH";
						}
						if (__LIB_7__::func_924(&Local_2160, 256))
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
					else if (__LIB_7__::func_908(Local_2160.f_136, 32))
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
					else if (__LIB_7__::func_908(Local_2160.f_136, 256))
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
						if (__LIB_7__::func_924(&Local_2160, 256))
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
				else if (__LIB_7__::func_908(Local_2160.f_136, 8))
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
	Local_2544.f_33 = 15f;
	__LIB_8__::func_95(&sVar1, &iVar6, &Local_2544, bVar0);
}

void func_84()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	if (__LIB_7__::func_924(&Local_2160, 256))
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
	iVar2 = Local_2160.f_138;
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)) && !MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(__LIB_0__::func_118(iVar2)), sVar0))
	{
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(iVar2), sVar1);
	}
}

int func_93()
{
	int iVar0;
	int iVar1;
	if (__LIB_7__::func_929(16384))
	{
		return 0;
	}
	iVar0 = iLocal_748;
	if (((__LIB_8__::func_88(&Local_972, 2) || func_284(&Local_2160, &(Local_2160.f_28))) || func_285()) || __LIB_8__::func_259(__LIB_2__::func_963(Local_2160.f_138), 0, &Local_2160, &(Local_2160.f_28), 0, 0))
	{
		if (__LIB_8__::func_88(&Local_972, 2))
		{
		}
		else if (Local_2160.f_28 == 65536)
		{
			__LIB_2__::func_571(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		else if (Local_2160.f_28 == 32)
		{
			return func_288();
		}
		else if (Local_2160.f_28 == 8192 && __LIB_8__::func_230())
		{
			__LIB_2__::func_571(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		if (__LIB_7__::func_960(&(Local_2160.f_28)) && !__LIB_7__::func_933(67108864))
		{
			if (!__LIB_8__::func_88(&Local_972, 1))
			{
				Local_972 = __LIB_2__::func_963(Local_2160.f_138);
				func_292(&Local_972, &Local_2160, Local_2160.f_28, 54329, 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_182(&Local_972, 0)))
				{
					StringCopy(&(Local_972.f_20[0 /*4*/]), __LIB_8__::func_182(&Local_972, 0), 32);
					StringCopy(&(Local_972.f_20[1 /*4*/]), __LIB_8__::func_182(&Local_972, 1), 32);
					__LIB_7__::func_961(&Local_972, 32);
				}
			}
			else if (Local_972.f_13 > 2)
			{
				__LIB_7__::func_961(&Local_972, 512);
			}
			__LIB_2__::func_571(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		return 1;
	}
	else if ((__LIB_8__::func_324(&uLocal_2320, &Local_2160, &(Local_2160.f_28), &iLocal_748, 0, (iLocal_732 - 1), 4) || __LIB_8__::func_324(&iLocal_2479, &Local_2160, &(Local_2160.f_28), &uLocal_746, 0, (Local_1157 - 1), 1)) || __LIB_8__::func_324(&iLocal_2505, &Local_2160, &(Local_2160.f_28), &uLocal_747, 0, __LIB_0__::func_55(__LIB_7__::func_923(16384), Local_1157.f_1 + 1, (Local_1157.f_1 - 1)), 1))
	{
		if (__LIB_7__::func_933(131072))
		{
			if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_2479[0] || PED::_IS_PED_LASSOED(iLocal_2479[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_2479[0], 3))
			{
				__LIB_1__::func_864(iLocal_2479[0], 0, 0);
			}
		}
		if (__LIB_7__::func_960(&(Local_2160.f_28)))
		{
			if (Local_2160.f_28 == 8192 && __LIB_8__::func_230())
			{
				return 0;
			}
			if (!__LIB_8__::func_88(&Local_972, 1) && !__LIB_7__::func_923(32))
			{
				if (Local_2160.f_28 == 8 && func_295())
				{
					return 1;
				}
				if (__LIB_7__::func_923(64) && Local_2160.f_10 == iLocal_2479[0])
				{
					if (Local_2160.f_28 != 65536)
					{
						func_292(&Local_972, &Local_2160, Local_2160.f_28, 54329, 0, 0);
						__LIB_7__::func_961(&Local_972, 64);
						StringCopy(&(Local_972.f_20[0 /*4*/]), "LCMPF_IG_TFAIM", 32);
						__LIB_7__::func_961(&Local_972, 32);
					}
				}
				else
				{
					func_292(&Local_972, &Local_2160, Local_2160.f_28, 54329, 0, 0);
				}
			}
			__LIB_2__::func_571(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		else if (Local_2160.f_28 == 32)
		{
			return func_288();
		}
		return 1;
	}
	else if (func_296(&Local_2160, &Local_972, 54329))
	{
		if (!__LIB_8__::func_88(&Local_972, 1))
		{
			func_292(&Local_972, &Local_2160, 1024, 54329, 0, 0);
			if (Local_972 == __LIB_2__::func_963(Local_2160.f_138) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_182(&Local_972, 0)))
			{
				StringCopy(&(Local_972.f_20[0 /*4*/]), __LIB_8__::func_182(&Local_972, 0), 32);
				StringCopy(&(Local_972.f_20[1 /*4*/]), __LIB_8__::func_182(&Local_972, 1), 32);
				__LIB_7__::func_961(&Local_972, 32);
			}
			__LIB_2__::func_571(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		else
		{
			__LIB_7__::func_961(&Local_972, 512);
		}
	}
	else if (func_297())
	{
		Local_2160.f_28 = 2;
		return 1;
	}
	iVar1 = __LIB_0__::func_259(iVar0 + 4, (iLocal_732 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (uLocal_2382[iVar0] < Local_2160.f_19 && __LIB_7__::func_962(uLocal_2320[iVar0], &Local_2160, 0, uLocal_2382[iVar0]))
		{
			__LIB_1__::func_148(&(vLocal_1117[6 /*3*/]));
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (__LIB_1__::func_313(&(vLocal_1117[6 /*3*/]), 10f))
	{
		__LIB_7__::func_898(&Local_2160, &(Local_2160.f_28));
	}
	return 0;
}

void func_103()
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
				if (__LIB_7__::func_923(262144) && !func_324())
				{
					__LIB_7__::func_952(&(Local_1039[iVar0 /*7*/]));
				}
				break;
			case 6:
				if (__LIB_7__::func_963(&(Local_1039[6 /*7*/])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[14 /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(Local_1157.f_690[14 /*12*/].f_8);
					__LIB_8__::func_183(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "PED1");
					__LIB_8__::func_183(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), "PED2");
					__LIB_7__::func_952(&(Local_1039[6 /*7*/]));
				}
				break;
			default:
				__LIB_7__::func_952(&(Local_1039[iVar0 /*7*/]));
				break;
		}
		iVar0++;
	}
}

void func_104()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2505[0]))
	{
		func_328(&(iLocal_2505[0]));
		PED::SET_PED_CONFIG_FLAG(iLocal_2505[0], 136, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_2505[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
}

void func_106(bool bParam0)
{
	if (__LIB_7__::func_933(512) || bParam0)
	{
		if (__LIB_2__::func_1(iLocal_1156, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1156, 136, false);
			__LIB_2__::func_145(iLocal_1156, 0);
		}
		__LIB_7__::func_965(512);
	}
}

void func_117()
{
	if (__LIB_7__::func_923(64))
	{
		func_338();
	}
	func_339(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && __LIB_7__::func_923(262144)))
	{
		__LIB_7__::func_908(1, 2);
		func_340();
	}
	if (iLocal_98 == 3)
	{
		func_341();
	}
}

int func_120(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
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
				iVar3 = func_352((*iParam1)[iVar2], 0);
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

int func_121(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
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
		func_161(iParam0->f_137, &iVar4, &iVar5, 1, 0);
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
				PED::_0xFC3DB99C8144CD81(iVar6, Global_1392194[iParam0->f_136 /*10*/].f_5, 0, 0, 0);
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

void func_123()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_744)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_2160.f_140[iVar0]) && !__LIB_0__::func_163(Local_2160.f_140[iVar0], 518218985)) && !TASK::GET_IS_TASK_ACTIVE(Local_2160.f_140[iVar0], 3))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_2160.f_140[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar0++;
	}
}

bool func_125()
{
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1039[2 /*7*/]) || __LIB_7__::func_972(&(Local_1039[2 /*7*/]))) || __LIB_7__::func_973(&(Local_1039[2 /*7*/]), "COWER_R_LOOP")) || __LIB_7__::func_973(&(Local_1039[2 /*7*/]), "COWER_L_LOOP"))
	{
		return true;
	}
	return false;
}

bool func_127()
{
	float fVar0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_1014[0]))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(Local_1157.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_1157.f_690[24 /*12*/].f_8, true);
		}
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_1157.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_1157.f_690[24 /*12*/].f_8, true, false);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(Local_1157.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_1014[0]);
		if (fVar0 > 0.9625f || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[0]) == 10)
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_1157.f_690[24 /*12*/].f_8, true);
			ENTITY::SET_ENTITY_COLLISION(Local_1157.f_690[24 /*12*/].f_8, true, false);
			__LIB_0__::func_401(991016631);
		}
	}
	else if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_1157.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_1014[0]);
		if (fVar0 > 0.997f)
		{
			ENTITY::SET_ENTITY_COLLISION(Local_1157.f_690[24 /*12*/].f_8, true, false);
			__LIB_0__::func_400(joaat("DES_TREEFALL_ACCIDENT"));
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_130(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam0->f_136 == 1)
	{
		__LIB_7__::func_949(&iVar1, &iVar2, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		func_161(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!__LIB_0__::func_29(iVar0))
		{
		}
		else if (__LIB_0__::func_117(iVar0, 32))
		{
		}
		else
		{
			iVar3 = __LIB_2__::func_963(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
			}
			else if (!DECORATOR::DECOR_EXIST_ON(iVar3, "bPedAlreadyCounted"))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					if (__LIB_1__::func_333(iParam0, iVar3))
					{
						DECORATOR::DECOR_SET_BOOL(iVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!__LIB_7__::func_924(iParam0, 32768))
						{
							__LIB_8__::func_131(iParam0, 32768);
						}
					}
				}
				else if (!__LIB_7__::func_924(iParam0, 32768))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar3, Global_35, 1, 1))
					{
						__LIB_8__::func_131(iParam0, 32768);
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && !DECORATOR::DECOR_EXIST_ON(iParam5, "bPedAlreadyCounted"))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_1__::func_333(iParam0, iParam5))
			{
				DECORATOR::DECOR_SET_BOOL(iParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!__LIB_7__::func_924(iParam0, 32768))
				{
					__LIB_8__::func_131(iParam0, 32768);
				}
			}
		}
		else if (!__LIB_7__::func_924(iParam0, 32768))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam5, Global_35, 1, 1))
			{
				__LIB_8__::func_131(iParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar4]))
			{
				if (__LIB_1__::func_333(iParam0, (*iParam1)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*iParam1)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!__LIB_7__::func_924(iParam0, 32768))
					{
						__LIB_8__::func_131(iParam0, 32768);
					}
				}
			}
			else if (!__LIB_7__::func_924(iParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam1)[iVar4], Global_35, 1, 1))
				{
					__LIB_8__::func_131(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *iParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam2)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*iParam2)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*iParam2)[iVar4]))
			{
				if (__LIB_1__::func_333(iParam0, (*iParam2)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*iParam2)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!__LIB_7__::func_924(iParam0, 32768))
					{
						__LIB_8__::func_131(iParam0, 32768);
					}
				}
			}
			else if (!__LIB_7__::func_924(iParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam2)[iVar4], Global_35, 1, 1))
				{
					__LIB_8__::func_131(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	if (*uParam3 >= iParam4)
	{
		return true;
	}
	return false;
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
		func_371(iParam1, iParam2, uParam3, 0);
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
			iParam1->f_5 = func_352(*iParam1, 0);
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
	if (__LIB_7__::func_924(&Local_2160, 32))
	{
		if (iLocal_98 == 3 && !__LIB_7__::func_908(Local_2160.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_1157.f_1)
			{
				__LIB_1__::func_976(&iVar0);
				iVar0++;
			}
		}
		return 0;
	}
	__LIB_7__::func_977(&uLocal_734, 2);
	if (__LIB_7__::func_923(8192))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar3 = __LIB_0__::func_27(iLocal_1155, __LIB_0__::func_771(iVar1));
			if (bVar3)
			{
				func_391(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!__LIB_7__::func_939(512))
	{
		func_392();
		func_393();
	}
	if (!__LIB_7__::func_929(67108864))
	{
		func_394(0);
		func_395(0, 1, 1);
		__LIB_7__::func_932(67108864);
	}
	iVar4 = __LIB_2__::func_963(Local_2160.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar4))
	{
		if (iVar4 != iLocal_155)
		{
			iLocal_155 = iVar4;
			__LIB_2__::func_451(&(Local_750[0 /*21*/]), 0);
		}
		__LIB_0__::func_928(&(Local_2160.f_35), iVar4, "EA_LCMP_Foreman", 0);
		func_396(&iVar4);
		PED::SET_PED_RESET_FLAG(iVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && __LIB_7__::func_907(Local_2160.f_136, 128)))
	{
		func_397(&iVar4);
	}
	if (iLocal_98 < 4)
	{
		__LIB_0__::func_11();
	}
	__LIB_0__::func_11();
	func_400(&iVar4);
	if (!__LIB_7__::func_923(128))
	{
		if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_2160.f_136, 128))
		{
			__LIB_0__::func_11();
		}
		func_402();
		return 0;
	}
	func_403();
	if (__LIB_7__::func_923(16384))
	{
		func_404(&(iLocal_2505[0]));
	}
	if (!__LIB_7__::func_923(16) && !__LIB_7__::func_923(64))
	{
		bVar5 = __LIB_7__::func_923(1);
		__LIB_7__::func_979(iVar4, &(uLocal_2499[0]), &Local_2160, __LIB_7__::func_923(262144), &bVar5, 1, __LIB_7__::func_978());
		__LIB_8__::func_167(1, bVar5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2502[0]) && !PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_2502[0]))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_2502[0], joaat("PG_VEH_LOGWAGON_1"));
	}
	__LIB_8__::func_187();
	if (__LIB_7__::func_923(64) && !__LIB_7__::func_923(4))
	{
		__LIB_8__::func_167(4, func_408(&iVar4, &(iLocal_2479[0])));
		return 0;
	}
	if (__LIB_7__::func_923(64) && __LIB_7__::func_923(4))
	{
		func_409(&iVar4);
		func_410(&(iLocal_2479[0]));
	}
	if (iLocal_98 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2502[0]) && !ENTITY::_IS_ENTITY_FROZEN(iLocal_2502[0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2502[0], Local_1157.f_304[0 /*32*/].f_6, true, false, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2502[0], true);
			AITRANSPORT::_0xBA8818212633500A(iLocal_2502[0], 0, 1);
		}
	}
	if (!__LIB_7__::func_923(32))
	{
		if (__LIB_7__::func_923(262144))
		{
			Local_2544.f_2[0] = "LOG_WRK02";
			if (!__LIB_7__::func_923(16))
			{
				switch (iLocal_98)
				{
					case 2:
					case 3:
						if (!__LIB_7__::func_923(-2147483648) && __LIB_7__::func_908(1, 2))
						{
							return func_411(&iVar4);
						}
						else
						{
							return func_412(&iVar4);
						}
						break;
					default:
						return func_412(&iVar4);
				}
			}
			else
			{
				return func_413(&iVar4);
			}
		}
		else
		{
			switch (iLocal_98)
			{
				case 1:
					if (!__LIB_7__::func_923(16))
					{
						return func_414(&iVar4);
					}
					else
					{
						return func_413(&iVar4);
					}
					break;
				case 2:
					if (!__LIB_7__::func_923(16))
					{
						if (!__LIB_7__::func_923(-2147483648) && __LIB_7__::func_908(1, 2))
						{
							return func_411(&iVar4);
						}
						else
						{
							return func_412(&iVar4);
						}
					}
					else
					{
						return func_413(&iVar4);
					}
					break;
				case 3:
					func_415(&(iLocal_2479[0]), 0);
					func_415(&(iLocal_2479[1]), 1);
					__LIB_1__::func_976();
					__LIB_1__::func_976();
					if (__LIB_7__::func_908(Local_2160.f_136, 256) || __LIB_0__::func_58(&iVar4))
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
	func_420();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_8__::func_139(iVar0) && !__LIB_8__::func_140(iVar0))
		{
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_1014[iVar0]))
			{
				if (!(iVar0 == 0 && __LIB_7__::func_923(512)))
				{
				}
			}
			else
			{
				fVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_1014[iVar0]);
				if (fVar1 >= (__LIB_8__::func_141(iVar0) - 0.007544f) && fVar1 <= __LIB_8__::func_142(iVar0))
				{
					func_425();
				}
				switch (iLocal_1153)
				{
					case 0:
						if (fVar1 >= __LIB_8__::func_141(iVar0) && fVar1 < __LIB_8__::func_142(iVar0))
						{
							PAD::SET_PAD_SHAKE(0, 400, __LIB_8__::func_238(iVar0));
							func_427(iVar0);
							AUDIO::_0x017492B2201E3428("SHOCKWAVE_TREE_FALL", __LIB_8__::func_143(iVar0));
							iVar2 = PED::_GET_LAST_MOUNT(Global_35);
							if (!ENTITY::IS_ENTITY_DEAD(iVar2) && __LIB_0__::func_94(iVar2, __LIB_8__::func_144(iVar0), 1) < 10f)
							{
								PED::_0xBAE08F00021BFFB2(iVar2, __LIB_1__::func_985());
							}
							iLocal_1153 = 1;
						}
						break;
					case 1:
						if (fVar1 >= __LIB_8__::func_142(iVar0))
						{
							EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), __LIB_8__::func_143(iVar0), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
							__LIB_7__::func_932(8192);
							PAD::SET_PAD_SHAKE(0, 300, (__LIB_8__::func_238(iVar0) / 2));
							iLocal_1153 = 2;
						}
						break;
					case 2:
						__LIB_0__::func_172(iLocal_75[2]);
						__LIB_0__::func_172(iLocal_75[3]);
						iLocal_1153 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_137()
{
	if (__LIB_7__::func_924(&Local_2160, 1024))
	{
		return true;
	}
	if (bLocal_2651)
	{
		return true;
	}
	if (iLocal_2648 == 1)
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
	if (__LIB_8__::func_97(bLocal_2651))
	{
		return true;
	}
	return false;
}

bool func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_2() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 935
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 977
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1005
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1033
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1061
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1089
			*iParam1 = 731;
			*iParam2 = 732;
			Jump @1704; //curOff = 1104
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1132
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1160
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1188
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1216
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1244
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1272
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1300
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1328
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1356
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			Jump @1704; //curOff = 1382
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1410
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1438
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1466
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1494
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1522
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1550
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1578
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1606
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1634
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1662
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1690
			*iParam1 = -1;
			*iParam2 = -1;
			if (*iParam1 == -1 || *iParam2 == -1)
			{
				return false;
			}
			return true;
		}
int func_162(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iParam0));
	return 1;
}

int func_163(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return 1;
	}
	if (!__LIB_0__::func_20(iParam0))
	{
		return 1;
	}
	if (__LIB_0__::func_21(iParam0, 16))
	{
		return 1;
	}
	if (__LIB_0__::func_730(iParam0) && !__LIB_1__::func_928(iParam0))
	{
	}
	if (func_161(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (__LIB_0__::func_29(iParam1))
		{
			iVar0 = iParam1;
		}
		if (__LIB_0__::func_29(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!__LIB_0__::func_730(iParam0) || __LIB_1__::func_928(iParam0)) || __LIB_1__::func_903(Global_1897950))
			{
				__LIB_1__::func_940(Global_1897950, 0);
			}
			Global_1897950++;
			iVar2++;
			if (Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_178()
{
	int iVar0;
	if (!iLocal_98 == 3 || __LIB_7__::func_907(Local_2160.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_7__::func_908(Local_2160.f_136, 512) && iLocal_98 == 2) && iVar0 == 0)
			{
				func_457(iVar0);
			}
			if (__LIB_7__::func_923(64) && iVar0 == 0)
			{
				Jump @118; //curOff = 96
			}
			else if (!func_458(iVar0))
			{
				func_459(&iVar0);
			}
			iVar0++;
		}
	}
}

void func_179()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_460(iVar0);
		iVar0++;
	}
}

void func_180()
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
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_2160.f_136, 4))
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
		__LIB_1__::func_336(&iLocal_1155, __LIB_0__::func_771(iVar3));
		iVar3 += 2;
	}
}

void func_200()
{
	int iVar0;
	if (__LIB_7__::func_939(512))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::_0x1FF441D7954F8709(uLocal_1020[iVar0]))
		{
			ENTITY::_0xD2B9C78537ED5759(uLocal_1020[iVar0]);
		}
		iVar0++;
	}
}

void func_210()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_7__::func_910(__LIB_8__::func_143(iVar0), 0);
		iLocal_1014[iVar0] = 0;
		iVar0++;
	}
}

void func_211(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_466(iVar0, bParam0);
		iVar0++;
	}
}

void func_212(bool bParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 5, !bParam0);
	__LIB_3__::func_386(&Local_2160, bParam0);
	__LIB_3__::func_393(&Local_2160, bParam0);
}

void func_217(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_8__::func_131(iParam2, 128);
	__LIB_8__::func_170(iParam0, 0);
	__LIB_1__::func_956(iParam2->f_137, 0);
	__LIB_7__::func_983(iParam2);
	__LIB_8__::func_85(iParam0, 2048);
	__LIB_8__::func_132(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		__LIB_7__::func_949(&uVar0, &iVar1, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		func_161(iParam2->f_137, &uVar0, &iVar1, 0, 0);
	}
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		PED::SET_PED_KEEP_TASK(__LIB_2__::func_963(iVar2), true);
		iVar2++;
	}
	Global_1898092.f_26.f_7 = uVar0;
	Global_1898092.f_26.f_8 = iParam2->f_29;
	Global_1898092.f_26.f_2 = iParam2->f_136;
	Global_1898092.f_26.f_1 = iParam2->f_137;
	__LIB_7__::func_894(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_690[iVar3 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(uParam1->f_690[iVar3 /*12*/].f_8));
		}
		iVar3++;
	}
	if (__LIB_0__::func_139(iParam2->f_32))
	{
		__LIB_1__::func_748(&(iParam2->f_32), 1, 1);
	}
	if (__LIB_0__::func_139(iParam2->f_33))
	{
		__LIB_1__::func_748(&(iParam2->f_33), 1, 1);
	}
	if (__LIB_0__::func_139(iParam2->f_34))
	{
		__LIB_1__::func_748(&(iParam2->f_34), 1, 1);
	}
	if ((*uParam1 + uParam1->f_1) > 0)
	{
		PED::_0x7D4E70A67A651C71((*uParam1 + uParam1->f_1));
	}
	if (__LIB_0__::func_27(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 1))
	{
		__LIB_8__::func_85(iParam2->f_136, 4194304);
	}
	__LIB_1__::func_539();
	if (__LIB_7__::func_924(iParam2, 65536))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		MAP::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
}

void func_226()
{
	int iVar0;
	if (__LIB_7__::func_923(8192))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_8__::func_188(&(Local_1039[(9 + iVar0) /*7*/]), "script@proc@eventareas@appleseed@Tree_Saw", func_474(9), 0);
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(16384))
	{
		__LIB_8__::func_188(&(Local_1039[6 /*7*/]), "script@proc@eventareas@appleseed@Log_Drag", func_474(6), 0);
	}
	if (__LIB_7__::func_923(256))
	{
		__LIB_8__::func_188(&(Local_1039[7 /*7*/]), "script@proc@eventareas@appleseed@Boom_Operator", func_474(7), 0);
		__LIB_8__::func_188(&(Local_1039[8 /*7*/]), "script@proc@eventareas@appleseed@Boom_Spotter", func_474(8), 0);
	}
	if (__LIB_7__::func_923(64))
	{
		__LIB_8__::func_188(&(Local_1039[2 /*7*/]), "script@proc@eventareas@appleseed@Tree_Fall", func_474(2), 0);
		__LIB_8__::func_188(&(Local_1039[3 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_A", func_474(3), 0);
		__LIB_8__::func_188(&(Local_1039[4 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_B", func_474(4), 0);
	}
	if (__LIB_7__::func_923(262144))
	{
		if (__LIB_7__::func_923(16))
		{
			func_476();
		}
		else if (__LIB_7__::func_908(1, 2) && !__LIB_7__::func_908(Local_2160.f_136, 16384))
		{
			__LIB_8__::func_188(&(Local_1039[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_474(0), 0);
			__LIB_8__::func_188(&(Local_1039[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_474(5), 0);
		}
		else
		{
			func_476();
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				if (__LIB_7__::func_923(16))
				{
					func_476();
				}
				else
				{
					__LIB_8__::func_188(&(Local_1039[5 /*7*/]), "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", func_474(5), 0);
					__LIB_8__::func_188(&(Local_1039[0 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_474(0), 0);
					__LIB_8__::func_188(&(Local_1039[1 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_474(1), 0);
				}
				break;
			case 2:
				if (__LIB_7__::func_923(16))
				{
					func_476();
				}
				else if (__LIB_7__::func_908(1, 2) && !__LIB_7__::func_908(Local_2160.f_136, 16384))
				{
					__LIB_8__::func_188(&(Local_1039[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_474(0), 0);
					__LIB_8__::func_188(&(Local_1039[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_474(5), 0);
				}
				else
				{
					func_476();
				}
				break;
			case 3:
				__LIB_8__::func_188(&(Local_1039[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Orders", func_474(0), 0);
				__LIB_8__::func_188(&(Local_1039[1 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", func_474(1), 0);
				__LIB_8__::func_188(&(Local_1039[2 /*7*/]), "script@proc@eventareas@appleseed@Player_Grab_Money", func_474(2), 0);
				__LIB_8__::func_188(&(Local_1039[3 /*7*/]), "script@proc@eventareas@appleseed@Worker_Convo", func_474(3), 0);
				break;
		}
	}
}

void func_227()
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
			Local_1157.f_690[7 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_1157.f_690[7 /*12*/].f_7 = 0;
		}
		Local_1157.f_690[7 /*12*/] = { __LIB_7__::func_984() };
		Local_1157.f_690[7 /*12*/].f_3 = 89f;
		Local_1157.f_690[7 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_1157.f_690[8 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_1157.f_690[8 /*12*/].f_7 = 0;
		}
		Local_1157.f_690[8 /*12*/] = { __LIB_7__::func_984() };
		Local_1157.f_690[8 /*12*/].f_3 = 89f;
		Local_1157.f_690[8 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_1157.f_690[9 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_1157.f_690[9 /*12*/].f_7 = 0;
		}
		Local_1157.f_690[9 /*12*/] = { __LIB_7__::func_984() };
		Local_1157.f_690[9 /*12*/].f_3 = 89f;
		Local_1157.f_690[9 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_1157.f_690[10 /*12*/].f_7 = joaat("P_CIGARETTE_CS02X");
		}
		else
		{
			Local_1157.f_690[10 /*12*/].f_7 = 0;
		}
		Local_1157.f_690[10 /*12*/] = { __LIB_7__::func_984() };
		Local_1157.f_690[10 /*12*/].f_3 = 89f;
		Local_1157.f_690[10 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(64))
		{
			Local_1157.f_690[24 /*12*/].f_7 = joaat("TREEFALL_ACCIDENT_ENDPROP");
		}
		else
		{
			Local_1157.f_690[24 /*12*/].f_7 = 0;
		}
		Local_1157.f_690[24 /*12*/] = { -1402.82f, -270.8668f, 98.5585f };
		Local_1157.f_690[24 /*12*/].f_3 = 74.57f;
		Local_1157.f_690[24 /*12*/].f_10 = 0;
		__LIB_1__::func_683(&(Local_1157.f_690[24 /*12*/].f_11), 64);
		if (__LIB_7__::func_923(64))
		{
			Local_1157.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
			Local_1157.f_690[6 /*12*/] = { __LIB_7__::func_985() };
			Local_1157.f_690[6 /*12*/].f_3 = 89f;
			Local_1157.f_690[6 /*12*/].f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			Local_1157.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY03X");
			Local_1157.f_690[12 /*12*/] = { -1341.215f, -194.8321f, 102.4812f };
			Local_1157.f_690[12 /*12*/].f_3 = 27f;
			Local_1157.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_1157.f_690[12 /*12*/].f_11), 75);
			if (__LIB_7__::func_923(128))
			{
				Local_1157.f_690[0 /*12*/].f_7 = 0;
				Local_1157.f_690[0 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[0 /*12*/].f_3 = 89f;
				Local_1157.f_690[0 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					Local_1157.f_690[4 /*12*/].f_7 = joaat("P_WOODWHITTLE01X");
				}
				else
				{
					Local_1157.f_690[4 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[4 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[4 /*12*/].f_3 = 89f;
				Local_1157.f_690[4 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					Local_1157.f_690[3 /*12*/].f_7 = joaat("P_KNIFE02X");
				}
				else
				{
					Local_1157.f_690[3 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[3 /*12*/].f_3 = 89f;
				Local_1157.f_690[3 /*12*/].f_10 = 0;
			}
			break;
		case 2:
			Local_1157.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_1157.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_1157.f_690[13 /*12*/].f_3 = 24f;
			Local_1157.f_690[13 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_1157.f_690[13 /*12*/].f_11), 75);
			Local_1157.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_1157.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_1157.f_690[12 /*12*/].f_3 = 25f;
			Local_1157.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_1157.f_690[12 /*12*/].f_11), 75);
			Local_1157.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_1157.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_1157.f_690[25 /*12*/].f_3 = 19.95f;
			Local_1157.f_690[25 /*12*/].f_10 = 0;
			if (__LIB_7__::func_923(128))
			{
				if (__LIB_7__::func_908(1, 2))
				{
					Local_1157.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_1157.f_690[3 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[3 /*12*/].f_4 = { 90f, 0f, -5.99f };
				Local_1157.f_690[3 /*12*/].f_10 = 0;
				if (__LIB_7__::func_908(1, 2))
				{
					Local_1157.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_1157.f_690[4 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_1157.f_690[4 /*12*/].f_3 = -153.92f;
				Local_1157.f_690[4 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_1157.f_690[4 /*12*/].f_11), 2);
				if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_923(64))
				{
					Local_1157.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
					Local_1157.f_690[6 /*12*/] = { __LIB_7__::func_985() };
					Local_1157.f_690[6 /*12*/].f_3 = 89f;
					Local_1157.f_690[6 /*12*/].f_10 = 0;
				}
			}
			break;
		case 3:
			Local_1157.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_1157.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_1157.f_690[13 /*12*/].f_3 = 24f;
			Local_1157.f_690[13 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_1157.f_690[13 /*12*/].f_11), 75);
			Local_1157.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_1157.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_1157.f_690[12 /*12*/].f_3 = 25f;
			Local_1157.f_690[12 /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_1157.f_690[12 /*12*/].f_11), 75);
			Local_1157.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_1157.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_1157.f_690[25 /*12*/].f_3 = 19.95f;
			Local_1157.f_690[25 /*12*/].f_10 = 0;
			if (__LIB_7__::func_923(128))
			{
				if (!__LIB_7__::func_907(Local_2160.f_136, 128) || (__LIB_7__::func_907(Local_2160.f_136, 128) && __LIB_7__::func_908(1, 2)))
				{
					Local_1157.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_1157.f_690[3 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[3 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[3 /*12*/].f_3 = 89f;
				Local_1157.f_690[3 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_2160.f_136, 128) || (__LIB_7__::func_907(Local_2160.f_136, 128) && __LIB_7__::func_908(1, 2)))
				{
					Local_1157.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_1157.f_690[4 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_1157.f_690[4 /*12*/].f_3 = -153.92f;
				Local_1157.f_690[4 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_1157.f_690[4 /*12*/].f_11), 2);
				if (!__LIB_7__::func_907(Local_2160.f_136, 128) || __LIB_7__::func_908(1, 2))
				{
					Local_1157.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
				}
				else
				{
					Local_1157.f_690[6 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[6 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[6 /*12*/].f_3 = 89f;
				Local_1157.f_690[6 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					Local_1157.f_690[7 /*12*/].f_7 = joaat("P_BOTTLEJD01X");
				}
				else
				{
					Local_1157.f_690[7 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[7 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[7 /*12*/].f_3 = 89f;
				Local_1157.f_690[7 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					Local_1157.f_690[8 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_1157.f_690[8 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[8 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[8 /*12*/].f_3 = 89f;
				Local_1157.f_690[8 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					Local_1157.f_690[9 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_1157.f_690[9 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[9 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[9 /*12*/].f_3 = 89f;
				Local_1157.f_690[9 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					Local_1157.f_690[10 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_1157.f_690[10 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[10 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[10 /*12*/].f_3 = 89f;
				Local_1157.f_690[10 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					Local_1157.f_690[11 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_1157.f_690[11 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[11 /*12*/] = { __LIB_7__::func_984() };
				Local_1157.f_690[11 /*12*/].f_3 = 89f;
				Local_1157.f_690[11 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					Local_1157.f_690[0 /*12*/].f_7 = joaat("P_PANTHERBLOOD01X");
				}
				else
				{
					Local_1157.f_690[0 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[0 /*12*/] = { func_480(0, 2) };
				Local_1157.f_690[0 /*12*/].f_2 = (Local_1157.f_690[0 /*12*/].f_2 - 5f);
				Local_1157.f_690[0 /*12*/].f_3 = 89f;
				Local_1157.f_690[0 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_1157.f_690[0 /*12*/].f_11), 67);
				if (!__LIB_7__::func_907(Local_2160.f_136, 128))
				{
					Local_1157.f_690[1 /*12*/].f_7 = joaat("P_COUGARBLOODPOOLS01X");
				}
				else
				{
					Local_1157.f_690[1 /*12*/].f_7 = 0;
				}
				Local_1157.f_690[1 /*12*/] = { func_480(0, 3) };
				Local_1157.f_690[1 /*12*/].f_2 = (Local_1157.f_690[1 /*12*/].f_2 - 5f);
				Local_1157.f_690[1 /*12*/].f_3 = 89f;
				Local_1157.f_690[1 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_1157.f_690[1 /*12*/].f_11), 67);
			}
			break;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		bVar5 = __LIB_0__::func_27(iLocal_1155, __LIB_0__::func_771(iVar3));
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
		if (iVar7 + 18 >= Local_1157.f_690 || iVar7 < 0)
		{
		}
		else
		{
			iVar3 = iVar0[iVar6];
			if (__LIB_7__::func_923(8192))
			{
				Local_1157.f_690[(15 + iVar7) /*12*/].f_7 = joaat("P_SAWBUCKING01X");
				Local_1157.f_690[(16 + iVar7) /*12*/].f_7 = joaat("P_CS_CEDARLOG01X");
				Local_1157.f_690[(17 + iVar7) /*12*/].f_7 = joaat("P_CS_CEDARLOG02X");
				Local_1157.f_690[(18 + iVar7) /*12*/].f_7 = joaat("P_CS_CEDARLOG03X");
			}
			else
			{
				Local_1157.f_690[(15 + iVar7) /*12*/].f_7 = 0;
				Local_1157.f_690[(16 + iVar7) /*12*/].f_7 = 0;
				Local_1157.f_690[(17 + iVar7) /*12*/].f_7 = 0;
				Local_1157.f_690[(18 + iVar7) /*12*/].f_7 = 0;
			}
			Local_1157.f_690[(15 + iVar7) /*12*/] = { func_481(iVar3) };
			Local_1157.f_690[(15 + iVar7) /*12*/].f_3 = __LIB_7__::func_986(iVar3);
			Local_1157.f_690[(15 + iVar7) /*12*/].f_10 = 0;
			Local_1157.f_690[(16 + iVar7) /*12*/] = { __LIB_7__::func_987(iVar3) };
			Local_1157.f_690[(16 + iVar7) /*12*/].f_4 = { __LIB_7__::func_988(iVar3) };
			Local_1157.f_690[(16 + iVar7) /*12*/].f_10 = 0;
			__LIB_1__::func_683(&(Local_1157.f_690[(16 + iVar7) /*12*/].f_11), 2);
			vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1157.f_690[(16 + iVar7) /*12*/], Local_1157.f_690[(16 + iVar7) /*12*/].f_3, 0.025f, -4.4039f, 0.041f) };
			Local_1157.f_690[(17 + iVar7) /*12*/] = { vVar8 };
			Local_1157.f_690[(17 + iVar7) /*12*/].f_3 = Local_1157.f_690[(16 + iVar7) /*12*/].f_3;
			Local_1157.f_690[(17 + iVar7) /*12*/].f_10 = 0;
			vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1157.f_690[(16 + iVar7) /*12*/], Local_1157.f_690[(16 + iVar7) /*12*/].f_3, 0f, 6.3529f, -0.077f) };
			Local_1157.f_690[(18 + iVar7) /*12*/] = { vVar8 };
			Local_1157.f_690[(18 + iVar7) /*12*/].f_3 = Local_1157.f_690[(16 + iVar7) /*12*/].f_3;
			Local_1157.f_690[(18 + iVar7) /*12*/].f_10 = 0;
			iVar6++;
		}
	}
	if (__LIB_7__::func_923(128))
	{
		if (__LIB_7__::func_923(16384))
		{
			Local_1157.f_690[2 /*12*/].f_7 = joaat("S_APLSD_LOG");
		}
		else
		{
			Local_1157.f_690[2 /*12*/].f_7 = 0;
		}
		Local_1157.f_690[2 /*12*/] = { -1410.311f, -227.9941f, 99.4013f };
		Local_1157.f_690[2 /*12*/].f_3 = 100.36f;
		Local_1157.f_690[2 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(16384))
		{
			Local_1157.f_690[14 /*12*/].f_7 = joaat("S_APLSD_HRSATT");
		}
		else
		{
			Local_1157.f_690[14 /*12*/].f_7 = 0;
		}
		Local_1157.f_690[14 /*12*/] = { -1404.688f, -227.0209f, 99.4983f };
		Local_1157.f_690[14 /*12*/].f_3 = 94.76f;
		Local_1157.f_690[14 /*12*/].f_10 = 0;
		if (__LIB_7__::func_923(16384))
		{
			Local_1157.f_690[23 /*12*/].f_7 = joaat("S_APLSD_HOOK");
		}
		else
		{
			Local_1157.f_690[23 /*12*/].f_7 = 0;
		}
		Local_1157.f_690[23 /*12*/] = { -1412.52f, -227.139f, 99.815f };
		Local_1157.f_690[23 /*12*/].f_3 = 129.6f;
		Local_1157.f_690[23 /*12*/].f_10 = 1;
	}
	if ((__LIB_7__::func_923(262144) || __LIB_7__::func_923(16)) && func_324())
	{
		if (iLocal_98 != 3)
		{
			Local_1157.f_690[5 /*12*/].f_7 = joaat("P_CHAIR06X");
		}
		else
		{
			Local_1157.f_690[5 /*12*/].f_7 = 0;
		}
		iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.116f, -211.4299f, 103.0422f, 0f, 0f, 18.85407f, 1f, 1f, 2.328289f, "volChairSpawnBlock");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
		Local_1157.f_690[11 /*12*/].f_7 = joaat("P_LANTERN09XHANG");
		switch (iLocal_98)
		{
			case 1:
				Local_1157.f_690[11 /*12*/].f_7 = 0;
				Local_1157.f_690[11 /*12*/] = { -1399.87f, -212.58f, 102.43f };
				break;
			case 2:
				Local_1157.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
			case 3:
				Local_1157.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
		}
		Local_1157.f_690[11 /*12*/].f_3 = 5f;
		Local_1157.f_690[11 /*12*/].f_10 = 0;
		__LIB_1__::func_683(&(Local_1157.f_690[11 /*12*/].f_11), 66);
	}
	else
	{
		Local_1157.f_690[5 /*12*/].f_7 = 0;
	}
	Local_1157.f_690[5 /*12*/] = { -1400.098f, -211.239f, 101.889f };
	Local_1157.f_690[5 /*12*/].f_3 = 22f;
	Local_1157.f_690[5 /*12*/].f_10 = 0;
	__LIB_1__::func_683(&(Local_1157.f_690[5 /*12*/].f_11), 2);
}

void func_229()
{
	Local_1157.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			Local_1157.f_304[0 /*32*/].f_1 = joaat("NORTHFLATCAR01X");
			Local_1157.f_304[0 /*32*/].f_6 = { -1342.64f, -191.66f, 99.56f };
			Local_1157.f_304[0 /*32*/].f_9 = 27f;
			__LIB_1__::func_683(&(Local_1157.f_304[0 /*32*/].f_22), 129);
			Local_1157.f_2 = 1;
			break;
		case 2:
			if (!__LIB_7__::func_924(&Local_2160, 32))
			{
				if (__LIB_7__::func_923(256))
				{
					Local_1157.f_2++;
				}
			}
			if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_908(Local_2160.f_136, 16384))
			{
				Local_1157.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_1157.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_1157.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_1157.f_2++;
				if (__LIB_7__::func_923(262144))
				{
					Local_2544.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((__LIB_7__::func_923(262144) && __LIB_7__::func_908(1, 2)) || __LIB_7__::func_908(Local_2160.f_136, 16384))
			{
				Local_1157.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_1157.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_1157.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_1157.f_2++;
				if (__LIB_7__::func_923(262144))
				{
					Local_2544.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!__LIB_7__::func_924(&Local_2160, 32))
			{
				if (__LIB_7__::func_923(256))
				{
					Local_1157.f_2++;
				}
			}
			break;
	}
}

void func_230()
{
	char* sVar0;
	if (__LIB_7__::func_923(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		__LIB_3__::func_318(sVar0, &uLocal_2414);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		__LIB_3__::func_318(sVar0, &uLocal_2414);
	}
	if (__LIB_7__::func_923(8192))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		__LIB_3__::func_318(sVar0, &uLocal_2414);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		__LIB_3__::func_318(sVar0, &uLocal_2414);
	}
	if (__LIB_7__::func_923(262144))
	{
		sVar0 = func_486();
		__LIB_3__::func_318(sVar0, &uLocal_2414);
		if (__LIB_7__::func_908(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			__LIB_3__::func_318(sVar0, &uLocal_2414);
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
				__LIB_3__::func_318(sVar0, &uLocal_2414);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				__LIB_3__::func_318(sVar0, &uLocal_2414);
				break;
		}
	}
}

bool func_232()
{
	if (!__LIB_3__::func_316(&(Local_1157.f_690)))
	{
		return false;
	}
	return true;
}

bool func_256()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1039[iVar1 /*7*/]))
		{
			if (!__LIB_7__::func_990(&(Local_1039[iVar1 /*7*/])))
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

void func_262(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_262(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_262(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_268(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		func_526(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
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

int func_270()
{
	if (__LIB_2__::func_117(64))
	{
		return iLocal_742;
	}
	return iLocal_743;
}

bool func_284(int iParam0, var uParam1)
{
	if (__LIB_7__::func_923(1048576))
	{
		if (((((__LIB_4__::func_102(__LIB_2__::func_963(Local_2160.f_138), iParam0, uParam1, 0) || ((iLocal_745 % 3) == 1 && __LIB_7__::func_918(&uLocal_2320, iParam0, uParam1, 0, (iLocal_732 / 3)))) || ((iLocal_745 % 3) == 2 && __LIB_7__::func_918(&uLocal_2320, iParam0, uParam1, (iLocal_732 / 3) + 1, (iLocal_732 * 2 / 3)))) || ((iLocal_745 % 3) == 0 && __LIB_7__::func_918(&uLocal_2320, iParam0, uParam1, (iLocal_732 * 2 / 3) + 1, iLocal_732))) || __LIB_7__::func_918(&iLocal_2479, iParam0, uParam1, 0, -1)) || __LIB_7__::func_918(&iLocal_2505, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_285()
{
	if (__LIB_7__::func_908(1, 2) || __LIB_7__::func_908(Local_2160.f_136, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2502[0]) && __LIB_2__::func_343(Global_35, iLocal_2502[0], 0))
		{
			if (__LIB_7__::func_908(Local_2160.f_136, 16384))
			{
				__LIB_0__::func_325(&(uLocal_2499[1]));
				return false;
			}
			else
			{
				__LIB_1__::func_715(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_2160.f_138), 0, 1065353216 /* Float: 1f */, 0);
				__LIB_7__::func_932(32768);
				return true;
			}
		}
	}
	if (__LIB_7__::func_923(65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]) && __LIB_2__::func_343(Global_35, uLocal_72[1], 1))
		{
			__LIB_1__::func_715(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_2160.f_138), 0, 1065353216 /* Float: 1f */, 0);
			__LIB_7__::func_932(32768);
			return true;
		}
	}
	if (__LIB_7__::func_923(32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]) && __LIB_2__::func_343(Global_35, uLocal_72[0], 1))
		{
			__LIB_1__::func_715(3, 0, 0, __LIB_7__::func_999(), __LIB_2__::func_963(Local_2160.f_138), 0, 1065353216 /* Float: 1f */, 0);
			__LIB_7__::func_932(32768);
			return true;
		}
	}
	return false;
}

int func_288()
{
	if (!func_585(&Local_2160))
	{
		if (!__LIB_8__::func_0(&(Global_1935630.f_34[0])))
		{
			return 0;
		}
		__LIB_8__::func_131(&Local_2160, 4096);
	}
	return 1;
}

int func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_2160.f_138)))
	{
		if (func_587())
		{
			(*iParam0)[iVar0] = __LIB_2__::func_963(Local_2160.f_138);
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[0]))
		{
			(*iParam0)[iVar0] = iLocal_2479[0];
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2505[0]))
		{
			(*iParam0)[iVar0] = iLocal_2505[0];
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(8192))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = __LIB_0__::func_27(iLocal_1155, __LIB_0__::func_771(iVar2));
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
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_2160.f_136, 64))
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
	if (iLocal_98 == 3 && !__LIB_7__::func_907(Local_2160.f_136, 64))
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
	if (iLocal_98 == 3 && !__LIB_7__::func_908(Local_2160.f_136, 16))
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
	while (iVar1 < iLocal_2505)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2505[iVar1]))
		{
			(*iParam0)[iVar0] = iLocal_2505[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		(*iParam0)[iVar0] = iLocal_2479[2];
		iVar0++;
		(*iParam0)[iVar0] = iLocal_2479[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

void func_292(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	__LIB_7__::func_961(iParam0, 1);
	iVar0 = PED::_GET_LASSO_TARGET(Global_35);
	if (bParam5 || iParam0->f_1 < iParam0->f_3)
	{
		if (iParam0->f_1 >= 2)
		{
			__LIB_7__::func_961(iParam0, 16);
			iParam0->f_4 = 45;
		}
		if (iParam0->f_16 == -1)
		{
			switch (iParam2)
			{
				case 65536:
					iParam0->f_16 = 0;
					break;
				case 8:
					if (PED::_0x268B3AEBF032A88D(uParam1->f_10))
					{
						__LIB_7__::func_961(iParam0, 2);
						return;
					}
					if (__LIB_8__::func_1(iParam0, &(uParam1->f_10)))
					{
						__LIB_7__::func_961(iParam0, 2);
					}
					else
					{
						__LIB_8__::func_89(iParam0, 1);
					}
					return;
				case 64:
					if (__LIB_8__::func_1(iParam0, &(uParam1->f_10)))
					{
						__LIB_7__::func_961(iParam0, 2);
					}
					else
					{
						__LIB_8__::func_89(iParam0, 1);
					}
					return;
				case 2048:
					iParam0->f_16 = 4;
					break;
				case 8192:
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_624(Global_35)))
					{
						iParam0->f_16 = 1;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_MALE(iVar0))
						{
							iParam0->f_18 = 1;
						}
						else
						{
							iParam0->f_18 = 2;
						}
						iParam0->f_16 = 2;
					}
					else if (PED::IS_PED_PLANTING_BOMB(Global_35))
					{
						iParam0->f_16 = 3;
					}
					break;
				case 512:
				case 1024:
					iParam0->f_16 = 7;
					break;
			}
		}
		if (*iParam0 != 0)
		{
		}
		else if (iParam0->f_16 != 3 && uParam1->f_10 != 0)
		{
			*iParam0 = uParam1->f_10;
		}
		else if (!func_591(iParam0, iParam3, Global_36, 50f, __LIB_8__::func_2(iParam0), __LIB_8__::func_3(iParam0)))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || !PED::IS_PED_HUMAN(*iParam0))
		{
			return;
		}
		if (iParam0->f_1 < 3)
		{
			iParam0->f_9[iParam0->f_1] = __LIB_0__::func_23();
		}
		if (!bParam4)
		{
			iParam0->f_1++;
		}
	}
	else
	{
		__LIB_7__::func_961(iParam0, 2);
	}
}

bool func_295()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_7__::func_963(&(Local_1039[6 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(6))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(6, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_1039[3 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(3))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(3, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_1039[7 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(7))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(7, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_1039[8 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(8))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(8, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
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
		if (__LIB_7__::func_963(&(Local_1039[iVar3 /*7*/])))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < __LIB_8__::func_4(9))
			{
				iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(9, iVar0, iVar4));
				if (iVar1 == Local_2160.f_10)
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

bool func_296(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	if (__LIB_8__::func_88(iParam1, 1))
	{
		return false;
	}
	if (!__LIB_1__::func_205(Global_35, Global_1392194[uParam0->f_136 /*10*/].f_6, 1, 0))
	{
		return false;
	}
	if ((__LIB_8__::func_190(Global_35, &iVar0, 4) && !STREAMING::IS_MODEL_A_PED(iVar0)) || TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		if (func_591(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*iParam1 = uVar1;
			iParam1->f_16 = 7;
			return true;
		}
	}
	return false;
}

bool func_297()
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
					if (__LIB_1__::func_205(iVar6, Global_1392194[Local_2160.f_136 /*10*/].f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (iVar6 == __LIB_2__::func_963(Local_2160.f_138))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (__LIB_1__::func_248(iVar6, &uLocal_2320))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (__LIB_1__::func_248(iVar6, &iLocal_2479))
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
						__LIB_8__::func_131(&Local_2160, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

bool func_324()
{
	return (iLocal_1147 == 0 || iLocal_1147 == 1);
}

void func_328(int iParam0)
{
	if (iLocal_744 < 10)
	{
		if (!__LIB_1__::func_248(*iParam0, &(Local_2160.f_140)))
		{
			Local_2160.f_140[iLocal_744] = *iParam0;
			iLocal_744++;
		}
	}
}

void func_338()
{
	float fVar0;
	float fVar1;
	Vector3 vVar4;
	if (__LIB_7__::func_963(&(Local_1039[2 /*7*/])))
	{
		fVar0 = __LIB_8__::func_8(&(Local_1039[2 /*7*/]));
		__LIB_8__::func_9(&(Local_1039[2 /*7*/]), &fVar1, &vVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[0]) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2479[0], -615221946))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2479[0], false);
			__LIB_8__::func_191(&(Local_1039[2 /*7*/]), "PB_VIC_BRKOUT", 1);
			__LIB_8__::func_192(&(Local_1039[2 /*7*/]), "RECOVERY_BOOL");
		}
		else if ((__LIB_8__::func_10(&(Local_1039[2 /*7*/]), "PBL_IMPATIENT") || (__LIB_8__::func_10(&(Local_1039[2 /*7*/]), "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (__LIB_8__::func_10(&(Local_1039[2 /*7*/]), "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				__LIB_8__::func_191(&(Local_1039[2 /*7*/]), "PBL_COMBAT_L", 1);
				__LIB_8__::func_192(&(Local_1039[2 /*7*/]), "bBreakInternalLoop");
			}
			else
			{
				__LIB_8__::func_191(&(Local_1039[2 /*7*/]), "PBL_COMBAT_R", 1);
				__LIB_8__::func_192(&(Local_1039[2 /*7*/]), "bBreakInternalLoop");
			}
			__LIB_7__::func_922(1024);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_2160.f_138)))
			{
				__LIB_8__::func_183(&(Local_1039[2 /*7*/]), __LIB_2__::func_963(Local_2160.f_138), "FOREMAN");
			}
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(810)))
			{
				__LIB_8__::func_183(&(Local_1039[2 /*7*/]), __LIB_2__::func_963(810), "PED1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[2]))
			{
				__LIB_8__::func_183(&(Local_1039[2 /*7*/]), iLocal_2479[2], "PED2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[3]))
			{
				__LIB_8__::func_183(&(Local_1039[2 /*7*/]), iLocal_2479[3], "PED3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1157.f_690[7 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_1039[2 /*7*/]), Local_1157.f_690[7 /*12*/].f_8, "AXE1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1157.f_690[8 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_1039[2 /*7*/]), Local_1157.f_690[8 /*12*/].f_8, "AXE2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1157.f_690[9 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_1039[2 /*7*/]), Local_1157.f_690[9 /*12*/].f_8, "AXE3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1157.f_690[10 /*12*/].f_8))
			{
				__LIB_8__::func_183(&(Local_1039[2 /*7*/]), Local_1157.f_690[10 /*12*/].f_8, "CIGARETTE");
			}
			if (__LIB_7__::func_923(512))
			{
				if (Global_36 < fVar1)
				{
					__LIB_8__::func_191(&(Local_1039[2 /*7*/]), "PBL_COMBAT_L", 1);
					__LIB_8__::func_192(&(Local_1039[2 /*7*/]), "bBreakInternalLoop");
				}
				else
				{
					__LIB_8__::func_191(&(Local_1039[2 /*7*/]), "PBL_COMBAT_R", 1);
					__LIB_8__::func_192(&(Local_1039[2 /*7*/]), "bBreakInternalLoop");
				}
			}
			__LIB_7__::func_941(1024);
		}
	}
}

void func_339(int iParam0)
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
		else if (__LIB_7__::func_963(&(Local_1039[(9 + iVar0) /*7*/])))
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
				__LIB_8__::func_183(&(Local_1039[(9 + iVar0) /*7*/]), Local_1157.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1157.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
				__LIB_7__::func_952(&(Local_1039[(9 + iVar0) /*7*/]));
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_328(&iVar3);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_328(&iVar4);
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
						__LIB_8__::func_183(&(Local_1039[(9 + iVar0) /*7*/]), iVar3, "PED1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						__LIB_8__::func_183(&(Local_1039[(9 + iVar0) /*7*/]), iVar4, "PED2");
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_8__::func_11(iVar8, iVar7)))
				{
					__LIB_8__::func_191(&(Local_1039[(9 + iVar0) /*7*/]), __LIB_8__::func_11(iVar8, iVar7), 1);
					__LIB_8__::func_192(&(Local_1039[(9 + iVar0) /*7*/]), "bBreakInternalLoop");
				}
				__LIB_8__::func_183(&(Local_1039[(9 + iVar0) /*7*/]), Local_1157.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1157.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
			}
		}
		iVar0++;
	}
}

void func_340()
{
	if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_2160.f_138)))
	{
		return;
	}
	if (!__LIB_7__::func_963(&(Local_1039[0 /*7*/])))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(Local_2160.f_138), joaat("STANDING")))
	{
		return;
	}
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_2160.f_138), Local_1157.f_690[25 /*12*/].f_8, false);
	__LIB_8__::func_191(&(Local_1039[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT", 1);
	__LIB_8__::func_192(&(Local_1039[0 /*7*/]), "bBreakInternalLoop");
	__LIB_7__::func_922(1024);
}

void func_341()
{
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_2160.f_138)) && __LIB_7__::func_963(&(Local_1039[1 /*7*/])))
	{
		if (!ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(Local_2160.f_138), joaat("STANDING")))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_2160.f_138), Local_1157.f_690[25 /*12*/].f_8, false);
			__LIB_8__::func_191(&(Local_1039[1 /*7*/]), "PBL_COMBAT", 1);
			__LIB_8__::func_192(&(Local_1039[1 /*7*/]), "bBreakInternalLoop");
			__LIB_7__::func_922(1024);
		}
		else
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_2160.f_138), Local_1157.f_690[5 /*12*/].f_8, false);
			__LIB_7__::func_952(&(Local_1039[1 /*7*/]));
		}
	}
	if (__LIB_7__::func_963(&(Local_1039[3 /*7*/])))
	{
		__LIB_7__::func_952(&(Local_1039[3 /*7*/]));
		PHYSICS::ACTIVATE_PHYSICS(Local_1157.f_690[7 /*12*/].f_8);
	}
	if (__LIB_7__::func_963(&(Local_1039[0 /*7*/])))
	{
		__LIB_7__::func_952(&(Local_1039[0 /*7*/]));
	}
}

int func_352(int iParam0, bool bParam1)
{
	return func_637(iParam0, Global_1894899.f_2, bParam1);
}

void func_371(int* iParam0, int* iParam1, var uParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_649(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
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

void func_391(int iParam0, int iParam1)
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
	if ((18 + iVar0) >= Local_1157.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	iVar3 = __LIB_2__::func_963(__LIB_7__::func_964(9, 0, iVar1));
	iVar4 = __LIB_2__::func_963(__LIB_7__::func_964(9, 1, iVar1));
	if (iLocal_1149[iParam1] < 11)
	{
		func_667(&iVar1, &iVar0, &iVar3, &iVar4, iParam1);
		func_668(iParam1, &iVar3);
		func_669(&iVar3, &iVar4, iParam1);
	}
	switch (iLocal_1149[iParam1])
	{
		case 0:
			if ((ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[(16 + iVar0) /*12*/].f_8) && ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[(17 + iVar0) /*12*/].f_8)) && ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[(18 + iVar0) /*12*/].f_8))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1157.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1157.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1157.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[(16 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[(17 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[(18 + iVar0) /*12*/].f_8, true);
				iLocal_75[(12 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_1157.f_690[(17 + iVar0) /*12*/], 0f, 0f, Local_1157.f_690[(17 + iVar0) /*12*/].f_3, 0.613833f, 3.325524f, 5.714088f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(12 + iVar2)], Local_1157.f_690[(17 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[(12 + iVar2)], 7);
				iLocal_75[(13 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_1157.f_690[(18 + iVar0) /*12*/], 0f, 0f, Local_1157.f_690[(18 + iVar0) /*12*/].f_3, 1f, 7.3475f, 5f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(13 + iVar2)], Local_1157.f_690[(18 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_75[(13 + iVar2)], 7);
				__LIB_7__::func_927(__LIB_8__::func_4(9), &Local_1157);
				iLocal_1149[iParam1] = 1;
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
						iLocal_1149[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iLocal_1149[iParam1] = 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[(15 + iVar0) /*12*/].f_8))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_1157.f_690[(15 + iVar0) /*12*/].f_8, func_481(iParam0), __LIB_7__::func_986(iParam0), true, false, true);
				__LIB_8__::func_15(&(Local_1039[(9 + iParam1) /*7*/]), __LIB_8__::func_13(iParam0), __LIB_8__::func_14(iParam0));
				__LIB_8__::func_147(&(Local_1039[(9 + iParam1) /*7*/]), iVar3, "PED1", 1);
				__LIB_8__::func_147(&(Local_1039[(9 + iParam1) /*7*/]), iVar4, "PED2", 1);
				StringCopy(&(Local_1039[(9 + iParam1) /*7*/].f_4), "bBreakInternalLoop", 24);
				__LIB_8__::func_148(&(Local_1039[(9 + iParam1) /*7*/]), Local_1157.f_690[(15 + iVar0) /*12*/].f_8, "SAW");
				__LIB_8__::func_148(&(Local_1039[(9 + iParam1) /*7*/]), Local_1157.f_690[(16 + iVar0) /*12*/].f_8, "LOG_01");
				__LIB_8__::func_148(&(Local_1039[(9 + iParam1) /*7*/]), Local_1157.f_690[(17 + iVar0) /*12*/].f_8, "LOG_03");
				__LIB_8__::func_148(&(Local_1039[(9 + iParam1) /*7*/]), Local_1157.f_690[(18 + iVar0) /*12*/].f_8, "LOG_02");
				iLocal_1149[iParam1] = 3;
			}
			break;
		case 3:
			if (__LIB_7__::func_990(&(Local_1039[(9 + iParam1) /*7*/])))
			{
				__LIB_8__::func_16(&(Local_1039[(9 + iParam1) /*7*/]));
				iLocal_1149[iParam1] = 4;
			}
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && __LIB_1__::func_472(iVar3, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || (!ENTITY::IS_ENTITY_DEAD(iVar4) && __LIB_1__::func_472(iVar4, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)))
			{
				__LIB_8__::func_192(&(Local_1039[(9 + iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_1149[iParam1] = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_1157.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					__LIB_0__::func_172(iLocal_75[(13 + iVar2)]);
					iLocal_1149[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_1157.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					__LIB_0__::func_172(iLocal_75[(12 + iVar2)]);
					iLocal_1149[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1202392137))
			{
				iLocal_1149[iParam1] = 8;
			}
			break;
		case 8:
			if (__LIB_2__::func_598(iVar4, Local_1039[(9 + iParam1) /*7*/], "PED2", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar4, 330, false);
				if (Local_972 != iVar4)
				{
					func_679(9, 1, iVar1, 0);
				}
				iLocal_1149[iParam1] = 9;
			}
			break;
		case 9:
			if (__LIB_2__::func_598(iVar3, Local_1039[(9 + iParam1) /*7*/], "PED1", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar3, 330, false);
				if (Local_972 != iVar3)
				{
					func_679(9, 0, iVar1, 0);
				}
				iLocal_1149[iParam1] = 10;
			}
			break;
		case 10:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1039[(9 + iParam1) /*7*/]) || __LIB_7__::func_972(&(Local_1039[(9 + iParam1) /*7*/])))
			{
				__LIB_7__::func_952(&(Local_1039[(9 + iParam1) /*7*/]));
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1157.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1157.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1157.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				iLocal_1149[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_392()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	if (iLocal_1154 > 0)
	{
		func_680();
	}
	switch (iLocal_1154)
	{
		case 0:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("EA_WORLD_HUMAN_TREE_CHOP_NEW"), 262148, __LIB_7__::func_981(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = func_681(iVar0);
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
						__LIB_2__::func_133(iVar3, __LIB_7__::func_975(Local_2160.f_136, 4), 0);
						if (__LIB_2__::func_117(64))
						{
							if (TASK::_0x6EEAD6AF637DA752(__LIB_8__::func_144(iVar1), __LIB_8__::func_18(), 4f, 0) && !__LIB_8__::func_140(iVar1))
							{
								vVar4 = { __LIB_8__::func_144(iVar1) };
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar3, false, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
								if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_1026[iVar1]))
								{
									TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_1026[iVar1], 0, 0, false, true, 0, false, -1f, false);
								}
								else
								{
									TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar4, 5f, 0, false, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
								TASK::_TASK_PERFORM_SEQUENCE_2(iVar3, iLocal_735, 0f, 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
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
					iLocal_1154 = 2;
					Jump @738; //curOff = 430
					func_685();
					func_136();
					iVar0 = (iLocal_745 % 4);
					iVar1 = func_681(iVar0);
					if (!func_458(iVar1) && !__LIB_7__::func_939(__LIB_8__::func_20(iVar0)))
					{
						func_687(iVar0);
						iVar2 = (810 + iVar0);
						if (!__LIB_2__::func_763(iVar2, 0))
						{
							__LIB_8__::func_123(iVar2, 1, 1);
						}
						iVar3 = __LIB_2__::func_963(iVar2);
						__LIB_8__::func_21(&iVar3);
						func_689(iVar0);
						func_690(&iVar3, iVar0);
						if (__LIB_2__::func_1(iVar3, 0, 1))
						{
							if (!__LIB_7__::func_923(4096) && func_691(&iVar3, &(Local_2581[iVar0 /*5*/]), &(uLocal_2607[iVar0]), iVar0))
							{
								func_692(&iVar3, iVar0);
								iLocal_1154 = 3;
								return 0;
							}
						}
					}
					if (((((iLocal_745 % 10) == 1 && !__LIB_2__::func_117(64)) && !__LIB_7__::func_923(4096)) && !__LIB_7__::func_923(512)) && !__LIB_1__::func_563(&Local_156))
					{
						func_694();
						iLocal_1154 = 1;
						return 0;
					}
					Jump @738; //curOff = 682
					if ((iLocal_745 % 10) == 1 && __LIB_2__::func_117(64))
					{
						func_694();
						iLocal_1154 = 2;
					}
					Jump @738; //curOff = 715
					__LIB_1__::func_148(&(vLocal_1117[0 /*3*/]));
					iLocal_1154 = 2;
				}
				return 0;
			}
			default:
				break;
	}
}

void func_393()
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
		iVar1 = func_681(iVar0);
		if (((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_1014[iVar1]) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[iVar1]) == 10) && (ENTITY::IS_ENTITY_DEAD(iVar3) || !PED::IS_PED_USING_ANY_SCENARIO(iVar3))) && !__LIB_8__::func_140(iVar1))
		{
			__LIB_8__::func_149(iVar1);
			func_466(iVar1, 0);
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

void func_394(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_602(&(Local_814[iParam0 /*52*/][0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_814[iParam0 /*52*/][1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_814[iParam0 /*52*/][2 /*17*/]), __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
}

void func_395(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_451(&(Local_750[iParam0 /*21*/]), 0);
	func_697(iParam0, 0);
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
		iLocal_971 = -1;
	}
}

void func_396(int iParam0)
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
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_2160.f_136, 128))
	{
		fLocal_749 = 8f;
	}
	iVar1 = 1;
	if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "bScriptedILO", true);
	}
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || __LIB_3__::func_63()) || __LIB_3__::func_64()) || __LIB_1__::func_499())
	{
		__LIB_1__::func_148(&(vLocal_1117[7 /*3*/]));
	}
	if (__LIB_0__::func_75(&(vLocal_1117[7 /*3*/])) && !__LIB_1__::func_285(&(vLocal_1117[7 /*3*/]), 0.25f))
	{
		__LIB_3__::func_102(&(Local_814[0 /*52*/]));
	}
	iVar2 = func_649(iParam0, &(Local_750[0 /*21*/]), fLocal_749, &(Local_814[0 /*52*/]), &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iLocal_971 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_971 = iVar2;
	}
	if (!__LIB_7__::func_929(-2147483648))
	{
		if (!__LIB_7__::func_929(268435456))
		{
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (iLocal_971 == 1 && !__LIB_7__::func_929(536870912))
				{
					__LIB_2__::func_478(*iParam0, Global_35, __LIB_8__::func_22(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_7__::func_932(1048576);
				}
				func_395(0, 1, 0);
				__LIB_7__::func_932(268435456);
			}
		}
		else
		{
			switch (iLocal_971)
			{
				case 0:
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
					__LIB_7__::func_932(1073741824 /* Float: 2f */);
					func_395(0, 1, 0);
					break;
				case 1:
					if (__LIB_7__::func_929(536870912))
					{
						__LIB_7__::func_928(536870912);
						__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_7__::func_932(64);
						__LIB_8__::func_82(Local_2160.f_136, 262144);
						__LIB_8__::func_83(Local_2160.f_136, 256);
						func_395(0, 1, 0);
					}
					else
					{
						sVar3 = __LIB_8__::func_23();
						__LIB_2__::func_478(Global_35, *iParam0, sVar3, 0, -1082130432 /* Float: -1f */, MISC::GET_RANDOM_INT_IN_RANGE(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_395(0, 0, 0);
					}
					break;
			}
		}
	}
}

void func_397(int iParam0)
{
	switch (iLocal_1148)
	{
		case 0:
			if (iLocal_98 == 1 || ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[12 /*12*/].f_8))
			{
				if (__LIB_2__::func_117(64))
				{
					iLocal_1148 = 2;
				}
				else
				{
					iLocal_1148 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_117(64))
			{
				if (iLocal_98 != 1)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Long", ENTITY::GET_ENTITY_COORDS(Local_1157.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_1148 = 2;
			}
			break;
		case 2:
			if (!__LIB_2__::func_117(64))
			{
				if (iLocal_98 == 1)
				{
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_FMN_EOS", *iParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Harmonic", ENTITY::GET_ENTITY_COORDS(Local_1157.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_1148 = 1;
			}
			break;
		case 3:
			break;
	}
}

int func_400(int iParam0)
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
	if (__LIB_8__::func_88(&Local_972, 1))
	{
		return 0;
	}
	if (__LIB_7__::func_923(32))
	{
		return 0;
	}
	if ((iLocal_745 % 5) != 0)
	{
		return 0;
	}
	if (!__LIB_1__::func_205(Global_35, Global_1392194[Local_2160.f_136 /*10*/].f_5, 1, 0))
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
	func_291(&uVar24);
	iVar22 = func_703(&uVar10, &uVar24, 9, Global_36, 15f, 0, 1, 1, Local_1157.f_13, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
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
					__LIB_2__::func_133(iVar20, __LIB_7__::func_975(Local_2160.f_136, -1), 0);
				}
				iVar0[iVar23] = iVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (func_704(&Local_2544, &iVar0, &uLocal_2579, 1, __LIB_7__::func_923(2)))
	{
		__LIB_0__::func_516(&(Local_2544.f_34), 1);
		__LIB_7__::func_922(2);
		__LIB_7__::func_922(33554432);
		return 1;
	}
	return 0;
}

void func_402()
{
	if (__LIB_8__::func_232() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (__LIB_8__::func_215(Local_2160.f_136))
		{
			__LIB_7__::func_922(128);
		}
	}
}

void func_403()
{
	if (!__LIB_7__::func_907(Local_2160.f_136, 4))
	{
		if (__LIB_7__::func_929(65536))
		{
			__LIB_8__::func_85(Local_2160.f_136, 4);
		}
	}
}

void func_404(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar18;
	int iVar21;
	if (__LIB_7__::func_933(32768) && iLocal_1152 < 6)
	{
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
		__LIB_8__::func_183(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "PED1");
		__LIB_8__::func_183(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), "PED2");
		__LIB_8__::func_183(&(Local_1039[6 /*7*/]), Local_1157.f_690[2 /*12*/].f_8, "LOG");
		__LIB_7__::func_952(&(Local_1039[6 /*7*/]));
		__LIB_8__::func_188(&(Local_1039[6 /*7*/]), "script@proc@eventareas@appleseed@Log_Drag", "PBL_UNHOOK_STAND", 0);
		func_706();
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))))
		{
			TASK::TASK_STAND_STILL(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), -1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0))))
		{
			TASK::TASK_STAND_STILL(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), -1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			TASK::TASK_STAND_STILL(*uParam0, -1);
		}
		iLocal_1152 = 6;
	}
	if (iLocal_1152 < 4)
	{
		func_707(uParam0);
	}
	switch (iLocal_1152)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && PED::_0xA0BC8FAED8CFEB3C(*uParam0))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 136, true);
				__LIB_9__::func_820(*uParam0, 0, 100);
				__LIB_9__::func_820(*uParam0, 1, 100);
				TASK::TASK_STAND_STILL(*uParam0, -1);
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
				PED::_0xA2B8E47442C76CEC(*uParam0, -1758176869);
				PED::_UPDATE_PED_VARIATION(*uParam0, false, true, true, true, false);
				iVar2 = 0;
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(*uParam0, "SKEL_ROOT");
				iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1157.f_690[2 /*12*/].f_8, "Log");
				iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1157.f_690[14 /*12*/].f_8, "HrsAtt_placement01");
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_1157.f_690[14 /*12*/].f_8, *uParam0, iVar2, iVar0, 0f, 0f, 0f, 0f, -0.6f, 1f, 0f, 0f, 180f, 0f, 1, 1, 0, 1, 2, 0, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
				func_706();
				__LIB_2__::func_20(&Local_2160, *uParam0, 0);
				PHYSICS::ACTIVATE_PHYSICS(Local_1157.f_690[2 /*12*/].f_8);
				__LIB_7__::func_927(__LIB_8__::func_4(6), &Local_1157);
				iLocal_1152 = 1;
			}
			break;
		case 1:
			if (PED::_0x5E420FF293EE5472())
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					iVar4 = __LIB_8__::func_220(6, 0);
				}
				if ((iVar4 == __LIB_8__::func_4(6) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)))) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0))))
				{
					__LIB_9__::func_820(*uParam0, 0, 100);
					__LIB_9__::func_820(*uParam0, 1, 100);
					iVar5 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1157.f_690[14 /*12*/].f_8, "HookPlacementBone01");
					iVar6 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1157.f_690[14 /*12*/].f_8, "HookPlacementBone02");
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_1157.f_690[23 /*12*/].f_8, Local_1157.f_690[14 /*12*/].f_8, iVar6, iVar5, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 1, 2, 0, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
					iLocal_1152 = 2;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))) || ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0))))
			{
				iLocal_1152 = 1;
			}
			if ((!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)))) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), false, true);
				iLocal_1036[1] = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(Local_1157.f_690[2 /*12*/].f_8, true, false), ENTITY::GET_ENTITY_ROTATION(Local_1157.f_690[2 /*12*/].f_8, 2), 1f, 7, true, -1, -1f);
				PHYSICS::_0xE9CD9A67834985A7(iLocal_1036[1], Local_1157.f_690[2 /*12*/].f_8, Local_1157.f_690[23 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 22240, 43815);
				__LIB_8__::func_9(&(Local_1039[6 /*7*/]), &vVar7, &vVar10);
				func_262(*uParam0, vVar7, vVar10.z, 2, 1073741824 /* Float: 2f */);
				__LIB_8__::func_147(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "PED1", 1);
				__LIB_8__::func_147(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), "PED2", 1);
				__LIB_8__::func_148(&(Local_1039[6 /*7*/]), Local_1157.f_690[2 /*12*/].f_8, "LOG");
				__LIB_8__::func_16(&(Local_1039[6 /*7*/]));
				iLocal_1036[0] = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), ENTITY::GET_ENTITY_ROTATION(*uParam0, 2), 0.5f, 5, true, -1, -1f);
				PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_1036[0], __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 0.5f, 0, 0, "", "", 0, 37709, 53951, 0, 0, 1, 1);
				__LIB_9__::func_820(*uParam0, 0, 100);
				__LIB_9__::func_820(*uParam0, 1, 100);
				iLocal_1152 = 3;
			}
			break;
		case 3:
			if (__LIB_7__::func_923(4194304))
			{
				__LIB_1__::func_148(&(vLocal_1117[1 /*3*/]));
				__LIB_2__::func_919(Local_1157.f_690[2 /*12*/].f_8, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[2 /*12*/].f_8, false);
				__LIB_2__::func_919(Local_1157.f_690[14 /*12*/].f_8, 0, 0);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_1036[0], __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)));
				PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_1036[0], __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 0.5f, 0, 0, "", "", 0, 7966, 53951, 0, 0, 1, 1);
				iLocal_1152 = 6;
			}
			break;
		case 4:
			if (__LIB_1__::func_313(&(vLocal_1117[1 /*3*/]), 3.25f))
			{
				__LIB_8__::func_192(&(Local_1039[6 /*7*/]), "bBreakInternalLoop");
				iLocal_1152 = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), 2039378757))
				{
					PHYSICS::_0x814D453FCFDF119F(iLocal_1036[1], 1, 1);
					PHYSICS::ACTIVATE_PHYSICS(Local_1157.f_690[2 /*12*/].f_8);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), joaat("ENDSINWALK")))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					__LIB_8__::func_183(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "PED1");
					__LIB_8__::func_183(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), "PED2");
					__LIB_8__::func_183(&(Local_1039[6 /*7*/]), Local_1157.f_690[2 /*12*/].f_8, "LOG");
					__LIB_7__::func_952(&(Local_1039[6 /*7*/]));
					__LIB_8__::func_188(&(Local_1039[6 /*7*/]), "script@proc@eventareas@appleseed@Log_Drag", "PBL_UNHOOK_STAND", 0);
					TASK::CLEAR_PED_TASKS(*uParam0, true, false);
					TASK::TASK_STAND_STILL(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), -1);
					TASK::TASK_STAND_STILL(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), -1);
					TASK::TASK_STAND_STILL(*uParam0, -1);
					iLocal_1152 = 6;
				}
			}
			break;
		case 6:
			if (__LIB_7__::func_933(32768))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(Local_1157.f_690[2 /*12*/].f_8))
				{
					iVar14 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1157.f_690[2 /*12*/].f_8, "Log");
					iVar13 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1157.f_690[14 /*12*/].f_8, "HrsAtt_placement01");
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_1157.f_690[2 /*12*/].f_8, Local_1157.f_690[14 /*12*/].f_8, iVar14, iVar13, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0, 1, 0, 1, 2, 0, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), Local_1157.f_690[2 /*12*/].f_8, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), Local_1157.f_690[2 /*12*/].f_8, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), Local_1157.f_690[14 /*12*/].f_8, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), Local_1157.f_690[14 /*12*/].f_8, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), *uParam0, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), *uParam0, false);
				}
				vVar15 = { func_709() };
				func_262(*uParam0, func_710(), vVar15.z, 2, 1073741824 /* Float: 2f */);
				func_262(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), func_711(0), func_712(0), 2, 1073741824 /* Float: 2f */);
				func_262(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), func_711(1), func_712(1), 2, 1073741824 /* Float: 2f */);
				func_262(Local_1157.f_690[2 /*12*/].f_8, -1369.573f, -221.1912f, 99.5689f, 130.32f, 1, 1073741824 /* Float: 2f */);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[2 /*12*/].f_8, true);
				ANIMSCENE::RESET_ANIM_SCENE(Local_1039[6 /*7*/], "PBL_UNHOOK_STAND");
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
				__LIB_8__::func_54(&(Local_1039[6 /*7*/]));
				iLocal_1152 = 7;
			}
			break;
		case 7:
			if (!__LIB_7__::func_963(&(Local_1039[6 /*7*/])))
			{
				if ((!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)))) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					vVar18 = { func_710() };
					vVar18.f_2 = (vVar18.z + 0.2f);
					__LIB_8__::func_15(&(Local_1039[6 /*7*/]), vVar18, func_709());
					__LIB_8__::func_147(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "PED1", 1);
					__LIB_8__::func_147(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), "PED2", 1);
					if (__LIB_7__::func_990(&(Local_1039[6 /*7*/])))
					{
						__LIB_8__::func_16(&(Local_1039[6 /*7*/]));
					}
				}
			}
			else
			{
				iLocal_1152 = 8;
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), 2038561225))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[2 /*12*/].f_8) && ENTITY::IS_ENTITY_ATTACHED(Local_1157.f_690[2 /*12*/].f_8))
					{
						ENTITY::DETACH_ENTITY(Local_1157.f_690[2 /*12*/].f_8, false, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[23 /*12*/].f_8) && ENTITY::IS_ENTITY_ATTACHED(Local_1157.f_690[23 /*12*/].f_8))
					{
						ENTITY::DETACH_ENTITY(Local_1157.f_690[23 /*12*/].f_8, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1157.f_690[23 /*12*/].f_8, __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "PH_R_Hand"), 0f, 0.1f, 0.1f, 0f, 90f, -160f, true, true, false, true, 2, true, false, false);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), -276949338))
				{
					__LIB_2__::func_919(Local_1157.f_690[23 /*12*/].f_8, 0, 1);
				}
			}
			if (__LIB_7__::func_972(&(Local_1039[6 /*7*/])))
			{
				iLocal_1152 = 9;
			}
			break;
		case 9:
			if (__LIB_7__::func_972(&(Local_1039[6 /*7*/])))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					TASK::CLEAR_PED_TASKS(*uParam0, true, false);
					PHYSICS::DELETE_ROPE(&(iLocal_1036[0]));
					PED::SET_PED_CONFIG_FLAG(*uParam0, 136, false);
					__LIB_2__::func_919(Local_1157.f_690[14 /*12*/].f_8, 0, 1);
					PHYSICS::ACTIVATE_PHYSICS(Local_1157.f_690[14 /*12*/].f_8);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
					TASK::TASK_MOUNT_ANIMAL(0, *uParam0, -1, -1, 1f, 1, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_714(), 1f, -1, 0.25f, 0, func_715());
					TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
					TASK::TASK_PERFORM_SEQUENCE(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), iLocal_735);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
				}
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))))
				{
					func_679(6, 0, 0, 0);
				}
				iLocal_1152 = 11;
			}
			break;
		case 11:
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0))) && !__LIB_0__::func_163(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), 242628503))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					iVar21 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_714(), joaat("PROP_HITCHINGPOST"), 1.5f, 1, true);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar21))
					{
						TASK::TASK_HITCH_ANIMAL(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), iVar21, 33554432);
					}
					else
					{
						TASK::TASK_DISMOUNT_ANIMAL(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), 0, func_716(), 0, 0, 0);
						PHYSICS::_0x06AADE17334F7A40(*uParam0, -1399.61f, -246.8489f, 99.33929f);
					}
				}
				iLocal_1152 = 10;
			}
			break;
		case 10:
			if (!__LIB_0__::func_163(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), -850912737) && !__LIB_0__::func_163(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), 501393341))
			{
				func_679(6, 1, 0, 0);
				PHYSICS::_0x06AADE17334F7A40(*uParam0, func_717());
				iLocal_1152 = 12;
			}
			break;
		case 12:
			break;
	}
}

bool func_408(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	char[] cVar7[8];
	int iVar8;
	__LIB_8__::func_247();
	func_720();
	func_721();
	func_722();
	iVar0 = func_681(0);
	iVar1 = 810;
	iVar2 = __LIB_2__::func_963(iVar1);
	__LIB_18__::func_67(iParam0, iParam1, &iVar2, &(iLocal_2479[2]), &(iLocal_2479[3]));
	switch (iLocal_2317)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1) && iLocal_1154 >= 2)
			{
				__LIB_2__::func_279(*iParam1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[24 /*12*/].f_8, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_1157.f_690[24 /*12*/].f_8, false);
				ENTITY::SET_ENTITY_COLLISION(Local_1157.f_690[24 /*12*/].f_8, false, false);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_1157.f_690[24 /*12*/].f_8, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_1157.f_690[24 /*12*/].f_8, Local_1157.f_690[24 /*12*/], Local_1157.f_690[24 /*12*/].f_3, true, false, true);
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
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2479[2], false, true);
				__LIB_8__::func_107(iLocal_2479[2], 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2479[3], false, true);
				__LIB_8__::func_107(iLocal_2479[3], 1);
				func_395(0, 1, 1);
				__LIB_8__::func_147(&(Local_1039[2 /*7*/]), *iParam0, "FOREMAN", 1);
				__LIB_8__::func_147(&(Local_1039[2 /*7*/]), *iParam1, "VICTIM", 1);
				__LIB_8__::func_147(&(Local_1039[2 /*7*/]), iVar2, "PED1", 1);
				__LIB_8__::func_147(&(Local_1039[2 /*7*/]), iLocal_2479[2], "PED2", 1);
				__LIB_8__::func_147(&(Local_1039[2 /*7*/]), iLocal_2479[3], "PED3", 1);
				__LIB_8__::func_147(&(Local_1039[2 /*7*/]), Global_35, "player", 1);
				__LIB_8__::func_148(&(Local_1039[2 /*7*/]), Local_1157.f_690[6 /*12*/].f_8, "MONEY");
				__LIB_8__::func_148(&(Local_1039[2 /*7*/]), Local_1157.f_690[7 /*12*/].f_8, "AXE1");
				__LIB_8__::func_148(&(Local_1039[2 /*7*/]), Local_1157.f_690[8 /*12*/].f_8, "AXE2");
				__LIB_8__::func_148(&(Local_1039[2 /*7*/]), Local_1157.f_690[9 /*12*/].f_8, "AXE3");
				__LIB_8__::func_148(&(Local_1039[2 /*7*/]), Local_1157.f_690[10 /*12*/].f_8, "CIGARETTE");
				__LIB_8__::func_148(&(Local_1039[2 /*7*/]), Local_1157.f_690[24 /*12*/].f_8, "TREE");
				__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PBL_LIFT_SUCCESS");
				__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PBL_IMPATIENT");
				__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PBL_COMBAT_L");
				__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PBL_COMBAT_R");
				__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PB_VIC_BRKOUT");
				__LIB_0__::func_928(&(Local_2160.f_35), *iParam0, "EA_LCMP_Foreman", 0);
				__LIB_0__::func_928(&(Local_2160.f_35), iVar2, "LOG_WORKER_3", 0);
				__LIB_0__::func_928(&(Local_2160.f_35), iLocal_2479[2], "LCMP_WITNESS1", 0);
				__LIB_0__::func_928(&(Local_2160.f_35), *iParam1, "LOGGING_VICTIM", 0);
				__LIB_8__::func_108(&(Local_2160.f_35), "LCMPF_IG3", 0);
				__LIB_8__::func_108(&(Local_2160.f_35), "LCMP_IG_TREE_P2", 0);
				AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_APPLESEED_2_START");
				__LIB_7__::func_941(1);
				if (iLocal_98 == 2 && __LIB_7__::func_908(1, 2))
				{
					ENTITY::PLAY_ENTITY_ANIM(Local_1157.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				}
				__LIB_8__::func_16(&(Local_1039[2 /*7*/]));
				__LIB_7__::func_934(67108864);
				iLocal_2317 = 2;
			}
			break;
		case 2:
			if (func_730(iParam1, iVar0))
			{
				vVar3 = { __LIB_2__::func_114(Global_35, 2f) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, __LIB_8__::func_25(), false) < 60f)
				{
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					__LIB_7__::func_922(4096);
					__LIB_7__::func_941(2);
					__LIB_7__::func_922(32);
					__LIB_1__::func_148(&(vLocal_1117[4 /*3*/]));
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMPF_IG3", iVar2, *iParam0, 0, 0, 1, 1);
					func_692(&iVar2, 0);
					func_687(0);
					iLocal_2317 = 1;
				}
			}
			else if (__LIB_3__::func_332(__LIB_8__::func_144(iVar0), 1) <= 63f)
			{
				if (!__LIB_0__::func_75(&(vLocal_1117[4 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1117[4 /*3*/]));
				}
				else if (__LIB_0__::func_33(&(vLocal_1117[4 /*3*/])))
				{
					__LIB_2__::func_112(&(vLocal_1117[4 /*3*/]));
				}
				if (__LIB_1__::func_285(&(vLocal_1117[4 /*3*/]), 7.5f))
				{
					__LIB_7__::func_932(2097152);
					iLocal_2317 = 10;
				}
			}
			else if (__LIB_0__::func_75(&(vLocal_1117[4 /*3*/])) && !__LIB_0__::func_33(&(vLocal_1117[4 /*3*/])))
			{
				__LIB_2__::func_113(&(vLocal_1117[4 /*3*/]));
			}
			break;
		case 1:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_1__::func_313(&(vLocal_1117[4 /*3*/]), 2f))
			{
				__LIB_8__::func_192(&(Local_1039[2 /*7*/]), "bBreakInternalLoop");
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar2, -1318036203))
			{
				__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_2_START", 0);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 146, true);
				__LIB_8__::func_196(&(Local_1039[2 /*7*/]), "bBreakInternalLoop");
				func_736();
				iLocal_1154 = 3;
				iLocal_2317 = 4;
			}
			break;
		case 4:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			func_127();
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
				func_328(iParam1);
				__LIB_2__::func_122(*iParam1, "SCREAM_TERROR", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_TRIGGER_SONAR_BLIP_2(-890428877, *iParam1);
			}
			if (!__LIB_7__::func_923(512) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, 442538763))
			{
				__LIB_2__::func_73(*iParam1, &(uLocal_2489[0]), -89429847, 580546400, 0, "LOG_BLIP_VICT");
				PED::_0x735662994E60A710(*iParam1, 1);
				PED::_SET_PED_WOUND_EFFECT(*iParam1, 0, 55120, 0.2f, 0f, 0f, 0f, 0f, -1f, 0.5f);
				PED::_REMOVE_PED_WOUND_EFFECT(*iParam1, 0.5f);
				__LIB_7__::func_922(512);
				PED::_0xAE6004120C18DF97(*iParam1, 0, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam1, 319570);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam1, true);
				PED::_SET_PED_BODY_COMPONENT(*iParam1, 306062959);
				PED::_UPDATE_PED_VARIATION(*iParam1, false, true, true, true, false);
				__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_TFHEL", *iParam0, *iParam1, 0, 0, 1, 1);
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
				__LIB_0__::func_325(&(uLocal_2489[0]));
				__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
				iLocal_2317 = 5;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			func_127();
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (__LIB_8__::func_24(&(Local_1039[2 /*7*/]), "bBreakInternalLoop"))
			{
				__LIB_8__::func_196(&(Local_1039[2 /*7*/]), "bBreakInternalLoop");
			}
			func_739(&(Local_2160.f_32), &(Local_2160.f_33));
			if (__LIB_18__::func_68(&(Local_2160.f_32), "LOG_CTXTHLP", __LIB_8__::func_30(), 0, joaat("INPUT_CONTEXT_Y"), 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, joaat("MEDIUM_TIMED_EVENT"), 0))
			{
				MAP::DISPLAY_RADAR(false);
				bVar6 = true;
				__LIB_0__::func_37(&(vLocal_1117[3 /*3*/]));
			}
			else if (__LIB_18__::func_68(&(Local_2160.f_33), "LOG_CTXTHLP", __LIB_8__::func_31(), 0, joaat("INPUT_CONTEXT_Y"), 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, joaat("MEDIUM_TIMED_EVENT"), 0))
			{
				__LIB_7__::func_934(256);
				MAP::DISPLAY_RADAR(false);
				bVar6 = true;
				__LIB_0__::func_37(&(vLocal_1117[3 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_1117[3 /*3*/]), 7.5f))
			{
				iLocal_2317 = 6;
				__LIB_1__::func_148(&(vLocal_1117[1 /*3*/]));
				func_743();
			}
			if (__LIB_1__::func_313(&(vLocal_1117[1 /*3*/]), 7.5f))
			{
				iLocal_2317 = 9;
			}
			if (bVar6)
			{
				if (Global_36.f_1 > __LIB_8__::func_32())
				{
					__LIB_7__::func_934(256);
				}
				__LIB_1__::func_748(&(Local_2160.f_32), 1, 1);
				__LIB_1__::func_748(&(Local_2160.f_33), 1, 1);
				__LIB_0__::func_325(&iLocal_2413);
				__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
				__LIB_0__::func_37(&(vLocal_1117[1 /*3*/]));
				__LIB_8__::func_82(Local_2160.f_136, 128);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4352, false);
				__LIB_8__::func_131(&Local_2160, 65536);
				PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_75[4]);
				__LIB_7__::func_932(16384);
				__LIB_3__::func_623(&Local_698);
				Local_698.f_1 = Global_35;
				if (__LIB_7__::func_933(256))
				{
					Local_698.f_8 = { __LIB_8__::func_33(&(Local_1039[4 /*7*/]), "ARTHUR", func_474(4)) };
					Local_698.f_19 = __LIB_8__::func_200(&(Local_1039[4 /*7*/]), "ARTHUR", func_474(4));
				}
				else
				{
					Local_698.f_8 = { __LIB_8__::func_33(&(Local_1039[3 /*7*/]), "ARTHUR", func_474(3)) };
					Local_698.f_19 = __LIB_8__::func_200(&(Local_1039[3 /*7*/]), "ARTHUR", func_474(3));
				}
				Local_698.f_17 = 0.15f;
				Local_698.f_18 = 0.2f;
				__LIB_1__::func_336(&(Local_698.f_23), 17425);
				__LIB_8__::func_131(&Local_2160, 65536);
				__LIB_3__::func_995(&Local_698, 129);
				__LIB_7__::func_961(&Local_972, 4);
				iLocal_2317 = 7;
			}
			break;
		case 6:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			__LIB_8__::func_191(&(Local_1039[2 /*7*/]), "PBL_IMPATIENT", 1);
			__LIB_8__::func_192(&(Local_1039[2 /*7*/]), "bBreakInternalLoop");
			__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_TFSOM", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_2317 = 5;
			break;
		case 7:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (__LIB_3__::func_995(&Local_698, 129))
			{
				if (__LIB_7__::func_933(256))
				{
					__LIB_8__::func_147(&(Local_1039[4 /*7*/]), Global_35, "ARTHUR", 1);
					__LIB_8__::func_16(&(Local_1039[4 /*7*/]));
					PATHFIND::_0x19C7567D2F2287D6(iLocal_75[4], 7);
					iLocal_2317 = 8;
				}
				else
				{
					__LIB_8__::func_147(&(Local_1039[3 /*7*/]), Global_35, "ARTHUR", 1);
					__LIB_8__::func_16(&(Local_1039[3 /*7*/]));
					PATHFIND::_0x19C7567D2F2287D6(iLocal_75[4], 7);
					iLocal_2317 = 8;
				}
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (__LIB_7__::func_973(&(Local_1039[2 /*7*/]), "LIFT_LOOP") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 331855897))
			{
				if (!__LIB_0__::func_139(Local_2160.f_32))
				{
					Local_2160.f_32 = __LIB_7__::func_915("LOG_CTXTHLP", joaat("INPUT_CONTEXT_ACTION"), 1, 0, 0, 9, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_0__::func_45("LOG_HELP_MASH", 10000, 0, 0, 0, 1);
					__LIB_8__::func_82(Local_2160.f_136, 64);
					__LIB_8__::func_176(Local_2160.f_136);
					__LIB_7__::func_941(16);
					__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
				}
				if (__LIB_4__::func_442(Local_2160.f_32, 1))
				{
					__LIB_1__::func_515(Local_2160.f_32, 1);
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")))
				{
					PAD::SET_PAD_SHAKE(0, 250, 50);
				}
				if (__LIB_0__::func_567(Local_2160.f_32, 1) || __LIB_1__::func_285(&(vLocal_1117[3 /*3*/]), 15f))
				{
					__LIB_0__::func_37(&(vLocal_1117[3 /*3*/]));
					__LIB_0__::func_105(1);
					__LIB_1__::func_715(13, 0, 0, 0, *iParam0, 0, 1065353216 /* Float: 1f */, 0);
					__LIB_1__::func_748(&(Local_2160.f_32), 1, 1);
					__LIB_7__::func_928(16384);
					Local_972.f_3 = 3;
					iLocal_2317 = 9;
				}
			}
			break;
		case 9:
			__LIB_1__::func_748(&(Local_2160.f_32), 1, 1);
			__LIB_1__::func_748(&(Local_2160.f_33), 1, 1);
			__LIB_0__::func_325(&iLocal_2413);
			func_743();
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (__LIB_7__::func_963(&(Local_1039[3 /*7*/])))
			{
				__LIB_8__::func_192(&(Local_1039[3 /*7*/]), "bBreakInternalLoop");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_8__::func_132(&Local_2160, 65536);
			}
			if (__LIB_7__::func_963(&(Local_1039[4 /*7*/])))
			{
				__LIB_8__::func_192(&(Local_1039[4 /*7*/]), "bBreakInternalLoop");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_8__::func_132(&Local_2160, 65536);
			}
			if (__LIB_7__::func_963(&(Local_1039[2 /*7*/])))
			{
				__LIB_8__::func_191(&(Local_1039[2 /*7*/]), "PBL_LIFT_SUCCESS", 1);
				__LIB_8__::func_192(&(Local_1039[2 /*7*/]), "bBreakInternalLoop");
				__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_TFHLS", *iParam0, *iParam1, 0, 0, 1, 1);
				PED::_0xAE6004120C18DF97(*iParam1, 0, 1);
				AUDIO::_PLAY_SOUND_FROM_POSITION("LOG_LIFT", ENTITY::GET_ENTITY_COORDS(Local_1157.f_690[24 /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				__LIB_7__::func_965(131072);
			}
			__LIB_7__::func_941(512);
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[20]))
			{
				iLocal_75[20] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			iLocal_2317 = 11;
			break;
		case 10:
			if (__LIB_8__::func_29(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			__LIB_8__::func_183(&(Local_1039[2 /*7*/]), *iParam1, "Victim");
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(*iParam1, func_270(), 0, 0, 0);
			__LIB_7__::func_952(&(Local_1039[2 /*7*/]));
			OBJECT::DELETE_OBJECT(&(Local_1157.f_690[7 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(Local_1157.f_690[8 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(Local_1157.f_690[9 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(Local_1157.f_690[10 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(Local_1157.f_690[24 /*12*/].f_8));
			iLocal_2317 = 11;
			break;
		case 11:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("RUMBLE")))
			{
				PAD::SET_PAD_SHAKE(0, 250, 100);
			}
			func_106(1);
			if (((__LIB_7__::func_933(1) && __LIB_7__::func_933(2)) && __LIB_7__::func_933(4)) && __LIB_7__::func_933(8))
			{
				iLocal_2317 = 14;
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[24 /*12*/].f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1157.f_690[24 /*12*/].f_8, -1545720465))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("LOG_PUT_DOWN", ENTITY::GET_ENTITY_COORDS(Local_1157.f_690[24 /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
					__LIB_3__::func_353("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1157.f_690[24 /*12*/].f_8, 745376786))
				{
					ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_1157.f_690[24 /*12*/].f_8, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[24 /*12*/].f_8, true);
					__LIB_8__::func_183(&(Local_1039[2 /*7*/]), Local_1157.f_690[24 /*12*/].f_8, "TREE");
				}
			}
			if (!__LIB_7__::func_933(1))
			{
				if (__LIB_2__::func_598(*iParam0, Local_1039[2 /*7*/], "FOREMAN", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
					{
						__LIB_8__::func_183(&(Local_1039[2 /*7*/]), *iParam0, "FOREMAN");
						__LIB_8__::func_107(*iParam0, 0);
					}
					__LIB_7__::func_941(4096);
					__LIB_7__::func_934(1);
					if (!__LIB_7__::func_929(2097152))
					{
						iLocal_2317 = 12;
					}
				}
			}
			if (!__LIB_7__::func_933(2))
			{
				if (__LIB_2__::func_598(iVar2, Local_1039[2 /*7*/], "PED1", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						__LIB_8__::func_183(&(Local_1039[2 /*7*/]), iVar2, "PED1");
						__LIB_8__::func_107(iVar2, 0);
						__LIB_8__::func_124(iVar1, 1);
					}
					__LIB_7__::func_934(2);
				}
			}
			if (!__LIB_7__::func_933(4))
			{
				if (__LIB_2__::func_598(iLocal_2479[2], Local_1039[2 /*7*/], "PED2", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[2]))
					{
						__LIB_8__::func_183(&(Local_1039[2 /*7*/]), iLocal_2479[2], "PED2");
						__LIB_8__::func_107(iLocal_2479[2], 1);
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2479[2], func_270(), 0, 0, 0);
					}
					__LIB_7__::func_934(4);
				}
			}
			if (!__LIB_7__::func_933(8))
			{
				if (__LIB_2__::func_598(iLocal_2479[3], Local_1039[2 /*7*/], "PED3", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2479[3]))
					{
						__LIB_8__::func_183(&(Local_1039[2 /*7*/]), iLocal_2479[3], "PED3");
						__LIB_8__::func_107(iLocal_2479[3], 1);
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2479[3], func_270(), 0, 0, 0);
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
				if (__LIB_7__::func_908(Local_2160.f_136, 64))
				{
					cVar7 = "LOG_ACCPH";
				}
				else
				{
					cVar7 = "LOG_ACCPN";
				}
				__LIB_3__::func_154(&(Local_2160.f_35), cVar7, *iParam0, Global_35, 0, 0, 1, 1);
			}
			iLocal_2317 = 11;
			break;
		case 14:
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				__LIB_7__::func_941(32);
				__LIB_7__::func_941(2);
				if (__LIB_2__::func_763(Local_2160.f_138, 0))
				{
					__LIB_8__::func_124(Local_2160.f_138, 1);
					__LIB_2__::func_451(&(Local_750[0 /*21*/]), 0);
				}
				__LIB_7__::func_926(256);
				__LIB_1__::func_148(&(vLocal_1117[0 /*3*/]));
				iVar8 = 0;
				while (iVar8 < iLocal_2543)
				{
					func_755(&iVar8);
					iLocal_2527[iVar8] = -1;
					iVar8++;
				}
				iLocal_2543 = 0;
				__LIB_7__::func_938();
				__LIB_7__::func_965(67108864);
				iLocal_2317 = 13;
			}
			break;
		case 13:
			__LIB_2__::func_56(iVar2, 1, 1);
			__LIB_4__::func_356(&iVar2, &(Local_750[1 /*21*/]), &(Local_814[1 /*52*/]), 0, 1);
			__LIB_2__::func_56(iLocal_2479[2], 1, 1);
			__LIB_4__::func_356(&(iLocal_2479[2]), &(Local_750[1 /*21*/]), &(Local_814[1 /*52*/]), 0, 1);
			__LIB_2__::func_56(iLocal_2479[3], 1, 1);
			__LIB_4__::func_356(&(iLocal_2479[3]), &(Local_750[1 /*21*/]), &(Local_814[1 /*52*/]), 0, 1);
			func_756(0, 0, 1);
			func_395(0, 1, 0);
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

void func_409(int iParam0)
{
	if (__LIB_1__::func_205(*iParam0, iLocal_75[0], 1, 0) && iLocal_2319 < 5)
	{
		iLocal_2319 = 5;
	}
	switch (iLocal_2319)
	{
		case 0:
			func_394(0);
			__LIB_8__::func_239(1, 0);
			func_395(0, 1, 0);
			func_758(0, 0);
			iLocal_2319 = 2;
			break;
		case 2:
			switch (iLocal_971)
			{
				case 1:
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_TFPLNF", Global_35, *iParam0, 0, 0, 1, 1);
					func_395(0, 1, 0);
					iLocal_2319 = 5;
					break;
			}
			break;
		case 5:
			break;
	}
}

void func_410(int* iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_7__::func_933(65536) && iLocal_2318 < 5)
	{
		func_395(1, 0, 0);
		func_756(1, 0, 1);
		iLocal_2318 = 5;
	}
	if (iLocal_2318 >= 2)
	{
		iVar1 = 1;
		iVar0 = func_649(iParam0, &(Local_750[1 /*21*/]), 8f, &(Local_814[1 /*52*/]), &iVar1, 0, 1, 0, 0, __LIB_2__::func_340(1, 0, 0) | 2048, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_2318)
	{
		case 0:
			func_394(1);
			func_395(1, 0, 0);
			__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PB_VIC_BRKOUT");
			__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PB_HANDOVER_R");
			__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PB_HANDOVER_L");
			__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PB_HANDOVER_N");
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[20]))
			{
				iLocal_75[20] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			__LIB_1__::func_148(&(vLocal_1117[1 /*3*/]));
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[19]))
			{
				iLocal_75[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.695f, -268.6573f, 99.66403f, 0f, 0f, -3.999926f, 4.302533f, 3.265524f, 2.894566f, "EA LCMP - volGiveMoney");
			}
			iLocal_2318 = 1;
			break;
		case 1:
			if ((__LIB_2__::func_227(0, 1, 0, 0) && __LIB_1__::func_285(&(vLocal_1117[1 /*3*/]), 1.5f)) && __LIB_2__::func_118(*iParam0, 1, 1) < 10f)
			{
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				if (__LIB_7__::func_908(Local_2160.f_136, 128))
				{
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMPF_IG_TFRSH", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMPF_IG_TFRSN", *iParam0, Global_35, 0, 0, 1, 1);
				}
				PED::SET_PED_CONFIG_FLAG(*iParam0, 277, false);
				iLocal_2318 = 2;
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
					func_395(1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[6 /*12*/].f_8))
					{
						ENTITY::SET_ENTITY_COORDS(Local_1157.f_690[6 /*12*/].f_8, __LIB_7__::func_985(), true, false, true, true);
					}
					__LIB_3__::func_623(&Local_2613);
					Local_2613.f_1 = Global_35;
					func_761(&(Local_2613.f_8), &(Local_698.f_19), iParam0);
					Local_2613.f_18 = 0.2f;
					Local_2613.f_17 = 0.15f;
					Local_2613.f_21 = 1f;
					__LIB_1__::func_336(&(Local_2613.f_23), 17920);
					StringCopy(&(Local_1039[2 /*7*/].f_4), "RECOVERY_BOOL", 24);
					__LIB_8__::func_131(&Local_2160, 65536);
					__LIB_3__::func_995(&Local_2613, 106);
					iLocal_2318 = 3;
					break;
				case 1:
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMPF_IG_TFPLRN", Global_35, *iParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2318 = 6;
					break;
			}
			break;
		case 3:
			if (__LIB_3__::func_995(&Local_2613, 106) && __LIB_8__::func_34(&(Local_1039[2 /*7*/])))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_2160, 65536);
				__LIB_8__::func_240(&(Local_1039[2 /*7*/]), 1, 1);
				__LIB_3__::func_154(&(Local_2160.f_35), "LCMPF_IG_TFPLRP", Global_35, *iParam0, 0, 0, 1, 1);
				iLocal_2318 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
			{
				__LIB_8__::func_360(&(Local_1039[2 /*7*/]));
				__LIB_1__::func_432(500, 0, 0, 1, 1);
				__LIB_1__::func_715(13, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_190(*iParam0, 500);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[6 /*12*/].f_8))
				{
					ENTITY::SET_ENTITY_COORDS(Local_1157.f_690[6 /*12*/].f_8, __LIB_7__::func_984(), true, false, true, true);
				}
				__LIB_8__::func_26(&(Local_1039[2 /*7*/]), "PB_VIC_BRKOUT");
				iLocal_2318 = 5;
			}
			break;
		case 5:
			if ((!__LIB_7__::func_933(524288) && iLocal_2646 < 2) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
			}
			switch (iVar0)
			{
				case 0:
					__LIB_3__::func_154(&(Local_2160.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					iLocal_2646++;
					break;
				case 1:
					__LIB_3__::func_154(&(Local_2160.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2646++;
					iLocal_2318 = 6;
					break;
			}
			break;
		case 6:
			if ((!__LIB_7__::func_933(524288) && iLocal_2646 < 2) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
				func_762(1, 0, 0);
			}
			switch (iVar0)
			{
				case 1:
					__LIB_3__::func_154(&(Local_2160.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2646++;
					break;
			}
			break;
	}
}

int func_411(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	bool bVar6;
	switch (iLocal_1146)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			__LIB_0__::func_325(&(uLocal_2499[0]));
			__LIB_8__::func_147(&(Local_1039[0 /*7*/]), *iParam0, "FOREMAN", 1);
			__LIB_8__::func_148(&(Local_1039[0 /*7*/]), Local_1157.f_690[3 /*12*/].f_8, "PEN");
			__LIB_8__::func_148(&(Local_1039[0 /*7*/]), Local_1157.f_690[4 /*12*/].f_8, "BOOK");
			__LIB_8__::func_26(&(Local_1039[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT");
			__LIB_8__::func_9(&(Local_1039[0 /*7*/]), &vVar0, &vVar3);
			__LIB_8__::func_148(&(Local_1039[0 /*7*/]), Local_1157.f_690[25 /*12*/].f_8, "p_chair04x");
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_1157.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				__LIB_3__::func_623(&Local_698);
				Local_698.f_1 = *iParam0;
				Local_698.f_8 = { __LIB_8__::func_35() };
				Local_698.f_21 = 1f;
				Local_698.f_18 = 2f;
				__LIB_1__::func_336(&(Local_698.f_23), 128);
				__LIB_3__::func_995(&Local_698, 129);
				iLocal_1146 = 1;
			}
			else
			{
				func_395(0, 1, 1);
				__LIB_8__::func_16(&(Local_1039[0 /*7*/]));
				iLocal_1146 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_36(), 5f);
			if (__LIB_3__::func_995(&Local_698, 129))
			{
				__LIB_3__::func_623(&Local_698);
				Local_698.f_1 = *iParam0;
				Local_698.f_8 = { __LIB_8__::func_33(&(Local_1039[0 /*7*/]), "FOREMAN", "PB_L_ENTER") };
				Local_698.f_21 = 1f;
				Local_698.f_18 = 0.25f;
				Local_698.f_17 = 0.2f;
				__LIB_1__::func_336(&(Local_698.f_23), 1152);
				__LIB_3__::func_995(&Local_698, 129);
				iLocal_1146 = 2;
			}
			break;
		case 2:
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_36(), 5f);
			if (__LIB_3__::func_995(&Local_698, 129))
			{
				iLocal_1146 = 3;
			}
			break;
		case 3:
			__LIB_7__::func_922(1);
			__LIB_8__::func_16(&(Local_1039[0 /*7*/]));
			iLocal_1146 = 4;
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				__LIB_7__::func_934(67108864);
				if (__LIB_7__::func_923(2))
				{
					iLocal_1146 = 6;
				}
				else
				{
					iLocal_1146 = 7;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(-1f))
			{
				func_772("LOG_OBJ01", 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_2499[0]), -89429847, 580546400, 0, __LIB_7__::func_978());
				iLocal_1146 = 7;
			}
			break;
		case 7:
			if (__LIB_8__::func_109(iParam0, 0, 0))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_0__::func_769();
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
				__LIB_7__::func_922(4096);
				__LIB_8__::func_192(&(Local_1039[0 /*7*/]), "bBreakInternalLoop");
				__LIB_8__::func_183(&(Local_1039[0 /*7*/]), Local_1157.f_690[4 /*12*/].f_8, "BOOK");
				ENTITY::PLAY_ENTITY_ANIM(Local_1157.f_690[4 /*12*/].f_8, __LIB_8__::func_27(), __LIB_8__::func_28(), 0.3f, true, true, false, 0f, 0);
				if (__LIB_7__::func_923(64))
				{
					if (__LIB_7__::func_908(Local_2160.f_136, 64))
					{
						__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_ACK_ACP", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_ACK_ACN", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (__LIB_7__::func_908(Local_2160.f_136, 2))
				{
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_ACK_2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_S2ACK", *iParam0, Global_35, 0, 0, 1, 1);
					__LIB_8__::func_82(Local_2160.f_136, 2);
				}
				__LIB_7__::func_934(65536);
				iLocal_1146 = 8;
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (__LIB_2__::func_598(*iParam0, Local_1039[0 /*7*/], "FOREMAN", 0, 0, 1, 0) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2f, -2f, 2113536, 0f, false, false, -1f, 0, 524297, -1f);
				__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_S2BFM", *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
				func_395(0, 1, 0);
				__LIB_8__::func_239(1, 0);
				iLocal_1146 = 9;
			}
			if (!__LIB_8__::func_109(iParam0, 0, 0))
			{
				func_395(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				func_756(0, 0, 1);
				iLocal_1146 = 13;
			}
			break;
		case 9:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
			}
			if (__LIB_0__::func_75(&(vLocal_1117[3 /*3*/])) && __LIB_1__::func_871(&(vLocal_1117[3 /*3*/])) > 30000)
			{
				iLocal_1146 = 10;
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				if (!__LIB_7__::func_929(268435456))
				{
					__LIB_8__::func_239(1, 1);
					func_395(0, 1, 0);
					func_775(0);
					__LIB_7__::func_932(268435456);
				}
				switch (iLocal_971)
				{
					case 0:
						func_395(0, 1, 0);
						__LIB_8__::func_239(0, 0);
						func_756(0, 0, 1);
						__LIB_7__::func_922(2048);
						__LIB_8__::func_82(Local_2160.f_136, 16384);
						__LIB_8__::func_253(&Local_2160);
						__LIB_3__::func_623(&Local_698);
						Local_698.f_8 = { -1400.12f, -207.92f, 101.88f };
						Local_698.f_14 = { __LIB_8__::func_37() };
						Local_698.f_1 = Global_35;
						Local_698.f_17 = 0.2f;
						Local_698.f_18 = 0.2f;
						Local_698.f_19 = 20.6f;
						Local_698.f_25 = Local_1039[5 /*7*/];
						StringCopy(&(Local_698.f_30), "ARTHUR", 24);
						StringCopy(&(Local_698.f_26), func_474(5), 32);
						__LIB_1__::func_336(&(Local_698.f_23), 26624);
						__LIB_8__::func_131(&Local_2160, 65536);
						__LIB_3__::func_995(&Local_698, 129);
						iLocal_1146 = 11;
						break;
					case 1:
						func_395(0, 1, 1);
						__LIB_8__::func_239(0, 0);
						__LIB_7__::func_941(2048);
						iLocal_1146 = 13;
						break;
				}
			}
			if (!__LIB_8__::func_109(iParam0, 0, 0))
			{
				func_395(0, 1, 0);
				__LIB_8__::func_239(0, 0);
				func_756(0, 0, 1);
				__LIB_7__::func_941(2048);
				iLocal_1146 = 13;
			}
			break;
		case 10:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			__LIB_0__::func_37(&(vLocal_1117[3 /*3*/]));
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_S2WS", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_1146 = 9;
			break;
		case 11:
			if (__LIB_3__::func_995(&Local_698, 129))
			{
				__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_S2AL", Global_35, *iParam0, 0, 0, 1, 1);
				__LIB_8__::func_147(&(Local_1039[5 /*7*/]), Global_35, "ARTHUR", 1);
				__LIB_8__::func_148(&(Local_1039[5 /*7*/]), Local_1157.f_690[6 /*12*/].f_8, "MONEY");
				__LIB_8__::func_16(&(Local_1039[5 /*7*/]));
				iLocal_1146 = 12;
			}
			break;
		case 12:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
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
					__LIB_0__::func_325(&(uLocal_2499[0]));
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_S2VG", *iParam0, Global_35, 0, 0, 1, 1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
					__LIB_2__::func_73(iLocal_2502[0], &(uLocal_2499[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
					if (__LIB_7__::func_908(1, 2))
					{
						__LIB_8__::func_131(&Local_2160, 128);
					}
					iLocal_1146 = 15;
				}
			}
			break;
		case 13:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_227(-3.5f, 1, *iParam0, 1))
			{
				__LIB_0__::func_325(&(uLocal_2499[0]));
				if (__LIB_1__::func_205(Global_35, iLocal_75[0], 1, 0))
				{
					if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_153(Global_35, 1, 1, 0) == joaat("WEAPON_UNARMED"))
					{
						TASK::TASK_PLAY_ANIM(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_S2OT", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_1146 = 14;
			}
			break;
		case 14:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!__LIB_1__::func_322("LCMP_IG_S2OT"))
			{
				__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_IG_S2MNT", *iParam0, Global_35, 0, 0, 1, 1);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				iLocal_1146 = 15;
			}
			break;
		case 15:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			bVar6 = true;
			if (__LIB_7__::func_923(2048) && !__LIB_7__::func_972(&(Local_1039[5 /*7*/])))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_8__::func_132(&Local_2160, 65536);
				}
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3) && __LIB_2__::func_227(-3.5f, 1, *iParam0, 1))
				{
					__LIB_7__::func_941(4096);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					func_395(0, 1, 0);
					__LIB_7__::func_941(4096);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1400.86f, -205.41f, 102.34f, 2f, -1, false, false, false, false);
					__LIB_8__::func_38(iParam0);
					__LIB_7__::func_965(67108864);
					iLocal_1146 = 17;
				}
			}
			break;
		case 17:
			if (__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				if (__LIB_8__::func_254(Local_2160.f_138, &Local_2160, 60000, 1))
				{
					__LIB_2__::func_451(&(Local_750[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_412(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar5;
	vector3 vVar6[24];
	bool bVar9;
	vector3 vVar10[24];
	if (__LIB_8__::func_88(&Local_972, 1) && Local_972 == *iParam0)
	{
		if (iLocal_1146 < 17)
		{
			__LIB_8__::func_211();
			iLocal_1146 = 17;
		}
	}
	func_720();
	switch (iLocal_1146)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			if (__LIB_7__::func_908(Local_2160.f_136, 131072))
			{
				iVar0 = iLocal_1147;
				iLocal_1147 = iVar0 + 1;
				__LIB_8__::func_83(Local_2160.f_136, 131072);
			}
			else
			{
				__LIB_8__::func_82(Local_2160.f_136, 131072);
			}
			if (__LIB_7__::func_908(Local_2160.f_136, 16384))
			{
				__LIB_2__::func_73(iLocal_2502[0], &(uLocal_2499[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
			}
			if (func_324())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_39(), 262209, __LIB_8__::func_40(), __LIB_8__::func_41());
				iLocal_1032 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_42(), __LIB_8__::func_39(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_43(), 262209, __LIB_8__::func_40(), __LIB_8__::func_44());
				iLocal_1032 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_45(), __LIB_8__::func_43(), 1f, 0, false);
			}
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				__LIB_3__::func_623(&Local_698);
				Local_698.f_8 = { __LIB_8__::func_35() };
				Local_698.f_1 = *iParam0;
				Local_698.f_21 = 1f;
				__LIB_1__::func_336(&(Local_698.f_23), 128);
				__LIB_3__::func_995(&Local_698, 129);
				iLocal_1146 = 1;
			}
			else
			{
				func_394(0);
				func_395(0, 1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1032))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_1032, __LIB_0__::func_196(func_324(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(func_324(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_1146 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			if (__LIB_3__::func_995(&Local_698, 129))
			{
				func_394(0);
				func_395(0, 1, 1);
				__LIB_7__::func_922(1);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1032))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_1032, __LIB_0__::func_196(func_324(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, __LIB_5__::func_263(func_324(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_1146 = 4;
			}
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				iVar1 = __LIB_0__::func_982(1);
				if (iVar1 > 3 || (iVar1 == 3 && __LIB_7__::func_907(1, 128)))
				{
					__LIB_8__::func_85(Local_2160.f_136, 4096);
				}
				func_395(0, 1, 1);
				__LIB_8__::func_239(1, 0);
				if (__LIB_7__::func_923(2))
				{
					iLocal_1146 = 6;
				}
				else
				{
					iLocal_1146 = 7;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(-1f))
			{
				__LIB_0__::func_325(&(uLocal_2499[0]));
				iLocal_1146 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			if (__LIB_8__::func_109(iParam0, 0, func_324()) && __LIB_8__::func_118(iParam0, func_793(), 10f, 0, func_794(), 1, -1243035987))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				__LIB_7__::func_922(4096);
				__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
				switch (iLocal_1147)
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
				__LIB_3__::func_154(&(Local_2160.f_35), &cVar2, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_1146 = 8;
			}
			break;
		case 8:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
			if (func_324())
			{
				func_395(0, 1, 1);
				__LIB_8__::func_239(0, 0);
				iLocal_1146 = 5;
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && __LIB_2__::func_227(-3.5f, 1, 0, 0)) && (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("BREAKOUT")) || TASK::_0x02EBBB3989B7E695(*iParam0)))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, 0, -1f, -1f, -1f);
				iLocal_1146 = 2;
			}
			break;
		case 2:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				if (iLocal_1147 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iLocal_1147)
				{
					case 2:
						StringCopy(&cVar6, "LCMP_IG_NIACTB", 24);
						break;
					case 3:
						StringCopy(&cVar6, "LCMP_IG_NICL", 24);
						break;
				}
				__LIB_3__::func_154(&(Local_2160.f_35), &cVar6, *iParam0, Global_35, 0, 0, 1, 1);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_486(), func_796(0), Global_35, iVar5, 8f, -8f, 0, 0f, false, true, -1f, 0, 0, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_735);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
				func_395(0, 1, 1);
				__LIB_8__::func_239(0, 0);
				iLocal_1146 = 5;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
			if (__LIB_8__::func_257(iParam0))
			{
				__LIB_8__::func_239(1, 0);
				func_395(0, 1, 1);
				func_756(0, 0, 1);
				__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
			}
			if (__LIB_7__::func_929(-2147483648))
			{
				switch (iLocal_971)
				{
					case 0:
						switch (iLocal_1147)
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
						__LIB_3__::func_154(&(Local_2160.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_395(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iLocal_1147)
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
						__LIB_3__::func_154(&(Local_2160.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_395(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && __LIB_1__::func_313(&(vLocal_1117[3 /*3*/]), 12.5f))
				{
					func_395(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					__LIB_8__::func_239(0, 0);
					if (!func_324())
					{
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						TASK::_0x9C8F42A5D1859DC1(iLocal_75[0]);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 3f, -1, false, false, false, false);
					}
					__LIB_7__::func_941(4096);
					__LIB_0__::func_325(&(uLocal_2499[0]));
					__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
					iLocal_1146 = 16;
				}
			}
			break;
		case 16:
			if (__LIB_1__::func_313(&(vLocal_1117[3 /*3*/]), 60f))
			{
				if (func_324())
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				}
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				func_395(0, 1, 0);
				func_756(0, 0, 1);
				__LIB_8__::func_38(iParam0);
				iLocal_1146 = 17;
			}
			break;
		case 17:
			if (!(__LIB_8__::func_88(&Local_972, 1) && Local_972 == *iParam0))
			{
				if (__LIB_2__::func_763(Local_2160.f_138, 0))
				{
					__LIB_8__::func_124(Local_2160.f_138, 1);
					__LIB_2__::func_451(&(Local_750[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_413(int iParam0)
{
	char cVar0[64];
	bool bVar8;
	vector3 vVar9[24];
	vector3 vVar12[24];
	func_720();
	switch (iLocal_1146)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			__LIB_7__::func_932(1073741824 /* Float: 2f */);
			if (!__LIB_7__::func_908(Local_2160.f_136, 131072))
			{
				__LIB_8__::func_82(Local_2160.f_136, 131072);
			}
			else
			{
				__LIB_8__::func_83(Local_2160.f_136, 131072);
			}
			if (func_324())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_39(), 262209, __LIB_8__::func_40(), __LIB_8__::func_41());
				iLocal_1032 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_42(), __LIB_8__::func_39(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_8__::func_43(), 262209, __LIB_8__::func_40(), __LIB_8__::func_44());
				iLocal_1032 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_8__::func_45(), __LIB_8__::func_43(), 1f, 0, false);
			}
			if (__LIB_7__::func_923(64) || __LIB_7__::func_929(2097152))
			{
				__LIB_3__::func_623(&Local_698);
				Local_698.f_8 = { -1402.34f, -207.62f, 101.88f };
				Local_698.f_1 = *iParam0;
				Local_698.f_21 = 1f;
				__LIB_1__::func_336(&(Local_698.f_23), 128);
				__LIB_3__::func_995(&Local_698, 129);
				iLocal_1146 = 1;
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1032))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_1032, __LIB_0__::func_196(func_324(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(func_324(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				if (func_324())
				{
				}
				iLocal_1146 = 4;
			}
			break;
		case 1:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			if (__LIB_3__::func_995(&Local_698, 129))
			{
				__LIB_7__::func_922(1);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1032))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_1032, __LIB_0__::func_196(func_324(), __LIB_8__::func_46(), __LIB_8__::func_47()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, __LIB_5__::func_263(func_324(), __LIB_8__::func_42(), __LIB_8__::func_45()), 1.5f, -1, false, false, false, false);
				}
				iLocal_1146 = 4;
			}
			break;
		case 4:
			if (__LIB_7__::func_923(33554432))
			{
				__LIB_8__::func_85(Local_2160.f_136, 4096);
				func_395(0, 1, 1);
				if (__LIB_7__::func_923(2))
				{
					iLocal_1146 = 6;
				}
				else
				{
					iLocal_1146 = 7;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(-1f))
			{
				__LIB_0__::func_325(&(uLocal_2499[0]));
				iLocal_1146 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			if (__LIB_8__::func_109(iParam0, 1, func_324()))
			{
				if (__LIB_8__::func_118(iParam0, func_798(iParam0), 10f, 0, 0, 1, -1243035987))
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					__LIB_7__::func_922(4096);
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_82(Local_2160.f_136, 16777216);
					Local_104.f_40 = *iParam0;
					Local_104.f_43 = 4f;
					Local_104.f_41 = 4f;
					Local_104.f_39 = Global_1392194[Local_2160.f_136 /*10*/].f_6;
					if (func_324())
					{
						StringCopy(&cVar0, "LCMPF_IG1_ALT", 64);
					}
					else
					{
						StringCopy(&cVar0, "LCMPF_IG1", 64);
					}
					__LIB_3__::func_154(&(Local_2160.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_1146 = 5;
				}
			}
			break;
		case 5:
			func_800(iParam0);
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
			if (__LIB_8__::func_257(iParam0))
			{
				func_395(0, 1, 1);
				func_758(0, 0);
				__LIB_8__::func_239(1, 0);
				__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
			}
			if (__LIB_7__::func_929(-2147483648))
			{
				switch (iLocal_971)
				{
					case 1:
						if (func_324())
						{
							StringCopy(&cVar9, "LCMP_ANGRRES2", 24);
						}
						else
						{
							StringCopy(&cVar9, "LCMP_ANGRRES1", 24);
						}
						__LIB_3__::func_154(&(Local_2160.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						func_395(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && __LIB_1__::func_313(&(vLocal_1117[3 /*3*/]), 12.5f))
				{
					func_395(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					__LIB_8__::func_239(0, 0);
					iLocal_1146 = 8;
				}
			}
			break;
		case 8:
			func_800(iParam0);
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (func_324())
				{
					__LIB_8__::func_124(Local_2160.f_138, 1);
					__LIB_2__::func_451(&(Local_750[0 /*21*/]), 0);
					__LIB_8__::func_38(iParam0);
					StringCopy(&cVar12, "LCMPF_IG1_ALTR", 24);
					iLocal_1146 = 17;
				}
				else
				{
					StringCopy(&cVar12, "LCMPF_IG1_R", 24);
					iLocal_1146 = 16;
				}
				__LIB_3__::func_154(&(Local_2160.f_35), &cVar12, *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_7__::func_941(4096);
				__LIB_0__::func_325(&(uLocal_2499[0]));
			}
			break;
		case 16:
			func_800(iParam0);
			if (__LIB_1__::func_313(&(vLocal_1117[3 /*3*/]), 60f))
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				__LIB_8__::func_124(Local_2160.f_138, 1);
				__LIB_2__::func_451(&(Local_750[0 /*21*/]), 0);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				__LIB_8__::func_38(iParam0);
				iLocal_1146 = 17;
			}
			break;
		case 17:
			break;
	}
	return 0;
}

int func_414(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (iLocal_1145 >= 8)
	{
		func_801(iParam0);
	}
	func_802();
	switch (iLocal_1145)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
			{
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1398.107f, -213.5636f, 102.7725f, 0f, 0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (__LIB_7__::func_908(Local_2160.f_136, 1024))
			{
				if (func_803(iParam0))
				{
					__LIB_8__::func_239(0, 1);
					func_395(0, 1, 0);
					func_756(0, 0, 1);
					__LIB_7__::func_934(256);
					__LIB_8__::func_38(iParam0);
					__LIB_7__::func_952(&(Local_1039[1 /*7*/]));
					__LIB_8__::func_188(&(Local_1039[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
					__LIB_8__::func_85(Local_2160.f_136, 4096);
					iLocal_1145 = 15;
				}
			}
			else if (func_804() && func_805(iParam0))
			{
				__LIB_7__::func_934(67108864);
				func_395(0, 1, 0);
				__LIB_8__::func_239(1, 1);
				func_806(0);
				iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1399.521f, -209.5342f, 104.064f, 0f, 0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1399.238f, -220.5899f, 102.4817f, 0f, 0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				POPULATION::_0xB56D41A694E42E86(iLocal_75[1], 0, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
				iLocal_1145 = 1;
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
					iLocal_1145 = 6;
				}
				else
				{
					iLocal_1145 = 2;
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_703(0))
			{
				func_772("LOG_OBJ01", 1);
				__LIB_2__::func_73(*iParam0, &(uLocal_2499[0]), -89429847, 580546400, 0, __LIB_7__::func_978());
				if (!__LIB_7__::func_908(Local_2160.f_136, 1024))
				{
					iLocal_1145 = 2;
				}
				else if (func_803(iParam0))
				{
					iLocal_1145 = 8;
				}
			}
			break;
		case 2:
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			if (func_807(0))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[8 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_1157.f_690[8 /*12*/].f_8));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[7 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_1157.f_690[7 /*12*/].f_8));
					}
				}
				if (((__LIB_0__::func_163(Global_35, 242628503) || __LIB_0__::func_163(Global_35, 501393341)) || __LIB_0__::func_163(Global_35, 1553520516)) || __LIB_0__::func_163(Global_35, 1920417248))
				{
					MAP::DISPLAY_RADAR(false);
				}
				__LIB_0__::func_11(iParam0);
				if (__LIB_1__::func_489(&(Local_750[0 /*21*/]), 1))
				{
					__LIB_8__::func_49();
				}
				if (iLocal_971 == 0)
				{
					__LIB_8__::func_49();
					__LIB_7__::func_922(2);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					__LIB_0__::func_7(&(Local_1005.f_3), 4);
					__LIB_4__::func_174(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 1000, 0f, 0, 1, 1084227584 /* Float: 5f */);
					__LIB_8__::func_147(&(Local_1039[5 /*7*/]), __LIB_2__::func_963(Local_2160.f_138), "U_M_M_BiVForeman_01", 1);
					__LIB_8__::func_147(&(Local_1039[5 /*7*/]), Global_35, "ARTHUR", 1);
					__LIB_8__::func_148(&(Local_1039[5 /*7*/]), Local_1157.f_690[3 /*12*/].f_8, "p_knife02x");
					__LIB_8__::func_148(&(Local_1039[5 /*7*/]), Local_1157.f_690[4 /*12*/].f_8, "p_woodWittle01x");
					StringCopy(&(Local_1039[5 /*7*/].f_4), "Loop_Look_Idle", 24);
					__LIB_8__::func_16(&(Local_1039[5 /*7*/]));
					__LIB_8__::func_151(&(Local_1039[5 /*7*/]), "pl_Back_To_Scenario");
					__LIB_3__::func_623(&Local_698);
					Local_698.f_1 = Global_35;
					Local_698.f_8 = { func_814() };
					Local_698.f_19 = func_815();
					__LIB_1__::func_336(&(Local_698.f_23), 17921);
					__LIB_8__::func_131(&Local_2160, 65536);
					__LIB_3__::func_995(&Local_698, 129);
					__LIB_8__::func_82(Local_2160.f_136, 524288);
					__LIB_7__::func_951(iParam0);
					func_395(0, 0, 1);
					__LIB_3__::func_154(&(Local_2160.f_35), "LCMP_INT_GRT", Global_35, *iParam0, 0, 0, 1, 1);
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					iLocal_1145 = 3;
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_49();
			__LIB_4__::func_174(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 1000, 0f, 0, 1, 1084227584 /* Float: 5f */);
			__LIB_0__::func_11(iParam0);
			__LIB_3__::func_995(&Local_698, 129);
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_2__::func_227(-10f, 1, 0, 0))
			{
				if (!__LIB_7__::func_923(4096))
				{
					__LIB_3__::func_154(&(Local_2160.f_35), "LOG_LCMP_INT_LI", *iParam0, Global_35, 0, 0, 1, 1);
					__LIB_0__::func_769();
					__LIB_7__::func_922(4096);
					__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
					__LIB_7__::func_961(&Local_972, 4);
					iLocal_1145 = 4;
				}
			}
			break;
		case 4:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_49();
			__LIB_4__::func_174(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 1000, 0f, 0, 1, 1084227584 /* Float: 5f */);
			__LIB_0__::func_11(iParam0);
			__LIB_3__::func_995(&Local_698, 129);
			if (__LIB_1__::func_313(&(vLocal_1117[3 /*3*/]), 1.5f))
			{
				__LIB_8__::func_359(&(Local_1039[5 /*7*/]));
				__LIB_3__::func_154(&(Local_2160.f_35), "LOG_LCMP_INT_LB", Global_35, *iParam0, 0, 0, 1, 1);
				iLocal_1145 = 5;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_49();
			__LIB_4__::func_174(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 1000, 0f, 0, 1, 1084227584 /* Float: 5f */);
			__LIB_0__::func_11(iParam0);
			__LIB_3__::func_995(&Local_698, 129);
			if (__LIB_2__::func_598(*iParam0, Local_1039[5 /*7*/], "U_M_M_BiVForeman_01", 0, 0, 1, 0))
			{
				if (!__LIB_7__::func_923(4096))
				{
					__LIB_0__::func_769();
					__LIB_7__::func_922(4096);
					__LIB_7__::func_961(&Local_972, 4);
				}
				__LIB_7__::func_922(4194304);
				__LIB_7__::func_911(&Local_156, 135729);
				__LIB_0__::func_172(Local_156.f_4);
				Local_156.f_4 = iLocal_75[11];
				__LIB_8__::func_354(&Local_156, -1393.122f, -207.5938f, 101.5584f, -5.5f, 0);
				__LIB_0__::func_7(&(Local_156.f_213), 32);
				func_822(func_821(), &Local_156);
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 1, 106);
				__LIB_2__::func_919(Local_1157.f_690[14 /*12*/].f_8, 1, 1);
				iLocal_1145 = 7;
			}
			break;
		case 7:
			__LIB_8__::func_49();
			if (!__LIB_2__::func_763(Local_2160.f_138, 0))
			{
				__LIB_8__::func_123(Local_2160.f_138, 1, 1);
			}
			if (!__LIB_7__::func_923(4096))
			{
				__LIB_7__::func_941(512);
				__LIB_0__::func_769();
				__LIB_7__::func_922(4096);
				__LIB_7__::func_961(&Local_972, 4);
			}
			if (!__LIB_7__::func_929(4096) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_156.f_156) >= 0.587f)
			{
				func_823();
			}
			if (func_822(func_821(), &Local_156) && func_803(iParam0))
			{
				__LIB_7__::func_941(512);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				__LIB_8__::func_131(&Local_2160, 65536);
				__LIB_7__::func_932(4096);
				__LIB_2__::func_810(11, 128);
				MAP::DISPLAY_RADAR(false);
				__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
				iVar1 = 0;
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_2505[0], "SKEL_ROOT");
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_1157.f_690[14 /*12*/].f_8, iLocal_2505[0], iVar1, iVar0, 0f, 0f, 0f, 0f, -0.6f, 1f, 0f, 0f, 180f, 0f, 1, 1, 0, 1, 2, 0, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
				__LIB_8__::func_796(&Local_680, "LOG_CTXT1", __LIB_2__::func_460(1), 0, 2, BUILTIN::CEIL((12.5f * 1000f)), 1, -1, -1);
				iLocal_1145 = 8;
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_8__::func_198(11, 2);
			if (__LIB_0__::func_139(Local_2160.f_32) && !func_827(101))
			{
				__LIB_1__::func_221(Local_2160.f_32, 0, 1);
			}
			if (__LIB_4__::func_813(&Local_680))
			{
				if (__LIB_8__::func_802(&Local_680))
				{
					if (__LIB_8__::func_349(&Local_680))
					{
						__LIB_1__::func_943(11, 128);
						__LIB_14__::func_352(11, 1);
						__LIB_8__::func_199(11, 2);
						__LIB_7__::func_922(536870912);
						__LIB_8__::func_191(&(Local_1039[0 /*7*/]), "PBL_SEARCHENTER", 1);
						__LIB_8__::func_192(&(Local_1039[0 /*7*/]), "Internal_Loop");
						bVar2 = true;
						__LIB_8__::func_129(&Local_2160);
						if (__LIB_0__::func_139(Local_680.f_5))
						{
							__LIB_1__::func_221(Local_680.f_5, 0, 1);
							__LIB_1__::func_382(Local_680.f_5, 0, 1);
						}
						if (__LIB_0__::func_139(Local_680.f_6))
						{
							__LIB_1__::func_221(Local_680.f_6, 0, 1);
							__LIB_1__::func_382(Local_680.f_6, 0, 1);
						}
						iLocal_1145 = 9;
					}
					else if (__LIB_8__::func_350(&Local_680))
					{
						bVar2 = true;
						__LIB_3__::func_154(&(Local_2160.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
						__LIB_1__::func_943(11, 128);
						__LIB_8__::func_129(&Local_2160);
						__LIB_7__::func_934(16384);
						if (__LIB_0__::func_139(Local_680.f_5))
						{
							__LIB_1__::func_221(Local_680.f_5, 0, 1);
							__LIB_1__::func_382(Local_680.f_5, 0, 1);
						}
						if (__LIB_0__::func_139(Local_680.f_6))
						{
							__LIB_1__::func_221(Local_680.f_6, 0, 1);
							__LIB_1__::func_382(Local_680.f_6, 0, 1);
						}
						iLocal_1145 = 13;
					}
				}
			}
			if (bVar2)
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[1]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[1]);
				__LIB_0__::func_172(iLocal_75[1]);
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
			}
			break;
		case 9:
			if (__LIB_8__::func_24(&(Local_1039[0 /*7*/]), "Internal_Loop"))
			{
				__LIB_8__::func_196(&(Local_1039[0 /*7*/]), "Internal_Loop");
				__LIB_8__::func_361(&Local_680);
			}
			if (__LIB_7__::func_923(1073741824 /* Float: 2f */) && !__LIB_4__::func_852(11))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				__LIB_8__::func_131(&Local_2160, 65536);
				__LIB_8__::func_198(11, 2);
				if (__LIB_7__::func_908(Local_2160.f_136, 4))
				{
					__LIB_2__::func_810(11, 128);
					Local_1157.f_690[0 /*12*/].f_7 = func_838();
					Local_1157.f_690[6 /*12*/].f_7 = __LIB_7__::func_901();
					STREAMING::REQUEST_MODEL(func_838(), false);
					STREAMING::REQUEST_MODEL(__LIB_7__::func_901(), false);
					iLocal_1145 = 11;
				}
				else
				{
					__LIB_3__::func_154(&(Local_2160.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
					iLocal_1145 = 13;
				}
			}
			break;
		case 10:
			if (__LIB_3__::func_995(&Local_698, 129))
			{
				iLocal_1145 = 11;
			}
			break;
		case 11:
			if (func_840())
			{
				func_841();
				iLocal_1145 = 12;
			}
			break;
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[0 /*12*/].f_8))
			{
				if (!__LIB_7__::func_933(256))
				{
					__LIB_8__::func_147(&(Local_1039[1 /*7*/]), Global_35, "arthur", 1);
					__LIB_8__::func_148(&(Local_1039[1 /*7*/]), Local_1157.f_690[3 /*12*/].f_8, "p_knife02x");
					__LIB_8__::func_148(&(Local_1039[1 /*7*/]), Local_1157.f_690[4 /*12*/].f_8, "p_woodWittle01x");
					__LIB_8__::func_148(&(Local_1039[1 /*7*/]), Local_1157.f_690[6 /*12*/].f_8, "p_foldedBill01x");
					__LIB_8__::func_147(&(Local_1039[1 /*7*/]), *iParam0, "U_M_M_BIVFOREMAN_01", 1);
					__LIB_8__::func_148(&(Local_1039[1 /*7*/]), Local_1157.f_690[0 /*12*/].f_8, "ITEM");
					__LIB_8__::func_191(&(Local_1039[1 /*7*/]), "pbl_AgreeToSell", 1);
				}
				else
				{
					__LIB_8__::func_147(&(Local_1039[1 /*7*/]), Global_35, "player", 1);
					__LIB_8__::func_148(&(Local_1039[1 /*7*/]), Local_1157.f_690[6 /*12*/].f_8, "MONEY");
					__LIB_8__::func_148(&(Local_1039[1 /*7*/]), Local_1157.f_690[0 /*12*/].f_8, "Item");
					__LIB_8__::func_147(&(Local_1039[1 /*7*/]), *iParam0, "male", 1);
				}
				iLocal_1145 = 13;
			}
			break;
		case 13:
			__LIB_0__::func_325(&(uLocal_2499[0]));
			if (__LIB_7__::func_908(Local_2160.f_136, 4))
			{
				if (!__LIB_7__::func_923(4096))
				{
					__LIB_3__::func_154(&(Local_2160.f_35), "LOG_LCMP_INT_a2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				__LIB_8__::func_16(&(Local_1039[1 /*7*/]));
				__LIB_7__::func_952(&(Local_1039[0 /*7*/]));
				if (!__LIB_7__::func_933(256))
				{
					__LIB_8__::func_192(&(Local_1039[1 /*7*/]), "Internal_Loop");
				}
				else if (CAM::DOES_CAM_EXIST(iLocal_1143))
				{
					CAM::SET_CAM_ACTIVE(iLocal_1143, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				iLocal_1145 = 14;
			}
			else if (!__LIB_1__::func_322("LOG_LCMP_INT_b0"))
			{
				__LIB_8__::func_361(&Local_680);
				__LIB_8__::func_191(&(Local_1039[0 /*7*/]), "pbl_RefuseToSell", 1);
				__LIB_8__::func_192(&(Local_1039[0 /*7*/]), "Internal_Loop");
				__LIB_7__::func_934(16384);
				iLocal_1145 = 14;
			}
			break;
		case 14:
			if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("OBJECTEXCHANGE"))) && ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[0 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_1157.f_690[0 /*12*/].f_8));
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) && ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[6 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_1157.f_690[6 /*12*/].f_8));
				}
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BREAKOUT")))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_8__::func_132(&Local_2160, 65536);
				}
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
			}
			if (__LIB_7__::func_972(&(Local_1039[0 /*7*/])) && (__LIB_7__::func_933(16384) || __LIB_7__::func_972(&(Local_1039[1 /*7*/]))))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_8__::func_132(&Local_2160, 65536);
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_8__::func_131(&Local_2160, 128);
				__LIB_1__::func_943(11, 128);
				if (CAM::DOES_CAM_EXIST(iLocal_1143))
				{
					CAM::DESTROY_CAM(iLocal_1143, false);
				}
				__LIB_8__::func_188(&(Local_1039[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				__LIB_7__::func_941(2048);
				__LIB_7__::func_965(16384);
				__LIB_8__::func_50(11);
				__LIB_7__::func_934(256);
				__LIB_7__::func_941(536870912);
				__LIB_7__::func_941(4096);
				func_106(1);
				__LIB_7__::func_965(67108864);
				__LIB_8__::func_239(0, 1);
				func_395(0, 1, 0);
				func_756(0, 0, 1);
				__LIB_8__::func_199(11, 2);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
				__LIB_8__::func_38(iParam0);
				iLocal_1145 = 15;
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

void func_415(var uParam0, int iParam1)
{
	if ((iLocal_745 % 5) != 0)
	{
		return;
	}
}

void func_420()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	if (__LIB_7__::func_929(8192))
	{
		iVar1 = iLocal_2647;
		iVar2 = iLocal_2647 + 4;
		if (iVar2 >= iLocal_2543)
		{
			iVar2 = (iLocal_2543 - 1);
		}
		iLocal_2647 = iVar1;
		while (iLocal_2647 <= iVar2)
		{
			if (!__LIB_0__::func_29(iLocal_2527[iLocal_2647]))
			{
			}
			else
			{
				iVar0 = __LIB_2__::func_963(iLocal_2527[iLocal_2647]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					__LIB_2__::func_965(iLocal_2527[iLocal_2647], 0, 1, 0, 1, 1);
					__LIB_2__::func_56(iVar0, 1, 1);
					if (!__LIB_0__::func_163(iVar0, 518218985))
					{
						if (!__LIB_7__::func_923(32))
						{
							func_755(&iLocal_2647);
						}
						else
						{
							vVar3 = { __LIB_8__::func_212(iLocal_75[4], 100, 1, 0) };
							TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
							if (!__LIB_0__::func_86(vVar3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE((30f / 2f), 30f), 0, 40000f);
							}
							__LIB_2__::func_45(0, iLocal_2479[0], -1);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
							TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_735);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
						}
					}
					if (!__LIB_7__::func_923(32))
					{
						iLocal_2527[iLocal_2647] = -1;
					}
				}
			}
			iLocal_2647++;
		}
		if (iLocal_2647 >= (iLocal_2543 - 1))
		{
			__LIB_7__::func_928(8192);
			if (!__LIB_7__::func_923(32))
			{
				iLocal_2543 = 0;
			}
		}
	}
}

void func_425()
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
				if ((__LIB_7__::func_923(32) && !__LIB_7__::func_924(&Local_2160, 2)) && iVar4 == iLocal_2479[0])
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

void func_427(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iLocal_2543)
	{
		if (!__LIB_0__::func_29(iLocal_2527[iVar1]))
		{
		}
		else
		{
			iVar0 = __LIB_2__::func_963(iLocal_2527[iVar1]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				__LIB_2__::func_965(iLocal_2527[iVar1], 0, 1, 0, 1, 1);
				__LIB_2__::func_56(iVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

void func_457(int iParam0)
{
	__LIB_1__::func_336(&(Global_40.f_9096[Local_2160.f_136 /*12*/].f_6), __LIB_0__::func_771(iParam0));
}

bool func_458(int iParam0)
{
	return __LIB_0__::func_27(Global_40.f_9096[Local_2160.f_136 /*12*/].f_6, __LIB_0__::func_771(iParam0));
}

void func_459(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { __LIB_8__::func_51(*iParam0) };
	fVar3 = __LIB_8__::func_52(*iParam0);
	uLocal_1026[*iParam0] = TASK::CREATE_SCENARIO_POINT(__LIB_8__::func_18(), vVar0, fVar3, 0, 0, 0);
	TASK::_0xE69FDA40AAC3EFC0(uLocal_1026[*iParam0], 0);
	TASK::_0xA7479FB665361EDB(uLocal_1026[*iParam0], 0);
	TASK::_SET_SCENARIO_POINT_FLAG(uLocal_1026[*iParam0], 19, true);
	iLocal_736[*iParam0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_736[*iParam0], 534496, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_736[*iParam0], 534496, 0, 0, -1, -1, 0);
	if (!__LIB_1__::func_565(&(uLocal_2311[*iParam0])))
	{
		uLocal_2311[*iParam0] = GRAPHICS::_0xFA50F79257745E74(vVar0, 3f, 1, 36, 0);
	}
}

bool func_460(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_1014[iParam0]))
	{
		uLocal_1020[iParam0] = ENTITY::_0x6F3068258A499E52(__LIB_8__::func_154(iParam0), __LIB_8__::func_144(iParam0), 9);
		iLocal_1014[iParam0] = OBJECT::GET_RAYFIRE_MAP_OBJECT(__LIB_8__::func_144(iParam0), 5f, __LIB_8__::func_155(iParam0));
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_1014[iParam0]))
	{
		uLocal_1020[iParam0] = uLocal_1020[iParam0];
		if (((!func_854(iParam0) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[iParam0]) != 4) && !__LIB_8__::func_139(iParam0)) && !func_458(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[iParam0], 4);
		}
		else if (__LIB_7__::func_923(64))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[iParam0], 4);
		}
		else if (func_458(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[iParam0], 9);
			__LIB_8__::func_156(iParam0);
			__LIB_8__::func_149(iParam0);
		}
		if (func_854(iParam0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_466(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_1026[iParam0]))
	{
		TASK::_DELETE_SCENARIO_POINT(uLocal_1026[iParam0]);
		__LIB_0__::func_172(iLocal_736[iParam0]);
	}
	if (bParam1)
	{
		__LIB_2__::func_353(&(uLocal_2311[iParam0]), 1);
	}
}

char* func_474(int iParam0)
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
				if ((iLocal_98 > 1 && __LIB_7__::func_908(1, 2)) && !__LIB_7__::func_908(Local_2160.f_136, 16384))
				{
					return "PBL_FOREMAN_STAGE2_TALK_INTRO";
				}
				else if (func_324())
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
							if (func_324())
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
							if (func_324())
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
						if (!__LIB_7__::func_907(Local_2160.f_136, 64))
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

void func_476()
{
	__LIB_8__::func_234(5, &Local_2160, 5);
	if (__LIB_7__::func_923(64))
	{
		iLocal_1147 = 2;
	}
	else if (__LIB_7__::func_924(&Local_2160, 256))
	{
		iLocal_1147 = 2;
	}
	else if (__LIB_1__::func_985())
	{
		iLocal_1147 = 0;
	}
	else
	{
		iLocal_1147 = 2;
	}
}

Vector3 func_480(int iParam0, int iParam1)
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
Vector3 func_481(int iParam0)
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

char* func_486()
{
	if (func_324())
	{
		return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_OUTDOOR_JOB";
	}
	return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_INDOOR_JOB";
}

int func_526(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_867(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_868((386 + iVar28), 1);
			if (func_869(iParam0, &Var0, iVar5, 0))
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
						return 0;
					}
					__LIB_1__::func_543(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

bool func_585(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1935630.f_34[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1935630.f_34[0], true))
	{
		return true;
	}
	iVar0 = func_352(Global_1935630.f_34[0], 0);
	if (__LIB_0__::func_29(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			__LIB_7__::func_949(&iVar1, &iVar2, 0);
		}
		else
		{
			func_161(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_587()
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
	if (__LIB_2__::func_763(Local_2160.f_138, 0))
	{
		return true;
	}
	return false;
}

bool func_591(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	int iVar0[9];
	var uVar10;
	int iVar41;
	int iVar42;
	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(iParam1);
	iVar41 = func_703(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
	if (iVar41 <= 0)
	{
		return false;
	}
	iVar42 = __LIB_4__::func_194(&iVar0, vParam2, 0, 1, 0, -1);
	if (iVar42 < 0)
	{
		return false;
	}
	*iParam0 = iVar0[iVar42];
	if (bParam6)
	{
		while (!PED::IS_PED_FACING_PED(iVar0[iVar42], Global_35, fParam7))
		{
			iVar0[iVar42] = 0;
			iVar42 = __LIB_4__::func_194(&iVar0, vParam2, 0, 1, 0, -1);
			if (iVar42 < 0)
			{
			}
		else
		{
			}
		}
	}
	return true;
}

int func_637(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_161(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return __LIB_1__::func_690(iParam0, uVar0, iVar1, bParam2);
}

int func_649(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_969(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_667(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iLocal_1149[iParam4] > 3 && iLocal_1149[iParam4] < 8)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam2, 3)) || (!ENTITY::IS_ENTITY_DEAD(*iParam3) && !TASK::GET_IS_TASK_ACTIVE(*iParam3, 3)))
		{
			iVar0 = -1;
			if (!__LIB_8__::func_88(&Local_972, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam2, 3))
				{
					Local_972 = __LIB_2__::func_963(__LIB_7__::func_964(9, 0, *iParam0));
					iVar0 = 0;
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam3, 3))
				{
					Local_972 = *iParam3;
					iVar0 = 1;
				}
				if (__LIB_2__::func_215(__LIB_2__::func_963(__LIB_7__::func_964(9, iVar0, *iParam0)), Global_35, 0, 5f, 0))
				{
					func_292(&Local_972, &Local_2160, 2048, 54329, 0, 0);
				}
			}
			__LIB_8__::func_183(&(Local_1039[(9 + iParam4) /*7*/]), *iParam2, "PED1");
			func_679(9, 0, *iParam0, 0 == iVar0);
			__LIB_8__::func_183(&(Local_1039[(9 + iParam4) /*7*/]), *iParam3, "PED2");
			func_679(9, 1, *iParam0, 1 == iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[(15 + *iParam1) /*12*/].f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1157.f_690[(15 + *iParam1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[(15 + *iParam1) /*12*/].f_8, true);
				}
				else
				{
					__LIB_8__::func_183(&(Local_1039[(9 + iParam4) /*7*/]), Local_1157.f_690[(15 + *iParam1) /*12*/].f_8, "SAW");
					ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[(15 + *iParam1) /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(Local_1157.f_690[(15 + *iParam1) /*12*/].f_8);
				}
			}
			__LIB_7__::func_952(&(Local_1039[(9 + iParam4) /*7*/]));
			iLocal_1149[iParam4] = 10;
		}
	}
}

void func_668(int iParam0, int iParam1)
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
			if (!__LIB_8__::func_58(&(Local_1039[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)) && !__LIB_8__::func_60(&(Local_1039[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					__LIB_8__::func_26(&(Local_1039[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (__LIB_8__::func_58(&(Local_1039[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				__LIB_8__::func_61(&(Local_1039[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_669(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2[24];
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return;
	}
	if (__LIB_7__::func_963(&(Local_1039[(9 + iParam2) /*7*/])))
	{
		func_988(iParam0, iParam1, iParam2);
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
		if (Local_972 == *iParam0 || Local_972 == *iParam1)
		{
			func_339(iParam2);
			iLocal_1149[iParam2] = 8;
			return;
		}
		if (__LIB_7__::func_933(__LIB_8__::func_62(iParam2)))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1039[(9 + iParam2) /*7*/].f_1)) && __LIB_8__::func_34(&(Local_1039[(9 + iParam2) /*7*/])))
			{
				__LIB_8__::func_240(&(Local_1039[(9 + iParam2) /*7*/]), 1, 1);
				StringCopy(&(Local_1039[(9 + iParam2) /*7*/].f_1), "", 24);
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
				cVar2 = { __LIB_8__::func_121(iParam0, iLocal_1033[iParam2], bVar1) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					__LIB_8__::func_151(&(Local_1039[(9 + iParam2) /*7*/]), &cVar2);
				}
			}
		}
	}
}

void func_679(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_7__::func_964(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		__LIB_8__::func_124(iVar0, 1);
		__LIB_8__::func_63(1, &Local_1157);
	}
}

void func_680()
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
	if (func_993(&iVar2, iVar1))
	{
		__LIB_8__::func_124(iVar1, 1);
		func_466(func_681(iVar0), 0);
		__LIB_8__::func_19(__LIB_8__::func_17(iVar0));
	}
}

int func_681(int iParam0)
{
	if ((!__LIB_7__::func_923(64) && __LIB_7__::func_907(Local_2160.f_136, 536870912)) && iParam0 == __LIB_7__::func_920())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && __LIB_7__::func_923(262144))
	{
		iParam0 = 4;
	}
	return iParam0;
}

void func_685()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_681(iVar0);
		if (__LIB_8__::func_139(iVar1) && (!__LIB_7__::func_923(64) || iVar1 != 0))
		{
			func_994(iVar0);
		}
		iVar0++;
	}
}

void func_687(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = (810 + iParam0);
	iVar1 = __LIB_2__::func_963(iVar0);
	iVar2 = func_681(iParam0);
	if (__LIB_8__::func_241(iVar2, &iVar1))
	{
		if (func_854(iVar2))
		{
			bVar3 = true;
		}
		else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[iVar2]) == 4)
		{
		}
		else
		{
			func_460(iVar2);
			return;
		}
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_1014[iVar2]))
	{
		func_460(iVar2);
		return;
	}
	if (func_996(iParam0, bVar3))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[iVar2], 6);
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
			func_457(iVar2);
		}
		return;
	}
	bVar3 = false;
}

void func_689(int iParam0)
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
	iVar2 = func_681(iParam0);
	if (__LIB_8__::func_140(iVar2))
	{
		return;
	}
	if (__LIB_8__::func_139(iVar2))
	{
		return;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_1026[iVar2]))
	{
		return;
	}
	if (!__LIB_0__::func_163(iVar1, 1435919172))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iVar1, uLocal_1026[iVar2], 0, -1, true, false, 0, false, -1f, false);
	}
}

void func_690(int iParam0, int iParam1)
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
		fVar0 = __LIB_0__::func_265(&(vLocal_1117[0 /*3*/]));
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
			__LIB_0__::func_268(&(vLocal_1117[0 /*3*/]), fVar0);
		}
		__LIB_8__::func_19(__LIB_8__::func_64(iParam1));
	}
}

bool func_691(int iParam0, var uParam1, int iParam2, int iParam3)
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
		if (iParam3 == __LIB_7__::func_920() && __LIB_7__::func_907(Local_2160.f_136, 1073741824 /* Float: 2f */))
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
		if (__LIB_0__::func_75(&(vLocal_1117[0 /*3*/])))
		{
			fVar1 = __LIB_0__::func_265(&(vLocal_1117[0 /*3*/]));
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
		if (__LIB_7__::func_907(Local_2160.f_136, 536870912) && iParam3 == __LIB_7__::func_920())
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

void func_692(int iParam0, int iParam1)
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
		iVar0 = func_681(iParam1);
		func_1000(iParam1);
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

void func_694()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_1003(iVar1);
		iVar0++;
	}
}

void func_697(int iParam0, bool bParam1)
{
	func_762(iParam0, 0, bParam1);
	func_762(iParam0, 1, bParam1);
	func_762(iParam0, 2, bParam1);
}

int func_703(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_1004(iParam0, iParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

bool func_704(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
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
						__LIB_4__::func_279(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
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
								__LIB_2__::func_478(uParam0->f_31, Global_35, uParam0->f_2[uParam0->f_23], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
							iVar4 = func_352(uParam0->f_31, 0);
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

void func_706()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[7]))
	{
		iLocal_75[7] = VOLUME::_CREATE_VOLUME_BOX(Local_1157.f_690[2 /*12*/], 0f, 0f, (Local_1157.f_690[2 /*12*/].f_3 + 90f), 5.768971f, 0.631176f, 3f);
		PED::_0x7C00CFC48A782DC0(iLocal_75[7], Local_1157.f_690[2 /*12*/].f_8, 0f, -0.5f, 0f, 0f, 0f, 90f, 2, 1);
		PATHFIND::_0x19C7567D2F2287D6(iLocal_75[7], 7);
	}
}

void func_707(var uParam0)
{
	int iVar0;
	if (__LIB_7__::func_963(&(Local_1039[6 /*7*/])) && ((iLocal_1152 > 2 && iLocal_1152 < 6) || (iLocal_1152 > 6 && iLocal_1152 < 9)))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))) && !TASK::GET_IS_TASK_ACTIVE(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), 3)) || (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0))) && !TASK::GET_IS_TASK_ACTIVE(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), 3)))
		{
			iVar0 = -1;
			if (!__LIB_8__::func_88(&Local_972, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))) && !TASK::GET_IS_TASK_ACTIVE(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), 3))
				{
					Local_972 = __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0));
					iVar0 = 0;
				}
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0))) && !TASK::GET_IS_TASK_ACTIVE(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), 3))
				{
					Local_972 = __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0));
					iVar0 = 1;
				}
				if (__LIB_2__::func_215(__LIB_2__::func_963(__LIB_7__::func_964(6, iVar0, 0)), Global_35, 0, 5f, 0))
				{
					func_292(&Local_972, &Local_2160, 2048, 54329, 0, 0);
				}
			}
			__LIB_8__::func_183(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "PED1");
			func_679(6, 0, 0, 0 == iVar0);
			__LIB_8__::func_183(&(Local_1039[6 /*7*/]), __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), "PED2");
			func_679(6, 1, 0, 1 == iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[23 /*12*/].f_8))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_1157.f_690[23 /*12*/].f_8))
				{
					ENTITY::DETACH_ENTITY(Local_1157.f_690[23 /*12*/].f_8, true, true);
					PHYSICS::ACTIVATE_PHYSICS(Local_1157.f_690[23 /*12*/].f_8);
				}
			}
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_1036[0]))
			{
				PHYSICS::DELETE_ROPE(&(iLocal_1036[0]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
			}
			__LIB_7__::func_952(&(Local_1039[6 /*7*/]));
			iLocal_1152 = 12;
		}
	}
}

Vector3 func_709()
{
	return 2.087f, 0f, -45.186f;
}

Vector3 func_710()
{
	return -1365.597f, -217.639f, 99.727f;
}

Vector3 func_711(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1368.462f, -219.3623f, 100.6008f;
	}
	else
	{
		return -1365.734f, -216.5983f, 100.7423f;
	}
	return 0f, 0f, 0f;
}

float func_712(int iParam0)
{
	if (iParam0 == 0)
	{
		return -114.06f;
	}
	else
	{
		return -156.72f;
	}
	return 0f;
}

Vector3 func_714()
{
	switch (iLocal_98)
	{
		case 1:
			return -1398.155f, -247.5334f, 98.20095f;
		case 2:
			return -1414.83f, -210f, 101.26f;
		case 3:
			return -1414.83f, -210f, 101.26f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_715()
{
	switch (iLocal_98)
	{
		case 1:
			return 89.01f;
		case 2:
			return 88.1f;
		case 3:
			return 88.1f;
		default:
			break;
	}
	return 0f;
}

int func_716()
{
	if (iLocal_98 == 1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_717()
{
	return -1399.61f, -246.8489f, 99.33929f;
}

void func_720()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[5 /*12*/].f_8))
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(Local_1157.f_690[5 /*12*/].f_8))
		{
			if (!__LIB_7__::func_929(65536))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[5 /*12*/].f_8, true);
			}
		}
		else if (__LIB_7__::func_929(65536))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_1157.f_690[5 /*12*/].f_8, false);
			PHYSICS::ACTIVATE_PHYSICS(Local_1157.f_690[5 /*12*/].f_8);
		}
	}
}

void func_721()
{
	if (!__LIB_7__::func_929(16777216))
	{
		if (func_1010())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1001))
			{
				__LIB_1__::func_422(&cLocal_1001, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			__LIB_7__::func_903(iLocal_2413, 0);
			__LIB_7__::func_932(16777216);
		}
	}
	else if (!func_1010())
	{
		__LIB_7__::func_903(iLocal_2413, 1);
		__LIB_0__::func_769();
		__LIB_7__::func_928(16777216);
	}
}

void func_722()
{
	if (iLocal_2317 >= 2 && (iLocal_2317 < 5 || __LIB_7__::func_923(512)))
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
				__LIB_8__::func_159(512, func_1015(Global_35, &iLocal_1156, __LIB_1__::func_977(), iLocal_75[4], 1097859072 /* Float: 15f */, 2, 1, 129, 0, 0, 1071644672 /* Float: 1.75f */));
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1156))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_1156, 136, true);
				}
			}
		}
		else
		{
			func_106(0);
		}
	}
}

bool func_730(int iParam0, int iParam1)
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
	if (!__LIB_7__::func_963(&(Local_1039[2 /*7*/])))
	{
		return false;
	}
	if (__LIB_3__::func_332(__LIB_8__::func_144(iParam1), 1) > 63f)
	{
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() % 3) == 0)
	{
		if (func_460(iParam1))
		{
			return true;
		}
	}
	else if (func_854(iParam1))
	{
		return true;
	}
	return false;
}

void func_736()
{
	__LIB_8__::func_85(Local_2160.f_136, 64);
	__LIB_8__::func_82(Local_2160.f_136, 512);
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
		if (!MAP::DOES_BLIP_EXIST(iLocal_2413))
		{
			__LIB_3__::func_652(__LIB_8__::func_30(), &iLocal_2413, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (__LIB_0__::func_139(*uParam0) && !__LIB_0__::func_572(*uParam0, 0))
		{
			__LIB_1__::func_221(*uParam0, 1, 1);
			MAP::SET_BLIP_COORDS(iLocal_2413, __LIB_8__::func_30());
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
		if (!MAP::DOES_BLIP_EXIST(iLocal_2413))
		{
			__LIB_3__::func_652(__LIB_8__::func_31(), &iLocal_2413, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (__LIB_0__::func_139(*uParam1) && !__LIB_0__::func_572(*uParam1, 0))
		{
			__LIB_1__::func_221(*uParam1, 1, 1);
			MAP::SET_BLIP_COORDS(iLocal_2413, __LIB_8__::func_31());
		}
	}
}

void func_743()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iLocal_2543)
	{
		iVar1 = __LIB_2__::func_963(iLocal_2527[iVar0]);
		PED::_0x935CF6E42BAF7F4D(iVar1);
		iVar0++;
	}
}

void func_755(int iParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(iLocal_2527[*iParam0])))
	{
		iVar0 = __LIB_2__::func_963(iLocal_2527[*iParam0]);
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
		if (__LIB_8__::func_70(iLocal_2527[*iParam0]))
		{
			func_1003(iLocal_2527[*iParam0]);
		}
		else
		{
			__LIB_2__::func_753(iLocal_2527[*iParam0], 0, 1, 0, 0);
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
	func_1047(iParam0, 0, __LIB_2__::func_460(7));
	Local_814[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_814[iParam0 /*52*/][0 /*17*/]), 1);
	func_762(iParam0, 0, !__LIB_7__::func_929(1073741824 /* Float: 2f */));
	func_1047(iParam0, 1, __LIB_2__::func_460(10));
	func_762(iParam0, 1, bParam2);
	func_762(iParam0, 2, bParam1);
	func_1048(iParam0, 2, !bParam1);
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
	func_1047(iParam0, 0, __LIB_2__::func_460(7));
	Local_814[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_814[iParam0 /*52*/][0 /*17*/]), 1);
	func_762(iParam0, 0, 0);
	func_1047(iParam0, 1, __LIB_2__::func_460(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1048(iParam0, 2, !bParam1);
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
	if (!__LIB_2__::func_466(&(Local_814[1 /*52*/][1 /*17*/]), 0, 0))
	{
		if ((__LIB_2__::func_227(0, 1, *iParam0, 1) && !__LIB_1__::func_322("LCMPF_IG_TFRSH")) && !__LIB_1__::func_322("LCMPF_IG_TFRSN"))
		{
			func_1051(1, 0);
		}
	}
	else if (__LIB_2__::func_466(&(Local_814[1 /*52*/][0 /*17*/]), 0, 0))
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
	vVar0 = { __LIB_8__::func_33(&(Local_1039[2 /*7*/]), "player", "PB_HANDOVER_L") };
	fVar9 = __LIB_8__::func_200(&(Local_1039[2 /*7*/]), "player", "PB_HANDOVER_L");
	vVar3 = { __LIB_8__::func_33(&(Local_1039[2 /*7*/]), "player", "PB_HANDOVER_R") };
	fVar10 = __LIB_8__::func_200(&(Local_1039[2 /*7*/]), "player", "PB_HANDOVER_R");
	vVar6 = { __LIB_8__::func_33(&(Local_1039[2 /*7*/]), "player", "PB_HANDOVER_N") };
	fVar11 = __LIB_8__::func_200(&(Local_1039[2 /*7*/]), "player", "PB_HANDOVER_N");
	fVar12 = __LIB_3__::func_332(vVar0, 1);
	fVar13 = __LIB_3__::func_332(vVar3, 1);
	fVar14 = __LIB_3__::func_332(vVar6, 1);
	if (fVar13 <= fVar14 && fVar13 <= fVar12)
	{
		*uParam0 = { vVar3 };
		*uParam1 = fVar10;
		__LIB_8__::func_151(&(Local_1039[2 /*7*/]), "PB_HANDOVER_R");
	}
	else if (fVar12 <= fVar13 && fVar12 <= fVar14)
	{
		*uParam0 = { vVar0 };
		*uParam1 = fVar9;
		__LIB_8__::func_151(&(Local_1039[2 /*7*/]), "PB_HANDOVER_L");
	}
	else
	{
		*uParam0 = { vVar6 };
		*uParam1 = fVar11;
		__LIB_8__::func_151(&(Local_1039[2 /*7*/]), "PB_HANDOVER_N");
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
	__LIB_2__::func_411(&(Local_814[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

char* func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_2646)
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
			switch (iLocal_2646)
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
	StringCopy(&cLocal_1001, sParam0, 32);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1001))
		{
			__LIB_1__::func_422(&cLocal_1001, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

void func_775(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, "LOG_CTXTBUY");
	Local_814[0 /*52*/][0 /*17*/].f_14 = __LIB_8__::func_126();
	__LIB_1__::func_471(&(Local_814[iParam0 /*52*/][0 /*17*/]), 1);
	__LIB_1__::func_483(Local_814[iParam0 /*52*/][0 /*17*/].f_6, "LOG_CTXTBUY", Local_814[iParam0 /*52*/][0 /*17*/].f_14, 0);
	func_762(iParam0, 0, 1);
	func_1047(iParam0, 1, __LIB_2__::func_460(1));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, 0);
	func_1048(iParam0, 2, 1);
	__LIB_7__::func_932(268435456);
	__LIB_7__::func_965(536870912);
}

int func_793()
{
	switch (iLocal_1147)
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
	switch (iLocal_1147)
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
	if (iLocal_1147 == 2)
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
	else if (iLocal_1147 == 3)
	{
		return "clockwork_fm";
	}
	return "";
}

int func_798(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	switch (iLocal_1147)
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
		if (!__LIB_2__::func_763(Local_2160.f_138, 0))
		{
			__LIB_8__::func_123(Local_2160.f_138, 1, 1);
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
		if (__LIB_0__::func_75(&(vLocal_1117[3 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_1117[3 /*3*/]));
		}
		if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_1117[5 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_1117[5 /*3*/]));
		}
		if (__LIB_1__::func_313(&(vLocal_1117[5 /*3*/]), 10f))
		{
			__LIB_3__::func_154(&(Local_2160.f_35), __LIB_8__::func_72(), *iParam0, Global_35, 0, 0, 1, 1);
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			switch (iLocal_103)
			{
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
					TASK::TASK_CONFRONT(0, Global_35, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
					TASK::_TASK_PERFORM_SEQUENCE_2(*iParam0, iLocal_735, 2f, 7.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
					Local_104 = 0;
					break;
				case 2:
					iVar0 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, iVar0, false, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_735);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
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
		if (__LIB_0__::func_75(&(vLocal_1117[5 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_1117[5 /*3*/]));
		}
		if (__LIB_7__::func_933(2097152))
		{
			if (!__LIB_0__::func_75(&(vLocal_1117[3 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_1117[3 /*3*/]), 15f))
			{
				if (iLocal_103 == 3)
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					PED::_0x935CF6E42BAF7F4D(*iParam0);
					__LIB_8__::func_124(Local_2160.f_138, 1);
					__LIB_2__::func_451(&(Local_750[0 /*21*/]), 0);
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

void func_801(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	if (__LIB_7__::func_908(Local_2160.f_136, 1024))
	{
		func_1064(iParam0);
	}
	if (!__LIB_7__::func_929(32))
	{
		return;
	}
	if (__LIB_8__::func_88(&Local_972, 1) && Local_972 == *iParam0)
	{
		__LIB_8__::func_258();
	}
	Global_1914319.f_3[11 /*446*/].f_23 = *iParam0;
	if (__LIB_4__::func_852(11))
	{
		if (!__LIB_7__::func_923(67108864))
		{
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 1, 106);
			__LIB_7__::func_922(67108864);
			__LIB_7__::func_922(1073741824 /* Float: 2f */);
			if (__LIB_4__::func_922(11, 1))
			{
				__LIB_16__::func_154(11, 1);
			}
		}
	}
	else if (__LIB_7__::func_923(67108864) && __LIB_10__::func_383(11) == 0)
	{
		if (!__LIB_7__::func_963(&(Local_1039[0 /*7*/])))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			__LIB_8__::func_132(&Local_2160, 65536);
		}
		__LIB_7__::func_941(67108864);
		__LIB_7__::func_941(134217728);
		__LIB_7__::func_941(4096);
	}
	if (__LIB_7__::func_923(67108864))
	{
		if (!__LIB_2__::func_763(Local_2160.f_138, 0))
		{
			__LIB_8__::func_123(Local_2160.f_138, 0, 1);
		}
		if (((!__LIB_7__::func_963(&(Local_1039[0 /*7*/])) && !__LIB_7__::func_923(536870912)) && __LIB_2__::func_763(Local_2160.f_138, 0)) && !__LIB_7__::func_923(134217728))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 4224, false);
			__LIB_8__::func_131(&Local_2160, 65536);
			vVar0 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
			__LIB_3__::func_409(&vVar0, 1088421888 /* Float: 7f */);
			__LIB_8__::func_15(&(Local_1039[1 /*7*/]), vVar0, 0f, 0f, __LIB_3__::func_731(vVar0, Global_36));
			PED::_0xEC6935EBE0847B90(*iParam0, Global_36);
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *iParam0, -1, -1f, -1f, -1f);
			__LIB_7__::func_922(4096);
			__LIB_7__::func_922(134217728);
		}
	}
	if ((((!__LIB_7__::func_923(2048) && !__LIB_4__::func_852(11)) && __LIB_10__::func_383(11) != 0) && __LIB_7__::func_990(&(Local_1039[1 /*7*/]))) && __LIB_2__::func_123(*iParam0, Global_35, 0.8f))
	{
		__LIB_8__::func_85(Local_2160.f_136, 32);
		__LIB_0__::func_325(&(uLocal_2499[0]));
		__LIB_8__::func_82(Local_2160.f_136, 4);
		__LIB_8__::func_131(&Local_2160, 128);
		__LIB_7__::func_922(2048);
		if (!__LIB_7__::func_907(Local_2160.f_136, 128))
		{
			__LIB_8__::func_253(&Local_2160);
		}
		if (__LIB_7__::func_933(256))
		{
			STREAMING::REQUEST_MODEL(func_838(), false);
			STREAMING::REQUEST_MODEL(__LIB_7__::func_901(), false);
			vVar3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
			__LIB_3__::func_409(&vVar3, 1088421888 /* Float: 7f */);
			__LIB_8__::func_15(&(Local_1039[1 /*7*/]), vVar3, 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0));
			if (!CAM::DOES_CAM_EXIST(iLocal_1143))
			{
				vVar9 = { 19.1f, 0f, (ENTITY::GET_ENTITY_HEADING(*iParam0) - 96.8f) };
				vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, ENTITY::GET_ENTITY_HEADING(*iParam0), -1f, 0.6f, 1.29f) };
				iLocal_1143 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar6, vVar9, 37.2f, false, 2);
			}
			__LIB_3__::func_623(&Local_698);
			Local_698.f_1 = Global_35;
			Local_698.f_8 = { __LIB_8__::func_33(&(Local_1039[1 /*7*/]), "player", "PB_HANDOVER") };
			Local_698.f_19 = __LIB_8__::func_200(&(Local_1039[1 /*7*/]), "player", "PB_HANDOVER");
			Local_698.f_25 = Local_1039[1 /*7*/];
			StringCopy(&(Local_698.f_30), "player", 24);
			StringCopy(&(Local_698.f_26), "PB_HANDOVER", 32);
			__LIB_1__::func_336(&(Local_698.f_23), 25600);
			__LIB_8__::func_131(&Local_2160, 65536);
			__LIB_3__::func_995(&Local_698, 129);
			__LIB_7__::func_961(&Local_972, 4);
			iLocal_1145 = 10;
		}
	}
}

void func_802()
{
	if (iLocal_1145 > 2 && iLocal_1145 <= 8)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_75[11], 1, 0))
		{
			__LIB_1__::func_538(0);
			if (!__LIB_7__::func_933(512))
			{
				if (!__LIB_0__::func_71(Global_35))
				{
					__LIB_8__::func_159(512, func_1015(Global_35, &iLocal_1156, -1390.416f, -226.6055f, 99.35344f, iLocal_75[11], 1097859072 /* Float: 15f */, 2, 1, 129, 0, 0, 1071644672 /* Float: 1.75f */));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1156))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_1156, 136, true);
					}
				}
			}
		}
		else
		{
			func_106(0);
		}
	}
}

bool func_803(int iParam0)
{
	__LIB_8__::func_50(11);
	if (!__LIB_7__::func_929(32))
	{
		func_1072(*iParam0, func_1071(), 0, iLocal_75[4], 1084227584 /* Float: 5f */, 1084227584 /* Float: 5f */, 1084227584 /* Float: 5f */, 12296, 1095237632 /* Float: 12.5f */, 0);
		func_1073();
		Local_398 = { Global_1914319.f_3[11 /*446*/].f_35 };
		func_1074(&(Global_1914319.f_3[11 /*446*/].f_35), joaat("CONSUMABLE"), 1.15f, -1);
		func_1074(&(Global_1914319.f_3[11 /*446*/].f_35), joaat("PROVISION"), 1.15f, -1);
		func_1075(&(Global_1914319.f_3[11 /*446*/].f_35), joaat("CONSUMABLE"), 1.15f, -1);
		func_1075(&(Global_1914319.f_3[11 /*446*/].f_35), joaat("PROVISION"), 1.15f, -1);
		__LIB_7__::func_932(32);
	}
	return true;
}

int func_804()
{
	bool bVar0;
	bVar0 = true;
	switch (iLocal_98)
	{
		case 1:
			if (!__LIB_7__::func_908(Local_2160.f_136, 1024))
			{
				if (!__LIB_2__::func_763(Local_2160.f_138, 0))
				{
					__LIB_8__::func_123(Local_2160.f_138, 1, 1);
				}
				switch (iLocal_1142)
				{
					case 0:
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[3 /*12*/].f_8))
						{
							bVar0 = false;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[4 /*12*/].f_8))
						{
							bVar0 = false;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[2 /*12*/].f_8))
						{
							bVar0 = false;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[14 /*12*/].f_8))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_2160.f_138)))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0))))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0))))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_2160.f_138)))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(iLocal_2505[0]))
						{
							bVar0 = false;
						}
						if (bVar0)
						{
							iLocal_1142 = 1;
						}
						break;
					case 1:
						__LIB_1__::func_772(&Local_156, __LIB_2__::func_963(Local_2160.f_138), "U_M_M_BIVFOREMAN_01", 0, 0, 0);
						__LIB_1__::func_772(&Local_156, Global_35, "Arthur", 0, 0, 0);
						__LIB_1__::func_772(&Local_156, __LIB_2__::func_963(__LIB_7__::func_964(6, 0, 0)), "Worker2", 0, 0, 0);
						__LIB_1__::func_772(&Local_156, __LIB_2__::func_963(__LIB_7__::func_964(6, 1, 0)), "Worker1", 0, 0, 0);
						__LIB_1__::func_772(&Local_156, iLocal_2505[0], "Horse_01", 0, 0, 0);
						__LIB_1__::func_620(&Local_156, Local_1157.f_690[3 /*12*/].f_8, "P_KNIFE02X", 0, 0, 0);
						__LIB_1__::func_620(&Local_156, Local_1157.f_690[4 /*12*/].f_8, "P_WOODWHITTLE01X", 0, 0, 0);
						__LIB_1__::func_620(&Local_156, Local_1157.f_690[2 /*12*/].f_8, "s_aplsd_log", 0, 0, 0);
						__LIB_1__::func_620(&Local_156, Local_1157.f_690[14 /*12*/].f_8, "s_aplsd_hrsatt", 0, 0, 0);
						__LIB_6__::func_730(&Local_156, 15f);
						__LIB_6__::func_731(&Local_156, (15f + 5f));
						__LIB_1__::func_595(&Local_156);
						__LIB_0__::func_7(&(Local_156.f_212), 1);
						iLocal_1142 = 2;
						break;
					case 2:
						return 1;
				}
			}
			break;
	}
	return 0;
}

int func_805(int iParam0)
{
	if (!__LIB_7__::func_933(4096))
	{
		__LIB_8__::func_159(4096, STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_7__::func_956(), 15, __LIB_2__::func_929(Local_2160.f_138), __LIB_8__::func_73()));
	}
	return 1;
}

void func_806(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, __LIB_2__::func_460(7));
	Local_814[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_814[iParam0 /*52*/][0 /*17*/]), 1);
	func_762(iParam0, 0, 1);
	func_1047(iParam0, 1, __LIB_2__::func_460(10));
	func_762(iParam0, 1, 0);
	func_762(iParam0, 2, 0);
	func_1048(iParam0, 2, 1);
	__LIB_7__::func_932(268435456);
}

bool func_807(bool bParam0)
{
	switch (iLocal_98)
	{
		case 1:
			return __LIB_6__::func_724(&Local_156, func_1083(), bParam0, 1);
	}
	return true;
}

Vector3 func_814()
{
	return -1400.648f, -215.0589f, 102.3835f;
}

float func_815()
{
	return -24.8f;
}

void func_817(var uParam0)
{
	if (__LIB_8__::func_362(uParam0, Global_35, "Arthur", joaat("PLAYER_ZERO"), 1, 1))
	{
		__LIB_7__::func_934(32768);
		__LIB_8__::func_147(&(Local_1039[0 /*7*/]), Global_35, "arthur", 1);
		__LIB_8__::func_148(&(Local_1039[0 /*7*/]), Local_1157.f_690[3 /*12*/].f_8, "p_knife02x");
		__LIB_8__::func_148(&(Local_1039[0 /*7*/]), Local_1157.f_690[4 /*12*/].f_8, "p_woodWittle01x");
		__LIB_8__::func_148(&(Local_1039[0 /*7*/]), Local_1157.f_690[6 /*12*/].f_8, "p_foldedBill01x");
		__LIB_8__::func_147(&(Local_1039[0 /*7*/]), __LIB_2__::func_963(Local_2160.f_138), "U_M_M_BIVFOREMAN_01", 1);
		__LIB_8__::func_26(&(Local_1039[0 /*7*/]), "pbl_RefuseToSell");
		__LIB_8__::func_26(&(Local_1039[0 /*7*/]), "pbl_SEARCHENTER");
		__LIB_8__::func_16(&(Local_1039[0 /*7*/]));
		__LIB_2__::func_919(Local_1157.f_690[3 /*12*/].f_8, 0, 0);
		__LIB_2__::func_919(Local_1157.f_690[4 /*12*/].f_8, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
		__LIB_8__::func_131(&Local_2160, 65536);
		MAP::DISPLAY_RADAR(false);
		__LIB_8__::func_82(Local_2160.f_136, 1024);
		__LIB_8__::func_131(&Local_2160, 128);
		__LIB_1__::func_148(&(vLocal_1117[3 /*3*/]));
	}
}

struct<4> func_821()
{
	char cVar0[32];
	StringCopy(&cVar0, "LCMP_INT", 32);
	return cVar0;
}

bool func_822(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	__LIB_1__::func_534(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_8__::func_541(uParam4);
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
					__LIB_6__::func_751(uParam4, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
				{
					__LIB_1__::func_747(uParam4, 4);
					return false;
				}
				else if (__LIB_1__::func_503(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				__LIB_1__::func_747(uParam4, 3);
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
				__LIB_1__::func_148(&(uParam4->f_1));
				__LIB_1__::func_747(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_1__::func_743(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (__LIB_6__::func_724(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
					{
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_6__::func_751(uParam4, &uParam0);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_1108(uParam4);
			if (__LIB_1__::func_503(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_156, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_6__::func_719(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_0__::func_84(uParam4, 512))
				{
					__LIB_1__::func_148(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_1__::func_747(uParam4, 4);
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
				__LIB_8__::func_541(uParam4);
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
				func_1115(uParam4);
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
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_1__::func_477(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
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
					func_1116(&(uParam4->f_213), 0);
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
				func_1115(uParam4);
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
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
						}
						__LIB_1__::func_747(uParam4, 3);
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
			__LIB_1__::func_747(uParam4, 4);
			break;
	}
	return false;
}

void func_823()
{
	int iVar0;
	int iVar1;
	if (__LIB_8__::func_139(1))
	{
		return;
	}
	if (__LIB_7__::func_929(4096))
	{
		return;
	}
	iVar0 = 810 + 1;
	iVar1 = __LIB_2__::func_963(iVar0);
	if (PED::_IS_PED_USING_SCENARIO_HASH(iVar1, __LIB_8__::func_18()))
	{
		func_692(&iVar1, 1);
	}
}

bool func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_921(iParam0) == 4 && __LIB_18__::func_887(iParam0, -1162387149))
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
					iVar1 = __LIB_6__::func_140(iVar0);
					if (__LIB_12__::func_234(iVar1, iParam0))
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
	return __LIB_18__::func_887(iParam0, 1084182731);
}

int func_838()
{
	return joaat("P_COIN01X");
}

bool func_840()
{
	if (func_838() != 0 && !STREAMING::HAS_MODEL_LOADED(func_838()))
	{
		return false;
	}
	if (__LIB_7__::func_901() != 0 && !STREAMING::HAS_MODEL_LOADED(__LIB_7__::func_901()))
	{
		return false;
	}
	return true;
}

void func_841()
{
	func_1133();
	Local_1157.f_690[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(func_838(), Local_1157.f_690[0 /*12*/], true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1157.f_690[6 /*12*/].f_8))
	{
		Local_1157.f_690[6 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_1157.f_690[6 /*12*/].f_7, Local_1157.f_690[6 /*12*/], true, true, false, false, true);
	}
}

bool func_854(int iParam0)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_1014[iParam0]))
	{
		return false;
	}
	return OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[iParam0]) == 5;
}

struct<5> func_867(int iParam0, bool bParam1, bool bParam2)
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
				if (!func_869(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_869(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
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

int func_868(int iParam0, int iParam1)
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
bool func_869(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, iParam3) > 0;
}

int func_969(int* iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_969(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_988(int iParam0, int iParam1, int iParam2)
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
		iLocal_1033[iParam2] = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1300850144))
	{
		iLocal_1033[iParam2] = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1011860333))
	{
		iLocal_1033[iParam2] = 2;
	}
	else
	{
		iLocal_1033[iParam2] = -1;
	}
}

bool func_993(int iParam0, int iParam1)
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
	if (func_1214(iParam1))
	{
		return false;
	}
	return true;
}

void func_994(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_681(iParam0);
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

bool func_996(int iParam0, bool bParam1)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_1014[iParam0]))
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
	if (!__LIB_0__::func_75(&(vLocal_1117[0 /*3*/])))
	{
		return false;
	}
	if (__LIB_1__::func_871(&(vLocal_1117[0 /*3*/])) <= 5000)
	{
		return false;
	}
	return true;
}

void func_1000(int iParam0)
{
	int iVar0[30];
	int iVar31;
	int iVar32;
	int iVar33;
	iVar31 = 0;
	iVar31 = func_291(&iVar0);
	iVar32 = (810 + iParam0);
	iVar33 = __LIB_2__::func_963(iVar32);
	if (!ENTITY::IS_ENTITY_DEAD(iVar33))
	{
		iVar0[iVar31] = iVar33;
		iVar31++;
	}
	if (!__LIB_7__::func_923(32))
	{
		func_1216(&iVar0, &iParam0, 1);
	}
	else
	{
		func_1217(iLocal_2479[0], &iVar0);
	}
}

void func_1003(int iParam0)
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
	iVar2 = func_681(iVar1);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if ((__LIB_2__::func_117(64) && !PED::_IS_PED_USING_SCENARIO_HASH(iVar0, __LIB_8__::func_18())) && !func_458(iVar2))
		{
			if (!__LIB_2__::func_763(iParam0, 0))
			{
				__LIB_8__::func_123(iParam0, 1, 1);
			}
			func_459(&iVar2);
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_1026[iVar1]))
			{
				TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_1026[iVar1], 0, 0, true, false, 0, false, -1f, false);
			}
			else
			{
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, __LIB_8__::func_78(iVar1), 5f, 0, false, false, false, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
			TASK::_TASK_PERFORM_SEQUENCE_2(iVar0, iLocal_735, 1f, 3f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			__LIB_8__::func_124(iParam0, 1);
			func_466(iVar2, 0);
		}
	}
}

int func_1004(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (func_1220(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!__LIB_1__::func_248(iVar2, iParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

bool func_1010()
{
	if (!__LIB_1__::func_205(Global_35, iLocal_75[10], 1, 0))
	{
		return false;
	}
	if (iLocal_2317 != 5 && iLocal_2317 != 6)
	{
		return false;
	}
	return true;
}

bool func_1015(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
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
				*iParam1 = __LIB_5__::func_615(&uVar1, &Var2);
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

void func_1047(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_1__::func_484(Local_814[iParam0 /*52*/][iParam1 /*17*/].f_6, sParam2, 0);
	Local_814[iParam0 /*52*/][iParam1 /*17*/].f_5 = sParam2;
}

void func_1048(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_3__::func_158(&(Local_814[iParam0 /*52*/][iParam1 /*17*/]), bParam2);
}

void func_1051(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, "LOG_CTXTGIVE");
	Local_814[iParam0 /*52*/][0 /*17*/].f_14 = 500;
	__LIB_1__::func_471(&(Local_814[iParam0 /*52*/][0 /*17*/]), 1);
	__LIB_1__::func_483(Local_814[iParam0 /*52*/][0 /*17*/].f_6, "LOG_CTXTGIVE", Local_814[iParam0 /*52*/][0 /*17*/].f_14, 0);
	func_762(iParam0, 0, 1);
	func_1047(iParam0, 1, __LIB_2__::func_460(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1048(iParam0, 2, !bParam1);
	__LIB_7__::func_934(524288);
}

int func_1064(int iParam0)
{
	if (iLocal_1144 != 5 && __LIB_1__::func_376(*iParam0))
	{
		__LIB_8__::func_258();
		iLocal_1144 = 5;
	}
	switch (iLocal_1144)
	{
		case 0:
			if (__LIB_2__::func_118(*iParam0, 0, 1) < 20f)
			{
				__LIB_4__::func_279(iParam0, 0, 0, 0, 0, 0, 0, 1);
				iLocal_1144 = 7;
			}
			break;
		case 7:
			__LIB_4__::func_279(iParam0, 0, 0, 0, 0, 0, 0, 1);
			if (__LIB_2__::func_118(*iParam0, 0, 1) < (15f + 1f))
			{
				if (__LIB_7__::func_923(2097152))
				{
					__LIB_7__::func_922(2);
					__LIB_3__::func_154(&(Local_2160.f_35), "LOG_BUY_RET", *iParam0, Global_35, 0, 0, 1, 1);
				}
				iLocal_1144 = 1;
			}
			break;
		case 1:
			__LIB_4__::func_279(iParam0, 0, 0, 0, 0, 0, 0, 1);
			if (__LIB_2__::func_118(*iParam0, 0, 1) > 20f || __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				__LIB_8__::func_38(iParam0);
				iLocal_1144 = 15;
			}
			break;
		case 15:
			return 1;
		case 5:
			if (!__LIB_1__::func_376(*iParam0) && func_803(iParam0))
			{
				iLocal_1144 = 0;
			}
			break;
	}
	return 0;
}

char* func_1071()
{
	switch (__LIB_0__::func_12())
	{
		case 11:
			return "LOG_CTXT1";
		default:
			break;
	}
	return "INVALID";
}

void func_1072(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	if (__LIB_11__::func_151(iParam0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_2__::func_772(11);
	Global_1914319.f_3[11 /*446*/].f_21 = -1;
	Global_1914319.f_3[11 /*446*/].f_22 = -1;
	Global_1914319.f_3[11 /*446*/].f_23 = iParam0;
	Global_1914319.f_3[11 /*446*/].f_11 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	Global_1914319.f_3[11 /*446*/].f_10 = 101;
	Global_1914319.f_3[11 /*446*/].f_8 = iParam7;
	Global_1914319.f_3[11 /*446*/].f_409 = iParam9;
	Global_1914319.f_3[11 /*446*/].f_19 = iParam8;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam3))
	{
		Global_1914319.f_3[11 /*446*/].f_25 = iParam3;
	}
	else
	{
		Global_1914319.f_3[11 /*446*/].f_25 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, iParam4, iParam5, iParam6, __LIB_0__::func_93());
		PED::_0x7C00CFC48A782DC0(Global_1914319.f_3[11 /*446*/].f_25, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "SHOP_DYNAMIC";
	}
	StringCopy(&(Global_1914319.f_17378.f_1006), sParam1, 24);
	if (iParam2 == 0)
	{
		__LIB_6__::func_78(101, 4);
	}
	else
	{
		__LIB_14__::func_135(Global_1914319.f_3[11 /*446*/].f_9, func_1248(11), Global_1914319.f_3[11 /*446*/].f_11, -1);
		__LIB_2__::func_810(11, 8);
	}
	Global_1914319.f_17378.f_1009 = iParam2;
	iVar0 = 0;
	while (iVar0 < 200)
	{
		Global_1914319.f_17378.f_1010[iVar0] = 0;
		iVar0++;
	}
	Global_1914319.f_17378.f_1010.f_201 = 0;
	__LIB_1__::func_943(11, 16);
	__LIB_2__::func_810(11, 4);
	__LIB_1__::func_936(101, 256);
	__LIB_4__::func_932(101, 1);
}

void func_1073()
{
	func_1250(joaat("CONSUMABLE_APPLE"));
	func_1250(joaat("CONSUMABLE_APRICOTS_CAN"));
	func_1250(joaat("CONSUMABLE_BAKED_BEANS_CAN"));
	func_1250(joaat("CONSUMABLE_BRANDY"));
	func_1250(joaat("CONSUMABLE_BREAD_ROLL"));
	func_1250(joaat("CONSUMABLE_CARROT"));
	func_1250(joaat("CONSUMABLE_CHEESE_WEDGE"));
	func_1250(joaat("CONSUMABLE_CHOCOLATE_BAR"));
	func_1250(joaat("CONSUMABLE_CIGAR"));
	func_1250(joaat("CONSUMABLE_COFFEE_GNDS_REG"));
	func_1250(joaat("CONSUMABLE_CORN"));
	func_1250(joaat("CONSUMABLE_CORNEDBEEF_CAN"));
	func_1250(joaat("CONSUMABLE_HAIR_GREASE"));
	func_1250(joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"));
	func_1250(joaat("CONSUMABLE_HORSE_REVIVER"));
	func_1250(joaat("CONSUMABLE_HORSE_STIMULANT"));
	func_1250(joaat("CONSUMABLE_JERKY"));
	func_1250(joaat("CONSUMABLE_KIDNEYBEANS_CAN"));
	func_1250(joaat("CONSUMABLE_MEDICINE"));
	func_1250(joaat("CONSUMABLE_OFFAL"));
	func_1250(joaat("CONSUMABLE_PEACH"));
	func_1250(joaat("CONSUMABLE_PEACHES_CAN"));
	func_1250(joaat("CONSUMABLE_PEAR"));
	func_1250(joaat("CONSUMABLE_PEAS_CAN"));
	func_1250(joaat("CONSUMABLE_PINEAPPLES_CAN"));
	func_1250(joaat("CONSUMABLE_POTENT_HORSE_STIMULANT"));
	func_1250(joaat("CONSUMABLE_POTENT_MEDICINE"));
	func_1250(joaat("CONSUMABLE_POTENT_SNAKE_OIL"));
	func_1250(joaat("CONSUMABLE_POTENT_TONIC"));
	func_1250(joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"));
	func_1250(joaat("CONSUMABLE_SALMON_CAN"));
	func_1250(joaat("CONSUMABLE_SNAKE_OIL"));
	func_1250(joaat("CONSUMABLE_POTENT_SNAKE_OIL"));
	func_1250(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"));
	func_1250(joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"));
	func_1250(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"));
	func_1250(joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"));
	func_1250(joaat("CONSUMABLE_SWEET_CORN_CAN"));
	func_1250(joaat("CONSUMABLE_TONIC"));
	func_1250(joaat("CONSUMABLE_WHISKEY"));
	func_1250(joaat("CONSUMABLE_GIN"));
	func_1250(joaat("CONSUMABLE_RUM"));
}

void func_1074(var uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	if (iParam1 == 0)
	{
		return;
	}
	if (__LIB_14__::func_715(uParam0, iParam3))
	{
		__LIB_14__::func_716(uParam0, iParam3, fParam2);
		return;
	}
	iVar0 = -1;
	if (!__LIB_14__::func_717(uParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	(*uParam0)[iVar0 /*7*/] = iParam3;
	(uParam0[iVar0 /*7*/])->f_1 = 2;
	(uParam0[iVar0 /*7*/])->f_3 = iParam1;
	(uParam0[iVar0 /*7*/])->f_2 = 0;
	(uParam0[iVar0 /*7*/])->f_6 = fParam2;
}

void func_1075(var uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	if (iParam1 == 0)
	{
		return;
	}
	if (__LIB_14__::func_713(uParam0, iParam3))
	{
		__LIB_14__::func_714(uParam0, iParam3, fParam2);
		return;
	}
	iVar0 = -1;
	if (!__LIB_14__::func_712(uParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_141[iVar0 /*7*/] = iParam3;
	uParam0->f_141[iVar0 /*7*/].f_1 = 2;
	uParam0->f_141[iVar0 /*7*/].f_3 = iParam1;
	uParam0->f_141[iVar0 /*7*/].f_2 = 0;
	uParam0->f_141[iVar0 /*7*/].f_6 = fParam2;
}

char* func_1083()
{
	return "LCMP_INT";
}

void func_1108(var uParam0)
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
			func_1307(&(uParam0->f_224));
		}
		func_1308(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_1__::func_519(uParam0, 0f, 0f, 0f);
		func_1310(uParam0);
		func_1311(uParam0);
		__LIB_8__::func_354(uParam0, 0f, 0f, 0f, 0, 0);
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

void func_1115(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_1116(&(uParam0->f_213), uParam0->f_224);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_1__::func_597(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_1__::func_594(uParam0);
	__LIB_1__::func_520(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_1__::func_521(uParam0, 4);
	__LIB_1__::func_595(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_1__::func_476(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_213, 128));
	if (!__LIB_0__::func_1(uParam0->f_213, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_1116(var uParam0, int iParam1)
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
		func_1324(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1325(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_1133()
{
	int iVar0;
	struct<6> Var1;
	int iVar7;
	__LIB_3__::func_937(__LIB_2__::func_963(Local_2160.f_138));
	iVar0 = __LIB_2__::func_929(Local_2160.f_138);
	MISC::_0x94FCADCF9F0C368E(iVar0);
	iVar7 = __LIB_10__::func_383(11);
	if (__LIB_0__::func_144(iVar7, 0))
	{
		Var1 = iVar7;
		Var1.f_3 = 4;
		Var1.f_1 = 1f;
		Var1.f_4 = 1;
		Var1.f_5 = 1;
		MISC::_0xAF3A84C7DE6A1DC5(iVar0, &Var1);
	}
}

bool func_1214(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_2543)
	{
		if (iParam0 == iLocal_2527[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1216(int iParam0, int iParam1, bool bParam2)
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
	func_161(Local_2160.f_137, &iVar4, &iVar5, 0, 0);
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
						func_1392(iVar3, -1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar7, false, true);
						PED::_0xEEED8FAFEC331A70(iVar7, __LIB_8__::func_143(*iParam1), 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, __LIB_8__::func_143(*iParam1), 4, 1, 30f, 8000, 0);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, __LIB_8__::func_144(*iParam1), 0);
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
						TASK::TASK_PERFORM_SEQUENCE(iVar7, iLocal_735);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
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
							func_1392(iVar3, -1);
							if (PED::IS_PED_USING_ANY_SCENARIO(iVar7))
							{
								TASK::_0xE7FA07624574B79A(iVar7, iVar8, 1, 1, 10f, 1, 0, 0, 0);
							}
							else
							{
								PED::_0xEEED8FAFEC331A70(iVar7, __LIB_8__::func_143(*iParam1), 1);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, __LIB_8__::func_144(*iParam1), 0);
								TASK::TASK_STAND_STILL(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
								TASK::TASK_PERFORM_SEQUENCE(iVar7, iLocal_735);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
							}
							PED::_0xAAB050DA48B57978(iVar7, __LIB_8__::func_81(), iVar7, -1, 4);
						}
					}
				}
				if (iLocal_2543 >= 15)
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

void func_1217(int iParam0, int iParam1)
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
	func_161(Local_2160.f_137, &iVar3, &iVar4, 0, 0);
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
					if (iLocal_2543 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1394(&fVar7);
						}
						else
						{
							fVar1 = -1f;
						}
					}
					if (fVar0 <= fVar1 && !ENTITY::IS_ENTITY_DEAD(iVar27))
					{
						func_1392(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iLocal_2543] = fVar23;
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
				if (iLocal_98 == 2 && !func_1395(813))
				{
					iVar26 = func_1394(&fVar7);
					func_1392(813, iVar26);
					func_466(func_681(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iLocal_2543)
				{
					iVar27 = __LIB_2__::func_963(iLocal_2527[iVar28]);
					PED::_0x62FDAD5E01D2DD47(iVar27, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2, 0);
					TASK::CLEAR_PED_TASKS(iVar27, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, -1, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
					TASK::_TASK_PERFORM_SEQUENCE_2(iVar27, iLocal_735, 0f, 2.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
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

bool func_1220(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && __LIB_1__::func_679(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_352(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

int func_1248(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 3:
			iVar0 = 20;
			break;
		case 4:
			iVar0 = 21;
			break;
		case 0:
			iVar0 = 25;
			break;
		case 6:
			iVar0 = 23;
			break;
		case 7:
			iVar0 = 26;
			break;
		case 2:
			iVar0 = 33;
			break;
		case 1:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 31;
			break;
		case 9:
			iVar0 = 37;
			break;
		case 10:
			iVar0 = 32;
			break;
		case 17:
			iVar0 = 35;
			break;
		case 5:
			iVar0 = 21;
			break;
		case 33:
			iVar0 = 27;
			break;
		case 18:
			iVar0 = 36;
			break;
		case 19:
			iVar0 = 36;
			break;
		case 22:
			iVar0 = 40;
			break;
		case 20:
			iVar0 = 43;
			break;
		case 15:
			iVar0 = 15;
			break;
		case 12:
			iVar0 = 41;
			break;
		case 13:
			iVar0 = 42;
			break;
		case 14:
			iVar0 = 42;
			break;
		case 21:
			iVar0 = 44;
			break;
		case 11:
			iVar0 = __LIB_10__::func_655(Global_1914319.f_17378.f_1009);
			break;
	}
	return iVar0;
}

void func_1250(int iParam0)
{
	int iVar0;
	iVar0 = Global_1914319.f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar0 < 200)
		{
			Global_1914319.f_17378.f_1010[iVar0] = iParam0;
			iVar0++;
			Global_1914319.f_17378.f_1010.f_201 = iVar0;
		}
	}
}

void func_1307(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_1324(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
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

void func_1308(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1473();
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
						__LIB_2__::func_106(&vVar3, 50, 10, 0);
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

void func_1310(var uParam0)
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
			func_262(iVar1, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_262(iVar3, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1311(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_1__::func_524(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_1__::func_524(uParam0) };
			func_262(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1324(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_867(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1498(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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

void func_1325(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_867(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, iParam1);
}

void func_1392(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_2527[iParam1] = iParam0;
	}
	else
	{
		iLocal_2527[iLocal_2543] = iParam0;
		iLocal_2543++;
	}
}

int func_1394(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iLocal_2543)
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

bool func_1395(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_2543)
	{
		if (iLocal_2527[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1473()
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
			func_268(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1575(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_268(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

bool func_1498(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_867(iParam0, 1, 0) };
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

int func_1575(int iParam0, int iParam1)
{
	var uVar0;
	return func_1637(&uVar0, iParam0, iParam1);
}

int func_1637(var uParam0, int iParam1, int iParam2)
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
		return func_1637(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

