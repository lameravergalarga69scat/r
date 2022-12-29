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
	struct<97> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1067450368, 0, 1092616192, 1112014848, 1106247680, 1101529088, 1101004800, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<130> Local_112[7];
	struct<8> Local_1023[5];
	var uLocal_1064 = 0;
	var uLocal_1065 = 2;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 2;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = -1;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 1106247680;
	var uLocal_1096 = 0;
	var uLocal_1097 = 1072064102;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	char* sLocal_1114[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char[] cLocal_1123[8] = 0;
	char[] cLocal_1124[8] = 0;
	char[] cLocal_1125[8] = 0;
	char[] cLocal_1126[8] = 0;
	char[] cLocal_1127[8] = 0;
	char[] cLocal_1128[8] = 0;
	char[] cLocal_1129[8] = 0;
	char* sLocal_1130[32] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1163[21] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1185[15] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1201[1] = { NULL };
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	char* sLocal_1207 = NULL;
	struct<97> Local_1208 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1067450368, 0, 1092616192, 1112014848, 1106247680, 1101529088, 1101004800, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	int iLocal_1309 = 0;
	int iLocal_1310 = 0;
	int iLocal_1311 = 0;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	struct<97> Local_1318[3];
	int iLocal_1610[3] = { 0, 0, 0 };
	struct<97> Local_1614[2];
	int iLocal_1809[2] = { 0, 0 };
	struct<36> Local_1812 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0 } ;
	var uLocal_1848 = -1;
	var uLocal_1849 = 0;
	var uLocal_1850 = -1;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = -1;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 1073741824;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 1;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 1106247680;
	var uLocal_1874 = 1067450368;
	var uLocal_1875 = 0;
	var uLocal_1876 = 1092616192;
	var uLocal_1877 = 1112014848;
	var uLocal_1878 = 1106247680;
	var uLocal_1879 = 1101529088;
	var uLocal_1880 = 1101004800;
	var uLocal_1881 = 1084227584;
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
	int iLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = -1;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 1097859072;
	var uLocal_1928 = 1000;
	var uLocal_1929 = 1067450368;
	var uLocal_1930 = 5000;
	var uLocal_1931 = 42;
	var uLocal_1932 = 1103626240;
	var uLocal_1933 = 1077936128;
	var uLocal_1934 = 1106247680;
	var uLocal_1935 = 1103101952;
	var uLocal_1936 = 1097859072;
	var uLocal_1937 = 1103626240;
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
	struct<22> Local_1978 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_2000 = 3;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	struct<22> Local_2003 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_2025 = 3;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	vector3 vLocal_2028 = { 0f, 0f, 0f };
	float fLocal_2031 = 0f;
	vector3 vLocal_2032 = { 0f, 0f, 0f };
	float fLocal_2035 = 0f;
	vector3 vLocal_2036 = { 0f, 0f, 0f };
	vector3 vLocal_2039 = { 0f, 0f, 0f };
	vector3 vLocal_2042 = { 0f, 0f, 0f };
	vector3 vLocal_2045 = { 0f, 0f, 0f };
	bool bLocal_2048 = false;
	bool bLocal_2049 = false;
	bool bLocal_2050 = false;
	bool bLocal_2051 = false;
	bool bLocal_2052 = false;
	bool bLocal_2053 = false;
	bool bLocal_2054 = false;
	bool bLocal_2055 = false;
	bool bLocal_2056 = false;
	bool bLocal_2057 = false;
	bool bLocal_2058 = false;
	bool bLocal_2059 = false;
	int iLocal_2060 = 0;
	var uLocal_2061 = 0;
	int iLocal_2062 = 0;
	int iLocal_2063 = 0;
	var uLocal_2064[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2074 = 0;
	int iLocal_2075 = 0;
	int iLocal_2076 = 0;
	int iLocal_2077 = 0;
	int iLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	int iLocal_2082 = 0;
	int iLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	int iLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	int iLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	int iLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	int iLocal_2102 = 0;
	int iLocal_2103 = 0;
	int iLocal_2104 = 0;
	int iLocal_2105 = 0;
	bool bLocal_2106 = false;
	bool bLocal_2107 = false;
	bool bLocal_2108 = false;
	bool bLocal_2109 = false;
	bool bLocal_2110 = false;
	bool bLocal_2111 = false;
	bool bLocal_2112 = false;
	bool bLocal_2113 = false;
	bool bLocal_2114 = false;
	int iLocal_2115 = 0;
	int iLocal_2116 = 0;
	int iLocal_2117 = 0;
	int iLocal_2118 = 0;
	int iLocal_2119 = 0;
	int iLocal_2120 = 0;
	int iLocal_2121 = 0;
	int iLocal_2122 = 0;
	int iLocal_2123 = 0;
	struct<17> Local_2124[2];
	struct<17> Local_2159[2];
	struct<17> Local_2194[2];
	struct<17> Local_2229[2];
	struct<17> Local_2264[1];
	bool bLocal_2282 = false;
	int iLocal_2283 = 0;
	bool bLocal_2284 = false;
	int iLocal_2285 = 0;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	struct<2278> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_1123 = "script_proc@loansharking@undertaker@encounter_confront";
	cLocal_1124 = "script_proc@loansharking@undertaker@female_mourner";
	cLocal_1125 = "script_proc@loansharking@undertaker@young_couple";
	cLocal_1126 = "script_proc@loansharking@undertaker@waiting_at_church";
	cLocal_1127 = "script_proc@loansharking@undertaker@grave_digging";
	cLocal_1128 = "script_proc@loansharking@undertaker@collect_loot";
	cLocal_1129 = "script_common@handover@generic@ped_handover@brooch";
	iLocal_1305 = joaat("LOANSHARKING_UNDERTAKER_FEMALES_01");
	iLocal_1306 = joaat("CS_RHODESASSISTANT");
	iLocal_1307 = joaat("LOANSHARKING_UNDERTAKER_FEMALES_01");
	iLocal_1308 = joaat("LOANSHARKING_UNDERTAKER_FEMALES_01");
	iLocal_1309 = joaat("LOANSHARKING_UNDERTAKER_MALES_01");
	iLocal_1310 = joaat("LOANSHARKING_UNDERTAKER_MALES_01");
	iLocal_1311 = -2060762326;
	iLocal_1312 = -1571002461;
	iLocal_1313 = 95105388;
	iLocal_1314 = -127494429;
	iLocal_1315 = 1487067886;
	iLocal_1316 = 1767799909;
	iLocal_1317 = -1683495893;
	vLocal_2028 = { 1275.281f, -1209.51f, 81.2918f };
	fLocal_2031 = 0f;
	vLocal_2032 = { 1300.4f, -1318.53f, 76.5164f };
	fLocal_2035 = -29.30019f;
	vLocal_2036 = { 1300.762f, -1318.008f, 75.5173f };
	vLocal_2039 = { -0.48f, 0f, 59.7f };
	vLocal_2042 = { 1291.414f, -1235.748f, 79.9612f };
	vLocal_2045 = { 0f, 0f, -100.782f };
	iLocal_2077 = -1;
	iLocal_2119 = 1;
	Var0.f_3.f_5 = 1065353216;
	Var0.f_3.f_6 = 1119092736;
	Var0.f_3.f_7 = 1092616192;
	Var0.f_3.f_8 = 1085276160;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_17.f_2 = 1106247680;
	Var0.f_17.f_3 = 1101004800;
	Var0.f_17.f_4 = 1099431936;
	Var0.f_17.f_5 = 1098907648;
	Var0.f_17.f_6 = 1082130432;
	Var0.f_32 = 1;
	Var0.f_32.f_13 = 17;
	Var0.f_32.f_218 = 1097859072;
	Var0.f_32.f_219 = 1101004800;
	Var0.f_32.f_246 = 4;
	Var0.f_352.f_3 = 17;
	Var0.f_352.f_3.f_1.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_225.f_15 = 1;
	Var0.f_352.f_241 = 30;
	Var0.f_352.f_241.f_1 = -1;
	Var0.f_352.f_241.f_1.f_2 = 1;
	Var0.f_352.f_241.f_1.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_782 = 8;
	Var0.f_352.f_1111 = 8;
	Var0.f_352.f_1111.f_1.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1288 = 11;
	Var0.f_352.f_1399 = 2;
	Var0.f_352.f_1434 = 2;
	Var0.f_352.f_1451 = -1;
	Var0.f_352.f_1454 = -1;
	Var0.f_352.f_1455 = -1082130432;
	Var0.f_352.f_1537 = 24;
	Var0.f_352.f_1661 = -1;
	Var0.f_2041 = 10;
	Var0.f_2052 = 11;
	Var0.f_2077.f_8 = -1;
	Var0.f_2077.f_17 = 1097859072;
	Var0.f_2077.f_18 = 1000;
	Var0.f_2077.f_19 = 1067450368;
	Var0.f_2077.f_20 = 5000;
	Var0.f_2077.f_21 = 42;
	Var0.f_2077.f_22 = 1103626240;
	Var0.f_2077.f_23 = 1077936128;
	Var0.f_2077.f_24 = 1106247680;
	Var0.f_2077.f_25 = 1103101952;
	Var0.f_2077.f_26 = 1097859072;
	Var0.f_2077.f_27 = 1103626240;
	Var0.f_2106 = 24;
	Var0.f_2204 = -1;
	Var0.f_2210 = 2;
	Var0.f_2213 = 2;
	Var0.f_2216.f_1 = -1;
	Var0.f_2216.f_3 = -1;
	Var0.f_2216.f_6 = -1;
	Var0.f_2216.f_12 = 1073741824;
	Var0.f_2216.f_16 = 1;
	Var0.f_2216.f_26 = 1106247680;
	Var0.f_2216.f_27 = 1067450368;
	Var0.f_2216.f_29 = 1092616192;
	Var0.f_2216.f_30 = 1112014848;
	Var0.f_2216.f_31 = 1106247680;
	Var0.f_2216.f_32 = 1101529088;
	Var0.f_2216.f_33 = 1101004800;
	Var0.f_2216.f_34 = 1084227584;
	Var0.f_2277 = 1;
	Var0.f_2277.f_1.f_2 = 570;
	Var0.f_2277.f_1.f_3 = 1065353216;
	Var0.f_2277.f_1.f_4 = -1082130432;
	Var0.f_2277.f_1.f_9 = 3;
	Var0 = uScriptParam_0;
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
	{
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&Var0);
	while (true)
	{
		func_3(&Var0);
		if (__LIB_0__::func_1(Var0.f_16, 12))
		{
			func_5(&Var0);
		}
		else
		{
			switch (Var0.f_1)
			{
				case 0:
					__LIB_10__::func_536(&Var0);
					break;
				case 1:
					func_7(&Var0);
					break;
				case 3:
					func_8(&Var0);
					break;
				case 2:
					__LIB_10__::func_253(&Var0, func_10(&Var0, __LIB_4__::func_513()));
					if (Var0.f_1 == 8 || Var0.f_1 == 9)
					{
						HUD::DISPLAY_HUD(true);
						MAP::DISPLAY_RADAR(true);
					}
					break;
				case 6:
					func_12(&Var0);
					break;
				case 7:
					func_13(&Var0);
					break;
				case 8:
					func_14(&Var0);
					break;
				case 9:
					func_15(&Var0);
					break;
				case 10:
					func_16(&Var0, 0);
					break;
				case 11:
					func_17(&Var0);
					break;
				case 12:
					func_18(&Var0);
					break;
				case 13:
					func_19(&Var0, 0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;
	if (Global_1879534 == 1)
	{
	}
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		__LIB_0__::func_11(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_15(uParam0);
		}
		else
		{
			func_16(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_1 == 11)
	{
		__LIB_0__::func_11(uParam0);
	}
	func_23(uParam0);
}

void func_2(char[4] cParam0)
{
	__LIB_4__::func_228(&(cParam0->f_2077));
	__LIB_1__::func_402(&(cParam0->f_2077), 1);
	__LIB_2__::func_828(&(cParam0->f_2077), 1);
	__LIB_1__::func_413(&(cParam0->f_2077), 1);
	if (*cParam0 == __LIB_10__::func_367())
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
		__LIB_0__::func_145(0, 0);
	}
	HUD::_TEXT_DATABASE_REQUEST("LOAN");
	func_31(cParam0);
	__LIB_10__::func_254(cParam0);
	__LIB_10__::func_253(cParam0, 0);
}

void func_3(char[4] cParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_1(cParam0->f_16, 12))
	{
		return;
	}
	if (__LIB_10__::func_255())
	{
		__LIB_0__::func_7(&(cParam0->f_16), 4);
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			__LIB_10__::func_256(cParam0, 8);
		}
		return;
	}
	else if (__LIB_10__::func_257())
	{
		__LIB_0__::func_7(&(cParam0->f_16), 8);
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			__LIB_10__::func_256(cParam0, 9);
		}
		return;
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 256);
	if (cParam0->f_1 != 12 && cParam0->f_1 != 11)
	{
		if (!__LIB_0__::func_1(cParam0->f_16, 1) && cParam0->f_1 <= 3)
		{
			if (func_38(cParam0))
			{
				func_39(cParam0);
				if (cParam0->f_15 == 2 || cParam0->f_15 == 6)
				{
					func_23(cParam0);
				}
				else
				{
					__LIB_10__::func_253(cParam0, 11);
				}
				return;
			}
			func_40(cParam0);
		}
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			if (__LIB_0__::func_1(cParam0->f_16, 128))
			{
				if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
				{
					Var0 = { func_41(0) };
					if (func_42(&Var0))
					{
						__LIB_0__::func_8(&(cParam0->f_16), 128);
					}
				}
				else
				{
					__LIB_0__::func_8(&(cParam0->f_16), 128);
				}
			}
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 2048))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 32))
			{
				__LIB_4__::func_515();
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 64))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 256))
			{
				__LIB_4__::func_516(1, 0);
			}
			if (func_46(cParam0))
			{
				__LIB_10__::func_253(cParam0, 10);
				return;
			}
		}
		__LIB_0__::func_11(cParam0);
		func_48(cParam0);
	}
}

