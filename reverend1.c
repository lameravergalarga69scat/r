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
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	char* sLocal_56 = NULL;
	char* sLocal_57 = NULL;
	char* sLocal_58 = NULL;
	char* sLocal_59 = NULL;
	char* sLocal_60 = NULL;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	int iLocal_63[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_91[5] = { 0, 0, 0, 0, 0 };
	int iLocal_97[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_108[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_141[3] = { 0, 0, 0 };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	bool bLocal_147 = false;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	struct<5> Local_151 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_156 = { 0, 0, 0, 0, 0 } ;
	struct<21> Local_161[2];
	struct<17> Local_204[2];
	struct<55> Local_239[27];
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
	vector3 vLocal_1741[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
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
	int iLocal_1787[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1798 = 0;
	int iLocal_1799 = 0;
	float fLocal_1800 = 0f;
	var uLocal_1801 = 0;
	int iLocal_1802 = 0;
	int iLocal_1803 = 0;
	int iLocal_1804 = 0;
	int iLocal_1805 = 0;
	int iLocal_1806 = 0;
	int iLocal_1807 = 0;
	int iLocal_1808 = 0;
	int iLocal_1809 = 0;
	int iLocal_1810 = 0;
	int iLocal_1811[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1819[2] = { 0, 0 };
	vector3 vLocal_1822[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_1829[2] = { 0, 0 };
	int iLocal_1832 = 0;
	int iLocal_1833 = 0;
	int iLocal_1834 = 0;
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
	int iLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	int iLocal_1860 = 0;
	int iLocal_1861 = 0;
	int iLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	int iLocal_1872 = 0;
	int iLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	int iLocal_1877 = 0;
	float fLocal_1878 = 0f;
	int iLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	int iLocal_1883 = 0;
	int iLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	int iLocal_1888 = 0;
	int iLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	float fLocal_1893 = 0f;
	int iLocal_1894 = 0;
	int iLocal_1895 = 0;
	int iLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	int iLocal_1900 = 0;
	int iLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	int iLocal_1905 = 0;
	int iLocal_1906 = 0;
	struct<21> Local_1907[1];
	struct<17> Local_1929[2];
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	int iLocal_1970 = 0;
	bool bLocal_1971 = false;
	int iLocal_1972 = 0;
	int iLocal_1973 = 0;
	int iLocal_1974 = 0;
	struct<31> Local_1975 = { 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	int iLocal_2009 = 0;
	int iLocal_2010 = 0;
	int iLocal_2011 = 0;
	var uLocal_2012 = 0;
	int iLocal_2013 = 0;
	int iLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	int iLocal_2018 = 0;
	float fLocal_2019 = 0f;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	int iLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 27;
	var uLocal_2026 = 8;
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
	var uLocal_2047 = -1;
	var uLocal_2048 = 8;
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
	var uLocal_2069 = -1;
	var uLocal_2070 = 8;
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
	var uLocal_2091 = -1;
	var uLocal_2092 = 8;
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
	var uLocal_2113 = -1;
	var uLocal_2114 = 8;
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
	var uLocal_2135 = -1;
	var uLocal_2136 = 8;
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
	var uLocal_2157 = -1;
	var uLocal_2158 = 8;
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
	var uLocal_2179 = -1;
	var uLocal_2180 = 8;
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
	var uLocal_2201 = -1;
	var uLocal_2202 = 8;
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
	var uLocal_2223 = -1;
	var uLocal_2224 = 8;
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
	var uLocal_2245 = -1;
	var uLocal_2246 = 8;
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
	var uLocal_2267 = -1;
	var uLocal_2268 = 8;
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
	var uLocal_2289 = -1;
	var uLocal_2290 = 8;
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
	var uLocal_2311 = -1;
	var uLocal_2312 = 8;
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
	var uLocal_2333 = -1;
	var uLocal_2334 = 8;
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
	var uLocal_2355 = -1;
	var uLocal_2356 = 8;
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
	var uLocal_2377 = -1;
	var uLocal_2378 = 8;
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
	var uLocal_2399 = -1;
	var uLocal_2400 = 8;
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
	var uLocal_2421 = -1;
	var uLocal_2422 = 8;
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
	var uLocal_2443 = -1;
	var uLocal_2444 = 8;
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
	var uLocal_2465 = -1;
	var uLocal_2466 = 8;
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
	var uLocal_2487 = -1;
	var uLocal_2488 = 8;
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
	var uLocal_2509 = -1;
	var uLocal_2510 = 8;
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
	var uLocal_2531 = -1;
	var uLocal_2532 = 8;
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
	var uLocal_2553 = -1;
	var uLocal_2554 = 8;
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
	var uLocal_2575 = -1;
	var uLocal_2576 = 8;
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
	var uLocal_2597 = -1;
	var uLocal_2598 = 8;
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
	var uLocal_2619 = -1;
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
	var uLocal_2658 = 2;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 60;
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
	var uLocal_2843 = 40;
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
	var uLocal_3044 = 20;
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
	var uLocal_3105 = 14;
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
	var uLocal_3150 = 60;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 20;
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
	var uLocal_3222 = 20;
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
	var uLocal_3289 = 20;
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
	var uLocal_3356 = 20;
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
	var uLocal_3423 = 20;
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
	var uLocal_3490 = 20;
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
	var uLocal_3557 = 20;
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
	var uLocal_3624 = 20;
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
	var uLocal_3691 = 20;
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
	var uLocal_3758 = 20;
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
	var uLocal_3825 = 20;
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
	var uLocal_3892 = 20;
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
	var uLocal_3959 = 20;
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
	var uLocal_4026 = 20;
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
	var uLocal_4093 = 20;
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
	var uLocal_4160 = 20;
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
	var uLocal_4227 = 20;
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
	var uLocal_4294 = 20;
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
	var uLocal_4361 = 20;
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
	var uLocal_4428 = 20;
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
	var uLocal_4495 = 20;
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
	var uLocal_4562 = 20;
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
	var uLocal_4629 = 20;
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
	var uLocal_4696 = 20;
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
	var uLocal_4763 = 20;
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
	var uLocal_4830 = 20;
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
	var uLocal_4897 = 20;
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
	var uLocal_4964 = 20;
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
	var uLocal_5031 = 20;
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
	var uLocal_5098 = 20;
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
	var uLocal_5165 = 20;
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
	var uLocal_5232 = 20;
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
	var uLocal_5299 = 20;
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
	var uLocal_5366 = 20;
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
	var uLocal_5433 = 20;
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
	var uLocal_5500 = 20;
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
	var uLocal_5567 = 20;
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
	var uLocal_5634 = 20;
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
	var uLocal_5701 = 20;
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
	var uLocal_5768 = 20;
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
	var uLocal_5835 = 20;
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
	var uLocal_5902 = 20;
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
	var uLocal_5969 = 20;
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
	var uLocal_6036 = 20;
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
	var uLocal_6103 = 20;
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
	var uLocal_6170 = 20;
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
	var uLocal_6237 = 20;
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
	var uLocal_6304 = 20;
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
	var uLocal_6371 = 20;
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
	var uLocal_6438 = 20;
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
	var uLocal_6505 = 20;
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
	var uLocal_6572 = 20;
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
	var uLocal_6639 = 20;
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
	var uLocal_6706 = 20;
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
	var uLocal_6773 = 20;
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
	var uLocal_6840 = 20;
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
	var uLocal_6907 = 20;
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
	var uLocal_6933 = 0;
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
	var uLocal_6974 = 20;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
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
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
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
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 20;
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
	var uLocal_7055 = 0;
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
	var uLocal_7108 = 20;
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
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 10;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
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
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 10;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
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
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
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
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 3;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 5;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 5;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
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
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = 0;
	var uLocal_7310 = 5;
	var uLocal_7311 = 0;
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
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 24;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
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
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
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
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
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
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 30;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 3;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = -1;
	var uLocal_7459 = 0;
	var uLocal_7460 = 5;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 10;
	var uLocal_7472 = 3;
	var uLocal_7473 = 500;
	var uLocal_7474 = 10000;
	var uLocal_7475 = 0;
	var uLocal_7476 = 3;
	var uLocal_7477 = 500;
	var uLocal_7478 = 10000;
	var uLocal_7479 = 0;
	var uLocal_7480 = 3;
	var uLocal_7481 = 500;
	var uLocal_7482 = 10000;
	var uLocal_7483 = 0;
	var uLocal_7484 = 3;
	var uLocal_7485 = 500;
	var uLocal_7486 = 10000;
	var uLocal_7487 = 0;
	var uLocal_7488 = 3;
	var uLocal_7489 = 500;
	var uLocal_7490 = 10000;
	var uLocal_7491 = 0;
	var uLocal_7492 = 3;
	var uLocal_7493 = 500;
	var uLocal_7494 = 10000;
	var uLocal_7495 = 0;
	var uLocal_7496 = 3;
	var uLocal_7497 = 500;
	var uLocal_7498 = 10000;
	var uLocal_7499 = 0;
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
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 3;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = -1;
	var uLocal_7524 = 0;
	var uLocal_7525 = 5;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 10;
	var uLocal_7537 = 3;
	var uLocal_7538 = 500;
	var uLocal_7539 = 10000;
	var uLocal_7540 = 0;
	var uLocal_7541 = 3;
	var uLocal_7542 = 500;
	var uLocal_7543 = 10000;
	var uLocal_7544 = 0;
	var uLocal_7545 = 3;
	var uLocal_7546 = 500;
	var uLocal_7547 = 10000;
	var uLocal_7548 = 0;
	var uLocal_7549 = 3;
	var uLocal_7550 = 500;
	var uLocal_7551 = 10000;
	var uLocal_7552 = 0;
	var uLocal_7553 = 3;
	var uLocal_7554 = 500;
	var uLocal_7555 = 10000;
	var uLocal_7556 = 0;
	var uLocal_7557 = 3;
	var uLocal_7558 = 500;
	var uLocal_7559 = 10000;
	var uLocal_7560 = 0;
	var uLocal_7561 = 3;
	var uLocal_7562 = 500;
	var uLocal_7563 = 10000;
	var uLocal_7564 = 0;
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
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 3;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = -1;
	var uLocal_7589 = 0;
	var uLocal_7590 = 5;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 10;
	var uLocal_7602 = 3;
	var uLocal_7603 = 500;
	var uLocal_7604 = 10000;
	var uLocal_7605 = 0;
	var uLocal_7606 = 3;
	var uLocal_7607 = 500;
	var uLocal_7608 = 10000;
	var uLocal_7609 = 0;
	var uLocal_7610 = 3;
	var uLocal_7611 = 500;
	var uLocal_7612 = 10000;
	var uLocal_7613 = 0;
	var uLocal_7614 = 3;
	var uLocal_7615 = 500;
	var uLocal_7616 = 10000;
	var uLocal_7617 = 0;
	var uLocal_7618 = 3;
	var uLocal_7619 = 500;
	var uLocal_7620 = 10000;
	var uLocal_7621 = 0;
	var uLocal_7622 = 3;
	var uLocal_7623 = 500;
	var uLocal_7624 = 10000;
	var uLocal_7625 = 0;
	var uLocal_7626 = 3;
	var uLocal_7627 = 500;
	var uLocal_7628 = 10000;
	var uLocal_7629 = 0;
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
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 3;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = -1;
	var uLocal_7654 = 0;
	var uLocal_7655 = 5;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 10;
	var uLocal_7667 = 3;
	var uLocal_7668 = 500;
	var uLocal_7669 = 10000;
	var uLocal_7670 = 0;
	var uLocal_7671 = 3;
	var uLocal_7672 = 500;
	var uLocal_7673 = 10000;
	var uLocal_7674 = 0;
	var uLocal_7675 = 3;
	var uLocal_7676 = 500;
	var uLocal_7677 = 10000;
	var uLocal_7678 = 0;
	var uLocal_7679 = 3;
	var uLocal_7680 = 500;
	var uLocal_7681 = 10000;
	var uLocal_7682 = 0;
	var uLocal_7683 = 3;
	var uLocal_7684 = 500;
	var uLocal_7685 = 10000;
	var uLocal_7686 = 0;
	var uLocal_7687 = 3;
	var uLocal_7688 = 500;
	var uLocal_7689 = 10000;
	var uLocal_7690 = 0;
	var uLocal_7691 = 3;
	var uLocal_7692 = 500;
	var uLocal_7693 = 10000;
	var uLocal_7694 = 0;
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
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 3;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = -1;
	var uLocal_7719 = 0;
	var uLocal_7720 = 5;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 10;
	var uLocal_7732 = 3;
	var uLocal_7733 = 500;
	var uLocal_7734 = 10000;
	var uLocal_7735 = 0;
	var uLocal_7736 = 3;
	var uLocal_7737 = 500;
	var uLocal_7738 = 10000;
	var uLocal_7739 = 0;
	var uLocal_7740 = 3;
	var uLocal_7741 = 500;
	var uLocal_7742 = 10000;
	var uLocal_7743 = 0;
	var uLocal_7744 = 3;
	var uLocal_7745 = 500;
	var uLocal_7746 = 10000;
	var uLocal_7747 = 0;
	var uLocal_7748 = 3;
	var uLocal_7749 = 500;
	var uLocal_7750 = 10000;
	var uLocal_7751 = 0;
	var uLocal_7752 = 3;
	var uLocal_7753 = 500;
	var uLocal_7754 = 10000;
	var uLocal_7755 = 0;
	var uLocal_7756 = 3;
	var uLocal_7757 = 500;
	var uLocal_7758 = 10000;
	var uLocal_7759 = 0;
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
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 3;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 0;
	var uLocal_7783 = -1;
	var uLocal_7784 = 0;
	var uLocal_7785 = 5;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 10;
	var uLocal_7797 = 3;
	var uLocal_7798 = 500;
	var uLocal_7799 = 10000;
	var uLocal_7800 = 0;
	var uLocal_7801 = 3;
	var uLocal_7802 = 500;
	var uLocal_7803 = 10000;
	var uLocal_7804 = 0;
	var uLocal_7805 = 3;
	var uLocal_7806 = 500;
	var uLocal_7807 = 10000;
	var uLocal_7808 = 0;
	var uLocal_7809 = 3;
	var uLocal_7810 = 500;
	var uLocal_7811 = 10000;
	var uLocal_7812 = 0;
	var uLocal_7813 = 3;
	var uLocal_7814 = 500;
	var uLocal_7815 = 10000;
	var uLocal_7816 = 0;
	var uLocal_7817 = 3;
	var uLocal_7818 = 500;
	var uLocal_7819 = 10000;
	var uLocal_7820 = 0;
	var uLocal_7821 = 3;
	var uLocal_7822 = 500;
	var uLocal_7823 = 10000;
	var uLocal_7824 = 0;
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
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 3;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 0;
	var uLocal_7848 = -1;
	var uLocal_7849 = 0;
	var uLocal_7850 = 5;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 10;
	var uLocal_7862 = 3;
	var uLocal_7863 = 500;
	var uLocal_7864 = 10000;
	var uLocal_7865 = 0;
	var uLocal_7866 = 3;
	var uLocal_7867 = 500;
	var uLocal_7868 = 10000;
	var uLocal_7869 = 0;
	var uLocal_7870 = 3;
	var uLocal_7871 = 500;
	var uLocal_7872 = 10000;
	var uLocal_7873 = 0;
	var uLocal_7874 = 3;
	var uLocal_7875 = 500;
	var uLocal_7876 = 10000;
	var uLocal_7877 = 0;
	var uLocal_7878 = 3;
	var uLocal_7879 = 500;
	var uLocal_7880 = 10000;
	var uLocal_7881 = 0;
	var uLocal_7882 = 3;
	var uLocal_7883 = 500;
	var uLocal_7884 = 10000;
	var uLocal_7885 = 0;
	var uLocal_7886 = 3;
	var uLocal_7887 = 500;
	var uLocal_7888 = 10000;
	var uLocal_7889 = 0;
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
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 3;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 0;
	var uLocal_7913 = -1;
	var uLocal_7914 = 0;
	var uLocal_7915 = 5;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 10;
	var uLocal_7927 = 3;
	var uLocal_7928 = 500;
	var uLocal_7929 = 10000;
	var uLocal_7930 = 0;
	var uLocal_7931 = 3;
	var uLocal_7932 = 500;
	var uLocal_7933 = 10000;
	var uLocal_7934 = 0;
	var uLocal_7935 = 3;
	var uLocal_7936 = 500;
	var uLocal_7937 = 10000;
	var uLocal_7938 = 0;
	var uLocal_7939 = 3;
	var uLocal_7940 = 500;
	var uLocal_7941 = 10000;
	var uLocal_7942 = 0;
	var uLocal_7943 = 3;
	var uLocal_7944 = 500;
	var uLocal_7945 = 10000;
	var uLocal_7946 = 0;
	var uLocal_7947 = 3;
	var uLocal_7948 = 500;
	var uLocal_7949 = 10000;
	var uLocal_7950 = 0;
	var uLocal_7951 = 3;
	var uLocal_7952 = 500;
	var uLocal_7953 = 10000;
	var uLocal_7954 = 0;
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
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 3;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = -1;
	var uLocal_7979 = 0;
	var uLocal_7980 = 5;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 10;
	var uLocal_7992 = 3;
	var uLocal_7993 = 500;
	var uLocal_7994 = 10000;
	var uLocal_7995 = 0;
	var uLocal_7996 = 3;
	var uLocal_7997 = 500;
	var uLocal_7998 = 10000;
	var uLocal_7999 = 0;
	var uLocal_8000 = 3;
	var uLocal_8001 = 500;
	var uLocal_8002 = 10000;
	var uLocal_8003 = 0;
	var uLocal_8004 = 3;
	var uLocal_8005 = 500;
	var uLocal_8006 = 10000;
	var uLocal_8007 = 0;
	var uLocal_8008 = 3;
	var uLocal_8009 = 500;
	var uLocal_8010 = 10000;
	var uLocal_8011 = 0;
	var uLocal_8012 = 3;
	var uLocal_8013 = 500;
	var uLocal_8014 = 10000;
	var uLocal_8015 = 0;
	var uLocal_8016 = 3;
	var uLocal_8017 = 500;
	var uLocal_8018 = 10000;
	var uLocal_8019 = 0;
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
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 3;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = -1;
	var uLocal_8044 = 0;
	var uLocal_8045 = 5;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 10;
	var uLocal_8057 = 3;
	var uLocal_8058 = 500;
	var uLocal_8059 = 10000;
	var uLocal_8060 = 0;
	var uLocal_8061 = 3;
	var uLocal_8062 = 500;
	var uLocal_8063 = 10000;
	var uLocal_8064 = 0;
	var uLocal_8065 = 3;
	var uLocal_8066 = 500;
	var uLocal_8067 = 10000;
	var uLocal_8068 = 0;
	var uLocal_8069 = 3;
	var uLocal_8070 = 500;
	var uLocal_8071 = 10000;
	var uLocal_8072 = 0;
	var uLocal_8073 = 3;
	var uLocal_8074 = 500;
	var uLocal_8075 = 10000;
	var uLocal_8076 = 0;
	var uLocal_8077 = 3;
	var uLocal_8078 = 500;
	var uLocal_8079 = 10000;
	var uLocal_8080 = 0;
	var uLocal_8081 = 3;
	var uLocal_8082 = 500;
	var uLocal_8083 = 10000;
	var uLocal_8084 = 0;
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
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 3;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = -1;
	var uLocal_8109 = 0;
	var uLocal_8110 = 5;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 10;
	var uLocal_8122 = 3;
	var uLocal_8123 = 500;
	var uLocal_8124 = 10000;
	var uLocal_8125 = 0;
	var uLocal_8126 = 3;
	var uLocal_8127 = 500;
	var uLocal_8128 = 10000;
	var uLocal_8129 = 0;
	var uLocal_8130 = 3;
	var uLocal_8131 = 500;
	var uLocal_8132 = 10000;
	var uLocal_8133 = 0;
	var uLocal_8134 = 3;
	var uLocal_8135 = 500;
	var uLocal_8136 = 10000;
	var uLocal_8137 = 0;
	var uLocal_8138 = 3;
	var uLocal_8139 = 500;
	var uLocal_8140 = 10000;
	var uLocal_8141 = 0;
	var uLocal_8142 = 3;
	var uLocal_8143 = 500;
	var uLocal_8144 = 10000;
	var uLocal_8145 = 0;
	var uLocal_8146 = 3;
	var uLocal_8147 = 500;
	var uLocal_8148 = 10000;
	var uLocal_8149 = 0;
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
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 3;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = -1;
	var uLocal_8174 = 0;
	var uLocal_8175 = 5;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 10;
	var uLocal_8187 = 3;
	var uLocal_8188 = 500;
	var uLocal_8189 = 10000;
	var uLocal_8190 = 0;
	var uLocal_8191 = 3;
	var uLocal_8192 = 500;
	var uLocal_8193 = 10000;
	var uLocal_8194 = 0;
	var uLocal_8195 = 3;
	var uLocal_8196 = 500;
	var uLocal_8197 = 10000;
	var uLocal_8198 = 0;
	var uLocal_8199 = 3;
	var uLocal_8200 = 500;
	var uLocal_8201 = 10000;
	var uLocal_8202 = 0;
	var uLocal_8203 = 3;
	var uLocal_8204 = 500;
	var uLocal_8205 = 10000;
	var uLocal_8206 = 0;
	var uLocal_8207 = 3;
	var uLocal_8208 = 500;
	var uLocal_8209 = 10000;
	var uLocal_8210 = 0;
	var uLocal_8211 = 3;
	var uLocal_8212 = 500;
	var uLocal_8213 = 10000;
	var uLocal_8214 = 0;
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
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 3;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = -1;
	var uLocal_8239 = 0;
	var uLocal_8240 = 5;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 10;
	var uLocal_8252 = 3;
	var uLocal_8253 = 500;
	var uLocal_8254 = 10000;
	var uLocal_8255 = 0;
	var uLocal_8256 = 3;
	var uLocal_8257 = 500;
	var uLocal_8258 = 10000;
	var uLocal_8259 = 0;
	var uLocal_8260 = 3;
	var uLocal_8261 = 500;
	var uLocal_8262 = 10000;
	var uLocal_8263 = 0;
	var uLocal_8264 = 3;
	var uLocal_8265 = 500;
	var uLocal_8266 = 10000;
	var uLocal_8267 = 0;
	var uLocal_8268 = 3;
	var uLocal_8269 = 500;
	var uLocal_8270 = 10000;
	var uLocal_8271 = 0;
	var uLocal_8272 = 3;
	var uLocal_8273 = 500;
	var uLocal_8274 = 10000;
	var uLocal_8275 = 0;
	var uLocal_8276 = 3;
	var uLocal_8277 = 500;
	var uLocal_8278 = 10000;
	var uLocal_8279 = 0;
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
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 3;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = -1;
	var uLocal_8304 = 0;
	var uLocal_8305 = 5;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 10;
	var uLocal_8317 = 3;
	var uLocal_8318 = 500;
	var uLocal_8319 = 10000;
	var uLocal_8320 = 0;
	var uLocal_8321 = 3;
	var uLocal_8322 = 500;
	var uLocal_8323 = 10000;
	var uLocal_8324 = 0;
	var uLocal_8325 = 3;
	var uLocal_8326 = 500;
	var uLocal_8327 = 10000;
	var uLocal_8328 = 0;
	var uLocal_8329 = 3;
	var uLocal_8330 = 500;
	var uLocal_8331 = 10000;
	var uLocal_8332 = 0;
	var uLocal_8333 = 3;
	var uLocal_8334 = 500;
	var uLocal_8335 = 10000;
	var uLocal_8336 = 0;
	var uLocal_8337 = 3;
	var uLocal_8338 = 500;
	var uLocal_8339 = 10000;
	var uLocal_8340 = 0;
	var uLocal_8341 = 3;
	var uLocal_8342 = 500;
	var uLocal_8343 = 10000;
	var uLocal_8344 = 0;
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
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 3;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = -1;
	var uLocal_8369 = 0;
	var uLocal_8370 = 5;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 10;
	var uLocal_8382 = 3;
	var uLocal_8383 = 500;
	var uLocal_8384 = 10000;
	var uLocal_8385 = 0;
	var uLocal_8386 = 3;
	var uLocal_8387 = 500;
	var uLocal_8388 = 10000;
	var uLocal_8389 = 0;
	var uLocal_8390 = 3;
	var uLocal_8391 = 500;
	var uLocal_8392 = 10000;
	var uLocal_8393 = 0;
	var uLocal_8394 = 3;
	var uLocal_8395 = 500;
	var uLocal_8396 = 10000;
	var uLocal_8397 = 0;
	var uLocal_8398 = 3;
	var uLocal_8399 = 500;
	var uLocal_8400 = 10000;
	var uLocal_8401 = 0;
	var uLocal_8402 = 3;
	var uLocal_8403 = 500;
	var uLocal_8404 = 10000;
	var uLocal_8405 = 0;
	var uLocal_8406 = 3;
	var uLocal_8407 = 500;
	var uLocal_8408 = 10000;
	var uLocal_8409 = 0;
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
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 3;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = -1;
	var uLocal_8434 = 0;
	var uLocal_8435 = 5;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 10;
	var uLocal_8447 = 3;
	var uLocal_8448 = 500;
	var uLocal_8449 = 10000;
	var uLocal_8450 = 0;
	var uLocal_8451 = 3;
	var uLocal_8452 = 500;
	var uLocal_8453 = 10000;
	var uLocal_8454 = 0;
	var uLocal_8455 = 3;
	var uLocal_8456 = 500;
	var uLocal_8457 = 10000;
	var uLocal_8458 = 0;
	var uLocal_8459 = 3;
	var uLocal_8460 = 500;
	var uLocal_8461 = 10000;
	var uLocal_8462 = 0;
	var uLocal_8463 = 3;
	var uLocal_8464 = 500;
	var uLocal_8465 = 10000;
	var uLocal_8466 = 0;
	var uLocal_8467 = 3;
	var uLocal_8468 = 500;
	var uLocal_8469 = 10000;
	var uLocal_8470 = 0;
	var uLocal_8471 = 3;
	var uLocal_8472 = 500;
	var uLocal_8473 = 10000;
	var uLocal_8474 = 0;
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
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 3;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = -1;
	var uLocal_8499 = 0;
	var uLocal_8500 = 5;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 10;
	var uLocal_8512 = 3;
	var uLocal_8513 = 500;
	var uLocal_8514 = 10000;
	var uLocal_8515 = 0;
	var uLocal_8516 = 3;
	var uLocal_8517 = 500;
	var uLocal_8518 = 10000;
	var uLocal_8519 = 0;
	var uLocal_8520 = 3;
	var uLocal_8521 = 500;
	var uLocal_8522 = 10000;
	var uLocal_8523 = 0;
	var uLocal_8524 = 3;
	var uLocal_8525 = 500;
	var uLocal_8526 = 10000;
	var uLocal_8527 = 0;
	var uLocal_8528 = 3;
	var uLocal_8529 = 500;
	var uLocal_8530 = 10000;
	var uLocal_8531 = 0;
	var uLocal_8532 = 3;
	var uLocal_8533 = 500;
	var uLocal_8534 = 10000;
	var uLocal_8535 = 0;
	var uLocal_8536 = 3;
	var uLocal_8537 = 500;
	var uLocal_8538 = 10000;
	var uLocal_8539 = 0;
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
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 3;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 0;
	var uLocal_8563 = -1;
	var uLocal_8564 = 0;
	var uLocal_8565 = 5;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 10;
	var uLocal_8577 = 3;
	var uLocal_8578 = 500;
	var uLocal_8579 = 10000;
	var uLocal_8580 = 0;
	var uLocal_8581 = 3;
	var uLocal_8582 = 500;
	var uLocal_8583 = 10000;
	var uLocal_8584 = 0;
	var uLocal_8585 = 3;
	var uLocal_8586 = 500;
	var uLocal_8587 = 10000;
	var uLocal_8588 = 0;
	var uLocal_8589 = 3;
	var uLocal_8590 = 500;
	var uLocal_8591 = 10000;
	var uLocal_8592 = 0;
	var uLocal_8593 = 3;
	var uLocal_8594 = 500;
	var uLocal_8595 = 10000;
	var uLocal_8596 = 0;
	var uLocal_8597 = 3;
	var uLocal_8598 = 500;
	var uLocal_8599 = 10000;
	var uLocal_8600 = 0;
	var uLocal_8601 = 3;
	var uLocal_8602 = 500;
	var uLocal_8603 = 10000;
	var uLocal_8604 = 0;
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
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 3;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = -1;
	var uLocal_8629 = 0;
	var uLocal_8630 = 5;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 10;
	var uLocal_8642 = 3;
	var uLocal_8643 = 500;
	var uLocal_8644 = 10000;
	var uLocal_8645 = 0;
	var uLocal_8646 = 3;
	var uLocal_8647 = 500;
	var uLocal_8648 = 10000;
	var uLocal_8649 = 0;
	var uLocal_8650 = 3;
	var uLocal_8651 = 500;
	var uLocal_8652 = 10000;
	var uLocal_8653 = 0;
	var uLocal_8654 = 3;
	var uLocal_8655 = 500;
	var uLocal_8656 = 10000;
	var uLocal_8657 = 0;
	var uLocal_8658 = 3;
	var uLocal_8659 = 500;
	var uLocal_8660 = 10000;
	var uLocal_8661 = 0;
	var uLocal_8662 = 3;
	var uLocal_8663 = 500;
	var uLocal_8664 = 10000;
	var uLocal_8665 = 0;
	var uLocal_8666 = 3;
	var uLocal_8667 = 500;
	var uLocal_8668 = 10000;
	var uLocal_8669 = 0;
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
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 3;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = -1;
	var uLocal_8694 = 0;
	var uLocal_8695 = 5;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 10;
	var uLocal_8707 = 3;
	var uLocal_8708 = 500;
	var uLocal_8709 = 10000;
	var uLocal_8710 = 0;
	var uLocal_8711 = 3;
	var uLocal_8712 = 500;
	var uLocal_8713 = 10000;
	var uLocal_8714 = 0;
	var uLocal_8715 = 3;
	var uLocal_8716 = 500;
	var uLocal_8717 = 10000;
	var uLocal_8718 = 0;
	var uLocal_8719 = 3;
	var uLocal_8720 = 500;
	var uLocal_8721 = 10000;
	var uLocal_8722 = 0;
	var uLocal_8723 = 3;
	var uLocal_8724 = 500;
	var uLocal_8725 = 10000;
	var uLocal_8726 = 0;
	var uLocal_8727 = 3;
	var uLocal_8728 = 500;
	var uLocal_8729 = 10000;
	var uLocal_8730 = 0;
	var uLocal_8731 = 3;
	var uLocal_8732 = 500;
	var uLocal_8733 = 10000;
	var uLocal_8734 = 0;
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
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 3;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = -1;
	var uLocal_8759 = 0;
	var uLocal_8760 = 5;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 10;
	var uLocal_8772 = 3;
	var uLocal_8773 = 500;
	var uLocal_8774 = 10000;
	var uLocal_8775 = 0;
	var uLocal_8776 = 3;
	var uLocal_8777 = 500;
	var uLocal_8778 = 10000;
	var uLocal_8779 = 0;
	var uLocal_8780 = 3;
	var uLocal_8781 = 500;
	var uLocal_8782 = 10000;
	var uLocal_8783 = 0;
	var uLocal_8784 = 3;
	var uLocal_8785 = 500;
	var uLocal_8786 = 10000;
	var uLocal_8787 = 0;
	var uLocal_8788 = 3;
	var uLocal_8789 = 500;
	var uLocal_8790 = 10000;
	var uLocal_8791 = 0;
	var uLocal_8792 = 3;
	var uLocal_8793 = 500;
	var uLocal_8794 = 10000;
	var uLocal_8795 = 0;
	var uLocal_8796 = 3;
	var uLocal_8797 = 500;
	var uLocal_8798 = 10000;
	var uLocal_8799 = 0;
	var uLocal_8800 = 3;
	var uLocal_8801 = 500;
	var uLocal_8802 = 10000;
	var uLocal_8803 = 0;
	var uLocal_8804 = 3;
	var uLocal_8805 = 500;
	var uLocal_8806 = 10000;
	var uLocal_8807 = 0;
	var uLocal_8808 = 3;
	var uLocal_8809 = 500;
	var uLocal_8810 = 10000;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 3;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = -1;
	var uLocal_8824 = 0;
	var uLocal_8825 = 5;
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
	var uLocal_8836 = 10;
	var uLocal_8837 = 3;
	var uLocal_8838 = 500;
	var uLocal_8839 = 10000;
	var uLocal_8840 = 0;
	var uLocal_8841 = 3;
	var uLocal_8842 = 500;
	var uLocal_8843 = 10000;
	var uLocal_8844 = 0;
	var uLocal_8845 = 3;
	var uLocal_8846 = 500;
	var uLocal_8847 = 10000;
	var uLocal_8848 = 0;
	var uLocal_8849 = 3;
	var uLocal_8850 = 500;
	var uLocal_8851 = 10000;
	var uLocal_8852 = 0;
	var uLocal_8853 = 3;
	var uLocal_8854 = 500;
	var uLocal_8855 = 10000;
	var uLocal_8856 = 0;
	var uLocal_8857 = 3;
	var uLocal_8858 = 500;
	var uLocal_8859 = 10000;
	var uLocal_8860 = 0;
	var uLocal_8861 = 3;
	var uLocal_8862 = 500;
	var uLocal_8863 = 10000;
	var uLocal_8864 = 0;
	var uLocal_8865 = 3;
	var uLocal_8866 = 500;
	var uLocal_8867 = 10000;
	var uLocal_8868 = 0;
	var uLocal_8869 = 3;
	var uLocal_8870 = 500;
	var uLocal_8871 = 10000;
	var uLocal_8872 = 0;
	var uLocal_8873 = 3;
	var uLocal_8874 = 500;
	var uLocal_8875 = 10000;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 3;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = -1;
	var uLocal_8889 = 0;
	var uLocal_8890 = 5;
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
	var uLocal_8901 = 10;
	var uLocal_8902 = 3;
	var uLocal_8903 = 500;
	var uLocal_8904 = 10000;
	var uLocal_8905 = 0;
	var uLocal_8906 = 3;
	var uLocal_8907 = 500;
	var uLocal_8908 = 10000;
	var uLocal_8909 = 0;
	var uLocal_8910 = 3;
	var uLocal_8911 = 500;
	var uLocal_8912 = 10000;
	var uLocal_8913 = 0;
	var uLocal_8914 = 3;
	var uLocal_8915 = 500;
	var uLocal_8916 = 10000;
	var uLocal_8917 = 0;
	var uLocal_8918 = 3;
	var uLocal_8919 = 500;
	var uLocal_8920 = 10000;
	var uLocal_8921 = 0;
	var uLocal_8922 = 3;
	var uLocal_8923 = 500;
	var uLocal_8924 = 10000;
	var uLocal_8925 = 0;
	var uLocal_8926 = 3;
	var uLocal_8927 = 500;
	var uLocal_8928 = 10000;
	var uLocal_8929 = 0;
	var uLocal_8930 = 3;
	var uLocal_8931 = 500;
	var uLocal_8932 = 10000;
	var uLocal_8933 = 0;
	var uLocal_8934 = 3;
	var uLocal_8935 = 500;
	var uLocal_8936 = 10000;
	var uLocal_8937 = 0;
	var uLocal_8938 = 3;
	var uLocal_8939 = 500;
	var uLocal_8940 = 10000;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 3;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = -1;
	var uLocal_8954 = 0;
	var uLocal_8955 = 5;
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
	var uLocal_8966 = 10;
	var uLocal_8967 = 3;
	var uLocal_8968 = 500;
	var uLocal_8969 = 10000;
	var uLocal_8970 = 0;
	var uLocal_8971 = 3;
	var uLocal_8972 = 500;
	var uLocal_8973 = 10000;
	var uLocal_8974 = 0;
	var uLocal_8975 = 3;
	var uLocal_8976 = 500;
	var uLocal_8977 = 10000;
	var uLocal_8978 = 0;
	var uLocal_8979 = 3;
	var uLocal_8980 = 500;
	var uLocal_8981 = 10000;
	var uLocal_8982 = 0;
	var uLocal_8983 = 3;
	var uLocal_8984 = 500;
	var uLocal_8985 = 10000;
	var uLocal_8986 = 0;
	var uLocal_8987 = 3;
	var uLocal_8988 = 500;
	var uLocal_8989 = 10000;
	var uLocal_8990 = 0;
	var uLocal_8991 = 3;
	var uLocal_8992 = 500;
	var uLocal_8993 = 10000;
	var uLocal_8994 = 0;
	var uLocal_8995 = 3;
	var uLocal_8996 = 500;
	var uLocal_8997 = 10000;
	var uLocal_8998 = 0;
	var uLocal_8999 = 3;
	var uLocal_9000 = 500;
	var uLocal_9001 = 10000;
	var uLocal_9002 = 0;
	var uLocal_9003 = 3;
	var uLocal_9004 = 500;
	var uLocal_9005 = 10000;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 3;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = -1;
	var uLocal_9019 = 0;
	var uLocal_9020 = 5;
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
	var uLocal_9031 = 10;
	var uLocal_9032 = 3;
	var uLocal_9033 = 500;
	var uLocal_9034 = 10000;
	var uLocal_9035 = 0;
	var uLocal_9036 = 3;
	var uLocal_9037 = 500;
	var uLocal_9038 = 10000;
	var uLocal_9039 = 0;
	var uLocal_9040 = 3;
	var uLocal_9041 = 500;
	var uLocal_9042 = 10000;
	var uLocal_9043 = 0;
	var uLocal_9044 = 3;
	var uLocal_9045 = 500;
	var uLocal_9046 = 10000;
	var uLocal_9047 = 0;
	var uLocal_9048 = 3;
	var uLocal_9049 = 500;
	var uLocal_9050 = 10000;
	var uLocal_9051 = 0;
	var uLocal_9052 = 3;
	var uLocal_9053 = 500;
	var uLocal_9054 = 10000;
	var uLocal_9055 = 0;
	var uLocal_9056 = 3;
	var uLocal_9057 = 500;
	var uLocal_9058 = 10000;
	var uLocal_9059 = 0;
	var uLocal_9060 = 3;
	var uLocal_9061 = 500;
	var uLocal_9062 = 10000;
	var uLocal_9063 = 0;
	var uLocal_9064 = 3;
	var uLocal_9065 = 500;
	var uLocal_9066 = 10000;
	var uLocal_9067 = 0;
	var uLocal_9068 = 3;
	var uLocal_9069 = 500;
	var uLocal_9070 = 10000;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 3;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = -1;
	var uLocal_9084 = 0;
	var uLocal_9085 = 5;
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
	var uLocal_9096 = 10;
	var uLocal_9097 = 3;
	var uLocal_9098 = 500;
	var uLocal_9099 = 10000;
	var uLocal_9100 = 0;
	var uLocal_9101 = 3;
	var uLocal_9102 = 500;
	var uLocal_9103 = 10000;
	var uLocal_9104 = 0;
	var uLocal_9105 = 3;
	var uLocal_9106 = 500;
	var uLocal_9107 = 10000;
	var uLocal_9108 = 0;
	var uLocal_9109 = 3;
	var uLocal_9110 = 500;
	var uLocal_9111 = 10000;
	var uLocal_9112 = 0;
	var uLocal_9113 = 3;
	var uLocal_9114 = 500;
	var uLocal_9115 = 10000;
	var uLocal_9116 = 0;
	var uLocal_9117 = 3;
	var uLocal_9118 = 500;
	var uLocal_9119 = 10000;
	var uLocal_9120 = 0;
	var uLocal_9121 = 3;
	var uLocal_9122 = 500;
	var uLocal_9123 = 10000;
	var uLocal_9124 = 0;
	var uLocal_9125 = 3;
	var uLocal_9126 = 500;
	var uLocal_9127 = 10000;
	var uLocal_9128 = 0;
	var uLocal_9129 = 3;
	var uLocal_9130 = 500;
	var uLocal_9131 = 10000;
	var uLocal_9132 = 0;
	var uLocal_9133 = 3;
	var uLocal_9134 = 500;
	var uLocal_9135 = 10000;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 3;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = -1;
	var uLocal_9149 = 0;
	var uLocal_9150 = 5;
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
	var uLocal_9161 = 10;
	var uLocal_9162 = 3;
	var uLocal_9163 = 500;
	var uLocal_9164 = 10000;
	var uLocal_9165 = 0;
	var uLocal_9166 = 3;
	var uLocal_9167 = 500;
	var uLocal_9168 = 10000;
	var uLocal_9169 = 0;
	var uLocal_9170 = 3;
	var uLocal_9171 = 500;
	var uLocal_9172 = 10000;
	var uLocal_9173 = 0;
	var uLocal_9174 = 3;
	var uLocal_9175 = 500;
	var uLocal_9176 = 10000;
	var uLocal_9177 = 0;
	var uLocal_9178 = 3;
	var uLocal_9179 = 500;
	var uLocal_9180 = 10000;
	var uLocal_9181 = 0;
	var uLocal_9182 = 3;
	var uLocal_9183 = 500;
	var uLocal_9184 = 10000;
	var uLocal_9185 = 0;
	var uLocal_9186 = 3;
	var uLocal_9187 = 500;
	var uLocal_9188 = 10000;
	var uLocal_9189 = 0;
	var uLocal_9190 = 3;
	var uLocal_9191 = 500;
	var uLocal_9192 = 10000;
	var uLocal_9193 = 0;
	var uLocal_9194 = 3;
	var uLocal_9195 = 500;
	var uLocal_9196 = 10000;
	var uLocal_9197 = 0;
	var uLocal_9198 = 3;
	var uLocal_9199 = 500;
	var uLocal_9200 = 10000;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 3;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = -1;
	var uLocal_9214 = 0;
	var uLocal_9215 = 5;
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
	var uLocal_9226 = 10;
	var uLocal_9227 = 3;
	var uLocal_9228 = 500;
	var uLocal_9229 = 10000;
	var uLocal_9230 = 0;
	var uLocal_9231 = 3;
	var uLocal_9232 = 500;
	var uLocal_9233 = 10000;
	var uLocal_9234 = 0;
	var uLocal_9235 = 3;
	var uLocal_9236 = 500;
	var uLocal_9237 = 10000;
	var uLocal_9238 = 0;
	var uLocal_9239 = 3;
	var uLocal_9240 = 500;
	var uLocal_9241 = 10000;
	var uLocal_9242 = 0;
	var uLocal_9243 = 3;
	var uLocal_9244 = 500;
	var uLocal_9245 = 10000;
	var uLocal_9246 = 0;
	var uLocal_9247 = 3;
	var uLocal_9248 = 500;
	var uLocal_9249 = 10000;
	var uLocal_9250 = 0;
	var uLocal_9251 = 3;
	var uLocal_9252 = 500;
	var uLocal_9253 = 10000;
	var uLocal_9254 = 0;
	var uLocal_9255 = 3;
	var uLocal_9256 = 500;
	var uLocal_9257 = 10000;
	var uLocal_9258 = 0;
	var uLocal_9259 = 3;
	var uLocal_9260 = 500;
	var uLocal_9261 = 10000;
	var uLocal_9262 = 0;
	var uLocal_9263 = 3;
	var uLocal_9264 = 500;
	var uLocal_9265 = 10000;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 3;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = -1;
	var uLocal_9279 = 0;
	var uLocal_9280 = 5;
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
	var uLocal_9291 = 10;
	var uLocal_9292 = 3;
	var uLocal_9293 = 500;
	var uLocal_9294 = 10000;
	var uLocal_9295 = 0;
	var uLocal_9296 = 3;
	var uLocal_9297 = 500;
	var uLocal_9298 = 10000;
	var uLocal_9299 = 0;
	var uLocal_9300 = 3;
	var uLocal_9301 = 500;
	var uLocal_9302 = 10000;
	var uLocal_9303 = 0;
	var uLocal_9304 = 3;
	var uLocal_9305 = 500;
	var uLocal_9306 = 10000;
	var uLocal_9307 = 0;
	var uLocal_9308 = 3;
	var uLocal_9309 = 500;
	var uLocal_9310 = 10000;
	var uLocal_9311 = 0;
	var uLocal_9312 = 3;
	var uLocal_9313 = 500;
	var uLocal_9314 = 10000;
	var uLocal_9315 = 0;
	var uLocal_9316 = 3;
	var uLocal_9317 = 500;
	var uLocal_9318 = 10000;
	var uLocal_9319 = 0;
	var uLocal_9320 = 3;
	var uLocal_9321 = 500;
	var uLocal_9322 = 10000;
	var uLocal_9323 = 0;
	var uLocal_9324 = 3;
	var uLocal_9325 = 500;
	var uLocal_9326 = 10000;
	var uLocal_9327 = 0;
	var uLocal_9328 = 3;
	var uLocal_9329 = 500;
	var uLocal_9330 = 10000;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 3;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = -1;
	var uLocal_9344 = 0;
	var uLocal_9345 = 5;
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
	var uLocal_9356 = 10;
	var uLocal_9357 = 3;
	var uLocal_9358 = 500;
	var uLocal_9359 = 10000;
	var uLocal_9360 = 0;
	var uLocal_9361 = 3;
	var uLocal_9362 = 500;
	var uLocal_9363 = 10000;
	var uLocal_9364 = 0;
	var uLocal_9365 = 3;
	var uLocal_9366 = 500;
	var uLocal_9367 = 10000;
	var uLocal_9368 = 0;
	var uLocal_9369 = 3;
	var uLocal_9370 = 500;
	var uLocal_9371 = 10000;
	var uLocal_9372 = 0;
	var uLocal_9373 = 3;
	var uLocal_9374 = 500;
	var uLocal_9375 = 10000;
	var uLocal_9376 = 0;
	var uLocal_9377 = 3;
	var uLocal_9378 = 500;
	var uLocal_9379 = 10000;
	var uLocal_9380 = 0;
	var uLocal_9381 = 3;
	var uLocal_9382 = 500;
	var uLocal_9383 = 10000;
	var uLocal_9384 = 0;
	var uLocal_9385 = 3;
	var uLocal_9386 = 500;
	var uLocal_9387 = 10000;
	var uLocal_9388 = 0;
	var uLocal_9389 = 3;
	var uLocal_9390 = 500;
	var uLocal_9391 = 10000;
	var uLocal_9392 = 0;
	var uLocal_9393 = 3;
	var uLocal_9394 = 500;
	var uLocal_9395 = 10000;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 1;
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
	var uLocal_9412 = 65;
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
	var uLocal_10193 = 1097859072;
	var uLocal_10194 = 1101004800;
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
	var uLocal_10221 = 4;
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
	var uLocal_10293 = 40;
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
	var uLocal_10934 = 40;
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
	var uLocal_11575 = 60;
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
	var uLocal_12498 = 0;
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
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 15;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
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
	var uLocal_12551 = 0;
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
	var uLocal_12564 = 0;
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
	var uLocal_12577 = 0;
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
	var uLocal_12590 = 0;
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
	var uLocal_12603 = 0;
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
	var uLocal_12616 = 0;
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
	var uLocal_12629 = 0;
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
	var uLocal_12642 = 0;
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
	var uLocal_12655 = 0;
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
	var uLocal_12668 = 0;
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
	var uLocal_12681 = 0;
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
	var uLocal_12694 = 0;
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
	var uLocal_12707 = 0;
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
	var uLocal_12720 = 0;
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
	var uLocal_12733 = 0;
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
	var uLocal_12746 = 0;
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
	var uLocal_12759 = 0;
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
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = 10;
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
	var uLocal_12790 = 0;
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
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = -1;
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
	var uLocal_12819 = 65;
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
	var uLocal_12830 = -1569615261;
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
	var uLocal_12842 = 0;
	var uLocal_12843 = -1569615261;
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
	var uLocal_12855 = 0;
	var uLocal_12856 = -1569615261;
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
	var uLocal_12868 = 0;
	var uLocal_12869 = -1569615261;
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
	var uLocal_12881 = 0;
	var uLocal_12882 = -1569615261;
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
	var uLocal_12894 = 0;
	var uLocal_12895 = -1569615261;
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
	var uLocal_12907 = 0;
	var uLocal_12908 = -1569615261;
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
	var uLocal_12920 = 0;
	var uLocal_12921 = -1569615261;
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
	var uLocal_12933 = 0;
	var uLocal_12934 = -1569615261;
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
	var uLocal_12946 = 0;
	var uLocal_12947 = -1569615261;
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
	var uLocal_12959 = 0;
	var uLocal_12960 = -1569615261;
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
	var uLocal_12972 = 0;
	var uLocal_12973 = -1569615261;
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
	var uLocal_12985 = 0;
	var uLocal_12986 = -1569615261;
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
	var uLocal_12998 = 0;
	var uLocal_12999 = -1569615261;
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
	var uLocal_13011 = 0;
	var uLocal_13012 = -1569615261;
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
	var uLocal_13024 = 0;
	var uLocal_13025 = -1569615261;
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
	var uLocal_13037 = 0;
	var uLocal_13038 = -1569615261;
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
	var uLocal_13050 = 0;
	var uLocal_13051 = -1569615261;
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
	var uLocal_13063 = 0;
	var uLocal_13064 = -1569615261;
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
	var uLocal_13076 = 0;
	var uLocal_13077 = -1569615261;
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
	var uLocal_13089 = 0;
	var uLocal_13090 = -1569615261;
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
	var uLocal_13102 = 0;
	var uLocal_13103 = -1569615261;
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
	var uLocal_13115 = 0;
	var uLocal_13116 = -1569615261;
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
	var uLocal_13128 = 0;
	var uLocal_13129 = -1569615261;
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
	var uLocal_13142 = -1569615261;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = 0;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = -1569615261;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 0;
	var uLocal_13167 = 0;
	var uLocal_13168 = -1569615261;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = -1569615261;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = -1569615261;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = -1569615261;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = -1569615261;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = -1569615261;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = -1569615261;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = -1569615261;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = -1569615261;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = 0;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = -1569615261;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 0;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = -1569615261;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 0;
	var uLocal_13311 = -1569615261;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = -1569615261;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = 0;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = -1569615261;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = -1569615261;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = -1569615261;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = -1569615261;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = 0;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = -1569615261;
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
	var uLocal_13401 = 0;
	var uLocal_13402 = -1569615261;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = -1569615261;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 0;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = -1569615261;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = -1569615261;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = -1569615261;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = -1569615261;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = 0;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = -1569615261;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = -1569615261;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = -1569615261;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = 0;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = -1569615261;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = -1569615261;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
	var uLocal_13545 = -1569615261;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = -1569615261;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = 0;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = -1569615261;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = -1569615261;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = -1569615261;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = 0;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = -1569615261;
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
	var uLocal_13623 = -1569615261;
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
	var uLocal_13636 = -1569615261;
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
	var uLocal_13649 = -1569615261;
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
	var uLocal_13662 = -1569615261;
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
	var uLocal_13680 = 1;
	var uLocal_13681 = 30;
	var uLocal_13682 = -1;
	var uLocal_13683 = 0;
	var uLocal_13684 = 1;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 1065353216;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 1065353216;
	var uLocal_13698 = 1;
	var uLocal_13699 = 0;
	var uLocal_13700 = -1;
	var uLocal_13701 = 0;
	var uLocal_13702 = 1;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 1065353216;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 1065353216;
	var uLocal_13716 = 1;
	var uLocal_13717 = 0;
	var uLocal_13718 = -1;
	var uLocal_13719 = 0;
	var uLocal_13720 = 1;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 1065353216;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 1065353216;
	var uLocal_13734 = 1;
	var uLocal_13735 = 0;
	var uLocal_13736 = -1;
	var uLocal_13737 = 0;
	var uLocal_13738 = 1;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 1065353216;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 1065353216;
	var uLocal_13752 = 1;
	var uLocal_13753 = 0;
	var uLocal_13754 = -1;
	var uLocal_13755 = 0;
	var uLocal_13756 = 1;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 1065353216;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 1065353216;
	var uLocal_13770 = 1;
	var uLocal_13771 = 0;
	var uLocal_13772 = -1;
	var uLocal_13773 = 0;
	var uLocal_13774 = 1;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 1065353216;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 1065353216;
	var uLocal_13788 = 1;
	var uLocal_13789 = 0;
	var uLocal_13790 = -1;
	var uLocal_13791 = 0;
	var uLocal_13792 = 1;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 1065353216;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 1065353216;
	var uLocal_13806 = 1;
	var uLocal_13807 = 0;
	var uLocal_13808 = -1;
	var uLocal_13809 = 0;
	var uLocal_13810 = 1;
	var uLocal_13811 = 0;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 0;
	var uLocal_13815 = 0;
	var uLocal_13816 = 0;
	var uLocal_13817 = 0;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 1065353216;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 1065353216;
	var uLocal_13824 = 1;
	var uLocal_13825 = 0;
	var uLocal_13826 = -1;
	var uLocal_13827 = 0;
	var uLocal_13828 = 1;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 1065353216;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 1065353216;
	var uLocal_13842 = 1;
	var uLocal_13843 = 0;
	var uLocal_13844 = -1;
	var uLocal_13845 = 0;
	var uLocal_13846 = 1;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 1065353216;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 1065353216;
	var uLocal_13860 = 1;
	var uLocal_13861 = 0;
	var uLocal_13862 = -1;
	var uLocal_13863 = 0;
	var uLocal_13864 = 1;
	var uLocal_13865 = 0;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 0;
	var uLocal_13869 = 0;
	var uLocal_13870 = 0;
	var uLocal_13871 = 0;
	var uLocal_13872 = 0;
	var uLocal_13873 = 0;
	var uLocal_13874 = 1065353216;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 1065353216;
	var uLocal_13878 = 1;
	var uLocal_13879 = 0;
	var uLocal_13880 = -1;
	var uLocal_13881 = 0;
	var uLocal_13882 = 1;
	var uLocal_13883 = 0;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 0;
	var uLocal_13887 = 0;
	var uLocal_13888 = 0;
	var uLocal_13889 = 0;
	var uLocal_13890 = 0;
	var uLocal_13891 = 0;
	var uLocal_13892 = 1065353216;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 1065353216;
	var uLocal_13896 = 1;
	var uLocal_13897 = 0;
	var uLocal_13898 = -1;
	var uLocal_13899 = 0;
	var uLocal_13900 = 1;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 0;
	var uLocal_13909 = 0;
	var uLocal_13910 = 1065353216;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 1065353216;
	var uLocal_13914 = 1;
	var uLocal_13915 = 0;
	var uLocal_13916 = -1;
	var uLocal_13917 = 0;
	var uLocal_13918 = 1;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 0;
	var uLocal_13927 = 0;
	var uLocal_13928 = 1065353216;
	var uLocal_13929 = 0;
	var uLocal_13930 = 0;
	var uLocal_13931 = 1065353216;
	var uLocal_13932 = 1;
	var uLocal_13933 = 0;
	var uLocal_13934 = -1;
	var uLocal_13935 = 0;
	var uLocal_13936 = 1;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 0;
	var uLocal_13945 = 0;
	var uLocal_13946 = 1065353216;
	var uLocal_13947 = 0;
	var uLocal_13948 = 0;
	var uLocal_13949 = 1065353216;
	var uLocal_13950 = 1;
	var uLocal_13951 = 0;
	var uLocal_13952 = -1;
	var uLocal_13953 = 0;
	var uLocal_13954 = 1;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 0;
	var uLocal_13963 = 0;
	var uLocal_13964 = 1065353216;
	var uLocal_13965 = 0;
	var uLocal_13966 = 0;
	var uLocal_13967 = 1065353216;
	var uLocal_13968 = 1;
	var uLocal_13969 = 0;
	var uLocal_13970 = -1;
	var uLocal_13971 = 0;
	var uLocal_13972 = 1;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 0;
	var uLocal_13981 = 0;
	var uLocal_13982 = 1065353216;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = 1065353216;
	var uLocal_13986 = 1;
	var uLocal_13987 = 0;
	var uLocal_13988 = -1;
	var uLocal_13989 = 0;
	var uLocal_13990 = 1;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = 0;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 0;
	var uLocal_13999 = 0;
	var uLocal_14000 = 1065353216;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = 1065353216;
	var uLocal_14004 = 1;
	var uLocal_14005 = 0;
	var uLocal_14006 = -1;
	var uLocal_14007 = 0;
	var uLocal_14008 = 1;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = 0;
	var uLocal_14017 = 0;
	var uLocal_14018 = 1065353216;
	var uLocal_14019 = 0;
	var uLocal_14020 = 0;
	var uLocal_14021 = 1065353216;
	var uLocal_14022 = 1;
	var uLocal_14023 = 0;
	var uLocal_14024 = -1;
	var uLocal_14025 = 0;
	var uLocal_14026 = 1;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = 0;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 0;
	var uLocal_14035 = 0;
	var uLocal_14036 = 1065353216;
	var uLocal_14037 = 0;
	var uLocal_14038 = 0;
	var uLocal_14039 = 1065353216;
	var uLocal_14040 = 1;
	var uLocal_14041 = 0;
	var uLocal_14042 = -1;
	var uLocal_14043 = 0;
	var uLocal_14044 = 1;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = 0;
	var uLocal_14052 = 0;
	var uLocal_14053 = 0;
	var uLocal_14054 = 1065353216;
	var uLocal_14055 = 0;
	var uLocal_14056 = 0;
	var uLocal_14057 = 1065353216;
	var uLocal_14058 = 1;
	var uLocal_14059 = 0;
	var uLocal_14060 = -1;
	var uLocal_14061 = 0;
	var uLocal_14062 = 1;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 0;
	var uLocal_14071 = 0;
	var uLocal_14072 = 1065353216;
	var uLocal_14073 = 0;
	var uLocal_14074 = 0;
	var uLocal_14075 = 1065353216;
	var uLocal_14076 = 1;
	var uLocal_14077 = 0;
	var uLocal_14078 = -1;
	var uLocal_14079 = 0;
	var uLocal_14080 = 1;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = 0;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 1065353216;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 1065353216;
	var uLocal_14094 = 1;
	var uLocal_14095 = 0;
	var uLocal_14096 = -1;
	var uLocal_14097 = 0;
	var uLocal_14098 = 1;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 0;
	var uLocal_14106 = 0;
	var uLocal_14107 = 0;
	var uLocal_14108 = 1065353216;
	var uLocal_14109 = 0;
	var uLocal_14110 = 0;
	var uLocal_14111 = 1065353216;
	var uLocal_14112 = 1;
	var uLocal_14113 = 0;
	var uLocal_14114 = -1;
	var uLocal_14115 = 0;
	var uLocal_14116 = 1;
	var uLocal_14117 = 0;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 0;
	var uLocal_14124 = 0;
	var uLocal_14125 = 0;
	var uLocal_14126 = 1065353216;
	var uLocal_14127 = 0;
	var uLocal_14128 = 0;
	var uLocal_14129 = 1065353216;
	var uLocal_14130 = 1;
	var uLocal_14131 = 0;
	var uLocal_14132 = -1;
	var uLocal_14133 = 0;
	var uLocal_14134 = 1;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 0;
	var uLocal_14142 = 0;
	var uLocal_14143 = 0;
	var uLocal_14144 = 1065353216;
	var uLocal_14145 = 0;
	var uLocal_14146 = 0;
	var uLocal_14147 = 1065353216;
	var uLocal_14148 = 1;
	var uLocal_14149 = 0;
	var uLocal_14150 = -1;
	var uLocal_14151 = 0;
	var uLocal_14152 = 1;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 0;
	var uLocal_14161 = 0;
	var uLocal_14162 = 1065353216;
	var uLocal_14163 = 0;
	var uLocal_14164 = 0;
	var uLocal_14165 = 1065353216;
	var uLocal_14166 = 1;
	var uLocal_14167 = 0;
	var uLocal_14168 = -1;
	var uLocal_14169 = 0;
	var uLocal_14170 = 1;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 0;
	var uLocal_14179 = 0;
	var uLocal_14180 = 1065353216;
	var uLocal_14181 = 0;
	var uLocal_14182 = 0;
	var uLocal_14183 = 1065353216;
	var uLocal_14184 = 1;
	var uLocal_14185 = 0;
	var uLocal_14186 = -1;
	var uLocal_14187 = 0;
	var uLocal_14188 = 1;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 0;
	var uLocal_14197 = 0;
	var uLocal_14198 = 1065353216;
	var uLocal_14199 = 0;
	var uLocal_14200 = 0;
	var uLocal_14201 = 1065353216;
	var uLocal_14202 = 1;
	var uLocal_14203 = 0;
	var uLocal_14204 = -1;
	var uLocal_14205 = 0;
	var uLocal_14206 = 1;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = 0;
	var uLocal_14215 = 0;
	var uLocal_14216 = 1065353216;
	var uLocal_14217 = 0;
	var uLocal_14218 = 0;
	var uLocal_14219 = 1065353216;
	var uLocal_14220 = 1;
	var uLocal_14221 = 0;
	var uLocal_14222 = 8;
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
	var uLocal_14355 = 0;
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
	var uLocal_14551 = 8;
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
	var uLocal_14572 = -1;
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
	var uLocal_14595 = 0;
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
	var uLocal_14616 = -1;
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
	var uLocal_14638 = -1;
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
	var uLocal_14660 = -1;
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
	var uLocal_14682 = -1;
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
	var uLocal_14698 = 0;
	var uLocal_14699 = 0;
	var uLocal_14700 = 0;
	var uLocal_14701 = 0;
	var uLocal_14702 = 0;
	var uLocal_14703 = 0;
	var uLocal_14704 = -1;
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
	var uLocal_14726 = -1;
	var uLocal_14727 = 0;
	var uLocal_14728 = 11;
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
	var uLocal_14822 = 0;
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
	var uLocal_14839 = 2;
	var uLocal_14840 = 0;
	var uLocal_14841 = 0;
	var uLocal_14842 = 0;
	var uLocal_14843 = 0;
	var uLocal_14844 = 0;
	var uLocal_14845 = 0;
	var uLocal_14846 = 0;
	var uLocal_14847 = 0;
	var uLocal_14848 = 0;
	var uLocal_14849 = 0;
	var uLocal_14850 = 0;
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
	var uLocal_14874 = 2;
	var uLocal_14875 = 0;
	var uLocal_14876 = 0;
	var uLocal_14877 = 0;
	var uLocal_14878 = 0;
	var uLocal_14879 = 0;
	var uLocal_14880 = 0;
	var uLocal_14881 = 0;
	var uLocal_14882 = 0;
	var uLocal_14883 = 0;
	var uLocal_14884 = 0;
	var uLocal_14885 = 0;
	var uLocal_14886 = 0;
	var uLocal_14887 = 0;
	var uLocal_14888 = 0;
	var uLocal_14889 = 0;
	var uLocal_14890 = 0;
	var uLocal_14891 = -1;
	var uLocal_14892 = 0;
	var uLocal_14893 = 0;
	var uLocal_14894 = -1;
	var uLocal_14895 = -1082130432;
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
	var uLocal_14924 = 0;
	var uLocal_14925 = 0;
	var uLocal_14926 = 0;
	var uLocal_14927 = 0;
	var uLocal_14928 = 0;
	var uLocal_14929 = 0;
	var uLocal_14930 = 0;
	var uLocal_14931 = 0;
	var uLocal_14932 = 0;
	var uLocal_14933 = 0;
	var uLocal_14934 = 0;
	var uLocal_14935 = 0;
	var uLocal_14936 = 0;
	var uLocal_14937 = 0;
	var uLocal_14938 = 0;
	var uLocal_14939 = 0;
	var uLocal_14940 = 0;
	var uLocal_14941 = 0;
	var uLocal_14942 = 0;
	var uLocal_14943 = 0;
	var uLocal_14944 = 0;
	var uLocal_14945 = 0;
	var uLocal_14946 = 0;
	var uLocal_14947 = 0;
	var uLocal_14948 = 0;
	var uLocal_14949 = 0;
	var uLocal_14950 = 0;
	var uLocal_14951 = 0;
	var uLocal_14952 = 0;
	var uLocal_14953 = 0;
	var uLocal_14954 = 0;
	var uLocal_14955 = 0;
	var uLocal_14956 = 0;
	var uLocal_14957 = 0;
	var uLocal_14958 = 0;
	var uLocal_14959 = 0;
	var uLocal_14960 = 0;
	var uLocal_14961 = 0;
	var uLocal_14962 = 0;
	var uLocal_14963 = 0;
	var uLocal_14964 = 0;
	var uLocal_14965 = 0;
	var uLocal_14966 = 0;
	var uLocal_14967 = 0;
	var uLocal_14968 = 0;
	var uLocal_14969 = 0;
	var uLocal_14970 = 0;
	var uLocal_14971 = 0;
	var uLocal_14972 = 0;
	var uLocal_14973 = 0;
	var uLocal_14974 = 0;
	var uLocal_14975 = 0;
	var uLocal_14976 = 0;
	var uLocal_14977 = 24;
	var uLocal_14978 = 0;
	var uLocal_14979 = 0;
	var uLocal_14980 = 0;
	var uLocal_14981 = 0;
	var uLocal_14982 = 0;
	var uLocal_14983 = 0;
	var uLocal_14984 = 0;
	var uLocal_14985 = 0;
	var uLocal_14986 = 0;
	var uLocal_14987 = 0;
	var uLocal_14988 = 0;
	var uLocal_14989 = 0;
	var uLocal_14990 = 0;
	var uLocal_14991 = 0;
	var uLocal_14992 = 0;
	var uLocal_14993 = 0;
	var uLocal_14994 = 0;
	var uLocal_14995 = 0;
	var uLocal_14996 = 0;
	var uLocal_14997 = 0;
	var uLocal_14998 = 0;
	var uLocal_14999 = 0;
	var uLocal_15000 = 0;
	var uLocal_15001 = 0;
	var uLocal_15002 = 0;
	var uLocal_15003 = 0;
	var uLocal_15004 = 0;
	var uLocal_15005 = 0;
	var uLocal_15006 = 0;
	var uLocal_15007 = 0;
	var uLocal_15008 = 0;
	var uLocal_15009 = 0;
	var uLocal_15010 = 0;
	var uLocal_15011 = 0;
	var uLocal_15012 = 0;
	var uLocal_15013 = 0;
	var uLocal_15014 = 0;
	var uLocal_15015 = 0;
	var uLocal_15016 = 0;
	var uLocal_15017 = 0;
	var uLocal_15018 = 0;
	var uLocal_15019 = 0;
	var uLocal_15020 = 0;
	var uLocal_15021 = 0;
	var uLocal_15022 = 0;
	var uLocal_15023 = 0;
	var uLocal_15024 = 0;
	var uLocal_15025 = 0;
	var uLocal_15026 = 0;
	var uLocal_15027 = 0;
	var uLocal_15028 = 0;
	var uLocal_15029 = 0;
	var uLocal_15030 = 0;
	var uLocal_15031 = 0;
	var uLocal_15032 = 0;
	var uLocal_15033 = 0;
	var uLocal_15034 = 0;
	var uLocal_15035 = 0;
	var uLocal_15036 = 0;
	var uLocal_15037 = 0;
	var uLocal_15038 = 0;
	var uLocal_15039 = 0;
	var uLocal_15040 = 0;
	var uLocal_15041 = 0;
	var uLocal_15042 = 0;
	var uLocal_15043 = 0;
	var uLocal_15044 = 0;
	var uLocal_15045 = 0;
	var uLocal_15046 = 0;
	var uLocal_15047 = 0;
	var uLocal_15048 = 0;
	var uLocal_15049 = 0;
	var uLocal_15050 = 0;
	var uLocal_15051 = 0;
	var uLocal_15052 = 0;
	var uLocal_15053 = 0;
	var uLocal_15054 = 0;
	var uLocal_15055 = 0;
	var uLocal_15056 = 0;
	var uLocal_15057 = 0;
	var uLocal_15058 = 0;
	var uLocal_15059 = 0;
	var uLocal_15060 = 0;
	var uLocal_15061 = 0;
	var uLocal_15062 = 0;
	var uLocal_15063 = 0;
	var uLocal_15064 = 0;
	var uLocal_15065 = 0;
	var uLocal_15066 = 0;
	var uLocal_15067 = 0;
	var uLocal_15068 = 0;
	var uLocal_15069 = 0;
	var uLocal_15070 = 0;
	var uLocal_15071 = 0;
	var uLocal_15072 = 0;
	var uLocal_15073 = 0;
	var uLocal_15074 = 0;
	var uLocal_15075 = 0;
	var uLocal_15076 = 0;
	var uLocal_15077 = 0;
	var uLocal_15078 = 0;
	var uLocal_15079 = 0;
	var uLocal_15080 = 0;
	var uLocal_15081 = 0;
	var uLocal_15082 = 0;
	var uLocal_15083 = 0;
	var uLocal_15084 = 0;
	var uLocal_15085 = 0;
	var uLocal_15086 = 0;
	var uLocal_15087 = 0;
	var uLocal_15088 = 0;
	var uLocal_15089 = 0;
	var uLocal_15090 = 0;
	var uLocal_15091 = 0;
	var uLocal_15092 = 0;
	var uLocal_15093 = 0;
	var uLocal_15094 = 0;
	var uLocal_15095 = 0;
	var uLocal_15096 = 0;
	var uLocal_15097 = 0;
	var uLocal_15098 = 0;
	var uLocal_15099 = 0;
	var uLocal_15100 = 0;
	var uLocal_15101 = -1;
	var uLocal_15102 = 0;
	var uLocal_15103 = 0;
	var uLocal_15104 = 0;
	var uLocal_15105 = 0;
	var uLocal_15106 = 0;
	var uLocal_15107 = 0;
	var uLocal_15108 = 0;
	var uLocal_15109 = 0;
	var uLocal_15110 = 0;
	var uLocal_15111 = 0;
	var uLocal_15112 = 0;
	var uLocal_15113 = 0;
	var uLocal_15114 = 0;
	var uLocal_15115 = 0;
	var uLocal_15116 = 0;
	var uLocal_15117 = 0;
	var uLocal_15118 = 0;
	var uLocal_15119 = 0;
	var uLocal_15120 = 0;
	var uLocal_15121 = 0;
	var uLocal_15122 = 0;
	var uLocal_15123 = 0;
	var uLocal_15124 = 0;
	var uLocal_15125 = 0;
	var uLocal_15126 = 0;
	var uLocal_15127 = 0;
	var uLocal_15128 = -1;
	var uLocal_15129 = 20;
	var uLocal_15130 = 0;
	var uLocal_15131 = 0;
	var uLocal_15132 = 0;
	var uLocal_15133 = 0;
	var uLocal_15134 = 0;
	var uLocal_15135 = 0;
	var uLocal_15136 = 0;
	var uLocal_15137 = 0;
	var uLocal_15138 = 0;
	var uLocal_15139 = 0;
	var uLocal_15140 = 0;
	var uLocal_15141 = 0;
	var uLocal_15142 = 0;
	var uLocal_15143 = 0;
	var uLocal_15144 = 0;
	var uLocal_15145 = 0;
	var uLocal_15146 = 0;
	var uLocal_15147 = 0;
	var uLocal_15148 = 0;
	var uLocal_15149 = 0;
	var uLocal_15150 = 0;
	var uLocal_15151 = 0;
	var uLocal_15152 = 0;
	var uLocal_15153 = 0;
	var uLocal_15154 = 0;
	var uLocal_15155 = 0;
	var uLocal_15156 = 0;
	var uLocal_15157 = 1028443341;
	var uLocal_15158 = 1038174126;
	var uLocal_15159 = 1065353216;
	var uLocal_15160 = 1065353216;
	var uLocal_15161 = 1086324736;
	var uLocal_15162 = 1082130432;
	var uLocal_15163 = 1073741824;
	var uLocal_15164 = 1065353216;
	var uLocal_15165 = 1108082688;
	var uLocal_15166 = 1108082688;
	var uLocal_15167 = 3000;
	var uLocal_15168 = 1092616192;
	var uLocal_15169 = 0;
	var uLocal_15170 = 0;
	var uLocal_15171 = 0;
	var uLocal_15172 = 0;
	var uLocal_15173 = 0;
	var uLocal_15174 = 0;
	var uLocal_15175 = 0;
	var uLocal_15176 = 0;
	var uLocal_15177 = 0;
	var uLocal_15178 = 0;
	var uLocal_15179 = 0;
	var uLocal_15180 = 0;
	var uLocal_15181 = 0;
	var uLocal_15182 = 0;
	var uLocal_15183 = 0;
	var uLocal_15184 = 0;
	var uLocal_15185 = 0;
	var uLocal_15186 = 0;
	var uLocal_15187 = 0;
	var uLocal_15188 = 0;
	var uLocal_15189 = 0;
	var uLocal_15190 = 0;
	var uLocal_15191 = 0;
	var uLocal_15192 = 0;
	var uLocal_15193 = 0;
	var uLocal_15194 = 0;
	var uLocal_15195 = 0;
	var uLocal_15196 = 0;
	var uLocal_15197 = 0;
	var uLocal_15198 = 0;
	var uLocal_15199 = 0;
	var uLocal_15200 = 0;
	var uLocal_15201 = 0;
	var uLocal_15202 = 0;
	var uLocal_15203 = -1;
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
	iLocal_23 = 7;
	iLocal_24 = 25;
	iLocal_25 = 1;
	iLocal_26 = 2;
	iLocal_27 = 4;
	iLocal_28 = 8;
	iLocal_29 = 16;
	iLocal_30 = 32;
	iLocal_31 = 64;
	iLocal_32 = 128;
	iLocal_33 = 524288;
	iLocal_34 = ((((((((iLocal_25 || iLocal_26) || iLocal_27) || iLocal_28) || iLocal_29) || iLocal_30) || iLocal_31) || iLocal_32) || iLocal_33);
	iLocal_35 = joaat("U_M_M_VALPOKERPLAYER_01");
	iLocal_36 = joaat("U_M_M_VALPOKERPLAYER_02");
	iLocal_37 = joaat("A_C_SHEEP_01");
	iLocal_38 = joaat("P_CARDS01X");
	iLocal_39 = joaat("P_CHAIR05X");
	iLocal_40 = joaat("P_CHAIR05X");
	iLocal_41 = joaat("P_CHAIR05X");
	iLocal_42 = joaat("P_CS_HOLDEMHAND01X");
	iLocal_43 = joaat("P_CS_HOLDEMHAND02X");
	iLocal_44 = joaat("P_CS_HOLDEMHAND02X");
	iLocal_45 = joaat("NORTHSTEAMER01X");
	iLocal_46 = joaat("NORTHCOALCAR01X");
	iLocal_47 = joaat("NORTHPASSENGER03X");
	iLocal_48 = joaat("PRIVATEBAGGAGE01X");
	iLocal_49 = joaat("CABOOSE01X");
	iLocal_50 = joaat("MSP_REVEREND1_MALES_01");
	iLocal_51 = joaat("S_M_M_AMBIENTLAWRURAL_01");
	iLocal_52 = joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT");
	iLocal_53 = joaat("P_CRATE04X_B");
	iLocal_54 = joaat("P_CRATE01X_VAR02");
	iLocal_55 = joaat("P_BARREL010X");
	sLocal_56 = "rev1_witness_flee";
	sLocal_57 = "rev1_camp_return_gps_route";
	sLocal_58 = "rev1_revroutetobridge";
	sLocal_59 = "rev1_station_assist";
	sLocal_60 = "MINI_GAMES@STORY@REV1@TRACK_RESCUE@ARTHUR";
	sLocal_61 = "MINI_GAMES@STORY@REV1@TRACK_RESCUE@REVEREND";
	iLocal_62 = -1;
	iLocal_148 = -1051532213;
	iLocal_149 = 980571552;
	iLocal_150 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_6__::func_860(&uLocal_2024, 1073741824 /* Float: 2f */);
		func_2(&uLocal_2024, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_2024);
	func_5(&uLocal_2024);
	while (!__LIB_6__::func_861(&uLocal_2024, -2147483648))
	{
		func_7(&uLocal_2024);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_2024, 0))
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
					if (!__LIB_0__::func_75(&(cParam0->f_13118)))
					{
						__LIB_1__::func_283(&(cParam0->f_13118), 0);
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
						if (((!bVar0 && !__LIB_9__::func_39(cParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_6__::func_861(cParam0, 80))
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
							if (__LIB_9__::func_39(cParam0, bVar1))
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
				__LIB_11__::func_239(cParam0, func_34(__LIB_6__::func_864(cParam0)), func_34(__LIB_9__::func_40(cParam0)), __LIB_6__::func_864(cParam0), __LIB_9__::func_40(cParam0));
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
	__LIB_9__::func_357(cParam0, 0, !bVar2, bVar2);
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
				__LIB_8__::func_723(cParam0);
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
					__LIB_11__::func_238();
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
		if (__LIB_5__::func_23(cParam1) > 0)
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
	__LIB_9__::func_9(cParam0);
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
				__LIB_9__::func_59(cParam0, __LIB_1__::func_469(cParam0->f_607), 0);
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
	__LIB_9__::func_60(cParam0, 0);
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
	__LIB_9__::func_217(cParam0);
	__LIB_8__::func_718(cParam0, __LIB_6__::func_864(cParam0));
	__LIB_5__::func_105(__LIB_6__::func_866(cParam0));
	if (!__LIB_6__::func_872(cParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_6__::func_866(cParam0));
	}
	__LIB_9__::func_42(cParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_8__::func_660(cParam0);
	__LIB_9__::func_61(cParam0);
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
	if (func_163(26, 1))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_63[26], true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_63[26], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_63[26], false);
	}
	POPULATION::_0xA1CFB35069D23C23(iLocal_108[30]);
	func_164();
	func_165(1);
	POPULATION::_0x74C2B3DC0B294102(iLocal_108[16]);
	PATHFIND::_0xE5EF9DE716FF737E(iLocal_108[16], 1, 0);
	func_166(cParam0);
	func_167(cParam0);
	func_168(cParam0);
	func_169(cParam0);
	func_170(1);
	func_171(1);
	__LIB_3__::func_760();
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_MISSION_CHASE")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_MISSION_CHASE"));
	}
	__LIB_13__::func_687(30, 1);
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_13__::func_626(Global_1835011[cParam0->f_607 /*74*/].f_1, 1);
	}
	else
	{
		__LIB_13__::func_626(Global_1835011[cParam0->f_607 /*74*/].f_1, 0);
	}
	PED::_0x411189E51B8020BA(Global_35, "cautious");
	AUDIO::SET_AUDIO_FLAG("SuppressNewTrainWhistles", false);
	AUDIO::SET_AUDIO_FLAG("SuppressNewAndExistingTrainWhistles", false);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	PED::_0xA6F67BEC53379A32(Global_35, "HandsOnBelt");
	STREAMING::_0x5A8B01199C3E79C3();
	func_175(0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 21, 2, 0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
	PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 1);
	PED::SET_PED_CAN_LEG_IK(Global_35, true);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	func_176();
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	__LIB_14__::func_240(&uLocal_1838);
	if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_LASSO"));
	func_179();
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	if (iParam0 == iLocal_16)
	{
		__LIB_4__::func_954(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_17)
	{
		__LIB_4__::func_954(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_18)
	{
		__LIB_4__::func_954(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_19)
	{
		__LIB_4__::func_954(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_20)
	{
		__LIB_4__::func_954(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_21)
	{
		__LIB_4__::func_954(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_22)
	{
		__LIB_4__::func_954(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_23)
	{
		__LIB_4__::func_954(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_24)
	{
		__LIB_4__::func_954(&Var0, func_216(iParam0));
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
		func_274(cParam0);
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
						func_311(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_311(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_311(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_311(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_311(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_311(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_311(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_311(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_311(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_311(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_311(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_311(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_311(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313();
						func_314(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_311(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_311(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_352();
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
							func_311(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_108(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_376(cParam0);
	cParam0->f_634[0] = 57906;
	cParam0->f_634[1] = 57906;
	cParam0->f_637 = 0;
	__LIB_6__::func_883(cParam0, *uParam1);
	func_379(cParam0);
}

void func_109(char[4] cParam0)
{
	int iVar0;
	vector3 vVar1;
	func_380(cParam0, 0, -1);
	func_381(cParam0);
	iVar0 = __LIB_6__::func_864(cParam0);
	vVar1 = { func_382(3, iVar0) };
	__LIB_9__::func_326(cParam0, vVar1);
}

void func_123(char[4] cParam0)
{
	if (__LIB_0__::func_91())
	{
		func_386(&(cParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_388(Param0, Param0.f_3);
}

int func_139(char[4] cParam0)
{
	__LIB_9__::func_43(cParam0, iLocal_35, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_36, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_37, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_38, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_42, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_43, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_44, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_40, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_45, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_46, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_47, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_48, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_49, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_50, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_51, (iLocal_28 || iLocal_29));
	__LIB_9__::func_43(cParam0, iLocal_52, (iLocal_28 || iLocal_29));
	__LIB_9__::func_43(cParam0, iLocal_53, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_55, iLocal_34);
	__LIB_9__::func_43(cParam0, iLocal_54, iLocal_34);
	__LIB_8__::func_708(cParam0, sLocal_60, iLocal_30);
	__LIB_8__::func_708(cParam0, sLocal_61, iLocal_30);
	__LIB_8__::func_709(cParam0, sLocal_56, iLocal_34, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_57, iLocal_34, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_58, ((iLocal_27 || iLocal_28) || iLocal_29), 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_59, iLocal_27, 2, -1);
	__LIB_9__::func_237(cParam0, func_408(), &(iLocal_141[0]), ((iLocal_25 || iLocal_26) || iLocal_27), 16, 0, 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@rev1@ig@ig5_track_rescue@ig5_track_rescue", &(iLocal_141[1]), (iLocal_30 || iLocal_31), 0, 0, 0, 1);
	__LIB_9__::func_238(cParam0, iLocal_141[0], func_410(0), ((iLocal_25 || iLocal_26) || iLocal_27));
	__LIB_9__::func_238(cParam0, iLocal_141[0], func_410(1), ((iLocal_25 || iLocal_26) || iLocal_27));
	__LIB_9__::func_238(cParam0, iLocal_141[0], func_410(2), ((iLocal_25 || iLocal_26) || iLocal_27));
	__LIB_9__::func_238(cParam0, iLocal_141[0], func_410(3), ((iLocal_25 || iLocal_26) || iLocal_27));
	__LIB_9__::func_238(cParam0, iLocal_141[0], func_410(10), ((iLocal_25 || iLocal_26) || iLocal_27));
	__LIB_9__::func_238(cParam0, iLocal_141[0], func_410(12), ((iLocal_25 || iLocal_26) || iLocal_27));
	__LIB_9__::func_238(cParam0, iLocal_141[0], func_410(5), ((iLocal_25 || iLocal_26) || iLocal_27));
	__LIB_9__::func_238(cParam0, iLocal_141[1], "Pbl_Rev_Loop_01", (iLocal_30 || iLocal_31));
	__LIB_9__::func_238(cParam0, iLocal_141[1], "Pbl_Player_Approaches_Reverend_WALK", iLocal_31);
	__LIB_9__::func_238(cParam0, iLocal_141[1], "Pbl_Player_Approaches_Reverend_RUN", iLocal_31);
	__LIB_9__::func_238(cParam0, iLocal_141[1], "Pbl_Minigame", iLocal_31);
	__LIB_9__::func_238(cParam0, iLocal_141[1], "Pbl_Player_Frees_Reverends_Foot", iLocal_31);
	__LIB_9__::func_372(cParam0, "CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@ARTHUR", iLocal_31);
	__LIB_9__::func_372(cParam0, "CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@REVEREND", iLocal_31);
	__LIB_11__::func_345(cParam0, "script_REV1_TrackRescue", iLocal_31);
	return 1;
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
		func_424(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0);
		func_425(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_426(cParam0);
			}
		}
		if (__LIB_6__::func_872(cParam0, 32))
		{
			func_427(cParam0);
		}
	}
	switch (__LIB_6__::func_884(cParam0))
	{
		case -1:
		case 0:
			__LIB_6__::func_885(cParam0, 1);
			break;
		case 1:
			if (func_429(cParam0))
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
			if (__LIB_9__::func_66(cParam0))
			{
				__LIB_6__::func_885(cParam0, 3);
			}
			break;
		case 3:
			if (func_431(cParam0))
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
	if (func_433(cParam0))
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
			func_433(cParam0);
		}
	}
	return false;
}

bool func_163(int iParam0, bool bParam1)
{
	return (((iParam0 > -1 && iParam0 < 27) && ENTITY::DOES_ENTITY_EXIST(iLocal_63[iParam0])) && (!bParam1 || __LIB_0__::func_272(iLocal_63[iParam0], 0)));
}

void func_164()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		func_436(__LIB_14__::func_232(iVar0));
		iVar0++;
	}
	if (__LIB_5__::func_831(8388608))
	{
		__LIB_5__::func_833(8388608);
	}
}

void func_165(bool bParam0)
{
	if (bParam0)
	{
		__LIB_3__::func_142(iLocal_108[18]);
	}
	else
	{
		__LIB_3__::func_241(iLocal_108[18], 1);
	}
}

void func_166(char[4] cParam0)
{
	__LIB_0__::func_484(&uLocal_1725, iLocal_108[0], 0);
	__LIB_0__::func_484(&uLocal_1726, iLocal_108[1], 0);
	__LIB_0__::func_484(&uLocal_1727, iLocal_108[2], 0);
	__LIB_0__::func_484(&uLocal_1728, iLocal_108[4], 0);
	func_442();
}

void func_167(char[4] cParam0)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
	}
	if (__LIB_0__::func_272(iLocal_63[0], 0))
	{
		if (__LIB_6__::func_863(cParam0) != 0)
		{
			TASK::CLEAR_PED_TASKS(iLocal_63[0], true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_63[0]);
		}
	}
}

void func_168(char[4] cParam0)
{
	if (func_163(0, 0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_63[0], true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_63[0], false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_63[0], joaat("REL_PLAYER_ALLY"));
	}
	if (__LIB_6__::func_863(cParam0) != 0)
	{
		func_443(cParam0, 0, 1);
	}
	func_444();
	func_443(cParam0, 1, 1);
	func_443(cParam0, 2, 1);
	func_445(cParam0, 1, 0);
	func_446();
	func_447();
	__LIB_0__::func_325(&iLocal_145);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
}

void func_169(char[4] cParam0)
{
	__LIB_6__::func_881(cParam0, 2);
}

void func_170(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((!func_449(25) && bParam0) || (func_449(25) && !bParam0))
	{
		return;
	}
	func_450(25, !bParam0);
	iVar0 = 503;
	while (iVar0 <= 506)
	{
		iVar1 = iVar0;
		if (bParam0)
		{
			__LIB_4__::func_193(iVar1);
			__LIB_0__::func_121(iVar1, 32);
		}
		else
		{
			iVar2 = __LIB_1__::func_334(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
				iVar3 = __LIB_0__::func_120(iVar1);
				PERSCHAR::_0x49A8C2CD97815215(iVar3);
			}
			__LIB_3__::func_229(iVar1);
			__LIB_0__::func_123(iVar1, 32);
		}
		iVar0++;
	}
}

void func_171(bool bParam0)
{
	if (!bParam0)
	{
		VEHICLE::DELETE_ALL_TRAINS();
	}
	VEHICLE::SET_RANDOM_TRAINS(bParam0);
	__LIB_1__::func_600(bParam0);
}

bool func_175(bool bParam0)
{
	if (!func_449(26) && bParam0)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_59))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_59, 1, 0.05f, 1f, 0);
			func_450(26, 1);
		}
	}
	else if (func_449(26) && !bParam0)
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_59, 0, 1f, 0.5f, 1);
		func_450(26, 0);
	}
	return func_449(26);
}

void func_176()
{
	PLAYER::_0x216BC0D3D2E413D2(PLAYER::PLAYER_ID(), 0);
	PLAYER::_0xC6366A585659D15C(PLAYER::PLAYER_ID(), 0);
	PLAYER::_0x98CD760DE43B612E(PLAYER::PLAYER_ID(), 0);
}

void func_179()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_1811[iVar0]))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1811[iVar0]);
		}
		iVar0++;
	}
}

struct<4> func_216(int iParam0)
{
	struct<4> Var0;
	if (iParam0 == iLocal_16)
	{
		Var0 = { func_499(7, 0) };
	}
	else if (iParam0 == iLocal_17)
	{
		Var0 = { func_499(7, 1) };
	}
	else if (iParam0 == iLocal_18)
	{
		Var0 = { -322.6479f, -356.9647f, 87.0217f };
		Var0.f_3 = 207.2306f;
	}
	else if (iParam0 == iLocal_19)
	{
		Var0 = { -369.9883f, -442.89f, 79.0767f };
		Var0.f_3 = 147.48f;
	}
	else if (iParam0 == iLocal_20)
	{
		Var0 = { -373.757f, -449.2079f, 78.7838f };
		Var0.f_3 = 122.8296f;
	}
	else if (iParam0 == iLocal_21)
	{
		Var0 = { -478.748f, -505.4781f, 56.2533f };
		Var0.f_3 = 83.5251f;
	}
	else if (iParam0 == iLocal_22)
	{
		Var0 = { func_499(7, 6) };
	}
	else if (iParam0 == iLocal_23)
	{
		Var0 = { -574.6082f, -464.9856f, 79.0492f };
		Var0.f_3 = 113.1804f;
	}
	else if (iParam0 == iLocal_24)
	{
		Var0 = { func_499(7, 8) };
	}
	return Var0;
}

void func_274(char[4] cParam0)
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
		if (func_425(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_311(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_311(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_311(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_311(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_311(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_311(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_311(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_311(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_311(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_311(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_311(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_10__::func_485(iParam0);
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
				func_311(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_313()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_664();
	func_665();
	func_666();
	func_667();
	func_668();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_671(iParam0, 1, 1, -142743235, 1);
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

void func_352()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_712(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_376(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_751(cParam0, iVar0);
		iVar0++;
	}
}

void func_379(char[4] cParam0)
{
	__LIB_9__::func_45(cParam0, iLocal_16, iLocal_17, 108836, 108870, 108914, 109185, 109322, "RRVRD_RSC_1", 6218, -1);
	__LIB_9__::func_45(cParam0, iLocal_17, iLocal_18, 109558, 109633, 109647, 109661, 109670, "REV1_MCS1", 74, -1);
	__LIB_9__::func_45(cParam0, iLocal_18, iLocal_19, 109679, 109814, 109823, 109990, 110318, "", 72, -1);
	__LIB_9__::func_45(cParam0, iLocal_19, iLocal_20, 110429, 110507, 110550, 110684, 110880, "", 72, -1);
	__LIB_9__::func_45(cParam0, iLocal_20, iLocal_21, 110916, 110946, 110955, 111003, 111215, "", 8, -1);
	__LIB_9__::func_45(cParam0, iLocal_21, iLocal_22, 111245, 111259, 111268, 111323, 111584, "", 72, -1);
	__LIB_9__::func_45(cParam0, iLocal_22, iLocal_23, 111683, 111761, 111804, 111876, 111985, "", 72, -1);
	__LIB_9__::func_45(cParam0, iLocal_23, iLocal_24, 112027, 112117, 112185, 112294, 112578, "REV1_MCS3", 2, -1);
	__LIB_9__::func_45(cParam0, iLocal_24, 26, 112598, 112680, 112719, 112742, 112803, "REV1_EXT", 74, -1);
}

bool func_380(char[4] cParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	char cVar7[32];
	char[] cVar11[8];
	char[] cVar12[8];
	int iVar13;
	bool bVar14;
	if (func_163(iParam1, 0))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_63[iParam1]))
		{
			return false;
		}
		return true;
	}
	if (func_798())
	{
		return false;
	}
	if (!func_799(iParam1, iParam2, &Var0, &iVar4, &iVar5, &iVar6, &cVar7, &cVar11, &cVar12, &iVar13) && iParam1 != 3)
	{
		return false;
	}
	if (iVar5 != -1)
	{
		func_800(cParam0, iVar5, &(iLocal_63[iParam1]), 0, Var0, Var0.f_1, Var0.f_2, Var0.f_3, 1, iVar13, 0, 0, 0, 0);
	}
	else if (iParam1 == 3)
	{
		if (func_425(cParam0, 1, Var0, Var0.f_1, Var0.f_2, Var0.f_3, 1, 1, 1))
		{
			iLocal_63[iParam1] = __LIB_6__::func_880(cParam0);
		}
	}
	else
	{
		bVar14 = iVar6 == joaat("META_OUTFIT_DEFAULT");
		iLocal_63[iParam1] = __LIB_1__::func_545(iVar4, Var0, Var0.f_3, 0, 1, 0, 1, 1, bVar14, 0, 0, 0, 0);
	}
	if (func_163(iParam1, 1))
	{
		func_802();
		func_803(cParam0, iParam1, iVar6, cVar7, cVar11, cVar12);
	}
	return false;
}

void func_381(char[4] cParam0)
{
	var uVar0;
	var uVar4;
	var uVar5;
	int iVar6;
	char cVar7[32];
	char[] cVar11[8];
	char[] cVar12[8];
	var uVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		return;
	}
	iVar14 = ITEMSET::GET_ITEMSET_SIZE(Global_43616);
	iVar15 = 0;
	while (iVar15 < iVar14)
	{
		iVar16 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar15, Global_43616);
		iVar17 = MISC::_GET_ENTITY_FROM_ITEM(iVar16);
		if (ENTITY::IS_ENTITY_A_PED(iVar17))
		{
			iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar17);
			iVar19 = func_804(iVar18);
			if (iVar19 != -1)
			{
				iLocal_63[iVar19] = iVar18;
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar17))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar17, true, true);
				}
				if (!func_799(iVar19, __LIB_6__::func_864(cParam0), &uVar0, &uVar4, &uVar5, &iVar6, &cVar7, &cVar11, &cVar12, &uVar13) && iVar19 != 3)
				{
					return;
				}
				func_803(cParam0, iVar19, iVar6, cVar7, cVar11, cVar12);
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar17))
		{
			iVar20 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar17);
			iVar21 = func_805(iVar20);
			if (iVar21 != -1)
			{
				iLocal_97[iVar21] = iVar20;
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar17))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar17, true, true);
				}
			}
		}
		iVar15++;
	}
}

struct<4> func_382(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar4;
	var uVar5;
	var uVar6;
	char[] cVar7[8];
	var uVar11;
	var uVar12;
	var uVar13;
	func_799(iParam0, iParam1, &Var0, &uVar4, &uVar5, &uVar6, &cVar7, &uVar11, &uVar12, &uVar13);
	return Var0;
}

void func_386(var uParam0)
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
		func_810(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_812(uParam0);
		func_813(uParam0);
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

int func_388(vector3 vParam0, var uParam3)
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
		iVar0 = func_821(0, 0);
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

char* func_408()
{
	return "script@story@rev1@ig@ig1_witness_chat@ig1_witness_chat";
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Pbl_Idle_Long";
		case 1:
			return "Pbl_Idle_Short";
		case 2:
			return "pbl_Weapon_Drawn_ALT";
		case 3:
			return "pbl_Friendly_Approach";
		case 4:
			return "pbl_Response_Lingers/Returns";
		case 5:
			return "pbl_Weapon_Drawn";
		case 6:
			return "pbl_LM_What_the_Hell";
		case 7:
			return "pbl_RM_Whats_Your_Problem";
		case 8:
			return "pbl_LM_Whats_Going_On_Around_Here";
		case 9:
			return "Pbl_RM_Had_Enough_Of_This";
		case 10:
			return "pbl_Aggressive_Approach";
		case 11:
			return "Pbl_AGG_Lingers/Returns";
		case 12:
			return "pbl_AGG_Weapon_Drawn";
		case 13:
			return "pbl_LM_As_Crazy_As_Your_Friend";
		case 14:
			return "pbl_RM_Whats_Wrong_With_You";
		case 15:
			return "pbl_LM_Goddamn_Lunatic";
		case 16:
			return "pbl_RM_Hold_Your_Liquor";
		default:
			break;
	}
	return "";
}

bool func_424(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	if (func_800(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_425(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
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
						func_891(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
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

void func_426(char[4] cParam0)
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
		if (func_893(&(cParam0->f_609), cParam0->f_607))
		{
			__LIB_6__::func_869(cParam0, 32);
		}
	}
}

void func_427(char[4] cParam0)
{
	struct<4> Var0;
	if (!__LIB_6__::func_872(cParam0, 128))
	{
		if (__LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_8__::func_668(cParam0);
			if (func_895(cParam0))
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
			if (func_897(cParam0, Var0))
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

bool func_429(char[4] cParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_9__::func_155(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_424(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_425(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		if (!__LIB_0__::func_75(&(cParam0->f_13115)))
		{
			__LIB_1__::func_283(&(cParam0->f_13115), 0);
		}
		if (__LIB_0__::func_265(&(cParam0->f_13115)) < 30f)
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

bool func_431(char[4] cParam0)
{
	if (!func_903(cParam0))
	{
		return false;
	}
	if (!func_904(cParam0))
	{
		return false;
	}
	if (!func_905(cParam0))
	{
		return false;
	}
	if (!func_906())
	{
		return false;
	}
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_108[30], 8192, 0, 0, -1, -1, 0);
	MISC::_0x2FCD528A397E5C88(iLocal_108[30], 1064960);
	__LIB_2__::func_761(-390.4333f, -387.9549f, 84.56979f, 100f, 0, 0);
	MISC::_0x2FCD528A397E5C88(iLocal_108[11], 1064960);
	POPULATION::_0xB56D41A694E42E86(iLocal_108[16], 0, 0, 0, -1, -1, 2);
	PATHFIND::_0xE5EF9DE716FF737E(iLocal_108[16], 0, 0);
	__LIB_1__::func_391(iLocal_108[24], 0, 0, 0);
	func_909(cParam0);
	func_910(cParam0);
	if (__LIB_6__::func_864(cParam0) != iLocal_16)
	{
		func_170(0);
	}
	__LIB_14__::func_248();
	func_165(0);
	__LIB_5__::func_548(1);
	if (__LIB_6__::func_864(cParam0) != iLocal_16)
	{
		func_913(cParam0, 1);
	}
	return true;
}

bool func_433(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_914(cParam0);
	__LIB_11__::func_105(cParam0);
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_9__::func_40(cParam0);
	iVar2 = __LIB_8__::func_663(cParam0, iVar0);
	if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_895(cParam0);
		}
	}
	__LIB_9__::func_140(cParam0);
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
		func_427(cParam0);
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
					__LIB_9__::func_51(cParam0);
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
				if (__LIB_14__::func_241(cParam0))
				{
					if (__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_6__::func_887(cParam0, 4);
					}
					__LIB_8__::func_670(cParam0, iVar0, 2);
				}
			}
			else if (__LIB_9__::func_31(cParam0) >= cParam0->f_13144)
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
					if (func_931(cParam0, iVar0, iVar1))
					{
						__LIB_8__::func_670(cParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_9__::func_189(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 3);
					if (func_933(cParam0, iVar0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 4);
						if (func_931(cParam0, iVar0, iVar1))
						{
							__LIB_8__::func_670(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_8__::func_671(cParam0))
			{
				func_933(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_933(cParam0, iVar0))
			{
				__LIB_8__::func_670(cParam0, iVar0, 4);
				if (func_931(cParam0, iVar0, iVar1))
				{
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_931(cParam0, iVar0, iVar1))
			{
				__LIB_8__::func_670(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_9__::func_909(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_9__::func_477(cParam0);
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
					__LIB_9__::func_150(cParam0, iVar1);
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
						__LIB_8__::func_710(0);
					}
					__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 4194304);
				}
				if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_6__::func_872(cParam0, 8192)) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
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
						__LIB_11__::func_239(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
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
				__LIB_9__::func_909(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_9__::func_477(cParam0);
				if (__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 2))
				{
					if (__LIB_9__::func_52(cParam0, __LIB_9__::func_40(cParam0)))
					{
						__LIB_9__::func_353(cParam0, __LIB_9__::func_40(cParam0));
					}
				}
			}
			if ((!__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_6__::func_872(cParam0, 8192)) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
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
				__LIB_9__::func_150(cParam0, iVar1);
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

void func_436(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!func_949(iParam0))
	{
		return;
	}
	iVar0 = func_950(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = __LIB_0__::func_271(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	PED::_0x8AF46E5159A5B620(iVar1, 996860239);
	PED::_0x20C5459379D75C1C(iVar1, 0);
	PED::_0x45FEA6D5539BD474(iVar1, 0);
	PED::_0x15F4732C357B1D6D(iVar1, PLAYER::PLAYER_ID(), 12);
	PED::_0x15F4732C357B1D6D(iVar1, PLAYER::PLAYER_ID(), 22);
	func_951(iParam0, 0);
}

void func_442()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_954(iVar0);
		iVar0++;
	}
}

void func_443(char[4] cParam0, int iParam1, bool bParam2)
{
	var uVar0;
	var uVar4;
	int iVar5;
	var uVar6;
	char[] cVar7[8];
	var uVar11;
	var uVar12;
	var uVar13;
	if (!func_163(iParam1, 1))
	{
		return;
	}
	if (!func_799(iParam1, -1, &uVar0, &uVar4, &iVar5, &uVar6, &cVar7, &uVar11, &uVar12, &uVar13))
	{
		return;
	}
	if (iVar5 != -1)
	{
		__LIB_9__::func_252(cParam0, iVar5, iLocal_63[iParam1], 0, 0, 1, 0);
		iLocal_63[iParam1] = 0;
		return;
	}
	if (bParam2)
	{
		__LIB_2__::func_426(&(iLocal_63[iParam1]));
	}
	else
	{
		__LIB_2__::func_788(&(iLocal_63[iParam1]), 1, 0, 1);
	}
}

void func_444()
{
	int iVar0;
	int iVar1;
	iVar0 = 14;
	while (iVar0 <= 16)
	{
		iVar1 = iVar0;
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), Local_239[iVar1 /*55*/].f_1);
		iVar0++;
	}
}

void func_445(char[4] cParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 14;
	while (iVar0 <= 16)
	{
		iVar1 = iVar0;
		__LIB_0__::func_325(&(Local_239[iVar1 /*55*/]));
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_63[iVar1]))
		{
			MISC::_0xE98D55C5983F2509(iLocal_63[iVar1]);
		}
		if (bParam2)
		{
			TASK::CLEAR_PED_TASKS(iLocal_63[iVar1], true, false);
		}
		if (bParam1)
		{
			func_443(cParam0, iVar1, 1);
		}
		iVar0++;
	}
}

void func_446()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		if (func_957(iVar1, 1))
		{
			VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_91[iVar1]));
		}
		iVar0++;
	}
	func_450(0, 0);
}

void func_447()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_958(iVar0);
		iVar0++;
	}
}

bool func_449(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	return (uLocal_1829[iVar0] && iVar2) == iVar2;
}

void func_450(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	bVar3 = (uLocal_1829[iVar0] && iVar2) == iVar2;
	if (!bVar3 && bParam1)
	{
		uLocal_1829[iVar0] = (uLocal_1829[iVar0] || iVar2);
	}
	else if (bVar3 && !bParam1)
	{
		iVar4 = (-1 - iVar2);
		uLocal_1829[iVar0] = (uLocal_1829[iVar0] && iVar4);
	}
}

struct<4> func_499(int iParam0, int iParam1)
{
	return func_1009(iParam0, iParam1);
}

void func_664()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1174(0);
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
	func_1174(1);
}

void func_665()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_311(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_666()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1177(0);
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
	func_1177(1);
}

void func_667()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1177(0);
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
	func_1177(1);
}

void func_668()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_311(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_311(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_671(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_671(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_671(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_671(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_712(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1222(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_311(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_751(char[4] cParam0, int iParam1)
{
	func_1248(cParam0, iParam1);
	__LIB_8__::func_679(cParam0, iParam1, 26);
}

int func_752(char[4] cParam0)
{
	if (!func_1250(cParam0))
	{
		return 0;
	}
	func_909(cParam0);
	func_170(0);
	return 1;
}

int func_753(char[4] cParam0)
{
	__LIB_9__::func_125(cParam0, "1-Start-MultiStart");
	AUDIO::SET_AUDIO_FLAG("SuppressNewTrainWhistles", true);
	AUDIO::SET_AUDIO_FLAG("SuppressNewAndExistingTrainWhistles", true);
	func_1252();
	func_1253();
	return 1;
}

int func_754(char[4] cParam0)
{
	if (!func_449(43))
	{
		func_1254(iLocal_63[0], func_499(1, 1), 2, 1073741824 /* Float: 2f */);
		func_450(43, 1);
	}
	if (!func_1255(cParam0, 14))
	{
		return 0;
	}
	if (!func_1255(cParam0, 15))
	{
		return 0;
	}
	if (!func_1256(cParam0))
	{
		return 0;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		if (!func_1257(cParam0))
		{
			return 0;
		}
		iLocal_1860 = 3;
	}
	func_958(0);
	func_958(4);
	func_958(5);
	func_958(6);
	AUDIO::SET_AUDIO_FLAG("SuppressNewTrainWhistles", false);
	AUDIO::SET_AUDIO_FLAG("SuppressNewAndExistingTrainWhistles", false);
	if (func_1258())
	{
		__LIB_9__::func_243(cParam0, "1-Player_Wins");
		__LIB_9__::func_243(cParam0, "2-Player_Loses");
		__LIB_0__::func_88(&(cParam0->f_7375), 33554432);
		func_1260(1);
		func_1261();
		__LIB_6__::func_876(cParam0, 0);
		__LIB_9__::func_60(cParam0, 0);
	}
	else
	{
		__LIB_11__::func_292(cParam0, iLocal_18, 0, 0, 0);
		__LIB_11__::func_100(cParam0);
		__LIB_6__::func_876(cParam0, 29);
	}
	if (func_1264())
	{
		func_1265(iLocal_63[3], 4, 0, 0, 0, 0);
	}
	return 1;
}

bool func_755(char[4] cParam0)
{
	func_1266(cParam0);
	func_913(cParam0, 0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1257(cParam0))
			{
				func_1268();
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (!__LIB_1__::func_243(30))
			{
				__LIB_5__::func_20(0, 0);
				func_1270(cParam0);
				func_1271(cParam0);
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_756(var uParam0)
{
	if (__LIB_1__::func_243(30))
	{
		__LIB_14__::func_236(2);
		__LIB_13__::func_687(30, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[1]))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iLocal_63[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_63[1], true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[2]))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iLocal_63[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_63[2], true, true);
		}
	}
	func_1260(0);
	return 1;
}

int func_758(char[4] cParam0)
{
	if (!func_1250(cParam0))
	{
		return 0;
	}
	if (!func_1255(cParam0, 14))
	{
		return 0;
	}
	if (!func_1255(cParam0, 15))
	{
		return 0;
	}
	if (!func_1256(cParam0))
	{
		return 0;
	}
	func_909(cParam0);
	return 1;
}

int func_759(var uParam0)
{
	func_1252();
	return 1;
}

int func_760(var uParam0)
{
	func_171(0);
	return 1;
}

int func_763(char[4] cParam0)
{
	if (!func_1250(cParam0))
	{
		return 0;
	}
	if (!func_1255(cParam0, 14))
	{
		return 0;
	}
	if (!func_1255(cParam0, 15))
	{
		return 0;
	}
	if (!func_1255(cParam0, 17))
	{
		return 0;
	}
	if (!func_1256(cParam0))
	{
		return 0;
	}
	if (!func_1277(1))
	{
		return 0;
	}
	if (!func_1277(2))
	{
		return 0;
	}
	if (!func_1277(3))
	{
		return 0;
	}
	func_909(cParam0);
	func_171(0);
	return 1;
}

int func_765(char[4] cParam0)
{
	if (!func_1255(cParam0, 17))
	{
		return 0;
	}
	if (!func_1255(cParam0, 18))
	{
		return 0;
	}
	func_171(0);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "cautious", 1f, -1);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_YOSEMITE"));
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BOB"));
	uLocal_1725 = __LIB_1__::func_391(iLocal_108[0], 0, 0, 0);
	uLocal_1727 = __LIB_1__::func_391(iLocal_108[2], 0, 0, 0);
	uLocal_1728 = __LIB_1__::func_391(iLocal_108[4], 0, 0, 0);
	func_450(32, 1);
	__LIB_9__::func_60(cParam0, 0);
	return 1;
}

bool func_766(char[4] cParam0)
{
	func_1278(cParam0);
	func_1279(cParam0);
	func_1280(cParam0);
	func_1281(cParam0);
	func_1282(cParam0);
	func_1283(cParam0, 1);
	func_1284();
	func_1285();
	func_1286();
	func_1287();
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0x28CB6391ACEDD9DB(0f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[1]))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iLocal_63[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_63[1], true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[2]))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iLocal_63[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_63[2], true, true);
		}
	}
	if (func_1288())
	{
		func_175(0);
	}
	else if (func_1289())
	{
		func_175(1);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (!func_163(17, 1))
			{
				__LIB_6__::func_876(cParam0, 29);
			}
			else if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_13__::func_890(Global_35, -373.8923f, -448.0133f, 78.952f, &uLocal_1863, 20f, 16f, 12f, 8f, 2f, 0, 0, 1, 1, 1);
			}
			else
			{
				if (func_1291())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				}
				if (func_1292())
				{
					__LIB_6__::func_876(cParam0, 29);
				}
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_767(char[4] cParam0)
{
	PED::_0x411189E51B8020BA(Global_35, "cautious");
	PED::_0xA6F67BEC53379A32(Global_35, "HandsOnBelt");
	func_175(0);
	func_1293(cParam0);
	func_443(cParam0, 1, 0);
	func_443(cParam0, 2, 0);
	__LIB_0__::func_325(&iLocal_145);
	__LIB_1__::func_281(&iLocal_1806, 1, 1);
	__LIB_8__::func_771(iLocal_63[0], 0, 1, 0);
	func_1295(0);
	func_450(8, 0);
	func_450(9, 0);
	func_450(10, 0);
	return 1;
}

int func_768(char[4] cParam0)
{
	if (!func_1255(cParam0, 14))
	{
		return 0;
	}
	if (!func_1255(cParam0, 15))
	{
		return 0;
	}
	if (!func_1255(cParam0, 17))
	{
		return 0;
	}
	if (!func_1255(cParam0, 18))
	{
		return 0;
	}
	func_171(0);
	return 1;
}

int func_769(char[4] cParam0)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	__LIB_6__::func_868(cParam0, 512);
	__LIB_14__::func_237(iLocal_20);
	return 1;
}

int func_770(char[4] cParam0)
{
	var uVar0;
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	func_1297(&uVar0);
	uVar0 = iLocal_108[25];
	func_1298(&uVar0);
	if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	}
	if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_LASSO"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	}
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("WEAPON_LASSO"), 0);
	return 1;
}

bool func_771(char[4] cParam0)
{
	func_1299(cParam0);
	func_1300();
	func_1301();
	func_1283(cParam0, 1);
	func_1286();
	func_1287();
	if (!func_449(13))
	{
		if (__LIB_2__::func_901(iLocal_63[18], Global_35))
		{
			__LIB_9__::func_212(0, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
			func_450(13, 1);
		}
	}
	if (iLocal_1873 <= 3)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	__LIB_4__::func_614();
	if (func_1304() && !func_1305())
	{
		func_1306(0);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1307())
			{
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_772(var uParam0)
{
	__LIB_0__::func_325(&iLocal_146);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_LASSO"));
	return 1;
}

int func_773(char[4] cParam0)
{
	if (!func_1255(cParam0, 18))
	{
		return 0;
	}
	func_171(0);
	return 1;
}

int func_775(char[4] cParam0)
{
	__LIB_0__::func_37(&uLocal_1735);
	__LIB_1__::func_148(&uLocal_1738);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_63[0], sLocal_58, 19, 0, -1, 0, 0, -1);
	__LIB_9__::func_60(cParam0, 0);
	return 1;
}

bool func_776(char[4] cParam0)
{
	func_1308(cParam0);
	func_1309();
	func_1310(cParam0);
	func_1287();
	func_1283(cParam0, iLocal_1798 == 9);
	func_1311();
	if (!func_1305())
	{
		func_1306(0);
	}
	if (!func_449(13))
	{
		if (__LIB_2__::func_901(iLocal_63[18], Global_35))
		{
			__LIB_9__::func_212(0, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
			func_450(13, 1);
		}
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1312())
			{
				func_1313();
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if ((func_1314() && !func_1315()) && !func_1305())
			{
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_777(char[4] cParam0)
{
	__LIB_3__::func_760();
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	func_176();
	func_1316(cParam0);
	return 1;
}

int func_778(var uParam0)
{
	func_171(0);
	return 1;
}

int func_780(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 4))
	{
		func_450(14, 1);
	}
	__LIB_9__::func_60(cParam0, 0);
	__LIB_8__::func_662(cParam0, 120f);
	__LIB_8__::func_661(cParam0, 100f);
	return 1;
}

bool func_781(char[4] cParam0)
{
	func_1317(cParam0);
	func_1318(cParam0);
	func_1319();
	func_1320();
	func_1321();
	func_1322(cParam0);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1323(cParam0))
			{
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (iLocal_1900 == 4)
			{
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (func_1324())
			{
				__LIB_1__::func_148(&uLocal_1897);
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 64, 0, 0, 0, 0);
				__LIB_6__::func_876(cParam0, 4);
			}
			else
			{
				__LIB_6__::func_876(cParam0, 4);
			}
			break;
		case 4:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			if (((!PED::IS_PED_ON_MOUNT(Global_35) && func_1325()) && func_1326()) && func_1327())
			{
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_782(var uParam0)
{
	if (func_1264() && __LIB_0__::func_94(iLocal_63[3], func_1328(3, 5), 1) < 40f)
	{
		__LIB_3__::func_638(iLocal_63[3], func_499(3, 5), 1.5f, 20000, 1048576000 /* Float: 0.25f */, 0);
	}
	__LIB_0__::func_325(&iLocal_145);
	__LIB_1__::func_281(&iLocal_1806, 1, 1);
	__LIB_8__::func_771(iLocal_63[0], 0, 1, 0);
	return 1;
}

int func_783(char[4] cParam0)
{
	if (__LIB_6__::func_862(cParam0, 32))
	{
		__LIB_6__::func_887(cParam0, 32);
	}
	__LIB_4__::func_655(&(cParam0->f_7375));
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_63[0], -613.8276f, -488.6407f, 77.7919f, 117.8077f, true, false, true);
	func_1332();
	func_171(0);
	return 1;
}

int func_784(var uParam0)
{
	func_1332();
	PED::_0xAE6004120C18DF97(iLocal_63[0], 0, 0);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
	}
	return 1;
}

int func_785(char[4] cParam0)
{
	func_1333(cParam0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_868(cParam0, 33554432);
	if (func_1264())
	{
		TASK::TASK_STAND_STILL(iLocal_63[3], -1);
	}
	PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 0);
	__LIB_9__::func_53(cParam0);
	return 1;
}

bool func_786(char[4] cParam0)
{
	func_1335(cParam0);
	func_1336();
	func_1337();
	func_1338();
	func_1339();
	func_1340();
	func_1341();
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (iLocal_1973 == 5)
			{
				func_1271(cParam0);
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_787(var uParam0)
{
	func_446();
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_63[0], false, true);
	func_1342(&(iLocal_63[0]));
	PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 1);
	return 1;
}

int func_788(var uParam0)
{
	if (!func_1343())
	{
		return 0;
	}
	if (func_1264())
	{
		TASK::CLEAR_PED_TASKS(iLocal_63[3], true, false);
		func_1254(iLocal_63[3], func_499(3, 5), 2, 1073741824 /* Float: 2f */);
		TASK::TASK_STAND_STILL(iLocal_63[3], -1);
	}
	func_1332();
	func_171(0);
	MISC::SET_BIT(&(Global_1956580.f_1), 5);
	return 1;
}

int func_789(char[4] cParam0)
{
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_63[0], false, true);
	}
	func_445(cParam0, 1, 0);
	func_1344();
	func_1332();
	__LIB_9__::func_142(cParam0, "REV1_PICKUP", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	return 1;
}

int func_790(char[4] cParam0)
{
	func_446();
	ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	func_1333(cParam0);
	ENTITY::_0x18FF3110CF47115D(iLocal_63[0], 0, 0);
	__LIB_2__::func_930(iLocal_63[0], 0);
	func_954(6);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_60(cParam0, 0);
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	__LIB_14__::func_308(&(cParam0->f_7375), iLocal_108[31], 10208, 0, 24, 0);
	return 1;
}

bool func_791(char[4] cParam0)
{
	func_1348(cParam0);
	func_1349();
	func_1350(cParam0);
	func_1351();
	PED::SET_PED_RESET_FLAG(Global_35, 224, true);
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[7], true, 0) && !func_1352())
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
	}
	func_450(15, func_1353());
	if (ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 5)
	{
		func_1354();
	}
	func_380(cParam0, 26, -1);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1353())
			{
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1353())
			{
				__LIB_6__::func_876(cParam0, 0);
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[7], true, 0))
			{
				func_450(4, 1);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (__LIB_0__::func_266(iLocal_63[0], func_1328(3, 0), 3f, 1, 1))
			{
				if (func_1356())
				{
					func_1357();
					func_1358(cParam0);
					func_1359(cParam0, 29, 1.2f);
				}
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_792(var uParam0)
{
	ENTITY::_0x18FF3110CF47115D(iLocal_63[0], 2, 0);
	return 1;
}

int func_793(char[4] cParam0)
{
	if (!func_380(cParam0, 26, -1))
	{
		return 0;
	}
	__LIB_9__::func_154(cParam0, iLocal_63[26], 0, 0, 0, 0, 0);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_63[26], true);
	ENTITY::SET_ENTITY_COLLISION(iLocal_63[26], true, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_63[26], false);
	func_171(0);
	return 1;
}

int func_794(var uParam0)
{
	__LIB_9__::func_99(uParam0, -1, 0);
	__LIB_14__::func_308(&(uParam0->f_7375), iLocal_108[31], 10208, 0, 24, 0);
	return 1;
}

int func_795(char[4] cParam0)
{
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	return 1;
}

bool func_796(char[4] cParam0)
{
	func_1361(cParam0);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			__LIB_6__::func_876(cParam0, 29);
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_797(var uParam0)
{
	__LIB_12__::func_786(Global_1835011[uParam0->f_607 /*74*/].f_1);
	return 1;
}

bool func_798()
{
	return iLocal_150 == MISC::GET_FRAME_COUNT();
}

bool func_799(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char[4] cParam7, char[4] cParam8, int iParam9)
{
	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_3 = 0f;
	*iParam3 = func_1363(iParam0);
	*iParam4 = -1;
	*iParam5 = joaat("META_OUTFIT_DEFAULT");
	StringCopy(sParam6, "", 32);
	*cParam7 = joaat("REL_NO_RELATIONSHIP");
	*cParam8 = 0;
	*iParam9 = 0;
	switch (iParam0)
	{
		case 0:
			*iParam4 = 21;
			StringCopy(sParam6, "SWANSON", 32);
			if (iParam1 == iLocal_16)
			{
				*uParam2 = { func_499(0, 1) };
			}
			else if (iParam1 == iLocal_17)
			{
				*uParam2 = { func_499(1, 1) };
			}
			else if (iParam1 == iLocal_18)
			{
				*uParam2 = { func_499(1, 1) };
			}
			else if (iParam1 == iLocal_19)
			{
				*uParam2 = { func_499(1, 1) };
			}
			else if (iParam1 == iLocal_20)
			{
				*uParam2 = { -384.5769f, -439.0295f, 78.6709f };
				uParam2->f_3 = 65.1811f;
			}
			else if (iParam1 == iLocal_21)
			{
				*uParam2 = { func_499(4, 1) };
			}
			else if (iParam1 == iLocal_22)
			{
				*uParam2 = { func_499(4, 1) };
			}
			else if (iParam1 == iLocal_23)
			{
				*uParam2 = { -576.8f, -464.55f, 80.09f };
				uParam2->f_3 = 128.45f;
			}
			else if (iParam1 == iLocal_24)
			{
				*uParam2 = { func_499(3, 0) };
			}
			break;
		case 1:
			*uParam2 = { func_1328(0, 2) };
			uParam2->f_3 = func_1364(0, 2);
			StringCopy(sParam6, "RRVD_PokerGuy", 32);
			break;
		case 2:
			*uParam2 = { func_1328(0, 2) };
			uParam2->f_3 = func_1364(0, 2);
			StringCopy(sParam6, "RRVD_PokerGuy2", 32);
			break;
		case 3:
			if (iParam1 < iLocal_24)
			{
				*uParam2 = { -353.721f, -361.9061f, 86.0706f };
				uParam2->f_3 = 288.2406f;
			}
			else
			{
				*uParam2 = { -571.3845f, -454.2976f, 79.8507f };
				uParam2->f_3 = 325.8443f;
			}
			break;
		case 4:
			*uParam2 = { func_1328(5, 3) };
			uParam2->f_3 = func_1364(5, 3);
			break;
		case 5:
			*uParam2 = { func_1328(5, 4) };
			uParam2->f_3 = func_1364(5, 4);
			break;
		case 6:
			*uParam2 = { func_1328(5, 5) };
			uParam2->f_3 = func_1364(5, 5);
			break;
		case 7:
			*uParam2 = { func_1328(5, 10) };
			uParam2->f_3 = func_1364(5, 10);
			break;
		case 8:
			*uParam2 = { func_1328(5, 11) };
			uParam2->f_3 = func_1364(5, 11);
			break;
		case 9:
			*uParam2 = { func_1328(5, 12) };
			uParam2->f_3 = func_1364(5, 12);
			break;
		case 10:
			*uParam2 = { func_1328(5, 13) };
			uParam2->f_3 = func_1364(5, 13);
			break;
		case 11:
			*uParam2 = { func_1328(5, 14) };
			uParam2->f_3 = func_1364(5, 14);
			break;
		case 12:
			*uParam2 = { func_1328(5, 15) };
			uParam2->f_3 = func_1364(5, 15);
			break;
		case 13:
			*uParam2 = { func_1328(5, 16) };
			uParam2->f_3 = func_1364(5, 16);
			break;
		case 14:
			*uParam2 = { -320.32f, -362.04f, 87.0272f };
			uParam2->f_3 = 100.61f;
			*iParam5 = -85094670;
			StringCopy(sParam6, "REV1_Civ1", 32);
			*cParam7 = joaat("REL_PLAYER_LIKE");
			break;
		case 15:
			*uParam2 = { -321.21f, -362.34f, 87.0272f };
			uParam2->f_3 = 334.1857f;
			*iParam5 = 479580738;
			StringCopy(sParam6, "REV1_Civ1a", 32);
			*cParam7 = joaat("REL_PLAYER_LIKE");
			break;
		case 17:
			*uParam2 = { func_499(0, 7) };
			if (iParam1 >= iLocal_19)
			{
				uParam2->f_3 = 321.2563f;
			}
			*iParam5 = 629126052;
			*cParam7 = joaat("REL_PLAYER_DISLIKE");
			StringCopy(sParam6, "REV1_Civ3", 32);
			break;
		case 18:
			*iParam5 = -2040455288;
			*uParam2 = { -397.39f, -462.18f, 76.78f };
			uParam2->f_3 = -42.41f;
			*cParam7 = joaat("REL_CIVMALE");
			StringCopy(sParam6, "REV1_WITNESS", 32);
			break;
		case 16:
			*uParam2 = { -346.3435f, -358.7893f, 87.0266f };
			uParam2->f_3 = 165.628f;
			StringCopy(sParam6, "REV1_Civ2", 32);
			*cParam7 = joaat("REL_PLAYER_LIKE");
			break;
		case 19:
			*uParam2 = { -655.7828f, -452.2621f, 49.9509f };
			uParam2->f_3 = 159.1308f;
			*cParam7 = joaat("REL_COP");
			break;
		case 20:
			*uParam2 = { -657.1974f, -451.2146f, 49.9775f };
			uParam2->f_3 = 152.8134f;
			*cParam7 = joaat("REL_COP");
			break;
		case 21:
			*uParam2 = { -655.6583f, -455.0639f, 49.8667f };
			uParam2->f_3 = 236.8209f;
			*cParam7 = joaat("REL_COP");
			break;
		case 22:
			*uParam2 = { -656.0872f, -458.0972f, 49.7729f };
			uParam2->f_3 = 237.0348f;
			*cParam7 = joaat("REL_COP");
			break;
		case 23:
			*iParam4 = 16;
			StringCopy(sParam6, "MOLLY", 32);
			*uParam2 = { -128.7338f, -30.9646f, 95.0851f };
			uParam2->f_3 = 278.1286f;
			*cParam8 = 1;
			break;
		case 24:
			*uParam2 = { 1f, 1f, 1f };
			*cParam7 = joaat("REL_COP");
			*cParam8 = 1;
			break;
		case 25:
			*uParam2 = { 1f, 1f, -5f };
			*cParam7 = joaat("REL_COP");
			*cParam8 = 1;
			break;
		case 26:
			*iParam4 = 19;
			*iParam9 = -268604689;
			StringCopy(sParam6, "SUSAN", 32);
			*uParam2 = { -148.4471f, -39.6255f, 94.492f };
			uParam2->f_3 = 265.2805f;
			*cParam8 = 1;
			break;
	}
	return (*iParam3 != 0 || *iParam4 != -1);
}

bool func_800(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1366(iParam1, 1, 0, uParam4, uParam5, uParam6, iParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1367(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_802()
{
	iLocal_150 = MISC::GET_FRAME_COUNT();
}

void func_803(char[4] cParam0, int iParam1, int iParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, int iParam7, bool bParam8)
{
	if (iParam2 != joaat("META_OUTFIT_DEFAULT"))
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_63[iParam1], iParam2);
		PED::_UPDATE_PED_VARIATION(iLocal_63[iParam1], false, true, true, true, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cParam3))
	{
		__LIB_9__::func_42(cParam0, iLocal_63[iParam1], &cParam3, 0);
	}
	if (iParam7 != joaat("REL_NO_RELATIONSHIP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_63[iParam1], iParam7);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_63[iParam1], bParam8);
	if (iParam1 == 0)
	{
		__LIB_1__::func_296(21, 0, 0, 1);
		ENTITY::_0x18FF3110CF47115D(iLocal_63[iParam1], 0, 0);
		__LIB_14__::func_238(cParam0, iLocal_63[iParam1], 512);
	}
	else if (iParam1 == 26)
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_63[iParam1], false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_63[iParam1], false, false);
	}
	else if (iParam1 == 18)
	{
		func_1372(iParam1);
		PED::_0xAE6004120C18DF97(iLocal_63[iParam1], 0, 0);
		__LIB_2__::func_930(iLocal_63[iParam1], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[iParam1], true);
		ENTITY::_0x18FF3110CF47115D(iLocal_63[iParam1], 2, 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_63[iParam1], 7, 0);
	}
	else if (iParam1 == 17)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[iParam1], true);
		ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_63[iParam1], BUILTIN::ROUND((IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_63[17], false)) * 1.4f)));
		ENTITY::_SET_ENTITY_HEALTH(iLocal_63[iParam1], ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_63[17], false), 0);
		PED::_SET_PED_BRAWLING_STYLE(iLocal_63[iParam1], joaat("BS_BRUISER"));
		ENTITY::_0x18FF3110CF47115D(iLocal_63[iParam1], 0, 0);
		func_1372(iParam1);
		PED::_0xAE6004120C18DF97(iLocal_63[iParam1], 0, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_63[iParam1], false, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_63[iParam1], true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[iParam1], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[iParam1], 46, true);
	}
	else if (iParam1 == 1)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_63[iParam1], "RRVD_POKERGUY2");
	}
	else if (iParam1 == 2)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_63[iParam1], "RRVD_POKERGUY");
	}
}

int func_804(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = iVar1;
		iVar3 = func_1363(iVar2);
		if (iVar3 == iVar0)
		{
			return iVar2;
		}
		iVar1++;
	}
	return -1;
}

int func_805(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar2 = iVar1;
		iVar3 = func_1373(iVar2);
		if (iVar3 == iVar0)
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, __LIB_5__::func_393()))
			{
				iVar4 = DECORATOR::DECOR_GET_INT(iParam0, __LIB_5__::func_393());
				iVar2 = func_1375(iVar4);
				DECORATOR::DECOR_REMOVE(iParam0, __LIB_5__::func_393());
				if (iVar2 == -1)
				{
				}
			}
			return iVar2;
		}
		iVar1++;
	}
	return -1;
}

void func_810(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_1379();
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
						__LIB_9__::func_23(__LIB_0__::func_23());
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

void func_812(var uParam0)
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
			func_891(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_891(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_813(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_891(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_821(int iParam0, int iParam1)
{
	var uVar0;
	return func_1403(&uVar0, iParam0, iParam1);
}

void func_891(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_891(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_891(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_893(var uParam0, int iParam1)
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
			func_810(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_6__::func_918(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_1__::func_283(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_3)) >= 1f)
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

bool func_895(char[4] cParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_9__::func_40(cParam0);
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) <= 3)
	{
		iVar0 = __LIB_6__::func_864(cParam0);
	}
	Var1 = { __LIB_8__::func_688(cParam0, iVar0) };
	if (__LIB_14__::func_244(&(cParam0->f_10792), Var1, __LIB_0__::func_81(&(cParam0->f_10792)), 0))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 262144);
		if (__LIB_4__::func_562(&(cParam0->f_10792), 524288))
		{
			__LIB_8__::func_665(cParam0, 67108864);
			__LIB_4__::func_563(&(cParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

bool func_897(char[4] cParam0, struct<4> Param1)
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
	if (func_1472(Param1, &(cParam0->f_7375), cParam0))
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

bool func_903(char[4] cParam0)
{
	if ((((((func_1277(1) && func_1277(2)) && func_1277(3)) && func_1277(0)) && func_1277(4)) && func_1277(5)) && func_1277(6))
	{
		return true;
	}
	return false;
}

bool func_904(char[4] cParam0)
{
	if (!func_1479(cParam0))
	{
		return false;
	}
	if (!func_1480(cParam0))
	{
		return false;
	}
	if (!func_1481(cParam0))
	{
		return false;
	}
	if (!func_1482(cParam0))
	{
		return false;
	}
	Local_239[14 /*55*/].f_1 = "station0";
	Local_239[15 /*55*/].f_1 = "station1";
	return true;
}

bool func_905(char[4] cParam0)
{
	if (!PROPSET::_REQUEST_PROPSET_2(joaat("PG_VEH_PRIVATESTEAMER01X")))
	{
		return false;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED_2(joaat("PG_VEH_PRIVATESTEAMER01X")))
	{
		return false;
	}
	if (!func_1277(7))
	{
		return false;
	}
	if (!func_1277(8))
	{
		return false;
	}
	if (!func_1277(9))
	{
		return false;
	}
	return true;
}

bool func_906()
{
	int iVar0;
	bool bVar1;
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = (func_1483(iVar0) && bVar1);
		iVar0++;
	}
	return bVar1;
}

void func_909(char[4] cParam0)
{
	__LIB_9__::func_154(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_63[0], "RevSwanson", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_63[1], "U_M_M_VALPOKERPLAYER_01", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_63[2], "U_M_M_VALPOKERPLAYER_02", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_97[0], "p_cards01x", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_97[2], "p_chair05x", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_97[1], "p_chair05x^1", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_97[3], "p_chair05x^2", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_97[4], 0, 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_97[5], 0, 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_97[6], 0, 0, 0, 0, 0);
}

void func_910(char[4] cParam0)
{
	__LIB_9__::func_14(cParam0, 239760);
	__LIB_9__::func_15(cParam0, 239838);
	__LIB_9__::func_16(cParam0, 239943);
}

void func_913(char[4] cParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_23();
	switch (iLocal_1799)
	{
		case 0:
			__LIB_0__::func_467(&iVar0, 17);
			__LIB_0__::func_468(&iVar0, 0);
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), false, true, true, 60f, false);
			MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
			if (bParam1)
			{
				CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar0), __LIB_0__::func_42(iVar0), __LIB_0__::func_43(iVar0));
				func_1492(2);
				iVar1 = __LIB_6__::func_864(cParam0);
				if (iVar1 <= iLocal_21)
				{
					func_1493(1);
				}
				else if (iVar1 == iLocal_22)
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("MISSION_reverend1_sunPos");
					func_1493(3);
				}
				else
				{
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
					func_1493(4);
				}
			}
			else
			{
				func_1493(1);
			}
			break;
		case 1:
			if (CLOCK::GET_CLOCK_HOURS() <= 8)
			{
				if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 500)
				{
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(500);
				}
			}
			else if (CLOCK::GET_CLOCK_HOURS() <= 11)
			{
				if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 1000)
				{
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(1000);
				}
			}
			else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
			}
			if (__LIB_6__::func_864(cParam0) <= iLocal_20)
			{
				if (func_1496(func_1494(), func_1495(0), 1))
				{
					__LIB_0__::func_467(&iVar0, 17);
					__LIB_0__::func_468(&iVar0, 0);
					CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
				}
			}
			else
			{
				CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("MISSION_reverend1_sunPos", 40f);
				if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
				{
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
				}
				__LIB_1__::func_148(&uLocal_1729);
				func_1493(2);
			}
			break;
		case 2:
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			__LIB_9__::func_827(17, 0, 0, 0);
			if (__LIB_0__::func_264(&uLocal_1729) >= 40f)
			{
				func_1493(3);
			}
			break;
		case 3:
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			__LIB_9__::func_827(17, 0, 0, 0);
			if (__LIB_6__::func_864(cParam0) == iLocal_23)
			{
				if (__LIB_8__::func_671(cParam0))
				{
					GRAPHICS::_0xBB6C707F20D955D4(20f);
					func_1493(4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_914(char[4] cParam0)
{
	int iVar0;
	func_1499(cParam0);
	iVar0 = __LIB_6__::func_864(cParam0);
	if (iVar0 != iLocal_16)
	{
		func_913(cParam0, 0);
	}
	if (iVar0 == iLocal_23)
	{
		func_1500();
	}
	if (iVar0 == iLocal_16 || iVar0 == iLocal_17)
	{
		__LIB_1__::func_538(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[3]) && __LIB_0__::func_255(iLocal_63[3], 0))
	{
		__LIB_9__::func_156(cParam0, "REV1_HOR_FAIL", "", 1, 0);
	}
	if (iLocal_1810 == 7)
	{
		__LIB_9__::func_156(cParam0, "LAW_FAIL", "", 1, 0);
	}
	if (iVar0 == iLocal_16)
	{
		__LIB_0__::func_11(cParam0);
	}
	else if (iVar0 == iLocal_17)
	{
		__LIB_0__::func_11(cParam0);
	}
	else if (iVar0 == iLocal_18)
	{
		func_1506(cParam0);
	}
	else if (iVar0 == iLocal_19)
	{
		__LIB_0__::func_11(cParam0);
	}
	else if (iVar0 == iLocal_20)
	{
		func_1508(cParam0);
	}
	else if (iVar0 == iLocal_21)
	{
		func_1509(cParam0);
	}
	else if (iVar0 == iLocal_22)
	{
		func_1510(cParam0);
	}
	else if (iVar0 == iLocal_23)
	{
		func_1511(cParam0);
	}
}

bool func_931(char[4] cParam0, int iParam1, int iParam2)
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
				__LIB_11__::func_239(cParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1522(cParam0);
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

bool func_933(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_6__::func_872(cParam0, 16384))
	{
		if (func_895(cParam0))
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
			if (func_895(cParam0))
			{
				__LIB_6__::func_887(cParam0, 2097152);
				func_897(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_897(cParam0, Var0);
		}
	}
	else if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (func_895(cParam0))
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
		return func_897(cParam0, Var0);
	}
	return true;
}

bool func_949(int iParam0)
{
	return (uLocal_2012 && iParam0) == iParam0;
}

int func_950(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 13;
		case 2:
			return 7;
		case 4:
			return 0;
		case 8:
			return 5;
		case 16:
			return 14;
		case 32:
			return 2;
		case 64:
			return 1;
		case 128:
			return 20;
		case 256:
			return 10;
		case 512:
			return 9;
		case 1024:
			return 15;
		case 2048:
			return 6;
		case 4096:
			return 17;
		case 8192:
			return 11;
		case 16384:
			return 18;
		case 32768:
			return 22;
		case 65536:
			return 4;
		case 131072:
			return 3;
		case 262144:
			return 8;
		default:
			break;
	}
	return -1;
}

void func_951(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(&uLocal_2012, iParam0);
	}
	else
	{
		__LIB_0__::func_8(&uLocal_2012, iParam0);
	}
}

void func_954(int iParam0)
{
	if (func_1545(iParam0))
	{
		if (iParam0 == 6)
		{
			PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_108[iParam0], 4, 0);
		}
		VOLUME::_DELETE_VOLUME(iLocal_108[iParam0]);
	}
}

bool func_957(int iParam0, bool bParam1)
{
	return (((iParam0 > -1 && iParam0 < 5) && ENTITY::DOES_ENTITY_EXIST(iLocal_91[iParam0])) && (!bParam1 || !ENTITY::IS_ENTITY_DEAD(iLocal_91[iParam0])));
}

void func_958(int iParam0)
{
	if (func_1546(iParam0))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_97[iParam0]));
	}
}

struct<4> func_1009(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_1586(iParam0, iParam1) };
	Var0.f_3 = func_1587(iParam0, iParam1);
	return Var0;
}

void func_1174(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_311(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1717(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_314(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_671(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1722(Var0);
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

void func_1177(bool bParam0)
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
		func_311(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_671(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_671(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_671(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_671(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_671(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_671(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_671(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_671(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_671(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_671(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_671(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1222(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1222(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1222(iVar63, -915411861, 1, 0, 0));
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

void func_1248(char[4] cParam0, int iParam1)
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
		cParam0->f_1[iVar0 /*22*/][iVar1] = 57906;
		MISC::CLEAR_BIT(&(cParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

bool func_1250(char[4] cParam0)
{
	if (func_163(1, 1) && func_163(2, 1))
	{
		return true;
	}
	if (!func_163(1, 1))
	{
		if (!func_380(cParam0, 1, __LIB_6__::func_864(cParam0)))
		{
		}
	}
	if (!func_163(2, 1))
	{
		if (!func_380(cParam0, 2, __LIB_6__::func_864(cParam0)))
		{
		}
	}
	return (func_163(1, 1) && func_163(2, 1));
}

bool func_1252()
{
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR"), 15, 0, 0);
	return STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR"), false);
}

void func_1253()
{
	int iVar0;
	if ((__LIB_0__::func_797(0) && __LIB_0__::func_272(__LIB_0__::func_398(0), 0)) && !TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(0)))
	{
		iVar0 = __LIB_0__::func_398(0);
	}
	else if ((__LIB_0__::func_797(1) && __LIB_0__::func_272(__LIB_0__::func_398(1), 0)) && !TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(1)))
	{
		iVar0 = __LIB_0__::func_398(1);
	}
	if (__LIB_0__::func_272(iVar0, 0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, -353.6652f, -362.2751f, 86.0569f, 300.5535f, false, false, true);
		TASK::TASK_STAND_STILL(iVar0, -1);
	}
}

void func_1254(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_891(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1255(char[4] cParam0, int iParam1)
{
	if (func_163(iParam1, 1))
	{
		return true;
	}
	if (func_380(cParam0, iParam1, __LIB_6__::func_864(cParam0)))
	{
		func_1774(iParam1);
		__LIB_4__::func_228(&(Local_239[iParam1 /*55*/].f_2));
		__LIB_1__::func_393(&(Local_239[iParam1 /*55*/].f_2), 1);
		__LIB_2__::func_507(&(Local_239[iParam1 /*55*/].f_2), 2000);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[iParam1], true);
		if (iParam1 == 18)
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_63[18], -355.3946f, -361.1851f, 86.2149f, 1f, -1, true, false, true, false);
			PED::_0x463803429297117C(iLocal_63[18], -355.3946f, -361.1851f, 86.2149f, 1, 0);
		}
		return true;
	}
	return false;
}

bool func_1256(char[4] cParam0)
{
	func_1282(cParam0);
	return (iLocal_1807 > 0 && iLocal_1807 < 10);
}

bool func_1257(char[4] cParam0)
{
	int iVar0[6];
	struct<9> Var7;
	if (__LIB_1__::func_243(30))
	{
		if (__LIB_1__::func_77(2, 8388608))
		{
			return true;
		}
	}
	else
	{
		iVar0[0] = 0;
		iVar0[1] = 0;
		iVar0[2] = 0;
		iVar0[3] = iLocal_63[2];
		iVar0[4] = iLocal_63[1];
		iVar0[5] = 0;
		__LIB_3__::func_20(2, cParam0->f_7375.f_804);
		Var7 = -1;
		Var7.f_1 = -1;
		Var7.f_2 = -1;
		__LIB_1__::func_65(30, &Var7, 1);
		Var7.f_8 = -43f;
		if (func_1781(30, 75, Var7.f_5, Var7.f_8, BUILTIN::ROUND(Var7.f_4), &iVar0, 1, 3, 0))
		{
		}
	}
	return false;
}

bool func_1258()
{
	return iLocal_1860 == 3;
}

void func_1260(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (func_1546(iVar1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_97[iVar1], bParam0);
		}
		iVar0++;
	}
}

void func_1261()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (!func_1546(iVar1))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			vVar5 = { 0f, 0f, 0f };
			switch (iVar1)
			{
				case 1:
					vVar2 = { -328.51f, -358.79f, 87.05f };
					vVar5 = { 0f, 0f, -180f };
					break;
				case 2:
					vVar2 = { -328.9037f, -357.6594f, 87.0537f };
					vVar5 = { 0f, 0f, 77.46f };
					break;
				case 3:
					vVar2 = { -326.82f, -356.86f, 87.05f };
					vVar5 = { 0f, 0f, -31.37f };
					break;
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_97[iVar1], vVar2, false, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_97[iVar1], vVar5, 2, false);
		}
		iVar0++;
	}
}

bool func_1264()
{
	return (func_163(3, 1) && !TASK::IS_PED_IN_WRITHE(iLocal_63[3]));
}

void func_1265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
						vVar0.x = iParam2;
						vVar0.f_1 = iParam3;
						vVar0.f_2 = iParam4;
						if (__LIB_0__::func_86(vVar0))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, 0f) };
							__LIB_0__::func_634(&vVar0, 50, 10, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Var4.f_3, vVar0, false, false, true, true);
					}
					func_1785(&iParam0, iVar3, &iVar8, 1, -142743235);
				}
				else if (ENTITY::IS_ENTITY_A_PED(Var4.f_3))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var4.f_3);
					if (PED::IS_PED_HUMAN(iVar9))
					{
						PED::_0xED00D72F81CF7278(Var4.f_3, 0, 1);
						vVar0.x = iParam2;
						vVar0.f_1 = iParam3;
						vVar0.f_2 = iParam4;
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

bool func_1266(char[4] cParam0)
{
	switch (iLocal_1861)
	{
		case 0:
			if (__LIB_9__::func_222(cParam0, 512))
			{
				if (func_1258())
				{
					__LIB_8__::func_665(cParam0, 524288);
					func_1787(1);
				}
				else
				{
					return true;
				}
			}
			else if (!__LIB_8__::func_671(cParam0))
			{
				func_1787(3);
			}
			break;
		case 1:
			if (!__LIB_8__::func_671(cParam0))
			{
				func_1787(2);
			}
			break;
		case 2:
			if (func_1257(cParam0))
			{
				CAM::DO_SCREEN_FADE_IN(1000);
				func_1787(3);
			}
			break;
		case 3:
			break;
	}
	return iLocal_1861 == 1;
}

void func_1268()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (func_1546(iVar1))
		{
			if (__LIB_0__::func_272(Global_35, 0))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_97[iVar1], Global_35, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_97[iVar1], true);
			}
			if (func_163(1, 1))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_97[iVar1], iLocal_63[1], true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_63[1], iLocal_97[iVar1], true);
			}
			if (func_163(2, 1))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_97[iVar1], iLocal_63[2], true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_63[2], iLocal_97[iVar1], true);
			}
		}
		iVar0++;
	}
}

void func_1270(char[4] cParam0)
{
	if (__LIB_14__::func_239(0))
	{
		__LIB_9__::func_125(cParam0, "1-Player_Wins");
		__LIB_9__::func_46(cParam0, "1-Player_Wins");
	}
	else
	{
		__LIB_9__::func_125(cParam0, "2-Player_Loses");
		__LIB_9__::func_46(cParam0, "2-Player_Loses");
	}
}

void func_1271(char[4] cParam0)
{
	struct<4> Var0;
	Var0 = { __LIB_8__::func_688(cParam0, __LIB_9__::func_40(cParam0)) };
	func_1791(cParam0, &Var0);
}

bool func_1277(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	if (func_1546(iParam0))
	{
		return true;
	}
	if (!func_1793(iParam0, &Var0, &iVar4))
	{
		return false;
	}
	iLocal_97[iParam0] = OBJECT::CREATE_OBJECT(iVar4, Var0, true, true, false, false, true);
	if (func_1546(iParam0))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_97[iParam0], Var0.f_3);
	}
	return func_1546(iParam0);
}

void func_1278(char[4] cParam0)
{
	if (func_1305())
	{
		__LIB_0__::func_325(&iLocal_145);
		return;
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "REV1_FIND_REV", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_208(cParam0, "REV1_FIND_REV", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_0__::func_45("REV1_LOCKON", 7500, 0, 0, 0, 1);
			iLocal_145 = __LIB_8__::func_777(408396114, func_1328(0, 7), 85f, 1);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (!func_449(11) && (func_1289() || func_1797()))
			{
				MAP::REMOVE_BLIP(&iLocal_145);
				iLocal_145 = __LIB_8__::func_777(408396114, func_1328(0, 7), 15.5f, 1);
				func_450(11, 1);
			}
			if (func_1291())
			{
				func_1293(cParam0);
				__LIB_9__::func_60(cParam0, 2);
			}
			else if (__LIB_0__::func_94(Global_35, func_1328(0, 7), 1) < 33f)
			{
				if (!func_449(27))
				{
					if (__LIB_8__::func_711(cParam0, "REV1_FIG_IDLE", 0))
					{
						__LIB_1__::func_148(&uLocal_1738);
						func_450(27, 1);
					}
				}
				else if (!func_449(28) && __LIB_0__::func_265(&uLocal_1738) > 9f)
				{
					if (__LIB_8__::func_711(cParam0, "REV1_FIG_IDLE2", 0))
					{
						__LIB_1__::func_148(&uLocal_1738);
						func_450(28, 1);
					}
				}
				else if (!func_449(29) && __LIB_0__::func_265(&uLocal_1738) > 9f)
				{
					if (__LIB_8__::func_711(cParam0, "REV1_FIG_IDLE3", 0))
					{
						func_450(29, 1);
					}
				}
			}
			break;
		case 2:
			if (__LIB_8__::func_711(cParam0, "REV1_FIG_FIND", 0))
			{
				__LIB_0__::func_325(&iLocal_145);
				iLocal_145 = __LIB_4__::func_983(408396114, func_1328(0, 7), 1);
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_5__::func_463() && __LIB_8__::func_711(cParam0, "REV1_FIG_REL", 0))
			{
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (!func_1801())
			{
				__LIB_0__::func_325(&iLocal_145);
				if (!MAP::DOES_BLIP_EXIST(iLocal_146))
				{
					iLocal_146 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_63[17]);
				}
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1279(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar7 = (1 + iVar0);
		if (!func_163(iVar7, 1))
		{
		}
		else
		{
			if (iVar7 == 1)
			{
				iVar3 = 2;
			}
			else if (iVar7 == 2)
			{
				iVar3 = 1;
			}
			switch (func_1802(iVar7))
			{
				case 0:
					if (!func_1252())
					{
						return;
					}
					if (!func_1803(cParam0))
					{
						return;
					}
					if (iVar7 == 1)
					{
						iVar2 = 2;
						sVar5 = "U_M_M_VALPOKERPLAYER_01";
						sVar6 = "p_chair05x";
					}
					else if (iVar7 == 2)
					{
						iVar2 = 1;
						sVar5 = "U_M_M_VALPOKERPLAYER_02";
						sVar6 = "p_chair05x^1";
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(cParam0->f_7375.f_804, sVar5, iLocal_63[iVar7]);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(cParam0->f_7375.f_804, sVar6, iLocal_97[iVar2]);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(cParam0->f_7375.f_804, "p_chair05x^2", iLocal_97[3]);
					}
					AUDIO::STOP_PED_SPEAKING(iLocal_63[iVar7], true);
					iVar4 = TASK::_0xD508FA229F1C4900(iLocal_97[iVar2], 0f, 0f, 0f, joaat("PROP_HUMAN_SEAT_CHAIR"), 1f);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar4))
					{
						TASK::_TASK_USE_SCENARIO_POINT(iLocal_63[iVar7], iVar4, 0, 0, false, true, joaat("PROP_HUMAN_SEAT_CHAIR"), false, -1f, false);
					}
					func_1774(iVar7);
					__LIB_4__::func_228(&(Local_239[iVar7 /*55*/].f_2));
					func_1804(iVar7, 1);
					break;
				case 1:
					if (iVar7 == 1 && func_1546(2))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_97[2], -329.57f, -357.32f, 87.05f, 76.32f, true, false, true);
					}
					else if (iVar7 == 2 && func_1546(1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_97[1], -329.5f, -358.66f, 87.05f, 115.29f, true, false, true);
					}
					if (func_1546(3))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_97[3], func_1328(0, 6), func_1364(0, 6), true, false, true);
					}
					func_1804(iVar7, 2);
					break;
				case 2:
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[20], true, 0))
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_63[iVar7], &(Local_239[iVar7 /*55*/].f_30));
					}
					if (__LIB_13__::func_262(iLocal_63[iVar7], 0, &(Local_239[iVar7 /*55*/].f_2), &iVar1, 0, 0))
					{
						if (__LIB_1__::func_339(iVar1, 1, 1, 1, 0))
						{
							func_1804(iVar7, 7);
						}
						else
						{
							func_1804(iVar7, 5);
						}
					}
					else if (func_1807(iVar3))
					{
						__LIB_1__::func_148(&(vLocal_1822[iVar0 /*3*/]));
						func_1804(iVar7, 4);
					}
					else if (iVar7 == 1)
					{
						if ((!func_449(21) || !func_449(22)) || !func_449(23))
						{
							if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[20], true, 0))
							{
								if (!__LIB_0__::func_75(&(vLocal_1822[iVar0 /*3*/])))
								{
									__LIB_1__::func_148(&(vLocal_1822[iVar0 /*3*/]));
								}
								else if (__LIB_0__::func_265(&(vLocal_1822[iVar0 /*3*/])) > 10f)
								{
									if (!func_449(21))
									{
										if (__LIB_8__::func_711(cParam0, "REV1_POKR_RET1", 0))
										{
											func_450(21, 1);
										}
									}
									else if (!func_449(22))
									{
										if (__LIB_8__::func_711(cParam0, "REV1_POKR_RET2", 0))
										{
											func_450(22, 1);
										}
									}
									else if (__LIB_8__::func_711(cParam0, "REV1_POKR_RET3", 0))
									{
										func_450(23, 1);
									}
									__LIB_0__::func_37(&(vLocal_1822[iVar0 /*3*/]));
									func_1804(iVar7, 3);
								}
							}
							else
							{
								__LIB_0__::func_37(&(vLocal_1822[iVar0 /*3*/]));
							}
						}
					}
					break;
				case 3:
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[20], true, 0))
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_63[iVar7], &(Local_239[iVar7 /*55*/].f_30));
					}
					if (__LIB_13__::func_262(iLocal_63[iVar7], 0, &(Local_239[iVar7 /*55*/].f_2), &iVar1, 0, 0))
					{
						if (__LIB_1__::func_339(iVar1, 1, 1, 1, 0))
						{
							func_1804(iVar7, 7);
						}
						else
						{
							func_1804(iVar7, 5);
						}
					}
					else if (func_1807(iVar3))
					{
						__LIB_1__::func_148(&(vLocal_1822[iVar0 /*3*/]));
						func_1804(iVar7, 4);
					}
					else if (((func_449(23) && !__LIB_8__::func_684("REV1_POKR_RET3")) || (func_449(22) && !__LIB_8__::func_684("REV1_POKR_RET2"))) || (func_449(21) && !__LIB_8__::func_684("REV1_POKR_RET1")))
					{
						func_1804(iVar7, 2);
					}
					break;
				case 4:
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[20], true, 0))
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_63[iVar7], &(Local_239[iVar7 /*55*/].f_30));
					}
					if (__LIB_13__::func_262(iLocal_63[iVar7], 0, &(Local_239[iVar7 /*55*/].f_2), &iVar1, 0, 0))
					{
						if (__LIB_1__::func_339(iVar1, 1, 1, 1, 0))
						{
							func_1804(iVar7, 7);
						}
						else
						{
							func_1804(iVar7, 5);
						}
					}
					else if (__LIB_0__::func_265(&(vLocal_1822[iVar0 /*3*/])) > 1f)
					{
						if (func_1809(iVar3))
						{
							func_1804(iVar7, 7);
						}
						else
						{
							func_1804(iVar7, 5);
						}
					}
					break;
				case 5:
					if (iVar7 == 1)
					{
						__LIB_8__::func_711(cParam0, "REV1_POKR_GRIEF", 0);
					}
					else if (AUDIO::IS_AMBIENT_SPEECH_DISABLED(iLocal_63[iVar7]))
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_63[iVar7], false);
					}
					PED::_0xEC6935EBE0847B90(iLocal_63[iVar7], Global_36);
					TASK::CLEAR_PED_TASKS(iLocal_63[iVar7], true, false);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_63[iVar7], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
					func_1804(iVar7, 6);
					break;
				case 6:
					if (__LIB_13__::func_262(iLocal_63[iVar7], 0, &(Local_239[iVar7 /*55*/].f_2), &iVar1, 0, 0) && __LIB_1__::func_339(iVar1, 1, 1, 1, 0))
					{
						func_1804(iVar7, 7);
					}
					if ((iVar7 == 1 && AUDIO::IS_AMBIENT_SPEECH_DISABLED(iLocal_63[iVar7])) && !__LIB_8__::func_684("REV1_POKR_GRIEF"))
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_63[iVar7], false);
					}
					break;
				case 7:
					if (iVar7 == 1)
					{
						__LIB_8__::func_711(cParam0, "REV1_POKR_GRIEF", 0);
					}
					else if (AUDIO::IS_AMBIENT_SPEECH_DISABLED(iLocal_63[iVar7]))
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_63[iVar7], false);
					}
					PED::_0xEEED8FAFEC331A70(iLocal_63[iVar7], Global_36, 1);
					TASK::CLEAR_PED_TASKS(iLocal_63[iVar7], true, false);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_63[iVar7], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					func_1804(iVar7, 8);
					break;
				case 8:
					if ((iVar7 == 1 && AUDIO::IS_AMBIENT_SPEECH_DISABLED(iLocal_63[iVar7])) && !__LIB_8__::func_684("REV1_POKR_GRIEF"))
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_63[iVar7], false);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1280(char[4] cParam0)
{
	if (!func_163(17, 1))
	{
		func_1810(6);
	}
	switch (iLocal_1862)
	{
		case 0:
			func_1254(iLocal_63[0], func_499(1, 1), 2, 1073741824 /* Float: 2f */);
			func_1254(iLocal_63[17], func_499(0, 7), 2, 1073741824 /* Float: 2f */);
			ENTITY::_0x9587913B9E772D29(iLocal_63[0], 0);
			ENTITY::_0x9587913B9E772D29(iLocal_63[17], 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_63[0], false, joaat("REL_PLAYER_DISLIKE"));
			func_1332();
			TASK::TASK_REACT(iLocal_63[18], iLocal_63[17], 0f, 0f, 0f, "default_scared", -1f, -1f, 4);
			func_1810(1);
			break;
		case 1:
			PED::_0x789DABD18E9024DB(iLocal_63[17], 15, 1);
			PED::_0x789DABD18E9024DB(iLocal_63[0], 3, 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(iLocal_63[17], iLocal_63[0], joaat("AR_GRAPPLE_FRONT_FROM_FRONT"), 0, 0, 1, 0);
			func_1810(2);
			break;
		case 2:
			if (PED::_0x0E99E3BF11BB6367(iLocal_63[17]))
			{
				func_1810(3);
			}
			else if (!__LIB_0__::func_163(iLocal_63[17], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
			{
				func_1810(1);
			}
			break;
		case 3:
			if (MISC::IS_BULLET_IN_AREA(func_1328(0, 7), 12f, true))
			{
				__LIB_1__::func_148(&uLocal_1869);
				func_1810(5);
			}
			else if (__LIB_8__::func_618(cParam0) == 4 || !PED::_0x0E99E3BF11BB6367(iLocal_63[17]))
			{
				PED::_0x8301D87B1B89E219(iLocal_63[17], joaat("ACT_GRAPPLE_THROW_RIGHT"));
				PED::_0x789DABD18E9024DB(iLocal_63[17], 32768, 0);
				PED::_0x923583741DC87BCE(iLocal_63[0], "default");
				PED::_0x89F5E7ADECCCB49C(iLocal_63[0], "injured_head");
				func_1810(4);
			}
			break;
		case 4:
			if (!PED::_0x0E99E3BF11BB6367(iLocal_63[17]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_63[17], true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_63[17], Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_63[0], -449.4807f, -416.2991f, 87.9073f, 1f, 20000, 0.25f, 0, 240.1111f);
				PED::_0xEAE3B5B019C8D23F(iLocal_63[17], 262143);
				PED::_0x949B2F9ED2917F5D(iLocal_63[17], 8);
				PED::_0x949B2F9ED2917F5D(iLocal_63[17], 21);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_63[0], true, joaat("REL_PLAYER_DISLIKE"));
				func_1810(6);
			}
			break;
		case 5:
			if (!PED::_0x0E99E3BF11BB6367(iLocal_63[17]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[17], Global_35, 1, 1))
			{
				func_1810(4);
			}
			else if (__LIB_0__::func_265(&uLocal_1869) > 1.5f)
			{
				__LIB_1__::func_864(iLocal_63[0], 0, 0);
				func_1810(6);
			}
			break;
		case 6:
			break;
	}
}

void func_1281(char[4] cParam0)
{
	if (func_1291())
	{
		__LIB_8__::func_771(iLocal_63[0], 0, 1, 0);
		if (__LIB_0__::func_139(iLocal_1806))
		{
			__LIB_1__::func_281(&iLocal_1806, 1, 1);
		}
		func_1295(9);
	}
	switch (iLocal_1805)
	{
		case 0:
			if (!func_1813())
			{
				func_1295(1);
			}
			break;
		case 1:
			__LIB_10__::func_979(iLocal_63[0], __LIB_1__::func_464(21, 0), 500f, 0, 500f, 324);
			func_1295(2);
			break;
		case 2:
			if (func_1813())
			{
				__LIB_8__::func_771(iLocal_63[0], 0, 1, 0);
				if (__LIB_0__::func_139(iLocal_1806))
				{
					__LIB_1__::func_281(&iLocal_1806, 1, 1);
				}
				func_1295(0);
			}
			else if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), iLocal_63[0]))
			{
				if (!__LIB_0__::func_139(iLocal_1806))
				{
					iLocal_1806 = __LIB_1__::func_877("INTERACT_CALLOUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_574(&iLocal_1806, iLocal_63[0]);
				}
				if (__LIB_0__::func_139(iLocal_1806) && __LIB_1__::func_514(iLocal_1806, 1))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						__LIB_1__::func_221(iLocal_1806, 0, 1);
						if (!func_449(8))
						{
							func_450(8, 1);
						}
						else if (!func_449(9))
						{
							func_450(9, 1);
						}
						else
						{
							func_450(10, 1);
						}
						func_1295(3);
					}
				}
			}
			else if (__LIB_0__::func_139(iLocal_1806))
			{
				__LIB_1__::func_281(&iLocal_1806, 1, 1);
			}
			break;
		case 3:
			if (func_449(10))
			{
				if (__LIB_8__::func_711(cParam0, "REV1_SHT_RSP0", 0))
				{
					__LIB_1__::func_148(&uLocal_1772);
					func_1295(4);
				}
			}
			else if (func_449(9))
			{
				if (__LIB_8__::func_711(cParam0, "REV1_ATTENTION", 0))
				{
					__LIB_1__::func_148(&uLocal_1772);
					func_1295(4);
				}
			}
			else if (__LIB_8__::func_711(cParam0, "REV1_ATTENTION", 0))
			{
				__LIB_1__::func_148(&uLocal_1772);
				func_1295(4);
			}
			break;
		case 4:
			if (__LIB_1__::func_871(&uLocal_1772) > 3000)
			{
				if (!func_449(10))
				{
					__LIB_1__::func_221(iLocal_1806, 1, 1);
					func_1295(2);
				}
				else
				{
					__LIB_1__::func_281(&iLocal_1806, 1, 1);
					__LIB_8__::func_771(iLocal_63[0], 0, 1, 0);
					func_1295(9);
				}
			}
			break;
		case 9:
			break;
	}
}

void func_1282(char[4] cParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	iVar0 = iLocal_1807;
	vVar1 = { -320.5143f, -361.6772f, 87.0078f };
	fVar4 = __LIB_0__::func_94(Global_35, vVar1, 1);
	bVar6 = fVar4 <= 5f;
	bVar7 = (WEAPON::_0xCB690F680A3EA971(Global_35, 7) && __LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_LASSO"));
	bVar8 = (bVar6 && bVar7);
	bVar9 = (!func_163(14, 1) || !func_163(15, 1));
	bVar10 = (!bVar9 && (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[14], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[15], Global_35, 1, 1)));
	bVar11 = (bVar6 && PED::IS_PED_SHOOTING(Global_35));
	bVar12 = MISC::IS_BULLET_IN_AREA(vVar1, 7f, true);
	bVar13 = (!bVar9 && ((PED::_0x29FCE825613FEFCA(iLocal_63[14], 1000) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_63[14], 32768, 0)) || PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_63[14])));
	bVar14 = (!bVar9 && ((PED::_0x29FCE825613FEFCA(iLocal_63[15], 1000) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_63[15], 32768, 0)) || PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_63[15])));
	bVar15 = (!bVar9 && (PED::_0x3BDFCF25B58B0415(iLocal_63[14]) || PED::_0x3BDFCF25B58B0415(iLocal_63[15])));
	bVar16 = (!bVar9 && (PED::_IS_PED_LASSOED(iLocal_63[14]) || PED::_IS_PED_LASSOED(iLocal_63[15])));
	bVar17 = (bVar13 || bVar14);
	bVar18 = FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, 8f) > 0;
	bVar19 = (!bVar9 && (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_63[14]) || __LIB_0__::func_665(Global_35, iLocal_63[14], 1, 1) < 0.7f));
	bVar20 = (!bVar9 && (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_63[15]) || __LIB_0__::func_665(Global_35, iLocal_63[15], 1, 1) < 0.7f));
	bVar21 = (bVar19 || bVar20);
	bVar22 = (((((((bVar10 || bVar9) || bVar11) || bVar12) || bVar18) || bVar16) || bVar15) || bVar17);
	if ((iLocal_1807 == 2 || iLocal_1807 == 4) || iLocal_1807 == 6)
	{
		if (!func_1821(8) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[22], true, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_63[14], -1, 0, 51, 0);
			func_1822(8, 1);
		}
		else if (func_1821(8) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[22], true, 0))
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			func_1822(8, 0);
		}
	}
	else if (func_1821(8))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
		func_1822(8, 0);
	}
	if (!func_1821(256) && bVar21)
	{
		__LIB_1__::func_148(&uLocal_1781);
		func_1822(256, 1);
	}
	else if (func_1821(256) && !bVar21)
	{
		func_1822(256, 0);
	}
	else if (func_1821(256) && __LIB_0__::func_264(&uLocal_1781) >= 3f)
	{
		func_1823(7);
	}
	if (!func_1821(512))
	{
		if (iLocal_1807 >= 1 && iLocal_1807 <= 5)
		{
			if (__LIB_0__::func_94(Global_35, -320.7364f, -362.2213f, 87.00286f, 0) < 7f)
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iLocal_63[14], "REV1_Station", -320.51f, -362.72f, 87.18f, 0, 0);
				func_1822(512, 1);
			}
		}
	}
	else if ((iLocal_1807 < 1 || iLocal_1807 > 5) || __LIB_0__::func_94(Global_35, -320.7364f, -362.2213f, 87.00286f, 0) >= 7f)
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
		func_1822(512, 0);
	}
	if (!func_449(34))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[22], false, 0))
		{
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
			func_450(34, 1);
		}
	}
	else
	{
		__LIB_4__::func_614();
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[22], false, 0))
		{
			func_450(34, 0);
		}
	}
	if (__LIB_1__::func_502(&(Local_204[0 /*17*/])) && func_1288())
	{
		__LIB_2__::func_624(&Local_204, 1, 1, 1, 0);
		__LIB_2__::func_344(&(iLocal_63[14]));
		__LIB_2__::func_344(&(iLocal_63[15]));
		PED::SET_PED_CONFIG_FLAG(iLocal_63[14], 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_63[15], 297, true);
		func_450(2, 1);
	}
	switch (iLocal_1807)
	{
		case 0:
			if (((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_141[0], true, false) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(0))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(1))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(2))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(3))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(10)))
			{
				if (func_163(14, 1) && func_163(15, 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[0], "Male_Left", iLocal_63[14], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[0], "Male_Right", iLocal_63[15], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[0], "ARTHUR", Global_35, 0);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(0), true);
					ANIMSCENE::START_ANIM_SCENE(iLocal_141[0]);
					AUDIO::STOP_PED_SPEAKING(iLocal_63[14], true);
					AUDIO::STOP_PED_SPEAKING(iLocal_63[15], true);
					func_1823(1);
				}
			}
			break;
		case 1:
			func_1827(cParam0);
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			else if (func_1821(4))
			{
				if (func_1821(2))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(4));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(6));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(7));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(8));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(9));
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(11));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(13));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(14));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(15));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_141[0], func_410(16));
				}
				func_1823(2);
			}
			break;
	}
	switch (iLocal_1807)
	{
		case 2:
			if (!func_1821(16) && !bVar6)
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iLocal_141[0], false);
				__LIB_1__::func_148(&uLocal_1778);
				func_1822(16, 1);
			}
			else if (func_1821(16) && bVar6)
			{
				if (ANIMSCENE::_0x34A0671BE613D3D0(iLocal_141[0]))
				{
					ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(iLocal_141[0]);
				}
				func_1822(16, 0);
			}
			if (!func_1821(32))
			{
				if (func_1821(2) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_141[0]) > 12f)
				{
					func_1822(32, 1);
				}
				else if (!func_1821(2) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_141[0]) > 18f)
				{
					func_1822(32, 1);
				}
			}
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			else if (func_1821(16) && __LIB_0__::func_264(&uLocal_1778) >= 10f)
			{
				func_1823(3);
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_141[0], "s_Idle_Short", 1))
			{
				if ((((((func_1821(2) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(4))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(5))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(6))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(7))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(8))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(9)))
				{
					func_1823(3);
				}
				else if (((((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(11)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(12))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(13))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(14))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(15))) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[0], func_410(16)))
				{
					func_1823(3);
				}
			}
			break;
		case 3:
			if (!func_1821(1) && !bVar6)
			{
				func_1822(1, 1);
			}
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[15], false, 0))
			{
				__LIB_1__::func_148(&uLocal_1775);
			}
			else if (__LIB_0__::func_264(&uLocal_1775) >= 8f)
			{
				func_1823(4);
			}
			else if (func_1821(1))
			{
				func_1823(4);
			}
			break;
		case 4:
			if (!func_1821(32))
			{
				if (func_1821(2) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_141[0]) > 3f)
				{
					func_1822(32, 1);
				}
			}
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_141[0], "s_Idle_Short", 1))
			{
				func_1823(5);
			}
			break;
		case 5:
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			break;
		case 6:
			if (bVar22 || bVar17)
			{
				func_1823(10);
			}
			else if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[0]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[0], false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_141[0]))
			{
				func_1823(10);
			}
			break;
	}
	switch (iLocal_1807)
	{
		case 7:
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[0]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[0], false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_141[0]))
			{
				func_1823(10);
			}
			break;
		case 8:
			if ((func_1821(64) && !PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_63[14], 32768, 0)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_63[14]))
			{
				func_1823(9);
			}
			else if ((func_1821(128) && !PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_63[15], 32768, 0)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_63[15]))
			{
				func_1823(9);
			}
			break;
		case 9:
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[0]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[0], false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_141[0]))
			{
				func_1823(10);
			}
			break;
		case 10:
			break;
	}
	if (iVar0 != iLocal_1807)
	{
		switch (iLocal_1807)
		{
			case 2:
				if (func_1821(2))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(3), true);
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(10), true);
				}
				if (func_1821(2))
				{
					PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "HandsOnBelt", true, -1);
				}
				break;
			case 3:
				__LIB_1__::func_148(&uLocal_1775);
				if (func_1821(16))
				{
					if (ANIMSCENE::_0x34A0671BE613D3D0(iLocal_141[0]))
					{
						ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(iLocal_141[0]);
					}
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(1), true);
					func_1822(16, 0);
				}
				PED::_0xA6F67BEC53379A32(Global_35, "HandsOnBelt");
				break;
			case 4:
				if (func_1821(2))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(4), true);
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(11), true);
				}
				break;
			case 6:
				if (!func_1821(4))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(2), true);
				}
				else if (func_1821(2))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(5), true);
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(12), true);
				}
				PED::_0xA6F67BEC53379A32(Global_35, "HandsOnBelt");
				break;
			case 7:
				if (bVar19)
				{
					if (func_1821(2))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(6), true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(13), true);
					}
				}
				else if (bVar20)
				{
					if (func_1821(2))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(7), true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(14), true);
					}
				}
				break;
			case 8:
				if (bVar13)
				{
					func_1822(64, 1);
				}
				if (bVar14)
				{
					func_1822(128, 1);
				}
				ANIMSCENE::ABORT_ANIM_SCENE(iLocal_141[0], false);
				if (func_163(14, 1))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_63[14], false);
				}
				if (func_163(15, 1))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_63[15], false);
				}
				PED::_0xA6F67BEC53379A32(Global_35, "HandsOnBelt");
				break;
			case 9:
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[0], "Male_Left", iLocal_63[14], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[0], "Male_Right", iLocal_63[15], 0);
				if (ANIMSCENE::_0x34A0671BE613D3D0(iLocal_141[0]))
				{
					ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(iLocal_141[0]);
				}
				if (func_163(14, 1))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_63[14], false);
				}
				if (func_163(15, 1))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_63[15], false);
				}
				if (func_1821(64))
				{
					if (func_1821(2))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(8), true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(15), true);
					}
				}
				else if (func_1821(128))
				{
					if (func_1821(2))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(9), true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[0], func_410(16), true);
					}
				}
				PED::_0xA6F67BEC53379A32(Global_35, "HandsOnBelt");
				break;
			case 10:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[0], false))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_141[0]);
				}
				if (!bVar22)
				{
					iVar5 = 8;
				}
				else
				{
					iVar5 = 3;
				}
				if (func_163(14, 1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_63[14], Global_35, iVar5, 0, -1082130432 /* Float: -1f */, -1, 0);
					AUDIO::STOP_PED_SPEAKING(iLocal_63[14], false);
				}
				if (func_163(15, 1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_63[15], Global_35, iVar5, 0, -1082130432 /* Float: -1f */, -1, 0);
					AUDIO::STOP_PED_SPEAKING(iLocal_63[15], false);
				}
				PED::_0xA6F67BEC53379A32(Global_35, "HandsOnBelt");
				break;
		}
	}
}

void func_1283(char[4] cParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4[7];
	struct<4> Var12[7];
	int iVar41;
	Var12[0 /*4*/] = { -357.6254f, -364.1647f, 85.8734f };
	Var12[0 /*4*/].f_3 = 182.9426f;
	Var12[1 /*4*/] = { -346.3955f, -468.3741f, 69.8046f };
	Var12[1 /*4*/].f_3 = 311.8708f;
	Var12[2 /*4*/] = { -348.3425f, -424.2546f, 79.5777f };
	Var12[2 /*4*/].f_3 = 206.9321f;
	Var12[3 /*4*/] = { -427.4989f, -469.1165f, 67.3114f };
	Var12[3 /*4*/].f_3 = 5.9496f;
	Var12[4 /*4*/] = { -414.9263f, -534.5461f, 54.384f };
	Var12[4 /*4*/].f_3 = 69.6854f;
	Var12[5 /*4*/] = { -413.8107f, -511.5074f, 57.152f };
	Var12[5 /*4*/].f_3 = 90.3988f;
	Var12[6 /*4*/] = { -440.7322f, -512.5738f, 56.2281f };
	Var12[6 /*4*/].f_3 = 92.6355f;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_1811[iVar0]))
		{
		}
		iVar0++;
	}
	switch (iLocal_1810)
	{
		case 0:
			if (bParam1)
			{
				iVar41 = func_1828();
				if (iVar41 != 0)
				{
					func_1829(1);
				}
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iLocal_1811[iVar0] = GRAPHICS::CREATE_TRACKED_POINT();
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_1811[iVar0]))
				{
					GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1811[iVar0], Var12[iVar0 /*4*/], 4f);
				}
				iVar0++;
			}
			func_1829(2);
			break;
		case 2:
			if (func_380(cParam0, 24, -1) && func_380(cParam0, 25, -1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_63[24], false);
				PED::_SET_PED_ON_MOUNT(iLocal_63[24], iLocal_63[25], -1, true);
				PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_63[24]);
				LAW::_0x819ADD5EF1742F47(iLocal_63[24], 15);
				func_1829(3);
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				fVar4[iVar0] = -1f;
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_1811[iVar0]))
				{
					iVar1 = GRAPHICS::_0xDFE332A5DA6FE7C9(iLocal_1811[iVar0]);
					if (iVar1 >= 0 && iVar1 < 10)
					{
						fVar4[iVar0] = __LIB_0__::func_94(Global_35, Var12[iVar0 /*4*/], 1);
					}
				}
				iVar0++;
			}
			iVar2 = -1;
			fVar3 = -1f;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (fVar4[iVar0] != -1f)
				{
					if (iVar2 == -1 || fVar4[iVar0] < fVar3)
					{
						iVar2 = iVar0;
						fVar3 = fVar4[iVar0];
					}
				}
				iVar0++;
			}
			if (iVar2 != -1)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_63[25], Var12[iVar2 /*4*/], Var12[iVar2 /*4*/].f_3, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_63[25], false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_63[24], Global_36, 2f, -1, 0.25f, 0, 40000f);
				func_179();
				__LIB_1__::func_148(&uLocal_1784);
				func_1829(4);
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_1784) > 3f)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, true);
				__LIB_0__::func_267(1);
				__LIB_8__::func_685(cParam0, __LIB_6__::func_864(cParam0), 64);
				PED::_0x1854217C640B39EC(iLocal_63[24], Global_35, 0f, 0f, 0f, 7f, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[24], 126, true);
				TASK::TASK_COMBAT_PED(iLocal_63[24], Global_35, 0, 0);
				iLocal_1832 = MAP::_BLIP_ADD_FOR_ENTITY(662885764, iLocal_63[24]);
				MAP::_BLIP_SET_MODIFIER(iLocal_1832, -1766932418);
				__LIB_1__::func_148(&uLocal_1784);
				func_1829(5);
			}
			break;
		case 5:
			if (PED::IS_TRACKED_PED_VISIBLE(iLocal_63[24]) && __LIB_0__::func_665(iLocal_63[24], Global_35, 1, 1) < 20f)
			{
				__LIB_1__::func_148(&uLocal_1784);
				func_1829(6);
			}
			else if (!__LIB_0__::func_272(iLocal_63[24], 0))
			{
				__LIB_1__::func_148(&uLocal_1784);
				func_1829(6);
			}
			else if (__LIB_0__::func_265(&uLocal_1784) > 10f)
			{
				__LIB_1__::func_148(&uLocal_1784);
				func_1829(6);
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&uLocal_1784) > 3f)
			{
				PED::_0x3088634CF8C819CF(iLocal_63[24]);
				func_1829(7);
			}
			break;
		case 7:
			break;
	}
}

void func_1284()
{
	float fVar0;
	switch (iLocal_1872)
	{
		case 0:
			PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_63[0]);
			func_1830(1);
			break;
		case 1:
			if (func_1291() || !func_163(0, 1))
			{
				func_1830(3);
			}
			else
			{
				fVar0 = __LIB_0__::func_94(Global_35, func_1328(1, 1), 1);
				if (fVar0 < 20f || (fVar0 < 30f && PED::IS_TRACKED_PED_VISIBLE(iLocal_63[0])))
				{
					__LIB_1__::func_148(&uLocal_1866);
					func_1830(2);
				}
			}
			break;
		case 2:
			if (func_1291() || !func_163(0, 1))
			{
				func_1830(3);
			}
			else if (__LIB_0__::func_265(&uLocal_1866) > 40f)
			{
				__LIB_1__::func_864(iLocal_63[0], 0, 0);
				func_1830(3);
			}
			break;
		case 3:
			if (PED::_0x5102307CE88798EB(iLocal_63[0]))
			{
				PED::_0x3088634CF8C819CF(iLocal_63[0]);
			}
			func_1830(4);
			break;
		case 4:
			break;
	}
}

void func_1285()
{
	if (!func_163(0, 1))
	{
		return;
	}
	if (__LIB_0__::func_665(Global_35, iLocal_63[18], 0, 1) < 8f || PED::_IS_PED_LASSOED(iLocal_63[18]))
	{
		__LIB_1__::func_864(iLocal_63[0], 0, 0);
	}
}

void func_1286()
{
	if (!__LIB_0__::func_272(iLocal_63[18], 0))
	{
		return;
	}
	switch (iLocal_1834)
	{
		case 0:
			if (!__LIB_0__::func_163(iLocal_63[18], 2121492476))
			{
				TASK::TASK_REACT(iLocal_63[18], Global_35, 0f, 0f, 0f, "default_scared", -1f, -1f, 4);
			}
			func_1831(1);
			break;
		case 1:
			if (__LIB_0__::func_665(iLocal_63[18], Global_35, 0, 1) < 12f)
			{
				func_1832(18, 0);
			}
			if (func_1833(18, 4f) || func_1305())
			{
				TASK::TASK_REACT(iLocal_63[18], Global_35, 0f, 0f, 0f, "default_scared", -1f, -1f, 4);
				func_1831(2);
			}
			break;
		case 2:
			break;
	}
}

void func_1287()
{
	int iVar0;
	int iVar1;
	if (!func_449(42))
	{
		func_450(42, func_1834());
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (4 + iVar0);
		if (ENTITY::IS_ENTITY_DEAD(iLocal_63[iVar1]))
		{
		}
		else
		{
			switch (iLocal_1787[iVar0])
			{
				case 0:
					TASK::CLEAR_PED_TASKS(iLocal_63[iVar1], true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[iVar1], true);
					TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_63[iVar1], joaat("WORLD_ANIMAL_SHEEP_EATING_GROUND"), 0, false, 0, -1f, false);
					func_1835(iVar1, 1);
					break;
				case 1:
					if (func_449(42))
					{
						PED::_0xEEED8FAFEC331A70(iLocal_63[iVar1], Global_36, 1);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_63[iVar1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
						func_1835(iVar1, 3);
					}
					else if (func_1836(iVar1))
					{
						PED::_0xEEED8FAFEC331A70(iLocal_63[iVar1], Global_36, 1);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_63[iVar1], Global_35, 0, 0, -1082130432 /* Float: -1f */, -1, 0);
						func_1835(iVar1, 2);
					}
					break;
				case 2:
					if (func_449(42))
					{
						PED::_0xEEED8FAFEC331A70(iLocal_63[iVar1], Global_36, 1);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_63[iVar1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
						func_1835(iVar1, 3);
					}
					else if (func_1836(iVar1) || __LIB_0__::func_665(Global_35, iLocal_63[iVar1], 1, 1) < 8f)
					{
						__LIB_1__::func_148(&(vLocal_1741[iVar0 /*3*/]));
					}
					else if (__LIB_3__::func_135(&(vLocal_1741[iVar0 /*3*/])) > 5000)
					{
						func_1835(iVar1, 0);
					}
					break;
				case 3:
					break;
			}
		}
		iVar0++;
	}
}

bool func_1288()
{
	return ((((iLocal_1807 == 6 || iLocal_1807 == 7) || iLocal_1807 == 8) || iLocal_1807 == 9) || iLocal_1807 == 10);
}

bool func_1289()
{
	return func_1821(32);
}

bool func_1291()
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, func_1328(1, 1), 1);
	if (fVar0 < 12f)
	{
		return true;
	}
	if (fVar0 < 17.5f && func_1840(Global_35, func_1328(1, 1), 1056964608 /* Float: 0.5f */))
	{
		return true;
	}
	return false;
}

bool func_1292()
{
	return iLocal_1862 == 6;
}

void func_1293(char[4] cParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[0]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_141[0]);
	}
	if (iLocal_1807 != 10)
	{
		if (func_163(14, 1))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_63[14], 36.3042f, 0);
		}
		if (func_163(15, 1))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_63[15], 36.3042f, 0);
		}
		iLocal_1807 = 10;
	}
	func_443(cParam0, 14, 0);
	func_443(cParam0, 15, 0);
}

void func_1295(int iParam0)
{
	if (iLocal_1805 != iParam0)
	{
		iLocal_1805 = iParam0;
	}
}

void func_1297(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 12f;
	uParam0->f_2 = 1f;
	uParam0->f_3 = 1;
	uParam0->f_4 = { 0f, 0f, 0f };
}

void func_1298(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	bool bVar17;
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = __LIB_14__::func_233(*uParam0, &iVar0);
	if (iVar1 == -1)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = __LIB_14__::func_234(iVar2, iVar0);
		if (!__LIB_0__::func_272(iVar3, 0))
		{
		}
		else if (ENTITY::DOES_ENTITY_EXIST(PED::_0xE4770DA1B8FF4FD1(iVar3)))
		{
		}
		else if (!uParam0->f_3 && __LIB_0__::func_163(iVar3, 242628503))
		{
		}
		else
		{
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) };
			if (!__LIB_0__::func_86(uParam0->f_4))
			{
				vVar4 = { vVar7 + uParam0->f_4 * Vector(uParam0->f_1, uParam0->f_1, uParam0->f_1) };
			}
			else
			{
				vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 1f, 0f, 0f) - Global_36 };
				vVar13 = { vVar7 - Global_36 };
				vVar10.f_2 = 0f;
				vVar13.f_2 = 0f;
				vVar10 = { vVar10 / FtoV(BUILTIN::VMAG(vVar10)) };
				vVar13 = { vVar13 / FtoV(BUILTIN::VMAG(vVar13)) };
				fVar16 = __LIB_2__::func_977(vVar10, vVar13);
				fVar16 = (fVar16 / MISC::ABSF(fVar16));
				vVar4 = { vVar7 + Vector(fVar16, fVar16, fVar16) * vVar10 * Vector(uParam0->f_1, uParam0->f_1, uParam0->f_1) };
			}
			bVar17 = PED::_0x268B3AEBF032A88D(iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1809);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1809);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar4, uParam0->f_2, -1, 0.25f, 0, 40000f);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, bVar17);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1809);
			TASK::TASK_PERFORM_SEQUENCE(iVar3, iLocal_1809);
		}
		iVar2++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_1299(char[4] cParam0)
{
	bool bVar0;
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (func_163(17, 1))
			{
				__LIB_9__::func_142(cParam0, "REV1_PROT_REV", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (!MAP::DOES_BLIP_EXIST(iLocal_146))
				{
					iLocal_146 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_63[17]);
				}
				__LIB_0__::func_37(&uLocal_1738);
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1845() && __LIB_8__::func_711(cParam0, "REV1_FIG_CONF", 0))
			{
				__LIB_9__::func_60(cParam0, 2);
			}
			else if (func_1845())
			{
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 2:
			if (!__LIB_5__::func_463() && !func_1845())
			{
				if (__LIB_8__::func_711(cParam0, "REV1_FIG_ART", 0))
				{
					__LIB_9__::func_208(cParam0, "REV1_PROT_REV", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_9__::func_60(cParam0, 3);
				}
			}
			else if (func_1845())
			{
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 3:
			if (!__LIB_8__::func_684("REV1_FIG_ART"))
			{
				func_450(31, 1);
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_75(&uLocal_1738))
			{
				__LIB_1__::func_148(&uLocal_1738);
				fLocal_1878 = (6f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f));
			}
			else if (__LIB_0__::func_265(&uLocal_1738) > fLocal_1878)
			{
				if (__LIB_0__::func_272(iLocal_63[17], 0) && __LIB_0__::func_272(iLocal_63[0], 0))
				{
					bVar0 = true;
					if (__LIB_0__::func_665(Global_35, iLocal_63[0], 1, 1) < 8f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_63[0]))
					{
						bVar0 = __LIB_2__::func_918();
					}
					if (bVar0 && __LIB_8__::func_711(cParam0, "REV1_FIG_TAUNT", 0))
					{
						__LIB_0__::func_37(&uLocal_1738);
					}
					else if (!bVar0 && __LIB_8__::func_711(cParam0, "REV1_FIG_WATCH", 0))
					{
						__LIB_0__::func_37(&uLocal_1738);
					}
				}
			}
			break;
	}
}

void func_1300()
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { -373.8923f, -448.0133f, 78.952f };
	fVar3 = 6f;
	switch (iLocal_1873)
	{
		case 0:
			if (!__LIB_0__::func_272(iLocal_63[17], 0))
			{
				func_1847(6);
			}
			else
			{
				PED::SET_PED_USING_ACTION_MODE(iLocal_63[17], true, -1, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_63[17], Global_35, -1, 0, 51, 0);
				func_1832(17, 1);
				func_1847(1);
			}
			break;
		case 1:
			func_1832(17, 0);
			if (!__LIB_0__::func_272(iLocal_63[17], 0))
			{
				func_1847(6);
			}
			else if (PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_63[17]))
			{
				func_1847(2);
			}
			else if ((func_449(31) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_63[17])) || PED::_0x29FCE825613FEFCA(iLocal_63[17], 1000))
			{
				func_1847(3);
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(iLocal_63[17], 0))
			{
				func_1847(6);
			}
			else if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_63[17]) && !TASK::IS_PED_GETTING_UP(iLocal_63[17]))
			{
				func_1847(3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(iLocal_63[17], 0))
			{
				func_1847(6);
			}
			else
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(iLocal_63[17], Global_35, 0, 0, 0, 1, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_63[17], vVar0, fVar3, 0, 0, 0);
				PED::_0x57F35552E771BE9D(iLocal_63[17], 12);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[17], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[17], 96, false);
				func_1306(1);
				func_1847(4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_272(iLocal_63[17], 0))
			{
				func_1847(6);
				return;
			}
			if (__LIB_0__::func_94(Global_35, vVar0, 1) > fVar3 && __LIB_0__::func_665(iLocal_63[17], Global_35, 1, 1) > 3f)
			{
				if (!__LIB_0__::func_75(&uLocal_1874))
				{
					__LIB_1__::func_148(&uLocal_1874);
				}
				else if (__LIB_0__::func_265(&uLocal_1874) > 5f || iLocal_1834 == 2)
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_63[17], false);
					PED::_0x7C10221CE718AA72(iLocal_63[17], 12);
					TASK::TASK_COMBAT_PED(iLocal_63[17], iLocal_63[0], 16777216, 0);
					__LIB_2__::func_279(iLocal_63[0], 1);
					func_1847(5);
				}
			}
			else
			{
				__LIB_0__::func_37(&uLocal_1874);
				if (PED::_GET_PED_BRAWLING_STYLE(iLocal_63[17]) == joaat("BS_BRUISER"))
				{
					if (func_1849(iLocal_63[17]) <= 0.3f)
					{
						PED::_0x9D8DFE2DE9CB4DFC(iLocal_63[17]);
					}
				}
			}
			break;
		case 5:
			if (!__LIB_0__::func_272(iLocal_63[17], 0))
			{
				func_1847(6);
			}
			break;
		case 6:
			break;
	}
}

void func_1301()
{
	switch (iLocal_1877)
	{
		case 0:
			__LIB_8__::func_774(iLocal_63[0], sLocal_58, 0);
			func_1851(1);
			break;
		case 1:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_63[0], sLocal_58) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_63[0]) >= 12)
			{
				TASK::CLEAR_PED_TASKS(iLocal_63[0], true, false);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_63[0], Global_35, -1, 0, 51, 0);
				func_1851(2);
			}
			break;
		case 2:
			func_1832(0, 0);
			if (iLocal_1873 == 5 && __LIB_0__::func_665(iLocal_63[0], iLocal_63[17], 1, 1) < 6f)
			{
				PED::_0x58F7DB5BD8FA2288(iLocal_63[0]);
				PED::_0x06D26A96CA1BCA75(iLocal_63[0], 10, 1f, 0);
				TASK::TASK_REACT(iLocal_63[0], iLocal_63[17], 0f, 0f, 0f, "default_scared", -1f, 0f, 4);
				func_1851(3);
			}
			break;
		case 3:
			break;
	}
}

bool func_1304()
{
	return iLocal_1873 >= 4;
}

bool func_1305()
{
	return iLocal_1810 >= 1;
}

void func_1306(int iParam0)
{
	struct<5> Var0;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		func_1297(&Var0);
		Var0 = iLocal_108[29];
		Var0.f_1 = 50f;
		Var0.f_2 = 1.75f;
		Var0.f_3 = iParam0;
		Var0.f_4 = { -0.387985f, 0.921666f, 0f };
		func_1298(&Var0);
	}
	__LIB_1__::func_538(0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
}

bool func_1307()
{
	return iLocal_1873 == 6;
}

void func_1308(char[4] cParam0)
{
	int iVar0;
	func_1852(cParam0);
	switch (iLocal_1883)
	{
		case 0:
			if (__LIB_0__::func_272(iLocal_63[18], 0) && MAP::_DOES_ENTITY_HAVE_BLIP(iLocal_63[18]))
			{
				iVar0 = MAP::GET_BLIP_FROM_ENTITY(iLocal_63[18]);
				if (MAP::DOES_BLIP_EXIST(iVar0))
				{
					if (func_1853(&uLocal_1735, 2000, 1))
					{
						__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, "REV1_HELWIT0", iVar0), 7500, 0, 0, 0, 1);
						func_1854(1);
					}
				}
			}
			break;
		case 1:
			if (func_1314())
			{
				__LIB_0__::func_105(1);
				func_1854(5);
			}
			else if (!__LIB_2__::func_453())
			{
				__LIB_0__::func_45("REV1_HELWIT1", 7500, 0, 0, 0, 1);
				func_1854(2);
			}
			break;
		case 2:
			if (func_1314())
			{
				__LIB_0__::func_105(1);
				func_1854(5);
			}
			else if (!__LIB_2__::func_453())
			{
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) || func_1856(32))
				{
					func_1854(3);
				}
				else
				{
					__LIB_0__::func_45("REV1_HELWIT2", 7500, 0, 0, 0, 1);
					func_1854(3);
				}
			}
			break;
		case 3:
			if (func_1314())
			{
				__LIB_0__::func_105(1);
				func_1854(5);
			}
			else if (iLocal_1798 >= 6)
			{
				__LIB_0__::func_45("REV1_HELWIT3", 7500, 0, 0, 0, 1);
				func_1854(4);
			}
			break;
		case 4:
			if (func_1314())
			{
				__LIB_0__::func_105(1);
				func_1854(5);
			}
			else if (iLocal_1798 == 7)
			{
				__LIB_0__::func_45("REV1_HELWIT4", 7500, 0, 0, 0, 1);
				func_1854(5);
			}
			break;
		case 5:
			break;
	}
	if (__LIB_0__::func_272(iLocal_63[18], 0))
	{
		if (__LIB_9__::func_910(cParam0, iLocal_63[18], "REV1_CHAS_RWIT", "REV1_WIT_FAIL", 50f, 75f, 0, 0, 0, joaat("BLIP_STYLE_COMPANION"), 0))
		{
			func_450(39, 1);
		}
		else
		{
			func_450(39, 0);
		}
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "REV1_CHAS_WIT", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (func_1314())
			{
				__LIB_9__::func_60(cParam0, 6);
			}
			else if (iLocal_1895 >= 4)
			{
				__LIB_9__::func_208(cParam0, "REV1_CHAS_WIT", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (func_1314())
			{
				__LIB_9__::func_60(cParam0, 6);
			}
			else if (iLocal_1798 >= 4 && __LIB_0__::func_665(Global_35, iLocal_63[18], 1, 1) < 12f)
			{
				func_450(38, 1);
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if (func_1314())
			{
				__LIB_9__::func_60(cParam0, 6);
			}
			else
			{
				__LIB_3__::func_787(0);
				__LIB_9__::func_208(cParam0, "REV1_WIT_INTE", 0, -1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (func_1314())
			{
				func_450(38, 0);
				__LIB_9__::func_60(cParam0, 6);
			}
			else if (iLocal_1798 >= 6)
			{
				func_450(38, 0);
				__LIB_9__::func_208(cParam0, "REV1_WIT_INTI", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 6);
			}
			else if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), iLocal_63[18]))
			{
				__LIB_3__::func_787(1);
				__LIB_9__::func_208(cParam0, "REV1_WIT_STOP", 0, -1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			if (func_1314())
			{
				func_450(38, 0);
				__LIB_9__::func_60(cParam0, 6);
			}
			else if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), iLocal_63[18]))
			{
				__LIB_9__::func_60(cParam0, 3);
			}
			else if (iLocal_1798 >= 6)
			{
				func_450(38, 0);
				__LIB_9__::func_208(cParam0, "REV1_WIT_INTI", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 6);
			}
			break;
		case 6:
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_9__::func_60(cParam0, 51);
			break;
		case 51:
			break;
	}
	func_1859(cParam0);
	if (!func_449(35))
	{
		if (((!__LIB_5__::func_463() && iLocal_1895 >= 4) && __LIB_0__::func_665(Global_35, iLocal_63[0], 0, 0) < 8f) && __LIB_8__::func_711(cParam0, "REV1_WIT_RUN", 0))
		{
			func_450(35, 1);
		}
	}
}

void func_1309()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<14> Var6;
	iVar0 = iLocal_63[18];
	bVar1 = __LIB_0__::func_272(iVar0, 0);
	bVar2 = (bVar1 && (PED::_0x3BDFCF25B58B0415(iVar0) || PED::_IS_PED_LASSOED(iVar0)));
	if ((bVar1 && iLocal_1798 >= 2) && iLocal_1798 <= 4)
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar0, sLocal_56))
		{
			fVar3 = __LIB_0__::func_665(Global_35, iVar0, 1, 1);
			if (fVar3 < 2.5f)
			{
				fVar4 = 1f;
			}
			else
			{
				fVar4 = (1f - __LIB_9__::func_231(((fVar3 - 2.5f) / 20f), 0f, 1f));
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(iVar0) <= 8)
			{
				fVar5 = 3f;
			}
			else
			{
				fVar5 = __LIB_0__::func_667(1.5f, 3f, fVar4);
			}
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar0, fVar5, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	if (bVar1 && iLocal_1798 < 7)
	{
		PED::SET_PED_RESET_FLAG(iVar0, 177, true);
	}
	switch (iLocal_1798)
	{
		case 0:
			if (!bVar1)
			{
				func_1861(9);
			}
			else if (func_449(3))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_PLAYER_DISLIKE"));
				PED::SET_PED_CONFIG_FLAG(iVar0, 213, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 146, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 315, false);
				PED::_REQUEST_PED_EMOTIONAL_PRESET(iVar0, "TaskIntimidated_OnFoot");
				PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_FEET_REACTION"), iVar0);
				Var6 = Global_35;
				Var6.f_1 = 0;
				Var6.f_3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
				Var6.f_8 = 1;
				Var6.f_9 = 0;
				Var6.f_10 = 0;
				Var6.f_11 = 1;
				Var6.f_12 = 1;
				Var6.f_13 = 1;
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63[17]))
				{
					Var6.f_2 = joaat("CRIME_ASSAULT");
				}
				else if (PED::GET_PED_CAUSE_OF_DEATH(iLocal_63[17]) == joaat("WEAPON_UNARMED"))
				{
					Var6.f_2 = joaat("CRIME_ASSAULT");
				}
				else
				{
					Var6.f_2 = joaat("CRIME_MURDER");
				}
				LAW::_0x018F30D762E62DF8(iVar0, &Var6);
				TASK::_TASK_INTIMIDATED_2(iVar0, Global_35, 4, 1, 1, 1, 1, 1, 8388672);
				LAW::_0xFFEBE5AA96BC2E4E(iVar0, joaat("CRIME_ROBBERY"), 1);
				LAW::_0xFFEBE5AA96BC2E4E(iVar0, joaat("CRIME_UNARMED_ASSAULT"), 1);
				__LIB_1__::func_148(&uLocal_1732);
				func_1861(1);
			}
			break;
		case 1:
			if (!bVar1)
			{
				func_1861(9);
			}
			else if (bVar2)
			{
				func_1861(5);
			}
			else if (__LIB_3__::func_135(&uLocal_1732) > 1000)
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_56))
				{
					PED::_0xAAB050DA48B57978(iVar0, "Flee_Human_MajorThreat", Global_35, -1, 4);
					__LIB_8__::func_774(iVar0, sLocal_56, 0);
					SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_MISSION_CHASE"));
					func_1861(2);
				}
			}
			break;
		case 2:
			if (!bVar1)
			{
				func_1861(9);
			}
			else if (bVar2)
			{
				func_1861(5);
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(iVar0) >= 40)
			{
				func_1861(3);
			}
			break;
		case 3:
			if (!bVar1)
			{
				func_1861(8);
			}
			else if (bVar2)
			{
				func_1861(5);
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(iVar0) >= 92)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 460, true);
				PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 21, 2, 0);
				func_1861(4);
			}
			break;
		case 4:
			if (!bVar1)
			{
				func_1861(8);
			}
			else if (bVar2 || PED::_0x57779B55B83E2BEA(iVar0))
			{
				func_1861(5);
			}
			break;
		case 5:
			if (!bVar1)
			{
				func_1861(8);
			}
			else
			{
				if (!PED::GET_PED_CONFIG_FLAG(iVar0, 460, true))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 460, true);
				}
				if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_MISSION_CHASE")))
				{
					SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_MISSION_CHASE"));
				}
				PED::_0x06D26A96CA1BCA75(iVar0, 1, 1f, Global_35);
				PED::_0x935CF6E42BAF7F4D(iVar0);
				func_1861(6);
			}
			break;
		case 6:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
			if (!bVar1)
			{
				func_1861(8);
			}
			else if (PED::_0x32417CB860A3BDC4(iVar0, 40))
			{
				func_1861(7);
			}
			break;
		case 7:
			if (!bVar1)
			{
				func_1861(8);
			}
			else if (PED::_0x32417CB860A3BDC4(iVar0, 38) || PED::_0x32417CB860A3BDC4(iVar0, 8))
			{
				if (__LIB_0__::func_665(Global_35, iVar0, 0, 0) > 10f)
				{
					func_1861(8);
				}
			}
			break;
		case 8:
			break;
		case 9:
			break;
	}
}

void func_1310(char[4] cParam0)
{
	switch (iLocal_1879)
	{
		case 0:
			if (((func_380(cParam0, 19, -1) && func_380(cParam0, 20, -1)) && func_380(cParam0, 21, -1)) && func_380(cParam0, 22, -1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[19], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[20], true);
				TASK::CLEAR_PED_TASKS(iLocal_63[19], true, false);
				TASK::CLEAR_PED_TASKS(iLocal_63[20], true, false);
				PED::_SET_PED_ON_MOUNT(iLocal_63[19], iLocal_63[21], -1, true);
				PED::_SET_PED_ON_MOUNT(iLocal_63[20], iLocal_63[22], -1, true);
				TASK::TASK_STAND_STILL(iLocal_63[21], -1);
				TASK::TASK_STAND_STILL(iLocal_63[22], -1);
				if (!PED::_0x5102307CE88798EB(iLocal_63[19]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_63[19]);
				}
				if (!PED::_0x5102307CE88798EB(iLocal_63[20]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_63[20]);
				}
				func_1862(1);
			}
			break;
		case 1:
			if (!func_449(24))
			{
				if (((func_163(19, 1) && PED::_0x5102307CE88798EB(iLocal_63[19])) && PED::IS_TRACKED_PED_VISIBLE(iLocal_63[19])) || ((func_163(20, 1) && PED::_0x5102307CE88798EB(iLocal_63[20])) && PED::IS_TRACKED_PED_VISIBLE(iLocal_63[20])))
				{
					func_450(24, 1);
				}
			}
			if (!func_163(19, 1) || !func_163(20, 1))
			{
				func_1862(5);
			}
			else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[19], false, false), 15f, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[20], false, false), 15f, true))
			{
				func_1862(3);
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[9], false, 0) || func_449(24))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(iLocal_63[19], 1f, -493.3787f, -504.2891f, 56.0329f, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC_4(iLocal_63[20], 1f, -493.3787f, -504.2891f, 56.0329f, 0);
				func_1862(2);
			}
			break;
		case 2:
			if (!func_449(24))
			{
				if (((func_163(19, 1) && PED::_0x5102307CE88798EB(iLocal_63[19])) && PED::IS_TRACKED_PED_VISIBLE(iLocal_63[19])) || ((func_163(20, 1) && PED::_0x5102307CE88798EB(iLocal_63[20])) && PED::IS_TRACKED_PED_VISIBLE(iLocal_63[20])))
				{
					func_450(24, 1);
				}
			}
			if (!func_163(19, 1) || !func_163(20, 1))
			{
				func_1862(5);
			}
			else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[19], false, false), 15f, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[20], false, false), 15f, true))
			{
				func_1862(3);
			}
			else if (func_449(24))
			{
				if ((__LIB_0__::func_665(iLocal_63[19], iLocal_63[18], 0, 0) < 50f || __LIB_0__::func_665(iLocal_63[20], iLocal_63[18], 0, 0) < 50f) || func_1314())
				{
					func_1862(3);
				}
			}
			else if (__LIB_0__::func_665(iLocal_63[19], iLocal_63[18], 0, 0) < 25f || __LIB_0__::func_665(iLocal_63[20], iLocal_63[18], 0, 0) < 25f)
			{
				func_1862(3);
			}
			break;
		case 3:
			if (func_163(19, 1))
			{
				TASK::TASK_ARREST_PED(iLocal_63[19], Global_35);
			}
			if (func_163(20, 1))
			{
				TASK::TASK_ARREST_PED(iLocal_63[20], Global_35);
			}
			__LIB_1__::func_148(&uLocal_1880);
			func_1862(4);
			break;
		case 4:
			if (!func_163(19, 1) || !func_163(20, 1))
			{
				func_1862(5);
			}
			else if ((__LIB_0__::func_665(iLocal_63[19], iLocal_63[18], 0, 0) < 10f || __LIB_0__::func_665(iLocal_63[20], iLocal_63[18], 0, 0) < 10f) || __LIB_0__::func_265(&uLocal_1880) > 7f)
			{
				func_1862(5);
			}
			break;
		case 5:
			break;
	}
	if (func_449(24))
	{
		if (PED::_0x5102307CE88798EB(iLocal_63[19]))
		{
			PED::_0x3088634CF8C819CF(iLocal_63[19]);
		}
		if (PED::_0x5102307CE88798EB(iLocal_63[20]))
		{
			PED::_0x3088634CF8C819CF(iLocal_63[20]);
		}
	}
}

bool func_1311()
{
	int iVar0;
	struct<9> Var1;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	switch (iLocal_1884)
	{
		case 0:
			if (PED::IS_PED_JUMPING(Global_35) || PED::IS_PED_FALLING(Global_35))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[26], false, 0) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_1885);
				func_1863(1);
			}
			else
			{
				func_1863(2);
			}
			break;
		case 2:
			__LIB_1__::func_148(&uLocal_1885);
			func_1863(3);
			break;
		case 3:
			if (__LIB_3__::func_135(&uLocal_1885) > 1000)
			{
				__LIB_1__::func_148(&uLocal_1885);
				func_1863(4);
			}
			break;
		case 4:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_0xC9CAEAEEC1256E54(-1679307491);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (CAM::_0xA2B1C7EF759A63CE() == 1f)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -371.2928f, -437.4298f, 82.0559f, -9.9338f, 0f, 134.9962f, 38.4355f, false, 2);
				iLocal_1888 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -372.243f, -438.3799f, 81.8206f, -9.9338f, 0f, 134.9962f, 38.4355f, false, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1888, iVar0, 5000, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				__LIB_1__::func_148(&uLocal_1885);
				func_1863(5);
			}
			break;
		case 5:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			}
			HUD::_0xC9CAEAEEC1256E54(-1679307491);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_1888))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(iLocal_1888, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_1863(6);
			}
			break;
		case 1:
			Var1.f_5 = 1065353216;
			Var1.f_6 = 1119092736;
			Var1.f_7 = 1092616192;
			Var1.f_8 = 1085276160;
			__LIB_2__::func_619(&(Var1.f_3), 1);
			__LIB_1__::func_397(&(Var1.f_3), 1);
			__LIB_1__::func_404(&(Var1.f_3), 0);
			__LIB_10__::func_241(&(Var1.f_3), 1);
			__LIB_13__::func_651(iLocal_63[18], &Var1, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 50f, 2000, 2000, 1000, 1075838976 /* Float: 2.5f */, 1, 1, 1084227584 /* Float: 5f */);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (__LIB_3__::func_135(&uLocal_1885) > 6000)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				func_1863(6);
			}
			break;
		case 6:
			break;
	}
	return iLocal_1884 == 6;
}

bool func_1312()
{
	if (iLocal_1884 == 1)
	{
		return __LIB_3__::func_135(&uLocal_1885) > 1000;
	}
	else if (iLocal_1884 == 5)
	{
		return true;
	}
	return false;
}

void func_1313()
{
	func_450(3, 1);
}

bool func_1314()
{
	return iLocal_1798 >= 8;
}

bool func_1315()
{
	return iLocal_1879 >= 3;
}

void func_1316(char[4] cParam0)
{
	if (!func_449(24))
	{
		if (PED::_0x5102307CE88798EB(iLocal_63[19]))
		{
			PED::_0x3088634CF8C819CF(iLocal_63[19]);
		}
		if (PED::_0x5102307CE88798EB(iLocal_63[20]))
		{
			PED::_0x3088634CF8C819CF(iLocal_63[20]);
		}
		func_443(cParam0, 19, 1);
		func_443(cParam0, 20, 1);
		func_443(cParam0, 21, 1);
		func_443(cParam0, 22, 1);
	}
}

void func_1317(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if ((func_449(18) && __LIB_8__::func_711(cParam0, "REV1_WARNING", 0)) || func_449(6))
			{
				func_450(7, 1);
				__LIB_0__::func_37(&uLocal_1738);
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 1:
			if (func_1869())
			{
				if (!__LIB_0__::func_75(&uLocal_1738))
				{
					__LIB_1__::func_148(&uLocal_1738);
				}
				else if (__LIB_0__::func_265(&uLocal_1738) > 1.5f)
				{
					__LIB_9__::func_208(cParam0, "REV1_REV_RET", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					if (func_449(14))
					{
						iLocal_145 = __LIB_4__::func_983(408396114, -493.1064f, -442.2497f, 79.0944f, 1);
					}
					else
					{
						func_1333(cParam0);
					}
					__LIB_9__::func_60(cParam0, 2);
				}
			}
			break;
		case 2:
			if (func_449(14))
			{
				if (Global_36.f_2 > 81.8f || __LIB_0__::func_94(Global_35, -432.0836f, -425.2382f, 84.305f, 1) < 15f)
				{
					func_1333(cParam0);
					func_450(14, 0);
				}
			}
			if (func_1870())
			{
				iLocal_1805 = 5;
			}
			if (__LIB_6__::func_889(cParam0) >= 3)
			{
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if (__LIB_6__::func_889(cParam0) >= 4)
			{
				__LIB_0__::func_325(&iLocal_145);
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
	func_1871(cParam0);
}

void func_1318(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!func_163(16, 1) && iLocal_1906 > 0)
	{
		func_1872(15);
		return;
	}
	iVar0 = 0;
	if (iLocal_1906 > 0)
	{
		iVar0 = func_1873();
	}
	switch (iLocal_1906)
	{
		case 0:
			if (func_380(cParam0, 16, -1))
			{
				__LIB_4__::func_228(&(Local_239[16 /*55*/].f_2));
				TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_63[16], joaat("WORLD_HUMAN_SMOKE"), 0, false, 0, -1f, false);
				func_1872(1);
			}
			break;
		case 1:
			if (iVar0 == 1)
			{
				func_1874();
				func_1872(9);
			}
			else if (iVar0 == 2)
			{
				func_1874();
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1874();
				func_1872(11);
			}
			else if (iVar0 == 4)
			{
				func_1874();
				func_1872(13);
			}
			else
			{
				iVar1 = func_1875();
				if (iVar1 == 0)
				{
					func_1872(2);
				}
				else if (iVar1 == 1)
				{
					func_1872(4);
				}
			}
			break;
		case 2:
			if (__LIB_8__::func_711(cParam0, "REV1_STRE_INQ", 0))
			{
				func_1872(3);
			}
			break;
		case 3:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (iVar0 == 2)
			{
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1872(11);
			}
			else if (iVar0 == 4)
			{
				func_1872(13);
			}
			else if (!__LIB_8__::func_684("REV1_STRE_INQ"))
			{
				func_1872(6);
			}
			break;
		case 4:
			if (__LIB_8__::func_711(cParam0, "REV1_STRE_DEM", 0))
			{
				func_1872(5);
			}
			break;
		case 5:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (iVar0 == 2)
			{
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1872(11);
			}
			else if (iVar0 == 4)
			{
				func_1872(13);
			}
			else if (!__LIB_8__::func_684("REV1_STRE_DEM"))
			{
				func_1872(6);
			}
			break;
		case 6:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (iVar0 == 2)
			{
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1872(11);
			}
			else if (iVar0 == 4)
			{
				func_1872(13);
			}
			break;
		case 7:
			if (__LIB_8__::func_711(cParam0, "REV1_STRE_AWAY", 0))
			{
				PED::_0xEC6935EBE0847B90(iLocal_63[16], Global_36);
				TASK::CLEAR_PED_TASKS(iLocal_63[16], true, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_63[16], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
				func_1872(8);
			}
			break;
		case 8:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			break;
		case 9:
			if (__LIB_8__::func_711(cParam0, "REV1_STRE_AGGRO", 0))
			{
				PED::_0xEEED8FAFEC331A70(iLocal_63[16], Global_36, 1);
				TASK::CLEAR_PED_TASKS(iLocal_63[16], true, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_63[16], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				func_1872(10);
			}
			break;
		case 10:
			break;
		case 11:
			if (__LIB_8__::func_711(cParam0, "REV1_STRE_WEAP", 0))
			{
				TASK::TASK_HANDS_UP(iLocal_63[16], -1, Global_35, -1, false);
				__LIB_1__::func_148(&uLocal_1964);
				func_1872(12);
			}
			break;
		case 12:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (__LIB_0__::func_265(&uLocal_1964) > 8f)
			{
				func_1872(7);
			}
			break;
		case 13:
			if (__LIB_8__::func_711(cParam0, "REV1_STRE_HANG", 0))
			{
				__LIB_1__::func_148(&uLocal_1964);
				func_1872(14);
			}
			break;
		case 14:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (iVar0 == 2 || __LIB_0__::func_265(&uLocal_1964) > 15f)
			{
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1872(11);
			}
			break;
		case 15:
			break;
	}
}

void func_1319()
{
	switch (iLocal_1900)
	{
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_63[0], -562.29f, -464.8f, 80.45f, 119.57f, true, false, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1809);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1809);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -600.8992f, -484.4899f, 78.2016f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, -614.8445f, -489.0833f, 77.9549f, 1f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1809);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_63[0], iLocal_1809);
			func_1876(1);
			break;
		case 1:
			if (func_1877())
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_63[0], -565.3014f, -463.9455f, 79.3942f, 115.9044f, true, false, true);
				TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_63[0], -614.8445f, -489.0833f, 77.9549f, 1f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 1);
				func_1876(2);
			}
			else if (func_1869())
			{
				func_1876(3);
			}
			break;
		case 2:
			if (func_1869())
			{
				func_1876(3);
			}
			break;
		case 3:
			if (Global_36.f_2 > 79f)
			{
				if (func_1878())
				{
					func_1876(4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1320()
{
	switch (iLocal_1970)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[27], false, 0))
			{
				func_1879(1);
			}
			break;
		case 1:
			if (func_1880(iLocal_21))
			{
				func_1881(25f);
				func_1879(2);
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_91[0], iLocal_63[0]))
			{
				__LIB_1__::func_864(iLocal_63[0], 0, 0);
				func_1879(3);
			}
			break;
		case 3:
			break;
	}
}

void func_1321()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[28], false, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 204, true);
	}
}

void func_1322(char[4] cParam0)
{
	if (!func_449(13))
	{
		if (__LIB_2__::func_901(iLocal_63[18], Global_35))
		{
			__LIB_9__::func_212(0, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
			func_450(13, 1);
		}
	}
	if (!func_449(36))
	{
		if ((func_163(18, 1) && (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[18], false, false), 8f, true) || PED::_0x3BDFCF25B58B0415(iLocal_63[18]))) && __LIB_8__::func_711(cParam0, "REV1_WIT_AGGRO", 0))
		{
			func_450(36, 1);
		}
	}
}

bool func_1323(char[4] cParam0)
{
	int iVar0;
	struct<9> Var1;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	switch (iLocal_1901)
	{
		case 0:
			if (PED::IS_PED_JUMPING(Global_35) || PED::IS_PED_FALLING(Global_35))
			{
				return false;
			}
			if (func_1882())
			{
				func_1883(1);
			}
			else
			{
				__LIB_1__::func_148(&uLocal_1902);
				func_1883(6);
			}
			break;
		case 1:
			__LIB_1__::func_148(&uLocal_1902);
			func_450(6, 1);
			STREAMING::_0x513F8AA5BF2F17CF(-638.449f, -501.0207f, 76.9538f, 60f, 0);
			func_1883(2);
			break;
		case 2:
			if (__LIB_3__::func_135(&uLocal_1902) > 1500)
			{
				UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
				__LIB_1__::func_148(&uLocal_1902);
				func_1883(3);
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_0xC9CAEAEEC1256E54(-1679307491);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (__LIB_3__::func_135(&uLocal_1902) > 1000 && __LIB_8__::func_711(cParam0, "REV1_WH_PR", 0))
			{
				__LIB_1__::func_148(&uLocal_1902);
				func_1883(4);
			}
			break;
		case 4:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_0xC9CAEAEEC1256E54(-1679307491);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (__LIB_3__::func_135(&uLocal_1902) > 3700)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -570.9139f, -479.8705f, 84.2773f, -12.8625f, 0f, 91.7876f, 37.7847f, false, 2);
				iLocal_1905 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -562.7198f, -471.6862f, 82.0656f, -10.1959f, 0f, 92.2589f, 37.7847f, false, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1905, iVar0, 9000, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_1884(cParam0);
				func_1883(5);
			}
			break;
		case 5:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			}
			HUD::_0xC9CAEAEEC1256E54(-1679307491);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_1905))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(iLocal_1905, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				STREAMING::_0x5A8B01199C3E79C3();
				func_1885();
				func_1883(7);
			}
			break;
		case 6:
			Var1.f_5 = 1065353216;
			Var1.f_6 = 1119092736;
			Var1.f_7 = 1092616192;
			Var1.f_8 = 1085276160;
			__LIB_2__::func_619(&(Var1.f_3), 1);
			__LIB_1__::func_397(&(Var1.f_3), 1);
			__LIB_1__::func_404(&(Var1.f_3), 0);
			__LIB_10__::func_241(&(Var1.f_3), 1);
			__LIB_13__::func_651(iLocal_63[0], &Var1, 0f, 0f, 0f, 0, 10f, 1000f, -1, 5000, 1000, 1075838976 /* Float: 2.5f */, 1, 1, 1084227584 /* Float: 5f */);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (!func_449(7) && func_1882())
			{
				func_1883(1);
			}
			else if (__LIB_3__::func_135(&uLocal_1902) > 9000)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				func_1885();
				func_1883(7);
			}
			break;
		case 7:
			break;
	}
	if (iLocal_1901 == 6)
	{
		if (!func_449(18) && __LIB_3__::func_135(&uLocal_1902) > 3500)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
			func_450(18, 1);
		}
	}
	return iLocal_1901 == 7;
}

bool func_1324()
{
	return __LIB_0__::func_94(Global_35, -567.4676f, -459.6113f, 79.3875f, 1) < 35f;
}

bool func_1325()
{
	return (iLocal_1805 <= 2 || iLocal_1805 == 9);
}

bool func_1326()
{
	int iVar0;
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		if (PED::IS_PED_STOPPED(Global_35))
		{
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 0);
				return true;
			}
			if (!__LIB_0__::func_163(Global_35, -208384378))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 0.5f, 0f), 1f, 0);
			}
		}
	}
	else
	{
		PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 0);
		return true;
	}
	return false;
}

bool func_1327()
{
	return iLocal_1970 == 0;
}

Vector3 func_1328(int iParam0, int iParam1)
{
	return func_1586(iParam0, iParam1);
}

void func_1332()
{
	if (!bLocal_147)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_63[0]))
		{
			__LIB_5__::func_509(iLocal_63[0], 0, 1);
			bLocal_147 = true;
		}
	}
}

void func_1333(char[4] cParam0)
{
	__LIB_0__::func_325(&iLocal_145);
	if (!MAP::DOES_BLIP_EXIST(iLocal_145))
	{
		__LIB_9__::func_253(cParam0, iLocal_63[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		__LIB_9__::func_141(cParam0, iLocal_63[0], 128);
	}
}

void func_1335(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "REV1_REV_RET", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (!__LIB_8__::func_684("REV1_REVSHOUT5") && __LIB_8__::func_711(cParam0, "REV1_STRUGGLE2", 0))
			{
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (iLocal_2009 >= 2 && __LIB_8__::func_684("REV1_STRUGGLE2"))
			{
				__LIB_6__::func_900("REV1_STRUGGLE2", 1, 0);
			}
			else if ((iLocal_2009 >= 2 && __LIB_8__::func_803(&uLocal_1738, 1f)) && __LIB_8__::func_711(cParam0, "REV1_FOOT", 0))
			{
				__LIB_9__::func_208(cParam0, "REV1_RESCUE_REV", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_37(&uLocal_1738);
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if ((!__LIB_8__::func_684("REV1_FOOT") && iLocal_2009 >= 3) && __LIB_8__::func_711(cParam0, "REV1_STRUGGLE1", 0))
			{
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (iLocal_2009 >= 4)
			{
				__LIB_9__::func_60(cParam0, 5);
			}
			else if (!__LIB_8__::func_684("REV1_STRUGGLE1") && __LIB_8__::func_711(cParam0, "REV1_STRUGGLE3", 0))
			{
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			if (iLocal_2009 >= 4)
			{
				if (__LIB_8__::func_684("REV1_STRUGGLE3"))
				{
					__LIB_6__::func_900("REV1_STRUGGLE3", 0, 0);
				}
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1336()
{
	switch (iLocal_1973)
	{
		case 0:
			if (iLocal_2009 >= 2)
			{
				func_1892(1);
			}
			break;
		case 1:
			if (iLocal_2009 >= 3)
			{
				func_1892(2);
			}
			break;
		case 2:
			if (iLocal_1974 == 4)
			{
				func_1892(3);
			}
			break;
		case 3:
			if (iLocal_1972 >= 6)
			{
				func_1892(4);
			}
			break;
		case 4:
			if (iLocal_2009 == 7)
			{
				func_1892(5);
			}
			break;
		case 5:
			break;
	}
}

void func_1337()
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = 0f;
	fVar1 = func_1893();
	fVar2 = 0f;
	switch (iLocal_1972)
	{
		case 0:
			if (func_1880(iLocal_22))
			{
				VEHICLE::_0x1BFBAFCC6760FF02(iLocal_91[0], 0);
				func_1881(10f);
				func_1894(1);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_91[0], iLocal_108[17], false, 0))
			{
				func_1881(3f);
				func_1894(2);
			}
			break;
		case 2:
			if (iLocal_1973 >= 1)
			{
				if (func_449(17))
				{
					fVar2 = 6f;
				}
				else
				{
					fVar2 = 9f;
				}
				fVar0 = __LIB_0__::func_649(((fVar1 - 173f) / fVar2), 3f);
				func_1881(fVar0);
				func_1894(3);
			}
			break;
		case 3:
			if (iLocal_1973 >= 2)
			{
				fVar0 = __LIB_0__::func_649((fVar1 / 10f), 3f);
				func_1881(fVar0);
				func_1894(4);
			}
			break;
		case 4:
			if (iLocal_1973 >= 3)
			{
				fVar0 = __LIB_0__::func_649((fVar1 / 4f), 6f);
				func_1881(fVar0);
				func_1894(5);
			}
			break;
		case 5:
			if (func_1896())
			{
				func_1894(6);
			}
			break;
		case 6:
			func_1881(__LIB_0__::func_667(ENTITY::GET_ENTITY_SPEED(iLocal_91[0]), 30f, MISC::GET_FRAME_TIME()));
			if (func_1893() > 80f)
			{
				func_1894(7);
			}
			break;
		case 7:
			break;
	}
	AUDIO::_0xFD461D0ABA5559B1(iLocal_91[0], 10f);
	switch (iLocal_2010)
	{
		case 0:
			if (fVar1 < 330f)
			{
				VEHICLE::_0xCFE122EC635CC2B2(iLocal_91[0], "DANGER", 0, 0);
				func_1897(1);
			}
			break;
		case 1:
			if (fVar1 < 230f)
			{
				VEHICLE::_0xCFE122EC635CC2B2(iLocal_91[0], "DANGER", 0, 0);
				func_1897(2);
			}
			break;
		case 2:
			if (fVar1 < 30f)
			{
				VEHICLE::_0xCFE122EC635CC2B2(iLocal_91[0], "DANGER", 0, 0);
				func_1897(3);
			}
			break;
		case 3:
			if (AUDIO::_0xE368E8422C860BA7("woosh_1", "rev1_sounds", -2) && func_1896())
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("woosh_1", func_1898(), "rev1_sounds", false, 0, true, 0);
				func_1897(4);
			}
			break;
		case 4:
			if (AUDIO::_0xE368E8422C860BA7("woosh_2", "rev1_sounds", -2) && func_1899())
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("woosh_2", func_1900(), "rev1_sounds", false, 0, true, 0);
				func_1897(5);
			}
			break;
		case 5:
			break;
	}
}

void func_1338()
{
	int iVar0;
	float fVar1;
	switch (iLocal_2009)
	{
		case 0:
			if (func_1878())
			{
				func_1901(1);
			}
			break;
		case 1:
			iVar0 = func_1902();
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_141[1], "s_Rev_loop_01", 1))
			{
				if (iVar0 != 0)
				{
					if (iVar0 == 1)
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_141[1], "ARTHUR", "Pbl_Player_Approaches_Reverend_WALK", 1.48f, 1, 3, 20000, -1082130432 /* Float: -1f */);
						func_450(17, 1);
					}
					else
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_141[1], "ARTHUR", "Pbl_Player_Approaches_Reverend_RUN", 5.05f, 1, 3, 20000, -1082130432 /* Float: -1f */);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
					func_1901(2);
				}
			}
			break;
		case 2:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_141[1], "s_Player_Struggles_To_Free_Rev", 1))
			{
				func_1901(3);
			}
			break;
		case 3:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (iLocal_1973 >= 3)
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[1], false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[1], "Pbl_Player_Frees_Reverends_Foot"))
				{
					if (__LIB_0__::func_163(Global_35, 76834332))
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
					}
					if (__LIB_0__::func_163(iLocal_63[0], 76834332))
					{
						TASK::CLEAR_PED_TASKS(iLocal_63[0], true, false);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[1], "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[1], "Reverend", iLocal_63[0], 0);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[1], "Pbl_Player_Frees_Reverends_Foot", true);
					if (func_1264())
					{
						TASK::CLEAR_PED_TASKS(iLocal_63[3], true, false);
						func_1254(iLocal_63[3], func_499(3, 5), 2, 1073741824 /* Float: 2f */);
						TASK::TASK_STAND_STILL(iLocal_63[3], -1);
						func_1265(iLocal_63[3], 4, 0, 0, 0, 0);
					}
					func_1901(4);
				}
			}
			break;
		case 4:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[1]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[1], false)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1805904120))
			{
				func_1903(Global_35, 0);
				func_1903(iLocal_63[0], 0);
				func_1901(5);
			}
			break;
		case 5:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[1]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[1], false)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -837979582))
			{
				MISC::SET_BIT(&(Global_1956580.f_1), 5);
				func_1901(6);
			}
			break;
		case 6:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[1]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[1], false)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -480656617))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_141[1]);
				func_1901(7);
			}
			break;
		case 7:
			break;
	}
	fVar1 = __LIB_0__::func_665(Global_35, iLocal_63[0], 0, 0);
	if (!func_449(37))
	{
		if (fVar1 < 25f)
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
			func_450(37, 1);
		}
	}
	if (func_449(37))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PASSENGER_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PASSENGER_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_CAR_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_CAR_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		if (fVar1 > 27f)
		{
			func_450(37, 0);
		}
	}
}

void func_1339()
{
	vector3 vVar0;
	vector3 vVar3;
	switch (iLocal_1974)
	{
		case 0:
			if ((STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED("script_REV1_TrackRescue") && STREAMING::_0x85B8F04555AB49B8("CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@ARTHUR")) && STREAMING::_0x85B8F04555AB49B8("CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@REVEREND"))
			{
				func_1904(1);
			}
			break;
		case 1:
			if (iLocal_1973 == 2)
			{
				ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iLocal_141[1], &vVar0, &vVar3, 2);
				PED::SET_PED_CAN_LEG_IK(Global_35, false);
				PED::SET_PED_CAN_LEG_IK(iLocal_63[0], false);
				PED::SET_PED_LEG_IK_MODE(Global_35, 0);
				PED::SET_PED_LEG_IK_MODE(iLocal_63[0], 0);
				Local_1975 = joaat("CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@REVEREND");
				Local_1975.f_1 = joaat("DEFAULT");
				Local_1975.f_30 = "Pulling";
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iLocal_63[0], "script_REV1_TrackRescue", &Local_1975, vVar0, vVar3, 2, 0, 0, 0, 1152, 0);
				Local_1975 = joaat("CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@ARTHUR");
				Local_1975.f_1 = joaat("DEFAULT");
				Local_1975.f_30 = "Pulling";
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, "script_REV1_TrackRescue", &Local_1975, vVar0, vVar3, 2, 0, 0, 0, 1152, 0);
				func_1904(2);
			}
			break;
		case 2:
			if (__LIB_0__::func_163(Global_35, 76834332) && __LIB_0__::func_163(iLocal_63[0], 76834332))
			{
				if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Pulling") && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iLocal_63[0]), "Pulling"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[1], "pbl_Minigame", true);
					func_1904(3);
				}
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Energy", fLocal_1800);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_63[0], "Energy", fLocal_1800);
			}
			break;
		case 3:
			if (__LIB_0__::func_163(Global_35, 76834332) && __LIB_0__::func_163(iLocal_63[0], 76834332))
			{
				if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Pulling") && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iLocal_63[0]), "Pulling"))
				{
					if (!func_1905())
					{
						func_450(20, 1);
					}
					if (func_1906())
					{
						PED::SET_PED_CAN_LEG_IK(Global_35, true);
						PED::SET_PED_CAN_LEG_IK(iLocal_63[0], true);
						func_1904(4);
					}
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Energy", fLocal_1800);
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_63[0], "Energy", fLocal_1800);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1340()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	if (!func_449(16) && iLocal_1972 == 6)
	{
		if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
		{
			CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.1f);
		}
		func_450(16, 1);
	}
	else if (func_449(16) && iLocal_1972 == 7)
	{
		if (CAM::IS_GAMEPLAY_CAM_SHAKING())
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
		}
		func_450(16, 0);
	}
	if (func_449(16))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_63[0], true, false) };
		vVar3 = { func_1898() };
		fVar6 = BUILTIN::VDIST(vVar0, vVar3);
		fVar7 = (1f - __LIB_0__::func_251((fVar6 / 80f), 0f, 1f));
		iVar8 = BUILTIN::ROUND(__LIB_0__::func_667(0f, 5f, fVar7));
		PAD::SET_PAD_SHAKE(0, 100, iVar8);
	}
}

void func_1341()
{
	__LIB_1__::func_538(1);
	if (!func_1264())
	{
		return;
	}
	if (iLocal_1973 < 1)
	{
		return;
	}
	func_1907(iLocal_63[3], func_1328(3, 5));
	func_1907(__LIB_0__::func_398(1), 0f, 0f, 0f);
}

void func_1342(var uParam0)
{
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_PLAYER_ALLY"));
}

bool func_1343()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[2]))
	{
		iLocal_141[2] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@rev1@ig@reverend_knocked_out@reverend_knocked_out", 0, 0, false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[2]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_141[2], true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_141[2], true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_141[2]);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_141[2], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[2], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_141[2], false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[2], "reverend", iLocal_63[0], 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_141[2]);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_141[2], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_141[2], false))
	{
		return false;
	}
	return true;
}

void func_1344()
{
	__LIB_1__::func_948(iLocal_148, 1, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(iLocal_149, 1, 0f, 0, 1, 0, 0, 0);
}

void func_1348(char[4] cParam0)
{
	if (__LIB_9__::func_962(cParam0, 21, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!func_449(12))
		{
			func_1357();
			func_450(12, 1);
		}
	}
	else if (func_449(12))
	{
		if (func_1353())
		{
			func_1911(func_449(4));
		}
		func_450(12, 0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			func_1333(cParam0);
			__LIB_9__::func_208(cParam0, "REV1_PICKUP", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (func_1353())
			{
				func_1358(cParam0);
				func_1911(0);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_9__::func_208(cParam0, "REV1_RETURN", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1353())
			{
				func_1357();
				__LIB_9__::func_60(cParam0, 0);
			}
			else if (func_449(4))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					func_1357();
					iLocal_145 = __LIB_8__::func_777(408396114, -108.7049f, -32.6123f, 95.7121f, 3f, 1);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_9__::func_208(cParam0, "REV1_HITCH", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_9__::func_60(cParam0, 3);
				}
				else if (ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 5)
				{
					func_1357();
					func_1911(1);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_9__::func_208(cParam0, "REV1_INBED", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_9__::func_60(cParam0, 5);
				}
			}
			break;
		case 3:
			if (ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 5)
			{
				func_1357();
				func_1911(1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_9__::func_208(cParam0, "REV1_INBED", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 5);
			}
			else if (__LIB_11__::func_556(7) || __LIB_0__::func_665(Global_35, iLocal_63[0], 1, 1) > 6f)
			{
				func_1357();
				__LIB_9__::func_253(cParam0, iLocal_63[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_9__::func_208(cParam0, "REV1_SWHO", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 5)
			{
				__LIB_9__::func_254(cParam0, iLocal_63[0], 1);
				func_1911(1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_9__::func_208(cParam0, "REV1_INBED", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			if (ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) != 5 && !__LIB_0__::func_266(iLocal_63[0], func_1328(3, 0), 3f, 1, 1))
			{
				func_1357();
				func_1333(cParam0);
				__LIB_9__::func_208(cParam0, "REV1_PICKUP", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
	}
	if (!func_449(4))
	{
		func_1914(cParam0);
	}
}

void func_1349()
{
	switch (iLocal_2023)
	{
		case 0:
			if (func_1915())
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[8], true, 0))
				{
					MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(sLocal_57, 0, -1, joaat("COLOR_OBJECTIVE"), true, true);
					MAP::SET_GPS_CUSTOM_ROUTE_RENDER(true, -1, -1);
					func_1916(1);
				}
				else
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_145))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_145, -1878373110);
					}
					func_1916(2);
				}
			}
			break;
		case 1:
			if (func_1915())
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[8], true, 0))
				{
					MAP::CLEAR_GPS_CUSTOM_ROUTE();
					MAP::SET_GPS_CUSTOM_ROUTE_RENDER(false, -1, -1);
					if (MAP::DOES_BLIP_EXIST(iLocal_145))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_145, -1878373110);
					}
					func_1916(2);
				}
			}
			else
			{
				MAP::CLEAR_GPS_CUSTOM_ROUTE();
				MAP::SET_GPS_CUSTOM_ROUTE_RENDER(false, -1, -1);
				func_1916(0);
			}
			break;
		case 2:
			if (func_1915())
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[8], true, 0))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_145))
					{
						MAP::_BLIP_REMOVE_MODIFIER(iLocal_145, -1878373110);
					}
					MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(sLocal_57, 0, -1, joaat("COLOR_OBJECTIVE"), true, true);
					MAP::SET_GPS_CUSTOM_ROUTE_RENDER(true, -1, -1);
					func_1916(1);
				}
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_145))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iLocal_145, -1878373110);
				}
				func_1916(0);
			}
			break;
	}
}

void func_1350(char[4] cParam0)
{
	switch (iLocal_2014)
	{
		case 0:
			if (func_380(cParam0, 23, -1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[23], true);
				TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_63[23], joaat("WORLD_HUMAN_POCKET_MIRROR"), 0, false, 0, -1f, false);
				func_1917(1);
			}
			break;
		case 1:
			if (func_449(15))
			{
				if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[12], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[13], true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[14], true, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_63[23], false);
					TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iLocal_63[23], Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_63[23], Global_35, -1, 0, 51, 0);
					__LIB_1__::func_148(&uLocal_2015);
					func_1917(2);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_94(Global_35, -144.8398f, -39.75378f, 94.52103f, 1) < 5f || __LIB_3__::func_135(&uLocal_2015) > 20000)
			{
				func_1917(3);
			}
			else if (__LIB_0__::func_665(iLocal_63[23], Global_35, 1, 1) < 3f)
			{
				if (__LIB_8__::func_711(cParam0, "REV1_CAMP_MOLLY", 0))
				{
					func_1917(3);
				}
			}
			break;
		case 3:
			if (!AUDIO::_0xD89504D9D7D5057D("REV1_CAMP_MOLLY") && !AUDIO::_0x1ECC76792F661CF5("REV1_CAMP_MOLLY"))
			{
				__LIB_1__::func_148(&uLocal_2015);
				func_1917(4);
			}
			break;
		case 4:
			if (__LIB_3__::func_135(&uLocal_2015) > 1000)
			{
				func_443(cParam0, 23, 1);
				func_1917(5);
			}
			break;
		case 5:
			break;
	}
}

void func_1351()
{
	switch (iLocal_2011)
	{
		case 0:
			if (func_1483(5))
			{
				iLocal_2011 = 1;
			}
			break;
		case 1:
			break;
	}
}

bool func_1352()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	vVar0 = { -144.0783f, -39.42823f, 94.55847f };
	if (__LIB_0__::func_94(Global_35, vVar0, 0) > 1.5f)
	{
		return false;
	}
	vVar3 = { -145.3299f, -39.54888f, 94.58329f };
	vVar6 = { vVar3 - vVar0 };
	vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 1f, 0f) - Global_36 };
	vVar6 = { vVar6 / FtoV(BUILTIN::VMAG(vVar6)) };
	vVar9 = { vVar9 / FtoV(BUILTIN::VMAG(vVar9)) };
	fVar12 = __LIB_2__::func_977(vVar9, vVar6);
	if (fVar12 < 0.6f)
	{
		return false;
	}
	return true;
}

bool func_1353()
{
	if ((((ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 5 || ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 7) || ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 8) || ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 6) || ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 9)
	{
		if (ENTITY::_IS_ENTITY_FROZEN(iLocal_63[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_63[0], false);
		}
		return true;
	}
	return false;
}

int func_1354()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_5__::func_831(8388608))
	{
		__LIB_1__::func_579(8388608);
	}
	if (func_1919())
	{
		return 1;
	}
	if (iLocal_2013 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			iVar1 = __LIB_14__::func_232(iVar0);
			iVar2 = func_950(iVar1);
			if (__LIB_0__::func_273(iVar2, 4, 1))
			{
				iLocal_2013 = (iLocal_2013 || iVar1);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 19)
	{
		iVar3 = __LIB_14__::func_232(iVar0);
		if (func_1920(iVar3))
		{
			func_1921(iVar3);
		}
		iVar0++;
	}
	if (func_1919())
	{
		return 1;
	}
	return 0;
}

bool func_1356()
{
	return ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) == 6;
}

void func_1357()
{
	__LIB_0__::func_325(&iLocal_145);
}

void func_1358(char[4] cParam0)
{
	__LIB_9__::func_254(cParam0, iLocal_63[0], 1);
}

void func_1359(char[4] cParam0, int iParam1, float fParam2)
{
	if ((iParam1 != -1 && fParam2 > 0f) && __LIB_6__::func_889(cParam0) != 29)
	{
		__LIB_6__::func_876(cParam0, -1);
		__LIB_1__::func_148(&(Local_151.f_1));
		Local_151.f_4 = fParam2;
		Local_151 = iParam1;
	}
	else if (!__LIB_0__::func_75(&(Local_151.f_1)))
	{
	}
}

void func_1361(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_60(cParam0, 51);
			break;
		case 51:
			break;
	}
}

int func_1363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return iLocal_35;
		case 2:
			return iLocal_36;
		case 3:
			return 0;
		case 4:
			return iLocal_37;
		case 5:
			return iLocal_37;
		case 6:
			return iLocal_37;
		case 7:
			return iLocal_37;
		case 8:
			return iLocal_37;
		case 9:
			return iLocal_37;
		case 10:
			return iLocal_37;
		case 11:
			return iLocal_37;
		case 12:
			return iLocal_37;
		case 13:
			return iLocal_37;
		case 14:
			return iLocal_50;
		case 15:
			return iLocal_50;
		case 17:
			return iLocal_50;
		case 18:
			return iLocal_50;
		case 16:
			return iLocal_50;
		case 19:
			return iLocal_51;
		case 20:
			return iLocal_51;
		case 21:
			return iLocal_52;
		case 22:
			return iLocal_52;
		case 23:
			return 0;
		case 24:
			return iLocal_51;
		case 25:
			return iLocal_52;
		default:
			break;
	}
	return 0;
}

float func_1364(int iParam0, int iParam1)
{
	return func_1587(iParam0, iParam1);
}

int func_1366(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_891(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1367(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_1935(cParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
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

void func_1372(int iParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iParam0]))
	{
		return;
	}
	PED::_0x52A24D8A1DA89658(iLocal_63[iParam0], 2, 0);
	iVar0 = 3;
	while (iVar0 <= 18)
	{
		PED::_0x52A24D8A1DA89658(iLocal_63[iParam0], iVar0, 1);
		iVar0++;
	}
}

int func_1373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return iLocal_38;
		case 1:
			return iLocal_41;
		case 2:
			return iLocal_40;
		case 3:
			return iLocal_39;
		case 4:
			return iLocal_42;
		case 5:
			return iLocal_43;
		case 6:
			return iLocal_44;
		default:
			break;
	}
	return 0;
}

int func_1375(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		default:
			break;
	}
	return -1;
}

void func_1379()
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
	iVar0 = func_1950(6291456, 0);
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

int func_1403(var uParam0, int iParam1, int iParam2)
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
		return func_1403(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1472(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
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
					__LIB_1__::func_747(uParam4, 4);
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
				__LIB_1__::func_747(uParam4, 3);
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
				__LIB_1__::func_148(&(uParam4->f_1));
				__LIB_1__::func_747(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_5__::func_350(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
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
						__LIB_1__::func_747(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_386(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_8__::func_632(cParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_4__::func_987(uParam4, 1))
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
				__LIB_6__::func_921(uParam4);
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
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
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
				__LIB_6__::func_921(uParam4);
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
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
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
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
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

bool func_1479(char[4] cParam0)
{
	if (((((((((func_2060(cParam0, 0) && func_2060(cParam0, 1)) && func_2060(cParam0, 2)) && func_2060(cParam0, 3)) && func_2060(cParam0, 4)) && func_2060(cParam0, 5)) && func_2060(cParam0, 6)) && func_2060(cParam0, 7)) && func_2060(cParam0, 8)) && func_2060(cParam0, 9))
	{
		func_1287();
		return true;
	}
	return false;
}

bool func_1480(char[4] cParam0)
{
	if (!__LIB_6__::func_862(cParam0, 32))
	{
		__LIB_6__::func_868(cParam0, 32);
	}
	if (!func_380(cParam0, 0, __LIB_6__::func_864(cParam0)))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_63[0], true))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_63[0], true, false);
	}
	func_1342(&(iLocal_63[0]));
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_63[0], 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[0], true);
	PED::_0x89F5E7ADECCCB49C(iLocal_63[0], "Very_Drunk");
	TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_63[0], true);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_63[0], false, 1f);
	ENTITY::_0x1AD922AB5038DEF3(iLocal_63[0]);
	__LIB_1__::func_290(21, 0, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_63[0], 72, true);
	TASK::_0xFF745B0346E19E2C(joaat("KNOCKEDOUT_CARRIABLE_HUMAN_NEVER_WAKE_UP"));
	TASK::_0x816A3ACD265E2297(joaat("KNOCKEDOUT_CARRIABLE_HUMAN_NEVER_WAKE_UP"), 1);
	return true;
}

bool func_1481(char[4] cParam0)
{
	struct<4> Var0;
	if (func_163(3, 1))
	{
		return true;
	}
	if (func_380(cParam0, 3, __LIB_6__::func_864(cParam0)))
	{
		Var0 = { func_382(3, __LIB_6__::func_864(cParam0)) };
		TASK::CLEAR_PED_TASKS(iLocal_63[3], true, false);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_63[3], Var0, Var0.f_3, true, false, true);
		TASK::TASK_STAND_STILL(iLocal_63[3], -1);
		if (ENTITY::_IS_ENTITY_FROZEN(iLocal_63[3]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_63[3], false);
		}
		return true;
	}
	return false;
}

bool func_1482(char[4] cParam0)
{
	__LIB_9__::func_42(cParam0, Global_35, "ARTHUR", 0);
	if (__LIB_6__::func_872(cParam0, 4))
	{
		func_1254(Global_35, func_216(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	}
	return true;
}

bool func_1483(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	if (func_1545(iParam0))
	{
		return true;
	}
	if (iParam0 <= -1 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = iLocal_62;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	bVar10 = false;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -339.929f, -356.376f, 88.408f };
			vVar4 = { 0f, 0f, 28f };
			vVar7 = { 33.5f, 8f, 5f };
			break;
		case 1:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -374.558f, -346.268f, 87.062f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 2f, 3f, 3f };
			break;
		case 2:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -381.14f, -352.612f, 87.311f };
			vVar4 = { 0f, 0f, 27f };
			vVar7 = { 15f, 20f, 3f };
			break;
		case 3:
			iVar0 = joaat("VOLCYLINDER");
			vVar1 = { -381.229f, -352.123f, 88.126f };
			vVar4 = { 0f, 0f, 56f };
			vVar7 = { 6.5f, 9.5f, 3f };
			break;
		case 4:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -322.31f, -357.775f, 88.408f };
			vVar4 = { 0f, 0f, 28f };
			vVar7 = { 4f, 11f, 5f };
			break;
		case 5:
			iVar0 = joaat("VOLCYLINDER");
			vVar1 = { -128.45f, -33.194f, 96.039f };
			vVar4 = { 0f, 0f, 57f };
			vVar7 = { 19f, 18f, 6f };
			break;
		case 6:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -451.7511f, -512.6439f, 57.25617f };
			vVar4 = { 0f, 0f, 11.38473f };
			vVar7 = { 187.0151f, 102.7882f, 91.90021f };
			break;
		case 7:
			iVar0 = joaat("VOLCYLINDER");
			vVar1 = { -119.5931f, -33.12778f, 96.039f };
			vVar4 = { 0f, 0f, 57f };
			vVar7 = { 46.76117f, 39.08008f, 6f };
			break;
		case 8:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -471.2429f, -408.499f, 88.60917f };
			vVar4 = { 0f, 0f, -74.9402f };
			vVar7 = { 77.59241f, 283.8267f, 21.12837f };
			break;
		case 9:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -529.6843f, -513.7991f, 55.06014f };
			vVar4 = { 0f, 0f, -44.59846f };
			vVar7 = { 127.0093f, 5.852345f, 42.39389f };
			break;
		case 10:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -505.3135f, -433.9754f, 81.1946f };
			vVar4 = { 0f, 0f, 26.02015f };
			vVar7 = { 193.8262f, 21.08619f, 19.7503f };
			break;
		case 11:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -545.3329f, -431.8244f, 56.69365f };
			vVar4 = { 0f, -0.984935f, 20.06892f };
			vVar7 = { 367.4153f, 394.7009f, 41.40752f };
			break;
		case 12:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -126.1637f, -46.11609f, 95.12919f };
			vVar4 = { 0f, 0f, -1.397287f };
			vVar7 = { 18.68625f, 15.57124f, 8.61804f };
			break;
		case 13:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -122.767f, -31.3733f, 95.14592f };
			vVar4 = { 0f, 0f, 21.45737f };
			vVar7 = { 19.42026f, 16.60847f, 8.358175f };
			break;
		case 14:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -133.0416f, -15.99957f, 94.22317f };
			vVar4 = { 0f, 0f, 20.2899f };
			vVar7 = { 22.5654f, 19.01775f, 10.25011f };
			break;
		case 15:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -320.2263f, -361.245f, 87.75749f };
			vVar4 = { 0f, 0f, 25.48097f };
			vVar7 = { 4.737138f, 6.052721f, 6.269291f };
			break;
		case 16:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -520.348f, -440.2256f, 82.52526f };
			vVar4 = { 0f, 0f, 26.9f };
			vVar7 = { 694.9839f, 8.908519f, 43.43642f };
			break;
		case 17:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -857.2325f, -613.6528f, 73.72871f };
			vVar4 = { 0f, 0f, -61.94396f };
			vVar7 = { 6.096117f, 7.966026f, 6.99848f };
			break;
		case 18:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -384.0941f, -437.038f, 76.31982f };
			vVar4 = { 0f, 0f, 42.99909f };
			vVar7 = { 75.46456f, 41.132f, 37.08671f };
			break;
		case 19:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -548.4916f, -420.783f, 89.04397f };
			vVar4 = { 0f, 0f, -62.04596f };
			vVar7 = { 84.9986f, 50.81785f, 20.03131f };
			break;
		case 20:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -326.6736f, -358.391f, 88.25056f };
			vVar4 = { 0f, 0f, -63.46869f };
			vVar7 = { 7.073741f, 3.987257f, 2.447897f };
			break;
		case 21:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -145.2227f, -39.98537f, 94.98504f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 1.918316f, 3.596623f, 3.6415f };
			bVar10 = true;
			break;
		case 22:
			break;
		case 23:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -513.4158f, -507.3265f, 60.10608f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 103.1835f, 45.52695f, 25.59353f };
			break;
		case 24:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -336.7205f, -361.2609f, 87.43404f };
			vVar4 = { 0f, 0f, 26.73771f };
			vVar7 = { 5.486631f, 5.864298f, 5.042649f };
			break;
		case 25:
			iVar0 = joaat("VOLSPHERE");
			vVar1 = { -374.4691f, -446.4846f, 77.16228f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 10f, 10f, 10f };
			break;
		case 26:
			break;
		case 27:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -1327.4f, -959.9003f, 47.18964f };
			vVar4 = { 0f, 0f, -55.47974f };
			vVar7 = { 4461.069f, 1508.333f, 485.1907f };
			break;
		case 28:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -612.4736f, -431.4183f, 72.29343f };
			vVar4 = { 0f, 0f, -32.87226f };
			vVar7 = { 9.763235f, 23.24989f, 25.46852f };
			break;
		case 29:
			iVar0 = joaat("VOLSPHERE");
			vVar1 = { 1f, 1f, 1f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 50f, 50f, 50f };
			break;
		case 30:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -335.8091f, -358.3235f, 92.31297f };
			vVar4 = { 0f, 0f, -62.51317f };
			vVar7 = { 56.58811f, 76.15298f, 27.29232f };
			break;
		case 31:
			iVar0 = joaat("VOLBOX");
			vVar1 = { -143.7468f, -39.37308f, 96.13992f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 4.979751f, 7.400268f, 3.488019f };
			break;
	}
	if (iParam0 == 22)
	{
		iLocal_108[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
		VOLUME::_0x39816F6F94F385AD(iLocal_108[iParam0], -321.1582f, -361.3702f, 87.27187f, 0f, 0f, 27.00129f, 3.517597f, 2.567398f, 3.384304f);
		VOLUME::_0x39816F6F94F385AD(iLocal_108[iParam0], -322.0082f, -359.2438f, 87.21671f, 0f, 0f, -62.65164f, 2.722972f, 3.260541f, 3.495786f);
	}
	else if (iParam0 == 26)
	{
		iLocal_108[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
		VOLUME::_0x39816F6F94F385AD(iLocal_108[iParam0], -367.2915f, -442.8577f, 77.68181f, 0f, 0f, -9.430953f, 45.08775f, 20.16272f, 20.87634f);
		VOLUME::_0x39816F6F94F385AD(iLocal_108[iParam0], -386.528f, -446.6193f, 80.55575f, 0f, 0f, -92.09356f, 46.12802f, 16.68966f, 15.17965f);
		VOLUME::_0x39816F6F94F385AD(iLocal_108[iParam0], -367.6528f, -453.7901f, 77.36317f, 0f, 0f, 22.83508f, 36.55767f, 21.15457f, 21.5079f);
	}
	else if ((iVar0 == iLocal_62 || __LIB_0__::func_86(vVar1)) || __LIB_0__::func_86(vVar7))
	{
		return false;
	}
	else if (!bVar10)
	{
		iLocal_108[iParam0] = VOLUME::_CREATE_VOLUME_BY_HASH(iVar0, vVar1, vVar4, vVar7);
	}
	else
	{
		iLocal_108[iParam0] = VOLUME::_0x0EB78C2B156635B1(iVar0, vVar1, vVar4, vVar7);
	}
	func_2062(iParam0);
	return func_1545(iParam0);
}

int func_1485(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	if (iVar0 == iLocal_16)
	{
	}
	else if (iVar0 == iLocal_17)
	{
	}
	else if (iVar0 == iLocal_23)
	{
	}
	else if (iVar0 == iLocal_24)
	{
	}
	return 1;
}

int func_1487(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	if (iVar0 == iLocal_16)
	{
		return func_2063(cParam0);
	}
	else if (iVar0 == iLocal_17)
	{
		return func_2064(cParam0);
	}
	else if (iVar0 == iLocal_23)
	{
	}
	else if (iVar0 == iLocal_24)
	{
		return func_2065(cParam0);
	}
	return 1;
}

int func_1489(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	if (iVar0 == iLocal_16)
	{
		return func_2066(cParam0);
	}
	else if (iVar0 == iLocal_17)
	{
	}
	else if (iVar0 == iLocal_23)
	{
		return func_2067(cParam0);
	}
	else if (iVar0 == iLocal_24)
	{
	}
	return 1;
}

void func_1492(int iParam0)
{
	if (iLocal_1856 != iParam0)
	{
		iLocal_1856 = iParam0;
	}
}

void func_1493(int iParam0)
{
	if (iLocal_1799 != iParam0)
	{
		iLocal_1799 = iParam0;
	}
}

Vector3 func_1494()
{
	vector3 vVar0;
	vVar0.x = CLOCK::GET_CLOCK_HOURS();
	vVar0.f_1 = CLOCK::GET_CLOCK_MINUTES();
	vVar0.f_2 = CLOCK::GET_CLOCK_SECONDS();
	return vVar0;
}

Vector3 func_1495(int iParam0)
{
	vector3 vVar0;
	vVar0.x = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	switch (iParam0)
	{
		case 0:
			vVar0.x = 17;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
	}
	return vVar0;
}

bool func_1496(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	int iVar0;
	int iVar1;
	if (!func_2075(vParam0) || !func_2075(vParam3))
	{
		return false;
	}
	iVar0 = func_2076(vParam0);
	iVar1 = func_2076(vParam3);
	if (!bParam6)
	{
		return iVar0 > iVar1;
	}
	return iVar0 >= iVar1;
}

void func_1499(char[4] cParam0)
{
	if (__LIB_0__::func_75(&(Local_151.f_1)))
	{
		if (__LIB_0__::func_265(&(Local_151.f_1)) > Local_151.f_4)
		{
			__LIB_6__::func_876(cParam0, Local_151);
			Local_151 = -1;
			__LIB_0__::func_37(&(Local_151.f_1));
			Local_151.f_4 = 0f;
		}
	}
	if (__LIB_0__::func_75(&(Local_156.f_1)))
	{
		if (__LIB_0__::func_265(&(Local_156.f_1)) > Local_156.f_4)
		{
			__LIB_9__::func_60(cParam0, Local_156);
			Local_156 = -1;
			__LIB_0__::func_37(&(Local_156.f_1));
			Local_156.f_4 = 0f;
		}
	}
}

void func_1500()
{
	if (!func_163(0, 1))
	{
		__LIB_1__::func_148(&uLocal_1857);
		return;
	}
	if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iLocal_63[0]) != 1f)
	{
		__LIB_1__::func_148(&uLocal_1857);
		return;
	}
	if (__LIB_0__::func_264(&uLocal_1857) < 2f)
	{
		return;
	}
	__LIB_1__::func_864(iLocal_63[0], 0, 0);
}

void func_1506(char[4] cParam0)
{
	if (__LIB_0__::func_94(Global_35, -372.6674f, -446.9894f, 79.07262f, 0) > 176f)
	{
		__LIB_9__::func_156(cParam0, "REV1_FSW_FAIL", "", 1, 0);
	}
}

void func_1508(char[4] cParam0)
{
	if (iLocal_1879 == 5)
	{
		__LIB_9__::func_156(cParam0, "LAW_FAIL", "", 1, 0);
	}
}

void func_1509(char[4] cParam0)
{
	if (__LIB_0__::func_94(Global_35, -614.4241f, -489.3424f, 77.74394f, 0) > 392f)
	{
		__LIB_9__::func_156(cParam0, "REV1_RSW_FAIL", "", 1, 0);
	}
}

void func_1510(char[4] cParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_63[0], iLocal_91[0]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_91[0]))
	{
		if (!bLocal_1971)
		{
			if (__LIB_0__::func_272(Global_35, 0))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			if (__LIB_0__::func_272(iLocal_63[0], 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_63[0], true, false);
			}
			PED::SET_PED_RAGDOLL_ON_COLLISION(Global_35, 1, 0);
			PED::SET_PED_RAGDOLL_ON_COLLISION(iLocal_63[0], 1, 0);
			PED::SET_PED_TO_RAGDOLL(iLocal_63[0], 3000, 5000, 0, false, false, false);
			__LIB_1__::func_281(&uLocal_1801, 1, 1);
			iVar0 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
			CAM::SET_CAM_COORD(iVar0, CAM::GET_FINAL_RENDERED_CAM_COORD());
			CAM::SET_CAM_ROT(iVar0, CAM::GET_FINAL_RENDERED_CAM_ROT(2), 2);
			CAM::SET_CAM_FOV(iVar0, CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::SET_CAM_ACTIVE(iVar0, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141[1]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_141[1]);
			}
			__LIB_8__::func_722(cParam0);
			__LIB_9__::func_156(cParam0, "REV1_TRAIN_FAIL", "", 1, 0);
			__LIB_6__::func_876(cParam0, 30);
			bLocal_1971 = true;
		}
	}
}

void func_1511(char[4] cParam0)
{
	int iVar0;
	if (!func_1353() && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (__LIB_0__::func_272(iVar0, 0))
		{
			if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_63[0]) && !TASK::IS_PED_STILL(iVar0)) && ENTITY::GET_ENTITY_SPEED(iVar0) > 2f)
			{
				__LIB_1__::func_864(iLocal_63[0], 0, 0);
			}
		}
	}
}

void func_1522(char[4] cParam0)
{
	struct<8> Var0;
	func_2090(cParam0);
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
	__LIB_0__::func_37(&(cParam0->f_13106));
	__LIB_1__::func_148(&(cParam0->f_13112));
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

bool func_1545(int iParam0)
{
	return ((iParam0 > -1 && iParam0 < 32) && VOLUME::_DOES_VOLUME_EXIST(iLocal_108[iParam0]));
}

bool func_1546(int iParam0)
{
	return ((iParam0 > -1 && iParam0 < 10) && ENTITY::DOES_ENTITY_EXIST(iLocal_97[iParam0]));
}

Vector3 func_1586(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -329.7587f, -360.6174f, 88.0648f;
				case 1:
					return -325.3439f, -357.7183f, 88.0647f;
				case 2:
					return -327.5966f, -357.7596f, 88.854f;
				case 3:
					return -353.9135f, -361.7371f, 86.2723f;
				case 4:
					return -328.5955f, -358.8191f, 87.1241f;
				case 5:
					return -328.8708f, -357.4108f, 87.0647f;
				case 6:
					return -326.7283f, -356.9244f, 87.0636f;
				case 7:
					return -372.8347f, -446.4283f, 79.2332f;
				case 8:
					return -352.517f, -364.2367f, 86.4097f;
				case 9:
					return -353.7347f, -363.3938f, 86.934f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -326.2787f, -357.7494f, 88.0647f;
				case 1:
					return -373.76f, -447.2654f, 79.1437f;
				case 2:
					return -328.1185f, -356.5518f, 88.0647f;
				case 3:
					return -329.117f, -358.1258f, 88.0647f;
				case 4:
					return -323.1261f, -355.561f, 87.0123f;
				case 5:
					return -319.7855f, -361.2188f, 87.4965f;
				case 6:
					return -321.13f, -362.1401f, 87.0272f;
				case 7:
					return -344.054f, -355.4772f, 87.0286f;
				case 8:
					return -326.1425f, -359.035f, 87.0749f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -363.0022f, -350.4443f, 86.6229f;
				case 1:
					return -375.596f, -341.5357f, 86.55f;
				case 2:
					return -374.1313f, -346.2575f, 86.1046f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -145.3057f, -40.3963f, 95.5371f;
				case 1:
					return -632.173f, -494.9077f, 77.4471f;
				case 2:
					return -633.5507f, -495.6329f, 77.4529f;
				case 3:
					return -632.2953f, -497.3464f, 77.1755f;
				case 4:
					return -631.9053f, -498.1629f, 77.1756f;
				case 5:
					return -579.0205f, -463.9574f, 79.2787f;
				case 6:
					return -637.5873f, -500.6491f, 76.9958f;
				case 7:
					return -385.1962f, -346.9146f, 86.2465f;
				case 8:
					return -385.8962f, -350.3146f, 86.4465f;
				case 9:
					return -381.2703f, -350.1903f, 86.0308f;
				case 10:
					return -382.3886f, -346.8528f, 86.2555f;
				case 11:
					return -377.2293f, -350.3303f, 86.3563f;
				case 12:
					return -383.6021f, -352.9586f, 85.8917f;
				case 13:
					return -383.3549f, -355.7176f, 85.9134f;
				case 14:
					return -379.1974f, -344.4701f, 86.4251f;
				case 15:
					return -379.2602f, -349.8682f, 86.2279f;
				case 16:
					return -376.4586f, -353.7125f, 85.9755f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -568.284f, -460.1127f, 79.4226f;
				case 1:
					return -588.0819f, -475.6169f, 78.6367f;
				case 2:
					return -601.2512f, -482.0385f, 78.1935f;
				case 3:
					return -632.2962f, -497.914f, 77.2134f;
				case 4:
					return -994.3176f, -631.049f, 73.8723f;
				case 5:
					return -776.3482f, -571.0222f, 72.4731f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -325.0136f, -421.6423f, 78.0595f;
				case 1:
					return -409.2943f, -426.0818f, 71.1543f;
				case 2:
					return -416.9436f, -454.675f, 77.6655f;
				case 3:
					return -397.3474f, -458.7846f, 75.8914f;
				case 4:
					return -424.81f, -454.6858f, 77.818f;
				case 5:
					return -410.1712f, -454.3669f, 77.1993f;
				case 6:
					return -420.6324f, -460.3302f, 76.3531f;
				case 7:
					return -410.6018f, -463.929f, 74.7526f;
				case 8:
					return -401.6326f, -457.7552f, 75.3526f;
				case 9:
					return -397.6188f, -451.9666f, 75.9737f;
				case 10:
					return -393.8607f, -461.2527f, 75.8751f;
				case 11:
					return -403.2936f, -459.4503f, 76.1822f;
				case 12:
					return -417.4779f, -448.9644f, 78.9763f;
				case 13:
					return -416.4429f, -457.7646f, 76.7352f;
				case 14:
					return -405.7544f, -461.5807f, 74.8876f;
				case 15:
					return -403.6339f, -456.1991f, 75.8002f;
				case 16:
					return -411.1267f, -460.7616f, 75.5042f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -449.1896f, -323.0737f, 79.0297f;
				case 1:
					return -588.2336f, -475.5165f, 78.6367f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -326.7067f, -358.6815f, 87.0717f;
				case 1:
					return -325.9178f, -357.3014f, 87.0651f;
				case 2:
					return -322.8134f, -355.9584f, 86.9966f;
				case 3:
					return -357.1765f, -349.6709f, 86.9783f;
				case 4:
					return -356.4987f, -360.4549f, 86.2573f;
				case 5:
					return -371.1636f, -365.3655f, 85.6809f;
				case 6:
					return -532.5504f, -443.284f, 80.4218f;
				case 7:
					return -604.9207f, -482.2554f, 78.099f;
				case 8:
					return -144.6996f, -40.3315f, 94.5197f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1587(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 294.0677f;
				case 1:
					return 120.4094f;
				case 2:
					return 130.2149f;
				case 3:
					return 295.6601f;
				case 4:
					return 160.56f;
				case 5:
					return 76.32f;
				case 6:
					return -43.56f;
				case 7:
					return 132.48f;
				case 8:
					return 20.88f;
				case 9:
					return 295.4f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 94.6041f;
				case 1:
					return -47f;
				case 2:
					return 208.6854f;
				case 3:
					return 279.7821f;
				case 4:
					return 32.4f;
				case 5:
					return 75.7201f;
				case 6:
					return 334.1857f;
				case 7:
					return 27.1153f;
				case 8:
					return 243.8065f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 60.4645f;
				case 1:
					return -69.12f;
				case 2:
					return 292.7231f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 86.2271f;
				case 1:
					return 28.8f;
				case 2:
					return 28.8f;
				case 3:
					return 205.2f;
				case 4:
					return 28.8f;
				case 5:
					return 348.48f;
				case 6:
					return -62f;
				case 7:
					return 153.36f;
				case 8:
					return 307.44f;
				case 9:
					return 182.9573f;
				case 10:
					return 253.5695f;
				case 11:
					return 315.7113f;
				case 12:
					return 21.4061f;
				case 13:
					return 77.332f;
				case 14:
					return 159.2319f;
				case 15:
					return 344.8323f;
				case 16:
					return 31.0278f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 144f;
				case 1:
					return 117.1077f;
				case 2:
					return 117.8424f;
				case 3:
					return 117.235f;
				case 4:
					return 258.8892f;
				case 5:
					return 297.36f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 109.3865f;
				case 1:
					return 162.5568f;
				case 2:
					return 318.0768f;
				case 3:
					return -2.3232f;
				case 4:
					return 46.7801f;
				case 5:
					return 313.0368f;
				case 6:
					return 18.6849f;
				case 7:
					return 18.6849f;
				case 8:
					return 18.5849f;
				case 9:
					return 190.0126f;
				case 10:
					return 190.0126f;
				case 11:
					return 140.0126f;
				case 12:
					return 124.08f;
				case 13:
					return 125.28f;
				case 14:
					return 125.28f;
				case 15:
					return 125.28f;
				case 16:
					return 125.28f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 138.1869f;
				case 1:
					return 117.1077f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 32.4f;
				case 1:
					return 110.16f;
				case 2:
					return 25.92f;
				case 3:
					return 108.72f;
				case 4:
					return 202.32f;
				case 5:
					return 117.36f;
				case 6:
					return 115.92f;
				case 7:
					return 296.64f;
				case 8:
					return 270f;
			}
			break;
	}
	return 0f;
}

void func_1717(int iParam0)
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
	func_671(iParam0, 1, 1, -142743235, 1);
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
		func_671(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1722(struct<6> Param0)
{
	if (!func_2243(Param0.f_4, 1))
	{
	}
	if (!func_2243(Param0, 1))
	{
	}
	if (!func_2243(Param0.f_2, 1))
	{
	}
	if (!func_2243(Param0.f_5, 1))
	{
	}
	if (!func_2243(Param0.f_3, 1))
	{
	}
	if (!func_2243(Param0.f_1, 1))
	{
	}
}

void func_1774(int iParam0)
{
	Local_239[iParam0 /*55*/].f_30 = { 0f, 0f, 0f };
	Local_239[iParam0 /*55*/].f_30.f_4 = 21030;
	Local_239[iParam0 /*55*/].f_30.f_3 = Global_35;
	Local_239[iParam0 /*55*/].f_30.f_8 = 4;
	Local_239[iParam0 /*55*/].f_30.f_19 = 4;
	Local_239[iParam0 /*55*/].f_30.f_21 = 4;
	Local_239[iParam0 /*55*/].f_30.f_17 = 4;
	Local_239[iParam0 /*55*/].f_30.f_18 = 4;
	Local_239[iParam0 /*55*/].f_30.f_7 = 0;
}

bool func_1781(int iParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar14;
	struct<32> Var15;
	var uVar49;
	vVar4 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	__LIB_1__::func_65(iParam0, &vVar4, 1);
	vVar4.f_2 = iParam1;
	if (vVar4.y == -1)
	{
		return false;
	}
	iVar14 = __LIB_1__::func_66(vVar4.y, 1);
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar14);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar14))
	{
		if (!__LIB_1__::func_224(vVar4.y))
		{
			__LIB_1__::func_225(vVar4.y);
		}
		iVar1 = __LIB_1__::func_806(&vVar4, 0, iParam10);
		if (iVar1 == -1)
		{
			return false;
		}
		Global_1392915[iVar1 /*12*/].f_2 = iParam1;
		Global_1392915[iVar1 /*12*/].f_6 = { vParam2 };
		Global_1392915[iVar1 /*12*/].f_9 = uParam5;
		Global_1392915[iVar1 /*12*/].f_10 = iParam6;
		iVar0 = Global_1392915[iVar1 /*12*/].f_4;
		if (__LIB_1__::func_241(iVar0) || (!__LIB_0__::func_702(iVar0) && __LIB_0__::func_298(0) != iVar0))
		{
			iVar2 = __LIB_0__::func_80(iVar0);
			if (iVar2 == -1)
			{
				__LIB_1__::func_319(iVar0);
			}
		}
		if (__LIB_0__::func_702(iVar0))
		{
			__LIB_1__::func_297(iVar0);
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar14) > 0)
		{
			if (iParam8 == 1)
			{
				__LIB_1__::func_267(vVar4.y, 0);
			}
			return true;
		}
		Var15 = -1;
		Var15.f_1 = -1;
		Var15.f_2 = -1;
		Var15.f_4 = -1;
		Var15.f_11 = -1;
		Var15.f_12 = -1;
		Var15.f_23 = 6;
		Var15.f_30 = -1;
		Var15.f_31 = 255;
		if (*iParam7 > Var15.f_23)
		{
			return false;
		}
		iVar3 = 0;
		while (iVar3 < Var15.f_23)
		{
			Var15.f_23[iVar3] = 0;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < *iParam7)
		{
			Var15.f_23[iVar3] = (*iParam7)[iVar3];
			iVar3++;
		}
		Var15.f_13 = iParam9;
		if (__LIB_14__::func_243(iParam0, &Var15, &uVar49, 0, 1))
		{
			if (iParam8 == 1)
			{
				__LIB_1__::func_267(vVar4.y, 0);
			}
			return true;
		}
	}
	return false;
}

int func_1785(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	if (func_2300(*iParam0, iParam1, *iParam2, bParam3, iParam4))
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

void func_1787(int iParam0)
{
	if (iLocal_1861 != iParam0)
	{
		iLocal_1861 = iParam0;
	}
}

void func_1791(char[4] cParam0, char* sParam1)
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
	func_1472(cVar0, &(cParam0->f_7375), cParam0);
}

bool func_1793(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	uParam1->f_3 = 0f;
	*iParam2 = func_1373(iParam0);
	switch (iParam0)
	{
		case 0:
			*uParam1 = { func_1328(0, 2) };
			*iParam2 = iLocal_38;
			break;
		case 1:
			*uParam1 = { func_1328(0, 4) };
			*iParam2 = iLocal_41;
			break;
		case 2:
			*uParam1 = { func_1328(0, 5) };
			*iParam2 = iLocal_40;
			break;
		case 3:
			*uParam1 = { func_1328(0, 6) };
			*iParam2 = iLocal_39;
			break;
		case 4:
			*uParam1 = { func_1328(0, 2) };
			*iParam2 = iLocal_42;
			break;
		case 5:
			*uParam1 = { func_1328(0, 2) };
			*iParam2 = iLocal_43;
			break;
		case 6:
			*uParam1 = { func_1328(0, 2) };
			*iParam2 = iLocal_44;
			break;
		case 7:
			*uParam1 = { -319.76f, -362.59f, 87f };
			uParam1->f_3 = -61.31f;
			*iParam2 = iLocal_53;
			break;
		case 8:
			*uParam1 = { -318.5f, -361.61f, 86.62f };
			uParam1->f_3 = 0f;
			*iParam2 = iLocal_55;
			break;
		case 9:
			*uParam1 = { -321.13f, -363.39f, 86.98f };
			uParam1->f_3 = -75f;
			*iParam2 = iLocal_54;
			break;
	}
	return *iParam2 != 0;
}

bool func_1797()
{
	return iLocal_1805 == 9;
}

bool func_1801()
{
	return iLocal_1862 < 4;
}

int func_1802(int iParam0)
{
	int iVar0;
	if (iParam0 != 1 && iParam0 != 2)
	{
		return -1;
	}
	iVar0 = (iParam0 - 1);
	return iLocal_1819[iVar0];
}

bool func_1803(char[4] cParam0)
{
	if (func_449(32))
	{
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(cParam0->f_7375.f_804, false)) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -329989712))
	{
		func_450(32, 1);
		return true;
	}
	return false;
}

void func_1804(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 != 1 && iParam0 != 2)
	{
		return;
	}
	iVar0 = (iParam0 - 1);
	if (iLocal_1819[iVar0] != iParam1)
	{
		iLocal_1819[iVar0] = iParam1;
	}
}

bool func_1807(int iParam0)
{
	int iVar0;
	iVar0 = func_1802(iParam0);
	return (((iVar0 == 5 || iVar0 == 6) || iVar0 == 7) || iVar0 == 8);
}

bool func_1809(int iParam0)
{
	int iVar0;
	iVar0 = func_1802(iParam0);
	return (iVar0 == 7 || iVar0 == 8);
}

void func_1810(int iParam0)
{
	if (iLocal_1862 != iParam0)
	{
		iLocal_1862 = iParam0;
	}
}

bool func_1813()
{
	return (__LIB_0__::func_94(Global_35, -320.8013f, -361.5928f, 87.0773f, 1) < 10f || func_2336(1));
}

bool func_1821(int iParam0)
{
	return __LIB_0__::func_27(iLocal_1808, iParam0);
}

void func_1822(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_683(&iLocal_1808, iParam0);
	}
	else
	{
		__LIB_1__::func_681(&iLocal_1808, iParam0);
	}
}

void func_1823(int iParam0)
{
	if (iLocal_1807 != iParam0)
	{
		iLocal_1807 = iParam0;
	}
}

void func_1827(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!func_449(1))
	{
		__LIB_2__::func_602(&(Local_204[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_204[1 /*17*/]), "INTERACT_DEMAND", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_450(1, 1);
	}
	if (!func_449(2))
	{
		iVar0 = func_2344(&(iLocal_63[14]), &(Local_161[0 /*21*/]), 4.5f, &Local_204, 0, 3, 0, "STRANGER_MALE", 1, iLocal_108[22], 0, 2, -1082130432 /* Float: -1f */);
		iVar1 = func_2344(&(iLocal_63[15]), &(Local_161[1 /*21*/]), 4.5f, &Local_204, 0, 3, 0, "STRANGER_MALE", 1, iLocal_108[22], 0, 2, -1082130432 /* Float: -1f */);
		if (iVar0 != -1 || iVar1 != -1)
		{
			if (iVar0 == 0 || iVar1 == 0)
			{
				func_1822(2, 1);
			}
			func_1822(4, 1);
			__LIB_2__::func_624(&Local_204, 1, 1, 1, 0);
			__LIB_2__::func_344(&(iLocal_63[14]));
			__LIB_2__::func_344(&(iLocal_63[15]));
			func_2345(cParam0, 14, 0, 0);
			func_2345(cParam0, 15, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_63[14], 297, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_63[15], 297, true);
			func_450(2, 1);
		}
	}
}

int func_1828()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_63[18], false, false) };
	if (!__LIB_0__::func_75(&uLocal_1835))
	{
		if (MISC::_0xDC416CA762BC4F43(vVar0, 15f, 1, 1) > 0)
		{
			__LIB_1__::func_148(&uLocal_1835);
		}
	}
	else if (__LIB_0__::func_264(&uLocal_1835) > 1f)
	{
		return 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[18]) && PED::IS_PED_DEAD_OR_DYING(iLocal_63[18], true))
	{
		return 1;
	}
	if (func_449(42))
	{
		return 3;
	}
	return 0;
}

void func_1829(int iParam0)
{
	if (iLocal_1810 != iParam0)
	{
		iLocal_1810 = iParam0;
	}
}

void func_1830(int iParam0)
{
	if (iLocal_1872 != iParam0)
	{
		iLocal_1872 = iParam0;
	}
}

void func_1831(int iParam0)
{
	if (iLocal_1834 != iParam0)
	{
		iLocal_1834 = iParam0;
	}
}

void func_1832(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	float fVar10;
	if (!func_163(iParam0, 1))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_63[iParam0], true, false) };
	vVar3 = { Global_36 - vVar0 };
	vVar3 = { vVar3 / FtoV(BUILTIN::VMAG(vVar3)) };
	fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar3.x, vVar3.y);
	if (bParam1)
	{
		TASK::TASK_ACHIEVE_HEADING(iLocal_63[iParam0], fVar6, 0);
		return;
	}
	if (__LIB_0__::func_163(iLocal_63[iParam0], 1920390111))
	{
		return;
	}
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_63[iParam0], 0f, 1f, 0f) - vVar0 };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	fVar10 = __LIB_2__::func_977(vVar7, vVar3);
	if (fVar10 < 0.7f)
	{
		TASK::TASK_ACHIEVE_HEADING(iLocal_63[iParam0], fVar6, 0);
	}
}

bool func_1833(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	if (!__LIB_0__::func_272(iLocal_63[iParam0], 0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_63[iParam0], true, false) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 1f, 0f) - Global_36 };
	vVar6 = { vVar0 - Global_36 };
	fVar9 = BUILTIN::VMAG(vVar6);
	vVar3 = { vVar3 / FtoV(BUILTIN::VMAG(vVar3)) };
	vVar6 = { vVar6 / Vector(fVar9, fVar9, fVar9) };
	fVar10 = __LIB_2__::func_977(vVar3, vVar6);
	fVar11 = ENTITY::GET_ENTITY_SPEED(Global_35);
	fVar12 = __LIB_9__::func_231((__LIB_0__::func_649((fVar11 - 1f), 0f) / (3f - 1f)), 0f, 1f);
	fVar13 = (fParam1 + (fVar12 * fParam1));
	return ((fVar10 > 0.6f && fVar9 < fVar13) && fVar11 >= 1f);
}

bool func_1834()
{
	if (func_2346())
	{
		return true;
	}
	if (PED::IS_PED_SHOOTING(Global_35) && __LIB_0__::func_94(Global_35, -408.2727f, -457.9213f, 76.14096f, 0) < 20f)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[18]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[18], Global_35, 1, 1))
	{
		return true;
	}
	if (func_2347())
	{
		return true;
	}
	return false;
}

void func_1835(int iParam0, int iParam1)
{
	int iVar0;
	if (!func_2348(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 - 4);
	if (iLocal_1787[iVar0] != iParam1)
	{
		iLocal_1787[iVar0] = iParam1;
	}
}

bool func_1836(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	if (!func_2348(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_63[iParam0], 0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_63[iParam0], true, false) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 1f, 0f) - Global_36 };
	vVar6 = { vVar0 - Global_36 };
	fVar9 = BUILTIN::VMAG(vVar6);
	vVar3 = { vVar3 / FtoV(BUILTIN::VMAG(vVar3)) };
	vVar6 = { vVar6 / Vector(fVar9, fVar9, fVar9) };
	fVar10 = __LIB_2__::func_977(vVar3, vVar6);
	fVar11 = ENTITY::GET_ENTITY_SPEED(Global_35);
	fVar12 = __LIB_9__::func_231((__LIB_0__::func_649((fVar11 - 1f), 0f) / (3f - 1f)), 0f, 1f);
	fVar13 = (10f + (fVar12 * 6f));
	return ((fVar10 > 0.6f && fVar9 < fVar13) && fVar11 >= 1f);
}

bool func_1840(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 1f, 0f) - vVar0 };
	vVar6 = { vParam1 - vVar0 };
	vVar3 = { vVar3 / FtoV(BUILTIN::VMAG(vVar3)) };
	vVar6 = { vVar6 / FtoV(BUILTIN::VMAG(vVar6)) };
	fVar9 = __LIB_1__::func_95(vVar3, vVar6);
	return fVar9 > (1f - fParam4);
}

bool func_1845()
{
	return iLocal_1873 == 4;
}

void func_1847(int iParam0)
{
	if (iLocal_1873 != iParam0)
	{
		iLocal_1873 = iParam0;
	}
}

float func_1849(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return 0f;
	}
	fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false));
	fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0));
	fVar2 = __LIB_9__::func_231((fVar1 / fVar0), 0f, 1f);
	return fVar2;
}

void func_1851(int iParam0)
{
	if (iLocal_1877 != iParam0)
	{
		iLocal_1877 = iParam0;
	}
}

void func_1852(char[4] cParam0)
{
	int iVar0;
	iVar0 = iLocal_63[18];
	if (((!func_449(33) && iLocal_1895 >= 4) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 8f, true)) && !func_2351())
	{
		func_2352(7);
		func_450(33, 1);
	}
	func_2353(cParam0);
	switch (iLocal_1895)
	{
		case 0:
			if (__LIB_0__::func_272(iVar0, 0))
			{
				AUDIO::STOP_PED_SPEAKING(iVar0, true);
			}
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 21, 2, 1);
			func_2354(1);
			break;
		case 1:
			if (iLocal_1798 >= 4)
			{
				func_2354(9);
			}
			else if (func_449(3))
			{
				func_2352(1);
				func_2354(2);
			}
			break;
		case 2:
			if (iLocal_1798 >= 4)
			{
				func_2354(9);
			}
			else if (func_2355(1))
			{
				func_2354(3);
			}
			break;
		case 3:
			if (iLocal_1798 >= 4)
			{
				func_2354(9);
			}
			else if (!func_2355(1))
			{
				PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 21, 2, 0);
				func_2356(2, 0);
				__LIB_1__::func_148(&uLocal_1890);
				func_2354(4);
			}
			break;
		case 4:
			if (iLocal_1798 >= 4)
			{
				func_2354(9);
			}
			else if (((__LIB_0__::func_264(&uLocal_1890) > 8f && __LIB_0__::func_272(iVar0, 0)) && ENTITY::IS_ENTITY_ON_SCREEN(iVar0)) && __LIB_0__::func_665(Global_35, iVar0, 0, 0) < 40f)
			{
				func_2352(6);
				func_2356(3, 0);
				func_2354(5);
			}
			else if (func_2355(2))
			{
				func_2356(3, 0);
				func_2354(5);
			}
			break;
		case 5:
			if (iLocal_1798 >= 4)
			{
				func_2354(9);
			}
			else if (func_2355(3))
			{
				func_2356(5, 0);
				func_2354(6);
			}
			break;
		case 6:
			if (iLocal_1798 >= 4)
			{
				func_2354(9);
			}
			else if (!func_2355(3))
			{
				func_2352(4);
				func_2354(7);
			}
			break;
		case 7:
			if (iLocal_1798 >= 4)
			{
				func_2354(9);
			}
			else if (func_2355(5))
			{
				func_2356(0, 0);
				func_2354(8);
			}
			break;
		case 8:
			if (iLocal_1798 >= 4)
			{
				func_2354(9);
			}
			break;
		case 9:
			func_2356(8, 0);
			if (__LIB_0__::func_272(iVar0, 0))
			{
				AUDIO::STOP_PED_SPEAKING(iVar0, false);
			}
			func_2354(10);
			break;
		case 10:
			if (func_2355(8))
			{
				func_2357();
				func_2356(11, 0);
				func_2354(11);
			}
			break;
		case 11:
			if (!func_2355(8))
			{
				func_2352(9);
				func_2354(12);
			}
			break;
		case 12:
			if (func_2355(9))
			{
				func_2354(13);
			}
			break;
		case 13:
			if (!func_2355(9))
			{
				func_2358();
				func_2354(14);
			}
			break;
		case 14:
			if (func_2355(11) || iLocal_1798 >= 7)
			{
				func_2356(17, 0);
				func_2356(19, 1);
				func_2354(21);
			}
			else if (func_2359())
			{
				func_2352(func_2360());
				func_2361();
				func_2358();
			}
			break;
		case 21:
			if (!func_449(40) && func_2355(17))
			{
				func_2356(0, 0);
				func_450(40, 1);
			}
			if (!func_449(41) && func_2355(19))
			{
				func_2356(0, 1);
				func_450(41, 1);
			}
			break;
	}
}

bool func_1853(var uParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_75(uParam0) && bParam2)
	{
		__LIB_1__::func_148(uParam0);
	}
	return __LIB_3__::func_135(uParam0) >= iParam1;
}

void func_1854(int iParam0)
{
	if (iLocal_1883 != iParam0)
	{
		iLocal_1883 = iParam0;
	}
}

bool func_1856(int iParam0)
{
	var uVar0;
	int iVar1;
	uVar0 = PLAYER::_0x2E1ABE627C95ED9B();
	iVar1 = iParam0;
	if ((uVar0 && iVar1) == iVar1)
	{
		return true;
	}
	return false;
}

void func_1859(char[4] cParam0)
{
	switch (iLocal_1896)
	{
		case 0:
			if (func_449(39))
			{
				func_2364(4);
			}
			else if (func_449(38))
			{
				func_2364(1);
			}
			break;
		case 1:
			__LIB_10__::func_731();
			__LIB_3__::func_834(2);
			if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), iLocal_63[18]))
			{
				__LIB_9__::func_208(cParam0, "REV1_WIT_INTE", 0, -1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_3__::func_787(0);
			}
			else
			{
				__LIB_9__::func_208(cParam0, "REV1_WIT_STOP", 0, -1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_3__::func_787(1);
			}
			func_2364(2);
			break;
		case 2:
			if (func_449(39))
			{
				__LIB_3__::func_760();
				func_2364(4);
			}
			else if (!func_449(38))
			{
				__LIB_3__::func_760();
				func_2364(3);
			}
			break;
		case 3:
			if (func_449(39))
			{
				func_2364(4);
			}
			else if (func_449(38))
			{
				func_2364(1);
			}
			break;
		case 4:
			if (!func_449(39))
			{
				if (func_449(38))
				{
					func_2364(1);
				}
				else
				{
					func_2364(3);
				}
			}
			break;
	}
}

void func_1861(int iParam0)
{
	if (iLocal_1798 != iParam0)
	{
		iLocal_1798 = iParam0;
	}
	if ((iLocal_1798 == 9 || iLocal_1798 == 8) || iLocal_1798 == 5)
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_MISSION_CHASE"));
	}
}

void func_1862(int iParam0)
{
	if (iLocal_1879 != iParam0)
	{
		iLocal_1879 = iParam0;
	}
}

void func_1863(int iParam0)
{
	if (iLocal_1884 != iParam0)
	{
		iLocal_1884 = iParam0;
	}
}

bool func_1869()
{
	return iLocal_1901 == 7;
}

bool func_1870()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (func_449(10))
	{
		return false;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[19], true, 0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_63[0]))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(Global_35) < 0.5f)
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_63[0], true, false) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 1f, 0f) - Global_36 };
	vVar6 = { vVar0 - Global_36 };
	vVar3 = { vVar3 / FtoV(BUILTIN::VMAG(vVar3)) };
	vVar6 = { vVar6 / FtoV(BUILTIN::VMAG(vVar6)) };
	fVar9 = __LIB_2__::func_977(vVar3, vVar6);
	if (fVar9 < 0.7f)
	{
		return false;
	}
	return true;
}

void func_1871(char[4] cParam0)
{
	switch (iLocal_1805)
	{
		case 0:
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[11], true, 0) && !func_2336(1))
			{
				__LIB_10__::func_979(iLocal_63[0], __LIB_1__::func_464(21, 0), 500f, 0, 500f, 324);
				func_1295(2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[11], true, 0) || func_2336(1))
			{
				__LIB_8__::func_771(iLocal_63[0], 0, 1, 0);
				__LIB_1__::func_281(&iLocal_1806, 1, 1);
				func_1295(1);
			}
			else if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), iLocal_63[0]))
			{
				if (!__LIB_0__::func_139(iLocal_1806))
				{
					iLocal_1806 = __LIB_1__::func_877("INTERACT_CALLOUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_574(&iLocal_1806, iLocal_63[0]);
				}
				if (__LIB_0__::func_139(iLocal_1806) && __LIB_1__::func_514(iLocal_1806, 1))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						__LIB_1__::func_221(iLocal_1806, 0, 1);
						if (!func_449(8))
						{
							func_450(8, 1);
						}
						else if (!func_449(9))
						{
							func_450(9, 1);
						}
						else
						{
							__LIB_1__::func_281(&iLocal_1806, 1, 1);
							__LIB_8__::func_771(iLocal_63[0], 0, 1, 0);
							func_450(10, 1);
						}
						func_1295(3);
					}
				}
			}
			else if (__LIB_0__::func_139(iLocal_1806))
			{
				__LIB_1__::func_281(&iLocal_1806, 1, 1);
			}
			break;
		case 3:
			if (func_449(10))
			{
				func_1295(5);
			}
			else if (func_449(9))
			{
				if (__LIB_8__::func_711(cParam0, "REV1_ATTENTION", 0))
				{
					__LIB_1__::func_148(&uLocal_1772);
					func_1295(4);
				}
			}
			else if (__LIB_8__::func_711(cParam0, "REV1_ATTENTION", 0))
			{
				__LIB_1__::func_148(&uLocal_1772);
				func_1295(4);
			}
			break;
		case 4:
			if (__LIB_1__::func_871(&uLocal_1772) > 3000)
			{
				if (!func_449(10))
				{
					__LIB_1__::func_221(iLocal_1806, 1, 1);
					func_1295(2);
				}
			}
			break;
		case 5:
			func_450(10, 1);
			__LIB_1__::func_281(&iLocal_1806, 1, 1);
			__LIB_8__::func_771(iLocal_63[0], 0, 1, 0);
			if (__LIB_8__::func_711(cParam0, "REV1_REVSHOUT3", 0))
			{
				__LIB_1__::func_148(&uLocal_1772);
				func_1295(6);
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&uLocal_1772) > 2.5f && __LIB_8__::func_711(cParam0, "REV1_REVSHOUT4", 0))
			{
				__LIB_1__::func_148(&uLocal_1772);
				func_1295(7);
			}
			break;
		case 7:
			if (__LIB_0__::func_265(&uLocal_1772) > 2.5f && __LIB_8__::func_711(cParam0, "REV1_REVSHOUT5", 0))
			{
				__LIB_1__::func_148(&uLocal_1772);
				func_1295(8);
			}
			break;
		case 8:
			if (__LIB_0__::func_265(&uLocal_1772) > 5f)
			{
				func_1295(9);
			}
			break;
		case 9:
			break;
	}
}

void func_1872(int iParam0)
{
	if (iLocal_1906 != iParam0)
	{
		iLocal_1906 = iParam0;
	}
}

int func_1873()
{
	int iVar0;
	if (!func_163(16, 1))
	{
		return 0;
	}
	if (__LIB_13__::func_262(iLocal_63[16], 0, &(Local_239[16 /*55*/].f_2), &iVar0, 0, 0))
	{
		if (iVar0 == 8)
		{
			return 3;
		}
		else if (__LIB_1__::func_339(iVar0, 1, 1, 1, 0))
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (__LIB_0__::func_665(Global_35, iLocal_63[16], 0, 0) < 4f)
	{
		if (iLocal_1906 <= 1)
		{
			__LIB_1__::func_148(&uLocal_1967);
		}
		else if (iLocal_1906 >= 2 && iLocal_1906 <= 3)
		{
			__LIB_1__::func_148(&uLocal_1967);
		}
		else if (__LIB_0__::func_265(&uLocal_1967) > 20f)
		{
			return 4;
		}
	}
	else
	{
		__LIB_1__::func_148(&uLocal_1967);
	}
	return 0;
}

void func_1874()
{
	__LIB_2__::func_624(&Local_1929, 1, 1, 1, 0);
}

int func_1875()
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_502(&(Local_1929[0 /*17*/])))
	{
		__LIB_2__::func_602(&(Local_1929[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	}
	if (!__LIB_1__::func_502(&(Local_1929[1 /*17*/])))
	{
		__LIB_2__::func_602(&(Local_1929[1 /*17*/]), "INTERACT_DEMAND", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	iVar0 = func_2344(&(iLocal_63[16]), &(Local_1907[0 /*21*/]), 6f, &Local_1929, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
	iVar1 = iVar0;
	if (iVar1 != -1)
	{
		func_1874();
	}
	return iVar1;
}

void func_1876(int iParam0)
{
	if (iLocal_1900 != iParam0)
	{
		iLocal_1900 = iParam0;
	}
}

bool func_1877()
{
	return (iLocal_1901 >= 1 && iLocal_1901 <= 5);
}

bool func_1878()
{
	if (func_449(19))
	{
		return true;
	}
	if (((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_141[1], true, false) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[1], "Pbl_Rev_Loop_01")) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[1], "Pbl_Player_Approaches_Reverend_WALK")) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_141[1], "Pbl_Player_Approaches_Reverend_RUN"))
	{
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[1], "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141[1], "Reverend", iLocal_63[0], 0);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_141[1], "Pbl_Rev_Loop_01", true);
	ANIMSCENE::START_ANIM_SCENE(iLocal_141[1]);
	func_450(19, 1);
	return true;
}

void func_1879(int iParam0)
{
	if (iLocal_1970 != iParam0)
	{
		iLocal_1970 = iParam0;
	}
}

bool func_1880(int iParam0)
{
	vector3 vVar0;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (func_449(0))
	{
		return true;
	}
	if (!func_2375(iParam0, &vVar0, &bVar4, &fVar5))
	{
		return false;
	}
	if (!func_957(0, 1))
	{
		iLocal_91[0] = VEHICLE::_CREATE_MISSION_TRAIN(-1740474560, vVar0, bVar4, false, true, true);
	}
	if (!func_957(0, 1))
	{
		return false;
	}
	func_1881(0f);
	if (!VEHICLE::_0xBD3C4A2ED509205E(iLocal_91[0]))
	{
		return false;
	}
	iVar6 = 0 + 1;
	while (iVar6 <= (5 - 1))
	{
		iVar7 = iVar6;
		if (!func_957(iVar7, 1))
		{
			iLocal_91[iVar7] = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_91[0], iVar6);
			if (func_957(iVar7, 1))
			{
			}
			else
			{
				return false;
			}
		}
		iVar6++;
	}
	func_1881(fVar5);
	iVar8 = __LIB_0__::func_23();
	if (__LIB_0__::func_252(__LIB_0__::func_41(iVar8), 17, 7))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_91[0], joaat("PG_VEH_PRIVATESTEAMER01X"));
		if (PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_91[0]))
		{
			iVar9 = PROPSET::_GET_VEHICLE_PROPSET(iLocal_91[0]);
			if (PROPSET::_DOES_PROPSET_EXIST(iVar9))
			{
			}
		}
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_91[0], 2);
	}
	func_450(0, 1);
	return true;
}

void func_1881(float fParam0)
{
	if (!func_957(0, 1))
	{
		return;
	}
	VEHICLE::SET_TRAIN_SPEED(iLocal_91[0], fParam0);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_91[0], fParam0);
}

bool func_1882()
{
	if (!func_2377())
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_108[23], false, 0))
	{
		return true;
	}
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return true;
	}
	return false;
}

void func_1883(int iParam0)
{
	if (iLocal_1901 != iParam0)
	{
		iLocal_1901 = iParam0;
	}
}

void func_1884(char[4] cParam0)
{
	switch (iLocal_1856)
	{
		case 0:
			if (__LIB_8__::func_671(cParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 560580119))
			{
				if (func_2378())
				{
					CLOCK::SET_CLOCK_TIME(17, 0, 0);
					func_1492(2);
				}
				else if (func_2379())
				{
					CLOCK::SET_CLOCK_TIME(7, 0, 0);
					func_1492(1);
				}
				else if (func_2380())
				{
					CLOCK::SET_CLOCK_TIME(6, 0, 0);
					func_1492(1);
				}
				else if (func_2381())
				{
					CLOCK::SET_CLOCK_TIME(5, 0, 0);
					func_1492(1);
				}
			}
			break;
		case 1:
			if (__LIB_6__::func_864(cParam0) == iLocal_21)
			{
				CLOCK::SET_CLOCK_TIME(17, 0, 0);
				func_1492(2);
			}
			break;
		case 2:
			break;
	}
}

void func_1885()
{
	if (iLocal_1805 == 0)
	{
		func_1295(1);
	}
}

void func_1892(int iParam0)
{
	if (iLocal_1973 != iParam0)
	{
		iLocal_1973 = iParam0;
	}
}

float func_1893()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { func_1898() };
	vVar3 = { -614.8445f, -489.0833f, 77.9549f };
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
}

void func_1894(int iParam0)
{
	if (iLocal_1972 != iParam0)
	{
		iLocal_1972 = iParam0;
	}
}

bool func_1896()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { Vector(79.4997f, -472.2309f, -574.4883f) - Vector(79.4917f, -467.3075f, -577.037f) };
	vVar3 = { func_1898() - Global_36 };
	vVar0 = { vVar0 / FtoV(BUILTIN::VMAG(vVar0)) };
	vVar3 = { vVar3 / FtoV(BUILTIN::VMAG(vVar3)) };
	return __LIB_2__::func_977(vVar0, vVar3) > 0.8f;
}

void func_1897(int iParam0)
{
	if (iLocal_2010 != iParam0)
	{
		iLocal_2010 = iParam0;
	}
}

Vector3 func_1898()
{
	int iVar0;
	var uVar1;
	struct<2> Var4;
	vector3 vVar7;
	if (!func_957(0, 1))
	{
		return 0f, 0f, 0f;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_91[0]);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &uVar1, &Var4);
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91[0], 0f, Var4.f_1, 0f) };
	return vVar7;
}

bool func_1899()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { Vector(79.4997f, -472.2309f, -574.4883f) - Vector(79.4917f, -467.3075f, -577.037f) };
	vVar3 = { func_1900() - Global_36 };
	vVar0 = { vVar0 / FtoV(BUILTIN::VMAG(vVar0)) };
	vVar3 = { vVar3 / FtoV(BUILTIN::VMAG(vVar3)) };
	return __LIB_2__::func_977(vVar0, vVar3) > 0.8f;
}

Vector3 func_1900()
{
	int iVar0;
	struct<2> Var1;
	var uVar4;
	vector3 vVar7;
	if (!func_957(0, 1))
	{
		return 0f, 0f, 0f;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_91[4]);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &Var1, &uVar4);
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91[4], 0f, Var1.f_1, 0f) };
	return vVar7;
}

void func_1901(int iParam0)
{
	if (iLocal_2009 != iParam0)
	{
		iLocal_2009 = iParam0;
	}
}

int func_1902()
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(Global_35, iLocal_63[0], 1, 1);
	if (!TASK::IS_PED_WALKING(Global_35) && fVar0 < 12f)
	{
		return 2;
	}
	else if (TASK::IS_PED_WALKING(Global_35) && fVar0 < 7f)
	{
		return 1;
	}
	return 0;
}

void func_1903(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		if (func_957(iVar1, 0))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iLocal_91[iVar1], bParam1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_91[iVar1], iParam0, bParam1);
		}
		iVar0++;
	}
}

void func_1904(int iParam0)
{
	if (iLocal_1974 != iParam0)
	{
		iLocal_1974 = iParam0;
	}
}

bool func_1905()
{
	float fVar0;
	float fVar1;
	fVar0 = func_1893();
	fVar1 = (fVar0 / 4f);
	return fVar1 >= 6f;
}

bool func_1906()
{
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::_SET_CONTROL_CONTEXT(4, joaat("REVEREND1TRAINTRACKRESCUE"));
		switch (iLocal_1804)
		{
			case 0:
				if (!__LIB_0__::func_139(iLocal_1802))
				{
					iLocal_1802 = __LIB_1__::func_877("REV1_UC_PUSHUP", joaat("INPUT_MINIGAME_ACTION_UP"), 3, 570, 4000, 25, 3f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_522(iLocal_1802, 14, 1, 1);
					__LIB_14__::func_235(iLocal_1802, "Rev1Pull");
				}
				else
				{
					iLocal_1804 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_139(iLocal_1802))
				{
					if (func_2390())
					{
						iLocal_1804 = 1;
					}
				}
				else
				{
					iLocal_1804 = 0;
				}
				break;
			case 1:
				if (!__LIB_0__::func_139(iLocal_1803))
				{
					iLocal_1803 = __LIB_1__::func_877("REV1_UC_TAPX", joaat("INPUT_CONTEXT_ACTION"), 11, 570, 4000, 10, 2f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_522(iLocal_1803, 14, 1, 1);
					__LIB_14__::func_235(iLocal_1803, "Rev1Force");
				}
				else if (!func_2390())
				{
					__LIB_1__::func_281(&iLocal_1803, 1, 1);
					iLocal_1804 = 0;
				}
				else
				{
					if (__LIB_4__::func_442(iLocal_1803, 1))
					{
						__LIB_1__::func_515(iLocal_1803, 1);
					}
					if (__LIB_0__::func_139(iLocal_1803))
					{
						if (func_449(20))
						{
							func_2393(iLocal_1803, 0.06f, 0.5f, 0, 1);
						}
						else
						{
							func_2393(iLocal_1803, 0.14f, 0.5f, 0, 1);
						}
						fLocal_1800 = __LIB_0__::func_486(iLocal_1803, 1);
						if (__LIB_0__::func_567(iLocal_1803, 1) && !func_449(20))
						{
							__LIB_0__::func_105(1);
							__LIB_1__::func_281(&iLocal_1802, 1, 1);
							__LIB_1__::func_281(&iLocal_1803, 1, 1);
							__LIB_4__::func_353();
							return true;
							iLocal_1804 = 4;
						}
					}
				}
				break;
		}
	}
	return false;
}

void func_1907(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_108[16], false, 0))
	{
		if (!__LIB_0__::func_163(iParam0, 242628503))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(0.1331f, 2.2198f, -6.7411f) };
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1809);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1809);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, -1, 1f, 1, 40000f);
			if (!__LIB_0__::func_86(vParam1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, -1, 0.25f, 1, 40000f);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1809);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_1809);
		}
	}
	else if (!__LIB_0__::func_163(iParam0, -982327190))
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
}

void func_1911(bool bParam0)
{
	if (bParam0)
	{
		iLocal_145 = __LIB_4__::func_983(408396114, -145.2824f, -39.4624f, 94.9432f, 1);
	}
	else
	{
		iLocal_145 = __LIB_8__::func_777(-308585968, func_1328(3, 0), 14f, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_145, "REV1_BLP_HSO");
	}
}

void func_1914(char[4] cParam0)
{
	bool bVar0;
	switch (iLocal_2018)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_1738);
			fLocal_2019 = (8f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 5f));
			func_2403(1);
			break;
		case 1:
			if ((PED::IS_PED_SHOOTING(Global_35) && (!__LIB_0__::func_75(&uLocal_2020) || __LIB_0__::func_265(&uLocal_2020) > 5f)) && __LIB_8__::func_711(cParam0, "REV1_GRIEF", 0))
			{
				func_2403(4);
			}
			else if ((func_163(0, 1) && !ENTITY::IS_ENTITY_IN_WATER(iLocal_63[0])) && __LIB_0__::func_265(&uLocal_1738) > fLocal_2019)
			{
				bVar0 = __LIB_2__::func_918();
				if (bVar0 && __LIB_8__::func_711(cParam0, "REV1_GROANS", 0))
				{
					func_2403(2);
				}
				else if (!bVar0 && __LIB_8__::func_711(cParam0, "REV1_MUMBLE", 0))
				{
					func_2403(2);
				}
			}
			break;
		case 2:
			if (!__LIB_8__::func_684("REV1_GROANS") && !__LIB_8__::func_684("REV1_MUMBLE"))
			{
				if ((__LIB_0__::func_665(Global_35, iLocal_63[0], 0, 1) < 8f && MISC::GET_RANDOM_INT_IN_RANGE(0, 5) == 0) && __LIB_8__::func_711(cParam0, "REV1_SHUTUP", 0))
				{
					func_2403(3);
				}
				else
				{
					func_2403(0);
				}
			}
			break;
		case 3:
			if (!__LIB_8__::func_684("REV1_SHUTUP"))
			{
				func_2403(0);
			}
			break;
		case 4:
			if (!__LIB_8__::func_684("REV1_GRIEF"))
			{
				__LIB_1__::func_148(&uLocal_2020);
				func_2403(0);
			}
			break;
	}
}

bool func_1915()
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (!func_163(0, 1))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	if (ENTITY::_0x61914209C36EFDDB(iLocal_63[0]) != 7)
	{
		return false;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	iVar1 = PED::_GET_CARRIER_AS_MOUNT(iLocal_63[0]);
	if (!__LIB_0__::func_272(iVar0, 0) || !__LIB_0__::func_272(iVar1, 0))
	{
		return false;
	}
	if (iVar0 != iVar1)
	{
		return false;
	}
	return true;
}

void func_1916(int iParam0)
{
	if (iLocal_2023 != iParam0)
	{
		iLocal_2023 = iParam0;
	}
}

void func_1917(int iParam0)
{
	if (iLocal_2014 != iParam0)
	{
		iLocal_2014 = iParam0;
	}
}

bool func_1919()
{
	return (iLocal_2013 != 0 && func_949(iLocal_2013));
}

bool func_1920(int iParam0)
{
	return (iLocal_2013 && iParam0) == iParam0;
}

void func_1921(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (func_949(iParam0))
	{
		return;
	}
	iVar0 = func_950(iParam0);
	sVar1 = "";
	switch (iParam0)
	{
		case 1:
			sVar1 = "REV1_ENAA";
			break;
		case 2:
			sVar1 = "REV1_EPAA";
			break;
		case 4:
			sVar1 = "REV1_EQAA";
			break;
		case 8:
			sVar1 = "REV1_ERAA";
			break;
		case 16:
			sVar1 = "REV1_ESAA";
			break;
		case 32:
			sVar1 = "REV1_ETAA";
			break;
		case 64:
			sVar1 = "REV1_EUAA";
			break;
		case 128:
			sVar1 = "REV1_EVAA";
			break;
		case 256:
			sVar1 = "REV1_EWAA";
			break;
		case 512:
			sVar1 = "REV1_EXAA";
			break;
		case 1024:
			sVar1 = "REV1_EYAA";
			break;
		case 2048:
			sVar1 = "REV1_EZAA";
			break;
		case 4096:
			sVar1 = "REV1_FBAA";
			break;
		case 8192:
			sVar1 = "REV1_FCAA";
			break;
		case 16384:
			sVar1 = "REV1_FEAA";
			break;
		case 32768:
			sVar1 = "REV1_FGAA";
			break;
		case 65536:
			sVar1 = "REV1_FHAA";
			break;
		case 131072:
			sVar1 = "REV1_EOAA";
			break;
		case 262144:
			sVar1 = "REV1_FDAA";
			break;
	}
	if (iVar0 == -1 || MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	iVar2 = __LIB_0__::func_271(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	PED::_0x8AF46E5159A5B620(iVar2, 996860239);
	PED::_0x20C5459379D75C1C(iVar2, sVar1);
	PED::_0x45FEA6D5539BD474(iVar2, "MissionVerbalReactionResponse");
	func_951(iParam0, 1);
}

void func_1935(char[4] cParam0, int iParam1, int iParam2, char* sParam3)
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
		func_2422(cParam0, iParam1, 383782, 0, sParam3, 67108863, 1023, 3, iParam2);
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

int func_1950(int iParam0, int iParam1)
{
	var uVar0;
	return func_2436(&uVar0, iParam0, iParam1);
}

int func_2060(char[4] cParam0, int iParam1)
{
	int iVar0;
	iVar0 = (4 + iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar0]))
	{
		if (func_380(cParam0, iVar0, __LIB_6__::func_864(cParam0)))
		{
			iLocal_1787[iParam1] = 0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_63[iVar0]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar0]) && PED::_0xA0BC8FAED8CFEB3C(iLocal_63[iVar0]))
	{
		return 1;
	}
	return 0;
}

void func_2062(int iParam0)
{
	if (!func_1545(iParam0))
	{
		return;
	}
	if (iParam0 == 6)
	{
		PATHFIND::_0xB03944057FD735BA(iLocal_108[iParam0], 4, 0);
	}
	else if (iParam0 == 29)
	{
		PED::_0x7C00CFC48A782DC0(iLocal_108[iParam0], Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

int func_2063(char[4] cParam0)
{
	func_1255(cParam0, 14);
	func_1255(cParam0, 15);
	if ((!func_449(43) && __LIB_8__::func_671(cParam0)) && ANIMSCENE::_0x8D81E7824B7753F7(cParam0->f_7375.f_804, "RRVRD_RSC_1_P3A1_T03_Shot_1", 1))
	{
		func_1254(iLocal_63[0], func_499(1, 1), 2, 1073741824 /* Float: 2f */);
		func_450(43, 1);
	}
	func_1256(cParam0);
	func_2529(cParam0);
	func_1884(cParam0);
	if (__LIB_8__::func_671(cParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 560580119))
	{
		func_913(cParam0, 0);
	}
	if (__LIB_8__::func_671(cParam0))
	{
		func_170(0);
	}
	func_1279(cParam0);
	if (func_1258() && !func_1257(cParam0))
	{
		return 0;
	}
	return 1;
}

int func_2064(char[4] cParam0)
{
	func_1279(cParam0);
	return 1;
}

int func_2065(char[4] cParam0)
{
	__LIB_12__::func_786(Global_1835011[cParam0->f_607 /*74*/].f_1);
	if (__LIB_11__::func_13(cParam0, iLocal_63[26], 0, 0, 1, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_63[26], -143.416f, -41.4071f, 94.5071f, 323.7137f, true, false, true);
	}
	if (__LIB_11__::func_13(cParam0, Global_35, 0, 0, 1, 1))
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
	}
	if (__LIB_3__::func_751(6))
	{
		__LIB_10__::func_994(6, 0, 0);
	}
	if (__LIB_3__::func_751(15))
	{
		__LIB_10__::func_994(15, 0, 0);
	}
	return 1;
}

bool func_2066(char[4] cParam0)
{
	func_1884(cParam0);
	func_913(cParam0, 0);
	return func_1266(cParam0);
}

int func_2067(char[4] cParam0)
{
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	return 1;
}

bool func_2075(vector3 vParam0)
{
	return ((vParam0.x != -1 && vParam0.y != -1) && vParam0.z != -1);
}

int func_2076(vector3 vParam0)
{
	if (!func_2075(vParam0))
	{
		return -1;
	}
	return ((vParam0.x * 60 * 60 + vParam0.y * 60) + vParam0.z);
}

void func_2090(char[4] cParam0)
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
							iVar1 = func_2539(128);
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
			func_2540(cParam0);
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

bool func_2243(int iParam0, int iParam1)
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
				if (func_2243(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2243(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2243(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2243(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

int func_2300(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	return func_2664(iVar0, iParam1, iParam2, bParam3, iParam4);
}

bool func_2336(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if ((MISC::GET_FRAME_COUNT() % 10) != 0)
	{
		return iLocal_1833;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
	}
	iVar1 = ENTITY::_0x59B57C4B06531E1E(Global_36, 3f, iVar0, 1);
	iLocal_1833 = 0;
	if (iVar1 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
			{
				iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::IS_ENTITY_A_PED(iVar4))
				{
					iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
					if (iVar5 != Global_35)
					{
						if (!bParam0)
						{
							iLocal_1833 = 1;
							Jump @183; //curOff = 151
						}
						else if (!__LIB_14__::func_246(iVar5))
						{
							iLocal_1833 = 1;
						}
						else
						{
							iVar2++;
						}
						ITEMSET::DESTROY_ITEMSET(iVar0);
						return iLocal_1833;
					}
				}
			}
		}
	}
}

int func_2344(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_5__::func_439(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_9__::func_905(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_13__::func_848(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_2344(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_10__::func_932(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_13__::func_849(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_698(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_10__::func_933(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_849(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_10__::func_932(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
			__LIB_6__::func_699(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_2345(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	__LIB_0__::func_325(&(Local_239[iParam1 /*55*/]));
	if (bParam3)
	{
		TASK::CLEAR_PED_TASKS(iLocal_63[iParam1], true, false);
	}
	if (bParam2)
	{
		func_443(cParam0, iParam1, 1);
	}
}

bool func_2346()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (4 + iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar1]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[iVar1], Global_35, 1, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_2347()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (4 + iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar1]))
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar1], false, false) };
			if (MISC::_0xDC416CA762BC4F43(vVar2, 5f, 1, 1) > 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_2348(int iParam0)
{
	return (iParam0 >= 4 && iParam0 <= 13);
}

bool func_2351()
{
	int iVar0;
	struct<2> Var1;
	int iVar10;
	if (iLocal_1889 != 0)
	{
		return true;
	}
	iVar0 = 0 + 1;
	while (iVar0 <= (21 - 1))
	{
		iVar10 = iVar0;
		func_2727(iVar10, &Var1);
		if (Var1.f_1 == 2)
		{
			if (func_2355(iVar10))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_2352(int iParam0)
{
	iLocal_1889 = iParam0;
}

void func_2353(char[4] cParam0)
{
	struct<8> Var0;
	if (iLocal_1889 == 0)
	{
		return;
	}
	func_2727(iLocal_1889, &Var0);
	if (Var0 != 1 && Var0 != 2)
	{
		iLocal_1889 = 0;
		return;
	}
	if (Var0 == 1)
	{
		if (__LIB_8__::func_711(cParam0, &(Var0.f_2), 0))
		{
			iLocal_1889 = 0;
		}
	}
	else if (Var0 == 2)
	{
		__LIB_11__::func_99(cParam0, &(Var0.f_2), Var0.f_7, 0);
		iLocal_1889 = 0;
	}
}

void func_2354(int iParam0)
{
	if (iLocal_1895 != iParam0)
	{
		iLocal_1895 = iParam0;
	}
}

bool func_2355(int iParam0)
{
	struct<7> Var0;
	func_2727(iParam0, &Var0);
	switch (Var0)
	{
		case 1:
		case 2:
			return __LIB_6__::func_894(&(Var0.f_2));
		case 3:
		case 4:
			return AUDIO::_0x4A98E228A936DBCC(func_2729(Var0.f_1)) == Var0.f_6;
		default:
			break;
	}
	return false;
}

void func_2356(int iParam0, int iParam1)
{
	struct<9> Var0;
	func_2727(iParam0, &Var0);
	if (Var0 != 3 && Var0 != 0)
	{
		return;
	}
	if (!Var0.f_8)
	{
		PLAYER::_0x628E742FE1F79C4A(PLAYER::PLAYER_ID(), -553575591);
	}
	else
	{
		PLAYER::_0x628E742FE1F79C4A(PLAYER::PLAYER_ID(), -1824788778);
	}
	switch (iParam1)
	{
		case 0:
			PLAYER::_0x216BC0D3D2E413D2(PLAYER::PLAYER_ID(), &(Var0.f_4));
			break;
		case 1:
			PLAYER::_0xC6366A585659D15C(PLAYER::PLAYER_ID(), &(Var0.f_4));
			break;
		case 2:
			PLAYER::_0x98CD760DE43B612E(PLAYER::PLAYER_ID(), &(Var0.f_4));
			break;
	}
	if (func_163(18, 1))
	{
		PED::_0x8AF46E5159A5B620(iLocal_63[18], -553575591);
	}
}

void func_2357()
{
	__LIB_5__::func_20(0, 0);
	iLocal_1889 = 0;
}

void func_2358()
{
	__LIB_1__::func_148(&uLocal_1890);
	fLocal_1893 = (6f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f));
}

bool func_2359()
{
	return __LIB_0__::func_264(&uLocal_1890) >= fLocal_1893;
}

int func_2360()
{
	int iVar0;
	iVar0 = (16 - 13) + 1;
	if (iLocal_1894 >= iVar0)
	{
		return 0;
	}
	return iLocal_1894 + 13;
}

void func_2361()
{
	iLocal_1894++;
}

void func_2364(int iParam0)
{
	if (iLocal_1896 != iParam0)
	{
		iLocal_1896 = iParam0;
	}
}

bool func_2375(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	*uParam1 = { 0f, 0f, 0f };
	uParam1->f_3 = 0f;
	*bParam2 = 0;
	*fParam3 = 0f;
	if (iParam0 == iLocal_21 || iParam0 == iLocal_22)
	{
		*uParam1 = { func_1328(4, 4) };
		*fParam3 = 10f;
	}
	else if (iParam0 == iLocal_23)
	{
		*uParam1 = { func_1328(3, 6) };
		*fParam3 = 10f;
	}
	return !__LIB_0__::func_86(*uParam1);
}

bool func_2377()
{
	return iLocal_1856 == 2;
}

bool func_2378()
{
	int iVar0;
	iVar0 = func_2746();
	return (iVar0 >= 301 && iVar0 <= 1140);
}

bool func_2379()
{
	int iVar0;
	iVar0 = func_2746();
	return (iVar0 >= 1141 && iVar0 <= 1170);
}

bool func_2380()
{
	int iVar0;
	iVar0 = func_2746();
	return (iVar0 >= 1171 && iVar0 <= 1215);
}

bool func_2381()
{
	int iVar0;
	iVar0 = func_2746();
	return (iVar0 >= 1216 || iVar0 <= 300);
}

bool func_2390()
{
	if (__LIB_1__::func_530(iLocal_1802, 1) && PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_ACTION_UP")) > 0.8f)
	{
		return true;
	}
	return false;
}

void func_2393(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	if (bParam4 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	iVar1 = Global_1945938[iVar0 /*18*/].f_3;
	if (!HUD::_UIPROMPT_HAS_MANUAL_MASH_MODE(iVar1))
	{
		return;
	}
	HUD::_UIPROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS(iVar1, fParam1);
	HUD::_UIPROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED(iVar1, fParam2);
	HUD::_UIPROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED(iVar1, iParam3);
}

void func_2403(int iParam0)
{
	if (iLocal_2018 != iParam0)
	{
		iLocal_2018 = iParam0;
	}
}

void func_2422(char[4] cParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
			cParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 383782;
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

int func_2436(var uParam0, int iParam1, int iParam2)
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
		return func_2436(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2529(char[4] cParam0)
{
	switch (iLocal_1860)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(cParam0->f_7375.f_804, false) && ANIMSCENE::_0x8D81E7824B7753F7(cParam0->f_7375.f_804, "RRVRD_RSC_1_P1A1_T03_Shot_2", 1))
			{
				__LIB_10__::func_519(&uLocal_1838, "REV1_UC_PLAY", "REV1_UC_DOPL", 0, 2, 9500, 1, -1, -1);
				func_2838(1);
			}
			break;
		case 1:
			if (__LIB_14__::func_242(&uLocal_1838))
			{
				if (__LIB_8__::func_349(&uLocal_1838))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam0->f_7375.f_804, "yes_is", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam0->f_7375.f_804, "loop", true, false);
					__LIB_11__::func_720(&uLocal_1838);
					TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "REV1_UC_PLAY");
					func_2838(2);
				}
				else if (__LIB_8__::func_350(&uLocal_1838))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam0->f_7375.f_804, "yes_is", false, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam0->f_7375.f_804, "loop", true, false);
					__LIB_11__::func_720(&uLocal_1838);
					TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "REV1_UC_DOPL");
					func_2838(4);
				}
				__LIB_8__::func_638(cParam0, 512);
			}
			else if (!ANIMSCENE::_0x8D81E7824B7753F7(cParam0->f_7375.f_804, "RRVRD_RSC_1_P1A1_T03_Shot_2", 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam0->f_7375.f_804, "yes_is", false, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(cParam0->f_7375.f_804, "loop", true, false);
				__LIB_14__::func_240(&uLocal_1838);
				TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "REV1_UC_DOPL");
				__LIB_8__::func_638(cParam0, 512);
				func_2838(5);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x8D81E7824B7753F7(cParam0->f_7375.f_804, "RRVRD_RSC_1_P1A2_T02_Shot_1", 1))
			{
				__LIB_11__::func_720(&uLocal_1838);
				func_2838(3);
			}
			break;
		case 3:
			break;
		case 4:
			if (ANIMSCENE::_0x8D81E7824B7753F7(cParam0->f_7375.f_804, "RRVRD_RSC_1_P1A1_T03_Shot_3", 1))
			{
				__LIB_11__::func_720(&uLocal_1838);
				func_2838(5);
			}
			break;
		case 5:
			break;
	}
}

int func_2539(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1403(&uVar0, iParam0, 0);
	iVar9 = func_2436(&uVar4, iParam0, 0);
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

void func_2540(char[4] cParam0)
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
					iVar2 = func_2539(128);
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
				iVar3 = func_2539(128);
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

int func_2664(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			func_2664(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
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

void func_2727(int iParam0, var uParam1)
{
	*uParam1 = 0;
	uParam1->f_1 = 0;
	StringCopy(&(uParam1->f_2), __LIB_9__::func_230(), 16);
	StringCopy(&(uParam1->f_4), __LIB_9__::func_230(), 16);
	uParam1->f_6 = -1;
	uParam1->f_7 = -1;
	uParam1->f_8 = 0;
	switch (iParam0)
	{
		case 1:
			*uParam1 = 1;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_2), "REV1_WIT_REAC", 16);
			break;
		case 2:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			StringCopy(&(uParam1->f_4), "REV1_FPAA", 16);
			uParam1->f_6 = joaat("REV1_FPAA");
			break;
		case 3:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			StringCopy(&(uParam1->f_4), "REV1_FQAA", 16);
			uParam1->f_6 = joaat("REV1_FQAA");
			uParam1->f_8 = 1;
			break;
		case 4:
			*uParam1 = 2;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_2), "REV1_WIT_CHA1", 16);
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			break;
		case 5:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			StringCopy(&(uParam1->f_4), "REV1_HBAA", 16);
			uParam1->f_6 = joaat("REV1_HBAA");
			uParam1->f_8 = 1;
			break;
		case 6:
			*uParam1 = 1;
			uParam1->f_1 = 1;
			StringCopy(&(uParam1->f_2), "REV1_WIT_CHA0", 16);
			break;
		case 7:
			*uParam1 = 1;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_2), "REV1_WIT_SHOT", 16);
			break;
		case 8:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			StringCopy(&(uParam1->f_4), "REV1_FRAA", 16);
			uParam1->f_6 = joaat("REV1_FRAA");
			uParam1->f_8 = 1;
			break;
		case 9:
			*uParam1 = 2;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_2), "REV1_WIT_STOP", 16);
			uParam1->f_7 = 1;
			break;
		case 10:
			*uParam1 = 4;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_4), "REV1_HDAA", 16);
			uParam1->f_6 = joaat("REV1_HDAA");
			break;
		case 11:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			StringCopy(&(uParam1->f_4), "REV1_FSAA", 16);
			uParam1->f_6 = joaat("REV1_FSAA");
			break;
		case 12:
			*uParam1 = 4;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_4), "REV1_FSAB", 16);
			uParam1->f_6 = joaat("REV1_FSAB");
			break;
		case 13:
			*uParam1 = 2;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_2), "REV1_WIT_IDLE2", 16);
			uParam1->f_7 = 0;
			break;
		case 14:
			*uParam1 = 2;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_2), "REV1_WIT_IDLE2", 16);
			uParam1->f_7 = 1;
			break;
		case 15:
			*uParam1 = 2;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_2), "REV1_WIT_IDLE2", 16);
			uParam1->f_7 = 2;
			break;
		case 16:
			*uParam1 = 2;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_2), "REV1_WIT_IDLE2", 16);
			uParam1->f_7 = 3;
			break;
		case 17:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			StringCopy(&(uParam1->f_4), "REV1_HHAA", 16);
			uParam1->f_6 = joaat("REV1_HHAA");
			break;
		case 18:
			*uParam1 = 4;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_4), "REV1_HHAB", 16);
			uParam1->f_6 = joaat("REV1_HHAB");
			break;
		case 19:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			StringCopy(&(uParam1->f_4), "REV1_FTAA", 16);
			uParam1->f_6 = joaat("REV1_FTAA");
			break;
		case 20:
			*uParam1 = 4;
			uParam1->f_1 = 2;
			StringCopy(&(uParam1->f_4), "REV1_HFAA", 16);
			uParam1->f_6 = joaat("REV1_HFAA");
			break;
	}
}

int func_2729(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_35;
		case 2:
			return iLocal_63[18];
		default:
			break;
	}
	return 0;
}

int func_2746()
{
	return (CLOCK::GET_CLOCK_HOURS() * 60 + CLOCK::GET_CLOCK_MINUTES());
}

void func_2838(int iParam0)
{
	if (iLocal_1860 != iParam0)
	{
		iLocal_1860 = iParam0;
	}
}