void func_5(var uParam0)
{
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		func_16(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_2070)))
		{
			__LIB_1__::func_283(&(uParam0->f_2070), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_871(&(uParam0->f_2070)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_1 == 11)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_39(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_7(char[4] cParam0)
{
	if (func_57(cParam0))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
		{
			func_58(cParam0);
			__LIB_10__::func_253(cParam0, 2);
		}
		else
		{
			__LIB_0__::func_11(cParam0);
			__LIB_10__::func_253(cParam0, 3);
		}
	}
}

void func_8(char[4] cParam0)
{
	if (func_60(cParam0))
	{
		func_61(cParam0);
	}
}

int func_10(char[4] cParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	__LIB_2__::func_480(&(cParam0->f_2277), 0, 0, 1, 0);
	if (!func_63(2097152))
	{
		if (func_64())
		{
			func_65(cParam0);
			func_66(2097152);
		}
	}
	if (!func_63(268435456))
	{
		PED::_0x9851DE7AEC10B4E1(Global_1392626[*cParam0 /*32*/].f_24, 250f, 1, 0);
		func_66(268435456);
	}
	if (!func_67())
	{
		return 2;
	}
	if (iVar0 == 0)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
		{
			__LIB_10__::func_378(*cParam0, func_41(0), func_41(1), 0, 1);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_15, "LS_UNDERTAKER", 1301.84f, -1318.89f, 75.87f, 0, "LSUND");
			__LIB_10__::func_260(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_70(cParam0))
		{
			__LIB_10__::func_378(*cParam0, func_41(1), func_41(2), 1, 2);
			bLocal_2113 = true;
			__LIB_3__::func_732(0);
			__LIB_10__::func_260(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_72(cParam0))
		{
			__LIB_10__::func_378(*cParam0, func_41(2), func_41(3), 2, 3);
			bLocal_2113 = true;
			__LIB_3__::func_732(0);
			__LIB_0__::func_566(uLocal_2064[3], 0);
			__LIB_10__::func_260(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 3)
	{
		if (func_74(cParam0))
		{
			__LIB_10__::func_378(*cParam0, func_41(3), func_41(4), 3, 4);
			__LIB_3__::func_732(0);
			__LIB_0__::func_566(uLocal_2064[3], 0);
			__LIB_10__::func_260(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 4)
	{
		if (func_75())
		{
			__LIB_3__::func_732(0);
			__LIB_0__::func_566(uLocal_2064[3], 0);
			__LIB_10__::func_260(1, 1);
			return 9;
		}
	}
	return 2;
}

void func_12(char[4] cParam0)
{
	if (func_76(cParam0))
	{
		if (__LIB_10__::func_261(cParam0->f_346))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			__LIB_10__::func_464(&(cParam0->f_32), &(cParam0->f_352));
			func_79(cParam0);
		}
		else
		{
			__LIB_10__::func_262(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_10__::func_263(0, 1, 1);
		}
		__LIB_10__::func_253(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;
	if (__LIB_10__::func_261(cParam0->f_346))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_79(cParam0))
			{
				__LIB_10__::func_465(cParam0, 1);
				iVar0 = __LIB_9__::func_872(cParam0);
				__LIB_10__::func_253(cParam0, iVar0);
			}
		}
	}
	else
	{
		__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (__LIB_0__::func_58(cParam0))
		{
			__LIB_10__::func_264(cParam0);
			__LIB_10__::func_465(cParam0, 0);
			iVar0 = __LIB_9__::func_872(cParam0);
			__LIB_10__::func_253(cParam0, iVar0);
		}
		else
		{
			__LIB_10__::func_263(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
			__LIB_0__::func_11(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;
	iVar0 = func_87(cParam0);
	if (iVar0 != 8)
	{
		__LIB_10__::func_253(cParam0, iVar0);
	}
}

void func_15(char[4] cParam0)
{
	bool bVar0;
	if (cParam0->f_1 != 9)
	{
		__LIB_10__::func_253(cParam0, 9);
	}
	__LIB_10__::func_256(cParam0, 0);
	func_88(*cParam0, 1, 1);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_5__::func_109(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_769();
		__LIB_0__::func_867(0);
		__LIB_0__::func_8(&Global_1935630, 4);
	}
	if (__LIB_10__::func_341(*cParam0))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			__LIB_1__::func_422("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			__LIB_1__::func_422("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			__LIB_1__::func_422("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	__LIB_0__::func_8(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
	__LIB_10__::func_253(cParam0, 11);
}

void func_16(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (cParam0->f_1 != 10)
	{
		__LIB_10__::func_253(cParam0, 10);
	}
	__LIB_10__::func_256(cParam0, 1);
	if (bParam1 == 1)
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
	else
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_75(&(cParam0->f_2070)))
			{
				__LIB_1__::func_283(&(cParam0->f_2070), 0);
			}
			__LIB_0__::func_11(cParam0);
			bVar0 = CAM::_0x139EFB0A71DD9011();
			bVar1 = CAM::_0x7CE9DC58E3E4755F();
			if (!__LIB_0__::func_1(cParam0->f_16, 16) && !bVar1)
			{
				if (!bVar0)
				{
					__LIB_1__::func_193(1, 1);
					__LIB_0__::func_7(&(Global_1347343.f_11), 131072);
					return;
				}
				else
				{
					__LIB_0__::func_7(&(cParam0->f_16), 16);
				}
			}
			if (bVar1)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			else if (__LIB_1__::func_871(&(cParam0->f_2070)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
		}
		iVar2 = 1;
		if (__LIB_0__::func_1(cParam0->f_16, 4))
		{
			iVar2 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_KO", 16);
			}
			else
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_DEAD", 16);
			}
		}
		else if (__LIB_0__::func_1(cParam0->f_16, 8))
		{
			iVar2 = 6;
			StringCopy(&(cParam0->f_2208), "PLAYER_ARRESTED", 16);
		}
		__LIB_1__::func_611(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), __LIB_0__::func_58(), 0, 0);
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_867(0);
		__LIB_0__::func_769();
		__LIB_0__::func_8(&Global_1935630, 4);
	}
	__LIB_10__::func_375(*cParam0);
	bParam1 = true;
	if (__LIB_0__::func_1(cParam0->f_16, 12))
	{
		bParam1 = true;
	}
	else
	{
		func_39(cParam0);
	}
	if (bParam1)
	{
		func_23(cParam0);
	}
	else
	{
		__LIB_0__::func_8(&(cParam0->f_16), 1);
		__LIB_10__::func_253(cParam0, 11);
	}
}

void func_17(char[4] cParam0)
{
	int iVar0;
	if (Global_1392626[*cParam0 /*32*/].f_9 & 4096 != 0)
	{
		__LIB_10__::func_361(*cParam0);
	}
	if (__LIB_0__::func_296(64, 1, 1))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0))
		{
			__LIB_0__::func_11(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (__LIB_10__::func_265())
	{
		__LIB_0__::func_11(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!__LIB_0__::func_75(&(cParam0->f_2064)) || IntToFloat(__LIB_1__::func_871(&(cParam0->f_2064))) > __LIB_10__::func_381(cParam0))
	{
		__LIB_1__::func_283(&(cParam0->f_2064), 1);
		if (func_109(cParam0))
		{
			__LIB_10__::func_253(cParam0, 12);
		}
	}
}

void func_18(var uParam0)
{
	func_19(uParam0, 1);
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 512))
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
}

void func_19(var uParam0, int iParam1)
{
	__LIB_10__::func_249(*uParam0, iParam1);
	func_23(uParam0);
}

void func_23(char[4] cParam0)
{
	func_111(cParam0);
	__LIB_10__::func_342(cParam0);
	func_113(cParam0);
	if ((cParam0->f_1 != 12 && __LIB_10__::func_266(cParam0) != 2) && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	func_113(cParam0);
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_435(*cParam0);
	}
	func_119(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
	HUD::_TEXT_DATABASE_DELETE("LOAN");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_2205)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(cParam0->f_2205));
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_0__::func_769();
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_31(var uParam0)
{
	__LIB_10__::func_267(uParam0, "LSUNDAU");
	func_131(uParam0);
	__LIB_10__::func_268(uParam0, 3);
	__LIB_10__::func_269(uParam0, 8);
	__LIB_10__::func_382();
	func_135();
	STREAMING::REQUEST_MODEL(iLocal_1306, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(210376647, false);
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 128);
	func_137(uParam0);
}

bool func_38(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	if (cParam0->f_1 == 3)
	{
		if (func_138(cParam0))
		{
			__LIB_10__::func_234(*cParam0, 1024);
			__LIB_10__::func_256(cParam0, 5);
			return true;
		}
	}
	if (__LIB_0__::func_296(0, 1, 0))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != __LIB_0__::func_298(0))
		{
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			__LIB_10__::func_256(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (__LIB_0__::func_730(Global_1392626[*cParam0 /*32*/].f_12))
		{
			__LIB_10__::func_234(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!__LIB_2__::func_117(Global_1392626[*cParam0 /*32*/].f_22))
		{
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			__LIB_10__::func_256(cParam0, 3);
			return true;
		}
	}
	if (__LIB_10__::func_362(*cParam0))
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		__LIB_10__::func_256(cParam0, 7);
		return true;
	}
	if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		__LIB_10__::func_234(*cParam0, 16384);
		__LIB_10__::func_256(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			__LIB_10__::func_256(cParam0, 2);
			return true;
		}
	}
	else if (__LIB_8__::func_601(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !func_146(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				__LIB_10__::func_256(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (__LIB_10__::func_270(fVar1))
	{
		__LIB_10__::func_234(*cParam0, 8192);
		__LIB_10__::func_256(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_148(cParam0);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_0__::func_769();
		__LIB_1__::func_723(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		__LIB_5__::func_102();
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (__LIB_10__::func_266(cParam0) != 2 && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	func_113(cParam0);
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_435(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_1__::func_345();
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	__LIB_10__::func_384(cParam0);
}

void func_40(char[4] cParam0)
{
	if (!__LIB_10__::func_235(*cParam0, 4))
	{
		if (__LIB_8__::func_864(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
		{
			if (cParam0->f_2204 == -1)
			{
				cParam0->f_2204 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - cParam0->f_2204) > 120000)
			{
				__LIB_10__::func_567(*cParam0);
			}
		}
		else if (cParam0->f_2204 != -1)
		{
			cParam0->f_2204 = -1;
		}
	}
}

struct<4> func_41(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		Var1 = { 1296.902f, -1320.073f, 75.8767f };
		Var1.f_3 = 287.6473f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 1291.423f, -1237.7f, 79.8093f };
		Var1.f_3 = 4.8526f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1290.254f, -1238.688f, 79.7133f };
		Var1.f_3 = 340.5821f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 1296.6f, -1243.202f, 79.0933f };
		Var1.f_3 = 52.076f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { 1272.408f, -1209.676f, 81.2281f };
		Var1.f_3 = 214.6943f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_156(*uParam0, uParam0->f_3);
}

bool func_46(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (func_157(cParam0))
		{
			return true;
		}
	}
	return false;
}

void func_48(char[4] cParam0)
{
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(cParam0->f_32.f_5))
	{
		cParam0->f_32.f_5 = { __LIB_10__::func_343(*cParam0) };
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (cParam0->f_32.f_218 == 15f)
		{
			cParam0->f_32.f_218 = 50f;
		}
		if (cParam0->f_32.f_219 == 20f)
		{
			cParam0->f_32.f_219 = 75f;
		}
	}
	else
	{
		if (cParam0->f_32.f_218 > 15f)
		{
			cParam0->f_32.f_218 = 15f;
		}
		if (cParam0->f_32.f_219 > 20f)
		{
			cParam0->f_32.f_219 = 20f;
		}
	}
	if (cParam0->f_32.f_218 <= 0f)
	{
	}
	else if (cParam0->f_32.f_219 <= 0f)
	{
	}
	else if (cParam0->f_32.f_219 <= cParam0->f_32.f_218)
	{
	}
	if (__LIB_10__::func_261(cParam0->f_346))
	{
		if (func_160(&(cParam0->f_32), cParam0->f_346, 0, 1))
		{
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				__LIB_0__::func_11(cParam0);
				__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
		else
		{
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 64))
			{
				__LIB_18__::func_245(cParam0);
			}
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
	}
	else if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 64))
		{
			__LIB_18__::func_245(cParam0);
		}
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	}
}

bool func_57(var uParam0)
{
	bool bVar0;
	if (bLocal_2050)
	{
		return true;
	}
	if (!bLocal_2110)
	{
		if (!__LIB_1__::func_220(105))
		{
			return false;
		}
		else
		{
			__LIB_3__::func_229(82);
			__LIB_3__::func_229(134);
			__LIB_3__::func_229(80);
			bLocal_2110 = true;
		}
		return false;
	}
	if (!bLocal_2048)
	{
		bLocal_2048 = func_174(uParam0);
	}
	if (!bLocal_2049)
	{
		bLocal_2049 = func_175();
	}
	if (bLocal_2048 && bLocal_2049)
	{
		bVar0 = func_176(0, 0);
	}
	if (bVar0)
	{
		__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 32);
		__LIB_10__::func_244(&(uParam0->f_2210[0]), &(uParam0->f_2213[0]), Local_15.f_1, 0f, 0f, 0f, 5f, 5f, 5f, 0, 0, 1, 0, 0);
		__LIB_3__::func_683(&(uLocal_2064[1]), Local_15.f_1, 0f, 0f, 0f, 10f, 10f, 10f, "MV_FOCUS_VOLUME");
		uLocal_2064[0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLSPHERE"), 1302.527f, -1318.345f, 75.5941f, 0f, 0f, 67.25002f, 2f, 3.6f, 3f);
		__LIB_8__::func_858(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
		__LIB_8__::func_858(&(uParam0->f_2106), Local_15, "RHD_Assistant", 0);
		ANIMSCENE::START_ANIM_SCENE(Local_112[0 /*130*/]);
		PED::_0x9851DE7AEC10B4E1(Local_15.f_1, 10f, 1, 0);
		bLocal_2050 = true;
	}
	return false;
}

void func_58(char[4] cParam0)
{
	struct<4> Var0;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (!__LIB_1__::func_44(Global_1392626[*cParam0 /*32*/].f_3))
	{
		if (!__LIB_0__::func_702(Global_1392626[*cParam0 /*32*/].f_3))
		{
			__LIB_1__::func_298(Global_1392626[*cParam0 /*32*/].f_3, 1);
		}
		__LIB_1__::func_821(Global_1392626[*cParam0 /*32*/].f_3, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 4);
		__LIB_10__::func_237(4);
	}
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	__LIB_8__::func_985(*cParam0);
	MISC::_0x1096603B519C905F(__LIB_10__::func_274(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	__LIB_5__::func_109(cParam0, 1, 0);
	AUDIO::_0x33D51F801CB16E4F();
	__LIB_1__::func_723(1);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	__LIB_10__::func_275(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
	{
		Var0 = { func_41(0) };
		if (!func_42(&Var0))
		{
			__LIB_0__::func_7(&(cParam0->f_16), 128);
		}
		__LIB_10__::func_378(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

bool func_60(char[4] cParam0)
{
	if (!__LIB_10__::func_344(cParam0))
	{
		return false;
	}
	func_190(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && __LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				func_191(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_192(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (__LIB_10__::func_277(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (__LIB_10__::func_261(cParam0->f_346))
			{
				if (!__LIB_0__::func_86(cParam0->f_32.f_5))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								__LIB_10__::func_342(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							__LIB_10__::func_342(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					__LIB_10__::func_342(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			func_194(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_195(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (__LIB_9__::func_754(&(cParam0->f_2216)))
					{
						func_113(cParam0);
						func_197(cParam0);
						__LIB_10__::func_342(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_198(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			__LIB_10__::func_342(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;
	func_58(cParam0);
	__LIB_2__::func_480(&(cParam0->f_2277), 0, 0, 1, 0);
	func_113(cParam0);
	__LIB_0__::func_7(&(cParam0->f_16), 1);
	func_199(cParam0);
	__LIB_10__::func_253(cParam0, __LIB_10__::func_568(cParam0));
	iVar0 = __LIB_10__::func_568(cParam0);
	if (iVar0 == 7)
	{
		func_12(cParam0);
		if (cParam0->f_1 != 7)
		{
			iVar0 = 6;
		}
	}
	else if (iVar0 == 8)
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
}

bool func_63(int iParam0)
{
	return __LIB_0__::func_27(iLocal_2076, iParam0);
}

bool func_64()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1114[iVar0]))
		{
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1114[iVar0]);
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_65(char[4] cParam0)
{
	__LIB_10__::func_575(&(cParam0->f_2052), cLocal_1124);
	__LIB_10__::func_575(&(cParam0->f_2052), cLocal_1125);
	__LIB_10__::func_575(&(cParam0->f_2052), cLocal_1126);
	__LIB_10__::func_575(&(cParam0->f_2052), cLocal_1127);
	__LIB_10__::func_575(&(cParam0->f_2052), cLocal_1128);
	__LIB_10__::func_575(&(cParam0->f_2052), cLocal_1129);
}

void func_66(int iParam0)
{
	__LIB_1__::func_683(&iLocal_2076, iParam0);
}

bool func_67()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1114[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_70(char[4] cParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[0 /*130*/]);
	}
	if (func_208(cParam0))
	{
		if (__LIB_8__::func_864(Local_15, vLocal_2042, 2f, 0, 1))
		{
			func_209(4096);
			func_209(32768);
			TASK::CLEAR_PED_TASKS(Local_15, true, false);
			func_210();
			iLocal_2119 = 3;
			return true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15, vLocal_2042, 188.5823f, false, false, true);
		}
	}
	return false;
}

bool func_72(char[4] cParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[0 /*130*/]);
	}
	if (func_212())
	{
		if (!func_213(8))
		{
			func_214(8);
		}
		if (!__LIB_0__::func_898(-1835851517))
		{
			__LIB_1__::func_408(-1835851517, 1, 0);
		}
		if (__LIB_8__::func_864(Local_15, vLocal_2042, 2f, 0, 1))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[2 /*130*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[2 /*130*/]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[1 /*130*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[1 /*130*/]);
			}
			func_209(4096);
			func_209(8192);
			iLocal_2119 = 4;
			func_214(1);
			if (func_176(3, 0))
			{
				if (func_217(3, sLocal_1130[18]))
				{
					__LIB_3__::func_353("LSUTKR_START", 0);
					iLocal_1204 = 14;
					ANIMSCENE::START_ANIM_SCENE(Local_112[3 /*130*/]);
					__LIB_1__::func_148(&uLocal_2091);
					func_214(4096);
					return true;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15, vLocal_2042, 188.5823f, false, false, true);
		}
	}
	return false;
}

bool func_74(char[4] cParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[0 /*130*/]);
	}
	if (!func_219())
	{
		return false;
	}
	if (func_212())
	{
		if (!func_213(8))
		{
			func_214(8);
		}
		if (!__LIB_0__::func_898(-1838352012))
		{
			__LIB_1__::func_408(-1838352012, 1, 0);
		}
		if (!func_176(6, 0))
		{
			return false;
		}
		if (__LIB_8__::func_864(Local_15, vLocal_2028, 2f, 0, 1))
		{
			if (func_176(4, 0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_112[4 /*130*/], func_220(2), Local_1023[2 /*8*/]);
				func_221();
				__LIB_3__::func_353("LSUTKR_START", 0);
				func_222(cParam0);
				func_214(2);
				func_209(4096);
				func_209(8192);
				__LIB_0__::func_325(&iLocal_2060);
				iLocal_2119 = 4;
				func_214(524288);
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			ENTITY::SET_ENTITY_COORDS(Local_15, vLocal_2028, true, false, true, true);
		}
	}
	return false;
}

bool func_75()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[0 /*130*/]);
	}
	if (!func_219())
	{
		return false;
	}
	if (func_212())
	{
		if (!func_213(8))
		{
			func_214(8);
		}
		if (!__LIB_0__::func_898(-1838352012))
		{
			__LIB_1__::func_408(-1838352012, 1, 0);
		}
		if (__LIB_8__::func_864(Local_15, vLocal_2028, 5f, 0, 1))
		{
			func_221();
			__LIB_3__::func_353("LSUTKR_START", 0);
			func_224();
			func_225(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1023[3 /*8*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_1023[3 /*8*/]));
			}
			PED::APPLY_PED_DAMAGE_PACK(Local_15, "CC_DUSTY_full_Body_A", 0f, 1f);
			return true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15, 1277.749f, -1210.383f, 81.2129f, 155.0589f, true, false, true);
		}
	}
	return false;
}

bool func_76(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_192(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		__LIB_10__::func_263(1, 1, 1);
		__LIB_0__::func_11(cParam0);
		if (!func_227(cParam0))
		{
			return false;
		}
		if (__LIB_6__::func_904())
		{
			__LIB_3__::func_732(1);
			return false;
		}
	}
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

int func_79(char[4] cParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_238(cVar0, &(cParam0->f_32), cParam0);
}

int func_87(char[4] cParam0)
{
	func_242(cParam0);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	__LIB_1__::func_538(0);
	if (!bLocal_2055)
	{
		AUDIO::_0x6339C1EA3979B5F7("LSUND_mixer", "LSUND_Scenes");
		bLocal_2055 = true;
	}
	if (__LIB_0__::func_75(&uLocal_1960))
	{
		if (__LIB_0__::func_264(&uLocal_1960) < 2f)
		{
			if (__LIB_8__::func_596(Global_35, Local_15, 6f, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
		}
		else if (__LIB_0__::func_264(&uLocal_1960) < 5f)
		{
			if (__LIB_8__::func_596(Global_35, Local_15, 6f, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
		}
		else
		{
			__LIB_0__::func_37(&uLocal_1960);
		}
	}
	if (func_213(8))
	{
		func_247();
		func_248(cParam0);
	}
	if (!func_213(8))
	{
		if (func_208(cParam0))
		{
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_2064[0]))
	{
		if (iLocal_2119 > 1)
		{
			__LIB_0__::func_172(uLocal_2064[0]);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_2064[1]))
	{
		if (iLocal_2119 > 1)
		{
			if (__LIB_3__::func_587(iLocal_2063, 1, 1))
			{
				__LIB_3__::func_658(iLocal_2063, 1);
				func_252(&iLocal_2063, 1);
			}
		}
		else if (!__LIB_3__::func_587(iLocal_2063, 1, 1))
		{
			iLocal_2063 = func_253(Local_15, uLocal_2064[1], 1);
			__LIB_4__::func_171(iLocal_2063, 1);
		}
	}
	switch (iLocal_2119)
	{
		case 0:
			func_255();
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
			break;
		case 1:
			func_256();
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
			break;
		case 2:
			func_257(cParam0);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			break;
		case 3:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
			func_258(cParam0);
			break;
		case 4:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
			func_259(cParam0);
			break;
		case 5:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			func_260(cParam0);
			break;
		case 6:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			func_261(cParam0);
			break;
		case 8:
			if (func_262(cParam0))
			{
				__LIB_3__::func_353("LSUKTR_STOP", 0);
				return 9;
			}
			break;
	}
	return 8;
}

void func_88(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	else if (!__LIB_0__::func_6(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!__LIB_8__::func_779(1))
	{
		__LIB_10__::func_226(1);
	}
	__LIB_8__::func_985(iParam0);
	if (iParam0 == 0)
	{
		MISC::_0xCC3EDC5614B03F61(29);
	}
	else if (iParam0 == 6)
	{
		MISC::_0xCC3EDC5614B03F61(28);
	}
	else if (iParam0 == 3)
	{
		MISC::_0xCC3EDC5614B03F61(30);
	}
	MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = __LIB_0__::func_23();
		__LIB_1__::func_446(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_268(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_269(Global_1392626[iParam0 /*32*/].f_7);
	}
}

bool func_109(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_10__::func_266(uParam0);
	if (iVar0 == 0 || iVar0 == 1)
	{
		if (iVar0 == 1)
		{
			if ((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[1 /*130*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[1 /*130*/], false)) && !func_213(16)) && !func_213(32)) && !func_213(64))
			{
				if (func_296(1, sLocal_1163[14]))
				{
				}
			}
		}
		if (!func_297(uParam0))
		{
			return false;
		}
	}
	if (iVar0 != 2)
	{
		if ((!func_298(Local_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) || __LIB_8__::func_864(Global_35, vLocal_2028, 70f, 1, 1)) || __LIB_8__::func_864(Global_35, Local_15.f_1, 200f, 1, 1))
		{
			return false;
		}
	}
	else if (!func_298(Local_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
	{
		return false;
	}
	func_299(&Local_15);
	return true;
}

void func_111(char[4] cParam0)
{
	int iVar0;
	if (!__LIB_0__::func_898(-1674179981))
	{
		__LIB_1__::func_408(-1674179981, 1, 0);
	}
	func_301();
	func_302();
	__LIB_18__::func_246(&uLocal_1064);
	__LIB_3__::func_353("LSUKTR_STOP", 0);
	func_304();
	func_305();
	func_119(&Local_1812, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2123))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_2123, 136, false);
	}
	__LIB_2__::func_919(Local_1023[1 /*8*/], 1, 1);
	__LIB_2__::func_919(Local_1023[3 /*8*/], 1, 1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1023[iVar0 /*8*/]))
		{
			if (iVar0 != 0)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1023[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_2062))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_2062);
	}
	func_119(&iLocal_2123, 1, 0, 1);
	__LIB_10__::func_284(&iLocal_2122);
	__LIB_0__::func_325(&iLocal_2060);
	__LIB_0__::func_325(&(Local_15.f_5));
	if (bLocal_2054)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15))
		{
			PLAYER::_0x9073EC5456651A90(PLAYER::GET_PLAYER_INDEX(), Local_15);
		}
	}
	func_119(&Local_15, 1, 0, 1);
	func_308();
	func_299(&Local_1208);
	__LIB_4__::func_193(82);
	__LIB_4__::func_193(134);
	__LIB_4__::func_193(80);
	__LIB_0__::func_769();
	func_310();
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(210376647, true);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSUND");
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
}

void func_113(char[4] cParam0)
{
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (__LIB_8__::func_601(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			__LIB_2__::func_480(&(cParam0->f_2277), 0, 0, 1, 0);
			func_311(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

void func_119(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*bParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*bParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*bParam0);
		}
		PED::SET_PED_KEEP_TASK(*bParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(bParam0);
}

void func_131(var uParam0)
{
	__LIB_3__::func_573(&(uLocal_2064[2]), 1274.627f, -1208.393f, 82.29432f, 0f, 0f, 23.25f, 4f, 7f, 4f, "MV_GRAVE_VOL");
	__LIB_3__::func_683(&(uLocal_2064[3]), 1290.453f, -1229.947f, 82.433f, 0f, 0f, 23.65f, 32.437f, 34.893f, 21.716f, "MV_GRAVEYARD_VOL");
	__LIB_3__::func_573(&(uLocal_2064[4]), 1284.124f, -1225.064f, 84.78531f, 0f, 0f, 20.2f, 3.68f, 5.75f, 9.5f, "MV_CHURCH_STAIRS_VOL");
	__LIB_3__::func_573(&(uLocal_2064[5]), 1292.395f, -1220.659f, 81.68302f, 0f, 0f, 20.99999f, 4.5f, 14f, 3.75f, "MV_CHURCH_BUSHES_RIGHT_VOL");
	__LIB_3__::func_683(&(uLocal_2064[6]), 1291.169f, -1235.585f, 76.04839f, 0f, 0f, 109f, 54f, 39.25f, 26.25f, "MV_MISSION_AREA_VOL");
	__LIB_3__::func_573(&(uLocal_2064[7]), 1316.645f, -1284.158f, 76.92039f, 0f, 0f, 56.90787f, 83.8111f, 23.88441f, 13.18233f, "MV_ABANDONED_WAGON_VOL");
	__LIB_3__::func_573(&(uLocal_2064[8]), 1300.89f, -1306.568f, 77.06334f, 0f, 0f, 48.25f, 6.25f, 5.25f, 7.5f, "MV_HORSE_HITCH_AREA_VOL");
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_2064[3]))
	{
		__LIB_2__::func_261(uLocal_2064[3], "MV_GRAVEYARD_VOL", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0x18262CAFEBB5FBE1(uLocal_2064[3], 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(uLocal_2064[3], 0, 0, 0, -1, -1, 0);
		PATHFIND::_0xE5EF9DE716FF737E(uLocal_2064[3], 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_2064[8]))
	{
		if (!PED::_0x91A5F9CBEBB9D936(uLocal_2061))
		{
			uLocal_2061 = __LIB_1__::func_391(uLocal_2064[8], 0, 0, 0);
		}
	}
	__LIB_10__::func_458(uParam0, 1300.39f, -1318.744f, 75.68119f, 0f, 0f, 0f, 8f, 8f, 8f);
	__LIB_10__::func_550(uParam0, 12f, 11f, 10.5f, 10f, 1f, 0);
}

void func_135()
{
	__LIB_2__::func_602(&(Local_2124[0 /*17*/]), "MCXT_REASON", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_2124[1 /*17*/]), "MCXT_THREAT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_2159[0 /*17*/]), "MCXT_REASON", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_2159[1 /*17*/]), "MCXT_THREAT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_137(var uParam0)
{
	func_323();
	func_324(uParam0);
	func_325();
	func_326();
	func_327();
	func_328();
}

bool func_138(var uParam0)
{
	if (!__LIB_8__::func_601(Local_15, 0))
	{
		return true;
	}
	else if (iLocal_2121 == 1 && !__LIB_8__::func_864(Global_35, Local_15.f_1, 10f, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_146(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_336(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_337(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_339(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_340(bParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_341(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_343(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_344(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_345(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_345(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_346(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_11__::func_255(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_18__::func_317(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_350(uParam2, bParam0)) && func_351(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_18__::func_317(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_350(uParam2, bParam0)) && func_351(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_11__::func_256(bParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								func_338(bParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_11__::func_256(bParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							func_338(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_354(uParam2, bParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_11__::func_256(bParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							func_338(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_18__::func_817(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_357(bParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_358(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_11__::func_286(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_11__::func_257(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_362(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (__LIB_11__::func_258(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_148(char[4] cParam0)
{
	__LIB_10__::func_285(cParam0, 2);
	__LIB_0__::func_325(&iLocal_2060);
	__LIB_0__::func_325(&(Local_15.f_5));
	func_305();
	__LIB_3__::func_353("LSUKTR_STOP", 0);
	__LIB_18__::func_246(&uLocal_1064);
	__LIB_1__::func_539();
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_112[0 /*130*/], func_220(1), Local_1023[1 /*8*/]);
	}
	__LIB_3__::func_319(Local_112[0 /*130*/]);
	if (__LIB_10__::func_266(cParam0) == 1)
	{
		func_299(&Local_15);
	}
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			PED::SET_PED_CAN_BE_TARGETTED(Local_15, true);
			PED::SET_PED_CAN_RAGDOLL(Local_15, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15, joaat("REL_CIVMALE"));
		}
		func_119(&Local_1812, 0, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(Local_1614[0 /*97*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1614[0 /*97*/]))
		{
			if (!PED::_IS_PED_HOGTIED(Local_1614[0 /*97*/]))
			{
				func_119(&(Local_1614[0 /*97*/]), 0, 1, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1614[1 /*97*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1614[1 /*97*/]))
		{
			if (!PED::_IS_PED_HOGTIED(Local_1614[1 /*97*/]))
			{
				func_119(&(Local_1614[1 /*97*/]), 0, 1, 1);
			}
		}
		func_214(-2147483648);
	}
	else if (__LIB_10__::func_266(cParam0) == 4 || __LIB_10__::func_266(cParam0) == 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			func_367();
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15, false);
	}
	if (bLocal_2055)
	{
		AUDIO::_0x9428447DED71FC7E("LSUND_Scenes");
	}
}

int func_156(vector3 vParam0, var uParam3)
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
		iVar0 = func_376(0, 0);
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

bool func_157(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (!__LIB_8__::func_601(Local_15, 0))
		{
			StringCopy(&(cParam0->f_2208), "UND_FAIL_1", 16);
			return true;
		}
		else if (func_380())
		{
			StringCopy(&(cParam0->f_2208), "UND_FAIL_5", 16);
			return true;
		}
		else if (iLocal_2121 == 11)
		{
			__LIB_3__::func_732(0);
			if (iLocal_2119 > 2)
			{
				StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
			}
			else
			{
				StringCopy(&(cParam0->f_2208), "UND_FAIL_3", 16);
			}
			return true;
		}
		if (iLocal_2119 < 3)
		{
			if (func_381())
			{
				func_382();
				StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
				return true;
			}
		}
		if (func_383())
		{
			func_382();
			StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
			return true;
		}
		if (!__LIB_0__::func_75(&uLocal_1966))
		{
			if (PLAYER::_0x6C54E69516CC56BD(PLAYER::GET_PLAYER_INDEX()) > 0)
			{
				__LIB_1__::func_148(&uLocal_1966);
			}
			else if (PED::_0x5407B7288D0478B7(Global_35, 16900) > 0)
			{
				__LIB_1__::func_148(&uLocal_1966);
			}
		}
		else if (__LIB_0__::func_264(&uLocal_1966) > 4f)
		{
			func_382();
			StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
			return true;
		}
		if (__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
		{
			func_382();
			StringCopy(&(cParam0->f_2208), "UND_FAIL_6", 16);
			return true;
		}
		if ((PED::IS_PED_SHOOTING(Global_35) && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO")) && iLocal_2119 > 2)
		{
			func_382();
			StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
			return true;
		}
		if (iLocal_2119 == 2)
		{
			if (!func_213(536870912))
			{
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					func_214(536870912);
				}
			}
			else
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
				{
					func_384(536870912);
					if (__LIB_0__::func_75(&uLocal_1954))
					{
						__LIB_0__::func_37(&uLocal_1954);
					}
					return false;
				}
				if (func_385(33554432) || func_386(Global_35, uLocal_2064[3], 0, 1))
				{
					if (!__LIB_0__::func_75(&uLocal_1954))
					{
						__LIB_1__::func_148(&uLocal_1954);
					}
					else if (__LIB_0__::func_264(&uLocal_1954) > 12f || func_386(Global_35, uLocal_2064[3], 0, 1))
					{
						StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
						return true;
					}
				}
			}
		}
		else if (iLocal_2119 > 2)
		{
			if (!func_213(536870912))
			{
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					func_214(536870912);
				}
			}
			else
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
				{
					func_384(536870912);
					if (__LIB_0__::func_75(&uLocal_1954))
					{
						__LIB_0__::func_37(&uLocal_1954);
					}
					return false;
				}
				if (func_386(Global_35, uLocal_2064[3], 0, 1))
				{
					if (!__LIB_0__::func_75(&uLocal_1954))
					{
						__LIB_1__::func_148(&uLocal_1954);
					}
					else if (__LIB_0__::func_264(&uLocal_1954) > 3f || func_386(Global_35, uLocal_2064[3], 0, 1))
					{
						StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
						return true;
					}
				}
			}
		}
		if ((func_385(524288) && !__LIB_6__::func_903("LS_UND_BRW_SPT1")) && !__LIB_6__::func_903("LS_UND_BRW_SPT2"))
		{
			if (!func_63(134217728))
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_SEEN", 0))
				{
					func_66(134217728);
				}
			}
			else if (!__LIB_6__::func_903("LS_UND_SEEN"))
			{
				func_214(1048576);
				StringCopy(&(cParam0->f_2208), "UND_FAIL_4", 16);
				return true;
			}
		}
		else if (func_63(32) && !__LIB_6__::func_903("LS_UND_WOM_GWN"))
		{
			if (!func_63(134217728))
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_SEEN", 0))
				{
					func_66(134217728);
				}
			}
			else if (!__LIB_6__::func_903("LS_UND_SEEN"))
			{
				func_214(1048576);
				StringCopy(&(cParam0->f_2208), "UND_FAIL_4", 16);
				return true;
			}
		}
	}
	return false;
}

bool func_160(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
		uParam0->f_295++;
		if (uParam0->f_295 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_295 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_10__::func_348(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_10__::func_431(uParam0) };
			if (!__LIB_0__::func_86(vVar0))
			{
				__LIB_0__::func_487(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = __LIB_8__::func_619(Global_35, __LIB_0__::func_85(uParam0), 1);
	if (__LIB_0__::func_84(uParam0, 128) || __LIB_0__::func_84(uParam0, 256))
	{
		if ((fVar3 >= __LIB_10__::func_286(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
		{
			if (uParam0->f_313)
			{
				__LIB_1__::func_436();
				uParam0->f_313 = 0;
			}
			__LIB_10__::func_287(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
			}
			__LIB_10__::func_405(uParam0);
			__LIB_10__::func_288(uParam0, 128, 1);
			__LIB_10__::func_288(uParam0, 256, 1);
			__LIB_10__::func_288(uParam0, 4096, 1);
			__LIB_10__::func_288(uParam0, 32768, 1);
			__LIB_10__::func_288(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_10__::func_228(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				if (__LIB_10__::func_228(uParam0) >= __LIB_10__::func_286(uParam0))
				{
				}
				Var4 = { __LIB_10__::func_289(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_10__::func_402(uParam0);
				}
				Var4 = { __LIB_10__::func_289(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_228 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), iVar12, &Var4, false, true);
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
		__LIB_10__::func_466(uParam0);
		if (!uParam0->f_313)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_313 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_10__::func_403(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_246[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_246[iVar14 /*9*/].f_8)
						{
							uParam0->f_246[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_228, &(uParam0->f_246[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &(uParam0->f_246[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_228, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_228, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_228, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15))
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
			__LIB_10__::func_288(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

int func_174(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_15))
	{
		if (func_413(3, &Local_15, iLocal_1306, vLocal_2032, fLocal_2035, 1, 1, 0, 1, 1, 0, 1))
		{
			ENTITY::_0x9587913B9E772D29(Local_15, 0);
			__LIB_1__::func_206(1300.641f, -1318.057f, 75.54131f, 5f, 0);
		}
	}
	else
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(Local_15))
		{
			return 0;
		}
		__LIB_10__::func_576(Local_15, joaat("META_OUTFIT_DEFAULT"));
		Global_1392626[*uParam0 /*32*/].f_11 = Local_15;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15, joaat("PLAYER"));
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_15, "LSUND_NPC_group", 0f);
		func_417(Local_15, __LIB_1__::func_760(joaat("REWARD_PED_SMALL"), 0, -1));
		PED::SET_PED_CONFIG_FLAG(Local_15, 169, true);
		PED::SET_PED_CONFIG_FLAG(Local_15, 504, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_15, false);
		PED::SET_PED_CAN_RAGDOLL(Local_15, false);
		PED::SET_PED_CAN_BE_TARGETTED(Local_15, false);
		PED::SET_PED_CONFIG_FLAG(Local_15, 66, true);
		PED::_0x89F5E7ADECCCB49C(Local_15, "normal");
		PED::_0x923583741DC87BCE(Local_15, "Default");
		PED::SET_PED_CAN_HEAD_IK(Local_15, true);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_15, "Cautious", 1f, -1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1306);
		return 1;
	}
	return 0;
}

int func_175()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[0 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[0 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[0 /*8*/].f_7))
		{
			if (func_418())
			{
				ENTITY::SET_ENTITY_COORDS(Local_1023[0 /*8*/], vLocal_2036, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Local_1023[0 /*8*/], vLocal_2039, 2, true);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_1023[0 /*8*/], false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[0 /*8*/].f_7);
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[1 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[1 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[1 /*8*/].f_7))
		{
			Local_1023[1 /*8*/] = OBJECT::CREATE_OBJECT(Local_1023[1 /*8*/].f_7, Local_1023[1 /*8*/].f_1, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_1023[1 /*8*/], Local_1023[1 /*8*/].f_4, 2, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[1 /*8*/].f_7);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1023[1 /*8*/]))
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0, int iParam1)
{
	if (!Local_112[iParam0 /*130*/].f_16)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[iParam0 /*130*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_112[iParam0 /*130*/], true, false))
			{
				Local_112[iParam0 /*130*/].f_16 = 1;
				switch (iParam0)
				{
					case 0:
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_112[iParam0 /*130*/], "Gwen", &(Local_112[iParam0 /*130*/].f_4), false, 0, 2))
						{
						}
						break;
					case 4:
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_112[iParam0 /*130*/], "Gwen", &(Local_112[iParam0 /*130*/].f_4), false, 0, 2))
						{
							vLocal_2028 = { Local_112[iParam0 /*130*/].f_4 };
							fLocal_2031 = Local_112[iParam0 /*130*/].f_4.f_3.f_2;
						}
						break;
				}
				return Local_112[iParam0 /*130*/].f_16;
			}
		}
		else
		{
			Local_112[iParam0 /*130*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_112[iParam0 /*130*/].f_1, iParam1, Local_112[iParam0 /*130*/].f_17, false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[iParam0 /*130*/]))
			{
				func_419(iParam0);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_112[iParam0 /*130*/]);
			}
		}
	}
	return Local_112[iParam0 /*130*/].f_16;
}

void func_190(char[4] cParam0)
{
	switch (cParam0->f_17)
	{
		case 0:
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1392626[*cParam0 /*32*/].f_24, true) > cParam0->f_17.f_5)
				{
					if (__LIB_0__::func_75(&(cParam0->f_17.f_12)))
					{
						__LIB_0__::func_37(&(cParam0->f_17.f_12));
					}
				}
				cParam0->f_17 = 1;
			}
			else
			{
				cParam0->f_17 = 2;
				return;
			}
			break;
		case 1:
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (func_447(Global_35, Global_1392626[*cParam0 /*32*/].f_24, &(cParam0->f_17.f_12), cParam0->f_17.f_2, cParam0->f_17.f_3, cParam0->f_17.f_4, cParam0->f_17.f_5, cParam0->f_17.f_6, cParam0->f_17.f_7, 0, 1, 1, 1))
			{
				cParam0->f_17 = 2;
				return;
			}
			else if (PED::IS_PED_ON_FOOT(Global_35))
			{
				cParam0->f_17 = 2;
				return;
			}
			break;
		case 2:
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && !__LIB_8__::func_640(Global_35, 501393341)) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !__LIB_8__::func_640(Global_35, -828834893)))
				{
					cParam0->f_17 = 0;
				}
			}
			break;
	}
}

void func_191(var uParam0, struct<4> Param1, int iParam5)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_10__::func_540(uParam0, Param1, iParam5);
			break;
		case 1:
			func_451(uParam0);
			break;
		case 2:
			__LIB_10__::func_541(uParam0);
			break;
	}
}

bool func_192(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_10__::func_278(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1662 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1663 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1665 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1663)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1664 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1664 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1665)
		{
			uParam0->f_1667 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1668 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_10__::func_406(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			func_454(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_10__::func_278(uParam0, 524288))
				{
					__LIB_10__::func_542(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_10__::func_291(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_10__::func_475(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_10__::func_278(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16))
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
			if (uParam0->f_1450 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_10__::func_292(uParam0, uParam0->f_1450))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1454 >= 0)
					{
						func_463(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					func_463(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_10__::func_582(uParam0);
			}
		}
	}
	bVar0 = __LIB_10__::func_473(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_10__::func_278(uParam0, 268435456) && bVar1) && !__LIB_10__::func_278(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668);
			if (uParam0->f_1450 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_782[uParam0->f_1450 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1668)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_10__::func_293(uParam0, 131072);
				__LIB_10__::func_293(uParam0, 268435456);
			}
		}
		if (__LIB_10__::func_280(uParam0, 64) || (uParam0->f_1450 >= 0 && !__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_10__::func_278(uParam0, 131072))
	{
		__LIB_10__::func_386(uParam0);
		if (!__LIB_10__::func_278(uParam0, 262144))
		{
			if ((bVar0 && __LIB_10__::func_278(uParam0, 65536)) || __LIB_10__::func_278(uParam0, 131072))
			{
				__LIB_10__::func_293(uParam0, 32768);
				__LIB_10__::func_291(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1535 = 1;
				__LIB_10__::func_475(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		func_468(uParam0, iParam5);
		__LIB_10__::func_294(uParam0);
		if (!__LIB_10__::func_295(uParam0, 1))
		{
			__LIB_10__::func_350(uParam0);
		}
		__LIB_10__::func_296(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_10__::func_540(uParam0, Param1, iParam5);
			break;
		case 1:
			func_451(uParam0);
			break;
		case 2:
			__LIB_10__::func_541(uParam0);
			break;
		case 3:
			if (__LIB_10__::func_277(uParam0))
			{
				__LIB_8__::func_872(2);
				func_463(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1638));
				__LIB_10__::func_291(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_10__::func_278(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (func_475(uParam0))
				{
					__LIB_10__::func_291(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (func_476(uParam0))
				{
					__LIB_10__::func_291(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || __LIB_0__::func_264(&(uParam0->f_1638)) >= 15f)
			{
				if (__LIB_10__::func_467(uParam0, iParam5))
				{
					if (__LIB_10__::func_299(uParam0))
					{
						uParam0->f_1451 = __LIB_10__::func_351(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1638));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_10__::func_291(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_10__::func_291(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_10__::func_475(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_10__::func_467(uParam0, iParam5))
			{
				__LIB_10__::func_475(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_194(char[4] cParam0)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = 10f;
	if (!__LIB_0__::func_1(cParam0->f_16, 2))
	{
		if (__LIB_8__::func_601(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			if (__LIB_8__::func_864(Global_1392626[*cParam0 /*32*/].f_11, Global_36, 40f, 1, 1))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_1392626[*cParam0 /*32*/].f_11, true, false) };
				if (!func_480(Global_1392626[*cParam0 /*32*/].f_11, fVar0, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */) && func_481(vVar1, &(cParam0->f_3), fVar0))
				{
					__LIB_10__::func_415(*cParam0);
					__LIB_0__::func_7(&(cParam0->f_16), 2);
				}
			}
		}
	}
	else
	{
		func_483(Global_1392626[*cParam0 /*32*/].f_11, &(cParam0->f_3), -0.75f, 0f, 0f, 0, 35f, fVar0, -1, 3000, 3000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
	}
}

int func_195(bool bParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0));
		bVar8 = __LIB_5__::func_439(bParam12 >= 0f, bParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
		func_486(bParam0, iParam1, uParam3, fParam2, bVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_4__::func_231(*bParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_488(bParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, bVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_195(bParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !bVar8 <= (fParam2 + 5f))
				{
					func_311(bParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*bParam0, 317, true))
						{
							__LIB_1__::func_488(*bParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*bParam0, 0, 1);
					}
				}
				if (func_491(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_492(bParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
					if (func_495(bParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_10__::func_577(iParam1, uParam3, bVar8);
					if (__LIB_6__::func_834(*bParam0, iParam1, uParam3))
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
				if (func_491(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_495(bParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_492(bParam0, func_491(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
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
						if (!__LIB_8__::func_640(Global_35, 501393341) && !__LIB_8__::func_640(Global_35, 242628503))
						{
							iVar9 = 0;
							if (__LIB_18__::func_276(Global_35, *bParam0, 1f) == 3)
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
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && __LIB_8__::func_601(iParam1->f_28, 0)) && __LIB_8__::func_596(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !__LIB_8__::func_640(iParam1->f_28, 518218985)) && !__LIB_8__::func_640(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!__LIB_8__::func_640(Global_35, -828834893) && !__LIB_8__::func_640(Global_35, 242628503))
						{
							iVar10 = 0;
							if (__LIB_18__::func_276(Global_35, *bParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_502(iParam1, bParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_503(iParam1)))
					{
					}
					else if (!func_504(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_1__::func_148(&(iParam1->f_18));
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
				if (func_506(bParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_491(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_495(bParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_492(bParam0, func_491(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				__LIB_10__::func_577(iParam1, uParam3, bVar8);
				if (func_506(bParam0, iParam1, fParam4, bVar6))
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
			func_507(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_197(char[4] cParam0)
{
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 32))
	{
		if (__LIB_8__::func_601(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, 0, -1f, -1f, -1f);
		}
	}
}

bool func_198(char[4] cParam0)
{
	if (!bLocal_2058)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1392626[3 /*32*/]))
		{
			func_508(cParam0, &(cParam0->f_2277[0 /*17*/]), 0, 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 8f, 0);
			__LIB_10__::func_569(&(cParam0->f_2216), Global_1392626[3 /*32*/], 0);
			__LIB_2__::func_411(&(cParam0->f_2277[0 /*17*/]), 0, 0);
			bLocal_2058 = true;
			bLocal_2059 = false;
		}
	}
	else
	{
		func_511(&(cParam0->f_2216), Local_15, cParam0->f_2216.f_56, 0);
	}
	if (bLocal_2059)
	{
		if ((PED::IS_PED_IN_COVER(Global_35, false, false) || !__LIB_8__::func_596(Global_35, Local_15, 8f, 1)) || __LIB_3__::func_592(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, false, false)) > 3f)
		{
			__LIB_2__::func_411(&(cParam0->f_2277[0 /*17*/]), 0, 0);
			bLocal_2059 = false;
		}
	}
	else if ((!PED::IS_PED_IN_COVER(Global_35, false, false) && __LIB_8__::func_596(Global_35, Local_15, 8f, 1)) && __LIB_3__::func_592(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, false, false)) < 3f)
	{
		__LIB_2__::func_411(&(cParam0->f_2277[0 /*17*/]), 1, 0);
		bLocal_2059 = true;
	}
	__LIB_8__::func_906(Global_35, vLocal_2032, 0, 12f, 11.5f, 11f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
	func_217(0, sLocal_1130[1]);
	func_242(cParam0);
	func_247();
	if (((iLocal_2121 == 1 && __LIB_8__::func_864(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, false, false), 10f, 1, 1)) || __LIB_8__::func_864(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, false, false), 1.5f, 1, 1)) || (__LIB_0__::func_71(Global_35) && __LIB_8__::func_864(func_515(Global_35), ENTITY::GET_ENTITY_COORDS(Local_15, false, false), 4f, 1, 1)))
	{
		func_516(1);
		__LIB_3__::func_732(0);
		return true;
	}
	return false;
}

void func_199(char[4] cParam0)
{
	__LIB_1__::func_539();
	PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_15, "LS_UNDERTAKER", 1301.84f, -1318.89f, 75.87f, 0, "LSUND");
	POPULATION::_0xB56D41A694E42E86(uLocal_2064[1], 264192, 0, 0, -1, -1, 8);
	if (__LIB_0__::func_71(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
	}
}

bool func_208(char[4] cParam0)
{
	if (!__LIB_0__::func_27(iLocal_14, 1))
	{
		if (func_525())
		{
			__LIB_1__::func_683(&iLocal_14, 1);
		}
		return false;
	}
	if (!__LIB_0__::func_27(iLocal_14, 2))
	{
		if (func_212())
		{
			__LIB_1__::func_683(&iLocal_14, 2);
		}
		return false;
	}
	if (!__LIB_0__::func_27(iLocal_14, 4))
	{
		if (func_176(1, 0))
		{
			__LIB_1__::func_683(&iLocal_14, 4);
		}
		return false;
	}
	if (!__LIB_0__::func_27(iLocal_14, 8))
	{
		if (func_176(2, 0))
		{
			__LIB_1__::func_683(&iLocal_14, 8);
		}
		return false;
	}
	if (!__LIB_0__::func_27(iLocal_14, 64))
	{
		__LIB_8__::func_858(&(cParam0->f_2106), Local_1318[0 /*97*/], "LS_UN_MORN_1", 0);
		__LIB_8__::func_858(&(cParam0->f_2106), Local_1318[1 /*97*/], "LS_UN_MORN_2", 0);
		__LIB_8__::func_858(&(cParam0->f_2106), Local_1318[2 /*97*/], "LS_UN_MORN_3", 0);
		__LIB_1__::func_683(&iLocal_14, 64);
		return false;
	}
	if (!__LIB_0__::func_27(iLocal_14, 128))
	{
		__LIB_0__::func_566(uLocal_2064[3], 0);
		__LIB_1__::func_683(&iLocal_14, 128);
		return false;
	}
	if (!__LIB_0__::func_27(iLocal_14, 256))
	{
		__LIB_3__::func_730(uLocal_2064[3], 0, 0, 1, 1, 0);
		__LIB_1__::func_683(&iLocal_14, 256);
		return false;
	}
	if (!__LIB_0__::func_27(iLocal_14, 16))
	{
		func_527();
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[1 /*130*/], false))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_112[1 /*130*/]);
		}
		__LIB_1__::func_683(&iLocal_14, 16);
		return false;
	}
	if (!__LIB_0__::func_27(iLocal_14, 32))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[2 /*130*/], false))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_112[2 /*130*/]);
		}
		__LIB_1__::func_683(&iLocal_14, 32);
		return false;
	}
	if (!func_63(2097152))
	{
		if (!__LIB_0__::func_27(iLocal_14, 512))
		{
			if (func_64())
			{
				__LIB_1__::func_683(&iLocal_14, 512);
			}
			return false;
		}
		if (!__LIB_0__::func_27(iLocal_14, 1024))
		{
			func_65(cParam0);
			__LIB_1__::func_683(&iLocal_14, 1024);
			func_66(2097152);
			return false;
		}
	}
	else
	{
		func_214(8);
		return true;
	}
	return false;
}

void func_209(int iParam0)
{
	__LIB_1__::func_683(&iLocal_2075, iParam0);
}

void func_210()
{
	func_310();
	__LIB_1__::func_148(&uLocal_1960);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15, Global_35, -1, -1f, -1f, -1f);
	func_528(0);
	func_529(4);
}

bool func_212()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[2 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[2 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[2 /*8*/].f_7))
		{
			Local_1023[2 /*8*/] = OBJECT::CREATE_OBJECT(Local_1023[2 /*8*/].f_7, Local_1023[2 /*8*/].f_1, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_1023[2 /*8*/], Local_1023[2 /*8*/].f_4, 2, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[2 /*8*/].f_7);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[4 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[4 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[4 /*8*/].f_7))
		{
			Local_1023[4 /*8*/] = OBJECT::CREATE_OBJECT(Local_1023[4 /*8*/].f_7, Local_1023[4 /*8*/].f_1, true, true, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[4 /*8*/].f_7);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1023[2 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1023[4 /*8*/]))
	{
		return true;
	}
	return false;
}

bool func_213(int iParam0)
{
	return __LIB_0__::func_27(iLocal_2074, iParam0);
}

void func_214(int iParam0)
{
	__LIB_1__::func_683(&iLocal_2074, iParam0);
}

bool func_217(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[iParam0 /*130*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_112[iParam0 /*130*/], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_112[iParam0 /*130*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[iParam0 /*130*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[iParam0 /*130*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[iParam0 /*130*/], sParam1))
		{
		}
	}
	return false;
}

bool func_219()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[3 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[3 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[3 /*8*/].f_7))
		{
			Local_1023[3 /*8*/] = OBJECT::CREATE_OBJECT(Local_1023[3 /*8*/].f_7, Local_1023[3 /*8*/].f_1, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_1023[3 /*8*/], Local_1023[3 /*8*/].f_4, 2, true);
			ENTITY::SET_ENTITY_VISIBLE(Local_1023[3 /*8*/], false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[3 /*8*/].f_7);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1208))
	{
		STREAMING::REQUEST_MODEL(iLocal_1305, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_1305))
		{
			if (func_413(3, &Local_1208, iLocal_1305, Local_1208.f_1, Local_1208.f_4, 1, 1, 0, 1, 1, 0, 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1305);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1023[3 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1208))
	{
		if (!func_63(4194304))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1208) && PED::_0xA0BC8FAED8CFEB3C(Local_1208))
			{
				__LIB_10__::func_576(Local_1208, iLocal_1317);
				AUDIO::STOP_PED_SPEAKING(Local_1208, true);
				PED::SET_PED_CAN_RAGDOLL(Local_1208, false);
				func_535(Local_1208, 0);
				ENTITY::_0x18FF3110CF47115D(Local_1208, 7, 0);
				PED::SET_PED_CONFIG_FLAG(Local_1208, 186, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1208, true);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1208, true);
				ENTITY::_SET_ENTITY_HEALTH(Local_1208, 0, 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1208, "LSUND_NPC_group", 0f);
				func_66(4194304);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

char* func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Casket";
		case 1:
			return "HandPlane";
		case 2:
			return "Shovel";
		case 3:
			return "Brooch";
		case 4:
			return "RAG";
	}
	return "INVALID";
}

void func_221()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1023[2 /*8*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_1023[2 /*8*/], 1276f, -1208f, 81.69f, false, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Local_1023[2 /*8*/], -104.94f, -0.8f, -31.82f, 2, false);
	}
}

void func_222(char[4] cParam0)
{
	if (__LIB_8__::func_864(Local_15, Global_36, 20f, 1, 1))
	{
		if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_GRAVE", 0))
		{
			__LIB_1__::func_148(&uLocal_2095);
			iLocal_1204 = 19;
			func_536(4, "Bool", 0);
			ANIMSCENE::START_ANIM_SCENE(Local_112[4 /*130*/]);
			func_529(7);
		}
	}
	else
	{
		iLocal_1204 = 19;
		func_536(4, "Bool", 0);
		ANIMSCENE::START_ANIM_SCENE(Local_112[4 /*130*/]);
		func_529(7);
	}
}

void func_224()
{
	PED::_0x2208438012482A1A(Local_15, false, false);
	TASK::TASK_CLEAR_LOOK_AT(Local_15);
	func_537(Local_15, sLocal_1114[2], 25614);
	__LIB_0__::func_37(&uLocal_1939);
	iLocal_2103 = 0;
	func_529(10);
}

bool func_225(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_225(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_563(28);
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
			func_574(iParam0);
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
						func_225(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_225(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_225(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_225(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_225(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_225(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_225(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_563(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_595(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_595(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_225(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_225(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_617(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_618(iParam0);
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
				func_225(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

bool func_227(char[4] cParam0)
{
	if (cParam0->f_2 == 3)
	{
		if (!func_624(cParam0))
		{
			return false;
		}
	}
	return true;
}

int func_238(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_10__::func_348(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_10__::func_476(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_228, false))
				{
					__LIB_18__::func_236(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					__LIB_1__::func_747(uParam4, 4);
					return 0;
				}
				else if (__LIB_10__::func_302(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_10__::func_459(uParam4);
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
				__LIB_10__::func_466(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (func_160(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
					{
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_8__::func_864(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
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
					__LIB_18__::func_236(uParam4, &cParam0);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_640(uParam4);
			if (__LIB_10__::func_302(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_10__::func_407(uParam4, 1))
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
				__LIB_10__::func_476(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_10__::func_303(uParam4) - __LIB_10__::func_304(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_10__::func_352(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_10__::func_304(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_10__::func_305(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				__LIB_0__::func_488(uParam4);
				func_647(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_228);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_10__::func_288(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_10__::func_304(uParam4) <= 5000) && __LIB_10__::func_304(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_648(&(uParam4->f_285), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_10__::func_304(uParam4) >= 5000 && __LIB_10__::func_304(uParam4) <= (__LIB_10__::func_303(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_10__::func_305(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				func_647(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_228))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_10__::func_302(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
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
	return 0;
}

void func_242(char[4] cParam0)
{
	if (__LIB_8__::func_601(Local_15, 0))
	{
		func_651(Local_15);
		if (!bLocal_2054)
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_15, 8, 0, 1);
			bLocal_2054 = true;
		}
		switch (iLocal_2121)
		{
			case 0:
				func_652(cParam0);
				break;
			case 11:
				func_653();
				break;
			case 1:
				__LIB_0__::func_11();
				break;
			case 2:
				func_655();
				break;
			case 3:
				func_656(cParam0);
				break;
			case 4:
				func_657(cParam0);
				break;
			case 5:
				func_658(cParam0);
				break;
			case 6:
				func_659();
				break;
			case 7:
				func_660(cParam0);
				break;
			case 12:
				func_661(cParam0);
				break;
			case 8:
				func_662(cParam0);
				break;
			case 9:
				func_663(cParam0);
				break;
			case 10:
				func_664(cParam0);
				break;
		}
	}
	else
	{
		iLocal_2121 = 14;
	}
}

void func_247()
{
	int iVar0;
	func_667();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[iVar0 /*130*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[iVar0 /*130*/], false))
			{
				Local_112[iVar0 /*130*/].f_18 = ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_112[iVar0 /*130*/]);
				func_668(iVar0);
			}
		}
		iVar0++;
	}
}

void func_248(char[4] cParam0)
{
	int iVar0;
	if (func_385(256))
	{
		func_669(cParam0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_8__::func_601(Local_1318[iVar0 /*97*/], 0))
		{
			switch (iLocal_1610[iVar0])
			{
				case 0:
					func_670(iVar0, cParam0);
					break;
				case 1:
					func_671(iVar0);
					break;
				case 2:
					func_672(iVar0);
					break;
				case 3:
					func_673(iVar0);
					break;
				case 4:
					func_674(iVar0);
					break;
			}
		}
		iVar0++;
	}
}

void func_252(int iParam0, bool bParam1)
{
	if (*iParam0 > -1 && *iParam0 < 4)
	{
		if (Global_1955500[*iParam0 /*16*/].f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			if (__LIB_3__::func_749(1, 1) == *iParam0)
			{
				func_676(-1, 1, 1);
			}
			if (bParam1)
			{
				__LIB_0__::func_172(Global_1955500[*iParam0 /*16*/].f_1);
			}
			Global_1955500[*iParam0 /*16*/] = 0;
			Global_1955500[*iParam0 /*16*/].f_2 = 0;
			Global_1955500[*iParam0 /*16*/].f_3 = 0;
			*iParam0 = -1;
		}
	}
}

int func_253(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_653();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || !VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		Global_1955500[iVar0 /*16*/].f_1 = iParam1;
		Global_1955500[iVar0 /*16*/].f_2 = bParam0;
		Global_1955500[iVar0 /*16*/] = 0;
		Global_1955500[iVar0 /*16*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (__LIB_0__::func_27(iParam2, 128))
		{
			PED::_0x7C00CFC48A782DC0(iParam1, bParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (__LIB_0__::func_27(Global_1955500[iVar0 /*16*/], 0))
		{
			__LIB_3__::func_658(iVar0, 1024);
			__LIB_3__::func_658(iVar0, 16);
			__LIB_3__::func_658(iVar0, 256);
		}
		__LIB_3__::func_658(iVar0, iParam2);
	}
	return iVar0;
}

void func_255()
{
	switch (iLocal_2118)
	{
		case 0:
			func_679();
			break;
		case 1:
			if (!__LIB_6__::func_904())
			{
				func_680();
			}
			break;
		case 2:
			func_516(2);
			break;
	}
}

void func_256()
{
	vector3 vVar0;
	vVar0.f_1 = 1;
	vVar0.x = Global_35;
	vVar0.f_2 = { vLocal_2036 };
	switch (iLocal_2118)
	{
		case 0:
			if (PED::IS_PED_IN_COVER(Global_35, false, false))
			{
				AICOVERPOINT::TASK_EXIT_COVER(&vVar0);
			}
			if (func_296(0, sLocal_1130[1]))
			{
				func_681();
			}
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_112[0 /*130*/], "Gwen") || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[0 /*130*/], false))
			{
				func_682();
				PED::_0x2208438012482A1A(Local_15, false, false);
				func_680();
			}
			break;
		case 2:
			POPULATION::_0x74C2B3DC0B294102(uLocal_2064[1]);
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSUND");
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			__LIB_18__::func_246(&uLocal_1064);
			func_516(9);
			break;
	}
}

void func_257(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_683(cParam0);
			__LIB_1__::func_148(&uLocal_1939);
			__LIB_1__::func_148(&uLocal_1963);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_1963) < 5f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
			else
			{
				__LIB_0__::func_37(&uLocal_1963);
			}
			if (__LIB_8__::func_599(Local_15, Global_35, 1, 1) < 10f)
			{
				func_685(cParam0);
			}
			if (func_686())
			{
				if (__LIB_10__::func_578("LS_UND_WALK"))
				{
					if (!bLocal_2112)
					{
						if (__LIB_8__::func_596(Local_15, Global_35, 4f, 1))
						{
							AUDIO::RESTART_SCRIPTED_CONVERSATION("LS_UND_WALK");
							func_688(2097152);
							if (!func_385(32768))
							{
								func_209(32768);
							}
						}
					}
				}
				else if ((!__LIB_6__::func_903("LS_UND_WALK") && func_385(32768)) || (__LIB_6__::func_903("LS_UND_WALK") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_WALK") > 15))
				{
					func_680();
					return;
				}
			}
			if (!bLocal_2111)
			{
				if (!__LIB_8__::func_864(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, true, false), 10f, 1, 1))
				{
					__LIB_1__::func_422("OBJ_UND", 7500, 0, 1, 0, 0, -1, -1, 0);
					bLocal_2111 = true;
				}
			}
			break;
		case 2:
			func_516(9);
			break;
	}
}

void func_258(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_689(cParam0);
			break;
		case 1:
			if (!func_385(256))
			{
				func_690();
				__LIB_1__::func_422("OBJ_UND_MORN", 7500, 0, 1, 0, 0, -1, -1, 0);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				func_209(256);
			}
			if (func_691())
			{
				if (__LIB_6__::func_903("LS_UND_WALK"))
				{
					__LIB_8__::func_111("LS_UND_WALK", 0);
				}
				if (!__LIB_0__::func_75(&uLocal_1948))
				{
					__LIB_1__::func_283(&uLocal_1948, 0);
				}
				else if (__LIB_0__::func_264(&uLocal_1948) > 6f && !__LIB_6__::func_904())
				{
					func_680();
				}
			}
			break;
		case 2:
			func_516(9);
			break;
	}
}

void func_259(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_693(cParam0);
			break;
		case 1:
			if (!func_385(128) && !func_213(2))
			{
				if (__LIB_8__::func_864(Local_15, Global_36, 6f, 1, 1))
				{
					if (func_694(cParam0))
					{
						PED::SET_PED_CONFIG_FLAG(Local_1812, 186, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_1812, 1024, true);
						func_695();
						__LIB_10__::func_378(*cParam0, func_41(2), func_41(3), 2, 3);
						func_696();
						func_209(128);
						func_66(65536);
					}
				}
			}
			if (func_213(2))
			{
				if (!__LIB_6__::func_904() && __LIB_8__::func_864(Local_15, Global_36, 10f, 1, 1))
				{
					func_680();
				}
			}
			else if ((iLocal_2121 != 14 && func_385(128)) && ((__LIB_6__::func_903("LSUND_IG_WAIT") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSUND_IG_WAIT") > 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_112[3 /*130*/], false)))
			{
				func_680();
			}
			break;
		case 2:
			if (func_213(2))
			{
				if (func_213(32768))
				{
					__LIB_0__::func_37(&uLocal_1975);
					func_516(8);
				}
			}
			else
			{
				func_516(5);
			}
			break;
	}
	if (func_63(65536))
	{
		func_697(cParam0);
	}
}

void func_260(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_698(cParam0);
			break;
		case 1:
			func_697(cParam0);
			func_699();
			func_700();
			func_701(cParam0);
			if (func_702() && !__LIB_6__::func_904())
			{
				func_680();
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_1945) > 0.1f)
			{
				func_516(6);
			}
			break;
	}
}

void func_261(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_703(cParam0);
			break;
		case 1:
			func_697(cParam0);
			func_704(cParam0);
			func_699();
			func_700();
			func_701(cParam0);
			if (func_705() && !__LIB_6__::func_904())
			{
				__LIB_0__::func_769();
				__LIB_1__::func_148(&uLocal_1942);
				func_680();
			}
			break;
		case 2:
			if (!func_385(536870912))
			{
				if (__LIB_0__::func_264(&uLocal_1942) > 3f)
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_POSTBRWL", 0))
					{
						func_209(536870912);
						__LIB_0__::func_37(&uLocal_1942);
					}
				}
			}
			else if (!__LIB_6__::func_903("LS_UND_POSTBRWL"))
			{
				__LIB_10__::func_378(*cParam0, func_41(3), func_41(4), 3, 4);
				func_516(4);
			}
			break;
	}
}

bool func_262(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_706(cParam0);
			break;
		case 1:
			if (func_707())
			{
				if (!bLocal_2106)
				{
					bLocal_2106 = true;
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_112[5 /*130*/], "player"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1023[3 /*8*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1023[3 /*8*/]));
					}
					func_214(65536);
					func_680();
				}
				else
				{
					if (!func_63(131072))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[5 /*130*/]))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_15, cLocal_1129, "ped_handover_brooch_male", 1))
							{
								if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_15, cLocal_1129, "ped_handover_brooch_male") > 0.1f)
								{
									if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WILLDO", 0))
									{
										func_66(131072);
									}
								}
							}
						}
					}
					__LIB_10__::func_263(1, 0, 1);
				}
			}
			break;
		case 2:
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			func_225(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			return true;
	}
	return false;
}

void func_268(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_10__::func_881();
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
					__LIB_10__::func_525(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_225(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_225(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_225(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_225(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_225(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_225(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_225(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_225(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_225(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_225(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_225(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_225(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_225(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737();
						func_738(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_225(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						__LIB_10__::func_586(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_268(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_745(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_268(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_268(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_225(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				Jump @5207; //curOff = 4093
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
				Jump @5207; //curOff = 5145
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
				__LIB_0__::func_894(iParam0);
				func_772();
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
									func_225(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
void func_269(int iParam0)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	else if (!__LIB_0__::func_6(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		__LIB_8__::func_985(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (__LIB_0__::func_746(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		__LIB_1__::func_559(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

bool func_296(int iParam0, char* sParam1)
{
	if (func_217(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_112[iParam0 /*130*/], sParam1, true);
		Local_112[iParam0 /*130*/].f_17 = sParam1;
		return true;
	}
	return false;
}

bool func_297(var uParam0)
{
	if (!func_63(8388608))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15))
		{
			if (func_798(Local_15) || func_799(Local_15))
			{
				if (!__LIB_6__::func_904())
				{
					if (func_800(Global_35, "ROB_KILLED_HAD_SOMETHING", joaat("SPEECH_PARAMS_STANDARD"), Local_15, 1, 0, 3, 1))
					{
						func_66(8388608);
					}
				}
			}
		}
	}
	if (!__LIB_8__::func_601(Local_15, 0) && !__LIB_8__::func_864(Global_35, vLocal_2028, 70f, 1, 1))
	{
		return true;
	}
	else
	{
		func_242(uParam0);
		if (func_298(Local_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && !__LIB_8__::func_864(Global_35, vLocal_2028, 70f, 1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_298(bool bParam0, float fParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return true;
	}
	if (!PED::_0x5102307CE88798EB(bParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
		return false;
	}
	else if (!PED::IS_TRACKED_PED_VISIBLE(bParam0))
	{
		if (fParam1 == -1f)
		{
			fParam1 = __LIB_8__::func_619(bParam0, Global_36, 0);
		}
		if (fParam1 > fParam2)
		{
			return true;
		}
	}
	return false;
}

void func_299(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*bParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*bParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*bParam0, 0);
	}
	PED::DELETE_PED(bParam0);
}

void func_301()
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_2064[3]))
	{
		PATHFIND::_0xE5EF9DE716FF737E(uLocal_2064[3], 1, 0);
		POPULATION::_0x74C2B3DC0B294102(uLocal_2064[3]);
		POPULATION::_0xA1CFB35069D23C23(uLocal_2064[3]);
	}
	if (__LIB_3__::func_587(iLocal_2063, 1, 1))
	{
		func_252(&iLocal_2063, 1);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_2061))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2061, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_2064[1]))
	{
		POPULATION::_0x74C2B3DC0B294102(uLocal_2064[1]);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		__LIB_0__::func_172(uLocal_2064[iVar0]);
		iVar0++;
	}
}

void func_302()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[iVar0 /*130*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[iVar0 /*130*/]);
		}
		iVar0++;
	}
}

void func_304()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_325(&(Local_1614[iVar0 /*97*/].f_5));
		func_119(&(Local_1614[iVar0 /*97*/]), 1, 1, 1);
		iVar0++;
	}
}

void func_305()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__::func_325(&(Local_1318[iVar0 /*97*/].f_5));
		func_119(&(Local_1318[iVar0 /*97*/]), 1, 1, 1);
		iVar0++;
	}
}

void func_308()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1114[iVar0]);
		iVar0++;
	}
}

void func_310()
{
	func_802();
}

void func_311(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 297, false);
	}
}

void func_323()
{
	Local_1023[0 /*8*/] = { __LIB_10__::func_389(1300.76f, -1318.01f, 75.52f, 0.48f, 0f, 120.3f, joaat("S_LOANSHARKUNDERTAKER01X")) };
	Local_1023[1 /*8*/] = { __LIB_10__::func_389(1300.289f, -1317.934f, 76.3762f, -3.79f, 7.17f, -125.58f, joaat("P_WOODPLANE01X")) };
	Local_1023[2 /*8*/] = { __LIB_10__::func_389(1276.69f, -1210.05f, 82.33f, -159.67f, -2f, 30.09f, joaat("P_SHOVEL01X")) };
	Local_1023[3 /*8*/] = { __LIB_10__::func_389(1275.452f, -1209.308f, 81.38f, 10.07f, 21.31f, -68.46f, joaat("S_INV_BROOCH01X")) };
	Local_1023[4 /*8*/] = { __LIB_10__::func_389(1280.874f, -1213.602f, 80.9738f, 0f, 0f, 0f, joaat("S_BALLEDRAGCLOTH01X")) };
}

void func_324(var uParam0)
{
	sLocal_1130[0] = "PBL_BASE";
	sLocal_1130[1] = "PBL_ACTION";
	sLocal_1130[2] = "PBL_DEAD_DONT_CARE";
	sLocal_1130[3] = "PBL_APPRENTICE";
	sLocal_1130[4] = "PBL_DONT_LOOK_RIGHT";
	sLocal_1130[5] = "PBL_NEVER_GET_THE_HANG";
	sLocal_1130[6] = "PBL_WANT_A_FITTIN_RIGHT";
	sLocal_1130[7] = "PBL_U_OK_RIGHT";
	sLocal_1130[8] = "PBL_UNDERTAKER_FEET_UP_RIGHT";
	sLocal_1130[9] = "PBL_CAN_I_HELP_U_RIGHT";
	sLocal_1130[10] = "PBL_WANT_A_FITTIN_LEFT";
	sLocal_1130[11] = "PBL_U_OK_LEFT";
	sLocal_1130[12] = "PBL_UNDERTAKER_FEET_UP_LEFT";
	sLocal_1130[13] = "PBL_CAN_I_HELP_U_LEFT";
	sLocal_1130[14] = "PBL_BASE";
	sLocal_1130[18] = "PBL_EXIT";
	sLocal_1130[15] = "PBL_ACTION";
	sLocal_1130[16] = "PBL_ACTION_2";
	sLocal_1130[17] = "PBL_ACTION_3";
	sLocal_1130[19] = "PBL_BASE";
	sLocal_1130[20] = "PBL_BASE";
	sLocal_1130[21] = "PBL_EXIT";
	sLocal_1130[22] = "PBL_QUICK_EXIT";
	sLocal_1130[23] = "PBL_ACTION";
	sLocal_1130[24] = "PBL_REACT_BL";
	sLocal_1130[25] = "PBL_REACT_BR";
	sLocal_1130[26] = "PBL_REACT_R";
	sLocal_1130[27] = "PBL_REACT_L";
	sLocal_1130[28] = "PBL_REACT_F";
	sLocal_1130[29] = "PBL_IDLE";
	sLocal_1130[30] = "PBL_QUICK_TAKE_IT";
	sLocal_1130[31] = "PBL_GWEN_LEAVES";
	sLocal_1163[0] = "PBL_Base";
	sLocal_1163[1] = "PBL_ENTER";
	sLocal_1163[2] = "PBL_REASON_F";
	sLocal_1163[3] = "PBL_REASON_B";
	sLocal_1163[4] = "PBL_REASON_R";
	sLocal_1163[5] = "PBL_REASON_L";
	sLocal_1163[6] = "PBL_THREATEN_F";
	sLocal_1163[7] = "PBL_THREATEN_B";
	sLocal_1163[8] = "PBL_THREATEN_R";
	sLocal_1163[9] = "PBL_THREATEN_L";
	sLocal_1163[10] = "PBL_THREATEN_WEP_F";
	sLocal_1163[11] = "PBL_THREATEN_WEP_B";
	sLocal_1163[12] = "PBL_THREATEN_WEP_R";
	sLocal_1163[13] = "PBL_THREATEN_WEP_L";
	sLocal_1163[14] = "PBL_QUICK_EXIT";
	sLocal_1163[18] = "PBL_DIA_01";
	sLocal_1163[19] = "PBL_DIA_02";
	sLocal_1163[20] = "PBL_DIA_03";
	sLocal_1163[15] = "PBL_IDLE_01";
	sLocal_1163[16] = "PBL_IDLE_02";
	sLocal_1163[17] = "PBL_IDLE_03";
	sLocal_1185[0] = "PBL_Base";
	sLocal_1185[1] = "PBL_REASON_COUPLE_N";
	sLocal_1185[2] = "PBL_REASON_COUPLE_R";
	sLocal_1185[3] = "PBL_REASON_COUPLE_L";
	sLocal_1185[4] = "PBL_THREATEN_COUPLE_N";
	sLocal_1185[5] = "PBL_THREATEN_COUPLE_R";
	sLocal_1185[6] = "PBL_THREATEN_COUPLE_L";
	sLocal_1185[7] = "PBL_THREATEN_WEP_COUPLE_N";
	sLocal_1185[8] = "PBL_THREATEN_WEP_COUPLE_R";
	sLocal_1185[9] = "PBL_THREATEN_WEP_COUPLE_L";
	sLocal_1185[10] = "PBL_MAIN_DIALOGUE_COPY";
	sLocal_1185[11] = "PBL_SAY_SOMETHING";
	sLocal_1185[12] = "PBL_ILL_BE_BURIED";
	sLocal_1185[13] = "PBL_MORE_OF_A_FOOL";
	sLocal_1185[14] = "PBL_OF_ALL_THE_BOYS";
	sLocal_1201[0] = "PB_HANDOVER";
	Local_112[0 /*130*/] = { func_815("script@proc@loansharking@undertaker@encounter", sLocal_1130[iLocal_1204]) };
	Local_112[1 /*130*/] = { func_815("script@proc@loansharking@undertaker@female_mourner", sLocal_1163[iLocal_1205]) };
	Local_112[2 /*130*/] = { func_815("script@proc@loansharking@undertaker@young_couple", sLocal_1185[iLocal_1206]) };
	Local_112[3 /*130*/] = { func_815("script@proc@loansharking@undertaker@waiting_at_church", sLocal_1130[14]) };
	Local_112[4 /*130*/] = { func_815("script@proc@loansharking@undertaker@grave_digging", sLocal_1130[19]) };
	Local_112[5 /*130*/] = { func_815("script@proc@handovers@ped_handovers@give_brooch", sLocal_1201[iLocal_1203]) };
	Local_112[6 /*130*/] = { func_815("script@proc@loansharking@undertaker@collect_loota_gwen", sLocal_1130[20]) };
	Local_112[2 /*130*/].f_19[0 /*5*/] = { func_816(36.63f, 10, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[1 /*5*/] = { func_816(12.37f, 11, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[2 /*5*/] = { func_816(13.63f, 12, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[3 /*5*/] = { func_816(12.87f, 13, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[4 /*5*/] = { func_816(14f, 14, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[5 /*5*/] = { func_816(19.27f, 1, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[6 /*5*/] = { func_816(18.9f, 2, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[7 /*5*/] = { func_816(18.27f, 3, "base_female", 1203982336) };
	Local_112[3 /*130*/].f_19[8 /*5*/] = { func_816(8.93f, 15, "base", 1203982336) };
	Local_112[3 /*130*/].f_19[9 /*5*/] = { func_816(8.93f, 16, "base", 1203982336) };
	Local_112[3 /*130*/].f_19[10 /*5*/] = { func_816(8.93f, 17, "base", 1203982336) };
	Local_112[4 /*130*/].f_19[11 /*5*/] = { func_816(6.17f, 19, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[12 /*5*/] = { func_816(8.3f, 21, "idle_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[13 /*5*/] = { func_816(5.97f, 22, "idle_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[14 /*5*/] = { func_816(9.4f, 23, "action_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[18 /*5*/] = { func_816(6f, 24, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[17 /*5*/] = { func_816(6f, 25, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[15 /*5*/] = { func_816(6f, 26, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[16 /*5*/] = { func_816(6f, 27, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[19 /*5*/] = { func_816(6f, 28, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[20 /*5*/] = { func_816(10.9f, 30, "idle_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[21 /*5*/] = { func_816(7.2f, 23, "action_gwen", 1203982336) };
	__LIB_10__::func_575(&(uParam0->f_2052), cLocal_1123);
}

void func_325()
{
	sLocal_1114[0] = "loan_undertaker_gwen_to_church";
	sLocal_1114[1] = "loan_undertaker_gwen_to_grave";
	sLocal_1114[2] = "loan_undertaker_gwen_to_coffin";
	sLocal_1114[4] = "loan_undertaker_mourner_exit";
	sLocal_1114[6] = "loan_undertaker_couple_1_back_exit";
	sLocal_1114[5] = "loan_undertaker_couple_1_front_exit";
	sLocal_1114[3] = "loan_undertaker_brawlers_to_gwen";
	sLocal_1114[7] = "loan_undertaker_woman_to_gwen";
}

void func_326()
{
	iLocal_1809[0] = 6;
	iLocal_1809[1] = 6;
	iLocal_1909 = 5;
}

void func_327()
{
	Local_15 = { func_817(1300.084f, -1319.778f, 75.5941f, 329.1932f) };
	Local_1318[0 /*97*/] = { func_817(1282.863f, -1228.591f, 80.2135f, 313.0822f) };
	Local_1318[1 /*97*/] = { func_817(1283.656f, -1228.142f, 80.2548f, 187.3788f) };
	Local_1318[2 /*97*/] = { func_817(1279.378f, -1213.84f, 80.9125f, 14.215f) };
	Local_1614[0 /*97*/] = { func_817(1340.022f, -1275.918f, 75.8507f, 165.0051f) };
	Local_1614[1 /*97*/] = { func_817(1340.437f, -1275.219f, 75.8544f, 154.0159f) };
	Local_1208 = { func_817(1278.457f, -1210.033f, 81.2391f, 32.3877f) };
}

void func_328()
{
	int iVar0;
	int iVar1;
	__LIB_4__::func_228(&(Local_15.f_6));
	__LIB_6__::func_905(&(Local_15.f_6));
	__LIB_1__::func_398(&(Local_15.f_6), 1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_4__::func_228(&(Local_1318[iVar0 /*97*/].f_6));
		__LIB_6__::func_905(&(Local_1318[iVar0 /*97*/].f_6));
		__LIB_1__::func_398(&(Local_1318[iVar0 /*97*/].f_6), 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		__LIB_4__::func_228(&(Local_1614[iVar1 /*97*/].f_6));
		__LIB_6__::func_905(&(Local_1614[iVar1 /*97*/].f_6));
		__LIB_1__::func_398(&(Local_1614[iVar1 /*97*/].f_6), 1);
		iVar1++;
	}
	__LIB_4__::func_228(&uLocal_1910);
	__LIB_6__::func_905(&uLocal_1910);
	__LIB_1__::func_402(&uLocal_1910, 0);
	__LIB_1__::func_413(&uLocal_1910, 1);
}

void func_336(var uParam0, bool bParam1, int iParam2)
{
	__LIB_2__::func_137(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = __LIB_1__::func_347(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (__LIB_18__::func_320(1))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!__LIB_18__::func_320(1) || *uParam0 & 8192 != 0))
				{
					__LIB_0__::func_8(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_824(uParam0))
			{
				uParam0->f_15 = __LIB_0__::func_485();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((__LIB_0__::func_485() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	__LIB_2__::func_835(uParam0);
}

bool func_337(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!__LIB_18__::func_821(bParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_827(bParam0, iVar2) <= __LIB_1__::func_349(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_338(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (__LIB_1__::func_339(iParam2, 1, 1, 1, 0))
	{
		__LIB_0__::func_7(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	__LIB_1__::func_350(uParam1, 1);
	__LIB_1__::func_345();
}

bool func_339(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_831(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = __LIB_1__::func_351(uParam1);
			if (__LIB_14__::func_377(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = __LIB_1__::func_352(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						__LIB_1__::func_350(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							__LIB_1__::func_350(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_340(bool bParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (__LIB_18__::func_321(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = __LIB_1__::func_351(uParam2);
		if (__LIB_14__::func_377(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > __LIB_1__::func_352(uParam2)
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_341(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == bParam0)
		{
			return false;
		}
	}
	bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (__LIB_18__::func_821(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > __LIB_1__::func_352(uParam1)
		{
			fVar3 = __LIB_1__::func_351(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, bVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_343(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = __LIB_1__::func_353(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(bParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), bParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_351(uParam2, bParam1))
			{
				__LIB_1__::func_350(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_344(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;
	if (uParam2->f_12 < IntToFloat(__LIB_1__::func_354(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_351(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_345(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = __LIB_1__::func_355(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (__LIB_11__::func_278(bParam1, vVar0, vVar4))
					{
						__LIB_1__::func_350(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (__LIB_11__::func_278(bParam1, vVar0, vVar7))
					{
						__LIB_1__::func_350(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_346(bool bParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	vVar9 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!__LIB_18__::func_821(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = __LIB_1__::func_998(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (__LIB_1__::func_356(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_10 = bParam0;
						return true;
					}
				}
			}
			if (func_842(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_843(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (__LIB_18__::func_822(uParam1, bParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_350(var uParam0, bool bParam1)
{
	int iVar0;
	if (!DECORATOR::DECOR_EXIST_ON(bParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(bParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_351(var uParam0, bool bParam1)
{
	if (__LIB_1__::func_359(uParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(bParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(bParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(bParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(bParam1))
	{
		return true;
	}
	return false;
}

bool func_354(var uParam0, bool bParam1)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (bVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(bVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, false) };
		if (__LIB_11__::func_263(bVar0, bParam1, vVar1))
		{
			uParam0->f_9 = __LIB_0__::func_485();
			return true;
		}
		else if (VEHICLE::_0xA19447D83294E29F(bVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					bVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(bVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(bVar7))
					{
						if (__LIB_8__::func_619(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = __LIB_0__::func_485();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_357(bool bParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return __LIB_11__::func_266(bParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_358(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_853(bParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(bParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (bVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(bParam0, bVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!__LIB_11__::func_267(uParam1, bParam0))
					{
						if (__LIB_8__::func_619(bVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

int func_362(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = __LIB_0__::func_485();
	}
	else if (__LIB_0__::func_485() - uParam1->f_4) > __LIB_1__::func_365(uParam1)
	{
		return __LIB_14__::func_379(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

void func_367()
{
	PED::_0x411189E51B8020BA(Local_15, "Cautious");
	__LIB_3__::func_319(Local_112[0 /*130*/]);
	if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[6 /*130*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_112[6 /*130*/], true, false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_15, Local_112[6 /*130*/])) && !func_213(-2147483648))
	{
		func_529(11);
		return;
	}
	else
	{
		__LIB_3__::func_319(Local_112[6 /*130*/]);
		TASK::CLEAR_PED_TASKS(Local_15, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(Local_15);
		TASK::TASK_SMART_FLEE_PED(Local_15, Global_35, 100f, -1, 0, 2f, 0);
		func_529(11);
	}
}

int func_376(int iParam0, int iParam1)
{
	var uVar0;
	return func_865(&uVar0, iParam0, iParam1);
}

bool func_380()
{
	if (iLocal_2119 >= 3)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_2064[6], true, 0))
		{
			return true;
		}
	}
	else if (!__LIB_8__::func_596(Global_35, Local_15, 40f, 1))
	{
		return true;
	}
	return false;
}

bool func_381()
{
	int iVar0;
	if (func_213(8))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1318[iVar0 /*97*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1318[iVar0 /*97*/]))
				{
					if (func_146(Local_1318[iVar0 /*97*/], 0, &(Local_1318[iVar0 /*97*/].f_6), &(Local_1318[iVar0 /*97*/].f_34), 1, 0))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_382()
{
	func_529(12);
}

bool func_383()
{
	int iVar0;
	if (func_213(8))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1318[iVar0 /*97*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1318[iVar0 /*97*/]))
				{
					if (func_146(Local_1318[iVar0 /*97*/], 0, &uLocal_1910, &uLocal_1938, 1, 0))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1812))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1812))
		{
			if (func_146(Local_1812, 0, &uLocal_1910, &uLocal_1938, 1, 0))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_384(int iParam0)
{
	__LIB_1__::func_681(&iLocal_2074, iParam0);
}

bool func_385(int iParam0)
{
	return __LIB_0__::func_27(iLocal_2075, iParam0);
}

bool func_386(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(bParam0, iParam1, true, 0);
}

bool func_413(int iParam0, bool bParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_8__::func_601(*bParam1, 0))
	{
		if (!__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*bParam1 = func_883(iParam2, vParam3, fParam6, iParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (__LIB_8__::func_601(*bParam1, 0))
			{
				__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_9), 256);
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

bool func_417(bool bParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar0 = func_888(bParam0);
		return func_889(bParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(bParam0, "loot_money", iParam1);
}

bool func_418()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[0 /*8*/]))
	{
		if (iLocal_2062 == 0)
		{
			iLocal_2062 = ENTITY::_0x6F3068258A499E52(Local_1023[0 /*8*/].f_7, Local_1023[0 /*8*/].f_1, 11);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_2062))
		{
			Local_1023[0 /*8*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_2062));
		}
		return false;
	}
	return true;
}

void func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_890();
			break;
		case 1:
			func_891(iParam0, "player", Global_35);
			func_891(iParam0, "Mourner", Local_1318[2 /*97*/]);
			func_891(iParam0, func_220(4), Local_1023[4 /*8*/]);
			break;
		case 2:
			func_891(iParam0, "player", Global_35);
			func_891(iParam0, "Female", Local_1318[0 /*97*/]);
			func_891(iParam0, "male", Local_1318[1 /*97*/]);
			break;
		case 3:
			func_891(iParam0, "Gwen", Local_15);
			func_891(iParam0, "player", Global_35);
			break;
		case 4:
			func_892();
			break;
		case 5:
			func_893();
			break;
		case 6:
			if (func_213(32768))
			{
				func_894();
			}
			else
			{
				func_895();
			}
			break;
	}
}

bool func_447(bool bParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_8__::func_906(bParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	bVar4 = __LIB_8__::func_619(bParam0, vParam1, 1);
	if (!__LIB_0__::func_75(uParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_1__::func_283(uParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_0__::func_37(uParam4);
	}
	if (__LIB_0__::func_75(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1f);
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
		if (__LIB_0__::func_265(uParam4) >= fParam9)
		{
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_8__::func_620(bParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(bParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(bParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_8__::func_620(bParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, 0);
					return true;
				}
			}
		}
		if (bParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(bParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(bParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(bParam0, 175, true);
		}
	}
	return false;
}

void func_451(var uParam0)
{
	if (!__LIB_10__::func_409(uParam0))
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 4194304))
	{
		__LIB_10__::func_410(uParam0);
		__LIB_10__::func_293(uParam0, 4194304);
	}
	if (__LIB_10__::func_439(uParam0))
	{
		func_925(uParam0);
		__LIB_10__::func_355(uParam0);
		__LIB_0__::func_115(uParam0, 2);
	}
}

void func_454(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 4096) && uParam0->f_1662)
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_10__::func_582(uParam0);
	func_930(uParam0, uParam0->f_1663, uParam0->f_1665);
	func_931(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !__LIB_8__::func_864(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_10__::func_278(uParam0, 33554432)) && !__LIB_10__::func_278(uParam0, 4))
		{
			func_932(uParam0, uParam0->f_1663);
			return;
		}
	}
	if (!__LIB_10__::func_278(uParam0, 4))
	{
		if (__LIB_10__::func_413(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1450 = uParam0->f_1454;
				__LIB_10__::func_293(uParam0, 8);
				return;
			}
		}
		else
		{
			func_932(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = func_934(uParam0, uParam0->f_1456);
			if (fVar0 < 0f || (uParam0->f_1663 && fVar0 < 1f))
			{
				uParam0->f_1454 = uParam0->f_1456;
				if (!bParam2)
				{
					uParam0->f_1450 = uParam0->f_1456;
					__LIB_10__::func_293(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1455 == -1f || fVar0 <= uParam0->f_1455) || uParam0->f_1456 == uParam0->f_1454)
				{
					if (uParam0->f_1456 != uParam0->f_1454)
					{
					}
					uParam0->f_1454 = uParam0->f_1456;
					uParam0->f_1455 = fVar0;
					__LIB_10__::func_293(uParam0, 16);
					if (((!__LIB_10__::func_278(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, true) < (uParam0->f_782[uParam0->f_1454 /*41*/].f_11 + 5f))
					{
						func_935(uParam0);
						__LIB_10__::func_293(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1454 == uParam0->f_1456)
			{
				__LIB_10__::func_279(uParam0, 16);
			}
		}
		if (uParam0->f_1456 + 1 >= 8)
		{
			uParam0->f_1456 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1456 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_782[iVar2 /*41*/].f_29)
				{
					uParam0->f_1456 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1456 = 0;
			}
		}
		if (uParam0->f_1454 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
		{
			return;
		}
	}
	if (__LIB_10__::func_278(uParam0, 16))
	{
		fVar4 = __LIB_8__::func_619(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		if (uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_782[uParam0->f_1454 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 + uParam0->f_782[uParam0->f_1454 /*41*/].f_10))
			{
				func_463(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1665 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1667) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1667, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
			}
		}
		else if ((uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1664))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1664, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1663 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1664) > 1.25f) || __LIB_10__::func_278(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645) && func_934(uParam0, uParam0->f_1454) < 10000f) && __LIB_10__::func_278(uParam0, 16)) || __LIB_10__::func_278(uParam0, 4))
		{
			if (!__LIB_10__::func_278(uParam0, 4))
			{
				__LIB_10__::func_293(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_10__::func_292(uParam0, uParam0->f_1454))
			{
				iVar7 |= 2048;
			}
			if (func_937(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1452 = 0;
				__LIB_10__::func_279(uParam0, 4);
			}
		}
	}
	else if (__LIB_10__::func_278(uParam0, 4))
	{
		__LIB_10__::func_279(uParam0, 4);
	}
}

void func_463(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_1(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (__LIB_0__::func_1(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1663)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1664, 214, true);
	}
	if (uParam0->f_1662 && __LIB_10__::func_278(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (__LIB_0__::func_1(uParam1, 262144) && Global_1935630.f_44 == joaat("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	__LIB_4__::func_706(&iVar1, uParam2);
	__LIB_9__::func_97(&(uParam0->f_1670), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!__LIB_10__::func_278(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	__LIB_4__::func_614();
	__LIB_10__::func_310(uParam0, 1);
}

void func_468(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1660)
		{
			if (uParam0->f_241[iVar0 /*18*/].f_7)
			{
				func_963(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_241[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_10__::func_414(uParam0, iVar0);
				if (bVar1)
				{
					func_965(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_10__::func_292(uParam0, uParam0->f_1450))
		{
			func_966(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1457;
	while (iVar0 <= (uParam0->f_1660 - 1))
	{
		if (uParam0->f_241[iVar0 /*18*/].f_7)
		{
			func_963(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_241[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_10__::func_414(uParam0, iVar0);
			if (bVar1)
			{
				func_965(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1457 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1457 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

bool func_475(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (__LIB_8__::func_619(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_782[uParam0->f_1450 /*41*/].f_14 >= uParam0->f_782[uParam0->f_1450 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_476(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (__LIB_8__::func_619(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_782[uParam0->f_1450 /*41*/].f_15 >= uParam0->f_782[uParam0->f_1450 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_480(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (func_973(iParam0, fParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_481(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;
	if (!__LIB_1__::func_379(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (__LIB_0__::func_51(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return false;
	}
	fVar0 = __LIB_8__::func_619(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!__LIB_1__::func_873(vParam0, uParam3))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return false;
		}
		if (!__LIB_2__::func_497(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_483(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		__LIB_3__::func_565(uParam1);
		if (func_480(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (func_481(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_2__::func_496(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

void func_486(bool bParam0, int* iParam1, var uParam2, float fParam3, bool bParam4, char* sParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*bParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_511(iParam1, *bParam0, iParam1->f_56, 0);
	bVar0 = __LIB_5__::func_439(bParam4 >= 0f, bParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	func_982(bParam0, iParam1, uParam2, bVar0);
	__LIB_6__::func_741(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_984(iParam1, uParam2, bParam0, bVar1, sParam5, bVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = func_502(iParam1, bParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_503(iParam1);
			}
		}
	}
}

bool func_488(bool bParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (bParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_6__::func_814(iParam1, uParam2, 0);
		iVar5 = __LIB_4__::func_48(*bParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*bParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*bParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_989(bParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*bParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*bParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*bParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_491(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (__LIB_2__::func_364(*bParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_492(bool bParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_4__::func_49(*bParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_495(bool bParam0, int* iParam1, bool bParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bool bVar13;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*bParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_4__::func_50(*bParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_13__::func_291(*bParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, bParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
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
						__LIB_6__::func_814(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							func_1006(iParam1, uParam4, bParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_984(iParam1, uParam4, bParam0, bVar13, sParam9, bParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_IS_PED_CARRYING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
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
						__LIB_1__::func_148(&(iParam1->f_18));
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
		__LIB_10__::func_553(iParam1, bParam2);
	}
	return bVar5;
}

bool func_502(int* iParam0, bool bParam1)
{
	vector3 vVar0;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return true;
	}
	if (!PED::_IS_PED_CARRYING(Global_35) && !__LIB_8__::func_640(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { __LIB_3__::func_114(*bParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			__LIB_1__::func_338(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (PED::_IS_PED_CARRYING(Global_35) && !__LIB_8__::func_640(Global_35, -208384378))
	{
		if (__LIB_3__::func_417(Global_35))
		{
			iParam0->f_60 = __LIB_0__::func_147();
		}
		else
		{
			iParam0->f_60 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iParam0->f_60, Global_36, 2f, 9);
		}
	}
	return false;
}

bool func_503(int* iParam0)
{
	bool bVar0;
	if (MISC::IS_BIT_SET(*iParam0, 13))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM_IN_AIR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 6))
	{
		if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 6);
			MISC::CLEAR_BIT(&(iParam0->f_21), 7);
		}
		else
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
		{
			__LIB_0__::func_37(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) && !__LIB_8__::func_640(Global_35, 716706914)) && !__LIB_8__::func_640(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_1__::func_283(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = __LIB_0__::func_264(&(iParam0->f_52)) >= 1.5f;
		if ((!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) || bVar0)
		{
			__LIB_0__::func_37(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

bool func_504(int* iParam0)
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
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_10__::func_589())
			{
			}
		}
		else
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_0__::func_264(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || __LIB_10__::func_589()) || bVar1)
		{
			if (bVar1)
			{
				func_1020();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

int func_506(bool bParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_1__::func_148(&(iParam1->f_18));
			return 0;
		}
		else if (__LIB_0__::func_75(&(iParam1->f_18)))
		{
			__LIB_0__::func_37(&(iParam1->f_18));
			return 0;
		}
	}
	if (!__LIB_0__::func_75(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return __LIB_3__::func_103(&(iParam1->f_18), fParam2);
	return 1;
}

void func_507(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	func_1022(iParam0, 0);
	__LIB_6__::func_814(iParam0, uParam1, 1);
	__LIB_2__::func_480(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

void func_508(char[4] cParam0, int* iParam1, char* sParam2, char* sParam3, int iParam4, float fParam5, int iParam6)
{
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (MISC::IS_STRING_NULL(sParam2))
		{
			sParam2 = "OBJ_INTERACT";
		}
		cParam0->f_2296 = iParam6;
		cParam0->f_2295 = fParam5;
		__LIB_2__::func_602(iParam1, sParam2, sParam3, iParam4, 0, 0, 0, 1, 0);
	}
}

int func_511(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!__LIB_8__::func_601(bParam1, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(bParam1, iParam2);
		MISC::SET_BIT(&(iParam0->f_21), 17);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(bParam1, iParam2))
		{
			MAP::_0xBB68D4D3CA3DE402(bParam1, iParam3);
		}
		MISC::SET_BIT(&(iParam0->f_21), 18);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17) && MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

bool func_515(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return false;
}

void func_516(int iParam0)
{
	int iVar0;
	if (iParam0 == 9)
	{
		iVar0 = iLocal_2119;
		iVar0++;
		iLocal_2119 = iVar0;
		if (iLocal_2119 == 9)
		{
			iLocal_2119 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_2119 = iParam0;
	}
	iLocal_2118 = 0;
}

bool func_525()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == 0)
		{
			iVar2 = iLocal_1308;
		}
		else if (iVar0 == 1)
		{
			iVar2 = iLocal_1309;
		}
		else
		{
			iVar2 = iLocal_1307;
		}
		if (func_1028(&(Local_1318[iVar0 /*97*/]), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 3)
	{
		return true;
	}
	return false;
}

void func_527()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_8__::func_601(Local_1318[iVar0 /*97*/], 0))
		{
			if (iVar0 == 0 || iVar0 == 1)
			{
				func_1029(iVar0);
			}
			else
			{
				func_1029(iVar0);
			}
		}
		iVar0++;
	}
}

void func_528(bool bParam0)
{
	TASK::TASK_CLEAR_LOOK_AT(Local_15);
	TASK::TASK_LOOK_AT_ENTITY(Local_15, Global_35, -1, 0, 51, 0);
	if (bParam0)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15, Global_35, 0, -1f, -1f, -1f);
	}
}

void func_529(int iParam0)
{
	iLocal_2121 = iParam0;
}

void func_535(bool bParam0, int iParam1)
{
	func_1031(bParam0, iParam1);
}

void func_536(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_0x6F1F0B17109309DA(Local_112[iParam0 /*130*/], sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_112[iParam0 /*130*/], sParam1, bParam2, false);
	}
}

void func_537(bool bParam0, char* sParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, 658540077, true) != 1)
			{
				if (iParam2 == 0)
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(bParam0, sParam1, 0, 46, -1, 0, 0, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(bParam0, sParam1, 0, iParam2, -1, 0, 0, -1);
				}
			}
		}
	}
}

void func_563(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1065(iParam0);
}

void func_574(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_3__::func_757(Global_35, iParam0, &uVar0))
		{
			func_595(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
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

int func_595(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!__LIB_1__::func_711(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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
				__LIB_8__::func_904(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_8__::func_904(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_8__::func_904(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_8__::func_904(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_8__::func_904(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_617(int iParam0)
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
				__LIB_8__::func_904(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_8__::func_904(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_10__::func_587(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_8__::func_904(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_8__::func_904(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_8__::func_904(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_8__::func_904(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_8__::func_904(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_595(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_563(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_618(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1140(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1140(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1140(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1140(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1140(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1140(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1140(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1140(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1140(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1140(-1, iParam0);
	}
}

bool func_624(char[4] cParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = BUILTIN::VDIST2(cParam0->f_32.f_5, Global_36);
	fVar1 = 3f;
	if (cParam0->f_347 > 0f)
	{
		fVar1 = cParam0->f_347;
	}
	__LIB_10__::func_263(0, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		__LIB_0__::func_37(&(cParam0->f_17.f_12));
		if (__LIB_8__::func_640(Global_35, 242628503))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		return true;
	}
	else
	{
		if (!__LIB_0__::func_75(&(cParam0->f_17.f_12)))
		{
			__LIB_1__::func_283(&(cParam0->f_17.f_12), 1);
		}
		else if (__LIB_0__::func_264(&(cParam0->f_17.f_12)) > 5f)
		{
			__LIB_0__::func_37(&(cParam0->f_17.f_12));
			if (__LIB_8__::func_640(Global_35, 242628503))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_8__::func_640(Global_35, 242628503))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			if (!WEAPON::_0x07E1C35F0078C3F9(Global_35, joaat("WEAPON_UNARMED")))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, cParam0->f_32.f_5, 1f, 7500, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar2);
		}
		if (__LIB_8__::func_601(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1392626[*cParam0 /*32*/].f_11))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

void func_640(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_284, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_10__::func_315(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_284, 524288))
		{
			func_1167(&(uParam0->f_296));
		}
		func_1168(&(uParam0->f_284), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_10__::func_316(uParam0, 0f, 0f, 0f);
		func_1170(uParam0);
		func_1171(uParam0);
		__LIB_10__::func_455(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_10__::func_416(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_10__::func_583(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_297)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_297));
		}
	}
}

void func_647(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_648(&(uParam0->f_285), uParam0->f_296);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_10__::func_417(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_10__::func_405(uParam0);
	__LIB_10__::func_317(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_10__::func_356(uParam0, 4);
	__LIB_10__::func_402(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_10__::func_287(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_228))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_285, 128));
	if (!__LIB_0__::func_1(uParam0->f_285, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_648(var uParam0, int iParam1)
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
		func_595(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_1__::func_704(joaat("KIT_BANDANA"), 0);
	}
	__LIB_10__::func_583(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_651(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::GET_PED_CONFIG_FLAG(bParam0, 297, true))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 297, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(bParam0, 315, true))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 315, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(bParam0, 130, true))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 130, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(bParam0, 331, true))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 331, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(bParam0, 330, true))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 330, true);
		}
	}
}

void func_652(char[4] cParam0)
{
	char* sVar0;
	char[] cVar1[8];
	char* sVar2;
	char[] cVar3[8];
	float fVar4;
	vector3 vVar5;
	if ((((func_146(Local_15, 0, &(Local_15.f_6), &(Local_15.f_34), 1, 0) || (func_831(Local_15, 1, 1, 1, 0, 0) && __LIB_8__::func_864(Local_15, Global_36, 10f, 1, 1))) || (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 1, 0) && __LIB_8__::func_864(Local_15, Global_36, 3f, 1, 1))) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_15, true, false), 5f, true)) || PED::_0x29FCE825613FEFCA(Local_15, 1))
	{
		func_1186();
	}
	else if (__LIB_8__::func_864(Local_15, Global_36, 15f, 1, 1))
	{
		if (!__LIB_0__::func_75(&uLocal_1939))
		{
			__LIB_0__::func_268(&uLocal_1939, 19f);
		}
		else if (__LIB_0__::func_264(&uLocal_1939) > 15f)
		{
			if (!__LIB_8__::func_596(Local_15, Global_35, 6f, 1))
			{
				if (iLocal_2104 < 4)
				{
					if (iLocal_2104 == 0)
					{
						sVar0 = sLocal_1130[2];
						cVar1 = "LS_UND_PRE";
					}
					else if (iLocal_2104 == 1)
					{
						sVar0 = sLocal_1130[3];
						cVar1 = "LS_UND_PRE2";
					}
					else if (iLocal_2104 == 2)
					{
						sVar0 = sLocal_1130[4];
						cVar1 = "LS_UND_PRE3";
					}
					else if (iLocal_2104 == 3)
					{
						sVar0 = sLocal_1130[5];
						cVar1 = "LS_UND_PRE4";
					}
					if (func_296(0, sVar0))
					{
						__LIB_10__::func_364(&(cParam0->f_2106), cVar1, 0);
						__LIB_1__::func_148(&uLocal_1939);
						iLocal_2104++;
					}
				}
			}
			else if (iLocal_2105 < 4)
			{
				vVar5 = { 1299.813f, -1317.749f, 76.38257f };
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 1301.469f, -1318.722f, 76.39723f, true);
				if (iLocal_2105 == 0)
				{
					__LIB_1__::func_309(-1, 0, 0, 0, 0);
					if (fVar4 < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar5, true))
					{
						sVar2 = sLocal_1130[6];
					}
					else
					{
						sVar2 = sLocal_1130[10];
					}
					cVar3 = "LS_UND_HANG";
				}
				else if (iLocal_2105 == 1)
				{
					if (fVar4 < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar5, true))
					{
						sVar2 = sLocal_1130[7];
					}
					else
					{
						sVar2 = sLocal_1130[11];
					}
					cVar3 = "LS_UND_HANG2";
				}
				else if (iLocal_2105 == 2)
				{
					if (fVar4 < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar5, true))
					{
						sVar2 = sLocal_1130[8];
					}
					else
					{
						sVar2 = sLocal_1130[12];
					}
					cVar3 = "LS_UND_HANG3";
				}
				else if (iLocal_2105 == 3)
				{
					if (fVar4 < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar5, true))
					{
						sVar2 = sLocal_1130[9];
					}
					else
					{
						sVar2 = sLocal_1130[13];
					}
					cVar3 = "LS_UND_HANG4";
				}
				if (func_296(0, sVar2))
				{
					__LIB_10__::func_364(&(cParam0->f_2106), cVar3, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_15, Global_35, 8000, 0, 51, 0);
					__LIB_1__::func_148(&uLocal_1939);
					iLocal_2105++;
				}
			}
		}
	}
}

void func_653()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[6 /*130*/], false))
	{
		if (!__LIB_8__::func_640(Local_15, 518218985))
		{
			if (Local_112[6 /*130*/].f_19[13 /*5*/] || Local_112[6 /*130*/].f_19[12 /*5*/])
			{
				TASK::TASK_SMART_FLEE_PED(Local_15, Global_35, 100f, -1, 0, 2f, 0);
			}
		}
	}
}

void func_655()
{
	CAM::_0x8910C24B7E0046EC();
	if (func_146(Local_15, 0, &(Local_15.f_6), &(Local_15.f_34), 1, 0) || PED::_0x29FCE825613FEFCA(Local_15, 1))
	{
		if (Local_15.f_34 != 8)
		{
			func_367();
			return;
		}
	}
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_1978);
	TASK::TASK_LOOK_AT_ENTITY(Local_15, Global_35, 500, 16, 41, 0);
}

void func_656(char[4] cParam0)
{
	int iVar0;
	if (func_1188())
	{
		return;
	}
	func_1189();
	if (__LIB_6__::func_903("LS_UND_WALK"))
	{
		iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_WALK");
		if ((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 7) || iVar0 == 8) || iVar0 == 11)
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_15, &Local_2003);
		}
		else if (iVar0 == 14)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1318[1 /*97*/]))
			{
				Local_2003.f_3 = Local_1318[1 /*97*/];
				_NAMESPACE29::_0x66F9EB44342BB4C5(Local_15, &Local_2003);
			}
		}
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_15, 0))
	{
		if (iLocal_2116 != TASK::GET_PED_WAYPOINT_PROGRESS(Local_15))
		{
			iLocal_2116 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_15);
		}
	}
	if (iLocal_2116 > 54)
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_15, Local_1318[1 /*97*/], -1, 0, 51, 0);
	}
	if (iLocal_2116 < 58)
	{
		if (!AUDIO::_0xD89504D9D7D5057D("LS_UND_WALK") || (AUDIO::_0xD89504D9D7D5057D("LS_UND_WALK") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_WALK") < 13))
		{
			if (func_213(8388608))
			{
				if (__LIB_8__::func_864(Local_15, Global_36, 3.5f, 1, 1) && !func_213(536870912))
				{
					if (!__LIB_8__::func_640(Local_15, 658540077))
					{
						if (((__LIB_6__::func_903("LS_UND_WALK") && __LIB_10__::func_578("LS_UND_WALK")) && !__LIB_6__::func_903("LS_UND_LEFTWALK")) && !func_385(2097152))
						{
							AUDIO::RESTART_SCRIPTED_CONVERSATION("LS_UND_WALK");
						}
						func_384(8388608);
						func_688(262144);
					}
				}
				else if (!func_1190(Global_36, Local_15) || func_213(536870912))
				{
					if (__LIB_8__::func_684("LS_UND_WALK"))
					{
						AUDIO::PAUSE_SCRIPTED_CONVERSATION("LS_UND_WALK", true, false, true, false);
					}
				}
			}
			else if (!__LIB_8__::func_864(Local_15, Global_36, 4f, 1, 1) || func_213(536870912))
			{
				if (!func_1190(Global_36, Local_15) || func_213(536870912))
				{
					if (!func_213(8388608))
					{
						func_214(8388608);
					}
				}
			}
			else if (__LIB_6__::func_903("LS_UND_WALK"))
			{
				if (!__LIB_10__::func_578("LS_UND_WALK"))
				{
					if (!func_385(32768) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_WALK") >= 9)
					{
						AUDIO::PAUSE_SCRIPTED_CONVERSATION("LS_UND_WALK", true, false, true, false);
						if (iLocal_2116 >= 40)
						{
							AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE("LS_UND_WALK");
						}
						func_209(2097152);
					}
				}
				else if (!__LIB_6__::func_903("LS_UND_LEFTWALK") && !func_385(2097152))
				{
					AUDIO::RESTART_SCRIPTED_CONVERSATION("LS_UND_WALK");
				}
			}
			if (((!func_385(262144) && func_213(8388608)) && iLocal_2115 != 4) && !func_213(536870912))
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (!__LIB_4__::func_68("OBJ_UND", 1))
					{
						if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_LEFTWALK", 0))
						{
							iLocal_2115++;
							func_209(262144);
						}
					}
				}
			}
			if (func_213(536870912) && !func_385(33554432))
			{
				if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && __LIB_8__::func_596(Global_35, Local_15, 10f, 1))
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_OFFHORSE", 0))
					{
						func_209(33554432);
					}
				}
			}
		}
		else if (AUDIO::_0xD89504D9D7D5057D("LS_UND_WALK") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_WALK") >= 13)
		{
			if (!bLocal_2112)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION("LS_UND_WALK", true, false, false, false);
				bLocal_2112 = true;
			}
		}
	}
	else
	{
		if (bLocal_2112)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION("LS_UND_WALK");
		}
		TASK::TASK_CLEAR_LOOK_AT(Local_15);
		func_210();
	}
}

void func_657(char[4] cParam0)
{
	int iVar0;
	char[] cVar1[8];
	if (func_1188())
	{
		return;
	}
	if (!bLocal_2113)
	{
		if (!AUDIO::_0xD89504D9D7D5057D("LS_UND_WALK") || (AUDIO::_0xD89504D9D7D5057D("LS_UND_WALK") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_WALK") >= 16))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1292.056f, -1235.887f, 79.95316f, 1f, -1, 0.25f, 0, 129.37f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_15, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			bLocal_2113 = true;
		}
	}
	if ((!func_213(4096) && ENTITY::IS_ENTITY_OCCLUDED(Local_15)) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15, Global_35, 17))
	{
		if (func_176(3, 0))
		{
			iLocal_1204 = 14;
			ANIMSCENE::START_ANIM_SCENE(Local_112[3 /*130*/]);
			func_214(4096);
		}
	}
	if (!func_213(4096) && !func_213(1))
	{
		if (!__LIB_0__::func_75(&uLocal_1969))
		{
			if (bLocal_2113 && !__LIB_6__::func_903("LS_UND_WALK"))
			{
				__LIB_1__::func_148(&uLocal_1969);
			}
		}
		else if (((__LIB_8__::func_596(Global_35, Local_15, 5f, 1) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_15, Global_35, 17)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15)) && __LIB_0__::func_264(&uLocal_1969) > 16f)
		{
			if ((((func_213(256) || func_213(512)) || func_213(16)) || func_213(32)) || func_213(64))
			{
				cVar1 = "LS_UND_RETURN1";
			}
			else
			{
				cVar1 = "LS_UND_RETURN";
			}
			if (__LIB_10__::func_364(&(cParam0->f_2106), cVar1, 0))
			{
				__LIB_1__::func_148(&uLocal_1969);
			}
		}
	}
	if (!func_63(33554432))
	{
		if ((__LIB_8__::func_596(Global_35, Local_15, 10f, 1) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_15, Global_35, 17)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15))
		{
			if (__LIB_0__::func_399(Global_35, 0, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 0, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WEAPON", 0))
				{
					func_66(33554432);
					if (__LIB_0__::func_75(&uLocal_2091))
					{
						__LIB_1__::func_148(&uLocal_2091);
					}
				}
			}
		}
	}
	else if (__LIB_0__::func_399(Global_35, 0, 0, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_399(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED"))
	{
		func_1193(33554432);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[3 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[3 /*130*/], false))
		{
			func_1194();
			if ((__LIB_8__::func_596(Global_35, Local_15, 6f, 1) && !func_213(1)) && iLocal_2090 < 3)
			{
				if (!__LIB_0__::func_75(&uLocal_2091) || __LIB_0__::func_264(&uLocal_2091) > 14f)
				{
					if (iLocal_2090 == 0)
					{
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[3 /*130*/], sLocal_1130[15]))
						{
							if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[3 /*130*/], sLocal_1130[15]))
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[3 /*130*/], sLocal_1130[15]);
							}
						}
						else
						{
							func_1195(3, 15, 1);
							__LIB_1__::func_148(&uLocal_2091);
							iLocal_2090++;
						}
					}
					else if (iLocal_2090 == 1)
					{
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[3 /*130*/], sLocal_1130[16]))
						{
							if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[3 /*130*/], sLocal_1130[16]))
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[3 /*130*/], sLocal_1130[15]))
								{
									ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[3 /*130*/], sLocal_1130[15]);
								}
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[3 /*130*/], sLocal_1130[16]);
							}
						}
						else
						{
							func_1195(3, 16, 1);
							__LIB_1__::func_148(&uLocal_2091);
							iLocal_2090++;
						}
					}
					else if (iLocal_2090 == 2)
					{
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[3 /*130*/], sLocal_1130[17]))
						{
							if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[3 /*130*/], sLocal_1130[17]))
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[3 /*130*/], sLocal_1130[16]))
								{
									ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[3 /*130*/], sLocal_1130[16]);
								}
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[3 /*130*/], sLocal_1130[17]);
							}
						}
						else
						{
							func_1195(3, 17, 1);
							__LIB_1__::func_148(&uLocal_2091);
							iLocal_2090++;
						}
					}
				}
			}
		}
	}
}

void func_658(char[4] cParam0)
{
	if (func_1188())
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_112[3 /*130*/], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_112[3 /*130*/]))
	{
		if (!Local_112[4 /*130*/].f_16)
		{
			func_176(4, 0);
		}
		else
		{
			PED::SET_PED_MOVE_RATE_OVERRIDE(Local_15, 1.15f);
			if (__LIB_8__::func_619(Local_15, vLocal_2028, 1) >= 0.2f)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_15, 0))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15) > 20 && !__LIB_8__::func_640(Local_15, 713668775))
					{
						PED::_0x2208438012482A1A(Local_15, false, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15, vLocal_2028, 1f, -1, 0.25f, 0, fLocal_2031);
					}
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15) > 4 && TASK::GET_PED_WAYPOINT_PROGRESS(Local_15) < 19)
					{
						if (!__LIB_8__::func_864(Local_15, vLocal_2028, 6f, 1, 1) && (__LIB_8__::func_596(Local_15, Global_35, 8f, 1) || __LIB_8__::func_864(Global_35, vLocal_2028, 10f, 1, 1)))
						{
							if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_15))
							{
								TASK::WAYPOINT_PLAYBACK_PAUSE(Local_15, 1, 0, 0);
							}
							func_1196(cParam0);
						}
						else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_15))
						{
							TASK::WAYPOINT_PLAYBACK_RESUME(Local_15, false, -1, 0);
						}
					}
				}
				else if (!__LIB_8__::func_640(Local_15, 658540077) && !__LIB_8__::func_640(Local_15, 713668775))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_15);
					PED::_0x2208438012482A1A(Local_15, false, false);
					func_537(Local_15, sLocal_1114[1], 0);
				}
			}
			else
			{
				func_222(cParam0);
			}
		}
	}
}

void func_659()
{
	if (func_1188())
	{
		return;
	}
}

void func_660(char[4] cParam0)
{
	if (func_1188())
	{
		return;
	}
	func_1197(cParam0);
	if (func_213(2))
	{
		if (__LIB_8__::func_864(Local_15, Global_36, 10f, 1, 1))
		{
			func_1198();
		}
	}
}

void func_661(char[4] cParam0)
{
	if (!__LIB_6__::func_903("LS_UND_GUNSHOT") && !func_385(512))
	{
		if (__LIB_6__::func_904())
		{
			__LIB_3__::func_732(0);
		}
		if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_GUNSHOT", 0))
		{
			func_209(512);
			func_367();
		}
	}
}

void func_662(char[4] cParam0)
{
	if (func_1188())
	{
		return;
	}
	if (!bLocal_2106)
	{
		func_1197(cParam0);
	}
	if (func_213(131072))
	{
		func_176(6, 0);
	}
	if (bLocal_2106)
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_112[5 /*130*/], "male") && !__LIB_6__::func_903("LS_UND_WILLDO"))
		{
			func_1199(cParam0);
		}
	}
}

void func_663(char[4] cParam0)
{
	if (func_1188())
	{
		return;
	}
	if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_112[6 /*130*/], "Gwen"))
	{
		func_224();
	}
}

void func_664(char[4] cParam0)
{
	if (func_1188())
	{
		return;
	}
	if (!__LIB_8__::func_640(Local_15, 658540077) && !ENTITY::IS_ENTITY_DEAD(Local_15))
	{
		func_119(&Local_15, 0, 1, 1);
	}
	if (__LIB_8__::func_864(Local_15, Global_36, 12f, 1, 1))
	{
		if (!func_385(131072))
		{
			if (__LIB_8__::func_596(Local_15, Local_1614[0 /*97*/], 10f, 0) || __LIB_8__::func_596(Local_15, Local_1614[1 /*97*/], 10f, 0))
			{
				__LIB_3__::func_732(0);
				__LIB_1__::func_148(&uLocal_1939);
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_GWYNBR", 0))
				{
					func_304();
					func_209(131072);
				}
			}
		}
		if (!__LIB_0__::func_75(&uLocal_1939))
		{
			if (!__LIB_0__::func_270())
			{
				__LIB_1__::func_283(&uLocal_1939, 0);
			}
		}
		else if (iLocal_2103 < 3)
		{
			if (!__LIB_6__::func_904())
			{
				if (__LIB_0__::func_264(&uLocal_1939) > 20f)
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_HANG_AFT", 0))
					{
						__LIB_1__::func_148(&uLocal_1939);
						iLocal_2103++;
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_1939);
			}
		}
	}
}

void func_667()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[0 /*130*/], false))
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[0 /*130*/], sLocal_1130[1]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[0 /*130*/], sLocal_1130[1]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[0 /*130*/], sLocal_1130[1]);
				}
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[3 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[3 /*130*/], false))
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[3 /*130*/], sLocal_1130[18]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[3 /*130*/], sLocal_1130[18]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[3 /*130*/], sLocal_1130[18]);
				}
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[3 /*130*/], sLocal_1130[14]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[3 /*130*/], sLocal_1130[14]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[3 /*130*/], sLocal_1130[14]);
				}
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[6 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[6 /*130*/], false))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_112[6 /*130*/], sLocal_1130[23]))
			{
				if (!Local_112[6 /*130*/].f_19[14 /*5*/])
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[20]))
					{
						if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[20]))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[6 /*130*/], sLocal_1130[20]);
						}
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[22]))
					{
						if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[22]))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[6 /*130*/], sLocal_1130[22]);
						}
					}
				}
				else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[29]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[29]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[6 /*130*/], sLocal_1130[29]);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[20]))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[6 /*130*/], sLocal_1130[20]);
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[22]))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[6 /*130*/], sLocal_1130[22]);
				}
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[29]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[29]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[6 /*130*/], sLocal_1130[29]);
					}
				}
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_112[6 /*130*/], sLocal_1130[29]))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[23]))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[6 /*130*/], sLocal_1130[23]);
				}
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[1 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[1 /*130*/], false))
		{
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[2 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[2 /*130*/], false))
		{
			if (!func_213(256))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[2 /*130*/], sLocal_1185[0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[2 /*130*/], sLocal_1185[0]);
					}
				}
			}
		}
	}
}

void func_668(int iParam0)
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!Local_112[iParam0 /*130*/].f_19[iVar0 /*5*/])
		{
			uVar1 = func_1200(iParam0, iVar0);
			if (ANIMSCENE::_0x1F0E401031E20146(Local_112[iParam0 /*130*/], uVar1))
			{
				if (Local_112[iParam0 /*130*/].f_18 >= Local_112[iParam0 /*130*/].f_19[iVar0 /*5*/].f_1 && Local_112[iParam0 /*130*/].f_18 < Local_112[iParam0 /*130*/].f_19[iVar0 /*5*/].f_2)
				{
					if (MISC::IS_STRING_NULL_OR_EMPTY(Local_112[iParam0 /*130*/].f_19[iVar0 /*5*/].f_4))
					{
						Local_112[iParam0 /*130*/].f_19[iVar0 /*5*/] = 1;
					}
					else if (func_1201(iParam0, iVar0))
					{
						Local_112[iParam0 /*130*/].f_19[iVar0 /*5*/] = 1;
					}
				}
			}
		}
		else if (Local_112[iParam0 /*130*/].f_19[iVar0 /*5*/].f_2 != 100000f)
		{
			if (Local_112[iParam0 /*130*/].f_18 >= Local_112[iParam0 /*130*/].f_19[iVar0 /*5*/].f_2)
			{
				Local_112[iParam0 /*130*/].f_19[iVar0 /*5*/] = 0;
			}
		}
		iVar0++;
	}
}

void func_669(char[4] cParam0)
{
	if (!func_213(1))
	{
		if ((func_213(16) || func_213(32)) || func_213(64))
		{
			if (func_213(256) || func_213(512))
			{
				func_214(1);
			}
		}
		func_1202(cParam0);
		func_1203(cParam0);
	}
}

void func_670(int iParam0, char[4] cParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (iParam0 == 0 || iParam0 == 1)
	{
		if (!func_213(256) && !func_213(512))
		{
			if (func_1204(iParam0))
			{
				return;
			}
		}
	}
	else if (iParam0 == 2)
	{
		if ((!func_213(64) && !func_213(32)) && !func_213(16))
		{
			if (func_1204(iParam0))
			{
				return;
			}
		}
	}
	if (iParam0 == 2)
	{
		if (bLocal_2057)
		{
			func_1205(&(Local_1318[2 /*97*/]), &(Local_1318[2 /*97*/].f_35), 8f, &Local_2159, 0.1f, 3, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
		}
		if ((__LIB_6__::func_903("LSUND_IG_CLREAS") || __LIB_6__::func_903("LSUND_IG_CLTHR")) || __LIB_6__::func_903("LSUND_IG_CLWEP"))
		{
			func_1206(2, 1);
			Local_1978.f_3 = Local_1318[2 /*97*/];
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_1978);
		}
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(Local_1318[2 /*97*/], joaat("ENDSINWALK")) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_1318[2 /*97*/], joaat("EXIT"))) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_112[1 /*130*/], "Mourner"))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_112[1 /*130*/], "Mourner", Local_1318[2 /*97*/]);
			if (func_213(32))
			{
				PED::FORCE_PED_MOTION_STATE(Local_1318[2 /*97*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
				func_1207(iParam0);
			}
			else if (func_213(64))
			{
				PED::FORCE_PED_MOTION_STATE(Local_1318[2 /*97*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
				func_1208(iParam0);
			}
			else if (func_213(16))
			{
				PED::FORCE_PED_MOTION_STATE(Local_1318[2 /*97*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
				func_1209(iParam0);
			}
			PED::_0x2208438012482A1A(Local_1318[iParam0 /*97*/], false, false);
			return;
		}
	}
	else if (iParam0 == 0 || iParam0 == 1)
	{
		if (iParam0 == 0)
		{
			sVar0 = "Female";
		}
		else
		{
			sVar0 = "male";
		}
		if (bLocal_2056)
		{
			if (func_213(256) || func_213(512))
			{
				func_1205(&(Local_1318[1 /*97*/]), &(Local_1318[1 /*97*/].f_35), 8f, &Local_2124, 0.1f, 3, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1318[iParam0 /*97*/], joaat("ENDSINRUN")) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_112[2 /*130*/], sVar0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_112[2 /*130*/], sVar0, Local_1318[iParam0 /*97*/]);
			if (func_213(256))
			{
				if (iParam0 == 0)
				{
				}
				func_1207(iParam0);
			}
			else if (func_213(512))
			{
				if (iParam0 == 0)
				{
				}
				func_1208(iParam0);
			}
			PED::_0x2208438012482A1A(Local_1318[iParam0 /*97*/], false, false);
			return;
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[1 /*130*/], false))
	{
		if (__LIB_8__::func_596(Global_35, Local_1318[2 /*97*/], 5f, 1))
		{
			if ((((iLocal_2119 == 3 && func_385(256)) && !func_213(16)) && !func_213(32)) && !func_213(64))
			{
				if (!__LIB_0__::func_75(&uLocal_2084))
				{
					__LIB_2__::func_462(&uLocal_2084, 13f, 0);
				}
				else if (__LIB_0__::func_264(&uLocal_2084) > 15f)
				{
					if (iLocal_2082 < 3)
					{
						if (iLocal_2082 == 0)
						{
							sVar1 = sLocal_1163[18];
						}
						else if (iLocal_2082 == 1)
						{
							sVar1 = sLocal_1163[19];
						}
						else if (iLocal_2082 == 2)
						{
							sVar1 = sLocal_1163[20];
						}
						if (func_296(1, sVar1))
						{
							iLocal_2082++;
							__LIB_8__::func_111("LS_UND_HNG_MOU2", 0);
							__LIB_1__::func_148(&uLocal_2084);
							__LIB_1__::func_148(&uLocal_2087);
						}
					}
				}
			}
		}
		else if (__LIB_8__::func_596(Global_35, Local_1318[2 /*97*/], 30f, 1))
		{
			if (!__LIB_0__::func_75(&uLocal_2087))
			{
				__LIB_1__::func_148(&uLocal_2087);
			}
			else if ((((((__LIB_0__::func_264(&uLocal_2087) > 25f && !func_213(16)) && !__LIB_0__::func_27(iLocal_2117, 8)) && !func_213(32)) && !__LIB_0__::func_27(iLocal_2117, 16)) && !__LIB_0__::func_27(iLocal_2117, 32)) && !func_213(64))
			{
				if (iLocal_2083 < 3)
				{
					if (iLocal_2083 == 0)
					{
						sVar2 = sLocal_1163[15];
					}
					else if (iLocal_2083 == 1)
					{
						sVar2 = sLocal_1163[16];
					}
					else if (iLocal_2083 == 2)
					{
						sVar2 = sLocal_1163[17];
					}
					if (func_296(1, sVar2))
					{
						iLocal_2083++;
						__LIB_1__::func_148(&uLocal_2087);
					}
				}
			}
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[2 /*130*/], false))
	{
		func_1211();
		if (iLocal_2119 == 3 && func_385(256))
		{
			if (__LIB_8__::func_596(Global_35, Local_1318[0 /*97*/], 10f, 1))
			{
				if ((((((!func_213(1024) && !func_213(512)) && !func_213(256)) && !func_213(128)) && !__LIB_0__::func_27(iLocal_2117, 2)) && !__LIB_0__::func_27(iLocal_2117, 4)) && !__LIB_0__::func_27(iLocal_2117, 1))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[10]))
					{
						if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[2 /*130*/], sLocal_1185[10]))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[2 /*130*/], sLocal_1185[10]);
						}
					}
					else if (func_1212(10, 1))
					{
						func_214(1024);
					}
				}
				else if (!func_213(2048))
				{
					if (__LIB_0__::func_264(&uLocal_2079) > 30f && __LIB_8__::func_596(Global_35, Local_1318[0 /*97*/], 8f, 1))
					{
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[11]))
						{
							if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[2 /*130*/], sLocal_1185[11]))
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[10]))
								{
									ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[2 /*130*/], sLocal_1185[10]);
								}
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[2 /*130*/], sLocal_1185[11]);
							}
						}
						else
						{
							func_1212(11, 1);
							iLocal_2078++;
							func_214(2048);
						}
					}
				}
				else if (iLocal_2078 < 4)
				{
					if (__LIB_0__::func_264(&uLocal_2079) > 10f && __LIB_8__::func_596(Global_35, Local_1318[0 /*97*/], 8f, 1))
					{
						if (iLocal_2078 == 1)
						{
							if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[12]))
							{
								if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[2 /*130*/], sLocal_1185[12]))
								{
									if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[11]))
									{
										ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[2 /*130*/], sLocal_1185[11]);
									}
									ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[2 /*130*/], sLocal_1185[12]);
								}
							}
							else
							{
								func_1212(12, 1);
								iLocal_2078++;
							}
						}
						else if (iLocal_2078 == 2)
						{
							if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[13]))
							{
								if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[2 /*130*/], sLocal_1185[13]))
								{
									if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[12]))
									{
										ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[2 /*130*/], sLocal_1185[12]);
									}
									ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[2 /*130*/], sLocal_1185[13]);
								}
							}
							else
							{
								func_1212(13, 1);
								iLocal_2078++;
							}
						}
						else if (iLocal_2078 == 3)
						{
							if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[14]))
							{
								if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[2 /*130*/], sLocal_1185[14]))
								{
									if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[13]))
									{
										ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[2 /*130*/], sLocal_1185[13]);
									}
									ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[2 /*130*/], sLocal_1185[14]);
								}
							}
							else
							{
								func_1212(14, 1);
								iLocal_2078++;
							}
						}
					}
				}
			}
			else if (__LIB_6__::func_903("LS_UND_HNG_MOU2"))
			{
				__LIB_8__::func_111("LS_UND_HNG_MOU2", 1);
			}
		}
	}
}

void func_671(int iParam0)
{
	if (func_1204(iParam0))
	{
		return;
	}
}

void func_672(int iParam0)
{
	int iVar0;
	if (func_1204(iParam0))
	{
		func_1208(iParam0);
		return;
	}
	if (func_213(16777216))
	{
		iVar0 = 40;
	}
	else
	{
		iVar0 = 19;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1318[iParam0 /*97*/], 0))
	{
		if (iParam0 == 1)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1318[iParam0 /*97*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else if (iParam0 == 0)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1318[iParam0 /*97*/], 1.6f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1318[iParam0 /*97*/], 1.5f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	if (iParam0 == 2)
	{
		if (bLocal_2057)
		{
			func_1205(&(Local_1318[2 /*97*/]), &(Local_1318[2 /*97*/].f_35), 8f, &Local_2159, 0.1f, 3, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1318[iParam0 /*97*/], 0))
		{
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1318[iParam0 /*97*/]) > 33)
			{
				POPULATION::_0xF74E134F40192884(Local_1318[iParam0 /*97*/], 1);
				if (__LIB_8__::func_596(Global_35, Local_1318[iParam0 /*97*/], 15f, 1))
				{
					TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 384, 1.6f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 384, 1f, 0);
				}
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1318[iParam0 /*97*/]) > 29)
			{
				TASK::_0x2E1D6D87346BB7D2(Local_1318[iParam0 /*97*/], Global_35, 0, 0);
			}
		}
	}
	else
	{
		if (bLocal_2056)
		{
			func_1205(&(Local_1318[1 /*97*/]), &(Local_1318[1 /*97*/].f_35), 8f, &Local_2124, 0.1f, 3, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1318[iParam0 /*97*/], 0))
		{
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1318[iParam0 /*97*/]) > iVar0)
			{
				PED::_0x2208438012482A1A(Local_1318[iParam0 /*97*/], false, false);
				POPULATION::_0xF74E134F40192884(Local_1318[iParam0 /*97*/], 1);
				if (__LIB_8__::func_596(Global_35, Local_1318[iParam0 /*97*/], 15f, 1))
				{
					if (iParam0 == 1)
					{
						TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 384, 2f, 0);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 384, 1.7f, 0);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 384, 1f, 0);
				}
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1318[iParam0 /*97*/]) > (iVar0 - 4))
			{
				TASK::_0x2E1D6D87346BB7D2(Local_1318[iParam0 /*97*/], Global_35, 0, 0);
			}
		}
	}
	if (!__LIB_8__::func_640(Local_1318[iParam0 /*97*/], 1435919172))
	{
		POPULATION::_0xF74E134F40192884(Local_1318[iParam0 /*97*/], 1);
		if (iParam0 == 1)
		{
			TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 384, 2f, 0);
		}
		else if (iParam0 == 2)
		{
			TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 384, 1.5f, 0);
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 384, 1.6f, 0);
		}
	}
	if (func_298(Local_1318[iParam0 /*97*/], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
	{
		PED::DELETE_PED(&(Local_1318[iParam0 /*97*/]));
	}
}

void func_673(int iParam0)
{
	if (func_1204(iParam0) || func_1213(iParam0))
	{
		func_1208(iParam0);
		return;
	}
	if (!func_213(1073741824 /* Float: 2f */))
	{
		if (!func_213(256) && !func_213(512))
		{
			func_214(1073741824 /* Float: 2f */);
		}
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1318[iParam0 /*97*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1318[iParam0 /*97*/], 1f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1318[iParam0 /*97*/], 0))
	{
		if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1318[iParam0 /*97*/]) > 31)
		{
			PED::FORCE_PED_MOTION_STATE(Local_1318[iParam0 /*97*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
			PED::_0x2208438012482A1A(Local_1318[iParam0 /*97*/], false, false);
			POPULATION::_0xF74E134F40192884(Local_1318[iParam0 /*97*/], 1);
			TASK::TASK_WANDER_STANDARD(Local_1318[iParam0 /*97*/], 40000f, 1);
		}
	}
	else if (!__LIB_8__::func_640(Local_1318[iParam0 /*97*/], -1146898486))
	{
		POPULATION::_0xF74E134F40192884(Local_1318[iParam0 /*97*/], 1);
		TASK::TASK_WANDER_STANDARD(Local_1318[iParam0 /*97*/], 40000f, 1);
	}
	if (func_298(Local_1318[iParam0 /*97*/], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
	{
		PED::DELETE_PED(&(Local_1318[iParam0 /*97*/]));
	}
}

void func_674(int iParam0)
{
	int iVar0;
	if (func_213(16777216))
	{
		iVar0 = 40;
	}
	else
	{
		iVar0 = 19;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1318[iParam0 /*97*/], 0))
	{
		if (iParam0 == 1)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1318[iParam0 /*97*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1318[iParam0 /*97*/], 1.6f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	if (iParam0 == 2)
	{
		if (bLocal_2057)
		{
			func_1205(&(Local_1318[2 /*97*/]), &(Local_1318[2 /*97*/].f_35), 8f, &Local_2159, 0.1f, 3, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1318[iParam0 /*97*/], 0))
		{
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1318[iParam0 /*97*/]) > 33)
			{
				PED::_0x2208438012482A1A(Local_1318[iParam0 /*97*/], false, false);
				TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 0, 1.5f, 0);
				POPULATION::_0xF74E134F40192884(Local_1318[iParam0 /*97*/], 1);
			}
		}
	}
	else
	{
		if (bLocal_2056)
		{
			func_1205(&(Local_1318[1 /*97*/]), &(Local_1318[1 /*97*/].f_35), 8f, &Local_2124, 0.1f, 3, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1318[iParam0 /*97*/], 0))
		{
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1318[iParam0 /*97*/]) > iVar0)
			{
				PED::_0x2208438012482A1A(Local_1318[iParam0 /*97*/], false, false);
				POPULATION::_0xF74E134F40192884(Local_1318[iParam0 /*97*/], 1);
				if (iParam0 == 1)
				{
					TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 256, 2f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 256, 1.5f, 0);
				}
			}
		}
	}
	if (!__LIB_8__::func_640(Local_1318[iParam0 /*97*/], 1435919172))
	{
		if (iParam0 == 1)
		{
			TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 256, 2f, 0);
			POPULATION::_0xF74E134F40192884(Local_1318[iParam0 /*97*/], 1);
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(Local_1318[iParam0 /*97*/], Global_35, 100f, -1, 256, 1.5f, 0);
			POPULATION::_0xF74E134F40192884(Local_1318[iParam0 /*97*/], 1);
		}
	}
}

void func_676(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bVar0 = __LIB_3__::func_718();
	if (!ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = __LIB_3__::func_749(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = Global_1955500[iVar2 /*16*/].f_2;
				if (__LIB_3__::func_738(iVar2, 512))
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				}
			}
		}
		TASK::TASK_CLEAR_LOOK_AT(bVar0);
		PED::_0xAAC0EE3B4999ABB5(bVar0, false);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					TASK::TASK_CLEAR_LOOK_AT(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_679()
{
	if (!__LIB_6__::func_904())
	{
		func_1217(&(Local_15.f_5), Local_15, -89429847, "BLIP_UND");
		func_680();
	}
}

void func_680()
{
	int iVar0;
	iVar0 = iLocal_2118;
	iVar0++;
	iLocal_2118 = iVar0;
	if (iLocal_2118 == 3)
	{
		iLocal_2118 = (iVar0 - 1);
	}
}

void func_681()
{
	func_1217(&(Local_15.f_5), Local_15, -89429847, "BLIP_UND");
	func_1218();
	func_680();
}

void func_682()
{
	if (iLocal_2121 != 14)
	{
		PED::SET_PED_CONFIG_FLAG(Local_15, 26, false);
		Local_2003.f_3 = Global_35;
		Local_2003.f_4 = 21030;
		Local_2003.f_7 = 300;
		Local_2003.f_8 = 4;
		Local_2003.f_13 = 1;
		Local_2003.f_17 = 3;
		Local_2003.f_18 = 3;
		Local_2003.f_19 = 3;
		Local_2003.f_21 = 3;
		func_1219();
		func_529(3);
	}
}

void func_683(char[4] cParam0)
{
	__LIB_1__::func_408(-1835851517, 1, 0);
	if (!func_385(4096))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15))
		{
			__LIB_10__::func_588(cParam0, "OBJ_UND", ENTITY::GET_ENTITY_COORDS(Local_15, false, false));
		}
		func_209(4096);
	}
	if (MAP::DOES_BLIP_EXIST(Local_15.f_5))
	{
		MAP::_BLIP_SET_MODIFIER(Local_15.f_5, -546708623);
	}
	__LIB_1__::func_539();
	__LIB_3__::func_353("LSUTKR_START", 0);
	if (iLocal_2121 != 3)
	{
		func_682();
	}
	func_680();
}

void func_685(char[4] cParam0)
{
	if (!__LIB_8__::func_601(Local_15, 0))
	{
		return;
	}
	if (__LIB_8__::func_619(Local_15, vLocal_2028, 1) < 3f)
	{
		if (iLocal_2120 < 1)
		{
			iLocal_2120 = 1;
		}
	}
	switch (iLocal_2120)
	{
		case 0:
			if (func_385(4096))
			{
				if (__LIB_0__::func_264(&uLocal_1939) > 2f && __LIB_8__::func_596(Global_35, Local_15, 4f, 1))
				{
					if (!func_213(8388608) && func_385(262144))
					{
						func_688(262144);
					}
					if ((!__LIB_6__::func_904() && !func_213(536870912)) && !func_385(262144))
					{
						if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WALK", 0))
						{
							iLocal_2120 = 1;
						}
					}
				}
			}
			break;
		case 1:
			break;
	}
}

bool func_686()
{
	if (iLocal_2121 != 11)
	{
		if (__LIB_8__::func_864(Local_15, vLocal_2042, 28f, 0, 1))
		{
			return true;
		}
	}
	return false;
}

void func_688(int iParam0)
{
	__LIB_1__::func_681(&iLocal_2075, iParam0);
}

void func_689(char[4] cParam0)
{
	__LIB_0__::func_325(&(Local_15.f_5));
	__LIB_3__::func_353("LSUKTR_CLEAR", 0);
	__LIB_10__::func_378(*cParam0, func_41(1), func_41(2), 1, 2);
	func_680();
}

void func_690()
{
	func_1222(1);
	func_1222(2);
}

bool func_691()
{
	if (func_213(1))
	{
		return true;
	}
	return false;
}

void func_693(char[4] cParam0)
{
	if (!func_213(2))
	{
		Local_1812.f_1 = { 1329.836f, -1277.964f, 75.6046f };
		Local_1812.f_4 = 166.1052f;
		__LIB_3__::func_353("LSUKTR_RETURN", 0);
		if (!func_385(8192))
		{
			__LIB_1__::func_422("OBJ_UND_RET", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_209(8192);
		}
	}
	else
	{
		__LIB_3__::func_353("LSUKTR_RETURN_2", 0);
		if (!func_385(16384))
		{
			__LIB_1__::func_422("OBJ_UND_CHK", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_209(16384);
		}
	}
	func_1217(&(Local_15.f_5), Local_15, -89429847, "BLIP_UND");
	if (MAP::DOES_BLIP_EXIST(Local_15.f_5))
	{
		MAP::_BLIP_SET_MODIFIER(Local_15.f_5, -546708623);
	}
	func_680();
}

bool func_694(char[4] cParam0)
{
	if (func_1028(&Local_1812, joaat("A_F_M_RHDTOWNFOLK_01")))
	{
		__LIB_8__::func_858(&(cParam0->f_2106), Local_1812, "LS_UN_MORN_4", 0);
		return true;
	}
	return false;
}

void func_695()
{
	__LIB_2__::func_602(&(Local_2194[0 /*17*/]), "MCXT_REASON", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_2194[1 /*17*/]), "MCXT_THREAT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_2194[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_2194[1 /*17*/]), 0, 0);
	iLocal_2283 = 3;
	func_1224(5);
}

void func_696()
{
	if (iLocal_2121 != 14)
	{
		func_1195(3, 18, 1);
		TASK::TASK_LOOK_AT_ENTITY(Local_15, Global_35, -1, 2052, 41, 0);
		func_529(5);
	}
}

void func_697(char[4] cParam0)
{
	if (__LIB_8__::func_601(Local_1812, 0))
	{
		switch (iLocal_1909)
		{
			case 0:
				func_1225(cParam0);
				break;
			case 1:
				func_1226(cParam0);
				break;
			case 2:
				func_1227(cParam0);
				break;
			case 4:
				func_1228(cParam0);
				break;
			case 3:
				func_1229(cParam0);
				break;
			case 5:
				func_1230();
				break;
		}
	}
	else
	{
		__LIB_0__::func_325(&(Local_1812.f_5));
		iLocal_1909 = 6;
	}
}

void func_698(char[4] cParam0)
{
	if (func_694(cParam0))
	{
		__LIB_3__::func_353("LSUKTR_GUARD", 0);
		__LIB_0__::func_325(&(Local_15.f_5));
		__LIB_10__::func_570(&iLocal_2060, 1299.224f, -1244.191f, 78.81702f, -308585968, 0, 1, 11f);
		__LIB_1__::func_422("OBJ_UND_GUARD", 7500, 0, 1, 0, 0, -1, -1, 0);
		__LIB_1__::func_283(&uLocal_2095, 0);
		func_680();
	}
}

void func_699()
{
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		func_1232(1);
	}
}

void func_700()
{
	if (iLocal_1809[0] != 6 && iLocal_1809[1] != 6)
	{
		if ((iLocal_1809[0] != 0 || iLocal_1809[1] != 0) || func_385(4194304))
		{
			__LIB_0__::func_325(&iLocal_2060);
		}
	}
}

void func_701(char[4] cParam0)
{
	if ((((((!func_213(8192) && !__LIB_6__::func_903("LS_UND_DEFENDR")) && !__LIB_6__::func_903("LS_UND_GRAVE")) && __LIB_8__::func_596(Local_15, Global_35, 10f, 1)) && __LIB_0__::func_264(&uLocal_2095) > 15f) && !func_385(524288)) && !func_63(32))
	{
		if (iLocal_2121 == 7)
		{
			if (iLocal_2094 != 3)
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_DEFENDR", 0))
				{
					iLocal_2094++;
					__LIB_1__::func_148(&uLocal_2095);
				}
			}
		}
	}
}

bool func_702()
{
	if (iLocal_1909 == 4 || iLocal_1909 == 3)
	{
		__LIB_1__::func_148(&uLocal_1945);
		return true;
	}
	return false;
}

void func_703(char[4] cParam0)
{
	if (func_1233())
	{
		__LIB_8__::func_858(&(cParam0->f_2106), Local_1614[0 /*97*/], "LS_UN_BRAWL_1", 0);
		__LIB_8__::func_858(&(cParam0->f_2106), Local_1614[1 /*97*/], "LS_UN_BRAWL_2", 0);
		PED::SET_PED_CONFIG_FLAG(Local_1614[0 /*97*/], 186, false);
		PED::SET_PED_CONFIG_FLAG(Local_1614[1 /*97*/], 186, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1614[0 /*97*/], 1024, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1614[1 /*97*/], 1024, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1614[0 /*97*/], 512, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1614[1 /*97*/], 512, true);
		ENTITY::_0x18FF3110CF47115D(Local_1614[0 /*97*/], 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_1614[1 /*97*/], 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_1614[0 /*97*/], 3, 0);
		ENTITY::_0x18FF3110CF47115D(Local_1614[1 /*97*/], 3, 0);
		__LIB_2__::func_279(Local_1614[0 /*97*/], 1);
		__LIB_2__::func_279(Local_1614[1 /*97*/], 1);
		__LIB_0__::func_325(&(Local_15.f_5));
		__LIB_10__::func_570(&iLocal_2060, 1299.224f, -1244.191f, 78.81702f, -308585968, 0, 1, 11f);
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		__LIB_1__::func_324("OBJ_UND_GUARD");
		func_1236(0);
		func_1236(1);
		func_1232(0);
		__LIB_1__::func_283(&uLocal_2095, 0);
		func_680();
	}
}

void func_704(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_8__::func_601(Local_1614[iVar0 /*97*/], 0))
		{
			switch (iLocal_1809[iVar0])
			{
				case 0:
					func_1237(iVar0, cParam0);
					break;
				case 1:
					func_1238(iVar0, cParam0);
					break;
				case 2:
					func_1239(iVar0, cParam0);
					break;
				case 3:
					func_1240(iVar0, cParam0);
					break;
				case 4:
					func_1241(iVar0, cParam0);
					break;
				case 5:
					func_1242(cParam0);
					break;
				case 6:
					func_1243();
					break;
			}
		}
		else
		{
			func_1244(iVar0);
			iLocal_1809[iVar0] = 7;
		}
		iVar0++;
	}
}

bool func_705()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if ((iLocal_1809[iVar1] == 7 || iLocal_1809[iVar1] == 5) || PED::_IS_PED_HOGTIED(Local_1614[iVar1 /*97*/]))
		{
			if (!bLocal_2053)
			{
				__LIB_2__::func_279(Local_1614[func_1245(iVar1) /*97*/], 0);
				bLocal_2053 = true;
			}
			func_1244(iVar1);
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 >= 2)
	{
		if (!func_213(2))
		{
			func_214(2);
			__LIB_8__::func_111("LS_UND_BRW1_ENC", 1);
		}
		return true;
	}
	return false;
}

void func_706(char[4] cParam0)
{
	if (func_176(5, 0))
	{
		bLocal_2052 = true;
		__LIB_1__::func_422("OBJ_UND_VALUABLES", 7500, 0, 1, 0, 0, -1, -1, 0);
		func_680();
	}
}

bool func_707()
{
	if (bLocal_2106)
	{
		return true;
	}
	else if (!bLocal_2107)
	{
		if (!bLocal_2108)
		{
			iLocal_2077 = func_195(&Local_15, &(Local_15.f_35), 5f, &Local_2264, 0.1f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (iLocal_2077 == 0)
			{
				__LIB_0__::func_325(&iLocal_2060);
				__LIB_2__::func_480(&Local_2264, 1, 1, 1, 0);
				Local_15.f_35.f_2 = 0;
				func_311(&Local_15);
				HUD::_HIDE_HUD_COMPONENT(724769646);
				bLocal_2108 = true;
			}
		}
		else
		{
			__LIB_10__::func_263(1, 0, 1);
			if (__LIB_0__::func_153(Global_35, 0, 0, 0) != joaat("WEAPON_UNARMED"))
			{
				if (!bLocal_2109)
				{
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
					bLocal_2109 = true;
				}
			}
			else
			{
				func_1246();
			}
			return false;
		}
		if ((func_386(Global_35, uLocal_2064[2], 0, 1) || !__LIB_8__::func_596(Global_35, Local_15, 3f, 1)) || PED::_IS_PED_CARRYING(Global_35))
		{
			if (!bLocal_2051)
			{
				__LIB_2__::func_411(&(Local_2264[0 /*17*/]), 0, 0);
				bLocal_2051 = true;
			}
		}
		else if (bLocal_2051)
		{
			__LIB_2__::func_411(&(Local_2264[0 /*17*/]), 1, 0);
			bLocal_2051 = false;
		}
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[5 /*130*/], sLocal_1201[iLocal_1203]))
	{
		if (ANIMSCENE::_0x337F1CC8EE895601(Local_112[5 /*130*/], "player") || ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[5 /*130*/], false))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(Local_15);
			func_536(5, "WAIT_BOOL", 1);
			return true;
		}
		if (!__LIB_8__::func_640(Global_35, 1369124074))
		{
			TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_112[5 /*130*/], "player", sLocal_1201[iLocal_1203], 1.48f, 1, 0, 20000, -1082130432 /* Float: -1f */);
		}
	}
	return false;
}

void func_737()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1283();
	func_1284();
	func_1285();
	func_1286();
	func_1287();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_738(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1290(iParam0, 1, 1, -142743235, 1);
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

int func_745(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_595(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_772()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1312(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_798(bool bParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0xEF2D9ED7CE684F08(bParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

var func_799(bool bParam0)
{
	return ENTITY::_0x8DE41E9902E85756(bParam0);
}

bool func_800(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = bParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

void func_802()
{
	if (__LIB_8__::func_601(Local_15, 0))
	{
		__LIB_8__::func_603(Local_15, 1);
	}
	__LIB_8__::func_604(Global_35, 1);
	__LIB_5__::func_438(&uLocal_1098);
}

struct<130> func_815(char* sParam0, var uParam1)
{
	struct<130> Var0;
	Var0.f_2 = 1;
	Var0.f_19 = 22;
	Var0.f_1 = sParam0;
	Var0.f_2[0] = 0;
	Var0.f_17 = uParam1;
	return Var0;
}

struct<5> func_816(float fParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<5> Var0;
	Var0 = 0;
	Var0.f_1 = fParam0;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam1;
	Var0.f_4 = sParam2;
	return Var0;
}

struct<97> func_817(vector3 vParam0, float fParam3)
{
	struct<97> Var0;
	Var0.f_6.f_8 = -1;
	Var0.f_6.f_17 = 1097859072;
	Var0.f_6.f_18 = 1000;
	Var0.f_6.f_19 = 1067450368;
	Var0.f_6.f_20 = 5000;
	Var0.f_6.f_21 = 42;
	Var0.f_6.f_22 = 1103626240;
	Var0.f_6.f_23 = 1077936128;
	Var0.f_6.f_24 = 1106247680;
	Var0.f_6.f_25 = 1103101952;
	Var0.f_6.f_26 = 1097859072;
	Var0.f_6.f_27 = 1103626240;
	Var0.f_35.f_1 = -1;
	Var0.f_35.f_3 = -1;
	Var0.f_35.f_6 = -1;
	Var0.f_35.f_12 = 1073741824;
	Var0.f_35.f_16 = 1;
	Var0.f_35.f_26 = 1106247680;
	Var0.f_35.f_27 = 1067450368;
	Var0.f_35.f_29 = 1092616192;
	Var0.f_35.f_30 = 1112014848;
	Var0.f_35.f_31 = 1106247680;
	Var0.f_35.f_32 = 1101529088;
	Var0.f_35.f_33 = 1101004800;
	Var0.f_35.f_34 = 1084227584;
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam3;
	return Var0;
}

bool func_824(var uParam0)
{
	int iVar0;
	iVar0 = Global_1935630.f_40;
	if (__LIB_0__::func_2() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = __LIB_4__::func_227(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = __LIB_4__::func_227(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_11__::func_265(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

float func_827(bool bParam0, int iParam1)
{
	return __LIB_8__::func_599(bParam0, iParam1, 1, 1);
}

bool func_831(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && bParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == bParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && __LIB_8__::func_599(bVar0, bParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(bVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(bVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(__LIB_11__::func_254(bVar0, 0)))
		{
			if (__LIB_10__::func_580(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_842(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (__LIB_11__::func_268(bParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_843(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (__LIB_11__::func_268(bParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_853(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	__LIB_11__::func_269(1, &bVar0, &bVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bVar0 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!bParam2 || !__LIB_11__::func_267(uParam1, bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (bVar1 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
			{
				if (!bParam2 || !__LIB_11__::func_267(uParam1, bVar1))
				{
					if (__LIB_8__::func_619(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_865(var uParam0, int iParam1, int iParam2)
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
		return func_865(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_883(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;
	bVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	__LIB_18__::func_247(bVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

int func_888(bool bParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(bParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_889(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(bParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_890()
{
	func_891(0, "Gwen", Local_15);
	func_891(0, "player", Global_35);
	func_891(0, func_220(0), Local_1023[0 /*8*/]);
	func_891(0, func_220(1), Local_1023[1 /*8*/]);
}

void func_891(int iParam0, char* sParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_112[iParam0 /*130*/], sParam1, bParam2, 0);
	}
}

void func_892()
{
	func_891(4, "Gwen", Local_15);
	func_891(4, func_220(2), Local_1023[2 /*8*/]);
}

void func_893()
{
	func_891(5, "player", Global_35);
	func_891(5, func_220(3), Local_1023[3 /*8*/]);
	func_891(5, "male", Local_15);
}

void func_894()
{
	func_891(6, "ARTHUR", Global_35);
	func_891(6, "Gwen", Local_15);
	func_891(6, func_220(3), Local_1023[3 /*8*/]);
}

void func_895()
{
	func_891(6, "ARTHUR", Global_35);
	func_891(6, "Gwen", Local_15);
	func_891(6, "Dead", Local_1208);
	func_891(6, func_220(3), Local_1023[3 /*8*/]);
}

void func_925(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !__LIB_8__::func_614(uParam0->f_3[iVar0 /*13*/].f_2)) && __LIB_0__::func_154(uParam0->f_3[iVar0 /*13*/].f_10)) && !__LIB_4__::func_649(uParam0->f_3[iVar0 /*13*/].f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 0, false))
				{
					if (__LIB_0__::func_237(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if (uParam0->f_3[iVar0 /*13*/].f_11)
				{
					if (__LIB_0__::func_399(iVar1, 0, 0, 0) != uParam0->f_3[iVar0 /*13*/].f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_930(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1641))
	{
		if (!bParam1)
		{
			__LIB_10__::func_394(uParam0);
		}
		else if (bParam2)
		{
			func_1422(uParam0);
		}
		else
		{
			func_1423(uParam0, uParam0->f_1664);
		}
	}
	else
	{
		if (!__LIB_10__::func_278(uParam0, 1048576) && bParam1)
		{
			func_1423(uParam0, uParam0->f_1664);
		}
		else if (!__LIB_10__::func_278(uParam0, 2097152) && bParam2)
		{
			func_1422(uParam0);
		}
		else if ((__LIB_10__::func_278(uParam0, 1048576) && !bParam1) || (__LIB_10__::func_278(uParam0, 2097152) && !bParam2))
		{
			__LIB_10__::func_394(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1648 * FtoV(__LIB_4__::func_634(uParam0->f_1664)) };
			if (!__LIB_0__::func_175(vVar0, VOLUME::_GET_VOLUME_SCALE(uParam0->f_1641), 1056964608 /* Float: 0.5f */, 1) && !__LIB_0__::func_86(vVar0))
			{
				VOLUME::_SET_VOLUME_SCALE(uParam0->f_1641, vVar0);
			}
		}
	}
}

void func_931(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_1454 < 0)
	{
		return;
	}
	if ((uParam0->f_1665 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667)) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_1667))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			bVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_1667, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(bVar1) || __LIB_8__::func_619(bVar2, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1) < __LIB_8__::func_619(bVar1, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1))
				{
					bVar1 = bVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(bVar1))
		{
			return;
		}
		if (!__LIB_10__::func_278(uParam0, 8192))
		{
			if (__LIB_8__::func_619(bVar1, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1) <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f) || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1667) != 5f)
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 5f);
				}
			}
			else if ((!__LIB_1__::func_533(512) || __LIB_4__::func_635(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1667) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 50f);
			}
		}
	}
}

void func_932(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1399[iVar2 /*15*/].f_11 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1399[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1664) && !uParam0->f_1399[iVar2 /*15*/].f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1664, uParam0->f_1399[iVar2 /*15*/].f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_1664, 1);
				uParam0->f_1399[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1453 != 0 || __LIB_10__::func_278(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					}
					uParam0->f_1453 = 0;
					__LIB_10__::func_279(uParam0, 33554432);
				}
				bVar3 = __LIB_0__::func_1(uParam0->f_1399[iVar2 /*15*/].f_10, 131072);
				if (func_386(Global_35, uParam0->f_1399[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_1454 >= 0)
					{
						func_463(uParam0, uParam0->f_1399[iVar2 /*15*/].f_10, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						__LIB_4__::func_636();
					}
					__LIB_10__::func_377(uParam0, iVar2, iVar0, bVar3);
				}
				else if (__LIB_4__::func_637(&(uParam0->f_1399[iVar2 /*15*/])) != 0)
				{
					__LIB_10__::func_377(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_1399[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_1454 >= 0)
				{
					if (((__LIB_8__::func_619(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1) > uParam0->f_782[uParam0->f_1454 /*41*/].f_17 && func_386(uParam0->f_1664, uParam0->f_1399[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_1453 != 0) || __LIB_10__::func_278(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (func_937(Global_35, &(uParam0->f_1453), iVar4, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_1453 = 0;
							__LIB_10__::func_279(uParam0, 33554432);
						}
						else
						{
							__LIB_10__::func_293(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

float func_934(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	fVar16 = 10000f;
	switch (uParam0->f_782[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iParam1 /*41*/].f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iParam1 /*41*/].f_4, true);
			vVar0 = { uParam0->f_782[iParam1 /*41*/].f_4 - uParam0->f_782[iParam1 /*41*/].f_1 };
			if (__LIB_4__::func_788(&vVar3, uParam0->f_782[iParam1 /*41*/].f_1, uParam0->f_782[iParam1 /*41*/].f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= uParam0->f_782[iParam1 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_782[iParam1 /*41*/].f_1.f_2 + uParam0->f_782[iParam1 /*41*/].f_10))
			{
				func_1431(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iParam1 /*41*/].f_1, true) - uParam0->f_782[iParam1 /*41*/].f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_935(var uParam0)
{
	int iVar0;
	func_1432(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_782[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_782[iVar0 /*41*/].f_22)) && __LIB_10__::func_330(uParam0, iVar0)) && !__LIB_0__::func_164(&(uParam0->f_782[iVar0 /*41*/]), 1))
			{
				if (!__LIB_10__::func_331(uParam0, &(uParam0->f_782[iVar0 /*41*/].f_22)))
				{
					__LIB_1__::func_104(&(uParam0->f_1537), uParam0->f_782[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_782[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

bool func_937(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(bParam0);
	if (bVar3)
	{
		bVar2 = PED::GET_MOUNT(bParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(bVar2) || ENTITY::IS_ENTITY_DEAD(bVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(bParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(bParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (__LIB_0__::func_27(*iParam1, 128))
	{
		if (!__LIB_8__::func_640(bParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(bParam0, true, false);
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!__LIB_8__::func_849(bVar2))
			{
				return false;
			}
			if (!__LIB_8__::func_640(bParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (__LIB_8__::func_702(bVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!__LIB_0__::func_27(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(bParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((__LIB_0__::func_27(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(bParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(bParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(bParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(bParam0)));
			__LIB_1__::func_683(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bParam0, false, true);
			*iParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!__LIB_8__::func_849(bVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2))))
		{
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(bParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!__LIB_0__::func_27(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!__LIB_0__::func_27(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (__LIB_0__::func_27(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(bVar2, 0))
		{
			return false;
		}
		if (__LIB_0__::func_27(*iParam1, 2336))
		{
			if (!__LIB_8__::func_849(bVar2))
			{
			}
			if (__LIB_8__::func_850(bVar2, *iParam1))
			{
				__LIB_1__::func_681(iParam1, 32);
				__LIB_1__::func_681(iParam1, 256);
				__LIB_1__::func_681(iParam1, 2048);
				__LIB_1__::func_683(iParam1, 512);
				__LIB_1__::func_683(iParam1, 1024);
				__LIB_1__::func_683(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (__LIB_0__::func_27(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!__LIB_8__::func_849(bVar2))
			{
			}
			if (TASK::IS_PED_WALKING(bVar2))
			{
				return false;
			}
			else
			{
				__LIB_1__::func_681(iParam1, 64);
			}
		}
		if (__LIB_0__::func_27(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(bVar2) || (TASK::IS_PED_RUNNING(bVar2) && __LIB_0__::func_27(iParam2, 1024))) || __LIB_0__::func_27(iParam2, 8)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 1, 0, 0);
			__LIB_1__::func_683(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(bVar2) && __LIB_0__::func_27(iParam2, 4096)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 8, 0, 0);
			__LIB_1__::func_683(iParam1, 2048);
			__LIB_1__::func_683(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2) >= 1.001f) && __LIB_0__::func_27(iParam2, 32)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 3, 0, 0);
			__LIB_1__::func_683(iParam1, 256);
			__LIB_1__::func_683(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(bVar2))
		{
			TASK::TASK_STAND_STILL(bVar2, -1);
			__LIB_1__::func_683(iParam1, 64);
		}
		else if (!__LIB_0__::func_27(iParam2, 1))
		{
			if (!__LIB_0__::func_27(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(bParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (__LIB_8__::func_702(bVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!__LIB_0__::func_27(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2, 0f);
			__LIB_1__::func_683(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(bParam0, 1000);
			__LIB_1__::func_683(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(bParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			__LIB_1__::func_683(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!__LIB_0__::func_27(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(bParam0, 200);
		__LIB_1__::func_683(iParam1, 8);
	}
	return false;
}

void func_963(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_241[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 17)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 4) && uParam0->f_241[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_241[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 64) && __LIB_10__::func_332(uParam0, iParam1, 0))
				{
					func_1449(uParam0, uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_241[iParam1 /*18*/].f_13, uParam0->f_241[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_241[iParam1 /*18*/].f_3 >= 0 && uParam0->f_241[iParam1 /*18*/].f_5 >= 0) && uParam0->f_241[iParam1 /*18*/].f_3 != uParam0->f_241[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_8__::func_851(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_241[iParam1 /*18*/].f_13, uParam0->f_241[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_8__::func_851(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_241[iParam1 /*18*/].f_13, uParam0->f_241[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			func_966(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_965(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_241[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_10__::func_474(uParam0, iParam2, iParam1);
			break;
		case 4:
			func_966(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_1638)) >= IntToFloat((uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					func_1432(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1537), uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_241[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1451 = iParam1;
			break;
	}
}

int func_966(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1454;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_241[iParam1 /*18*/];
		fVar3 = uParam0->f_782[uParam0->f_1454 /*41*/].f_7;
		fVar4 = uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (__LIB_4__::func_576(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!__LIB_10__::func_333(uParam0, iVar2))
				{
					uParam0->f_1451 = iParam1;
				}
				uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_782[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225))) || (!__LIB_0__::func_274(&(uParam0->f_782[iVar2 /*41*/]), 128) && uParam0->f_1665))
			{
				if (uParam0->f_1665)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1667, 0.1f, -1, false);
					if (!__LIB_10__::func_278(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1667, 24, 1000);
					__LIB_10__::func_365(uParam0, 8);
				}
				else
				{
					__LIB_10__::func_293(uParam0, 131072);
					__LIB_10__::func_365(uParam0, 11);
				}
			}
			else if (uParam0->f_1663)
			{
				__LIB_10__::func_365(uParam0, 5);
			}
			else
			{
				__LIB_10__::func_470(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 3f;
			if ((((!__LIB_8__::func_640(Global_35, 716706914) && !__LIB_8__::func_640(Global_35, 242628503)) && __LIB_0__::func_264(&(uParam0->f_1635)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_10__::func_470(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_10__::func_292(uParam0, uParam0->f_1454))
			{
				iVar1 |= 2048;
			}
			if (func_937(Global_35, &(uParam0->f_1452), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_10__::func_470(uParam0);
			}
			if ((!uParam0->f_1663 && !uParam0->f_1665) || bVar0)
			{
				uParam0->f_1452 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_10__::func_470(uParam0);
				}
				else
				{
					__LIB_10__::func_544(uParam0, iParam1, bParam2);
					__LIB_1__::func_148(&(uParam0->f_1635));
					__LIB_10__::func_365(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 1f;
			if (__LIB_8__::func_620(Global_35, 242628503) || bVar0)
			{
				__LIB_10__::func_365(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_782[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1669)))
				{
					__LIB_5__::func_386(uParam0->f_1669, 0);
				}
			}
			__LIB_1__::func_148(&(uParam0->f_1635));
			__LIB_10__::func_365(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_782[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_10__::func_365(uParam0, 10);
				}
				else
				{
					__LIB_10__::func_365(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_10__::func_365(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_10__::func_292(uParam0, uParam0->f_1454))
			{
				iVar1 |= 2048;
			}
			if (func_937(Global_35, &(uParam0->f_1452), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1452 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1667, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_10__::func_365(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_264(&(uParam0->f_1635)) >= 0.75f)
			{
				if (!__LIB_10__::func_278(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
				__LIB_10__::func_293(uParam0, 131072);
				__LIB_10__::func_365(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

bool func_973(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return true;
		}
	}
	if (func_1459(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

void func_982(bool bParam0, int* iParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return;
	}
	func_1464(bParam0, iParam1);
	bVar0 = __LIB_5__::func_439(bParam3 >= 0f, bParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
	if (bVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_6__::func_742(iParam1, uParam2);
		func_1465(iParam1);
		__LIB_3__::func_113(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		__LIB_1__::func_538(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				__LIB_3__::func_58(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (__LIB_18__::func_276(Global_35, *bParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			__LIB_8__::func_906(Global_35, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_5__::func_439(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_8__::func_601(iParam1->f_28, 0)) && __LIB_8__::func_596(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_8__::func_640(iParam1->f_28, 518218985)) && !__LIB_8__::func_640(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_984(int* iParam0, var uParam1, bool bParam2, bool bParam3, char* sParam4, bool bParam5)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(*bParam2))
	{
		return;
	}
	bVar0 = __LIB_5__::func_439(bParam5 >= 0f, bParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam2, true, false)));
	if ((bVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!__LIB_8__::func_640(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *bParam2, 5000, -1f, -1f, -1f);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		func_1469(iParam0, uParam1, bParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *bParam2, "ForcedILO", 0f, 0f, 0f, *bParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

int func_989(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_509(*bParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

void func_1006(int* iParam0, var uParam1, bool bParam2, float fParam3, char* sParam4)
{
	__LIB_2__::func_480(uParam1, 1, 1, 1, 0);
	func_311(bParam2);
	MISC::_0x870708A6E147A9AD(*bParam2, sParam4, fParam3, 0f, 8, 0, 0, 0, 0, -1);
}

int func_1020()
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = __LIB_1__::func_710(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	__LIB_9__::func_470(Global_1946804.f_57[__LIB_0__::func_161(iVar1, 1) /*11*/], 8);
	__LIB_8__::func_904(26, 0, 0, 0, 0);
	return 1;
}

void func_1022(int* iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 20))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 20);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 0);
	}
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	func_1493(iParam0, &iParam1, 0);
	func_311(&iParam1);
	__LIB_6__::func_786(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		__LIB_3__::func_28(iParam0, 0);
	}
	__LIB_3__::func_110(iParam0);
	func_1495(iParam0, iParam1);
	__LIB_6__::func_737(iParam0);
	__LIB_3__::func_97(iParam0);
}

bool func_1028(bool bParam0, int iParam1)
{
	if (bParam0->f_96)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (func_413(3, bParam0, iParam1, bParam0->f_1, bParam0->f_4, 1, 1, 0, 1, 1, 0, 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
				return false;
			}
		}
	}
	else
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(*bParam0))
		{
			return false;
		}
		if (*bParam0 == Local_1318[0 /*97*/])
		{
			__LIB_10__::func_576(Local_1318[0 /*97*/], iLocal_1311);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_1318[0 /*97*/], false);
		}
		else if (*bParam0 == Local_1318[1 /*97*/])
		{
			__LIB_10__::func_576(Local_1318[1 /*97*/], iLocal_1312);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_1318[1 /*97*/], false);
		}
		else if (*bParam0 == Local_1318[2 /*97*/])
		{
			__LIB_10__::func_576(Local_1318[2 /*97*/], iLocal_1313);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_1318[2 /*97*/], false);
		}
		else if (*bParam0 == Local_1812)
		{
			__LIB_10__::func_576(Local_1812, iLocal_1314);
		}
		else if (*bParam0 == Local_1614[0 /*97*/])
		{
			__LIB_10__::func_576(Local_1614[0 /*97*/], iLocal_1315);
		}
		else if (*bParam0 == Local_1614[1 /*97*/])
		{
			__LIB_10__::func_576(Local_1614[1 /*97*/], iLocal_1316);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam0, true);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*bParam0, "LSUND_NPC_group", 0f);
		ENTITY::_0x18FF3110CF47115D(*bParam0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 6, true);
		bParam0->f_96 = 1;
		return true;
	}
	return false;
}

void func_1029(int iParam0)
{
	iLocal_1610[iParam0] = 0;
}

void func_1031(bool bParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

void func_1065(int iParam0)
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
						__LIB_1__::func_825(iVar0, 1, 752097756);
					}
					func_595(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_1__::func_825(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_1__::func_825(-518019409, 1, 752097756);
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
			__LIB_8__::func_368();
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

void func_1140(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_1601(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_1601(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_1167(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_595(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
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

void func_1168(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1610();
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

void func_1170(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0)))
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
			func_1620(iVar1, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1620(iVar3, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1171(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_10__::func_334(uParam0) };
			func_1620(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1186()
{
	__LIB_10__::func_238(&(Local_15.f_6), &(Local_15.f_34));
	func_528(0);
	func_529(1);
}

bool func_1188()
{
	if (func_146(Local_15, 0, &(Local_15.f_6), &(Local_15.f_34), 1, 0) || PED::_0x29FCE825613FEFCA(Local_15, 1))
	{
		if (Local_15.f_34 != 8)
		{
			func_367();
			return true;
		}
	}
	return false;
}

void func_1189()
{
	if (__LIB_8__::func_596(Global_35, Local_15, 10f, 1))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_15, 500, 0, 41, 0);
	}
	__LIB_10__::func_584(Local_15, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	__LIB_10__::func_585(Global_35, Local_15, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	__LIB_10__::func_573(&uLocal_1098, Local_15);
}

bool func_1190(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(bParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam3) };
	return __LIB_1__::func_95(vVar0, vParam0) > __LIB_1__::func_95(vVar0, ENTITY::GET_ENTITY_COORDS(bParam3, true, false));
}

void func_1193(int iParam0)
{
	__LIB_1__::func_681(&iLocal_2076, iParam0);
}

void func_1194()
{
	if (Local_112[3 /*130*/].f_19[8 /*5*/])
	{
		func_1195(3, 14, 0);
		func_536(3, "Bool", 0);
		Local_112[3 /*130*/].f_19[8 /*5*/] = 0;
	}
	else if (Local_112[3 /*130*/].f_19[9 /*5*/])
	{
		func_1195(3, 14, 0);
		func_536(3, "Bool", 0);
		Local_112[3 /*130*/].f_19[9 /*5*/] = 0;
	}
	else if (Local_112[3 /*130*/].f_19[10 /*5*/])
	{
		func_1195(3, 14, 0);
		func_536(3, "Bool", 0);
		Local_112[3 /*130*/].f_19[10 /*5*/] = 0;
	}
}

void func_1195(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	if (iParam0 == 0)
	{
		sVar0 = "bloop";
	}
	else if (iParam0 == 3)
	{
		sVar0 = "Bool";
	}
	else if (iParam0 == 6)
	{
		switch (iParam1)
		{
			case 29:
			case 30:
			case 31:
				sVar0 = "Bool_Idle";
				break;
			case 20:
			case 21:
			case 22:
			case 23:
				sVar0 = "Bool_Base";
				break;
			case 24:
				sVar0 = "Bool_React_BL";
				break;
			case 25:
				sVar0 = "Bool_React_BR";
				break;
			case 28:
				sVar0 = "Bool_React_F";
				break;
			case 27:
				sVar0 = "Bool_React_L";
				break;
			case 26:
				sVar0 = "Bool_React_R";
				break;
		}
	}
	if (iLocal_1204 != iParam1)
	{
		if (Local_112[iParam0 /*130*/].f_2[0] != iParam2)
		{
			Local_112[iParam0 /*130*/].f_2[0] = iParam2;
			func_536(iParam0, sVar0, Local_112[iParam0 /*130*/].f_2[0]);
		}
		iLocal_1204 = iParam1;
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[iParam0 /*130*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[iParam0 /*130*/], false))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[iParam0 /*130*/], sLocal_1130[iLocal_1204]))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_112[iParam0 /*130*/], sLocal_1130[iLocal_1204], true);
					if (iParam1 == 23)
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_1023[3 /*8*/], true);
					}
				}
			}
		}
	}
}

void func_1196(char[4] cParam0)
{
	if (!__LIB_6__::func_903("LS_UND_TOGRAVE") && iLocal_2098 != 3)
	{
		if (__LIB_0__::func_264(&uLocal_2099) > 15f || iLocal_2098 == 0)
		{
			if ((iLocal_2121 == 5 && !func_385(524288)) && !func_63(32))
			{
				__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_TOGRAVE", 0);
				iLocal_2098++;
				__LIB_1__::func_148(&uLocal_2099);
			}
		}
	}
}

void func_1197(char[4] cParam0)
{
	if (Local_112[4 /*130*/].f_19[11 /*5*/] || func_213(524288))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(Local_15) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15, Global_35, 17))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[4 /*130*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[4 /*130*/]);
			}
			if (!func_213(8192))
			{
				if (!__LIB_0__::func_898(-1838352012))
				{
					__LIB_1__::func_408(-1838352012, 1, 0);
				}
				else if (func_219())
				{
					if (func_176(6, 0))
					{
						iLocal_1204 = 20;
						func_536(6, "Bool_Base", 0);
						func_221();
						ANIMSCENE::START_ANIM_SCENE(Local_112[6 /*130*/]);
						PED::APPLY_PED_DAMAGE_PACK(Local_15, "CC_DUSTY_full_Body_A", 0f, 1f);
						iLocal_2094 = 0;
						func_214(8192);
						if (func_213(524288))
						{
							func_384(524288);
						}
						Local_112[4 /*130*/].f_19[11 /*5*/] = 0;
					}
				}
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[6 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[6 /*130*/], false))
		{
			if (func_213(4194304))
			{
				if (!func_213(16384))
				{
					if (__LIB_8__::func_864(Local_15, Global_36, 15f, 1, 1))
					{
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[23]))
						{
							if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[23]))
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[6 /*130*/], sLocal_1130[23]);
							}
						}
						else
						{
							__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_TAKE", 0);
							func_1195(6, 23, 1);
							__LIB_2__::func_602(&(Local_2264[0 /*17*/]), "CTX_UND", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_214(16384);
						}
					}
				}
			}
			else
			{
				func_1644(cParam0);
				return;
			}
			if ((func_213(16384) && bLocal_2052) && !bLocal_2108)
			{
				iLocal_2077 = func_195(&Local_15, &(Local_15.f_35), 8f, &Local_2264, 0.1f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (!bLocal_2051)
				{
					__LIB_2__::func_411(&(Local_2264[0 /*17*/]), 0, 0);
					bLocal_2051 = true;
				}
			}
			if (Local_112[6 /*130*/].f_19[14 /*5*/])
			{
				if (!func_213(131072))
				{
					__LIB_1__::func_148(&uLocal_2091);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1023[3 /*8*/], Local_15, PED::GET_PED_BONE_INDEX(Local_15, 16732), 0f, -0.04f, 0f, 90f, 0f, 0f, true, false, false, false, 2, true, false, false);
					TASK::CLEAR_PED_TASKS(Local_15, true, false);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15, Global_35, -1, -1f, -1f, -1f);
					TASK::TASK_LOOK_AT_ENTITY(Local_15, Global_35, -1, 32768, 41, 0);
					__LIB_1__::func_148(&uLocal_2091);
					__LIB_3__::func_319(Local_112[6 /*130*/]);
					Local_112[6 /*130*/].f_16 = 0;
					Local_112[6 /*130*/].f_17 = sLocal_1130[31];
					func_214(131072);
				}
				if (Local_112[6 /*130*/].f_19[20 /*5*/])
				{
					func_1195(6, 29, 0);
					func_536(6, "Bool_Idle", 0);
					Local_112[6 /*130*/].f_19[20 /*5*/] = 0;
				}
				if (func_213(131072) && __LIB_0__::func_264(&uLocal_2091) > 15f)
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[30]))
					{
						if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[30]))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[6 /*130*/], sLocal_1130[30]);
						}
					}
					else
					{
						func_1195(6, 30, 1);
						__LIB_1__::func_148(&uLocal_2091);
						__LIB_2__::func_113(&uLocal_2091);
					}
				}
			}
		}
	}
	if (!func_213(32768))
	{
		if (func_213(131072))
		{
			if (__LIB_0__::func_264(&uLocal_2091) > 1.5f)
			{
				func_214(32768);
				__LIB_1__::func_148(&uLocal_2091);
			}
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[5 /*130*/]))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[5 /*130*/], false))
		{
			if (!func_63(131072))
			{
				if (__LIB_0__::func_264(&uLocal_2091) > 13f)
				{
					if (!func_63(536870912))
					{
						if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_QUICK", 0))
						{
							func_66(536870912);
							__LIB_1__::func_148(&uLocal_2091);
						}
					}
					else if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_QUICKR", 0))
					{
						__LIB_1__::func_148(&uLocal_2091);
					}
				}
			}
		}
	}
}

void func_1198()
{
	func_529(8);
}

void func_1199(char[4] cParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[6 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_112[6 /*130*/], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_112[6 /*130*/], ENTITY::GET_ENTITY_COORDS(Local_15, false, false), ENTITY::GET_ENTITY_ROTATION(Local_15, 2), 2);
			ANIMSCENE::START_ANIM_SCENE(Local_112[6 /*130*/]);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15, Global_35, -1, -1f, -1f, -1f);
		}
	}
	func_529(9);
}

var func_1200(int iParam0, int iParam1)
{
	var uVar0;
	if (Local_112[iParam0 /*130*/].f_19[iParam1 /*5*/].f_3 == -1)
	{
		if (iParam0 == 2)
		{
			uVar0 = sLocal_1185[iLocal_1206];
		}
		else if (((iParam0 == 3 || iParam0 == 4) || iParam0 == 6) || iParam0 == 0)
		{
			uVar0 = sLocal_1130[iLocal_1204];
		}
	}
	else if (iParam0 == 2)
	{
		uVar0 = sLocal_1185[Local_112[iParam0 /*130*/].f_19[iParam1 /*5*/].f_3];
	}
	else if (((iParam0 == 3 || iParam0 == 4) || iParam0 == 6) || iParam0 == 0)
	{
		uVar0 = sLocal_1130[Local_112[iParam0 /*130*/].f_19[iParam1 /*5*/].f_3];
	}
	return uVar0;
}

bool func_1201(int iParam0, int iParam1)
{
	if (iParam0 == 2)
	{
		if (__LIB_8__::func_601(Local_1318[0 /*97*/], 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1318[0 /*97*/], cLocal_1125, Local_112[iParam0 /*130*/].f_19[iParam1 /*5*/].f_4, 1))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 0)
	{
		if (__LIB_8__::func_601(Local_15, 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_15, cLocal_1123, Local_112[iParam0 /*130*/].f_19[iParam1 /*5*/].f_4, 1))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 3)
	{
		if (__LIB_8__::func_601(Local_15, 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_15, cLocal_1126, Local_112[iParam0 /*130*/].f_19[iParam1 /*5*/].f_4, 1))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 4)
	{
		if (__LIB_8__::func_601(Local_15, 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_15, cLocal_1127, Local_112[iParam0 /*130*/].f_19[iParam1 /*5*/].f_4, 1))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 6)
	{
		if (__LIB_8__::func_601(Local_15, 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_15, cLocal_1128, Local_112[iParam0 /*130*/].f_19[iParam1 /*5*/].f_4, 1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1202(char[4] cParam0)
{
	int iVar0;
	iVar0 = -1;
	if (!func_213(256) && !func_213(512))
	{
		func_1646(0);
		func_1646(1);
	}
	if (__LIB_0__::func_27(iLocal_2117, 2))
	{
		if (!func_213(256))
		{
			func_1647(cParam0, 1);
		}
	}
	else if (__LIB_0__::func_27(iLocal_2117, 4))
	{
		if (!func_213(512))
		{
			func_1648(cParam0, 1);
		}
	}
	else if (__LIB_0__::func_27(iLocal_2117, 1))
	{
		if (!func_213(33554432))
		{
			if (func_1212(func_1649(), 1))
			{
				__LIB_8__::func_111("LS_UND_HNG_MOU2", 0);
				__LIB_10__::func_364(&(cParam0->f_2106), "LSUND_IG_REASON", 0);
				func_214(33554432);
				if (__LIB_0__::func_27(iLocal_2117, 1))
				{
					__LIB_1__::func_681(&iLocal_2117, 1);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_2117, 2) && !__LIB_0__::func_27(iLocal_2117, 4))
	{
		if (func_213(128) && !func_213(33554432))
		{
			if ((((!__LIB_0__::func_27(iLocal_2117, 1) && !__LIB_0__::func_27(iLocal_2117, 2)) && !__LIB_0__::func_27(iLocal_2117, 4)) && !func_213(256)) && !func_213(512))
			{
				iVar0 = func_1205(&(Local_1318[1 /*97*/]), &(Local_1318[1 /*97*/].f_35), 8f, &Local_2124, 0.1f, 3, 0, 0, 2, 0, 2, -1082130432 /* Float: -1f */);
			}
			if (((iVar0 == 1 || func_1650(0)) || func_1650(1)) || func_1651())
			{
				if (!__LIB_0__::func_27(iLocal_2117, 2))
				{
					func_1652();
					__LIB_1__::func_683(&iLocal_2117, 2);
					func_1653(1);
					return;
				}
			}
		}
		else
		{
			if ((((((!func_213(33554432) && !__LIB_0__::func_27(iLocal_2117, 1)) && !__LIB_0__::func_27(iLocal_2117, 2)) && !__LIB_0__::func_27(iLocal_2117, 4)) && !func_213(256)) && !func_213(512)) && !func_213(128))
			{
				iVar0 = func_1205(&(Local_1318[1 /*97*/]), &(Local_1318[1 /*97*/].f_35), 8f, &Local_2124, 0.1f, 3, 0, 0, 2, 0, 2, -1082130432 /* Float: -1f */);
			}
			if (func_213(33554432))
			{
				if (func_213(128))
				{
					__LIB_2__::func_411(&(Local_2124[1 /*17*/]), 1, 0);
					__LIB_6__::func_786(&(Local_1318[1 /*97*/].f_35), 0);
					func_384(33554432);
				}
			}
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_27(iLocal_2117, 1))
				{
					func_1652();
					__LIB_1__::func_683(&iLocal_2117, 1);
					__LIB_0__::func_37(&uLocal_1957);
					return;
				}
			}
			else if (((iVar0 == 1 || func_1650(0)) || func_1650(1)) || func_1651())
			{
				if (!__LIB_0__::func_27(iLocal_2117, 2))
				{
					__LIB_8__::func_111("LSUND_IG_REASON", 0);
					func_1652();
					__LIB_1__::func_683(&iLocal_2117, 2);
					func_1653(1);
					return;
				}
			}
		}
	}
}

void func_1203(char[4] cParam0)
{
	int iVar0;
	iVar0 = -1;
	if ((!func_213(16) && !func_213(32)) && !func_213(64))
	{
		func_1646(2);
	}
	if (__LIB_0__::func_27(iLocal_2117, 16))
	{
		if (!func_213(32))
		{
			func_1647(cParam0, 2);
		}
	}
	else if (__LIB_0__::func_27(iLocal_2117, 32))
	{
		if (!func_213(64))
		{
			func_1648(cParam0, 2);
		}
	}
	else if (__LIB_0__::func_27(iLocal_2117, 8))
	{
		func_1654(cParam0, 2);
	}
	if (((((!__LIB_0__::func_27(iLocal_2117, 8) && !__LIB_0__::func_27(iLocal_2117, 16)) && !__LIB_0__::func_27(iLocal_2117, 32)) && !func_213(16)) && !func_213(32)) && !func_213(64))
	{
		iVar0 = func_1205(&(Local_1318[2 /*97*/]), &(Local_1318[2 /*97*/].f_35), 8f, &Local_2159, 0.1f, 3, 0, 0, 2, 0, 2, -1082130432 /* Float: -1f */);
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_27(iLocal_2117, 8))
			{
				func_1653(2);
				func_1655();
				__LIB_1__::func_683(&iLocal_2117, 8);
				return;
			}
		}
		else if (iVar0 == 1 || func_1650(2))
		{
			if (!__LIB_0__::func_27(iLocal_2117, 16))
			{
				func_1655();
				func_1653(2);
				__LIB_1__::func_683(&iLocal_2117, 16);
				return;
			}
		}
	}
}

bool func_1204(int iParam0)
{
	if (func_146(Local_1318[iParam0 /*97*/], 0, &(Local_1318[iParam0 /*97*/].f_6), &(Local_1318[iParam0 /*97*/].f_34), 1, 0) || PED::_0x29FCE825613FEFCA(Local_1318[iParam0 /*97*/], 1))
	{
		return true;
	}
	return false;
}

int func_1205(bool bParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	return func_195(bParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, __LIB_2__::func_340(iParam8, 0, 0), iParam9, 0, iParam10, bParam11);
}

void func_1206(int iParam0, bool bParam1)
{
	TASK::TASK_CLEAR_LOOK_AT(Local_1318[iParam0 /*97*/]);
	PED::SET_PED_CAN_HEAD_IK(Local_1318[iParam0 /*97*/], true);
	TASK::TASK_LOOK_AT_ENTITY(Local_1318[iParam0 /*97*/], Global_35, 8000, 16, 51, 0);
	if (!bParam1)
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_1318[iParam0 /*97*/]);
		PED::SET_PED_CAN_HEAD_IK(Local_1318[iParam0 /*97*/], false);
	}
}

void func_1207(int iParam0)
{
	func_1206(iParam0, 0);
	if (iParam0 == 2)
	{
		func_537(Local_1318[iParam0 /*97*/], sLocal_1114[4], 3116);
	}
	else if (func_213(16777216))
	{
		func_537(Local_1318[iParam0 /*97*/], sLocal_1114[6], 3116);
	}
	else
	{
		func_537(Local_1318[iParam0 /*97*/], sLocal_1114[5], 3116);
	}
	if (func_213(4))
	{
		func_384(4);
	}
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_1318[iParam0 /*97*/], true);
	func_1657(iParam0, 2);
}

void func_1208(int iParam0)
{
	func_1206(iParam0, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_1318[iParam0 /*97*/], 1024, true);
	if (iParam0 == 2)
	{
		if (func_213(64))
		{
			func_537(Local_1318[iParam0 /*97*/], sLocal_1114[4], 3116);
		}
		else
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_1318[iParam0 /*97*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	else if (func_213(16777216))
	{
		func_537(Local_1318[iParam0 /*97*/], sLocal_1114[6], 3116);
	}
	else
	{
		func_537(Local_1318[iParam0 /*97*/], sLocal_1114[5], 3108);
	}
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_1318[iParam0 /*97*/], true);
	func_1657(iParam0, 4);
}

void func_1209(int iParam0)
{
	func_537(Local_1318[iParam0 /*97*/], sLocal_1114[4], 3108);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_1318[iParam0 /*97*/], true);
	func_1657(iParam0, 3);
}

void func_1211()
{
	if ((__LIB_6__::func_903("LSUND_IG_REASON") || __LIB_6__::func_903("LSUND_IG_THREAW")) || __LIB_6__::func_903("LSUND_IG_THREAT"))
	{
		func_1206(0, 1);
		func_1206(1, 1);
		Local_1978.f_3 = Local_1318[0 /*97*/];
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_1978);
	}
	if (Local_112[2 /*130*/].f_19[0 /*5*/])
	{
		func_1206(0, 0);
		func_1206(1, 0);
		func_1212(0, 0);
		func_536(2, "Bool", 0);
		Local_112[2 /*130*/].f_19[0 /*5*/] = 0;
	}
	else if (Local_112[2 /*130*/].f_19[1 /*5*/])
	{
		func_1206(0, 0);
		func_1206(1, 0);
		func_1212(0, 0);
		func_536(2, "Bool", 0);
		Local_112[2 /*130*/].f_19[1 /*5*/] = 0;
	}
	else if (Local_112[2 /*130*/].f_19[2 /*5*/])
	{
		func_1206(0, 0);
		func_1206(1, 0);
		func_1212(0, 0);
		func_536(2, "Bool", 0);
		Local_112[2 /*130*/].f_19[2 /*5*/] = 0;
	}
	else if (Local_112[2 /*130*/].f_19[3 /*5*/])
	{
		func_1206(0, 0);
		func_1206(1, 0);
		func_1212(0, 0);
		func_536(2, "Bool", 0);
		Local_112[2 /*130*/].f_19[3 /*5*/] = 0;
	}
	else if (Local_112[2 /*130*/].f_19[4 /*5*/])
	{
		func_1206(0, 0);
		func_1206(1, 0);
		func_1212(0, 0);
		func_536(2, "Bool", 0);
		Local_112[2 /*130*/].f_19[4 /*5*/] = 0;
	}
	else if (Local_112[2 /*130*/].f_19[7 /*5*/])
	{
		func_1206(0, 0);
		func_1206(1, 0);
		func_214(128);
		func_1212(0, 0);
		func_536(2, "Bool", 0);
		Local_112[2 /*130*/].f_19[7 /*5*/] = 0;
	}
	else if (Local_112[2 /*130*/].f_19[6 /*5*/])
	{
		func_1206(0, 0);
		func_1206(1, 0);
		func_214(128);
		func_1212(0, 0);
		func_536(2, "Bool", 0);
		Local_112[2 /*130*/].f_19[6 /*5*/] = 0;
	}
	else if (Local_112[2 /*130*/].f_19[5 /*5*/])
	{
		func_1206(0, 0);
		func_1206(1, 0);
		func_214(128);
		func_1212(0, 0);
		func_536(2, "Bool", 0);
		Local_112[2 /*130*/].f_19[5 /*5*/] = 0;
	}
}

bool func_1212(int iParam0, int iParam1)
{
	if (iLocal_1206 != iParam0)
	{
		iLocal_1206 = iParam0;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[2 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[2 /*130*/], false))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[2 /*130*/], sLocal_1185[iLocal_1206]))
			{
				if (Local_112[2 /*130*/].f_2[0] != iParam1)
				{
					Local_112[2 /*130*/].f_2[0] = iParam1;
					func_536(2, "Bool", Local_112[2 /*130*/].f_2[0]);
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_112[2 /*130*/], sLocal_1185[iLocal_1206], true);
				__LIB_1__::func_148(&uLocal_2079);
				return true;
			}
			else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[2 /*130*/], sLocal_1185[iLocal_1206]))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[2 /*130*/], sLocal_1185[iLocal_1206]);
			}
		}
	}
	return false;
}

bool func_1213(int iParam0)
{
	if (!func_213(1073741824 /* Float: 2f */))
	{
		return false;
	}
	else if (func_213(512))
	{
		if (__LIB_8__::func_864(Local_1318[iParam0 /*97*/], Local_1318[1 /*97*/].f_1, 10f, 1, 1) || __LIB_8__::func_864(Local_1318[iParam0 /*97*/], Local_1318[2 /*97*/].f_1, 10f, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_1217(var uParam0, bool bParam1, int iParam2, char* sParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		*uParam0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, bParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam3);
		}
	}
}

void func_1218()
{
	Local_1978.f_3 = Local_15;
	Local_1978.f_4 = 21030;
	Local_1978.f_7 = 500;
	Local_1978.f_8 = 4;
	Local_1978.f_13 = 2;
	Local_1978.f_17 = 4;
	Local_1978.f_18 = 4;
	Local_1978.f_19 = 4;
	Local_1978.f_21 = 4;
	PED::SET_PED_CONFIG_FLAG(Local_15, 26, true);
	func_529(2);
}

void func_1219()
{
	struct<27> Var0;
	struct<27> Var38;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var0.f_26 = -1082130432;
	Var38.f_4 = 1065353216;
	Var38.f_5 = 1065353216;
	Var38.f_9 = 1065353216;
	Var38.f_10 = 1065353216;
	Var38.f_14 = 1065353216;
	Var38.f_15 = 1065353216;
	Var38.f_17 = 1040187392;
	Var38.f_18 = 1040187392;
	Var38.f_19 = -1;
	Var38.f_26 = -1082130432;
	__LIB_3__::func_895(&Var0);
	__LIB_3__::func_895(&Var38);
	__LIB_0__::func_202(Global_35, 0);
	__LIB_10__::func_581(Local_15, Global_35, &Var38, 0f, 0f, 0f, sLocal_1114[0], 25614, 1, 3.5f, 1f, 1073069561, 1.1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	func_1661(Global_35, Local_15, &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, 1.2f, -1082130432 /* Float: -1f */, 1);
	__LIB_1__::func_731(&uLocal_1098);
}

void func_1222(int iParam0)
{
	func_1217(&(Local_1318[iParam0 /*97*/].f_5), Local_1318[iParam0 /*97*/], joaat("BLIP_STYLE_COMPANION"), "BLIP_UND_MOURN");
	if (MAP::DOES_BLIP_EXIST(Local_1318[iParam0 /*97*/].f_5))
	{
		MAP::_BLIP_SET_MODIFIER(Local_1318[iParam0 /*97*/].f_5, -546708623);
	}
}

void func_1224(int iParam0)
{
	iLocal_1909 = iParam0;
}

void func_1225(char[4] cParam0)
{
	int iVar0;
	iVar0 = -1;
	if (func_1664(cParam0))
	{
		func_1665();
		return;
	}
	if (__LIB_8__::func_596(Global_35, Local_1812, 20f, 1))
	{
		if (!func_63(1))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_324("OBJ_UND_STOPWOMAN");
			func_1217(&(Local_1812.f_5), Local_1812, joaat("BLIP_STYLE_COMPANION"), "BLIP_UND_MOURN");
			if (MAP::DOES_BLIP_EXIST(Local_1812.f_5))
			{
				MAP::_BLIP_SET_MODIFIER(Local_1812.f_5, -546708623);
			}
			__LIB_0__::func_325(&iLocal_2060);
			func_66(1);
		}
	}
	if (!func_63(8))
	{
		if (__LIB_8__::func_596(Local_1812, Global_35, 6f, 1) && PED::_0x7F9B9791D4CB71F6(Local_1812, Global_35, 0, 0) == 1)
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WOM_SPO", 0))
			{
				func_1666(0);
				func_66(8);
			}
		}
	}
	iVar0 = func_1205(&Local_1812, &(Local_1812.f_35), 30f, &Local_2194, 0.1f, 3, 0, 0, iLocal_2283, 0, 2, -1082130432 /* Float: -1f */);
	func_1667();
	if (iVar0 == 0)
	{
		func_66(64);
		func_1668(cParam0);
	}
	else if (iVar0 == 1)
	{
		func_66(128);
		func_1668(cParam0);
	}
	if (iLocal_2121 != 14 && (__LIB_8__::func_596(Local_1812, Local_15, 20f, 1) && PED::_0x7F9B9791D4CB71F6(Local_1812, Local_15, 0, 0) == 1))
	{
		func_1669(cParam0);
	}
	else if (__LIB_8__::func_596(Local_1812, Global_35, 2f, 1) && PED::_0x7F9B9791D4CB71F6(Local_1812, Global_35, 0, 0) == 1)
	{
		if (__LIB_10__::func_866(Global_35, Local_1812, sLocal_1114[7], 1112014848 /* Float: 50f */))
		{
			if (__LIB_0__::func_75(&uLocal_1945))
			{
				if (__LIB_0__::func_264(&uLocal_1945) > 5f)
				{
					func_1668(cParam0);
				}
			}
			else
			{
				func_1668(cParam0);
			}
		}
	}
}

void func_1226(char[4] cParam0)
{
	int iVar0;
	iVar0 = -1;
	if (func_1664(cParam0))
	{
		func_1665();
		return;
	}
	if (iLocal_2121 != 14 && (__LIB_8__::func_596(Local_1812, Local_15, 20f, 1) && PED::_0x7F9B9791D4CB71F6(Local_1812, Local_15, 0, 0) == 1))
	{
		func_1665();
		func_1669(cParam0);
		return;
	}
	if (!func_63(2) && !func_63(4))
	{
		iVar0 = func_1205(&Local_1812, &(Local_1812.f_35), 30f, &Local_2194, 0.1f, 3, 0, 0, iLocal_2283, 0, 2, -1082130432 /* Float: -1f */);
		func_1667();
		if (iVar0 == 0 || func_63(64))
		{
			if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 6)
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WOM_REAN", 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1812, 8000, 32768, 41, 0);
					func_1665();
					func_66(2);
				}
			}
			else if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WOM_REA", 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1812, 8000, 32768, 41, 0);
				func_1665();
				func_66(2);
			}
		}
		else if (iVar0 == 1 || func_63(128))
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WOM_TRT", 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1812, 8000, 32768, 41, 0);
				func_1665();
				func_66(4);
			}
		}
		else if (!func_63(2048))
		{
			if (__LIB_0__::func_264(&uLocal_1945) > 4f)
			{
				if (iLocal_2102 < 3)
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WOM_BLK", 0))
					{
						iLocal_2102++;
					}
				}
				__LIB_1__::func_148(&uLocal_1945);
				func_66(2048);
			}
		}
		else if ((__LIB_0__::func_264(&uLocal_1945) > 5f || !__LIB_8__::func_596(Global_35, Local_1812, 2f, 1)) || !__LIB_10__::func_866(Global_35, Local_1812, sLocal_1114[7], 1112014848 /* Float: 50f */))
		{
			func_1193(2048);
			__LIB_1__::func_148(&uLocal_1945);
			func_1671(1);
		}
	}
	else if (func_63(2))
	{
		if (!__LIB_6__::func_903("LS_UND_WOM_REA") && !__LIB_6__::func_903("LS_UND_WOM_REAN"))
		{
			func_1672();
		}
	}
	else if (__LIB_6__::func_903("LS_UND_WOM_TRT"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_WOM_TRT") > 0)
		{
			func_1673();
		}
	}
}

void func_1227(char[4] cParam0)
{
	if (func_1664(cParam0))
	{
		return;
	}
}

void func_1228(char[4] cParam0)
{
	if (!__LIB_6__::func_904())
	{
		if (!func_385(134217728))
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_LEAVE", 0))
			{
				func_209(134217728);
			}
		}
	}
	if (!__LIB_8__::func_640(Local_1812, 242628503))
	{
		if (PED::_0x268B3AEBF032A88D(Local_1812))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1812, false);
		}
	}
}

void func_1229(char[4] cParam0)
{
	if (func_1664(cParam0))
	{
		return;
	}
	if (!__LIB_8__::func_640(Local_1812, 242628503))
	{
		if (PED::_0x268B3AEBF032A88D(Local_1812))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1812, false);
		}
	}
}

void func_1230()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_1318[2 /*97*/]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1318[2 /*97*/], 0))
		{
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1318[2 /*97*/]) > 21)
			{
				func_1671(0);
			}
		}
		else
		{
			func_1671(0);
		}
	}
	else
	{
		func_1671(0);
	}
}

void func_1232(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1614[iVar0 /*97*/]))
		{
			if (bParam0)
			{
				PED::SET_PED_CONFIG_FLAG(Local_1614[iVar0 /*97*/], 6, false);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(Local_1614[iVar0 /*97*/], 6, true);
			}
		}
		iVar0++;
	}
}

bool func_1233()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_1028(&(Local_1614[iVar0 /*97*/]), iLocal_1310))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 2)
	{
		return true;
	}
	return false;
}

void func_1236(int iParam0)
{
	__LIB_2__::func_602(&(Local_2229[0 /*17*/]), "MCXT_REASON", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_2229[1 /*17*/]), "MCXT_THREAT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_2229[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_2229[1 /*17*/]), 0, 0);
	iLocal_2285 = 3;
	func_1674(iParam0, 6);
}

void func_1237(int iParam0, char[4] cParam1)
{
	int iVar0;
	iVar0 = -1;
	if (func_1675(iParam0, cParam1))
	{
		return;
	}
	if (__LIB_8__::func_596(Global_35, Local_1614[iParam0 /*97*/], 20f, 1))
	{
		if (!func_385(4194304))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_324("OBJ_UND_STOPMEN");
			func_1676();
			func_209(4194304);
		}
	}
	else if (__LIB_8__::func_596(Global_35, Local_1614[iParam0 /*97*/], 30f, 1))
	{
		if (!func_385(65536))
		{
			if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_CON", 0))
			{
				func_209(65536);
			}
		}
	}
	if (!bLocal_2114)
	{
		iVar0 = func_1205(&(Local_1614[0 /*97*/]), &(Local_1614[0 /*97*/].f_35), 30f, &Local_2229, 0.1f, 3, 0, 0, iLocal_2285, 0, 2, -1082130432 /* Float: -1f */);
		func_1677();
	}
	if (iVar0 == 0)
	{
		func_209(8388608);
		func_1678(0, cParam1);
	}
	else if (iVar0 == 1)
	{
		func_209(16777216);
		func_1678(0, cParam1);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1614[iParam0 /*97*/], 0))
	{
		if (iParam0 == 0)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1614[iParam0 /*97*/], 0.8f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	if ((iLocal_2121 != 14 && (__LIB_8__::func_596(Local_1614[iParam0 /*97*/], Local_15, 20f, 1) && PED::_0x7F9B9791D4CB71F6(Local_1614[iParam0 /*97*/], Local_15, 0, 0) == 1)) || iLocal_1809[func_1245(iParam0)] == 3)
	{
		func_1679(iParam0, cParam1);
	}
	else if ((__LIB_8__::func_596(Local_1614[iParam0 /*97*/], Global_35, 6f, 1) && PED::_0x7F9B9791D4CB71F6(Local_1614[iParam0 /*97*/], Global_35, 0, 0) == 1) || iLocal_1809[func_1245(iParam0)] == 1)
	{
		func_1678(iParam0, cParam1);
	}
}

void func_1238(int iParam0, char[4] cParam1)
{
	int iVar0;
	iVar0 = -1;
	if (func_1675(iParam0, cParam1))
	{
		func_1680();
		return;
	}
	if ((iLocal_2121 != 14 && (__LIB_8__::func_596(Local_1614[iParam0 /*97*/], Local_15, 20f, 1) && PED::_0x7F9B9791D4CB71F6(Local_1614[iParam0 /*97*/], Local_15, 0, 0) == 1)) || iLocal_1809[func_1245(iParam0)] == 3)
	{
		func_1680();
		func_1679(iParam0, cParam1);
		return;
	}
	if (iParam0 == 0)
	{
		if (__LIB_8__::func_640(Local_1614[iParam0 /*97*/], 2028736502) && __LIB_8__::func_596(Local_1614[iParam0 /*97*/], Global_35, 2.5f, 1))
		{
			func_1681(iParam0, 1);
		}
	}
	if (iParam0 == 1)
	{
		if (__LIB_8__::func_640(Local_1614[iParam0 /*97*/], 2028736502) && __LIB_8__::func_596(Local_1614[iParam0 /*97*/], Global_35, 4f, 1))
		{
			func_1681(iParam0, 1);
		}
	}
	if (iLocal_1809[func_1245(iParam0)] == 7)
	{
		func_1680();
		func_1682(iParam0, cParam1);
	}
	if (!func_385(2048))
	{
		if (!bLocal_2114)
		{
			iVar0 = func_1205(&(Local_1614[0 /*97*/]), &(Local_1614[0 /*97*/].f_35), 30f, &Local_2229, 0.1f, 3, 0, 0, iLocal_2285, 0, 2, -1082130432 /* Float: -1f */);
			func_1677();
		}
		if (iVar0 == 0 || func_385(8388608))
		{
			__LIB_8__::func_111("LS_UND_BRW1_ENC", 0);
			if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_REA", 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1614[0 /*97*/], 8000, 32768, 41, 0);
				func_1683();
				func_209(2048);
				func_214(67108864);
			}
		}
		else if (iVar0 == 1 || func_385(16777216))
		{
			__LIB_8__::func_111("LS_UND_BRW1_ENC", 0);
			if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_TRT", 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1614[0 /*97*/], 8000, 32768, 41, 0);
				func_1683();
				func_209(2048);
			}
		}
		else if (!__LIB_6__::func_903("LS_UND_BRW1_ENC") && !__LIB_0__::func_75(&uLocal_1942))
		{
			__LIB_1__::func_283(&uLocal_1942, 0);
		}
		else if (__LIB_0__::func_264(&uLocal_1942) > 12f || !__LIB_8__::func_596(Global_35, Local_1614[0 /*97*/], 12f, 1))
		{
			__LIB_3__::func_732(0);
			if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_TRT", 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1614[0 /*97*/], 8000, 32768, 41, 0);
				func_1683();
				func_209(2048);
			}
		}
	}
	else if (func_213(67108864))
	{
		if (!__LIB_6__::func_903("LS_UND_BRW_REA"))
		{
			if (!func_213(134217728))
			{
				__LIB_2__::func_411(&(Local_2229[1 /*17*/]), 1, 0);
				if (__LIB_8__::func_596(Local_1614[0 /*97*/], Global_35, 12f, 1))
				{
					iLocal_2285 = 2;
				}
				else
				{
					iLocal_2285 = 3;
				}
				__LIB_6__::func_786(&(Local_1614[0 /*97*/].f_35), 0);
				func_214(134217728);
			}
			else
			{
				if (!bLocal_2114)
				{
					iVar0 = func_1205(&(Local_1614[0 /*97*/]), &(Local_1614[0 /*97*/].f_35), 30f, &Local_2229, 0.1f, 3, 0, 0, iLocal_2285, 0, 2, -1082130432 /* Float: -1f */);
					func_1677();
				}
				if (iVar0 == 1)
				{
					if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_TRT", 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1614[0 /*97*/], 8000, 32768, 41, 0);
						func_1683();
						func_384(67108864);
					}
				}
				else if (!__LIB_6__::func_903("LS_UND_BRW1_ENC") && !__LIB_0__::func_75(&uLocal_1942))
				{
					__LIB_1__::func_283(&uLocal_1942, 0);
				}
				else if (__LIB_0__::func_264(&uLocal_1942) > 20f || !__LIB_8__::func_596(Global_35, Local_1614[0 /*97*/], 12f, 1))
				{
					__LIB_3__::func_732(0);
					if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_TRT", 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1614[0 /*97*/], 8000, 32768, 41, 0);
						func_1683();
						func_384(67108864);
						func_209(2048);
					}
				}
			}
		}
		else if (!__LIB_8__::func_596(Global_35, Local_1614[0 /*97*/], 12f, 1))
		{
			__LIB_3__::func_732(0);
			if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_TRT", 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1614[0 /*97*/], 8000, 32768, 41, 0);
				func_1683();
				func_384(67108864);
				func_209(2048);
			}
		}
	}
	else
	{
		func_1205(&(Local_1614[0 /*97*/]), &(Local_1614[0 /*97*/].f_35), 30f, &Local_2229, 0.1f, 3, 0, 0, iLocal_2285, 0, 2, -1082130432 /* Float: -1f */);
		if (__LIB_6__::func_903("LS_UND_BRW_TRT"))
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_BRW_TRT") > 2)
			{
				func_1682(iParam0, cParam1);
			}
		}
		else
		{
			func_1682(iParam0, cParam1);
		}
	}
}

void func_1239(int iParam0, char[4] cParam1)
{
	if (WEAPON::_0xCB690F680A3EA971(Global_35, 6) && func_831(Local_1614[iParam0 /*97*/], 1, 1, 1, 0, 0))
	{
		func_1684(iParam0, cParam1);
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_1975))
	{
		__LIB_1__::func_148(&uLocal_1975);
	}
	else if (__LIB_0__::func_264(&uLocal_1975) > 3f)
	{
		if (iParam0 == 1)
		{
			if (!__LIB_6__::func_904() && !func_385(67108864))
			{
				if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW2_ATT", 0))
				{
					__LIB_1__::func_148(&uLocal_1975);
					func_209(67108864);
				}
			}
		}
		else if (!__LIB_6__::func_904() && !func_385(1024))
		{
			if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_ATT", 0))
			{
				__LIB_1__::func_148(&uLocal_1975);
				func_209(1024);
			}
		}
	}
	if ((iLocal_2121 != 14 && (__LIB_8__::func_596(Local_1614[iParam0 /*97*/], Local_15, 20f, 1) && PED::_0x7F9B9791D4CB71F6(Local_1614[iParam0 /*97*/], Local_15, 0, 0) == 1)) || iLocal_1809[func_1245(iParam0)] == 3)
	{
		func_1680();
		func_1679(iParam0, cParam1);
		return;
	}
	if (PED::IS_PED_FLEEING(Local_1614[iParam0 /*97*/]))
	{
		func_1684(iParam0, cParam1);
	}
}

void func_1240(int iParam0, char[4] cParam1)
{
	if (func_1675(iParam0, cParam1))
	{
		return;
	}
}

void func_1241(int iParam0, char[4] cParam1)
{
	if (func_1675(iParam0, cParam1))
	{
		return;
	}
	if (!func_63(1024))
	{
		if (__LIB_6__::func_903("LS_UND_BRW_WTRT"))
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_BRW_WTRT") > 0)
			{
				func_1684(iParam0, cParam1);
				func_66(1024);
			}
		}
	}
}

void func_1242(char[4] cParam0)
{
	if (!__LIB_6__::func_904())
	{
		if (!func_385(268435456))
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_LEAVE", 0))
			{
				func_209(268435456);
			}
		}
	}
}

void func_1243()
{
	if (__LIB_8__::func_864(Global_35, 1299.224f, -1244.191f, 78.81702f, 11f, 1, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1812))
		{
			if (!func_386(Local_1812, uLocal_2064[3], 0, 1))
			{
				func_1685(0);
				func_1685(1);
			}
		}
		else
		{
			func_1685(0);
			func_1685(1);
		}
	}
}

void func_1244(int iParam0)
{
	__LIB_0__::func_325(&(Local_1614[iParam0 /*97*/].f_5));
}

int func_1245(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 2;
}

void func_1246()
{
	vector3 vVar0;
	var uVar3;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_15, false, false) };
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[5 /*130*/]))
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false);
		vVar0.f_2 = uVar3;
		vLocal_2045 = { ENTITY::GET_ENTITY_ROTATION(Local_15, 2) };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_112[5 /*130*/], vVar0, vLocal_2045, 2);
		func_1686(5);
	}
	bLocal_2107 = true;
}

void func_1283()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1708(0);
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
	func_1708(1);
}

void func_1284()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_225(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1285()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1711(0);
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
	func_1711(1);
}

void func_1286()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1711(0);
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
	func_1711(1);
}

void func_1287()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_225(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_225(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1290(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1290(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1290(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1290(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1312(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1732(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_225(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1422(var uParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	iVar1 = ENTITY::GET_ENTITY_MODEL(bVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return;
	}
	__LIB_0__::func_172(uParam0->f_1641);
	MISC::GET_MODEL_DIMENSIONS(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
	if (VEHICLE::_IS_DRAFT_VEHICLE(bVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bVar0), iVar14);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
	}
	uParam0->f_1641 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(bVar0, true, false), ENTITY::GET_ENTITY_ROTATION(bVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1641, bVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_10__::func_293(uParam0, 2097152);
	__LIB_10__::func_279(uParam0, 1048576);
}

void func_1423(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam1);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	__LIB_0__::func_172(uParam0->f_1641);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_1648 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1648 * FtoV(__LIB_4__::func_634(bParam1)) };
	uParam0->f_1641 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(bParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1641, bParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_10__::func_293(uParam0, 1048576);
	__LIB_10__::func_279(uParam0, 2097152);
}

void func_1431(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3[4];
	vector3 vVar16[4];
	float fVar29[4];
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar45;
	if (!__LIB_10__::func_372(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_782[iParam1 /*41*/].f_12) * uParam0->f_782[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_782[iParam1 /*41*/].f_12) * uParam0->f_782[iParam1 /*41*/].f_11)) };
		vParam3 = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_782[iParam1 /*41*/].f_13) * uParam0->f_782[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_782[iParam1 /*41*/].f_13) * uParam0->f_782[iParam1 /*41*/].f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_782[iParam1 /*41*/].f_12) * uParam0->f_782[iParam1 /*41*/].f_11) + uParam0->f_782[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_782[iParam1 /*41*/].f_12) * uParam0->f_782[iParam1 /*41*/].f_11) + uParam0->f_782[iParam1 /*41*/].f_18)) };
		vParam3 = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_782[iParam1 /*41*/].f_13) * uParam0->f_782[iParam1 /*41*/].f_11) + uParam0->f_782[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_782[iParam1 /*41*/].f_13) * uParam0->f_782[iParam1 /*41*/].f_11) + uParam0->f_782[iParam1 /*41*/].f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1663 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1641)) && __LIB_8__::func_864(uParam0->f_1664, uParam0->f_782[iParam1 /*41*/].f_1, uParam0->f_782[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_1641) };
		vVar37 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1641) };
		vVar3[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1664), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1664), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar3[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1664), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1664), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar16[0 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_782[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[1 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_782[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) };
		vVar16[2 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_782[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[3 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_782[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_782[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_782[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_782[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_782[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (fVar29[iVar40] < fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { vVar16[iVar41 /*3*/] };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*fParam8 = __LIB_0__::func_152(uParam0->f_782[iParam1 /*41*/].f_1, vVar0, 0);
	if (*fParam8 < uParam0->f_782[iParam1 /*41*/].f_12)
	{
		*fParam8 = (*fParam8 + 360f);
	}
	if (uParam0->f_782[iParam1 /*41*/].f_13 < uParam0->f_782[iParam1 /*41*/].f_12)
	{
		*fParam9 = (uParam0->f_782[iParam1 /*41*/].f_13 + 360f);
	}
	else
	{
		*fParam9 = uParam0->f_782[iParam1 /*41*/].f_13;
	}
	if (*fParam8 < *fParam9)
	{
		vVar42 = { uParam0->f_782[iParam1 /*41*/].f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1642 = { vVar42 + Vector(0f, (BUILTIN::COS(*fParam8) * uParam0->f_782[iParam1 /*41*/].f_11), (BUILTIN::SIN(*fParam8) * uParam0->f_782[iParam1 /*41*/].f_11)) };
		fVar45 = 0f;
		uParam0->f_1645 = { vVar42 + Vector(0f, ((BUILTIN::COS(*fParam8) * uParam0->f_782[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*fParam8) * uParam0->f_782[iParam1 /*41*/].f_17) + fVar45)) };
	}
}

void func_1432(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0 /*13*/].f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[iVar0 /*13*/].f_4)))
			{
				__LIB_8__::func_858(&(uParam0->f_1537), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), &(uParam0->f_3[iVar0 /*13*/].f_4), 0);
			}
		}
		iVar0++;
	}
}

void func_1449(var uParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0 /*13*/].f_9, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { __LIB_4__::func_798(uParam0, uParam0->f_3[iVar0 /*13*/].f_2) };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) && ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
				if (PED::IS_PED_HUMAN(iVar9) && iVar9 != Global_35)
				{
					__LIB_8__::func_851(iVar9, Global_35, uParam2, uParam3);
				}
			}
		}
		iVar0++;
	}
}

bool func_1459(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;
	fVar0 = __LIB_8__::func_619(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && bParam5)
	{
		return true;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return true;
	}
	return false;
}

void func_1464(bool bParam0, int* iParam1)
{
	if (MISC::IS_BIT_SET(*iParam1, 21))
	{
		__LIB_3__::func_97(iParam1);
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_36) || !__LIB_8__::func_601(*bParam0, 0))
	{
		return;
	}
	iParam1->f_36 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), 0f, 0f, 0f, 0.55f, 0.55f, 3f);
	VOLUME::_0x5B23DFF8E0948BB2(iParam1->f_36, 1);
}

int func_1465(int* iParam0)
{
	bool bVar0;
	if (MISC::IS_BIT_SET(*iParam0, 8))
	{
		return 1;
	}
	__LIB_3__::func_65(64);
	if (MISC::IS_BIT_SET(iParam0->f_21, 14))
	{
		if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && __LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA"))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 14);
			MISC::CLEAR_BIT(&(iParam0->f_21), 15);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		if (((__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && __LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA")) && !__LIB_8__::func_640(Global_35, 716706914)) && !__LIB_8__::func_640(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_1__::func_283(&(iParam0->f_49), 0);
			MISC::SET_BIT(&(iParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		bVar0 = __LIB_0__::func_264(&(iParam0->f_49)) >= 1.5f;
		if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || bVar0)
		{
			__LIB_1__::func_26(0);
			__LIB_0__::func_37(&(iParam0->f_49));
			MISC::SET_BIT(&(iParam0->f_21), 14);
			return 1;
		}
	}
	return 0;
}

void func_1469(int* iParam0, var uParam1, bool bParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(*bParam2))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*bParam2, iParam0->f_26, 3, 1, 0, sParam3, 0);
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if (!__LIB_0__::func_139((uParam1[iVar1 /*17*/])->f_6) || __LIB_3__::func_66((uParam1[iVar1 /*17*/])->f_6) == 0)
			{
			}
			else
			{
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66((uParam1[iVar1 /*17*/])->f_6), iVar0, 0);
			}
			iVar1++;
		}
	}
}

int func_1493(int* iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_60) || !__LIB_8__::func_601(*iParam1, 0))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_60) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_60)) && iParam2 == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_86(iParam0->f_57))
	{
		func_1809(iParam0, iParam1);
	}
	__LIB_1__::func_338(iParam0->f_60, iParam0->f_57);
	iParam0->f_57 = { 0f, 0f, 0f };
	iParam0->f_60 = 0;
	return 0;
}

void func_1495(int* iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_8__::func_601(bParam1, 0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam1);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			iVar0 = iParam0->f_56;
		}
		else
		{
			return;
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 16);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 18);
	}
	if (MAP::_0x3CB8859F04763C78(bParam1, iVar0))
	{
		MAP::_0x44813684F72B563C(bParam1, iVar0);
	}
	if (iParam0->f_55 != 0)
	{
		iParam0->f_55 = 0;
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
				func_563(50);
			}
			else
			{
				func_563(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_563(51);
			}
			else
			{
				func_563(49);
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
			func_563(24);
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

void func_1610()
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
	iVar0 = func_1854(6291456, 0);
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

void func_1620(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(bParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (bParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_8__::func_614(bParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(bParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1620(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1620(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(bParam0, 0);
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
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (__LIB_8__::func_614(bParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_1644(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!func_213(262144))
	{
		if (func_213(1048576))
		{
			func_1195(6, 22, 1);
			func_214(262144);
		}
		else if (iLocal_2121 == 11)
		{
			func_1195(6, 22, 1);
			func_214(262144);
		}
		if (!func_213(2097152))
		{
			if (func_213(2) && !func_213(4194304))
			{
				func_214(4194304);
				return;
			}
			if (__LIB_8__::func_596(Global_35, Local_15, 15f, 1))
			{
				iVar1 = __LIB_18__::func_276(Local_15, Global_35, 0.3f);
				if (iVar1 == 0)
				{
					iVar0 = 28;
					sLocal_1207 = "Bool_React_F";
				}
				else if (iVar1 == 1)
				{
					iVar0 = 24;
					sLocal_1207 = "Bool_React_BL";
				}
				else if (iVar1 == 3)
				{
					iVar0 = 27;
					sLocal_1207 = "Bool_React_L";
				}
				else if (iVar1 == 2)
				{
					iVar0 = 26;
					sLocal_1207 = "Bool_React_R";
				}
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[iVar0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[iVar0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[6 /*130*/], sLocal_1130[iVar0]);
					}
				}
				else
				{
					func_1195(6, iVar0, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_15, Global_35, -1, 32768, 41, 0);
					func_536(6, sLocal_1207, 0);
					if (iLocal_2094 != 2)
					{
						if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_DEFENDR2", 0))
						{
							iLocal_2094++;
						}
					}
					func_214(2097152);
				}
			}
		}
		else
		{
			if (!__LIB_0__::func_75(&uLocal_1972))
			{
				__LIB_1__::func_148(&uLocal_1972);
			}
			else if (__LIB_0__::func_264(&uLocal_1972) > 16f)
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_TOGRAVE2", 0))
				{
					__LIB_1__::func_148(&uLocal_1972);
				}
			}
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_112[6 /*130*/], sLocal_1207))
			{
				if (func_213(2))
				{
					func_536(6, sLocal_1207, 1);
				}
				else if (!__LIB_8__::func_596(Global_35, Local_15, 20f, 1))
				{
					func_536(6, sLocal_1207, 1);
				}
			}
			if ((((Local_112[6 /*130*/].f_19[18 /*5*/] || Local_112[6 /*130*/].f_19[17 /*5*/]) || Local_112[6 /*130*/].f_19[16 /*5*/]) || Local_112[6 /*130*/].f_19[15 /*5*/]) || Local_112[6 /*130*/].f_19[19 /*5*/])
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_15);
				func_1864();
				func_1195(6, 20, 0);
				func_536(6, "Bool_Base", 0);
				__LIB_0__::func_37(&uLocal_1972);
				func_384(2097152);
				if (func_213(2))
				{
					func_214(4194304);
				}
				Local_112[6 /*130*/].f_19[18 /*5*/] = 0;
				Local_112[6 /*130*/].f_19[17 /*5*/] = 0;
				Local_112[6 /*130*/].f_19[16 /*5*/] = 0;
				Local_112[6 /*130*/].f_19[15 /*5*/] = 0;
				Local_112[6 /*130*/].f_19[19 /*5*/] = 0;
			}
		}
	}
}

void func_1646(int iParam0)
{
	if (func_1865(iParam0))
	{
		if (iParam0 == 2)
		{
			if (!__LIB_0__::func_27(iLocal_2117, 32))
			{
				__LIB_1__::func_683(&iLocal_2117, 32);
				func_1655();
				func_1653(2);
				func_214(4);
			}
		}
		else if (!__LIB_0__::func_27(iLocal_2117, 4))
		{
			__LIB_1__::func_683(&iLocal_2117, 4);
			func_1652();
			func_1653(1);
			func_214(4);
		}
	}
}

void func_1647(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == 2 && !func_213(32))
	{
		iVar0 = __LIB_18__::func_276(Local_1318[iParam1 /*97*/], Global_35, 1060437492 /* Float: 0.707f */);
		if (iVar0 == 0)
		{
			iVar1 = 6;
		}
		else if (iVar0 == 1)
		{
			iVar1 = 7;
		}
		else if (iVar0 == 3)
		{
			iVar1 = 9;
		}
		else if (iVar0 == 2)
		{
			iVar1 = 8;
		}
		if (func_1866(iVar1, 1))
		{
			func_1206(2, 1);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1318[iParam1 /*97*/], 8000, 32768, 41, 0);
			__LIB_8__::func_111("LSUND_IG_CLEAN", 0);
			__LIB_8__::func_111("LS_UND_HNG_MOU2", 0);
			__LIB_10__::func_364(&(cParam0->f_2106), "LSUND_IG_CLTHR", 0);
			func_214(32);
			if (__LIB_0__::func_27(iLocal_2117, 16))
			{
				__LIB_1__::func_681(&iLocal_2117, 16);
			}
		}
	}
	else if (iParam1 == 1 && !func_213(256))
	{
		iVar0 = __LIB_18__::func_276(Local_1318[iParam1 /*97*/], Global_35, 1060437492 /* Float: 0.707f */);
		if (iVar0 == 0)
		{
			iVar2 = 5;
			func_214(16777216);
		}
		else if (iVar0 == 1)
		{
			iVar2 = 6;
		}
		else if (iVar0 == 3)
		{
			iVar2 = 5;
			func_214(16777216);
		}
		else if (iVar0 == 2)
		{
			iVar2 = 4;
		}
		if (func_1212(iVar2, 1))
		{
			func_1206(0, 1);
			func_1206(1, 1);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1318[iParam1 /*97*/], 8000, 32768, 41, 0);
			__LIB_8__::func_111("LSUND_IG_CLEAN", 0);
			__LIB_8__::func_111("LS_UND_HNG_MOU2", 0);
			__LIB_10__::func_364(&(cParam0->f_2106), "LSUND_IG_THREAT", 0);
			func_214(256);
			if (__LIB_0__::func_27(iLocal_2117, 2))
			{
				__LIB_1__::func_681(&iLocal_2117, 2);
			}
		}
	}
}

void func_1648(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (((iParam1 == 2 && !func_213(64)) && !func_213(16)) && !func_213(32))
	{
		iVar0 = __LIB_18__::func_276(Local_1318[iParam1 /*97*/], Global_35, 1060437492 /* Float: 0.707f */);
		if (iVar0 == 0)
		{
			iVar1 = 10;
		}
		else if (iVar0 == 1)
		{
			iVar1 = 11;
		}
		else if (iVar0 == 3)
		{
			iVar1 = 13;
		}
		else if (iVar0 == 2)
		{
			iVar1 = 12;
		}
		if (func_1866(iVar1, 1))
		{
			func_1206(2, 1);
			__LIB_8__::func_111("LSUND_IG_CLEAN", 0);
			__LIB_8__::func_111("LS_UND_HNG_MOU2", 0);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1318[iParam1 /*97*/], 8000, 32768, 41, 0);
			__LIB_10__::func_364(&(cParam0->f_2106), "LSUND_IG_CLWEP", 0);
			func_1866(iVar1, 1);
			func_214(64);
			if (__LIB_0__::func_27(iLocal_2117, 32))
			{
				__LIB_1__::func_681(&iLocal_2117, 32);
			}
		}
	}
	else if ((iParam1 == 1 && !func_213(512)) && !func_213(256))
	{
		iVar0 = __LIB_18__::func_276(Local_1318[iParam1 /*97*/], Global_35, 1060437492 /* Float: 0.707f */);
		if (iVar0 == 0)
		{
			iVar2 = 8;
			func_214(16777216);
		}
		else if (iVar0 == 1)
		{
			iVar2 = 9;
		}
		else if (iVar0 == 3)
		{
			iVar2 = 8;
			func_214(16777216);
		}
		else if (iVar0 == 2)
		{
			iVar2 = 7;
		}
		if (func_1212(iVar2, 1))
		{
			func_1206(0, 1);
			func_1206(1, 1);
			__LIB_8__::func_111("LSUND_IG_CLEAN", 0);
			__LIB_8__::func_111("LS_UND_HNG_MOU2", 0);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1318[iParam1 /*97*/], 8000, 32768, 41, 0);
			__LIB_10__::func_364(&(cParam0->f_2106), "LSUND_IG_THREAW", 0);
			func_214(512);
			if (__LIB_0__::func_27(iLocal_2117, 4))
			{
				__LIB_1__::func_681(&iLocal_2117, 4);
			}
		}
	}
}

int func_1649()
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_18__::func_276(Local_1318[1 /*97*/], Global_35, 1060437492 /* Float: 0.707f */);
	if (iVar1 == 0)
	{
		iVar0 = 2;
	}
	else if (iVar1 == 1)
	{
		iVar0 = 3;
	}
	else if (iVar1 == 3)
	{
		iVar0 = 2;
	}
	else if (iVar1 == 2)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_1650(int iParam0)
{
	if (__LIB_8__::func_596(Global_35, Local_1318[iParam0 /*97*/], 1.5f, 0))
	{
		return true;
	}
	return false;
}

bool func_1651()
{
	float fVar0;
	if (!__LIB_0__::func_75(&uLocal_1957))
	{
		if (!func_213(33554432) && !__LIB_0__::func_27(iLocal_2117, 1))
		{
			if (__LIB_8__::func_596(Global_35, Local_1318[1 /*97*/], 3.5f, 0) || __LIB_8__::func_596(Global_35, Local_1318[0 /*97*/], 3.5f, 0))
			{
				__LIB_1__::func_148(&uLocal_1957);
			}
		}
	}
	else if (__LIB_8__::func_596(Global_35, Local_1318[1 /*97*/], 4f, 0) || __LIB_8__::func_596(Global_35, Local_1318[0 /*97*/], 4f, 0))
	{
		if (func_213(128))
		{
			fVar0 = 7f;
		}
		else
		{
			fVar0 = 4f;
		}
		if (__LIB_0__::func_264(&uLocal_1957) > fVar0)
		{
			__LIB_0__::func_37(&uLocal_1957);
			return true;
		}
	}
	else if (__LIB_0__::func_75(&uLocal_1957))
	{
		__LIB_0__::func_37(&uLocal_1957);
	}
	return false;
}

void func_1652()
{
	__LIB_6__::func_786(&(Local_1318[1 /*97*/].f_35), 0);
	__LIB_2__::func_411(&(Local_2124[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_2124[1 /*17*/]), 0, 0);
	func_1205(&(Local_1318[1 /*97*/]), &(Local_1318[1 /*97*/].f_35), 8f, &Local_2124, 0.1f, 3, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
	bLocal_2056 = true;
}

void func_1653(int iParam0)
{
	__LIB_0__::func_325(&(Local_1318[iParam0 /*97*/].f_5));
}

void func_1654(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 == 2 && !func_213(16))
	{
		iVar0 = __LIB_18__::func_276(Local_1318[iParam1 /*97*/], Global_35, 1060437492 /* Float: 0.707f */);
		if (iVar0 == 0)
		{
			iVar1 = 2;
		}
		else if (iVar0 == 1)
		{
			iVar1 = 3;
		}
		else if (iVar0 == 3)
		{
			iVar1 = 5;
		}
		else if (iVar0 == 2)
		{
			iVar1 = 4;
		}
		if (func_1866(iVar1, 1))
		{
			func_1206(2, 1);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_1318[iParam1 /*97*/], 8000, 32768, 41, 0);
			__LIB_8__::func_111("LSUND_IG_CLEAN", 0);
			__LIB_8__::func_111("LS_UND_HNG_MOU2", 0);
			__LIB_10__::func_364(&(cParam0->f_2106), "LSUND_IG_CLREAS", 0);
			func_214(16);
			if (__LIB_0__::func_27(iLocal_2117, 8))
			{
				__LIB_1__::func_681(&iLocal_2117, 8);
			}
		}
	}
}

void func_1655()
{
	__LIB_6__::func_786(&(Local_1318[2 /*97*/].f_35), 0);
	__LIB_2__::func_411(&(Local_2159[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_2159[1 /*17*/]), 0, 0);
	func_1205(&(Local_1318[2 /*97*/]), &(Local_1318[2 /*97*/].f_35), 8f, &Local_2159, 0.1f, 3, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
	bLocal_2057 = true;
}

void func_1657(int iParam0, int iParam1)
{
	iLocal_1610[iParam0] = iParam1;
}

void func_1661(bool bParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, float fParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(bParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), bParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = fParam20;
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(bParam0, bParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(bParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_8__::func_636(bParam0, bParam1, iParam18);
	}
}

bool func_1664(char[4] cParam0)
{
	if (!func_63(4) && !func_63(2))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_1812))
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WOM_TRT", 0))
			{
				func_1665();
				func_66(4);
				func_1673();
				return true;
			}
		}
	}
	if (func_146(Local_1812, 0, &(Local_1812.f_6), &(Local_1812.f_34), 1, 0) || PED::_0x29FCE825613FEFCA(Local_1812, 1))
	{
		if (func_831(Local_1812, 1, 1, 1, 0, 0) || PED::IS_PED_SHOOTING(Global_35))
		{
			if (func_63(4) || func_63(2))
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WOM_AFT", 0))
				{
					func_1665();
					func_1673();
					return true;
				}
			}
			else if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WOM_TRT", 0))
			{
				func_1665();
				func_1673();
				return true;
			}
		}
	}
	return false;
}

void func_1665()
{
	iLocal_2283 = 3;
	__LIB_6__::func_786(&(Local_1812.f_35), 0);
	__LIB_2__::func_411(&(Local_2194[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_2194[1 /*17*/]), 0, 0);
	func_1205(&Local_1812, &(Local_1812.f_35), 30f, &Local_2194, 0.1f, 3, 0, 0, iLocal_2283, 0, 2, -1082130432 /* Float: -1f */);
}

void func_1666(bool bParam0)
{
	TASK::TASK_CLEAR_LOOK_AT(Local_1812);
	TASK::TASK_LOOK_AT_ENTITY(Local_1812, Global_35, -1, 0, 51, 0);
	if (bParam0)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1812, Global_35, -1, -1f, -1f, -1f);
	}
}

void func_1667()
{
	if (__LIB_8__::func_596(Local_1812, Global_35, 10f, 1))
	{
		if (!bLocal_2282)
		{
			__LIB_2__::func_411(&(Local_2194[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_2194[1 /*17*/]), 1, 0);
			iLocal_2283 = 2;
			__LIB_6__::func_786(&(Local_1812.f_35), 0);
			bLocal_2282 = true;
		}
	}
	else if (bLocal_2282)
	{
		__LIB_2__::func_411(&(Local_2194[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_2194[1 /*17*/]), 0, 0);
		iLocal_2283 = 3;
		__LIB_6__::func_786(&(Local_1812.f_35), 0);
		bLocal_2282 = false;
	}
}

void func_1668(char[4] cParam0)
{
	__LIB_1__::func_148(&uLocal_1945);
	func_1666(1);
	func_1224(1);
}

void func_1669(char[4] cParam0)
{
	__LIB_0__::func_325(&(Local_1812.f_5));
	if (iLocal_2121 != 14)
	{
		if (!func_63(32))
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_UND_WOM_GWN", 0))
			{
				TASK::TASK_GO_TO_ENTITY(Local_1812, Local_15, 20000, 3f, 1.5f, 5f, 0);
				func_1224(2);
				func_66(32);
			}
		}
	}
}

void func_1671(bool bParam0)
{
	if (iLocal_2121 != 14)
	{
		if (bParam0)
		{
			func_537(Local_1812, sLocal_1114[7], 1024);
		}
		else
		{
			func_537(Local_1812, sLocal_1114[7], 0);
		}
		func_1224(0);
	}
}

void func_1672()
{
	int iVar0;
	__LIB_0__::func_325(&(Local_1812.f_5));
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1812, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1321.486f, -1267.593f, 75.71944f, 1f, -1, 0.25f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1325.359f, -1298.833f, 75.44041f, 1f, -1, 0.25f, 1, 40000f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_1812, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::TASK_CLEAR_LOOK_AT(Local_1812);
	func_1224(3);
}

void func_1673()
{
	int iVar0;
	__LIB_0__::func_325(&(Local_1812.f_5));
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_FLEE_FROM_PED(0, Global_35, 1330.349f, -1302.229f, 75.54819f, 100f, -1, 1280, 1.6f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_1812, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_1224(4);
}

void func_1674(int iParam0, int iParam1)
{
	iLocal_1809[iParam0] = iParam1;
}

bool func_1675(int iParam0, char[4] cParam1)
{
	if (iLocal_1809[iParam0] != 5)
	{
		if (iLocal_1809[func_1245(iParam0)] == 5)
		{
			if (!__LIB_0__::func_75(&uLocal_1951))
			{
				__LIB_1__::func_148(&uLocal_1951);
			}
			else if (__LIB_0__::func_264(&uLocal_1951) > 0.75f)
			{
				func_1684(iParam0, cParam1);
				__LIB_0__::func_37(&uLocal_1951);
				return true;
			}
		}
	}
	if (iLocal_1809[iParam0] != 4)
	{
		if (iLocal_1809[func_1245(iParam0)] == 4)
		{
			if (!__LIB_0__::func_75(&uLocal_1951))
			{
				__LIB_1__::func_148(&uLocal_1951);
			}
			else if (__LIB_0__::func_264(&uLocal_1951) > 1f)
			{
				func_1870(iParam0, cParam1);
				__LIB_0__::func_37(&uLocal_1951);
				return true;
			}
		}
	}
	if (((func_146(Local_1614[iParam0 /*97*/], 0, &(Local_1614[iParam0 /*97*/].f_6), &(Local_1614[iParam0 /*97*/].f_34), 1, 0) || PED::_0x29FCE825613FEFCA(Local_1614[iParam0 /*97*/], 1)) || iLocal_1809[func_1245(iParam0)] == 2) || iLocal_1809[func_1245(iParam0)] == 7)
	{
		if (WEAPON::_0xCB690F680A3EA971(Global_35, 6))
		{
			if (func_831(Local_1614[iParam0 /*97*/], 1, 1, 1, 0, 0))
			{
				if (!func_63(256))
				{
					func_1870(iParam0, cParam1);
					return true;
				}
				else if (iLocal_1809[iParam0] == 2)
				{
					func_1684(iParam0, cParam1);
					return true;
				}
			}
			if (PED::IS_PED_SHOOTING(Global_35))
			{
				func_1684(iParam0, cParam1);
				return true;
			}
		}
		else
		{
			func_1682(iParam0, cParam1);
			return true;
		}
	}
	return false;
}

void func_1676()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_1871(iVar0, 0);
		iVar0++;
	}
}

void func_1677()
{
	if (__LIB_8__::func_596(Local_1614[0 /*97*/], Global_35, 10f, 1))
	{
		if (!bLocal_2284)
		{
			if (!func_213(134217728))
			{
				__LIB_2__::func_411(&(Local_2229[0 /*17*/]), 1, 0);
			}
			__LIB_2__::func_411(&(Local_2229[1 /*17*/]), 1, 0);
			iLocal_2285 = 2;
			__LIB_6__::func_786(&(Local_1614[0 /*97*/].f_35), 0);
			bLocal_2284 = true;
		}
	}
	else if (bLocal_2284)
	{
		__LIB_2__::func_411(&(Local_2229[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_2229[1 /*17*/]), 0, 0);
		iLocal_2285 = 3;
		__LIB_6__::func_786(&(Local_1614[0 /*97*/].f_35), 0);
		bLocal_2284 = false;
	}
}

void func_1678(int iParam0, char[4] cParam1)
{
	__LIB_8__::func_111("LS_UND_BRW_CON", 0);
	if (iParam0 == 1)
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Local_1614[iParam0 /*97*/], Global_35, 0f, 0f, 0f, 1f, -1, 0);
		func_1674(iParam0, 1);
		return;
	}
	if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW1_ENC", 0))
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Local_1614[iParam0 /*97*/], Global_35, 0f, 0f, 0f, 1f, -1, 0);
		func_1674(iParam0, 1);
	}
}

void func_1679(int iParam0, char[4] cParam1)
{
	__LIB_8__::func_111("LS_UND_BRW_CON", 0);
	if (iLocal_2121 != 14)
	{
		if (!func_385(524288))
		{
			if (iParam0 == 0)
			{
				__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_SPT1", 0);
				func_209(524288);
			}
			else
			{
				__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_SPT2", 0);
				func_209(524288);
			}
		}
		TASK::TASK_GO_TO_ENTITY(Local_1614[iParam0 /*97*/], Local_15, 20000, 3f, 1.5f, 5f, 0);
		func_1674(iParam0, 3);
	}
}

void func_1680()
{
	__LIB_2__::func_480(&Local_2229, 1, 1, 1, 0);
	Local_1614[0 /*97*/].f_35.f_2 = 0;
	func_311(&(Local_1614[0 /*97*/]));
}

void func_1681(int iParam0, bool bParam1)
{
	TASK::TASK_CLEAR_LOOK_AT(Local_1614[iParam0 /*97*/]);
	TASK::TASK_LOOK_AT_ENTITY(Local_1614[iParam0 /*97*/], Global_35, -1, 0, 51, 0);
	if (bParam1)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1614[iParam0 /*97*/], Global_35, -1, -1f, -1f, -1f);
	}
}

void func_1682(int iParam0, char[4] cParam1)
{
	if (!func_213(268435456))
	{
		__LIB_3__::func_353("LSUKTR_BRAWL", 0);
		func_214(268435456);
	}
	if (iParam0 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1614[iParam0 /*97*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_1614[iParam0 /*97*/], 297, false);
			func_1871(iParam0, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 25, false);
			TASK::TASK_COMBAT_PED(Local_1614[iParam0 /*97*/], Global_35, 0, 16);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1614[iParam0 /*97*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1614[iParam0 /*97*/], 58, true);
			func_1674(iParam0, 2);
			return;
		}
	}
	if (!bLocal_2114)
	{
		func_1680();
		if (!__LIB_6__::func_903("LS_UND_BRW_TRT"))
		{
			__LIB_3__::func_732(0);
		}
		bLocal_2114 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Local_1614[iParam0 /*97*/], 297, false);
	func_1871(iParam0, 1);
	PED::SET_PED_RESET_FLAG(Global_35, 25, false);
	TASK::TASK_COMBAT_PED(Local_1614[iParam0 /*97*/], Global_35, 0, 16);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1614[iParam0 /*97*/], joaat("REL_PLAYER_ENEMY"));
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_1614[iParam0 /*97*/], 58, true);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_1__::func_324("OBJ_UND_STOPMENR");
	func_1674(iParam0, 2);
}

void func_1683()
{
	iLocal_2285 = 3;
	__LIB_6__::func_786(&(Local_1614[0 /*97*/].f_35), 0);
	__LIB_2__::func_411(&(Local_2229[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_2229[1 /*17*/]), 0, 0);
	func_1205(&(Local_1614[0 /*97*/]), &(Local_1614[0 /*97*/].f_35), 30f, &Local_2229, 0.1f, 3, 0, 0, iLocal_2285, 0, 2, -1082130432 /* Float: -1f */);
}

void func_1684(int iParam0, char[4] cParam1)
{
	if (!func_63(256) && !func_63(512))
	{
		__LIB_3__::func_732(0);
		if (iParam0 == 0)
		{
			if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_FLE1", 0))
			{
				func_66(512);
			}
		}
		else if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_FLE2", 0))
		{
			func_66(512);
		}
	}
	func_1244(iParam0);
	TASK::TASK_SMART_FLEE_PED(Local_1614[iParam0 /*97*/], Local_15, 100f, -1, 256, 3f, 0);
	func_1674(iParam0, 5);
}

void func_1685(int iParam0)
{
	if (iLocal_2121 != 14)
	{
		if (iParam0 == 0)
		{
			func_537(Local_1614[iParam0 /*97*/], sLocal_1114[3], 25600);
		}
		else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1114[3]) && __LIB_8__::func_640(Local_1614[0 /*97*/], 658540077))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1614[iParam0 /*97*/]))
			{
				TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_1614[iParam0 /*97*/], Local_1614[0 /*97*/], sLocal_1114[3], -0.3f, -1.8f, 1, 25600, -1, 0);
			}
		}
		func_1674(iParam0, 0);
	}
}

void func_1686(int iParam0)
{
	if (Local_112[iParam0 /*130*/].f_16)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[iParam0 /*130*/]))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_112[iParam0 /*130*/], "player", &(Local_112[iParam0 /*130*/].f_4), false, 0, 2))
			{
			}
		}
	}
}

void func_1708(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_225(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1882(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_738(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1290(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1888(Var0);
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

void func_1711(bool bParam0)
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
		func_225(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_225(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1290(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1290(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1290(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1290(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1290(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1290(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1290(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1290(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1290(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1290(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1290(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1732(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1732(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1732(iVar63, -915411861, 1, 0, 0));
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

void func_1809(int* iParam0, int iParam1)
{
	if (!__LIB_8__::func_601(*iParam1, 0))
	{
		return;
	}
	iParam0->f_57 = { __LIB_3__::func_114(*iParam1, Global_35, iParam0->f_26) };
	iParam0->f_57 = { iParam0->f_57 + Global_36 };
	iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 10f);
}

int func_1854(int iParam0, int iParam1)
{
	var uVar0;
	return func_1966(&uVar0, iParam0, iParam1);
}

void func_1864()
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[24]) || ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[24]))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[6 /*130*/], sLocal_1130[24]);
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[25]) || ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[25]))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[6 /*130*/], sLocal_1130[25]);
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[28]) || ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[28]))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[6 /*130*/], sLocal_1130[28]);
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[27]) || ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[27]))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[6 /*130*/], sLocal_1130[27]);
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[6 /*130*/], sLocal_1130[26]) || ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[6 /*130*/], sLocal_1130[26]))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_112[6 /*130*/], sLocal_1130[26]);
	}
}

bool func_1865(int iParam0)
{
	if (func_831(Local_1318[iParam0 /*97*/], 1, 1, 1, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_1866(int iParam0, int iParam1)
{
	if (iLocal_1205 != iParam0)
	{
		iLocal_1205 = iParam0;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112[1 /*130*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112[1 /*130*/], false))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[1 /*130*/], sLocal_1163[iLocal_1205]))
			{
				if (Local_112[1 /*130*/].f_2[0] != iParam1)
				{
					Local_112[1 /*130*/].f_2[0] = iParam1;
					func_536(1, "Bool", Local_112[1 /*130*/].f_2[0]);
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_112[1 /*130*/], sLocal_1163[iLocal_1205], true);
				return true;
			}
			else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[1 /*130*/], sLocal_1163[iLocal_1205]))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_112[1 /*130*/], sLocal_1163[iLocal_1205]);
			}
		}
	}
	return false;
}

void func_1870(int iParam0, char[4] cParam1)
{
	func_1683();
	if (!func_63(256))
	{
		__LIB_3__::func_732(0);
		if (__LIB_10__::func_364(&(cParam1->f_2106), "LS_UND_BRW_WTRT", 0))
		{
			func_66(256);
		}
	}
	TASK::CLEAR_PED_TASKS(Local_1614[iParam0 /*97*/], true, false);
	TASK::TASK_HANDS_UP(Local_1614[iParam0 /*97*/], -1, Global_35, -1, false);
	func_1674(iParam0, 4);
}

void func_1871(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = joaat("BLIP_STYLE_COMPANION");
	if (bParam1)
	{
		if (MAP::DOES_BLIP_EXIST(Local_1614[iParam0 /*97*/].f_5))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Local_1614[iParam0 /*97*/].f_5, -546708623);
			MAP::_BLIP_SET_MODIFIER(Local_1614[iParam0 /*97*/].f_5, 942020339);
			return;
		}
		else
		{
			iVar0 = joaat("BLIP_STYLE_ENEMY");
		}
	}
	func_1217(&(Local_1614[iParam0 /*97*/].f_5), Local_1614[iParam0 /*97*/], iVar0, "BLIP_UND_MOURN");
	if (MAP::DOES_BLIP_EXIST(Local_1614[iParam0 /*97*/].f_5))
	{
		MAP::_BLIP_SET_MODIFIER(Local_1614[iParam0 /*97*/].f_5, -546708623);
	}
}

void func_1882(int iParam0)
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
	func_1290(iParam0, 1, 1, -142743235, 1);
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
		func_1290(uVar18[iVar36], 1, 1, -142743235, 1);
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
					func_1976(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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

void func_1888(struct<6> Param0)
{
	if (!func_1987(Param0.f_4, 1))
	{
	}
	if (!func_1987(Param0, 1))
	{
	}
	if (!func_1987(Param0.f_2, 1))
	{
	}
	if (!func_1987(Param0.f_5, 1))
	{
	}
	if (!func_1987(Param0.f_3, 1))
	{
	}
	if (!func_1987(Param0.f_1, 1))
	{
	}
}

int func_1966(var uParam0, int iParam1, int iParam2)
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
		return func_1966(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1976(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_223(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = __LIB_0__::func_998(iParam1);
	}
	if ((bParam3 && __LIB_0__::func_805(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !__LIB_1__::func_87(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_828(Global_40.f_7729, 4096);
		__LIB_0__::func_806(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		__LIB_8__::func_590(bParam0);
	}
	__LIB_1__::func_10();
	if (!__LIB_0__::func_58(iParam1))
	{
		func_2053(iVar0, bParam0, __LIB_0__::func_846(iParam1), 1, 0, 1);
	}
	__LIB_8__::func_845(bParam0);
	return 1;
}

bool func_1987(int iParam0, int iParam1)
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
				if (func_1987(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1987(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1987(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1987(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_2053(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = __LIB_0__::func_449(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_0__::func_191();
	if (bParam5)
	{
		if (!__LIB_1__::func_713(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_156(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		__LIB_0__::func_945();
	}
	__LIB_1__::func_443(iVar3, 1, 1, 1, 1, 1);
	__LIB_8__::func_904(31, 0, 0, 0, 0);
	__LIB_1__::func_36(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(bParam1))
		{
			__LIB_8__::func_904(2, iVar1, 2, 0, 0);
		}
		else
		{
			__LIB_8__::func_904(2, iVar1, 3, bParam1, 0);
		}
	}
	else
	{
		__LIB_10__::func_583(&(Global_1946804.f_1497), bParam1, 1, -1, 1, 1, 1);
	}
}

